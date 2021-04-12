/*
 * SpeedgoatCANOpen07_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SpeedgoatCANOpen07_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "SpeedgoatCANOpen07.h"
#include "SpeedgoatCANOpen07_capi.h"
#include "SpeedgoatCANOpen07_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("AN2CAN_RPDOs/RPDOs from AN2CAN /p1"),
    TARGET_STRING("Channel_AN1"), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("AN2CAN_RPDOs/RPDOs from AN2CAN /p2"),
    TARGET_STRING("Channel_AN2"), 1, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("AN2CAN_RPDOs/RPDOs from AN2CAN /p3"),
    TARGET_STRING("Channel_AN3"), 2, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("AN2CAN_RPDOs/RPDOs from AN2CAN /p4"),
    TARGET_STRING("Channel_AN4"), 3, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p1"),
    TARGET_STRING("APT_StatusWord"), 0, 1, 0, 0, 0 },

  { 5, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p2"),
    TARGET_STRING("APT_PhaseCurrent"), 1, 2, 0, 0, 0 },

  { 6, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p3"),
    TARGET_STRING("APT_Speed"), 2, 2, 0, 0, 0 },

  { 7, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p4"),
    TARGET_STRING("APT_BusVoltage"), 3, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p5"),
    TARGET_STRING("APT_MotorTemp"), 4, 3, 0, 0, 0 },

  { 9, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p6"),
    TARGET_STRING("APT_Temp"), 5, 3, 0, 0, 0 },

  { 10, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p7"),
    TARGET_STRING("APT_ErrStatus"), 6, 1, 0, 0, 0 },

  { 11, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p8"),
    TARGET_STRING("APT_Direction"), 7, 1, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkA_StatusWord"), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkA_OperationMode"), 1, 3, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p3"),
    TARGET_STRING("DunkA_CurrentActualValue"), 2, 2, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p4"),
    TARGET_STRING("DunkA_ActualTorque"), 3, 2, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p5"),
    TARGET_STRING("DunkA_ActualPosition"), 4, 4, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p6"),
    TARGET_STRING("DunkA_ActualVelocity"), 5, 4, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Joystick_RPDOs1/RPDOs from Joystick/p1"),
    TARGET_STRING("Joystick_ButtonsStatus"), 0, 1, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Joystick_RPDOs1/RPDOs from Joystick/p2"),
    TARGET_STRING("Joystick_LongCmd"), 1, 5, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Joystick_RPDOs1/RPDOs from Joystick/p3"),
    TARGET_STRING("Joystick_LatCmd"), 2, 5, 0, 0, 0 },

  { 21, 3, TARGET_STRING("Trike Application Layer/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 22, 4, TARGET_STRING("Trike Application Layer/MATLAB Function"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 23, 5, TARGET_STRING("Trike Application Layer/MATLAB Function6"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 24, 6, TARGET_STRING("Trike Application Layer/MATLAB Function7"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 25, 7, TARGET_STRING("Trike Application Layer/Set_0_pos_homing/p1"),
    TARGET_STRING("ctrl_word"), 0, 6, 0, 0, 0 },

  { 26, 7, TARGET_STRING("Trike Application Layer/Set_0_pos_homing/p2"),
    TARGET_STRING("ctrl_op_mode"), 1, 6, 0, 0, 0 },

  { 27, 7, TARGET_STRING("Trike Application Layer/Set_0_pos_homing/p3"),
    TARGET_STRING("ctrl_position"), 2, 4, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Trike Application Layer/Abs"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion"),
    TARGET_STRING("APT_TPDO_ControlWord"), 0, 1, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion1"),
    TARGET_STRING("APT_TPDO_PedalPosition"), 0, 1, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion10"),
    TARGET_STRING("sts_op_mode"), 0, 3, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion11"),
    TARGET_STRING("target_pos"), 0, 4, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion12"),
    TARGET_STRING("poweron"), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion13"),
    TARGET_STRING("set_homing"), 0, 0, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion2"),
    TARGET_STRING("APT_TPDO_Heartbeat"), 0, 1, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion3"),
    TARGET_STRING("DunkA_TPDO_ControlWord"), 0, 0, 0, 0, 0 },

  { 37, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion4"),
    TARGET_STRING("DunkA_TPDO_TargetVelocity"), 0, 4, 0, 0, 0 },

  { 38, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion5"),
    TARGET_STRING("DunkA_TPDO_BrakeControl"), 0, 2, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion6"),
    TARGET_STRING("DunkA_TPDO_OperationMode"), 0, 3, 0, 0, 0 },

  { 40, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion7"),
    TARGET_STRING("DunkA_TPDO_TargetTorque"), 0, 2, 0, 0, 0 },

  { 41, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion8"),
    TARGET_STRING("DunkA_TPDO_TargetPosition"), 0, 4, 0, 0, 0 },

  { 42, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion9"),
    TARGET_STRING("sts_word"), 0, 0, 0, 0, 0 },

  { 43, 0, TARGET_STRING("Trike Application Layer/Gain"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 44, 0, TARGET_STRING("Trike Application Layer/Gain1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 45, 0, TARGET_STRING("Trike Application Layer/Gain3"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 46, 0, TARGET_STRING("Trike Application Layer/Gain6"),
    TARGET_STRING(""), 0, 4, 0, 1, 0 },

  { 47, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 48, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 49, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 50, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 51, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 53, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 54, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 55, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 56, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 57, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 58, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 59, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 60, 1, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 61, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 62, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 63, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 64, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 65, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 66, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 67, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 68, 2, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 69, TARGET_STRING("Trike Application Layer/Constant1"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 70, TARGET_STRING("Trike Application Layer/Constant2"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 71, TARGET_STRING("Trike Application Layer/Constant3"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 72, TARGET_STRING("Trike Application Layer/Gain"),
    TARGET_STRING("Gain"), 5, 0, 0 },

  { 73, TARGET_STRING("Trike Application Layer/Gain1"),
    TARGET_STRING("Gain"), 5, 0, 0 },

  { 74, TARGET_STRING("Trike Application Layer/Gain3"),
    TARGET_STRING("Gain"), 5, 0, 0 },

  { 75, TARGET_STRING("Trike Application Layer/Gain6"),
    TARGET_STRING("Gain"), 2, 0, 2 },

  { 76, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 6, 2, 0 },

  { 77, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 6, 0, 0 },

  { 78, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 6, 0, 0 },

  { 79, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 6, 3, 0 },

  { 80, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 81, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 82, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 6, 4, 0 },

  { 83, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 6, 3, 0 },

  { 84, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 85, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 86, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 6, 4, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &SpeedgoatCANOpen07_B.Channel_AN1,   /* 0: Signal */
  &SpeedgoatCANOpen07_B.Channel_AN2,   /* 1: Signal */
  &SpeedgoatCANOpen07_B.Channel_AN3,   /* 2: Signal */
  &SpeedgoatCANOpen07_B.Channel_AN4,   /* 3: Signal */
  &SpeedgoatCANOpen07_B.APT_StatusWord,/* 4: Signal */
  &SpeedgoatCANOpen07_B.APT_PhaseCurrent,/* 5: Signal */
  &SpeedgoatCANOpen07_B.APT_Speed,     /* 6: Signal */
  &SpeedgoatCANOpen07_B.APT_BusVoltage,/* 7: Signal */
  &SpeedgoatCANOpen07_B.APT_MotorTemp, /* 8: Signal */
  &SpeedgoatCANOpen07_B.APT_Temp,      /* 9: Signal */
  &SpeedgoatCANOpen07_B.APT_ErrStatus, /* 10: Signal */
  &SpeedgoatCANOpen07_B.APT_Direction, /* 11: Signal */
  &SpeedgoatCANOpen07_B.DunkA_StatusWord,/* 12: Signal */
  &SpeedgoatCANOpen07_B.DunkA_OperationMode,/* 13: Signal */
  &SpeedgoatCANOpen07_B.DunkA_CurrentActualValue,/* 14: Signal */
  &SpeedgoatCANOpen07_B.DunkA_ActualTorque,/* 15: Signal */
  &SpeedgoatCANOpen07_B.DunkA_ActualPosition,/* 16: Signal */
  &SpeedgoatCANOpen07_B.DunkA_ActualVelocity,/* 17: Signal */
  &SpeedgoatCANOpen07_B.Joystick_ButtonsStatus,/* 18: Signal */
  &SpeedgoatCANOpen07_B.Joystick_LongCmd,/* 19: Signal */
  &SpeedgoatCANOpen07_B.Joystick_LatCmd,/* 20: Signal */
  &SpeedgoatCANOpen07_B.HB,            /* 21: Signal */
  &SpeedgoatCANOpen07_B.Byte0,         /* 22: Signal */
  &SpeedgoatCANOpen07_B.B8,            /* 23: Signal */
  &SpeedgoatCANOpen07_B.B7,            /* 24: Signal */
  &SpeedgoatCANOpen07_B.ControlWord,   /* 25: Signal */
  &SpeedgoatCANOpen07_B.OpMode,        /* 26: Signal */
  &SpeedgoatCANOpen07_B.TargetPosition,/* 27: Signal */
  &SpeedgoatCANOpen07_B.Abs,           /* 28: Signal */
  &SpeedgoatCANOpen07_B.APT_TPDO_ControlWord,/* 29: Signal */
  &SpeedgoatCANOpen07_B.APT_TPDO_PedalPosition,/* 30: Signal */
  &SpeedgoatCANOpen07_B.sts_op_mode,   /* 31: Signal */
  &SpeedgoatCANOpen07_B.target_pos,    /* 32: Signal */
  &SpeedgoatCANOpen07_B.poweron,       /* 33: Signal */
  &SpeedgoatCANOpen07_B.set_homing,    /* 34: Signal */
  &SpeedgoatCANOpen07_B.APT_TPDO_Heartbeat,/* 35: Signal */
  &SpeedgoatCANOpen07_B.DunkA_TPDO_ControlWord,/* 36: Signal */
  &SpeedgoatCANOpen07_B.DunkA_TPDO_TargetVelocity,/* 37: Signal */
  &SpeedgoatCANOpen07_B.DunkA_TPDO_BrakeControl,/* 38: Signal */
  &SpeedgoatCANOpen07_B.DunkA_TPDO_OperationMode,/* 39: Signal */
  &SpeedgoatCANOpen07_B.DunkA_TPDO_TargetTorque,/* 40: Signal */
  &SpeedgoatCANOpen07_B.DunkA_TPDO_TargetPosition,/* 41: Signal */
  &SpeedgoatCANOpen07_B.sts_word,      /* 42: Signal */
  &SpeedgoatCANOpen07_B.Gain,          /* 43: Signal */
  &SpeedgoatCANOpen07_B.Gain1,         /* 44: Signal */
  &SpeedgoatCANOpen07_B.Gain3,         /* 45: Signal */
  &SpeedgoatCANOpen07_B.Gain6,         /* 46: Signal */
  &SpeedgoatCANOpen07_B.CCaller_o1,    /* 47: Signal */
  &SpeedgoatCANOpen07_B.CCaller_o2,    /* 48: Signal */
  &SpeedgoatCANOpen07_B.CCaller_o3[0], /* 49: Signal */
  &SpeedgoatCANOpen07_B.CCaller_o1_i,  /* 50: Signal */
  &SpeedgoatCANOpen07_B.CCaller_o2_i,  /* 51: Signal */
  &SpeedgoatCANOpen07_B.CCaller_o3_p[0],/* 52: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o1,    /* 53: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o2,    /* 54: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o3,    /* 55: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o4,    /* 56: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o5,    /* 57: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o6[0], /* 58: Signal */
  &SpeedgoatCANOpen07_B.Switch,        /* 59: Signal */
  &SpeedgoatCANOpen07_B.Constant_g,    /* 60: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o1_j,  /* 61: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o2_n,  /* 62: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o3_o,  /* 63: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o4_n,  /* 64: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o5_f,  /* 65: Signal */
  &SpeedgoatCANOpen07_B.CANRead_o6_p[0],/* 66: Signal */
  &SpeedgoatCANOpen07_B.Switch_f,      /* 67: Signal */
  &SpeedgoatCANOpen07_B.Constant,      /* 68: Signal */
  &SpeedgoatCANOpen07_P.Constant1_Value,/* 69: Block Parameter */
  &SpeedgoatCANOpen07_P.Constant2_Value,/* 70: Block Parameter */
  &SpeedgoatCANOpen07_P.Constant3_Value,/* 71: Block Parameter */
  &SpeedgoatCANOpen07_P.Gain_Gain,     /* 72: Block Parameter */
  &SpeedgoatCANOpen07_P.Gain1_Gain,    /* 73: Block Parameter */
  &SpeedgoatCANOpen07_P.Gain3_Gain,    /* 74: Block Parameter */
  &SpeedgoatCANOpen07_P.Gain6_Gain,    /* 75: Block Parameter */
  &SpeedgoatCANOpen07_P.CANSetup_P1[0],/* 76: Block Parameter */
  &SpeedgoatCANOpen07_P.CANSetup_P2,   /* 77: Block Parameter */
  &SpeedgoatCANOpen07_P.CANSetup_P3,   /* 78: Block Parameter */
  &SpeedgoatCANOpen07_P.CANRead_P1[0], /* 79: Block Parameter */
  &SpeedgoatCANOpen07_P.Switch_Threshold,/* 80: Block Parameter */
  &SpeedgoatCANOpen07_P.Constant_Value,/* 81: Block Parameter */
  &SpeedgoatCANOpen07_P.CANWrite_P1[0],/* 82: Block Parameter */
  &SpeedgoatCANOpen07_P.CANRead_P1_k[0],/* 83: Block Parameter */
  &SpeedgoatCANOpen07_P.Switch_Threshold_k,/* 84: Block Parameter */
  &SpeedgoatCANOpen07_P.Constant_Value_o,/* 85: Block Parameter */
  &SpeedgoatCANOpen07_P.CANWrite_P1_n[0],/* 86: Block Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), SS_INT8, 0, 0 },

  { "int", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  8,                                   /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  40,                                  /* 5 */
  1,                                   /* 6 */
  6,                                   /* 7 */
  1,                                   /* 8 */
  7                                    /* 9 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0001, 0.0, 1.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -14, 1 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -14, 1 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 69,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 18,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 364381501U,
    1612847676U,
    4181140316U,
    3056288576U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  SpeedgoatCANOpen07_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void SpeedgoatCANOpen07_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(SpeedgoatCANOpen07_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(SpeedgoatCANOpen07_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(SpeedgoatCANOpen07_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(SpeedgoatCANOpen07_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(SpeedgoatCANOpen07_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  SpeedgoatCANOpen07_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(SpeedgoatCANOpen07_M);
  SpeedgoatCANOpen07_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_SpeedgoatCANOpen07_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(SpeedgoatCANOpen07_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(SpeedgoatCANOpen07_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(SpeedgoatCANOpen07_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void SpeedgoatCANOpen07_host_InitializeDataMapInfo
    (SpeedgoatCANOpen07_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: SpeedgoatCANOpen07_capi.c */
