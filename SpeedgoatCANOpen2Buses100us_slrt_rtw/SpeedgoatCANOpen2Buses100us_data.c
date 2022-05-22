/*
 * SpeedgoatCANOpen2Buses100us_data.c
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

#include "SpeedgoatCANOpen2Buses100us.h"
#include "SpeedgoatCANOpen2Buses100us_private.h"

/* Block parameters (default storage) */
P_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_P = {
  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S49>/UD'
   */
  0.0,

  /* Mask Parameter: PID_ctrl1_Kd
   * Referenced by: '<S43>/Derivative Gain'
   */
  2.0,

  /* Mask Parameter: PID_ctrl1_Ki
   * Referenced by:
   *   '<S43>/AntiWindup'
   *   '<S43>/Integral Gain'
   */
  0.0,

  /* Mask Parameter: PID_ctrl1_Kp
   * Referenced by:
   *   '<S43>/AntiWindup'
   *   '<S43>/Proportional  Gain'
   */
  90.0,

  /* Mask Parameter: PID_ctrl1_Req_lim
   * Referenced by:
   *   '<S43>/Saturation'
   *   '<S43>/Saturation1'
   */
  1000.0,

  /* Mask Parameter: RepeatingSequence1_rep_seq_y
   * Referenced by: '<S45>/Look-Up Table1'
   */
  { 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, -2.0, -2.0 },

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S63>/Constant'
   */
  5.0F,

  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<S20>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S20>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANWrite_P1_Size_p
   * Referenced by: '<S22>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S22>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 1.0, 2.0, 1.0, 0.0 },

  /* Expression: 1/10
   * Referenced by: '<S33>/Gain1'
   */
  0.1,

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
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0 },

  /* Computed Parameter: CANRead_P1_Size_b
   * Referenced by: '<S21>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S21>/CAN Read'
   */
  { 691.0, 1.0, 0.0001, 1.0, 2.0, 1.0 },

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

  /* Expression: 0
   * Referenced by: '<S16>/Sine Wave'
   */
  0.0,

  /* Expression: 5000
   * Referenced by: '<S16>/Sine Wave1'
   */
  5000.0,

  /* Expression: 2500
   * Referenced by: '<S16>/Sine Wave1'
   */
  2500.0,

  /* Expression: 4
   * Referenced by: '<S16>/Sine Wave1'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S16>/Sine Wave1'
   */
  0.0,

  /* Expression: 5000
   * Referenced by: '<S16>/Sine Wave3'
   */
  5000.0,

  /* Expression: 2500
   * Referenced by: '<S16>/Sine Wave3'
   */
  2500.0,

  /* Expression: 4
   * Referenced by: '<S16>/Sine Wave3'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S16>/Sine Wave3'
   */
  0.0,

  /* Expression: 5000
   * Referenced by: '<S16>/Sine Wave2'
   */
  5000.0,

  /* Expression: 2500
   * Referenced by: '<S16>/Sine Wave2'
   */
  2500.0,

  /* Expression: 4
   * Referenced by: '<S16>/Sine Wave2'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S16>/Sine Wave2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S31>/Constant'
   */
  0.0,

  /* Expression: 3600
   * Referenced by: '<S36>/offset'
   */
  3600.0,

  /* Expression: 0.00015625
   * Referenced by: '<S36>/GetInPercent'
   */
  0.00015625,

  /* Expression: -1
   * Referenced by: '<S36>/Gain2'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S36>/Saturation'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S36>/Saturation'
   */
  -1.0,

  /* Expression: 12.7
   * Referenced by: '<S36>/Gain1'
   */
  12.7,

  /* Expression: 12
   * Referenced by: '<S36>/Saturation2'
   */
  12.0,

  /* Expression: -12
   * Referenced by: '<S36>/Saturation2'
   */
  -12.0,

  /* Expression: 1000
   * Referenced by: '<S36>/Amp2mAmp'
   */
  1000.0,

  /* Expression: pi/30
   * Referenced by: '<S33>/Gain2'
   */
  0.10471975511965977,

  /* Expression: 0.25
   * Referenced by: '<S33>/WheelRadius'
   */
  0.25,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/Offset'
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

  /* Expression: -1
   * Referenced by: '<S43>/c1'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S32>/Gain1'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S30>/Memory1'
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

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 180/2048
   * Referenced by: '<S30>/inc2deg'
   */
  0.087890625,

  /* Expression: period
   * Referenced by: '<S45>/Constant'
   */
  48.0,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S45>/Look-Up Table1'
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

  /* Expression: 0.00246
   * Referenced by: '<S32>/degree2m'
   */
  0.00246,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S49>/TSamp'
   */
  10000.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S43>/Discrete-Time Integrator'
   */
  0.0075,

  /* Expression: 0
   * Referenced by: '<S43>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S43>/Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S40>/Memory1'
   */
  0.0,

  /* Expression: 3.34249
   * Referenced by: '<S40>/Offset for 0 deg'
   */
  3.34249,

  /* Expression: 0.076/5
   * Referenced by: '<S40>/Volt2meter'
   */
  0.0152,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: [0.0201 0.0402 0.0201]
   * Referenced by: '<S40>/Discrete Filter'
   */
  { 0.0201, 0.0402, 0.0201 },

  /* Expression: [1 -1.561 0.6414]
   * Referenced by: '<S40>/Discrete Filter'
   */
  { 1.0, -1.561, 0.6414 },

  /* Expression: 0
   * Referenced by: '<S40>/Discrete Filter'
   */
  0.0,

  /* Expression: 3.6
   * Referenced by: '<S33>/m//s2Km//h'
   */
  3.6,

  /* Computed Parameter: RightTiltMotor_CurrentReqmA_Ini
   * Referenced by: synthesized block
   */
  (0LL),

  /* Computed Parameter: TmpRTBAtZeroOrderHold2Inport1_I
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

  /* Computed Parameter: Gain_Gain_l
   * Referenced by: '<S32>/Gain'
   */
  MIN_int32_T,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S59>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S60>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S61>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S55>/Constant'
   */
  1.0F,

  /* Computed Parameter: Delay_InitialCondition_m
   * Referenced by: '<S36>/Delay'
   */
  0.0F,

  /* Computed Parameter: dem_Gain
   * Referenced by: '<S30>/dem'
   */
  0.25F,

  /* Computed Parameter: RoboticsConvention_Gain
   * Referenced by: '<S30>/Robotics Convention'
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

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S36>/Delay'
   */
  2U,

  /* Computed Parameter: Delay_DelayLength_c
   * Referenced by: '<S43>/Delay'
   */
  1U,

  /* Computed Parameter: Gain5_Gain
   * Referenced by: '<S29>/Gain5'
   */
  -32768,

  /* Computed Parameter: LSB2Volt_Gain
   * Referenced by: '<S40>/LSB2Volt'
   */
  20485,

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S36>/Saturation1'
   */
  10000U,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S36>/Saturation1'
   */
  3600U,

  /* Computed Parameter: TmpRTBAtProduct2Inport1_Initial
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: TmpRTBAtProduct1Inport1_Initial
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: TmpRTBAtProduct2Inport1_Initi_j
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: EnableControl_InitialCondition
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S20>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_nv
   * Referenced by: '<S22>/Constant'
   */
  0U,

  /* Computed Parameter: ManualSwitch4_CurrentSetting
   * Referenced by: '<S32>/Manual Switch4'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S19>/Switch'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_l
   * Referenced by: '<S21>/Switch'
   */
  0U,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S3>/Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S9>/Constant'
   */
  1U,

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<S32>/Manual Switch3'
   */
  1U
};
