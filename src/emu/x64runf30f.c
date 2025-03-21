#define _GNU_SOURCE
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

#include "debug.h"
#include "box64stack.h"
#include "x64emu.h"
#include "x64run.h"
#include "x64emu_private.h"
#include "x64run_private.h"
#include "x64primop.h"
#include "x64trace.h"
#include "x87emu_private.h"
#include "box64context.h"
#include "bridge.h"

#include "modrm.h"

uintptr_t RunF30F(x64emu_t *emu, rex_t rex, uintptr_t addr)
{
    uint8_t opcode;
    uint8_t nextop;
    int8_t tmp8s;
    uint8_t tmp8u;
    uint32_t tmp32u;
    uint64_t tmp64u;
    reg64_t *oped, *opgd;
    sse_regs_t *opex, *opgx, eax1;
    mmx87_regs_t *opem;

    opcode = F8;

    switch(opcode) {

    case 0x10:  /* MOVSS Gx Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->ud[0] = EX->ud[0];
        if(!MODREG) {
            // EX is not a register (reg to reg only move 31:0)
            GX->ud[1] = GX->ud[2] = GX->ud[3] = 0;
        }
        break;
    case 0x11:  /* MOVSS Ex Gx */
        nextop = F8;
        GETEX(0);
        GETGX;
        EX->ud[0] = GX->ud[0];
        break;
    case 0x12:  /* MOVSLDUP Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->ud[1] = GX->ud[0] = EX->ud[0];
        GX->ud[3] = GX->ud[2] = EX->ud[2];
        break;
    
    case 0x16:  /* MOVSHDUP Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->ud[1] = GX->ud[0] = EX->ud[1];
        GX->ud[3] = GX->ud[2] = EX->ud[3];
        break;

    case 0x1E:  /* ENDBR64 */
        nextop = F8;
        GETED(0);
        break;

    case 0x2A:  /* CVTSI2SS Gx, Ed */
        nextop = F8;
        GETED(0);
        GETGX;
        if(rex.w)
            GX->f[0] = ED->sq[0];
        else
            GX->f[0] = ED->sdword[0];
        break;

    case 0x2C:  /* CVTTSS2SI Gd, Ex */
        nextop = F8;
        GETEX(0);
        GETGD;
        if (rex.w)
            GD->sq[0] = EX->f[0];
        else {
            GD->sdword[0] = EX->f[0];
            GD->dword[1] = 0;
        }
        break;
    case 0x2D:  /* CVTSS2SI Gd, Ex */
        nextop = F8;
        GETEX(0);
        GETGD;
        if(rex.w) {
            switch((emu->mxcsr>>13)&3) {
                case ROUND_Nearest:
                    GD->sq[0] = floorf(EX->f[0]+0.5f);
                    break;
                case ROUND_Down:
                    GD->sq[0] = floorf(EX->f[0]);
                    break;
                case ROUND_Up:
                    GD->sq[0] = ceilf(EX->f[0]);
                    break;
                case ROUND_Chop:
                    GD->sq[0] = EX->f[0];
                    break;
            }
        } else {
            switch((emu->mxcsr>>13)&3) {
                case ROUND_Nearest:
                    GD->sdword[0] = floorf(EX->f[0]+0.5f);
                    break;
                case ROUND_Down:
                    GD->sdword[0] = floorf(EX->f[0]);
                    break;
                case ROUND_Up:
                    GD->sdword[0] = ceilf(EX->f[0]);
                    break;
                case ROUND_Chop:
                    GD->sdword[0] = EX->f[0];
                    break;
            }
            GD->dword[1] = 0;
        }
        break;

    case 0x51:  /* SQRTSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->f[0] = sqrtf(EX->f[0]);
        break;
    case 0x52:  /* RSQRTSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->f[0] = 1.0f/sqrtf(EX->f[0]);
        break;
    case 0x53:  /* RCPSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->f[0] = 1.0f/EX->f[0];
        break;

    case 0x58:  /* ADDSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->f[0] += EX->f[0];
        break;
    case 0x59:  /* MULSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->f[0] *= EX->f[0];
        break;
    case 0x5A:  /* CVTSS2SD Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->d[0] = EX->f[0];
        break;
    case 0x5B:  /* CVTTPS2DQ Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->sd[0] = EX->f[0];
        GX->sd[1] = EX->f[1];
        GX->sd[2] = EX->f[2];
        GX->sd[3] = EX->f[3];
        break;
    case 0x5C:  /* SUBSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->f[0] -= EX->f[0];
        break;
    case 0x5D:  /* MINSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        if(isnan(GX->f[0]) || isnan(EX->f[0]) || isless(EX->f[0], GX->f[0]))
            GX->f[0] = EX->f[0];
        break;
    case 0x5E:  /* DIVSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->f[0] /= EX->f[0];
        break;
    case 0x5F:  /* MAXSS Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        if (isnan(GX->f[0]) || isnan(EX->f[0]) || isgreater(EX->f[0], GX->f[0]))
            GX->f[0] = EX->f[0];
        break;

    case 0x6F:  /* MOVDQU Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        memcpy(GX, EX, 16);    // unaligned...
        break;
    case 0x70:  /* PSHUFHW Gx, Ex, Ib */
        nextop = F8;
        GETEX(1);
        GETGX;
        tmp8u = F8;
        if(GX==EX) {
            for (int i=0; i<4; ++i)
                eax1.uw[4+i] = EX->uw[4+((tmp8u>>(i*2))&3)];
            GX->q[1] = eax1.q[1];
        } else {
            for (int i=0; i<4; ++i)
                GX->uw[4+i] = EX->uw[4+((tmp8u>>(i*2))&3)];
            GX->q[0] = EX->q[0];
        }
        break;

    case 0x7E:  /* MOVQ Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->q[0] = EX->q[0];
        GX->q[1] = 0;
        break;
    case 0x7F:  /* MOVDQU Ex, Gx */
        nextop = F8;
        GETEX(0);
        GETGX;
        memcpy(EX, GX, 16);    // unaligned...
        break;

    case 0xB8:  /* POPCNT Gd,Ed */
        nextop = F8;
        GETED(0);
        GETGD;
        if(rex.w)
            GD->q[0] = __builtin_popcountl(ED->q[0]);
        else
            GD->q[0] = __builtin_popcount(ED->dword[0]);
        RESET_FLAGS(emu);
        CLEAR_FLAG(F_OF);
        CLEAR_FLAG(F_SF);
        CLEAR_FLAG(F_ZF);
        CLEAR_FLAG(F_AF);
        CLEAR_FLAG(F_CF);
        CLEAR_FLAG(F_PF);
        CONDITIONAL_SET_FLAG(GD->q[0]==0, F_ZF);
        break;

    case 0xBC:  /* TZCNT Ed,Gd */
        CHECK_FLAGS(emu);
        nextop = F8;
        GETED(0);
        GETGD;
        if(rex.w) {
            tmp64u = ED->q[0];
            if(tmp64u) {
                CLEAR_FLAG(F_ZF);
                tmp8u = 0;
                while(!(tmp64u&(1LL<<tmp8u))) ++tmp8u;
                GD->q[0] = tmp8u;
                CONDITIONAL_SET_FLAG(tmp8u==0, F_ZF);
                CLEAR_FLAG(F_CF);
            } else {
                CLEAR_FLAG(F_ZF);
                SET_FLAG(F_CF);
                GD->q[0] = 64;
            }
        } else {
            tmp32u = ED->dword[0];
            if(tmp32u) {
                CLEAR_FLAG(F_ZF);
                tmp8u = 0;
                while(!(tmp32u&(1<<tmp8u))) ++tmp8u;
                GD->dword[0] = tmp8u;
                CONDITIONAL_SET_FLAG(tmp8u==0, F_ZF);
                CLEAR_FLAG(F_CF);
            } else {
                CLEAR_FLAG(F_ZF);
                SET_FLAG(F_CF);
                GD->dword[0] = 32;
            }
        }
        break;
    case 0xBD:  /* LZCNT Ed,Gd */
        CHECK_FLAGS(emu);
        nextop = F8;
        GETED(0);
        GETGD;
        if(rex.w) {
            tmp64u = ED->q[0];
            tmp8u = (tmp64u)?__builtin_clzl(tmp64u):64;
            CONDITIONAL_SET_FLAG(tmp8u==0, F_ZF);
            CONDITIONAL_SET_FLAG(tmp8u==64, F_CF);
        } else {
            tmp32u = ED->dword[0];
            tmp8u = (tmp32u)?__builtin_clz(tmp32u):32;
            CONDITIONAL_SET_FLAG(tmp8u==0, F_ZF);
            CONDITIONAL_SET_FLAG(tmp8u==32, F_CF);
        }
        GD->q[0] = tmp8u;
        break;

    case 0xC2:  /* CMPSS Gx, Ex, Ib */
        nextop = F8;
        GETEX(1);
        GETGX;
        tmp8u = F8;
        tmp8s = 0;
        switch(tmp8u&7) {
            case 0: tmp8s=(GX->f[0] == EX->f[0]); break;
            case 1: tmp8s=isless(GX->f[0], EX->f[0]) && !(isnan(GX->f[0]) || isnan(EX->f[0])); break;
            case 2: tmp8s=islessequal(GX->f[0], EX->f[0]) && !(isnan(GX->f[0]) || isnan(EX->f[0])); break;
            case 3: tmp8s=isnan(GX->f[0]) || isnan(EX->f[0]); break;
            case 4: tmp8s=isnan(GX->f[0]) || isnan(EX->f[0]) || (GX->f[0] != EX->f[0]); break;
            case 5: tmp8s=isnan(GX->f[0]) || isnan(EX->f[0]) || isgreaterequal(GX->f[0], EX->f[0]); break;
            case 6: tmp8s=isnan(GX->f[0]) || isnan(EX->f[0]) || isgreater(GX->f[0], EX->f[0]); break;
            case 7: tmp8s=!isnan(GX->f[0]) && !isnan(EX->f[0]); break;
        }
        GX->ud[0]=(tmp8s)?0xffffffff:0;
        break;

    case 0xD6:  /* MOVQ2DQ Gx, Em */
        nextop = F8;
        GETEM(0);
        GETGX;
        GX->q[0] = EM->q;
        GX->q[1] = 0;
        break;

    case 0xE6:  /* CVTDQ2PD Gx, Ex */
        nextop = F8;
        GETEX(0);
        GETGX;
        GX->d[1] = EX->sd[1];
        GX->d[0] = EX->sd[0];
        break;

    default:
        return 0;
    }
    return addr;
}
