#ifndef _INCLUDE_CONFIG_H_
#define _INCLUDE_CONFIG_H_

#define R_DEBUG 0
#define R_RTDEBUG 1

/* inlined APIs */
#define R_INLINE 0
#define R2_LOADLIBS 1

#define R_ANAL_STATIC_PLUGINS \
     &r_anal_plugin_a2f, \
     &r_anal_plugin_null, \
     0

#define R_ARCH_STATIC_PLUGINS \
     &r_arch_plugin_6502, \
     &r_arch_plugin_6502_cs, \
     &r_arch_plugin_8051, \
     &r_arch_plugin_alpha, \
     &r_arch_plugin_amd29k, \
     &r_arch_plugin_any_as, \
     &r_arch_plugin_any_vasm, \
     &r_arch_plugin_arc, \
     &r_arch_plugin_arm, \
     &r_arch_plugin_arm_cs, \
     &r_arch_plugin_arm_gnu, \
     &r_arch_plugin_arm_v35, \
     &r_arch_plugin_avr, \
     &r_arch_plugin_bf, \
     &r_arch_plugin_bpf, \
     &r_arch_plugin_bpf_cs, \
     &r_arch_plugin_chip8, \
     &r_arch_plugin_cosmac, \
     &r_arch_plugin_cr16, \
     &r_arch_plugin_cris, \
     &r_arch_plugin_dalvik, \
     &r_arch_plugin_dis, \
     &r_arch_plugin_ebc, \
     &r_arch_plugin_evm, \
     &r_arch_plugin_fslsp, \
     &r_arch_plugin_gb, \
     &r_arch_plugin_h8300, \
     &r_arch_plugin_hppa_gnu, \
     &r_arch_plugin_i4004, \
     &r_arch_plugin_i8080, \
     &r_arch_plugin_java, \
     &r_arch_plugin_jdh8, \
     &r_arch_plugin_kvx, \
     &r_arch_plugin_lanai, \
     &r_arch_plugin_lh5801, \
     &r_arch_plugin_lm32, \
     &r_arch_plugin_loongarch_gnu, \
     &r_arch_plugin_lua, \
     &r_arch_plugin_m680x_cs, \
     &r_arch_plugin_m68k_cs, \
     &r_arch_plugin_m68k_gnu, \
     &r_arch_plugin_mcore, \
     &r_arch_plugin_mcs96, \
     &r_arch_plugin_mips_cs, \
     &r_arch_plugin_mips_gnu, \
     &r_arch_plugin_msp430, \
     &r_arch_plugin_nds32, \
     &r_arch_plugin_nios2, \
     &r_arch_plugin_null, \
     &r_arch_plugin_or1k, \
     &r_arch_plugin_pdp11, \
     &r_arch_plugin_pic, \
     &r_arch_plugin_pickle, \
     &r_arch_plugin_ppc_cs, \
     &r_arch_plugin_ppc_gnu, \
     &r_arch_plugin_propeller, \
     &r_arch_plugin_pyc, \
     &r_arch_plugin_riscv, \
     &r_arch_plugin_riscv_cs, \
     &r_arch_plugin_rsp, \
     &r_arch_plugin_s390_cs, \
     &r_arch_plugin_s390_gnu, \
     &r_arch_plugin_sh, \
     &r_arch_plugin_sh_cs, \
     &r_arch_plugin_sm5xx, \
     &r_arch_plugin_snes, \
     &r_arch_plugin_sparc_cs, \
     &r_arch_plugin_sparc_gnu, \
     &r_arch_plugin_stm8, \
     &r_arch_plugin_tms320, \
     &r_arch_plugin_tricore, \
     &r_arch_plugin_tricore_cs, \
     &r_arch_plugin_uxn, \
     &r_arch_plugin_v810, \
     &r_arch_plugin_v850, \
     &r_arch_plugin_vax, \
     &r_arch_plugin_wasm, \
     &r_arch_plugin_ws, \
     &r_arch_plugin_x86_cs, \
     &r_arch_plugin_x86_nasm, \
     &r_arch_plugin_x86_nz, \
     &r_arch_plugin_xap, \
     &r_arch_plugin_xcore_cs, \
     &r_arch_plugin_xtensa, \
     &r_arch_plugin_z80, \
     0

