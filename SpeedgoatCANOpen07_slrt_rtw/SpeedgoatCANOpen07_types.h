/*
 * SpeedgoatCANOpen07_types.h
 *
 * Code generation for model "SpeedgoatCANOpen07".
 *
 * Model version              : 1.315
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Mar 16 20:12:27 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SpeedgoatCANOpen07_types_h_
#define RTW_HEADER_SpeedgoatCANOpen07_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_AN2CAN_conv_
#define DEFINED_TYPEDEF_FOR_AN2CAN_conv_

typedef struct {
  uint16_T Channel_AN1;
  uint16_T Channel_AN2;
  uint16_T Channel_AN3;
  uint16_T Channel_AN4;
} AN2CAN_conv;

#endif

#ifndef DEFINED_TYPEDEF_FOR_APT_RPDOs_
#define DEFINED_TYPEDEF_FOR_APT_RPDOs_

typedef struct {
  uint8_T StatusWord;
  int16_T PhaseCurrent;
  int16_T Speed;
  uint16_T BusVoltage;
  int8_T MotorTemp;
  int8_T APTTemp;
  uint8_T ErrStatus;
  uint8_T Direction;
} APT_RPDOs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Joystick_RPDOs_
#define DEFINED_TYPEDEF_FOR_Joystick_RPDOs_

typedef struct {
  uint8_T ButtonsStatus;
  real32_T LongCmp;
  real32_T LatCmd;
} Joystick_RPDOs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Speedgoat_TPDOs_
#define DEFINED_TYPEDEF_FOR_Speedgoat_TPDOs_

typedef struct {
  uint8_T APT_ControlWord;
  uint8_T APT_PedalPosition;
  uint8_T APT_HeartBeat;
  uint16_T DunkA_ControlWord;
  int8_T DunkA_OperationMode;
  int16_T DunkA_TargetTorque;
  int32_T DunkA_TargetVelocity;
  int32_T DunkA_TargetPosition;
  int16_T DunkA_BrakeControl;
} Speedgoat_TPDOs;

#endif

/* Parameters (default storage) */
typedef struct P_SpeedgoatCANOpen07_T_ P_SpeedgoatCANOpen07_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_SpeedgoatCANOpen07_T RT_MODEL_SpeedgoatCANOpen07_T;

#endif                                 /* RTW_HEADER_SpeedgoatCANOpen07_types_h_ */
