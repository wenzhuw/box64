#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GO(a2d_ASN1_OBJECT, 
//GO(a2i_ASN1_ENUMERATED, 
//GO(a2i_ASN1_INTEGER, 
//GO(a2i_ASN1_STRING, 
//GO(a2i_GENERAL_NAME, 
//GO(a2i_ipadd, 
//GO(a2i_IPADDRESS, 
//GO(a2i_IPADDRESS_NC, 
//GO(ACCESS_DESCRIPTION_free, 
//GO(ACCESS_DESCRIPTION_new, 
GO(AES_bi_ige_encrypt, vFppLpppi)
GO(AES_cbc_encrypt, vFppLppi)
GO(AES_cfb128_encrypt, vFppLpppi)
GO(AES_cfb1_encrypt, vFppLpppi)
GO(AES_cfb8_encrypt, vFppLpppi)
GO(AES_ctr128_encrypt, vFppLpppp)
GO(AES_decrypt, vFppp)
GO(AES_ecb_encrypt, vFpppi)
GO(AES_encrypt, vFppp)
GO(AES_ige_encrypt, cFppLppi)
GO(AES_ofb128_encrypt, vFppLppp)
//GO(AES_options, 
GO(AES_set_decrypt_key, iFpip)
//GO(AES_set_enc2dec_key, 
GO(AES_set_encrypt_key, iFpip)
GO(AES_unwrap_key, iFppppi)
//GO(aes_v8_cbc_encrypt, 
//GO(aes_v8_ctr32_encrypt_blocks, 
//GO(aes_v8_decrypt, 
//GO(aes_v8_encrypt, 
//GO(aes_v8_set_decrypt_key, 
//GO(aes_v8_set_encrypt_key, 
GO(AES_wrap_key, iFppppi)
//GO(_armv7_neon_probe, 
//GO(_armv7_tick, 
//GO(_armv8_aes_probe, 
//GO(_armv8_pmull_probe, 
//GO(_armv8_sha1_probe, 
//GO(_armv8_sha256_probe, 
//GO(asn1_add_error, 
//GO(ASN1_add_oid_module, 
//GO(ASN1_BIT_STRING_check, 
//GO(ASN1_BIT_STRING_free, 
//GO(ASN1_BIT_STRING_get_bit, 
//GO(ASN1_BIT_STRING_name_print, 
//GO(ASN1_BIT_STRING_new, 
//GO(ASN1_BIT_STRING_num_asc, 
//GO(ASN1_BIT_STRING_set, 
//GO(ASN1_BIT_STRING_set_asc, 
//GO(ASN1_BIT_STRING_set_bit, 
//GO(ASN1_BMPSTRING_free, 
//GO(ASN1_BMPSTRING_new, 
//GO(ASN1_bn_print, 
//GO(ASN1_check_infinite_end, 
//GO(ASN1_const_check_infinite_end, 
//GO(asn1_const_Finish, 
//GO(ASN1_d2i_bio, 
//GO(ASN1_d2i_fp, 
//GO(ASN1_digest, 
//GO(asn1_do_adb, 
//GO(asn1_do_lock, 
//GO(ASN1_dup, 
//GO(asn1_enc_free, 
//GO(asn1_enc_init, 
//GO(asn1_enc_restore, 
//GO(asn1_enc_save, 
//GO(ASN1_ENUMERATED_free, 
GO(ASN1_ENUMERATED_get, lFp)
//GO(ASN1_ENUMERATED_new, 
GO(ASN1_ENUMERATED_set, iFpl)
GO(ASN1_ENUMERATED_to_BN, pFpp)
//GO(asn1_ex_c2i, 
//GO(asn1_ex_i2c, 
//GO(asn1_Finish, 
//GO(ASN1_GENERALIZEDTIME_adj, 
//GO(ASN1_GENERALIZEDTIME_check, 
//GO(ASN1_GENERALIZEDTIME_free, 
//GO(ASN1_GENERALIZEDTIME_new, 
//GO(ASN1_GENERALIZEDTIME_print, 
//GO(ASN1_GENERALIZEDTIME_set, 
//GO(ASN1_GENERALIZEDTIME_set_string, 
//GO(asn1_generalizedtime_to_tm, 
//GO(ASN1_GENERALSTRING_free, 
//GO(ASN1_GENERALSTRING_new, 
//GO(ASN1_generate_nconf, 
//GO(ASN1_generate_v3, 
//GO(asn1_get_choice_selector, 
//GO(asn1_get_field_ptr, 
//GO(ASN1_get_object, 
//GO(asn1_GetSequence, 
//GO(ASN1_i2d_bio, 
//GO(ASN1_i2d_fp, 
//GO(ASN1_IA5STRING_free, 
//GO(ASN1_IA5STRING_new, 
//GO(ASN1_INTEGER_cmp, 
//GO(ASN1_INTEGER_dup, 
//GO(ASN1_INTEGER_free, 
GO(ASN1_INTEGER_get, lFp)
//GO(ASN1_INTEGER_new, 
GO(ASN1_INTEGER_set, iFpl)
GO(ASN1_INTEGER_to_BN, pFpp)
//GO(ASN1_item_d2i, 
//GO(ASN1_item_d2i_bio, 
//GO(ASN1_item_d2i_fp, 
//GO(ASN1_item_digest, 
//GO(ASN1_item_dup, 
//GO(ASN1_item_ex_d2i, 
//GO(ASN1_item_ex_free, 
//GO(ASN1_item_ex_i2d, 
//GO(ASN1_item_ex_new, 
//GO(ASN1_item_free, 
//GO(ASN1_item_i2d, 
//GO(ASN1_item_i2d_bio, 
//GO(ASN1_item_i2d_fp, 
//GO(ASN1_item_ndef_i2d, 
//GO(ASN1_item_new, 
//GO(ASN1_item_pack, 
//GO(ASN1_item_print, 
//GO(ASN1_item_sign, 
//GO(ASN1_item_sign_ctx, 
//GO(ASN1_item_unpack, 
//GO(ASN1_item_verify, 
//GO(ASN1_mbstring_copy, 
//GO(ASN1_mbstring_ncopy, 
//GO(ASN1_NULL_free, 
//GO(ASN1_NULL_new, 
//GO(ASN1_OBJECT_create, 
//GO(ASN1_OBJECT_free, 
//GO(ASN1_OBJECT_new, 
//GO(ASN1_object_size, 
//GO(ASN1_OCTET_STRING_cmp, 
//GO(ASN1_OCTET_STRING_dup, 
//GO(ASN1_OCTET_STRING_free, 
//GO(ASN1_OCTET_STRING_new, 
//GO(ASN1_OCTET_STRING_set, 
//GO(ASN1_pack_string, 
//GO(ASN1_parse, 
//GO(ASN1_parse_dump, 
//GO(ASN1_PCTX_free, 
//GO(ASN1_PCTX_get_cert_flags, 
//GO(ASN1_PCTX_get_flags, 
//GO(ASN1_PCTX_get_nm_flags, 
//GO(ASN1_PCTX_get_oid_flags, 
//GO(ASN1_PCTX_get_str_flags, 
//GO(ASN1_PCTX_new, 
//GO(ASN1_PCTX_set_cert_flags, 
//GO(ASN1_PCTX_set_flags, 
//GO(ASN1_PCTX_set_nm_flags, 
//GO(ASN1_PCTX_set_oid_flags, 
//GO(ASN1_PCTX_set_str_flags, 
//GO(ASN1_primitive_free, 
//GO(ASN1_primitive_new, 
//GO(ASN1_PRINTABLE_free, 
//GO(ASN1_PRINTABLE_new, 
//GO(ASN1_PRINTABLESTRING_free, 
//GO(ASN1_PRINTABLESTRING_new, 
//GO(ASN1_PRINTABLE_type, 
//GO(ASN1_put_eoc, 
//GO(ASN1_put_object, 
//GO(ASN1_seq_pack, 
//GO(ASN1_seq_unpack, 
//GO(asn1_set_choice_selector, 
//GO(ASN1_sign, 
//GO(ASN1_STRING_clear_free, 
GO(ASN1_STRING_cmp, iFpp)
//GO(ASN1_STRING_copy, 
GO(ASN1_STRING_data, pFp)
GO(ASN1_STRING_dup, pFp)
//GO(ASN1_STRING_free, 
//GO(ASN1_STRING_get_default_mask, 
GO(ASN1_STRING_length, iFp)
//GO(ASN1_STRING_length_set, 
//GO(ASN1_STRING_new, 
GO(ASN1_STRING_print, iFpp)
GO(ASN1_STRING_print_ex, iFppu)
GO(ASN1_STRING_print_ex_fp, iFppu)
GO(ASN1_STRING_set, iFppi)
//GO(ASN1_STRING_set0, 
//GO(ASN1_STRING_set_by_NID, 
//GO(ASN1_STRING_set_default_mask, 
//GO(ASN1_STRING_set_default_mask_asc, 
//GO(ASN1_STRING_TABLE_add, 
//GO(ASN1_STRING_TABLE_cleanup, 
//GO(ASN1_STRING_TABLE_get, 
GO(ASN1_STRING_to_UTF8, iFpp)
GO(ASN1_STRING_type, iFp)
//GO(ASN1_STRING_type_new, 
//GO(ASN1_T61STRING_free, 
//GO(ASN1_T61STRING_new, 
//GO(ASN1_tag2bit, 
//GO(ASN1_tag2str, 
//GO(ASN1_template_d2i, 
//GO(ASN1_template_free, 
//GO(ASN1_template_i2d, 
//GO(ASN1_template_new, 
//GO(asn1_template_print_ctx, 
//GO(ASN1_TIME_adj, 
//GO(ASN1_TIME_check, 
//GO(ASN1_TIME_diff, 
//GO(ASN1_TIME_free, 
//GO(ASN1_TIME_new, 
//GO(ASN1_TIME_print, 
//GO(ASN1_TIME_set, 
//GO(ASN1_TIME_set_string, 
//GO(ASN1_TIME_to_generalizedtime, 
//GO(ASN1_TYPE_cmp, 
//GO(ASN1_TYPE_free, 
//GO(ASN1_TYPE_get, 
//GO(ASN1_TYPE_get_int_octetstring, 
//GO(ASN1_TYPE_get_octetstring, 
//GO(ASN1_TYPE_new, 
//GO(ASN1_TYPE_set, 
//GO(ASN1_TYPE_set1, 
//GO(ASN1_TYPE_set_int_octetstring, 
//GO(ASN1_TYPE_set_octetstring, 
//GO(ASN1_UNIVERSALSTRING_free, 
//GO(ASN1_UNIVERSALSTRING_new, 
//GO(ASN1_UNIVERSALSTRING_to_string, 
//GO(ASN1_unpack_string, 
//GO(ASN1_UTCTIME_adj, 
//GO(ASN1_UTCTIME_check, 
//GO(ASN1_UTCTIME_cmp_time_t, 
//GO(ASN1_UTCTIME_free, 
//GO(ASN1_UTCTIME_new, 
//GO(ASN1_UTCTIME_print, 
//GO(ASN1_UTCTIME_set, 
//GO(ASN1_UTCTIME_set_string, 
//GO(asn1_utctime_to_tm, 
//GO(ASN1_UTF8STRING_free, 
//GO(ASN1_UTF8STRING_new, 
//GO(ASN1_verify, 
//GO(ASN1_VISIBLESTRING_free, 
//GO(ASN1_VISIBLESTRING_new, 
//GO(AUTHORITY_INFO_ACCESS_free, 
//GO(AUTHORITY_INFO_ACCESS_new, 
GO(AUTHORITY_KEYID_free, vFp)
GO(AUTHORITY_KEYID_new, pFv)
//GO(b2i_PrivateKey, 
//GO(b2i_PrivateKey_bio, 
//GO(b2i_PublicKey, 
//GO(b2i_PublicKey_bio, 
//GO(b2i_PVK_bio, 
GO(BASIC_CONSTRAINTS_free, vFp)
GO(BASIC_CONSTRAINTS_new, pFv)
//GO(BF_cbc_encrypt, 
//GO(BF_cfb64_encrypt, 
//GO(BF_decrypt, 
//GO(BF_ecb_encrypt, 
//GO(BF_encrypt, 
//GO(BF_ofb64_encrypt, 
//GO(BF_options, 
//GO(BF_set_key, 
//GO(BIO_accept, 
//GO(BIO_asn1_get_prefix, 
//GO(BIO_asn1_get_suffix, 
//GO(BIO_asn1_set_prefix, 
//GO(BIO_asn1_set_suffix, 
//GO(BIO_callback_ctrl, 
//GO(BIO_clear_flags, 
//GO(BIO_CONNECT_free, 
//GO(BIO_CONNECT_new, 
//GO(BIO_copy_next_retry, 
GO(BIO_ctrl, lFpilp)
//GO(BIO_ctrl_get_read_request, 
//GO(BIO_ctrl_get_write_guarantee, 
GO(BIO_ctrl_pending, LFp)
//GO(BIO_ctrl_reset_read_request, 
GO(BIO_ctrl_wpending, LFp)
//GO(BIO_debug_callback, 
//GO(BIO_dgram_non_fatal_error, 
//GO(BIO_dump, 
//GO(BIO_dump_cb, 
//GO(BIO_dump_fp, 
//GO(BIO_dump_indent, 
//GO(BIO_dump_indent_cb, 
//GO(BIO_dump_indent_fp, 
//GO(BIO_dup_chain, 
GO(BIO_eof, iFp)
//GO(BIO_f_asn1, 
//GO(BIO_f_base64, 
//GO(BIO_f_buffer, 
//GO(BIO_f_cipher, 
//GO(BIO_fd_non_fatal_error, 
//GO(BIO_fd_should_retry, 
GO(BIO_flush, iFp)
//GO(BIO_find_type, 
//GO(BIO_f_md, 
//GO(BIO_f_nbio_test, 
//GO(BIO_f_null, 
GO(BIO_free, iFp)
GO(BIO_free_all, vFp)
//GO(BIO_f_reliable, 
//GO(BIO_f_zlib, 
//GO(BIO_get_accept_socket, 
//GO(BIO_get_callback, 
//GO(BIO_get_callback_arg, 
GO(BIO_get_close, iFp)
//GO(BIO_get_ex_data, 
//GO(BIO_get_ex_new_index, 
//GO(BIO_gethostbyname, 
//GO(BIO_get_host_ip, 
//GO(BIO_get_port, 
//GO(BIO_get_retry_BIO, 
//GO(BIO_get_retry_reason, 
GO(BIO_gets, iFppi)
//GO(BIO_hex_string, 
//GO(BIO_indent, 
GO(BIO_int_ctrl, lFpili)
//GO(BIO_method_name, 
//GO(BIO_method_type, 
GO(BIO_new, pFp)
//GO(BIO_new_accept, 
GO(BIO_new_bio_pair, iFpLpL)
//GO(BIO_new_CMS, 
//GO(BIO_new_connect, 
//GO(BIO_new_dgram, 
//GO(BIO_new_fd, 
//GO(BIO_new_file, 
//GO(BIO_new_fp, 
GO(BIO_new_mem_buf, pFpi)
//GO(BIO_new_NDEF, 
//GO(BIO_new_PKCS7, 
//GO(BIO_new_socket, 
//GO(BIO_next, 
//GO(BIO_nread, 
//GO(BIO_nread0, 
//GO(BIO_number_read, 
//GO(BIO_number_written, 
//GO(BIO_nwrite, 
//GO(BIO_nwrite0, 
GO(BIO_pending, iFp)
//GO(BIO_pop, 
//GO(BIO_printf, 
GO(BIO_ptr_ctrl, pFpil)
//GO(BIO_push, 
GO(BIO_puts, iFpp)
GO(BIO_read, iFppi)
GO(BIO_reset, iFp)
//GO(BIO_s_accept, 
//GO(BIO_s_bio, 
//GO(BIO_s_connect, 
//GO(BIO_s_datagram, 
GO(BIO_seek, iFpi)
GO(BIO_set, iFpp)
//GO(BIO_set_callback, 
//GO(BIO_set_callback_arg, 
GO(BIO_set_close, iFpl)
//GO(BIO_set_cipher, 
//GO(BIO_set_ex_data, 
//GO(BIO_set_flags, 
//GO(BIO_set_tcp_ndelay, 
//GO(BIO_s_fd, 
//GO(BIO_s_file, 
//GO(BIO_s_log, 
GO(BIO_s_mem, pFv)
//GO(BIO_snprintf, 
//GO(BIO_s_null, 
//GO(BIO_sock_cleanup, 
//GO(BIO_sock_error, 
//GO(BIO_socket_ioctl, 
//GO(BIO_socket_nbio, 
//GO(BIO_sock_init, 
//GO(BIO_sock_non_fatal_error, 
//GO(BIO_sock_should_retry, 
//GO(BIO_s_socket, 
GO(BIO_tell, iFp)
//GO(BIO_test_flags, 
GO(BIO_vfree, vFp)
//GO(BIO_vprintf, 
//GO(BIO_vsnprintf, 
GO(BIO_wpending, iFp)
GO(BIO_write, iFppi)
GO(BN_add, iFppp)
//GO(bn_add_part_words, 
GO(BN_add_word, iFpu)
//GO(bn_add_words, 
//GO(BN_asc2bn, 
GO(BN_bin2bn, pFpip)
//GO(BN_BLINDING_convert, 
//GO(BN_BLINDING_convert_ex, 
//GO(BN_BLINDING_create_param, 
//GO(BN_BLINDING_free, 
//GO(BN_BLINDING_get_flags, 
//GO(BN_BLINDING_get_thread_id, 
//GO(BN_BLINDING_invert, 
//GO(BN_BLINDING_invert_ex, 
//GO(BN_BLINDING_new, 
//GO(BN_BLINDING_set_flags, 
//GO(BN_BLINDING_set_thread_id, 
//GO(BN_BLINDING_thread_id, 
//GO(BN_BLINDING_update, 
GO(BN_bn2bin, iFpp)
GO(BN_bn2dec, pFp)
GO(BN_bn2hex, pFp)
GO(BN_bn2mpi, iFpp)
//GO(BN_bntest_rand, 
GO(BN_clear, vFp)
GO(BN_clear_bit, iFpi)
GO(BN_clear_free, vFp)
GO(BN_cmp, iFpp)
//GO(bn_cmp_part_words, 
//GO(bn_cmp_words, 
//GO(BN_consttime_swap, 
GO(BN_copy, pFpp)
//GO(BN_CTX_end, 
GO(BN_CTX_free, vFp)
//GO(BN_CTX_get, 
GO(BN_CTX_init, vFp)
GO(BN_CTX_new, pFv)
//GO(BN_CTX_start, 
GO(BN_dec2bn, iFpp)
GO(BN_div, iFppppp)
//GO(BN_div_recp, 
GO(BN_div_word, uFpu)
//GO(bn_div_words, 
GO(BN_dup, pFp)
//GO(bn_dup_expand, 
GO(BN_exp, iFpppp)
//GO(bn_expand2, 
GO(BN_free, vFp)
//GO(BN_from_montgomery, 
GO(BN_gcd, iFpppp)
//GO(BN_GENCB_call, 
//GO(BN_generate_prime, pFpiippBp) //callback previous last argument...
//GO(BN_generate_prime_ex, 
//GO(BN_get0_nist_prime_192, 
//GO(BN_get0_nist_prime_224, 
//GO(BN_get0_nist_prime_256, 
//GO(BN_get0_nist_prime_384, 
//GO(BN_get0_nist_prime_521, 
//GO(BN_get_params, 
GO(BN_get_word, uFp)
//GO(BN_GF2m_add, 
//GO(BN_GF2m_arr2poly, 
//GO(BN_GF2m_mod, 
//GO(BN_GF2m_mod_arr, 
//GO(BN_GF2m_mod_div, 
//GO(BN_GF2m_mod_div_arr, 
//GO(BN_GF2m_mod_exp, 
//GO(BN_GF2m_mod_exp_arr, 
//GO(BN_GF2m_mod_inv, 
//GO(BN_GF2m_mod_inv_arr, 
//GO(BN_GF2m_mod_mul, 
//GO(BN_GF2m_mod_mul_arr, 
//GO(BN_GF2m_mod_solve_quad, 
//GO(BN_GF2m_mod_solve_quad_arr, 
//GO(BN_GF2m_mod_sqr, 
//GO(BN_GF2m_mod_sqr_arr, 
//GO(BN_GF2m_mod_sqrt, 
//GO(BN_GF2m_mod_sqrt_arr, 
//GO(bn_GF2m_mul_2x2, 
//GO(BN_GF2m_poly2arr, 
GO(BN_hex2bn, iFpp)
//GO(BN_init, 
GO(BN_is_bit_set, iFpi)
//GO(BN_is_prime, iFpiBpp)  // third argument is a callback
//GO(BN_is_prime_ex, 
//GO(BN_is_prime_fasttest, 
//GO(BN_is_prime_fasttest_ex, 
GO(BN_is_zero, iFp) 
//GO(BN_kronecker, 
GO(BN_lshift, iFppi)
GO(BN_lshift1, iFpp)
GO(BN_mask_bits, iFpi)
GO(BN_mod_add, iFppppp)
//GO(BN_mod_add_quick, 
GO(BN_mod_exp, iFppppp)
//GO(BN_mod_exp2_mont, 
//GO(BN_mod_exp_mont, 
//GO(BN_mod_exp_mont_consttime, 
//GO(BN_mod_exp_mont_word, 
//GO(BN_mod_exp_recp, 
//GO(BN_mod_exp_simple, 
GO(BN_mod_inverse, pFpppp)
//GO(BN_mod_lshift, 
//GO(BN_mod_lshift1, 
//GO(BN_mod_lshift1_quick, 
//GO(BN_mod_lshift_quick, 
GO(BN_mod_mul, iFppppp)
//GO(BN_mod_mul_montgomery, 
//GO(BN_mod_mul_reciprocal, 
GO(BN_mod_sqr, iFpppp)
//GO(BN_mod_sqrt, 
GO(BN_mod_sub, iFppppp)
//GO(BN_mod_sub_quick, 
GO(BN_mod_word, uFpu)
//GO(BN_MONT_CTX_copy, 
//GO(BN_MONT_CTX_free, 
//GO(BN_MONT_CTX_init, 
//GO(BN_MONT_CTX_new, 
//GO(BN_MONT_CTX_set, 
//GO(BN_MONT_CTX_set_locked, 
GO(BN_mpi2bn, pFpip)
GO(BN_mul, iFpppp)
//GO(bn_mul_add_words, 
//GO(bn_mul_comba4, 
//GO(bn_mul_comba8, 
//GO(bn_mul_high, 
//GO(bn_mul_low_normal, 
//GO(bn_mul_low_recursive, 
//GO(bn_mul_mont, 
//GO(bn_mul_normal, 
//GO(bn_mul_part_recursive, 
//GO(bn_mul_recursive, 
GO(BN_mul_word, iFpu)
//GO(bn_mul_words, 
GO(BN_new, pFv)
//GO(BN_nist_mod_192, 
//GO(BN_nist_mod_224, 
//GO(BN_nist_mod_256, 
//GO(BN_nist_mod_384, 
//GO(BN_nist_mod_521, 
GO(BN_nnmod, iFpppp)
GO(BN_num_bits, iFp)
GO(BN_num_bits_word, iFu)
GO(BN_one, iFp)
//GO(BN_options, 
GO(BN_print, iFpp)
GO(BN_print_fp, iFpp)
GO(BN_pseudo_rand, iFpiii)
GO(BN_pseudo_rand_range, iFpp)
GO(BN_rand, iFpiii)
//GO(BN_rand_range, 
//GO(BN_reciprocal, 
//GO(BN_RECP_CTX_free, 
//GO(BN_RECP_CTX_init, 
//GO(BN_RECP_CTX_new, 
//GO(BN_RECP_CTX_set, 
GO(BN_rshift, iFppi)
GO(BN_rshift1, iFpp)
GO(BN_set_bit, iFpi)
GO(BN_set_negative, vFpi)
//GO(BN_set_params, 
GO(BN_set_word, iFpu)
GO(BN_sqr, iFppp)
//GO(bn_sqr_comba4, 
//GO(bn_sqr_comba8, 
//GO(bn_sqr_normal, 
//GO(bn_sqr_recursive, 
//GO(bn_sqr_words, 
GO(BN_sub, iFppp)
//GO(bn_sub_part_words, 
GO(BN_sub_word, iFpu)
//GO(bn_sub_words, 
GO(BN_swap, pFpp)
GO(BN_to_ASN1_ENUMERATED, pFpp)
GO(BN_to_ASN1_INTEGER, pFpp)
//GO(BN_uadd, 
GO(BN_ucmp, iFpp)
//GO(BN_usub, 
GO(BN_value_one, pFv)
//GO(BN_X931_derive_prime_ex, 
//GO(BN_X931_generate_prime_ex, 
//GO(BN_X931_generate_Xpq, 
GO(BN_zero, vFp)
//GO(bsaes_cbc_encrypt, 
//GO(bsaes_ctr32_encrypt_blocks, 
//GO(bsaes_xts_decrypt, 
//GO(bsaes_xts_encrypt, 
//GO(BUF_memdup, 
//GO(BUF_MEM_free, 
//GO(BUF_MEM_grow, 
//GO(BUF_MEM_grow_clean, 
//GO(BUF_MEM_new, 
//GO(BUF_reverse, 
//GO(BUF_strdup, 
//GO(BUF_strlcat, 
//GO(BUF_strlcpy, 
//GO(BUF_strndup, 
//GO(BUF_strnlen, 
//GO(c2i_ASN1_BIT_STRING, 
//GO(c2i_ASN1_INTEGER, 
//GO(c2i_ASN1_OBJECT, 
//GO(Camellia_cbc_encrypt, 
//GO(Camellia_cfb128_encrypt, 
//GO(Camellia_cfb1_encrypt, 
//GO(Camellia_cfb8_encrypt, 
//GO(Camellia_ctr128_encrypt, 
//GO(Camellia_decrypt, 
//GO(Camellia_DecryptBlock, 
//GO(Camellia_DecryptBlock_Rounds, 
//GO(Camellia_ecb_encrypt, 
//GO(Camellia_Ekeygen, 
//GO(Camellia_encrypt, 
//GO(Camellia_EncryptBlock, 
//GO(Camellia_EncryptBlock_Rounds, 
//GO(Camellia_ofb128_encrypt, 
//GO(Camellia_set_key, 
//GO(CAST_cbc_encrypt, 
//GO(CAST_cfb64_encrypt, 
//GO(CAST_decrypt, 
//GO(CAST_ecb_encrypt, 
//GO(CAST_encrypt, 
//GO(CAST_ofb64_encrypt, 
//GO(CAST_set_key, 
//GO(CERTIFICATEPOLICIES_free, 
//GO(CERTIFICATEPOLICIES_new, 
//GO(check_defer, 
//GO(CMAC_CTX_cleanup, 
//GO(CMAC_CTX_copy, 
//GO(CMAC_CTX_free, 
//GO(CMAC_CTX_get0_cipher_ctx, 
//GO(CMAC_CTX_new, 
//GO(CMAC_Final, 
//GO(CMAC_Init, 
//GO(CMAC_resume, 
//GO(CMAC_Update, 
//GO(CMS_add0_cert, 
//GO(CMS_add0_CertificateChoices, 
//GO(CMS_add0_crl, 
//GO(CMS_add0_recipient_key, 
//GO(CMS_add0_recipient_password, 
//GO(CMS_add0_RevocationInfoChoice, 
//GO(CMS_add1_cert, 
//GO(CMS_add1_crl, 
//GO(CMS_add1_ReceiptRequest, 
//GO(CMS_add1_recipient_cert, 
//GO(CMS_add1_signer, 
//GO(CMS_add_simple_smimecap, 
//GO(CMS_add_smimecap, 
//GO(CMS_add_standard_smimecap, 
//GO(CMS_compress, 
//GO(cms_CompressedData_create, 
//GO(cms_CompressedData_init_bio, 
//GO(cms_content_bio, 
//GO(CMS_ContentInfo_free, 
//GO(CMS_ContentInfo_new, 
//GO(CMS_ContentInfo_print_ctx, 
//GO(CMS_data, 
//GO(cms_Data_create, 
//GO(CMS_data_create, 
//GO(CMS_dataFinal, 
//GO(CMS_dataInit, 
//GO(CMS_decrypt, 
//GO(CMS_decrypt_set1_key, 
//GO(CMS_decrypt_set1_password, 
//GO(CMS_decrypt_set1_pkey, 
//GO(cms_DigestAlgorithm_find_ctx, 
//GO(cms_DigestAlgorithm_init_bio, 
//GO(cms_DigestAlgorithm_set, 
//GO(CMS_digest_create, 
//GO(cms_DigestedData_create, 
//GO(cms_DigestedData_do_final, 
//GO(cms_DigestedData_init_bio, 
//GO(CMS_digest_verify, 
//GO(cms_encode_Receipt, 
//GO(CMS_encrypt, 
//GO(cms_EncryptedContent_init, 
//GO(cms_EncryptedContent_init_bio, 
//GO(CMS_EncryptedData_decrypt, 
//GO(CMS_EncryptedData_encrypt, 
//GO(cms_EncryptedData_init_bio, 
//GO(CMS_EncryptedData_set1_key, 
//GO(cms_env_asn1_ctrl, 
//GO(CMS_EnvelopedData_create, 
//GO(cms_EnvelopedData_init_bio, 
//GO(CMS_final, 
//GO(CMS_get0_content, 
//GO(CMS_get0_eContentType, 
//GO(cms_get0_enveloped, 
//GO(CMS_get0_RecipientInfos, 
//GO(CMS_get0_SignerInfos, 
//GO(CMS_get0_signers, 
//GO(CMS_get0_type, 
//GO(CMS_get1_certs, 
//GO(CMS_get1_crls, 
//GO(CMS_get1_ReceiptRequest, 
//GO(cms_ias_cert_cmp, 
//GO(CMS_is_detached, 
//GO(cms_keyid_cert_cmp, 
//GO(cms_msgSigDigest_add1, 
//GO(cms_pkey_get_ri_type, 
//GO(CMS_ReceiptRequest_create0, 
//GO(CMS_ReceiptRequest_free, 
//GO(CMS_ReceiptRequest_get0_values, 
//GO(CMS_ReceiptRequest_new, 
//GO(cms_Receipt_verify, 
//GO(CMS_RecipientEncryptedKey_cert_cmp, 
//GO(CMS_RecipientEncryptedKey_get0_id, 
//GO(CMS_RecipientInfo_decrypt, 
//GO(CMS_RecipientInfo_encrypt, 
//GO(CMS_RecipientInfo_get0_pkey_ctx, 
//GO(CMS_RecipientInfo_kari_decrypt, 
//GO(cms_RecipientInfo_kari_encrypt, 
//GO(CMS_RecipientInfo_kari_get0_alg, 
//GO(CMS_RecipientInfo_kari_get0_ctx, 
//GO(CMS_RecipientInfo_kari_get0_orig_id, 
//GO(CMS_RecipientInfo_kari_get0_reks, 
//GO(cms_RecipientInfo_kari_init, 
//GO(CMS_RecipientInfo_kari_orig_id_cmp, 
//GO(CMS_RecipientInfo_kari_set0_pkey, 
//GO(CMS_RecipientInfo_kekri_get0_id, 
//GO(CMS_RecipientInfo_kekri_id_cmp, 
//GO(CMS_RecipientInfo_ktri_cert_cmp, 
//GO(CMS_RecipientInfo_ktri_get0_algs, 
//GO(CMS_RecipientInfo_ktri_get0_signer_id, 
//GO(cms_RecipientInfo_pwri_crypt, 
//GO(CMS_RecipientInfo_set0_key, 
//GO(CMS_RecipientInfo_set0_password, 
//GO(CMS_RecipientInfo_set0_pkey, 
//GO(CMS_RecipientInfo_type, 
//GO(CMS_set1_eContentType, 
//GO(cms_set1_ias, 
//GO(cms_set1_keyid, 
//GO(cms_set1_SignerIdentifier, 
//GO(CMS_set1_signers_certs, 
//GO(CMS_set_detached, 
//GO(CMS_SharedInfo_encode, 
//GO(CMS_sign, 
//GO(CMS_signed_add1_attr, 
//GO(CMS_signed_add1_attr_by_NID, 
//GO(CMS_signed_add1_attr_by_OBJ, 
//GO(CMS_signed_add1_attr_by_txt, 
//GO(cms_SignedData_final, 
//GO(CMS_SignedData_init, 
//GO(cms_SignedData_init_bio, 
//GO(CMS_signed_delete_attr, 
//GO(CMS_signed_get0_data_by_OBJ, 
//GO(CMS_signed_get_attr, 
//GO(CMS_signed_get_attr_by_NID, 
//GO(CMS_signed_get_attr_by_OBJ, 
//GO(CMS_signed_get_attr_count, 
//GO(cms_SignerIdentifier_cert_cmp, 
//GO(cms_SignerIdentifier_get0_signer_id, 
//GO(CMS_SignerInfo_cert_cmp, 
//GO(CMS_SignerInfo_get0_algs, 
//GO(CMS_SignerInfo_get0_md_ctx, 
//GO(CMS_SignerInfo_get0_pkey_ctx, 
//GO(CMS_SignerInfo_get0_signature, 
//GO(CMS_SignerInfo_get0_signer_id, 
//GO(CMS_SignerInfo_set1_signer_cert, 
//GO(CMS_SignerInfo_sign, 
//GO(CMS_SignerInfo_verify, 
//GO(CMS_SignerInfo_verify_content, 
//GO(CMS_sign_receipt, 
//GO(CMS_stream, 
//GO(CMS_uncompress, 
//GO(CMS_unsigned_add1_attr, 
//GO(CMS_unsigned_add1_attr_by_NID, 
//GO(CMS_unsigned_add1_attr_by_OBJ, 
//GO(CMS_unsigned_add1_attr_by_txt, 
//GO(CMS_unsigned_delete_attr, 
//GO(CMS_unsigned_get0_data_by_OBJ, 
//GO(CMS_unsigned_get_attr, 
//GO(CMS_unsigned_get_attr_by_NID, 
//GO(CMS_unsigned_get_attr_by_OBJ, 
//GO(CMS_unsigned_get_attr_count, 
//GO(CMS_verify, 
//GO(CMS_verify_receipt, 
//GO(COMP_compress_block, 
//GO(COMP_CTX_free, 
//GO(COMP_CTX_new, 
//GO(COMP_expand_block, 
//GO(COMP_rle, 
//GO(COMP_zlib, 
//GO(COMP_zlib_cleanup, 
//GO(_CONF_add_string, 
//GO(CONF_dump_bio, 
//GO(CONF_dump_fp, 
//GO(CONF_free, 
//GO(_CONF_free_data, 
//GO(CONF_get1_default_config_file, 
//GO(CONF_get_number, 
//GO(_CONF_get_section, 
//GO(CONF_get_section, 
//GO(_CONF_get_section_values, 
//GO(_CONF_get_string, 
//GO(CONF_get_string, 
//GO(CONF_imodule_get_flags, 
//GO(CONF_imodule_get_module, 
//GO(CONF_imodule_get_name, 
//GO(CONF_imodule_get_usr_data, 
//GO(CONF_imodule_get_value, 
//GO(CONF_imodule_set_flags, 
//GO(CONF_imodule_set_usr_data, 
//GO(CONF_load, 
//GO(CONF_load_bio, 
//GO(CONF_load_fp, 
//GO(CONF_module_add, 
//GO(CONF_module_get_usr_data, 
//GO(CONF_module_set_usr_data, 
//GO(CONF_modules_finish, 
//GO(CONF_modules_free, 
//GO(CONF_modules_load, 
//GO(CONF_modules_load_file, 
GO(CONF_modules_unload, vFi)
//GO(_CONF_new_data, 
//GO(_CONF_new_section, 
//GO(CONF_parse_list, 
//GO(CONF_set_default_method, 
//GO(CONF_set_nconf, 
//GO(CRL_DIST_POINTS_free, 
//GO(CRL_DIST_POINTS_new, 
//GO(CRYPTO_128_unwrap, 
//GO(CRYPTO_128_wrap, 
//GO(CRYPTO_add_lock, 
//GO(CRYPTO_cbc128_decrypt, 
//GO(CRYPTO_cbc128_encrypt, 
//GO(CRYPTO_ccm128_aad, 
//GO(CRYPTO_ccm128_decrypt, 
//GO(CRYPTO_ccm128_decrypt_ccm64, 
//GO(CRYPTO_ccm128_encrypt, 
//GO(CRYPTO_ccm128_encrypt_ccm64, 
//GO(CRYPTO_ccm128_init, 
//GO(CRYPTO_ccm128_setiv, 
//GO(CRYPTO_ccm128_tag, 
//GO(CRYPTO_cfb128_1_encrypt, 
//GO(CRYPTO_cfb128_8_encrypt, 
//GO(CRYPTO_cfb128_encrypt, 
GO(CRYPTO_cleanup_all_ex_data, vFv)
//GO(CRYPTO_ctr128_encrypt, 
//GO(CRYPTO_ctr128_encrypt_ctr32, 
//GO(CRYPTO_cts128_decrypt, 
//GO(CRYPTO_cts128_decrypt_block, 
//GO(CRYPTO_cts128_encrypt, 
//GO(CRYPTO_cts128_encrypt_block, 
//GO(CRYPTO_dbg_free, 
//GO(CRYPTO_dbg_get_options, 
//GO(CRYPTO_dbg_malloc, 
//GO(CRYPTO_dbg_realloc, 
//GO(CRYPTO_dbg_set_options, 
//GO(CRYPTO_destroy_dynlockid, 
//GO(CRYPTO_dup_ex_data, 
//GO(CRYPTO_ex_data_new_class, 
GO(CRYPTO_free, vFppi)
//GO(CRYPTO_free_ex_data, 
//GO(CRYPTO_free_locked, 
//GO(CRYPTO_gcm128_aad, 
//GO(CRYPTO_gcm128_decrypt, 
//GO(CRYPTO_gcm128_decrypt_ctr32, 
//GO(CRYPTO_gcm128_encrypt, 
//GO(CRYPTO_gcm128_encrypt_ctr32, 
//GO(CRYPTO_gcm128_finish, 
//GO(CRYPTO_gcm128_init, 
//GO(CRYPTO_gcm128_new, 
//GO(CRYPTO_gcm128_release, 
//GO(CRYPTO_gcm128_setiv, 
//GO(CRYPTO_gcm128_tag, 
//GO(CRYPTO_get_add_lock_callback, 
//GO(CRYPTO_get_dynlock_create_callback, 
//GO(CRYPTO_get_dynlock_destroy_callback, 
//GO(CRYPTO_get_dynlock_lock_callback, 
//GO(CRYPTO_get_dynlock_value, 
//GO(CRYPTO_get_ex_data, 
//GO(CRYPTO_get_ex_data_implementation, 
//GO(CRYPTO_get_ex_new_index, 
//GO(CRYPTO_get_id_callback, 
//GO(CRYPTO_get_locked_mem_ex_functions, 
//GO(CRYPTO_get_locked_mem_functions, 
//GO(CRYPTO_get_locking_callback, 
//GO(CRYPTO_get_lock_name, 
//GO(CRYPTO_get_mem_debug_functions, 
//GO(CRYPTO_get_mem_debug_options, 
//GO(CRYPTO_get_mem_ex_functions, 
//GO(CRYPTO_get_mem_functions, 
//GO(CRYPTO_get_new_dynlockid, 
//GO(CRYPTO_get_new_lockid, 
//GO(CRYPTO_is_mem_check_on, 
//GO(CRYPTO_lock, 
GO(CRYPTO_malloc, pFupi)
//GO(CRYPTO_malloc_locked, 
//GO(CRYPTO_memcmp, 
//GO(CRYPTO_mem_ctrl, 
//GO(CRYPTO_mem_leaks, 
//GO(CRYPTO_mem_leaks_cb, 
//GO(CRYPTO_mem_leaks_fp, 
//GO(CRYPTO_new_ex_data, 
//GO(CRYPTO_nistcts128_decrypt, 
//GO(CRYPTO_nistcts128_decrypt_block, 
//GO(CRYPTO_nistcts128_encrypt, 
//GO(CRYPTO_nistcts128_encrypt_block, 
GO(CRYPTO_num_locks, iFv)
//GO(CRYPTO_ofb128_encrypt, 
//GO(CRYPTO_pop_info, 
//GO(CRYPTO_push_info_, 
GO(CRYPTO_realloc, pFpupi)
//GO(CRYPTO_realloc_clean, 
//GO(CRYPTO_remalloc, 
//GO(CRYPTO_remove_all_info, 
//GO(CRYPTO_set_add_lock_callback, 
//GO(CRYPTO_set_dynlock_create_callback, 
//GO(CRYPTO_set_dynlock_destroy_callback, 
//GO(CRYPTO_set_dynlock_lock_callback, 
//GO(CRYPTO_set_ex_data, 
//GO(CRYPTO_set_ex_data_implementation, 
GOM(CRYPTO_set_id_callback, vFEp)
//GO(CRYPTO_set_locked_mem_ex_functions, 
//GO(CRYPTO_set_locked_mem_functions, 
GOM(CRYPTO_set_locking_callback, vFEp)
//GO(CRYPTO_set_mem_debug_functions, 
//GO(CRYPTO_set_mem_debug_options, 
//GO(CRYPTO_set_mem_ex_functions, 
//GO(CRYPTO_set_mem_functions, 
GO(CRYPTO_strdup, pFppi)
//GO(CRYPTO_thread_id, 
//GO(CRYPTO_THREADID_cmp, 
//GO(CRYPTO_THREADID_cpy, 
//GO(CRYPTO_THREADID_current, 
//GO(CRYPTO_THREADID_get_callback, 
//GO(CRYPTO_THREADID_hash, 
//GO(CRYPTO_THREADID_set_callback, 
//GO(CRYPTO_THREADID_set_numeric, 
//GO(CRYPTO_THREADID_set_pointer, 
//GO(CRYPTO_xts128_encrypt, 
//GO(d2i_ACCESS_DESCRIPTION, 
//GO(d2i_ASN1_BIT_STRING, 
//GO(d2i_ASN1_BMPSTRING, 
//GO(d2i_ASN1_BOOLEAN, 
//GO(d2i_ASN1_bytes, 
//GO(d2i_ASN1_ENUMERATED, 
//GO(d2i_ASN1_GENERALIZEDTIME, 
//GO(d2i_ASN1_GENERALSTRING, 
//GO(d2i_ASN1_IA5STRING, 
//GO(d2i_ASN1_INTEGER, 
//GO(d2i_ASN1_NULL, 
//GO(d2i_ASN1_OBJECT, 
//GO(d2i_ASN1_OCTET_STRING, 
//GO(d2i_ASN1_PRINTABLE, 
//GO(d2i_ASN1_PRINTABLESTRING, 
//GO(d2i_ASN1_SEQUENCE_ANY, 
//GO(d2i_ASN1_SET, 
//GO(d2i_ASN1_SET_ANY, 
//GO(d2i_ASN1_T61STRING, 
//GO(d2i_ASN1_TIME, 
//GO(d2i_ASN1_TYPE, 
//GO(d2i_ASN1_type_bytes, 
//GO(d2i_ASN1_UINTEGER, 
//GO(d2i_ASN1_UNIVERSALSTRING, 
//GO(d2i_ASN1_UTCTIME, 
//GO(d2i_ASN1_UTF8STRING, 
//GO(d2i_ASN1_VISIBLESTRING, 
//GO(d2i_AUTHORITY_INFO_ACCESS, 
//GO(d2i_AUTHORITY_KEYID, 
GO(d2i_AutoPrivateKey, pFppl)
//GO(d2i_BASIC_CONSTRAINTS, 
//GO(d2i_CERTIFICATEPOLICIES, 
//GO(d2i_CMS_bio, 
//GO(d2i_CMS_ContentInfo, 
//GO(d2i_CMS_ReceiptRequest, 
//GO(d2i_CRL_DIST_POINTS, 
GO(d2i_DHparams, pFppl)
//GO(d2i_DHxparams, 
//GO(d2i_DIRECTORYSTRING, 
//GO(d2i_DISPLAYTEXT, 
//GO(d2i_DIST_POINT, 
//GO(d2i_DIST_POINT_NAME, 
//GO(d2i_DSAparams, 
GO(d2i_DSAPrivateKey, pFppl)
GO(d2i_DSAPrivateKey_bio, pFpp)
GO(d2i_DSAPrivateKey_fp, pFpp)
GO(d2i_DSA_PUBKEY, pFppl)
GO(d2i_DSA_PUBKEY_bio, pFpp)
GO(d2i_DSA_PUBKEY_fp, pFpp)
//GO(d2i_DSAPublicKey, 
//GO(d2i_DSA_SIG, 
//GO(d2i_ECDSA_SIG, 
//GO(d2i_ECParameters, 
//GO(d2i_ECPKParameters, 
//GO(d2i_ECPKPARAMETERS, 
//GO(d2i_ECPrivateKey, 
GO(d2i_EC_PRIVATEKEY, pFppl)
GO(d2i_ECPrivateKey_bio, pFpp)
GO(d2i_ECPrivateKey_fp, pFpp)
GO(d2i_EC_PUBKEY, pFppl)
GO(d2i_EC_PUBKEY_bio, pFpp)
GO(d2i_EC_PUBKEY_fp, pFpp)
//GO(d2i_EDIPARTYNAME, 
//GO(d2i_ESS_CERT_ID, 
//GO(d2i_ESS_ISSUER_SERIAL, 
//GO(d2i_ESS_SIGNING_CERT, 
//GO(d2i_EXTENDED_KEY_USAGE, 
//GO(d2i_GENERAL_NAME, 
//GO(d2i_GENERAL_NAMES, 
//GO(d2i_int_dhx, 
//GO(d2i_ISSUING_DIST_POINT, 
//GO(d2i_KRB5_APREQ, 
//GO(d2i_KRB5_APREQBODY, 
//GO(d2i_KRB5_AUTHDATA, 
//GO(d2i_KRB5_AUTHENT, 
//GO(d2i_KRB5_AUTHENTBODY, 
//GO(d2i_KRB5_CHECKSUM, 
//GO(d2i_KRB5_ENCDATA, 
//GO(d2i_KRB5_ENCKEY, 
//GO(d2i_KRB5_PRINCNAME, 
//GO(d2i_KRB5_TICKET, 
//GO(d2i_KRB5_TKTBODY, 
//GO(d2i_NETSCAPE_CERT_SEQUENCE, 
//GO(d2i_NETSCAPE_ENCRYPTED_PKEY, 
//GO(d2i_NETSCAPE_PKEY, 
//GO(d2i_Netscape_RSA, 
//GO(d2i_NETSCAPE_SPKAC, 
//GO(d2i_NETSCAPE_SPKI, 
//GO(d2i_NETSCAPE_X509, 
//GO(d2i_NOTICEREF, 
//GO(d2i_OCSP_BASICRESP, 
//GO(d2i_OCSP_CERTID, 
//GO(d2i_OCSP_CERTSTATUS, 
//GO(d2i_OCSP_CRLID, 
//GO(d2i_OCSP_ONEREQ, 
//GO(d2i_OCSP_REQINFO, 
//GO(d2i_OCSP_REQUEST, 
//GO(d2i_OCSP_RESPBYTES, 
//GO(d2i_OCSP_RESPDATA, 
//GO(d2i_OCSP_RESPID, 
//GO(d2i_OCSP_RESPONSE, 
//GO(d2i_OCSP_REVOKEDINFO, 
//GO(d2i_OCSP_SERVICELOC, 
//GO(d2i_OCSP_SIGNATURE, 
//GO(d2i_OCSP_SINGLERESP, 
//GO(d2i_OTHERNAME, 
//GO(d2i_PBE2PARAM, 
//GO(d2i_PBEPARAM, 
//GO(d2i_PBKDF2PARAM, 
GO(d2i_PKCS12, pFppl)
//GO(d2i_PKCS12_BAGS, 
GO(d2i_PKCS12_bio, pFpp)
GO(d2i_PKCS12_fp, pFpp)
//GO(d2i_PKCS12_MAC_DATA, 
//GO(d2i_PKCS12_SAFEBAG, 
GO(d2i_PKCS7, pFppl)
GO(d2i_PKCS7_bio, pFpp)
//GO(d2i_PKCS7_DIGEST, 
//GO(d2i_PKCS7_ENC_CONTENT, 
//GO(d2i_PKCS7_ENCRYPT, 
//GO(d2i_PKCS7_ENVELOPE, 
GO(d2i_PKCS7_fp, pFpp)
//GO(d2i_PKCS7_ISSUER_AND_SERIAL, 
//GO(d2i_PKCS7_RECIP_INFO, 
//GO(d2i_PKCS7_SIGNED, 
//GO(d2i_PKCS7_SIGN_ENVELOPE, 
//GO(d2i_PKCS7_SIGNER_INFO, 
GO(d2i_PKCS8_bio, pFpp)
GO(d2i_PKCS8_fp, pFpp)
GO(d2i_PKCS8PrivateKey_bio, pFpp)
GO(d2i_PKCS8PrivateKey_fp, pFpp)
GO(d2i_PKCS8_PRIV_KEY_INFO, pFppl)
GO(d2i_PKCS8_PRIV_KEY_INFO_bio, pFpp)
GO(d2i_PKCS8_PRIV_KEY_INFO_fp, pFpp)
//GO(d2i_PKEY_USAGE_PERIOD, 
//GO(d2i_POLICYINFO, 
//GO(d2i_POLICYQUALINFO, 
GO(d2i_PrivateKey, pFppl)
GO(d2i_PrivateKey_bio, pFpp)
GO(d2i_PrivateKey_fp, pFpp)
//GO(d2i_PROXY_CERT_INFO_EXTENSION, 
//GO(d2i_PROXY_POLICY, 
GO(d2i_PUBKEY, pFppl)
GO(d2i_PUBKEY_bio, pFpp)
GO(d2i_PUBKEY_fp, pFpp)
//GO(d2i_PublicKey, 
//GO(d2i_RSA_NET, 
//GO(d2i_RSA_OAEP_PARAMS, 
GO(d2i_RSAPrivateKey, pFppl)
GO(d2i_RSAPrivateKey_bio, pFpp)
GO(d2i_RSAPrivateKey_fp, pFpp)
//GO(d2i_RSA_PSS_PARAMS, 
GO(d2i_RSA_PUBKEY, pFppl)
GO(d2i_RSA_PUBKEY_bio, pFpp)
GO(d2i_RSA_PUBKEY_fp, pFpp)
GO(d2i_RSAPublicKey, pFppl)
GO(d2i_RSAPublicKey_bio, pFpp)
GO(d2i_RSAPublicKey_fp, pFpp)
//GO(d2i_SXNET, 
//GO(d2i_SXNETID, 
//GO(d2i_TS_ACCURACY, 
GO(d2i_TS_MSG_IMPRINT, pFppl)
GO(d2i_TS_MSG_IMPRINT_bio, pFpp)
GO(d2i_TS_MSG_IMPRINT_fp, pFpp)
GO(d2i_TS_REQ, pFppl)
GO(d2i_TS_REQ_bio, pFpp)
GO(d2i_TS_REQ_fp, pFpp)
GO(d2i_TS_RESP, pFppl)
GO(d2i_TS_RESP_bio, pFpp)
GO(d2i_TS_RESP_fp, pFpp)
//GO(d2i_TS_STATUS_INFO, 
GO(d2i_TS_TST_INFO, pFppl)
GO(d2i_TS_TST_INFO_bio, pFpp)
GO(d2i_TS_TST_INFO_fp, pFpp)
//GO(d2i_USERNOTICE, 
GO(d2i_X509, pFppl)
//GO(d2i_X509_ALGOR, 
//GO(d2i_X509_ALGORS, 
//GO(d2i_X509_ATTRIBUTE, 
//GO(d2i_X509_AUX, 
GO(d2i_X509_bio, pFpp)
//GO(d2i_X509_CERT_AUX, 
//GO(d2i_X509_CERT_PAIR, 
//GO(d2i_X509_CINF, 
GO(d2i_X509_CRL, pFppl)
GO(d2i_X509_CRL_bio, pFpp)
GO(d2i_X509_CRL_fp, pFpp)
//GO(d2i_X509_CRL_INFO, 
//GO(d2i_X509_EXTENSION, 
//GO(d2i_X509_EXTENSIONS, 
GO(d2i_X509_fp, pFppl)
//GO(d2i_X509_NAME, 
//GO(d2i_X509_NAME_ENTRY, 
//GO(d2i_X509_PKEY, 
//GO(d2i_X509_PUBKEY, 
GO(d2i_X509_REQ, pFppl)
GO(d2i_X509_REQ_bio, pFpp)
GO(d2i_X509_REQ_fp, pFpp)
//GO(d2i_X509_REQ_INFO, 
//GO(d2i_X509_REVOKED, 
//GO(d2i_X509_SIG, 
//GO(d2i_X509_VAL, 
GO(DES_cbc_cksum, uFppipp)
GO(DES_cbc_encrypt, vFppippi)
GO(DES_cfb64_encrypt, vFppippppi)
GO(DES_cfb_encrypt, vFppilppi)
//GO(DES_check_key_parity, 
//GO(_des_crypt, 
GO(DES_crypt, pFpp)
//GO(DES_decrypt3, 
GO(DES_ecb3_encrypt, vFpppppi)
GO(DES_ecb_encrypt, vFpppi)
GO(DES_ede3_cbc_encrypt, vFppippppi)
//GO(DES_ede3_cbcm_encrypt, 
GO(DES_ede3_cfb64_encrypt, vFpplpppppi)
//GO(DES_ede3_cfb_encrypt, 
GO(DES_ede3_ofb64_encrypt, vFpplppppp)
//GO(DES_enc_read, 
//GO(DES_encrypt1, 
//GO(DES_encrypt2, 
//GO(DES_encrypt3, 
//GO(DES_enc_write, 
GO(DES_fcrypt, pFppp)
GO(DES_is_weak_key, iFp)
GO(DES_key_sched, iFpp)
GO(DES_ncbc_encrypt, vFpplppi)
GO(DES_ofb64_encrypt, vFpplppp)
GO(DES_ofb_encrypt, vFppilpp)
//GO(DES_options, 
GO(DES_pcbc_encrypt, vFppippi)
GO(DES_quad_cksum, uFpplip)
GO(DES_random_key, vFp)
//GO(DES_read_2passwords, 
//GO(DES_read_password, 
GO(DES_set_key, iFpp)
GO(DES_set_key_checked, iFpp)
GO(DES_set_key_unchecked, iFpp)
GO(DES_set_odd_parity, vFp)
GO(DES_string_to_2keys, vFppp)
GO(DES_string_to_key, vFpp)
GO(DES_xcbc_encrypt, vFpplppppi)
//GO(DH_check, 
//GO(DH_check_pub_key, 
//GO(DH_compute_key, 
//GO(DH_compute_key_padded, 
GO(DH_free, vFp)
//GO(DH_generate_key, 
//GO(DH_generate_parameters, 
//GO(DH_generate_parameters_ex, 
//GO(DH_get_1024_160, 
//GO(DH_get_2048_224, 
//GO(DH_get_2048_256, 
//GO(DH_get_default_method, 
//GO(DH_get_ex_data, 
//GO(DH_get_ex_new_index, 
//GO(DH_KDF_X9_42, 
GO(DH_new, pFv)
//GO(DH_new_method, 
//GO(DH_OpenSSL, 
//GO(DHparams_dup, 
//GO(DHparams_print, 
//GO(DHparams_print_fp, 
//GO(DH_set_default_method, 
//GO(DH_set_ex_data, 
//GO(DH_set_method, 
//GO(DH_size, 
//GO(DH_up_ref, 
//GO(DIRECTORYSTRING_free, 
//GO(DIRECTORYSTRING_new, 
//GO(DISPLAYTEXT_free, 
//GO(DISPLAYTEXT_new, 
//GO(DIST_POINT_free, 
//GO(DIST_POINT_NAME_free, 
//GO(DIST_POINT_NAME_new, 
//GO(DIST_POINT_new, 
//GO(DIST_POINT_set_dpname, 
//GO(dsa_builtin_paramgen, 
//GO(dsa_builtin_paramgen2, 
//GO(DSA_do_sign, 
//GO(DSA_do_verify, 
//GO(DSA_dup_DH, 
GO(DSA_free, vFp)
//GO(DSA_generate_key, 
//GO(DSA_generate_parameters, 
//GO(DSA_generate_parameters_ex, 
//GO(DSA_get_default_method, 
//GO(DSA_get_ex_data, 
//GO(DSA_get_ex_new_index, 
GO(DSA_new, pFv)
//GO(DSA_new_method, 
//GO(DSA_OpenSSL, 
//GO(dsa_paramgen_check_g, 
//GO(DSAparams_dup, 
//GO(DSAparams_print, 
//GO(DSAparams_print_fp, 
//GO(DSA_print, 
//GO(DSA_print_fp, 
//GO(DSA_set_default_method, 
//GO(DSA_set_ex_data, 
//GO(DSA_set_method, 
//GO(DSA_SIG_free, 
//GO(DSA_sign, 
//GO(DSA_SIG_new, 
//GO(DSA_sign_setup, 
//GO(DSA_size, 
//GO(DSA_up_ref, 
//GO(DSA_verify, 
//GO(DSO_bind_func, 
//GO(DSO_bind_var, 
//GO(DSO_convert_filename, 
//GO(DSO_ctrl, 
//GO(DSO_flags, 
//GO(DSO_free, 
//GO(DSO_get_default_method, 
//GO(DSO_get_filename, 
//GO(DSO_get_loaded_filename, 
//GO(DSO_get_method, 
//GO(DSO_global_lookup, 
//GO(DSO_load, 
//GO(DSO_merge, 
//GO(DSO_METHOD_beos, 
//GO(DSO_METHOD_dl, 
//GO(DSO_METHOD_dlfcn, 
//GO(DSO_METHOD_null, 
//GO(DSO_METHOD_openssl, 
//GO(DSO_METHOD_vms, 
//GO(DSO_METHOD_win32, 
//GO(DSO_new, 
//GO(DSO_new_method, 
//GO(DSO_pathbyaddr, 
//GO(DSO_set_default_method, 
//GO(DSO_set_filename, 
//GO(DSO_set_method, 
//GO(DSO_set_name_converter, 
//GO(DSO_up_ref, 
GO(EC_curve_nid2nist, pFi)
GO(EC_curve_nist2nid, iFp)
//GO(ecdh_check, 
//GO(ECDH_compute_key, 
//GO(ECDH_get_default_method, 
//GO(ECDH_get_ex_data, 
//GO(ECDH_get_ex_new_index, 
//GO(ECDH_KDF_X9_62, 
//GO(ECDH_OpenSSL, 
//GO(ECDH_set_default_method, 
//GO(ECDH_set_ex_data, 
//GO(ECDH_set_method, 
//GO(ecdsa_check, 
//GO(ECDSA_do_sign, 
GO(ECDSA_do_sign_ex, pFpippp)
GO(ECDSA_do_verify, iFpipp)
//GO(ECDSA_get_default_method, 
//GO(ECDSA_get_ex_data, 
//GO(ECDSA_get_ex_new_index, 
//GO(ECDSA_METHOD_free, 
//GO(ECDSA_METHOD_get_app_data, 
//GO(ECDSA_METHOD_new, 
//GO(ECDSA_METHOD_set_app_data, 
//GO(ECDSA_METHOD_set_flags, 
//GO(ECDSA_METHOD_set_name, 
//GO(ECDSA_METHOD_set_sign, 
//GO(ECDSA_METHOD_set_sign_setup, 
//GO(ECDSA_METHOD_set_verify, 
//GO(ECDSA_OpenSSL, 
//GO(ECDSA_set_default_method, 
//GO(ECDSA_set_ex_data, 
//GO(ECDSA_set_method, 
GO(ECDSA_SIG_free, vFp)
//GO(ECDSA_sign, 
GO(ECDSA_SIG_get0, vFppp)
GO(ECDSA_SIG_new, pFv)
GO(ECDSA_SIG_set0, iFppp)
//GO(ECDSA_sign_ex, 
GO(ECDSA_sign_setup, iFpppp)
//GO(ECDSA_size, 
//GO(ECDSA_verify, 
//GO(EC_EX_DATA_clear_free_all_data, 
//GO(EC_EX_DATA_clear_free_data, 
//GO(EC_EX_DATA_free_all_data, 
//GO(EC_EX_DATA_free_data, 
//GO(EC_EX_DATA_get_data, 
//GO(EC_EX_DATA_set_data, 
GO(EC_get_builtin_curves, LFpL)
//GO(ec_GF2m_have_precompute_mult, 
//GO(ec_GF2m_precompute_mult, 
//GO(ec_GF2m_simple_add, 
//GO(ec_GF2m_simple_cmp, 
//GO(ec_GF2m_simple_dbl, 
//GO(ec_GF2m_simple_field_div, 
//GO(ec_GF2m_simple_field_mul, 
//GO(ec_GF2m_simple_field_sqr, 
//GO(ec_GF2m_simple_group_check_discriminant, 
//GO(ec_GF2m_simple_group_clear_finish, 
//GO(ec_GF2m_simple_group_copy, 
//GO(ec_GF2m_simple_group_finish, 
//GO(ec_GF2m_simple_group_get_curve, 
//GO(ec_GF2m_simple_group_get_degree, 
//GO(ec_GF2m_simple_group_init, 
//GO(ec_GF2m_simple_group_set_curve, 
//GO(ec_GF2m_simple_invert, 
//GO(ec_GF2m_simple_is_at_infinity, 
//GO(ec_GF2m_simple_is_on_curve, 
//GO(ec_GF2m_simple_make_affine, 
GO(EC_GF2m_simple_method, pFv)
//GO(ec_GF2m_simple_mul, 
//GO(ec_GF2m_simple_oct2point, 
//GO(ec_GF2m_simple_point2oct, 
//GO(ec_GF2m_simple_point_clear_finish, 
//GO(ec_GF2m_simple_point_copy, 
//GO(ec_GF2m_simple_point_finish, 
//GO(ec_GF2m_simple_point_get_affine_coordinates, 
//GO(ec_GF2m_simple_point_init, 
//GO(ec_GF2m_simple_point_set_affine_coordinates, 
//GO(ec_GF2m_simple_point_set_to_infinity, 
//GO(ec_GF2m_simple_points_make_affine, 
//GO(ec_GF2m_simple_set_compressed_coordinates, 
//GO(ec_GFp_mont_field_decode, 
//GO(ec_GFp_mont_field_encode, 
//GO(ec_GFp_mont_field_mul, 
//GO(ec_GFp_mont_field_set_to_one, 
//GO(ec_GFp_mont_field_sqr, 
//GO(ec_GFp_mont_group_clear_finish, 
//GO(ec_GFp_mont_group_copy, 
//GO(ec_GFp_mont_group_finish, 
//GO(ec_GFp_mont_group_init, 
//GO(ec_GFp_mont_group_set_curve, 
GO(EC_GFp_mont_method, pFv)
//GO(ec_GFp_nist_field_mul, 
//GO(ec_GFp_nist_field_sqr, 
//GO(ec_GFp_nist_group_copy, 
//GO(ec_GFp_nist_group_set_curve, 
GO(EC_GFp_nist_method, pFv)
GO(EC_GFp_nistp224_method, pFv)
GO(EC_GFp_nistp256_method, pFv)
GO(EC_GFp_nistp521_method, pFv)
//GO(ec_GFp_simple_add, 
//GO(ec_GFp_simple_cmp, 
//GO(ec_GFp_simple_dbl, 
//GO(ec_GFp_simple_field_mul, 
//GO(ec_GFp_simple_field_sqr, 
//GO(ec_GFp_simple_get_Jprojective_coordinates_GFp, 
//GO(ec_GFp_simple_group_check_discriminant, 
//GO(ec_GFp_simple_group_clear_finish, 
//GO(ec_GFp_simple_group_copy, 
//GO(ec_GFp_simple_group_finish, 
//GO(ec_GFp_simple_group_get_curve, 
//GO(ec_GFp_simple_group_get_degree, 
//GO(ec_GFp_simple_group_init, 
//GO(ec_GFp_simple_group_set_curve, 
//GO(ec_GFp_simple_invert, 
//GO(ec_GFp_simple_is_at_infinity, 
//GO(ec_GFp_simple_is_on_curve, 
//GO(ec_GFp_simple_make_affine, 
GO(EC_GFp_simple_method, pFv)
//GO(ec_GFp_simple_oct2point, 
//GO(ec_GFp_simple_point2oct, 
//GO(ec_GFp_simple_point_clear_finish, 
//GO(ec_GFp_simple_point_copy, 
//GO(ec_GFp_simple_point_finish, 
//GO(ec_GFp_simple_point_get_affine_coordinates, 
//GO(ec_GFp_simple_point_init, 
//GO(ec_GFp_simple_point_set_affine_coordinates, 
//GO(ec_GFp_simple_point_set_to_infinity, 
//GO(ec_GFp_simple_points_make_affine, 
//GO(ec_GFp_simple_set_compressed_coordinates, 
//GO(ec_GFp_simple_set_Jprojective_coordinates_GFp, 
//GO(EC_GROUP_check, 
//GO(EC_GROUP_check_discriminant, 
GO(EC_GROUP_clear_free, vFp)
//GO(EC_GROUP_cmp, 
//GO(EC_GROUP_copy, 
//GO(EC_GROUP_dup, 
GO(EC_GROUP_free, vFp)
GO(EC_GROUP_get0_generator, pFp)
//GO(EC_GROUP_get0_seed, 
//GO(EC_GROUP_get_asn1_flag, 
//GO(EC_GROUP_get_basis_type, 
//GO(EC_GROUP_get_cofactor, 
GO(EC_GROUP_get_curve_GF2m, iFppppp)
GO(EC_GROUP_get_curve_GFp, iFppppp)
//GO(EC_GROUP_get_curve_name, 
GO(EC_GROUP_get_degree, iFp)
GO(EC_GROUP_get_ecparameters, pFpp)
GO(EC_GROUP_get_ecpkparameters, pFpp)
//GO(EC_GROUP_get_mont_data, 
GO(EC_GROUP_get_order, iFppp)
//GO(EC_GROUP_get_pentanomial_basis, 
//GO(EC_GROUP_get_point_conversion_form, 
//GO(EC_GROUP_get_seed_len, 
//GO(EC_GROUP_get_trinomial_basis, 
//GO(EC_GROUP_have_precompute_mult, 
//GO(EC_GROUP_method_of, 
GO(EC_GROUP_new, pFp)
GO(EC_GROUP_new_by_curve_name, pFi)
GO(EC_GROUP_new_curve_GF2m, pFpppp)
GO(EC_GROUP_new_curve_GFp, pFpppp)
GO(EC_GROUP_new_from_ecparameters, pFp)
GO(EC_GROUP_new_from_ecpkparameters, pFp)
GO(EC_GROUP_precompute_mult, iFpp)
//GO(EC_GROUP_set_asn1_flag, 
GO(EC_GROUP_set_curve_GF2m, iFppppp)
GO(EC_GROUP_set_curve_GFp, iFppppp)
//GO(EC_GROUP_set_curve_name, 
GO(EC_GROUP_set_generator, iFpppp)
//GO(EC_GROUP_set_point_conversion_form, 
//GO(EC_GROUP_set_seed, 
//GO(EC_KEY_check_key, 
//GO(EC_KEY_clear_flags, 
//GO(EC_KEY_copy, 
GO(EC_KEY_dup, pFp)
GO(EC_KEY_free, vFp)
//GO(EC_KEY_generate_key, 
GO(EC_KEY_get0_group, pFp)
//GO(EC_KEY_get0_private_key, 
//GO(EC_KEY_get0_public_key, 
//GO(EC_KEY_get_conv_form, 
//GO(EC_KEY_get_enc_flags, 
//GO(EC_KEY_get_flags, 
//GO(EC_KEY_get_key_method_data, 
//GO(EC_KEY_insert_key_method_data, 
GO(EC_KEY_new, pFv)
GO(EC_KEY_new_by_curve_name, pFi)
//GO(EC_KEY_precompute_mult, 
//GO(EC_KEY_print, 
//GO(EC_KEY_print_fp, 
GO(EC_KEY_set_asn1_flag, vFpi)
//GO(EC_KEY_set_conv_form, 
//GO(EC_KEY_set_enc_flags, 
//GO(EC_KEY_set_flags, 
GO(EC_KEY_set_group, iFpp)
GO(EC_KEY_set_private_key, iFpp)
GO(EC_KEY_set_public_key, iFpp)
GO(EC_KEY_set_public_key_affine_coordinates, iFppp)
//GO(EC_KEY_up_ref, 
GO(EC_METHOD_get_field_type, iFp)
//GO(ECPARAMETERS_free, 
//GO(ECPARAMETERS_new, 
//GO(ECParameters_print, 
//GO(ECParameters_print_fp, 
//GO(ECPKPARAMETERS_free, 
//GO(ECPKPARAMETERS_new, 
//GO(ECPKParameters_print, 
//GO(ECPKParameters_print_fp, 
//GO(EC_POINT_add, 
//GO(EC_POINT_bn2point, 
GO(EC_POINT_clear_free, vFp)
//GO(EC_POINT_cmp, 
GO(EC_POINT_copy, iFpp)
//GO(EC_POINT_dbl, 
GO(EC_POINT_dup, pFpp)
GO(EC_POINT_free, vFp)
GO(EC_POINT_get_affine_coordinates, iFppppp)
GO(EC_POINT_get_affine_coordinates_GF2m, iFppppp)
GO(EC_POINT_get_affine_coordinates_GFp, iFppppp)
GO(EC_POINT_get_Jprojective_coordinates_GFp, iFpppppp)
//GO(EC_POINT_hex2point, 
//GO(EC_POINT_invert, 
//GO(EC_POINT_is_at_infinity, 
//GO(EC_POINT_is_on_curve, 
//GO(EC_POINT_make_affine, 
GO(EC_POINT_method_of, pFp)
GO(EC_POINT_mul, iFpppppp)
GO(EC_POINT_new, pFp)
//GO(EC_POINT_oct2point, 
//GO(EC_POINT_point2buf,
//GO(EC_POINT_point2bn, 
//GO(EC_POINT_point2hex, 
//GO(EC_POINT_point2oct,
GO(EC_POINT_set_affine_coordinates, iFppppp)
GO(EC_POINT_set_affine_coordinates_GF2m, iFppppp)
GO(EC_POINT_set_affine_coordinates_GFp, iFppppp)
GO(EC_POINT_set_compressed_coordinates, iFpppip)
GO(EC_POINT_set_compressed_coordinates_GF2m, iFpppip)
GO(EC_POINT_set_compressed_coordinates_GFp, iFpppip)
GO(EC_POINT_set_Jprojective_coordinates_GFp, iFpppppp)
GO(EC_POINT_set_to_infinity, iFpp)
//GO(EC_POINTs_make_affine, 
//GO(EC_POINTs_mul, 
//GO(ec_precompute_mont_data, 
//GO(EC_PRIVATEKEY_free, 
//GO(EC_PRIVATEKEY_new, 
//GO(ec_wNAF_have_precompute_mult, 
//GO(ec_wNAF_mul, 
//GO(ec_wNAF_precompute_mult, 
//GO(EDIPARTYNAME_free, 
//GO(EDIPARTYNAME_new, 
GO(ENGINE_add, iFp)
//GO(ENGINE_add_conf_module, 
GO(ENGINE_by_id, pFp)
GO(ENGINE_cleanup, vFv)
//GO(engine_cleanup_add_first, 
//GO(engine_cleanup_add_last, 
GO(ENGINE_cmd_is_executable, iFpi)
GOM(ENGINE_ctrl, iFEpiipp)
GOM(ENGINE_ctrl_cmd, iFpplppi)
GO(ENGINE_ctrl_cmd_string, iFpppi)
GO(ENGINE_finish, iFp)
GO(ENGINE_free, iFp)
//GO(engine_free_util, 
//GO(ENGINE_get_cipher, 
GO(ENGINE_get_cipher_engine, pFi)
//GOM(ENGINE_get_ciphers, pFEp)
//GOM(ENGINE_get_cmd_defns, pFEp)
//GOM(ENGINE_get_ctrl_function, pFEp)
GO(ENGINE_get_default_DH, pFv)
GO(ENGINE_get_default_DSA, pFv)
GO(ENGINE_get_default_ECDH, pFv)
GO(ENGINE_get_default_ECDSA, pFv)
GO(ENGINE_get_default_RAND, pFv)
GO(ENGINE_get_default_RSA, pFv)
//GOM(ENGINE_get_destroy_function, pFEp)
GO(ENGINE_get_DH, pFp)
//GOM(ENGINE_get_digest, pFEp)
GO(ENGINE_get_digest_engine, pFi)
//GO(ENGINE_get_digests, 
GO(ENGINE_get_DSA, pFp)
GO(ENGINE_get_ECDH, pFp)
GO(ENGINE_get_ECDSA, pFp)
//GO(ENGINE_get_ex_data, 
//GO(ENGINE_get_ex_new_index, 
//GOM(ENGINE_get_finish_function, pFEp)
GO(ENGINE_get_first, iFp)
GO(ENGINE_get_flags, iFp)
GO(ENGINE_get_id, pFp)
//GOM(ENGINE_get_init_function, pFEp)
GO(ENGINE_get_last, pFv)
//GOM(ENGINE_get_load_privkey_function, pFEp)
//GOM(ENGINE_get_load_pubkey_function, pFEp)
GO(ENGINE_get_name, pFp)
GO(ENGINE_get_next, pFp)
//GO(ENGINE_get_pkey_asn1_meth, 
//GO(ENGINE_get_pkey_asn1_meth_engine, 
//GO(ENGINE_get_pkey_asn1_meths, 
//GO(ENGINE_get_pkey_asn1_meth_str, 
//GO(ENGINE_get_pkey_meth, 
//GO(ENGINE_get_pkey_meth_engine, 
//GO(ENGINE_get_pkey_meths, 
GO(ENGINE_get_prev, pFp)
GO(ENGINE_get_RAND, pFp)
GO(ENGINE_get_RSA, pFp)
//GO(ENGINE_get_ssl_client_cert_function, 
//GO(ENGINE_get_static_state, 
//GO(ENGINE_get_STORE, 
GO(ENGINE_get_table_flags, uFv)
GO(ENGINE_init, iFp)
GO(ENGINE_load_builtin_engines, vFv)
//GO(ENGINE_load_cryptodev, 
//GO(ENGINE_load_dynamic, 
//GO(ENGINE_load_openssl, 
GO(ENGINE_load_private_key, pFpppp)
GO(ENGINE_load_public_key, pFpppp)
//GO(ENGINE_load_rdrand, 
//GO(ENGINE_load_ssl_client_cert, 
GO(ENGINE_new, pFv)
//GO(ENGINE_pkey_asn1_find_str, 
//GO(engine_pkey_asn1_meths_free, 
//GO(engine_pkey_meths_free, 
GO(ENGINE_register_all_ciphers, vFv)
GO(ENGINE_register_all_complete, iFv)
GO(ENGINE_register_all_DH, vFv)
GO(ENGINE_register_all_digests, vFv)
GO(ENGINE_register_all_DSA, vFv)
GO(ENGINE_register_all_ECDH, vFv)
GO(ENGINE_register_all_ECDSA, vFv)
//GO(ENGINE_register_all_pkey_asn1_meths, 
//GO(ENGINE_register_all_pkey_meths, 
GO(ENGINE_register_all_RAND, vFv)
GO(ENGINE_register_all_RSA, vFv)
//GO(ENGINE_register_all_STORE, 
GO(ENGINE_register_ciphers, iFp)
GO(ENGINE_register_complete, iFp)
GO(ENGINE_register_DH, iFp)
GO(ENGINE_register_digests, iFp)
GO(ENGINE_register_DSA, iFp)
GO(ENGINE_register_ECDH, iFp)
GO(ENGINE_register_ECDSA, iFp)
//GO(ENGINE_register_pkey_asn1_meths, 
//GO(ENGINE_register_pkey_meths, 
GO(ENGINE_register_RAND, iFp)
GO(ENGINE_register_RSA, iFp)
//GO(ENGINE_register_STORE, 
GO(ENGINE_remove, iFp)
//GO(engine_set_all_null, 
//GOM(ENGINE_set_ciphers, iFEpp)   //typedef int (*ENGINE_CIPHERS_PTR)(ENGINE *e, const EVP_CIPHER **impl, const int **nids, int nid)
//GOM(ENGINE_set_cmd_defns, iFEpp)
//GO(ENGINE_set_ctrl_function, 
GO(ENGINE_set_default, iFpu)
GO(ENGINE_set_default_ciphers, iFp)
GO(ENGINE_set_default_DH, iFp)
GO(ENGINE_set_default_digests, iFp)
GO(ENGINE_set_default_DSA, iFp)
GO(ENGINE_set_default_ECDH, iFp)
GO(ENGINE_set_default_ECDSA, iFp)
//GO(ENGINE_set_default_pkey_asn1_meths, 
//GO(ENGINE_set_default_pkey_meths, 
GO(ENGINE_set_default_RAND, iFp)
GO(ENGINE_set_default_RSA, iFp)
GO(ENGINE_set_default_string, iFpp)
//GOM(ENGINE_set_destroy_function, iFEpp)
//GO(ENGINE_set_DH, 
//GOM(ENGINE_set_digests, iFEpp)
GO(ENGINE_set_DSA, iFpp)
GO(ENGINE_set_ECDH, iFpp)
GO(ENGINE_set_ECDSA, iFpp)
//GO(ENGINE_set_ex_data, 
//GOM(ENGINE_set_finish_function, iFEpp)
GO(ENGINE_set_flags, iFpi)
GO(ENGINE_set_id, iFpp)
//GOM(ENGINE_set_init_function, iFEpp)
//GOM(ENGINE_set_load_privkey_function, iFEpp)
//GOM(ENGINE_set_load_pubkey_function, iFEpp)
//GOM(ENGINE_set_load_ssl_client_cert_function, 
GO(ENGINE_set_name, iFpp)
//GO(ENGINE_set_pkey_asn1_meths, 
//GO(ENGINE_set_pkey_meths, 
GO(ENGINE_set_RAND, iFpp)
GO(ENGINE_set_RSA, iFpp)
//GO(ENGINE_set_STORE, 
GO(ENGINE_set_table_flags, vFu)
//GO(engine_table_cleanup, 
//GO(engine_table_doall, 
//GO(engine_table_register, 
//GO(engine_table_select, 
//GO(engine_table_unregister, 
//GO(engine_unlocked_finish, 
//GO(engine_unlocked_init, 
GO(ENGINE_unregister_ciphers, vFp)
GO(ENGINE_unregister_DH, vFp)
GO(ENGINE_unregister_digests, vFp)
GO(ENGINE_unregister_DSA, vFp)
GO(ENGINE_unregister_ECDH, vFp)
GO(ENGINE_unregister_ECDSA, vFp)
//GO(ENGINE_unregister_pkey_asn1_meths, 
//GO(ENGINE_unregister_pkey_meths, 
GO(ENGINE_unregister_RAND, vFp)
GO(ENGINE_unregister_RSA, vFp)
//GO(ENGINE_unregister_STORE, 
GO(ENGINE_up_ref, iFp)
//GO(ERR_add_error_data, 
//GO(ERR_add_error_vdata, 
GO(ERR_clear_error, vFv)
GO(ERR_error_string, pFup)
GO(ERR_error_string_n, vFupu)
GO(ERR_free_strings, vFv)
GO(ERR_func_error_string, pFu)
GO(ERR_get_error, LFv)
GO(ERR_get_error_line, LFpp)
GO(ERR_get_error_line_data, LFpppp)
//GO(ERR_get_err_state_table, 
//GO(ERR_get_implementation, 
//GO(ERR_get_next_error_library, 
//GO(ERR_get_state, 
//GO(ERR_get_string_table, 
GO(ERR_lib_error_string, pFu)
//GO(ERR_load_ASN1_strings, 
//GO(ERR_load_BIO_strings, 
//GO(ERR_load_BN_strings, 
//GO(ERR_load_BUF_strings, 
//GO(ERR_load_CMS_strings, 
//GO(ERR_load_COMP_strings, 
//GO(ERR_load_CONF_strings, 
GO(ERR_load_crypto_strings, vFv)
GO(ERR_load_CRYPTO_strings, vFv)
//GO(ERR_load_DH_strings, 
//GO(ERR_load_DSA_strings, 
//GO(ERR_load_DSO_strings, 
//GO(ERR_load_ECDH_strings, 
//GO(ERR_load_ECDSA_strings, 
//GO(ERR_load_EC_strings, 
//GO(ERR_load_ENGINE_strings, 
//GO(ERR_load_ERR_strings, 
GO(ERR_load_EVP_strings, vFv)
//GO(ERR_load_OBJ_strings, 
//GO(ERR_load_OCSP_strings, 
//GO(ERR_load_PEM_strings, 
//GO(ERR_load_PKCS12_strings, 
GO(ERR_load_PKCS7_strings, vFv)
//GO(ERR_load_RAND_strings, 
//GO(ERR_load_RSA_strings, 
//GO(ERR_load_strings, 
//GO(ERR_load_TS_strings, 
//GO(ERR_load_UI_strings, 
//GO(ERR_load_X509_strings, 
//GO(ERR_load_X509V3_strings, 
GO(ERR_peek_error, LFv)
GO(ERR_peek_error_line, LFpp)
GO(ERR_peek_error_line_data, LFpppp)
GO(ERR_peek_last_error, LFv)
GO(ERR_peek_last_error_line, LFpp)
GO(ERR_peek_last_error_line_data, LFpppp)
//GO(ERR_pop_to_mark, 
//GO(ERR_print_errors, 
//GO(ERR_print_errors_cb, 
//GO(ERR_print_errors_fp, 
//GO(ERR_put_error, 
GO(ERR_reason_error_string, pFu)
//GO(ERR_release_err_state_table, 
//GO(ERR_remove_state, 
GO(ERR_remove_thread_state, vFp)
//GO(ERR_set_error_data, 
//GO(ERR_set_implementation, 
//GO(ERR_set_mark, 
//GO(ERR_unload_strings, 
//GO(ESS_CERT_ID_dup, 
//GO(ESS_CERT_ID_free, 
//GO(ESS_CERT_ID_new, 
//GO(ESS_ISSUER_SERIAL_dup, 
//GO(ESS_ISSUER_SERIAL_free, 
//GO(ESS_ISSUER_SERIAL_new, 
//GO(ESS_SIGNING_CERT_dup, 
//GO(ESS_SIGNING_CERT_free, 
//GO(ESS_SIGNING_CERT_new, 
//GO(EVP_add_alg_module, 
//GO(EVP_add_cipher, 
//GO(EVP_add_digest, 
//GO(EVP_aes_128_cbc, 
//GO(EVP_aes_128_cbc_hmac_sha1, 
//GO(EVP_aes_128_cbc_hmac_sha256, 
//GO(EVP_aes_128_ccm, 
//GO(EVP_aes_128_cfb, 
//GO(EVP_aes_128_cfb1, 
//GO(EVP_aes_128_cfb128, 
//GO(EVP_aes_128_cfb8, 
//GO(EVP_aes_128_ctr, 
//GO(EVP_aes_128_ecb, 
//GO(EVP_aes_128_gcm, 
//GO(EVP_aes_128_ofb, 
//GO(EVP_aes_128_wrap, 
//GO(EVP_aes_128_xts, 
//GO(EVP_aes_192_cbc, 
//GO(EVP_aes_192_ccm, 
//GO(EVP_aes_192_cfb, 
//GO(EVP_aes_192_cfb1, 
//GO(EVP_aes_192_cfb128, 
//GO(EVP_aes_192_cfb8, 
//GO(EVP_aes_192_ctr, 
//GO(EVP_aes_192_ecb, 
//GO(EVP_aes_192_gcm, 
//GO(EVP_aes_192_ofb, 
//GO(EVP_aes_192_wrap, 
//GO(EVP_aes_256_cbc, 
//GO(EVP_aes_256_cbc_hmac_sha1, 
//GO(EVP_aes_256_cbc_hmac_sha256, 
//GO(EVP_aes_256_ccm, 
//GO(EVP_aes_256_cfb, 
//GO(EVP_aes_256_cfb1, 
//GO(EVP_aes_256_cfb128, 
//GO(EVP_aes_256_cfb8, 
//GO(EVP_aes_256_ctr, 
//GO(EVP_aes_256_ecb, 
GO(EVP_aes_256_gcm, pFv)
//GO(EVP_aes_256_ofb, 
//GO(EVP_aes_256_wrap, 
//GO(EVP_aes_256_xts, 
//GO(EVP_bf_cbc, 
//GO(EVP_bf_cfb, 
//GO(EVP_bf_cfb64, 
//GO(EVP_bf_ecb, 
//GO(EVP_bf_ofb, 
//GO(EVP_BytesToKey, 
//GO(EVP_camellia_128_cbc, 
//GO(EVP_camellia_128_cfb1, 
//GO(EVP_camellia_128_cfb128, 
//GO(EVP_camellia_128_cfb8, 
//GO(EVP_camellia_128_ecb, 
//GO(EVP_camellia_128_ofb, 
//GO(EVP_camellia_192_cbc, 
//GO(EVP_camellia_192_cfb1, 
//GO(EVP_camellia_192_cfb128, 
//GO(EVP_camellia_192_cfb8, 
//GO(EVP_camellia_192_ecb, 
//GO(EVP_camellia_192_ofb, 
//GO(EVP_camellia_256_cbc, 
//GO(EVP_camellia_256_cfb1, 
//GO(EVP_camellia_256_cfb128, 
//GO(EVP_camellia_256_cfb8, 
//GO(EVP_camellia_256_ecb, 
//GO(EVP_camellia_256_ofb, 
//GO(EVP_cast5_cbc, 
//GO(EVP_cast5_cfb, 
//GO(EVP_cast5_cfb64, 
//GO(EVP_cast5_ecb, 
//GO(EVP_cast5_ofb, 
//GO(EVP_Cipher, 
GO(EVP_CIPHER_asn1_to_param, iFpp)
//GO(EVP_CIPHER_block_size, 
//GO(EVP_CIPHER_CTX_block_size, 
//GO(EVP_CIPHER_CTX_cipher, 
GO(EVP_CIPHER_CTX_cleanup, iFp)
//GO(EVP_CIPHER_CTX_clear_flags, 
//GO(EVP_CIPHER_CTX_copy, 
GO(EVP_CIPHER_CTX_ctrl, iFpiip)
//GO(EVP_CIPHER_CTX_flags, 
GO(EVP_CIPHER_CTX_free, vFp)
//GO(EVP_CIPHER_CTX_get_app_data, 
GO(EVP_CIPHER_CTX_init, vFp)
//GO(EVP_CIPHER_CTX_iv_length, 
//GO(EVP_CIPHER_CTX_key_length, 
GO(EVP_CIPHER_CTX_new, pFv)
//GO(EVP_CIPHER_CTX_nid, 
//GO(EVP_CIPHER_CTX_rand_key, 
//GO(EVP_CIPHER_CTX_set_app_data, 
//GO(EVP_CIPHER_CTX_set_flags, 
GO(EVP_CIPHER_CTX_set_key_length, iFpi)
GO(EVP_CIPHER_CTX_set_padding, iFpi)
//GO(EVP_CIPHER_CTX_test_flags, 
//GO(EVP_CIPHER_do_all, 
//GO(EVP_CIPHER_do_all_sorted, 
GO(EVP_CipherFinal, iFppp)
GO(EVP_CipherFinal_ex, iFppp)
//GO(EVP_CIPHER_flags, 
//GO(EVP_CIPHER_get_asn1_iv, 
GO(EVP_CipherInit, iFppppi)
GO(EVP_CipherInit_ex, iFpppppi)
//GO(EVP_CIPHER_iv_length, 
//GO(EVP_CIPHER_key_length, 
//GO(EVP_CIPHER_nid, 
GO(EVP_CIPHER_param_to_asn1, iFpp)
//GO(EVP_CIPHER_set_asn1_iv, 
GO(EVP_CIPHER_type, iFp)
GO(EVP_CipherUpdate, iFppppi)
GO(EVP_cleanup, vFv)
//GO(EVP_DecodeBlock, 
//GO(EVP_DecodeFinal, 
//GO(EVP_DecodeInit, 
//GO(EVP_DecodeUpdate, 
GO(EVP_DecryptFinal, iFppp)
GO(EVP_DecryptFinal_ex, iFppp)
GO(EVP_DecryptInit, iFpppp)
GO(EVP_DecryptInit_ex, iFppppp)
GO(EVP_DecryptUpdate, iFppppi)
GO(EVP_des_cbc, pFv)
//GO(EVP_des_cfb, 
//GO(EVP_des_cfb1, 
//GO(EVP_des_cfb64, 
//GO(EVP_des_cfb8, 
//GO(EVP_des_ecb, 
//GO(EVP_des_ede, 
//GO(EVP_des_ede3, 
GO(EVP_des_ede3_cbc, pFv)
//GO(EVP_des_ede3_cfb, 
//GO(EVP_des_ede3_cfb1, 
//GO(EVP_des_ede3_cfb64, 
//GO(EVP_des_ede3_cfb8, 
//GO(EVP_des_ede3_ecb, 
//GO(EVP_des_ede3_ofb, 
//GO(EVP_des_ede3_wrap, 
//GO(EVP_des_ede_cbc, 
//GO(EVP_des_ede_cfb, 
//GO(EVP_des_ede_cfb64, 
//GO(EVP_des_ede_ecb, 
//GO(EVP_des_ede_ofb, 
//GO(EVP_des_ofb, 
//GO(EVP_desx_cbc, 
//GO(EVP_Digest, 
//GO(EVP_DigestFinal, 
GO(EVP_DigestFinal_ex, iFppp)
GO(EVP_DigestInit, iFpp)
GO(EVP_DigestInit_ex, iFppp)
GO(EVP_DigestSignFinal, iFppp)
//GO(EVP_DigestSignInit, 
GO(EVP_DigestUpdate, iFppL)
//GO(EVP_DigestVerifyFinal, 
//GO(EVP_DigestVerifyInit, 
//GO(EVP_dss, 
//GO(EVP_dss1, 
//GO(EVP_ecdsa, 
//GO(EVP_enc_null, 
//GO(EVP_EncodeBlock, 
//GO(EVP_EncodeFinal, 
//GO(EVP_EncodeInit, 
//GO(EVP_EncodeUpdate, 
GO(EVP_EncryptFinal, iFppp)
GO(EVP_EncryptFinal_ex, iFppp)
GO(EVP_EncryptInit, iFpppp)
GO(EVP_EncryptInit_ex, iFppppp)
GO(EVP_EncryptUpdate, iFppppi)
GO(EVP_get_cipherbyname, pFp)
GO(EVP_get_digestbyname, pFp)
//GO(EVP_get_pw_prompt, 
//GO(EVP_idea_cbc, 
//GO(EVP_idea_cfb, 
//GO(EVP_idea_cfb64, 
//GO(EVP_idea_ecb, 
//GO(EVP_idea_ofb, 
GO(EVP_md4, pFv)
GO(EVP_md5, pFv)
GO(EVP_MD_block_size, iFp)
//GO(EVP_mdc2, 
GO(EVP_MD_CTX_cleanup, iFp)
GO(EVP_MD_CTX_clear_flags, vFpi)
GO(EVP_MD_CTX_copy, iFpp)
GO(EVP_MD_CTX_copy_ex, iFpp)
//GO(EVP_MD_CTX_create, 
GO(EVP_MD_CTX_ctrl, vFpiip)
GO(EVP_MD_CTX_destroy, vFp)
GO(EVP_MD_CTX_free, vFp)
//GO(EVP_MD_CTX_init, 
GO(EVP_MD_CTX_md, pFp)
GO(EVP_MD_CTX_new, pFv)
GO(EVP_MD_CTX_reset, iFp)
GO(EVP_MD_CTX_set_flags, vFpi)
//GO(EVP_MD_CTX_test_flags, 
//GO(EVP_MD_do_all, 
//GO(EVP_MD_do_all_sorted, 
//GO(EVP_MD_flags, 
GO(EVP_md_null, pFv)
GO(EVP_MD_pkey_type, iFp)
GO(EVP_MD_size, iFp)
GO(EVP_MD_type, iFp)
//GO(EVP_OpenFinal, 
//GO(EVP_OpenInit, 
//GO(EVP_PBE_alg_add, 
//GO(EVP_PBE_alg_add_type, 
//GO(EVP_PBE_CipherInit, 
//GO(EVP_PBE_cleanup, 
//GO(EVP_PBE_find, 
//GO(EVP_PKCS82PKEY, 
//GO(EVP_PKEY2PKCS8, 
//GO(EVP_PKEY2PKCS8_broken, 
//GO(EVP_PKEY_add1_attr, 
//GO(EVP_PKEY_add1_attr_by_NID, 
//GO(EVP_PKEY_add1_attr_by_OBJ, 
//GO(EVP_PKEY_add1_attr_by_txt, 
//GO(EVP_PKEY_asn1_add0, 
//GO(EVP_PKEY_asn1_add_alias, 
//GO(EVP_PKEY_asn1_copy, 
//GO(EVP_PKEY_asn1_find, 
//GO(EVP_PKEY_asn1_find_str, 
//GO(EVP_PKEY_asn1_free, 
//GO(EVP_PKEY_asn1_get0, 
//GO(EVP_PKEY_asn1_get0_info, 
//GO(EVP_PKEY_asn1_get_count, 
//GO(EVP_PKEY_asn1_new, 
//GO(EVP_PKEY_asn1_set_ctrl, 
//GO(EVP_PKEY_asn1_set_free, 
//GO(EVP_PKEY_asn1_set_item, 
//GO(EVP_PKEY_asn1_set_param, 
//GO(EVP_PKEY_asn1_set_private, 
//GO(EVP_PKEY_asn1_set_public, 
GO(EVP_PKEY_assign, iFpip)
//GO(EVP_PKEY_base_id, 
//GO(EVP_PKEY_bits, 
GO(EVP_PKEY_cmp, iFpp)
GO(EVP_PKEY_cmp_parameters, iFpp)
GO(EVP_PKEY_copy_parameters, iFpp)
GO(EVP_PKEY_CTX_ctrl, iFpiiiip)
GO(EVP_PKEY_CTX_ctrl_str, iFppp)
GO(EVP_PKEY_CTX_dup, pFp)
GO(EVP_PKEY_CTX_free, vFp)
//GO(EVP_PKEY_CTX_get0_peerkey, 
//GO(EVP_PKEY_CTX_get0_pkey, 
GO(EVP_PKEY_CTX_get_app_data, pFp)
//GO(EVP_PKEY_CTX_get_cb, 
//GO(EVP_PKEY_CTX_get_data, 
GO(EVP_PKEY_CTX_get_keygen_info, iFpi)
//GO(EVP_PKEY_CTX_get_operation, 
GO(EVP_PKEY_CTX_new, pFpp)
GO(EVP_PKEY_CTX_new_id, pFip)
//GO(EVP_PKEY_CTX_set0_keygen_info, 
GO(EVP_PKEY_CTX_set_app_data, vFpp)
//GO(EVP_PKEY_CTX_set_cb, 
//GO(EVP_PKEY_CTX_set_data, 
//GO(EVP_PKEY_decrypt, 
//GO(EVP_PKEY_decrypt_init, 
//GO(EVP_PKEY_decrypt_old, 
//GO(EVP_PKEY_delete_attr, 
GO(EVP_PKEY_derive, iFppp)
GO(EVP_PKEY_derive_init, iFp)
GO(EVP_PKEY_derive_set_peer, iFppi)
//GO(EVP_PKEY_encrypt, 
//GO(EVP_PKEY_encrypt_init, 
//GO(EVP_PKEY_encrypt_old, 
GO(EVP_PKEY_free, vFp)
//GO(EVP_PKEY_get0, 
//GO(EVP_PKEY_get0_asn1, 
//GO(EVP_PKEY_get1_DH, 
GO(EVP_PKEY_get1_DSA, pFp)
GO(EVP_PKEY_get1_EC_KEY, pFp)
GO(EVP_PKEY_get1_RSA, pFp)
//GO(EVP_PKEY_get_attr, 
//GO(EVP_PKEY_get_attr_by_NID, 
//GO(EVP_PKEY_get_attr_by_OBJ, 
//GO(EVP_PKEY_get_attr_count, 
//GO(EVP_PKEY_get_default_digest_nid, 
//GO(EVP_PKEY_id, 
GO(EVP_PKEY_keygen, iFpp)
GO(EVP_PKEY_keygen_init, iFp)
//GO(EVP_PKEY_meth_add0, 
//GO(EVP_PKEY_meth_copy, 
//GO(EVP_PKEY_meth_find, 
//GO(EVP_PKEY_meth_free, 
//GO(EVP_PKEY_meth_get0_info, 
//GO(EVP_PKEY_meth_new, 
//GO(EVP_PKEY_meth_set_cleanup, 
//GO(EVP_PKEY_meth_set_copy, 
//GO(EVP_PKEY_meth_set_ctrl, 
//GO(EVP_PKEY_meth_set_decrypt, 
//GO(EVP_PKEY_meth_set_derive, 
//GO(EVP_PKEY_meth_set_encrypt, 
//GO(EVP_PKEY_meth_set_init, 
//GO(EVP_PKEY_meth_set_keygen, 
//GO(EVP_PKEY_meth_set_paramgen, 
//GO(EVP_PKEY_meth_set_sign, 
//GO(EVP_PKEY_meth_set_signctx, 
//GO(EVP_PKEY_meth_set_verify, 
//GO(EVP_PKEY_meth_set_verifyctx, 
//GO(EVP_PKEY_meth_set_verify_recover, 
GO(EVP_PKEY_missing_parameters, iFp)
GO(EVP_PKEY_new, pFv)
//GO(EVP_PKEY_new_mac_key, 
GO(EVP_PKEY_paramgen, iFpp)
GO(EVP_PKEY_paramgen_init, iFp)
//GO(EVP_PKEY_print_params, 
//GO(EVP_PKEY_print_private, 
//GO(EVP_PKEY_print_public, 
//GO(EVP_PKEY_save_parameters, 
//GO(EVP_PKEY_set1_DH, 
GO(EVP_PKEY_set1_DSA, iFpp)
GO(EVP_PKEY_set1_EC_KEY, iFpp)
GO(EVP_PKEY_set1_RSA, iFpp)
//GO(evp_pkey_set_cb_translate, 
//GO(EVP_PKEY_set_type, 
//GO(EVP_PKEY_set_type_str, 
GO(EVP_PKEY_sign, iFppppp)
GO(EVP_PKEY_sign_init, iFp)
//GO(EVP_PKEY_size, 
GO(EVP_PKEY_type, iFi)
GO(EVP_PKEY_up_ref, iFp)
GO(EVP_PKEY_verify, iFppLpL)
GO(EVP_PKEY_verify_init, iFp)
//GO(EVP_PKEY_verify_recover, 
//GO(EVP_PKEY_verify_recover_init, 
//GO(EVP_rc2_40_cbc, 
//GO(EVP_rc2_64_cbc, 
//GO(EVP_rc2_cbc, 
//GO(EVP_rc2_cfb, 
//GO(EVP_rc2_cfb64, 
//GO(EVP_rc2_ecb, 
//GO(EVP_rc2_ofb, 
//GO(EVP_rc4, 
//GO(EVP_rc4_40, 
//GO(EVP_rc4_hmac_md5, 
//GO(EVP_read_pw_string, 
//GO(EVP_read_pw_string_min, 
//GO(EVP_ripemd160, 
//GO(EVP_SealFinal, 
//GO(EVP_SealInit, 
//GO(EVP_seed_cbc, 
//GO(EVP_seed_cfb128, 
//GO(EVP_seed_ecb, 
//GO(EVP_seed_ofb, 
//GO(EVP_set_pw_prompt, 
GO(EVP_sha, pFV)
GO(EVP_sha1, pFv)
GO(EVP_sha224, pFv)
GO(EVP_sha256, pFv)
GO(EVP_sha384, pFv)
GO(EVP_sha512, pFv)
//GO(EVP_SignFinal, 
GO(EVP_VerifyFinal, iFppup)
GO(EVP_VerifyInit, iFpp)        // 1.1.0+
GO(EVP_VerifyInit_ex, iFppp)    // 1.1.0+
GO(EVP_VerifyUpdate, iFppu)     // 1.1.0+
//GO(EVP_whirlpool, 
//GO(EXTENDED_KEY_USAGE_free, 
//GO(EXTENDED_KEY_USAGE_new, 
//GO(fcrypt_body, 
//GO(_fini, 
//GO(FIPS_mode, 
//GO(FIPS_mode_set, 
//GO(gcm_ghash_4bit, 
//GO(gcm_ghash_neon, 
//GO(gcm_ghash_v8, 
//GO(gcm_gmult_4bit, 
//GO(gcm_gmult_neon, 
//GO(gcm_gmult_v8, 
//GO(gcm_init_neon, 
//GO(gcm_init_v8, 
//GO(GENERAL_NAME_cmp, 
GO(GENERAL_NAME_dup, pFp)
GO(GENERAL_NAME_free, vFp)
//GO(GENERAL_NAME_get0_otherName, 
//GO(GENERAL_NAME_get0_value, 
GO(GENERAL_NAME_new, pFv)
//GO(GENERAL_NAME_print, 
//GO(GENERAL_NAME_set0_othername, 
//GO(GENERAL_NAME_set0_value, 
GO(GENERAL_NAMES_free, vFp)
GO(GENERAL_NAMES_new, pFv)
GO(GENERAL_SUBTREE_free, vFp)
GO(GENERAL_SUBTREE_new, pFv)
//GO(get_rfc2409_prime_1024, 
//GO(get_rfc2409_prime_768, 
//GO(get_rfc3526_prime_1536, 
//GO(get_rfc3526_prime_2048, 
//GO(get_rfc3526_prime_3072, 
//GO(get_rfc3526_prime_4096, 
//GO(get_rfc3526_prime_6144, 
//GO(get_rfc3526_prime_8192, 
//GO(hex_to_string, 
//GO(HMAC, 
//GO(HMAC_CTX_cleanup, 
//GO(HMAC_CTX_copy, 
//GO(HMAC_CTX_init, 
//GO(HMAC_CTX_set_flags, 
//GO(HMAC_Final, 
//GO(HMAC_Init, 
//GO(HMAC_Init_ex, 
//GO(HMAC_Update, 
//GO(i2a_ACCESS_DESCRIPTION, 
//GO(i2a_ASN1_ENUMERATED, 
//GO(i2a_ASN1_INTEGER, 
//GO(i2a_ASN1_OBJECT, 
//GO(i2a_ASN1_STRING, 
//GO(i2b_PrivateKey_bio, 
//GO(i2b_PublicKey_bio, 
//GO(i2b_PVK_bio, 
//GO(i2c_ASN1_BIT_STRING, 
//GO(i2c_ASN1_INTEGER, 
//GO(i2d_ACCESS_DESCRIPTION, 
//GO(i2d_ASN1_bio_stream, 
//GO(i2d_ASN1_BIT_STRING, 
//GO(i2d_ASN1_BMPSTRING, 
//GO(i2d_ASN1_BOOLEAN, 
//GO(i2d_ASN1_bytes, 
//GO(i2d_ASN1_ENUMERATED, 
//GO(i2d_ASN1_GENERALIZEDTIME, 
//GO(i2d_ASN1_GENERALSTRING, 
//GO(i2d_ASN1_IA5STRING, 
//GO(i2d_ASN1_INTEGER, 
//GO(i2d_ASN1_NULL, 
//GO(i2d_ASN1_OBJECT, 
//GO(i2d_ASN1_OCTET_STRING, 
//GO(i2d_ASN1_PRINTABLE, 
//GO(i2d_ASN1_PRINTABLESTRING, 
//GO(i2d_ASN1_SEQUENCE_ANY, 
//GO(i2d_ASN1_SET, 
//GO(i2d_ASN1_SET_ANY, 
//GO(i2d_ASN1_T61STRING, 
//GO(i2d_ASN1_TIME, 
//GO(i2d_ASN1_TYPE, 
//GO(i2d_ASN1_UNIVERSALSTRING, 
//GO(i2d_ASN1_UTCTIME, 
//GO(i2d_ASN1_UTF8STRING, 
//GO(i2d_ASN1_VISIBLESTRING, 
//GO(i2d_AUTHORITY_INFO_ACCESS, 
//GO(i2d_AUTHORITY_KEYID, 
//GO(i2d_BASIC_CONSTRAINTS, 
//GO(i2d_CERTIFICATEPOLICIES, 
GO(i2d_CMS_bio, iFpp)
//GO(i2d_CMS_bio_stream, 
//GO(i2d_CMS_ContentInfo, 
//GO(i2d_CMS_ReceiptRequest, 
//GO(i2d_CRL_DIST_POINTS, 
GO(i2d_DHparams, iFpp)
//GO(i2d_DHxparams, 
//GO(i2d_DIRECTORYSTRING, 
//GO(i2d_DISPLAYTEXT, 
//GO(i2d_DIST_POINT, 
//GO(i2d_DIST_POINT_NAME, 
//GO(i2d_DSAparams, 
GO(i2d_DSAPrivateKey, iFpp)
GO(i2d_DSAPrivateKey_bio, iFpp)
GO(i2d_DSAPrivateKey_fp, iFpp)
GO(i2d_DSA_PUBKEY, iFpp)
GO(i2d_DSA_PUBKEY_bio, iFpp)
GO(i2d_DSA_PUBKEY_fp, iFpp)
//GO(i2d_DSAPublicKey, 
//GO(i2d_DSA_SIG, 
//GO(i2d_ECDSA_SIG, 
//GO(i2d_ECParameters, 
//GO(i2d_ECPKParameters, 
//GO(i2d_ECPKPARAMETERS, 
GO(i2d_ECPrivateKey, iFpp)
//GO(i2d_EC_PRIVATEKEY, 
GO(i2d_ECPrivateKey_bio, iFpp)
GO(i2d_ECPrivateKey_fp, iFpp)
GO(i2d_EC_PUBKEY, iFpp)
GO(i2d_EC_PUBKEY_bio, iFpp)
GO(i2d_EC_PUBKEY_fp, iFpp)
//GO(i2d_EDIPARTYNAME, 
//GO(i2d_ESS_CERT_ID, 
//GO(i2d_ESS_ISSUER_SERIAL, 
//GO(i2d_ESS_SIGNING_CERT, 
//GO(i2d_EXTENDED_KEY_USAGE, 
//GO(i2d_GENERAL_NAME, 
//GO(i2d_GENERAL_NAMES, 
//GO(i2d_int_dhx, 
//GO(i2d_ISSUING_DIST_POINT, 
//GO(i2d_KRB5_APREQ, 
//GO(i2d_KRB5_APREQBODY, 
//GO(i2d_KRB5_AUTHDATA, 
//GO(i2d_KRB5_AUTHENT, 
//GO(i2d_KRB5_AUTHENTBODY, 
//GO(i2d_KRB5_CHECKSUM, 
//GO(i2d_KRB5_ENCDATA, 
//GO(i2d_KRB5_ENCKEY, 
//GO(i2d_KRB5_PRINCNAME, 
//GO(i2d_KRB5_TICKET, 
//GO(i2d_KRB5_TKTBODY, 
//GO(i2d_NETSCAPE_CERT_SEQUENCE, 
//GO(i2d_NETSCAPE_ENCRYPTED_PKEY, 
//GO(i2d_NETSCAPE_PKEY, 
//GO(i2d_Netscape_RSA, 
//GO(i2d_NETSCAPE_SPKAC, 
//GO(i2d_NETSCAPE_SPKI, 
//GO(i2d_NETSCAPE_X509, 
//GO(i2d_NOTICEREF, 
//GO(i2d_OCSP_BASICRESP, 
//GO(i2d_OCSP_CERTID, 
//GO(i2d_OCSP_CERTSTATUS, 
//GO(i2d_OCSP_CRLID, 
//GO(i2d_OCSP_ONEREQ, 
//GO(i2d_OCSP_REQINFO, 
//GO(i2d_OCSP_REQUEST, 
//GO(i2d_OCSP_RESPBYTES, 
//GO(i2d_OCSP_RESPDATA, 
//GO(i2d_OCSP_RESPID, 
//GO(i2d_OCSP_RESPONSE, 
//GO(i2d_OCSP_REVOKEDINFO, 
//GO(i2d_OCSP_SERVICELOC, 
//GO(i2d_OCSP_SIGNATURE, 
//GO(i2d_OCSP_SINGLERESP, 
//GO(i2d_OTHERNAME, 
//GO(i2d_PBE2PARAM, 
//GO(i2d_PBEPARAM, 
//GO(i2d_PBKDF2PARAM, 
GO(i2d_PKCS12, iFpp)
//GO(i2d_PKCS12_BAGS, 
GO(i2d_PKCS12_bio, iFpp)
GO(i2d_PKCS12_fp, iFpp)
//GO(i2d_PKCS12_MAC_DATA, 
//GO(i2d_PKCS12_SAFEBAG, 
GO(i2d_PKCS7, iFpp)
GO(i2d_PKCS7_bio, iFpp)
//GO(i2d_PKCS7_bio_stream, 
//GO(i2d_PKCS7_DIGEST, 
//GO(i2d_PKCS7_ENC_CONTENT, 
//GO(i2d_PKCS7_ENCRYPT, 
//GO(i2d_PKCS7_ENVELOPE, 
GO(i2d_PKCS7_fp, iFpp)
//GO(i2d_PKCS7_ISSUER_AND_SERIAL, 
//GO(i2d_PKCS7_NDEF, 
//GO(i2d_PKCS7_RECIP_INFO, 
//GO(i2d_PKCS7_SIGNED, 
//GO(i2d_PKCS7_SIGN_ENVELOPE, 
//GO(i2d_PKCS7_SIGNER_INFO, 
GO(i2d_PKCS8_bio, iFpp)
GO(i2d_PKCS8_fp, iFpp)
GO(i2d_PKCS8PrivateKey_bio, iFpp)
GO(i2d_PKCS8PrivateKey_fp, iFpp)
GO(i2d_PKCS8PrivateKeyInfo_bio, iFpp)
GO(i2d_PKCS8PrivateKeyInfo_fp, iFpp)
GO(i2d_PKCS8PrivateKey_nid_bio, iFpp)
GO(i2d_PKCS8PrivateKey_nid_fp, iFpp)
GO(i2d_PKCS8_PRIV_KEY_INFO, iFpp)
GO(i2d_PKCS8_PRIV_KEY_INFO_bio, iFpp)
GO(i2d_PKCS8_PRIV_KEY_INFO_fp, iFpp)
//GO(i2d_PKEY_USAGE_PERIOD, 
//GO(i2d_POLICYINFO, 
//GO(i2d_POLICYQUALINFO, 
GO(i2d_PrivateKey, iFpp)
GO(i2d_PrivateKey_bio, iFpp)
GO(i2d_PrivateKey_fp, iFpp)
//GO(i2d_PROXY_CERT_INFO_EXTENSION, 
//GO(i2d_PROXY_POLICY, 
GO(i2d_PUBKEY, iFpp)
GO(i2d_PUBKEY_bio, iFpp)
GO(i2d_PUBKEY_fp, iFpp)
//GO(i2d_PublicKey, 
//GO(i2d_re_X509_tbs, 
//GO(i2d_RSA_NET, 
//GO(i2d_RSA_OAEP_PARAMS, 
GO(i2d_RSAPrivateKey, iFpp)
GO(i2d_RSAPrivateKey_bio, iFpp)
GO(i2d_RSAPrivateKey_fp, iFpp)
//GO(i2d_RSA_PSS_PARAMS, 
GO(i2d_RSA_PUBKEY, iFpp)
GO(i2d_RSA_PUBKEY_bio, iFpp)
GO(i2d_RSA_PUBKEY_fp, iFpp)
GO(i2d_RSAPublicKey, iFpp)
GO(i2d_RSAPublicKey_bio, iFpp)
GO(i2d_RSAPublicKey_fp, iFpp)
//GO(i2d_SXNET, 
//GO(i2d_SXNETID, 
//GO(i2d_TS_ACCURACY, 
GO(i2d_TS_MSG_IMPRINT, iFpp)
GO(i2d_TS_MSG_IMPRINT_bio, iFpp)
GO(i2d_TS_MSG_IMPRINT_fp, iFpp)
GO(i2d_TS_REQ, iFpp)
GO(i2d_TS_REQ_bio, iFpp)
GO(i2d_TS_REQ_fp, iFpp)
GO(i2d_TS_RESP, iFpp)
GO(i2d_TS_RESP_bio, iFpp)
GO(i2d_TS_RESP_fp, iFpp)
//GO(i2d_TS_STATUS_INFO, 
GO(i2d_TS_TST_INFO, iFpp)
GO(i2d_TS_TST_INFO_bio, iFpp)
GO(i2d_TS_TST_INFO_fp, iFpp)
//GO(i2d_USERNOTICE, 
GO(i2d_X509, iFpp)
//GO(i2d_X509_ALGOR, 
//GO(i2d_X509_ALGORS, 
//GO(i2d_X509_ATTRIBUTE, 
//GO(i2d_X509_AUX, 
GO(i2d_X509_bio, iFpp)
//GO(i2d_X509_CERT_AUX, 
//GO(i2d_X509_CERT_PAIR, 
//GO(i2d_X509_CINF, 
GO(i2d_X509_CRL, iFpp)
GO(i2d_X509_CRL_bio, iFpp)
GO(i2d_X509_CRL_fp, iFpp)
//GO(i2d_X509_CRL_INFO, 
//GO(i2d_X509_EXTENSION, 
//GO(i2d_X509_EXTENSIONS, 
GO(i2d_X509_fp, iFpp)
//GO(i2d_X509_NAME, 
//GO(i2d_X509_NAME_ENTRY, 
//GO(i2d_X509_PKEY, 
//GO(i2d_X509_PUBKEY, 
GO(i2d_X509_REQ, iFpp)
GO(i2d_X509_REQ_bio, iFpp)
GO(i2d_X509_REQ_fp, iFpp)
//GO(i2d_X509_REQ_INFO, 
//GO(i2d_X509_REVOKED, 
//GO(i2d_X509_SIG, 
//GO(i2d_X509_VAL, 
//GO(i2o_ECPublicKey, 
//GO(i2s_ASN1_ENUMERATED, 
//GO(i2s_ASN1_ENUMERATED_TABLE, 
//GO(i2s_ASN1_INTEGER, 
//GO(i2s_ASN1_OCTET_STRING, 
GO(i2t_ASN1_OBJECT, iFpip)
//GO(i2v_ASN1_BIT_STRING, 
//GO(i2v_GENERAL_NAME, 
//GO(i2v_GENERAL_NAMES, 
//GO(idea_cbc_encrypt, 
//GO(idea_cfb64_encrypt, 
//GO(idea_ecb_encrypt, 
//GO(idea_encrypt, 
//GO(idea_ofb64_encrypt, 
//GO(idea_options, 
//GO(idea_set_decrypt_key, 
//GO(idea_set_encrypt_key, 
//GO(_init, 
//GO(int_rsa_verify, 
//GO(ISSUING_DIST_POINT_free, 
//GO(ISSUING_DIST_POINT_new, 
//GO(KRB5_APREQBODY_free, 
//GO(KRB5_APREQBODY_new, 
//GO(KRB5_APREQ_free, 
//GO(KRB5_APREQ_new, 
//GO(KRB5_AUTHDATA_free, 
//GO(KRB5_AUTHDATA_new, 
//GO(KRB5_AUTHENTBODY_free, 
//GO(KRB5_AUTHENTBODY_new, 
//GO(KRB5_AUTHENT_free, 
//GO(KRB5_AUTHENT_new, 
//GO(KRB5_CHECKSUM_free, 
//GO(KRB5_CHECKSUM_new, 
//GO(KRB5_ENCDATA_free, 
//GO(KRB5_ENCDATA_new, 
//GO(KRB5_ENCKEY_free, 
//GO(KRB5_ENCKEY_new, 
//GO(KRB5_PRINCNAME_free, 
//GO(KRB5_PRINCNAME_new, 
//GO(KRB5_TICKET_free, 
//GO(KRB5_TICKET_new, 
//GO(KRB5_TKTBODY_free, 
//GO(KRB5_TKTBODY_new, 
//GO(level_add_node, 
//GO(level_find_node, 
//GO(lh_delete, 
//GO(lh_doall, 
//GO(lh_doall_arg, 
//GO(lh_free, 
//GO(lh_insert, 
//GO(lh_new, 
//GO(lh_node_stats, 
//GO(lh_node_stats_bio, 
//GO(lh_node_usage_stats, 
//GO(lh_node_usage_stats_bio, 
//GO(lh_num_items, 
//GO(lh_retrieve, 
//GO(lh_stats, 
//GO(lh_stats_bio, 
//GO(lh_strhash, 
//GO(MD4, 
//GO(md4_block_data_order, 
GO(MD4_Final, iFpp)
GO(MD4_Init, iFp)
//GO(MD4_Transform, 
GO(MD4_Update, iFppu)
GO(MD5, pFpLp)
//GO(md5_block_data_order, 
GO(MD5_Final, iFpp)
GO(MD5_Init, iFp)
GO(MD5_Transform, vFpp)
GO(MD5_Update, iFppu)
//GO(MDC2, 
//GO(MDC2_Final, 
//GO(MDC2_Init, 
//GO(MDC2_Update, 
//GO(name_cmp, 
//GO(NAME_CONSTRAINTS_check, 
//GO(NAME_CONSTRAINTS_free, 
//GO(NAME_CONSTRAINTS_new, 
//GO(NCONF_default, 
//GO(NCONF_dump_bio, 
//GO(NCONF_dump_fp, 
//GO(NCONF_free, 
//GO(NCONF_free_data, 
//GO(NCONF_get_number_e, 
//GO(NCONF_get_section, 
//GO(NCONF_get_string, 
//GO(NCONF_load, 
//GO(NCONF_load_bio, 
//GO(NCONF_load_fp, 
//GO(NCONF_new, 
//GO(NCONF_WIN32, 
//GO(NETSCAPE_CERT_SEQUENCE_free, 
//GO(NETSCAPE_CERT_SEQUENCE_new, 
//GO(NETSCAPE_ENCRYPTED_PKEY_free, 
//GO(NETSCAPE_ENCRYPTED_PKEY_new, 
//GO(NETSCAPE_PKEY_free, 
//GO(NETSCAPE_PKEY_new, 
//GO(NETSCAPE_SPKAC_free, 
//GO(NETSCAPE_SPKAC_new, 
//GO(NETSCAPE_SPKI_b64_decode, 
//GO(NETSCAPE_SPKI_b64_encode, 
//GO(NETSCAPE_SPKI_free, 
//GO(NETSCAPE_SPKI_get_pubkey, 
//GO(NETSCAPE_SPKI_new, 
//GO(NETSCAPE_SPKI_print, 
//GO(NETSCAPE_SPKI_set_pubkey, 
//GO(NETSCAPE_SPKI_sign, 
//GO(NETSCAPE_SPKI_verify, 
//GO(NETSCAPE_X509_free, 
//GO(NETSCAPE_X509_new, 
//GO(NOTICEREF_free, 
//GO(NOTICEREF_new, 
//GO(o2i_ECPublicKey, 
//GO(OBJ_add_object, 
//GO(OBJ_add_sigid, 
//GO(OBJ_bsearch_, 
//GO(OBJ_bsearch_ex_, 
GO(OBJ_cleanup, vFv)
GO(OBJ_cmp, iFpp)
GO(OBJ_create, iFppp)
//GO(OBJ_create_objects, 
GO(OBJ_dup, pFp)
//GO(OBJ_find_sigid_algs, 
//GO(OBJ_find_sigid_by_algs, 
GO(OBJ_ln2nid, iFp)
//GO(OBJ_NAME_add, 
//GO(OBJ_NAME_cleanup, 
//GO(OBJ_NAME_do_all, 
//GO(OBJ_NAME_do_all_sorted, 
//GO(OBJ_NAME_get, 
//GO(OBJ_NAME_init, 
//GO(OBJ_NAME_new_index, 
//GO(OBJ_NAME_remove, 
//GO(OBJ_new_nid, 
GO(OBJ_nid2ln, pFi)
GO(OBJ_nid2obj, pFi)
GO(OBJ_nid2sn, pFi)
GO(OBJ_obj2nid, iFp)
GO(OBJ_obj2txt, iFpipi)
//GO(OBJ_sigid_free, 
GO(OBJ_sn2nid, iFp)
GO(OBJ_txt2nid, iFp)
GO(OBJ_txt2obj, pFpi)
//GO(OCSP_accept_responses_new, 
//GO(OCSP_archive_cutoff_new, 
//GO(OCSP_basic_add1_cert, 
//GO(OCSP_basic_add1_nonce, 
//GO(OCSP_basic_add1_status, 
//GO(OCSP_BASICRESP_add1_ext_i2d, 
//GO(OCSP_BASICRESP_add_ext, 
//GO(OCSP_BASICRESP_delete_ext, 
//GO(OCSP_BASICRESP_free, 
//GO(OCSP_BASICRESP_get1_ext_d2i, 
//GO(OCSP_BASICRESP_get_ext, 
//GO(OCSP_BASICRESP_get_ext_by_critical, 
//GO(OCSP_BASICRESP_get_ext_by_NID, 
//GO(OCSP_BASICRESP_get_ext_by_OBJ, 
//GO(OCSP_BASICRESP_get_ext_count, 
//GO(OCSP_BASICRESP_new, 
//GO(OCSP_basic_sign, 
//GO(OCSP_basic_verify, 
//GO(OCSP_CERTID_dup, 
//GO(OCSP_CERTID_free, 
//GO(OCSP_cert_id_new, 
//GO(OCSP_CERTID_new, 
//GO(OCSP_CERTSTATUS_free, 
//GO(OCSP_CERTSTATUS_new, 
//GO(OCSP_cert_status_str, 
//GO(OCSP_cert_to_id, 
//GO(OCSP_check_nonce, 
//GO(OCSP_check_validity, 
//GO(OCSP_copy_nonce, 
//GO(OCSP_CRLID_free, 
//GO(OCSP_crlID_new, 
//GO(OCSP_CRLID_new, 
//GO(OCSP_crl_reason_str, 
//GO(OCSP_id_cmp, 
//GO(OCSP_id_get0_info, 
//GO(OCSP_id_issuer_cmp, 
//GO(OCSP_ONEREQ_add1_ext_i2d, 
//GO(OCSP_ONEREQ_add_ext, 
//GO(OCSP_ONEREQ_delete_ext, 
//GO(OCSP_ONEREQ_free, 
//GO(OCSP_onereq_get0_id, 
//GO(OCSP_ONEREQ_get1_ext_d2i, 
//GO(OCSP_ONEREQ_get_ext, 
//GO(OCSP_ONEREQ_get_ext_by_critical, 
//GO(OCSP_ONEREQ_get_ext_by_NID, 
//GO(OCSP_ONEREQ_get_ext_by_OBJ, 
//GO(OCSP_ONEREQ_get_ext_count, 
//GO(OCSP_ONEREQ_new, 
//GO(OCSP_parse_url, 
//GO(OCSP_REQ_CTX_add1_header, 
//GO(OCSP_REQ_CTX_free, 
//GO(OCSP_REQ_CTX_get0_mem_bio, 
//GO(OCSP_REQ_CTX_http, 
//GO(OCSP_REQ_CTX_i2d, 
//GO(OCSP_REQ_CTX_nbio, 
//GO(OCSP_REQ_CTX_nbio_d2i, 
//GO(OCSP_REQ_CTX_new, 
//GO(OCSP_REQ_CTX_set1_req, 
//GO(OCSP_REQINFO_free, 
//GO(OCSP_REQINFO_new, 
//GO(OCSP_request_add0_id, 
//GO(OCSP_request_add1_cert, 
//GO(OCSP_REQUEST_add1_ext_i2d, 
//GO(OCSP_request_add1_nonce, 
//GO(OCSP_REQUEST_add_ext, 
//GO(OCSP_REQUEST_delete_ext, 
//GO(OCSP_REQUEST_free, 
//GO(OCSP_REQUEST_get1_ext_d2i, 
//GO(OCSP_REQUEST_get_ext, 
//GO(OCSP_REQUEST_get_ext_by_critical, 
//GO(OCSP_REQUEST_get_ext_by_NID, 
//GO(OCSP_REQUEST_get_ext_by_OBJ, 
//GO(OCSP_REQUEST_get_ext_count, 
//GO(OCSP_request_is_signed, 
//GO(OCSP_REQUEST_new, 
//GO(OCSP_request_onereq_count, 
//GO(OCSP_request_onereq_get0, 
//GO(OCSP_REQUEST_print, 
//GO(OCSP_request_set1_name, 
//GO(OCSP_request_sign, 
//GO(OCSP_request_verify, 
//GO(OCSP_RESPBYTES_free, 
//GO(OCSP_RESPBYTES_new, 
//GO(OCSP_resp_count, 
//GO(OCSP_RESPDATA_free, 
//GO(OCSP_RESPDATA_new, 
//GO(OCSP_resp_find, 
//GO(OCSP_resp_find_status, 
//GO(OCSP_resp_get0, 
//GO(OCSP_RESPID_free, 
//GO(OCSP_RESPID_new, 
//GO(OCSP_response_create, 
//GO(OCSP_RESPONSE_free, 
//GO(OCSP_response_get1_basic, 
//GO(OCSP_RESPONSE_new, 
//GO(OCSP_RESPONSE_print, 
//GO(OCSP_response_status, 
//GO(OCSP_response_status_str, 
//GO(OCSP_REVOKEDINFO_free, 
//GO(OCSP_REVOKEDINFO_new, 
//GO(OCSP_sendreq_bio, 
//GO(OCSP_sendreq_nbio, 
//GO(OCSP_sendreq_new, 
//GO(OCSP_SERVICELOC_free, 
//GO(OCSP_SERVICELOC_new, 
//GO(OCSP_set_max_response_length, 
//GO(OCSP_SIGNATURE_free, 
//GO(OCSP_SIGNATURE_new, 
//GO(OCSP_single_get0_status, 
//GO(OCSP_SINGLERESP_add1_ext_i2d, 
//GO(OCSP_SINGLERESP_add_ext, 
//GO(OCSP_SINGLERESP_delete_ext, 
//GO(OCSP_SINGLERESP_free, 
//GO(OCSP_SINGLERESP_get1_ext_d2i, 
//GO(OCSP_SINGLERESP_get_ext, 
//GO(OCSP_SINGLERESP_get_ext_by_critical, 
//GO(OCSP_SINGLERESP_get_ext_by_NID, 
//GO(OCSP_SINGLERESP_get_ext_by_OBJ, 
//GO(OCSP_SINGLERESP_get_ext_count, 
//GO(OCSP_SINGLERESP_new, 
//GO(OCSP_url_svcloc_new, 
GO(OPENSSL_add_all_algorithms_conf, vFv)
GO(OPENSSL_add_all_algorithms_noconf, vFv)
GO(OpenSSL_add_all_ciphers, vFv)
//GO(OpenSSL_add_all_digests, 
//GO(OPENSSL_asc2uni, 
//GO(OPENSSL_atomic_add, 
//GO(OPENSSL_cleanse, 
GO(OPENSSL_config, vFp)
//GO(OPENSSL_cpuid_setup, 
//GO(OpenSSLDie, 
//GO(OPENSSL_DIR_end, 
//GO(OPENSSL_DIR_read, 
//GO(OPENSSL_gmtime, 
//GO(OPENSSL_gmtime_adj, 
//GO(OPENSSL_gmtime_diff, 
//GO(OPENSSL_ia32cap_loc, 
//GO(OPENSSL_init, 
GO(OPENSSL_init_crypto, iFUp)
//GO(OPENSSL_instrument_bus, 
//GO(OPENSSL_instrument_bus2, 
//GO(OPENSSL_isservice, 
//GO(OPENSSL_issetugid, 
//GO(OPENSSL_load_builtin_modules, 
//GO(OPENSSL_memcmp, 
GO(OPENSSL_no_config, vFv)
//GO(OPENSSL_rdtsc, 
//GO(OPENSSL_showfatal, 
//GO(OPENSSL_stderr, 
//GO(OPENSSL_strcasecmp, 
//GO(OPENSSL_strncasecmp, 
//GO(OPENSSL_uni2asc, 
//GO(OPENSSL_wipe_cpu, 
//GO(_ossl_096_des_random_seed, 
//GO(_ossl_old_crypt, 
//GO(_ossl_old_des_cbc_cksum, 
//GO(_ossl_old_des_cbc_encrypt, 
//GO(_ossl_old_des_cfb64_encrypt, 
//GO(_ossl_old_des_cfb_encrypt, 
//GO(_ossl_old_des_crypt, 
//GO(_ossl_old_des_decrypt3, 
//GO(_ossl_old_des_ecb3_encrypt, 
//GO(_ossl_old_des_ecb_encrypt, 
//GO(_ossl_old_des_ede3_cbc_encrypt, 
//GO(_ossl_old_des_ede3_cfb64_encrypt, 
//GO(_ossl_old_des_ede3_ofb64_encrypt, 
//GO(_ossl_old_des_enc_read, 
//GO(_ossl_old_des_encrypt, 
//GO(_ossl_old_des_encrypt2, 
//GO(_ossl_old_des_encrypt3, 
//GO(_ossl_old_des_enc_write, 
//GO(_ossl_old_des_fcrypt, 
//GO(_ossl_old_des_is_weak_key, 
//GO(_ossl_old_des_key_sched, 
//GO(_ossl_old_des_ncbc_encrypt, 
//GO(_ossl_old_des_ofb64_encrypt, 
//GO(_ossl_old_des_ofb_encrypt, 
//GO(_ossl_old_des_options, 
//GO(_ossl_old_des_pcbc_encrypt, 
//GO(_ossl_old_des_quad_cksum, 
//GO(_ossl_old_des_random_key, 
//GO(_ossl_old_des_random_seed, 
//GO(_ossl_old_des_read_2passwords, 
//GO(_ossl_old_des_read_password, 
//GO(_ossl_old_des_read_pw, 
//GO(_ossl_old_des_read_pw_string, 
//GO(_ossl_old_des_set_key, 
//GO(_ossl_old_des_set_odd_parity, 
//GO(_ossl_old_des_string_to_2keys, 
//GO(_ossl_old_des_string_to_key, 
//GO(_ossl_old_des_xcbc_encrypt, 
//GO(OTHERNAME_cmp, 
//GO(OTHERNAME_free, 
//GO(OTHERNAME_new, 
//GO(PBE2PARAM_free, 
//GO(PBE2PARAM_new, 
//GO(PBEPARAM_free, 
//GO(PBEPARAM_new, 
//GO(PBKDF2PARAM_free, 
//GO(PBKDF2PARAM_new, 
//GO(PEM_ASN1_read, 
//GO(PEM_ASN1_read_bio, 
//GO(PEM_ASN1_write, 
//GO(PEM_ASN1_write_bio, 
//GO(PEM_bytes_read_bio, 
//GO(pem_check_suffix, 
//GO(PEM_def_callback, 
//GO(PEM_dek_info, 
//GO(PEM_do_header, 
//GO(PEM_get_EVP_CIPHER_INFO, 
//GO(PEM_proc_type, 
//GO(PEM_read, 
//GO(PEM_read_bio, 
//GO(PEM_read_bio_CMS, 
//GO(PEM_read_bio_DHparams, 
//GO(PEM_read_bio_DSAparams, 
GOM(PEM_read_bio_DSAPrivateKey, pFEpppp)
GOM(PEM_read_bio_DSA_PUBKEY, pFEpppp)
//GO(PEM_read_bio_ECPKParameters, 
GOM(PEM_read_bio_ECPrivateKey, pFEpppp)
GOM(PEM_read_bio_EC_PUBKEY, pFEpppp)
//GO(PEM_read_bio_NETSCAPE_CERT_SEQUENCE, 
//GO(PEM_read_bio_Parameters, 
//GO(PEM_read_bio_PKCS7, 
//GO(PEM_read_bio_PKCS8, 
//GO(PEM_read_bio_PKCS8_PRIV_KEY_INFO, 
//GO(PEM_read_bio_PrivateKey, 
//GO(PEM_read_bio_PUBKEY, 
GOM(PEM_read_bio_RSAPrivateKey, pFEpppp)
GOM(PEM_read_bio_RSA_PUBKEY, pFEpppp)
//GO(PEM_read_bio_RSAPublicKey, 
//GO(PEM_read_bio_X509, 
//GO(PEM_read_bio_X509_AUX, 
//GO(PEM_read_bio_X509_CERT_PAIR, 
//GO(PEM_read_bio_X509_CRL, 
//GO(PEM_read_bio_X509_REQ, 
//GO(PEM_read_CMS, 
//GO(PEM_read_DHparams, 
//GO(PEM_read_DSAparams, 
//GO(PEM_read_DSAPrivateKey, 
//GO(PEM_read_DSA_PUBKEY, 
//GO(PEM_read_ECPKParameters, 
//GO(PEM_read_ECPrivateKey, 
//GO(PEM_read_EC_PUBKEY, 
//GO(PEM_read_NETSCAPE_CERT_SEQUENCE, 
//GO(PEM_read_PKCS7, 
//GO(PEM_read_PKCS8, 
//GO(PEM_read_PKCS8_PRIV_KEY_INFO, 
//GO(PEM_read_PrivateKey, 
//GO(PEM_read_PUBKEY, 
//GO(PEM_read_RSAPrivateKey, 
//GO(PEM_read_RSA_PUBKEY, 
//GO(PEM_read_RSAPublicKey, 
GO(PEM_read_X509, pFpppp)
GO(PEM_read_X509_AUX, pFpppp)
//GO(PEM_read_X509_CERT_PAIR, 
//GO(PEM_read_X509_CRL, 
//GO(PEM_read_X509_REQ, 
//GO(PEM_SealFinal, 
//GO(PEM_SealInit, 
//GO(PEM_SealUpdate, 
//GO(PEM_SignFinal, 
//GO(PEM_SignInit, 
//GO(PEM_SignUpdate, 
//GO(PEM_write, 
//GO(PEM_write_bio, 
//GO(PEM_write_bio_ASN1_stream, 
//GO(PEM_write_bio_CMS, 
//GO(PEM_write_bio_CMS_stream, 
//GO(PEM_write_bio_DHparams, 
//GO(PEM_write_bio_DHxparams, 
//GO(PEM_write_bio_DSAparams, 
GOM(PEM_write_bio_DSAPrivateKey, iFEppppipp)
GO(PEM_write_bio_DSA_PUBKEY, iFpp)
//GO(PEM_write_bio_ECPKParameters, 
GOM(PEM_write_bio_ECPrivateKey, iFEppppipp)
GO(PEM_write_bio_EC_PUBKEY, iFpp)
//GO(PEM_write_bio_NETSCAPE_CERT_SEQUENCE, 
//GO(PEM_write_bio_Parameters, 
//GO(PEM_write_bio_PKCS7, 
//GO(PEM_write_bio_PKCS7_stream, 
//GO(PEM_write_bio_PKCS8, 
//GO(PEM_write_bio_PKCS8PrivateKey, 
//GO(PEM_write_bio_PKCS8PrivateKey_nid, 
//GO(PEM_write_bio_PKCS8_PRIV_KEY_INFO, 
//GO(PEM_write_bio_PrivateKey, 
//GO(PEM_write_bio_PUBKEY, 
GOM(PEM_write_bio_RSAPrivateKey, iFEppppipp)
GO(PEM_write_bio_RSA_PUBKEY, iFpp)
//GO(PEM_write_bio_RSAPublicKey, 
GO(PEM_write_bio_X509, iFpp)
GO(PEM_write_bio_X509_AUX, iFpp)
//GO(PEM_write_bio_X509_CERT_PAIR, 
//GO(PEM_write_bio_X509_CRL, 
GO(PEM_write_bio_X509_REQ, iFpp)
//GO(PEM_write_bio_X509_REQ_NEW, 
//GO(PEM_write_CMS, 
//GO(PEM_write_DHparams, 
//GO(PEM_write_DHxparams, 
//GO(PEM_write_DSAparams, 
//GO(PEM_write_DSAPrivateKey, 
//GO(PEM_write_DSA_PUBKEY, 
//GO(PEM_write_ECPKParameters, 
//GO(PEM_write_ECPrivateKey, 
//GO(PEM_write_EC_PUBKEY, 
//GO(PEM_write_NETSCAPE_CERT_SEQUENCE, 
//GO(PEM_write_PKCS7, 
//GO(PEM_write_PKCS8, 
//GO(PEM_write_PKCS8PrivateKey, 
//GO(PEM_write_PKCS8PrivateKey_nid, 
//GO(PEM_write_PKCS8_PRIV_KEY_INFO, 
//GO(PEM_write_PrivateKey, 
//GO(PEM_write_PUBKEY, 
//GO(PEM_write_RSAPrivateKey, 
//GO(PEM_write_RSA_PUBKEY, 
//GO(PEM_write_RSAPublicKey, 
//GO(PEM_write_X509, 
//GO(PEM_write_X509_AUX, 
//GO(PEM_write_X509_CERT_PAIR, 
//GO(PEM_write_X509_CRL, 
//GO(PEM_write_X509_REQ, 
//GO(PEM_write_X509_REQ_NEW, 
//GO(PEM_X509_INFO_read, 
//GO(PEM_X509_INFO_read_bio, 
//GO(PEM_X509_INFO_write_bio, 
//GO(pitem_free, 
//GO(pitem_new, 
//GO(PKCS12_add_cert, 
//GO(PKCS12_add_CSPName_asc, 
//GO(PKCS12_add_friendlyname_asc, 
//GO(PKCS12_add_friendlyname_uni, 
//GO(PKCS12_add_key, 
//GO(PKCS12_add_localkeyid, 
//GO(PKCS12_add_safe, 
//GO(PKCS12_add_safes, 
//GO(PKCS12_BAGS_free, 
//GO(PKCS12_BAGS_new, 
//GO(PKCS12_certbag2x509, 
//GO(PKCS12_certbag2x509crl, 
//GO(PKCS12_create, 
//GO(PKCS12_decrypt_skey, 
GO(PKCS12_free, vFp)
//GO(PKCS12_gen_mac, 
//GO(PKCS12_get_attr_gen, 
//GO(PKCS12_get_friendlyname, 
//GO(PKCS12_init, 
//GO(PKCS12_item_decrypt_d2i, 
//GO(PKCS12_item_i2d_encrypt, 
//GO(PKCS12_item_pack_safebag, 
//GO(PKCS12_key_gen_asc, 
//GO(PKCS12_key_gen_uni, 
//GO(PKCS12_MAC_DATA_free, 
//GO(PKCS12_MAC_DATA_new, 
//GO(PKCS12_MAKE_KEYBAG, 
//GO(PKCS12_MAKE_SHKEYBAG, 
GO(PKCS12_new, pFv)
//GO(PKCS12_newpass, 
//GO(PKCS12_pack_authsafes, 
//GO(PKCS12_pack_p7data, 
//GO(PKCS12_pack_p7encdata, 
GO(PKCS12_parse, iFppppp)
GO(PKCS12_PBE_add, vFv)
//GO(PKCS12_pbe_crypt, 
GO(PKCS12_PBE_keyivgen, iFppipppi)
//GO(PKCS12_SAFEBAG_free, 
//GO(PKCS12_SAFEBAG_new, 
//GO(PKCS12_set_mac, 
//GO(PKCS12_setup_mac, 
//GO(PKCS12_unpack_authsafes, 
//GO(PKCS12_unpack_p7data, 
//GO(PKCS12_unpack_p7encdata, 
//GO(PKCS12_verify_mac, 
//GO(PKCS12_x5092certbag, 
//GO(PKCS12_x509crl2certbag, 
//GO(PKCS1_MGF1, 
//GO(PKCS5_pbe2_set, 
//GO(PKCS5_pbe2_set_iv, 
//GO(PKCS5_PBE_add, 
//GO(PKCS5_PBE_keyivgen, 
//GO(PKCS5_pbe_set, 
//GO(PKCS5_pbe_set0_algor, 
//GO(PKCS5_PBKDF2_HMAC, 
//GO(PKCS5_PBKDF2_HMAC_SHA1, 
//GO(PKCS5_pbkdf2_set, 
//GO(PKCS5_v2_PBE_keyivgen, 
//GO(PKCS5_v2_PBKDF2_keyivgen, 
//GO(PKCS7_add0_attrib_signing_time, 
//GO(PKCS7_add1_attrib_digest, 
//GO(PKCS7_add_attrib_content_type, 
//GO(PKCS7_add_attrib_smimecap, 
//GO(PKCS7_add_attribute, 
//GO(PKCS7_add_certificate, 
//GO(PKCS7_add_crl, 
//GO(PKCS7_add_recipient, 
//GO(PKCS7_add_recipient_info, 
//GO(PKCS7_add_signature, 
//GO(PKCS7_add_signed_attribute, 
//GO(PKCS7_add_signer, 
//GO(PKCS7_cert_from_signer_info, 
//GO(PKCS7_content_new, 
//GO(PKCS7_ctrl, 
//GO(PKCS7_dataDecode, 
//GO(PKCS7_dataFinal, 
//GO(PKCS7_dataInit, 
//GO(PKCS7_dataVerify, 
//GO(PKCS7_decrypt, 
//GO(PKCS7_DIGEST_free, 
//GO(PKCS7_digest_from_attributes, 
//GO(PKCS7_DIGEST_new, 
//GO(PKCS7_dup, 
//GO(PKCS7_ENC_CONTENT_free, 
//GO(PKCS7_ENC_CONTENT_new, 
//GO(PKCS7_encrypt, 
//GO(PKCS7_ENCRYPT_free, 
//GO(PKCS7_ENCRYPT_new, 
//GO(PKCS7_ENVELOPE_free, 
//GO(PKCS7_ENVELOPE_new, 
//GO(PKCS7_final, 
//GO(PKCS7_free, 
//GO(PKCS7_get0_signers, 
//GO(PKCS7_get_attribute, 
//GO(PKCS7_get_issuer_and_serial, 
//GO(PKCS7_get_signed_attribute, 
//GO(PKCS7_get_signer_info, 
//GO(PKCS7_get_smimecap, 
//GO(PKCS7_ISSUER_AND_SERIAL_digest, 
//GO(PKCS7_ISSUER_AND_SERIAL_free, 
//GO(PKCS7_ISSUER_AND_SERIAL_new, 
//GO(PKCS7_new, 
//GO(PKCS7_print_ctx, 
//GO(PKCS7_RECIP_INFO_free, 
//GO(PKCS7_RECIP_INFO_get0_alg, 
//GO(PKCS7_RECIP_INFO_new, 
//GO(PKCS7_RECIP_INFO_set, 
//GO(PKCS7_set0_type_other, 
//GO(PKCS7_set_attributes, 
//GO(PKCS7_set_cipher, 
//GO(PKCS7_set_content, 
//GO(PKCS7_set_digest, 
//GO(PKCS7_set_signed_attributes, 
//GO(PKCS7_set_type, 
//GO(PKCS7_sign, 
//GO(PKCS7_sign_add_signer, 
//GO(PKCS7_signatureVerify, 
//GO(PKCS7_SIGNED_free, 
//GO(PKCS7_SIGNED_new, 
//GO(PKCS7_SIGN_ENVELOPE_free, 
//GO(PKCS7_SIGN_ENVELOPE_new, 
//GO(PKCS7_SIGNER_INFO_free, 
//GO(PKCS7_SIGNER_INFO_get0_algs, 
//GO(PKCS7_SIGNER_INFO_new, 
//GO(PKCS7_SIGNER_INFO_set, 
//GO(PKCS7_SIGNER_INFO_sign, 
//GO(PKCS7_simple_smimecap, 
//GO(PKCS7_stream, 
//GO(PKCS7_to_TS_TST_INFO, 
//GO(PKCS7_verify, 
//GO(PKCS8_add_keyusage, 
//GO(PKCS8_decrypt, 
//GO(PKCS8_encrypt, 
//GO(PKCS8_pkey_get0, 
//GO(PKCS8_pkey_set0, 
//GO(PKCS8_PRIV_KEY_INFO_free, 
//GO(PKCS8_PRIV_KEY_INFO_new, 
//GO(PKCS8_set_broken, 
//GO(PKEY_USAGE_PERIOD_free, 
//GO(PKEY_USAGE_PERIOD_new, 
//GO(policy_cache_find_data, 
//GO(policy_cache_free, 
//GO(policy_cache_set, 
//GO(policy_cache_set_mapping, 
//GO(POLICY_CONSTRAINTS_free, 
//GO(POLICY_CONSTRAINTS_new, 
//GO(policy_data_free, 
//GO(policy_data_new, 
//GO(POLICYINFO_free, 
//GO(POLICYINFO_new, 
//GO(POLICY_MAPPING_free, 
//GO(POLICY_MAPPING_new, 
//GO(policy_node_cmp_new, 
//GO(policy_node_free, 
//GO(policy_node_match, 
//GO(POLICYQUALINFO_free, 
//GO(POLICYQUALINFO_new, 
//GO(pqueue_find, 
//GO(pqueue_free, 
//GO(pqueue_insert, 
//GO(pqueue_iterator, 
//GO(pqueue_new, 
//GO(pqueue_next, 
//GO(pqueue_peek, 
//GO(pqueue_pop, 
//GO(pqueue_print, 
//GO(pqueue_size, 
GO(private_AES_set_decrypt_key, iFpip)
GO(private_AES_set_encrypt_key, iFpip)
//GO(private_Camellia_set_key, 
//GO(private_RC4_set_key, 
//GO(PROXY_CERT_INFO_EXTENSION_free, 
//GO(PROXY_CERT_INFO_EXTENSION_new, 
//GO(PROXY_POLICY_free, 
//GO(PROXY_POLICY_new, 
GO(RAND_add, vFpid)
GO(RAND_bytes, iFpi)
//GO(RAND_cleanup, 
GO(RAND_egd, iFp)
GO(RAND_egd_bytes, iFpi)
GO(RAND_file_name, pFpL)
//GO(RAND_get_rand_method, 
GO(RAND_load_file, iFpl)
//GO(RAND_poll, 
GO(RAND_pseudo_bytes, iFpi)
GO(RAND_query_egd_bytes, iFppi)
GO(RAND_seed, vFpi)
//GO(RAND_set_rand_engine, 
//GO(RAND_set_rand_method, 
//GO(RAND_SSLeay, 
GO(RAND_status, iFv)
GO(RAND_write_file, iFp)
//GO(RC2_cbc_encrypt, 
//GO(RC2_cfb64_encrypt, 
//GO(RC2_decrypt, 
//GO(RC2_ecb_encrypt, 
//GO(RC2_encrypt, 
//GO(RC2_ofb64_encrypt, 
//GO(RC2_set_key, 
//GO(RC4, 
//GO(RC4_options, 
//GO(RC4_set_key, 
//GO(RIPEMD160, 
//GO(ripemd160_block_data_order, 
//GO(RIPEMD160_Final, 
//GO(RIPEMD160_Init, 
//GO(RIPEMD160_Transform, 
//GO(RIPEMD160_Update, 
//GO(RSA_blinding_off, 
//GO(RSA_blinding_on, 
//GO(RSA_check_key, 
//GO(RSA_flags, 
GO(RSA_free, vFp)
//GO(RSA_generate_key, 
//GO(RSA_generate_key_ex, 
//GO(RSA_get_default_method, 
//GO(RSA_get_ex_data, 
//GO(RSA_get_ex_new_index, 
//GO(RSA_get_method, 
//GO(RSA_memory_lock, 
GO(RSA_new, pFv)
//GO(RSA_new_method, 
//GO(RSA_null_method, 
//GO(RSA_OAEP_PARAMS_free, 
//GO(RSA_OAEP_PARAMS_new, 
//GO(RSA_padding_add_none, 
//GO(RSA_padding_add_PKCS1_OAEP, 
//GO(RSA_padding_add_PKCS1_OAEP_mgf1, 
//GO(RSA_padding_add_PKCS1_PSS, 
//GO(RSA_padding_add_PKCS1_PSS_mgf1, 
//GO(RSA_padding_add_PKCS1_type_1, 
//GO(RSA_padding_add_PKCS1_type_2, 
//GO(RSA_padding_add_SSLv23, 
//GO(RSA_padding_add_X931, 
//GO(RSA_padding_check_none, 
//GO(RSA_padding_check_PKCS1_OAEP, 
//GO(RSA_padding_check_PKCS1_OAEP_mgf1, 
//GO(RSA_padding_check_PKCS1_type_1, 
//GO(RSA_padding_check_PKCS1_type_2, 
//GO(RSA_padding_check_SSLv23, 
//GO(RSA_padding_check_X931, 
//GO(RSA_PKCS1_SSLeay, 
//GO(RSA_print, 
//GO(RSA_print_fp, 
//GO(RSA_private_decrypt, 
//GO(RSA_private_encrypt, 
//GO(RSAPrivateKey_dup, 
//GO(RSA_PSS_PARAMS_free, 
//GO(RSA_PSS_PARAMS_new, 
//GO(RSA_public_decrypt, 
//GO(RSA_public_encrypt, 
//GO(RSAPublicKey_dup, 
//GO(RSA_set_default_method, 
//GO(RSA_set_ex_data, 
//GO(RSA_set_method, 
//GO(RSA_setup_blinding, 
GO(RSA_sign, iFipuppp)
//GO(RSA_sign_ASN1_OCTET_STRING, 
GO(RSA_size, iFp)
//GO(RSA_up_ref, 
GO(RSA_verify, iFipupup)
//GO(RSA_verify_ASN1_OCTET_STRING, 
//GO(RSA_verify_PKCS1_PSS, 
//GO(RSA_verify_PKCS1_PSS_mgf1, 
//GO(RSA_X931_hash_id, 
//GO(s2i_ASN1_INTEGER, 
//GO(s2i_ASN1_OCTET_STRING, 
//GO(SEED_cbc_encrypt, 
//GO(SEED_cfb128_encrypt, 
//GO(SEED_decrypt, 
//GO(SEED_ecb_encrypt, 
//GO(SEED_encrypt, 
//GO(SEED_ofb128_encrypt, 
//GO(SEED_set_key, 
//GO(SHA, 
GO(SHA1, pFpLp)
//GO(sha1_block_data_order, 
GO(SHA1_Final, iFpp)
GO(SHA1_Init, iFp)
//GO(SHA1_Transform, 
GO(SHA1_Update, iFppL)
GO(SHA224, pFpLp)
GO(SHA224_Final, iFpp)
GO(SHA224_Init, iFp)
GO(SHA224_Update, iFppL)
GO(SHA256, pFpLp)
//GO(sha256_block_data_order, 
//GO(sha256_block_data_order_neon, 
GO(SHA256_Final, iFpp)
GO(SHA256_Init, iFp)
//GO(SHA256_Transform, 
GO(SHA256_Update, iFppL)
GO(SHA384, pFpLp)
GO(SHA384_Final, iFpp)
GO(SHA384_Init, iFp)
GO(SHA384_Update, iFppL)
GO(SHA512, pFpLp)
//GO(sha512_block_data_order, 
GO(SHA512_Final, iFpp)
GO(SHA512_Init, iFp)
//GO(SHA512_Transform, 
GO(SHA512_Update, iFppL)
//GO(SHA_Final, 
//GO(SHA_Init, 
//GO(SHA_Transform, 
//GO(SHA_Update, 
//GO(sk_deep_copy, 
GO(sk_delete, pFpi)
GO(sk_delete_ptr, pFpp)
GO(sk_dup, pFp)
GO(sk_find, iFpp)
GO(sk_find_ex, iFpp)
GO(sk_free, vFp)
GO(sk_insert, iFppi)
GO(sk_is_sorted, iFp)
GOM(sk_new, pFEp)
GO(sk_new_null, pFv)
GO(sk_num, iFp)
GO(sk_pop, pFp)
GOM(sk_pop_free, vFEpp)
GO(sk_push, iFpp)
GO(sk_set, pFpip)
//GOM(sk_set_cmp_func, pFEpp)   //int(*)(const void *, const void *) 	sk_set_cmp_func (_STACK *sk, int(*c)(const void *, const void *))
GO(sk_shift, pFp)
GO(sk_sort, vFp)
GO(sk_unshift, iFpp)
GO(sk_value, pFpi)
//GO(sk_zero, 
//GO(SMIME_crlf_copy, 
//GO(SMIME_read_ASN1, 
//GO(SMIME_read_CMS, 
//GO(SMIME_read_PKCS7, 
//GO(SMIME_text, 
//GO(SMIME_write_ASN1, 
//GO(SMIME_write_CMS, 
//GO(SMIME_write_PKCS7, 
//GO(SRP_Calc_A, 
//GO(SRP_Calc_B, 
//GO(SRP_Calc_client_key, 
//GO(SRP_Calc_server_key, 
//GO(SRP_Calc_u, 
//GO(SRP_Calc_x, 
//GO(SRP_check_known_gN_param, 
//GO(SRP_create_verifier, 
//GO(SRP_create_verifier_BN, 
//GO(SRP_get_default_gN, 
//GO(SRP_user_pwd_free, 
//GO(SRP_VBASE_free, 
//GO(SRP_VBASE_get1_by_user, 
//GO(SRP_VBASE_get_by_user, 
//GO(SRP_VBASE_init, 
//GO(SRP_VBASE_new, 
//GO(SRP_Verify_A_mod_N, 
//GO(SRP_Verify_B_mod_N, 
GO(SSLeay, lFv)
//GO(ssleay_rand_bytes, 
GO(SSLeay_version, pFi)
//GO(string_to_hex, 
//GO(SXNET_add_id_asc, 
//GO(SXNET_add_id_INTEGER, 
//GO(SXNET_add_id_ulong, 
//GO(SXNET_free, 
//GO(SXNET_get_id_asc, 
//GO(SXNET_get_id_INTEGER, 
//GO(SXNET_get_id_ulong, 
//GO(SXNETID_free, 
//GO(SXNETID_new, 
//GO(SXNET_new, 
//GO(tree_find_sk, 
//GO(TS_ACCURACY_dup, 
//GO(TS_ACCURACY_free, 
//GO(TS_ACCURACY_get_micros, 
//GO(TS_ACCURACY_get_millis, 
//GO(TS_ACCURACY_get_seconds, 
//GO(TS_ACCURACY_new, 
//GO(TS_ACCURACY_set_micros, 
//GO(TS_ACCURACY_set_millis, 
//GO(TS_ACCURACY_set_seconds, 
//GO(TS_ASN1_INTEGER_print_bio, 
//GO(TS_CONF_get_tsa_section, 
//GO(TS_CONF_load_cert, 
//GO(TS_CONF_load_certs, 
//GO(TS_CONF_load_key, 
//GO(TS_CONF_set_accuracy, 
//GO(TS_CONF_set_certs, 
//GO(TS_CONF_set_clock_precision_digits, 
//GO(TS_CONF_set_crypto_device, 
//GO(TS_CONF_set_default_engine, 
//GO(TS_CONF_set_def_policy, 
//GO(TS_CONF_set_digests, 
//GO(TS_CONF_set_ess_cert_id_chain, 
//GO(TS_CONF_set_ordering, 
//GO(TS_CONF_set_policies, 
//GO(TS_CONF_set_serial, 
//GO(TS_CONF_set_signer_cert, 
//GO(TS_CONF_set_signer_key, 
//GO(TS_CONF_set_tsa_name, 
//GO(TS_ext_print_bio, 
//GO(TS_MSG_IMPRINT_dup, 
//GO(TS_MSG_IMPRINT_free, 
//GO(TS_MSG_IMPRINT_get_algo, 
//GO(TS_MSG_IMPRINT_get_msg, 
//GO(TS_MSG_IMPRINT_new, 
//GO(TS_MSG_IMPRINT_print_bio, 
//GO(TS_MSG_IMPRINT_set_algo, 
//GO(TS_MSG_IMPRINT_set_msg, 
//GO(TS_OBJ_print_bio, 
//GO(TS_REQ_add_ext, 
//GO(TS_REQ_delete_ext, 
//GO(TS_REQ_dup, 
//GO(TS_REQ_ext_free, 
//GO(TS_REQ_free, 
//GO(TS_REQ_get_cert_req, 
//GO(TS_REQ_get_ext, 
//GO(TS_REQ_get_ext_by_critical, 
//GO(TS_REQ_get_ext_by_NID, 
//GO(TS_REQ_get_ext_by_OBJ, 
//GO(TS_REQ_get_ext_count, 
//GO(TS_REQ_get_ext_d2i, 
//GO(TS_REQ_get_exts, 
//GO(TS_REQ_get_msg_imprint, 
//GO(TS_REQ_get_nonce, 
//GO(TS_REQ_get_policy_id, 
//GO(TS_REQ_get_version, 
//GO(TS_REQ_new, 
//GO(TS_REQ_print_bio, 
//GO(TS_REQ_set_cert_req, 
//GO(TS_REQ_set_msg_imprint, 
//GO(TS_REQ_set_nonce, 
//GO(TS_REQ_set_policy_id, 
//GO(TS_REQ_set_version, 
//GO(TS_REQ_to_TS_VERIFY_CTX, 
//GO(TS_RESP_create_response, 
//GO(TS_RESP_CTX_add_failure_info, 
//GO(TS_RESP_CTX_add_flags, 
//GO(TS_RESP_CTX_add_md, 
//GO(TS_RESP_CTX_add_policy, 
//GO(TS_RESP_CTX_free, 
//GO(TS_RESP_CTX_get_request, 
//GO(TS_RESP_CTX_get_tst_info, 
//GO(TS_RESP_CTX_new, 
//GO(TS_RESP_CTX_set_accuracy, 
//GO(TS_RESP_CTX_set_certs, 
//GO(TS_RESP_CTX_set_clock_precision_digits, 
//GO(TS_RESP_CTX_set_def_policy, 
//GO(TS_RESP_CTX_set_extension_cb, 
//GO(TS_RESP_CTX_set_serial_cb, 
//GO(TS_RESP_CTX_set_signer_cert, 
//GO(TS_RESP_CTX_set_signer_key, 
//GO(TS_RESP_CTX_set_status_info, 
//GO(TS_RESP_CTX_set_status_info_cond, 
//GO(TS_RESP_CTX_set_time_cb, 
//GO(TS_RESP_dup, 
//GO(TS_RESP_free, 
//GO(TS_RESP_get_status_info, 
//GO(TS_RESP_get_token, 
//GO(TS_RESP_get_tst_info, 
//GO(TS_RESP_new, 
//GO(TS_RESP_print_bio, 
//GO(TS_RESP_set_status_info, 
//GO(TS_RESP_set_tst_info, 
//GO(TS_RESP_verify_response, 
//GO(TS_RESP_verify_signature, 
//GO(TS_RESP_verify_token, 
//GO(TS_STATUS_INFO_dup, 
//GO(TS_STATUS_INFO_free, 
//GO(TS_STATUS_INFO_new, 
//GO(TS_STATUS_INFO_print_bio, 
//GO(TS_TST_INFO_add_ext, 
//GO(TS_TST_INFO_delete_ext, 
//GO(TS_TST_INFO_dup, 
//GO(TS_TST_INFO_ext_free, 
//GO(TS_TST_INFO_free, 
//GO(TS_TST_INFO_get_accuracy, 
//GO(TS_TST_INFO_get_ext, 
//GO(TS_TST_INFO_get_ext_by_critical, 
//GO(TS_TST_INFO_get_ext_by_NID, 
//GO(TS_TST_INFO_get_ext_by_OBJ, 
//GO(TS_TST_INFO_get_ext_count, 
//GO(TS_TST_INFO_get_ext_d2i, 
//GO(TS_TST_INFO_get_exts, 
//GO(TS_TST_INFO_get_msg_imprint, 
//GO(TS_TST_INFO_get_nonce, 
//GO(TS_TST_INFO_get_ordering, 
//GO(TS_TST_INFO_get_policy_id, 
//GO(TS_TST_INFO_get_serial, 
//GO(TS_TST_INFO_get_time, 
//GO(TS_TST_INFO_get_tsa, 
//GO(TS_TST_INFO_get_version, 
//GO(TS_TST_INFO_new, 
//GO(TS_TST_INFO_print_bio, 
//GO(TS_TST_INFO_set_accuracy, 
//GO(TS_TST_INFO_set_msg_imprint, 
//GO(TS_TST_INFO_set_nonce, 
//GO(TS_TST_INFO_set_ordering, 
//GO(TS_TST_INFO_set_policy_id, 
//GO(TS_TST_INFO_set_serial, 
//GO(TS_TST_INFO_set_time, 
//GO(TS_TST_INFO_set_tsa, 
//GO(TS_TST_INFO_set_version, 
//GO(TS_VERIFY_CTX_cleanup, 
//GO(TS_VERIFY_CTX_free, 
//GO(TS_VERIFY_CTX_init, 
//GO(TS_VERIFY_CTX_new, 
//GO(TS_X509_ALGOR_print_bio, 
//GO(TXT_DB_create_index, 
//GO(TXT_DB_free, 
//GO(TXT_DB_get_by_index, 
//GO(TXT_DB_insert, 
//GO(TXT_DB_read, 
//GO(TXT_DB_write, 
GO(UI_add_error_string, iFpp)
GO(UI_add_info_string, iFpp)
GO(UI_add_input_boolean, iFpppppip)
GO(UI_add_input_string, iFppipii)
GO(UI_add_user_data, pFpp)
//GO(UI_add_verify_string, 
GO(UI_construct_prompt, pFppp)
//GO(UI_create_method, 
//GO(UI_ctrl, 
//GO(UI_destroy_method, 
GO(UI_dup_error_string, iFpp)
GO(UI_dup_info_string, iFpp)
GO(UI_dup_input_boolean, iFpppppip)
GO(UI_dup_input_string, iFppipii)
GO(UI_dup_verify_string, iFppipiip)
GO(UI_free, vFp)
//GO(UI_get0_action_string, 
//GO(UI_get0_output_string, 
GO(UI_get0_result, pFpi)
//GO(UI_get0_result_string, 
//GO(UI_get0_test_string, 
GO(UI_get0_user_data, pFp)
GO(UI_get_default_method, pFv)
//GO(UI_get_ex_data, 
//GO(UI_get_ex_new_index, 
//GO(UI_get_input_flags, 
GO(UI_get_method, pFp)
//GO(UI_get_result_maxsize, 
//GO(UI_get_result_minsize, 
//GO(UI_get_string_type, 
//GO(UI_method_get_closer, 
//GO(UI_method_get_flusher, 
//GO(UI_method_get_opener, 
//GO(UI_method_get_prompt_constructor, 
//GO(UI_method_get_reader, 
//GO(UI_method_get_writer, 
//GO(UI_method_set_closer, 
//GO(UI_method_set_flusher, 
//GO(UI_method_set_opener, 
//GO(UI_method_set_prompt_constructor, 
//GO(UI_method_set_reader, 
//GO(UI_method_set_writer, 
GO(UI_new, pFv)
GO(UI_new_method, pFp)
GO(UI_OpenSSL, pFv)
GO(UI_process, iFp)
GO(UI_set_default_method, vFp)
//GO(UI_set_ex_data, 
GO(UI_set_method, pFpp)
//GO(UI_set_result, 
//GO(UI_UTIL_read_pw, 
//GO(UI_UTIL_read_pw_string, 
//GO(USERNOTICE_free, 
//GO(USERNOTICE_new, 
//GO(UTF8_getc, 
//GO(UTF8_putc, 
//GO(v2i_ASN1_BIT_STRING, 
//GO(v2i_GENERAL_NAME, 
//GO(v2i_GENERAL_NAME_ex, 
//GO(v2i_GENERAL_NAMES, 
//GO(WHIRLPOOL, 
//GO(WHIRLPOOL_BitUpdate, 
//GO(whirlpool_block, 
//GO(WHIRLPOOL_Final, 
//GO(WHIRLPOOL_Init, 
//GO(WHIRLPOOL_Update, 
GO(X509_add1_ext_i2d, iFpipiL)
//GO(X509_add1_reject_object, 
//GO(X509_add1_trust_object, 
//GO(X509_add_ext, 
//GO(X509_ALGOR_cmp, 
//GO(X509_ALGOR_dup, 
//GO(X509_ALGOR_free, 
//GO(X509_ALGOR_get0, 
//GO(X509_ALGOR_new, 
//GO(X509_ALGOR_set0, 
//GO(X509_ALGOR_set_md, 
//GO(X509_alias_get0, 
//GO(X509_alias_set1, 
//GO(X509at_add1_attr, 
//GO(X509at_add1_attr_by_NID, 
//GO(X509at_add1_attr_by_OBJ, 
//GO(X509at_add1_attr_by_txt, 
//GO(X509at_delete_attr, 
//GO(X509at_get0_data_by_OBJ, 
//GO(X509at_get_attr, 
//GO(X509at_get_attr_by_NID, 
//GO(X509at_get_attr_by_OBJ, 
//GO(X509at_get_attr_count, 
//GO(X509_ATTRIBUTE_count, 
//GO(X509_ATTRIBUTE_create, 
//GO(X509_ATTRIBUTE_create_by_NID, 
//GO(X509_ATTRIBUTE_create_by_OBJ, 
//GO(X509_ATTRIBUTE_create_by_txt, 
//GO(X509_ATTRIBUTE_dup, 
//GO(X509_ATTRIBUTE_free, 
//GO(X509_ATTRIBUTE_get0_data, 
//GO(X509_ATTRIBUTE_get0_object, 
//GO(X509_ATTRIBUTE_get0_type, 
//GO(X509_ATTRIBUTE_new, 
//GO(X509_ATTRIBUTE_set1_data, 
//GO(X509_ATTRIBUTE_set1_object, 
//GO(X509_CERT_AUX_free, 
//GO(X509_CERT_AUX_new, 
//GO(X509_CERT_AUX_print, 
//GO(X509_certificate_type, 
//GO(X509_CERT_PAIR_free, 
//GO(X509_CERT_PAIR_new, 
//GO(X509_chain_check_suiteb, 
//GO(X509_chain_up_ref, 
//GO(X509_check_akid, 
//GO(X509_check_ca, 
//GO(X509_check_email, 
//GO(X509_check_host, 
//GO(X509_check_ip, 
//GO(X509_check_ip_asc, 
GO(X509_check_issued, iFpp)
//GO(X509_check_private_key, 
//GO(X509_check_purpose, 
//GO(X509_check_trust, 
//GO(X509_CINF_free, 
//GO(X509_CINF_new, 
GO(X509_cmp, iFpp)
//GO(X509_cmp_current_time, 
//GO(X509_cmp_time, 
//GO(X509_CRL_add0_revoked, 
GO(X509_CRL_add1_ext_i2d, iFpipiL)
//GO(X509_CRL_add_ext, 
//GO(X509_CRL_check_suiteb, 
//GO(X509_CRL_cmp, 
//GO(X509_CRL_delete_ext, 
//GO(X509_CRL_diff, 
//GO(X509_CRL_digest, 
//GO(X509_CRL_dup, 
//GO(X509_CRL_free, 
//GO(X509_CRL_get0_by_cert, 
//GO(X509_CRL_get0_by_serial, 
//GO(X509_CRL_get_ext, 
//GO(X509_CRL_get_ext_by_critical, 
//GO(X509_CRL_get_ext_by_NID, 
//GO(X509_CRL_get_ext_by_OBJ, 
//GO(X509_CRL_get_ext_count, 
GO(X509_CRL_get_ext_d2i, pFpipp)
//GO(X509_CRL_get_meth_data, 
//GO(X509_CRL_http_nbio, 
//GO(X509_CRL_INFO_free, 
//GO(X509_CRL_INFO_new, 
//GO(X509_CRL_match, 
//GO(X509_CRL_METHOD_free, 
//GO(X509_CRL_METHOD_new, 
//GO(X509_CRL_new, 
//GO(X509_CRL_print, 
//GO(X509_CRL_print_fp, 
//GO(X509_CRL_set_default_method, 
GO(X509_CRL_set_issuer_name, iFpp)
//GO(X509_CRL_set_lastUpdate, 
//GO(X509_CRL_set_meth_data, 
//GO(X509_CRL_set_nextUpdate, 
//GO(X509_CRL_set_version, 
//GO(X509_CRL_sign, 
//GO(X509_CRL_sign_ctx, 
//GO(X509_CRL_sort, 
//GO(X509_CRL_verify, 
//GO(X509_delete_ext, 
//GO(X509_digest, 
GO(X509_dup, pFp)
//GO(X509_email_free, 
GO(X509_EXTENSION_create_by_NID, pFpiip)
GO(X509_EXTENSION_create_by_OBJ, pFppip)
//GO(X509_EXTENSION_dup, 
//GO(X509_EXTENSION_free, 
GO(X509_EXTENSION_get_critical, iFp)
GO(X509_EXTENSION_get_data, pFp)
GO(X509_EXTENSION_get_object, pFp)
//GO(X509_EXTENSION_new, 
GO(X509_EXTENSION_set_critical, iFpi)
GO(X509_EXTENSION_set_data, iFpp)
GO(X509_EXTENSION_set_object, iFpp)
//GO(X509_find_by_issuer_and_serial, 
//GO(X509_find_by_subject, 
GO(X509_free, vFp)
//GO(X509_get0_pubkey_bitstr, 
//GO(X509_get0_signature, 
//GO(X509_get1_email, 
//GO(X509_get1_ocsp, 
//GO(X509_get_default_cert_area, 
//GO(X509_get_default_cert_dir, 
//GO(X509_get_default_cert_dir_env, 
//GO(X509_get_default_cert_file, 
//GO(X509_get_default_cert_file_env, 
//GO(X509_get_default_private_dir, 
//GO(X509_get_ex_data, 
//GO(X509_get_ex_new_index, 
GO(X509_get_ext, pFpi)
//GO(X509_get_ext_by_critical, 
//GO(X509_get_ext_by_NID, 
//GO(X509_get_ext_by_OBJ, 
GO(X509_get_ext_count, iFp)
GO(X509_get_ext_d2i, pFpipp)
GO(X509_get_issuer_name, pFp)
GO(X509_get_pubkey, pFp)
//GO(X509_get_pubkey_parameters, 
GO(X509_get_serialNumber, pFp)
GO(X509_get0_serialNumber, pFp)
//GO(X509_get_signature_nid, 
GO(X509_get_subject_name, pFp)
GO(X509_get_X509_PUBKEY, pFp)
GO(X509_get0_pubkey, pFp)
//GO(X509_gmtime_adj, 
//GO(X509_http_nbio, 
//GO(X509_INFO_free, 
//GO(X509_INFO_new, 
//GO(X509_issuer_and_serial_cmp, 
//GO(X509_issuer_and_serial_hash, 
//GO(X509_issuer_name_cmp, 
//GO(X509_issuer_name_hash, 
//GO(X509_issuer_name_hash_old, 
//GO(X509_keyid_get0, 
//GO(X509_keyid_set1, 
GO(X509_load_cert_crl_file, iFppi)
GO(X509_load_cert_file, iFppi)
GO(X509_load_crl_file, iFppi)
//GO(X509_LOOKUP_by_alias, 
//GO(X509_LOOKUP_by_fingerprint, 
//GO(X509_LOOKUP_by_issuer_serial, 
//GO(X509_LOOKUP_by_subject, 
//GO(X509_LOOKUP_ctrl, 
GO(X509_LOOKUP_file, pFv)
//GO(X509_LOOKUP_free, 
GO(X509_LOOKUP_hash_dir, pFv)
//GO(X509_LOOKUP_init, 
//GO(X509_LOOKUP_new, 
//GO(X509_LOOKUP_shutdown, 
//GO(X509_NAME_add_entry, 
//GO(X509_NAME_add_entry_by_NID, 
//GO(X509_NAME_add_entry_by_OBJ, 
//GO(X509_NAME_add_entry_by_txt, 
//GO(X509_NAME_cmp, 
//GO(X509_NAME_delete_entry, 
//GO(X509_NAME_digest, 
//GO(X509_NAME_dup, 
GO(X509_NAME_entry_count, iFp)
GO(X509_NAME_ENTRY_create_by_NID, pFpiipi)
GO(X509_NAME_ENTRY_create_by_OBJ, pFppipi)
GO(X509_NAME_ENTRY_create_by_txt, pFppipi)
//GO(X509_NAME_ENTRY_dup, 
//GO(X509_NAME_ENTRY_free, 
GO(X509_NAME_ENTRY_get_data, pFp)
GO(X509_NAME_ENTRY_get_object, pFp)
//GO(X509_NAME_ENTRY_new, 
GO(X509_NAME_ENTRY_set_data, iFpipi)
GO(X509_NAME_ENTRY_set_object, iFpp)
//GO(X509_NAME_free, 
GO(X509_NAME_get_entry, pFpi)
GO(X509_NAME_get_index_by_NID, iFpii)
GO(X509_NAME_get_index_by_OBJ, iFppi)
GO(X509_NAME_get_text_by_NID, iFpipi)
GO(X509_NAME_get_text_by_OBJ, iFpppi)
//GO(X509_NAME_hash, 
//GO(X509_NAME_hash_old, 
//GO(X509_NAME_new, 
GO(X509_NAME_oneline, pFppi)
GO(X509_NAME_print, iFppi)
GO(X509_NAME_print_ex, iFppiu)
GO(X509_NAME_print_ex_fp, iFppiu)
//GO(X509_NAME_set, 
GO(X509_new, pFv)
//GO(X509_OBJECT_free_contents, 
//GO(X509_OBJECT_idx_by_subject, 
//GO(X509_OBJECT_retrieve_by_subject, 
//GO(X509_OBJECT_retrieve_match, 
//GO(X509_OBJECT_up_ref_count, 
//GO(X509_ocspid_print, 
//GO(X509_PKEY_free, 
//GO(X509_PKEY_new, 
//GO(X509_policy_check, 
//GO(X509_policy_level_get0_node, 
//GO(X509_policy_level_node_count, 
//GO(X509_policy_node_get0_parent, 
//GO(X509_policy_node_get0_policy, 
//GO(X509_policy_node_get0_qualifiers, 
//GO(X509_POLICY_NODE_print, 
//GO(X509_policy_tree_free, 
//GO(X509_policy_tree_get0_level, 
//GO(X509_policy_tree_get0_policies, 
//GO(X509_policy_tree_get0_user_policies, 
//GO(X509_policy_tree_level_count, 
GO(X509_print, iFpp)
GO(X509_print_ex, iFppLL)
GO(X509_print_ex_fp, iFppLL)
GO(X509_print_fp, iFpp)
//GO(X509_pubkey_digest, 
//GO(X509_PUBKEY_free, 
GO(X509_PUBKEY_get, pFp)
//GO(X509_PUBKEY_get0_param, 
//GO(X509_PUBKEY_new, 
//GO(X509_PUBKEY_set, 
//GO(X509_PUBKEY_set0_param, 
//GO(X509_PURPOSE_add, 
//GO(X509_PURPOSE_cleanup, 
//GO(X509_PURPOSE_get0, 
//GO(X509_PURPOSE_get0_name, 
//GO(X509_PURPOSE_get0_sname, 
//GO(X509_PURPOSE_get_by_id, 
//GO(X509_PURPOSE_get_by_sname, 
//GO(X509_PURPOSE_get_count, 
//GO(X509_PURPOSE_get_id, 
//GO(X509_PURPOSE_get_trust, 
//GO(X509_PURPOSE_set, 
//GO(X509_reject_clear, 
//GO(X509_REQ_add1_attr, 
//GO(X509_REQ_add1_attr_by_NID, 
//GO(X509_REQ_add1_attr_by_OBJ, 
//GO(X509_REQ_add1_attr_by_txt, 
//GO(X509_REQ_add_extensions, 
//GO(X509_REQ_add_extensions_nid, 
//GO(X509_REQ_check_private_key, 
//GO(X509_REQ_delete_attr, 
//GO(X509_REQ_digest, 
//GO(X509_REQ_dup, 
//GO(X509_REQ_extension_nid, 
//GO(X509_REQ_free, 
//GO(X509_REQ_get1_email, 
//GO(X509_REQ_get_attr, 
//GO(X509_REQ_get_attr_by_NID, 
//GO(X509_REQ_get_attr_by_OBJ, 
//GO(X509_REQ_get_attr_count, 
//GO(X509_REQ_get_extension_nids, 
//GO(X509_REQ_get_extensions, 
GO(X509_REQ_get_pubkey, pFp)
GO(X509_REQ_get_X509_PUBKEY, pFp)
GO(X509_REQ_get0_pubkey, pFp)
//GO(X509_REQ_INFO_free, 
//GO(X509_REQ_INFO_new, 
//GO(X509_REQ_new, 
//GO(X509_REQ_print, 
//GO(X509_REQ_print_ex, 
//GO(X509_REQ_print_fp, 
//GO(X509_REQ_set_extension_nids, 
GO(X509_REQ_set_pubkey, iFpp)
GO(X509_REQ_set_subject_name, iFpp)
//GO(X509_REQ_set_version, 
//GO(X509_REQ_sign, 
//GO(X509_REQ_sign_ctx, 
//GO(X509_REQ_to_X509, 
//GO(X509_REQ_verify, 
GO(X509_REVOKED_add1_ext_i2d, iFpipiL)
//GO(X509_REVOKED_add_ext, 
//GO(X509_REVOKED_delete_ext, 
//GO(X509_REVOKED_dup, 
//GO(X509_REVOKED_free, 
//GO(X509_REVOKED_get_ext, 
//GO(X509_REVOKED_get_ext_by_critical, 
//GO(X509_REVOKED_get_ext_by_NID, 
//GO(X509_REVOKED_get_ext_by_OBJ, 
//GO(X509_REVOKED_get_ext_count, 
GO(X509_REVOKED_get_ext_d2i, pFpipp)
//GO(X509_REVOKED_new, 
//GO(X509_REVOKED_set_revocationDate, 
//GO(X509_REVOKED_set_serialNumber, 
//GO(X509_set_ex_data, 
GO(X509_set_issuer_name, iFpp)
//GO(X509_set_notAfter, 
//GO(X509_set_notBefore, 
GO(X509_set_pubkey, iFpp)
GO(X509_set_serialNumber, iFpp)
GO(X509_set_subject_name, iFpp)
//GO(X509_set_version, 
//GO(X509_SIG_free, 
//GO(X509_sign, 
//GO(X509_signature_dump, 
//GO(X509_signature_print, 
//GO(X509_sign_ctx, 
//GO(X509_SIG_new, 
GO(X509_STORE_add_cert, iFpp)
GO(X509_STORE_add_crl, iFpp)
GO(X509_STORE_add_lookup, pFpp)
GO(X509_STORE_CTX_cleanup, vFp)
GO(X509_STORE_CTX_free, vFp)
//GO(X509_STORE_CTX_get0_current_crl, 
//GO(X509_STORE_CTX_get0_current_issuer, 
//GO(X509_STORE_CTX_get0_param, 
//GO(X509_STORE_CTX_get0_parent_ctx, 
//GO(X509_STORE_CTX_get0_policy_tree, 
//GO(X509_STORE_CTX_get0_store, 
GO(X509_STORE_CTX_get1_chain, pFp)
//GO(X509_STORE_CTX_get1_issuer, 
GO(X509_STORE_CTX_get_chain, pFp)
GO(X509_STORE_CTX_get_current_cert, pFp)
GO(X509_STORE_CTX_get_error, iFp)
GO(X509_STORE_CTX_get_error_depth, iFp)
//GO(X509_STORE_CTX_get_ex_data, 
//GO(X509_STORE_CTX_get_ex_new_index, 
//GO(X509_STORE_CTX_get_explicit_policy, 
GO(X509_STORE_CTX_init, iFpppp)
GO(X509_STORE_CTX_new, pFv)
//GO(X509_STORE_CTX_purpose_inherit, 
//GO(X509_STORE_CTX_set0_crls, 
//GO(X509_STORE_CTX_set0_param, 
//GO(X509_STORE_CTX_set_cert, 
//GO(X509_STORE_CTX_set_chain, 
GO(X509_STORE_CTX_set_current_cert, vFpp)
GO(X509_STORE_CTX_set_default, iFp)
//GO(X509_STORE_CTX_set_depth, 
GO(X509_STORE_CTX_set_error, vFpi)
GO(X509_STORE_CTX_set_error_depth, vFpi)
//GO(X509_STORE_CTX_set_ex_data, 
//GO(X509_STORE_CTX_set_flags, 
GO(X509_STORE_CTX_set_purpose, iFpi)
//GO(X509_STORE_CTX_set_time, 
//GO(X509_STORE_CTX_set_trust, 
//GO(X509_STORE_CTX_set_verify_cb, 
//GO(X509_STORE_CTX_trusted_stack, 
GO(X509_STORE_free, vFp)
//GO(X509_STORE_get1_certs, 
//GO(X509_STORE_get1_crls, 
//GO(X509_STORE_get_by_subject, 
GO(X509_STORE_load_file, iFpp)
GO(X509_STORE_load_path, iFpp)
GO(X509_STORE_load_store, iFpp)
//GO(X509_STORE_load_locations, iFppp)
GO(X509_STORE_new, pFv)
//GO(X509_STORE_set1_param, 
//GO(X509_STORE_set_default_paths, 
GO(X509_STORE_set_depth, iFpi)
GO(X509_STORE_set_flags, iFpL)
//GO(X509_STORE_set_lookup_crls_cb, 
GO(X509_STORE_set_purpose, iFpi)
GO(X509_STORE_set_trust, iFpi)
//GO(X509_STORE_set_verify_cb, 
//GO(X509_subject_name_cmp, 
//GO(X509_subject_name_hash, 
//GO(X509_subject_name_hash_old, 
//GO(X509_supported_extension, 
//GO(X509_time_adj, 
//GO(X509_time_adj_ex, 
//GO(X509_to_X509_REQ, 
//GO(X509_TRUST_add, 
//GO(X509_TRUST_cleanup, 
//GO(X509_trust_clear, 
//GO(X509_TRUST_get0, 
//GO(X509_TRUST_get0_name, 
//GO(X509_TRUST_get_by_id, 
//GO(X509_TRUST_get_count, 
//GO(X509_TRUST_get_flags, 
//GO(X509_TRUST_get_trust, 
//GO(X509_TRUST_set, 
//GO(X509_TRUST_set_default, 
GO(X509V3_add1_i2d, iFpipiL)
//GO(X509v3_add_ext, 
//GO(X509V3_add_standard_extensions, 
//GO(X509V3_add_value, 
//GO(X509V3_add_value_bool, 
//GO(X509V3_add_value_bool_nf, 
//GO(X509V3_add_value_int, 
//GO(X509V3_add_value_uchar, 
//GO(X509V3_conf_free, 
//GO(X509v3_delete_ext, 
//GO(X509V3_EXT_add, 
//GO(X509V3_EXT_add_alias, 
//GO(X509V3_EXT_add_conf, 
//GO(X509V3_EXT_add_list, 
//GO(X509V3_EXT_add_nconf, 
//GO(X509V3_EXT_add_nconf_sk, 
//GO(X509V3_EXT_cleanup, 
//GO(X509V3_EXT_conf, 
//GO(X509V3_EXT_conf_nid, 
//GO(X509V3_EXT_CRL_add_conf, 
//GO(X509V3_EXT_CRL_add_nconf, 
GO(X509V3_EXT_d2i, pFp)
//GO(X509V3_extensions_print, 
//GO(X509V3_EXT_free, 
GO(X509V3_EXT_get, pFp)
//GO(X509V3_EXT_get_nid, 
GO(X509V3_EXT_i2d, pFiip)
//GO(X509V3_EXT_nconf, 
//GO(X509V3_EXT_nconf_nid, 
GO(X509V3_EXT_print, iFppLi)
GO(X509V3_EXT_print_fp, iFppii)
//GO(X509V3_EXT_REQ_add_conf, 
//GO(X509V3_EXT_REQ_add_nconf, 
//GO(X509V3_EXT_val_prn, 
GO(X509V3_get_d2i, pFpipp)
//GO(X509v3_get_ext, 
//GO(X509v3_get_ext_by_critical, 
//GO(X509v3_get_ext_by_NID, 
//GO(X509v3_get_ext_by_OBJ, 
//GO(X509v3_get_ext_count, 
//GO(X509V3_get_section, 
//GO(X509V3_get_string, 
//GO(X509V3_get_value_bool, 
//GO(X509V3_get_value_int, 
//GO(X509V3_NAME_from_section, 
//GO(X509V3_parse_list, 
//GO(X509V3_section_free, 
//GO(X509V3_set_conf_lhash, 
//GO(X509V3_set_ctx, 
//GO(X509V3_set_nconf, 
//GO(X509V3_string_free, 
//GO(X509_VAL_free, 
//GO(X509_VAL_new, 
//GO(X509_verify, 
GO(X509_verify_cert, iFp)
GO(X509_verify_cert_error_string, pFl)
//GO(X509_VERIFY_PARAM_add0_policy, 
//GO(X509_VERIFY_PARAM_add0_table, 
//GO(X509_VERIFY_PARAM_add1_host, 
//GO(X509_VERIFY_PARAM_clear_flags, 
//GO(X509_VERIFY_PARAM_free, 
//GO(X509_VERIFY_PARAM_get0, 
//GO(X509_VERIFY_PARAM_get0_name, 
//GO(X509_VERIFY_PARAM_get0_peername, 
//GO(X509_VERIFY_PARAM_get_count, 
//GO(X509_VERIFY_PARAM_get_depth, 
//GO(X509_VERIFY_PARAM_get_flags, 
//GO(X509_VERIFY_PARAM_inherit, 
//GO(X509_VERIFY_PARAM_lookup, 
//GO(X509_VERIFY_PARAM_new, 
//GO(X509_VERIFY_PARAM_set1, 
//GO(X509_VERIFY_PARAM_set1_email, 
//GO(X509_VERIFY_PARAM_set1_host, 
//GO(X509_VERIFY_PARAM_set1_ip, 
//GO(X509_VERIFY_PARAM_set1_ip_asc, 
//GO(X509_VERIFY_PARAM_set1_name, 
//GO(X509_VERIFY_PARAM_set1_policies, 
//GO(X509_VERIFY_PARAM_set_depth, 
//GO(X509_VERIFY_PARAM_set_flags, 
//GO(X509_VERIFY_PARAM_set_hostflags, 
//GO(X509_VERIFY_PARAM_set_purpose, 
//GO(X509_VERIFY_PARAM_set_time, 
//GO(X509_VERIFY_PARAM_set_trust, 
//GO(X509_VERIFY_PARAM_table_cleanup, 
//GO(X9_62_CHARACTERISTIC_TWO_free, 
//GO(X9_62_CHARACTERISTIC_TWO_new, 
//GO(X9_62_PENTANOMIAL_free, 
//GO(X9_62_PENTANOMIAL_new, 
