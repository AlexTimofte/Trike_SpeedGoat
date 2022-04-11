/*
 * SpeedgoatCANOpen2Buses100us_types.h
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.821
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Apr  2 12:48:06 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SpeedgoatCANOpen2Buses100us_types_h_
#define RTW_HEADER_SpeedgoatCANOpen2Buses100us_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "rtw_xpc.h"
#ifndef DEFINED_TYPEDEF_FOR_AN2CAN_conv_
#define DEFINED_TYPEDEF_FOR_AN2CAN_conv_

typedef struct {
  int16_T AN_01;
  int16_T AN_02;
  int16_T AN_03;
  int16_T AN_04;
} AN2CAN_conv;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Speedgoat_TPDOs_
#define DEFINED_TYPEDEF_FOR_Speedgoat_TPDOs_

typedef struct {
  uint8_T APT_ControlWord;
  uint8_T APT_PedalPosition;
  uint8_T APT_HeartBeat;
  uint8_T DunkA_ClearError;
  uint8_T DunkA_DeviceMode;
  uint8_T DunkA_PowerEnable;
  uint8_T DunkA_BrakeCtrl;
  int32_T DunkA_DesiredCurrent;
  uint8_T DunkB_ClearError;
  uint8_T DunkB_DeviceMode;
  uint8_T DunkB_PowerEnable;
  uint8_T DunkB_BrakeCtrl;
  int32_T DunkB_DesiredCurrent;
  uint8_T DunkC_ClearError;
  uint8_T DunkC_DeviceMode;
  uint8_T DunkC_PowerEnable;
  uint8_T DunkC_BrakeCtrl;
  int32_T DunkC_DesiredCurrent;
  uint8_T DunkD_ClearError;
  uint8_T DunkD_DeviceMode;
  uint8_T DunkD_PowerEnable;
  uint8_T DunkD_BrakeCtrl;
  int32_T DunkD_DesiredCurrent;
  int16_T Test_AN1;
  int16_T Test_AN2;
  int16_T Test_AN3;
  int16_T Test_AN4;
} Speedgoat_TPDOs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_APT_RPDOs_
#define DEFINED_TYPEDEF_FOR_APT_RPDOs_

typedef struct {
  uint8_T StatusWord;
  int16_T PhaseCurrent;
  int16_T Speed;
  uint16_T BusVoltage;
  int8_T MotorTemp;
  int8_T Temp;
  uint8_T ErrStatus;
  uint8_T Direction;
} APT_RPDOs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Dold_RPDOs_
#define DEFINED_TYPEDEF_FOR_Dold_RPDOs_

typedef struct {
  uint8_T Enable;
} Dold_RPDOs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Dunk_RPDOs_
#define DEFINED_TYPEDEF_FOR_Dunk_RPDOs_

typedef struct {
  int32_T ActualCurrent;
  int32_T ActualVelocity;
} Dunk_RPDOs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Encoder_RPDOs_
#define DEFINED_TYPEDEF_FOR_Encoder_RPDOs_

typedef struct {
  uint32_T Encoder_Actual_Position;
  uint32_T Encoder_Stored_Position;
} Encoder_RPDOs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Joystick_RPDOs_
#define DEFINED_TYPEDEF_FOR_Joystick_RPDOs_

typedef struct {
  uint8_T ButtonsStatus;
  real32_T LongCmp;
  real32_T LatCmd;
} Joystick_RPDOs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAN_BUS_A_
#define DEFINED_TYPEDEF_FOR_CAN_BUS_A_

typedef struct {
  uint8_T DunkA_ClearError;
  uint8_T DunkA_DeviceMode;
  uint8_T DunkA_PowerEnable;
  uint8_T DunkA_BrakeCtrl;
  int32_T DunkA_DesiredCurrent;
  uint8_T DunkB_ClearError;
  uint8_T DunkB_DeviceMode;
  uint8_T DunkB_PowerEnable;
  uint8_T DunkB_BrakeCtrl;
  int32_T DunkB_DesiredCurrent;
  uint8_T DunkC_ClearError;
  uint8_T DunkC_DeviceMode;
  uint8_T DunkC_PowerEnable;
  uint8_T DunkC_BrakeCtrl;
  int32_T DunkC_DesiredCurrent;
  uint8_T DunkD_ClearError;
  uint8_T DunkD_DeviceMode;
  uint8_T DunkD_PowerEnable;
  uint8_T DunkD_BrakeCtrl;
  int32_T DunkD_DesiredCurrent;
} CAN_BUS_A;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAN_BUS_B_
#define DEFINED_TYPEDEF_FOR_CAN_BUS_B_

typedef struct {
  uint8_T APT_ControlWord;
  uint8_T APT_PedalPosition;
  uint8_T APT_HeartBeat;
} CAN_BUS_B;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Dunk_Init_TPDOs_
#define DEFINED_TYPEDEF_FOR_Dunk_Init_TPDOs_

typedef struct {
  uint8_T ClearError;
  uint8_T DeviceMode;
  uint8_T PowerEnable;
  uint8_T BrakeCtrl;
} Dunk_Init_TPDOs;

#endif

#ifndef typedef_dsp_private_SlidingWindowAver_T
#define typedef_dsp_private_SlidingWindowAver_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[49];
  real_T pCumRevIndex;
} dsp_private_SlidingWindowAver_T;

#endif                                 /*typedef_dsp_private_SlidingWindowAver_T*/

#ifndef typedef_dsp_private_SlidingWindowAv_i_T
#define typedef_dsp_private_SlidingWindowAv_i_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
} dsp_private_SlidingWindowAv_i_T;

#endif                                 /*typedef_dsp_private_SlidingWindowAv_i_T*/

#ifndef typedef_cell_wrap_SpeedgoatCANOpen2Bu_T
#define typedef_cell_wrap_SpeedgoatCANOpen2Bu_T

typedef struct {
  uint32_T f1[8];
} cell_wrap_SpeedgoatCANOpen2Bu_T;

#endif                                 /*typedef_cell_wrap_SpeedgoatCANOpen2Bu_T*/

#ifndef typedef_dsp_simulink_MovingAverage_Sp_T
#define typedef_dsp_simulink_MovingAverage_Sp_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_SpeedgoatCANOpen2Bu_T inputVarSize;
  dsp_private_SlidingWindowAver_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingAverage_Sp_T;

#endif                                 /*typedef_dsp_simulink_MovingAverage_Sp_T*/

#ifndef typedef_dsp_simulink_MovingAverage_i_T
#define typedef_dsp_simulink_MovingAverage_i_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_SpeedgoatCANOpen2Bu_T inputVarSize;
  dsp_private_SlidingWindowAv_i_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingAverage_i_T;

#endif                                 /*typedef_dsp_simulink_MovingAverage_i_T*/

#ifndef SS_INT64
#define SS_INT64                       40
#endif

#ifndef SS_UINT64
#define SS_UINT64                      41
#endif

/* Parameters (default storage) */
typedef struct P_SpeedgoatCANOpen2Buses100us_T_ P_SpeedgoatCANOpen2Buses100us_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_SpeedgoatCANOpen2Buses100us_T
  RT_MODEL_SpeedgoatCANOpen2Buses100us_T;

#endif                                 /* RTW_HEADER_SpeedgoatCANOpen2Buses100us_types_h_ */
