/**
 * @file libplat.h
 * @author ChenPi11
 * @copyright Copyright (C) 2023
 * @date 2023-2-18
 * @brief libplatform
 * @version 1.0.0
 * @see https://sourceforge.net/p/predef/wiki/Home/
 * @link https://github.com/ChenPi12/libplatform.git
 */
/*
The Unlicense
This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <https://unlicense.org>
*/
#ifndef _INC_LIB_PLATFORM_H_
#define _INC_LIB_PLATFORM_H_

/*=============================================================================================*/
/*libplatform archs*/

/*Alpha*/
#define __arch_alpha__ "Alpha"
/*x86*/
#define __arch_x86__ "x86"
/*ARM*/
#define __arch_arm__ "ARM"
/*Blackfin*/
#define __arch_blackfin__ "Blackfin"
/*Convex*/
#define __arch_convex__ "Convex"
/*Epiphany*/
#define __arch_epiphany__ "Epiphany"
/*HP/PA RISC*/
#define __arch_hppa__ "HP/PA RISC"
/*Itanium*/
#define __arch_itanium__ "Itanium"
/*Motorola 68k*/
#define __arch_motorola68k__ "Motorola 68k"
/*MIPS*/
#define __arch_mips__ "MIPS"
/*PowerPC*/
#define __arch_ppc__ "PowerPC"
/*Pyramid 9810*/
#define __arch_pyramid9810__ "Pyramid 9810"
/*RS/6000*/
#define __arch_rs6000__ "RS/6000"
/*SPARC*/
#define __arch_sparc__ "SPARC"
/*SuperH*/
#define __arch_superh__ "SuperH"
/*SystemZ*/
#define __arch_systemz__ "SystemZ"
/*TMS320*/
#define __arch_tms320__ "TMS320"
/*TMS470*/
#define __arch_tms470__ "TMS470"
/*unknown arch*/
#define __arch_unknown__ "unknown"

#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
#define __arch__ __arch_alpha__
#define __arch_name__ "Alpha"
#elif defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64) 
#define __arch__ __arch_x86__
#define __arch_name__ "AMD64"
#elif defined(__aarch64__)
#define __arch__ __arch_arm__
#define __arch_name__ "aarch64"
#elif defined(__arm__) || defined(__thumb__) || defined(_ARM) || defined(_M_ARMT) || defined(__arm)
#define __arch__ __arch_arm__
#define __arch_name__ "ARM"
#elif defined(__bfin) || defined(__BFIN__)
#define __arch__ __arch_blackfin__
#define __arch_name__ "Blackfin"
#elif defined(__convex__)
#define __arch__ __arch_convex__
#define __arch_name__ "Convex"
#elif defined(__epiphany__)
#define __arch__ __arch_epiphany__
#define __arch_name__ "Epiphany"
#elif defined(__hppa__) || defined(__HPPA__) || defined(__hppa)
#define __arch__ __arch_hppa__
#define __arch_name__ "HP/PA RISC"
#elif defined(i386) || defined(__i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || defined(__i386) || defined(__IA32__) || defined(_M_I86) || defined(_M_IX86) || defined(__X86__) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) || defined(__386)
#define __arch__ __arch_x86__
#define __arch_name__ "Intel x86"
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
#define __arch__ __arch_itanium__
#define __arch_name__ "Intel Itanium"
#elif defined(__m68k__) || defined(M68000) || defined(__MC68K__)
#define __arch__ __arch_motorola68k__
#define __arch_name__ "Motorola 68k"
#elif defined(__mips__) || defined(mips) || defined(_MIPS_ISA) || defined(__mips) || defined(__MIPS__)
#define __arch__ __arch_mips__
#define __arch_name__ "MIPS"
#elif defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__) || defined(__ppc__) || defined(__ppc64__) || defined(__PPC__) || defined(__PPC64__) || defined(_ARCH_PPC) || defined(_ARCH_PPC64) || defined(_M_PPC) || defined(__ppc)
#define __arch__ __arch_ppc__
#define __arch_name__ "PowerPC"
#elif defined(pyr)
#define __arch__ __arch_pyramid9810__
#define __arch_name__ "Pyramid 9810"
#elif defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_ARCH_PWR3) || defined(_ARCH_PWR4)
#define __arch__ __arch_rs6000__
#define __arch__ "RS/6000"
#elif defined(__sparc__) || defined(__sparc)
#define __arch__ __arch_sparc__
#define __arch_name__ "SPARC"
#elif defined(__sh__)
#define __arch__ __arch_superh__
#define __arch_name__ "SuperH"
#elif defined(__370__) || defined(__THW_370__) || defined(__s390__) || defined(__s390x__) || defined(__zarch__) || defined(__zarch__) || defined(__SYSC_ZARCH__)
#define __arch__ __arch_systemz__
#define __arch__ "SystemZ"
#elif defined(_TMS320C2XX) || defined(__TMS320C2000__) || defined(_TMS320C5X) || defined(__TMS320C55X__) || defined(_TMS320C6X) || defined(__TMS320C6X__)
#define __arch__ __arch_tms320__
#define __arch_name__ "TMS320"
#elif defined(__TMS470__)
#define __arch__ __arch_tms470__
#define __arch_name__ "TMS470"
#else
#define __arch__ __arch_unknown__
#define __arch_name__ __arch_unknown__
#endif
/*pointer width 64/32/16...*/
#define __POINTER_WIDTH__ (sizeof(void*) * 8)
/*=============================================================================================*/
/*libplatform compilers*/

