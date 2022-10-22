/*
 * SpeedgoatCANOpen2Buses1ms_capi.c
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

  { 69, 18, TARGET_STRING("Trike Application Layer/System_Init/APTControlWord"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 70, 20, TARGET_STRING("Trike Application Layer/System_Init/ButtonStatus"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 71, 21, TARGET_STRING("Trike Application Layer/System_Init/EnableCtrl"),
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
    TARGET_STRING("SteeringMotor_SpeedReq"), 0, 7, 0, 0, 3 },

  { 86, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single"),
    TARGET_STRING("DirectionReq"), 0, 7, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single1"),
    TARGET_STRING("DirectionFb"), 0, 7, 0, 0, 0 },

  { 88, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Cast To Single2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 89, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Robotics Convention1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/degree2rad"),
    TARGET_STRING("SteeringAngle [rad]"), 0, 8, 0, 0, 0 },

  { 91, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/dem1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 92, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/inc2deg"),
    TARGET_STRING("DirectionFb"), 0, 7, 0, 0, 0 },

  { 93, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 94, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 95, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/SteeringControl/Moving Average"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 96, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Product"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 97, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Rate Transition"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 98, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 99, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 100, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 101, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 102, 17, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/ServoTilting"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 7, 0, 0, 1 },

  { 103, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Abs"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 104, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 105, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 106, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain"),
    TARGET_STRING("RightTiltMotor_SpeedReq [rpm]"), 0, 7, 0, 0, 3 },

  { 107, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain1"),
    TARGET_STRING("LeftTiltMotor_SpeedReq [rpm]"), 0, 7, 0, 0, 3 },

  { 108, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 109, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain3"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 110, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain4"),
    TARGET_STRING("DispReqInv[m]"), 0, 7, 0, 0, 3 },

  { 111, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Gain5"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 113, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 114, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold1"),
    TARGET_STRING("TiltingAngle_stepreqf [deg]"), 0, 7, 0, 0, 3 },

  { 115, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 116, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Zero-Order Hold3"),
    TARGET_STRING(""), 0, 10, 0, 0, 3 },

  { 117, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Moving Average"),
    TARGET_STRING("Fb_Angle_Filt [deg]"), 0, 7, 0, 0, 3 },

  { 118, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Abs"),
    TARGET_STRING("TractionReq"), 0, 7, 0, 0, 0 },

  { 119, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 120, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 121, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Cast To Single3"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 122, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 123, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Speed_SI"), 0, 7, 0, 0, 1 },

  { 124, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("VehSpeed_SI"), 0, 7, 0, 0, 1 },

  { 125, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/m//s2Km//h"),
    TARGET_STRING("VehSpeed_Km/h"), 0, 7, 0, 0, 1 },

  { 126, 19, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 127, 19, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 1 },

  { 128, 19, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 1 },

  { 129, 19, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 1 },

  { 130, 19, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 1 },

  { 131, 19, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p6"),
    TARGET_STRING(""), 5, 8, 0, 0, 1 },

  { 132, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 133, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 1 },

  { 134, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 1 },

  { 135, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 136, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 1 },

  { 137, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single4"),
    TARGET_STRING("CurrentInit"), 0, 0, 0, 0, 1 },

  { 138, 0, TARGET_STRING("Trike Application Layer/System_Init/Enable/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 139, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 140, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 1 },

  { 141, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 1 },

  { 142, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 1 },

  { 143, 22, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 1 },

  { 144, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 145, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 1 },

  { 146, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 1 },

  { 147, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 148, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 1 },

  { 149, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 150, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 1 },

  { 151, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 1 },

  { 152, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 1 },

  { 153, 23, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkC_TiltLeft_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 1 },

  { 154, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 155, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 1 },

  { 156, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 1 },

  { 157, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 158, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 1 },

  { 159, 24, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 160, 24, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 1 },

  { 161, 24, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 1 },

  { 162, 24, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 8, 0, 0, 1 },

  { 163, 24, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkB_TiltRight_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 1 },

  { 164, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 165, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 1 },

  { 166, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 1 },

  { 167, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 1 },

  { 168, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 1 },

  { 169, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING("DataPresent"), 0, 10, 0, 0, 5 },

  { 170, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 5 },

  { 171, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 5 },

  { 172, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 5 },

  { 173, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 5 },

  { 174, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 5 },

  { 175, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 10, 0, 0, 1 },

  { 176, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 1 },

  { 177, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 1 },

  { 178, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 1 },

  { 179, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 1 },

  { 180, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 1 },

  { 181, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Retract"),
    TARGET_STRING("Retract_current"), 0, 8, 0, 0, 3 },

  { 182, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 183, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Data Type Conversion1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 184, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp"),
    TARGET_STRING("BrakesMotor_CurrentReq"), 0, 7, 0, 0, 1 },

  { 185, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 186, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 187, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent"),
    TARGET_STRING("br_percent2"), 0, 7, 0, 0, 0 },

  { 188, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 189, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 190, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 191, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 192, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 193, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 1 },

  { 194, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING(""), 0, 8, 0, 0, 3 },

  { 195, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt"),
    TARGET_STRING("DispLeft [Volt]"), 0, 4, 0, 2, 0 },

  { 196, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter"),
    TARGET_STRING("DispLeft [m]"), 0, 7, 0, 0, 0 },

  { 197, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 198, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Sum"),
    TARGET_STRING("DispLeftOffset [Volt]"), 0, 7, 0, 0, 0 },

  { 199, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 200, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/LSB2Volt"),
    TARGET_STRING("DispRight [Volt]"), 0, 4, 0, 2, 0 },

  { 201, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Volt2meter"),
    TARGET_STRING("DispRight [m]"), 0, 7, 0, 0, 0 },

  { 202, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Memory1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 203, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Sum"),
    TARGET_STRING("DispRightOffset [Volt]"), 0, 7, 0, 0, 0 },

  { 204, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 205, 11, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Comp_and_Timer/p1"),
    TARGET_STRING("e_out"), 0, 7, 0, 0, 3 },

  { 206, 11, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Comp_and_Timer/p2"),
    TARGET_STRING("timer"), 1, 7, 0, 0, 3 },

  { 207, 12, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Derivative/p1"),
    TARGET_STRING("derivative"), 0, 8, 0, 0, 3 },

  { 208, 12, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Derivative/p2"),
    TARGET_STRING("yf"), 1, 8, 0, 0, 3 },

  { 209, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Constant3"),
    TARGET_STRING("Hyst"), 0, 7, 0, 0, 2 },

  { 210, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Data Type Conversion1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 211, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 3 },

  { 212, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 213, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 214, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Proportional  Gain"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 3 },

  { 215, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/tometer"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 216, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 217, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 218, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 219, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 220, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum1"),
    TARGET_STRING("e_in"), 0, 7, 0, 0, 3 },

  { 221, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 222, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 223, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Zero-Order Hold"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 224, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_Angle/Delay"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 225, 13, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Comp_and_Timer/p1"),
    TARGET_STRING("e_out"), 0, 7, 0, 0, 3 },

  { 226, 13, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Comp_and_Timer/p2"),
    TARGET_STRING("timer"), 1, 7, 0, 0, 3 },

  { 227, 14, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Derivative/p1"),
    TARGET_STRING("derivative"), 0, 8, 0, 0, 3 },

  { 228, 14, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Derivative/p2"),
    TARGET_STRING("yf"), 1, 8, 0, 0, 3 },

  { 229, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Data Type Conversion1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 230, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 3 },

  { 231, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 232, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 233, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Proportional  Gain"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 3 },

  { 234, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/c1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 235, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/degree2m"),
    TARGET_STRING("Hyst"), 0, 7, 0, 0, 2 },

  { 236, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 237, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 238, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 239, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 240, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 241, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum1"),
    TARGET_STRING("e_in"), 0, 7, 0, 0, 3 },

  { 242, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 243, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 244, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Zero-Order Hold"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 245, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Delay"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 246, 15, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Comp_and_Timer/p1"),
    TARGET_STRING("e_out"), 0, 7, 0, 0, 3 },

  { 247, 15, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Comp_and_Timer/p2"),
    TARGET_STRING("timer"), 1, 7, 0, 0, 3 },

  { 248, 16, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Derivative/p1"),
    TARGET_STRING("derivative"), 0, 8, 0, 0, 3 },

  { 249, 16, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Derivative/p2"),
    TARGET_STRING("yf"), 1, 8, 0, 0, 3 },

  { 250, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Data Type Conversion1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 251, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Discrete-Time Integrator"),
    TARGET_STRING("Integral"), 0, 7, 0, 0, 3 },

  { 252, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/AntiWindup"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 253, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Integral Gain"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 254, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Proportional  Gain"),
    TARGET_STRING("Proportional"), 0, 7, 0, 0, 3 },

  { 255, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/c1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 256, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/degree2m"),
    TARGET_STRING("Hyst"), 0, 7, 0, 0, 2 },

  { 257, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Product1"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 258, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Product2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 259, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 260, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 261, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 262, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum1"),
    TARGET_STRING("e_in"), 0, 7, 0, 0, 3 },

  { 263, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum2"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 264, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Sum4"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 265, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Zero-Order Hold"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 266, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Delay"),
    TARGET_STRING(""), 0, 7, 0, 0, 3 },

  { 267, 0, TARGET_STRING(
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
  { 268, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 269, TARGET_STRING("Dunk_LeftTilt/Gain"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 270, TARGET_STRING("Dunk_LeftTilt/Gain1"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 271, TARGET_STRING("Inclinometer_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 272, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 7, 2, 0 },

  { 273, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 7, 0, 0 },

  { 274, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 7, 0, 0 },

  { 275, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Amplitude"), 7, 0, 0 },

  { 276, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Bias"), 7, 0, 0 },

  { 277, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Frequency"), 7, 0, 0 },

  { 278, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("SinH"), 7, 0, 0 },

  { 279, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("CosH"), 7, 0, 0 },

  { 280, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("SinPhi"), 7, 0, 0 },

  { 281, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("CosPhi"), 7, 0, 0 },

  { 282, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain5"),
    TARGET_STRING("Gain"), 0, 0, 4 },

  { 283, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Offset to 0 pos => pos = [-180 180]deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 284, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Robotics Convention1"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 285, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/degree2rad"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 286, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/dem1"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 287, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/inc2deg"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 288, TARGET_STRING("Trike Application Layer/System_Control/SteeringControl/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 289, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 290, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Rate Transition"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 291, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 292, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 293, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 294, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Ts"), 7, 0, 0 },

  { 295, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 296, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 297, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 298, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 299, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Ts"), 7, 0, 0 },

  { 300, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 301, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Kp"), 7, 0, 0 },

  { 302, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Ki"), 7, 0, 0 },

  { 303, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Kd"), 7, 0, 0 },

  { 304, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Ts"), 7, 0, 0 },

  { 305, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight"),
    TARGET_STRING("Req_lim"), 7, 0, 0 },

  { 306, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 307, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 308, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 309, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain3"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 310, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain4"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 311, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Gain5"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 312, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Torque Constant"),
    TARGET_STRING("Gain"), 4, 0, 5 },

  { 313, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 314, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 315, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 316, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 317, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/m//s2Km//h"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 318, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 319, TARGET_STRING("Trike Application Layer/System_Init/Enable/Compare To Constant"),
    TARGET_STRING("const"), 8, 0, 0 },

  { 320, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 321, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 322, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 323, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 7, 3, 0 },

  { 324, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 325, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 7, 4, 0 },

  { 326, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 7, 3, 0 },

  { 327, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 328, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 7, 4, 0 },

  { 329, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/offset"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 330, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Amp2mAmp"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 331, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 332, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Gain2"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 333, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/GetInPercent"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 334, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 335, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 336, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 2, 0, 0 },

  { 337, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 2, 0, 0 },

  { 338, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 339, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 340, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 341, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Subsystem/Delay"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 342, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Offset for 0 deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 343, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/LSB2Volt"),
    TARGET_STRING("Gain"), 0, 0, 6 },

  { 344, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Volt2meter"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 345, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 346, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("Numerator"), 7, 5, 0 },

  { 347, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("Denominator"), 7, 5, 0 },

  { 348, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion/Discrete Filter"),
    TARGET_STRING("InitialStates"), 7, 0, 0 },

  { 349, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Offset for 0 deg"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 350, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/LSB2Volt"),
    TARGET_STRING("Gain"), 0, 0, 6 },

  { 351, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Volt2meter"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 352, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Memory1"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 353, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter"),
    TARGET_STRING("Numerator"), 7, 5, 0 },

  { 354, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter"),
    TARGET_STRING("Denominator"), 7, 5, 0 },

  { 355, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset_Conversion1/Discrete Filter"),
    TARGET_STRING("InitialStates"), 7, 0, 0 },

  { 356, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Constant3"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 357, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 358, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 359, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/tometer"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 360, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 361, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_Angle/Delay"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 362, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Constant3"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 363, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 364, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 365, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/c1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 366, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/degree2m"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 367, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 368, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 369, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 370, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispLeft/Delay"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 371, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Constant3"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 372, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 7, 0, 0 },

  { 373, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

  { 374, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/c1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 375, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/degree2m"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 376, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation2"),
    TARGET_STRING("UpperLimit"), 7, 0, 0 },

  { 377, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Saturation2"),
    TARGET_STRING("LowerLimit"), 7, 0, 0 },

  { 378, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Delay"),
    TARGET_STRING("DelayLength"), 6, 0, 0 },

  { 379, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PID_DispRight/Delay"),
    TARGET_STRING("InitialCondition"), 7, 0, 0 },

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
  &SpeedgoatCANOpen2Buses1ms_B.DirectionReq,/* 86: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DirectionFb,/* 87: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle2_i,/* 88: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.RoboticsConvention1,/* 89: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.SteeringAnglerad,/* 90: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.dem1,   /* 91: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DirectionFb_l,/* 92: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Memory1,/* 93: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_p,  /* 94: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.MovingAverage,/* 95: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product,/* 96: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.RateTransition,/* 97: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Switch, /* 98: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Switch2,/* 99: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Switch3,/* 100: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Switch4,/* 101: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TiltingAngle,/* 102: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Abs,    /* 103: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle,/* 104: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle1,/* 105: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.RightTiltMotor_SpeedReqrpm_m,/* 106: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.LeftTiltMotor_SpeedReqrpm,/* 107: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain2_m,/* 108: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain3,  /* 109: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispReqInvm,/* 110: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain5,  /* 111: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TorqueConstant,/* 112: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.n,      /* 113: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TiltingAngle_stepreqfdeg,/* 114: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold2,/* 115: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold3,/* 116: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Fb_Angle_Filtdeg,/* 117: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.TractionReq_a,/* 118: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle1_e,/* 119: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle2,/* 120: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CastToSingle3,/* 121: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain1_e,/* 122: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Speed_SI,/* 123: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.VehSpeed_SI,/* 124: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.VehSpeed_Kmh,/* 125: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_k,/* 126: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_b,/* 127: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_n,/* 128: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_au,/* 129: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentInit,/* 130: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.InitStatus_a,/* 131: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Constant,/* 132: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_g,/* 133: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_m,/* 134: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k2,/* 135: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_p,/* 136: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CurrentInit,/* 137: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_b,  /* 138: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_n,/* 139: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_o,/* 140: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_b,/* 141: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_a,/* 142: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.InitStatus_f,/* 143: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Constant_j,/* 144: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_e,/* 145: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_mc,/* 146: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_mu,/* 147: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i4,/* 148: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_h,/* 149: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_f,/* 150: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_m,/* 151: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_m,/* 152: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.InitStatus_k,/* 153: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Constant_m,/* 154: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_h,/* 155: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_j,/* 156: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_bj,/* 157: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_ar,/* 158: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError,/* 159: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode,/* 160: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl,/* 161: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable,/* 162: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.InitStatus,/* 163: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Constant_e,/* 164: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DeviceMode_d,/* 165: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ClearError_jv,/* 166: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakeCtrl_k,/* 167: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.PowerEnable_i,/* 168: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataPresent,/* 169: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o2,/* 170: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o3,/* 171: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o4,/* 172: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o5,/* 173: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o6[0],/* 174: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o1,/* 175: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o2_e,/* 176: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o3_m,/* 177: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o4_a,/* 178: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o5_h,/* 179: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.CANRead_o6_h[0],/* 180: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Br_CurrentReq,/* 181: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion,/* 182: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_c,/* 183: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.BrakesMotor_CurrentReq,/* 184: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain1,  /* 185: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Gain2,  /* 186: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.br_percent2,/* 187: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation,/* 188: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation1,/* 189: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation2,/* 190: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum,    /* 191: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum1,   /* 192: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2,   /* 193: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay_o,/* 194: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispLeftVolt,/* 195: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispLeftm,/* 196: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Memory1_l,/* 197: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispLeftOffsetVolt,/* 198: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter,/* 199: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispRightVolt,/* 200: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispRightm,/* 201: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Memory1_j,/* 202: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DispRightOffsetVolt,/* 203: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DiscreteFilter_e,/* 204: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_out,  /* 205: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.timer,  /* 206: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative.ud,/* 207: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative.yf,/* 208: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Hyst_g, /* 209: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1,/* 210: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Integral,/* 211: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AntiWindup,/* 212: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.IntegralGain,/* 213: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Proportional,/* 214: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.tometer,/* 215: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product1,/* 216: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product2,/* 217: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation_c,/* 218: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_c,  /* 219: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_in,   /* 220: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2_d, /* 221: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum4,   /* 222: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold,/* 223: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay,  /* 224: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_f.e_out,/* 225: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_f.timer,/* 226: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_f.ud,/* 227: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_f.yf,/* 228: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_f,/* 229: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Integral_a,/* 230: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AntiWindup_c,/* 231: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.IntegralGain_h,/* 232: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Proportional_l,/* 233: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.c1,     /* 234: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Hyst_n, /* 235: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product1_l,/* 236: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product2_n,/* 237: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation_b,/* 238: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation2_k,/* 239: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_j,  /* 240: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_in_p, /* 241: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2_d4,/* 242: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum4_d, /* 243: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_m,/* 244: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay_e,/* 245: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_b.e_out,/* 246: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Comp_and_Timer_b.timer,/* 247: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_b.ud,/* 248: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.sf_Derivative_b.yf,/* 249: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.DataTypeConversion1_b,/* 250: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Integral_p,/* 251: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.AntiWindup_p,/* 252: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.IntegralGain_g,/* 253: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Proportional_j,/* 254: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.c1_f,   /* 255: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Hyst_i, /* 256: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product1_a,/* 257: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Product2_e,/* 258: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation_m,/* 259: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Saturation2_g,/* 260: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum_o,  /* 261: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.e_in_i, /* 262: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum2_j, /* 263: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Sum4_dx,/* 264: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.ZeroOrderHold_a,/* 265: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Delay_d,/* 266: Signal */
  &SpeedgoatCANOpen2Buses1ms_B.Compare,/* 267: Signal */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_e,/* 268: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain_Gain_g,/* 269: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_j,/* 270: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_p,/* 271: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANSetup_P1[0],/* 272: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANSetup_P2,/* 273: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANSetup_P3,/* 274: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_Amp,/* 275: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_Bias,/* 276: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_Freq,/* 277: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_Hsin,/* 278: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_HCos,/* 279: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_PSin,/* 280: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.SineWave_PCos,/* 281: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain5_Gain_d,/* 282: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Offsetto0pospos180180deg_Value,/* 283: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.RoboticsConvention1_Gain,/* 284: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.degree2rad_Gain,/* 285: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.dem1_Gain,/* 286: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.inc2deg_Gain,/* 287: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition,/* 288: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value,/* 289: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.RateTransition_InitialCondition,/* 290: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Kp,/* 291: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Ki,/* 292: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Kd,/* 293: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Ts,/* 294: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_Angle_Req_lim,/* 295: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Kp,/* 296: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Ki,/* 297: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Kd,/* 298: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Ts,/* 299: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispLeft_Req_lim,/* 300: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Kp,/* 301: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Ki,/* 302: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Kd,/* 303: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Ts,/* 304: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.PID_DispRight_Req_lim,/* 305: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain_Gain,/* 306: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_k,/* 307: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain_c,/* 308: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain3_Gain,/* 309: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain4_Gain,/* 310: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain5_Gain,/* 311: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.TorqueConstant_Gain,/* 312: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.n_Gain, /* 313: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain_n,/* 314: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain,/* 315: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.WheelRadius_Gain,/* 316: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.ms2Kmh_Gain,/* 317: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_h,/* 318: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CompareToConstant_const,/* 319: Mask Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_l,/* 320: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_j,/* 321: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_n,/* 322: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANRead_P1[0],/* 323: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_k,/* 324: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANWrite_P1[0],/* 325: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANRead_P1_n[0],/* 326: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant_Value_nv,/* 327: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.CANWrite_P1_h[0],/* 328: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.offset_Value,/* 329: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Amp2mAmp_Gain,/* 330: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain1_Gain,/* 331: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Gain2_Gain_p,/* 332: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.GetInPercent_Gain,/* 333: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation_UpperSat,/* 334: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation_LowerSat,/* 335: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation1_UpperSat,/* 336: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation1_LowerSat,/* 337: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat,/* 338: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat,/* 339: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength,/* 340: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_m,/* 341: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Offsetfor0deg_Value,/* 342: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.LSB2Volt_Gain,/* 343: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Volt2meter_Gain,/* 344: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition_k,/* 345: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef[0],/* 346: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef[0],/* 347: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_InitialStates,/* 348: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Offsetfor0deg_Value_f,/* 349: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.LSB2Volt_Gain_k,/* 350: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Volt2meter_Gain_f,/* 351: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Memory1_InitialCondition_o,/* 352: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_NumCoef_f[0],/* 353: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_DenCoef_e[0],/* 354: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteFilter_InitialStates_h,/* 355: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant3_Value,/* 356: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainval,/* 357: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC,/* 358: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.tometer_Gain,/* 359: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength_c,/* 360: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition,/* 361: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_d,/* 362: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_d,/* 363: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC_j,/* 364: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.c1_Gain,/* 365: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain,/* 366: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat_b,/* 367: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat_n,/* 368: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength_e,/* 369: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_p,/* 370: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Constant3_Value_a,/* 371: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_gainva_p,/* 372: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.DiscreteTimeIntegrator_IC_d,/* 373: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.c1_Gain_j,/* 374: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.degree2m_Gain_j,/* 375: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_UpperSat_f,/* 376: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Saturation2_LowerSat_i,/* 377: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_DelayLength_j,/* 378: Block Parameter */
  &SpeedgoatCANOpen2Buses1ms_P.Delay_InitialCondition_g,/* 379: Block Parameter */
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
    3, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    2, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    6, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[1],
    4, 0 },

  { (const void *) &rtcapiStoredFloats[5], (const void *) &rtcapiStoredFloats[1],
    5, 0 },

  { (const void *) &rtcapiStoredFloats[6], (const void *) &rtcapiStoredFloats[1],
    1, 0 }
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
  { rtBlockSignals, 265,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 112,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 264989813U,
    3085759457U,
    745315305U,
    113413540U },
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
