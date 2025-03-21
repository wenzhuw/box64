
#define INIT    uintptr_t sav_addr=addr
#define FINI    \
    dyn->isize = addr-sav_addr;         \
    dyn->insts[ninst].x64.addr = addr;  \
    if(ninst) dyn->insts[ninst-1].x64.size = dyn->insts[ninst].x64.addr - dyn->insts[ninst-1].x64.addr

#define MESSAGE(A, ...)  
#define READFLAGS(A)    \
        dyn->insts[ninst].x64.use_flags = A; dyn->f.dfnone = 1;\
        dyn->f.pending=SF_SET
#define SETFLAGS(A,B)   \
        dyn->insts[ninst].x64.set_flags = A;            \
        if(B!=SF_MAYSET) {                              \
                dyn->insts[ninst].x64.state_flags = B;  \
                dyn->f.pending=(B)&SF_SET_PENDING;      \
                dyn->f.dfnone=((B)&SF_SET)?1:0;         \
        }
#define EMIT(A)     
#define JUMP(A, C)         add_next(dyn, (uintptr_t)A); dyn->insts[ninst].x64.jmp = A; dyn->insts[ninst].x64.jmp_cond = C
#define BARRIER(A)      if(A!=BARRIER_MAYBE) {fpu_purgecache(dyn, ninst, 0, x1, x2, x3); dyn->insts[ninst].x64.barrier = A;} else dyn->insts[ninst].barrier_maybe = 1
#define BARRIER_NEXT(A) dyn->insts[ninst+1].x64.barrier = A
#define NEW_INST \
        ++dyn->size;                            \
        if(dyn->size+3>=dyn->cap) {             \
                dyn->insts = (instruction_native_t*)box_realloc(dyn->insts, sizeof(instruction_native_t)*dyn->cap*2);\
                memset(&dyn->insts[dyn->cap], 0, sizeof(instruction_native_t)*dyn->cap);   \
                dyn->cap *= 2;                  \
        }                                       \
        dyn->insts[ninst].x64.addr = ip;        \
        dyn->n.combined1 = dyn->n.combined2 = 0;\
        dyn->n.swapped = 0; dyn->n.barrier = 0; \
        dyn->insts[ninst].f_entry = dyn->f;     \
        if(ninst) {dyn->insts[ninst-1].x64.size = dyn->insts[ninst].x64.addr - dyn->insts[ninst-1].x64.addr;}

#define INST_EPILOG                             \
        dyn->insts[ninst].f_exit = dyn->f;      \
        dyn->insts[ninst].n = dyn->n;           \
        dyn->insts[ninst].x64.has_next = (ok>0)?1:0;
#define INST_NAME(name) 
#define DEFAULT                         \
        --dyn->size;                    \
        *ok = -1;                       \
        if(box64_dynarec_log>=LOG_INFO) {\
        dynarec_log(LOG_NONE, "%p: Dynarec stopped because of Opcode %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X", \
        (void*)ip, PKip(0),             \
        PKip(1), PKip(2), PKip(3),      \
        PKip(4), PKip(5), PKip(6),      \
        PKip(7), PKip(8), PKip(9),      \
        PKip(10),PKip(11),PKip(12),     \
        PKip(13),PKip(14));             \
        printFunctionAddr(ip, " => ");  \
        dynarec_log(LOG_NONE, "\n");    \
        }