/*ACC*/
#define __has_acc__ 0
/*Altium MicroBlaze C*/
#define __has_has_altium_microblaze_c_compiler__ 0
/*Altium C-to-Hardware*/
#define __has_altium_c_to_hardware_compiler__ 0
/*Amsterdam Compiler Kit*/
#define __has_amsterdam_compiler__ 0
/*ARM Compiler*/
#define __has_arm_compiler__ 0
/*Aztec C*/
#define __has_aztec_c_compiler__ 0
/*Borland C/C++*/
#define __has_borland_compiler__ 0
/*CC65*/
#define __has_cc65_compiler__ 0
/*Clang*/
#define __has_clang_compiler__ 0
/*Comeau*/
#define __has_comeau_compiler__ 0
/*Compaq C/C++*/
#define __has_compaq_compiler__ 0
/*Convex C*/
#define __has_convex_c_compiler__ 0
/*CompCert*/
#define __has_compcert_compiler__ 0
/*Coverity C/C++ Static Analyzer*/
#define __has_coverity_compiler__ 0
/*Cray C*/
#define __has_cray_c_compiler__ 0
/*Diab C/C++*/
#define __has_diab_compiler__ 0
/*DICE C*/
#define __has_dice_c_compiler__ 0
/*Digital Mars*/
#define __has_digital_mars_compiler__ 0
/*Dignus Systems/C++*/
#define __has_dignus_systems_compiler__ 0
/*DJGPP*/
#define __has_djgpp_compiler__ 0
/*EDG C++ Frontend*/
#define __has_edg_compiler__ 0
/*EKOPath*/
#define __has_ekopath_compiler__ 0
/*Fujitsu C++*/
#define __has_fujitsu_compiler__ 0
/*GCC C/C++*/
#define __has_gcc_compiler__ 0
/*Green Hill C/C++*/
#define __has_greenhill_compiler__ 0
/*HP ANSI C*/
#define __has_hpansi_c_compiler__ 0
/*HP aC++*/
#define __has_hpa_compiler__ 0
/*IAR C/C++*/
#define __has_iar_compiler__ 0
/*ImageCraft C*/
#define __has_imagecraft_c_compiler__ 0
/*Intel C/C++*/
#define __has_intel_compiler__ 0
/*KAI C++*/
#define __has_kai_compiler__ 0
/*KEIL CARM*/
#define __has_keil_carm_compiler__ 0
/*KEIL C166*/
#define __has_keil_c166_compiler__ 0
/*KEIL C51*/
#define __has_keil_c51_compiler__ 0
/*LCC*/
#define __has_lcc_compiler__ 0
/*LLVM*/
#define __has_llvm_compiler__ 0
/*MetaWare High C/C++*/
#define __has_metaware_high_compiler__ 0
/*Metrowerks CodeWarrior*/
#define __has_metrowerks_codewarrior_compiler__ 0
/*Microsoft Visual C++*/
#define __has_msvc_compiler__ 0
/*Microtec C/C++*/
#define __has_microtec_compiler__ 0
/*Microway NDP C*/
#define __has_microway_ndp_c_compiler__ 0
/*MinGW*/
#define __has_mingw_compiler__ 0
/*MIPSpro*/
#define __has_mipspro_compiler__ 0
/*Miracle C*/
#define __has_miracle_c_compiler__ 0
/*MPW C++*/
#define __has_mpr_compiler__ 0
/*Norcroft C*/
#define __has_norcroft_c_compiler__ 0
/*NWCC*/
#define __has_nwcc_compiler__ 0
/*Open64*/
#define __has_open64_compiler__ 0
/*Oracle Pro*C Precompiler*/
#define __has_oracle_pro_compiler__ 0
/*Oracle Solaris Studio*/
#define __has_oracle_solaris_studio_compiler__ 0
/*Pacific C*/
#define __has_pacific_c_compiler__ 0
/*Palm C/C++*/
#define __has_palm_compiler__ 0
/*Pelles C*/
#define __has_pelles_c_compiler__ 0
/*Portland Group C/C++*/
#define __has_portland_group_compiler__ 0
/*Renesas C/C++*/
#define __has_renesas_compiler__ 0
/*SAS/C*/
#define __has_sas_c_compiler__ 0
/*SCO OpenServer*/
#define __has_sco_compiler__ 0
/*Small Device C Compiler*/
#define __has_small_device_compiler__ 0
/*SN Compiler*/
#define __has_sn_compiler__ 0
/*Stratus VOS C*/
#define __has_stratus_vos_c_compiler__ 0
/*Symantec C++*/
#define __has_symantec_compiler__ 0
/*TenDRA C/C++*/
#define __has_tendra_compiler__ 0
/*Texas Instruments C/C++ Compiler*/
#define __has_texas_instruments_compiler__ 0
/*THINK C*/
#define __has_think_c_compiler__ 0
/*Tiny C*/
#define __has_tiny_c_compiler__ 0
/*Turbo C/C++*/
#define __has_turboc_compiler__ 0
/*Ultimate C/C++*/
#define __has_ultimate_compiler__ 0
/*USL C*/
#define __has_usl_c_compiler__ 0
/*VBCC*/
#define __has_vbcc_compiler__ 0
/*Watcom C++*/
#define __has_watcom_compiler__ 0
/*Zortech C++*/
#define __has_zortech_compiler__ 0

