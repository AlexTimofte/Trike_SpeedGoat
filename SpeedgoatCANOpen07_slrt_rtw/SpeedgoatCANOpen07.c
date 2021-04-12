/*
 * SpeedgoatCANOpen07.c
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

#include "rt_logging_mmi.h"
#include "SpeedgoatCANOpen07_capi.h"
#include "SpeedgoatCANOpen07.h"
#include "SpeedgoatCANOpen07_private.h"

/* Named constants for Chart: '<S9>/Set_0_pos_homing' */
#define Speed_IN_SetOpMode_PositionMode ((uint8_T)9U)
#define Speedg_IN_Not_assume_target_pos ((uint8_T)4U)
#define Speedgoa_IN_Set_target_position ((uint8_T)10U)
#define SpeedgoatCANO_IN_Homing_Set0Pos ((uint8_T)2U)
#define SpeedgoatCANOp_IN_SetHomingMode ((uint8_T)8U)
#define SpeedgoatCANOpen07_IN_Init     ((uint8_T)3U)
#define SpeedgoatCANOpen07_IN_ShutDown ((uint8_T)11U)
#define SpeedgoatCANOpen07_IN_SwitchOn ((uint8_T)12U)
#define SpeedgoatCAN_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define SpeedgoatCAN_IN_OperationEnable ((uint8_T)5U)
#define SpeedgoatCA_IN_OperationEnable1 ((uint8_T)6U)
#define SpeedgoatCA_IN_OperationEnable2 ((uint8_T)7U)
#define SpeedgoatC_IN_Assume_target_pos ((uint8_T)1U)

/* Block signals (default storage) */
B_SpeedgoatCANOpen07_T SpeedgoatCANOpen07_B;

/* Block states (default storage) */
DW_SpeedgoatCANOpen07_T SpeedgoatCANOpen07_DW;

/* Real-time model */
RT_MODEL_SpeedgoatCANOpen07_T SpeedgoatCANOpen07_M_;
RT_MODEL_SpeedgoatCANOpen07_T *const SpeedgoatCANOpen07_M =
  &SpeedgoatCANOpen07_M_;

/* Forward declaration for local functions */
static void SpeedgoatCANO_enter_atomic_Init(void);

/* Function for Chart: '<S9>/Set_0_pos_homing' */
static void SpeedgoatCANO_enter_atomic_Init(void)
{
  SpeedgoatCANOpen07_DW.x1r = 0.0;
  SpeedgoatCANOpen07_DW.x2r = 128.0;
  SpeedgoatCANOpen07_DW.x1_cw = 6.0;
  SpeedgoatCANOpen07_DW.x2_cw = 7.0;
  SpeedgoatCANOpen07_DW.x3_cw = 15.0;
  SpeedgoatCANOpen07_DW.x4_cw = 31.0;
  SpeedgoatCANOpen07_DW.x1r2r_sw = 576.0;
  SpeedgoatCANOpen07_DW.x1_sw = 545.0;
  SpeedgoatCANOpen07_DW.x2_sw = 563.0;
  SpeedgoatCANOpen07_DW.x3_sw = 1591.0;
  SpeedgoatCANOpen07_DW.x4_sw = 5687.0;
  SpeedgoatCANOpen07_DW.aux = 0.0;
  SpeedgoatCANOpen07_DW.aux2 = 0.0;
}

