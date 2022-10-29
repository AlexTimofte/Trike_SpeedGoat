/*
 * SpeedgoatCANOpen2Buses1ms_data.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses1ms".
 *
 * Model version              : 1.958
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Oct 29 12:48:32 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SpeedgoatCANOpen2Buses1ms.h"
#include "SpeedgoatCANOpen2Buses1ms_private.h"

/* Block parameters (default storage) */
P_SpeedgoatCANOpen2Buses1ms_T SpeedgoatCANOpen2Buses1ms_P = {
  /* Mask Parameter: PID_ctrl2_Kd
   * Referenced by: '<S45>/Constant'
   */
  30.0,

  /* Mask Parameter: PID_ctrl2_Ki
   * Referenced by:
   *   '<S45>/AntiWindup'
   *   '<S45>/Integral Gain'
   */
  0.0,

  /* Mask Parameter: PID_ctrl2_Kp
   * Referenced by:
   *   '<S45>/AntiWindup'
   *   '<S45>/Proportional  Gain'
   */
  80.0,

  /* Mask Parameter: PID_ctrl2_Req_lim
   * Referenced by: '<S45>/Saturation'
   */
  1000.0,

  /* Mask Parameter: PID_ctrl2_Ts
   * Referenced by: '<S45>/Constant1'
   */
  0.005,

  /* Mask Parameter: RepeatingSequence1_rep_seq_y
   * Referenced by: '<S46>/Look-Up Table1'
   */
  { 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, -2.0, -2.0 },

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S83>/Constant'
   */
  5.0F,

  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<S20>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S20>/CAN Write'
   */
  { 691.0, 1.0, 0.0005, 0.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANWrite_P1_Size_p
   * Referenced by: '<S22>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S22>/CAN Write'
   */
  { 691.0, 1.0, 0.001, 1.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S15>/CAN Setup '
   */
  { 1.0, 40.0 },

  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<S15>/CAN Setup '
   */
  { 691.0, 1.0, -1.0, -1.0, 2.0, 2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 2.0,
    2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0,
    2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0 },

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S15>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S15>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S15>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S15>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S19>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S19>/CAN Read'
   */
  { 691.0, 1.0, 0.0005, 0.0, 2.0, 1.0 },

  /* Computed Parameter: CANRead_P1_Size_b
   * Referenced by: '<S21>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S21>/CAN Read'
   */
  { 691.0, 1.0, 0.001, 1.0, 2.0, 1.0 },

  /* Expression: 5000
   * Referenced by: '<S16>/Sine Wave'
   */
  5000.0,

  /* Expression: 2500
   * Referenced by: '<S16>/Sine Wave'
   */
  2500.0,

  /* Expression: 4
   * Referenced by: '<S16>/Sine Wave'
   */
  4.0,

  /* Computed Parameter: SineWave_Hsin
   * Referenced by: '<S16>/Sine Wave'
   */
  0.38941834230865052,

  /* Computed Parameter: SineWave_HCos
   * Referenced by: '<S16>/Sine Wave'
   */
  0.9210609940028851,

  /* Computed Parameter: SineWave_PSin
   * Referenced by: '<S16>/Sine Wave'
   */
  -0.38941834230865052,

  /* Computed Parameter: SineWave_PCos
   * Referenced by: '<S16>/Sine Wave'
   */
  0.9210609940028851,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 12
   * Referenced by: '<S37>/Saturation2'
   */
  12.0,

  /* Expression: -12
   * Referenced by: '<S37>/Saturation2'
   */
  -12.0,

  /* Expression: 1000
   * Referenced by: '<S37>/Amp2mAmp'
   */
  1000.0,

  /* Expression: pi/30
   * Referenced by: '<S34>/Gain2'
   */
  0.10471975511965977,

  /* Expression: 0.25
   * Referenced by: '<S34>/WheelRadius'
   */
  0.25,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.00015625
   * Referenced by: '<S37>/GetInPercent'
   */
  0.00015625,

  /* Expression: -1
   * Referenced by: '<S37>/Gain2'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S37>/Saturation'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S37>/Saturation'
   */
  -1.0,

  /* Expression: 12.7
   * Referenced by: '<S37>/Gain1'
   */
  12.7,

  /* Expression: 3600
   * Referenced by: '<S37>/offset'
   */
  3600.0,

  /* Expression: 0
   * Referenced by: '<S30>/Memory1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 2048
   * Referenced by: '<S30>/Offset to 0 pos => pos = [-180 180]deg'
   */
  2048.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 180/2048
   * Referenced by: '<S30>/inc2deg'
   */
  0.087890625,

  /* Expression: period
   * Referenced by: '<S46>/Constant'
   */
  48.0,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S46>/Look-Up Table1'
   */
  { 0.0, 12.0, 12.003999999999998, 24.0, 24.004000000000005, 36.0,
    36.003999999999991, 48.0 },

  /* Expression: 2
   * Referenced by: '<S32>/Sine Wave1'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<S32>/Sine Wave1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S32>/Sine Wave1'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S32>/Sine Wave1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 30
   * Referenced by: '<S32>/Saturation'
   */
  30.0,

  /* Expression: -30
   * Referenced by: '<S32>/Saturation'
   */
  -30.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S45>/Delay'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S45>/Discrete-Time Integrator'
   */
  0.0025,

  /* Expression: 0
   * Referenced by: '<S45>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 500
   * Referenced by: '<S45>/Saturation3'
   */
  500.0,

  /* Expression: -500
   * Referenced by: '<S45>/Saturation3'
   */
  -500.0,

  /* Expression: 1500
   * Referenced by: '<S45>/Saturation2'
   */
  1500.0,

  /* Expression: -1500
   * Referenced by: '<S45>/Saturation2'
   */
  -1500.0,

  /* Expression: -1
   * Referenced by: '<S45>/c1'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S32>/Gain1'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S31>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.00246
   * Referenced by: '<S32>/degree2m'
   */
  0.00246,

  /* Expression: 0
   * Referenced by: '<S32>/Offset'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S45>/Constant3'
   */
  0.4,

  /* Expression: 0
   * Referenced by: '<S43>/Memory1'
   */
  0.0,

  /* Expression: 3.34249
   * Referenced by: '<S43>/Offset for 0 deg'
   */
  3.34249,

  /* Expression: 0.076/5
   * Referenced by: '<S43>/Volt2meter'
   */
  0.0152,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: [0.0201 0.0402 0.0201]
   * Referenced by: '<S43>/Discrete Filter'
   */
  { 0.0201, 0.0402, 0.0201 },

  /* Expression: [1 -1.561 0.6414]
   * Referenced by: '<S43>/Discrete Filter'
   */
  { 1.0, -1.561, 0.6414 },

  /* Expression: 0
   * Referenced by: '<S43>/Discrete Filter'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S44>/Memory1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.076/5
   * Referenced by: '<S44>/Volt2meter'
   */
  0.0152,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: [0.0201 0.0402 0.0201]
   * Referenced by: '<S44>/Discrete Filter'
   */
  { 0.0201, 0.0402, 0.0201 },

  /* Expression: [1 -1.561 0.6414]
   * Referenced by: '<S44>/Discrete Filter'
   */
  { 1.0, -1.561, 0.6414 },

  /* Expression: 0
   * Referenced by: '<S44>/Discrete Filter'
   */
  0.0,

  /* Expression: 3.39224644
   * Referenced by: '<S44>/Offset for 0 deg'
   */
  3.39224644,

  /* Expression: 3.6
   * Referenced by: '<S34>/m//s2Km//h'
   */
  3.6,

  /* Expression: 1/10
   * Referenced by: '<S34>/Gain1'
   */
  0.1,

  /* Computed Parameter: RightTiltMotor_CurrentReqmA_Ini
   * Referenced by: synthesized block
   */
  (0LL),

  /* Computed Parameter: DunkC_ActualCurrent_InitialCond
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: Gain1_Gain_j
   * Referenced by: '<S5>/Gain1'
   */
  MIN_int32_T,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S5>/Gain'
   */
  MIN_int32_T,

  /* Computed Parameter: Gain_Gain_i
   * Referenced by: '<S32>/Gain'
   */
  MIN_int32_T,

  /* Computed Parameter: Joystick_LongCmd_InitialConditi
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtDunkA_Steering_Init_Spe
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtDunkC_TiltLeft_Init_Cur
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtDunkB_TiltRight_Init_Cu
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtDunkD_Brake_Init_Curren
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: Retract_current_InitialCondit_j
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: Joystick_LongCmd1_InitialCondit
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtSum1Inport1_InitialCond
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtSum1Inport2_InitialCond
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtRetractInport2_InitialC
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition_m
   * Referenced by: '<S37>/Delay'
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtDelayInport1_InitialCon
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: dem1_Gain
   * Referenced by: '<S30>/dem1'
   */
  0.5F,

  /* Computed Parameter: RoboticsConvention1_Gain
   * Referenced by: '<S30>/Robotics Convention1'
   */
  -0.09F,

  /* Computed Parameter: degree2rad_Gain
   * Referenced by: '<S30>/degree2rad'
   */
  0.0174532924F,

  /* Computed Parameter: n_Gain
   * Referenced by: '<S32>/n'
   */
  -1.0F,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S75>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S79>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S80>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S81>/Constant'
   */
  1.0F,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S37>/Delay'
   */
  2U,

  /* Computed Parameter: Delay_DelayLength_h
   * Referenced by: '<S45>/Delay'
   */
  1U,

  /* Computed Parameter: Gain5_Gain
   * Referenced by: '<S29>/Gain5'
   */
  -32768,

  /* Computed Parameter: LSB2Volt_Gain
   * Referenced by: '<S43>/LSB2Volt'
   */
  20485,

  /* Computed Parameter: LSB2Volt_Gain_f
   * Referenced by: '<S44>/LSB2Volt'
   */
  20485,

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S37>/Saturation1'
   */
  10000U,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S37>/Saturation1'
   */
  3600U,

  /* Computed Parameter: TmpRTBAtProduct2Inport1_Initial
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: TmpRTBAtCANWriteInport2_Initial
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S20>/Constant'
   */
  0U,

  /* Computed Parameter: TmpRTBAtCANWriteInport2_Initi_j
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: Constant_Value_nv
   * Referenced by: '<S22>/Constant'
   */
  0U,

  /* Computed Parameter: ManualSwitch4_CurrentSetting
   * Referenced by: '<S32>/Manual Switch4'
   */
  1U,

  /* Computed Parameter: Joystick_ButtonsStatus_InitialC
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S3>/Constant'
   */
  1U,

  /* Computed Parameter: RateTransition_InitialCondition
   * Referenced by: '<S31>/Rate Transition'
   */
  0U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S9>/Constant'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S32>/Manual Switch1'
   */
  1U
};