#if defined(_ACC_)
#undef __has_acc__
/*ACC*/
#define __has_acc__ 1
#endif
#if defined(__CMB__)
#undef __has_has_altium_microblaze_c_compiler__
/*Altium MicroBlaze C*/
#define __has_has_altium_microblaze_c_compiler__ 1
#endif
#if defined(__CHC__)
#undef __has_altium_c_to_hardware_compiler__
/*Altium C-to-Hardware*/
#define __has_altium_c_to_hardware_compiler__ 1
#endif
#if defined(__ACK__)
#undef __has_amsterdam_compiler__
/*Amsterdam Compiler Kit*/
#define __has_amsterdam_compiler__ 1
#endif
#if defined(__CC_ARM)
#undef __has_arm_compiler__
/*ARM Compiler*/
#define __has_arm_compiler__ 1
#endif
#if defined(AZTEC_C)
#undef __has_aztec_c_compiler__
/*Aztec C*/
#define __has_aztec_c_compiler__ 1
#endif
#if defined(__BORLANDC__)
#undef __has_borland_compiler__
/*Borland C/C++*/
#define __has_borland_compiler__ 1
#endif
#if defined(__CC65__)
#undef __has_cc65_compiler__
/*CC65*/
#define __has_cc65_compiler__ 1
#endif
#if defined(__clang__)
#undef __has_clang_compiler__
/*Clang*/
#define __has_clang_compiler__ 1
#endif
#if defined(__COMO__)
#undef __has_comeau_compiler__
/*Comeau*/
#define __has_comeau_compiler__ 1
#endif
#if defined(__DECC)
#undef __has_compaq_compiler__
/*Compaq C/C++*/
#define __has_compaq_compiler__ 1
#endif
#if defined(__convexc__)
#undef __has_convex_c_compiler__
/*Convex C*/
#define __has_convex_c_compiler__ 1
#endif
#if defined(__COMPCERT__)
#undef __has_compcert_compiler__
/*CompCert*/
#define __has_compcert_compiler__ 1
#endif
#if defined(__COVERITY__)
#undef __has_coverity_compiler__
/*Coverity C/C++ Static Analyzer*/
#define __has_coverity_compiler__ 1
#endif
#if defined(_CRAYC)
#undef __has_cray_c_compiler__
/*Cray C*/
#define __has_cray_c_compiler__ 1
#endif
#if defined(__DCC__)
#undef __has_diab_compiler__
/*Diab C/C++*/
#define __has_diab_compiler__ 1
#endif
#if defined(_DICE)
#undef __has_dice_c_compiler__
/*DICE C*/
#define __has_dice_c_compiler__ 1
#endif
#if defined(__DMC__)
#undef __has_digital_mars_compiler__
/*Digital Mars*/
#define __has_digital_mars_compiler__ 1
#endif
#if defined(__SYSC__)
#undef __has_dignus_systems_compiler__
/*Dignus Systems/C++*/
#define __has_dignus_systems_compiler__ 1
#endif
#if defined(__DJGPP__)
#undef __has_djgpp_compiler__
/*DJGPP*/
#define __has_djgpp_compiler__ 1
#endif
#if defined(__EDG__)
#undef __has_edg_compiler__
/*EDG C++ Frontend*/
#define __has_edg_compiler__ 1
#endif
#if defined(__PATHCC__)
#undef __has_ekopath_compiler__
/*EKOPath*/
#define __has_ekopath_compiler__ 1
#endif
#if defined(__FCC_VERSION)
#undef __has_fujitsu_compiler__
/*Fujitsu C++*/
#define __has_fujitsu_compiler__ 1
#endif
#if defined(__GNUC__)
#undef __has_gcc_compiler__
/*GCC C/C++*/
#define __has_gcc_compiler__ 1
#endif
#if defined(__ghs__)
#undef __has_greenhill_compiler__
/*Green Hill C/C++*/
#define __has_greenhill_compiler__ 1
#endif
#if defined(__HP_cc)
#undef __has_hpansi_c_compiler__
/*HP ANSI C*/
#define __has_hpansi_c_compiler__ 1
#endif
#if defined(__HP_aCC)
#undef __has_hpa_compiler__
/*HP aC++*/
#define __has_hpa_compiler__ 1
#endif
#if defined(__IAR_SYSTEMS_ICC__)
#undef __has_iar_compiler__
/*IAR C/C++*/
#define __has_iar_compiler__ 1
#endif
#if defined(__IMAGECRAFT__)
#undef __has_imagecraft_c_compiler__
/*ImageCraft C*/
#define __has_imagecraft_c_compiler__ 1
#endif
#if defined(__INTEL_COMPILER)
#undef __has_intel_compiler__
/*Intel C/C++*/
#define __has_intel_compiler__ 1
#endif
#if defined(__KCC)
#undef __has_kai_compiler__
/*KAI C++*/
#define __has_kai_compiler__ 1
#endif
#if defined(__CA__) || defined(__KEIL__)
#undef __has_keil_carm_compiler__
/*KEIL CARM*/
#define __has_keil_carm_compiler__ 1
#endif
#if defined(__C166__)
#undef __has_keil_c166_compiler__
/*KEIL C166*/
#define __has_keil_c166_compiler__ 1
#endif
#if defined(__C51__) || defined(__CX51__)
#undef __has_keil_c51_compiler__
/*KEIL C51*/
#define __has_keil_c51_compiler__ 1
#endif
#if defined(__LCC__)
#undef __has_lcc_compiler__
/*LCC*/
#define __has_lcc_compiler__ 1
#endif
#if defined(__llvm__)
#undef __has_llvm_compiler__
/*LLVM*/
#define __has_llvm_compiler__ 1
#endif
#if defined(__HIGHC__)
#undef __has_metaware_high_compiler__
/*MetaWare High C/C++*/
#define __has_metaware_high_compiler__ 1
#endif
#if defined(__MWERKS__)
#undef __has_metrowerks_codewarrior_compiler__
/*Metrowerks CodeWarrior*/
#define __has_metrowerks_codewarrior_compiler__ 1
#endif
#if defined(_MSC_VER)
#undef __has_msvc_compiler__
/*Microsoft Visual C++*/
#define __has_msvc_compiler__ 1
#endif
#if defined(_MRI)
#undef __has_microtec_compiler__
/*Microtec C/C++*/
#define __has_microtec_compiler__ 1
#endif
#if defined(__NDPC__)
#undef __has_microway_ndp_c_compiler__
/*Microway NDP C*/
#define __has_microway_ndp_c_compiler__ 1
#endif
#if defined(__MINGW32__) || defined(__MINGW64__)
#undef __has_mingw_compiler__
/*MinGW*/
#define __has_mingw_compiler__ 1
#endif
#if defined(__sgi) || defined(sgi)
#undef __has_mipspro_compiler__
/*MIPSpro*/
#define __has_mipspro_compiler__ 1
#endif
#if defined(MIRACLE)
#undef __has_miracle_c_compiler__
/*Miracle C*/
#define __has_miracle_c_compiler__ 1
#endif
#if defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)
#undef __has_mpr_compiler__
/*MPW C++*/
#define __has_mpr_compiler__ 1
#endif
#if defined(__CC_NORCROFT)
#undef __has_norcroft_c_compiler__
/*Norcroft C*/
#define __has_norcroft_c_compiler__ 1
#endif
#if defined(__NWCC__)
#undef __has_nwcc_compiler__
/*NWCC*/
#define __has_nwcc_compiler__ 1
#endif
#if defined(__OPEN64__) || defined(__OPENCC__)
#undef __has_open64_compiler__
/*Open64*/
#define __has_open64_compiler__ 1
#endif
#if defined(ORA_PROC)
#undef __has_oracle_pro_compiler__
/*Oracle Pro*C Precompiler*/
#define __has_oracle_pro_compiler__ 1
#endif
#if defined(__SUNPRO_C)
#undef __has_oracle_solaris_studio_compiler__
/*Oracle Solaris Studio*/
#define __has_oracle_solaris_studio_compiler__ 1
#endif
#if defined(__PACIFIC__)
#undef __has_pacific_c_compiler__
/*Pacific C*/
#define __has_pacific_c_compiler__ 1
#endif
#if defined(_PACC_VER)
#undef __has_palm_compiler__
/*Palm C/C++*/
#define __has_palm_compiler__ 1
#endif
#if defined(__POCC__)
#undef __has_pelles_c_compiler__
/*Pelles C*/
#define __has_pelles_c_compiler__ 1
#endif
#if defined(__PGI)
#undef __has_portland_group_compiler__
/*Portland Group C/C++*/
#define __has_portland_group_compiler__ 1
#endif
#if defined(__RENESAS__)
#undef __has_renesas_compiler__
/*Renesas C/C++*/
#define __has_renesas_compiler__ 1
#endif
#if defined(SASC) || defined(__SASC) || defined(__SASC__)
#undef __has_sas_c_compiler__
/*SAS/C*/
#define __has_sas_c_compiler__ 1
#endif
#if defined(_SCO_DS)
#undef __has_sco_compiler__
/*SCO OpenServer*/
#define __has_sco_compiler__ 1
#endif
#if defined(SDCC)
#undef __has_small_device_compiler__
/*Small Device C Compiler*/
#define __has_small_device_compiler__ 1
#endif
#if defined(__SNC__)
#undef __has_sn_compiler__
/*SN Compiler*/
#define __has_sn_compiler__ 1
#endif
#if defined(__VOSC__)
#undef __has_stratus_vos_c_compiler__
/*Stratus VOS C*/
#define __has_stratus_vos_c_compiler__ 1
#endif
#if defined(__SC__)
#undef __has_symantec_compiler__
/*Symantec C++*/
#define __has_symantec_compiler__ 1
#endif
#if defined(__TenDRA__)
#undef __has_tendra_compiler__
/*TenDRA C/C++*/
#define __has_tendra_compiler__ 1
#endif
#if defined(__TI_COMPILER_VERSION__) || defined(_TMS320C6X)
#undef __has_texas_instruments_compiler__
/*Texas Instruments C/C++ Compiler*/
#define __has_texas_instruments_compiler__ 1
#endif
#if defined(THINKC3) || defined(THINKC4)
#undef __has_think_c_compiler__
/*THINK C*/
#define __has_think_c_compiler__ 1
#endif
#if defined(__TINYC__)
#undef __has_tiny_c_compiler__
/*Tiny C*/
#define __has_tiny_c_compiler__ 1
#endif
#if defined(__TURBOC__)
#undef __has_turboc_compiler__
/*Turbo C/C++*/
#define __has_turboc_compiler__ 1
#endif
#if defined(_UCC)
#undef __has_ultimate_compiler__
/*Ultimate C/C++*/
#define __has_ultimate_compiler__ 1
#endif
#if defined(__USLC__)
#undef __has_usl_c_compiler__
/*USL C*/
#define __has_usl_c_compiler__ 1
#endif
#if defined(__VBCC__)
#undef __has_vbcc_compiler__
/*VBCC*/
#define __has_vbcc_compiler__ 1
#endif
#if defined(__WATCOMC__)
#undef __has_watcom_compiler__
/*Watcom C++*/
#define __has_watcom_compiler__ 1
#endif
#if defined(__ZTC__)
#undef __has_zortech_compiler__
/*Zortech C++*/
#define __has_zortech_compiler__ 1
#endif
/*=============================================================================================*/
/*libplatform platforms*/

