/*
 * SpeedgoatCANOpen03_private.h
 *
 * Code generation for model "SpeedgoatCANOpen03".
 *
 * Model version              : 1.108
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jun 19 11:37:23 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SpeedgoatCANOpen03_private_h_
#define RTW_HEADER_SpeedgoatCANOpen03_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */
#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_Joystick_Start_wrapper(void);
  extern void RPDOs_Joystick_Outputs_wrapper(uint8_T *ButtonsStatus,
    real32_T *LongCmd,
    real32_T *LatCmd);
  extern void RPDOs_Joystick_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void TPDOs_Speedgoat_Start_wrapper(void);
  extern void TPDOs_Speedgoat_Outputs_wrapper(const uint8_T *Byte0Ctrl,
    const uint8_T *Byte5Ctrl,
    const uint8_T *Byte6Ctrl);
  extern void TPDOs_Speedgoat_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_APT_Start_wrapper(void);
  extern void RPDOs_APT_Outputs_wrapper(uint8_T *StatusWord,
    int16_T *PhaseCurrent,
    int16_T *Speed,
    uint16_T *BusVoltage,
    int8_T *MotorTemp,
    int8_T *APTTemp,
    uint8_T *ErrStatus,
    uint8_T *PedalPos,
    uint8_T *Direction);
  extern void RPDOs_APT_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void sg_IO602_IO691_write_s(SimStruct *rts);
extern void sg_IO602_IO691_setup_s(SimStruct *rts);
extern void sg_IO602_IO691_read_s(SimStruct *rts);

#endif                                 /* RTW_HEADER_SpeedgoatCANOpen03_private_h_ */
