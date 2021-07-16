/*
 * SpeedgoatCANOpen2Buses100us_data.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses100us".
 *
 * Model version              : 1.791
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Fri Jul 16 18:28:33 2021
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
  /* Mask Parameter: PID_ctrl_Kd
   * Referenced by: '<S41>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PID_ctrl_Ki
   * Referenced by:
   *   '<S41>/AntiWindup'
   *   '<S41>/Integral Gain'
   */
  0.0,

  /* Mask Parameter: PID_ctrl_Kp
   * Referenced by:
   *   '<S41>/AntiWindup'
   *   '<S41>/Proportional  Gain'
   */
  100.0,

  /* Mask Parameter: PID_ctrl_N
   * Referenced by: '<S41>/FilterOrder'
   */
  1.0,

  /* Mask Parameter: PID_ctrl_Req_lim
   * Referenced by: '<S41>/Saturation'
   */
  2.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S59>/Constant'
   */
  5.0F,

  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<S18>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S18>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANWrite_P1_Size_p
   * Referenced by: '<S20>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S20>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 1.0, 2.0, 1.0, 0.0 },

  /* Expression: 3600
   * Referenced by: '<S33>/offset'
   */
  3600.0,

  /* Expression: 0.00015625
   * Referenced by: '<S33>/Gain3'
   */
  0.00015625,

  /* Expression: -1
   * Referenced by: '<S33>/Gain2'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S33>/Saturation'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S33>/Saturation'
   */
  -1.0,

  /* Expression: 12.7
   * Referenced by: '<S33>/Gain1'
   */
  12.7,

  /* Expression: 1000
   * Referenced by: '<S33>/Amp2mAmp'
   */
  1000.0,

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S13>/CAN Setup '
   */
  { 1.0, 40.0 },

  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<S13>/CAN Setup '
   */
  { 691.0, 1.0, -1.0, -1.0, 2.0, 2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 2.0,
    2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0,
    2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0 },

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S13>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S13>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S13>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S13>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S17>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S17>/CAN Read'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0 },

  /* Computed Parameter: CANRead_P1_Size_b
   * Referenced by: '<S19>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S19>/CAN Read'
   */
  { 691.0, 1.0, 0.0001, 1.0, 2.0, 1.0 },

  /* Expression: 5000
   * Referenced by: '<S14>/Sine Wave'
   */
  5000.0,

  /* Expression: 2500
   * Referenced by: '<S14>/Sine Wave'
   */
  2500.0,

  /* Expression: 4
   * Referenced by: '<S14>/Sine Wave'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S14>/Sine Wave'
   */
  0.0,

  /* Expression: 5000
   * Referenced by: '<S14>/Sine Wave1'
   */
  5000.0,

  /* Expression: 2500
   * Referenced by: '<S14>/Sine Wave1'
   */
  2500.0,

  /* Expression: 4
   * Referenced by: '<S14>/Sine Wave1'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S14>/Sine Wave1'
   */
  0.0,

  /* Expression: 5000
   * Referenced by: '<S14>/Sine Wave3'
   */
  5000.0,

  /* Expression: 2500
   * Referenced by: '<S14>/Sine Wave3'
   */
  2500.0,

  /* Expression: 4
   * Referenced by: '<S14>/Sine Wave3'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S14>/Sine Wave3'
   */
  0.0,

  /* Expression: 5000
   * Referenced by: '<S14>/Sine Wave2'
   */
  5000.0,

  /* Expression: 2500
   * Referenced by: '<S14>/Sine Wave2'
   */
  2500.0,

  /* Expression: 4
   * Referenced by: '<S14>/Sine Wave2'
   */
  4.0,

  /* Expression: 0
   * Referenced by: '<S14>/Sine Wave2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S35>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S36>/Constant'
   */
  2.0,

  /* Expression: 0.00246
   * Referenced by: '<S36>/degree2m'
   */
  0.00246,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S41>/Discrete-Time Integrator'
   */
  0.0002,

  /* Expression: 0
   * Referenced by: '<S41>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<S41>/Discrete-Time Integrator1'
   */
  0.0002,

  /* Expression: 0
   * Referenced by: '<S41>/Discrete-Time Integrator1'
   */
  0.0,

  /* Expression: -1000
   * Referenced by: '<S41>/c1'
   */
  -1000.0,

  /* Expression: 0
   * Referenced by: '<S21>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S34>/Memory1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 2048
   * Referenced by: '<S34>/Offset to 0 pos => pos = [-180 180]deg'
   */
  2048.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 180/2048
   * Referenced by: '<S34>/inc2deg'
   */
  0.087890625,

  /* Expression: 0
   * Referenced by: '<S40>/Memory1'
   */
  0.0,

  /* Expression: 3.4829
   * Referenced by: '<S40>/Offset for 0 deg (3.5064V -> 57.02mm)'
   */
  3.4829,

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

  /* Computed Parameter: ms2Kmh_Gain
   * Referenced by: '<S37>/m//s2Km//h'
   */
  (8301034833169298432LL),

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S36>/Gain'
   */
  -1932735283,

  /* Computed Parameter: Gain_Gain_g
   * Referenced by: '<S6>/Gain'
   */
  MIN_int32_T,

  /* Computed Parameter: WheelRadius_Gain
   * Referenced by: '<S37>/WheelRadius'
   */
  1073741824,

  /* Computed Parameter: Gain1_Gain_n
   * Referenced by: '<S37>/Gain1'
   */
  0.1F,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S53>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S56>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S55>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S49>/Constant'
   */
  1.0F,

  /* Computed Parameter: dem_Gain
   * Referenced by: '<S34>/dem'
   */
  0.25F,

  /* Computed Parameter: RoboticsConvention_Gain
   * Referenced by: '<S34>/Robotics Convention'
   */
  -0.09F,

  /* Computed Parameter: degree2rad_Gain
   * Referenced by: '<S34>/degree2rad'
   */
  0.0174532924F,

  /* Computed Parameter: n_Gain
   * Referenced by: '<S36>/n'
   */
  -1.0F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S21>/Gain4'
   */
  3123612579U,

  /* Computed Parameter: Gain2_Gain_p
   * Referenced by: '<S21>/Gain2'
   */
  3123612579U,

  /* Computed Parameter: Gain2_Gain_k
   * Referenced by: '<S37>/Gain2'
   */
  27452,

  /* Computed Parameter: LSB2Volt_Gain
   * Referenced by: '<S40>/LSB2Volt'
   */
  20485,

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S33>/Saturation1'
   */
  10000U,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S33>/Saturation1'
   */
  3600U,

  /* Computed Parameter: Constant_Value_kp
   * Referenced by: '<S18>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_nv
   * Referenced by: '<S20>/Constant'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S17>/Switch'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_l
   * Referenced by: '<S19>/Switch'
   */
  0U,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S3>/Constant'
   */
  1U
};
