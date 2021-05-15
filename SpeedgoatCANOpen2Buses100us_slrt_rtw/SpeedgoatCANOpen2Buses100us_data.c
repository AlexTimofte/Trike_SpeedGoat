/*
 * SpeedgoatCANOpen2Buses100us_data.c
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

#include "SpeedgoatCANOpen2Buses100us.h"
#include "SpeedgoatCANOpen2Buses100us_private.h"

/* Block parameters (default storage) */
P_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_P = {
  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<S16>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S16>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S11>/CAN Setup '
   */
  { 1.0, 40.0 },

  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<S11>/CAN Setup '
   */
  { 691.0, 1.0, -1.0, -1.0, 2.0, 2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 1.0,
    2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0,
    2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0 },

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S11>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S11>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S11>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S11>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S15>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S15>/CAN Read'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S25>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/Switch4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/Switch3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S10>/Constant'
   */
  0.0,

  /* Expression: 0.00246
   * Referenced by: '<S33>/degree2m'
   */
  0.00246,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S33>/Memory'
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
   * Referenced by: '<S32>/Switch1'
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
   * Referenced by: '<S32>/Switch2'
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
   * Referenced by: '<S32>/Switch'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S33>/Constant'
   */
  5.0,

  /* Expression: 0.076/5
   * Referenced by: '<S33>/Volt2meter'
   */
  0.0152,

  /* Computed Parameter: ms2Kmh_Gain
   * Referenced by: '<S34>/m//s2Km//h'
   */
  (8301034833169298432LL),

  /* Computed Parameter: Memory1_InitialCondition
   * Referenced by: '<S31>/Memory1'
   */
  (0ULL),

  /* Computed Parameter: degree2rad_Gain
   * Referenced by: '<S31>/degree2rad'
   */
  (10302605451487463424ULL),

  /* Computed Parameter: DunkA_TPDO_DesiredCurrent_Initi
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: DunkB_TPDO_DesiredCurrent_Initi
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: DunkC_TPDO_DesiredCurrent_Initi
   * Referenced by: synthesized block
   */
  0,

  /* Computed Parameter: WheelRadius_Gain
   * Referenced by: '<S34>/WheelRadius'
   */
  1073741824,

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S34>/Saturation1'
   */
  1.0F,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S34>/Saturation1'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S41>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S41>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_a
   * Referenced by: '<S42>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_g5
   * Referenced by: '<S42>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_k
   * Referenced by: '<S43>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S43>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant1_Value_g
   * Referenced by: '<S38>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S38>/Constant'
   */
  1.0F,

  /* Computed Parameter: RoboticsConvention_Gain
   * Referenced by: '<S31>/Robotics Convention'
   */
  -1.0F,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S30>/Saturation'
   */
  0U,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S30>/Saturation'
   */
  0U,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S30>/Gain1'
   */
  3409130291U,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S10>/Gain2'
   */
  3123612579U,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S10>/Gain4'
   */
  3123612579U,

  /* Computed Parameter: inc2deg_Gain
   * Referenced by: '<S31>/inc2deg'
   */
  3019898880U,

  /* Computed Parameter: Gain2_Gain_k
   * Referenced by: '<S34>/Gain2'
   */
  27452,

  /* Computed Parameter: Gain2_Gain_p
   * Referenced by: '<S30>/Gain2'
   */
  0U,

  /* Computed Parameter: Constant_Value_kp
   * Referenced by: '<S16>/Constant'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_m
   * Referenced by: '<S15>/Switch'
   */
  0U
};