/* Model output function */
static void SpeedgoatCANOpen07_output(void)
{
  int32_T Direction;
  boolean_T sf_internal_predicateOutput;
  real32_T tmp;
  real_T tmp_0;

  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen07_DW.CANTXWrapper_SubsysRanBC_f);

  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen07_DW.CANTXWrapper_SubsysRanBC);

  /* S-Function (sg_IO602_IO691_setup_s): '<S10>/CAN Setup ' */

  /* Level2 S-Function Block: '<S10>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO602_IO691_read_s): '<S13>/CAN Read' */

  /* Level2 S-Function Block: '<S13>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S13>/Switch' */
  if (SpeedgoatCANOpen07_B.CANRead_o3 > SpeedgoatCANOpen07_P.Switch_Threshold) {
    SpeedgoatCANOpen07_B.Switch = 0U;
  } else {
    SpeedgoatCANOpen07_B.Switch = SpeedgoatCANOpen07_B.CANRead_o4;
  }

  /* End of Switch: '<S13>/Switch' */

  /* CCaller: '<S11>/C Caller' */
  CANOpenSlave_ProcessStack(SpeedgoatCANOpen07_B.CANRead_o2,
    SpeedgoatCANOpen07_B.Switch, SpeedgoatCANOpen07_B.CANRead_o6,
    &SpeedgoatCANOpen07_B.CCaller_o1, &SpeedgoatCANOpen07_B.CCaller_o2,
    SpeedgoatCANOpen07_B.CCaller_o3);

  /* Outputs for Enabled SubSystem: '<S11>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  if (SpeedgoatCANOpen07_B.CCaller_o2 > 0) {
    /* Constant: '<S14>/Constant' */
    SpeedgoatCANOpen07_B.Constant_g = SpeedgoatCANOpen07_P.Constant_Value;

    /* S-Function (sg_IO602_IO691_write_s): '<S14>/CAN Write' */

    /* Level2 S-Function Block: '<S14>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    srUpdateBC(SpeedgoatCANOpen07_DW.CANTXWrapper_SubsysRanBC_f);
  }

  /* End of Outputs for SubSystem: '<S11>/CAN TX Wrapper' */

  /* S-Function (sg_IO602_IO691_read_s): '<S15>/CAN Read' */

  /* Level2 S-Function Block: '<S15>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S15>/Switch' */
  if (SpeedgoatCANOpen07_B.CANRead_o3_o >
      SpeedgoatCANOpen07_P.Switch_Threshold_k) {
    SpeedgoatCANOpen07_B.Switch_f = 0U;
  } else {
    SpeedgoatCANOpen07_B.Switch_f = SpeedgoatCANOpen07_B.CANRead_o4_n;
  }

  /* End of Switch: '<S15>/Switch' */

  /* CCaller: '<S12>/C Caller' */
  CANOpenSlave_ProcessStack_APT(SpeedgoatCANOpen07_B.CANRead_o2_n,
    SpeedgoatCANOpen07_B.Switch_f, SpeedgoatCANOpen07_B.CANRead_o6_p,
    &SpeedgoatCANOpen07_B.CCaller_o1_i, &SpeedgoatCANOpen07_B.CCaller_o2_i,
    SpeedgoatCANOpen07_B.CCaller_o3_p);

  /* Outputs for Enabled SubSystem: '<S12>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (SpeedgoatCANOpen07_B.CCaller_o2_i > 0) {
    /* Constant: '<S16>/Constant' */
    SpeedgoatCANOpen07_B.Constant = SpeedgoatCANOpen07_P.Constant_Value_o;

    /* S-Function (sg_IO602_IO691_write_s): '<S16>/CAN Write' */

    /* Level2 S-Function Block: '<S16>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    srUpdateBC(SpeedgoatCANOpen07_DW.CANTXWrapper_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S12>/CAN TX Wrapper' */

  /* S-Function (AN2CAN_converter): '<S1>/RPDOs from AN2CAN ' */
  AN2CAN_converter_Outputs_wrapper(&SpeedgoatCANOpen07_B.Channel_AN1,
    &SpeedgoatCANOpen07_B.Channel_AN2, &SpeedgoatCANOpen07_B.Channel_AN3,
    &SpeedgoatCANOpen07_B.Channel_AN4);

  /* S-Function (RPDOs_APT): '<S2>/RPDOs from APT' */
  RPDOs_APT_Outputs_wrapper(&SpeedgoatCANOpen07_B.APT_StatusWord,
    &SpeedgoatCANOpen07_B.APT_PhaseCurrent, &SpeedgoatCANOpen07_B.APT_Speed,
    &SpeedgoatCANOpen07_B.APT_BusVoltage, &SpeedgoatCANOpen07_B.APT_MotorTemp,
    &SpeedgoatCANOpen07_B.APT_Temp, &SpeedgoatCANOpen07_B.APT_ErrStatus,
    &SpeedgoatCANOpen07_B.APT_Direction);

  /* S-Function (RPDOs_Joystick): '<S7>/RPDOs from Joystick' */
  RPDOs_Joystick_Outputs_wrapper(&SpeedgoatCANOpen07_B.Joystick_ButtonsStatus,
    &SpeedgoatCANOpen07_B.Joystick_LongCmd,
    &SpeedgoatCANOpen07_B.Joystick_LatCmd);

  /* Gain: '<S9>/Gain1' */
  SpeedgoatCANOpen07_B.Gain1 = SpeedgoatCANOpen07_P.Gain1_Gain *
    SpeedgoatCANOpen07_B.Joystick_LongCmd;

  /* MATLAB Function: '<S9>/MATLAB Function' */
  Direction = 0;
  if (SpeedgoatCANOpen07_B.Joystick_ButtonsStatus >= 127) {
    if (SpeedgoatCANOpen07_B.Gain1 > 0.0F) {
      Direction = 4;
    } else {
      if (SpeedgoatCANOpen07_B.Gain1 < 0.0F) {
        Direction = 8;
      }
    }
  }

  SpeedgoatCANOpen07_B.Byte0 = 160.0 + (real_T)Direction;

  /* End of MATLAB Function: '<S9>/MATLAB Function' */

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  tmp_0 = floor(SpeedgoatCANOpen07_B.Byte0);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen07_B.APT_TPDO_ControlWord = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion' */

  /* Abs: '<S9>/Abs' */
  SpeedgoatCANOpen07_B.Abs = (real32_T)fabs(SpeedgoatCANOpen07_B.Gain1);

  /* DataTypeConversion: '<S9>/Data Type Conversion1' */
  tmp = (real32_T)floor(SpeedgoatCANOpen07_B.Abs);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen07_B.APT_TPDO_PedalPosition = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion1' */

  /* MATLAB Function: '<S9>/HeartBeatgenerator' */
  SpeedgoatCANOpen07_DW.tact++;
  if (SpeedgoatCANOpen07_DW.tact > 10.0) {
    SpeedgoatCANOpen07_DW.tact = 0.0;
    SpeedgoatCANOpen07_DW.Heartbeat++;
    if (SpeedgoatCANOpen07_DW.Heartbeat > 127.0) {
      SpeedgoatCANOpen07_DW.Heartbeat = 0.0;
    }
  }

  SpeedgoatCANOpen07_B.HB = SpeedgoatCANOpen07_DW.Heartbeat;

  /* End of MATLAB Function: '<S9>/HeartBeatgenerator' */

  /* DataTypeConversion: '<S9>/Data Type Conversion2' */
  tmp_0 = floor(SpeedgoatCANOpen07_B.HB);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen07_B.APT_TPDO_Heartbeat = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion2' */

  /* S-Function (TPDOs_APT): '<S2>/TPDOs from Speedgoat to APT' */
  TPDOs_APT_Outputs_wrapper(&SpeedgoatCANOpen07_B.APT_TPDO_ControlWord,
    &SpeedgoatCANOpen07_B.APT_TPDO_PedalPosition,
    &SpeedgoatCANOpen07_B.APT_TPDO_Heartbeat);

  /* S-Function (RPDOs_DunkA): '<S3>/RPDOs from Dunker #1' */
  RPDOs_DunkA_Outputs_wrapper(&SpeedgoatCANOpen07_B.DunkA_StatusWord,
    &SpeedgoatCANOpen07_B.DunkA_OperationMode,
    &SpeedgoatCANOpen07_B.DunkA_CurrentActualValue,
    &SpeedgoatCANOpen07_B.DunkA_ActualTorque,
    &SpeedgoatCANOpen07_B.DunkA_ActualPosition,
    &SpeedgoatCANOpen07_B.DunkA_ActualVelocity);

  /* DataTypeConversion: '<S9>/Data Type Conversion5' incorporates:
   *  Constant: '<S9>/Constant2'
   */
  tmp_0 = floor(SpeedgoatCANOpen07_P.Constant2_Value);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 65536.0);
  }

  SpeedgoatCANOpen07_B.DunkA_TPDO_BrakeControl = (int16_T)(tmp_0 < 0.0 ?
    (int32_T)(int16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(int16_T)(uint16_T)
    tmp_0);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion5' */
  /* DataTypeConversion: '<S9>/Data Type Conversion9' */
  SpeedgoatCANOpen07_B.sts_word = SpeedgoatCANOpen07_B.DunkA_StatusWord;

  /* MATLAB Function: '<S9>/MATLAB Function6' */
  Direction = (SpeedgoatCANOpen07_B.Joystick_ButtonsStatus >= 127);
  SpeedgoatCANOpen07_B.B8 = Direction;

  /* DataTypeConversion: '<S9>/Data Type Conversion12' */
  tmp_0 = floor(SpeedgoatCANOpen07_B.B8);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 65536.0);
  }

  SpeedgoatCANOpen07_B.poweron = (uint16_T)(tmp_0 < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion12' */

  /* MATLAB Function: '<S9>/MATLAB Function7' */
  Direction = (SpeedgoatCANOpen07_B.Joystick_ButtonsStatus == 64);
  SpeedgoatCANOpen07_B.B7 = Direction;

  /* DataTypeConversion: '<S9>/Data Type Conversion13' */
  tmp_0 = floor(SpeedgoatCANOpen07_B.B7);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 65536.0);
  }

  SpeedgoatCANOpen07_B.set_homing = (uint16_T)(tmp_0 < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion13' */

  /* Gain: '<S9>/Gain' */
  SpeedgoatCANOpen07_B.Gain = SpeedgoatCANOpen07_P.Gain_Gain *
    SpeedgoatCANOpen07_B.Gain1;

  /* DataTypeConversion: '<S9>/Data Type Conversion11' */
  tmp = (real32_T)floor(SpeedgoatCANOpen07_B.Gain);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 4.294967296E+9);
  }

  SpeedgoatCANOpen07_B.target_pos = tmp < 0.0F ? -(int32_T)(uint32_T)-tmp :
    (int32_T)(uint32_T)tmp;

  /* End of DataTypeConversion: '<S9>/Data Type Conversion11' */

  /* DataTypeConversion: '<S9>/Data Type Conversion10' */
  SpeedgoatCANOpen07_B.sts_op_mode = SpeedgoatCANOpen07_B.DunkA_OperationMode;

  /* Chart: '<S9>/Set_0_pos_homing' */
  SpeedgoatCANOpen07_DW.sfEvent = -1;
  if (SpeedgoatCANOpen07_DW.temporalCounter_i1 < 1023U) {
    SpeedgoatCANOpen07_DW.temporalCounter_i1++;
  }

  if (SpeedgoatCANOpen07_DW.is_active_c11_SpeedgoatCANOpen0 == 0U) {
    SpeedgoatCANOpen07_DW.is_active_c11_SpeedgoatCANOpen0 = 1U;
    SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 = SpeedgoatCANOpen07_IN_Init;
    SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
    SpeedgoatCANO_enter_atomic_Init();
  } else {
    switch (SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07) {
     case SpeedgoatC_IN_Assume_target_pos:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word ==
        SpeedgoatCANOpen07_DW.x4_sw) || (SpeedgoatCANOpen07_B.sts_word == 4663));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          Speedg_IN_Not_assume_target_pos;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.ControlWord = 31.0;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case SpeedgoatCANO_IN_Homing_Set0Pos:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word ==
        SpeedgoatCANOpen07_DW.x4_sw) && (SpeedgoatCANOpen07_DW.aux2 > 1000.0));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatCA_IN_OperationEnable2;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.ControlWord = SpeedgoatCANOpen07_DW.x4_cw;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case SpeedgoatCANOpen07_IN_Init:
      if (SpeedgoatCANOpen07_B.set_homing == 1) {
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatCANOp_IN_SetHomingMode;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word ==
          SpeedgoatCANOpen07_DW.x3_sw) && (SpeedgoatCANOpen07_DW.enable == 1.0));
        if (sf_internal_predicateOutput) {
          SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
            Speedg_IN_Not_assume_target_pos;
          SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
        }
      }
      break;

     case Speedg_IN_Not_assume_target_pos:
      if (SpeedgoatCANOpen07_B.sts_word == SpeedgoatCANOpen07_DW.x3_sw) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          Speedgoa_IN_Set_target_position;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
        SpeedgoatCANOpen07_DW.aux += 2000.0;
      } else {
        SpeedgoatCANOpen07_B.ControlWord = 15.0;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case SpeedgoatCAN_IN_OperationEnable:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word == 567) &&
        (SpeedgoatCANOpen07_DW.aux2 > 1000.0));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatCANO_IN_Homing_Set0Pos;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.ControlWord = SpeedgoatCANOpen07_DW.x3_cw;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case SpeedgoatCA_IN_OperationEnable1:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word ==
        SpeedgoatCANOpen07_DW.x3_sw) && (SpeedgoatCANOpen07_B.sts_op_mode == 1) &&
        (SpeedgoatCANOpen07_DW.aux2 > 1000.0));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatCANOpen07_IN_Init;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
        SpeedgoatCANO_enter_atomic_Init();
      } else {
        SpeedgoatCANOpen07_B.ControlWord = SpeedgoatCANOpen07_DW.x3_cw;
        SpeedgoatCANOpen07_DW.enable = 1.0;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case SpeedgoatCA_IN_OperationEnable2:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word ==
        SpeedgoatCANOpen07_DW.x4_sw) && (SpeedgoatCANOpen07_DW.aux2 > 1000.0));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          Speed_IN_SetOpMode_PositionMode;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.ControlWord = SpeedgoatCANOpen07_DW.x3_cw;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case SpeedgoatCANOp_IN_SetHomingMode:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_op_mode == 6) &&
        (SpeedgoatCANOpen07_DW.aux2 > 1000.0));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatCANOpen07_IN_ShutDown;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.OpMode = 6.0;
        SpeedgoatCANOpen07_DW.enable = 0.0;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case Speed_IN_SetOpMode_PositionMode:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word ==
        SpeedgoatCANOpen07_DW.x3_sw) && (SpeedgoatCANOpen07_B.sts_op_mode == 1) &&
        (SpeedgoatCANOpen07_DW.aux2 > 1000.0));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatCA_IN_OperationEnable1;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.OpMode = 1.0;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case Speedgoa_IN_Set_target_position:
      if (SpeedgoatCANOpen07_DW.aux2 > 1.0) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatC_IN_Assume_target_pos;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.TargetPosition = SpeedgoatCANOpen07_B.target_pos;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     case SpeedgoatCANOpen07_IN_ShutDown:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word ==
        SpeedgoatCANOpen07_DW.x1_sw) && (SpeedgoatCANOpen07_DW.aux2 > 1000.0));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatCANOpen07_IN_SwitchOn;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.ControlWord = SpeedgoatCANOpen07_DW.x1_cw;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;

     default:
      sf_internal_predicateOutput = ((SpeedgoatCANOpen07_B.sts_word ==
        SpeedgoatCANOpen07_DW.x2_sw) && (SpeedgoatCANOpen07_DW.aux2 > 1000.0));
      if (sf_internal_predicateOutput) {
        SpeedgoatCANOpen07_DW.aux2 = 0.0;
        SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
          SpeedgoatCAN_IN_OperationEnable;
        SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
      } else {
        SpeedgoatCANOpen07_B.ControlWord = SpeedgoatCANOpen07_DW.x2_cw;
        SpeedgoatCANOpen07_DW.aux2++;
      }
      break;
    }
  }

  /* End of Chart: '<S9>/Set_0_pos_homing' */

  /* DataTypeConversion: '<S9>/Data Type Conversion8' */
  SpeedgoatCANOpen07_B.DunkA_TPDO_TargetPosition =
    SpeedgoatCANOpen07_B.TargetPosition;

  /* DataTypeConversion: '<S9>/Data Type Conversion4' incorporates:
   *  Constant: '<S9>/Constant3'
   */
  tmp_0 = floor(SpeedgoatCANOpen07_P.Constant3_Value);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 4.294967296E+9);
  }

  SpeedgoatCANOpen07_B.DunkA_TPDO_TargetVelocity = tmp_0 < 0.0 ? -(int32_T)
    (uint32_T)-tmp_0 : (int32_T)(uint32_T)tmp_0;

  /* End of DataTypeConversion: '<S9>/Data Type Conversion4' */
  /* DataTypeConversion: '<S9>/Data Type Conversion3' */
  tmp_0 = floor(SpeedgoatCANOpen07_B.ControlWord);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 65536.0);
  }

  SpeedgoatCANOpen07_B.DunkA_TPDO_ControlWord = (uint16_T)(tmp_0 < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(uint16_T)tmp_0);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion3' */

  /* DataTypeConversion: '<S9>/Data Type Conversion6' */
  tmp_0 = floor(SpeedgoatCANOpen07_B.OpMode);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen07_B.DunkA_TPDO_OperationMode = (int8_T)(tmp_0 < 0.0 ?
    (int32_T)(int8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(int8_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion6' */

  /* S-Function (TPDOs_Speedgoat): '<S3>/TPDOs from Speedgoat to Dunker #1' */
  TPDOs_Speedgoat_Outputs_wrapper(&SpeedgoatCANOpen07_B.DunkA_TPDO_ControlWord,
    &SpeedgoatCANOpen07_B.DunkA_TPDO_OperationMode,
    &SpeedgoatCANOpen07_B.DunkA_TPDO_BrakeControl,
    &SpeedgoatCANOpen07_B.DunkA_TPDO_TargetPosition,
    &SpeedgoatCANOpen07_B.DunkA_TPDO_TargetVelocity);

  /* S-Function (scblock): '<S17>/S-Function' */
  /* ok to acquire for <S17>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK.AcquireOK = 1;

  /* Gain: '<S9>/Gain6' */
  SpeedgoatCANOpen07_B.Gain6 = SpeedgoatCANOpen07_P.Gain6_Gain *
    SpeedgoatCANOpen07_B.DunkA_CurrentActualValue;

  /* Gain: '<S9>/Gain3' */
  SpeedgoatCANOpen07_B.Gain3 = SpeedgoatCANOpen07_P.Gain3_Gain *
    SpeedgoatCANOpen07_B.Joystick_LatCmd;

  /* S-Function (scblock): '<S27>/S-Function' */
  /* ok to acquire for <S27>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK_o.AcquireOK = 1;

  /* S-Function (scblock): '<S28>/S-Function' */
  /* ok to acquire for <S28>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK_ot.AcquireOK = 1;

  /* S-Function (scblock): '<S29>/S-Function' */
  /* ok to acquire for <S29>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK_e.AcquireOK = 1;

  /* S-Function (scblock): '<S30>/S-Function' */
  /* ok to acquire for <S30>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK_d.AcquireOK = 1;

  /* S-Function (scblock): '<S31>/S-Function' */
  /* ok to acquire for <S31>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK_c.AcquireOK = 1;

  /* S-Function (scblock): '<S32>/S-Function' */
  /* ok to acquire for <S32>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK_m.AcquireOK = 1;

  /* S-Function (scblock): '<S33>/S-Function' */
  /* ok to acquire for <S33>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK_b.AcquireOK = 1;

  /* S-Function (scblock): '<S34>/S-Function' */
  /* ok to acquire for <S34>/S-Function */
  SpeedgoatCANOpen07_DW.SFunction_IWORK_h.AcquireOK = 1;

  /* DataTypeConversion: '<S9>/Data Type Conversion7' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  tmp_0 = floor(SpeedgoatCANOpen07_P.Constant1_Value);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 65536.0);
  }

  SpeedgoatCANOpen07_B.DunkA_TPDO_TargetTorque = (int16_T)(tmp_0 < 0.0 ?
    (int32_T)(int16_T)-(int16_T)(uint16_T)-tmp_0 : (int32_T)(int16_T)(uint16_T)
    tmp_0);

  /* End of DataTypeConversion: '<S9>/Data Type Conversion7' */
}

/* Model update function */
static void SpeedgoatCANOpen07_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SpeedgoatCANOpen07_M->Timing.clockTick0)) {
    ++SpeedgoatCANOpen07_M->Timing.clockTickH0;
  }

  SpeedgoatCANOpen07_M->Timing.t[0] = SpeedgoatCANOpen07_M->Timing.clockTick0 *
    SpeedgoatCANOpen07_M->Timing.stepSize0 +
    SpeedgoatCANOpen07_M->Timing.clockTickH0 *
    SpeedgoatCANOpen07_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void SpeedgoatCANOpen07_initialize(void)
{
  /* Start for S-Function (sg_IO602_IO691_setup_s): '<S10>/CAN Setup ' */
  /* Level2 S-Function Block: '<S10>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_read_s): '<S13>/CAN Read' */
  /* Level2 S-Function Block: '<S13>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S11>/CAN TX Wrapper' */
  /* Start for Constant: '<S14>/Constant' */
  SpeedgoatCANOpen07_B.Constant_g = SpeedgoatCANOpen07_P.Constant_Value;

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S14>/CAN Write' */
  /* Level2 S-Function Block: '<S14>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S11>/CAN TX Wrapper' */

  /* Start for S-Function (sg_IO602_IO691_read_s): '<S15>/CAN Read' */
  /* Level2 S-Function Block: '<S15>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S12>/CAN TX Wrapper' */
  /* Start for Constant: '<S16>/Constant' */
  SpeedgoatCANOpen07_B.Constant = SpeedgoatCANOpen07_P.Constant_Value_o;

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S16>/CAN Write' */
  /* Level2 S-Function Block: '<S16>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S12>/CAN TX Wrapper' */
  /* Start for S-Function (scblock): '<S17>/S-Function' */

  /* S-Function Block: <S17>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Trike Application Layer/Set_0_pos_homing/p1"));
        rl32eSetScope(3, 4, 50000);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo(
          "Trike Application Layer/Set_0_pos_homing/p1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 1);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 2.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 130.0);
        xpceScopeAcqOK(3, &SpeedgoatCANOpen07_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* Start for S-Function (scblock): '<S27>/S-Function' */

  /* S-Function Block: <S27>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Dunker #1/RPDOs from Dunker #1/p2"));
        rl32eSetScope(4, 4, 50000);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Dunker #1/RPDOs from Dunker #1/p2"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 1);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 2.0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 8.0);
        xpceScopeAcqOK(4, &SpeedgoatCANOpen07_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* Start for S-Function (scblock): '<S28>/S-Function' */

  /* S-Function Block: <S28>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo(
          "Trike Application Layer/Set_0_pos_homing/p2"));
        rl32eSetScope(5, 4, 50000);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo(
          "Trike Application Layer/Set_0_pos_homing/p2"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 1);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 2.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 8.0);
        xpceScopeAcqOK(5, &SpeedgoatCANOpen07_DW.SFunction_IWORK_ot.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* Start for S-Function (scblock): '<S29>/S-Function' */

  /* S-Function Block: <S29>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("Trike Application Layer/Gain3"));
        rl32eSetScope(6, 4, 50000);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo("Trike Application Layer/Gain3"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 1);
        rl32eSetScope(6, 9, 0);
        rl32eSetTargetScope(6, 1, 2.0);
        rl32eSetTargetScope(6, 11, -200.0);
        rl32eSetTargetScope(6, 10, 200.0);
        xpceScopeAcqOK(6, &SpeedgoatCANOpen07_DW.SFunction_IWORK_e.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* Start for S-Function (scblock): '<S30>/S-Function' */

  /* S-Function Block: <S30>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("Dunker #1/RPDOs from Dunker #1/p1"));
        rl32eSetScope(2, 4, 50000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("Dunker #1/RPDOs from Dunker #1/p1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 1);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 2.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 6000.0);
        xpceScopeAcqOK(2, &SpeedgoatCANOpen07_DW.SFunction_IWORK_d.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* Start for S-Function (scblock): '<S31>/S-Function' */

  /* S-Function Block: <S31>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(7)) == 0) {
      if ((i = rl32eDefScope(7,2)) != 0) {
        printf("Error creating scope 7\n");
      } else {
        rl32eAddSignal(7, rl32eGetSignalNo("Dunker #1/RPDOs from Dunker #1/p5"));
        rl32eSetScope(7, 4, 50000);
        rl32eSetScope(7, 5, 0);
        rl32eSetScope(7, 6, 1);
        rl32eSetScope(7, 0, 0);
        rl32eSetScope(7, 3, rl32eGetSignalNo("Dunker #1/RPDOs from Dunker #1/p5"));
        rl32eSetScope(7, 1, 0.0);
        rl32eSetScope(7, 2, 1);
        rl32eSetScope(7, 9, 0);
        rl32eSetTargetScope(7, 1, 2.0);
        rl32eSetTargetScope(7, 11, -10000.0);
        rl32eSetTargetScope(7, 10, 10000.0);
        xpceScopeAcqOK(7, &SpeedgoatCANOpen07_DW.SFunction_IWORK_c.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(7);
    }
  }

  /* Start for S-Function (scblock): '<S32>/S-Function' */

  /* S-Function Block: <S32>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(8)) == 0) {
      if ((i = rl32eDefScope(8,2)) != 0) {
        printf("Error creating scope 8\n");
      } else {
        rl32eAddSignal(8, rl32eGetSignalNo(
          "Trike Application Layer/MATLAB Function"));
        rl32eSetScope(8, 4, 50000);
        rl32eSetScope(8, 5, 0);
        rl32eSetScope(8, 6, 1);
        rl32eSetScope(8, 0, 0);
        rl32eSetScope(8, 3, rl32eGetSignalNo(
          "Trike Application Layer/MATLAB Function"));
        rl32eSetScope(8, 1, 0.0);
        rl32eSetScope(8, 2, 1);
        rl32eSetScope(8, 9, 0);
        rl32eSetTargetScope(8, 1, 2.0);
        rl32eSetTargetScope(8, 11, -5000.0);
        rl32eSetTargetScope(8, 10, 5000.0);
        xpceScopeAcqOK(8, &SpeedgoatCANOpen07_DW.SFunction_IWORK_m.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(8);
    }
  }

  /* Start for S-Function (scblock): '<S33>/S-Function' */

  /* S-Function Block: <S33>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("Trike Application Layer/Gain6"));
        rl32eSetScope(1, 4, 50000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("Trike Application Layer/Gain6"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 1);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 2.0);
        rl32eSetTargetScope(1, 11, -5.0);
        rl32eSetTargetScope(1, 10, 15.0);
        xpceScopeAcqOK(1, &SpeedgoatCANOpen07_DW.SFunction_IWORK_b.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* Start for S-Function (scblock): '<S34>/S-Function' */

  /* S-Function Block: <S34>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(9)) == 0) {
      if ((i = rl32eDefScope(9,2)) != 0) {
        printf("Error creating scope 9\n");
      } else {
        rl32eAddSignal(9, rl32eGetSignalNo("Trike Application Layer/Abs"));
        rl32eSetScope(9, 4, 50000);
        rl32eSetScope(9, 5, 0);
        rl32eSetScope(9, 6, 1);
        rl32eSetScope(9, 0, 0);
        rl32eSetScope(9, 3, rl32eGetSignalNo("Trike Application Layer/Abs"));
        rl32eSetScope(9, 1, 0.0);
        rl32eSetScope(9, 2, 1);
        rl32eSetScope(9, 9, 0);
        rl32eSetTargetScope(9, 1, 2.0);
        rl32eSetTargetScope(9, 11, -200.0);
        rl32eSetTargetScope(9, 10, 200.0);
        xpceScopeAcqOK(9, &SpeedgoatCANOpen07_DW.SFunction_IWORK_h.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(9);
    }
  }

  /* user code (Initialize function Body) */
  CANOpenSlave_ResetCommunication();
  CANOpenSlave_ResetCommunication_APT();

  /* SystemInitialize for MATLAB Function: '<S9>/HeartBeatgenerator' */
  SpeedgoatCANOpen07_DW.Heartbeat = 0.0;
  SpeedgoatCANOpen07_DW.tact = 0.0;

  /* SystemInitialize for Chart: '<S9>/Set_0_pos_homing' */
  SpeedgoatCANOpen07_DW.sfEvent = -1;
  SpeedgoatCANOpen07_DW.temporalCounter_i1 = 0U;
  SpeedgoatCANOpen07_DW.is_active_c11_SpeedgoatCANOpen0 = 0U;
  SpeedgoatCANOpen07_DW.is_c11_SpeedgoatCANOpen07 =
    SpeedgoatCAN_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
static void SpeedgoatCANOpen07_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<S10>/CAN Setup ' */
  /* Level2 S-Function Block: '<S10>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S13>/CAN Read' */
  /* Level2 S-Function Block: '<S13>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S11>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S14>/CAN Write' */
  /* Level2 S-Function Block: '<S14>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S11>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S15>/CAN Read' */
  /* Level2 S-Function Block: '<S15>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S12>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S16>/CAN Write' */
  /* Level2 S-Function Block: '<S16>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S12>/CAN TX Wrapper' */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  SpeedgoatCANOpen07_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  SpeedgoatCANOpen07_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  SpeedgoatCANOpen07_initialize();
}

