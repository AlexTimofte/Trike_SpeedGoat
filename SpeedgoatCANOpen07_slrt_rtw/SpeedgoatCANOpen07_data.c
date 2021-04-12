/*
 * SpeedgoatCANOpen07_data.c
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

#include "SpeedgoatCANOpen07.h"
#include "SpeedgoatCANOpen07_private.h"

/* Block parameters (default storage) */
P_SpeedgoatCANOpen07_T SpeedgoatCANOpen07_P = {
  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<S14>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S14>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANWrite_P1_Size_l
   * Referenced by: '<S16>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S16>/CAN Write'
   */
  { 691.0, 1.0, 0.0001, 1.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S10>/CAN Setup '
   */
  { 1.0, 40.0 },

  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<S10>/CAN Setup '
   */
  { 691.0, 1.0, -1.0, -1.0, 2.0, 2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 2.0,
    2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0,
    2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0 },

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S10>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S10>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S10>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S10>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S13>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S13>/CAN Read'
   */
  { 691.0, 1.0, 0.0001, 0.0, 2.0, 1.0 },

  /* Computed Parameter: CANRead_P1_Size_l
   * Referenced by: '<S15>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S15>/CAN Read'
   */
  { 691.0, 1.0, 0.0001, 1.0, 2.0, 1.0 },

  /* Expression: 2
   * Referenced by: '<S9>/Constant2'
   */
  2.0,

  /* Expression: 3000
   * Referenced by: '<S9>/Constant3'
   */
  3000.0,

  /* Expression: 0
   * Referenced by: '<S9>/Constant1'
   */
  0.0,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S9>/Gain1'
   */
  0.1F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S9>/Gain'
   */
  50.0F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S9>/Gain3'
   */
  0.1F,

  /* Computed Parameter: Gain6_Gain
   * Referenced by: '<S9>/Gain6'
   */
  16384,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S14>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S16>/Constant'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S13>/Switch'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_k
   * Referenced by: '<S15>/Switch'
   */
  0U
};
