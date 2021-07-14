/*
 * SpeedgoatCANOpen03.c
 *
 * Code generation for model "SpeedgoatCANOpen03".
 *
 * Model version              : 1.108
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jun 19 11:37:23 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "SpeedgoatCANOpen03_capi.h"
#include "SpeedgoatCANOpen03.h"
#include "SpeedgoatCANOpen03_private.h"

/* Block signals (default storage) */
B_SpeedgoatCANOpen03_T SpeedgoatCANOpen03_B;

/* Block states (default storage) */
DW_SpeedgoatCANOpen03_T SpeedgoatCANOpen03_DW;

/* Real-time model */
RT_MODEL_SpeedgoatCANOpen03_T SpeedgoatCANOpen03_M_;
RT_MODEL_SpeedgoatCANOpen03_T *const SpeedgoatCANOpen03_M =
  &SpeedgoatCANOpen03_M_;

/* Model output function */
static void SpeedgoatCANOpen03_output(void)
{
  int32_T Direction;
  real32_T tmp;
  real_T tmp_0;

  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen03_DW.CANTXWrapper_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(SpeedgoatCANOpen03_DW.CANTXWrapper1_SubsysRanBC);

  /* S-Function (sg_IO602_IO691_setup_s): '<S1>/CAN Setup ' */

  /* Level2 S-Function Block: '<S1>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO602_IO691_read_s): '<S3>/CAN Read' */

  /* Level2 S-Function Block: '<S3>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S3>/Switch' */
  if (SpeedgoatCANOpen03_B.CANRead_o3 > SpeedgoatCANOpen03_P.Switch_Threshold) {
    SpeedgoatCANOpen03_B.Switch = 0U;
  } else {
    SpeedgoatCANOpen03_B.Switch = SpeedgoatCANOpen03_B.CANRead_o4;
  }

  /* End of Switch: '<S3>/Switch' */

  /* CCaller: '<S1>/C Caller' */
  CANOpenSlave_ProcessStack(SpeedgoatCANOpen03_B.CANRead_o2,
    SpeedgoatCANOpen03_B.Switch, SpeedgoatCANOpen03_B.CANRead_o6,
    &SpeedgoatCANOpen03_B.CCaller_o1, &SpeedgoatCANOpen03_B.CCaller_o2,
    SpeedgoatCANOpen03_B.CCaller_o3);

  /* Outputs for Enabled SubSystem: '<S1>/CAN TX Wrapper' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (SpeedgoatCANOpen03_B.CCaller_o2 > 0) {
    /* Constant: '<S5>/Constant' */
    SpeedgoatCANOpen03_B.Constant_g = SpeedgoatCANOpen03_P.Constant_Value;

    /* S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write' */

    /* Level2 S-Function Block: '<S5>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    srUpdateBC(SpeedgoatCANOpen03_DW.CANTXWrapper_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S1>/CAN TX Wrapper' */

  /* S-Function (sg_IO602_IO691_read_s): '<S4>/CAN Read' */

  /* Level2 S-Function Block: '<S4>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S4>/Switch' */
  if (SpeedgoatCANOpen03_B.CANRead_o3_n >
      SpeedgoatCANOpen03_P.Switch_Threshold_p) {
    SpeedgoatCANOpen03_B.Switch_e = 0U;
  } else {
    SpeedgoatCANOpen03_B.Switch_e = SpeedgoatCANOpen03_B.CANRead_o4_g;
  }

  /* End of Switch: '<S4>/Switch' */

  /* CCaller: '<S1>/C Caller1' */
  CANOpenSlave_ProcessStack(SpeedgoatCANOpen03_B.CANRead_o2_p,
    SpeedgoatCANOpen03_B.Switch_e, SpeedgoatCANOpen03_B.CANRead_o6_j,
    &SpeedgoatCANOpen03_B.CCaller1_o1, &SpeedgoatCANOpen03_B.CCaller1_o2,
    SpeedgoatCANOpen03_B.CCaller1_o3);

  /* Outputs for Enabled SubSystem: '<S1>/CAN TX Wrapper1' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  if (SpeedgoatCANOpen03_B.CCaller1_o2 > 0) {
    /* Constant: '<S6>/Constant' */
    SpeedgoatCANOpen03_B.Constant = SpeedgoatCANOpen03_P.Constant_Value_l;

    /* S-Function (sg_IO602_IO691_write_s): '<S6>/CAN Write' */

    /* Level2 S-Function Block: '<S6>/CAN Write' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    srUpdateBC(SpeedgoatCANOpen03_DW.CANTXWrapper1_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S1>/CAN TX Wrapper1' */

  /* S-Function (RPDOs_Joystick): '<Root>/RPDOs from Joystick' */
  RPDOs_Joystick_Outputs_wrapper(&SpeedgoatCANOpen03_B.RPDOsfromJoystick_o1,
    &SpeedgoatCANOpen03_B.RPDOsfromJoystick_o2,
    &SpeedgoatCANOpen03_B.RPDOsfromJoystick_o3);

  /* Gain: '<S2>/Gain1' */
  SpeedgoatCANOpen03_B.Gain1 = SpeedgoatCANOpen03_P.Gain1_Gain *
    SpeedgoatCANOpen03_B.RPDOsfromJoystick_o2;

  /* MATLAB Function: '<S2>/MATLAB Function' */
  Direction = 0;
  if (SpeedgoatCANOpen03_B.RPDOsfromJoystick_o1 >= 127) {
    if (SpeedgoatCANOpen03_B.Gain1 > 0.0F) {
      Direction = 4;
    } else {
      if (SpeedgoatCANOpen03_B.Gain1 < 0.0F) {
        Direction = 8;
      }
    }
  }

  SpeedgoatCANOpen03_B.Byte0 = 160.0 + (real_T)Direction;

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  tmp_0 = floor(SpeedgoatCANOpen03_B.Byte0);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen03_B.DataTypeConversion = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* Abs: '<S2>/Abs' */
  SpeedgoatCANOpen03_B.Abs = (real32_T)fabs(SpeedgoatCANOpen03_B.Gain1);

  /* DataTypeConversion: '<S2>/Data Type Conversion1' */
  tmp = (real32_T)floor(SpeedgoatCANOpen03_B.Abs);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  SpeedgoatCANOpen03_B.DataTypeConversion1 = (uint8_T)(tmp < 0.0F ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<S2>/Data Type Conversion1' */

  /* MATLAB Function: '<S2>/HeartBeatgenerator' */
  SpeedgoatCANOpen03_DW.tact++;
  if (SpeedgoatCANOpen03_DW.tact > 10.0) {
    SpeedgoatCANOpen03_DW.tact = 0.0;
    SpeedgoatCANOpen03_DW.Heartbeat++;
    if (SpeedgoatCANOpen03_DW.Heartbeat > 127.0) {
      SpeedgoatCANOpen03_DW.Heartbeat = 0.0;
    }
  }

  SpeedgoatCANOpen03_B.HB = SpeedgoatCANOpen03_DW.Heartbeat;

  /* End of MATLAB Function: '<S2>/HeartBeatgenerator' */

  /* DataTypeConversion: '<S2>/Data Type Conversion2' */
  tmp_0 = floor(SpeedgoatCANOpen03_B.HB);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 256.0);
  }

  SpeedgoatCANOpen03_B.DataTypeConversion2 = (uint8_T)(tmp_0 < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-tmp_0 : (int32_T)(uint8_T)tmp_0);

  /* End of DataTypeConversion: '<S2>/Data Type Conversion2' */

  /* S-Function (TPDOs_Speedgoat): '<Root>/TPDOs from Speedgoat' */
  TPDOs_Speedgoat_Outputs_wrapper(&SpeedgoatCANOpen03_B.DataTypeConversion,
    &SpeedgoatCANOpen03_B.DataTypeConversion1,
    &SpeedgoatCANOpen03_B.DataTypeConversion2);

  /* S-Function (RPDOs_APT): '<Root>/RPDOs from APT' */
  RPDOs_APT_Outputs_wrapper(&SpeedgoatCANOpen03_B.RPDOsfromAPT_o1,
    &SpeedgoatCANOpen03_B.RPDOsfromAPT_o2, &SpeedgoatCANOpen03_B.RPDOsfromAPT_o3,
    &SpeedgoatCANOpen03_B.RPDOsfromAPT_o4, &SpeedgoatCANOpen03_B.RPDOsfromAPT_o5,
    &SpeedgoatCANOpen03_B.RPDOsfromAPT_o6, &SpeedgoatCANOpen03_B.RPDOsfromAPT_o7,
    &SpeedgoatCANOpen03_B.RPDOsfromAPT_o8, &SpeedgoatCANOpen03_B.RPDOsfromAPT_o9);

  /* S-Function (scblock): '<S11>/S-Function' */
  /* ok to acquire for <S11>/S-Function */
  SpeedgoatCANOpen03_DW.SFunction_IWORK.AcquireOK = 1;

  /* Gain: '<S2>/Gain2' */
  SpeedgoatCANOpen03_B.Gain2 = SpeedgoatCANOpen03_P.Gain2_Gain *
    SpeedgoatCANOpen03_B.RPDOsfromJoystick_o3;

  /* S-Function (scblock): '<S13>/S-Function' */
  /* ok to acquire for <S13>/S-Function */
  SpeedgoatCANOpen03_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* Gain: '<S2>/Gain5' */
  SpeedgoatCANOpen03_B.Gain5 = (real32_T)SpeedgoatCANOpen03_P.Gain5_Gain *
    6.10351563E-5F * (real32_T)SpeedgoatCANOpen03_B.RPDOsfromAPT_o2;

  /* S-Function (scblock): '<S12>/S-Function' */
  /* ok to acquire for <S12>/S-Function */
  SpeedgoatCANOpen03_DW.SFunction_IWORK_jz.AcquireOK = 1;

  /* Gain: '<S2>/Gain4' */
  SpeedgoatCANOpen03_B.Gain4 = (real32_T)SpeedgoatCANOpen03_P.Gain4_Gain *
    6.10351563E-5F * (real32_T)SpeedgoatCANOpen03_B.RPDOsfromAPT_o3;

  /* S-Function (scblock): '<S7>/S-Function' */
  /* ok to acquire for <S7>/S-Function */
  SpeedgoatCANOpen03_DW.SFunction_IWORK_e.AcquireOK = 1;

  /* Gain: '<S2>/Gain3' */
  SpeedgoatCANOpen03_B.Gain3 = (real32_T)SpeedgoatCANOpen03_P.Gain3_Gain *
    2.38418579E-7F * (real32_T)SpeedgoatCANOpen03_B.RPDOsfromAPT_o4;
}