#define R_ASM_STATIC_PLUGINS \
     &r_asm_plugin_6502, \
     &r_asm_plugin_arm, \
     &r_asm_plugin_att2intel, \
     &r_asm_plugin_avr, \
     &r_asm_plugin_bpf, \
     &r_asm_plugin_chip8, \
     &r_asm_plugin_cosmac, \
     &r_asm_plugin_dalvik, \
     &r_asm_plugin_evm, \
     &r_asm_plugin_gb, \
     &r_asm_plugin_java, \
     &r_asm_plugin_m68k, \
     &r_asm_plugin_mips, \
     &r_asm_plugin_null, \
     &r_asm_plugin_pickle, \
     &r_asm_plugin_ppc, \
     &r_asm_plugin_riscv, \
     &r_asm_plugin_sh, \
     &r_asm_plugin_stm8, \
     &r_asm_plugin_tms320, \
     &r_asm_plugin_tricore, \
     &r_asm_plugin_v850, \
     &r_asm_plugin_wasm, \
     &r_asm_plugin_x86, \
     &r_asm_plugin_z80, \
     0

#define R_BIN_STATIC_PLUGINS \
     &r_bin_plugin_any, \
     &r_bin_plugin_art, \
     &r_bin_plugin_avr, \
     &r_bin_plugin_bf, \
     &r_bin_plugin_bflt, \
     &r_bin_plugin_bios, \
     &r_bin_plugin_bootimg, \
     &r_bin_plugin_cgc, \
     &r_bin_plugin_coff, \
     &r_bin_plugin_dex, \
     &r_bin_plugin_dis, \
     &r_bin_plugin_dmp64, \
     &r_bin_plugin_dol, \
     &r_bin_plugin_dyldcache, \
     &r_bin_plugin_elf, \
     &r_bin_plugin_elf64, \
     &r_bin_plugin_fs, \
     &r_bin_plugin_hunk, \
     &r_bin_plugin_io, \
     &r_bin_plugin_java, \
     &r_bin_plugin_le, \
     &r_bin_plugin_lua, \
     &r_bin_plugin_mach0, \
     &r_bin_plugin_mach064, \
     &r_bin_plugin_mbn, \
     &r_bin_plugin_mdmp, \
     &r_bin_plugin_menuet, \
     &r_bin_plugin_msx, \
     &r_bin_plugin_mz, \
     &r_bin_plugin_ne, \
     &r_bin_plugin_nes, \
     &r_bin_plugin_nin3ds, \
     &r_bin_plugin_ninds, \
     &r_bin_plugin_ningb, \
     &r_bin_plugin_ningba, \
     &r_bin_plugin_nro, \
     &r_bin_plugin_nso, \
     &r_bin_plugin_off, \
     &r_bin_plugin_omf, \
     &r_bin_plugin_p9, \
     &r_bin_plugin_pcap, \
     &r_bin_plugin_pdp11, \
     &r_bin_plugin_pe, \
     &r_bin_plugin_pe64, \
     &r_bin_plugin_pebble, \
     &r_bin_plugin_prg, \
     &r_bin_plugin_psxexe, \
     &r_bin_plugin_pyc, \
     &r_bin_plugin_qnx, \
     &r_bin_plugin_rel, \
     &r_bin_plugin_s390, \
     &r_bin_plugin_sfc, \
     &r_bin_plugin_smd, \
     &r_bin_plugin_sms, \
     &r_bin_plugin_symbols, \
     &r_bin_plugin_te, \
     &r_bin_plugin_tic, \
     &r_bin_plugin_uf2, \
     &r_bin_plugin_vsf, \
     &r_bin_plugin_wad, \
     &r_bin_plugin_wasm, \
     &r_bin_plugin_xbe, \
     &r_bin_plugin_xcoff64, \
     &r_bin_plugin_xnu_kernelcache, \
     &r_bin_plugin_xtac, \
     &r_bin_plugin_z64, \
     &r_bin_plugin_zimg, \
     0

#define R_BIN_LDR_STATIC_PLUGINS \
     &r_bin_ldr_plugin_ldr_linux, \
     0

#define R_BIN_XTR_STATIC_PLUGINS \
     &r_bin_xtr_plugin_xtr_dyldcache, \
     &r_bin_xtr_plugin_xtr_fatmach0, \
     &r_bin_xtr_plugin_xtr_pemixed, \
     &r_bin_xtr_plugin_xtr_sep64, \
     &r_bin_xtr_plugin_xtr_xalz, \
     0

#define R_BP_STATIC_PLUGINS \
     &r_bp_plugin_arm, \
     &r_bp_plugin_bf, \
     &r_bp_plugin_mips, \
     &r_bp_plugin_null, \
     &r_bp_plugin_ppc, \
     &r_bp_plugin_riscv, \
     &r_bp_plugin_s390x, \
     &r_bp_plugin_x86, \
     0

#define R_CORE_STATIC_PLUGINS \
     &r_core_plugin_a2f, \
     &r_core_plugin_agD, \
     &r_core_plugin_java, \
     &r_core_plugin_prj, \
     &r_core_plugin_sixref, \
     0

