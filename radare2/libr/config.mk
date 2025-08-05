ifeq ($(_INCLUDE_CONFIG_MK_),)
_INCLUDE_CONFIG_MK_=1

CFLAGS_APPEND=
GNULINUX=1
BSD=0
SOLARIS=0
WINDOWS=0
OSX=0

# config.mk.head
STATIC_ANAL_PLUGINS= p/a2f.mk p/null.mk
STATIC_ARCH_PLUGINS= p/6502.mk p/6502_cs.mk p/8051.mk p/alpha.mk p/amd29k.mk p/any_as.mk p/any_vasm.mk p/arc.mk p/arm.mk p/arm_cs.mk p/arm_gnu.mk p/arm_v35.mk p/avr.mk p/bf.mk p/bpf.mk p/bpf_cs.mk p/chip8.mk p/cosmac.mk p/cr16.mk p/cris.mk p/dalvik.mk p/dis.mk p/ebc.mk p/evm.mk p/fslsp.mk p/gb.mk p/h8300.mk p/hppa_gnu.mk p/i4004.mk p/i8080.mk p/java.mk p/jdh8.mk p/kvx.mk p/lanai.mk p/lh5801.mk p/lm32.mk p/loongarch_gnu.mk p/lua.mk p/m680x_cs.mk p/m68k_cs.mk p/m68k_gnu.mk p/mcore.mk p/mcs96.mk p/mips_cs.mk p/mips_gnu.mk p/msp430.mk p/nds32.mk p/nios2.mk p/null.mk p/or1k.mk p/pdp11.mk p/pic.mk p/pickle.mk p/ppc_cs.mk p/ppc_gnu.mk p/propeller.mk p/pyc.mk p/riscv.mk p/riscv_cs.mk p/rsp.mk p/s390_cs.mk p/s390_gnu.mk p/sh.mk p/sh_cs.mk p/sm5xx.mk p/snes.mk p/sparc_cs.mk p/sparc_gnu.mk p/stm8.mk p/tms320.mk p/tricore.mk p/tricore_cs.mk p/uxn.mk p/v810.mk p/v850.mk p/vax.mk p/wasm.mk p/ws.mk p/x86_cs.mk p/x86_nasm.mk p/x86_nz.mk p/xap.mk p/xcore_cs.mk p/xtensa.mk p/z80.mk
STATIC_ASM_PLUGINS= p/6502.mk p/arm.mk p/att2intel.mk p/avr.mk p/bpf.mk p/chip8.mk p/cosmac.mk p/dalvik.mk p/evm.mk p/gb.mk p/java.mk p/m68k.mk p/mips.mk p/null.mk p/pickle.mk p/ppc.mk p/riscv.mk p/sh.mk p/stm8.mk p/tms320.mk p/tricore.mk p/v850.mk p/wasm.mk p/x86.mk p/z80.mk
STATIC_BIN_PLUGINS= p/any.mk p/art.mk p/avr.mk p/bf.mk p/bflt.mk p/bios.mk p/bootimg.mk p/cgc.mk p/coff.mk p/dex.mk p/dis.mk p/dmp64.mk p/dol.mk p/dyldcache.mk p/elf.mk p/elf64.mk p/fs.mk p/hunk.mk p/io.mk p/java.mk p/le.mk p/lua.mk p/mach0.mk p/mach064.mk p/mbn.mk p/mdmp.mk p/menuet.mk p/msx.mk p/mz.mk p/ne.mk p/nes.mk p/nin3ds.mk p/ninds.mk p/ningb.mk p/ningba.mk p/nro.mk p/nso.mk p/off.mk p/omf.mk p/p9.mk p/pcap.mk p/pdp11.mk p/pe.mk p/pe64.mk p/pebble.mk p/prg.mk p/psxexe.mk p/pyc.mk p/qnx.mk p/rel.mk p/s390.mk p/sfc.mk p/smd.mk p/sms.mk p/symbols.mk p/te.mk p/tic.mk p/uf2.mk p/vsf.mk p/wad.mk p/wasm.mk p/xbe.mk p/xcoff64.mk p/xnu_kernelcache.mk p/xtac.mk p/z64.mk p/zimg.mk
STATIC_BIN_LDR_PLUGINS= p/ldr_linux.mk
STATIC_BIN_XTR_PLUGINS= p/xtr_dyldcache.mk p/xtr_fatmach0.mk p/xtr_pemixed.mk p/xtr_sep64.mk p/xtr_xalz.mk
STATIC_BP_PLUGINS= p/arm.mk p/bf.mk p/mips.mk p/null.mk p/ppc.mk p/riscv.mk p/s390x.mk p/x86.mk
STATIC_CORE_PLUGINS= p/a2f.mk p/agD.mk p/java.mk p/prj.mk p/sixref.mk
STATIC_CRYPTO_PLUGINS= p/aes.mk p/aes_cbc.mk p/aes_wrap.mk p/base64.mk p/base91.mk p/bech32.mk p/blowfish.mk p/cps2.mk p/des.mk p/ed25519.mk p/entropy.mk p/punycode.mk p/rc2.mk p/rc4.mk p/rc6.mk p/rol.mk p/ror.mk p/rot.mk p/serpent.mk p/sip.mk p/sm4.mk p/strhash.mk p/xor.mk
STATIC_DEBUG_PLUGINS= p/bf.mk p/bochs.mk p/esil.mk p/evm.mk p/gdb.mk p/io.mk p/native.mk p/null.mk p/qnx.mk p/rap.mk p/rv32ima.mk p/winkd.mk
STATIC_EGG_PLUGINS= p/exec.mk p/xor.mk
STATIC_ESIL_PLUGINS= p/dummy.mk p/forth.mk p/null.mk
STATIC_FS_PLUGINS= p/ext2.mk p/fat.mk p/fb.mk p/hfs.mk p/hfsplus.mk p/io.mk p/iso9660.mk p/jfs.mk p/minix.mk p/ntfs.mk p/posix.mk p/r2.mk p/reiserfs.mk p/sfs.mk p/squashfs.mk p/tar.mk p/udf.mk p/ufs.mk p/xfs.mk p/zip.mk
STATIC_IO_PLUGINS= p/ar.mk p/bfdbg.mk p/bochs.mk p/cyclic.mk p/debug.mk p/default.mk p/dsc.mk p/fd.mk p/gdb.mk p/gprobe.mk p/gzip.mk p/http.mk p/ihex.mk p/isotp.mk p/mach.mk p/malloc.mk p/mmap.mk p/null.mk p/procpid.mk p/ptrace.mk p/qnx.mk p/r2k.mk p/r2pipe.mk p/r2web.mk p/rap.mk p/rbuf.mk p/reg.mk p/self.mk p/serial.mk p/shm.mk p/socket.mk p/sparse.mk p/sysgdb.mk p/tcpslurp.mk p/treebuf.mk p/uf2.mk p/w32.mk p/w32dbg.mk p/winedbg.mk p/winkd.mk p/xalz.mk p/xattr.mk p/zip.mk
STATIC_LANG_PLUGINS= p/c.mk p/cpipe.mk p/pipe.mk p/rust.mk p/spp.mk p/v.mk p/vala.mk p/zig.mk
SHARED_IO_TARGETS= p/io_shm.so
# config.mk.tail

