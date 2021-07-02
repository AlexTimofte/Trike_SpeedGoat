/*
 * SpeedgoatCANOpen2Buses100us_capi.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.614
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Jul  2 21:10:33 2021
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
#define SS_INT64                       40
#endif

#ifndef SS_UINT64
#define SS_UINT64                      41
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
  { 0, 0, TARGET_STRING("AN2CAN_RPDOs/Data Type Conversion"),
    TARGET_STRING("Channel_AN3"), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("AN2CAN_RPDOs/Data Type Conversion1"),
    TARGET_STRING("Channel_AN1"), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("AN2CAN_RPDOs/Data Type Conversion2"),
    TARGET_STRING("Channel_AN2"), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("AN2CAN_RPDOs/RPDOs from AN2CAN /p1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 4, 0, TARGET_STRING("AN2CAN_RPDOs/RPDOs from AN2CAN /p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("AN2CAN_RPDOs/RPDOs from AN2CAN /p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("AN2CAN_RPDOs/RPDOs from AN2CAN /p4"),
    TARGET_STRING("Channel_AN4"), 3, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p1"),
    TARGET_STRING("APT_StatusWord"), 0, 2, 0, 0, 0 },

  { 8, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p2"),
    TARGET_STRING("APT_PhaseCurrent"), 1, 1, 0, 0, 0 },

  { 9, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p3"),
    TARGET_STRING("APT_Speed"), 2, 1, 0, 0, 0 },

  { 10, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p4"),
    TARGET_STRING("APT_BusVoltage"), 3, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p5"),
    TARGET_STRING("APT_MotorTemp"), 4, 3, 0, 0, 0 },

  { 12, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p6"),
    TARGET_STRING("APT_Temp"), 5, 3, 0, 0, 0 },

  { 13, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p7"),
    TARGET_STRING("APT_ErrStatus"), 6, 2, 0, 0, 0 },

  { 14, 0, TARGET_STRING("APT_RPDOs/RPDOs from APT/p8"),
    TARGET_STRING("APT_Direction"), 7, 2, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Enable"), 0, 2, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkA_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkA_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Dunker #2/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkB_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Dunker #2/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkB_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Dunker #3/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkC_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Dunker #3/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkC_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Dunker #4/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkD_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Dunker #4/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkD_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p1"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 6, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p2"),
    TARGET_STRING("Encoder_Stored_Position"), 1, 6, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p1"),
    TARGET_STRING("Joystick_ButtonsStatus"), 0, 2, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p2"),
    TARGET_STRING("Joystick_LongCmd"), 1, 7, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p3"),
    TARGET_STRING("Joystick_LatCmd"), 2, 7, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single"),
    TARGET_STRING("AN_01"), 0, 0, 0, 0, 1 },

  { 31, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single1"),
    TARGET_STRING("AN_02"), 0, 0, 0, 0, 1 },

  { 32, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single2"),
    TARGET_STRING("AN_03"), 0, 0, 0, 0, 1 },

  { 33, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single3"),
    TARGET_STRING("AN_04"), 0, 0, 0, 0, 1 },

  { 34, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 35, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 36, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 37, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 38, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion14"),
    TARGET_STRING("Desired_Current"), 0, 7, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion15"),
    TARGET_STRING("Joystick_LatCmd"), 0, 7, 0, 0, 0 },

  { 40, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion16"),
    TARGET_STRING("Joystick_LongCmd"), 0, 7, 0, 0, 0 },

  { 41, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion17"),
    TARGET_STRING("AN1"), 0, 7, 0, 0, 0 },

  { 42, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion18"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 7, 0, 0, 0 },

  { 43, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion19"),
    TARGET_STRING("AN2"), 0, 7, 0, 0, 0 },

  { 44, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion20"),
    TARGET_STRING("AN3"), 0, 7, 0, 0, 0 },

  { 45, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion21"),
    TARGET_STRING("AN4"), 0, 7, 0, 0, 0 },

  { 46, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion5"),
    TARGET_STRING("Encoder_Stored_Position"), 0, 7, 0, 0, 0 },

  { 47, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion9"),
    TARGET_STRING("Actual_Current"), 0, 7, 0, 0, 0 },

  { 50, 3, TARGET_STRING("Trike Application Layer/Scopes/Moving Average"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 51, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion22"),
    TARGET_STRING("DunkB_TPDO_ClearError"), 0, 2, 0, 0, 0 },

  { 52, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion23"),
    TARGET_STRING("DunkB_TPDO_BrakeCtrl"), 0, 2, 0, 0, 0 },

  { 53, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion24"),
    TARGET_STRING("DunkB_TPDO_DeviceMode"), 0, 2, 0, 0, 0 },

  { 54, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion25"),
    TARGET_STRING("DunkB_TPDO_PowerEnable"), 0, 2, 0, 0, 0 },

  { 55, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion26"),
    TARGET_STRING("DunkB_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 56, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion27"),
    TARGET_STRING("DunkC_TPDO_ClearError"), 0, 2, 0, 0, 0 },

  { 57, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion28"),
    TARGET_STRING("DunkC_TPDO_BrakeCtrl"), 0, 2, 0, 0, 0 },

  { 58, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion29"),
    TARGET_STRING("DunkC_TPDO_DeviceMode"), 0, 2, 0, 0, 0 },

  { 59, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion3"),
    TARGET_STRING("DunkA_TPDO_ClearError"), 0, 2, 0, 0, 0 },

  { 60, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion30"),
    TARGET_STRING("DunkC_TPDO_PowerEnable"), 0, 2, 0, 0, 0 },

  { 61, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion31"),
    TARGET_STRING("DunkC_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 62, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion32"),
    TARGET_STRING("DunkD_TPDO_ClearError"), 0, 2, 0, 0, 0 },

  { 63, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion33"),
    TARGET_STRING("DunkD_TPDO_BrakeCtrl"), 0, 2, 0, 0, 0 },

  { 64, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion34"),
    TARGET_STRING("DunkD_TPDO_DeviceMode"), 0, 2, 0, 0, 0 },

  { 65, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion35"),
    TARGET_STRING("DunkD_TPDO_PowerEnable"), 0, 2, 0, 0, 0 },

  { 66, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion36"),
    TARGET_STRING("DunkD_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 67, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion4"),
    TARGET_STRING("DunkA_TPDO_BrakeCtrl"), 0, 2, 0, 0, 0 },

  { 68, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion6"),
    TARGET_STRING("DunkA_TPDO_DeviceMode"), 0, 2, 0, 0, 0 },

  { 69, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion7"),
    TARGET_STRING("DunkA_TPDO_PowerEnable"), 0, 2, 0, 0, 0 },

  { 70, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion8"),
    TARGET_STRING("DunkA_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 71, 4, TARGET_STRING("Trike Application Layer/Subsystem1/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 72, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion"),
    TARGET_STRING("APT_TPDO_ControlWord"), 0, 2, 0, 0, 0 },

  { 73, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion1"),
    TARGET_STRING("APT_TPDO_PedalPosition"), 0, 2, 0, 0, 0 },

  { 74, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion2"),
    TARGET_STRING("APT_TPDO_Heartbeat"), 0, 2, 0, 0, 0 },

  { 75, 0, TARGET_STRING("Trike Application Layer/System_Control/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 76, 12, TARGET_STRING("Trike Application Layer/System_Init/EnableCtrl"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 77, 13, TARGET_STRING("Trike Application Layer/System_Init/MATLAB Function"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 78, 14, TARGET_STRING("Trike Application Layer/System_Init/MATLAB Function1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Trike Application Layer/System_Init/Cast To Single3"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 80, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 81, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 82, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3"),
    TARGET_STRING(""), 2, 2, 1, 0, 0 },

  { 83, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 84, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 85, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3"),
    TARGET_STRING(""), 2, 2, 1, 0, 0 },

  { 86, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Amp2mAmp"),
    TARGET_STRING("Br CurrentRef"), 0, 8, 0, 0, 0 },

  { 88, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain2"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain3"),
    TARGET_STRING("br_percent"), 0, 8, 0, 0, 0 },

  { 91, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 92, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 94, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/P Direction Controller"),
    TARGET_STRING("DirSpeedRef"), 0, 8, 0, 0, 2 },

  { 95, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 96, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Cast To Single1"),
    TARGET_STRING("DirectionAvg"), 0, 8, 0, 0, 0 },

  { 97, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Robotics Convention"),
    TARGET_STRING("DirectionRef"), 0, 7, 0, 0, 0 },

  { 98, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/degree2rad"),
    TARGET_STRING("SteeringAngle [rad]"), 0, 7, 0, 0, 0 },

  { 99, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/dem"),
    TARGET_STRING("DirectionReq"), 0, 7, 0, 0, 0 },

  { 100, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/inc2deg"),
    TARGET_STRING("Direction"), 0, 8, 0, 0, 0 },

  { 101, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Memory1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 102, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Sum"),
    TARGET_STRING("Pos_out"), 0, 8, 0, 0, 0 },

  { 103, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Moving Average"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 104, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 105, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 106, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 107, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 108, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 109, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller/p1"),
    TARGET_STRING("LTilt CurrentRef"), 0, 8, 0, 0, 2 },

  { 110, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller/p2"),
    TARGET_STRING("RTilt CurrenRef"), 1, 8, 0, 0, 2 },

  { 111, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/ServoTilting"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 8, 0, 0, 0 },

  { 112, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 113, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 114, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv1"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 115, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv2"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 116, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/LSB2Volt"),
    TARGET_STRING("DispLeft [Volt]"), 0, 6, 0, 1, 0 },

  { 117, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Volt2meter"),
    TARGET_STRING("DispLeft [m]"), 0, 8, 0, 0, 0 },

  { 118, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("PosRef [m]"), 0, 8, 0, 0, 0 },

  { 119, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Memory"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 120, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 8, 0, 0, 1 },

  { 121, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sum"),
    TARGET_STRING("DispLeftOffset [Volt]"), 0, 8, 0, 0, 0 },

  { 122, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sum1"),
    TARGET_STRING("err"), 0, 8, 0, 0, 0 },

  { 123, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Abs"),
    TARGET_STRING("TractionRef"), 0, 7, 0, 0, 0 },

  { 124, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 125, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("SpeedRear_SI"), 0, 4, 0, 2, 0 },

  { 128, 11, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 129, 11, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 130, 11, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 7, 0, 0, 0 },

  { 131, 11, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 7, 0, 0, 0 },

  { 132, 11, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 133, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 134, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 2, 0, 0, 0 },

  { 135, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 2, 0, 0, 0 },

  { 136, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 2, 0, 0, 0 },

  { 137, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 2, 0, 0, 0 },

  { 138, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 139, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 140, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3"),
    TARGET_STRING(""), 2, 7, 0, 0, 0 },

  { 141, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4"),
    TARGET_STRING(""), 3, 7, 0, 0, 0 },

  { 142, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 143, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 144, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 2, 0, 0, 0 },

  { 145, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 2, 0, 0, 0 },

  { 146, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 2, 0, 0, 0 },

  { 147, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 2, 0, 0, 0 },

  { 148, 0, TARGET_STRING("Trike Application Layer/System_Init/Subsystem/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 149, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 150, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 151, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 7, 0, 0, 0 },

  { 152, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 7, 0, 0, 0 },

  { 153, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 154, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 155, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 2, 0, 0, 0 },

  { 156, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 2, 0, 0, 0 },

  { 157, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 2, 0, 0, 0 },

  { 158, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 2, 0, 0, 0 },

  { 159, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 160, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 161, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 7, 0, 0, 0 },

  { 162, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 7, 0, 0, 0 },

  { 163, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 164, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 165, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 2, 0, 0, 0 },

  { 166, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 2, 0, 0, 0 },

  { 167, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 2, 0, 0, 0 },

  { 168, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 2, 0, 0, 0 },

  { 169, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 13, 0, 0, 0 },

  { 170, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 171, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 2, 0, 0, 0 },

  { 172, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 2, 0, 0, 0 },

  { 173, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 174, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 2, 1, 0, 0 },

  { 175, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 176, 1, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 177, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 13, 0, 0, 0 },

  { 178, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 179, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 2, 0, 0, 0 },

  { 180, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 2, 0, 0, 0 },

  { 181, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 182, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 2, 1, 0, 0 },

  { 183, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 184, 2, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 185, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Subsystem/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 13, 0, 0, 0 },

  { 186, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 187, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 8, 0, 0, 0 },

  { 188, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 8, 0, 0, 0 },

  { 189, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Gain1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 190, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Product1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 191, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Product2"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 192, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Product5"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 193, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 194, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Sum1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 195, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Sum2"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 196, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Sum3"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 197, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Unit Delay1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 198, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Unit Delay2"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 199, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Value"), 2, 0, 0 },

  { 200, TARGET_STRING("Dunker #3/Gain"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 201, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 8, 3, 0 },

  { 202, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 8, 0, 0 },

  { 203, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 8, 0, 0 },

  { 204, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 205, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 206, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 207, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 208, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 209, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 210, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 211, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 212, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 213, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 214, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 215, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 216, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 217, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 218, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 219, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 220, TARGET_STRING("Trike Application Layer/Scopes/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 221, TARGET_STRING("Trike Application Layer/Scopes/Gain2"),
    TARGET_STRING("Gain"), 6, 0, 4 },

  { 222, TARGET_STRING("Trike Application Layer/Scopes/Gain4"),
    TARGET_STRING("Gain"), 6, 0, 4 },

  { 223, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/offset"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 224, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Amp2mAmp"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 225, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain1"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 226, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain2"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 227, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain3"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 228, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING("UpperLimit"), 8, 0, 0 },

  { 229, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING("LowerLimit"), 8, 0, 0 },

  { 230, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 231, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 232, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Offset to 0 pos => pos = [-180 180]deg"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 233, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Robotics Convention"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 234, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/degree2rad"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 235, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/dem"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 236, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/inc2deg"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 237, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Memory1"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 238, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 239, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 240, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant1"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 241, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant2"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 242, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset for 0 deg (3.16V -> 52.54mm)"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 243, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv1"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 244, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv2"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 245, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/LSB2Volt"),
    TARGET_STRING("Gain"), 0, 0, 5 },

  { 246, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Volt2meter"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 247, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 248, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Memory"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 249, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 250, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 251, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 252, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 253, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 254, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Gain"), 1, 0, 6 },

  { 255, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("Gain"), 4, 0, 7 },

  { 257, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 258, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 259, TARGET_STRING("Trike Application Layer/System_Init/Subsystem/Compare To Constant"),
    TARGET_STRING("const"), 7, 0, 0 },

  { 260, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 261, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 262, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 8, 4, 0 },

  { 263, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 2, 0, 0 },

  { 264, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 2, 0, 0 },

  { 265, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 8, 5, 0 },

  { 266, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 8, 4, 0 },

  { 267, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 2, 0, 0 },

  { 268, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 2, 0, 0 },

  { 269, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 8, 5, 0 },

  { 270, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 271, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Constant1"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 272, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Gain1"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 273, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 274, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Discrete Varying Lowpass/SOS1/Unit Delay2"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

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
  &SpeedgoatCANOpen2Buses100us_B.Channel_AN3,/* 0: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Channel_AN1,/* 1: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Channel_AN2,/* 2: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RPDOsfromAN2CAN_o1,/* 3: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RPDOsfromAN2CAN_o2,/* 4: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RPDOsfromAN2CAN_o3,/* 5: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Channel_AN4,/* 6: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_StatusWord,/* 7: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_PhaseCurrent,/* 8: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_Speed,/* 9: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_BusVoltage,/* 10: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_MotorTemp,/* 11: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_Temp,/* 12: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_ErrStatus,/* 13: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_Direction,/* 14: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Enable_c,/* 15: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,/* 16: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity,/* 17: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,/* 18: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity,/* 19: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv,/* 20: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,/* 21: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity,/* 22: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent,/* 23: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity,/* 24: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,/* 25: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position,/* 26: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus,/* 27: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd,/* 28: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd,/* 29: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_01,/* 30: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_02,/* 31: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_03,/* 32: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_04,/* 33: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave,/* 34: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave1,/* 35: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave2,/* 36: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave3,/* 37: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Desired_Current,/* 38: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f,/* 39: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m,/* 40: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN1,  /* 41: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g,/* 42: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN2,  /* 43: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN3,  /* 44: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN4,  /* 45: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d,/* 46: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Actual_Current,/* 47: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2,/* 48: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain4,/* 49: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MovingAverage_o,/* 50: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,/* 51: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,/* 52: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,/* 53: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,/* 54: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent,/* 55: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,/* 56: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,/* 57: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,/* 58: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,/* 59: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,/* 60: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent,/* 61: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,/* 62: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,/* 63: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,/* 64: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,/* 65: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent,/* 66: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,/* 67: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,/* 68: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,/* 69: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent,/* 70: Signal */
  &SpeedgoatCANOpen2Buses100us_B.HB,   /* 71: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,/* 72: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,/* 73: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat,/* 74: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_e,/* 75: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Enable,/* 76: Signal */
  &SpeedgoatCANOpen2Buses100us_B.button,/* 77: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Byte0,/* 78: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle3,/* 79: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,/* 80: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,/* 81: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0],/* 82: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n,/* 83: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n,/* 84: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n[0],/* 85: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DataTypeConversion,/* 86: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrCurrentRef,/* 87: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1,/* 88: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2_a,/* 89: Signal */
  &SpeedgoatCANOpen2Buses100us_B.br_percent,/* 90: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation,/* 91: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation1,/* 92: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum,  /* 93: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedRef,/* 94: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle,/* 95: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionAvg,/* 96: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionRef,/* 97: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad,/* 98: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionReq,/* 99: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Direction,/* 100: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory1,/* 101: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Pos_out,/* 102: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MovingAverage,/* 103: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch,/* 104: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch1,/* 105: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch2,/* 106: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch3,/* 107: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch4,/* 108: Signal */
  &SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef,/* 109: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef,/* 110: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngle,/* 111: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_p,/* 112: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1,/* 113: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv1,/* 114: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv2,/* 115: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftVolt,/* 116: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftm,/* 117: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PosRefm,/* 118: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory,/* 119: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngledeg,/* 120: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt,/* 121: Signal */
  &SpeedgoatCANOpen2Buses100us_B.err,  /* 122: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TractionRef,/* 123: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1_e,/* 124: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI,/* 125: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI,/* 126: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh,/* 127: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.ClearError,/* 128: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.DeviceMode,/* 129: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.BrakeCtrl,/* 130: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.PowerEnable,/* 131: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.InitStatus,/* 132: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_g,/* 133: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_g,/* 134: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_mj,/* 135: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k,/* 136: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_p,/* 137: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError,/* 138: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode,/* 139: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl,/* 140: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable,/* 141: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus,/* 142: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant,/* 143: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_e,/* 144: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_m,/* 145: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m,/* 146: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_i,/* 147: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_b,/* 148: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.ClearError,/* 149: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.DeviceMode,/* 150: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.BrakeCtrl,/* 151: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.PowerEnable,/* 152: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.InitStatus,/* 153: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_e,/* 154: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_d,/* 155: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_jv,/* 156: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0,/* 157: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_ir,/* 158: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.ClearError,/* 159: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.DeviceMode,/* 160: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.BrakeCtrl,/* 161: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.PowerEnable,/* 162: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.InitStatus,/* 163: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_m,/* 164: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_h,/* 165: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_j,/* 166: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b,/* 167: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_a,/* 168: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1,/* 169: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2,/* 170: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3,/* 171: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4,/* 172: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5,/* 173: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0],/* 174: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_c,/* 175: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_ge,/* 176: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b,/* 177: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e,/* 178: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m,/* 179: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a,/* 180: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h,/* 181: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h[0],/* 182: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_g,/* 183: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_em,/* 184: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Compare,/* 185: Signal */
  &SpeedgoatCANOpen2Buses100us_B.a,    /* 186: Signal */
  &SpeedgoatCANOpen2Buses100us_B.b,    /* 187: Signal */
  &SpeedgoatCANOpen2Buses100us_B.c,    /* 188: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1_c,/* 189: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product1,/* 190: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product2,/* 191: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product5,/* 192: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_l,/* 193: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum1, /* 194: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum2, /* 195: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum3, /* 196: Signal */
  &SpeedgoatCANOpen2Buses100us_B.UnitDelay1,/* 197: Signal */
  &SpeedgoatCANOpen2Buses100us_B.UnitDelay2,/* 198: Signal */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_ej,/* 199: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain_Gain,/* 200: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0],/* 201: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P2,/* 202: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P3,/* 203: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Amp,/* 204: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Bias,/* 205: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Freq,/* 206: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Phase,/* 207: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp,/* 208: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias,/* 209: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq,/* 210: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase,/* 211: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp,/* 212: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias,/* 213: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq,/* 214: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase,/* 215: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp,/* 216: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias,/* 217: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq,/* 218: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase,/* 219: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_k,/* 220: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p,/* 221: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain4_Gain,/* 222: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.offset_Value,/* 223: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain,/* 224: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain,/* 225: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain,/* 226: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain3_Gain,/* 227: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat,/* 228: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat,/* 229: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat,/* 230: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat,/* 231: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value,/* 232: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain,/* 233: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain,/* 234: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.dem_Gain,/* 235: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain,/* 236: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition,/* 237: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value,/* 238: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_c,/* 239: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant1_Value,/* 240: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant2_Value,/* 241: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg316V5254mm_Value,/* 242: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv1_Gain,/* 243: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv2_Gain,/* 244: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain,/* 245: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain,/* 246: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2m_Gain,/* 247: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition,/* 248: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Amp_d,/* 249: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Bias_f,/* 250: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Freq_d,/* 251: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Phase_d,/* 252: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_n,/* 253: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k,/* 254: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain,/* 255: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain,/* 256: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_h,/* 257: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_l,/* 258: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const,/* 259: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_n,/* 260: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_j,/* 261: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0],/* 262: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold,/* 263: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp,/* 264: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0],/* 265: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0],/* 266: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l,/* 267: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv,/* 268: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0],/* 269: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_e,/* 270: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant1_Value_a,/* 271: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_a,/* 272: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.UnitDelay1_InitialCondition,/* 273: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.UnitDelay2_InitialCondition,/* 274: Block Parameter */
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

  { "short", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "signed char", "int8_T", 0, 0, sizeof(int8_T), SS_INT8, 0, 0 },

  { "int", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0 },

  { "numeric", "int64_T", 0, 0, sizeof(int64_T), SS_INT64, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "numeric", "uint64_T", 0, 0, sizeof(uint64_T), SS_UINT64, 0, 0 },

  { "numeric", "int64_T", 0, 0, sizeof(int64_T), SS_INT64, 0, 0 },

  { "numeric", "uint64_T", 0, 0, sizeof(uint64_T), SS_UINT64, 0, 0 },

  { "struct", "int128m_T", 1, 1, sizeof(int128m_T), SS_STRUCT, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "numeric", "int64_T", 0, 0, sizeof(int64_T), SS_INT64, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "chunks", rt_offsetof(int128m_T, chunks), 11, 2, 0 }
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
  2,                                   /* 4 */
  1,                                   /* 5 */
  1,                                   /* 6 */
  40,                                  /* 7 */
  1,                                   /* 8 */
  6,                                   /* 9 */
  1,                                   /* 10 */
  7                                    /* 11 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0001, 0.0, 0.005, 1.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -27, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -18, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -31, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -35, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -27, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -18, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -32, 1 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
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
  { rtBlockSignals, 194,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 75,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1276609141U,
    3111768378U,
    3091759347U,
    1357947327U },
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
