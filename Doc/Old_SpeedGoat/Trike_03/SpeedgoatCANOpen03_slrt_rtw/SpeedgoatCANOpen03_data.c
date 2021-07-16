/*
 * SpeedgoatCANOpen03_data.c
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

#include "SpeedgoatCANOpen03.h"
#include "SpeedgoatCANOpen03_private.h"

/* Block parameters (default storage) */
P_SpeedgoatCANOpen03_T SpeedgoatCANOpen03_P = {
  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<S5>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S5>/CAN Write'
   */
  { 691.0, 1.0, 0.001, 0.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANWrite_P1_Size_g
   * Referenced by: '<S6>/CAN Write'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S6>/CAN Write'
   */
  { 691.0, 1.0, 0.001, 1.0, 2.0, 1.0, 0.0 },

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S1>/CAN Setup '
   */
  { 1.0, 40.0 },

  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<S1>/CAN Setup '
   */
  { 691.0, 1.0, -1.0, -1.0, 2.0, 2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 2.0,
    2.0, 16.0, 63.0, 16.0, 2.0, 2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0,
    2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0 },

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S1>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S1>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S1>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S1>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S3>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S3>/CAN Read'
   */
  { 691.0, 1.0, 0.001, 0.0, 2.0, 1.0 },

  /* Computed Parameter: CANRead_P1_Size_p
   * Referenced by: '<S4>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S4>/CAN Read'
   */
  { 691.0, 1.0, 0.001, 1.0, 2.0, 1.0 },

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S2>/Gain1'
   */
  0.1F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S2>/Gain2'
   */
  1.0F,

  /* Computed Parameter: Gain5_Gain
   * Referenced by: '<S2>/Gain5'
   */
  16384,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S2>/Gain4'
   */
  16384,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S2>/Gain3'
   */
  41943U,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S5>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S6>/Constant'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S3>/Switch'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_p
   * Referenced by: '<S4>/Switch'
   */
  0U
};
