#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled && __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(unsigned int decCovId);


#define __MW_INSTRUM_FCN_ENTER_20() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_abs_tol, __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_426() \
  (((!__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_enabled || __mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_YniSwGxVGDuH0o55vVoK7E_cclib_ptruth_tables = __MW_INSTRUM_YniSwGxVGDuH0o55vVoK7E_cclib_INIT_FILE(0)))), \
   __MW_INSTRUM_RECORD_HIT(426U))
#define __MW_INSTRUM_NODE_427() \
  (__MW_INSTRUM_RECORD_HIT(427U))
#define __MW_INSTRUM_NODE_428() \
  (__MW_INSTRUM_RECORD_HIT(428U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#define __MW_INSTRUM_FCN_ENTER_20() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_426EZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_426() __MW_INSTRUM_RECORD_HIT_426EZ_YniSwGxVGDuH0o55vVoK7E()

#define __MW_INSTRUM_NODE_427() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_428XZ_YniSwGxVGDuH0o55vVoK7E(void) { }
#define __MW_INSTRUM_NODE_428() __MW_INSTRUM_RECORD_HIT_428XZ_YniSwGxVGDuH0o55vVoK7E()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "E:\\W\\T\\Trike_SpeedGoat_algo\\slprj\\_slcc\\YniSwGxVGDuH0o55vVoK7E\\customcode_YniSwGxVGDuH0o55vVoK7E.c"
# 1 "E:\\W\\T\\Trike_SpeedGoat_algo\\slprj\\_slcc\\YniSwGxVGDuH0o55vVoK7E\\customcode_YniSwGxVGDuH0o55vVoK7E.h"
#ifndef __customcode_YniSwGxVGDuH0o55vVoK7E_h__
#define __customcode_YniSwGxVGDuH0o55vVoK7E_h__
# 15 "C:\\LegacyApp\\Matlab18b\\R2018b\\extern\\include\\mex.h"
#ifndef mex_h
#define mex_h
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdio.h" 3
#ifndef _INC_STDIO
#define _INC_STDIO
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
#ifndef _INC_CRTDEFS
#define _INC_CRTDEFS
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef _INC__MINGW_H
#define _INC__MINGW_H
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw_mac.h" 3
#ifndef _INC_CRTDEFS_MACRO
#define _INC_CRTDEFS_MACRO
# 151
#ifndef __C89_NAMELESS
#define __C89_NAMELESS __MINGW_EXTENSION
# 168
#endif /* __C89_NAMELESS */

#ifndef __GNU_EXTENSION
#define __GNU_EXTENSION __MINGW_EXTENSION
#endif /* __GNU_EXTENSION */
# 274
#endif /* _INC_CRTDEFS_MACRO */
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw_secapi.h" 3
#ifndef _INC_MINGW_SECAPI
#define _INC_MINGW_SECAPI
# 201
#endif /* _INC_MINGW_SECAPI */
# 33 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifdef __stdcall
#undef __stdcall
#endif /* __stdcall */
# 50
#ifndef __MINGW_IMPORT
#define __MINGW_IMPORT extern __attribute__ ((__dllimport__))


#endif /* __MINGW_IMPORT */
# 218
#ifndef __MSVCRT_VERSION__
#define __MSVCRT_VERSION__ 0x0700

#endif /* __MSVCRT_VERSION__ */


#ifndef WINVER
#define WINVER 0x0502
#endif /* WINVER */

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x502
#endif /* _WIN32_WINNT */

#ifndef _INT128_DEFINED
#define _INT128_DEFINED
# 249
#endif /* _INT128_DEFINED */




#ifndef __unaligned
#define __unaligned
#endif /* __unaligned */
#ifndef __w64
#define __w64
#endif /* __w64 */
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#ifndef _INC_VADEFS
#define _INC_VADEFS
# 677 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef MINGW_SDK_INIT
#define MINGW_SDK_INIT
# 5 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\sdks/_mingw_directx.h" 3
#ifndef MINGW_HAS_DDRAW_H
#define MINGW_HAS_DDRAW_H 1

#endif /* MINGW_HAS_DDRAW_H */
# 1 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\sdks/_mingw_ddk.h" 3
#ifndef MINGW_DDK_H
#define MINGW_DDK_H



#endif /* MINGW_DDK_H */
# 690 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#endif /* MINGW_SDK_INIT */
# 20 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
# 12
#pragma pack ( push, 8 )
# 22
typedef __builtin_va_list __gnuc_va_list; 
#endif /* __GNUC_VA_LIST */


#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED

typedef __gnuc_va_list va_list; 





#endif /* _VA_LIST_DEFINED */
# 104
#endif /* _INC_VADEFS */
# 298 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef _W64
#define _W64
#endif /* _W64 */
# 310
#ifndef _CRTIMP2
#define _CRTIMP2 _CRTIMP
#endif /* _CRTIMP2 */

#ifndef _CRTIMP_ALTERNATIVE
#define _CRTIMP_ALTERNATIVE _CRTIMP

#endif /* _CRTIMP_ALTERNATIVE */

#ifndef _MRTIMP2
#define _MRTIMP2 _CRTIMP
#endif /* _MRTIMP2 */
# 332
#ifndef _MT
#define _MT
#endif /* _MT */

#ifndef _MCRTIMP
#define _MCRTIMP _CRTIMP
#endif /* _MCRTIMP */

#ifndef _CRTIMP_PURE
#define _CRTIMP_PURE _CRTIMP
#endif /* _CRTIMP_PURE */

#ifndef _PGLOBAL
#define _PGLOBAL
#endif /* _PGLOBAL */

#ifndef _AGLOBAL
#define _AGLOBAL
#endif /* _AGLOBAL */




#ifndef _CRT_INSECURE_DEPRECATE_MEMORY
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) 
#endif /* _CRT_INSECURE_DEPRECATE_MEMORY */

#ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) 
#endif /* _CRT_INSECURE_DEPRECATE_GLOBALS */

#ifndef _CRT_MANAGED_HEAP_DEPRECATE
#define _CRT_MANAGED_HEAP_DEPRECATE
#endif /* _CRT_MANAGED_HEAP_DEPRECATE */

#ifndef _CRT_OBSOLETE
#define _CRT_OBSOLETE(_NewItem) 
#endif /* _CRT_OBSOLETE */



#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
# 101 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#pragma pack ( pop )
# 285 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#pragma pack ( push, 8 )
# 377
__extension__ typedef unsigned long long size_t; 



#endif /* _SIZE_T_DEFINED */

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED


__extension__ typedef long long ssize_t; 



#endif /* _SSIZE_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#ifndef __intptr_t_defined
#define __intptr_t_defined


__extension__ typedef long long intptr_t; 



#endif /* __intptr_t_defined */
#endif /* _INTPTR_T_DEFINED */

#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#ifndef __uintptr_t_defined
#define __uintptr_t_defined


__extension__ typedef unsigned long long uintptr_t; 



#endif /* __uintptr_t_defined */
#endif /* _UINTPTR_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#ifndef _PTRDIFF_T_
#define _PTRDIFF_T_


__extension__ typedef long long ptrdiff_t; 



#endif /* _PTRDIFF_T_ */
#endif /* _PTRDIFF_T_DEFINED */
# 439
#ifndef _WCTYPE_T_DEFINED
#define _WCTYPE_T_DEFINED
#ifndef _WINT_T
#define _WINT_T
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
#endif /* _WINT_T */
#endif /* _WCTYPE_T_DEFINED */
# 461
#ifndef _ERRCODE_DEFINED
#define _ERRCODE_DEFINED
typedef int errno_t; 
#endif /* _ERRCODE_DEFINED */

#ifndef _TIME32_T_DEFINED
#define _TIME32_T_DEFINED
typedef long __time32_t; 
#endif /* _TIME32_T_DEFINED */

#ifndef _TIME64_T_DEFINED
#define _TIME64_T_DEFINED
__extension__ typedef long long __time64_t; 
#endif /* _TIME64_T_DEFINED */

#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED



typedef __time64_t time_t; 

#endif /* _TIME_T_DEFINED */

#ifndef _CONST_RETURN
#define _CONST_RETURN
#endif /* _CONST_RETURN */
# 507
#ifndef __CRTDECL
#define __CRTDECL __cdecl
#endif /* __CRTDECL */



#ifndef _TRUNCATE
#define _TRUNCATE ((size_t)-1)
#endif /* _TRUNCATE */

#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
# 570
#ifndef __ANONYMOUS_DEFINED
#define __ANONYMOUS_DEFINED
# 581
#endif /* __ANONYMOUS_DEFINED */
# 656
__attribute((__cdecl__)) __attribute((gnu_inline)) extern __inline__ void __debugbreak(void); 
__attribute((__always_inline__, __gnu_inline__)) __attribute((__cdecl__)) extern __inline__ void __debugbreak(void) 
{ 
__asm__ volatile("int {$}3" : :); 
} 




const char *__mingw_get_crt_info(void); 
# 675
#endif /* _INC__MINGW_H */
# 17 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
#ifndef _CRTNOALIAS
#define _CRTNOALIAS
#endif /* _CRTNOALIAS */

#ifndef _CRTRESTRICT
#define _CRTRESTRICT
#endif /* _CRTRESTRICT */

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
# 672 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#pragma pack ( pop )
# 26 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
typedef size_t rsize_t; 

#endif /* _RSIZE_T_DEFINED */
# 153
struct threadlocaleinfostruct; 
struct threadmbcinfostruct; 
typedef struct threadlocaleinfostruct *pthreadlocinfo; 
typedef struct threadmbcinfostruct *pthreadmbcinfo; 
struct __lc_time_data; 




typedef 
# 159
struct localeinfo_struct { 
pthreadlocinfo locinfo; 
pthreadmbcinfo mbcinfo; 
} _locale_tstruct, *_locale_t; 

#ifndef _TAGLC_ID_DEFINED
#define _TAGLC_ID_DEFINED




typedef 
# 166
struct tagLC_ID { 
unsigned short wLanguage; 
unsigned short wCountry; 
unsigned short wCodePage; 
} LC_ID, *LPLC_ID; 
#endif /* _TAGLC_ID_DEFINED */

#ifndef _THREADLOCALEINFO
#define _THREADLOCALEINFO
# 199
typedef 
# 175
struct threadlocaleinfostruct { 
int refcount; 
unsigned lc_codepage; 
unsigned lc_collate_cp; 
unsigned long lc_handle[6]; 
LC_ID lc_id[6]; 
struct { 
char *locale; 
unsigned short *wlocale; 
int *refcount; 
int *wrefcount; 
} lc_category[6]; 
int lc_clike; 
int mb_cur_max; 
int *lconv_intl_refcount; 
int *lconv_num_refcount; 
int *lconv_mon_refcount; 
struct lconv *lconv; 
int *ctype1_refcount; 
unsigned short *ctype1; 
const unsigned short *pctype; 
const unsigned char *pclmap; 
const unsigned char *pcumap; 
struct __lc_time_data *lc_time_curr; 
} threadlocinfo; 
#endif /* _THREADLOCALEINFO */

#ifndef __crt_typefix
#define __crt_typefix(ctype) 
#endif /* __crt_typefix */

#endif /* _INC_CRTDEFS */
# 25 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdio.h" 3
#ifndef _FILE_DEFINED
#define _FILE_DEFINED
# 13
#pragma pack ( push, 8 )
# 26
struct _iobuf { 
char *_ptr; 
int _cnt; 
char *_base; 
int _flag; 
int _file; 
int _charbuf; 
int _bufsiz; 
char *_tmpfname; 
}; 
typedef struct _iobuf FILE; 

#endif /* _FILE_DEFINED */
# 1 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\_mingw_off_t.h" 3
#ifndef _OFF_T_DEFINED
#define _OFF_T_DEFINED
#ifndef _OFF_T_
#define _OFF_T_
typedef long _off_t; 

typedef long off32_t; 

#endif /* _OFF_T_ */

#ifndef _OFF64_T_DEFINED
#define _OFF64_T_DEFINED
__extension__ typedef long long _off64_t; 

__extension__ typedef long long off64_t; 

#endif /* _OFF64_T_DEFINED */


#ifndef _FILE_OFFSET_BITS_SET_OFFT
#define _FILE_OFFSET_BITS_SET_OFFT




typedef off32_t off_t; 


#endif /* _FILE_OFFSET_BITS_SET_OFFT */


#endif /* _OFF_T_DEFINED */
# 84 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdio.h" 3
__attribute((__dllimport__)) FILE *__iob_func(void) __attribute((__cdecl__)); 
# 98
#ifndef _FPOS_T_DEFINED
#define _FPOS_T_DEFINED



__extension__ typedef long long fpos_t; 
# 110
#endif /* _FPOS_T_DEFINED */

#ifndef _STDSTREAM_DEFINED
#define _STDSTREAM_DEFINED




#endif /* _STDSTREAM_DEFINED */
# 138
#ifndef _STDIO_DEFINED
#define _STDIO_DEFINED
__attribute((__format__(gnu_scanf, 2, 3))) __attribute((__nonnull__(2))) 
__attribute((__cdecl__)) extern int __mingw_sscanf(const char * _Src, const char * _Format, ...); 

__attribute((__format__(gnu_scanf, 2, 0))) __attribute((__nonnull__(2))) 
__attribute((__cdecl__)) extern int __mingw_vsscanf(const char * _Str, const char * Format, va_list argp); 

__attribute((__format__(gnu_scanf, 1, 2))) __attribute((__nonnull__(1))) 
__attribute((__cdecl__)) extern int __mingw_scanf(const char * _Format, ...); 

__attribute((__format__(gnu_scanf, 1, 0))) __attribute((__nonnull__(1))) 
__attribute((__cdecl__)) extern int __mingw_vscanf(const char * Format, va_list argp); 

__attribute((__format__(gnu_scanf, 2, 3))) __attribute((__nonnull__(2))) 
__attribute((__cdecl__)) extern int __mingw_fscanf(FILE * _File, const char * _Format, ...); 

__attribute((__format__(gnu_scanf, 2, 0))) __attribute((__nonnull__(2))) 
__attribute((__cdecl__)) extern int __mingw_vfscanf(FILE * fp, const char * Format, va_list argp); 


__attribute((__format__(gnu_printf, 3, 0))) __attribute((__nonnull__(3))) 
__attribute((__cdecl__)) extern int __mingw_vsnprintf(char * _DstBuf, size_t _MaxCount, const char * _Format, va_list _ArgList); 


__attribute((__format__(gnu_printf, 3, 4))) __attribute((__nonnull__(3))) 
__attribute((__cdecl__)) extern int __mingw_snprintf(char * s, size_t n, const char * format, ...); 

__attribute((__format__(gnu_printf, 1, 2))) __attribute((__nonnull__(1))) 
__attribute((__cdecl__)) extern int __mingw_printf(const char *, ...) __attribute((__nothrow__)); 

__attribute((__format__(gnu_printf, 1, 0))) __attribute((__nonnull__(1))) 
__attribute((__cdecl__)) extern int __mingw_vprintf(const char *, va_list) __attribute((__nothrow__)); 

__attribute((__format__(gnu_printf, 2, 3))) __attribute((__nonnull__(2))) 
__attribute((__cdecl__)) extern int __mingw_fprintf(FILE *, const char *, ...) __attribute((__nothrow__)); 

__attribute((__format__(gnu_printf, 2, 0))) __attribute((__nonnull__(2))) 
__attribute((__cdecl__)) extern int __mingw_vfprintf(FILE *, const char *, va_list) __attribute((__nothrow__)); 

__attribute((__format__(gnu_printf, 2, 3))) __attribute((__nonnull__(2))) 
__attribute((__cdecl__)) extern int __mingw_sprintf(char *, const char *, ...) __attribute((__nothrow__)); 

__attribute((__format__(gnu_printf, 2, 0))) __attribute((__nonnull__(2))) 
__attribute((__cdecl__)) extern int __mingw_vsprintf(char *, const char *, va_list) __attribute((__nothrow__)); 

__attribute((__format__(gnu_printf, 2, 3))) __attribute((nonnull(1, 2))) 
__attribute((__cdecl__)) extern int __mingw_asprintf(char **, const char *, ...) __attribute((__nothrow__)); 

__attribute((__format__(gnu_printf, 2, 0))) __attribute((nonnull(1, 2))) 
__attribute((__cdecl__)) extern int __mingw_vasprintf(char **, const char *, va_list) __attribute((__nothrow__)); 
# 377
__attribute((__cdecl__)) int fprintf(FILE * _File, const char * _Format, ...); 
__attribute((__cdecl__)) int printf(const char * _Format, ...); 
__attribute((__cdecl__)) int sprintf(char * _Dest, const char * _Format, ...); 

__attribute((__cdecl__)) int vfprintf(FILE * _File, const char * _Format, va_list _ArgList); 
__attribute((__cdecl__)) int vprintf(const char * _Format, va_list _ArgList); 
__attribute((__cdecl__)) int vsprintf(char * _Dest, const char * _Format, va_list _Args); 

__attribute((__cdecl__)) int fscanf(FILE * _File, const char * _Format, ...); 
__attribute((__cdecl__)) int scanf(const char * _Format, ...); 
__attribute((__cdecl__)) int sscanf(const char * _Src, const char * _Format, ...); 
# 393
__attribute((__cdecl__)) int __ms_vscanf(const char * Format, va_list argp); 
__attribute((__cdecl__)) int __ms_vfscanf(FILE * fp, const char * Format, va_list argp); 
__attribute((__cdecl__)) int __ms_vsscanf(const char * _Str, const char * Format, va_list argp); 

__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(2))) static __inline__ int 
vfscanf(FILE *__stream, const char *__format, __builtin_va_list __local_argv) 
{ 
return __ms_vfscanf(__stream, __format, __local_argv); 
} 

