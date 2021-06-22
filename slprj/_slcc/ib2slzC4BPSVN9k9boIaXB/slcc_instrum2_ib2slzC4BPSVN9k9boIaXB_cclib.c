#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_enabled && __mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_ib2slzC4BPSVN9k9boIaXB_cclib_INIT_FILE(unsigned int decCovId);


#define __MW_INSTRUM_FCN_ENTER_20() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_abs_tol, __mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_416() \
  (((!__mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_enabled || __mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_ib2slzC4BPSVN9k9boIaXB_cclib_ptruth_tables = __MW_INSTRUM_ib2slzC4BPSVN9k9boIaXB_cclib_INIT_FILE(0)))), \
   __MW_INSTRUM_RECORD_HIT(416U))
#define __MW_INSTRUM_NODE_417() \
  (__MW_INSTRUM_RECORD_HIT(417U))
#define __MW_INSTRUM_NODE_418() \
  (__MW_INSTRUM_RECORD_HIT(418U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#define __MW_INSTRUM_FCN_ENTER_20() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_416EZ_ib2slzC4BPSVN9k9boIaXB(void) { }
#define __MW_INSTRUM_NODE_416() __MW_INSTRUM_RECORD_HIT_416EZ_ib2slzC4BPSVN9k9boIaXB()

#define __MW_INSTRUM_NODE_417() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_418XZ_ib2slzC4BPSVN9k9boIaXB(void) { }
#define __MW_INSTRUM_NODE_418() __MW_INSTRUM_RECORD_HIT_418XZ_ib2slzC4BPSVN9k9boIaXB()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\slprj\\_slcc\\ib2slzC4BPSVN9k9boIaXB\\customcode_ib2slzC4BPSVN9k9boIaXB.c"
#line 1 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\slprj\\_slcc\\ib2slzC4BPSVN9k9boIaXB\\customcode_ib2slzC4BPSVN9k9boIaXB.h"
#ifndef __customcode_ib2slzC4BPSVN9k9boIaXB_h__
#define __customcode_ib2slzC4BPSVN9k9boIaXB_h__
#line 15 "E:\\Program Files\\MATLAB\\R2018b\\extern\\include\\mex.h"
#ifndef mex_h
#define mex_h
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdio.h"
#ifndef _INC_STDIO
#define _INC_STDIO
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
#ifndef _VCRUNTIME_H
#define _VCRUNTIME_H

#ifndef _UCRT
#define _UCRT
#endif /* _UCRT */
#line 148 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
#ifndef _SAL_VERSION
#define _SAL_VERSION 20
#endif /* _SAL_VERSION */

#ifndef __SAL_H_VERSION
#define __SAL_H_VERSION 180000000
#endif /* __SAL_H_VERSION */
#line 182
#ifndef _USE_DECLSPECS_FOR_SAL
#define _USE_DECLSPECS_FOR_SAL 0
#endif /* _USE_DECLSPECS_FOR_SAL */
#ifndef _USE_ATTRIBUTES_FOR_SAL
#define _USE_ATTRIBUTES_FOR_SAL 0
#endif /* _USE_ATTRIBUTES_FOR_SAL */
#line 224
#ifndef _SAL_L_Source_
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)

#endif /* _SAL_L_Source_ */
#line 2363
#ifndef __nothrow
#define __nothrow
#endif /* __nothrow */
#line 2879
#ifndef __fallthrough
#define __fallthrough __inner_fallthrough

#endif /* __fallthrough */
#line 16 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\concurrencysal.h"
#ifndef CONCURRENCYSAL_H
#define CONCURRENCYSAL_H
#line 266
#ifndef _Interlocked_operand_
#define _Interlocked_operand_
#endif /* _Interlocked_operand_ */
#line 357
#endif /* CONCURRENCYSAL_H */
#line 25 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#line 708 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 28
typedef unsigned __int64 uintptr_t; 



#endif /* _UINTPTR_T_DEFINED */

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED



typedef char *va_list; 

#endif /* _VA_LIST_DEFINED */
#line 112
void __cdecl __va_start(va_list *, ...); 
#line 164
#pragma pack ( pop )
#line 83 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) 
#line 180
typedef unsigned __int64 size_t; 
typedef __int64 ptrdiff_t; 
typedef __int64 intptr_t; 
#line 196
typedef _Bool __vcrt_bool; 



#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#endif /* _SIZE_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#endif /* _INTPTR_T_DEFINED */


#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef unsigned short wchar_t; 
#endif /* _WCHAR_T_DEFINED */
#line 277
void __cdecl __security_init_cookie(void); 
#line 283
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 



extern uintptr_t __security_cookie; 
#line 298
#endif /* _VCRUNTIME_H */
#line 33 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
#ifndef _ACRTIMP_ALT
#define _ACRTIMP_ALT _ACRTIMP
#endif /* _ACRTIMP_ALT */
#line 296 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
__pragma( pack ( push, 8 )) 
#line 156
typedef _Bool __crt_bool; 
#line 167
#ifndef _STATIC_ASSERT
#define _STATIC_ASSERT(expr) typedef char __static_assert_t[(expr) != 0]
#endif /* _STATIC_ASSERT */
#line 200
#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
#line 242
#ifndef _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE
#define _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE 1
#endif /* _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE */
#line 278
__declspec(dllimport) void __cdecl _invalid_parameter_noinfo(void); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void); 

__declspec(noreturn) 
__declspec(dllimport) void __cdecl _invoke_watson(const wchar_t * _Expression, const wchar_t * _FunctionName, const wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 404
#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif /* __STDC_WANT_SECURE_LIB__ */
#line 499
#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif /* _CRT_SECURE_CPP_NOTHROW */
#line 510
typedef int errno_t; 
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
typedef long __time32_t; 
typedef __int64 __time64_t; 
#line 521
typedef 
#line 516
struct __crt_locale_data_public { 

const unsigned short *_locale_pctype; 
int _locale_mb_cur_max; 
unsigned _locale_lc_codepage; 
} __crt_locale_data_public; 
#line 527
typedef 
#line 523
struct __crt_locale_pointers { 

struct __crt_locale_data *locinfo; 
struct __crt_multibyte_data *mbcinfo; 
} __crt_locale_pointers; 

typedef __crt_locale_pointers *_locale_t; 
#line 535
typedef 
#line 531
struct _Mbstatet { 

unsigned long _Wchar; 
unsigned short _Byte, _State; 
} _Mbstatet; 

typedef _Mbstatet mbstate_t; 
#line 551
typedef __time64_t time_t; 




#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#endif /* _TIME_T_DEFINED */


typedef size_t rsize_t; 
#line 2010
__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( push, 8 )) 
#line 85
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options(void) 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} 
#line 95
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_scanf_options(void) 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} 
#line 23 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
#ifndef _FILE_DEFINED
#define _FILE_DEFINED
#line 124 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__pragma( pack ( push, 8 )) 
#line 28
typedef 
#line 25
struct _iobuf { 

void *_Placeholder; 
} FILE; 
#endif /* _FILE_DEFINED */

