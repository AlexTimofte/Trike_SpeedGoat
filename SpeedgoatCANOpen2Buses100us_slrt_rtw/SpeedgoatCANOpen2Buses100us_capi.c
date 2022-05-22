/*
 * SpeedgoatCANOpen2Buses100us_capi.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.893
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat May 21 12:32:19 2022
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
#define SS_INT64                       38
#endif

#ifndef SS_UINT64
#define SS_UINT64                      39
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

  { 17, 0, TARGET_STRING("Dunk_LeftTilt/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkC_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Dunk_LeftTilt/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkC_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Dunk_RightTilt/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkB_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Dunk_RightTilt/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkB_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Dunk_Steering/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkA_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Dunk_Steering/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkA_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p1"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 6, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p2"),
    TARGET_STRING("Encoder_Stored_Position"), 1, 6, 0, 0, 0 },

  { 25, 1, TARGET_STRING("Inclinometer_RPDOs/Conv/p1"),
    TARGET_STRING("X_Angle"), 0, 7, 0, 0, 0 },

  { 26, 1, TARGET_STRING("Inclinometer_RPDOs/Conv/p2"),
    TARGET_STRING("Y_Angle"), 1, 7, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Inclinometer_RPDOs/Constant"),
    TARGET_STRING("Enable"), 0, 1, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p1"),
    TARGET_STRING("xS"), 0, 1, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p2"),
    TARGET_STRING("xH"), 1, 1, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p3"),
    TARGET_STRING("xL"), 2, 1, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p4"),
    TARGET_STRING("yS"), 3, 1, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p5"),
    TARGET_STRING("yH"), 4, 1, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Inclinometer_RPDOs/RPDOs from Inclinometer /p6"),
    TARGET_STRING("yL"), 5, 1, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p1"),
    TARGET_STRING("Joystick_ButtonsStatus"), 0, 1, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p2"),
    TARGET_STRING("Joystick_LongCmd"), 1, 8, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p3"),
    TARGET_STRING("Joystick_LatCmd"), 2, 8, 0, 0, 0 },

  { 37, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single"),
    TARGET_STRING("AN_01"), 0, 0, 0, 0, 1 },

  { 38, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single1"),
    TARGET_STRING("AN_02"), 0, 0, 0, 0, 1 },

  { 39, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single2"),
    TARGET_STRING("AN_03"), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single3"),
    TARGET_STRING("AN_04"), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 42, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 43, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 44, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 45, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion22"),
    TARGET_STRING("DunkB_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 46, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion23"),
    TARGET_STRING("DunkB_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 47, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion24"),
    TARGET_STRING("DunkB_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 48, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion25"),
    TARGET_STRING("DunkB_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 49, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion26"),
    TARGET_STRING("DunkB_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 50, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion27"),
    TARGET_STRING("DunkC_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 51, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion28"),
    TARGET_STRING("DunkC_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion29"),
    TARGET_STRING("DunkC_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 53, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion3"),
    TARGET_STRING("DunkA_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 54, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion30"),
    TARGET_STRING("DunkC_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 55, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion31"),
    TARGET_STRING("DunkC_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 56, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion32"),
    TARGET_STRING("DunkD_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 57, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion33"),
    TARGET_STRING("DunkD_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 58, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion34"),
    TARGET_STRING("DunkD_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 59, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion35"),
    TARGET_STRING("DunkD_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion36"),
    TARGET_STRING("DunkD_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 61, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion4"),
    TARGET_STRING("DunkA_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion6"),
    TARGET_STRING("DunkA_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 63, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion7"),
    TARGET_STRING("DunkA_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 64, 0, TARGET_STRING("Trike Application Layer/CAN_A/Data Type Conversion8"),
    TARGET_STRING("DunkA_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 65, 4, TARGET_STRING("Trike Application Layer/CAN_B/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 66, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion"),
    TARGET_STRING("APT_TPDO_ControlWord"), 0, 1, 0, 0, 0 },

  { 67, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion1"),
    TARGET_STRING("APT_TPDO_PedalPosition"), 0, 1, 0, 0, 0 },

  { 68, 0, TARGET_STRING("Trike Application Layer/CAN_B/Data Type Conversion2"),
    TARGET_STRING("APT_TPDO_Heartbeat"), 0, 1, 0, 0, 0 },

  { 69, 0, TARGET_STRING("Trike Application Layer/System_Control/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 70, 17, TARGET_STRING("Trike Application Layer/System_Init/APTControlWord"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 71, 19, TARGET_STRING("Trike Application Layer/System_Init/ButtonStatus"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 72, 20, TARGET_STRING("Trike Application Layer/System_Init/EnableCtrl"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 73, 0, TARGET_STRING("Trike Application Layer/System_Init/Cast To Single3"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 74, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 75, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 76, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 77, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 78, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 79, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 80, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl/p1"),
    TARGET_STRING("Retract_current"), 0, 7, 0, 0, 0 },

  { 81, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/DecisionBrakeCtrl/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 82, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain5"),
    TARGET_STRING("BrakesMotor_CurrentInit [mA]"), 0, 4, 0, 1, 0 },

  { 83, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 84, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/P Controller"),
    TARGET_STRING(""), 0, 7, 0, 0, 2 },

  { 85, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 86, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Robotics Convention"),
    TARGET_STRING("DirectionReq"), 0, 8, 0, 0, 0 },

  { 88, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/degree2rad"),
    TARGET_STRING("SteeringAngle [rad]"), 0, 8, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/dem"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/inc2deg"),
    TARGET_STRING("DirectionFb"), 0, 7, 0, 0, 0 },

  { 91, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 92, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 93, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Moving Average"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 94, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 95, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 96, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 97, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 98, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 99, 16, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/ServoTilting"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 7, 0, 0, 0 },

  { 100, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 101, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 103, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain1"),
    TARGET_STRING("LeftTiltMotor_SpeedReq [rpm]"), 0, 7, 0, 0, 0 },

  { 104, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("PosReq [m]"), 0, 7, 0, 0, 1 },

  { 105, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 106, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Product2"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 107, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 108, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("TiltingAngle_sinreq [deg]"), 0, 7, 0, 0, 1 },

  { 109, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sum"),
    TARGET_STRING("Fb_Angle [deg]"), 0, 7, 0, 0, 0 },

  { 110, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 111, 11, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch4"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 112, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold"),
    TARGET_STRING(""), 0, 9, 0, 0, 2 },

  { 113, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold1"),
    TARGET_STRING("TiltingAngle_stepreqf [deg]"), 0, 7, 0, 0, 2 },

  { 114, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold2"),
    TARGET_STRING(""), 0, 4, 0, 0, 2 },

  { 115, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold3"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 116, 12, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Moving Average"),
    TARGET_STRING("Fb_Angle_Filt [deg]"), 0, 7, 0, 0, 0 },

  { 117, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Abs"),
    TARGET_STRING("TractionReq"), 0, 7, 0, 0, 0 },

  { 118, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 119, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 120, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single3"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 121, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 122, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Speed_SI"), 0, 7, 0, 0, 0 },

  { 123, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("VehSpeed_SI"), 0, 7, 0, 0, 0 },

  { 124, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/m//s2Km//h"),
    TARGET_STRING("VehSpeed_Km/h"), 0, 7, 0, 0, 0 },

  { 125, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 126, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 127, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 128, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 0 },

  { 129, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 130, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p6"),
    TARGET_STRING(""), 5, 8, 0, 0, 0 },

  { 131, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 132, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 133, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 134, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 135, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 136, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single4"),
    TARGET_STRING("CurrentInit"), 0, 0, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Trike Application Layer/System_Init/Enable/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 138, 21, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 139, 21, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 140, 21, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 141, 21, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 0 },

  { 142, 21, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 143, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 144, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 145, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 146, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 147, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 148, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 149, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 150, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 151, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 0 },

  { 152, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 153, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 154, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 155, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 156, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 157, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 158, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 159, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 160, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 161, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 0 },

  { 162, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 163, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 164, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 165, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 166, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 167, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 168, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 9, 0, 0, 0 },

  { 169, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 170, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 171, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 172, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 173, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 174, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 175, 2, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 176, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 9, 0, 0, 0 },

  { 177, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 178, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 179, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 180, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 181, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 182, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 183, 3, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 184, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Retract"),
    TARGET_STRING("Retract_current"), 0, 8, 0, 0, 0 },

  { 185, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 186, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 187, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp"),
    TARGET_STRING("BrakesMotor_CurrentReq"), 0, 7, 0, 0, 0 },

  { 188, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 189, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 190, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent"),
    TARGET_STRING("br_percent2"), 0, 7, 0, 0, 0 },

  { 191, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 192, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 193, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 194, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 195, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 196, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 197, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 198, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt"),
    TARGET_STRING("DispLeft [Volt]"), 0, 4, 0, 2, 0 },

  { 199, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter"),
    TARGET_STRING("DispLeft [m]"), 0, 7, 0, 0, 0 },

  { 200, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 2 },

  { 201, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Sum"),
    TARGET_STRING("DispLeftOffset [Volt]"), 0, 7, 0, 0, 0 },

  { 202, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING(""), 0, 7, 0, 0, 2 },

  { 203, 15, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Derivative/p1"),
    TARGET_STRING("derivative"), 0, 8, 0, 0, 2 },

  { 204, 15, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Derivative/p2"),
    TARGET_STRING("yf"), 1, 8, 0, 0, 2 },

  { 205, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 3 },

  { 206, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 207, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Derivative Gain"),
    TARGET_STRING("kd"), 0, 7, 0, 0, 0 },

  { 208, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 209, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Proportional  Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 210, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/c1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 211, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 212, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 213, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 214, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Saturation1"),
    TARGET_STRING("Derivative_sat"), 0, 7, 0, 0, 0 },

  { 215, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 216, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Sum1"),
    TARGET_STRING("e"), 0, 7, 0, 0, 0 },

  { 217, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 218, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 219, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Zero-Order Hold"),
    TARGET_STRING(""), 0, 7, 0, 0, 2 },

  { 220, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Delay"),
    TARGET_STRING(""), 0, 7, 0, 0, 2 },

  { 221, 13, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Moving Average1"),
    TARGET_STRING("kd_ma"), 0, 7, 0, 0, 0 },

  { 222, 14, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Moving Average2"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 0 },

  { 223, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Clock"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 224, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Output"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 225, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Look-Up Table1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 226, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Math Function"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 227, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 228, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Enable/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 9, 0, 0, 0 },

  { 229, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete Derivative/Diff"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 230, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete Derivative/TSamp"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 231, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete Derivative/UD"),
    TARGET_STRING("U(k-1)"), 0, 7, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 232, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 233, TARGET_STRING("Dunk_LeftTilt/Gain"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 234, TARGET_STRING("Dunk_LeftTilt/Gain1"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 235, TARGET_STRING("Inclinometer_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 236, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 7, 2, 0 },

  { 237, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 7, 0, 0 },

  { 238, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 7, 0, 0 },

  { 239, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 240, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 241, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 242, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 243, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 244, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 245, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 246, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 247, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 248, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 249, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 250, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 251, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 252, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 253, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 254, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 255, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 4 },

  { 256, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Offset to 0 pos => pos = [-180 180]deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 257, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Robotics Convention"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 258, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/degree2rad"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 259, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/dem"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 260, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/inc2deg"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 261, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 262, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 263, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 264, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 265, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 266, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 267, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1"),
    TARGET_STRING("rep_seq_y"), 7, 3, 0 },

  { 268, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 269, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 270, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 271, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 272, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 273, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Saturation"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 274, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Saturation"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 275, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 276, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 277, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 278, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave1"),
    TARGET_STRING("Phase"), 7, 0, 0 },

  { 279, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch3"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 280, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch4"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 281, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 282, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 283, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 284, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/m//s2Km//h"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 285, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 286, TARGET_STRING("Trike Application Layer/System_Init/Enable/Compare To Constant"),
    TARGET_STRING("const"), 8, 0, 0 },

  { 287, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 288, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 289, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 290, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 7, 4, 0 },

  { 291, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 292, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 293, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 7, 5, 0 },

  { 294, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 7, 4, 0 },

  { 295, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 296, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 297, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 7, 5, 0 },

  { 298, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/offset"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 299, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 300, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 301, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 302, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 303, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 304, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 305, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 2, 0, 0 },

  { 306, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 2, 0, 0 },

  { 307, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 308, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 309, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 310, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 311, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Offset for 0 deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 312, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt"),
    TARGET_STRING("Gain"), 0, 0, 5 },

  { 313, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 314, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 315, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("Numerator"), 7, 6, 0 },

  { 316, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("Denominator"), 7, 6, 0 },

  { 317, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("InitialStates"), 7, 0, 0 },

  { 318, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete Derivative"),
    TARGET_STRING("ICPrevScaledInput"), 7, 0, 0 },

  { 319, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 320, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 321, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/c1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 322, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 323, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Delay"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 324, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 325, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Repeating Sequence1/Look-Up Table1"),
    TARGET_STRING("BreakpointsForDimension1"), 7, 3, 0 },

  { 326, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_ctrl1/Discrete Derivative/TSamp"),
    TARGET_STRING("WtEt"), 7, 0, 0 },

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
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity_Inv,/* 16: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,/* 17: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity,/* 18: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,/* 19: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity,/* 20: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,/* 21: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity,/* 22: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,/* 23: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position,/* 24: Signal */
  &SpeedgoatCANOpen2Buses100us_B.xAngle,/* 25: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yAngle,/* 26: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Enable_l,/* 27: Signal */
  &SpeedgoatCANOpen2Buses100us_B.xS,   /* 28: Signal */
  &SpeedgoatCANOpen2Buses100us_B.xH,   /* 29: Signal */
  &SpeedgoatCANOpen2Buses100us_B.xL,   /* 30: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yS,   /* 31: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yH,   /* 32: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yL,   /* 33: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus,/* 34: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd,/* 35: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd,/* 36: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_01,/* 37: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_02,/* 38: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_03,/* 39: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_04,/* 40: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave,/* 41: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave1,/* 42: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave2,/* 43: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave3,/* 44: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,/* 45: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,/* 46: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,/* 47: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,/* 48: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent,/* 49: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,/* 50: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,/* 51: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,/* 52: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,/* 53: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,/* 54: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent,/* 55: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,/* 56: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,/* 57: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,/* 58: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,/* 59: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent,/* 60: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,/* 61: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,/* 62: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,/* 63: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent,/* 64: Signal */
  &SpeedgoatCANOpen2Buses100us_B.HB,   /* 65: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,/* 66: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,/* 67: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat,/* 68: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_e,/* 69: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_CtrlWord,/* 70: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Button,/* 71: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Enable,/* 72: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle3_p,/* 73: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,/* 74: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,/* 75: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0],/* 76: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n,/* 77: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n,/* 78: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n[0],/* 79: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq_o,/* 80: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b4,/* 81: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInitmA,/* 82: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum4_e,/* 83: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedReq,/* 84: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle,/* 85: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1,/* 86: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionReq,/* 87: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad,/* 88: Signal */
  &SpeedgoatCANOpen2Buses100us_B.dem,  /* 89: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionFb,/* 90: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory1,/* 91: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_p,/* 92: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MovingAverage,/* 93: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch,/* 94: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch1,/* 95: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch2,/* 96: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch3,/* 97: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch4,/* 98: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngle,/* 99: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_p,/* 100: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1_a,/* 101: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RightTiltMotor_CurrentReqmA_i,/* 102: Signal */
  &SpeedgoatCANOpen2Buses100us_B.LeftTiltMotor_SpeedReqrpm,/* 103: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PosReqm,/* 104: Signal */
  &SpeedgoatCANOpen2Buses100us_B.n,    /* 105: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product2_a,/* 106: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation_a,/* 107: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngle_sinreqdeg,/* 108: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Fb_Angledeg,/* 109: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ManualSwitch3,/* 110: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ManualSwitch4,/* 111: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold_k,/* 112: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngle_stepreqfdeg_p,/* 113: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold2,/* 114: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold3,/* 115: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Fb_Angle_Filtdeg,/* 116: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TractionReq,/* 117: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1_e,/* 118: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle2,/* 119: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle3,/* 120: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1_e,/* 121: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Speed_SI,/* 122: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI,/* 123: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh,/* 124: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_k,/* 125: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_b,/* 126: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_n,/* 127: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_au,/* 128: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentInit,/* 129: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus_a,/* 130: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_g,/* 131: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_g,/* 132: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_m,/* 133: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k,/* 134: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_p,/* 135: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CurrentInit,/* 136: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_b,/* 137: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_n,/* 138: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_o,/* 139: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b,/* 140: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_a,/* 141: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus_f,/* 142: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant,/* 143: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_e,/* 144: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_mc,/* 145: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_mu,/* 146: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_i4,/* 147: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_h,/* 148: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_f,/* 149: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m,/* 150: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_m,/* 151: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus_k,/* 152: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_m,/* 153: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_h,/* 154: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_j,/* 155: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_bj,/* 156: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_ar,/* 157: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError,/* 158: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode,/* 159: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl,/* 160: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable,/* 161: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus,/* 162: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_e,/* 163: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_d,/* 164: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_jv,/* 165: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0,/* 166: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_i,/* 167: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1,/* 168: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2,/* 169: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3,/* 170: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4,/* 171: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5,/* 172: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0],/* 173: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_c,/* 174: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_ge,/* 175: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b,/* 176: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e,/* 177: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m,/* 178: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a,/* 179: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h,/* 180: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h[0],/* 181: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_g,/* 182: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_em,/* 183: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Br_CurrentReq,/* 184: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DataTypeConversion,/* 185: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DataTypeConversion1,/* 186: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakesMotor_CurrentReq,/* 187: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1,/* 188: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2,/* 189: Signal */
  &SpeedgoatCANOpen2Buses100us_B.br_percent2,/* 190: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation,/* 191: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation1,/* 192: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation2,/* 193: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum,  /* 194: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum1, /* 195: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum2, /* 196: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Delay_o,/* 197: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftVolt,/* 198: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftm,/* 199: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory1_l,/* 200: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt,/* 201: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DiscreteFilter,/* 202: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ud,   /* 203: Signal */
  &SpeedgoatCANOpen2Buses100us_B.yf,   /* 204: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Integral,/* 205: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AntiWindup,/* 206: Signal */
  &SpeedgoatCANOpen2Buses100us_B.kd,   /* 207: Signal */
  &SpeedgoatCANOpen2Buses100us_B.IntegralGain,/* 208: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ProportionalGain,/* 209: Signal */
  &SpeedgoatCANOpen2Buses100us_B.c1,   /* 210: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product1,/* 211: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product2,/* 212: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation_c,/* 213: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Derivative_sat,/* 214: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_c,/* 215: Signal */
  &SpeedgoatCANOpen2Buses100us_B.e,    /* 216: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum2_d,/* 217: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum4, /* 218: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ZeroOrderHold,/* 219: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Delay,/* 220: Signal */
  &SpeedgoatCANOpen2Buses100us_B.kd_ma,/* 221: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Proportional,/* 222: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Clock,/* 223: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Output,/* 224: Signal */
  &SpeedgoatCANOpen2Buses100us_B.LookUpTable1,/* 225: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MathFunction,/* 226: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_f,/* 227: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Compare,/* 228: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Diff, /* 229: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TSamp,/* 230: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Uk1,  /* 231: Signal */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_e,/* 232: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain_Gain,/* 233: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_j,/* 234: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_p,/* 235: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0],/* 236: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P2,/* 237: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P3,/* 238: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Amp,/* 239: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Bias,/* 240: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Freq,/* 241: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Phase,/* 242: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp,/* 243: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias,/* 244: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq,/* 245: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase,/* 246: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp,/* 247: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias,/* 248: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq,/* 249: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase,/* 250: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp,/* 251: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias,/* 252: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq,/* 253: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase,/* 254: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain5_Gain,/* 255: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value,/* 256: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain,/* 257: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain,/* 258: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.dem_Gain,/* 259: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain,/* 260: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition,/* 261: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value,/* 262: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kp,/* 263: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Ki,/* 264: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Kd,/* 265: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PID_ctrl1_Req_lim,/* 266: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.RepeatingSequence1_rep_seq_y[0],/* 267: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offset_Value,/* 268: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain_Gain_l,/* 269: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_k,/* 270: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2m_Gain,/* 271: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.n_Gain,/* 272: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat_i,/* 273: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat_f,/* 274: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp_n,/* 275: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias_n,/* 276: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq_d,/* 277: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase_m,/* 278: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ManualSwitch3_CurrentSetting,/* 279: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ManualSwitch4_CurrentSetting,/* 280: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain,/* 281: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k,/* 282: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain,/* 283: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain,/* 284: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_h,/* 285: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const,/* 286: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_l,/* 287: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_j,/* 288: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_n,/* 289: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0],/* 290: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold,/* 291: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_k,/* 292: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0],/* 293: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0],/* 294: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l,/* 295: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv,/* 296: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0],/* 297: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.offset_Value,/* 298: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain,/* 299: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c,/* 300: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain,/* 301: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.GetInPercent_Gain,/* 302: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat,/* 303: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat,/* 304: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat,/* 305: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat,/* 306: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation2_UpperSat,/* 307: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation2_LowerSat,/* 308: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Delay_DelayLength,/* 309: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition_m,/* 310: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg_Value,/* 311: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain,/* 312: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain,/* 313: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_k,/* 314: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[0],/* 315: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[0],/* 316: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates,/* 317: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteDerivative_ICPrevScaled,/* 318: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval,/* 319: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC,/* 320: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.c1_Gain,/* 321: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Delay_DelayLength_c,/* 322: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Delay_InitialCondition,/* 323: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_c,/* 324: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.LookUpTable1_bp01Data[0],/* 325: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.TSamp_WtEt,/* 326: Block Parameter */
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
  0.0001, 0.0, 1.0, 0.005, 0.015
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
    2, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[1],
    3, 0 }
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
  { rtBlockSignals, 229,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 95,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4112824690U,
    236091845U,
    3786152286U,
    1832629875U },
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