LIBR:=$(abspath $(dir $(lastword $(MAKEFILE_LIST))))

null:=
SPACE:=$(null) $(null)

ifeq ($(LIBR),)
ifeq ($(R2DIR),)
$(error ERROR: Cannot find R2DIR. Please define this variable)
else
LIBR=$(R2DIR)/libr
MSVC=$(R2DIR)/msvc
endif
endif

SHLR:=$(LIBR)/../shlr

include $(LIBR)/../global.mk
include $(LIBR)/../mk/${COMPILER}.mk

CFLAGS+=${CFLAGS_APPEND}
CFLAGS+=${CPPFLAGS}

ifeq (1,1)
LINK+=$(subst r_,-L$(LIBR)/,$(R2DEPS))
LINK+=$(subst r_,-lr_,$(R2DEPS))
LINK+=$(subst r_,-L$(LIBR)/,$(BINDEPS))
LINK+=$(subst r_,-lr_,$(BINDEPS))
CFLAGS+=${PIC_CFLAGS}
LINK+=${PIC_CFLAGS}
else
ifneq ($(R2DEPS),)
LINK+=$(shell echo ${R2DEPS} | sed -e 's:r_\([^ ]\+\):$(LIBR)/\1/libr_\1.${EXT_AR}:g')
endif
endif

CFLAGS+=-Wall