/*no AIX*/
#define __has_aix__ 0
/*no Android*/
#define __has_android__ 0
/*no Amdahl UTS*/
#define __has_amdahl_uts__ 0
/*no AmigaOS*/
#define __has_amiga__ 0
/*no Apollo AEGIS*/
#define __has_aegis__ 0
/*no Apollo Domain/OS*/
#define __has_apollo__ 0
/*no BeOS*/
#define __has_beos__ 0
/*no Blue Gene*/
#define __has_blue_gene__ 0
/*no BSD*/
#define __has_bsd__ 0
/*no ConvexOS*/
#define __has_convex__ 0
/*no Cygwin Environment*/
#define __has_cygwin__ 0
/*no DG/UX*/
#define __has_dgux__ 0
/*no DYNIX/ptx*/
#define __has_dynix_ptx__ 0
/*no eCos*/
#define __has_ecos__ 0
/*no EMX Environment*/
#define __has_emx__ 0
/*no HI-UX MPP*/
#define __has_hiux_mpp__ 0
/*no HP-US*/
#define __has_hpux__ 0
/*no IBM OS/400*/
#define __has_os_400__ 0
/*no INTEGRITY*/
#define __has_integrity__ 0
/*no Interix Environment*/
#define __has_interix__ 0
/*no IRIX*/
#define __has_irix__ 0
/*no Linux*/
#define __has_linux__ 0
/*no LynxOS*/
#define __has_lunx__ 0
/*no MacOS*/
#define __has_mac_os__ 0
/*no Microware OS-9*/
#define __has_microware_os_9__ 0
/*no MINIX*/
#define __has_minix__ 0
/*no MinGW*/
#define __has_mingw__ 0
/*no MorphOS*/
#define __has_morph_os__ 0
/*no MPE/iX*/
#define __has_mpe_ix__ 0
/*no MSDOS (C++ Plus C unsupport platform)*/
#define __has_dos__ 0
/*no NonStop*/
#define __has_non_stop__ 0
/*no Nucleus RTOS*/
#define __has_nucleus__ 0
/*no OS/2*/
#define __has_os2__ 0
/*no Palm OS*/
#define __has_palmos__ 0
/*no EPLAN9*/
#define __has_eplan9__ 0
/*no Pyramid DC/OSx*/
#define __has_pyr__ 0
/*no QNX*/
#define __has_qnx__ 0
/*no Reliant UNIX*/
#define __has_reliant_unix__ 0
/*no sun*/
#define __has_sun__ 0
/*no Solaris*/
#define __has_solaris__ 0
/*no SunOS*/
#define __has_sunos__ 0
/*no Stratus VOS*/
#define __has_vos__ 0
/*no SVR4 Environment*/
#define __has_svr4__ 0
/*no Syllable*/
#define __has_syllable__ 0
/*no Symbian OS*/
#define __has_symbianos__ 0
/*no OSF/1*/
#define __has_ofs1__ 0
/*no Ultrix*/
#define __has_ultrix__ 0
/*no UNICOS*/
#define __has_unicos__ 0
/*no UNICOS/mp*/
#define __has_unicos_mp__ 0
/*no UNIX Enviroment*/
#define __has_unix__ 0
/*no UnixWare*/
#define __has_unix_ware__ 0
/*no U/Win Environment*/
#define __has_uwin__ 0
/*no VMS*/
#define __has_vms__ 0
/*no VxWorks*/
#define __has_vxworks__ 0
/*no Windows*/
#define __has_windows__ 0
/*no Windows CE*/
#define __has_windows_ce__ 0
/*no Wind/U Environment*/
#define __has_windu__ 0
/*no z/OS*/
#define __has_zos__ 0
#if defined(_AIX) || defined(__TOS_AIX__)
#undef __has_aix__
/*has AIX*/
#define __has_aix__ 1
#endif
#if defined(_ANDROID_)
#undef __has_android__
/*has Android*/
#define __has_android__ 1
#endif
#if defined(UTS)
#undef __has_amdahl_uts__
/*has Amdahl UTS*/
#define __has_amdahl_uts__ 1
#endif
#if defined(AMIGA) || defined(__amigaos__)
#undef __has_amiga__
/*has AmigaOS*/
#define __has_amiga__ 1
#endif
#if defined(aegis)
#undef __has_aegis__
/*has Apollo AEGIS*/
#define __has_aegis__ 1
#endif
#if defined(apollo)
#undef __has_apollo__
/*has Apollo Domain/OS*/
#define __has_apollo__ 1
#endif
#if defined(__BEOS__)
#undef __has_beos__
/*has BeOS*/
#define __has_beos__ 1
#endif
#if defined(__bg__) || defined(__TOS_BGQ__) || defined(__bgq__) || defined(__THW_BLUEGENE__)
#undef __has_blue_gene__
/*has Blue Gene*/
#define __has_blue_gene__ 1
#endif
#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__DragonFly__)
#undef __has_bsd__
/*has BSD*/
#define __has_bsd__ 1
#endif
#if defined(__convex__)
#undef __has_convex__
/*has ConvexOS*/
#define __has_convex__ 1
#endif
#if defined(__CYGWIN__)
#undef __has_cygwin__
/*has Cygwin Environment*/
#define __has_cygwin__ 1
#endif
#if defined(DGUX) || defined(__DGUX__) || defined(__dgux__)
#undef __has_dgux__
/*has DG/UX*/
#define __has_dgux__ 1
#endif
#if defined(_SEQUENT_) || defined(sequent)
#undef __has_dynix_ptx__
/*has DYNIX/ptx*/
#define __has_dynix_ptx__ 1
#endif
#if defined(__ECOS)
#undef __has_ecos__
/*has eCos*/
#define __has_ecos__ 1
#endif
#if defined(__EMX__)
#undef __has_emx__
/*has EMX Environment*/
#define __has_emx__ 1
#endif
#if defined(__hiuxmpp)
#undef __has_hiux_mpp__
/*has HI-UX MPP*/
#define __has_hiux_mpp__ 1
#endif
#if defined(_hpux) || defined(hpux) || defined(__hpux)
#undef __has_hpux__
/*has HP-US*/
#define __has_hpux__ 1
#endif
#if defined(__OS400__) || defined(__OS400_TGTVRM__)
#undef __has_os_400__
/*has IBM OS/400*/
#define __has_os_400__ 1
#endif
#if defined(__INTEGRITY)
#undef __has_integrity__
/*has INTEGRITY*/
#define __has_integrity__ 1
#endif
#if defined(__INTERIX)
#undef __has_interix__
/*has Interix Environment*/
#define __has_interix__ 1
#endif
#if defined(sgi) || defined(__sgi)
#undef __has_irix__
/*has IRIX*/
#define __has_irix__ 1
#endif
#if defined(__linux__) || defined(linux) || defined(__linux) || defined(__nividia_fk_you__)
#undef __has_linux__
/*has Linux*/
#define __has_linux__ 1
#endif
#if defined(__Lynx__)
#undef __has_lunx__
/*has LynxOS*/
#define __has_lunx__ 1
#endif
#if defined(macintosh) || defined(Macintosh) || defined(__APPLE__) || defined(__MACH__)
#undef __has_mac_os__
/*has MacOS*/
#define __has_mac_os__ 1
#endif
#if defined(__OS9000) || defined(_OSK)
#undef __has_microware_os_9__
/*has Microware OS-9*/
#define __has_microware_os_9__ 1
#endif
#if defined(__minix)
#undef __has_minix__
/*has MINIX*/
#define __has_minix__ 1
#endif
#if defined(__MINGW32__) || defined(__MINGW64__)
/*has MinGW*/
#define __has_mingw__ 1
#endif
#if defined(__MORPHOS__)
#undef __has_morph_os__
/*has MorphOS*/
#define __has_morph_os__ 1
#endif
#if defined(mpeix) || defined(__mpexl)
#undef __has_mpe_ix__
/*has MPE/iX*/
#define __has_mpe_ix__ 1
#endif
#if defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(	__DOS__)
#undef __has_dos__
/*has MSDOS (C++ Plus C unsupport platform)*/
#define __has_dos__ 1
#endif
#if defined(__TANDEM)
#undef __has_non_stop__
/*has NonStop*/
#define __has_non_stop__ 1
#endif
#if defined(__nucleus__)
#undef __has_nucleus__
/*has Nucleus RTOS*/
#define __has_nucleus__ 1
#endif
#if defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
#undef __has_os2__
/*has OS/2*/
#define __has_os2__ 1
#endif
#if defined(__palmos__)
#undef __has_palmos__
/*has Palm OS*/
#define __has_palmos__ 1
#endif
#if defined(EPLAN9)
#undef __has_eplan9__
/*has EPLAN9*/
#define __has_eplan9__ 1
#endif
#if defined(pyr)
#undef __has_pyr__
/*has Pyramid DC/OSx*/
#define __has_pyr__ 1
#endif
#if defined(__QNX__) || defined(__QNXNTO__)
#undef __has_qnx__
/*has QNX*/
#define __has_qnx__ 1
#endif
#if defined(sinux)
#undef __has_reliant_unix__
/*has Reliant UNIX*/
#define __has_reliant_unix__ 1
#endif
#if defined(sun) || defined(__sun)
#undef __has_sun__
/*has sun*/
#define __has_sun__ 1
#if defined(__SVR4) || defined(__svr4__)
#undef __has_solaris__
/*has Solaris*/
#define __has_solaris__ 1
#else
#undef __has_sunos__
/*has SunOS*/
#define __has_sunos__ 1
#endif
#endif
#if defined(__VOS__)
#undef __has_vos__
/*has Stratus VOS*/
#define __has_vos__ 1
#endif
#if defined(__sysv__) || defined(__SVR4) || defined(__svr4__) || defined(_SYSTYPE_SVR4)
#undef __has_svr4__
/*has SVR4 Environment*/
#define __has_svr4__ 1
#endif
#if defined(__SYLLABLE__)
#undef __has_syllable__
/*has Syllable*/
#define __has_syllable__ 1
#endif
#if defined(__SYMBIAN32__)
#undef __has_symbianos__
/*has Symbian OS*/
#define __has_symbianos__ 1
#endif
#if defined(__osf__) || defined(__osf)
#undef __has_ofs1__
/*has OSF/1*/
#define __has_ofs1__ 1
#endif
#if defined(ultrix) || defined(__ultrix) || defined(__ultrix__) || (defined(unix) && defined(vax))
#undef __has_ultrix__
/*has Ultrix*/
#define __has_ultrix__ 1
#endif
#if defined(_UNICOS)
#undef __has_unicos__
/*has UNICOS*/
#define __has_unicos__ 1
#endif
#if defined(_CRAY) || defined(__crayx1)
#undef __has_unicos_mp__
/*has UNICOS/mp*/
#define __has_unicos_mp__ 1
#endif
#if defined(__unix__) || defined(__unix)
#undef __has_unix__
/*has UNIX Enviroment*/
#define __has_unix__ 1
#endif
#if defined(sco) || defined(_UNIXWARE7)
#undef __has_unix_ware__
/*has UnixWare*/
#define __has_unix_ware__ 1
#endif
#if defined(_UWIN)
#undef __has_uwin__
/*has U/Win Environment*/
#define __has_uwin__ 1
#endif
#if defined(VMS) || defined(__VMS) || defined(__VMS_VER)
#undef __has_vms__
/*has VMS*/
#define __has_vms__ 1
#endif
#if defined(__VXWORKS__) || defined(__vxworks)
#undef __has_vxworks__
/*has VxWorks*/
#define __has_vxworks__ 1
#endif
#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
#undef __has_windows__
/*has Windows*/
#define __has_windows__ 1
#endif
#if defined(_WIN32_WCE)
#undef __has_windows_ce__
/*has Windows CE*/
#define __has_windows_ce__ 1
#endif
#if defined(_WINDU_SOURCE)
#undef __has_windu__
/*has Wind/U Environment*/
#define __has_windu__ 1
#endif
#if defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
#undef __has_zos__
/*has z/OS*/
#define __has_zos__ 1
#endif
/*=============================================================================================*/
/*libplatform stds*/

