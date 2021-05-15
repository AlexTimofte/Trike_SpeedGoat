/*
 * SpeedgoatCANOpen2Buses100us_capi.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.456
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat May 15 14:03:32 2021
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
#define SS_INT64                       39
#endif

#ifndef SS_UINT64
#define SS_UINT64                      40
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

  { 12, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkA_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Dunker #1/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkA_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Dunker #2/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkB_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Dunker #2/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkB_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Dunker #3/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkC_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Dunker #3/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkC_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Dunker #4/RPDOs from Dunker #1/p1"),
    TARGET_STRING("DunkD_ActualCurrent"), 0, 4, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Dunker #4/RPDOs from Dunker #1/p2"),
    TARGET_STRING("DunkD_ActualVelocity"), 1, 4, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p1"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 5, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Encoder_RPDOs/RPDOs from Encoder/p2"),
    TARGET_STRING("Encoder_Stored_Position"), 1, 5, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p1"),
    TARGET_STRING("Joystick_ButtonsStatus"), 0, 1, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p2"),
    TARGET_STRING("Joystick_LongCmd"), 1, 6, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Joystick_RPDOs/RPDOs from Joystick/p3"),
    TARGET_STRING("Joystick_LatCmd"), 2, 6, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion14"),
    TARGET_STRING("Desired_Current"), 0, 6, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion15"),
    TARGET_STRING("Joystick_LatCmd"), 0, 6, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion16"),
    TARGET_STRING("Joystick_LongCmd"), 0, 6, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion17"),
    TARGET_STRING("AN1"), 0, 6, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion18"),
    TARGET_STRING("Encoder_Actual_Position"), 0, 6, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion19"),
    TARGET_STRING("AN2"), 0, 6, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion20"),
    TARGET_STRING("AN3"), 0, 6, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion21"),
    TARGET_STRING("AN4"), 0, 6, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion5"),
    TARGET_STRING("Encoder_Stored_Position"), 0, 6, 0, 0, 0 },

  { 34, 0, TARGET_STRING("Trike Application Layer/Data Type Conversion9"),
    TARGET_STRING("Actual_Current"), 0, 6, 0, 0, 0 },

  { 37, 2, TARGET_STRING("Trike Application Layer/Moving Average"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 38, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion22"),
    TARGET_STRING("DunkB_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 39, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion23"),
    TARGET_STRING("DunkB_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 40, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion24"),
    TARGET_STRING("DunkB_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 41, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion25"),
    TARGET_STRING("DunkB_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 42, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion26"),
    TARGET_STRING("DunkB_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 43, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion27"),
    TARGET_STRING("DunkC_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 44, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion28"),
    TARGET_STRING("DunkC_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 45, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion29"),
    TARGET_STRING("DunkC_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 46, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion3"),
    TARGET_STRING("DunkA_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 47, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion30"),
    TARGET_STRING("DunkC_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 48, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion31"),
    TARGET_STRING("DunkC_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 49, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion32"),
    TARGET_STRING("DunkD_TPDO_ClearError"), 0, 1, 0, 0, 0 },

  { 50, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion33"),
    TARGET_STRING("DunkD_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 51, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion34"),
    TARGET_STRING("DunkD_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 52, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion35"),
    TARGET_STRING("DunkD_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 53, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion36"),
    TARGET_STRING("DunkD_TPDO_DesiredCurrent"), 0, 4, 0, 0, 0 },

  { 54, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion4"),
    TARGET_STRING("DunkA_TPDO_BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 55, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion6"),
    TARGET_STRING("DunkA_TPDO_DeviceMode"), 0, 1, 0, 0, 0 },

  { 56, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion7"),
    TARGET_STRING("DunkA_TPDO_PowerEnable"), 0, 1, 0, 0, 0 },

  { 57, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem/Data Type Conversion8"),
    TARGET_STRING("DunkA_TPDO_DesiredCurrent"), 0, 4, 0, 0, 1 },

  { 58, 3, TARGET_STRING("Trike Application Layer/Subsystem1/HeartBeatgenerator"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 59, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion"),
    TARGET_STRING("APT_TPDO_ControlWord"), 0, 1, 0, 0, 0 },

  { 60, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion1"),
    TARGET_STRING("APT_TPDO_PedalPosition"), 0, 1, 0, 0, 0 },

  { 61, 0, TARGET_STRING(
    "Trike Application Layer/Subsystem1/Data Type Conversion2"),
    TARGET_STRING("APT_TPDO_Heartbeat"), 0, 1, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Trike Application Layer/System_Control/Cast To Single"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 63, 10, TARGET_STRING("Trike Application Layer/System_Init/MATLAB Function"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 64, 11, TARGET_STRING("Trike Application Layer/System_Init/MATLAB Function1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 65, 0, TARGET_STRING("Trike Application Layer/System_Init/Cast To Single3"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 66, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p1"),
    TARGET_STRING(""), 0, 5, 0, 0, 0 },

  { 67, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 68, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/C Caller/p3"),
    TARGET_STRING(""), 2, 1, 1, 0, 0 },

  { 70, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Gain2"),
    TARGET_STRING(""), 0, 5, 0, 1, 0 },

  { 71, 6, TARGET_STRING(
    "Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING(""), 0, 5, 0, 1, 0 },

  { 72, 4, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/P Direction Controller"),
    TARGET_STRING("DirSpeedRef"), 0, 8, 0, 0, 1 },

  { 73, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 74, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Cast To Single1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 75, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/DirectionControl/Robotics Convention"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 79, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 80, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 81, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 8, 0, 0, 1 },

  { 82, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 83, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 84, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller/p1"),
    TARGET_STRING("LTilt CurrentRef"), 0, 8, 0, 0, 1 },

  { 85, 7, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/PI Tilting Controller/p2"),
    TARGET_STRING("RTilt CurrenRef"), 1, 8, 0, 0, 1 },

  { 86, 8, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/ServoTilting"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 87, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 88, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Cast To Single1"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 89, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Volt2meter"),
    TARGET_STRING("DispRight"), 0, 8, 0, 0, 0 },

  { 90, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 91, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Memory"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 92, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TiltingControl/Sum"),
    TARGET_STRING(""), 0, 8, 0, 0, 0 },

  { 93, 0, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("SpeedRear_SI"), 0, 4, 0, 2, 0 },

  { 96, 5, TARGET_STRING(
    "Trike Application Layer/System_Control/TractionControl/Saturation1"),
    TARGET_STRING("TractionRef"), 0, 6, 0, 0, 0 },

  { 97, 9, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 98, 9, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 99, 9, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p3"),
    TARGET_STRING(""), 2, 6, 0, 0, 0 },

  { 100, 9, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p4"),
    TARGET_STRING(""), 3, 6, 0, 0, 0 },

  { 101, 9, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/DunkA_Steering_Init/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 102, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 103, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 104, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 105, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 106, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 107, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Cast To Single4"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 108, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 109, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 110, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p3"),
    TARGET_STRING(""), 2, 6, 0, 0, 0 },

  { 111, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p4"),
    TARGET_STRING(""), 3, 6, 0, 0, 0 },

  { 112, 12, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/DunkA_Steering_Init/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 113, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 114, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 115, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 116, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 117, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 118, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/Steering_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 119, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 120, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 121, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p3"),
    TARGET_STRING(""), 2, 6, 0, 0, 0 },

  { 122, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p4"),
    TARGET_STRING(""), 3, 6, 0, 0, 0 },

  { 123, 13, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/DunkA_Steering_Init/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 124, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 125, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 126, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 127, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 128, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 129, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Cast To Single4"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 130, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 131, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p2"),
    TARGET_STRING(""), 1, 6, 0, 0, 0 },

  { 132, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p3"),
    TARGET_STRING(""), 2, 6, 0, 0, 0 },

  { 133, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p4"),
    TARGET_STRING(""), 3, 6, 0, 0, 0 },

  { 134, 14, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/DunkA_Steering_Init/p5"),
    TARGET_STRING(""), 4, 6, 0, 0, 0 },

  { 135, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 136, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant1"),
    TARGET_STRING(""), 0, 6, 0, 0, 0 },

  { 137, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single1"),
    TARGET_STRING("DeviceMode"), 0, 1, 0, 0, 0 },

  { 138, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single2"),
    TARGET_STRING("BrakeCtrl"), 0, 1, 0, 0, 0 },

  { 139, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single3"),
    TARGET_STRING("ClearError"), 0, 1, 0, 0, 0 },

  { 140, 0, TARGET_STRING(
    "Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Cast To Single4"),
    TARGET_STRING("PowerEnable"), 0, 1, 0, 0, 0 },

  { 141, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p1"),
    TARGET_STRING(""), 0, 14, 0, 0, 0 },

  { 142, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 0 },

  { 143, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p3"),
    TARGET_STRING(""), 2, 1, 0, 0, 0 },

  { 144, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p4"),
    TARGET_STRING(""), 3, 1, 0, 0, 0 },

  { 145, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p5"),
    TARGET_STRING(""), 4, 8, 0, 0, 0 },

  { 146, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read/p6"),
    TARGET_STRING(""), 5, 1, 1, 0, 0 },

  { 147, 0, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 148, 1, TARGET_STRING(
    "Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 149, TARGET_STRING("Trike Application Layer/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 150, TARGET_STRING("Trike Application Layer/Gain2"),
    TARGET_STRING("Gain"), 5, 0, 3 },

  { 151, TARGET_STRING("Trike Application Layer/Gain4"),
    TARGET_STRING("Gain"), 5, 0, 3 },

  { 152, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P1"), 8, 3, 0 },

  { 153, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P2"), 8, 0, 0 },

  { 154, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CAN Setup "),
    TARGET_STRING("P3"), 8, 0, 0 },

  { 155, TARGET_STRING("Trike Application Layer/System_Init/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 156, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain1"),
    TARGET_STRING("Gain"), 5, 0, 4 },

  { 157, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 5 },

  { 158, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING("UpperLimit"), 5, 0, 1 },

  { 159, TARGET_STRING("Trike Application Layer/System_Control/BrakeControl/Saturation"),
    TARGET_STRING("LowerLimit"), 5, 0, 1 },

  { 160, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/Robotics Convention"),
    TARGET_STRING("Gain"), 6, 0, 0 },

  { 162, TARGET_STRING("Trike Application Layer/System_Control/DirectionControl/inc2deg"),
    TARGET_STRING("Gain"), 5, 0, 3 },

  { 164, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 165, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 166, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch1"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 167, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch2"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 168, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch3"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 169, TARGET_STRING("Trike Application Layer/System_Control/Subsystem/Switch4"),
    TARGET_STRING("Threshold"), 8, 0, 0 },

  { 170, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Constant"),
    TARGET_STRING("Value"), 8, 0, 0 },

  { 171, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Volt2meter"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 172, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/degree2m"),
    TARGET_STRING("Gain"), 8, 0, 0 },

  { 173, TARGET_STRING("Trike Application Layer/System_Control/TiltingControl/Memory"),
    TARGET_STRING("InitialCondition"), 8, 0, 0 },

  { 174, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Gain2"),
    TARGET_STRING("Gain"), 2, 0, 6 },

  { 175, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/WheelRadius"),
    TARGET_STRING("Gain"), 4, 0, 7 },

  { 177, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Saturation1"),
    TARGET_STRING("UpperLimit"), 6, 0, 0 },

  { 178, TARGET_STRING("Trike Application Layer/System_Control/TractionControl/Saturation1"),
    TARGET_STRING("LowerLimit"), 6, 0, 0 },

  { 179, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 180, TARGET_STRING("Trike Application Layer/System_Init/Brakes_DunkMotor_Init/Constant1"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 181, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 182, TARGET_STRING("Trike Application Layer/System_Init/Steering_DunkMotor_Init/Constant1"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 183, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 184, TARGET_STRING("Trike Application Layer/System_Init/TiltingLeft_DunkMotor_Init/Constant1"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 185, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 186, TARGET_STRING("Trike Application Layer/System_Init/TiltingRight_DunkMotor_Init/Constant1"),
    TARGET_STRING("Value"), 6, 0, 0 },

  { 187, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read"),
    TARGET_STRING("P1"), 8, 4, 0 },

  { 188, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/Switch"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 189, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 190, TARGET_STRING("Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write"),
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
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualCurrent,/* 12: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_ActualVelocity,/* 13: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualCurrent,/* 14: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_ActualVelocity,/* 15: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualCurrent,/* 16: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_ActualVelocity,/* 17: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualCurrent,/* 18: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_ActualVelocity,/* 19: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position,/* 20: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position,/* 21: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_ButtonsStatus,/* 22: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd,/* 23: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd,/* 24: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Desired_Current,/* 25: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LatCmd_f,/* 26: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Joystick_LongCmd_m,/* 27: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN1,  /* 28: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Actual_Position_g,/* 29: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN2,  /* 30: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN3,  /* 31: Signal */
  &SpeedgoatCANOpen2Buses100us_B.AN4,  /* 32: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Encoder_Stored_Position_d,/* 33: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Actual_Current,/* 34: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2,/* 35: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain4,/* 36: Signal */
  &SpeedgoatCANOpen2Buses100us_B.MovingAverage,/* 37: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_ClearError,/* 38: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_BrakeCtrl,/* 39: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DeviceMode,/* 40: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_PowerEnable,/* 41: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkB_TPDO_DesiredCurrent_j,/* 42: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_ClearError,/* 43: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_BrakeCtrl,/* 44: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DeviceMode,/* 45: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_ClearError,/* 46: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_PowerEnable,/* 47: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkC_TPDO_DesiredCurrent_g,/* 48: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_ClearError,/* 49: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_BrakeCtrl,/* 50: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DeviceMode,/* 51: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_PowerEnable,/* 52: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkD_TPDO_DesiredCurrent,/* 53: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_BrakeCtrl,/* 54: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DeviceMode,/* 55: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_PowerEnable,/* 56: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DunkA_TPDO_DesiredCurrent_h,/* 57: Signal */
  &SpeedgoatCANOpen2Buses100us_B.HB,   /* 58: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_ControlWord,/* 59: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_PedalPosition,/* 60: Signal */
  &SpeedgoatCANOpen2Buses100us_B.APT_TPDO_Heartbeat,/* 61: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_e,/* 62: Signal */
  &SpeedgoatCANOpen2Buses100us_B.button,/* 63: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Byte0,/* 64: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle3,/* 65: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o1,/* 66: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o2,/* 67: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CCaller_o3[0],/* 68: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrCurrentRef,/* 69: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Gain2_a,/* 70: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Saturation,/* 71: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedRef,/* 72: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle_g,/* 73: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1_g,/* 74: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RoboticsConvention,/* 75: Signal */
  &SpeedgoatCANOpen2Buses100us_B.degree2rad,/* 76: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Direction,/* 77: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory1,/* 78: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch,/* 79: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch1,/* 80: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch2,/* 81: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch3,/* 82: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch4,/* 83: Signal */
  &SpeedgoatCANOpen2Buses100us_B.LTiltCurrRef,/* 84: Signal */
  &SpeedgoatCANOpen2Buses100us_B.RTiltCurrRef,/* 85: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TiltingAngle,/* 86: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle,/* 87: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CastToSingle1,/* 88: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DispRight,/* 89: Signal */
  &SpeedgoatCANOpen2Buses100us_B.degree2m,/* 90: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Memory,/* 91: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Sum,  /* 92: Signal */
  &SpeedgoatCANOpen2Buses100us_B.SpeedRear_SI,/* 93: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_SI,/* 94: Signal */
  &SpeedgoatCANOpen2Buses100us_B.VehSpeed_Kmh,/* 95: Signal */
  &SpeedgoatCANOpen2Buses100us_B.TractionRef,/* 96: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.ClearError,/* 97: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.DeviceMode,/* 98: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.BrakeCtrl,/* 99: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.PowerEnable,/* 100: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init.SpeedRequest,/* 101: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_jw,/* 102: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant1_g,/* 103: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_p,/* 104: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_a,/* 105: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_a,/* 106: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_a,/* 107: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.ClearError,/* 108: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.DeviceMode,/* 109: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.BrakeCtrl,/* 110: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.PowerEnable,/* 111: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_k.SpeedRequest,/* 112: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant,/* 113: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant1,/* 114: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode,/* 115: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError,/* 116: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl,/* 117: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable,/* 118: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.ClearError,/* 119: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.DeviceMode,/* 120: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.BrakeCtrl,/* 121: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.PowerEnable,/* 122: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_j.SpeedRequest,/* 123: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_a,/* 124: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant1_a,/* 125: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_k,/* 126: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_l,/* 127: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_h,/* 128: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_k,/* 129: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.ClearError,/* 130: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.DeviceMode,/* 131: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.BrakeCtrl,/* 132: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.PowerEnable,/* 133: Signal */
  &SpeedgoatCANOpen2Buses100us_B.sf_DunkA_Steering_Init_m.SpeedRequest,/* 134: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_j,/* 135: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant1_i,/* 136: Signal */
  &SpeedgoatCANOpen2Buses100us_B.DeviceMode_e,/* 137: Signal */
  &SpeedgoatCANOpen2Buses100us_B.BrakeCtrl_o,/* 138: Signal */
  &SpeedgoatCANOpen2Buses100us_B.ClearError_o,/* 139: Signal */
  &SpeedgoatCANOpen2Buses100us_B.PowerEnable_d,/* 140: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o1,/* 141: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o2,/* 142: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o3,/* 143: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o4,/* 144: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o5,/* 145: Signal */
  &SpeedgoatCANOpen2Buses100us_B.CANRead_o6[0],/* 146: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Switch_c,/* 147: Signal */
  &SpeedgoatCANOpen2Buses100us_B.Constant_g,/* 148: Signal */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_k,/* 149: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain,/* 150: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain4_Gain,/* 151: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P1[0],/* 152: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P2,/* 153: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANSetup_P3,/* 154: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value,/* 155: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain1_Gain,/* 156: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_p,/* 157: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_UpperSat,/* 158: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation_LowerSat,/* 159: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.RoboticsConvention_Gain,/* 160: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2rad_Gain,/* 161: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.inc2deg_Gain,/* 162: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory1_InitialCondition,/* 163: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_i,/* 164: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold,/* 165: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch1_Threshold,/* 166: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch2_Threshold,/* 167: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch3_Threshold,/* 168: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch4_Threshold,/* 169: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_g,/* 170: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Volt2meter_Gain,/* 171: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.degree2m_Gain,/* 172: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Memory_InitialCondition,/* 173: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Gain2_Gain_k,/* 174: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.WheelRadius_Gain,/* 175: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.ms2Kmh_Gain,/* 176: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_UpperSat,/* 177: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Saturation1_LowerSat,/* 178: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_n,/* 179: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant1_Value_g,/* 180: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_l,/* 181: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant1_Value,/* 182: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_g5,/* 183: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant1_Value_a,/* 184: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_m,/* 185: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant1_Value_k,/* 186: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANRead_P1[0],/* 187: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Switch_Threshold_m,/* 188: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.Constant_Value_kp,/* 189: Block Parameter */
  &SpeedgoatCANOpen2Buses100us_P.CANWrite_P1[0],/* 190: Block Parameter */
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

  { "numeric", "uint64_T", 0, 0, sizeof(uint64_T), SS_UINT64, 0, 0 },

  { "struct", "uint128m_T", 1, 1, sizeof(uint128m_T), SS_STRUCT, 0, 0 },

  { "numeric", "int64_T", 0, 0, sizeof(int64_T), SS_INT64, 0, 0 },

  { "struct", "int128m_T", 1, 2, sizeof(int128m_T), SS_STRUCT, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "numeric", "uint64_T", 0, 0, sizeof(uint64_T), SS_UINT64, 0, 0 },

  { "numeric", "int64_T", 0, 0, sizeof(int64_T), SS_INT64, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "chunks", rt_offsetof(uint128m_T, chunks), 10, 2, 0 },

  { "chunks", rt_offsetof(int128m_T, chunks), 10, 2, 0 }
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
  { rtBlockSignals, 141,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 39,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 192964501U,
    2607867282U,
    1583081065U,
    920499378U },
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
