/*
 * SpeedgoatCANOpen2Buses1ms_private.h
 *
 * Code generation for model "SpeedgoatCANOpen2Buses1ms".
 *
 * Model version              : 1.949
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Oct 22 11:25:38 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SpeedgoatCANOpen2Buses1ms_private_h_
#define RTW_HEADER_SpeedgoatCANOpen2Buses1ms_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "SpeedgoatCANOpen2Buses1ms.h"
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

  extern void RPDOs_from_AN2CANConv_Start_wrapper(void);
  extern void RPDOs_from_AN2CANConv_Outputs_wrapper(int16_T *Channel_AN1,
    int16_T *Channel_AN2,
    int16_T *Channel_AN3,
    int16_T *Channel_AN4);
  extern void RPDOs_from_AN2CANConv_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_from_APT_Start_wrapper(void);
  extern void RPDOs_from_APT_Outputs_wrapper(uint8_T *StatusWord,
    int16_T *PhaseCurrent,
    int16_T *Speed,
    uint16_T *BusVoltage,
    int8_T *MotorTemp,
    int8_T *APTTemp,
    uint8_T *ErrStatus,
    uint8_T *Direction);
  extern void RPDOs_from_APT_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void TPDOs_to_APT_Start_wrapper(void);
  extern void TPDOs_to_APT_Outputs_wrapper(const uint8_T *APT_ControlWord,
    const uint8_T *APT_PedalPosition,
    const uint8_T *APT_HeartBeat);
  extern void TPDOs_to_APT_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_from_DunkD_Start_wrapper(void);
  extern void RPDOs_from_DunkD_Outputs_wrapper(int32_T *ActualCurrent,
    int32_T *ActualVelocity);
  extern void RPDOs_from_DunkD_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void TPDOs_to_DunkD_Start_wrapper(void);
  extern void TPDOs_to_DunkD_Outputs_wrapper(const uint8_T *ClearError,
    const uint8_T *DeviceMode,
    const uint8_T *PowerEnable,
    const uint8_T *BrakeCtrl,
    const int32_T *DesiredCurrent);
  extern void TPDOs_to_DunkD_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_from_DunkC_Start_wrapper(void);
  extern void RPDOs_from_DunkC_Outputs_wrapper(int32_T *ActualCurrent,
    int32_T *ActualVelocity);
  extern void RPDOs_from_DunkC_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void TPDOs_to_DunkC_Start_wrapper(void);
  extern void TPDOs_to_DunkC_Outputs_wrapper(const uint8_T *ClearError,
    const uint8_T *DeviceMode,
    const uint8_T *PowerEnable,
    const uint8_T *BrakeCtrl,
    const int32_T *DesiredCurrent);
  extern void TPDOs_to_DunkC_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_from_DunkB_Start_wrapper(void);
  extern void RPDOs_from_DunkB_Outputs_wrapper(int32_T *ActualCurrent,
    int32_T *ActualVelocity);
  extern void RPDOs_from_DunkB_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void TPDOs_to_DunkB_Start_wrapper(void);
  extern void TPDOs_to_DunkB_Outputs_wrapper(const uint8_T *ClearError,
    const uint8_T *DeviceMode,
    const uint8_T *PowerEnable,
    const uint8_T *BrakeCtrl,
    const int32_T *DesiredCurrent);
  extern void TPDOs_to_DunkB_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_from_DunkA_Start_wrapper(void);
  extern void RPDOs_from_DunkA_Outputs_wrapper(int32_T *ActualCurrent,
    int32_T *ActualVelocity);
  extern void RPDOs_from_DunkA_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void TPDOs_to_DunkA_Start_wrapper(void);
  extern void TPDOs_to_DunkA_Outputs_wrapper(const uint8_T *ClearError,
    const uint8_T *DeviceMode,
    const uint8_T *PowerEnable,
    const uint8_T *BrakeCtrl,
    const int32_T *DesiredCurrent);
  extern void TPDOs_to_DunkA_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_from_Encoder_Start_wrapper(void);
  extern void RPDOs_from_Encoder_Outputs_wrapper(uint32_T
    *Encoder_Actual_Position,
    uint32_T *Encoder_Stored_Position);
  extern void RPDOs_from_Encoder_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_from_Inclinometer_Start_wrapper(void);
  extern void RPDOs_from_Inclinometer_Outputs_wrapper(uint8_T *X_sign,
    uint8_T *X_AngleH,
    uint8_T *X_AngleL,
    uint8_T *Y_sign,
    uint8_T *Y_AngleH,
    uint8_T *Y_AngleL);
  extern void RPDOs_from_Inclinometer_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  extern void RPDOs_from_Joystick_Start_wrapper(void);
  extern void RPDOs_from_Joystick_Outputs_wrapper(uint8_T *ButtonsStatus,
    real32_T *LongCmd,
    real32_T *LatCmd);
  extern void RPDOs_from_Joystick_Terminate_wrapper(void);

#ifdef __cplusplus

}
#endif

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern void* slrtRegisterSignalToLoggingService(rtwCAPI_ModelMappingInfo* mdlMMI,
  const char* relBlkPath, int portNumber);
extern void sg_IO602_IO691_write_s(SimStruct *rts);
extern void sg_IO602_IO691_setup_s(SimStruct *rts);
extern void sg_IO602_IO691_read_s(SimStruct *rts);
extern void SpeedgoatCA_Derivative_Init(DW_Derivative_SpeedgoatCANOpe_T *localDW);
extern void SpeedgoatCANOpen_Derivative(real_T rtu_y, real_T rtu_Kd, real_T
  rtu_Ts, B_Derivative_SpeedgoatCANOpen_T *localB,
  DW_Derivative_SpeedgoatCANOpe_T *localDW);
extern void Speedgo_Comp_and_Timer_Init(DW_Comp_and_Timer_SpeedgoatCA_T *localDW);
extern void SpeedgoatCAN_Comp_and_Timer(real_T rtu_e_in, real_T rtu_Hyst,
  B_Comp_and_Timer_SpeedgoatCAN_T *localB, DW_Comp_and_Timer_SpeedgoatCA_T
  *localDW);

#endif                                 /* RTW_HEADER_SpeedgoatCANOpen2Buses1ms_private_h_ */