#ifdef __cplusplus
extern "C" {
#endif

/*STD C94*/
#define __stdc_c94__ 199409L
/*STD C99*/
#define __stdc_c99__ 199901L
/*STD C11*/
#define __stdc_c11__ 201112L
/*STD C18/C17*/
#define __stdc_c18__ 201710L

#define __has_c89__ 1

#ifdef __STDC_VERSION__
#define __has_c94__ 1
#define __has_c99__ (__STDC_VERSION__ >= __stdc_c99__)
#define __has_c11__ (__STDC_VERSION__ >= __stdc_c11__)
#define __has_c18__ (__STDC_VERSION__ >= __stdc_c18__)
#else
#define __has_c94__ 0
#define __has_c99__ 0
#define __has_c11__ 0
#define __has_c18__ 0
#endif

#ifdef __cplusplus
}
#endif

/*C++98*/
#define __stdcpp_cpp98__ 199711L
/*C++11*/
#define __stdcpp_cpp11__ 201103L
/*C++14*/
#define __stdcpp_cpp14__ 201402L
/*C++17*/
#define __stdcpp_cpp17__ 201703L
/*C++20*/
#define __stdcpp_cpp20__ 202002L

/*fix MSVC++ __cplusplus*/
#ifdef _MSVC_LANG
#define __cpp_version__ _MSVC_LANG
#else
#define __cpp_version__ __cplusplus
#endif

#ifdef __cplusplus
/*C++ version*/
#define __has_cpp98__ (__cpp_version__ >= __stdcpp_cpp98__)
#define __has_cpp11__ (__cpp_version__ >= __stdcpp_cpp11__)
#define __has_cpp14__ (__cpp_version__ >= __stdcpp_cpp14__)
#define __has_cpp17__ (__cpp_version__ >= __stdcpp_cpp17__)
#define __has_cpp20__ (__cpp_version__ >= __stdcpp_cpp20__)
#else
#define __has_cpp98__ 0
#define __has_cpp11__ 0
#define __has_cpp14__ 0
#define __has_cpp17__ 0
#define __has_cpp20__ 0
#endif
#endif
