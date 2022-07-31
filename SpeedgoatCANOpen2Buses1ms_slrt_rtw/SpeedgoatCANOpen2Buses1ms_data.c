/*
 * SpeedgoatCANOpen2Buses1ms_data.c
 *
 * Code generation for model "SpeedgoatCANOpen2Buses1ms".
 *
 * Model version              : 1.938
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sat Jul 30 12:12:39 2022
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
  /* Mask Parameter: PID_Angle_Kd
   * Referenced by: '<S43>/Constant'
   */
  0.0,

  /* Mask Parameter: PID_DispLeft_Kd
   * Referenced by: '<S44>/Constant'
   */
  0.0,

  /* Mask Parameter: PID_DispLeft1_Kd
   * Referenced by: '<S45>/Constant'
   */
  0.0,

  /* Mask Parameter: PID_DispRight_Kd
   * Referenced by: '<S46>/Constant'
   */
  0.0,

  /* Mask Parameter: PID_Angle_Ki
   * Referenced by:
   *   '<S43>/AntiWindup'
   *   '<S43>/Integral Gain'
   */
  0.1,

  /* Mask Parameter: PID_DispLeft_Ki
   * Referenced by:
   *   '<S44>/AntiWindup'
   *   '<S44>/Integral Gain'
   */
  100.0,

  /* Mask Parameter: PID_DispRight_Ki
   * Referenced by:
   *   '<S46>/AntiWindup'
   *   '<S46>/Integral Gain'
   */
  100.0,

  /* Mask Parameter: PID_DispLeft1_Ki
   * Referenced by:
   *   '<S45>/AntiWindup'
   *   '<S45>/Integral Gain'
   */
  2000.0,

  /* Mask Parameter: PID_Angle_Kp
   * Referenced by:
   *   '<S43>/AntiWindup'
   *   '<S43>/Proportional  Gain'
   */
  1.2,

  /* Mask Parameter: PID_DispLeft_Kp
   * Referenced by:
   *   '<S44>/AntiWindup'
   *   '<S44>/Proportional  Gain'
   */
  50000.0,

  /* Mask Parameter: PID_DispRight_Kp
   * Referenced by:
   *   '<S46>/AntiWindup'
   *   '<S46>/Proportional  Gain'
   */
  50000.0,

  /* Mask Parameter: PID_DispLeft1_Kp
   * Referenced by:
   *   '<S45>/AntiWindup'
   *   '<S45>/Proportional  Gain'
   */
  60000.0,

  /* Mask Parameter: PID_Angle_Req_lim
   * Referenced by: '<S43>/Saturation'
   */
  1000.0,

  /* Mask Parameter: PID_DispLeft_Req_lim
   * Referenced by: '<S44>/Saturation'
   */
  1000.0,

  /* Mask Parameter: PID_DispRight_Req_lim
   * Referenced by: '<S46>/Saturation'
   */
  1000.0,

  /* Mask Parameter: PID_DispLeft1_Req_lim
   * Referenced by: '<S45>/Saturation'
   */
  10000.0,

  /* Mask Parameter: PID_Angle_Ts
   * Referenced by: '<S43>/Constant1'
   */
  0.005,

  /* Mask Parameter: PID_DispLeft_Ts
   * Referenced by: '<S44>/Constant1'
   */
  0.005,

  /* Mask Parameter: PID_DispLeft1_Ts
   * Referenced by: '<S45>/Constant1'
   */
  0.005,

  /* Mask Parameter: PID_DispRight_Ts
   * Referenced by: '<S46>/Constant1'
   */
  0.005,

  /* Mask Parameter: RepeatingSequence1_rep_seq_y
   * Referenced by: '<S47>/Look-Up Table1'
   */
  { 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, -2.0, -2.0 },

  /* Mask Parameter: RepeatingSequence2_rep_seq_y
   * Referenced by: '<S48>/Look-Up Table1'
   */
  { 0.0, 0.0, 4000.0, 4000.0, 0.0, 0.0, -1500.0, -1500.0 },

  /* Mask Parameter: RepeatingSequence3_rep_seq_y
   * Referenced by: '<S49>/Look-Up Table1'
   */
  { 0.0, 0.0, 200.0, 200.0, 0.0, 0.0, -200.0, -200.0 },

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S73>/Constant'
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

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

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

  /* Expression: 3600
   * Referenced by: '<S36>/offset'
   */
  3600.0,

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

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 180/2048
   * Referenced by: '<S30>/inc2deg'
   */
  0.087890625,

  /* Expression: period
   * Referenced by: '<S47>/Constant'
   */
  48.0,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S47>/Look-Up Table1'
   */
  { 0.0, 12.0, 12.003999999999998, 24.0, 24.004000000000005, 36.0,
    36.003999999999991, 48.0 },

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

  /* Expression: 0.0
   * Referenced by: '<S43>/Delay'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S43>/Discrete-Time Integrator'
   */
  0.0025,

  /* Expression: 0
   * Referenced by: '<S43>/Discrete-Time Integrator'
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

  /* Expression: 0.00246
   * Referenced by: '<S43>/tometer'
   */
  0.00246,

  /* Expression: -1
   * Referenced by: '<S32>/Gain4'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S41>/Memory1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S32>/Gain5'
   */
  1.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S44>/Delay'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_d
   * Referenced by: '<S44>/Discrete-Time Integrator'
   */
  0.0025,

  /* Expression: 0
   * Referenced by: '<S44>/Discrete-Time Integrator'
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

  /* Expression: 800
   * Referenced by: '<S44>/Saturation2'
   */
  800.0,

  /* Expression: -800
   * Referenced by: '<S44>/Saturation2'
   */
  -800.0,

  /* Expression: 1
   * Referenced by: '<S44>/c1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S32>/Gain1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S32>/Gain2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S42>/Memory1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S32>/Gain3'
   */
  1.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S46>/Delay'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_p
   * Referenced by: '<S46>/Discrete-Time Integrator'
   */
  0.0025,

  /* Expression: 0
   * Referenced by: '<S46>/Discrete-Time Integrator'
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

  /* Expression: 800
   * Referenced by: '<S46>/Saturation2'
   */
  800.0,

  /* Expression: -800
   * Referenced by: '<S46>/Saturation2'
   */
  -800.0,

  /* Expression: 1
   * Referenced by: '<S46>/c1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S32>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S31>/Constant'
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

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S45>/Delay'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_h
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

  /* Expression: 4000
   * Referenced by: '<S45>/Saturation2'
   */
  4000.0,

  /* Expression: -6000
   * Referenced by: '<S45>/Saturation2'
   */
  -6000.0,

  /* Expression: 1
   * Referenced by: '<S45>/c1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S32>/Gain6'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S32>/Sine Wave1'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S32>/Sine Wave1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S32>/Sine Wave1'
   */
  0.5,

  /* Computed Parameter: SineWave1_Hsin
   * Referenced by: '<S32>/Sine Wave1'
   */
  0.00099999983333334168,

  /* Computed Parameter: SineWave1_HCos
   * Referenced by: '<S32>/Sine Wave1'
   */
  0.99999950000004167,

  /* Computed Parameter: SineWave1_PSin
   * Referenced by: '<S32>/Sine Wave1'
   */
  -0.00099999983333334168,

  /* Computed Parameter: SineWave1_PCos
   * Referenced by: '<S32>/Sine Wave1'
   */
  0.99999950000004167,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.076/5
   * Referenced by: '<S41>/Volt2meter'
   */
  0.0152,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: [0.0201 0.0402 0.0201]
   * Referenced by: '<S41>/Discrete Filter'
   */
  { 0.0201, 0.0402, 0.0201 },

  /* Expression: [1 -1.561 0.6414]
   * Referenced by: '<S41>/Discrete Filter'
   */
  { 1.0, -1.561, 0.6414 },

  /* Expression: 0
   * Referenced by: '<S41>/Discrete Filter'
   */
  0.0,

  /* Expression: 3.294261
   * Referenced by: '<S41>/Offset for 0 deg'
   */
  3.294261,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0.076/5
   * Referenced by: '<S42>/Volt2meter'
   */
  0.0152,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: [0.0201 0.0402 0.0201]
   * Referenced by: '<S42>/Discrete Filter'
   */
  { 0.0201, 0.0402, 0.0201 },

  /* Expression: [1 -1.561 0.6414]
   * Referenced by: '<S42>/Discrete Filter'
   */
  { 1.0, -1.561, 0.6414 },

  /* Expression: 0
   * Referenced by: '<S42>/Discrete Filter'
   */
  0.0,

  /* Expression: 3.39224644
   * Referenced by: '<S42>/Offset for 0 deg'
   */
  3.39224644,

  /* Expression: 0.2
   * Referenced by: '<S43>/Constant3'
   */
  0.2,

  /* Expression: 0.1
   * Referenced by: '<S44>/Constant3'
   */
  0.1,

  /* Expression: 0.00246
   * Referenced by: '<S44>/degree2m'
   */
  0.00246,

  /* Expression: 0.1
   * Referenced by: '<S45>/Constant3'
   */
  0.1,

  /* Expression: 0.00246
   * Referenced by: '<S45>/degree2m'
   */
  0.00246,

  /* Expression: 0.1
   * Referenced by: '<S46>/Constant3'
   */
  0.1,

  /* Expression: 0.00246
   * Referenced by: '<S46>/degree2m'
   */
  0.00246,

  /* Expression: period
   * Referenced by: '<S48>/Constant'
   */
  10.5,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S48>/Look-Up Table1'
   */
  { 0.0, 3.0, 3.001, 5.0, 5.001, 9.0, 9.001, 10.5 },

  /* Expression: period
   * Referenced by: '<S49>/Constant'
   */
  11.0,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S49>/Look-Up Table1'
   */
  { 0.0, 3.0, 3.001, 5.0, 5.001, 9.0, 9.001, 11.0 },

  /* Expression: 500
   * Referenced by: '<S32>/Sine Wave2'
   */
  500.0,

  /* Expression: 0
   * Referenced by: '<S32>/Sine Wave2'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S32>/Sine Wave2'
   */
  2.0,

  /* Computed Parameter: SineWave2_Hsin
   * Referenced by: '<S32>/Sine Wave2'
   */
  0.0019999986666669333,

  /* Computed Parameter: SineWave2_HCos
   * Referenced by: '<S32>/Sine Wave2'
   */
  0.99999800000066663,

  /* Computed Parameter: SineWave2_PSin
   * Referenced by: '<S32>/Sine Wave2'
   */
  -0.0019999986666669333,

  /* Computed Parameter: SineWave2_PCos
   * Referenced by: '<S32>/Sine Wave2'
   */
  0.99999800000066663,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 1500*0
   * Referenced by: '<S32>/Constant3'
   */
  0.0,

  /* Expression: 3.6
   * Referenced by: '<S33>/m//s2Km//h'
   */
  3.6,

  /* Expression: 1/10
   * Referenced by: '<S33>/Gain1'
   */
  0.1,

  /* Computed Parameter: Gain1_Gain_j
   * Referenced by: '<S5>/Gain1'
   */
  MIN_int32_T,

  /* Computed Parameter: Gain_Gain_g
   * Referenced by: '<S5>/Gain'
   */
  MIN_int32_T,

  /* Computed Parameter: TorqueConstant_Gain
   * Referenced by: '<S32>/Torque Constant'
   */
  1568522056,

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

  /* Computed Parameter: TmpRTBAtSum1Inport2_InitialCo_j
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtRetractInport2_InitialC
   * Referenced by: synthesized block
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition_m
   * Referenced by: '<S36>/Delay'
   */
  0.0F,

  /* Computed Parameter: TmpRTBAtDelayInport1_InitialCon
   * Referenced by: synthesized block
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

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S65>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S69>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S70>/Constant'
   */
  1.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S71>/Constant'
   */
  1.0F,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S36>/Delay'
   */
  2U,

  /* Computed Parameter: Delay_DelayLength_c
   * Referenced by: '<S43>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_e
   * Referenced by: '<S44>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_j
   * Referenced by: '<S46>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_p
   * Referenced by: '<S45>/Delay'
   */
  1U,

  /* Computed Parameter: Gain5_Gain_d
   * Referenced by: '<S29>/Gain5'
   */
  -32768,

  /* Computed Parameter: LSB2Volt_Gain
   * Referenced by: '<S41>/LSB2Volt'
   */
  20485,

  /* Computed Parameter: LSB2Volt_Gain_k
   * Referenced by: '<S42>/LSB2Volt'
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

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S32>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: Joystick_ButtonsStatus_InitialC
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: Constant_Value_ej
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

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<S32>/Manual Switch3'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S32>/Manual Switch'
   */
  0U
};