/* Model update function */
static void SpeedgoatCANOpen03_update(void)
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
  if (!(++SpeedgoatCANOpen03_M->Timing.clockTick0)) {
    ++SpeedgoatCANOpen03_M->Timing.clockTickH0;
  }

  SpeedgoatCANOpen03_M->Timing.t[0] = SpeedgoatCANOpen03_M->Timing.clockTick0 *
    SpeedgoatCANOpen03_M->Timing.stepSize0 +
    SpeedgoatCANOpen03_M->Timing.clockTickH0 *
    SpeedgoatCANOpen03_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void SpeedgoatCANOpen03_initialize(void)
{
  /* Start for S-Function (sg_IO602_IO691_setup_s): '<S1>/CAN Setup ' */
  /* Level2 S-Function Block: '<S1>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_read_s): '<S3>/CAN Read' */
  /* Level2 S-Function Block: '<S3>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S1>/CAN TX Wrapper' */
  /* Start for Constant: '<S5>/Constant' */
  SpeedgoatCANOpen03_B.Constant_g = SpeedgoatCANOpen03_P.Constant_Value;

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write' */
  /* Level2 S-Function Block: '<S5>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S1>/CAN TX Wrapper' */

  /* Start for S-Function (sg_IO602_IO691_read_s): '<S4>/CAN Read' */
  /* Level2 S-Function Block: '<S4>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S1>/CAN TX Wrapper1' */
  /* Start for Constant: '<S6>/Constant' */
  SpeedgoatCANOpen03_B.Constant = SpeedgoatCANOpen03_P.Constant_Value_l;

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S6>/CAN Write' */
  /* Level2 S-Function Block: '<S6>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S1>/CAN TX Wrapper1' */

  /* Start for S-Function (scblock): '<S11>/S-Function' */

  /* S-Function Block: <S11>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Simulink Application Layer/Gain1"));
        rl32eSetScope(4, 4, 25000);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Simulink Application Layer/Gain1"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 1);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 2.0);
        rl32eSetTargetScope(4, 11, -110.0);
        rl32eSetTargetScope(4, 10, 110.0);
        xpceScopeAcqOK(4, &SpeedgoatCANOpen03_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* Start for S-Function (scblock): '<S13>/S-Function' */

  /* S-Function Block: <S13>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("RPDOs from APT/p2"));
        rl32eSetScope(1, 4, 25000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("RPDOs from APT/p2"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 1);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 2.0);
        rl32eSetTargetScope(1, 11, -5.0);
        rl32eSetTargetScope(1, 10, 10.0);
        xpceScopeAcqOK(1, &SpeedgoatCANOpen03_DW.SFunction_IWORK_j.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* Start for S-Function (scblock): '<S12>/S-Function' */

  /* S-Function Block: <S12>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("RPDOs from APT/p3"));
        rl32eSetScope(2, 4, 25000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("RPDOs from APT/p3"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 1);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 2.0);
        rl32eSetTargetScope(2, 11, -100.0);
        rl32eSetTargetScope(2, 10, 800.0);
        xpceScopeAcqOK(2, &SpeedgoatCANOpen03_DW.SFunction_IWORK_jz.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* Start for S-Function (scblock): '<S7>/S-Function' */

  /* S-Function Block: <S7>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("Simulink Application Layer/Gain3"));
        rl32eSetScope(3, 4, 25000);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("Simulink Application Layer/Gain3"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 1);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 2.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 60.0);
        xpceScopeAcqOK(3, &SpeedgoatCANOpen03_DW.SFunction_IWORK_e.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* user code (Initialize function Body) */
  CANOpenSlave_ResetCommunication();

  /* SystemInitialize for MATLAB Function: '<S2>/HeartBeatgenerator' */
  SpeedgoatCANOpen03_DW.Heartbeat = 0.0;
  SpeedgoatCANOpen03_DW.tact = 0.0;
}

