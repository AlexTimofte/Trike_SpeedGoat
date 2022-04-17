/*
 * SpeedgoatCANOpen2Buses100us_capi.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.861
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Apr 16 13:38:03 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SpeedgoatCANOpen2Buses100us_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#ifndef SS_INT64
#define SS_INT64                       34
#endif

#ifndef SS_UINT64
#define SS_UINT64                      35
#endif

#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "SpeedgoatCANOpen2Buses100us.h"
#include "SpeedgoatCANOpen2Buses100us_capi.h"
#include "SpeedgoatCANOpen2Buses100us_private.h"
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
    TARGET_STRING("APT_PhaseCurrent"), 1, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p3"),
    TARGET_STRING("APT_Speed"), 2, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p4"),
    TARGET_STRING("APT_BusVoltage"), 3, 2, 0, 0, 0 },

  { 8, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p5"),
    TARGET_STRING("APT_MotorTemp"), 4, 3, 0, 0, 0 },

  { 9, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p6"),
    TARGET_STRING("APT_Temp"), 5, 3, 0, 0, 0 },

  { 10, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p7"),
    TARGET_STRING("APT_ErrStatus"), 6, 1, 0, 0, 0 },

  { 11, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p8"),
    TARGET_STRING("APT_Direction"), 7, 1, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Enable"), 0, 1, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Dunk_Brakes/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkD_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Dunk_Brakes/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkD_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Dunk_LeftTilt/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkC_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Dunk_LeftTilt/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkC_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Dunk_RightTilt/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkB_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Dunk_RightTilt/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkB_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Dunk_Steering/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkA_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Dunk_Steering/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkA_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p1"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 6, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p2"),
    TARGET_STRING("Encoder_Stored_Position"), 1, 6, 0, 0, 0 },

  { 24, 1, TARGET_STRING("Inclinometer_RPDOs/Conv/p1"),
    TARGET_STRING("X_Angle"), 0, 7, 0, 0, 0 },

  { 25, 1, TARGET_STRING("Inclinometer_RPDOs/Conv/p2"),
    TARGET_STRING("Y_Angle"), 1, 7, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Inclinometer_RPDOs/Constant"),
    TARGET_STRING("Enable"), 0, 1, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p1"),
    TARGET_STRING("xS"), 0, 1, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p2"),
    TARGET_STRING("xH"), 1, 1, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p3"),
    TARGET_STRING("xL"), 2, 1, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p4"),
    TARGET_STRING("yS"), 3, 1, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p5"),
    TARGET_STRING("yH"), 4, 1, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p6"),
    TARGET_STRING("yL"), 5, 1, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p1"),
    TARGET_STRING("Joystick_ButtonsStatus"), 0, 1, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p2"),
    TARGET_STRING("Joystick_LongCmd"), 1, 8, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p3"),
    TARGET_STRING("Joystick_LatCmd"), 2, 8, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single"),
    TARGET_STRING("AN_01"), 0, 0, 0, 0, 1 },

  { 37, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single1"),
    TARGET_STRING("AN_02"), 0, 0, 0, 0, 1 },

  { 38, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single2"),
    TARGET_STRING("AN_03"), 0, 0, 0, 0, 1 },

  { 39, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single3"),
    TARGET_STRING("AN_04"), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 41, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 42, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 43, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 44, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion22"),
    TARGET_STRING("DunkB_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 45, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion23"),
    TARGET_STRING("DunkB_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 46, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion24"),
    TARGET_STRING("DunkB_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 47, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion25"),
    TARGET_STRING("DunkB_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 48, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion26"),
    TARGET_STRING("DunkB_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 49, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion27"),
    TARGET_STRING("DunkC_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 50, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion28"),
    TARGET_STRING("DunkC_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 51, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion29"),
    TARGET_STRING("DunkC_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion3"),
    TARGET_STRING("DunkA_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 53, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion30"),
    TARGET_STRING("DunkC_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 54, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion31"),
    TARGET_STRING("DunkC_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 55, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion32"),
    TARGET_STRING("DunkD_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 56, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion33"),
    TARGET_STRING("DunkD_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 57, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion34"),
    TARGET_STRING("DunkD_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 58, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion35"),
    TARGET_STRING("DunkD_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 59, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion36"),
    TARGET_STRING("DunkD_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion4"),
    TARGET_STRING("DunkA_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 61, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion6"),
    TARGET_STRING("DunkA_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion7"),
    TARGET_STRING("DunkA_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 63, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion8"),
    TARGET_STRING("DunkA_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 64, 4, TARGET_STRING("Trike Application Layer/CAN_B/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 65, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion"),
    TARGET_STRING("APT_TPDO_ControlWord"), 0, 1, 0, 0, 0 },

  { 66, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion1"),
    TARGET_STRING("APT_TPDO_PedalPosition"), 0, 1, 0, 0, 0 },

  { 67, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion2"),
    TARGET_STRING("APT_TPDO_Heartbeat"), 0, 1, 0, 0, 0 },

  { 68, 0, TARGET_STRING("Trike Application Layer/System_Control/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 69, 12, TARGET_STRING("Trike Application Layer/System_Init/APTControlWord"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 70, 14, TARGET_STRING("Trike Application Layer/System_Init/ButtonStatus"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 71, 15, TARGET_STRING("Trike Application Layer/System_Init/EnableCtrl"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Trike Application Layer/System_Init/Cast To Single3"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 73, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 74, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 75, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 76, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 77, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 78, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 79, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl/p1"),
    TARGET_STRING("Retract_current"), 0, 7, 0, 0, 0 },

  { 80, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 81, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain5"),
    TARGET_STRING("BrakesMotor_CurrentInit [mA]"), 0, 4, 0, 1, 0 },

  { 82, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 83, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/P Controller"),
    TARGET_STRING(""), 0, 7, 0, 0, 2 },

  { 84, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 85, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 86, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Robotics Convention"),
    TARGET_STRING("DirectionReq"), 0, 8, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/degree2rad"),
    TARGET_STRING("SteeringAngle [rad]"), 0, 8, 0, 0, 0 },

  { 88, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/dem"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/inc2deg"),
    TARGET_STRING("DirectionFb"), 0, 7, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 91, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 92, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Moving Average"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 93, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 94, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 95, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 96, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 97, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 98, 11, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/ServoTilting"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 7, 0, 0, 0 },

  { 99, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 100, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 101, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 103, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("PosReq [m]"), 0, 7, 0, 0, 1 },

  { 104, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 105, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Product2"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 106, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 7, 0, 0, 1 },

  { 107, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 108, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Abs"),
    TARGET_STRING("TractionReq"), 0, 7, 0, 0, 0 },

  { 109, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 110, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 111, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single3"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 112, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 113, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Speed_SI"), 0, 7, 0, 0, 0 },

  { 114, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("VehSpeed_SI"), 0, 7, 0, 0, 0 },

  { 115, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/m//s2Km//h"),
    TARGET_STRING("VehSpeed_Km/h"), 0, 7, 0, 0, 0 },

  { 116, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 117, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 118, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 119, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 0 },

  { 120, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 121, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p6"),
    TARGET_STRING(""), 5, 8, 0, 0, 0 },

  { 122, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 123, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 124, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 125, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 126, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 127, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single4"),
    TARGET_STRING("CurrentInit"), 0, 0, 0, 0, 0 },

  { 128, 0, TARGET_STRING("Trike Application Layer/System_Init/Enable/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 129, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 130, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 131, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 132, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 0 },

  { 133, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 134, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 135, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 136, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 137, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 138, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 139, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 140, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 141, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 142, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 0 },

  { 143, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 144, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 145, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 146, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 147, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 148, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 149, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 150, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 151, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 152, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 0 },

  { 153, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 154, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 155, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 156, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 157, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 158, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 159, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 9, 0, 0, 0 },

  { 160, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 161, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 162, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 163, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 164, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 165, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 166, 2, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 167, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 9, 0, 0, 0 },

  { 168, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 169, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 170, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 171, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 172, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 173, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 174, 3, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 175, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Retract"),
    TARGET_STRING("Retract_current"), 0, 8, 0, 0, 0 },

  { 176, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 177, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 178, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp"),
    TARGET_STRING("BrakesMotor_CurrentReq"), 0, 7, 0, 0, 0 },

  { 179, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 180, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 181, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent"),
    TARGET_STRING("br_percent2"), 0, 7, 0, 0, 0 },

  { 182, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 183, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 184, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 185, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 186, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 187, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 188, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 189, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt"),
    TARGET_STRING("DispLeft [Volt]"), 0, 4, 0, 2, 0 },

  { 190, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter"),
    TARGET_STRING("DispLeft [m]"), 0, 7, 0, 0, 0 },

  { 191, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1"),
    TARGET_STRING("DispLeft [m] filt"), 0, 7, 0, 0, 2 },

  { 192, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Sum"),
    TARGET_STRING("DispLeftOffset [Volt]"), 0, 7, 0, 0, 0 },

  { 193, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING(""), 0, 7, 0, 0, 2 },

  { 194, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 0 },

  { 195, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 196, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 197, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Derivative Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 198, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/FilterOrder"),
    TARGET_STRING("Derivative"), 0, 7, 0, 0, 1 },

  { 199, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 200, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Proportional  Gain"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 1 },

  { 201, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/c1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 202, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Product"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 203, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 204, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 205, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 206, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 207, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Sum1"),
    TARGET_STRING("e"), 0, 7, 0, 0, 1 },

  { 208, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 209, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Sum3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 210, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 211, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Enable/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 9, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 212, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 213, TARGET_STRING("Dunk_LeftTilt/Gain"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 214, TARGET_STRING("Inclinometer_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 215, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 7, 2, 0 },

  { 216, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 7, 0, 0 },

  { 217, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 7, 0, 0 },

  { 218, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 219, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 220, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 221, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 222, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 223, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 224, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 225, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 226, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 227, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 228, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 229, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 230, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 231, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 232, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 233, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 234, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 4 },

  { 235, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Offset to 0 pos => pos = [-180 180]deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 236, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Robotics Convention"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 237, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/degree2rad"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 238, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/dem"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 239, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/inc2deg"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 240, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 241, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 242, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 243, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 244, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 245, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl"),
    TARGET_STRING("N"), 7, 0, 0 },

  { 246, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 247, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 248, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 249, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 250, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 251, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 252, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 253, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 254, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 255, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch3"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 256, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 257, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 258, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 259, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/m//s2Km//h"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 260, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 261, TARGET_STRING("Trike Application Layer/System_Init/Enable/Compare To Constant"),
    TARGET_STRING("const"), 8, 0, 0 },

  { 262, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 263, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 264, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 265, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 7, 3, 0 },

  { 266, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 267, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 268, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 7, 4, 0 },

  { 269, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 7, 3, 0 },

  { 270, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 271, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 272, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 7, 4, 0 },

  { 273, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/offset"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 274, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 275, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 276, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 277, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 278, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 279, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 280, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 2, 0, 0 },

  { 281, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 2, 0, 0 },

  { 282, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 283, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 284, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 285, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 286, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Offset for 0 deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 287, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt"),
    TARGET_STRING("Gain"), 0, 0, 5 },

  { 288, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 289, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 290, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("Numerator"), 7, 5, 0 },

  { 291, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("Denominator"), 7, 5, 0 },

  { 292, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("InitialStates"), 7, 0, 0 },

  { 293, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 294, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 295, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 296, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 297, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl/c1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

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
  &SpeedgoatCANOpen2Buses100us_B.Channel_AN1,/* 0: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Channel_AN2,/* 1: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Channel_AN3,/* 2: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Channel_AN4,/* 3: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_StatusWord,/* 4: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_PhaseCurrent,/* 5: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_Speed,/* 6: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_BusVoltage,/* 7: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_MotorTemp,/* 8: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_Temp,/* 9: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_ErrStatus,/* 10: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_Direction,/* 11: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Enable_c,/* 12: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent,/* 13: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity,/* 14: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv,/* 15: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,/* 16: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity,/* 17: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,/* 18: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity,/* 19: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,/* 20: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity,/* 21: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,/* 22: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position,/* 23: Signal */
  &SpeedgoatCANOpen2Buses100us_B.xAngle,/* 24: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yAngle,/* 25: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Enable_l,/* 26: Signal */
  &SpeedgoatCANOpen2Buses100us_B.xS,   /* 27: Signal */
  &SpeedgoatCANOpen2Buses100us_B.xH,   /* 28: Signal */
  &SpeedgoatCANOpen2Buses100us_B.xL,   /* 29: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yS,   /* 30: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yH,   /* 31: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yL,   /* 32: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus,/* 33: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd,/* 34: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd,/* 35: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_01,/* 36: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_02,/* 37: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_03,/* 38: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_04,/* 39: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave,/* 40: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave1,/* 41: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave2,/* 42: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave3,/* 43: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,/* 44: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,/* 45: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,/* 46: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,/* 47: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent,/* 48: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,/* 49: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,/* 50: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,/* 51: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,/* 52: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,/* 53: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent,/* 54: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,/* 55: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,/* 56: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,/* 57: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,/* 58: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent,/* 59: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,/* 60: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,/* 61: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,/* 62: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent,/* 63: Signal */
  &SpeedgoatCANOpen2Buses100us_B.HB,   /* 64: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,/* 65: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,/* 66: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat,/* 67: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_e,/* 68: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_CtrlWord,/* 69: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Button,/* 70: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Enable,/* 71: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle3_p,/* 72: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,/* 73: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,/* 74: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0],/* 75: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n,/* 76: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n,/* 77: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n[0],/* 78: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o,/* 79: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b4,/* 80: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInitmA,/* 81: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum4_e,/* 82: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedReq,/* 83: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_g,/* 84: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g,/* 85: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionReq,/* 86: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad,/* 87: Signal */
  &SpeedgoatCANOpen2Buses100us_B.dem,  /* 88: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionFb,/* 89: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory1,/* 90: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_p,/* 91: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MovingAverage,/* 92: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch,/* 93: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch1,/* 94: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch2,/* 95: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch3,/* 96: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch4,/* 97: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngle,/* 98: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant,/* 99: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle,/* 100: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1,/* 101: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA,/* 102: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PosReqm,/* 103: Signal */
  &SpeedgoatCANOpen2Buses100us_B.n,    /* 104: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product2_a,/* 105: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngledeg,/* 106: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ManualSwitch3,/* 107: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TractionReq,/* 108: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1_e,/* 109: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle2,/* 110: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle3,/* 111: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1_e,/* 112: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Speed_SI,/* 113: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI,/* 114: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh,/* 115: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_k,/* 116: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_b,/* 117: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n,/* 118: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_au,/* 119: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit,/* 120: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus_a,/* 121: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_g,/* 122: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_g,/* 123: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_m,/* 124: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k,/* 125: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_p,/* 126: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CurrentInit,/* 127: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_b,/* 128: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_n,/* 129: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_o,/* 130: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b,/* 131: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_a,/* 132: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus_f,/* 133: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_j,/* 134: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_e,/* 135: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_mc,/* 136: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_mu,/* 137: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_i4,/* 138: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_h,/* 139: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_f,/* 140: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m,/* 141: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_m,/* 142: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus_k,/* 143: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_m,/* 144: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_h,/* 145: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_j,/* 146: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_bj,/* 147: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_ar,/* 148: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError,/* 149: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode,/* 150: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl,/* 151: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable,/* 152: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus,/* 153: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_e,/* 154: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_d,/* 155: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_jv,/* 156: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0,/* 157: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_i,/* 158: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1,/* 159: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2,/* 160: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3,/* 161: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4,/* 162: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5,/* 163: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0],/* 164: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_c,/* 165: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_ge,/* 166: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b,/* 167: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e,/* 168: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m,/* 169: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a,/* 170: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h,/* 171: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h[0],/* 172: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_g,/* 173: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_em,/* 174: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Br_CurrentReq,/* 175: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DataTypeConversion,/* 176: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DataTypeConversion1,/* 177: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq,/* 178: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1,/* 179: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2,/* 180: Signal */
  &SpeedgoatCANOpen2Buses100us_B.br_percent2,/* 181: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation,/* 182: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation1,/* 183: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation2,/* 184: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum,  /* 185: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum1, /* 186: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum2, /* 187: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Delay,/* 188: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftVolt,/* 189: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftm,/* 190: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_k,/* 191: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt,/* 192: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DiscreteFilter,/* 193: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Integral,/* 194: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DiscreteTimeIntegrator1,/* 195: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AntiWindup,/* 196: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DerivativeGain,/* 197: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Derivative,/* 198: Signal */
  &SpeedgoatCANOpen2Buses100us_B.IntegralGain,/* 199: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Proportional,/* 200: Signal */
  &SpeedgoatCANOpen2Buses100us_B.c1,   /* 201: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product,/* 202: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product1,/* 203: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product2,/* 204: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation_j,/* 205: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_e,/* 206: Signal */
  &SpeedgoatCANOpen2Buses100us_B.e,    /* 207: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum2_g,/* 208: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum3, /* 209: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum4, /* 210: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Compare,/* 211: Signal */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_e,/* 212: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain_Gain,/* 213: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_p,/* 214: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0],/* 215: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P2,/* 216: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P3,/* 217: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Amp,/* 218: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Bias,/* 219: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Freq,/* 220: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Phase,/* 221: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp,/* 222: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias,/* 223: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq,/* 224: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase,/* 225: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp,/* 226: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias,/* 227: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq,/* 228: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase,/* 229: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp,/* 230: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias,/* 231: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq,/* 232: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase,/* 233: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain5_Gain,/* 234: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value,/* 235: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain,/* 236: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain,/* 237: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.dem_Gain,/* 238: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain,/* 239: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition,/* 240: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value,/* 241: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Kp,/* 242: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Ki,/* 243: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Kd,/* 244: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl_N,/* 245: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl_Req_lim,/* 246: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_c,/* 247: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain_Gain_l,/* 248: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2m_Gain,/* 249: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.n_Gain,/* 250: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp_n,/* 251: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias_n,/* 252: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq_d,/* 253: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase_m,/* 254: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ManualSwitch3_CurrentSetting,/* 255: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain,/* 256: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k,/* 257: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain,/* 258: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain,/* 259: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_h,/* 260: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const,/* 261: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_l,/* 262: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_j,/* 263: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_n,/* 264: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0],/* 265: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold,/* 266: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_k,/* 267: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0],/* 268: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0],/* 269: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l,/* 270: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv,/* 271: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0],/* 272: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.offset_Value,/* 273: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain,/* 274: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c,/* 275: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain,/* 276: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.GetInPercent_Gain,/* 277: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat,/* 278: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat,/* 279: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat,/* 280: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat,/* 281: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation2_UpperSat,/* 282: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation2_LowerSat,/* 283: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Delay_DelayLength,/* 284: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition,/* 285: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg_Value,/* 286: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain,/* 287: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain,/* 288: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_k,/* 289: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[0],/* 290: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[0],/* 291: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates,/* 292: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval,/* 293: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC,/* 294: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator1_gainval,/* 295: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator1_IC,/* 296: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.c1_Gain,/* 297: Block Parameter */
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

  { rtwCAPI_VECTOR, 10, 2, 0 }
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
  7,                                   /* 9 */
  1,                                   /* 10 */
  3                                    /* 11 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0001, 0.0, 1.0, 0.005
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -15, 1 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -26, 1 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -31, 1 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -15, 1 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -26, 1 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    2, 0 }
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
  { rtBlockSignals, 210,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 86,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2704757608U,
    2182707846U,
    1980776205U,
    1161989660U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  SpeedgoatCANOpen2Buses100us_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void SpeedgoatCANOpen2Buses100us_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi,
                       &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi,
    (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(SpeedgoatCANOpen2Buses100us_M);
  SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_SpeedgoatCANOpen2Buses100us_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(SpeedgoatCANOpen2Buses100us_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void SpeedgoatCANOpen2Buses100us_host_InitializeDataMapInfo
    (SpeedgoatCANOpen2Buses100us_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: SpeedgoatCANOpen2Buses100us_capi.c */