__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(2))) static __inline__ int 
vsscanf(const char *__source, const char *__format, __builtin_va_list __local_argv) 
{ 
return __ms_vsscanf(__source, __format, __local_argv); 
} 
__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(1))) static __inline__ int 
vscanf(const char *__format, __builtin_va_list __local_argv) 
{ 
return __ms_vscanf(__format, __local_argv); 
} 




__attribute((__dllimport__)) __attribute((__cdecl__)) int _filbuf(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _flsbuf(int _Ch, FILE * _File); 



__attribute((__dllimport__)) FILE *_fsopen(const char * _Filename, const char * _Mode, int _ShFlag) __attribute((__cdecl__)); 

__attribute((__cdecl__)) void clearerr(FILE * _File); 
__attribute((__cdecl__)) int fclose(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fcloseall(void); 



__attribute((__dllimport__)) FILE *_fdopen(int _FileHandle, const char * _Mode) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int feof(FILE * _File); 
__attribute((__cdecl__)) int ferror(FILE * _File); 
__attribute((__cdecl__)) int fflush(FILE * _File); 
__attribute((__cdecl__)) int fgetc(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fgetchar(void); 
__attribute((__cdecl__)) int fgetpos(FILE * _File, fpos_t * _Pos); 
__attribute((__cdecl__)) int fgetpos64(FILE * _File, fpos_t * _Pos); 
char *fgets(char * _Buf, int _MaxCount, FILE * _File) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fileno(FILE * _File); 



__attribute((__dllimport__)) char *_tempnam(const char * _DirName, const char * _FilePrefix) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _flushall(void); 
FILE *fopen(const char * _Filename, const char * _Mode) __attribute((__cdecl__)); 
FILE *fopen64(const char * filename, const char * mode); 
__attribute((__cdecl__)) int fputc(int _Ch, FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fputchar(int _Ch); 
__attribute((__cdecl__)) int fputs(const char * _Str, FILE * _File); 
__attribute((__cdecl__)) size_t fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File); 
FILE *freopen(const char * _Filename, const char * _Mode, FILE * _File) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int fsetpos(FILE * _File, const fpos_t * _Pos); 
__attribute((__cdecl__)) int fsetpos64(FILE * _File, const fpos_t * _Pos); 
__attribute((__cdecl__)) int fseek(FILE * _File, long _Offset, int _Origin); 



int fseeko64(FILE * stream, _off64_t offset, int whence); 
int fseeko(FILE * stream, _off_t offset, int whence); 

#ifndef _FILE_OFFSET_BITS_SET_FSEEKO
#define _FILE_OFFSET_BITS_SET_FSEEKO



#endif /* _FILE_OFFSET_BITS_SET_FSEEKO */

__attribute((__cdecl__)) long ftell(FILE * _File); 

_off_t ftello(FILE * stream); 
_off64_t ftello64(FILE * stream); 

#ifndef _FILE_OFFSET_BITS_SET_FTELLO
#define _FILE_OFFSET_BITS_SET_FTELLO



#endif /* _FILE_OFFSET_BITS_SET_FTELLO */

__extension__ __attribute((__cdecl__)) int _fseeki64(FILE * _File, long long _Offset, int _Origin); 
__extension__ __attribute((__cdecl__)) long long _ftelli64(FILE * _File); 
__attribute((__cdecl__)) size_t fwrite(const void * _Str, size_t _Size, size_t _Count, FILE * _File); 
__attribute((__cdecl__)) int getc(FILE * _File); 
__attribute((__cdecl__)) int getchar(void); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _getmaxstdio(void); 
char *gets(char * _Buffer) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int _getw(FILE * _File); 
#ifndef _CRT_PERROR_DEFINED
#define _CRT_PERROR_DEFINED
__attribute((__cdecl__)) void perror(const char * _ErrMsg); 
#endif /* _CRT_PERROR_DEFINED */
__attribute((__dllimport__)) __attribute((__cdecl__)) int _pclose(FILE * _File); 
__attribute((__dllimport__)) FILE *_popen(const char * _Command, const char * _Mode) __attribute((__cdecl__)); 




__attribute((__cdecl__)) int putc(int _Ch, FILE * _File); 
__attribute((__cdecl__)) int putchar(int _Ch); 
__attribute((__cdecl__)) int puts(const char * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _putw(int _Word, FILE * _File); 
#ifndef _CRT_DIRECTORY_DEFINED
#define _CRT_DIRECTORY_DEFINED
__attribute((__cdecl__)) int remove(const char * _Filename); 
__attribute((__cdecl__)) int rename(const char * _OldFilename, const char * _NewFilename); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _unlink(const char * _Filename); 

__attribute((__cdecl__)) int unlink(const char * _Filename); 

#endif /* _CRT_DIRECTORY_DEFINED */
__attribute((__cdecl__)) void rewind(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _rmtmp(void); 
__attribute((__cdecl__)) void setbuf(FILE * _File, char * _Buffer); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _setmaxstdio(int _Max); 
__attribute((__dllimport__)) __attribute((__cdecl__)) unsigned _set_output_format(unsigned _Format); 
__attribute((__dllimport__)) __attribute((__cdecl__)) unsigned _get_output_format(void); 
__attribute((__cdecl__)) int setvbuf(FILE * _File, char * _Buf, int _Mode, size_t _Size); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _scprintf(const char * _Format, ...); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _snscanf(const char * _Src, size_t _MaxCount, const char * _Format, ...); 
FILE *tmpfile(void) __attribute((__cdecl__)); 
char *tmpnam(char * _Buffer) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int ungetc(int _Ch, FILE * _File); 

__attribute((__dllimport__)) __attribute((__cdecl__)) int _snprintf(char * _Dest, size_t _Count, const char * _Format, ...); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _vsnprintf(char * _Dest, size_t _Count, const char * _Format, va_list _Args); 
# 538
__attribute((__cdecl__)) int __ms_vsnprintf(char * d, size_t n, const char * format, va_list arg); 


__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(3))) static __inline__ int 
vsnprintf(char *__stream, size_t __n, const char *__format, va_list __local_argv) 
{ 
return __ms_vsnprintf(__stream, __n, __format, __local_argv); 
} 

__attribute((__cdecl__)) int __ms_snprintf(char * s, size_t n, const char * format, ...); 


__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(3))) static __inline__ int 
snprintf(char *__stream, size_t __n, const char *__format, ...) 
{ 
register int __retval; 
__builtin_va_list __local_argv; __builtin_va_start((__local_argv),__format); 
__retval = __ms_vsnprintf(__stream, __n, __format, __local_argv); 
__builtin_va_end(__local_argv); 
return __retval; 
} 
# 567
__attribute((__dllimport__)) __attribute((__cdecl__)) int _vscprintf(const char * _Format, va_list _ArgList); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _set_printf_count_output(int _Value); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _get_printf_count_output(void); 

#ifndef _WSTDIO_DEFINED
#define _WSTDIO_DEFINED

__attribute((__nonnull__(2))) 
__attribute((__cdecl__)) int __mingw_swscanf(const unsigned short * _Src, const unsigned short * _Format, ...); 
__attribute((__nonnull__(2))) 
__attribute((__cdecl__)) int __mingw_vswscanf(const unsigned short * _Str, const unsigned short * Format, va_list argp); 
__attribute((__nonnull__(1))) 
__attribute((__cdecl__)) int __mingw_wscanf(const unsigned short * _Format, ...); 
__attribute((__nonnull__(1))) 
__attribute((__cdecl__)) int __mingw_vwscanf(const unsigned short * Format, va_list argp); 
__attribute((__nonnull__(2))) 
__attribute((__cdecl__)) int __mingw_fwscanf(FILE * _File, const unsigned short * _Format, ...); 
__attribute((__nonnull__(2))) 
__attribute((__cdecl__)) int __mingw_vfwscanf(FILE * fp, const unsigned short * Format, va_list argp); 

__attribute((__nonnull__(2))) 
__attribute((__cdecl__)) int __mingw_fwprintf(FILE * _File, const unsigned short * _Format, ...); 
__attribute((__nonnull__(1))) 
__attribute((__cdecl__)) int __mingw_wprintf(const unsigned short * _Format, ...); 
__attribute((__nonnull__(2))) 
__attribute((__cdecl__)) int __mingw_vfwprintf(FILE * _File, const unsigned short * _Format, va_list _ArgList); 
__attribute((__nonnull__(1))) 
__attribute((__cdecl__)) int __mingw_vwprintf(const unsigned short * _Format, va_list _ArgList); 
__attribute((__nonnull__(3))) 
__attribute((__cdecl__)) int __mingw_snwprintf(unsigned short * s, size_t n, const unsigned short * format, ...); 
__attribute((__nonnull__(3))) 
__attribute((__cdecl__)) int __mingw_vsnwprintf(unsigned short *, size_t, const unsigned short *, va_list); 
__attribute((__nonnull__(2))) 
__attribute((__cdecl__)) int __mingw_swprintf(unsigned short *, const unsigned short *, ...); 
__attribute((__nonnull__(2))) 
__attribute((__cdecl__)) int __mingw_vswprintf(unsigned short *, const unsigned short *, va_list); 
# 725
__attribute((__cdecl__)) int fwscanf(FILE * _File, const unsigned short * _Format, ...); 
__attribute((__cdecl__)) int swscanf(const unsigned short * _Src, const unsigned short * _Format, ...); 
__attribute((__cdecl__)) int wscanf(const unsigned short * _Format, ...); 

__attribute((__cdecl__)) int __ms_vwscanf(const unsigned short *, va_list); 
__attribute((__cdecl__)) int __ms_vfwscanf(FILE *, const unsigned short *, va_list); 
__attribute((__cdecl__)) int __ms_vswscanf(const unsigned short *, const unsigned short *, va_list); 

__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(2))) static __inline__ int 
vfwscanf(FILE *__stream, const unsigned short *__format, __builtin_va_list __local_argv) 
{ 
return __ms_vfwscanf(__stream, __format, __local_argv); 
} 

__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(2))) static __inline__ int 
vswscanf(const unsigned short *__source, const unsigned short *__format, __builtin_va_list __local_argv) 
{ 
return __ms_vswscanf(__source, __format, __local_argv); 
} 
__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(1))) static __inline__ int 
vwscanf(const unsigned short *__format, __builtin_va_list __local_argv) 
{ 
return __ms_vwscanf(__format, __local_argv); 
} 



__attribute((__cdecl__)) int fwprintf(FILE * _File, const unsigned short * _Format, ...); 
__attribute((__cdecl__)) int wprintf(const unsigned short * _Format, ...); 
__attribute((__cdecl__)) int vfwprintf(FILE * _File, const unsigned short * _Format, va_list _ArgList); 
__attribute((__cdecl__)) int vwprintf(const unsigned short * _Format, va_list _ArgList); 


#ifndef WEOF
#define WEOF (wint_t)(0xFFFF)
#endif /* WEOF */




__attribute((__dllimport__)) FILE *_wfsopen(const unsigned short * _Filename, const unsigned short * _Mode, int _ShFlag) __attribute((__cdecl__)); 


__attribute((__cdecl__)) wint_t fgetwc(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) wint_t _fgetwchar(void); 
__attribute((__cdecl__)) wint_t fputwc(unsigned short _Ch, FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) wint_t _fputwchar(unsigned short _Ch); 
__attribute((__cdecl__)) wint_t getwc(FILE * _File); 
__attribute((__cdecl__)) wint_t getwchar(void); 
__attribute((__cdecl__)) wint_t putwc(unsigned short _Ch, FILE * _File); 
__attribute((__cdecl__)) wint_t putwchar(unsigned short _Ch); 
__attribute((__cdecl__)) wint_t ungetwc(wint_t _Ch, FILE * _File); 
unsigned short *fgetws(unsigned short * _Dst, int _SizeInWords, FILE * _File) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int fputws(const unsigned short * _Str, FILE * _File); 
__attribute((__dllimport__)) unsigned short *_getws(unsigned short * _String) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _putws(const unsigned short * _Str); 

__attribute((__dllimport__)) __attribute((__cdecl__)) int _scwprintf(const unsigned short * _Format, ...); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _swprintf_c(unsigned short * _DstBuf, size_t _SizeInWords, const unsigned short * _Format, ...); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _vswprintf_c(unsigned short * _DstBuf, size_t _SizeInWords, const unsigned short * _Format, va_list _ArgList); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _snwprintf(unsigned short * _Dest, size_t _Count, const unsigned short * _Format, ...); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _vsnwprintf(unsigned short * _Dest, size_t _Count, const unsigned short * _Format, va_list _Args); 
# 798
__attribute((__cdecl__)) int __ms_snwprintf(unsigned short * s, size_t n, const unsigned short * format, ...); 
__attribute((__cdecl__)) int __ms_vsnwprintf(unsigned short *, size_t, const unsigned short *, va_list); 
__attribute((__unused__)) __attribute((__cdecl__)) static __inline__ int 
snwprintf(unsigned short *s, size_t n, const unsigned short *format, ...) 
{ 
int r; 
va_list argp; 
__builtin_va_start((argp),format); 
r = _vsnwprintf(s, n, format, argp); 
__builtin_va_end(argp); 
return r; 
} 
__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__cdecl__)) static __inline__ int vsnwprintf(unsigned short *s, size_t n, const unsigned short *format, va_list arg) 
{ 
return _vsnwprintf(s, n, format, arg); 
} 
# 820
__attribute((__dllimport__)) __attribute((__cdecl__)) int _swprintf(unsigned short * _Dest, const unsigned short * _Format, ...); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _vswprintf(unsigned short * _Dest, const unsigned short * _Format, va_list _Args); 
# 7 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\swprintf.inl" 3
#ifndef _INC_SWPRINTF_INL
#define _INC_SWPRINTF_INL
# 21
__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(3))) static __inline__ int 
vswprintf(unsigned short *__stream, size_t __count, const unsigned short *__format, __builtin_va_list __local_argv) 
{ 
return vsnwprintf(__stream, __count, __format, __local_argv); 
} 

__attribute((__unused__)) __attribute((__cdecl__)) 
__attribute((__nonnull__(3))) static __inline__ int 
swprintf(unsigned short *__stream, size_t __count, const unsigned short *__format, ...) 
{ 
register int __retval; 
__builtin_va_list __local_argv; 

__builtin_va_start((__local_argv),__format); 
__retval = vswprintf(__stream, __count, __format, __local_argv); 
__builtin_va_end(__local_argv); 
return __retval; 
} 
# 83
#endif /* _INC_SWPRINTF_INL */
# 834 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdio.h" 3
__attribute((__dllimport__)) unsigned short *_wtempnam(const unsigned short * _Directory, const unsigned short * _FilePrefix) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _vscwprintf(const unsigned short * _Format, va_list _ArgList); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _snwscanf(const unsigned short * _Src, size_t _MaxCount, const unsigned short * _Format, ...); 
__attribute((__dllimport__)) FILE *_wfdopen(int _FileHandle, const unsigned short * _Mode) __attribute((__cdecl__)); 
__attribute((__dllimport__)) FILE *_wfopen(const unsigned short * _Filename, const unsigned short * _Mode) __attribute((__cdecl__)); 
__attribute((__dllimport__)) FILE *_wfreopen(const unsigned short * _Filename, const unsigned short * _Mode, FILE * _OldFile) __attribute((__cdecl__)); 