/* Model terminate function */
static void SpeedgoatCANOpen03_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<S1>/CAN Setup ' */
  /* Level2 S-Function Block: '<S1>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S3>/CAN Read' */
  /* Level2 S-Function Block: '<S3>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S1>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write' */
  /* Level2 S-Function Block: '<S5>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S1>/CAN TX Wrapper' */

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S4>/CAN Read' */
  /* Level2 S-Function Block: '<S4>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S1>/CAN TX Wrapper1' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S6>/CAN Write' */
  /* Level2 S-Function Block: '<S6>/CAN Write' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S1>/CAN TX Wrapper1' */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  SpeedgoatCANOpen03_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  SpeedgoatCANOpen03_update();
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
  SpeedgoatCANOpen03_initialize();
}

void MdlTerminate(void)
{
  SpeedgoatCANOpen03_terminate();
}

/* Registration function */
RT_MODEL_SpeedgoatCANOpen03_T *SpeedgoatCANOpen03(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SpeedgoatCANOpen03_M, 0,
                sizeof(RT_MODEL_SpeedgoatCANOpen03_T));
  rtsiSetSolverName(&SpeedgoatCANOpen03_M->solverInfo,"FixedStepDiscrete");
  SpeedgoatCANOpen03_M->solverInfoPtr = (&SpeedgoatCANOpen03_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = SpeedgoatCANOpen03_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    SpeedgoatCANOpen03_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SpeedgoatCANOpen03_M->Timing.sampleTimes =
      (&SpeedgoatCANOpen03_M->Timing.sampleTimesArray[0]);
    SpeedgoatCANOpen03_M->Timing.offsetTimes =
      (&SpeedgoatCANOpen03_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SpeedgoatCANOpen03_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    SpeedgoatCANOpen03_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(SpeedgoatCANOpen03_M, &SpeedgoatCANOpen03_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = SpeedgoatCANOpen03_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    SpeedgoatCANOpen03_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(SpeedgoatCANOpen03_M, -1);
  SpeedgoatCANOpen03_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    SpeedgoatCANOpen03_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(SpeedgoatCANOpen03_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(SpeedgoatCANOpen03_M->rtwLogInfo, (NULL));
    rtliSetLogT(SpeedgoatCANOpen03_M->rtwLogInfo, "tout");
    rtliSetLogX(SpeedgoatCANOpen03_M->rtwLogInfo, "");
    rtliSetLogXFinal(SpeedgoatCANOpen03_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(SpeedgoatCANOpen03_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(SpeedgoatCANOpen03_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(SpeedgoatCANOpen03_M->rtwLogInfo, 0);
    rtliSetLogDecimation(SpeedgoatCANOpen03_M->rtwLogInfo, 1);
    rtliSetLogY(SpeedgoatCANOpen03_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(SpeedgoatCANOpen03_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(SpeedgoatCANOpen03_M->rtwLogInfo, (NULL));
  }

  SpeedgoatCANOpen03_M->solverInfoPtr = (&SpeedgoatCANOpen03_M->solverInfo);
  SpeedgoatCANOpen03_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&SpeedgoatCANOpen03_M->solverInfo, 0.001);
  rtsiSetSolverMode(&SpeedgoatCANOpen03_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  SpeedgoatCANOpen03_M->blockIO = ((void *) &SpeedgoatCANOpen03_B);
  (void) memset(((void *) &SpeedgoatCANOpen03_B), 0,
                sizeof(B_SpeedgoatCANOpen03_T));

  /* parameters */
  SpeedgoatCANOpen03_M->defaultParam = ((real_T *)&SpeedgoatCANOpen03_P);

  /* states (dwork) */
  SpeedgoatCANOpen03_M->dwork = ((void *) &SpeedgoatCANOpen03_DW);
  (void) memset((void *)&SpeedgoatCANOpen03_DW, 0,
                sizeof(DW_SpeedgoatCANOpen03_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  SpeedgoatCANOpen03_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &SpeedgoatCANOpen03_M->NonInlinedSFcns.sfcnInfo;
    SpeedgoatCANOpen03_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(SpeedgoatCANOpen03_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &SpeedgoatCANOpen03_M->Sizes.numSampTimes);
    SpeedgoatCANOpen03_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (SpeedgoatCANOpen03_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,SpeedgoatCANOpen03_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(SpeedgoatCANOpen03_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(SpeedgoatCANOpen03_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (SpeedgoatCANOpen03_M));
    rtssSetStepSizePtr(sfcnInfo, &SpeedgoatCANOpen03_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(SpeedgoatCANOpen03_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &SpeedgoatCANOpen03_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &SpeedgoatCANOpen03_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &SpeedgoatCANOpen03_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &SpeedgoatCANOpen03_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &SpeedgoatCANOpen03_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &SpeedgoatCANOpen03_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &SpeedgoatCANOpen03_M->solverInfoPtr);
  }

  SpeedgoatCANOpen03_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) memset((void *)&SpeedgoatCANOpen03_M->
                  NonInlinedSFcns.childSFunctions[0], 0,
                  5*sizeof(SimStruct));
    SpeedgoatCANOpen03_M->childSfunctions =
      (&SpeedgoatCANOpen03_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        SpeedgoatCANOpen03_M->childSfunctions[i] =
          (&SpeedgoatCANOpen03_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen03/<S5>/CAN Write (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen03_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen03_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen03_M->
                         NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &SpeedgoatCANOpen03_B.CCaller_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &SpeedgoatCANOpen03_B.Constant_g);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &SpeedgoatCANOpen03_B.CCaller_o2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, SpeedgoatCANOpen03_B.CCaller_o3);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts,
                "SpeedgoatCANOpen03/CANOpen Slave  Protocol Stack/CAN TX Wrapper/CAN Write");
      ssSetRTModel(rts,SpeedgoatCANOpen03_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen03_P.CANWrite_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen03_DW.CANWrite_PWORK_e);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen03_DW.CANWrite_PWORK_e);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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

    /* Level2 S-Function Block: SpeedgoatCANOpen03/<S6>/CAN Write (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen03_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen03_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen03_M->
                         NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &SpeedgoatCANOpen03_B.CCaller1_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &SpeedgoatCANOpen03_B.Constant);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &SpeedgoatCANOpen03_B.CCaller1_o2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, SpeedgoatCANOpen03_B.CCaller1_o3);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 8);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write");
      ssSetPath(rts,
                "SpeedgoatCANOpen03/CANOpen Slave  Protocol Stack/CAN TX Wrapper1/CAN Write");
      ssSetRTModel(rts,SpeedgoatCANOpen03_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen03_P.CANWrite_P1_Size_g);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen03_DW.CANWrite_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen03_DW.CANWrite_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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

    /* Level2 S-Function Block: SpeedgoatCANOpen03/<S1>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen03_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen03_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen03_M->
                         NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts,
                "SpeedgoatCANOpen03/CANOpen Slave  Protocol Stack/CAN Setup ");
      ssSetRTModel(rts,SpeedgoatCANOpen03_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen03_P.CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)SpeedgoatCANOpen03_P.CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)SpeedgoatCANOpen03_P.CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen03_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen03_DW.CANSetup_PWORK);
      }

      /* registration */
      sg_IO602_IO691_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SpeedgoatCANOpen03/<S3>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen03_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen03_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen03_M->
                         NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
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
            &SpeedgoatCANOpen03_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &SpeedgoatCANOpen03_B.CANRead_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *)
            &SpeedgoatCANOpen03_B.CANRead_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((uint8_T *)
            &SpeedgoatCANOpen03_B.CANRead_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &SpeedgoatCANOpen03_B.CANRead_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((uint8_T *)
            SpeedgoatCANOpen03_B.CANRead_o6));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "SpeedgoatCANOpen03/CANOpen Slave  Protocol Stack/CAN RX Wrapper/CAN Read");
      ssSetRTModel(rts,SpeedgoatCANOpen03_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen03_P.CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen03_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen03_DW.CANRead_PWORK);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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

    /* Level2 S-Function Block: SpeedgoatCANOpen03/<S4>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SpeedgoatCANOpen03_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SpeedgoatCANOpen03_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SpeedgoatCANOpen03_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SpeedgoatCANOpen03_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SpeedgoatCANOpen03_M->
                         NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
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
            &SpeedgoatCANOpen03_B.CANRead_o1_m));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &SpeedgoatCANOpen03_B.CANRead_o2_p));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((uint8_T *)
            &SpeedgoatCANOpen03_B.CANRead_o3_n));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((uint8_T *)
            &SpeedgoatCANOpen03_B.CANRead_o4_g));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &SpeedgoatCANOpen03_B.CANRead_o5_n));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 8);
          ssSetOutputPortSignal(rts, 5, ((uint8_T *)
            SpeedgoatCANOpen03_B.CANRead_o6_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "SpeedgoatCANOpen03/CANOpen Slave  Protocol Stack/CAN RX Wrapper1/CAN Read");
      ssSetRTModel(rts,SpeedgoatCANOpen03_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SpeedgoatCANOpen03_P.CANRead_P1_Size_p);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SpeedgoatCANOpen03_DW.CANRead_PWORK_p);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SpeedgoatCANOpen03_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SpeedgoatCANOpen03_DW.CANRead_PWORK_p);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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
  SpeedgoatCANOpen03_M->Sizes.numContStates = (0);/* Number of continuous states */
  SpeedgoatCANOpen03_M->Sizes.numY = (0);/* Number of model outputs */
  SpeedgoatCANOpen03_M->Sizes.numU = (0);/* Number of model inputs */
  SpeedgoatCANOpen03_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  SpeedgoatCANOpen03_M->Sizes.numSampTimes = (1);/* Number of sample times */
  SpeedgoatCANOpen03_M->Sizes.numBlocks = (33);/* Number of blocks */
  SpeedgoatCANOpen03_M->Sizes.numBlockIO = (45);/* Number of block outputs */
  SpeedgoatCANOpen03_M->Sizes.numBlockPrms = (91);/* Sum of parameter "widths" */
  return SpeedgoatCANOpen03_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
