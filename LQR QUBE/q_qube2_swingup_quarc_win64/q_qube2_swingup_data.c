/*
 * q_qube2_swingup_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "q_qube2_swingup".
 *
 * Model version              : 5.16
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Mar 11 14:35:27 2022
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "q_qube2_swingup.h"
#include "q_qube2_swingup_private.h"

/* Block parameters (default storage) */
P_q_qube2_swingup_T q_qube2_swingup_P = {
  /* Variable: E_r
   * Referenced by: '<S4>/Constant2'
   */
  0.03037176,

  /* Variable: Jp
   * Referenced by: '<S4>/Constant7'
   */
  0.00013312800000000002,

  /* Variable: K_unstable
   * Referenced by: '<Root>/u = -K*x'
   */
  { -1.0000000000000113, 35.202813375988626, -1.4486514032968385,
    3.0940832028998866 },

  /* Variable: Q
   * Referenced by: '<S1>/Constant2'
   */
  { 0.1, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 0.0,
    0.1 },

  /* Variable: R
   * Referenced by: '<S1>/Constant1'
   */
  0.1,

  /* Variable: Rm
   * Referenced by:
   *   '<Root>/Gain'
   *   '<Root>/Gain1'
   */
  8.4,

  /* Variable: a_max
   * Referenced by: '<S4>/Constant9'
   */
  6.1919504643962844,

  /* Variable: g
   * Referenced by: '<S4>/Constant8'
   */
  9.81,

  /* Variable: k_e
   * Referenced by: '<S4>/Constant'
   */
  2.4767801857585134E+6,

  /* Variable: km
   * Referenced by:
   *   '<Root>/Gain'
   *   '<Root>/Gain1'
   */
  0.042,

  /* Variable: l
   * Referenced by: '<S4>/Constant3'
   */
  0.0645,

  /* Variable: mp
   * Referenced by: '<S4>/Constant1'
   */
  0.024,

  /* Variable: mr
   * Referenced by: '<S4>/Constant5'
   */
  0.095,

  /* Variable: r
   * Referenced by: '<S4>/Constant6'
   */
  0.085,

  /* Mask Parameter: IntervalTest_lowlimit
   * Referenced by: '<S2>/Lower Limit'
   */
  -0.47123889803846897,

  /* Mask Parameter: IntervalTest_uplimit
   * Referenced by: '<S2>/Upper Limit'
   */
  0.47123889803846897,

  /* Mask Parameter: HILWriteAnalog_channels
   * Referenced by: '<S3>/HIL Write Analog'
   */
  0U,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: final_analog_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: analog_output_maximums
   * Referenced by: '<Root>/HIL Initialize'
   */
  10.0,

  /* Expression: analog_output_minimums
   * Referenced by: '<Root>/HIL Initialize'
   */
  -10.0,

  /* Expression: initial_analog_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_analog_outputs
   * Referenced by: '<Root>/HIL Initialize'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Integrator4'
   */
  0.0,

  /* Expression: -2*pi/512/4
   * Referenced by: '<S5>/Arm: counts to rad'
   */
  -0.0030679615757712823,

  /* Expression: 2*pi/512/4
   * Referenced by: '<S5>/Pendulum:  counts to rad'
   */
  0.0030679615757712823,

  /* Expression: 2*pi
   * Referenced by: '<S7>/Constant2'
   */
  6.2831853071795862,

  /* Expression: -pi
   * Referenced by: '<S7>/Bias'
   */
  -3.1415926535897931,

  /* Computed Parameter: theta_dot_A
   * Referenced by: '<S6>/theta_dot'
   */
  -50.0,

  /* Computed Parameter: theta_dot_C
   * Referenced by: '<S6>/theta_dot'
   */
  -2500.0,

  /* Computed Parameter: theta_dot_D
   * Referenced by: '<S6>/theta_dot'
   */
  50.0,

  /* Expression: -pi
   * Referenced by: '<Root>/Bias2'
   */
  -3.1415926535897931,

  /* Computed Parameter: alpha_dot_A
   * Referenced by: '<S6>/alpha_dot'
   */
  -50.0,

  /* Computed Parameter: alpha_dot_C
   * Referenced by: '<S6>/alpha_dot'
   */
  -2500.0,

  /* Computed Parameter: alpha_dot_D
   * Referenced by: '<S6>/alpha_dot'
   */
  50.0,

  /* Expression: 20
   * Referenced by: '<Root>/Step2'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Step2'
   */
  1.0,

  /* Expression: [pi/2 0 0 0]
   * Referenced by: '<Root>/Setpoint State: Xd2'
   */
  { 1.5707963267948966, 0.0, 0.0, 0.0 },

  /* Expression: 10
   * Referenced by: '<Root>/Step1'
   */
  10.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Step1'
   */
  1.0,

  /* Expression: [pi/4 0 0 0]
   * Referenced by: '<Root>/Setpoint State: Xd1'
   */
  { 0.78539816339744828, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0]
   * Referenced by: '<Root>/Setpoint State: Xd'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0.1
   * Referenced by: '<Root>/Step'
   */
  0.1,

  /* Expression: 10
   * Referenced by: '<Root>/Step'
   */
  10.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<Root>/+//-10V'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<Root>/+//-10V'
   */
  -10.0,

  /* Expression: -1
   * Referenced by: '<S3>/For +ve CCW'
   */
  -1.0,

  /* Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILReadEncoderTimebase_Clock
   * Referenced by: '<S3>/HIL Read Encoder Timebase'
   */
  0,

  /* Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  0U,

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<Root>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILReadEncoderTimebase_Channels
   * Referenced by: '<S3>/HIL Read Encoder Timebase'
   */
  { 0U, 1U },

  /* Computed Parameter: HILReadEncoderTimebase_SamplesI
   * Referenced by: '<S3>/HIL Read Encoder Timebase'
   */
  500U,

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<Root>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<Root>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILReadEncoderTimebase_Active
   * Referenced by: '<S3>/HIL Read Encoder Timebase'
   */
  1,

  /* Computed Parameter: HILWriteAnalog_Active
   * Referenced by: '<S3>/HIL Write Analog'
   */
  1,

  /* Computed Parameter: HILReadEncoderTimebase_Overflow
   * Referenced by: '<S3>/HIL Read Encoder Timebase'
   */
  1U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<Root>/Switch'
   */
  0U
};