# libgmp
ifeq (${HAVE_LIB_GMP},1)
CFLAGS+=-DHAVE_LIB_GMP=1
BN_LIBS=-lgmp
endif

# open-ssl
ifeq (${HAVE_LIB_SSL},1)
BN_LIBS=${SSL_LDFLAGS}
endif

#both of these need ssl includes
ifeq (${HAVE_LIB_SSL},1)
CFLAGS+=${SSL_CFLAGS}
endif

# XXX do it in configure stage
OSTYPE?=gnulinux

ifeq (${OSTYPE},auto)
 _UNAME=$(shell uname)
 ifeq ($(_UNAME),Darwin)
  OSTYPE=darwin
 else
  ifeq ($(_UNAME),SerenityOS)
   OSTYPE=bsd
  else
   ifeq ($(_UNAME),serenity)
    OSTYPE=bsd
   endif
  endif
 endif
endif

ifeq (${OSTYPE},openbsd)
OSTYPE=bsd
endif
ifeq (${OSTYPE},netbsd)
OSTYPE=bsd
endif
ifeq (${OSTYPE},freebsd)
OSTYPE=bsd
endif
ifeq (${OSTYPE},dragonfly)
OSTYPE=bsd
endif
ifeq (${OSTYPE},bitrig)
OSTYPE=bsd
endif

# Output
ifneq ($(OSTYPE),mingw32)
ifeq (,$(findstring emcc,$(CC)))
CFLAGS+=-g
endif
endif
ifeq (${OSTYPE},windows)
CFLAGS+=-DR2__WINDOWS__=1
EXT_AR=lib
EXT_SO=dll
EXT_EXE=.exe
TH_LIBS=
endif

ifeq (${OSTYPE},bsd)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=so
EXT_EXE=
TH_LIBS=-lpthread
endif
ifeq (${OSTYPE},qnx)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=so
EXT_EXE=
TH_LIBS=
endif
ifeq (${OSTYPE},gnulinux)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=so
EXT_EXE=
TH_LIBS=-lpthread
endif
ifeq (${OSTYPE},haiku)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=so
EXT_EXE=
TH_LIBS=
endif
ifeq (${OSTYPE},darwin)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=dylib
EXT_EXE=
ifeq ($(shell uname -p),arm)
# iOS
TH_LIBS=
else
# OSX
TH_LIBS=-lpthread
endif
endif
ifeq (${OSTYPE},android)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=so
EXT_EXE=
TH_LIBS=
endif
ifeq (${OSTYPE},solaris)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=so
EXT_EXE=
TH_LIBS=
endif
ifeq (${OSTYPE},serenityos)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=so
EXT_EXE=
TH_LIBS=
endif
ifeq (${OSTYPE},aix)
CFLAGS+=-DR2__UNIX__=1
EXT_AR=a
EXT_SO=so
EXT_EXE=
TH_LIBS=
endif

ifeq (${EXT_SO},)
main:
	@echo
	@echo "OSTYPE: ${OSTYPE}"
	@echo ERROR: Unknown platform
	@echo
	@exit 1
endif

LIB=lib${NAME}
LIBAR=${LIB}.${EXT_AR}
LIBSO=${LIB}.${EXT_SO}
ifeq (${OSTYPE},android)
libname=-shared -o $1.${EXT_SO}
else
ifeq (${OSTYPE},windows)
libname=-shared -o $1.${EXT_SO}
else
ifeq (${OSTYPE},darwin)
ifeq (${HAVE_LIBVERSION},1)
libname=-dynamiclib -o $1.${EXT_SO} ${LDFLAGS_SONAME}$1.${ABIVERSION}.${EXT_SO}
else
libname=-dynamiclib -o $1.${EXT_SO}
endif
else
ifeq (${HAVE_LIBVERSION},1)
libname=-shared -o $1.${EXT_SO} ${LDFLAGS_SONAME}$1.${EXT_SO}.${ABIVERSION}
else
libname=-shared -o $1.${EXT_SO}
endif
endif
endif
endif

ifeq ($(OSTYPE),darwin)
libname-version = $(subst ${EXT_SO},$(2).${EXT_SO},$(1))
else
libname-version = $(1).$(2)
endif

libpath-to-name = $(word 2,$(subst /, ,$(1)))
libpath-to-name-version = $(call libname-version,$(call libpath-to-name,$(1)),$(2))

# -- singleton
endif