void MdlTerminate(void)
{
  SpeedgoatCANOpen07_terminate();
}

/* Registration function */
RT_MODEL_SpeedgoatCANOpen07_T *SpeedgoatCANOpen07(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SpeedgoatCANOpen07_M, 0,
                sizeof(RT_MODEL_SpeedgoatCANOpen07_T));
  rtsiSetSolverName(&SpeedgoatCANOpen07_M->solverInfo,"FixedStepDiscrete");
  SpeedgoatCANOpen07_M->solverInfoPtr = (&SpeedgoatCANOpen07_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = SpeedgoatCANOpen07_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    SpeedgoatCANOpen07_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SpeedgoatCANOpen07_M->Timing.sampleTimes =
      (&SpeedgoatCANOpen07_M->Timing.sampleTimesArray[0]);
    SpeedgoatCANOpen07_M->Timing.offsetTimes =
      (&SpeedgoatCANOpen07_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SpeedgoatCANOpen07_M->Timing.sampleTimes[0] = (0.0001);

    /* task offsets */
    SpeedgoatCANOpen07_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(SpeedgoatCANOpen07_M, &SpeedgoatCANOpen07_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = SpeedgoatCANOpen07_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    SpeedgoatCANOpen07_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(SpeedgoatCANOpen07_M, -1);
  SpeedgoatCANOpen07_M->Timing.stepSize0 = 0.0001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    SpeedgoatCANOpen07_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(SpeedgoatCANOpen07_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(SpeedgoatCANOpen07_M->rtwLogInfo, (NULL));
    rtliSetLogT(SpeedgoatCANOpen07_M->rtwLogInfo, "tout");
    rtliSetLogX(SpeedgoatCANOpen07_M->rtwLogInfo, "");
    rtliSetLogXFinal(SpeedgoatCANOpen07_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(SpeedgoatCANOpen07_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(SpeedgoatCANOpen07_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(SpeedgoatCANOpen07_M->rtwLogInfo, 0);
    rtliSetLogDecimation(SpeedgoatCANOpen07_M->rtwLogInfo, 1);
    rtliSetLogY(SpeedgoatCANOpen07_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(SpeedgoatCANOpen07_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(SpeedgoatCANOpen07_M->rtwLogInfo, (NULL));
  }

  SpeedgoatCANOpen07_M->solverInfoPtr = (&SpeedgoatCANOpen07_M->solverInfo);
  SpeedgoatCANOpen07_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&SpeedgoatCANOpen07_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&SpeedgoatCANOpen07_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  SpeedgoatCANOpen07_M->blockIO = ((void *) &SpeedgoatCANOpen07_B);
  (void) memset(((void *) &SpeedgoatCANOpen07_B), 0,
                sizeof(B_SpeedgoatCANOpen07_T));

  /* parameters */
  SpeedgoatCANOpen07_M->defaultParam = ((real_T *)&SpeedgoatCANOpen07_P);

  /* states (dwork) */
  SpeedgoatCANOpen07_M->dwork = ((void *) &SpeedgoatCANOpen07_DW);
  (void) memset((void *)&SpeedgoatCANOpen07_DW, 0,
                sizeof(DW_SpeedgoatCANOpen07_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  SpeedgoatCANOpen07_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &SpeedgoatCANOpen07_M->NonInlinedSFcns.sfcnInfo;
    SpeedgoatCANOpen07_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(SpeedgoatCANOpen07_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &SpeedgoatCANOpen07_M->Sizes.numSampTimes);
    SpeedgoatCANOpen07_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (SpeedgoatCANOpen07_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,SpeedgoatCANOpen07_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(SpeedgoatCANOpen07_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(SpeedgoatCANOpen07_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (SpeedgoatCANOpen07_M));
    rtssSetStepSizePtr(sfcnInfo, &SpeedgoatCANOpen07_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(SpeedgoatCANOpen07_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &SpeedgoatCANOpen07_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &SpeedgoatCANOpen07_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &SpeedgoatCANOpen07_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &SpeedgoatCANOpen07_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &SpeedgoatCANOpen07_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &SpeedgoatCANOpen07_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &SpeedgoatCANOpen07_M->solverInfoPtr);
  }

  SpeedgoatCANOpen07_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) memset((void *)&SpeedgoatCANOpen07_M->
                  NonInlinedSFcns.childSFunctions[0], 0,
                  5*sizeof(SimStruct));
    SpeedgoatCANOpen07_M->childSfunctions =
      (&SpeedgoatCANOpen07_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    SpeedgoatCANOpen07_M->childSfunctions[0] =
      (&SpeedgoatCANOpen07_M->NonInlinedSFcns.childSFunctions[0]);
    SpeedgoatCANOpen07_M->childSfunctions[1] =
      (&SpeedgoatCANOpen07_M->NonInlinedSFcns.childSFunctions[1]);
    SpeedgoatCANOpen07_M->childSfunctions[2] =
      (&SpeedgoatCANOpen07_M->NonInlinedSFcns.childSFunctions[2]);
    SpeedgoatCANOpen07_M->childSfunctions[3] =
      (&SpeedgoatCANOpen07_M->NonInlinedSFcns.childSFunctions[3]);
    SpeedgoatCANOpen07_M->childSfunctions[4] =
      (&SpeedgoatCANOpen07_M->NonInlinedSFcns.childSFunctions[4]);

    /* Level2 S-Function Block: SpeedgoatCANOpen07/<S14>/CAN Write (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen07_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen07_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen07_M->
                         NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &SpeedgoatCANOpen07_B.CCaller_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &SpeedgoatCANOpen07_B.Constant_g);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &SpeedgoatCANOpen07_B.CCaller_o2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, SpeedgoatCANOpen07_B.CCaller_o3);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts,
                "SpeedgoatCANOpen07/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN TX Wrapper/CAN Write");
      ssSetRTModel(rts,SpeedgoatCANOpen07_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen07_P.CANWrite_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen07_DW.CANWrite_PWORK_e);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen07_DW.CANWrite_PWORK_e);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen07/<S16>/CAN Write (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen07_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen07_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen07_M->
                         NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &SpeedgoatCANOpen07_B.CCaller_o1_i);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &SpeedgoatCANOpen07_B.Constant);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &SpeedgoatCANOpen07_B.CCaller_o2_i);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, SpeedgoatCANOpen07_B.CCaller_o3_p);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts,
                "SpeedgoatCANOpen07/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN TX Wrapper/CAN Write");
      ssSetRTModel(rts,SpeedgoatCANOpen07_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen07_P.CANWrite_P1_Size_l);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen07_DW.CANWrite_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen07_DW.CANWrite_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen07/<S10>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen07_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen07_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen07_M->
                         NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts,
                "SpeedgoatCANOpen07/Speedgoat_TPDOs/CAN Bus Communication/CAN Setup ");
      ssSetRTModel(rts,SpeedgoatCANOpen07_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen07_P.CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)SpeedgoatCANOpen07_P.CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)SpeedgoatCANOpen07_P.CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen07_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen07_DW.CANSetup_PWORK);
      }

      /* registration */
      sg_IO602_IO691_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen07/<S13>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen07_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen07_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen07_M->
                         NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &SpeedgoatCANOpen07_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &SpeedgoatCANOpen07_B.CANRead_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *)
            &SpeedgoatCANOpen07_B.CANRead_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((uint8_T *)
            &SpeedgoatCANOpen07_B.CANRead_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &SpeedgoatCANOpen07_B.CANRead_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((uint8_T *)
            SpeedgoatCANOpen07_B.CANRead_o6));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "SpeedgoatCANOpen07/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #1 (A)/CAN RX Wrapper/CAN Read");
      ssSetRTModel(rts,SpeedgoatCANOpen07_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen07_P.CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen07_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen07_DW.CANRead_PWORK);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen07/<S15>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen07_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen07_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen07_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen07_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen07_M->
                         NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &SpeedgoatCANOpen07_B.CANRead_o1_j));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &SpeedgoatCANOpen07_B.CANRead_o2_n));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *)
            &SpeedgoatCANOpen07_B.CANRead_o3_o));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((uint8_T *)
            &SpeedgoatCANOpen07_B.CANRead_o4_n));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &SpeedgoatCANOpen07_B.CANRead_o5_f));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((uint8_T *)
            SpeedgoatCANOpen07_B.CANRead_o6_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "SpeedgoatCANOpen07/Speedgoat_TPDOs/CAN Bus Communication/CANOpen Slave  Protocol Stack - CAN Bus #2 (B)/CAN RX Wrapper/CAN Read");
      ssSetRTModel(rts,SpeedgoatCANOpen07_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen07_P.CANRead_P1_Size_l);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen07_DW.CANRead_PWORK_j);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen07_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen07_DW.CANRead_PWORK_j);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  SpeedgoatCANOpen07_M->Sizes.numContStates = (0);/* Number of continuous states */
  SpeedgoatCANOpen07_M->Sizes.numY = (0);/* Number of model outputs */
  SpeedgoatCANOpen07_M->Sizes.numU = (0);/* Number of model inputs */
  SpeedgoatCANOpen07_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  SpeedgoatCANOpen07_M->Sizes.numSampTimes = (1);/* Number of sample times */
  SpeedgoatCANOpen07_M->Sizes.numBlocks = (79);/* Number of blocks */
  SpeedgoatCANOpen07_M->Sizes.numBlockIO = (69);/* Number of block outputs */
  SpeedgoatCANOpen07_M->Sizes.numBlockPrms = (93);/* Sum of parameter "widths" */
  return SpeedgoatCANOpen07_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