#define R_CRYPTO_STATIC_PLUGINS \
     &r_crypto_plugin_aes, \
     &r_crypto_plugin_aes_cbc, \
     &r_crypto_plugin_aes_wrap, \
     &r_crypto_plugin_base64, \
     &r_crypto_plugin_base91, \
     &r_crypto_plugin_bech32, \
     &r_crypto_plugin_blowfish, \
     &r_crypto_plugin_cps2, \
     &r_crypto_plugin_des, \
     &r_crypto_plugin_ed25519, \
     &r_crypto_plugin_entropy, \
     &r_crypto_plugin_punycode, \
     &r_crypto_plugin_rc2, \
     &r_crypto_plugin_rc4, \
     &r_crypto_plugin_rc6, \
     &r_crypto_plugin_rol, \
     &r_crypto_plugin_ror, \
     &r_crypto_plugin_rot, \
     &r_crypto_plugin_serpent, \
     &r_crypto_plugin_sip, \
     &r_crypto_plugin_sm4, \
     &r_crypto_plugin_strhash, \
     &r_crypto_plugin_xor, \
     0

#define R_DEBUG_STATIC_PLUGINS \
     &r_debug_plugin_bf, \
     &r_debug_plugin_bochs, \
     &r_debug_plugin_esil, \
     &r_debug_plugin_evm, \
     &r_debug_plugin_gdb, \
     &r_debug_plugin_io, \
     &r_debug_plugin_native, \
     &r_debug_plugin_null, \
     &r_debug_plugin_qnx, \
     &r_debug_plugin_rap, \
     &r_debug_plugin_rv32ima, \
     &r_debug_plugin_winkd, \
     0

#define R_EGG_STATIC_PLUGINS \
     &r_egg_plugin_exec, \
     &r_egg_plugin_xor, \
     0

#define R_ESIL_STATIC_PLUGINS \
     &r_esil_plugin_dummy, \
     &r_esil_plugin_forth, \
     &r_esil_plugin_null, \
     0

#define R_FS_STATIC_PLUGINS \
     &r_fs_plugin_ext2, \
     &r_fs_plugin_fat, \
     &r_fs_plugin_fb, \
     &r_fs_plugin_hfs, \
     &r_fs_plugin_hfsplus, \
     &r_fs_plugin_io, \
     &r_fs_plugin_iso9660, \
     &r_fs_plugin_jfs, \
     &r_fs_plugin_minix, \
     &r_fs_plugin_ntfs, \
     &r_fs_plugin_posix, \
     &r_fs_plugin_r2, \
     &r_fs_plugin_reiserfs, \
     &r_fs_plugin_sfs, \
     &r_fs_plugin_squashfs, \
     &r_fs_plugin_tar, \
     &r_fs_plugin_udf, \
     &r_fs_plugin_ufs, \
     &r_fs_plugin_xfs, \
     &r_fs_plugin_zip, \
     0

#define R_IO_STATIC_PLUGINS \
     &r_io_plugin_ar, \
     &r_io_plugin_bfdbg, \
     &r_io_plugin_bochs, \
     &r_io_plugin_cyclic, \
     &r_io_plugin_debug, \
     &r_io_plugin_default, \
     &r_io_plugin_dsc, \
     &r_io_plugin_fd, \
     &r_io_plugin_gdb, \
     &r_io_plugin_gprobe, \
     &r_io_plugin_gzip, \
     &r_io_plugin_http, \
     &r_io_plugin_ihex, \
     &r_io_plugin_isotp, \
     &r_io_plugin_mach, \
     &r_io_plugin_malloc, \
     &r_io_plugin_mmap, \
     &r_io_plugin_null, \
     &r_io_plugin_procpid, \
     &r_io_plugin_ptrace, \
     &r_io_plugin_qnx, \
     &r_io_plugin_r2k, \
     &r_io_plugin_r2pipe, \
     &r_io_plugin_r2web, \
     &r_io_plugin_rap, \
     &r_io_plugin_rbuf, \
     &r_io_plugin_reg, \
     &r_io_plugin_self, \
     &r_io_plugin_serial, \
     &r_io_plugin_socket, \
     &r_io_plugin_sparse, \
     &r_io_plugin_sysgdb, \
     &r_io_plugin_tcpslurp, \
     &r_io_plugin_treebuf, \
     &r_io_plugin_uf2, \
     &r_io_plugin_w32, \
     &r_io_plugin_w32dbg, \
     &r_io_plugin_winedbg, \
     &r_io_plugin_winkd, \
     &r_io_plugin_xalz, \
     &r_io_plugin_xattr, \
     &r_io_plugin_zip, \
     0

#define R_LANG_STATIC_PLUGINS \
     &r_lang_plugin_c, \
     &r_lang_plugin_cpipe, \
     &r_lang_plugin_pipe, \
     &r_lang_plugin_rust, \
     &r_lang_plugin_spp, \
     &r_lang_plugin_v, \
     &r_lang_plugin_vala, \
     &r_lang_plugin_zig, \
     0

#endif