#ifndef _CRT_WPERROR_DEFINED
#define _CRT_WPERROR_DEFINED
__attribute((__dllimport__)) __attribute((__cdecl__)) void _wperror(const unsigned short * _ErrMsg); 
#endif /* _CRT_WPERROR_DEFINED */
__attribute((__dllimport__)) FILE *_wpopen(const unsigned short * _Command, const unsigned short * _Mode) __attribute((__cdecl__)); 




__attribute((__dllimport__)) __attribute((__cdecl__)) int _wremove(const unsigned short * _Filename); 
__attribute((__dllimport__)) unsigned short *_wtmpnam(unsigned short * _Buffer) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) wint_t _fgetwc_nolock(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) wint_t _fputwc_nolock(unsigned short _Ch, FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) wint_t _ungetwc_nolock(wint_t _Ch, FILE * _File); 
# 870
#endif /* _WSTDIO_DEFINED */


#endif /* _STDIO_DEFINED */
# 884
__attribute((__dllimport__)) __attribute((__cdecl__)) void _lock_file(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) void _unlock_file(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fclose_nolock(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fflush_nolock(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _fread_nolock(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fseek_nolock(FILE * _File, long _Offset, int _Origin); 
__attribute((__dllimport__)) __attribute((__cdecl__)) long _ftell_nolock(FILE * _File); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) int _fseeki64_nolock(FILE * _File, long long _Offset, int _Origin); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _ftelli64_nolock(FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _fwrite_nolock(const void * _DstBuf, size_t _Size, size_t _Count, FILE * _File); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _ungetc_nolock(int _Ch, FILE * _File); 
# 900
char *tempnam(const char * _Directory, const char * _FilePrefix) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int fcloseall(void); 
FILE *fdopen(int _FileHandle, const char * _Format) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int fgetchar(void); 
__attribute((__cdecl__)) int fileno(FILE * _File); 
__attribute((__cdecl__)) int flushall(void); 
__attribute((__cdecl__)) int fputchar(int _Ch); 
__attribute((__cdecl__)) int getw(FILE * _File); 
__attribute((__cdecl__)) int putw(int _Ch, FILE * _File); 
__attribute((__cdecl__)) int rmtmp(void); 


#ifndef __MINGW_MBWC_CONVERT_DEFINED
#define __MINGW_MBWC_CONVERT_DEFINED
# 926
__attribute((__cdecl__)) int __mingw_str_wide_utf8(const unsigned short *const wptr, char ** mbptr, size_t * buflen); 
# 940
__attribute((__cdecl__)) int __mingw_str_utf8_wide(const char *const mbptr, unsigned short ** wptr, size_t * buflen); 
# 949
__attribute((__cdecl__)) void __mingw_str_free(void * ptr); 

#endif /* __MINGW_MBWC_CONVERT_DEFINED */
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 3
#ifndef _INC_STDIO_S
#define _INC_STDIO_S
# 182
#endif /* _INC_STDIO_S */
# 963 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdio.h" 3
#endif /* _INC_STDIO */
# 957
#pragma pack ( pop )
# 41 "C:\\LegacyApp\\Matlab18b\\R2018b\\extern\\include\\mex.h"
typedef struct impl_info_tag *MEX_impl_info; 
# 20 "C:\\LegacyApp\\Matlab18b\\R2018b\\extern\\include\\matrix.h"
#ifndef matrix_h
#define matrix_h
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdlib.h" 3
#ifndef _INC_STDLIB
#define _INC_STDLIB
# 8 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\limits.h" 3
#ifndef _INC_LIMITS
#define _INC_LIMITS
# 114
#endif /* _INC_LIMITS */
# 59 "C:\\LegacyApp\\TDM-GCC-64\\lib\\gcc\\x86_64-w64-mingw32\\4.9.2\\include-fixed\\limits.h" 3
#ifndef _LIMITS_H___
#define _LIMITS_H___
# 161
#endif /* _LIMITS_H___ */
# 37 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdlib.h" 3
#ifndef _ONEXIT_T_DEFINED
#define _ONEXIT_T_DEFINED
# 16
#pragma pack ( push, 8 )
# 40
typedef int ( __attribute((__cdecl__))*_onexit_t)(void) ; 




#endif /* _ONEXIT_T_DEFINED */

#ifndef _DIV_T_DEFINED
#define _DIV_T_DEFINED




typedef 
# 50
struct _div_t { 
int quot; 
int rem; 
} div_t; 




typedef 
# 55
struct _ldiv_t { 
long quot; 
long rem; 
} ldiv_t; 
#endif /* _DIV_T_DEFINED */

#ifndef _CRT_DOUBLE_DEC
#define _CRT_DOUBLE_DEC

#pragma pack ( 4 )


typedef 
# 65
struct { 
unsigned char ld[10]; 
} _LDOUBLE; 
#pragma pack ( )





typedef 
# 72
struct { 
double x; 
} _CRT_DOUBLE; 



typedef 
# 76
struct { 
float f; 
} _CRT_FLOAT; 
# 85
typedef 
# 83
struct { 
long double x; 
} _LONGDOUBLE; 



#pragma pack ( 4 )


typedef 
# 90
struct { 
unsigned char ld12[12]; 
} _LDBL12; 

#endif /* _CRT_DOUBLE_DEC */



#ifndef MB_CUR_MAX
#define MB_CUR_MAX ___mb_cur_max_func()
# 93
#pragma pack ( )
# 105
extern int *__imp___mb_cur_max; 




#endif /* MB_CUR_MAX */
# 131
typedef void ( __attribute((__cdecl__))*_purecall_handler)(void) ; 

__attribute((__dllimport__)) __attribute((__cdecl__)) _purecall_handler _set_purecall_handler(_purecall_handler _Handler); 
__attribute((__dllimport__)) __attribute((__cdecl__)) _purecall_handler _get_purecall_handler(void); 

typedef void ( __attribute((__cdecl__))*_invalid_parameter_handler)(const unsigned short *, const unsigned short *, const unsigned short *, unsigned, uintptr_t) ; 
__attribute((__dllimport__)) __attribute((__cdecl__)) _invalid_parameter_handler _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
__attribute((__dllimport__)) __attribute((__cdecl__)) _invalid_parameter_handler _get_invalid_parameter_handler(void); 

#ifndef _CRT_ERRNO_DEFINED
#define _CRT_ERRNO_DEFINED
__attribute((__dllimport__)) extern int *_errno(void) __attribute((__cdecl__)); 

__attribute((__cdecl__)) errno_t _set_errno(int _Value); 
__attribute((__cdecl__)) errno_t _get_errno(int * _Value); 
#endif /* _CRT_ERRNO_DEFINED */
__attribute((__dllimport__)) unsigned long *__doserrno(void) __attribute((__cdecl__)); 

__attribute((__cdecl__)) errno_t _set_doserrno(unsigned long _Value); 
__attribute((__cdecl__)) errno_t _get_doserrno(unsigned long * _Value); 




extern char __attribute((__dllimport__)) *_sys_errlist[1]; 
extern int __attribute((__dllimport__)) _sys_nerr; 
# 171
extern int *__imp___argc; 
# 179
extern char ***__imp___argv; 
# 187
extern unsigned short ***__imp___wargv; 
# 199
extern char ***__imp__environ; 
# 208
extern unsigned short ***__imp__wenviron; 
# 217
extern char **__imp__pgmptr; 
# 226
extern unsigned short **__imp__wpgmptr; 



__attribute((__cdecl__)) errno_t _get_pgmptr(char ** _Value); 
__attribute((__cdecl__)) errno_t _get_wpgmptr(unsigned short ** _Value); 




extern int *__imp__fmode; 



__attribute((__dllimport__)) __attribute((__cdecl__)) errno_t _set_fmode(int _Mode); 
__attribute((__dllimport__)) __attribute((__cdecl__)) errno_t _get_fmode(int * _PMode); 
# 247
extern unsigned *__imp__osplatform; 
# 256
extern unsigned *__imp__osver; 
# 265
extern unsigned *__imp__winver; 
# 274
extern unsigned *__imp__winmajor; 
# 283
extern unsigned *__imp__winminor; 




__attribute((__cdecl__)) errno_t _get_osplatform(unsigned * _Value); 
__attribute((__cdecl__)) errno_t _get_osver(unsigned * _Value); 
__attribute((__cdecl__)) errno_t _get_winver(unsigned * _Value); 
__attribute((__cdecl__)) errno_t _get_winmajor(unsigned * _Value); 
__attribute((__cdecl__)) errno_t _get_winminor(unsigned * _Value); 
# 304
#ifndef _CRT_TERMINATE_DEFINED
#define _CRT_TERMINATE_DEFINED
__attribute((__cdecl__)) __attribute((__nothrow__)) void exit(int _Code) __attribute((__noreturn__)); 
__attribute((__cdecl__)) __attribute((__nothrow__)) void _exit(int _Code) __attribute((__noreturn__)); 



__attribute((__cdecl__)) extern __inline__ void _Exit(int) __attribute((__noreturn__)); 

__attribute((__noreturn__)) __attribute((__cdecl__)) extern __inline__ void _Exit(int status) 
{ _exit(status); } 
# 320
__attribute((__cdecl__)) __attribute((noreturn)) void abort(void); 


#endif /* _CRT_TERMINATE_DEFINED */

__attribute((__dllimport__)) __attribute((__cdecl__)) unsigned _set_abort_behavior(unsigned _Flags, unsigned _Mask); 

#ifndef _CRT_ABS_DEFINED
#define _CRT_ABS_DEFINED
__attribute((__cdecl__)) int abs(int _X); 
__attribute((__cdecl__)) long labs(long _X); 
#endif /* _CRT_ABS_DEFINED */

__extension__ __attribute((__cdecl__)) __attribute((gnu_inline)) extern __inline__ long long _abs64(long long); 

__attribute((__always_inline__, __gnu_inline__)) __attribute((__cdecl__)) extern __inline__ long long _abs64(long long x) { 
return __builtin_llabs(x); 
} 


__attribute((__cdecl__)) int atexit(void ( __attribute((__cdecl__))*)(void) ); 
#ifndef _CRT_ATOF_DEFINED
#define _CRT_ATOF_DEFINED
__attribute((__cdecl__)) double atof(const char * _String); 
__attribute((__cdecl__)) double _atof_l(const char * _String, _locale_t _Locale); 
#endif /* _CRT_ATOF_DEFINED */
__attribute((__cdecl__)) int atoi(const char * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _atoi_l(const char * _Str, _locale_t _Locale); 
__attribute((__cdecl__)) long atol(const char * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) long _atol_l(const char * _Str, _locale_t _Locale); 
#ifndef _CRT_ALGO_DEFINED
#define _CRT_ALGO_DEFINED
void *bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, int ( __attribute((__cdecl__))* _PtFuncCompare)(const void *, const void *) ) __attribute((__cdecl__)); 
__attribute((__cdecl__)) void qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, int ( __attribute((__cdecl__))* _PtFuncCompare)(const void *, const void *) ); 
#endif /* _CRT_ALGO_DEFINED */
__attribute((__cdecl__)) unsigned short _byteswap_ushort(unsigned short _Short); 
__attribute((__cdecl__)) unsigned long _byteswap_ulong(unsigned long _Long); 
__extension__ __attribute((__cdecl__)) unsigned long long _byteswap_uint64(unsigned long long _Int64); 
__attribute((__cdecl__)) div_t div(int _Numerator, int _Denominator); 
char *getenv(const char * _VarName) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_itoa(int _Value, char * _Dest, int _Radix) __attribute((__cdecl__)); 
__extension__ __attribute((__dllimport__)) char *_i64toa(long long _Val, char * _DstBuf, int _Radix) __attribute((__cdecl__)); 
__extension__ __attribute((__dllimport__)) char *_ui64toa(unsigned long long _Val, char * _DstBuf, int _Radix) __attribute((__cdecl__)); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _atoi64(const char * _String); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _atoi64_l(const char * _String, _locale_t _Locale); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) unsigned long long _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) unsigned long long _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
__attribute((__cdecl__)) ldiv_t ldiv(long _Numerator, long _Denominator); 
__attribute((__dllimport__)) char *_ltoa(long _Value, char * _Dest, int _Radix) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int mblen(const char * _Ch, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _mbstrlen(const char * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _mbstrlen_l(const char * _Str, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _mbstrnlen(const char * _Str, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _mbstrnlen_l(const char * _Str, size_t _MaxCount, _locale_t _Locale); 
__attribute((__cdecl__)) int mbtowc(unsigned short * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _mbtowc_l(unsigned short * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
__attribute((__cdecl__)) size_t mbstowcs(unsigned short * _Dest, const char * _Source, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _mbstowcs_l(unsigned short * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
__attribute((__cdecl__)) int rand(void); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _set_error_mode(int _Mode); 
__attribute((__cdecl__)) void srand(unsigned _Seed); 
# 404
__attribute((__cdecl__)) __attribute((__nothrow__)) double strtod(const char * _Str, char ** _EndPtr); 
__attribute((__cdecl__)) __attribute((__nothrow__)) float strtof(const char * nptr, char ** endptr); 

__attribute((__cdecl__)) __attribute((__nothrow__)) long double strtold(const char *, char **); 


__attribute((__cdecl__)) __attribute((__nothrow__)) extern double 
__strtod(const char *, char **); 




__attribute((__cdecl__)) float __mingw_strtof(const char *, char **); 
__attribute((__cdecl__)) double __mingw_strtod(const char *, char **); 
__attribute((__cdecl__)) long double __mingw_strtold(const char *, char **); 

__attribute((__dllimport__)) __attribute((__cdecl__)) double _strtod_l(const char * _Str, char ** _EndPtr, _locale_t _Locale); 
__attribute((__cdecl__)) long strtol(const char * _Str, char ** _EndPtr, int _Radix); 
__attribute((__dllimport__)) __attribute((__cdecl__)) long _strtol_l(const char * _Str, char ** _EndPtr, int _Radix, _locale_t _Locale); 
__attribute((__cdecl__)) unsigned long strtoul(const char * _Str, char ** _EndPtr, int _Radix); 
__attribute((__dllimport__)) __attribute((__cdecl__)) unsigned long _strtoul_l(const char * _Str, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#ifndef _CRT_SYSTEM_DEFINED
#define _CRT_SYSTEM_DEFINED
__attribute((__cdecl__)) int system(const char * _Command); 
#endif /* _CRT_SYSTEM_DEFINED */
__attribute((__dllimport__)) char *_ultoa(unsigned long _Value, char * _Dest, int _Radix) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int wctomb(char * _MbCh, unsigned short _WCh); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wctomb_l(char * _MbCh, unsigned short _WCh, _locale_t _Locale); 
__attribute((__cdecl__)) size_t wcstombs(char * _Dest, const unsigned short * _Source, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _wcstombs_l(char * _Dest, const unsigned short * _Source, size_t _MaxCount, _locale_t _Locale); 

#ifndef _CRT_ALLOCATION_DEFINED
#define _CRT_ALLOCATION_DEFINED
void *calloc(size_t _NumOfElements, size_t _SizeOfElements) __attribute((__cdecl__)); 
__attribute((__cdecl__)) void free(void * _Memory); 
void *malloc(size_t _Size) __attribute((__cdecl__)); 
void *realloc(void * _Memory, size_t _NewSize) __attribute((__cdecl__)); 
__attribute((__dllimport__)) void *_recalloc(void * _Memory, size_t _Count, size_t _Size) __attribute((__cdecl__)); 
# 448
__attribute((__dllimport__)) __attribute((__cdecl__)) void _aligned_free(void * _Memory); 
__attribute((__dllimport__)) void *_aligned_malloc(size_t _Size, size_t _Alignment) __attribute((__cdecl__)); 



__attribute((__dllimport__)) void *_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset) __attribute((__cdecl__)); 
__attribute((__dllimport__)) void *_aligned_realloc(void * _Memory, size_t _Size, size_t _Alignment) __attribute((__cdecl__)); 
__attribute((__dllimport__)) void *_aligned_recalloc(void * _Memory, size_t _Count, size_t _Size, size_t _Alignment) __attribute((__cdecl__)); 
__attribute((__dllimport__)) void *_aligned_offset_realloc(void * _Memory, size_t _Size, size_t _Alignment, size_t _Offset) __attribute((__cdecl__)); 
__attribute((__dllimport__)) void *_aligned_offset_recalloc(void * _Memory, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset) __attribute((__cdecl__)); 
#endif /* _CRT_ALLOCATION_DEFINED */

#ifndef _WSTDLIB_DEFINED
#define _WSTDLIB_DEFINED

__attribute((__dllimport__)) unsigned short *_itow(int _Value, unsigned short * _Dest, int _Radix) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *_ltow(long _Value, unsigned short * _Dest, int _Radix) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *_ultow(unsigned long _Value, unsigned short * _Dest, int _Radix) __attribute((__cdecl__)); 

__attribute((__cdecl__)) double __mingw_wcstod(const unsigned short * _Str, unsigned short ** _EndPtr); 
__attribute((__cdecl__)) float __mingw_wcstof(const unsigned short * nptr, unsigned short ** endptr); 
__attribute((__cdecl__)) long double __mingw_wcstold(const unsigned short *, unsigned short **); 
# 482
__attribute((__cdecl__)) double wcstod(const unsigned short * _Str, unsigned short ** _EndPtr); 
__attribute((__cdecl__)) float wcstof(const unsigned short * nptr, unsigned short ** endptr); 


__attribute((__cdecl__)) long double wcstold(const unsigned short *, unsigned short **); 

__attribute((__dllimport__)) __attribute((__cdecl__)) double _wcstod_l(const unsigned short * _Str, unsigned short ** _EndPtr, _locale_t _Locale); 
__attribute((__cdecl__)) long wcstol(const unsigned short * _Str, unsigned short ** _EndPtr, int _Radix); 
__attribute((__dllimport__)) __attribute((__cdecl__)) long _wcstol_l(const unsigned short * _Str, unsigned short ** _EndPtr, int _Radix, _locale_t _Locale); 
__attribute((__cdecl__)) unsigned long wcstoul(const unsigned short * _Str, unsigned short ** _EndPtr, int _Radix); 
__attribute((__dllimport__)) __attribute((__cdecl__)) unsigned long _wcstoul_l(const unsigned short * _Str, unsigned short ** _EndPtr, int _Radix, _locale_t _Locale); 
__attribute((__dllimport__)) unsigned short *_wgetenv(const unsigned short * _VarName) __attribute((__cdecl__)); 
#ifndef _CRT_WSYSTEM_DEFINED
#define _CRT_WSYSTEM_DEFINED
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wsystem(const unsigned short * _Command); 
#endif /* _CRT_WSYSTEM_DEFINED */
__attribute((__dllimport__)) __attribute((__cdecl__)) double _wtof(const unsigned short * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _wtof_l(const unsigned short * _Str, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wtoi(const unsigned short * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wtoi_l(const unsigned short * _Str, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) long _wtol(const unsigned short * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) long _wtol_l(const unsigned short * _Str, _locale_t _Locale); 

__extension__ __attribute((__dllimport__)) unsigned short *_i64tow(long long _Val, unsigned short * _DstBuf, int _Radix) __attribute((__cdecl__)); 
__extension__ __attribute((__dllimport__)) unsigned short *_ui64tow(unsigned long long _Val, unsigned short * _DstBuf, int _Radix) __attribute((__cdecl__)); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _wtoi64(const unsigned short * _Str); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _wtoi64_l(const unsigned short * _Str, _locale_t _Locale); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _wcstoi64(const unsigned short * _Str, unsigned short ** _EndPtr, int _Radix); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) long long _wcstoi64_l(const unsigned short * _Str, unsigned short ** _EndPtr, int _Radix, _locale_t _Locale); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) unsigned long long _wcstoui64(const unsigned short * _Str, unsigned short ** _EndPtr, int _Radix); 
__extension__ __attribute((__dllimport__)) __attribute((__cdecl__)) unsigned long long _wcstoui64_l(const unsigned short * _Str, unsigned short ** _EndPtr, int _Radix, _locale_t _Locale); 
#endif /* _WSTDLIB_DEFINED */



__attribute((__dllimport__)) char *_fullpath(char * _FullPath, const char * _Path, size_t _SizeInBytes) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_ecvt(double _Val, int _NumOfDigits, int * _PtDec, int * _PtSign) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_fcvt(double _Val, int _NumOfDec, int * _PtDec, int * _PtSign) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_gcvt(double _Val, int _NumOfDigits, char * _DstBuf) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _atodbl(_CRT_DOUBLE * _Result, char * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _atoldbl(_LDOUBLE * _Result, char * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _atoflt(_CRT_FLOAT * _Result, char * _Str); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _atodbl_l(_CRT_DOUBLE * _Result, char * _Str, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _atoldbl_l(_LDOUBLE * _Result, char * _Str, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _atoflt_l(_CRT_FLOAT * _Result, char * _Str, _locale_t _Locale); 
# 532
__extension__ __attribute((__cdecl__)) unsigned long long _lrotl(unsigned long long _Val, int _Shift); 
__extension__ __attribute((__cdecl__)) unsigned long long _lrotr(unsigned long long _Val, int _Shift); 
# 541
__attribute((__dllimport__)) __attribute((__cdecl__)) void _makepath(char * _Path, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
__attribute((__cdecl__)) _onexit_t _onexit(_onexit_t _Func); 
# 548
__attribute((__dllimport__)) __attribute((__cdecl__)) int _putenv(const char * _EnvString); 




__extension__ __attribute((__cdecl__)) unsigned long long _rotl64(unsigned long long _Val, int _Shift); 
__extension__ __attribute((__cdecl__)) unsigned long long _rotr64(unsigned long long Value, int Shift); 
# 561
__attribute((__cdecl__)) unsigned _rotr(unsigned _Val, int _Shift); 
__attribute((__cdecl__)) unsigned _rotl(unsigned _Val, int _Shift); 


__extension__ __attribute((__cdecl__)) unsigned long long _rotr64(unsigned long long _Val, int _Shift); 
__attribute((__dllimport__)) __attribute((__cdecl__)) void _searchenv(const char * _Filename, const char * _EnvVar, char * _ResultPath); 
__attribute((__dllimport__)) __attribute((__cdecl__)) void _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
__attribute((__dllimport__)) __attribute((__cdecl__)) void _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 

#ifndef _WSTDLIBP_DEFINED
#define _WSTDLIBP_DEFINED
__attribute((__dllimport__)) unsigned short *_wfullpath(unsigned short * _FullPath, const unsigned short * _Path, size_t _SizeInWords) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) void _wmakepath(unsigned short * _ResultPath, const unsigned short * _Drive, const unsigned short * _Dir, const unsigned short * _Filename, const unsigned short * _Ext); 




__attribute((__dllimport__)) __attribute((__cdecl__)) int _wputenv(const unsigned short * _EnvString); 
__attribute((__dllimport__)) __attribute((__cdecl__)) void _wsearchenv(const unsigned short * _Filename, const unsigned short * _EnvVar, unsigned short * _ResultPath); 
__attribute((__dllimport__)) __attribute((__cdecl__)) void _wsplitpath(const unsigned short * _FullPath, unsigned short * _Drive, unsigned short * _Dir, unsigned short * _Filename, unsigned short * _Ext); 
#endif /* _WSTDLIBP_DEFINED */

__attribute((__dllimport__)) __attribute((__cdecl__)) void _beep(unsigned _Frequency, unsigned _Duration) __attribute((__deprecated__)); 

__attribute((__dllimport__)) __attribute((__cdecl__)) void _seterrormode(int _Mode) __attribute((__deprecated__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) void _sleep(unsigned long _Duration) __attribute((__deprecated__)); 
# 607
char *ecvt(double _Val, int _NumOfDigits, int * _PtDec, int * _PtSign) __attribute((__cdecl__)); 
char *fcvt(double _Val, int _NumOfDec, int * _PtDec, int * _PtSign) __attribute((__cdecl__)); 
char *gcvt(double _Val, int _NumOfDigits, char * _DstBuf) __attribute((__cdecl__)); 
char *itoa(int _Val, char * _DstBuf, int _Radix) __attribute((__cdecl__)); 
char *ltoa(long _Val, char * _DstBuf, int _Radix) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int putenv(const char * _EnvString); 

#ifndef _CRT_SWAB_DEFINED
#define _CRT_SWAB_DEFINED
__attribute((__cdecl__)) void swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#endif /* _CRT_SWAB_DEFINED */

char *ultoa(unsigned long _Val, char * _Dstbuf, int _Radix) __attribute((__cdecl__)); 
__attribute((__cdecl__)) _onexit_t onexit(_onexit_t _Func); 
# 626
typedef struct { __extension__ long long quot, rem; } lldiv_t; 

__extension__ __attribute((__cdecl__)) lldiv_t lldiv(long long, long long); 

__extension__ __attribute((__cdecl__)) extern __inline__ long long llabs(long long); 

__extension__ __attribute((__cdecl__)) extern __inline__ long long llabs(long long _j) { return (_j >= (0)) ? _j : (-_j); } 


__extension__ __attribute((__cdecl__)) long long strtoll(const char *, char **, int); 
__extension__ __attribute((__cdecl__)) unsigned long long strtoull(const char *, char **, int); 


__extension__ __attribute((__cdecl__)) extern __inline__ long long atoll(const char *); 


__extension__ __attribute((__cdecl__)) extern __inline__ long long wtoll(const unsigned short *); 
__extension__ extern __inline__ char *lltoa(long long, char *, int) __attribute((__cdecl__)); 
__extension__ extern __inline__ char *ulltoa(unsigned long long, char *, int) __attribute((__cdecl__)); 
__extension__ extern __inline__ unsigned short *lltow(long long, unsigned short *, int) __attribute((__cdecl__)); 
__extension__ extern __inline__ unsigned short *ulltow(unsigned long long, unsigned short *, int) __attribute((__cdecl__)); 



__extension__ __attribute((__cdecl__)) extern __inline__ long long atoll(const char *_c) { return _atoi64(_c); } 
__extension__ __attribute((__cdecl__)) extern __inline__ char *lltoa(long long _n, char *_c, int _i) { return _i64toa(_n, _c, _i); } 
__extension__ __attribute((__cdecl__)) extern __inline__ char *ulltoa(unsigned long long _n, char *_c, int _i) { return _ui64toa(_n, _c, _i); } 
__extension__ __attribute((__cdecl__)) extern __inline__ long long wtoll(const unsigned short *_w) { return _wtoi64(_w); } 
__extension__ __attribute((__cdecl__)) extern __inline__ unsigned short *lltow(long long _n, unsigned short *_w, int _i) { return _i64tow(_n, _w, _i); } 
__extension__ __attribute((__cdecl__)) extern __inline__ unsigned short *ulltow(unsigned long long _n, unsigned short *_w, int _i) { return _ui64tow(_n, _w, _i); } 
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\sec_api/stdlib_s.h" 3
#ifndef _INC_STDLIB_S
#define _INC_STDLIB_S
# 68
#endif /* _INC_STDLIB_S */
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\malloc.h" 3
#ifndef _MALLOC_H_
#define _MALLOC_H_
# 43
#ifndef _HEAPINFO_DEFINED
#define _HEAPINFO_DEFINED
# 665 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdlib.h" 3
#pragma pack ( pop )
# 11 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\malloc.h" 3
#pragma pack ( push, 8 )
# 50
typedef 
# 46
struct _heapinfo { 
int *_pentry; 
size_t _size; 
int _useflag; 
} _HEAPINFO; 
#endif /* _HEAPINFO_DEFINED */

extern unsigned _amblksiz; 
# 60
#ifndef _MM_MALLOC_H_INCLUDED
#define _MM_MALLOC_H_INCLUDED
#endif /* _MM_MALLOC_H_INCLUDED */
# 94
#ifdef __DO_ALIGN_DEFINES
#undef __DO_ALIGN_DEFINES
#endif /* __DO_ALIGN_DEFINES */
# 103
void *__mingw_aligned_malloc(size_t _Size, size_t _Alignment); 
void __mingw_aligned_free(void * _Memory); 
void *__mingw_aligned_offset_realloc(void * _Memory, size_t _Size, size_t _Alignment, size_t _Offset); 
void *__mingw_aligned_realloc(void * _Memory, size_t _Size, size_t _Offset); 



__attribute((__dllimport__)) __attribute((__cdecl__)) int _resetstkoflw(void); 
__attribute((__dllimport__)) __attribute((__cdecl__)) unsigned long _set_malloc_crt_max_wait(unsigned long _NewValue); 

__attribute((__dllimport__)) void *_expand(void * _Memory, size_t _NewSize) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _msize(void * _Memory); 
# 121
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _get_sbh_threshold(void); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _set_sbh_threshold(size_t _NewValue); 
__attribute((__dllimport__)) __attribute((__cdecl__)) errno_t _set_amblksiz(size_t _Value); 
__attribute((__dllimport__)) __attribute((__cdecl__)) errno_t _get_amblksiz(size_t * _Value); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _heapadd(void * _Memory, size_t _Size); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _heapchk(void); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _heapmin(void); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _heapset(unsigned _Fill); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _heapwalk(_HEAPINFO * _EntryInfo); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _heapused(size_t * _Used, size_t * _Commit); 
__attribute((__dllimport__)) __attribute((__cdecl__)) intptr_t _get_heap_handle(void); 
# 144
static __inline__ void *_MarkAllocaS(void *_Ptr, unsigned _Marker) { 
if (_Ptr) { 
*((unsigned *)_Ptr) = _Marker; 
_Ptr = (char *)_Ptr + 16; 
}  
return _Ptr; 
} 
# 163
__attribute((__cdecl__)) static __inline__ void _freea(void *_Memory) { 
unsigned _Marker; 
if (_Memory) { 
_Memory = (char *)_Memory - 16; 
_Marker = *((unsigned *)_Memory); 
if (_Marker == (0xdddd)) { 
free(_Memory); 
}  
# 176
}  
} 
# 211
#endif /* _MALLOC_H_ */
# 670 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdlib.h" 3
#endif /* _INC_STDLIB */
# 9 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stddef.h" 3
#ifndef _INC_STDDEF
#define _INC_STDDEF
# 209 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\malloc.h" 3
#pragma pack ( pop )
# 24 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stddef.h" 3
__attribute((__dllimport__)) __attribute((__cdecl__)) extern unsigned long __threadid(void); 

__attribute((__dllimport__)) __attribute((__cdecl__)) extern uintptr_t __threadhandle(void); 





#endif /* _INC_STDDEF */
# 12 "C:\\LegacyApp\\Matlab18b\\R2018b\\extern\\include\\tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
# 28 "C:\\LegacyApp\\TDM-GCC-64\\lib\\gcc\\x86_64-w64-mingw32\\4.9.2\\include\\float.h" 3
#ifndef _FLOAT_H___
#define _FLOAT_H___
# 277
#endif /* _FLOAT_H___ */
# 118 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\float.h" 3
#ifndef _MINGW_FLOAT_H_
#define _MINGW_FLOAT_H_
# 188
#ifndef __MINGW_FPCLASS_DEFINED
#define __MINGW_FPCLASS_DEFINED 1
# 200
#endif /* __MINGW_FPCLASS_DEFINED */
# 244
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) unsigned _controlfp(unsigned unNew, unsigned unMask); 
__attribute((__dllimport__)) __attribute((__cdecl__)) errno_t _controlfp_s(unsigned * _CurrentState, unsigned _NewValue, unsigned _Mask); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) unsigned _control87(unsigned unNew, unsigned unMask); 


__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) unsigned _clearfp(void); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) unsigned _statusfp(void); 
# 264
__attribute((__cdecl__)) __attribute((__nothrow__)) void _fpreset(void); 
__attribute((__cdecl__)) __attribute((__nothrow__)) void fpreset(void); 


__attribute((__dllimport__)) int *__fpecode(void) __attribute((__cdecl__)) __attribute((__nothrow__)); 
# 276
#ifndef _SIGN_DEFINED
#define _SIGN_DEFINED
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _chgsign(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _copysign(double _Number, double _Sign); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _logb(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _nextafter(double, double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _scalb(double, long); 

__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) int _finite(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) int _fpclass(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) int _isnan(double); 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define _copysignl __builtin_mw_copysignl
#else
# 288
#define _copysignl copysignl
#endif
# 289
__attribute((__cdecl__)) extern long double _chgsignl(long double); 
#endif /* _SIGN_DEFINED */
# 300
#endif /* _MINGW_FLOAT_H_ */
# 71 "C:\\LegacyApp\\Matlab18b\\R2018b\\extern\\include\\tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
# 79
typedef unsigned long long ulonglong_T; 
# 202
typedef signed char int8_T; 
# 217
typedef unsigned char uint8_T; 
# 233
typedef short int16_T; 
# 249
typedef unsigned short uint16_T; 
# 265
typedef int int32_T; 
# 281
typedef unsigned uint32_T; 
# 342
typedef float real32_T; 
# 356
typedef double real64_T; 
# 400
__extension__ typedef long long int64_T; 
# 440
__extension__ typedef unsigned long long uint64_T; 
# 496
typedef real64_T real_T; 
# 505
typedef real_T time_T; 
# 517
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
# 553
typedef 
# 551
struct { 
real32_T re, im; 
} creal32_T; 
# 562
typedef 
# 560
struct { 
real64_T re, im; 
} creal64_T; 
# 571
typedef 
# 569
struct { 
real_T re, im; 
} creal_T; 
# 582
typedef 
# 580
struct { 
int8_T re, im; 
} cint8_T; 
# 591
typedef 
# 589
struct { 
uint8_T re, im; 
} cuint8_T; 
# 600
typedef 
# 598
struct { 
int16_T re, im; 
} cint16_T; 
# 609
typedef 
# 607
struct { 
uint16_T re, im; 
} cuint16_T; 
# 618
typedef 
# 616
struct { 
int32_T re, im; 
} cint32_T; 
# 627
typedef 
# 625
struct { 
uint32_T re, im; 
} cuint32_T; 
# 636
typedef 
# 634
struct { 
int64_T re, im; 
} cint64_T; 
# 645
typedef 
# 643
struct { 
uint64_T re, im; 
} cuint64_T; 
# 754
#ifndef _bool_T
#define _bool_T

typedef boolean_T bool; 

#ifndef false
#define false (0)
#endif /* false */
#ifndef true
#define true (1)
#endif /* true */

#endif /* _bool_T */
# 794
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 


typedef int SLIndex; 
typedef int SLSize; 
# 826
typedef unsigned short CHAR16_T; 


#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
# 64 "C:\\LegacyApp\\Matlab18b\\R2018b\\extern\\include\\matrix.h"
#ifndef __RELEASE_VERSION_DETECTOR__
#define __RELEASE_VERSION_DETECTOR__
# 169
#endif /* __RELEASE_VERSION_DETECTOR__ */
#ifndef MXHBB__MATRIX__VERSION_DEFS__
#define MXHBB__MATRIX__VERSION_DEFS__
# 198
#ifndef mxSetProperty
#define mxSetProperty mxSetProperty_730
#endif /* mxSetProperty */

#ifndef mxGetProperty
#define mxGetProperty mxGetProperty_730
#endif /* mxGetProperty */

#ifndef mxSetField
#define mxSetField mxSetField_730
#endif /* mxSetField */

#ifndef mxSetFieldByNumber
#define mxSetFieldByNumber mxSetFieldByNumber_730
#endif /* mxSetFieldByNumber */

#ifndef mxGetFieldByNumber
#define mxGetFieldByNumber mxGetFieldByNumber_730
#endif /* mxGetFieldByNumber */

#ifndef mxGetField
#define mxGetField mxGetField_730
#endif /* mxGetField */

#ifndef mxCreateStructMatrix
#define mxCreateStructMatrix mxCreateStructMatrix_730
#endif /* mxCreateStructMatrix */

#ifndef mxCreateCellMatrix
#define mxCreateCellMatrix mxCreateCellMatrix_730
#endif /* mxCreateCellMatrix */

#ifndef mxCreateCharMatrixFromStrings
#define mxCreateCharMatrixFromStrings mxCreateCharMatrixFromStrings_730
#endif /* mxCreateCharMatrixFromStrings */

#ifndef mxGetString
#define mxGetString mxGetString_730
#endif /* mxGetString */

#ifndef mxGetNumberOfDimensions
#define mxGetNumberOfDimensions mxGetNumberOfDimensions_730
#endif /* mxGetNumberOfDimensions */

#ifndef mxGetDimensions
#define mxGetDimensions mxGetDimensions_730
#endif /* mxGetDimensions */

#ifndef mxSetDimensions
#define mxSetDimensions mxSetDimensions_730
#endif /* mxSetDimensions */

#ifndef mxSetIr
#define mxSetIr mxSetIr_730
#endif /* mxSetIr */

#ifndef mxGetIr
#define mxGetIr mxGetIr_730
#endif /* mxGetIr */

#ifndef mxSetJc
#define mxSetJc mxSetJc_730
#endif /* mxSetJc */

#ifndef mxGetJc
#define mxGetJc mxGetJc_730
#endif /* mxGetJc */

#ifndef mxCreateStructArray
#define mxCreateStructArray mxCreateStructArray_730
#endif /* mxCreateStructArray */

#ifndef mxCreateCharArray
#define mxCreateCharArray mxCreateCharArray_730
#endif /* mxCreateCharArray */

#ifndef mxCreateNumericArray
#define mxCreateNumericArray mxCreateNumericArray_730
#endif /* mxCreateNumericArray */

#ifndef mxCreateCellArray
#define mxCreateCellArray mxCreateCellArray_730
#endif /* mxCreateCellArray */

#ifndef mxCreateLogicalArray
#define mxCreateLogicalArray mxCreateLogicalArray_730
#endif /* mxCreateLogicalArray */

#ifndef mxGetCell
#define mxGetCell mxGetCell_730
#endif /* mxGetCell */

#ifndef mxSetCell
#define mxSetCell mxSetCell_730
#endif /* mxSetCell */

#ifndef mxSetNzmax
#define mxSetNzmax mxSetNzmax_730
#endif /* mxSetNzmax */

#ifndef mxSetN
#define mxSetN mxSetN_730
#endif /* mxSetN */

#ifndef mxSetM
#define mxSetM mxSetM_730
#endif /* mxSetM */

#ifndef mxGetNzmax
#define mxGetNzmax mxGetNzmax_730
#endif /* mxGetNzmax */

#ifndef mxCreateDoubleMatrix
#define mxCreateDoubleMatrix mxCreateDoubleMatrix_730
#endif /* mxCreateDoubleMatrix */

#ifndef mxCreateNumericMatrix
#define mxCreateNumericMatrix mxCreateNumericMatrix_730
#endif /* mxCreateNumericMatrix */

#ifndef mxCreateLogicalMatrix
#define mxCreateLogicalMatrix mxCreateLogicalMatrix_730
#endif /* mxCreateLogicalMatrix */

#ifndef mxCreateSparse
#define mxCreateSparse mxCreateSparse_730
#endif /* mxCreateSparse */

#ifndef mxCreateSparseLogicalMatrix
#define mxCreateSparseLogicalMatrix mxCreateSparseLogicalMatrix_730
#endif /* mxCreateSparseLogicalMatrix */

#ifndef mxGetNChars
#define mxGetNChars mxGetNChars_730
#endif /* mxGetNChars */

#ifndef mxCreateStringFromNChars
#define mxCreateStringFromNChars mxCreateStringFromNChars_730
#endif /* mxCreateStringFromNChars */

#ifndef mxCalcSingleSubscript
#define mxCalcSingleSubscript mxCalcSingleSubscript_730
#endif /* mxCalcSingleSubscript */

#ifndef mxGetDimensions_fcn
#define mxGetDimensions_fcn mxGetDimensions_730
#endif /* mxGetDimensions_fcn */
# 677
#endif /* MXHBB__MATRIX__VERSION_DEFS__ */
#ifndef MATHWORKS_MATRIX_DETAIL_PUBLISHED_FWD_DECLS_HPP
#define MATHWORKS_MATRIX_DETAIL_PUBLISHED_FWD_DECLS_HPP
# 687
typedef struct mxArray_tag mxArray; 




typedef void (*mxFunctionPtr)(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]); 
# 702
typedef bool mxLogical; 




typedef CHAR16_T mxChar; 
# 737
typedef 
# 712
enum { 
mxUNKNOWN_CLASS, 
mxCELL_CLASS, 
mxSTRUCT_CLASS, 
mxLOGICAL_CLASS, 
mxCHAR_CLASS, 
mxVOID_CLASS, 
mxDOUBLE_CLASS, 
mxSINGLE_CLASS, 
mxINT8_CLASS, 
mxUINT8_CLASS, 
mxINT16_CLASS, 
mxUINT16_CLASS, 
mxINT32_CLASS, 
mxUINT32_CLASS, 
mxINT64_CLASS, 
mxUINT64_CLASS, 
mxFUNCTION_CLASS, 
mxOPAQUE_CLASS, 
mxOBJECT_CLASS, 

mxINDEX_CLASS = 0xf



} mxClassID; 




typedef enum { mxREAL, mxCOMPLEX} mxComplexity; 




typedef double mxDouble; 
typedef float mxSingle; 
typedef int8_T mxInt8; 
typedef uint8_T mxUint8; 
typedef int16_T mxInt16; 
typedef uint16_T mxUint16; 
typedef int32_T mxInt32; 
typedef uint32_T mxUint32; 
typedef int64_T mxInt64; 
typedef uint64_T mxUint64; 

#endif /* MATHWORKS_MATRIX_DETAIL_PUBLISHED_FWD_DECLS_HPP */
# 805
extern void *mxMalloc(size_t n); 
# 811
extern void *mxCalloc(size_t n, size_t size); 
# 818
extern void mxFree(void * ptr); 




extern void *mxRealloc(void * ptr, size_t size); 




extern mwSize mxGetNumberOfDimensions_730(const mxArray * pa); 




extern const mwSize *mxGetDimensions_730(const mxArray * pa); 




extern size_t mxGetM(const mxArray * pa); 




extern mwIndex *mxGetIr_730(const mxArray * pa); 




extern mwIndex *mxGetJc_730(const mxArray * pa); 




extern mwSize mxGetNzmax_730(const mxArray * pa); 




extern void mxSetNzmax_730(mxArray * pa, mwSize nzmax); 




extern const char *mxGetFieldNameByNumber(const mxArray * pa, int n); 
# 871
extern mxArray *mxGetFieldByNumber_730(const mxArray * pa, mwIndex i, int fieldnum); 




extern mxArray *mxGetCell_730(const mxArray * pa, mwIndex i); 




extern mxClassID mxGetClassID(const mxArray * pa); 




extern void *mxGetData(const mxArray * pa); 
# 892
extern void mxSetData(mxArray * pa, void * newdata); 
# 900
extern bool mxIsNumeric(const mxArray * pa); 




extern bool mxIsCell(const mxArray * pa); 




extern bool mxIsLogical(const mxArray * pa); 




extern bool mxIsScalar(const mxArray * pa); 




extern bool mxIsChar(const mxArray * pa); 




extern bool mxIsStruct(const mxArray * pa); 




extern bool mxIsOpaque(const mxArray * pa); 




extern bool mxIsFunctionHandle(const mxArray * pa); 
# 942
extern bool mxIsObject(const mxArray * pa); 
# 948
extern void *mxGetImagData(const mxArray * pa); 
# 955
extern void mxSetImagData(mxArray * pa, void * newdata); 
# 963
extern bool mxIsComplex(const mxArray * pa); 




extern bool mxIsSparse(const mxArray * pa); 
# 974
extern bool mxIsDouble(const mxArray * pa); 
# 980
extern bool mxIsSingle(const mxArray * pa); 
# 986
extern bool mxIsInt8(const mxArray * pa); 
# 992
extern bool mxIsUint8(const mxArray * pa); 
# 998
extern bool mxIsInt16(const mxArray * pa); 
# 1004
extern bool mxIsUint16(const mxArray * pa); 
# 1010
extern bool mxIsInt32(const mxArray * pa); 
# 1016
extern bool mxIsUint32(const mxArray * pa); 
# 1022
extern bool mxIsInt64(const mxArray * pa); 
# 1028
extern bool mxIsUint64(const mxArray * pa); 




extern size_t mxGetNumberOfElements(const mxArray * pa); 
# 1041
extern double *mxGetPi(const mxArray * pa); 
# 1047
extern void mxSetPi(mxArray * pa, double * pi); 
# 1055
extern mxChar *mxGetChars(const mxArray * pa); 
# 1063
extern int mxGetUserBits(const mxArray * pa); 
# 1071
extern void mxSetUserBits(mxArray * pa, int value); 
# 1077
extern double mxGetScalar(const mxArray * pa); 
# 1090
extern bool mxIsFromGlobalWS(const mxArray * pa); 




extern void mxSetFromGlobalWS(mxArray * pa, bool global); 




extern void mxSetM_730(mxArray * pa, mwSize m); 




extern size_t mxGetN(const mxArray * pa); 




extern bool mxIsEmpty(const mxArray * pa); 




extern int mxGetFieldNumber(const mxArray * pa, const char * name); 




extern void mxSetIr_730(mxArray * pa, mwIndex * newir); 




extern void mxSetJc_730(mxArray * pa, mwIndex * newjc); 

extern void *mxGetData(const mxArray * pa); 
extern void mxSetData(mxArray * pa, void * newdata); 
extern double *mxGetPr(const mxArray * pa); 
extern void mxSetPr(mxArray * pa, double * newdata); 
extern size_t mxGetElementSize(const mxArray * pa); 
# 1137
extern mwIndex mxCalcSingleSubscript_730(const mxArray * pa, mwSize nsubs, const mwIndex * subs); 
# 1145
extern int mxGetNumberOfFields(const mxArray * pa); 
# 1151
extern void mxSetCell_730(mxArray * pa, mwIndex i, mxArray * value); 
# 1157
extern void mxSetFieldByNumber_730(mxArray * pa, mwIndex i, int fieldnum, mxArray * value); 
# 1165
extern mxArray *mxGetField_730(const mxArray * pa, mwIndex i, const char * fieldname); 
# 1172
extern void mxSetField_730(mxArray * pa, mwIndex i, const char * fieldname, mxArray * value); 
# 1182
extern mxArray *mxGetProperty_730(const mxArray * pa, const mwIndex i, const char * propname); 
# 1190
extern void mxSetProperty_730(mxArray * pa, mwIndex i, const char * propname, const mxArray * value); 




extern const char *mxGetClassName(const mxArray * pa); 




extern bool mxIsClass(const mxArray * pa, const char * name); 
# 1207
extern mxArray *mxCreateNumericMatrix_730(mwSize m, mwSize n, mxClassID classid, mxComplexity flag); 
# 1214
extern mxArray *mxCreateUninitNumericMatrix(size_t m, size_t n, mxClassID classid, mxComplexity flag); 
# 1221
extern mxArray *mxCreateUninitNumericArray(size_t ndim, size_t * dims, mxClassID classid, mxComplexity flag); 




extern void mxSetN_730(mxArray * pa, mwSize n); 
# 1233
extern int mxSetDimensions_730(mxArray * pa, const mwSize * pdims, mwSize ndims); 




extern void mxDestroyArray(mxArray * pa); 
# 1247
extern mxArray *mxCreateNumericArray_730(mwSize ndim, const mwSize * dims, mxClassID classid, mxComplexity flag); 
# 1253
extern mxArray *mxCreateCharArray_730(mwSize ndim, const mwSize * dims); 
# 1260
extern mxArray *mxCreateDoubleMatrix_730(mwSize m, mwSize n, mxComplexity flag); 




extern mxLogical *mxGetLogicals(const mxArray * pa); 




extern mxArray *mxCreateLogicalArray_730(mwSize ndim, const mwSize * dims); 
# 1276
extern mxArray *mxCreateLogicalMatrix_730(mwSize m, mwSize n); 




extern mxArray *mxCreateLogicalScalar(bool value); 




extern bool mxIsLogicalScalar(const mxArray * pa); 




extern bool mxIsLogicalScalarTrue(const mxArray * pa); 
# 1297
extern mxArray *mxCreateDoubleScalar(double value); 
# 1318
extern mxArray *mxCreateSparse_730(mwSize m, mwSize n, mwSize nzmax, mxComplexity flag); 
# 1324
extern mxArray *mxCreateSparseLogicalMatrix_730(mwSize m, mwSize n, mwSize nzmax); 
# 1332
extern void mxGetNChars_730(const mxArray * pa, char * buf, mwSize nChars); 
# 1343
extern int mxGetString_730(const mxArray * pa, char * buf, mwSize buflen); 
# 1350
extern char *mxArrayToString(const mxArray * pa); 
# 1359
extern char *mxArrayToUTF8String(const mxArray * pa); 
# 1366
extern mxArray *mxCreateStringFromNChars_730(const char * str, mwSize n); 
# 1372
extern mxArray *mxCreateString(const char * str); 




extern mxArray *mxCreateCharMatrixFromStrings_730(mwSize m, const char ** str); 
# 1383
extern mxArray *mxCreateCellMatrix_730(mwSize m, mwSize n); 
# 1389
extern mxArray *mxCreateCellArray_730(mwSize ndim, const mwSize * dims); 
# 1396
extern mxArray *mxCreateStructMatrix_730(mwSize m, mwSize n, int nfields, const char ** fieldnames); 
# 1403
extern mxArray *mxCreateStructArray_730(mwSize ndim, const mwSize * dims, int nfields, const char ** fieldnames); 




extern mxArray *mxDuplicateArray(const mxArray * in); 
# 1415
extern int mxSetClassName(mxArray * pa, const char * classname); 
# 1421
extern int mxAddField(mxArray * pa, const char * fieldname); 
# 1427
extern void mxRemoveField(mxArray * pa, int field); 




extern double mxGetEps(void); 




extern double mxGetInf(void); 




extern double mxGetNaN(void); 




extern bool mxIsFinite(double x); 
# 1453
extern bool mxIsInf(double x); 




extern bool mxIsNaN(double x); 
# 1465
extern mxArray *mxCreateSharedDataCopy(const mxArray * pa); 
extern mxArray *mxCreateUninitDoubleMatrix(int cmplx_flag, size_t m, size_t n); 
extern mxArray *mxFastZeros(int cmplx_flag, int m, int n); 
extern mxArray *mxUnreference(mxArray * pa); 
extern int mxUnshareArray(mxArray * pa, int level); 
extern mxArray *mxGetPropertyShared(const mxArray * pa, size_t i, const char * propname); 
extern void mxSetPropertyShared(mxArray * pa, size_t i, const char * propname, const mxArray * value); 
# 1483
#ifndef mxassert_h
#define mxassert_h
# 1530
#endif /* mxassert_h */

#endif /* matrix_h */



#ifndef __MX_API_VER_HPP__
#define __MX_API_VER_HPP__
# 1575
#endif /* __MX_API_VER_HPP__ */
# 49 "C:\\LegacyApp\\Matlab18b\\R2018b\\extern\\include\\mex.h"
typedef void (*mex_exit_fn)(void); 
# 58
typedef 
# 54
struct mexGlobalTableEntry_Tag { 

const char *name; 
mxArray **variable; 
} mexGlobalTableEntry, *mexGlobalTable; 
# 73
typedef 
# 67
struct mexFunctionTableEntry_tag { 
const char *name; 
mxFunctionPtr f; 
int nargin; 
int nargout; 
struct _mexLocalFunctionTable *local_function_table; 
} mexFunctionTableEntry, *mexFunctionTable; 




typedef 
# 75
struct _mexLocalFunctionTable { 
size_t length; 
mexFunctionTable entries; 
} _mexLocalFunctionTable, *mexLocalFunctionTable; 




typedef 
# 80
struct { 
void (*initialize)(void); 
void (*terminate)(void); 
} _mexInitTermTableEntry, *mexInitTermTableEntry; 



typedef void (*fn_clean_up_after_error)(void); 
typedef const char *(*fn_simple_function_to_string)(mxFunctionPtr f); 

typedef mexLocalFunctionTable (*fn_mex_get_local_function_table)(void); 
typedef mexLocalFunctionTable (*fn_mex_set_local_function_table)(mexLocalFunctionTable); 
# 150
extern void mexErrMsgTxt(const char * error_msg); 
# 159
extern void mexErrMsgIdAndTxt(const char * identifier, const char * err_msg, ...); 
# 170
extern void mexWarnMsgTxt(const char * warn_msg); 
# 181
extern void mexWarnMsgIdAndTxt(const char * identifier, const char * warn_msg, ...); 
# 191
extern int mexPrintf(const char * fmt, ...); 
# 206
extern void mexMakeArrayPersistent(mxArray * pa); 
# 216
extern void mexMakeMemoryPersistent(void * ptr); 
# 222
extern int mexCallMATLABWithObject(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
# 234
extern mxArray *mexCallMATLABWithTrapWithObject(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
# 247
extern void mexPrintAssertion(const char * test, const char * fname, int linenum, const char * message); 
# 257
extern bool mexIsGlobal(const mxArray * pA); 
# 264
extern int mexPutVariable(const char * workspace, const char * name, const mxArray * parray); 
# 275
extern const mxArray *mexGetVariablePtr(const char * workspace, const char * name); 
# 285
extern mxArray *mexGetVariableWithObject(const char * workspace, const char * name); 
# 294
extern void mexLock(void); 
# 300
extern void mexUnlock(void); 
# 306
extern bool mexIsLocked(void); 
# 312
extern const char *mexFunctionName(void); 
# 319
extern int mexEvalString(const char * str); 
# 328
extern mxArray *mexEvalStringWithTrap(const char * str); 
# 336
extern int mexAtExit(mex_exit_fn exit_fcn); 
# 356
extern void mexFunction(int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[]); 
# 363
#endif /* mex_h */
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\string.h" 3
#ifndef _INC_STRING
#define _INC_STRING
# 15
#ifndef _NLSCMP_DEFINED
#define _NLSCMP_DEFINED

#endif /* _NLSCMP_DEFINED */
# 34
#ifndef _CRT_MEMORY_DEFINED
#define _CRT_MEMORY_DEFINED
__attribute((__dllimport__)) void *_memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount) __attribute((__cdecl__)); 
void *memchr(const void * _Buf, int _Val, size_t _MaxCount) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
__attribute((__cdecl__)) int memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
void *memcpy(void * _Dst, const void * _Src, size_t _Size) __attribute((__cdecl__)); 
void *mempcpy(void * _Dst, const void * _Src, size_t _Size) __attribute((__cdecl__)); 
void *memset(void * _Dst, int _Val, size_t _Size) __attribute((__cdecl__)); 

void *memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 

#endif /* _CRT_MEMORY_DEFINED */
char *_strset(char * _Str, int _Val) __attribute((__cdecl__)); 
char *_strset_l(char * _Str, int _Val, _locale_t _Locale) __attribute((__cdecl__)); 
char *strcpy(char * _Dest, const char * _Source) __attribute((__cdecl__)); 
char *strcat(char * _Dest, const char * _Source) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int strcmp(const char * _Str1, const char * _Str2); 
__attribute((__cdecl__)) size_t strlen(const char * _Str); 
__attribute((__cdecl__)) size_t strnlen(const char * _Str, size_t _MaxCount); 
void *memmove(void * _Dst, const void * _Src, size_t _Size) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_strdup(const char * _Src) __attribute((__cdecl__)); 
char *strchr(const char * _Str, int _Val) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _stricmp(const char * _Str1, const char * _Str2); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _strcmpi(const char * _Str1, const char * _Str2); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _stricmp_l(const char * _Str1, const char * _Str2, _locale_t _Locale); 
__attribute((__cdecl__)) int strcoll(const char * _Str1, const char * _Str2); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _strcoll_l(const char * _Str1, const char * _Str2, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _stricoll(const char * _Str1, const char * _Str2); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _stricoll_l(const char * _Str1, const char * _Str2, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _strncoll(const char * _Str1, const char * _Str2, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _strncoll_l(const char * _Str1, const char * _Str2, size_t _MaxCount, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _strnicoll(const char * _Str1, const char * _Str2, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _strnicoll_l(const char * _Str1, const char * _Str2, size_t _MaxCount, _locale_t _Locale); 
__attribute((__cdecl__)) size_t strcspn(const char * _Str, const char * _Control); 
__attribute((__dllimport__)) char *_strerror(const char * _ErrMsg) __attribute((__cdecl__)); 
char *strerror(int) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_strlwr(char * _String) __attribute((__cdecl__)); 
char *strlwr_l(char * _String, _locale_t _Locale); 
char *strncat(char * _Dest, const char * _Source, size_t _Count) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _strnicmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _strnicmp_l(const char * _Str1, const char * _Str2, size_t _MaxCount, _locale_t _Locale); 
char *strncpy(char * _Dest, const char * _Source, size_t _Count); 
__attribute((__dllimport__)) char *_strnset(char * _Str, int _Val, size_t _MaxCount) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_strnset_l(char * str, int c, size_t count, _locale_t _Locale) __attribute((__cdecl__)); 
char *strpbrk(const char * _Str, const char * _Control) __attribute((__cdecl__)); 
char *strrchr(const char * _Str, int _Ch) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_strrev(char * _Str) __attribute((__cdecl__)); 
__attribute((__cdecl__)) size_t strspn(const char * _Str, const char * _Control); 
char *strstr(const char * _Str, const char * _SubStr) __attribute((__cdecl__)); 
char *strtok(char * _Str, const char * _Delim) __attribute((__cdecl__)); 


char *strtok_r(char * _Str, const char * _Delim, char ** __last); 

__attribute((__dllimport__)) char *_strupr(char * _String) __attribute((__cdecl__)); 
__attribute((__dllimport__)) char *_strupr_l(char * _String, _locale_t _Locale); 
__attribute((__cdecl__)) size_t strxfrm(char * _Dst, const char * _Src, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _strxfrm_l(char * _Dst, const char * _Src, size_t _MaxCount, _locale_t _Locale); 


char *strdup(const char * _Src) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int strcmpi(const char * _Str1, const char * _Str2); 
__attribute((__cdecl__)) int stricmp(const char * _Str1, const char * _Str2); 
char *strlwr(char * _Str) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int strnicmp(const char * _Str1, const char * _Str, size_t _MaxCount); 
__attribute((__cdecl__)) extern __inline__ int strncasecmp(const char *, const char *, size_t); 
__attribute((__cdecl__)) extern __inline__ int strcasecmp(const char *, const char *); 

__attribute((__cdecl__)) extern __inline__ int strncasecmp(const char *__sz1, const char *__sz2, size_t __sizeMaxCompare) { return _strnicmp(__sz1, __sz2, __sizeMaxCompare); } 
__attribute((__cdecl__)) extern __inline__ int strcasecmp(const char *__sz1, const char *__sz2) { return _stricmp(__sz1, __sz2); } 




char *strnset(char * _Str, int _Val, size_t _MaxCount) __attribute((__cdecl__)); 
char *strrev(char * _Str) __attribute((__cdecl__)); 
char *strset(char * _Str, int _Val) __attribute((__cdecl__)); 
char *strupr(char * _Str) __attribute((__cdecl__)); 


#ifndef _WSTRING_DEFINED
#define _WSTRING_DEFINED

__attribute((__dllimport__)) unsigned short *_wcsdup(const unsigned short * _Str) __attribute((__cdecl__)); 
unsigned short *wcscat(unsigned short * _Dest, const unsigned short * _Source) __attribute((__cdecl__)); 
unsigned short *wcschr(const unsigned short * _Str, unsigned short _Ch) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int wcscmp(const unsigned short * _Str1, const unsigned short * _Str2); 
unsigned short *wcscpy(unsigned short * _Dest, const unsigned short * _Source) __attribute((__cdecl__)); 
__attribute((__cdecl__)) size_t wcscspn(const unsigned short * _Str, const unsigned short * _Control); 
__attribute((__cdecl__)) size_t wcslen(const unsigned short * _Str); 
__attribute((__cdecl__)) size_t wcsnlen(const unsigned short * _Src, size_t _MaxCount); 
unsigned short *wcsncat(unsigned short * _Dest, const unsigned short * _Source, size_t _Count); 
__attribute((__cdecl__)) int wcsncmp(const unsigned short * _Str1, const unsigned short * _Str2, size_t _MaxCount); 
unsigned short *wcsncpy(unsigned short * _Dest, const unsigned short * _Source, size_t _Count); 
unsigned short *_wcsncpy_l(unsigned short * _Dest, const unsigned short * _Source, size_t _Count, _locale_t _Locale) __attribute((__cdecl__)); 
unsigned short *wcspbrk(const unsigned short * _Str, const unsigned short * _Control) __attribute((__cdecl__)); 
unsigned short *wcsrchr(const unsigned short * _Str, unsigned short _Ch) __attribute((__cdecl__)); 
__attribute((__cdecl__)) size_t wcsspn(const unsigned short * _Str, const unsigned short * _Control); 
unsigned short *wcsstr(const unsigned short * _Str, const unsigned short * _SubStr) __attribute((__cdecl__)); 
unsigned short *wcstok(unsigned short * _Str, const unsigned short * _Delim) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *_wcserror(int _ErrNum) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *__wcserror(const unsigned short * _Str) __attribute((__cdecl__)); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsicmp(const unsigned short * _Str1, const unsigned short * _Str2); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsicmp_l(const unsigned short * _Str1, const unsigned short * _Str2, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsnicmp(const unsigned short * _Str1, const unsigned short * _Str2, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsnicmp_l(const unsigned short * _Str1, const unsigned short * _Str2, size_t _MaxCount, _locale_t _Locale); 
__attribute((__dllimport__)) unsigned short *_wcsnset(unsigned short * _Str, unsigned short _Val, size_t _MaxCount) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *_wcsrev(unsigned short * _Str) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *_wcsset(unsigned short * _Str, unsigned short _Val) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *_wcslwr(unsigned short * _String) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *_wcslwr_l(unsigned short * _String, _locale_t _Locale); 
__attribute((__dllimport__)) unsigned short *_wcsupr(unsigned short * _String) __attribute((__cdecl__)); 
__attribute((__dllimport__)) unsigned short *_wcsupr_l(unsigned short * _String, _locale_t _Locale); 
__attribute((__cdecl__)) size_t wcsxfrm(unsigned short * _Dst, const unsigned short * _Src, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) size_t _wcsxfrm_l(unsigned short * _Dst, const unsigned short * _Src, size_t _MaxCount, _locale_t _Locale); 
__attribute((__cdecl__)) int wcscoll(const unsigned short * _Str1, const unsigned short * _Str2); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcscoll_l(const unsigned short * _Str1, const unsigned short * _Str2, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsicoll(const unsigned short * _Str1, const unsigned short * _Str2); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsicoll_l(const unsigned short * _Str1, const unsigned short * _Str2, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsncoll(const unsigned short * _Str1, const unsigned short * _Str2, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsncoll_l(const unsigned short * _Str1, const unsigned short * _Str2, size_t _MaxCount, _locale_t _Locale); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsnicoll(const unsigned short * _Str1, const unsigned short * _Str2, size_t _MaxCount); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _wcsnicoll_l(const unsigned short * _Str1, const unsigned short * _Str2, size_t _MaxCount, _locale_t _Locale); 


unsigned short *wcsdup(const unsigned short * _Str) __attribute((__cdecl__)); 

__attribute((__cdecl__)) int wcsicmp(const unsigned short * _Str1, const unsigned short * _Str2); 
__attribute((__cdecl__)) int wcsnicmp(const unsigned short * _Str1, const unsigned short * _Str2, size_t _MaxCount); 
unsigned short *wcsnset(unsigned short * _Str, unsigned short _Val, size_t _MaxCount) __attribute((__cdecl__)); 
unsigned short *wcsrev(unsigned short * _Str) __attribute((__cdecl__)); 
unsigned short *wcsset(unsigned short * _Str, unsigned short _Val) __attribute((__cdecl__)); 
unsigned short *wcslwr(unsigned short * _Str) __attribute((__cdecl__)); 
unsigned short *wcsupr(unsigned short * _Str) __attribute((__cdecl__)); 
__attribute((__cdecl__)) int wcsicoll(const unsigned short * _Str1, const unsigned short * _Str2); 

#endif /* _WSTRING_DEFINED */
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\sec_api/string_s.h" 3
#ifndef _INC_STRING_S
#define _INC_STRING_S
# 70
#endif /* _INC_STRING_S */
# 181 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\string.h" 3
#endif /* _INC_STRING */
# 6 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\math.h" 3
#ifndef _MATH_H_
#define _MATH_H_
# 15
struct _exception; 
# 79
#ifndef __MINGW_SOFTMATH
#define __MINGW_SOFTMATH
# 17
#pragma pack ( push, 8 )
# 90
typedef 
# 84
union __mingw_dbl_type_t { 
double x; 
unsigned long long val; 


__extension__ 
# 87
struct { 
unsigned low, high; 
} lh; 
} __mingw_dbl_type_t; 




typedef 
# 92
union __mingw_flt_type_t { 
float x; 
unsigned val; 
} __mingw_flt_type_t; 
# 106
typedef 
# 97
union __mingw_ldbl_type_t { 

long double x; 
# 105
__extension__ 
# 100
struct { 
unsigned low, high; 
int sign_exponent:16; 
int res1:16; 
int res0:32; 
} lh; 
} __mingw_ldbl_type_t; 

#endif /* __MINGW_SOFTMATH */

#ifndef _HUGE
#define _HUGE (* __MINGW_IMP_SYMBOL(_HUGE))
# 111
extern double *__imp__HUGE; 

#endif /* _HUGE */
# 121
#ifndef _EXCEPTION_DEFINED
#define _EXCEPTION_DEFINED
struct _exception { 
int type; 
const char *name; 
double arg1; 
double arg2; 
double retval; 
}; 

void __mingw_raise_matherr(int typ, const char * name, double a1, double a2, double rslt); 

void __mingw_setusermatherr(int ( __attribute((__cdecl__))*)(struct _exception *) ); 
__attribute((__dllimport__)) void __setusermatherr(int ( __attribute((__cdecl__))*)(struct _exception *) ); 

#endif /* _EXCEPTION_DEFINED */

__attribute((__cdecl__)) double sin(double _X); 
__attribute((__cdecl__)) double cos(double _X); 
__attribute((__cdecl__)) double tan(double _X); 
__attribute((__cdecl__)) double sinh(double _X); 
__attribute((__cdecl__)) double cosh(double _X); 
__attribute((__cdecl__)) double tanh(double _X); 
__attribute((__cdecl__)) double asin(double _X); 
__attribute((__cdecl__)) double acos(double _X); 
__attribute((__cdecl__)) double atan(double _X); 
__attribute((__cdecl__)) double atan2(double _Y, double _X); 
__attribute((__cdecl__)) double exp(double _X); 
__attribute((__cdecl__)) double log(double _X); 
__attribute((__cdecl__)) double log10(double _X); 
__attribute((__cdecl__)) double pow(double _X, double _Y); 
__attribute((__cdecl__)) double sqrt(double _X); 
__attribute((__cdecl__)) double ceil(double _X); 
__attribute((__cdecl__)) double floor(double _X); 


__attribute((__cdecl__)) extern __inline__ float fabsf(float x); 
__attribute((__cdecl__)) extern __inline__ long double fabsl(long double); 
__attribute((__cdecl__)) extern __inline__ double fabs(double _X); 



__attribute((__cdecl__)) extern __inline__ float fabsf(float x) 
{ 

return __builtin_fabsf(x); 
# 172
} 

__attribute((__cdecl__)) extern __inline__ long double fabsl(long double x) 
{ 
long double res = (0.0L); 
__asm__ volatile("fabs;" : "=t" (res) : "0" (x)); 
return res; 
} 

__attribute((__cdecl__)) extern __inline__ double fabs(double x) 
{ 

return __builtin_fabs(x); 
# 190
} 



__attribute((__cdecl__)) double ldexp(double _X, int _Y); 
__attribute((__cdecl__)) double frexp(double _X, int * _Y); 
__attribute((__cdecl__)) double modf(double _X, double * _Y); 
__attribute((__cdecl__)) double fmod(double _X, double _Y); 

__attribute((__cdecl__)) void sincos(double __x, double * p_sin, double * p_cos); 
__attribute((__cdecl__)) void sincosl(long double __x, long double * p_sin, long double * p_cos); 
__attribute((__cdecl__)) void sincosf(float __x, float * p_sin, float * p_cos); 
# 219
#ifndef _COMPLEX_DEFINED
#define _COMPLEX_DEFINED
struct _complex { 
double x; 
double y; 
}; 
#endif /* _COMPLEX_DEFINED */

__attribute((__dllimport__)) __attribute((__cdecl__)) double _cabs(struct _complex _ComplexA); 
__attribute((__cdecl__)) double _hypot(double _X, double _Y); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _j0(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _j1(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _jn(int _X, double _Y); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _y0(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _y1(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double _yn(int _X, double _Y); 
#ifndef _CRT_MATHERR_DEFINED
#define _CRT_MATHERR_DEFINED
__attribute((__dllimport__)) __attribute((__cdecl__)) int _matherr(struct _exception *); 
#endif /* _CRT_MATHERR_DEFINED */
# 262
__attribute((__dllimport__)) __attribute((__cdecl__)) double j0(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double j1(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double jn(int, double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double y0(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double y1(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) double yn(int, double); 

__attribute((__dllimport__)) __attribute((__cdecl__)) double chgsign(double); 
# 278
__attribute((__dllimport__)) __attribute((__cdecl__)) int finite(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int fpclass(double); 
# 323
typedef float float_t; 
typedef double double_t; 
# 344
#define FP_NAN 0x0100
#define FP_NORMAL 0x0400
#define FP_INFINITE (FP_NAN | FP_NORMAL)
# 358
__attribute((__cdecl__)) extern __inline__ int __fpclassifyl(long double); 
__attribute((__cdecl__)) extern __inline__ int __fpclassifyf(float); 
__attribute((__cdecl__)) extern __inline__ int __fpclassify(double); 


__attribute((__cdecl__)) extern __inline__ int __fpclassifyl(long double x) { 
unsigned short sw; 
__asm__ volatile("fxam; fstsw %%ax;" : "=a" (sw) : "t" (x)); 
return sw & ((0x100 | 0x400) | 0x4000); 
} 
__attribute((__cdecl__)) extern __inline__ int __fpclassify(double x) { 

__mingw_dbl_type_t hlp; 
unsigned l, h; 

hlp.x = x; 
h = (hlp.lh).high; 
l = ((hlp.lh).low) | (h & (0xfffff)); 
h &= (0x7ff00000); 
if ((h | l) == (0)) 
return 0x4000;  
if (!h) 
return 0x400 | 0x4000;  
if (h == (0x7ff00000)) 
return l ? 0x100 : (0x100 | 0x400);  
return 0x400; 
# 389
} 
__attribute((__cdecl__)) extern __inline__ int __fpclassifyf(float x) { 

__mingw_flt_type_t hlp; 

hlp.x = x; 
hlp.val &= (0x7fffffff); 
if (hlp.val == (0)) 
return 0x4000;  
if (hlp.val < (0x800000)) 
return 0x400 | 0x4000;  
if (hlp.val >= (0x7f800000)) 
return (hlp.val > (0x7f800000)) ? 0x100 : (0x100 | 0x400);  
return 0x400; 
# 408
} 


#define fpclassify(x) (sizeof (x) == sizeof (float) ? __fpclassifyf (x) : sizeof (x) == sizeof (double) ? __fpclassify (x) : __fpclassifyl (x))
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isfinite(x) __builtin_mw_isfinite(x)
#else

#define isfinite(x) ((fpclassify(x) & FP_NAN) == 0)
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isinf(x) __builtin_mw_isinf(x)
#else
# 419
#define isinf(x) (fpclassify(x) == FP_INFINITE)
#endif




__attribute((__cdecl__)) extern __inline__ int __isnan(double); 
__attribute((__cdecl__)) extern __inline__ int __isnanf(float); 
__attribute((__cdecl__)) extern __inline__ int __isnanl(long double); 


__attribute((__cdecl__)) extern __inline__ int __isnan(double _x) 
{ 

__mingw_dbl_type_t hlp; 
int l, h; 

hlp.x = _x; 
l = (hlp.lh).low; 
h = ((hlp.lh).high) & (0x7fffffff); 
h |= ((unsigned)(l | (-l))) >> 31; 
h = 0x7ff00000 - h; 
return ((int)((unsigned)h)) >> 31; 
# 449
} 

__attribute((__cdecl__)) extern __inline__ int __isnanf(float _x) 
{ 

__mingw_flt_type_t hlp; 
int i; 

hlp.x = _x; 
i = (hlp.val) & (0x7fffffff); 
i = 0x7f800000 - i; 
return (int)(((unsigned)i) >> 31); 
# 468
} 

__attribute((__cdecl__)) extern __inline__ int __isnanl(long double _x) 
{ 
unsigned short sw; 
__asm__ volatile("fxam;fstsw %%ax" : "=a" (sw) : "t" (_x)); 

return (sw & ((((0x100 | 0x400) | (0x100 | 0x400)) | 0x4000) | (0x400 | 0x4000))) == 0x100; 

} 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isnan(x) __builtin_mw_isnan(x)
#else
# 480
#define isnan(x) (sizeof (x) == sizeof (float) ? __isnanf (x) : sizeof (x) == sizeof (double) ? __isnan (x) : __isnanl (x))
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isnormal(x) __builtin_mw_isnormal(x)
#else
#define isnormal(x) (fpclassify(x) == FP_NORMAL)
#endif

__attribute((__cdecl__)) extern __inline__ int __signbit(double); 
__attribute((__cdecl__)) extern __inline__ int __signbitf(float); 
__attribute((__cdecl__)) extern __inline__ int __signbitl(long double); 

__attribute((__cdecl__)) extern __inline__ int __signbit(double x) { 

__mingw_dbl_type_t hlp; 

hlp.x = x; 
return (((hlp.lh).high) & 0x80000000U) != (0); 
# 503
} 

__attribute((__cdecl__)) extern __inline__ int __signbitf(float x) { 

__mingw_flt_type_t hlp; 
hlp.x = x; 
return ((hlp.val) & 0x80000000U) != (0); 
# 515
} 

__attribute((__cdecl__)) extern __inline__ int __signbitl(long double x) { 
unsigned short stw; 
__asm__ volatile("fxam; fstsw %%ax;" : "=a" (stw) : "t" (x)); 
return stw & 0x200; 
} 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define signbit(x) __builtin_mw_signbit(x)
#else
# 524
#define signbit(x) (sizeof (x) == sizeof (float) ? __signbitf (x) : sizeof (x) == sizeof (double) ? __signbit (x) : __signbitl (x))
#endif



__attribute((__cdecl__)) extern float sinf(float _X); 
__attribute((__cdecl__)) extern long double sinl(long double); 

__attribute((__cdecl__)) extern float cosf(float _X); 
__attribute((__cdecl__)) extern long double cosl(long double); 

__attribute((__cdecl__)) extern float tanf(float _X); 
__attribute((__cdecl__)) extern long double tanl(long double); 
__attribute((__cdecl__)) extern float asinf(float _X); 
__attribute((__cdecl__)) extern long double asinl(long double); 

__attribute((__cdecl__)) extern float acosf(float); 
__attribute((__cdecl__)) extern long double acosl(long double); 

__attribute((__cdecl__)) extern float atanf(float); 
__attribute((__cdecl__)) extern long double atanl(long double); 

__attribute((__cdecl__)) extern float atan2f(float, float); 
__attribute((__cdecl__)) extern long double atan2l(long double, long double); 


__attribute((__cdecl__)) extern __inline__ float sinhf(float _X); 

extern __inline__ float sinhf(float _X) { return (float)sinh((double)_X); } 

__attribute((__cdecl__)) extern long double sinhl(long double); 

__attribute((__cdecl__)) extern __inline__ float coshf(float _X); 

extern __inline__ float coshf(float _X) { return (float)cosh((double)_X); } 

__attribute((__cdecl__)) extern long double coshl(long double); 

__attribute((__cdecl__)) extern __inline__ float tanhf(float _X); 

extern __inline__ float tanhf(float _X) { return (float)tanh((double)_X); } 

__attribute((__cdecl__)) extern long double tanhl(long double); 



__attribute((__cdecl__)) extern double acosh(double); 
__attribute((__cdecl__)) extern float acoshf(float); 
__attribute((__cdecl__)) extern long double acoshl(long double); 


__attribute((__cdecl__)) extern double asinh(double); 
__attribute((__cdecl__)) extern float asinhf(float); 
__attribute((__cdecl__)) extern long double asinhl(long double); 


__attribute((__cdecl__)) extern double atanh(double); 
__attribute((__cdecl__)) extern float atanhf(float); 
__attribute((__cdecl__)) extern long double atanhl(long double); 



__attribute((__cdecl__)) extern __inline__ float expf(float _X); 

extern __inline__ float expf(float _X) { return (float)exp((double)_X); } 

__attribute((__cdecl__)) extern long double expl(long double); 


__attribute((__cdecl__)) extern double exp2(double); 
__attribute((__cdecl__)) extern float exp2f(float); 
__attribute((__cdecl__)) extern long double exp2l(long double); 



__attribute((__cdecl__)) extern double expm1(double); 
__attribute((__cdecl__)) extern float expm1f(float); 
__attribute((__cdecl__)) extern long double expm1l(long double); 


extern __inline__ float frexpf(float _X, int * _Y); 

extern __inline__ float frexpf(float _X, int *_Y) { return (float)frexp((double)_X, _Y); } 

__attribute((__cdecl__)) extern long double frexpl(long double, int *); 




__attribute((__cdecl__)) extern int ilogb(double); 
__attribute((__cdecl__)) extern int ilogbf(float); 
__attribute((__cdecl__)) extern int ilogbl(long double); 


__attribute((__cdecl__)) extern __inline__ float ldexpf(float _X, int _Y); 

__attribute((__cdecl__)) extern __inline__ float ldexpf(float x, int expn) { return (float)ldexp((double)x, expn); } 

__attribute((__cdecl__)) extern long double ldexpl(long double, int); 


__attribute((__cdecl__)) extern float logf(float); 
__attribute((__cdecl__)) extern long double logl(long double); 


__attribute((__cdecl__)) extern float log10f(float); 
__attribute((__cdecl__)) extern long double log10l(long double); 


__attribute((__cdecl__)) extern double log1p(double); 
__attribute((__cdecl__)) extern float log1pf(float); 
__attribute((__cdecl__)) extern long double log1pl(long double); 


__attribute((__cdecl__)) extern double log2(double); 
__attribute((__cdecl__)) extern float log2f(float); 
__attribute((__cdecl__)) extern long double log2l(long double); 


__attribute((__cdecl__)) extern __inline__ double logb(double); 
__attribute((__cdecl__)) extern __inline__ float logbf(float); 
__attribute((__cdecl__)) extern __inline__ long double logbl(long double); 
# 651
__attribute((__cdecl__)) extern __inline__ double logb(double x) 
{ 

__mingw_dbl_type_t hlp; 
int lx, hx; 

hlp.x = x; 
lx = (hlp.lh).low; 
hx = ((hlp.lh).high) & (0x7fffffff); 
if ((hx | lx) == 0) 
return -(1.0) / fabs(x);  
if (hx >= 0x7ff00000) 
return x * x;  
if ((hx >>= 20) == 0) 
return -(1022.0);  
return (double)(hx - 1023); 
# 673
} 

__attribute((__cdecl__)) extern __inline__ float logbf(float x) 
{ 

int v; 
__mingw_flt_type_t hlp; 

hlp.x = x; 
v = (hlp.val) & (0x7fffffff); 
if (!v) 
return (float)(-(1.0)) / fabsf(x);  
if (v >= 0x7f800000) 
return x * x;  
if ((v >>= 23) == 0) 
return -(126.0);  
return (float)(v - 127); 
# 696
} 

__attribute((__cdecl__)) extern __inline__ long double logbl(long double x) 
{ 
long double res = (0.0L); 
__asm__ volatile("fxtract\n	fstp	%%st" : "=t" (res) : "0" (x)); 

return res; 
} 




__attribute((__cdecl__)) extern float modff(float, float *); 
__attribute((__cdecl__)) extern long double modfl(long double, long double *); 


__attribute((__cdecl__)) extern double scalbn(double, int); 
__attribute((__cdecl__)) extern float scalbnf(float, int); 
__attribute((__cdecl__)) extern long double scalbnl(long double, int); 

__attribute((__cdecl__)) extern double scalbln(double, long); 
__attribute((__cdecl__)) extern float scalblnf(float, long); 
__attribute((__cdecl__)) extern long double scalblnl(long double, long); 



__attribute((__cdecl__)) extern double cbrt(double); 
__attribute((__cdecl__)) extern float cbrtf(float); 
__attribute((__cdecl__)) extern long double cbrtl(long double); 


__attribute((__cdecl__)) extern double hypot(double, double); 
__attribute((__cdecl__)) extern __inline__ float hypotf(float x, float y); 

__attribute((__cdecl__)) extern __inline__ float hypotf(float x, float y) { return (float)hypot((double)x, (double)y); } 

__attribute((__cdecl__)) extern long double hypotl(long double, long double); 


__attribute((__cdecl__)) extern __inline__ float powf(float _X, float _Y); 

extern __inline__ float powf(float _X, float _Y) { return (float)pow((double)_X, (double)_Y); } 

__attribute((__cdecl__)) extern long double powl(long double, long double); 


__attribute((__cdecl__)) extern float sqrtf(float); 
extern long double sqrtl(long double); 


__attribute((__cdecl__)) extern double erf(double); 
__attribute((__cdecl__)) extern float erff(float); 
__attribute((__cdecl__)) extern long double erfl(long double); 


__attribute((__cdecl__)) extern double erfc(double); 
__attribute((__cdecl__)) extern float erfcf(float); 
__attribute((__cdecl__)) extern long double erfcl(long double); 


__attribute((__cdecl__)) extern double lgamma(double); 
__attribute((__cdecl__)) extern float lgammaf(float); 
__attribute((__cdecl__)) extern long double lgammal(long double); 

extern int signgam; 


__attribute((__cdecl__)) extern double tgamma(double); 
__attribute((__cdecl__)) extern float tgammaf(float); 
__attribute((__cdecl__)) extern long double tgammal(long double); 


__attribute((__cdecl__)) extern float ceilf(float); 
__attribute((__cdecl__)) extern long double ceill(long double); 


__attribute((__cdecl__)) extern float floorf(float); 
__attribute((__cdecl__)) extern long double floorl(long double); 


__attribute((__cdecl__)) extern double nearbyint(double); 
__attribute((__cdecl__)) extern float nearbyintf(float); 
__attribute((__cdecl__)) extern long double nearbyintl(long double); 



__attribute((__cdecl__)) extern __inline__ double rint(double); 
__attribute((__cdecl__)) extern __inline__ float rintf(float); 
__attribute((__cdecl__)) extern __inline__ long double rintl(long double); 


__attribute((__cdecl__)) extern __inline__ long lrint(double); 
__attribute((__cdecl__)) extern __inline__ long lrintf(float); 
__attribute((__cdecl__)) extern __inline__ long lrintl(long double); 

__extension__ __attribute((__cdecl__)) extern __inline__ long long llrint(double); 
__extension__ __attribute((__cdecl__)) extern __inline__ long long llrintf(float); 
__extension__ __attribute((__cdecl__)) extern __inline__ long long llrintl(long double); 
# 801
__attribute((__cdecl__)) extern __inline__ double rint(double x) 
{ 
double retval = (0.0); 
__asm__ volatile("frndint;" : "=t" (retval) : "0" (x)); 
return retval; 
} 

__attribute((__cdecl__)) extern __inline__ float rintf(float x) 
{ 
float retval = ((0.0)); 
__asm__ volatile("frndint;" : "=t" (retval) : "0" (x)); 
return retval; 
} 

__attribute((__cdecl__)) extern __inline__ long double rintl(long double x) 
{ 
long double retval = (0.0L); 
__asm__ volatile("frndint;" : "=t" (retval) : "0" (x)); 
return retval; 
} 

__attribute((__cdecl__)) extern __inline__ long lrint(double x) 
{ 
long retval = (0); 
__asm__ volatile("fistpl %0" : "=m" (retval) : "t" (x) : "st"); 

return retval; 
} 

__attribute((__cdecl__)) extern __inline__ long lrintf(float x) 
{ 
long retval = (0); 
__asm__ volatile("fistpl %0" : "=m" (retval) : "t" (x) : "st"); 

return retval; 
} 

__attribute((__cdecl__)) extern __inline__ long lrintl(long double x) 
{ 
long retval = (0); 
__asm__ volatile("fistpl %0" : "=m" (retval) : "t" (x) : "st"); 

return retval; 
} 

__extension__ __attribute((__cdecl__)) extern __inline__ long long llrint(double x) 
{ 
__extension__ long long retval = 0LL; 
__asm__ volatile("fistpll %0" : "=m" (retval) : "t" (x) : "st"); 

return retval; 
} 

__extension__ __attribute((__cdecl__)) extern __inline__ long long llrintf(float x) 
{ 
__extension__ long long retval = 0LL; 
__asm__ volatile("fistpll %0" : "=m" (retval) : "t" (x) : "st"); 

return retval; 
} 

__extension__ __attribute((__cdecl__)) extern __inline__ long long llrintl(long double x) 
{ 
__extension__ long long retval = 0LL; 
__asm__ volatile("fistpll %0" : "=m" (retval) : "t" (x) : "st"); 

return retval; 
} 
# 874
__attribute((__cdecl__)) extern double round(double); 
__attribute((__cdecl__)) extern float roundf(float); 
__attribute((__cdecl__)) extern long double roundl(long double); 


__attribute((__cdecl__)) extern long lround(double); 
__attribute((__cdecl__)) extern long lroundf(float); 
__attribute((__cdecl__)) extern long lroundl(long double); 
__extension__ __attribute((__cdecl__)) long long llround(double); 
__extension__ __attribute((__cdecl__)) long long llroundf(float); 
__extension__ __attribute((__cdecl__)) long long llroundl(long double); 



__attribute((__cdecl__)) extern double trunc(double); 
__attribute((__cdecl__)) extern float truncf(float); 
__attribute((__cdecl__)) extern long double truncl(long double); 


__attribute((__cdecl__)) extern float fmodf(float, float); 
__attribute((__cdecl__)) extern long double fmodl(long double, long double); 


__attribute((__cdecl__)) extern double remainder(double, double); 
__attribute((__cdecl__)) extern float remainderf(float, float); 
__attribute((__cdecl__)) extern long double remainderl(long double, long double); 


__attribute((__cdecl__)) extern double remquo(double, double, int *); 
__attribute((__cdecl__)) extern float remquof(float, float, int *); 
__attribute((__cdecl__)) extern long double remquol(long double, long double, int *); 


__attribute((__cdecl__)) extern __inline__ double copysign(double, double); 
__attribute((__cdecl__)) extern __inline__ float copysignf(float, float); 
__attribute((__cdecl__)) extern long double copysignl(long double, long double); 



__attribute((__cdecl__)) extern __inline__ double copysign(double x, double y) 
{ 
__mingw_dbl_type_t hx, hy; 
hx.x = x; hy.x = y; 
(hx.lh).high = (((hx.lh).high) & (0x7fffffff)) | (((hy.lh).high) & 0x80000000U); 
return hx.x; 
} 
__attribute((__cdecl__)) extern __inline__ float copysignf(float x, float y) 
{ 
__mingw_flt_type_t hx, hy; 
hx.x = x; hy.x = y; 
hx.val = ((hx.val) & (0x7fffffff)) | ((hy.val) & 0x80000000U); 
return hx.x; 
} 




__attribute((__cdecl__)) extern double nan(const char * tagp); 
__attribute((__cdecl__)) extern float nanf(const char * tagp); 
__attribute((__cdecl__)) extern long double nanl(const char * tagp); 
# 942
__attribute((__cdecl__)) extern double nextafter(double, double); 
__attribute((__cdecl__)) extern float nextafterf(float, float); 
__attribute((__cdecl__)) extern long double nextafterl(long double, long double); 


__attribute((__cdecl__)) extern double nexttoward(double, long double); 
__attribute((__cdecl__)) extern float nexttowardf(float, long double); 
__attribute((__cdecl__)) extern long double nexttowardl(long double, long double); 



__attribute((__cdecl__)) extern double fdim(double x, double y); 
__attribute((__cdecl__)) extern float fdimf(float x, float y); 
__attribute((__cdecl__)) extern long double fdiml(long double x, long double y); 
# 963
__attribute((__cdecl__)) extern double fmax(double, double); 
__attribute((__cdecl__)) extern float fmaxf(float, float); 
__attribute((__cdecl__)) extern long double fmaxl(long double, long double); 


__attribute((__cdecl__)) extern double fmin(double, double); 
__attribute((__cdecl__)) extern float fminf(float, float); 
__attribute((__cdecl__)) extern long double fminl(long double, long double); 



__attribute((__cdecl__)) extern double fma(double, double, double); 
__attribute((__cdecl__)) extern float fmaf(float, float, float); 
__attribute((__cdecl__)) extern long double fmal(long double, long double, long double); 
# 1025
__attribute((__dllimport__)) __attribute((__cdecl__)) float _copysignf(float _Number, float _Sign); 
__attribute((__dllimport__)) __attribute((__cdecl__)) float _chgsignf(float _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) float _logbf(float _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) float _nextafterf(float _X, float _Y); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _finitef(float _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _isnanf(float _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) int _fpclassf(float _X); 



__attribute((__cdecl__)) extern long double _chgsignl(long double); 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define _copysignl __builtin_mw_copysignl
#else
# 1036
#define _copysignl copysignl
#endif
# 1054
#endif /* _MATH_H_ */
# 8 "e:\\w\\t\\trike_speedgoat_algo\\CANOpenSlave.h"
#ifndef _CANOPENSLAVE_DEFINES_H
#define _CANOPENSLAVE_DEFINES_H
# 1 "C:\\LegacyApp\\TDM-GCC-64\\lib\\gcc\\x86_64-w64-mingw32\\4.9.2\\include\\stdint.h" 3
#ifndef _GCC_WRAP_STDINT_H
#define _GCC_WRAP_STDINT_H
# 25 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdint.h" 3
#ifndef _STDINT_H
#define _STDINT_H
# 340 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stddef.h" 3
#ifdef __need_wint_t
#undef __need_wint_t
#endif /* __need_wint_t */
# 1052 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\math.h" 3
#pragma pack ( pop )
# 35 "C:\\LegacyApp\\TDM-GCC-64\\x86_64-w64-mingw32\\include\\stdint.h" 3
typedef signed char int8_t; 
typedef unsigned char uint8_t; 
typedef short int16_t; 
typedef unsigned short uint16_t; 
typedef int int32_t; 
typedef unsigned uint32_t; 
__extension__ typedef long long int64_t; 
__extension__ typedef unsigned long long uint64_t; 


typedef signed char int_least8_t; 
typedef unsigned char uint_least8_t; 
typedef short int_least16_t; 
typedef unsigned short uint_least16_t; 
typedef int int_least32_t; 
typedef unsigned uint_least32_t; 
__extension__ typedef long long int_least64_t; 
__extension__ typedef unsigned long long uint_least64_t; 
# 58
typedef signed char int_fast8_t; 
typedef unsigned char uint_fast8_t; 
typedef short int_fast16_t; 
typedef unsigned short uint_fast16_t; 
typedef int int_fast32_t; 
typedef unsigned uint_fast32_t; 
__extension__ typedef long long int_fast64_t; 
__extension__ typedef unsigned long long uint_fast64_t; 


__extension__ typedef long long intmax_t; 
__extension__ typedef unsigned long long uintmax_t; 
# 160
#ifndef WCHAR_MIN
#define WCHAR_MIN 0U

#endif /* WCHAR_MIN */
# 211
#endif /* _STDINT_H */
# 14 "C:\\LegacyApp\\TDM-GCC-64\\lib\\gcc\\x86_64-w64-mingw32\\4.9.2\\include\\stdint.h" 3
#endif /* _GCC_WRAP_STDINT_H */
# 3 "e:\\w\\t\\trike_speedgoat_algo\\Data_Type.h"
typedef int32_t int32_T; 
typedef int16_t int16_T; 
typedef int8_t int8_T; 
typedef uint32_t uint32_T; 
typedef uint16_t uint16_T; 
typedef uint8_t uint8_T; 
# 20
typedef 
# 14
union { 
struct { 
uint8_T Dummy0; 
uint8_T StatusButtons1_8; 
}; 
uint8_T Message[8]; 
} RPDO_ID182; 
# 28
typedef 
# 22
union { 
struct { 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} RPDO_ID282; 
# 43
typedef 
# 31
union { 
struct { 
uint8_T Byte0; 
uint8_T Byte1; 
uint8_T Byte2; 
uint8_T Byte3; 
uint8_T Byte4; 
uint8_T Byte5; 
uint8_T Byte6; 
uint8_T Byte7; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C1; 
# 55
typedef 
# 46
union { 
struct { 
uint16_T BusVoltage; 
uint16_T dummy0; 
uint8_T MotorTemperature; 
uint8_T APTTemperature; 
uint16_T dummy1; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C2; 
# 67
typedef 
# 57
union { 
struct { 
uint8_T ErrorStatus; 
uint16_T dummy0; 
uint8_T PedalPosition; 
uint8_T Direction; 
uint16_T dummy1; 
uint8_T dummy2; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C3; 
# 79
typedef 
# 71
union { 
struct { 
uint16_T AN_01; 
uint16_T AN_02; 
uint16_T AN_03; 
uint16_T AN_04; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C8; 
# 87
typedef 
# 82
union { 
struct { 
uint32_T Encoder_Actual_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID1FF; 
# 93
typedef 
# 88
union { 
struct { 
uint32_T Encoder_Stored_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID2FF; 
# 107
typedef 
# 98
union { 
struct { 
uint8_T ClearError; 
uint8_T DeviceMode; 
uint8_T PowerEnable; 
uint8_T BrakeCtrl; 
int32_T DesiredCurrent; 
}; 
uint8_T Message[8]; 
} TPDO_ID20x; 
# 117
typedef 
# 111
union { 
struct { 
int32_T ActualCurrent; 
int32_T ActualVelocity; 
}; 
uint8_T Message[8]; 
} RPDO_ID18x; 
# 128
typedef 
# 119
union { 
struct { 
uint8_T ClearError; 
uint8_T DeviceMode; 
uint16_T dummy1; 
uint16_T dummy2; 
uint16_T dummy3; 
}; 
uint8_T Message[8]; 
} RPDO_ID28x; 
# 138
typedef 
# 131
union { 
struct { 
uint8_T StatusButtons1_8; 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} TPDO_ID185; 
# 151
typedef 
# 140
union { 
struct { 
uint8_T Status1; 
uint8_T Status2; 
uint8_T Status3; 
uint8_T Status4; 
uint8_T Status5; 
uint16_T Status6; 
uint8_T Status8; 
}; 
uint8_T Message[8]; 
} TPDO_ID186; 
# 151 "e:\\w\\t\\trike_speedgoat_algo\\CANOpenSlave.h"
typedef 
# 135
struct { 
union { 
uint8_T BUF[8]; 
struct { 
uint32_T DW0; 
uint32_T DW1; 
}; 
struct { 
uint16_T W0; 
uint16_T W1; 
uint16_T W2; 
uint16_T W3; 
}; 
}; 
uint16_T ID; 
uint8_T LEN; 
} CAN_MSG; 
# 160
typedef 
# 155
struct { 
uint32_T ovf_cnt; 
CAN_MSG msg[8]; 
uint8_T in; 
uint8_T out; 
} CAN_MSG_QUEUE; 

CAN_MSG_QUEUE can_rx_queue; 
CAN_MSG *gRxCAN; 
# 180
typedef 
# 172
struct { 
uint8_T Node_ID; 
uint16_T error_code; 
uint16_T Baudrate; 
uint16_T heartbeat_time; 
uint16_T heartbeat_timestamp; 
CAN_MSG heartbeat_msg; 
uint8_T error_register; 
} CANOpenSlave_CONFIG; 
# 200
typedef 
# 184
struct { 

uint16_T event_time; 
uint16_T event_timestamp; 
# 198
uint8_T *pData; 
CAN_MSG CAN; 
} TPDO_CONFIG; 
# 208
typedef 
# 204
struct { 
uint16_T ID; 
uint8_T LEN; 
uint8_T *pData; 
} RPDO_CONFIG; 
# 215
void CANOpenSlave_ResetCommunication(void); 
void CANOpenSlave_ProcessStackAsyncRx(uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T * rxData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_GetRPDO(uint8_T no, uint8_T * data); 
void CANOpenHW_SendMessage(CAN_MSG * pTransmitBuf, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T * data); 

uint8_T Handle_SDO_Request(uint8_T * pData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
#endif /* _CANOPENSLAVE_DEFINES_H */
# 31 "E:\\W\\T\\Trike_SpeedGoat_algo\\slprj\\_slcc\\YniSwGxVGDuH0o55vVoK7E\\customcode_YniSwGxVGDuH0o55vVoK7E.h"
__attribute((dllexport)) void customcode_YniSwGxVGDuH0o55vVoK7E_initializer(void); 
# 38
#endif /* __customcode_YniSwGxVGDuH0o55vVoK7E_h__ */
# 4 "E:\\W\\T\\Trike_SpeedGoat_algo\\slprj\\_slcc\\YniSwGxVGDuH0o55vVoK7E\\customcode_YniSwGxVGDuH0o55vVoK7E.c"
void customcode_YniSwGxVGDuH0o55vVoK7E_initializer(void) 
{ __MW_INSTRUM_FCN_ENTER_20(); __MW_INSTRUM_NODE_426(); 
__MW_INSTRUM_NODE_427(), CANOpenSlave_ResetCommunication(); __MW_INSTRUM_NODE_428(); 


} 
