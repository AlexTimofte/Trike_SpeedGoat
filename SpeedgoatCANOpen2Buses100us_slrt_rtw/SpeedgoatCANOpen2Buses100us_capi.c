/*
 * SpeedgoatCANOpen2Buses100us_capi.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.480
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Jun 22 20:30:45 2021
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

  { 17, 0, TARGET_STRING("Dunker #3/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkC_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Dunker #3/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkC_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Dunker #4/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkD_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Dunker #4/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkD_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p1"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 5, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p2"),
    TARGET_STRING("Encoder_Stored_Position"), 1, 5, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p1"),
    TARGET_STRING("Joystick_ButtonsStatus"), 0, 1, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p2"),
    TARGET_STRING("Joystick_LongCmd"), 1, 6, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p3"),
    TARGET_STRING("Joystick_LatCmd"), 2, 6, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion14"),
    TARGET_STRING("Desired_Current"), 0, 6, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion15"),
    TARGET_STRING("Joystick_LatCmd"), 0, 6, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion16"),
    TARGET_STRING("Joystick_LongCmd"), 0, 6, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion17"),
    TARGET_STRING("AN1"), 0, 6, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion18"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 6, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion19"),
    TARGET_STRING("AN2"), 0, 6, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion20"),
    TARGET_STRING("AN3"), 0, 6, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion21"),
    TARGET_STRING("AN4"), 0, 6, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion5"),
    TARGET_STRING("Encoder_Stored_Position"), 0, 6, 0, 0, 0 },

  { 35, 0, TARGET_STRING("Trike Application Layer/Scopes/Data Type Conversion9"),
    TARGET_STRING("Actual_Current"), 0, 6, 0, 0, 0 },

  { 38, 3, TARGET_STRING("Trike Application Layer/Scopes/Moving Average"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 39, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion22"),
    TARGET_STRING("DunkB_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 40, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion23"),
    TARGET_STRING("DunkB_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 41, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion24"),
    TARGET_STRING("DunkB_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 42, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion25"),
    TARGET_STRING("DunkB_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 43, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion26"),
    TARGET_STRING("DunkB_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 44, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion27"),
    TARGET_STRING("DunkC_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 45, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion28"),
    TARGET_STRING("DunkC_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 46, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion29"),
    TARGET_STRING("DunkC_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 47, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion3"),
    TARGET_STRING("DunkA_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 48, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion30"),
    TARGET_STRING("DunkC_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 49, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion31"),
    TARGET_STRING("DunkC_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 50, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion32"),
    TARGET_STRING("DunkD_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 51, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion33"),
    TARGET_STRING("DunkD_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion34"),
    TARGET_STRING("DunkD_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 53, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion35"),
    TARGET_STRING("DunkD_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 54, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion36"),
    TARGET_STRING("DunkD_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 55, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion4"),
    TARGET_STRING("DunkA_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 56, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion6"),
    TARGET_STRING("DunkA_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 57, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion7"),
    TARGET_STRING("DunkA_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 58, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion8"),
    TARGET_STRING("DunkA_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 59, 4, TARGET_STRING("Trike Application Layer/Subsystem1/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 60, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion"),
    TARGET_STRING("APT_TPDO_ControlWord"), 0, 1, 0, 0, 0 },

  { 61, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion1"),
    TARGET_STRING("APT_TPDO_PedalPosition"), 0, 1, 0, 0, 0 },

  { 62, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion2"),
    TARGET_STRING("APT_TPDO_Heartbeat"), 0, 1, 0, 0, 0 },

  { 63, 0, TARGET_STRING("Trike Application Layer/System_Control/Cast To Single"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 64, 11, TARGET_STRING("Trike Application Layer/System_Init/MATLAB Function"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 65, 12, TARGET_STRING("Trike Application Layer/System_Init/MATLAB Function1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 66, 0, TARGET_STRING("Trike Application Layer/System_Init/Constant"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 67, 0, TARGET_STRING("Trike Application Layer/System_Init/Cast To Single3"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 68, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 69, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 70, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 71, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 72, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 73, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 75, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain2"),
    TARGET_STRING(""), 0, 5, 0, 1, 0 },

  { 76, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING(""), 0, 5, 0, 1, 0 },

  { 77, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/P Direction Controller"),
    TARGET_STRING("DirSpeedRef"), 0, 8, 0, 0, 1 },

  { 78, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 79, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Cast To Single1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 80, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Robotics Convention"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 81, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/degree2rad"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 82, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/inc2deg"),
    TARGET_STRING("Direction"), 0, 8, 0, 0, 0 },

  { 83, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Memory1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 84, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Sum"),
    TARGET_STRING("Pos_out"), 0, 8, 0, 0, 0 },

  { 85, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 86, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 87, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 88, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 90, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller/p1"),
    TARGET_STRING("LTilt CurrentRef"), 0, 8, 0, 0, 1 },

  { 91, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller/p2"),
    TARGET_STRING("RTilt CurrenRef"), 1, 8, 0, 0, 1 },

  { 92, 9, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/ServoTilting"),
    TARGET_STRING("TiltingAngle [deg]"), 0, 8, 0, 0, 0 },

  { 93, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 94, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 95, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Volt2meter"),
    TARGET_STRING("DispRight [m]"), 0, 8, 0, 0, 0 },

  { 96, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("PosRef [m]"), 0, 8, 0, 0, 0 },

  { 97, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Memory"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 98, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 99, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Abs"),
    TARGET_STRING("TractionRef"), 0, 6, 0, 0, 0 },

  { 100, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 101, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("SpeedRear_SI"), 0, 4, 0, 2, 0 },

  { 104, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Saturation1"),
    TARGET_STRING("TractionRef"), 0, 8, 0, 0, 0 },

  { 105, 10, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 106, 10, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 107, 10, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 6, 0, 0, 0 },

  { 108, 10, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 6, 0, 0, 0 },

  { 109, 10, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkD_Brake_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 110, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 111, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 112, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 113, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 114, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 115, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 116, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 117, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p3"),
    TARGET_STRING(""), 2, 6, 0, 0, 0 },

  { 118, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p4"),
    TARGET_STRING(""), 3, 6, 0, 0, 0 },

  { 119, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init_SpeedMode/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 120, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 121, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 122, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 123, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 124, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 125, 0, TARGET_STRING("Trike Application Layer/System_Init/Subsystem/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 126, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 127, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 128, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 6, 0, 0, 0 },

  { 129, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 6, 0, 0, 0 },

  { 130, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkB_TiltLeft_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 131, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 132, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 133, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 134, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 135, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 136, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 137, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 138, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p3"),
    TARGET_STRING(""), 2, 6, 0, 0, 0 },

  { 139, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p4"),
    TARGET_STRING(""), 3, 6, 0, 0, 0 },

  { 140, 15, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkC_TiltRight_Init_CurrentMode/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 141, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 142, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 143, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 144, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 145, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 146, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 13, 0, 0, 0 },

  { 147, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 0 },

  { 148, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 149, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 150, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 151, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 152, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 153, 1, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 154, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 13, 0, 0, 0 },

  { 155, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 0 },

  { 156, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 157, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 158, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 159, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 160, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 161, 2, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 162, 0, TARGET_STRING(
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
  { 163, TARGET_STRING("Dold_MiniMaster_RPDOs/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 164, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 8, 3, 0 },

  { 165, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 8, 0, 0 },

  { 166, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 8, 0, 0 },

  { 167, TARGET_STRING("Trike Application Layer/Scopes/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 168, TARGET_STRING("Trike Application Layer/Scopes/Gain2"),
    TARGET_STRING("Gain"), 5, 0, 3 },

  { 169, TARGET_STRING("Trike Application Layer/Scopes/Gain4"),
    TARGET_STRING("Gain"), 5, 0, 3 },

  { 170, TARGET_STRING("Trike Application Layer/System_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 171, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain1"),
    TARGET_STRING("Gain"), 5, 0, 4 },

  { 172, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 5 },

  { 173, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING("UpperLimit"), 5, 0, 1 },

  { 174, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING("LowerLimit"), 5, 0, 1 },

  { 175, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Constant1"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 176, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Robotics Convention"),
    TARGET_STRING("Gain"), 6, 0, 0 },

  { 177, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/degree2rad"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 178, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/inc2deg"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 179, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Memory1"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 180, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 181, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 182, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch1"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 183, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 184, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 185, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 186, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 187, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Volt2meter"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 188, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 189, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Memory"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 190, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain1"),
    TARGET_STRING("Gain"), 6, 0, 0 },

  { 191, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Gain"), 2, 0, 6 },

  { 192, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("Gain"), 4, 0, 7 },

  { 194, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Saturation1"),
    TARGET_STRING("UpperLimit"), 8, 0, 0 },

  { 195, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Saturation1"),
    TARGET_STRING("LowerLimit"), 8, 0, 0 },

  { 196, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 197, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 198, TARGET_STRING("Trike Application Layer/System_Init/Subsystem/Compare To Constant"),
    TARGET_STRING("const"), 8, 0, 0 },

  { 199, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 200, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 201, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 8, 4, 0 },

  { 202, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 203, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 204, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 8, 5, 0 },

  { 205, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 8, 4, 0 },

  { 206, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 207, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 208, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write"),
    TARGET_STRING("P1"), 8, 5, 0 },

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
  &SpeedgoatCANOpen2Buses100us_B.Enable,/* 12: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,/* 13: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity,/* 14: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,/* 15: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity,/* 16: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,/* 17: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity,/* 18: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent,/* 19: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity,/* 20: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,/* 21: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position,/* 22: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus,/* 23: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd,/* 24: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd,/* 25: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Desired_Current,/* 26: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f,/* 27: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m,/* 28: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN1,  /* 29: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g,/* 30: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN2,  /* 31: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN3,  /* 32: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN4,  /* 33: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d,/* 34: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Actual_Current,/* 35: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2,/* 36: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain4,/* 37: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MovingAverage,/* 38: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,/* 39: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,/* 40: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,/* 41: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,/* 42: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent,/* 43: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,/* 44: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,/* 45: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,/* 46: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,/* 47: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,/* 48: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent,/* 49: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,/* 50: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,/* 51: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,/* 52: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,/* 53: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent,/* 54: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,/* 55: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,/* 56: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,/* 57: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent,/* 58: Signal */
  &SpeedgoatCANOpen2Buses100us_B.HB,   /* 59: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,/* 60: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,/* 61: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat,/* 62: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_e,/* 63: Signal */
  &SpeedgoatCANOpen2Buses100us_B.button,/* 64: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Byte0,/* 65: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant,/* 66: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle3,/* 67: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,/* 68: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,/* 69: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0],/* 70: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1_n,/* 71: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2_n,/* 72: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3_n[0],/* 73: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrCurrentRef,/* 74: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2_a,/* 75: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation,/* 76: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedRef,/* 77: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_g,/* 78: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g,/* 79: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RoboticsConvention,/* 80: Signal */
  &SpeedgoatCANOpen2Buses100us_B.degree2rad,/* 81: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Direction,/* 82: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory1,/* 83: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Pos_out,/* 84: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch,/* 85: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch1,/* 86: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch2,/* 87: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch3,/* 88: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch4,/* 89: Signal */
  &SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef,/* 90: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef,/* 91: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngle,/* 92: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle,/* 93: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1,/* 94: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispRightm,/* 95: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PosRefm,/* 96: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory,/* 97: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum,  /* 98: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TractionRef_k,/* 99: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain1,/* 100: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI,/* 101: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI,/* 102: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh,/* 103: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TractionRef,/* 104: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.ClearError,/* 105: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.DeviceMode,/* 106: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.BrakeCtrl,/* 107: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.PowerEnable,/* 108: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkD_Brake_Init_CurrentMode.InitStatus,/* 109: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_g,/* 110: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_g,/* 111: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_mj,/* 112: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k,/* 113: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_p,/* 114: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError,/* 115: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode,/* 116: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl,/* 117: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable,/* 118: Signal */
  &SpeedgoatCANOpen2Buses100us_B.InitStatus,/* 119: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_j,/* 120: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_e,/* 121: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_m,/* 122: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_m,/* 123: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_i,/* 124: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum_b,/* 125: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.ClearError,/* 126: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.DeviceMode,/* 127: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.BrakeCtrl,/* 128: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.PowerEnable,/* 129: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkB_TiltLeft_Init_CurrentM.InitStatus,/* 130: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_e,/* 131: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_d,/* 132: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_jv,/* 133: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_k0,/* 134: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_ir,/* 135: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.ClearError,/* 136: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.DeviceMode,/* 137: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.BrakeCtrl,/* 138: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.PowerEnable,/* 139: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkC_TiltRight_Init_Current.InitStatus,/* 140: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_m,/* 141: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_h,/* 142: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_j,/* 143: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_b,/* 144: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_a,/* 145: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1,/* 146: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2,/* 147: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3,/* 148: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4,/* 149: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5,/* 150: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0],/* 151: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_c,/* 152: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_ge,/* 153: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1_b,/* 154: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2_e,/* 155: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3_m,/* 156: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4_a,/* 157: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5_h,/* 158: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6_h[0],/* 159: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_g,/* 160: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_em,/* 161: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Compare,/* 162: Signal */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_e,/* 163: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0],/* 164: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P2,/* 165: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P3,/* 166: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_k,/* 167: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain,/* 168: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain4_Gain,/* 169: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value,/* 170: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain_c,/* 171: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p,/* 172: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat,/* 173: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat,/* 174: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant1_Value,/* 175: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain,/* 176: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain,/* 177: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain,/* 178: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition,/* 179: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_i,/* 180: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold,/* 181: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch1_Threshold,/* 182: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch2_Threshold,/* 183: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch3_Threshold,/* 184: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch4_Threshold,/* 185: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_g,/* 186: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain,/* 187: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2m_Gain,/* 188: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition,/* 189: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain,/* 190: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k,/* 191: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain,/* 192: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain,/* 193: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat,/* 194: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat,/* 195: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_h,/* 196: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_l,/* 197: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CompareToConstant_const,/* 198: Mask Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_n,/* 199: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_j,/* 200: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0],/* 201: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_m,/* 202: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp,/* 203: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0],/* 204: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1_n[0],/* 205: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_l,/* 206: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_nv,/* 207: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1_h[0],/* 208: Block Parameter */
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

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0 },

  { "numeric", "uint64_T", 0, 0, sizeof(uint64_T), SS_UINT64, 0, 0 },

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
  0.0001, 0.0, 0.025, 1.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -1000, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -18, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -35, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -28, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -1000, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 16, -18, 1 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -32, 1 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
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
  { rtBlockSignals, 158,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 45,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3100654823U,
    4167409382U,
    2938179712U,
    157165536U },
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
