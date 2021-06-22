/*
 * SpeedgoatCANOpen2Buses100us_data.c
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

#include "SpeedgoatCANOpen2Buses100us.h"
#include "SpeedgoatCANOpen2Buses100us_private.h"

/* Block parameters (default storage) */
P_SpeedgoatCANOpen2Buses100us_T SpeedgoatCANOpen2Buses100us_P = {
  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S50>/Constant'
   */
  5.0,

  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<S17>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S17>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANWrite_P1_Size_p
   * Referenced by: '<S19>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S19>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 1.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S12>/CAN Setup '
   */
  { 1.0, 40.0 },

  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<S12>/CAN Setup '
   */
  { 691.0, 1.0, -1.0, -1.0, 2.0, 2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 2.0,
    2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0,
    2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0 },

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S12>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S12>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S12>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S12>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S16>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S16>/CAN Read'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0 },

  /* Computed Parameter: CANRead_P1_Size_b
   * Referenced by: '<S18>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S18>/CAN Read'
   */
  { 691.0, 1.0, 0.0001, 1.0, 2.0, 1.0 },

  /* Expression: 1
   * Referenced by: '<S24>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S34>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S34>/Switch4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S33>/Memory1'
   */
  0.0,

  /* Expression: pi/180
   * Referenced by: '<S33>/degree2rad'
   */
  0.017453292519943295,

  /* Expression: 0.00246
   * Referenced by: '<S35>/degree2m'
   */
  0.00246,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S35>/Memory'
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
   * Referenced by: '<S34>/Switch2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S34>/Switch3'
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
   * Referenced by: '<S34>/Switch'
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
   * Referenced by: '<S34>/Switch1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S20>/Constant'
   */
  0.0,

  /* Expression: 2048
   * Referenced by: '<S33>/Constant1'
   */
  2048.0,

  /* Expression: 180/2048
   * Referenced by: '<S33>/inc2deg'
   */
  0.087890625,

  /* Expression: 5
   * Referenced by: '<S35>/Constant'
   */
  5.0,

  /* Expression: 0.076/5
   * Referenced by: '<S35>/Volt2meter'
   */
  0.0152,

  /* Expression: 1
   * Referenced by: '<S36>/Saturation1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S36>/Saturation1'
   */
  0.0,

  /* Computed Parameter: ms2Kmh_Gain
   * Referenced by: '<S36>/m//s2Km//h'
   */
  (8301034833169298432LL),

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
   * Referenced by: '<S36>/WheelRadius'
   */
  1073741824,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S36>/Gain1'
   */
  0.1F,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S44>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S47>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S41>/Constant'
   */
  1.0F,

  /* Computed Parameter: RoboticsConvention_Gain
   * Referenced by: '<S33>/Robotics Convention'
   */
  -1.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S46>/Constant'
   */
  1.0F,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S32>/Saturation'
   */
  0U,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S32>/Saturation'
   */
  0U,

  /* Computed Parameter: Gain1_Gain_c
   * Referenced by: '<S32>/Gain1'
   */
  3409130291U,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S20>/Gain2'
   */
  3123612579U,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S20>/Gain4'
   */
  3123612579U,

  /* Computed Parameter: Gain2_Gain_k
   * Referenced by: '<S36>/Gain2'
   */
  27452,

  /* Computed Parameter: Gain2_Gain_p
   * Referenced by: '<S32>/Gain2'
   */
  0U,

  /* Computed Parameter: Constant_Value_kp
   * Referenced by: '<S17>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_nv
   * Referenced by: '<S19>/Constant'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_m
   * Referenced by: '<S16>/Switch'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_l
   * Referenced by: '<S18>/Switch'
   */
  0U,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S3>/Constant'
   */
  1U
};