__declspec(dllimport) FILE *__cdecl __acrt_iob_func(unsigned _Ix); 
#line 48
__declspec(dllimport) wint_t __cdecl fgetwc(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fgetwchar(void); 


__declspec(dllimport) wint_t __cdecl fputwc(wchar_t _Character, FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fputwchar(wchar_t _Character); 




__declspec(dllimport) wint_t __cdecl getwc(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl getwchar(void); 




__declspec(dllimport) wchar_t *__cdecl fgetws(wchar_t * _Buffer, int _BufferCount, FILE * _Stream); 
#line 83
__declspec(dllimport) int __cdecl fputws(const wchar_t * _Buffer, FILE * _Stream); 
#line 90
__declspec(dllimport) wchar_t *__cdecl _getws_s(wchar_t * _Buffer, size_t _BufferCount); 
#line 102
__declspec(dllimport) wint_t __cdecl putwc(wchar_t _Character, FILE * _Stream); 
#line 108
__declspec(dllimport) wint_t __cdecl putwchar(wchar_t _Character); 




__declspec(dllimport) int __cdecl _putws(const wchar_t * _Buffer); 




__declspec(dllimport) wint_t __cdecl ungetwc(wint_t _Character, FILE * _Stream); 
#line 124
__declspec(dllimport) FILE *__cdecl _wfdopen(int _FileHandle, const wchar_t * _Mode); 
#line 130
__declspec(dllimport) FILE *__cdecl _wfopen(const wchar_t * _FileName, const wchar_t * _Mode); 
#line 136
__declspec(dllimport) errno_t __cdecl _wfopen_s(FILE ** _Stream, const wchar_t * _FileName, const wchar_t * _Mode); 
#line 144
__declspec(dllimport) FILE *__cdecl _wfreopen(const wchar_t * _FileName, const wchar_t * _Mode, FILE * _OldStream); 
#line 151
__declspec(dllimport) errno_t __cdecl _wfreopen_s(FILE ** _Stream, const wchar_t * _FileName, const wchar_t * _Mode, FILE * _OldStream); 
#line 159
__declspec(dllimport) FILE *__cdecl _wfsopen(const wchar_t * _FileName, const wchar_t * _Mode, int _ShFlag); 
#line 165
__declspec(dllimport) void __cdecl _wperror(const wchar_t * _ErrorMessage); 
#line 172
__declspec(dllimport) FILE *__cdecl _wpopen(const wchar_t * _Command, const wchar_t * _Mode); 
#line 179
__declspec(dllimport) int __cdecl _wremove(const wchar_t * _FileName); 
#line 187
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wtempnam(const wchar_t * _Directory, const wchar_t * _FilePrefix); 
#line 196
__declspec(dllimport) errno_t __cdecl _wtmpnam_s(wchar_t * _Buffer, size_t _BufferCount); 
#line 207
__declspec(dllimport) wchar_t *__cdecl _wtmpnam(wchar_t * _Buffer); 
#line 221
__declspec(dllimport) wint_t __cdecl _fgetwc_nolock(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fputwc_nolock(wchar_t _Character, FILE * _Stream); 
#line 232
__declspec(dllimport) wint_t __cdecl _getwc_nolock(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _putwc_nolock(wchar_t _Character, FILE * _Stream); 
#line 243
__declspec(dllimport) wint_t __cdecl _ungetwc_nolock(wint_t _Character, FILE * _Stream); 
#line 269
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 278
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 287
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_p(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 296
__inline int __cdecl _vfwprintf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vfwprintf(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfwprintf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 
#line 342
__inline int __cdecl vfwprintf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 358
__inline int __cdecl _vfwprintf_p_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vfwprintf_p(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vwprintf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwprintf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 
#line 430
__inline int __cdecl vwprintf_s(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 
#line 445
__inline int __cdecl _vwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vwprintf_p(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _fwprintf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fwprintf(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwprintf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 530
__inline int __cdecl fwprintf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 550
__inline int __cdecl _fwprintf_p_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwprintf_p(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl wprintf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 642
__inline int __cdecl wprintf_s(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 661
__inline int __cdecl _wprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_p(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 702
__declspec(dllimport) int __cdecl __stdio_common_vfwscanf(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 711
__inline int __cdecl _vfwscanf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vfwscanf(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfwscanf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} 
#line 761
__inline int __cdecl vfwscanf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vwscanf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vwscanf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwscanf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 
#line 819
__inline int __cdecl vwscanf_s(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 
#line 834
__inline int __cdecl _fwscanf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fwscanf(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwscanf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 892
__inline int __cdecl fwscanf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 912
__inline int __cdecl _wscanf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl wscanf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wscanf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 967
__inline int __cdecl wscanf_s(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1003
__declspec(dllimport) int __cdecl __stdio_common_vswprintf(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1014
__declspec(dllimport) int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1025
__declspec(dllimport) int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, size_t _MaxCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1037
__declspec(dllimport) int __cdecl __stdio_common_vswprintf_p(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1048
__inline int __cdecl _vsnwprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 


#pragma warning(push)
#pragma warning(disable: 4793)



__inline int __cdecl _vsnwprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnwprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnwprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 


__inline int __cdecl _snwprintf(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, ...); __inline int __cdecl _vsnwprintf(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, va_list _Args); 
#line 1118
#pragma warning(pop)



__inline int __cdecl _vsnwprintf(wchar_t *
_Buffer, size_t 
_BufferCount, const wchar_t *
_Format, va_list 
_ArgList) 




{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
} 
#line 1150
__inline int __cdecl _vswprintf_c_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vswprintf_c(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
} 




__inline int __cdecl __vswprintf_l(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} 




__inline int __cdecl _vswprintf(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} 




__inline int __cdecl vswprintf(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 
#line 1276
__inline int __cdecl vswprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1302
__inline int __cdecl _vswprintf_p_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vswprintf_p(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vscwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vscwprintf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_l(_Format, 0, _ArgList); 
} 




__inline int __cdecl _vscwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vscwprintf_p(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_p_l(_Format, 0, _ArgList); 
} 




__inline int __cdecl __swprintf_l(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl swprintf(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


#pragma warning(push)


#pragma warning(disable:4793 4996)

__inline int __cdecl __swprintf_l(wchar_t * _Buffer, const wchar_t * _Format, _locale_t _Locale, ...); __inline int __cdecl __vswprintf_l(wchar_t * _Buffer, const wchar_t * _Format, _locale_t _Locale, va_list _Args); 
#line 1497
__inline int __cdecl _swprintf(wchar_t * _Buffer, const wchar_t * _Format, ...); __inline int __cdecl _vswprintf(wchar_t * _Buffer, const wchar_t * _Format, va_list _Args); 
#line 1504
#pragma warning(pop)



__inline int __cdecl _swprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1530
__inline int __cdecl swprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1559
__inline int __cdecl _swprintf_p_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_p(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_c_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_c(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf(wchar_t *
_Buffer, size_t 
_BufferCount, const wchar_t *
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1742
__inline int __cdecl _scwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscwprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscwprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf_p(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscwprintf_p_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




#pragma warning(push)
#pragma warning(disable: 4141 4412 4793 4996 6054)
#line 1875
#pragma warning(pop)
#line 1892
__declspec(dllimport) int __cdecl __stdio_common_vswscanf(unsigned __int64 _Options, const wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1903
__inline int __cdecl _vswscanf_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 




__inline int __cdecl vswscanf(const wchar_t *
_Buffer, const wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswscanf_s_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 
#line 1956
__inline int __cdecl vswscanf_s(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 1981
__inline int __cdecl _vsnwscanf_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} 




__inline int __cdecl _vsnwscanf_s_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} 




__inline int __cdecl _swscanf_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl swscanf(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swscanf_s_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2080
__inline int __cdecl swscanf_s(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2101
__inline int __cdecl _snwscanf_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf_s_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf_s(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2198
__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdio.h"
__pragma( pack ( push, 8 )) 
#line 69
typedef __int64 fpos_t; 
#line 76
__declspec(dllimport) errno_t __cdecl _get_stream_buffer_pointers(FILE * _Stream, char *** _Base, char *** _Pointer, int ** _Count); 
#line 92
__declspec(dllimport) errno_t __cdecl clearerr_s(FILE * _Stream); 




__declspec(dllimport) errno_t __cdecl fopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode); 
#line 105
__declspec(dllimport) size_t __cdecl fread_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 114
__declspec(dllimport) errno_t __cdecl freopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode, FILE * _OldStream); 
#line 122
__declspec(dllimport) char *__cdecl gets_s(char * _Buffer, rsize_t _Size); 
#line 128
__declspec(dllimport) errno_t __cdecl tmpfile_s(FILE ** _Stream); 
#line 134
__declspec(dllimport) errno_t __cdecl tmpnam_s(char * _Buffer, rsize_t _Size); 
#line 141
__declspec(dllimport) void __cdecl clearerr(FILE * _Stream); 
#line 147
__declspec(dllimport) int __cdecl fclose(FILE * _Stream); 




__declspec(dllimport) int __cdecl _fcloseall(void); 


__declspec(dllimport) FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); 
#line 161
__declspec(dllimport) int __cdecl feof(FILE * _Stream); 




__declspec(dllimport) int __cdecl ferror(FILE * _Stream); 




__declspec(dllimport) int __cdecl fflush(FILE * _Stream); 
#line 177
__declspec(dllimport) int __cdecl fgetc(FILE * _Stream); 




__declspec(dllimport) int __cdecl _fgetchar(void); 



__declspec(dllimport) int __cdecl fgetpos(FILE * _Stream, fpos_t * _Position); 
#line 193
__declspec(dllimport) char *__cdecl fgets(char * _Buffer, int _MaxCount, FILE * _Stream); 
#line 200
__declspec(dllimport) int __cdecl _fileno(FILE * _Stream); 




__declspec(dllimport) int __cdecl _flushall(void); 


__declspec(dllimport) FILE *__cdecl fopen(const char * _FileName, const char * _Mode); 
#line 216
__declspec(dllimport) int __cdecl fputc(int _Character, FILE * _Stream); 
#line 222
__declspec(dllimport) int __cdecl _fputchar(int _Character); 
#line 228
__declspec(dllimport) int __cdecl fputs(const char * _Buffer, FILE * _Stream); 
#line 234
__declspec(dllimport) size_t __cdecl fread(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 243
__declspec(dllimport) FILE *__cdecl freopen(const char * _FileName, const char * _Mode, FILE * _Stream); 
#line 250
__declspec(dllimport) FILE *__cdecl _fsopen(const char * _FileName, const char * _Mode, int _ShFlag); 
#line 258
__declspec(dllimport) int __cdecl fsetpos(FILE * _Stream, const fpos_t * _Position); 
#line 265
__declspec(dllimport) int __cdecl fseek(FILE * _Stream, long _Offset, int _Origin); 
#line 273
__declspec(dllimport) int __cdecl _fseeki64(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 281
__declspec(dllimport) long __cdecl ftell(FILE * _Stream); 
#line 287
__declspec(dllimport) __int64 __cdecl _ftelli64(FILE * _Stream); 




__declspec(dllimport) size_t __cdecl fwrite(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 301
__declspec(dllimport) int __cdecl getc(FILE * _Stream); 




__declspec(dllimport) int __cdecl getchar(void); 


__declspec(dllimport) int __cdecl _getmaxstdio(void); 
#line 316
__declspec(dllimport) int __cdecl _getw(FILE * _Stream); 



__declspec(dllimport) void __cdecl perror(const char * _ErrorMessage); 
#line 328
__declspec(dllimport) int __cdecl _pclose(FILE * _Stream); 




__declspec(dllimport) FILE *__cdecl _popen(const char * _Command, const char * _Mode); 
#line 342
__declspec(dllimport) int __cdecl putc(int _Character, FILE * _Stream); 
#line 348
__declspec(dllimport) int __cdecl putchar(int _Character); 




__declspec(dllimport) int __cdecl puts(const char * _Buffer); 
#line 359
__declspec(dllimport) int __cdecl _putw(int _Word, FILE * _Stream); 




__declspec(dllimport) int __cdecl remove(const char * _FileName); 




__declspec(dllimport) int __cdecl rename(const char * _OldFileName, const char * _NewFileName); 




__declspec(dllimport) int __cdecl _unlink(const char * _FileName); 
#line 380
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _unlink. See online help for details" ".")) 
__declspec(dllimport) int __cdecl unlink(const char * _FileName); 
#line 387
__declspec(dllimport) void __cdecl rewind(FILE * _Stream); 




__declspec(dllimport) int __cdecl _rmtmp(void); 


__declspec(dllimport) void __cdecl setbuf(FILE * _Stream, char * _Buffer); 
#line 401
__declspec(dllimport) int __cdecl _setmaxstdio(int _Maximum); 
#line 407
__declspec(dllimport) int __cdecl setvbuf(FILE * _Stream, char * _Buffer, int _Mode, size_t _Size); 
#line 420
__declspec(dllimport) __declspec(allocator) char *__cdecl _tempnam(const char * _DirectoryName, const char * _FilePrefix); 
#line 430
__declspec(dllimport) FILE *__cdecl tmpfile(void); 
#line 438
#pragma warning(push)
#pragma warning(disable: 28726)
__declspec(dllimport) char *__cdecl tmpnam(char * _Buffer); 




#pragma warning(pop)



__declspec(dllimport) int __cdecl ungetc(int _Character, FILE * _Stream); 
#line 461
__declspec(dllimport) void __cdecl _lock_file(FILE * _Stream); 



__declspec(dllimport) void __cdecl _unlock_file(FILE * _Stream); 
#line 471
__declspec(dllimport) int __cdecl _fclose_nolock(FILE * _Stream); 
#line 477
__declspec(dllimport) int __cdecl _fflush_nolock(FILE * _Stream); 
#line 483
__declspec(dllimport) int __cdecl _fgetc_nolock(FILE * _Stream); 
#line 489
__declspec(dllimport) int __cdecl _fputc_nolock(int _Character, FILE * _Stream); 
#line 495
__declspec(dllimport) size_t __cdecl _fread_nolock(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 504
__declspec(dllimport) size_t __cdecl _fread_nolock_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 513
__declspec(dllimport) int __cdecl _fseek_nolock(FILE * _Stream, long _Offset, int _Origin); 
#line 520
__declspec(dllimport) int __cdecl _fseeki64_nolock(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 527
__declspec(dllimport) long __cdecl _ftell_nolock(FILE * _Stream); 




__declspec(dllimport) __int64 __cdecl _ftelli64_nolock(FILE * _Stream); 




__declspec(dllimport) size_t __cdecl _fwrite_nolock(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 545
__declspec(dllimport) int __cdecl _getc_nolock(FILE * _Stream); 




__declspec(dllimport) int __cdecl _putc_nolock(int _Character, FILE * _Stream); 
#line 556
__declspec(dllimport) int __cdecl _ungetc_nolock(int _Character, FILE * _Stream); 
#line 587
__declspec(dllimport) int *__cdecl __p__commode(void); 
#line 607
__declspec(dllimport) int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 615
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 624
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 633
__inline int __cdecl _vfprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vfprintf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 
#line 679
__inline int __cdecl vfprintf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 695
__inline int __cdecl _vfprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vfprintf_p(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vprintf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 
#line 767
__inline int __cdecl vprintf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 
#line 782
__inline int __cdecl _vprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _fprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fprintf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__declspec(dllimport) int __cdecl _set_printf_count_output(int _Value); 



__declspec(dllimport) int __cdecl _get_printf_count_output(void); 


__inline int __cdecl _fprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 873
__inline int __cdecl fprintf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 893
__inline int __cdecl _fprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fprintf_p(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl printf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 985
__inline int __cdecl printf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1004
__inline int __cdecl _printf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1044
__declspec(dllimport) int __cdecl __stdio_common_vfscanf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _Arglist); 
#line 1053
__inline int __cdecl _vfscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vfscanf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} 
#line 1104
__inline int __cdecl vfscanf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 1120
__inline int __cdecl _vscanf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vscanf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vscanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 
#line 1163
__inline int __cdecl vscanf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 
#line 1178
__inline int __cdecl _fscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fscanf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1236
__inline int __cdecl fscanf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1256
__inline int __cdecl _scanf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl scanf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1311
__inline int __cdecl scanf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1337
__declspec(dllimport) int __cdecl __stdio_common_vsprintf(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1347
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1357
__declspec(dllimport) int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1368
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1379
__inline int __cdecl _vsnprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
} 
#line 1430
__inline int __cdecl vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), _Buffer, _BufferCount, _Format, 0, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#pragma warning(pop)
} 




__inline int __cdecl vsprintf(char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
#pragma warning(pop)
} 




__inline int __cdecl _vsprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 
#line 1510
__inline int __cdecl vsprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1536
__inline int __cdecl _vsprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vsnprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1623
__inline int __cdecl vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1650
__inline int __cdecl _vscprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 



__inline int __cdecl _vscprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_l(_Format, 0, _ArgList); 
} 



__inline int __cdecl _vscprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 



__inline int __cdecl _vscprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_p_l(_Format, 0, _ArgList); 
} 



__inline int __cdecl _vsnprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _sprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList); 
#pragma warning(pop)

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl sprintf(char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList); 
#pragma warning(pop)

(void)(_ArgList = (va_list)0); 
return _Result; 
} 


#pragma warning(push)
#pragma warning(disable: 4996)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__inline int __cdecl sprintf(char * _Buffer, const char * _Format, ...); __inline int __cdecl vsprintf(char * _Buffer, const char * _Format, va_list _Args); 





#pragma warning(pop)



__inline int __cdecl _sprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1833
__inline int __cdecl sprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1862
__inline int __cdecl _sprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _sprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)

(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1940
__inline int __cdecl snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
#pragma warning(suppress:28719)
_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
#pragma warning(suppress:28719)
_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__inline int __cdecl _snprintf(char * _Buffer, size_t _BufferCount, const char * _Format, ...); __inline int __cdecl _vsnprintf(char * _Buffer, size_t _BufferCount, const char * _Format, va_list _Args); 
#line 1991
__inline int __cdecl _snprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2082
__inline int __cdecl _scprintf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscprintf_p(_Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2156
__declspec(dllimport) int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, const char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 2166
__inline int __cdecl _vsscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vsscanf(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vsscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 




#pragma warning(push)
#pragma warning(disable:6530)


__inline int __cdecl vsscanf_s(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 2239
#pragma warning(pop)




__inline int __cdecl _sscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl sscanf(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _sscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2302
__inline int __cdecl sscanf_s(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

#pragma warning(push)
#pragma warning(disable: 4996)
_Result = vsscanf_s(_Buffer, _Format, _ArgList); 
#pragma warning(pop)

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




#pragma warning(push)
#pragma warning(disable:6530)


__inline int __cdecl _snscanf_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _snscanf(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snscanf_s_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _snscanf_s(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 


#pragma warning(pop)
#line 2446
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _tempnam. See online help for detail" "s.")) 
__declspec(dllimport) char *__cdecl tempnam(const char * _Directory, const char * _FilePrefix); 
#line 2456
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcloseall. See online help for deta" "ils.")) __declspec(dllimport) int __cdecl fcloseall(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fdopen. See online help for details" ".")) __declspec(dllimport) FILE *__cdecl fdopen(int _FileHandle, const char * _Format); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fgetchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fgetchar(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fileno. See online help for details" ".")) __declspec(dllimport) int __cdecl fileno(FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _flushall. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl flushall(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fputchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fputchar(int _Ch); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getw. See online help for details.")) __declspec(dllimport) int __cdecl getw(FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putw. See online help for details.")) __declspec(dllimport) int __cdecl putw(int _Ch, FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _rmtmp. See online help for details." "")) __declspec(dllimport) int __cdecl rmtmp(void); 
#line 2472
#endif /* _INC_STDIO */
#line 2471
__pragma( pack ( pop )) 
#line 41 "E:\\Program Files\\MATLAB\\R2018b\\extern\\include\\mex.h"
typedef struct impl_info_tag *MEX_impl_info; 
#line 20 "E:\\Program Files\\MATLAB\\R2018b\\extern\\include\\matrix.h"
#ifndef matrix_h
#define matrix_h
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#ifndef _INC_STDLIB
#define _INC_STDLIB
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( push, 8 )) 
#line 54
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_calloc_base(size_t _Count, size_t _Size); 
#line 61
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
calloc(size_t _Count, size_t _Size); 
#line 68
__declspec(dllimport) int __cdecl _callnewh(size_t _Size); 




__declspec(dllimport) __declspec(allocator) void *__cdecl 
_expand(void * _Block, size_t _Size); 




__declspec(dllimport) void __cdecl 
_free_base(void * _Block); 



__declspec(dllimport) void __cdecl 
free(void * _Block); 




__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_malloc_base(size_t _Size); 




__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
malloc(size_t _Size); 




__declspec(dllimport) size_t __cdecl 
_msize_base(void * _Block); 




__declspec(dllimport) size_t __cdecl 
_msize(void * _Block); 




__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_realloc_base(void * _Block, size_t _Size); 
#line 121
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
realloc(void * _Block, size_t _Size); 
#line 128
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 136
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 143
__declspec(dllimport) void __cdecl 
_aligned_free(void * _Block); 




__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_malloc(size_t _Size, size_t _Alignment); 
#line 156
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 164
__declspec(dllimport) size_t __cdecl 
_aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 172
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 181
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 191
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 199
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stddef.h"
#ifndef _INC_STDDEF
#define _INC_STDDEF
#line 228 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stddef.h"
__pragma( pack ( push, 8 )) 
#line 31
__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 51
__declspec(dllimport) extern unsigned long __cdecl __threadid(void); 

__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(void); 




#endif /* _INC_STDDEF */
#line 57
__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_search.h"
__pragma( pack ( push, 8 )) 


typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 26
__declspec(dllimport) void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 35
__declspec(dllimport) void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 48
__declspec(dllimport) void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 56
__declspec(dllimport) void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 64
__declspec(dllimport) void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 74
__declspec(dllimport) void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 83
__declspec(dllimport) void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 93
__declspec(dllimport) void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 190
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lfind. See online help for details." "")) 
__declspec(dllimport) void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 199
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lsearch. See online help for detail" "s.")) 
__declspec(dllimport) void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 212
__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( push, 8 )) 
#line 50
__declspec(dllimport) errno_t __cdecl _itow_s(int _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 64
__declspec(dllimport) wchar_t *__cdecl _itow(int _Value, wchar_t * _Buffer, int _Radix); 
#line 73
__declspec(dllimport) errno_t __cdecl _ltow_s(long _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 87
__declspec(dllimport) wchar_t *__cdecl _ltow(long _Value, wchar_t * _Buffer, int _Radix); 
#line 95
__declspec(dllimport) errno_t __cdecl _ultow_s(unsigned long _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 109
__declspec(dllimport) wchar_t *__cdecl _ultow(unsigned long _Value, wchar_t * _Buffer, int _Radix); 
#line 117
__declspec(dllimport) double __cdecl wcstod(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 123
__declspec(dllimport) double __cdecl _wcstod_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 130
__declspec(dllimport) long __cdecl wcstol(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 137
__declspec(dllimport) long __cdecl _wcstol_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 145
__declspec(dllimport) __int64 __cdecl wcstoll(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 152
__declspec(dllimport) __int64 __cdecl _wcstoll_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 160
__declspec(dllimport) unsigned long __cdecl wcstoul(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 167
__declspec(dllimport) unsigned long __cdecl _wcstoul_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 175
__declspec(dllimport) unsigned __int64 __cdecl wcstoull(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 182
__declspec(dllimport) unsigned __int64 __cdecl _wcstoull_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 190
__declspec(dllimport) long double __cdecl wcstold(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 196
__declspec(dllimport) long double __cdecl _wcstold_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 203
__declspec(dllimport) float __cdecl wcstof(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 209
__declspec(dllimport) float __cdecl _wcstof_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 216
__declspec(dllimport) double __cdecl _wtof(const wchar_t * _String); 




__declspec(dllimport) double __cdecl _wtof_l(const wchar_t * _String, _locale_t _Locale); 
#line 227
__declspec(dllimport) int __cdecl _wtoi(const wchar_t * _String); 




__declspec(dllimport) int __cdecl _wtoi_l(const wchar_t * _String, _locale_t _Locale); 
#line 238
__declspec(dllimport) long __cdecl _wtol(const wchar_t * _String); 




__declspec(dllimport) long __cdecl _wtol_l(const wchar_t * _String, _locale_t _Locale); 
#line 249
__declspec(dllimport) __int64 __cdecl _wtoll(const wchar_t * _String); 




__declspec(dllimport) __int64 __cdecl _wtoll_l(const wchar_t * _String, _locale_t _Locale); 
#line 260
__declspec(dllimport) errno_t __cdecl _i64tow_s(__int64 _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 268
__declspec(dllimport) wchar_t *__cdecl _i64tow(__int64 _Value, wchar_t * _Buffer, int _Radix); 
#line 275
__declspec(dllimport) errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 283
__declspec(dllimport) wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, wchar_t * _Buffer, int _Radix); 
#line 290
__declspec(dllimport) __int64 __cdecl _wtoi64(const wchar_t * _String); 




__declspec(dllimport) __int64 __cdecl _wtoi64_l(const wchar_t * _String, _locale_t _Locale); 
#line 301
__declspec(dllimport) __int64 __cdecl _wcstoi64(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 308
__declspec(dllimport) __int64 __cdecl _wcstoi64_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 316
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 323
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 335
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wfullpath(wchar_t * _Buffer, const wchar_t * _Path, size_t _BufferCount); 
#line 344
__declspec(dllimport) errno_t __cdecl _wmakepath_s(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext); 
#line 362
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) void __cdecl _wmakepath(wchar_t * _Buffer, const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext); 
#line 373
#pragma warning(pop)

__declspec(dllimport) void __cdecl _wperror(const wchar_t * _ErrorMessage); 




__declspec(dllimport) void __cdecl _wsplitpath(const wchar_t * _FullPath, wchar_t * _Drive, wchar_t * _Dir, wchar_t * _Filename, wchar_t * _Ext); 
#line 388
__declspec(dllimport) errno_t __cdecl _wsplitpath_s(const wchar_t * _FullPath, wchar_t * _Drive, size_t _DriveCount, wchar_t * _Dir, size_t _DirCount, wchar_t * _Filename, size_t _FilenameCount, wchar_t * _Ext, size_t _ExtCount); 
#line 409
__declspec(dllimport) errno_t __cdecl _wdupenv_s(wchar_t ** _Buffer, size_t * _BufferCount, const wchar_t * _VarName); 
#line 418
__declspec(dllimport) wchar_t *__cdecl _wgetenv(const wchar_t * _VarName); 
#line 424
__declspec(dllimport) errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _VarName); 
#line 440
__declspec(dllimport) int __cdecl _wputenv(const wchar_t * _EnvString); 




__declspec(dllimport) errno_t __cdecl _wputenv_s(const wchar_t * _Name, const wchar_t * _Value); 




__declspec(dllimport) errno_t __cdecl _wsearchenv_s(const wchar_t * _Filename, const wchar_t * _VarName, wchar_t * _Buffer, size_t _BufferCount); 
#line 464
__declspec(dllimport) void __cdecl _wsearchenv(const wchar_t * _Filename, const wchar_t * _VarName, wchar_t * _ResultPath); 
#line 471
__declspec(dllimport) int __cdecl _wsystem(const wchar_t * _Command); 
#line 81 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\limits.h"
#ifndef RSIZE_MAX
#define RSIZE_MAX (SIZE_MAX >> 1)
#endif /* RSIZE_MAX */
#line 22 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#ifndef _countof
#define _countof __crt_countof
#endif /* _countof */
#line 479 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\limits.h"
__pragma( pack ( push, 8 )) 
#line 88
__pragma( pack ( pop )) 
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
__pragma( pack ( push, 8 )) 
#line 34
__declspec(dllimport) void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 52
__declspec(dllimport) __declspec(noreturn) void __cdecl exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl abort(void); 
#line 63
__declspec(dllimport) unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 70
#ifndef _CRT_ONEXIT_T_DEFINED
#define _CRT_ONEXIT_T_DEFINED

typedef int (__cdecl *_onexit_t)(void); 



#endif /* _CRT_ONEXIT_T_DEFINED */
#line 140
int __cdecl atexit(void (__cdecl *)(void)); 
_onexit_t __cdecl _onexit(_onexit_t _Func); 


int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 155
typedef void (__cdecl *_purecall_handler)(void); 


typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned, uintptr_t); 
#line 167
_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 



_purecall_handler __cdecl _get_purecall_handler(void); 


__declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 



__declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void); 

__declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 



__declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void); 
#line 208
__declspec(dllimport) int __cdecl _set_error_mode(int _Mode); 




__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 

__declspec(dllimport) unsigned long *__cdecl __doserrno(void); 


__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 


__declspec(dllimport) char **__cdecl __sys_errlist(void); 


__declspec(dllimport) int *__cdecl __sys_nerr(void); 


__declspec(dllimport) void __cdecl perror(const char * _ErrMsg); 
#line 238
__declspec(dllimport) char **__cdecl __p__pgmptr(void); 
__declspec(dllimport) wchar_t **__cdecl __p__wpgmptr(void); 
__declspec(dllimport) int *__cdecl __p__fmode(void); 
#line 255
__declspec(dllimport) errno_t __cdecl _get_pgmptr(char ** _Value); 


__declspec(dllimport) errno_t __cdecl _get_wpgmptr(wchar_t ** _Value); 

__declspec(dllimport) errno_t __cdecl _set_fmode(int _Mode); 

__declspec(dllimport) errno_t __cdecl _get_fmode(int * _PMode); 
#line 275
typedef 
#line 271
struct _div_t { 

int quot; 
int rem; 
} div_t; 
#line 281
typedef 
#line 277
struct _ldiv_t { 

long quot; 
long rem; 
} ldiv_t; 
#line 287
typedef 
#line 283
struct _lldiv_t { 

__int64 quot; 
__int64 rem; 
} lldiv_t; 

int __cdecl abs(int _Number); 
long __cdecl labs(long _Number); 
__int64 __cdecl llabs(__int64 _Number); 
__int64 __cdecl _abs64(__int64 _Number); 

unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 

__declspec(dllimport) div_t __cdecl div(int _Numerator, int _Denominator); 
__declspec(dllimport) ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
__declspec(dllimport) lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 



#pragma warning (push)
#pragma warning (disable:6540)

unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 313
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 




unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 




unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 329
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 




unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 




#pragma warning (pop)
#line 346
__declspec(dllimport) void __cdecl srand(unsigned _Seed); 

__declspec(dllimport) int __cdecl rand(void); 
#line 390
#pragma pack ( push, 4 )



typedef 
#line 392
struct { 
unsigned char ld[10]; 
} _LDOUBLE; 
#pragma pack ( pop )
#line 414
typedef 
#line 412
struct { 
double x; 
} _CRT_DOUBLE; 




typedef 
#line 417
struct { 
float f; 
} _CRT_FLOAT; 
#line 428
typedef 
#line 426
struct { 
long double x; 
} _LONGDOUBLE; 



#pragma pack ( push, 4 )



typedef 
#line 434
struct { 
unsigned char ld12[12]; 
} _LDBL12; 
#pragma pack ( pop )
#line 446
__declspec(dllimport) double __cdecl atof(const char * _String); 
__declspec(dllimport) int __cdecl atoi(const char * _String); 
__declspec(dllimport) long __cdecl atol(const char * _String); 
__declspec(dllimport) __int64 __cdecl atoll(const char * _String); 
__declspec(dllimport) __int64 __cdecl _atoi64(const char * _String); 

__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) __int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) __int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 

__declspec(dllimport) int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
__declspec(dllimport) int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
__declspec(dllimport) int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 


__declspec(dllimport) int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 470
__declspec(dllimport) int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 478
__declspec(dllimport) int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 485
__declspec(dllimport) float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 491
__declspec(dllimport) float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 498
__declspec(dllimport) double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 504
__declspec(dllimport) double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 511
__declspec(dllimport) long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 517
__declspec(dllimport) long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 524
__declspec(dllimport) long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 531
__declspec(dllimport) long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 539
__declspec(dllimport) __int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 546
__declspec(dllimport) __int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 554
__declspec(dllimport) unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 561
__declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 569
__declspec(dllimport) unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 576
__declspec(dllimport) unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 584
__declspec(dllimport) __int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 591
__declspec(dllimport) __int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 599
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 606
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 622
__declspec(dllimport) errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 637
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 





#pragma warning(pop)



__declspec(dllimport) errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 664
__declspec(dllimport) char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 673
__declspec(dllimport) errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 687
#pragma warning(push)
#pragma warning(disable: 28726)
__declspec(dllimport) char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 





#pragma warning(pop)



__declspec(dllimport) errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 708
__declspec(dllimport) char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 716
__declspec(dllimport) errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 724
__declspec(dllimport) char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 744
__declspec(dllimport) errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 763
__declspec(dllimport) char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 772
__declspec(dllimport) errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 793
__declspec(dllimport) char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 801
__declspec(dllimport) errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 817
__declspec(dllimport) char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 846
__declspec(dllimport) int __cdecl ___mb_cur_max_func(void); 


__declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 855
__declspec(dllimport) int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 861
__declspec(dllimport) int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 869
__declspec(dllimport) size_t __cdecl _mbstrlen(const char * _String); 
#line 875
__declspec(dllimport) size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 882
__declspec(dllimport) size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 889
__declspec(dllimport) size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 896
__declspec(dllimport) int __cdecl mbtowc(wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 903
__declspec(dllimport) int __cdecl _mbtowc_l(wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 911
__declspec(dllimport) errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 927
__declspec(dllimport) size_t __cdecl mbstowcs(wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 935
__declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 953
__declspec(dllimport) size_t __cdecl _mbstowcs_l(wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 966
__declspec(dllimport) int __cdecl wctomb(char * _MbCh, wchar_t _WCh); 
#line 972
__declspec(dllimport) int __cdecl _wctomb_l(char * _MbCh, wchar_t _WCh, _locale_t _Locale); 
#line 981
__declspec(dllimport) errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, wchar_t _WCh); 
#line 991
__declspec(dllimport) errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, wchar_t _WCh, _locale_t _Locale); 
#line 999
__declspec(dllimport) errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1015
__declspec(dllimport) size_t __cdecl wcstombs(char * _Dest, const wchar_t * _Source, size_t _MaxCount); 
#line 1023
__declspec(dllimport) errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1041
__declspec(dllimport) size_t __cdecl _wcstombs_l(char * _Dest, const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1071
__declspec(dllimport) __declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1080
__declspec(dllimport) errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1098
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1109
#pragma warning(pop)


__declspec(dllimport) void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1121
__declspec(dllimport) errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1139
__declspec(dllimport) errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1151
__declspec(dllimport) int *__cdecl __p___argc(void); 
__declspec(dllimport) char ***__cdecl __p___argv(void); 
__declspec(dllimport) wchar_t ***__cdecl __p___wargv(void); 
#line 1165
__declspec(dllimport) char ***__cdecl __p__environ(void); 
__declspec(dllimport) wchar_t ***__cdecl __p__wenviron(void); 
#line 1191
__declspec(dllimport) char *__cdecl getenv(const char * _VarName); 
#line 1208
__declspec(dllimport) errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1218
__declspec(dllimport) int __cdecl system(const char * _Command); 





#pragma warning (push)
#pragma warning (disable:6540)


__declspec(dllimport) int __cdecl _putenv(const char * _EnvString); 




__declspec(dllimport) errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 




#pragma warning (pop)

__declspec(dllimport) errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1254
__declspec(dllimport) void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1262
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) 
__declspec(dllimport) void __cdecl _seterrormode(int _Mode); 



__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) 
__declspec(dllimport) void __cdecl _beep(unsigned _Frequency, unsigned _Duration); 




__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) 
__declspec(dllimport) void __cdecl _sleep(unsigned long _Duration); 
#line 1296
#pragma warning(push)
#pragma warning(disable: 4141)

__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ecvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1307
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1315
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _gcvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1322
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _itoa. See online help for details.")) 
__declspec(dllimport) char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); 
#line 1329
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ltoa. See online help for details.")) 
__declspec(dllimport) char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1337
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _swab. See online help for details.")) 
__declspec(dllimport) void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1344
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ultoa. See online help for details." "")) 
__declspec(dllimport) char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1353
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putenv. See online help for details" ".")) 
__declspec(dllimport) int __cdecl putenv(const char * _EnvString); 



#pragma warning(pop)

_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1367
#endif /* _INC_STDLIB */
#line 12 "E:\\Program Files\\MATLAB\\R2018b\\extern\\include\\tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
#line 1366 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
__pragma( pack ( pop )) 
#line 71 "E:\\Program Files\\MATLAB\\R2018b\\extern\\include\\tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
#line 79
typedef unsigned __int64 ulonglong_T; 
#line 202
typedef char int8_T; 
#line 217
typedef unsigned char uint8_T; 
#line 233
typedef short int16_T; 
#line 249
typedef unsigned short uint16_T; 
#line 265
typedef int int32_T; 
#line 281
typedef unsigned uint32_T; 
#line 342
typedef float real32_T; 
#line 356
typedef double real64_T; 
#line 400
typedef __int64 int64_T; 
#line 440
typedef unsigned __int64 uint64_T; 
#line 496
typedef real64_T real_T; 
#line 505
typedef real_T time_T; 
#line 517
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
#line 553
typedef 
#line 551
struct { 
real32_T re, im; 
} creal32_T; 
#line 562
typedef 
#line 560
struct { 
real64_T re, im; 
} creal64_T; 
#line 571
typedef 
#line 569
struct { 
real_T re, im; 
} creal_T; 
#line 582
typedef 
#line 580
struct { 
int8_T re, im; 
} cint8_T; 
#line 591
typedef 
#line 589
struct { 
uint8_T re, im; 
} cuint8_T; 
#line 600
typedef 
#line 598
struct { 
int16_T re, im; 
} cint16_T; 
#line 609
typedef 
#line 607
struct { 
uint16_T re, im; 
} cuint16_T; 
#line 618
typedef 
#line 616
struct { 
int32_T re, im; 
} cint32_T; 
#line 627
typedef 
#line 625
struct { 
uint32_T re, im; 
} cuint32_T; 
#line 636
typedef 
#line 634
struct { 
int64_T re, im; 
} cint64_T; 
#line 645
typedef 
#line 643
struct { 
uint64_T re, im; 
} cuint64_T; 
#line 719
__forceinline uint64_T double_to_uint64_helper(double d) { 
union double_to_uint64_union_type { 
double dd; 
uint64_T i64; 
} di; 
di.dd = d; 
return (((di.i64) & (0xfffffffffffffi64)) | (0x10000000000000i64)) << 11; 
} 
#line 754
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
#line 794
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 


typedef int SLIndex; 
typedef int SLSize; 
#line 823
typedef wchar_t CHAR16_T; 





#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
#line 64 "E:\\Program Files\\MATLAB\\R2018b\\extern\\include\\matrix.h"
#ifndef __RELEASE_VERSION_DETECTOR__
#define __RELEASE_VERSION_DETECTOR__
#line 169
#endif /* __RELEASE_VERSION_DETECTOR__ */
#ifndef MXHBB__MATRIX__VERSION_DEFS__
#define MXHBB__MATRIX__VERSION_DEFS__
#line 198
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
#line 677
#endif /* MXHBB__MATRIX__VERSION_DEFS__ */
#ifndef MATHWORKS_MATRIX_DETAIL_PUBLISHED_FWD_DECLS_HPP
#define MATHWORKS_MATRIX_DETAIL_PUBLISHED_FWD_DECLS_HPP
#line 687
typedef struct mxArray_tag mxArray; 




typedef void (*mxFunctionPtr)(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]); 
#line 702
typedef bool mxLogical; 




typedef CHAR16_T mxChar; 
#line 737
typedef 
#line 712
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
#line 805
extern void *mxMalloc(size_t n); 
#line 811
extern void *mxCalloc(size_t n, size_t size); 
#line 818
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
#line 871
extern mxArray *mxGetFieldByNumber_730(const mxArray * pa, mwIndex i, int fieldnum); 




extern mxArray *mxGetCell_730(const mxArray * pa, mwIndex i); 




extern mxClassID mxGetClassID(const mxArray * pa); 




extern void *mxGetData(const mxArray * pa); 
#line 892
extern void mxSetData(mxArray * pa, void * newdata); 
#line 900
extern bool mxIsNumeric(const mxArray * pa); 




extern bool mxIsCell(const mxArray * pa); 




extern bool mxIsLogical(const mxArray * pa); 




extern bool mxIsScalar(const mxArray * pa); 




extern bool mxIsChar(const mxArray * pa); 




extern bool mxIsStruct(const mxArray * pa); 




extern bool mxIsOpaque(const mxArray * pa); 




extern bool mxIsFunctionHandle(const mxArray * pa); 
#line 942
extern bool mxIsObject(const mxArray * pa); 
#line 948
extern void *mxGetImagData(const mxArray * pa); 
#line 955
extern void mxSetImagData(mxArray * pa, void * newdata); 
#line 963
extern bool mxIsComplex(const mxArray * pa); 




extern bool mxIsSparse(const mxArray * pa); 
#line 974
extern bool mxIsDouble(const mxArray * pa); 
#line 980
extern bool mxIsSingle(const mxArray * pa); 
#line 986
extern bool mxIsInt8(const mxArray * pa); 
#line 992
extern bool mxIsUint8(const mxArray * pa); 
#line 998
extern bool mxIsInt16(const mxArray * pa); 
#line 1004
extern bool mxIsUint16(const mxArray * pa); 
#line 1010
extern bool mxIsInt32(const mxArray * pa); 
#line 1016
extern bool mxIsUint32(const mxArray * pa); 
#line 1022
extern bool mxIsInt64(const mxArray * pa); 
#line 1028
extern bool mxIsUint64(const mxArray * pa); 




extern size_t mxGetNumberOfElements(const mxArray * pa); 
#line 1041
extern double *mxGetPi(const mxArray * pa); 
#line 1047
extern void mxSetPi(mxArray * pa, double * pi); 
#line 1055
extern mxChar *mxGetChars(const mxArray * pa); 
#line 1063
extern int mxGetUserBits(const mxArray * pa); 
#line 1071
extern void mxSetUserBits(mxArray * pa, int value); 
#line 1077
extern double mxGetScalar(const mxArray * pa); 
#line 1090
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
#line 1137
extern mwIndex mxCalcSingleSubscript_730(const mxArray * pa, mwSize nsubs, const mwIndex * subs); 
#line 1145
extern int mxGetNumberOfFields(const mxArray * pa); 
#line 1151
extern void mxSetCell_730(mxArray * pa, mwIndex i, mxArray * value); 
#line 1157
extern void mxSetFieldByNumber_730(mxArray * pa, mwIndex i, int fieldnum, mxArray * value); 
#line 1165
extern mxArray *mxGetField_730(const mxArray * pa, mwIndex i, const char * fieldname); 
#line 1172
extern void mxSetField_730(mxArray * pa, mwIndex i, const char * fieldname, mxArray * value); 
#line 1182
extern mxArray *mxGetProperty_730(const mxArray * pa, const mwIndex i, const char * propname); 
#line 1190
extern void mxSetProperty_730(mxArray * pa, mwIndex i, const char * propname, const mxArray * value); 




extern const char *mxGetClassName(const mxArray * pa); 




extern bool mxIsClass(const mxArray * pa, const char * name); 
#line 1207
extern mxArray *mxCreateNumericMatrix_730(mwSize m, mwSize n, mxClassID classid, mxComplexity flag); 
#line 1214
extern mxArray *mxCreateUninitNumericMatrix(size_t m, size_t n, mxClassID classid, mxComplexity flag); 
#line 1221
extern mxArray *mxCreateUninitNumericArray(size_t ndim, size_t * dims, mxClassID classid, mxComplexity flag); 




extern void mxSetN_730(mxArray * pa, mwSize n); 
#line 1233
extern int mxSetDimensions_730(mxArray * pa, const mwSize * pdims, mwSize ndims); 




extern void mxDestroyArray(mxArray * pa); 
#line 1247
extern mxArray *mxCreateNumericArray_730(mwSize ndim, const mwSize * dims, mxClassID classid, mxComplexity flag); 
#line 1253
extern mxArray *mxCreateCharArray_730(mwSize ndim, const mwSize * dims); 
#line 1260
extern mxArray *mxCreateDoubleMatrix_730(mwSize m, mwSize n, mxComplexity flag); 




extern mxLogical *mxGetLogicals(const mxArray * pa); 




extern mxArray *mxCreateLogicalArray_730(mwSize ndim, const mwSize * dims); 
#line 1276
extern mxArray *mxCreateLogicalMatrix_730(mwSize m, mwSize n); 




extern mxArray *mxCreateLogicalScalar(bool value); 




extern bool mxIsLogicalScalar(const mxArray * pa); 




extern bool mxIsLogicalScalarTrue(const mxArray * pa); 
#line 1297
extern mxArray *mxCreateDoubleScalar(double value); 
#line 1318
extern mxArray *mxCreateSparse_730(mwSize m, mwSize n, mwSize nzmax, mxComplexity flag); 
#line 1324
extern mxArray *mxCreateSparseLogicalMatrix_730(mwSize m, mwSize n, mwSize nzmax); 
#line 1332
extern void mxGetNChars_730(const mxArray * pa, char * buf, mwSize nChars); 
#line 1343
extern int mxGetString_730(const mxArray * pa, char * buf, mwSize buflen); 
#line 1350
extern char *mxArrayToString(const mxArray * pa); 
#line 1359
extern char *mxArrayToUTF8String(const mxArray * pa); 
#line 1366
extern mxArray *mxCreateStringFromNChars_730(const char * str, mwSize n); 
#line 1372
extern mxArray *mxCreateString(const char * str); 




extern mxArray *mxCreateCharMatrixFromStrings_730(mwSize m, const char ** str); 
#line 1383
extern mxArray *mxCreateCellMatrix_730(mwSize m, mwSize n); 
#line 1389
extern mxArray *mxCreateCellArray_730(mwSize ndim, const mwSize * dims); 
#line 1396
extern mxArray *mxCreateStructMatrix_730(mwSize m, mwSize n, int nfields, const char ** fieldnames); 
#line 1403
extern mxArray *mxCreateStructArray_730(mwSize ndim, const mwSize * dims, int nfields, const char ** fieldnames); 




extern mxArray *mxDuplicateArray(const mxArray * in); 
#line 1415
extern int mxSetClassName(mxArray * pa, const char * classname); 
#line 1421
extern int mxAddField(mxArray * pa, const char * fieldname); 
#line 1427
extern void mxRemoveField(mxArray * pa, int field); 




extern double mxGetEps(void); 




extern double mxGetInf(void); 




extern double mxGetNaN(void); 




extern bool mxIsFinite(double x); 
#line 1453
extern bool mxIsInf(double x); 




extern bool mxIsNaN(double x); 
#line 1465
extern mxArray *mxCreateSharedDataCopy(const mxArray * pa); 
extern mxArray *mxCreateUninitDoubleMatrix(int cmplx_flag, size_t m, size_t n); 
extern mxArray *mxFastZeros(int cmplx_flag, int m, int n); 
extern mxArray *mxUnreference(mxArray * pa); 
extern int mxUnshareArray(mxArray * pa, int level); 
extern mxArray *mxGetPropertyShared(const mxArray * pa, size_t i, const char * propname); 
extern void mxSetPropertyShared(mxArray * pa, size_t i, const char * propname, const mxArray * value); 
#line 1483
#ifndef mxassert_h
#define mxassert_h
#line 1530
#endif /* mxassert_h */

#endif /* matrix_h */



#ifndef __MX_API_VER_HPP__
#define __MX_API_VER_HPP__
#line 1575
#endif /* __MX_API_VER_HPP__ */
#line 49 "E:\\Program Files\\MATLAB\\R2018b\\extern\\include\\mex.h"
typedef void (*mex_exit_fn)(void); 
#line 58
typedef 
#line 54
struct mexGlobalTableEntry_Tag { 

const char *name; 
mxArray **variable; 
} mexGlobalTableEntry, *mexGlobalTable; 
#line 73
typedef 
#line 67
struct mexFunctionTableEntry_tag { 
const char *name; 
mxFunctionPtr f; 
int nargin; 
int nargout; 
struct _mexLocalFunctionTable *local_function_table; 
} mexFunctionTableEntry, *mexFunctionTable; 




typedef 
#line 75
struct _mexLocalFunctionTable { 
size_t length; 
mexFunctionTable entries; 
} _mexLocalFunctionTable, *mexLocalFunctionTable; 




typedef 
#line 80
struct { 
void (*initialize)(void); 
void (*terminate)(void); 
} _mexInitTermTableEntry, *mexInitTermTableEntry; 



typedef void (*fn_clean_up_after_error)(void); 
typedef const char *(*fn_simple_function_to_string)(mxFunctionPtr f); 

typedef mexLocalFunctionTable (*fn_mex_get_local_function_table)(void); 
typedef mexLocalFunctionTable (*fn_mex_set_local_function_table)(mexLocalFunctionTable); 
#line 150
extern void mexErrMsgTxt(const char * error_msg); 
#line 159
extern void mexErrMsgIdAndTxt(const char * identifier, const char * err_msg, ...); 
#line 170
extern void mexWarnMsgTxt(const char * warn_msg); 
#line 181
extern void mexWarnMsgIdAndTxt(const char * identifier, const char * warn_msg, ...); 
#line 191
extern int mexPrintf(const char * fmt, ...); 
#line 206
extern void mexMakeArrayPersistent(mxArray * pa); 
#line 216
extern void mexMakeMemoryPersistent(void * ptr); 
#line 222
extern int mexCallMATLABWithObject(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
#line 234
extern mxArray *mexCallMATLABWithTrapWithObject(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
#line 247
extern void mexPrintAssertion(const char * test, const char * fname, int linenum, const char * message); 
#line 257
extern bool mexIsGlobal(const mxArray * pA); 
#line 264
extern int mexPutVariable(const char * workspace, const char * name, const mxArray * parray); 
#line 275
extern const mxArray *mexGetVariablePtr(const char * workspace, const char * name); 
#line 285
extern mxArray *mexGetVariableWithObject(const char * workspace, const char * name); 
#line 294
extern void mexLock(void); 
#line 300
extern void mexUnlock(void); 
#line 306
extern bool mexIsLocked(void); 
#line 312
extern const char *mexFunctionName(void); 
#line 319
extern int mexEvalString(const char * str); 
#line 328
extern mxArray *mexEvalStringWithTrap(const char * str); 
#line 336
extern int mexAtExit(mex_exit_fn exit_fcn); 
#line 356
extern void mexFunction(int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[]); 
#line 363
#endif /* mex_h */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#ifndef _INC_STRING
#define _INC_STRING
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\errno.h"
#ifndef _INC_ERRNO
#define _INC_ERRNO



__pragma( pack ( push, 8 )) 




__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 

__declspec(dllimport) unsigned long *__cdecl __doserrno(void); 


__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 131
#endif /* _INC_ERRNO */
#line 130
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
__pragma( pack ( push, 8 )) 




void *__cdecl memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 26
int __cdecl memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 40
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 47
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 60
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 67
char *__cdecl strchr(const char * _Str, int _Val); 
#line 73
char *__cdecl strrchr(const char * _Str, int _Ch); 
#line 79
char *__cdecl strstr(const char * _Str, const char * _SubStr); 
#line 86
wchar_t *__cdecl wcschr(const wchar_t * _Str, wchar_t _Ch); 
#line 92
wchar_t *__cdecl wcsrchr(const wchar_t * _Str, wchar_t _Ch); 
#line 99
wchar_t *__cdecl wcsstr(const wchar_t * _Str, const wchar_t * _SubStr); 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
#ifndef _CRT_MEMCPY_S_INLINE
#define _CRT_MEMCPY_S_INLINE static __inline
#endif /* _CRT_MEMCPY_S_INLINE */
#line 106 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
__pragma( pack ( push, 8 )) 
#line 35
static __inline errno_t __cdecl memcpy_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ { 
if (_SourceSize == (0)) 
{ 
return 0; 
}  } 

{ int _Expr_val = !(!(_Destination != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; { 
if ((_Source == (void *)0) || (_DestinationSize < _SourceSize)) 
{ 
memset(_Destination, 0, _DestinationSize); 

{ int _Expr_val = !(!(_Source != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); { if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } } ; 


return 22; 
}  
#pragma warning(suppress:4996)
} memcpy(_Destination, _Source, _SourceSize); 
return 0; 
} 


static __inline errno_t __cdecl memmove_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ { 
if (_SourceSize == (0)) 
{ 
return 0; 
}  } 

{ int _Expr_val = !(!(_Destination != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_Source != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); { if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } } ; 

#pragma warning(suppress:4996)
memmove(_Destination, _Source, _SourceSize); 
return 0; 
} 
#line 89
__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
__pragma( pack ( push, 8 )) 




__declspec(dllimport) int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 31
__declspec(dllimport) int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 78
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memccpy. See online help for detail" "s.")) 
__declspec(dllimport) void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 86
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memicmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 114
__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__pragma( pack ( push, 8 )) 
#line 28
__declspec(dllimport) errno_t __cdecl wcscat_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source); 
#line 35
__declspec(dllimport) errno_t __cdecl wcscpy_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source); 
#line 42
__declspec(dllimport) errno_t __cdecl wcsncat_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source, rsize_t _MaxCount); 
#line 50
__declspec(dllimport) errno_t __cdecl wcsncpy_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source, rsize_t _MaxCount); 
#line 58
__declspec(dllimport) wchar_t *__cdecl wcstok_s(wchar_t * _String, const wchar_t * _Delimiter, wchar_t ** _Context); 
#line 79
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wcsdup(const wchar_t * _String); 
#line 97
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) wchar_t *__cdecl wcscat(wchar_t * _Destination, const wchar_t * _Source); 




#pragma warning(pop)



__declspec(dllimport) int __cdecl wcscmp(const wchar_t * _String1, const wchar_t * _String2); 
#line 120
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(dllimport) wchar_t *__cdecl wcscpy(wchar_t * _Destination, const wchar_t * _Source); 




#pragma warning(pop)


__declspec(dllimport) size_t __cdecl wcscspn(const wchar_t * _String, const wchar_t * _Control); 
#line 137
__declspec(dllimport) size_t __cdecl wcslen(const wchar_t * _String); 
#line 150
__declspec(dllimport) size_t __cdecl wcsnlen(const wchar_t * _Source, size_t _MaxCount); 
#line 166
static __inline size_t __cdecl wcsnlen_s(const wchar_t *
_Source, size_t 
_MaxCount) 

{ 
return (_Source == (0)) ? (0) : wcsnlen(_Source, _MaxCount); 
} 
#line 183
__declspec(dllimport) wchar_t *__cdecl wcsncat(wchar_t * _Destination, const wchar_t * _Source, size_t _Count); 
#line 192
__declspec(dllimport) int __cdecl wcsncmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 205
__declspec(dllimport) wchar_t *__cdecl wcsncpy(wchar_t * _Destination, const wchar_t * _Source, size_t _Count); 
#line 214
__declspec(dllimport) wchar_t *__cdecl wcspbrk(const wchar_t * _String, const wchar_t * _Control); 
#line 220
__declspec(dllimport) size_t __cdecl wcsspn(const wchar_t * _String, const wchar_t * _Control); 
#line 226
__declspec(dllimport) wchar_t *__cdecl wcstok(wchar_t * _String, const wchar_t * _Delimiter, wchar_t ** _Context); 
#line 243
#pragma warning(push)
#pragma warning(disable: 4141 4996)
#pragma warning(disable: 28719 28726 28727)

static __inline wchar_t *__cdecl _wcstok(wchar_t *const 
_String, const wchar_t *const 
_Delimiter) 

{ 
return wcstok(_String, _Delimiter, 0); 
} 
#line 270
#pragma warning(pop)
#line 278
__declspec(dllimport) wchar_t *__cdecl _wcserror(int _ErrorNumber); 




__declspec(dllimport) errno_t __cdecl _wcserror_s(wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 298
__declspec(dllimport) wchar_t *__cdecl __wcserror(const wchar_t * _String); 



__declspec(dllimport) errno_t __cdecl __wcserror_s(wchar_t * _Buffer, size_t _SizeInWords, const wchar_t * _ErrorMessage); 
#line 314
__declspec(dllimport) int __cdecl _wcsicmp(const wchar_t * _String1, const wchar_t * _String2); 




__declspec(dllimport) int __cdecl _wcsicmp_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 325
__declspec(dllimport) int __cdecl _wcsnicmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 331
__declspec(dllimport) int __cdecl _wcsnicmp_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 338
__declspec(dllimport) errno_t __cdecl _wcsnset_s(wchar_t * _Destination, size_t _SizeInWords, wchar_t _Value, size_t _MaxCount); 
#line 352
__declspec(dllimport) wchar_t *__cdecl _wcsnset(wchar_t * _String, wchar_t _Value, size_t _MaxCount); 
#line 360
__declspec(dllimport) wchar_t *__cdecl _wcsrev(wchar_t * _String); 



__declspec(dllimport) errno_t __cdecl _wcsset_s(wchar_t * _Destination, size_t _SizeInWords, wchar_t _Value); 
#line 376
__declspec(dllimport) wchar_t *__cdecl _wcsset(wchar_t * _String, wchar_t _Value); 
#line 383
__declspec(dllimport) errno_t __cdecl _wcslwr_s(wchar_t * _String, size_t _SizeInWords); 
#line 393
__declspec(dllimport) wchar_t *__cdecl _wcslwr(wchar_t * _String); 
#line 399
__declspec(dllimport) errno_t __cdecl _wcslwr_s_l(wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 411
__declspec(dllimport) wchar_t *__cdecl _wcslwr_l(wchar_t * _String, _locale_t _Locale); 
#line 419
__declspec(dllimport) errno_t __cdecl _wcsupr_s(wchar_t * _String, size_t _Size); 
#line 429
__declspec(dllimport) wchar_t *__cdecl _wcsupr(wchar_t * _String); 
#line 435
__declspec(dllimport) errno_t __cdecl _wcsupr_s_l(wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 447
__declspec(dllimport) wchar_t *__cdecl _wcsupr_l(wchar_t * _String, _locale_t _Locale); 
#line 456
__declspec(dllimport) size_t __cdecl wcsxfrm(wchar_t * _Destination, const wchar_t * _Source, size_t _MaxCount); 
#line 464
__declspec(dllimport) size_t __cdecl _wcsxfrm_l(wchar_t * _Destination, const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 472
__declspec(dllimport) int __cdecl wcscoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 478
__declspec(dllimport) int __cdecl _wcscoll_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 485
__declspec(dllimport) int __cdecl _wcsicoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 491
__declspec(dllimport) int __cdecl _wcsicoll_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 498
__declspec(dllimport) int __cdecl _wcsncoll(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 505
__declspec(dllimport) int __cdecl _wcsncoll_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 513
__declspec(dllimport) int __cdecl _wcsnicoll(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 520
__declspec(dllimport) int __cdecl _wcsnicoll_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 579
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsdup. See online help for details" ".")) 
__declspec(dllimport) wchar_t *__cdecl wcsdup(const wchar_t * _String); 
#line 591
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl wcsicmp(const wchar_t * _String1, const wchar_t * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnicmp. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl wcsnicmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 604
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnset. See online help for detail" "s.")) 

__declspec(dllimport) wchar_t *__cdecl wcsnset(wchar_t * _String, wchar_t _Value, size_t _MaxCount); 
#line 612
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsrev. See online help for details" ".")) 

__declspec(dllimport) wchar_t *__cdecl wcsrev(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsset. See online help for details" ".")) 

__declspec(dllimport) wchar_t *__cdecl wcsset(wchar_t * _String, wchar_t _Value); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcslwr. See online help for details" ".")) 

__declspec(dllimport) wchar_t *__cdecl wcslwr(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsupr. See online help for details" ".")) 

__declspec(dllimport) wchar_t *__cdecl wcsupr(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicoll. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl wcsicoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 647
__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
__pragma( pack ( push, 8 )) 
#line 28
__declspec(dllimport) errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 35
__declspec(dllimport) errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 42
__declspec(dllimport) errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 48
__declspec(dllimport) errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 56
__declspec(dllimport) errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 64
__declspec(dllimport) char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 72
__declspec(dllimport) void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 87
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcat(char * _Destination, const char * _Source); 




#pragma warning(pop)




int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
__declspec(dllimport) int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
__declspec(dllimport) int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
__declspec(dllimport) int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 130
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcpy(char * _Destination, const char * _Source); 




#pragma warning(pop)


__declspec(dllimport) size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 152
__declspec(dllimport) __declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 163
__declspec(dllimport) char *__cdecl _strerror(const char * _ErrorMessage); 




__declspec(dllimport) errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 182
__declspec(dllimport) char *__cdecl strerror(int _ErrorMessage); 
#line 193
__declspec(dllimport) int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 199
__declspec(dllimport) int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 205
__declspec(dllimport) int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 212
__declspec(dllimport) int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 219
size_t __cdecl strlen(const char * _Str); 




__declspec(dllimport) errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 234
__declspec(dllimport) char *__cdecl _strlwr(char * _String); 
#line 240
__declspec(dllimport) errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 252
__declspec(dllimport) char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 266
__declspec(dllimport) char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 275
__declspec(dllimport) int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 282
__declspec(dllimport) int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 289
__declspec(dllimport) int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 297
__declspec(dllimport) int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 304
__declspec(dllimport) int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 312
__declspec(dllimport) int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 319
__declspec(dllimport) int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 326
__declspec(dllimport) size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 338
__declspec(dllimport) char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 355
__declspec(dllimport) size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 371
static __inline size_t __cdecl strnlen_s(const char *
_String, size_t 
_MaxCount) 

{ 
return (_String == (0)) ? (0) : strnlen(_String, _MaxCount); 
} 




__declspec(dllimport) errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 396
__declspec(dllimport) char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 405
__declspec(dllimport) char *__cdecl strpbrk(const char * _Str, const char * _Control); 




__declspec(dllimport) char *__cdecl _strrev(char * _Str); 




__declspec(dllimport) errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 427
char *__cdecl _strset(char * _Destination, int _Value); 
#line 434
__declspec(dllimport) size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 440
__declspec(dllimport) char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 446
__declspec(dllimport) errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 456
__declspec(dllimport) char *__cdecl _strupr(char * _String); 
#line 462
__declspec(dllimport) errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 474
__declspec(dllimport) char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 483
__declspec(dllimport) size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 491
__declspec(dllimport) size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 535
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strdup. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strdup(const char * _String); 
#line 542
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strcmpi. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl strcmpi(const char * _String1, const char * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl stricmp(const char * _String1, const char * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strlwr. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strlwr(char * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnicmp. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 566
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnset. See online help for detail" "s.")) 
__declspec(dllimport) char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 573
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strrev. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strrev(char * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strset. See online help for details" ".")) char *__cdecl 
strset(char * _String, int _Value); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strupr. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strupr(char * _String); 
#line 595
#endif /* _INC_STRING */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
#ifndef _INC_MATH
#define _INC_MATH





#pragma warning(push)
#pragma warning(disable:4738)
#pragma warning(disable:4820)
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__pragma( pack ( push, 8 )) 
#line 25
struct _exception { 

int type; 
char *name; 
double arg1; 
double arg2; 
double retval; 
}; 



#ifndef _COMPLEX_DEFINED
#define _COMPLEX_DEFINED

struct _complex { 

double x, y; 
}; 





#endif /* _COMPLEX_DEFINED */
#line 61
typedef float float_t; 
typedef double double_t; 
#line 80
extern const double _HUGE; 





#ifndef _HUGE_ENUF
#define _HUGE_ENUF 1e+300
#endif /* _HUGE_ENUF */
#line 97
#define _FINITE (-1)
#define _INFCODE 1
#define _NANCODE 2

#define FP_INFINITE _INFCODE
#define FP_NAN _NANCODE
#define FP_NORMAL _FINITE
#line 171
void __cdecl _fperrraise(int _Except); 

__declspec(dllimport) short __cdecl _dclass(double _X); 
__declspec(dllimport) short __cdecl _ldclass(long double _X); 
__declspec(dllimport) short __cdecl _fdclass(float _X); 

__declspec(dllimport) int __cdecl _dsign(double _X); 
__declspec(dllimport) int __cdecl _ldsign(long double _X); 
__declspec(dllimport) int __cdecl _fdsign(float _X); 

__declspec(dllimport) int __cdecl _dpcomp(double _X, double _Y); 
__declspec(dllimport) int __cdecl _ldpcomp(long double _X, long double _Y); 
__declspec(dllimport) int __cdecl _fdpcomp(float _X, float _Y); 

__declspec(dllimport) short __cdecl _dtest(double * _Px); 
__declspec(dllimport) short __cdecl _ldtest(long double * _Px); 
__declspec(dllimport) short __cdecl _fdtest(float * _Px); 

__declspec(dllimport) short __cdecl _d_int(double * _Px, short _Xexp); 
__declspec(dllimport) short __cdecl _ld_int(long double * _Px, short _Xexp); 
__declspec(dllimport) short __cdecl _fd_int(float * _Px, short _Xexp); 

__declspec(dllimport) short __cdecl _dscale(double * _Px, long _Lexp); 
__declspec(dllimport) short __cdecl _ldscale(long double * _Px, long _Lexp); 
__declspec(dllimport) short __cdecl _fdscale(float * _Px, long _Lexp); 

__declspec(dllimport) short __cdecl _dunscale(short * _Pex, double * _Px); 
__declspec(dllimport) short __cdecl _ldunscale(short * _Pex, long double * _Px); 
__declspec(dllimport) short __cdecl _fdunscale(short * _Pex, float * _Px); 

__declspec(dllimport) short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
__declspec(dllimport) short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
__declspec(dllimport) short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 

__declspec(dllimport) short __cdecl _dnorm(unsigned short * _Ps); 
__declspec(dllimport) short __cdecl _fdnorm(unsigned short * _Ps); 

__declspec(dllimport) double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
__declspec(dllimport) long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
__declspec(dllimport) float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 

__declspec(dllimport) double __cdecl _dlog(double _X, int _Baseflag); 
__declspec(dllimport) long double __cdecl _ldlog(long double _X, int _Baseflag); 
__declspec(dllimport) float __cdecl _fdlog(float _X, int _Baseflag); 

__declspec(dllimport) double __cdecl _dsin(double _X, unsigned _Qoff); 
__declspec(dllimport) long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
__declspec(dllimport) float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 225
typedef 
#line 222
union { 
unsigned short _Sh[4]; 
double _Val; 
} _double_val; 
#line 232
typedef 
#line 229
union { 
unsigned short _Sh[2]; 
float _Val; 
} _float_val; 
#line 239
typedef 
#line 236
union { 
unsigned short _Sh[4]; 
long double _Val; 
} _ldouble_val; 
#line 247
typedef 
#line 242
union { 
unsigned short _Word[4]; 
float _Float; 
double _Double; 
long double _Long_double; 
} _float_const; 

extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 

extern const _float_const _Eps_C, _Rteps_C; 
extern const _float_const _FEps_C, _FRteps_C; 
extern const _float_const _LEps_C, _LRteps_C; 

extern const double _Zero_C, _Xbig_C; 
extern const float _FZero_C, _FXbig_C; 
extern const long double _LZero_C, _LXbig_C; 







#define _CLASS_ARG(_Val) __pragma(warning(suppress:6334))(sizeof ((_Val) + (float)0) == sizeof (float) ? 'f' : sizeof ((_Val) + (double)0) == sizeof (double) ? 'd' : 'l')
#define _CLASSIFY(_Val,_FFunc,_DFunc,_LDFunc) (_CLASS_ARG(_Val) == 'f' ? _FFunc((float)(_Val)) : _CLASS_ARG(_Val) == 'd' ? _DFunc((double)(_Val)) : _LDFunc((long double)(_Val)))


#define fpclassify(_Val) (_CLASSIFY(_Val, _fdclass, _dclass, _ldclass))
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isfinite(_Val) __builtin_mw_isfinite(_Val)
#else
#line 274
#define isfinite(_Val) (fpclassify(_Val) <= 0)
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isinf(_Val) __builtin_mw_isinf(_Val)
#else
#line 275
#define isinf(_Val) (fpclassify(_Val) == FP_INFINITE)
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isnan(_Val) __builtin_mw_isnan(_Val)
#else
#line 276
#define isnan(_Val) (fpclassify(_Val) == FP_NAN)
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isnormal(_Val) __builtin_mw_isnormal(_Val)
#else
#line 277
#define isnormal(_Val) (fpclassify(_Val) == FP_NORMAL)
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define signbit(_Val) __builtin_mw_signbit(_Val)
#else
#line 278
#define signbit(_Val) (_CLASSIFY(_Val, _fdsign, _dsign, _ldsign))
#endif
#line 466
int __cdecl abs(int _X); 
long __cdecl labs(long _X); 
__int64 __cdecl llabs(__int64 _X); 

double __cdecl acos(double _X); 
double __cdecl asin(double _X); 
double __cdecl atan(double _X); 
double __cdecl atan2(double _Y, double _X); 

double __cdecl cos(double _X); 
double __cdecl cosh(double _X); 
double __cdecl exp(double _X); 
double __cdecl fabs(double _X); 
double __cdecl fmod(double _X, double _Y); 
double __cdecl log(double _X); 
double __cdecl log10(double _X); 
double __cdecl pow(double _X, double _Y); 
double __cdecl sin(double _X); 
double __cdecl sinh(double _X); 
double __cdecl sqrt(double _X); 
double __cdecl tan(double _X); 
double __cdecl tanh(double _X); 

__declspec(dllimport) double __cdecl acosh(double _X); 
__declspec(dllimport) double __cdecl asinh(double _X); 
__declspec(dllimport) double __cdecl atanh(double _X); 
__declspec(dllimport) double __cdecl atof(const char * _String); 
__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) double __cdecl _cabs(struct _complex _Complex_value); 
__declspec(dllimport) double __cdecl cbrt(double _X); 
__declspec(dllimport) double __cdecl ceil(double _X); 
__declspec(dllimport) double __cdecl _chgsign(double _X); 
__declspec(dllimport) double __cdecl copysign(double _Number, double _Sign); 
__declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); 
__declspec(dllimport) double __cdecl erf(double _X); 
__declspec(dllimport) double __cdecl erfc(double _X); 
__declspec(dllimport) double __cdecl exp2(double _X); 
__declspec(dllimport) double __cdecl expm1(double _X); 
__declspec(dllimport) double __cdecl fdim(double _X, double _Y); 
__declspec(dllimport) double __cdecl floor(double _X); 
__declspec(dllimport) double __cdecl fma(double _X, double _Y, double _Z); 
__declspec(dllimport) double __cdecl fmax(double _X, double _Y); 
__declspec(dllimport) double __cdecl fmin(double _X, double _Y); 
__declspec(dllimport) double __cdecl frexp(double _X, int * _Y); 
__declspec(dllimport) double __cdecl hypot(double _X, double _Y); 
__declspec(dllimport) double __cdecl _hypot(double _X, double _Y); 
__declspec(dllimport) int __cdecl ilogb(double _X); 
__declspec(dllimport) double __cdecl ldexp(double _X, int _Y); 
__declspec(dllimport) double __cdecl lgamma(double _X); 
__declspec(dllimport) __int64 __cdecl llrint(double _X); 
__declspec(dllimport) __int64 __cdecl llround(double _X); 
__declspec(dllimport) double __cdecl log1p(double _X); 
__declspec(dllimport) double __cdecl log2(double _X); 
__declspec(dllimport) double __cdecl logb(double _X); 
__declspec(dllimport) long __cdecl lrint(double _X); 
__declspec(dllimport) long __cdecl lround(double _X); 

int __cdecl _matherr(struct _exception * _Except); 

__declspec(dllimport) double __cdecl modf(double _X, double * _Y); 
__declspec(dllimport) double __cdecl nan(const char * _X); 
__declspec(dllimport) double __cdecl nearbyint(double _X); 
__declspec(dllimport) double __cdecl nextafter(double _X, double _Y); 
__declspec(dllimport) double __cdecl nexttoward(double _X, long double _Y); 
__declspec(dllimport) double __cdecl remainder(double _X, double _Y); 
__declspec(dllimport) double __cdecl remquo(double _X, double _Y, int * _Z); 
__declspec(dllimport) double __cdecl rint(double _X); 
__declspec(dllimport) double __cdecl round(double _X); 
__declspec(dllimport) double __cdecl scalbln(double _X, long _Y); 
__declspec(dllimport) double __cdecl scalbn(double _X, int _Y); 
__declspec(dllimport) double __cdecl tgamma(double _X); 
__declspec(dllimport) double __cdecl trunc(double _X); 
__declspec(dllimport) double __cdecl _j0(double _X); 
__declspec(dllimport) double __cdecl _j1(double _X); 
__declspec(dllimport) double __cdecl _jn(int _X, double _Y); 
__declspec(dllimport) double __cdecl _y0(double _X); 
__declspec(dllimport) double __cdecl _y1(double _X); 
__declspec(dllimport) double __cdecl _yn(int _X, double _Y); 

__declspec(dllimport) float __cdecl acoshf(float _X); 
__declspec(dllimport) float __cdecl asinhf(float _X); 
__declspec(dllimport) float __cdecl atanhf(float _X); 
__declspec(dllimport) float __cdecl cbrtf(float _X); 
__declspec(dllimport) float __cdecl _chgsignf(float _X); 
__declspec(dllimport) float __cdecl copysignf(float _Number, float _Sign); 
__declspec(dllimport) float __cdecl _copysignf(float _Number, float _Sign); 
__declspec(dllimport) float __cdecl erff(float _X); 
__declspec(dllimport) float __cdecl erfcf(float _X); 
__declspec(dllimport) float __cdecl expm1f(float _X); 
__declspec(dllimport) float __cdecl exp2f(float _X); 
__declspec(dllimport) float __cdecl fdimf(float _X, float _Y); 
__declspec(dllimport) float __cdecl fmaf(float _X, float _Y, float _Z); 
__declspec(dllimport) float __cdecl fmaxf(float _X, float _Y); 
__declspec(dllimport) float __cdecl fminf(float _X, float _Y); 
__declspec(dllimport) float __cdecl _hypotf(float _X, float _Y); 
__declspec(dllimport) int __cdecl ilogbf(float _X); 
__declspec(dllimport) float __cdecl lgammaf(float _X); 
__declspec(dllimport) __int64 __cdecl llrintf(float _X); 
__declspec(dllimport) __int64 __cdecl llroundf(float _X); 
__declspec(dllimport) float __cdecl log1pf(float _X); 
__declspec(dllimport) float __cdecl log2f(float _X); 
__declspec(dllimport) float __cdecl logbf(float _X); 
__declspec(dllimport) long __cdecl lrintf(float _X); 
__declspec(dllimport) long __cdecl lroundf(float _X); 
__declspec(dllimport) float __cdecl nanf(const char * _X); 
__declspec(dllimport) float __cdecl nearbyintf(float _X); 
__declspec(dllimport) float __cdecl nextafterf(float _X, float _Y); 
__declspec(dllimport) float __cdecl nexttowardf(float _X, long double _Y); 
__declspec(dllimport) float __cdecl remainderf(float _X, float _Y); 
__declspec(dllimport) float __cdecl remquof(float _X, float _Y, int * _Z); 
__declspec(dllimport) float __cdecl rintf(float _X); 
__declspec(dllimport) float __cdecl roundf(float _X); 
__declspec(dllimport) float __cdecl scalblnf(float _X, long _Y); 
__declspec(dllimport) float __cdecl scalbnf(float _X, int _Y); 
__declspec(dllimport) float __cdecl tgammaf(float _X); 
__declspec(dllimport) float __cdecl truncf(float _X); 
#line 591
__declspec(dllimport) float __cdecl _logbf(float _X); 
__declspec(dllimport) float __cdecl _nextafterf(float _X, float _Y); 
__declspec(dllimport) int __cdecl _finitef(float _X); 
__declspec(dllimport) int __cdecl _isnanf(float _X); 
__declspec(dllimport) int __cdecl _fpclassf(float _X); 

__declspec(dllimport) int __cdecl _set_FMA3_enable(int _Flag); 
__declspec(dllimport) int __cdecl _get_FMA3_enable(void); 
#line 611
__declspec(dllimport) float __cdecl acosf(float _X); 
__declspec(dllimport) float __cdecl asinf(float _X); 
__declspec(dllimport) float __cdecl atan2f(float _Y, float _X); 
__declspec(dllimport) float __cdecl atanf(float _X); 
__declspec(dllimport) float __cdecl ceilf(float _X); 
__declspec(dllimport) float __cdecl cosf(float _X); 
__declspec(dllimport) float __cdecl coshf(float _X); 
__declspec(dllimport) float __cdecl expf(float _X); 
#line 670
__inline float __cdecl fabsf(float _X) 
{ 
return (float)fabs(_X); 
} 
#line 679
__declspec(dllimport) float __cdecl floorf(float _X); 
__declspec(dllimport) float __cdecl fmodf(float _X, float _Y); 
#line 696
__inline float __cdecl frexpf(float _X, int *_Y) 
{ 
return (float)frexp(_X, _Y); 
} 

__inline float __cdecl hypotf(float _X, float _Y) 
{ 
return _hypotf(_X, _Y); 
} 

__inline float __cdecl ldexpf(float _X, int _Y) 
{ 
return (float)ldexp(_X, _Y); 
} 



__declspec(dllimport) float __cdecl log10f(float _X); 
__declspec(dllimport) float __cdecl logf(float _X); 
__declspec(dllimport) float __cdecl modff(float _X, float * _Y); 
__declspec(dllimport) float __cdecl powf(float _X, float _Y); 
__declspec(dllimport) float __cdecl sinf(float _X); 
__declspec(dllimport) float __cdecl sinhf(float _X); 
__declspec(dllimport) float __cdecl sqrtf(float _X); 
__declspec(dllimport) float __cdecl tanf(float _X); 
__declspec(dllimport) float __cdecl tanhf(float _X); 
#line 775
__declspec(dllimport) long double __cdecl acoshl(long double _X); 

__inline long double __cdecl acosl(long double _X) 
{ 
return acos((double)_X); 
} 

__declspec(dllimport) long double __cdecl asinhl(long double _X); 

__inline long double __cdecl asinl(long double _X) 
{ 
return asin((double)_X); 
} 

__inline long double __cdecl atan2l(long double _Y, long double _X) 
{ 
return atan2((double)_Y, (double)_X); 
} 

__declspec(dllimport) long double __cdecl atanhl(long double _X); 

__inline long double __cdecl atanl(long double _X) 
{ 
return atan((double)_X); 
} 

__declspec(dllimport) long double __cdecl cbrtl(long double _X); 

__inline long double __cdecl ceill(long double _X) 
{ 
return ceil((double)_X); 
} 

__inline long double __cdecl _chgsignl(long double _X) 
{ 
return _chgsign((double)_X); 
} 

__declspec(dllimport) long double __cdecl copysignl(long double _Number, long double _Sign); 

__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
{ 
return _copysign((double)_Number, (double)_Sign); 
} 

__inline long double __cdecl coshl(long double _X) 
{ 
return cosh((double)_X); 
} 

__inline long double __cdecl cosl(long double _X) 
{ 
return cos((double)_X); 
} 

__declspec(dllimport) long double __cdecl erfl(long double _X); 
__declspec(dllimport) long double __cdecl erfcl(long double _X); 

__inline long double __cdecl expl(long double _X) 
{ 
return exp((double)_X); 
} 

__declspec(dllimport) long double __cdecl exp2l(long double _X); 
__declspec(dllimport) long double __cdecl expm1l(long double _X); 

__inline long double __cdecl fabsl(long double _X) 
{ 
return fabs((double)_X); 
} 

__declspec(dllimport) long double __cdecl fdiml(long double _X, long double _Y); 

__inline long double __cdecl floorl(long double _X) 
{ 
return floor((double)_X); 
} 

__declspec(dllimport) long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
__declspec(dllimport) long double __cdecl fmaxl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl fminl(long double _X, long double _Y); 

__inline long double __cdecl fmodl(long double _X, long double _Y) 
{ 
return fmod((double)_X, (double)_Y); 
} 

__inline long double __cdecl frexpl(long double _X, int *_Y) 
{ 
return frexp((double)_X, _Y); 
} 

__declspec(dllimport) int __cdecl ilogbl(long double _X); 

__inline long double __cdecl _hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} 

__inline long double __cdecl hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} 

__inline long double __cdecl ldexpl(long double _X, int _Y) 
{ 
return ldexp((double)_X, _Y); 
} 

__declspec(dllimport) long double __cdecl lgammal(long double _X); 
__declspec(dllimport) __int64 __cdecl llrintl(long double _X); 
__declspec(dllimport) __int64 __cdecl llroundl(long double _X); 

__inline long double __cdecl logl(long double _X) 
{ 
return log((double)_X); 
} 

__inline long double __cdecl log10l(long double _X) 
{ 
return log10((double)_X); 
} 

__declspec(dllimport) long double __cdecl log1pl(long double _X); 
__declspec(dllimport) long double __cdecl log2l(long double _X); 
__declspec(dllimport) long double __cdecl logbl(long double _X); 
__declspec(dllimport) long __cdecl lrintl(long double _X); 
__declspec(dllimport) long __cdecl lroundl(long double _X); 

__inline long double __cdecl modfl(long double _X, long double *_Y) 
{ 
double _F, _I; 
_F = modf((double)_X, &_I); 
*_Y = _I; 
return _F; 
} 

__declspec(dllimport) long double __cdecl nanl(const char * _X); 
__declspec(dllimport) long double __cdecl nearbyintl(long double _X); 
__declspec(dllimport) long double __cdecl nextafterl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl nexttowardl(long double _X, long double _Y); 

__inline long double __cdecl powl(long double _X, long double _Y) 
{ 
return pow((double)_X, (double)_Y); 
} 

__declspec(dllimport) long double __cdecl remainderl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
__declspec(dllimport) long double __cdecl rintl(long double _X); 
__declspec(dllimport) long double __cdecl roundl(long double _X); 
__declspec(dllimport) long double __cdecl scalblnl(long double _X, long _Y); 
__declspec(dllimport) long double __cdecl scalbnl(long double _X, int _Y); 

__inline long double __cdecl sinhl(long double _X) 
{ 
return sinh((double)_X); 
} 

__inline long double __cdecl sinl(long double _X) 
{ 
return sin((double)_X); 
} 

__inline long double __cdecl sqrtl(long double _X) 
{ 
return sqrt((double)_X); 
} 

__inline long double __cdecl tanhl(long double _X) 
{ 
return tanh((double)_X); 
} 

__inline long double __cdecl tanl(long double _X) 
{ 
return tan((double)_X); 
} 

__declspec(dllimport) long double __cdecl tgammal(long double _X); 
__declspec(dllimport) long double __cdecl truncl(long double _X); 
#line 976
extern double HUGE; 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j0. See online help for details.")) __declspec(dllimport) double __cdecl j0(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j1. See online help for details.")) __declspec(dllimport) double __cdecl j1(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _jn. See online help for details.")) __declspec(dllimport) double __cdecl jn(int _X, double _Y); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y0. See online help for details.")) __declspec(dllimport) double __cdecl y0(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y1. See online help for details.")) __declspec(dllimport) double __cdecl y1(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _yn. See online help for details.")) __declspec(dllimport) double __cdecl yn(int _X, double _Y); 
#line 995
#endif /* _INC_MATH */
#line 8 "c:\\users\\venqo\\desktop\\speedgoat\\applications\\trike_git\\trike_speedgoat_algo\\CANOpenSlave.h"
#ifndef _CANOPENSLAVE_DEFINES_H
#define _CANOPENSLAVE_DEFINES_H
#line 992 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
#pragma warning(pop)

__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Professional\\VC\\Tools\\MSVC\\14.16.27023\\include\\stdint.h"
typedef char int8_t; 
typedef short int16_t; 
typedef int int32_t; 
typedef __int64 int64_t; 
typedef unsigned char uint8_t; 
typedef unsigned short uint16_t; 
typedef unsigned uint32_t; 
typedef unsigned __int64 uint64_t; 

typedef char int_least8_t; 
typedef short int_least16_t; 
typedef int int_least32_t; 
typedef __int64 int_least64_t; 
typedef unsigned char uint_least8_t; 
typedef unsigned short uint_least16_t; 
typedef unsigned uint_least32_t; 
typedef unsigned __int64 uint_least64_t; 

typedef char int_fast8_t; 
typedef int int_fast16_t; 
typedef int int_fast32_t; 
typedef __int64 int_fast64_t; 
typedef unsigned char uint_fast8_t; 
typedef unsigned uint_fast16_t; 
typedef unsigned uint_fast32_t; 
typedef unsigned __int64 uint_fast64_t; 

typedef __int64 intmax_t; 
typedef unsigned __int64 uintmax_t; 
#line 3 "c:\\users\\venqo\\desktop\\speedgoat\\applications\\trike_git\\trike_speedgoat_algo\\Data_Type.h"
typedef int32_t int32_T; 
typedef int16_t int16_T; 
typedef int8_t int8_T; 
typedef uint32_t uint32_T; 
typedef uint16_t uint16_T; 
typedef uint8_t uint8_T; 
#line 20
typedef 
#line 14
union { 
struct { 
uint8_T Dummy0; 
uint8_T StatusButtons1_8; 
}; 
uint8_T Message[8]; 
} RPDO_ID182; 
#line 28
typedef 
#line 22
union { 
struct { 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} RPDO_ID282; 
#line 43
typedef 
#line 31
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
#line 55
typedef 
#line 46
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
#line 67
typedef 
#line 57
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
#line 79
typedef 
#line 71
union { 
struct { 
uint16_T AN_01; 
uint16_T AN_02; 
uint16_T AN_03; 
uint16_T AN_04; 
}; 
uint8_T Message[8]; 
} RPDO_ID1C8; 
#line 87
typedef 
#line 82
union { 
struct { 
uint32_T Encoder_Actual_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID1FF; 
#line 93
typedef 
#line 88
union { 
struct { 
uint32_T Encoder_Stored_Position; 
}; 
uint8_T Message[4]; 
} RPDO_ID2FF; 
#line 107
typedef 
#line 98
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
#line 117
typedef 
#line 111
union { 
struct { 
int32_T ActualCurrent; 
int32_T ActualVelocity; 
}; 
uint8_T Message[8]; 
} RPDO_ID18x; 
#line 128
typedef 
#line 119
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
#line 138
typedef 
#line 131
union { 
struct { 
uint8_T StatusButtons1_8; 
int16_T Lateral; 
int16_T Longitudinal; 
}; 
uint8_T Message[8]; 
} TPDO_ID185; 
#line 151
typedef 
#line 140
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
#line 151 "c:\\users\\venqo\\desktop\\speedgoat\\applications\\trike_git\\trike_speedgoat_algo\\CANOpenSlave.h"
typedef 
#line 135
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
#line 160
typedef 
#line 155
struct { 
uint32_T ovf_cnt; 
CAN_MSG msg[8]; 
uint8_T in; 
uint8_T out; 
} CAN_MSG_QUEUE; 

CAN_MSG_QUEUE can_rx_queue; 
CAN_MSG *gRxCAN; 
#line 180
typedef 
#line 172
struct { 
uint8_T Node_ID; 
uint16_T error_code; 
uint16_T Baudrate; 
uint16_T heartbeat_time; 
uint16_T heartbeat_timestamp; 
CAN_MSG heartbeat_msg; 
uint8_T error_register; 
} CANOpenSlave_CONFIG; 
#line 200
typedef 
#line 184
struct { 

uint16_T event_time; 
uint16_T event_timestamp; 
#line 198
uint8_T *pData; 
CAN_MSG CAN; 
} TPDO_CONFIG; 
#line 208
typedef 
#line 204
struct { 
uint16_T ID; 
uint8_T LEN; 
uint8_T *pData; 
} RPDO_CONFIG; 
#line 215
void CANOpenSlave_ResetCommunication(void); 
void CANOpenSlave_ProcessStackAsyncRx(uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_ProcessStack(uint32_T rxID, uint8_T rxDLC, const uint8_T * rxData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_GetRPDO(uint8_T no, uint8_T * data); 
void CANOpenHW_SendMessage(CAN_MSG * pTransmitBuf, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
void CANOpenSlave_SetTPDO(uint8_T no, const uint8_T * data); 

uint8_T Handle_SDO_Request(uint8_T * pData, uint32_T * txID, uint8_T * txDLC, uint8_T * txData); 
#endif /* _CANOPENSLAVE_DEFINES_H */
#line 31 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\slprj\\_slcc\\ib2slzC4BPSVN9k9boIaXB\\customcode_ib2slzC4BPSVN9k9boIaXB.h"
__declspec(dllexport) void customcode_ib2slzC4BPSVN9k9boIaXB_initializer(void); 
#line 38
#endif /* __customcode_ib2slzC4BPSVN9k9boIaXB_h__ */
#line 4 "C:\\Users\\Venqo\\Desktop\\SpeedGoat\\Applications\\Trike_git\\Trike_SpeedGoat_algo\\slprj\\_slcc\\ib2slzC4BPSVN9k9boIaXB\\customcode_ib2slzC4BPSVN9k9boIaXB.c"
void customcode_ib2slzC4BPSVN9k9boIaXB_initializer(void) 
{ __MW_INSTRUM_FCN_ENTER_20(); __MW_INSTRUM_NODE_416(); 
__MW_INSTRUM_NODE_417(), CANOpenSlave_ResetCommunication(); __MW_INSTRUM_NODE_418(); 


} 
