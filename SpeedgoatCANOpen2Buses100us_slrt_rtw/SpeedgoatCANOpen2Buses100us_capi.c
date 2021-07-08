/*
 * SpeedgoatCANOpen2Buses100us_capi.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.736
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Thu Jul  8 19:55:38 2021
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

  { 13, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkA_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkA_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Dunker #2/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkB_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Dunker #2/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkB_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Dunker #3/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkC_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Dunker #3/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkC_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Dunker #4/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkD_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Dunker #4/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkD_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p1"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 6, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p2"),
    TARGET_STRING("Encoder_Stored_Position"), 1, 6, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p1"),
    TARGET_STRING("Joystick_ButtonsStatus"), 0, 1, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p2"),
    TARGET_STRING("Joystick_LongCmd"), 1, 7, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p3"),
    TARGET_STRING("Joystick_LatCmd"), 2, 7, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single"),
    TARGET_STRING("AN_01"), 0, 0, 0, 0, 1 },

  { 28, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single1"),
    TARGET_STRING("AN_02"), 0, 0, 0, 0, 1 },

  { 29, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single2"),
    TARGET_STRING("AN_03"), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Cast To Single3"),
    TARGET_STRING("AN_04"), 0, 0, 0, 0, 1 },

  { 31, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 32, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 33, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 34, 0, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 35, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion14"),
    TARGET_STRING("Desired_Current"), 0, 7, 0, 0, 0 },

  { 36, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion15"),
    TARGET_STRING("Joystick_LatCmd"), 0, 7, 0, 0, 0 },

  { 37, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion16"),
    TARGET_STRING("Joystick_LongCmd"), 0, 7, 0, 0, 0 },

  { 38, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion17"),
    TARGET_STRING("AN1"), 0, 7, 0, 0, 0 },

  { 39, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion18"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 7, 0, 0, 0 },

  { 40, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion19"),
    TARGET_STRING("AN2"), 0, 7, 0, 0, 0 },

  { 41, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion20"),
    TARGET_STRING("AN3"), 0, 7, 0, 0, 0 },

  { 42, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion21"),
    TARGET_STRING("AN4"), 0, 7, 0, 0, 0 },

  { 43, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion5"),
    TARGET_STRING("Encoder_Stored_Position"), 0, 7, 0, 0, 0 },

  { 44, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion9"),
    TARGET_STRING("Actual_Current"), 0, 7, 0, 0, 0 },

  { 47, 3, TARGET_STRING("Trike Application Layer/Scopes/Moving Average"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 48, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion22"),
    TARGET_STRING("DunkB_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 49, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion23"),
    TARGET_STRING("DunkB_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 50, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion24"),
    TARGET_STRING("DunkB_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 51, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion25"),
    TARGET_STRING("DunkB_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion26"),
    TARGET_STRING("DunkB_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 53, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion27"),
    TARGET_STRING("DunkC_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 54, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion28"),
    TARGET_STRING("DunkC_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 55, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion29"),
    TARGET_STRING("DunkC_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 56, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion3"),
    TARGET_STRING("DunkA_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 57, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion30"),
    TARGET_STRING("DunkC_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 58, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion31"),
    TARGET_STRING("DunkC_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 59, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion32"),
    TARGET_STRING("DunkD_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 60, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion33"),
    TARGET_STRING("DunkD_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 61, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion34"),
    TARGET_STRING("DunkD_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 62, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion35"),
    TARGET_STRING("DunkD_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 63, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion36"),
    TARGET_STRING("DunkD_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 64, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion4"),
    TARGET_STRING("DunkA_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 65, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion6"),
    TARGET_STRING("DunkA_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 66, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion7"),
    TARGET_STRING("DunkA_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 67, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion8"),
    TARGET_STRING("DunkA_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 68, 4, TARGET_STRING("Trike Application Layer/Subsystem1/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 69, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion"),
    TARGET_STRING("APT_TPDO_ControlWord"), 0, 1, 0, 0, 0 },

  { 70, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion1"),
    TARGET_STRING("APT_TPDO_PedalPosition"), 0, 1, 0, 0, 0 },

  { 71, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion2"),
    TARGET_STRING("APT_TPDO_Heartbeat"), 0, 1, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Trike Application Layer/System_Control/Cast To Single"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 73, 13, TARGET_STRING("Trike Application Layer/System_Init/EnableCtrl"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 74, 14, TARGET_STRING("Trike Application Layer/System_Init/MATLAB Function"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 75, 15, TARGET_STRING("Trike Application Layer/System_Init/MATLAB Function1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 76, 0, TARGET_STRING("Trike Application Layer/System_Init/Cast To Single3"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 77, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 78, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 79, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 80, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 81, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 82, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 83, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Data Type Conversion"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 84, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Amp2mAmp"),
    TARGET_STRING("Br CurrentRef"), 0, 8, 0, 0, 0 },

  { 85, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 86, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain2"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain3"),
    TARGET_STRING("br_percent"), 0, 8, 0, 0, 0 },

  { 88, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Saturation1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 91, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/P Direction Controller"),
    TARGET_STRING("DirSpeedRef"), 0, 8, 0, 0, 2 },

  { 92, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 93, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Cast To Single1"),
    TARGET_STRING("DirectionAvg"), 0, 8, 0, 0, 0 },

  { 94, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Robotics Convention"),
    TARGET_STRING("DirectionRef"), 0, 7, 0, 0, 0 },

  { 95, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/degree2rad"),
    TARGET_STRING("SteeringAngle [rad]"), 0, 7, 0, 0, 0 },

  { 96, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/dem"),
    TARGET_STRING("DirectionReq"), 0, 7, 0, 0, 0 },

  { 97, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/inc2deg"),
    TARGET_STRING("Direction"), 0, 8, 0, 0, 0 },

  { 98, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Memory1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 99, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Sum"),
    TARGET_STRING("Pos_out"), 0, 8, 0, 0, 0 },

  { 100, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Moving Average"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 101, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 102, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 103, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 104, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 105, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 106, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/MATLAB Function/p1"),
    TARGET_STRING("LTilt CurrentRef2"), 0, 8, 0, 0, 2 },

  { 107, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/MATLAB Function/p2"),
    TARGET_STRING("RTilt CurrenRef2"), 1, 8, 0, 0, 2 },

  { 108, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/MATLAB Function/p3"),
    TARGET_STRING("c1"), 2, 8, 0, 0, 2 },

  { 109, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/MATLAB Function/p4"),
    TARGET_STRING("c2"), 3, 8, 0, 0, 2 },

  { 110, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_incremental Tilting Controller/p1"),
    TARGET_STRING("LTilt CurrentRef"), 0, 8, 0, 0, 2 },

  { 111, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_incremental Tilting Controller/p2"),
    TARGET_STRING("RTilt CurrenRef"), 1, 8, 0, 0, 2 },

  { 112, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_incremental Tilting Controller/p3"),
    TARGET_STRING("up"), 2, 8, 0, 0, 2 },

  { 113, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_incremental Tilting Controller/p4"),
    TARGET_STRING("ui"), 3, 8, 0, 0, 2 },

  { 114, 10, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_incremental Tilting Controller/p5"),
    TARGET_STRING("ud"), 4, 8, 0, 0, 2 },

  { 115, 11, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/ServoTilting"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 8, 0, 0, 0 },

  { 116, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 117, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 118, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 119, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv2"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 120, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/LSB2Volt"),
    TARGET_STRING("DispLeft [Volt]"), 0, 4, 0, 1, 0 },

  { 121, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Volt2meter"),
    TARGET_STRING("DispLeft [m]"), 0, 8, 0, 0, 0 },

  { 122, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("PosRef [m]"), 0, 8, 0, 0, 1 },

  { 123, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 124, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Memory1"),
    TARGET_STRING("DispLeft [m] filt"), 0, 8, 0, 0, 2 },

  { 125, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 8, 0, 0, 1 },

  { 126, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sum"),
    TARGET_STRING("DispLeftOffset [Volt]"), 0, 8, 0, 0, 0 },

  { 127, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sum1"),
    TARGET_STRING("Pos_err"), 0, 8, 0, 0, 1 },

  { 128, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 129, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Manual Switch1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 130, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Discrete Filter"),
    TARGET_STRING(""), 0, 8, 0, 0, 2 },

  { 131, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Abs"),
    TARGET_STRING("TractionRef"), 0, 7, 0, 0, 0 },

  { 132, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 133, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("SpeedRear_SI"), 0, 4, 0, 2, 0 },

  { 136, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 137, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 138, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 7, 0, 0, 0 },

  { 139, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 7, 0, 0, 0 },

  { 140, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 141, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 142, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 143, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 144, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 145, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 146, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 147, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 148, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3"),
    TARGET_STRING(""), 2, 7, 0, 0, 0 },

  { 149, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4"),
    TARGET_STRING(""), 3, 7, 0, 0, 0 },

  { 150, 16, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 151, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 152, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 153, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 154, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 155, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 156, 0, TARGET_STRING("Trike Application Layer/System_Init/Subsystem/Sum"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 157, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 158, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 159, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 7, 0, 0, 0 },

  { 160, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 7, 0, 0, 0 },

  { 161, 17, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 162, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 163, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 164, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 165, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 166, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 167, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 168, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 7, 0, 0, 0 },

  { 169, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 7, 0, 0, 0 },

  { 170, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 7, 0, 0, 0 },

  { 171, 18, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 7, 0, 0, 0 },

  { 172, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 7, 0, 0, 0 },

  { 173, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 174, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 175, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 176, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 177, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 13, 0, 0, 0 },

  { 178, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 179, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 180, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 181, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 182, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 183, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 184, 1, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 185, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 13, 0, 0, 0 },

  { 186, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 187, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 188, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 189, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 190, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 191, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 192, 2, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 193, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Discrete-Time Integrator"),
    TARGET_STRING("i"), 0, 8, 0, 0, 0 },

  { 194, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/AntiWindup"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 195, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Gain"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 196, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Integral Gain1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 197, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Proportional Gain1"),
    TARGET_STRING("p"), 0, 8, 0, 0, 1 },

  { 198, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Product"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 199, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Product1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 200, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Product2"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 201, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Saturation"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 202, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 203, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Sum1"),
    TARGET_STRING("e"), 0, 8, 0, 0, 1 },

  { 204, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Sum2"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 205, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Sum4"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 206, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI_ctrl/FeedForward"),
    TARGET_STRING("ff"), 0, 8, 0, 0, 3 },

  { 207, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Subsystem/Compare To Constant/Compare"),
    TARGET_STRING(""), 0, 13, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 208, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 209, TARGET_STRING("Dunker #3/Gain"),
    TARGET_STRING("Gain"), 4, 0, 3 },

  { 210, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 8, 3, 0 },

  { 211, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 8, 0, 0 },

  { 212, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 8, 0, 0 },

  { 213, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 214, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 215, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 216, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 217, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 218, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 219, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 220, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave1"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 221, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 222, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 223, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 224, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave2"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 225, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 226, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 227, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 228, TARGET_STRING("Speedgoat_TPDOs/Subsystem/Sine Wave3"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 229, TARGET_STRING("Trike Application Layer/Scopes/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 230, TARGET_STRING("Trike Application Layer/Scopes/Gain2"),
    TARGET_STRING("Gain"), 6, 0, 4 },

  { 231, TARGET_STRING("Trike Application Layer/Scopes/Gain4"),
    TARGET_STRING("Gain"), 6, 0, 4 },

  { 232, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/offset"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 233, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Amp2mAmp"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 234, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain1"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 235, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain2"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 236, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain3"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 237, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING("UpperLimit"), 8, 0, 0 },

  { 238, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING("LowerLimit"), 8, 0, 0 },

  { 239, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation1"),
    TARGET_STRING("UpperLimit"), 2, 0, 0 },

  { 240, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation1"),
    TARGET_STRING("LowerLimit"), 2, 0, 0 },

  { 241, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Offset to 0 pos => pos = [-180 180]deg"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 242, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Robotics Convention"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 243, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/degree2rad"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 244, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/dem"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 245, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/inc2deg"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 246, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Memory1"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 247, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 248, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl"),
    TARGET_STRING("Kp"), 8, 0, 0 },

  { 249, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl"),
    TARGET_STRING("Ki"), 8, 0, 0 },

  { 250, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl"),
    TARGET_STRING("Req_lim"), 8, 0, 0 },

  { 251, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 252, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant1"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 253, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Offset for 0 deg (3.5064V -> 57.02mm)"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 254, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv1"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 255, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Amp2mAmp_conv2"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 256, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/LSB2Volt"),
    TARGET_STRING("Gain"), 0, 0, 5 },

  { 257, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Volt2meter"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 258, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 259, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/n"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 260, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Memory1"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 261, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("Amplitude"), 8, 0, 0 },

  { 262, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("Bias"), 8, 0, 0 },

  { 263, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("Frequency"), 8, 0, 0 },

  { 264, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Sine Wave"),
    TARGET_STRING("Phase"), 8, 0, 0 },

  { 265, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 266, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Manual Switch1"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 267, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Discrete Filter"),
    TARGET_STRING("Numerator"), 8, 4, 0 },

  { 268, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Discrete Filter"),
    TARGET_STRING("Denominator"), 8, 4, 0 },

  { 269, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Discrete Filter"),
    TARGET_STRING("InitialStates"), 8, 0, 0 },

  { 270, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING("Gain"), 7, 0, 0 },

  { 271, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 6 },

  { 272, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("Gain"), 4, 0, 7 },

  { 274, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 275, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 276, TARGET_STRING("Trike Application Layer/System_Init/Subsystem/Compare To Constant"),
    TARGET_STRING("const"), 7, 0, 0 },

  { 277, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 278, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 7, 0, 0 },

  { 279, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 8, 5, 0 },

  { 280, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 281, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 282, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 8, 6, 0 },

  { 283, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 8, 5, 0 },

  { 284, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 285, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 286, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 8, 6, 0 },

  { 287, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 8, 0, 0 },

  { 288, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 289, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl/Gain"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 290, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl/FeedForward"),
    TARGET_STRING("Numerator"), 8, 7, 0 },

  { 291, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl/FeedForward"),
    TARGET_STRING("Denominator"), 8, 7, 0 },

  { 292, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/PI_ctrl/FeedForward"),
    TARGET_STRING("InitialStates"), 8, 0, 0 },

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
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,/* 13: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity,/* 14: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,/* 15: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity,/* 16: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent_Inv,/* 17: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,/* 18: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity,/* 19: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent,/* 20: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity,/* 21: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,/* 22: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position,/* 23: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus,/* 24: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd,/* 25: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd,/* 26: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_01,/* 27: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_02,/* 28: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_03,/* 29: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN_04,/* 30: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave,/* 31: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave1,/* 32: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave2,/* 33: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SineWave3,/* 34: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Desired_Current,/* 35: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f,/* 36: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m,/* 37: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN1,  /* 38: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g,/* 39: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN2,  /* 40: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN3,  /* 41: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN4,  /* 42: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d,/* 43: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Actual_Current,/* 44: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2,/* 45: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain4,/* 46: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MovingAverage_o,/* 47: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,/* 48: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,/* 49: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,/* 50: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,/* 51: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent,/* 52: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,/* 53: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,/* 54: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,/* 55: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,/* 56: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,/* 57: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent,/* 58: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,/* 59: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,/* 60: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,/* 61: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,/* 62: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent,/* 63: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,/* 64: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,/* 65: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,/* 66: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent,/* 67: Signal */
  &SpeedgoatCANOpen2Buses100us_B.HB,   /* 68: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,/* 69: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,/* 70: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat,/* 71: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_e,/* 72: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Enable,/* 73: Signal */
  &SpeedgoatCANOpen2Buses100us_B.button,/* 74: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Byte0,/* 75: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle3,/* 76: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,/* 77: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,/* 78: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0],/* 79: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n,/* 80: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n,/* 81: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n[0],/* 82: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DataTypeConversion,/* 83: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrCurrentRef,/* 84: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1,/* 85: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2_a,/* 86: Signal */
  &SpeedgoatCANOpen2Buses100us_B.br_percent,/* 87: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation_e,/* 88: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation1,/* 89: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum,  /* 90: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedRef,/* 91: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_g,/* 92: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionAvg,/* 93: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionRef,/* 94: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SteeringAnglerad,/* 95: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DirectionReq,/* 96: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Direction,/* 97: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory1,/* 98: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Pos_out,/* 99: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MovingAverage,/* 100: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch,/* 101: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch1,/* 102: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch2,/* 103: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch3,/* 104: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch4,/* 105: Signal */
  &SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef_i,/* 106: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef_h,/* 107: Signal */
  &SpeedgoatCANOpen2Buses100us_B.c1,   /* 108: Signal */
  &SpeedgoatCANOpen2Buses100us_B.c2,   /* 109: Signal */
  &SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef,/* 110: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef,/* 111: Signal */
  &SpeedgoatCANOpen2Buses100us_B.up,   /* 112: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ui,   /* 113: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ud,   /* 114: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngle,/* 115: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle,/* 116: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1,/* 117: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv1,/* 118: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Amp2mAmp_conv2,/* 119: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftVolt,/* 120: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftm,/* 121: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PosRefm,/* 122: Signal */
  &SpeedgoatCANOpen2Buses100us_B.n,    /* 123: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftmfilt_k,/* 124: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngledeg,/* 125: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispLeftOffsetVolt,/* 126: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Pos_err,/* 127: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ManualSwitch,/* 128: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ManualSwitch1,/* 129: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DiscreteFilter,/* 130: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TractionRef,/* 131: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1_e,/* 132: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI,/* 133: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI,/* 134: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh,/* 135: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.ClearError,/* 136: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.DeviceMode,/* 137: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.BrakeCtrl,/* 138: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.PowerEnable,/* 139: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.InitStatus,/* 140: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_g,/* 141: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_g,/* 142: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_mj,/* 143: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k,/* 144: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_p,/* 145: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError,/* 146: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode,/* 147: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl,/* 148: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable,/* 149: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus,/* 150: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant,/* 151: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_e,/* 152: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_m,/* 153: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m,/* 154: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_i,/* 155: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_b,/* 156: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.ClearError,/* 157: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.DeviceMode,/* 158: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.BrakeCtrl,/* 159: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.PowerEnable,/* 160: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.InitStatus,/* 161: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_e,/* 162: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_d,/* 163: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_jv,/* 164: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0,/* 165: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_ir,/* 166: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.ClearError,/* 167: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.DeviceMode,/* 168: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.BrakeCtrl,/* 169: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.PowerEnable,/* 170: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.InitStatus,/* 171: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_m,/* 172: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_h,/* 173: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_j,/* 174: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b,/* 175: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_a,/* 176: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1,/* 177: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2,/* 178: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3,/* 179: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4,/* 180: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5,/* 181: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0],/* 182: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_c,/* 183: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_ge,/* 184: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b,/* 185: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e,/* 186: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m,/* 187: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a,/* 188: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h,/* 189: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h[0],/* 190: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_g,/* 191: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_em,/* 192: Signal */
  &SpeedgoatCANOpen2Buses100us_B.i,    /* 193: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AntiWindup,/* 194: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain, /* 195: Signal */
  &SpeedgoatCANOpen2Buses100us_B.IntegralGain1,/* 196: Signal */
  &SpeedgoatCANOpen2Buses100us_B.p,    /* 197: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product,/* 198: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product1,/* 199: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Product2,/* 200: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation,/* 201: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_a,/* 202: Signal */
  &SpeedgoatCANOpen2Buses100us_B.e,    /* 203: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum2, /* 204: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum4, /* 205: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ff_i, /* 206: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Compare,/* 207: Signal */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_e,/* 208: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain_Gain_g,/* 209: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0],/* 210: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P2,/* 211: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P3,/* 212: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Amp_l,/* 213: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Bias_c,/* 214: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Freq_e,/* 215: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Phase_h,/* 216: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Amp,/* 217: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Bias,/* 218: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Freq,/* 219: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave1_Phase,/* 220: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Amp,/* 221: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Bias,/* 222: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Freq,/* 223: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave2_Phase,/* 224: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Amp,/* 225: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Bias,/* 226: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Freq,/* 227: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave3_Phase,/* 228: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_k,/* 229: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p,/* 230: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain4_Gain,/* 231: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.offset_Value,/* 232: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_Gain,/* 233: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain,/* 234: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain,/* 235: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain3_Gain,/* 236: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat,/* 237: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat,/* 238: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat,/* 239: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat,/* 240: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offsetto0pospos180180deg_Value,/* 241: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain,/* 242: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain,/* 243: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.dem_Gain,/* 244: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain,/* 245: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition,/* 246: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value,/* 247: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Kp,/* 248: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Ki,/* 249: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.PI_ctrl_Req_lim,/* 250: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_c,/* 251: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant1_Value,/* 252: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Offsetfor0deg35064V5702mm_Value,/* 253: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv1_Gain,/* 254: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Amp2mAmp_conv2_Gain,/* 255: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.LSB2Volt_Gain,/* 256: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain,/* 257: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2m_Gain,/* 258: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.n_Gain,/* 259: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition_k,/* 260: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Amp,/* 261: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Bias,/* 262: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Freq,/* 263: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.SineWave_Phase,/* 264: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ManualSwitch_CurrentSetting,/* 265: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ManualSwitch1_CurrentSetting,/* 266: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_NumCoef[0],/* 267: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_DenCoef[0],/* 268: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteFilter_InitialStates,/* 269: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_n,/* 270: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k,/* 271: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain,/* 272: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain,/* 273: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_h,/* 274: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_l,/* 275: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const,/* 276: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_n,/* 277: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_j,/* 278: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0],/* 279: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold,/* 280: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp,/* 281: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0],/* 282: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0],/* 283: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l,/* 284: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv,/* 285: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0],/* 286: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_gainval,/* 287: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.DiscreteTimeIntegrator_IC,/* 288: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain_Gain,/* 289: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.FeedForward_NumCoef[0],/* 290: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.FeedForward_DenCoef[0],/* 291: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.FeedForward_InitialStates,/* 292: Block Parameter */
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

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 }
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
  3,                                   /* 9 */
  1,                                   /* 10 */
  6,                                   /* 11 */
  1,                                   /* 12 */
  7,                                   /* 13 */
  1,                                   /* 14 */
  2                                    /* 15 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0001, 0.0, 0.005, 1.0, 0.0002
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -26, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -18, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -31, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -35, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -26, 1 },

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
    3, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[1],
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
  { rtBlockSignals, 203,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 84,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3087947653U,
    1297646397U,
    3821113562U,
    3086116367U },
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
