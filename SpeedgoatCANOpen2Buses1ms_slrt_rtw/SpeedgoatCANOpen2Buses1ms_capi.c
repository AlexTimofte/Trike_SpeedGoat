/*
 * SpeedgoatCANOpen2Buses1ms_capi.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses1ms".
 *
 * Model version              : 1.938
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jul 30 12:12:39 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SpeedgoatCANOpen2Buses1ms_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#ifndef SS_INT64
#define SS_INT64                       38
#endif

#ifndef SS_UINT64
#define SS_UINT64                      39
#endif

#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "SpeedgoatCANOpen2Buses1ms.h"
#include "SpeedgoatCANOpen2Buses1ms_capi.h"
#include "SpeedgoatCANOpen2Buses1ms_private.h"
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
    TARGET_STRING("APT_StatusWord"), 0, 1, 0, 0, 1 },

  { 5, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p2"),
    TARGET_STRING("APT_PhaseCurrent"), 1, 0, 0, 0, 1 },

  { 6, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p3"),
    TARGET_STRING("APT_Speed"), 2, 0, 0, 0, 1 },

  { 7, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p4"),
    TARGET_STRING("APT_BusVoltage"), 3, 2, 0, 0, 1 },

  { 8, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p5"),
    TARGET_STRING("APT_MotorTemp"), 4, 3, 0, 0, 1 },

  { 9, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p6"),
    TARGET_STRING("APT_Temp"), 5, 3, 0, 0, 1 },

  { 10, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p7"),
    TARGET_STRING("APT_ErrStatus"), 6, 1, 0, 0, 1 },

  { 11, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p8"),
    TARGET_STRING("APT_Direction"), 7, 1, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Enable"), 0, 1, 0, 0, 2 },

  { 13, 0, TARGET_STRING("Dunk_Brakes/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkD_ActualCurrent"), 0, 4, 0, 0, 3 },

  { 14, 0, TARGET_STRING("Dunk_Brakes/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkD_ActualVelocity"), 1, 4, 0, 0, 3 },

  { 17, 0, TARGET_STRING("Dunk_LeftTilt/Signal Copy"),
    TARGET_STRING("TiltLeft_VelocityReq"), 0, 4, 0, 0, 1 },

  { 18, 0, TARGET_STRING("Dunk_LeftTilt/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkC_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Dunk_LeftTilt/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkC_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Dunk_RightTilt/Signal Copy"),
    TARGET_STRING("TiltRight_CurrentReq"), 0, 4, 0, 0, 1 },

  { 21, 0, TARGET_STRING("Dunk_RightTilt/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkB_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Dunk_RightTilt/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkB_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Dunk_Steering/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkA_ActualCurrent"), 0, 4, 0, 0, 3 },

  { 24, 0, TARGET_STRING("Dunk_Steering/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkA_ActualVelocity"), 1, 4, 0, 0, 3 },

  { 25, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p1"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 6, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p2"),
    TARGET_STRING("Encoder_Stored_Position"), 1, 6, 0, 0, 0 },

  { 27, 1, TARGET_STRING("Inclinometer_RPDOs/Conv/p1"),
    TARGET_STRING("X_Angle"), 0, 7, 0, 0, 0 },

  { 28, 1, TARGET_STRING("Inclinometer_RPDOs/Conv/p2"),
    TARGET_STRING("Y_Angle"), 1, 7, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Inclinometer_RPDOs/Constant"),
    TARGET_STRING("Enable"), 0, 1, 0, 0, 2 },

  { 30, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p1"),
    TARGET_STRING("xS"), 0, 1, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p2"),
    TARGET_STRING("xH"), 1, 1, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p3"),
    TARGET_STRING("xL"), 2, 1, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p4"),
    TARGET_STRING("yS"), 3, 1, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p5"),
    TARGET_STRING("yH"), 4, 1, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p6"),
    TARGET_STRING("yL"), 5, 1, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p1"),
    TARGET_STRING("Joystick_ButtonsStatus"), 0, 1, 0, 0, 0 },

  { 37, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p2"),
    TARGET_STRING("Joystick_LongCmd"), 1, 8, 0, 0, 0 },

  { 38, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p3"),
    TARGET_STRING("Joystick_LatCmd"), 2, 8, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single"),
    TARGET_STRING("AN_01"), 0, 0, 0, 0, 4 },

  { 40, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single1"),
    TARGET_STRING("AN_02"), 0, 0, 0, 0, 4 },

  { 41, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single2"),
    TARGET_STRING("AN_03"), 0, 0, 0, 0, 4 },

  { 42, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single3"),
    TARGET_STRING("AN_04"), 0, 0, 0, 0, 4 },

  { 43, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING(""), 0, 7, 0, 0, 4 },

  { 44, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion22"),
    TARGET_STRING("DunkB_TPDO_ClearError"), 0, 1, 0, 0, 1 },

  { 45, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion23"),
    TARGET_STRING("DunkB_TPDO_BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 46, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion24"),
    TARGET_STRING("DunkB_TPDO_DeviceMode"), 0, 1, 0, 0, 1 },

  { 47, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion25"),
    TARGET_STRING("DunkB_TPDO_PowerEnable"), 0, 1, 0, 0, 1 },

  { 48, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion26"),
    TARGET_STRING("DunkB_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion27"),
    TARGET_STRING("DunkC_TPDO_ClearError"), 0, 1, 0, 0, 1 },

  { 50, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion28"),
    TARGET_STRING("DunkC_TPDO_BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 51, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion29"),
    TARGET_STRING("DunkC_TPDO_DeviceMode"), 0, 1, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion3"),
    TARGET_STRING("DunkA_TPDO_ClearError"), 0, 1, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion30"),
    TARGET_STRING("DunkC_TPDO_PowerEnable"), 0, 1, 0, 0, 1 },

  { 54, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion31"),
    TARGET_STRING("DunkC_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 55, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion32"),
    TARGET_STRING("DunkD_TPDO_ClearError"), 0, 1, 0, 0, 1 },

  { 56, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion33"),
    TARGET_STRING("DunkD_TPDO_BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 57, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion34"),
    TARGET_STRING("DunkD_TPDO_DeviceMode"), 0, 1, 0, 0, 1 },

  { 58, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion35"),
    TARGET_STRING("DunkD_TPDO_PowerEnable"), 0, 1, 0, 0, 1 },

  { 59, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion36"),
    TARGET_STRING("DunkD_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 60, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion4"),
    TARGET_STRING("DunkA_TPDO_BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 61, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion6"),
    TARGET_STRING("DunkA_TPDO_DeviceMode"), 0, 1, 0, 0, 1 },

  { 62, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion7"),
    TARGET_STRING("DunkA_TPDO_PowerEnable"), 0, 1, 0, 0, 1 },

  { 63, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion8"),
    TARGET_STRING("DunkA_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 64, 4, TARGET_STRING("Trike Application Layer/CAN_B/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 65, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion"),
    TARGET_STRING("APT_TPDO_ControlWord"), 0, 1, 0, 0, 1 },

  { 66, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion1"),
    TARGET_STRING("APT_TPDO_PedalPosition"), 0, 1, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion2"),
    TARGET_STRING("APT_TPDO_Heartbeat"), 0, 1, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Trike Application Layer/System_Control/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 69, 22, TARGET_STRING("Trike Application Layer/System_Init/APTControlWord"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 70, 24, TARGET_STRING("Trike Application Layer/System_Init/ButtonStatus"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 71, 25, TARGET_STRING("Trike Application Layer/System_Init/EnableCtrl"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 72, 0, TARGET_STRING("Trike Application Layer/System_Init/Cast To Single3"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 73, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 5 },

  { 74, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 5 },

  { 75, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 5 },

  { 76, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p4"),
    TARGET_STRING("queue_in"), 3, 1, 0, 0, 5 },

  { 77, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p5"),
    TARGET_STRING("queue_out"), 4, 1, 0, 0, 5 },

  { 78, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 1 },

  { 79, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 80, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 1 },

  { 81, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl/p1"),
    TARGET_STRING("Retract_current"), 0, 7, 0, 0, 3 },

  { 82, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 3 },

  { 83, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain5"),
    TARGET_STRING("BrakesMotor_CurrentInit [mA]"), 0, 4, 0, 1, 1 },

  { 84, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 85, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/P Controller"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 86, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 88, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Robotics Convention"),
    TARGET_STRING("DirectionReq"), 0, 8, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/degree2rad"),
    TARGET_STRING("SteeringAngle [rad]"), 0, 8, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/dem"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 91, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/inc2deg"),
    TARGET_STRING("DirectionFb"), 0, 7, 0, 0, 0 },

  { 92, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 93, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 94, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Moving Average"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 95, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Product"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 96, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Rate Transition"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 97, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 98, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 99, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 100, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 101, 21, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/ServoTilting"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 7, 0, 0, 1 },

  { 102, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Abs"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 103, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 104, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 105, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain"),
    TARGET_STRING("RightTiltMotor_SpeedReq [rpm]"), 0, 7, 0, 0, 3 },

  { 106, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain1"),
    TARGET_STRING("LeftTiltMotor_SpeedReq [rpm]"), 0, 7, 0, 0, 3 },

  { 107, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 108, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain3"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 109, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 110, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain5"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 111, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain6"),
    TARGET_STRING("LeftTiltMotor_CurrentReq [mA]"), 0, 7, 0, 0, 3 },

  { 113, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("PosReq [m]"), 0, 7, 0, 0, 6 },

  { 114, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 115, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("TiltingAngle_sinreq [deg]"), 0, 7, 0, 0, 0 },

  { 116, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sine Wave2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 117, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sum1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 118, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch"),
    TARGET_STRING("LeftTiltMotor_CurrentReq [mA]"), 0, 7, 0, 0, 6 },

  { 119, 11, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch1"),
    TARGET_STRING("LeftTiltMotor_CurrentReq [mA]"), 0, 7, 0, 0, 6 },

  { 120, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch3"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 121, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch4"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 122, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold1"),
    TARGET_STRING("TiltingAngle_stepreqf [deg]"), 0, 7, 0, 0, 3 },

  { 123, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 124, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold3"),
    TARGET_STRING(""), 0, 10, 0, 0, 3 },

  { 125, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 126, 12, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Moving Average"),
    TARGET_STRING("Fb_Angle_Filt [deg]"), 0, 7, 0, 0, 3 },

  { 127, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Abs"),
    TARGET_STRING("TractionReq"), 0, 7, 0, 0, 0 },

  { 128, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 129, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 130, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 131, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 132, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Speed_SI"), 0, 7, 0, 0, 1 },

  { 133, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("VehSpeed_SI"), 0, 7, 0, 0, 1 },

  { 134, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/m//s2Km//h"),
    TARGET_STRING("VehSpeed_Km/h"), 0, 7, 0, 0, 1 },

  { 135, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 136, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 1 },

  { 137, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 1 },

  { 138, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 1 },

  { 139, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 1 },

  { 140, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p6"),
    TARGET_STRING(""), 5, 8, 0, 0, 1 },

  { 141, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 142, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 1 },

  { 143, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 1 },

  { 144, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 145, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 1 },

  { 146, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single4"),
    TARGET_STRING("CurrentInit"), 0, 0, 0, 0, 1 },

  { 147, 0, TARGET_STRING("Trike Application Layer/System_Init/Enable/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 148, 26, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 149, 26, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 1 },

  { 150, 26, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 1 },

  { 151, 26, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 1 },

  { 152, 26, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 1 },

  { 153, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 154, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 1 },

  { 155, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 1 },

  { 156, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 157, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 1 },

  { 158, 27, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 159, 27, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 1 },

  { 160, 27, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 1 },

  { 161, 27, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 1 },

  { 162, 27, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 1 },

  { 163, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 164, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 1 },

  { 165, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 1 },

  { 166, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 167, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 1 },

  { 168, 28, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 169, 28, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 1 },

  { 170, 28, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 1 },

  { 171, 28, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 1 },

  { 172, 28, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 1 },

  { 173, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 174, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 1 },

  { 175, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 1 },

  { 176, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 177, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 1 },

  { 178, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING("DataPresent"), 0, 10, 0, 0, 5 },

  { 179, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 5 },

  { 180, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 5 },

  { 181, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 5 },

  { 182, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 5 },

  { 183, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 5 },

  { 184, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 10, 0, 0, 1 },

  { 185, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 1 },

  { 186, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 1 },

  { 187, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 1 },

  { 188, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 1 },

  { 189, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 1 },

  { 190, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Retract"),
    TARGET_STRING("Retract_current"), 0, 8, 0, 0, 3 },

  { 191, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 192, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 193, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp"),
    TARGET_STRING("BrakesMotor_CurrentReq"), 0, 7, 0, 0, 1 },

  { 194, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 195, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 196, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent"),
    TARGET_STRING("br_percent2"), 0, 7, 0, 0, 0 },

  { 197, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 198, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 199, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 200, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 201, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 202, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 203, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING(""), 0, 8, 0, 0, 3 },

  { 204, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt"),
    TARGET_STRING("DispLeft [Volt]"), 0, 4, 0, 2, 0 },

  { 205, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter"),
    TARGET_STRING("DispLeft [m]"), 0, 7, 0, 0, 0 },

  { 206, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 207, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Sum"),
    TARGET_STRING("DispLeftOffset [Volt]"), 0, 7, 0, 0, 0 },

  { 208, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 209, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/LSB2Volt"),
    TARGET_STRING("DispRight [Volt]"), 0, 4, 0, 2, 0 },

  { 210, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Volt2meter"),
    TARGET_STRING("DispRight [m]"), 0, 7, 0, 0, 0 },

  { 211, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 212, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Sum"),
    TARGET_STRING("DispRightOffset [Volt]"), 0, 7, 0, 0, 0 },

  { 213, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 214, 13, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Comp_and_Timer/p1"),
    TARGET_STRING("e_out"), 0, 7, 0, 0, 3 },

  { 215, 13, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Comp_and_Timer/p2"),
    TARGET_STRING("timer"), 1, 7, 0, 0, 3 },

  { 216, 14, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Derivative/p1"),
    TARGET_STRING("derivative"), 0, 8, 0, 0, 3 },

  { 217, 14, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Derivative/p2"),
    TARGET_STRING("yf"), 1, 8, 0, 0, 3 },

  { 218, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Constant3"),
    TARGET_STRING("Hyst"), 0, 7, 0, 0, 2 },

  { 219, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Data Type Conversion1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 220, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 3 },

  { 221, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 222, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 223, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Proportional  Gain"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 3 },

  { 224, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/tometer"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 225, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 226, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 227, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 228, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 229, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum1"),
    TARGET_STRING("e_in"), 0, 7, 0, 0, 3 },

  { 230, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 231, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 232, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Zero-Order Hold"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 233, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Delay"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 234, 15, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Comp_and_Timer/p1"),
    TARGET_STRING("e_out"), 0, 7, 0, 0, 3 },

  { 235, 15, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Comp_and_Timer/p2"),
    TARGET_STRING("timer"), 1, 7, 0, 0, 3 },

  { 236, 16, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Derivative/p1"),
    TARGET_STRING("derivative"), 0, 8, 0, 0, 3 },

  { 237, 16, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Derivative/p2"),
    TARGET_STRING("yf"), 1, 8, 0, 0, 3 },

  { 238, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Data Type Conversion1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 239, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 3 },

  { 240, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 241, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 242, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Proportional  Gain"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 3 },

  { 243, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/c1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 244, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/degree2m"),
    TARGET_STRING("Hyst"), 0, 7, 0, 0, 2 },

  { 245, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 246, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 247, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 248, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 249, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 250, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum1"),
    TARGET_STRING("e_in"), 0, 7, 0, 0, 3 },

  { 251, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 252, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 253, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Zero-Order Hold"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 254, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Delay"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 255, 17, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Comp_and_Timer/p1"),
    TARGET_STRING("e_out"), 0, 7, 0, 0, 3 },

  { 256, 17, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Comp_and_Timer/p2"),
    TARGET_STRING("timer"), 1, 7, 0, 0, 3 },

  { 257, 18, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Derivative/p1"),
    TARGET_STRING("derivative"), 0, 8, 0, 0, 3 },

  { 258, 18, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Derivative/p2"),
    TARGET_STRING("yf"), 1, 8, 0, 0, 3 },

  { 259, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Data Type Conversion1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 260, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 3 },

  { 261, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 262, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 263, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Proportional  Gain"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 3 },

  { 264, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/c1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 265, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/degree2m"),
    TARGET_STRING("Hyst"), 0, 7, 0, 0, 2 },

  { 266, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 267, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 268, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 269, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 270, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 271, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Sum1"),
    TARGET_STRING("e_in"), 0, 7, 0, 0, 6 },

  { 272, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 273, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 274, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Zero-Order Hold"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 275, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Delay"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 276, 19, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Comp_and_Timer/p1"),
    TARGET_STRING("e_out"), 0, 7, 0, 0, 3 },

  { 277, 19, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Comp_and_Timer/p2"),
    TARGET_STRING("timer"), 1, 7, 0, 0, 3 },

  { 278, 20, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Derivative/p1"),
    TARGET_STRING("derivative"), 0, 8, 0, 0, 3 },

  { 279, 20, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Derivative/p2"),
    TARGET_STRING("yf"), 1, 8, 0, 0, 3 },

  { 280, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Data Type Conversion1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 281, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 3 },

  { 282, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 283, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 284, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Proportional  Gain"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 3 },

  { 285, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/c1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 286, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/degree2m"),
    TARGET_STRING("Hyst"), 0, 7, 0, 0, 2 },

  { 287, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 288, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 289, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 290, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 291, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 292, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum1"),
    TARGET_STRING("e_in"), 0, 7, 0, 0, 3 },

  { 293, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 294, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 295, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Zero-Order Hold"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 296, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Delay"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 297, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Clock"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 298, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Output"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 299, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Look-Up Table1"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 300, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Math Function"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 301, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 302, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Clock"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 303, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Output"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 304, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Look-Up Table1"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 305, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Math Function"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 306, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 307, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Clock"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 308, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Output"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 309, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Look-Up Table1"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 310, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Math Function"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 311, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 6 },

  { 312, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Enable/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 10, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 313, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 314, TARGET_STRING("Dunk_LeftTilt/Gain"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 315, TARGET_STRING("Dunk_LeftTilt/Gain1"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 316, TARGET_STRING("Inclinometer_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 317, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 7, 2, 0 },

  { 318, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 7, 0, 0 },

  { 319, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 7, 0, 0 },

  { 320, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 321, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 322, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 323, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("SinH"), 7, 0, 0 },

  { 324, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("CosH"), 7, 0, 0 },

  { 325, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("SinPhi"), 7, 0, 0 },

  { 326, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("CosPhi"), 7, 0, 0 },

  { 327, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 4 },

  { 328, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Offset to 0 pos => pos = [-180 180]deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 329, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Robotics Convention"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 330, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/degree2rad"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 331, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/dem"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 332, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/inc2deg"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 333, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 334, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 335, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Rate Transition"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 336, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 337, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 338, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 339, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Ts"), 7, 0, 0 },

  { 340, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 341, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 342, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 343, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 344, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Ts"), 7, 0, 0 },

  { 345, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 346, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 347, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 348, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 349, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1"),
    TARGET_STRING("Ts"), 7, 0, 0 },

  { 350, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 351, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 352, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 353, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 354, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Ts"), 7, 0, 0 },

  { 355, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 356, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1"),
    TARGET_STRING("rep_seq_y"), 7, 3, 0 },

  { 357, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2"),
    TARGET_STRING("rep_seq_y"), 7, 3, 0 },

  { 358, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3"),
    TARGET_STRING("rep_seq_y"), 7, 3, 0 },

  { 359, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant3"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 360, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 361, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 362, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 363, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain3"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 364, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain4"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 365, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain5"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 366, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain6"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 367, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Torque Constant"),
    TARGET_STRING("Gain"), 4, 0, 5 },

  { 368, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 369, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 370, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 371, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 372, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 373, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("SinH"), 7, 0, 0 },

  { 374, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("CosH"), 7, 0, 0 },

  { 375, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("SinPhi"), 7, 0, 0 },

  { 376, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("CosPhi"), 7, 0, 0 },

  { 377, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave2"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 378, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave2"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 379, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave2"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 380, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave2"),
    TARGET_STRING("SinH"), 7, 0, 0 },

  { 381, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave2"),
    TARGET_STRING("CosH"), 7, 0, 0 },

  { 382, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave2"),
    TARGET_STRING("SinPhi"), 7, 0, 0 },

  { 383, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave2"),
    TARGET_STRING("CosPhi"), 7, 0, 0 },

  { 384, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 385, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch1"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 386, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch3"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 387, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch4"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 388, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 389, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 390, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 391, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/m//s2Km//h"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 392, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 393, TARGET_STRING("Trike Application Layer/System_Init/Enable/Compare To Constant"),
    TARGET_STRING("const"), 8, 0, 0 },

  { 394, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 395, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 396, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 397, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 7, 4, 0 },

  { 398, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 399, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 7, 5, 0 },

  { 400, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 7, 4, 0 },

  { 401, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 402, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 7, 5, 0 },

  { 403, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/offset"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 404, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 405, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 406, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 407, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 408, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 409, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 410, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 2, 0, 0 },

  { 411, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 2, 0, 0 },

  { 412, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 413, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 414, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 415, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 416, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Offset for 0 deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 417, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt"),
    TARGET_STRING("Gain"), 0, 0, 6 },

  { 418, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 419, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 420, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("Numerator"), 7, 6, 0 },

  { 421, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("Denominator"), 7, 6, 0 },

  { 422, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("InitialStates"), 7, 0, 0 },

  { 423, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Offset for 0 deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 424, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/LSB2Volt"),
    TARGET_STRING("Gain"), 0, 0, 6 },

  { 425, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Volt2meter"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 426, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 427, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter"),
    TARGET_STRING("Numerator"), 7, 6, 0 },

  { 428, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter"),
    TARGET_STRING("Denominator"), 7, 6, 0 },

  { 429, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter"),
    TARGET_STRING("InitialStates"), 7, 0, 0 },

  { 430, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Constant3"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 431, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 432, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 433, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/tometer"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 434, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 435, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Delay"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 436, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Constant3"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 437, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 438, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 439, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/c1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 440, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/degree2m"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 441, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 442, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 443, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 444, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Delay"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 445, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Constant3"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 446, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 447, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 448, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/c1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 449, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/degree2m"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 450, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 451, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 452, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 453, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft1/Delay"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 454, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Constant3"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 455, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 456, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 457, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/c1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 458, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/degree2m"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 459, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 460, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 461, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 462, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Delay"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 463, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 464, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Look-Up Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 7, 3, 0 },

  { 465, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 466, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence2/Look-Up Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 7, 3, 0 },

  { 467, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 468, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence3/Look-Up Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 7, 3, 0 },

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
  &SpeedgoatCANOpen2Buses1ms_B.Channel_AN1,/* 0: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Channel_AN2,/* 1: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Channel_AN3,/* 2: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Channel_AN4,/* 3: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_StatusWord,/* 4: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_PhaseCurrent,/* 5: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_Speed,/* 6: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_BusVoltage,/* 7: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_MotorTemp,/* 8: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_Temp,/* 9: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_ErrStatus,/* 10: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_Direction,/* 11: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Enable_c,/* 12: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkD_ActualCurrent,/* 13: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkD_ActualVelocity,/* 14: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualCurrent_Inv,/* 15: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualVelocity_Inv,/* 16: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TiltLeft_VelocityReq,/* 17: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualCurrent,/* 18: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_ActualVelocity,/* 19: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TiltRight_CurrentReq,/* 20: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkB_ActualCurrent,/* 21: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkB_ActualVelocity,/* 22: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkA_ActualCurrent,/* 23: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkA_ActualVelocity,/* 24: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Encoder_Actual_Position,/* 25: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Encoder_Stored_Position,/* 26: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.xAngle, /* 27: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.yAngle, /* 28: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Enable_l,/* 29: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.xS,     /* 30: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.xH,     /* 31: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.xL,     /* 32: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.yS,     /* 33: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.yH,     /* 34: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.yL,     /* 35: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Joystick_ButtonsStatus_e,/* 36: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Joystick_LongCmd_i,/* 37: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Joystick_LatCmd,/* 38: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AN_01,  /* 39: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AN_02,  /* 40: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AN_03,  /* 41: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AN_04,  /* 42: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.SineWave,/* 43: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_ClearError,/* 44: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_BrakeCtrl,/* 45: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DeviceMode,/* 46: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_PowerEnable,/* 47: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkB_TPDO_DesiredCurrent,/* 48: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_ClearError,/* 49: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_BrakeCtrl,/* 50: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DeviceMode,/* 51: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_ClearError,/* 52: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_PowerEnable,/* 53: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkC_TPDO_DesiredCurrent,/* 54: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_ClearError,/* 55: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_BrakeCtrl,/* 56: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DeviceMode,/* 57: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_PowerEnable,/* 58: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkD_TPDO_DesiredCurrent,/* 59: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_BrakeCtrl,/* 60: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DeviceMode,/* 61: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_PowerEnable,/* 62: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DunkA_TPDO_DesiredCurrent,/* 63: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.HB,     /* 64: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_ControlWord,/* 65: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_PedalPosition,/* 66: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_TPDO_Heartbeat,/* 67: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle_e,/* 68: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.APT_CtrlWord,/* 69: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Button, /* 70: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Enable, /* 71: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle3_p,/* 72: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CCaller_o1,/* 73: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CCaller_o2,/* 74: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CCaller_o3[0],/* 75: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.queue_in,/* 76: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.queue_out,/* 77: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CCaller_o1_n,/* 78: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CCaller_o2_n,/* 79: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CCaller_o3_n[0],/* 80: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq_o,/* 81: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b4,/* 82: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInitmA,/* 83: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum4_e, /* 84: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.SpeedReq,/* 85: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle,/* 86: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle1,/* 87: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DirectionReq,/* 88: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.SteeringAnglerad,/* 89: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.dem,    /* 90: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DirectionFb,/* 91: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Memory1,/* 92: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_p,  /* 93: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.MovingAverage,/* 94: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product,/* 95: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.RateTransition,/* 96: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Switch, /* 97: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Switch2,/* 98: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Switch3,/* 99: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Switch4,/* 100: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TiltingAngle,/* 101: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Abs,    /* 102: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle_p,/* 103: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_a,/* 104: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.RightTiltMotor_SpeedReqrpm_m,/* 105: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_SpeedReqrpm,/* 106: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain2_m,/* 107: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain3,  /* 108: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain4,  /* 109: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain5,  /* 110: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA,/* 111: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TorqueConstant,/* 112: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PosReqm,/* 113: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.n,      /* 114: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_sinreqdeg_c,/* 115: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.SineWave2,/* 116: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum1,   /* 117: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_m,/* 118: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_CurrentReqmA_n,/* 119: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ManualSwitch3,/* 120: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ManualSwitch4,/* 121: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_stepreqfdeg,/* 122: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold2,/* 123: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3,/* 124: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold4,/* 125: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Fb_Angle_Filtdeg,/* 126: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TractionReq_a,/* 127: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_e,/* 128: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle2,/* 129: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle3,/* 130: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain1_e,/* 131: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Speed_SI,/* 132: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.VehSpeed_SI,/* 133: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.VehSpeed_Kmh,/* 134: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_k,/* 135: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b,/* 136: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n,/* 137: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au,/* 138: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit,/* 139: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.InitStatus_a,/* 140: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Constant,/* 141: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_g,/* 142: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_m,/* 143: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k2,/* 144: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_p,/* 145: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CurrentInit,/* 146: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_b,  /* 147: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_n,/* 148: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_o,/* 149: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b,/* 150: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_a,/* 151: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.InitStatus_f,/* 152: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Constant_j,/* 153: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_e,/* 154: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_mc,/* 155: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_mu,/* 156: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i4,/* 157: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_h,/* 158: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_f,/* 159: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m,/* 160: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_m,/* 161: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.InitStatus_k,/* 162: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Constant_m,/* 163: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_h,/* 164: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_j,/* 165: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_bj,/* 166: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_ar,/* 167: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError,/* 168: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode,/* 169: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl,/* 170: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable,/* 171: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.InitStatus,/* 172: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Constant_e,/* 173: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_d,/* 174: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_jv,/* 175: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k,/* 176: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i,/* 177: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataPresent,/* 178: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o2,/* 179: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o3,/* 180: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o4,/* 181: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o5,/* 182: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o6[0],/* 183: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o1,/* 184: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o2_e,/* 185: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o3_m,/* 186: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o4_a,/* 187: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o5_h,/* 188: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o6_h[0],/* 189: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Br_CurrentReq,/* 190: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion,/* 191: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_c,/* 192: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq,/* 193: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain1,  /* 194: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain2,  /* 195: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.br_percent2,/* 196: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation,/* 197: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation1,/* 198: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation2,/* 199: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum,    /* 200: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum1_g, /* 201: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2,   /* 202: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay_o,/* 203: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispLeftVolt,/* 204: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispLeftm,/* 205: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Memory1_l,/* 206: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispLeftOffsetVolt,/* 207: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter,/* 208: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispRightVolt,/* 209: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispRightm,/* 210: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Memory1_j,/* 211: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispRightOffsetVolt,/* 212: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter_e,/* 213: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_out_i,/* 214: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.timer_a,/* 215: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative.ud,/* 216: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative.yf,/* 217: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Hyst_g, /* 218: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1,/* 219: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Integral,/* 220: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AntiWindup,/* 221: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.IntegralGain,/* 222: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Proportional,/* 223: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.tometer,/* 224: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product1,/* 225: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product2,/* 226: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation_c,/* 227: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_c,  /* 228: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_in,   /* 229: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2_d, /* 230: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum4,   /* 231: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold,/* 232: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay,  /* 233: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_f.e_out,/* 234: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_f.timer,/* 235: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_f.ud,/* 236: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_f.yf,/* 237: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_f,/* 238: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Integral_a,/* 239: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AntiWindup_c,/* 240: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.IntegralGain_h,/* 241: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Proportional_l,/* 242: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.c1,     /* 243: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Hyst_n, /* 244: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product1_l,/* 245: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product2_n,/* 246: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation_b,/* 247: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation2_k,/* 248: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_j,  /* 249: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_in_p, /* 250: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2_d4,/* 251: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum4_d, /* 252: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_m,/* 253: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay_e,/* 254: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_out,  /* 255: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.timer,  /* 256: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_g.ud,/* 257: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_g.yf,/* 258: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_m,/* 259: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Integral_j,/* 260: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AntiWindup_p,/* 261: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.IntegralGain_f,/* 262: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Proportional_b,/* 263: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.c1_d,   /* 264: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Hyst_e, /* 265: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product1_g,/* 266: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product2_a,/* 267: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation_d,/* 268: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation2_i,/* 269: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_d,  /* 270: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_in_b, /* 271: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2_o, /* 272: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum4_g, /* 273: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_l,/* 274: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay_b,/* 275: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_b.e_out,/* 276: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_b.timer,/* 277: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_b.ud,/* 278: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_b.yf,/* 279: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_b,/* 280: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Integral_p,/* 281: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AntiWindup_pe,/* 282: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.IntegralGain_g,/* 283: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Proportional_j,/* 284: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.c1_f,   /* 285: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Hyst_i, /* 286: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product1_a,/* 287: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product2_e,/* 288: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation_m,/* 289: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation2_g,/* 290: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_o,  /* 291: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_in_i, /* 292: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2_j, /* 293: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum4_dx,/* 294: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_a,/* 295: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay_d,/* 296: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Clock,  /* 297: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Output, /* 298: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.LookUpTable1,/* 299: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.MathFunction,/* 300: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_f,  /* 301: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Clock_p,/* 302: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Output_d,/* 303: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.LookUpTable1_j,/* 304: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.MathFunction_f,/* 305: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_oi, /* 306: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Clock_pg,/* 307: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Output_c,/* 308: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.LookUpTable1_g,/* 309: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.MathFunction_h,/* 310: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_m,  /* 311: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Compare,/* 312: Signal */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_ej,/* 313: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain_Gain_g,/* 314: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_j,/* 315: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_p,/* 316: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANSetup_P1[0],/* 317: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANSetup_P2,/* 318: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANSetup_P3,/* 319: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_Amp,/* 320: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_Bias,/* 321: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_Freq,/* 322: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_Hsin,/* 323: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_HCos,/* 324: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_PSin,/* 325: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_PCos,/* 326: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain5_Gain_d,/* 327: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Offsetto0pospos180180deg_Value,/* 328: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.RoboticsConvention_Gain,/* 329: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.degree2rad_Gain,/* 330: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.dem_Gain,/* 331: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.inc2deg_Gain,/* 332: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition,/* 333: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_i,/* 334: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.RateTransition_InitialCondition,/* 335: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Kp,/* 336: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Ki,/* 337: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Kd,/* 338: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Ts,/* 339: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Req_lim,/* 340: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Kp,/* 341: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Ki,/* 342: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Kd,/* 343: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Ts,/* 344: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Req_lim,/* 345: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Kp,/* 346: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Ki,/* 347: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Kd,/* 348: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Ts,/* 349: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft1_Req_lim,/* 350: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Kp,/* 351: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Ki,/* 352: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Kd,/* 353: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Ts,/* 354: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Req_lim,/* 355: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.RepeatingSequence1_rep_seq_y[0],/* 356: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.RepeatingSequence2_rep_seq_y[0],/* 357: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.RepeatingSequence3_rep_seq_y[0],/* 358: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_o,/* 359: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain_Gain,/* 360: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_k,/* 361: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain_c,/* 362: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain3_Gain,/* 363: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain4_Gain,/* 364: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain5_Gain,/* 365: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain6_Gain,/* 366: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.TorqueConstant_Gain,/* 367: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain,/* 368: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.n_Gain, /* 369: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave1_Amp,/* 370: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave1_Bias,/* 371: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave1_Freq,/* 372: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave1_Hsin,/* 373: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave1_HCos,/* 374: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave1_PSin,/* 375: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave1_PCos,/* 376: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave2_Amp,/* 377: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave2_Bias,/* 378: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave2_Freq,/* 379: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave2_Hsin,/* 380: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave2_HCos,/* 381: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave2_PSin,/* 382: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave2_PCos,/* 383: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.ManualSwitch_CurrentSetting,/* 384: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.ManualSwitch1_CurrentSetting,/* 385: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.ManualSwitch3_CurrentSetting,/* 386: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.ManualSwitch4_CurrentSetting,/* 387: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_n,/* 388: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain,/* 389: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.WheelRadius_Gain,/* 390: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.ms2Kmh_Gain,/* 391: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_h,/* 392: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CompareToConstant_const,/* 393: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_l,/* 394: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_j,/* 395: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_n,/* 396: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANRead_P1[0],/* 397: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_k,/* 398: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANWrite_P1[0],/* 399: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANRead_P1_n[0],/* 400: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_nv,/* 401: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANWrite_P1_h[0],/* 402: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.offset_Value,/* 403: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Amp2mAmp_Gain,/* 404: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain,/* 405: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain_p,/* 406: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.GetInPercent_Gain,/* 407: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation_UpperSat,/* 408: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation_LowerSat,/* 409: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation1_UpperSat,/* 410: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation1_LowerSat,/* 411: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat,/* 412: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat,/* 413: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength,/* 414: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_m,/* 415: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Offsetfor0deg_Value,/* 416: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.LSB2Volt_Gain,/* 417: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Volt2meter_Gain,/* 418: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition_k,/* 419: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef[0],/* 420: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef[0],/* 421: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_InitialStates,/* 422: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Offsetfor0deg_Value_f,/* 423: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.LSB2Volt_Gain_k,/* 424: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Volt2meter_Gain_f,/* 425: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition_o,/* 426: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef_f[0],/* 427: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef_e[0],/* 428: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_InitialStates_h,/* 429: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant3_Value,/* 430: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainval,/* 431: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC,/* 432: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.tometer_Gain,/* 433: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength_c,/* 434: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition,/* 435: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_d,/* 436: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_d,/* 437: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC_j,/* 438: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.c1_Gain,/* 439: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain_d,/* 440: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat_b,/* 441: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat_n,/* 442: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength_e,/* 443: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_p,/* 444: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_i,/* 445: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_h,/* 446: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC_o,/* 447: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.c1_Gain_e,/* 448: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain_b,/* 449: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat_i,/* 450: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat_a,/* 451: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength_p,/* 452: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_gi,/* 453: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_a,/* 454: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_p,/* 455: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC_d,/* 456: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.c1_Gain_j,/* 457: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain_j,/* 458: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat_f,/* 459: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat_i,/* 460: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength_j,/* 461: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_g,/* 462: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value,/* 463: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.LookUpTable1_bp01Data[0],/* 464: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_d,/* 465: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.LookUpTable1_bp01Data_k[0],/* 466: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_e,/* 467: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.LookUpTable1_bp01Data_h[0],/* 468: Block Parameter */
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
  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), SS_INT8, 0, 0 },

  { "int", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0 },

  { "numeric", "int64_T", 0, 0, sizeof(int64_T), SS_INT64, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 },

  { "numeric", "int64_T", 0, 0, sizeof(int64_T), SS_INT64, 0, 0 },

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

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 }
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
  8,                                   /* 7 */
  1,                                   /* 8 */
  6,                                   /* 9 */
  1,                                   /* 10 */
  7,                                   /* 11 */
  1,                                   /* 12 */
  3                                    /* 13 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.002, 0.0, 0.001, 1.0, 0.005, 0.1, 0.0005
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -15, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -26, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -31, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -15, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -34, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -26, 1 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    4, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    3, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    7, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[1],
    5, 0 },

  { (const void *) &rtcapiStoredFloats[5], (const void *) &rtcapiStoredFloats[1],
    6, 0 },

  { (const void *) &rtcapiStoredFloats[6], (const void *) &rtcapiStoredFloats[1],
    2, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
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
  { rtBlockSignals, 310,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 156,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3113335729U,
    3227724859U,
    3017501639U,
    1977327372U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  SpeedgoatCANOpen2Buses1ms_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void SpeedgoatCANOpen2Buses1ms_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi,
    (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(SpeedgoatCANOpen2Buses1ms_M);
  SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_SpeedgoatCANOpen2Buses1ms_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(SpeedgoatCANOpen2Buses1ms_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void SpeedgoatCANOpen2Buses1ms_host_InitializeDataMapInfo
    (SpeedgoatCANOpen2Buses1ms_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: SpeedgoatCANOpen2Buses1ms_capi.c */
