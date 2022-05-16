/*
 * q_qube2_swingup.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "q_qube2_swingup".
 *
 * Model version              : 5.30
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Apr 19 18:49:50 2022
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "q_qube2_swingup.h"
#include "q_qube2_swingup_private.h"
#include "q_qube2_swingup_dt.h"

/* Block signals (default storage) */
B_q_qube2_swingup_T q_qube2_swingup_B;

/* Continuous states */
X_q_qube2_swingup_T q_qube2_swingup_X;

/* Block states (default storage) */
DW_q_qube2_swingup_T q_qube2_swingup_DW;

/* Real-time model */
static RT_MODEL_q_qube2_swingup_T q_qube2_swingup_M_;
RT_MODEL_q_qube2_swingup_T *const q_qube2_swingup_M = &q_qube2_swingup_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  q_qube2_swingup_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  boolean_T yEq;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Model output function */
void q_qube2_swingup_output(void)
{
  /* local block i/o variables */
  real_T rtb_Sin;
  real_T rtb_Sin1;
  real_T b_x[24];
  real_T values2[24];
  real_T values3[24];
  real_T rtb_Reshape[6];
  real_T x[6];
  real_T rtb_VectorConcatenate[4];
  real_T values6[3];
  real_T rtb_Abs;
  real_T rtb_MatrixMultiply4;
  int32_T c;
  int32_T r;
  boolean_T exitg1;
  boolean_T rtb_RelationalOperator1;
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* set solver stop time */
    if (!(q_qube2_swingup_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&q_qube2_swingup_M->solverInfo,
                            ((q_qube2_swingup_M->Timing.clockTickH0 + 1) *
        q_qube2_swingup_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&q_qube2_swingup_M->solverInfo,
                            ((q_qube2_swingup_M->Timing.clockTick0 + 1) *
        q_qube2_swingup_M->Timing.stepSize0 +
        q_qube2_swingup_M->Timing.clockTickH0 *
        q_qube2_swingup_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(q_qube2_swingup_M)) {
    q_qube2_swingup_M->Timing.t[0] = rtsiGetT(&q_qube2_swingup_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* S-Function (hil_read_encoder_timebase_block): '<S3>/HIL Read Encoder Timebase' */

    /* S-Function Block: q_qube2_swingup/Rotary Pendulum Interface/HIL Read Encoder Timebase (hil_read_encoder_timebase_block) */
    {
      t_error result;
      result = hil_task_read_encoder
        (q_qube2_swingup_DW.HILReadEncoderTimebase_Task, 1,
         &q_qube2_swingup_DW.HILReadEncoderTimebase_Buffer[0]);
      if (result < 0) {
        rtb_Sin = 0;
        rtb_Sin1 = 0;
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
      } else {
        rtb_Sin = q_qube2_swingup_DW.HILReadEncoderTimebase_Buffer[0];
        rtb_Sin1 = q_qube2_swingup_DW.HILReadEncoderTimebase_Buffer[1];
      }
    }
  }

  /* Integrator: '<S1>/Integrator4' */
  q_qube2_swingup_B.Integrator4 = q_qube2_swingup_X.Integrator4_CSTATE;
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* Gain: '<S5>/Arm: counts to rad' */
    q_qube2_swingup_B.Armcountstorad = q_qube2_swingup_P.Armcountstorad_Gain *
      rtb_Sin;

    /* Trigonometry: '<Root>/Sin' */
    rtb_Sin = sin(q_qube2_swingup_B.Armcountstorad);

    /* Trigonometry: '<Root>/Cos' */
    rtb_MatrixMultiply4 = cos(q_qube2_swingup_B.Armcountstorad);
  }

  /* TransferFcn: '<S6>/theta_dot' */
  q_qube2_swingup_B.theta_dot = 0.0;
  q_qube2_swingup_B.theta_dot += q_qube2_swingup_P.theta_dot_C *
    q_qube2_swingup_X.theta_dot_CSTATE;
  q_qube2_swingup_B.theta_dot += q_qube2_swingup_P.theta_dot_D *
    q_qube2_swingup_B.Armcountstorad;

  /* RateTransition: '<S6>/Rate Transition' */
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* RateTransition: '<S6>/Rate Transition' */
    q_qube2_swingup_B.RateTransition = q_qube2_swingup_B.theta_dot;

    /* Gain: '<S5>/Pendulum:  counts to rad' */
    q_qube2_swingup_B.Pendulumcountstorad =
      q_qube2_swingup_P.Pendulumcountstorad_Gain * rtb_Sin1;

    /* Trigonometry: '<Root>/Sin1' */
    rtb_Sin1 = sin(q_qube2_swingup_B.Pendulumcountstorad);

    /* Trigonometry: '<Root>/Cos1' */
    rtb_Abs = cos(q_qube2_swingup_B.Pendulumcountstorad);
  }

  /* End of RateTransition: '<S6>/Rate Transition' */

  /* TransferFcn: '<S6>/alpha_dot' */
  q_qube2_swingup_B.alpha_dot = 0.0;
  q_qube2_swingup_B.alpha_dot += q_qube2_swingup_P.alpha_dot_C *
    q_qube2_swingup_X.alpha_dot_CSTATE;
  q_qube2_swingup_B.alpha_dot += q_qube2_swingup_P.alpha_dot_D *
    q_qube2_swingup_B.Pendulumcountstorad;

  /* RateTransition: '<S6>/Rate Transition1' */
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* RateTransition: '<S6>/Rate Transition1' */
    q_qube2_swingup_B.RateTransition1 = q_qube2_swingup_B.alpha_dot;

    /* Reshape: '<Root>/Reshape' */
    rtb_Reshape[0] = rtb_Sin;
    rtb_Reshape[1] = rtb_MatrixMultiply4;
    rtb_Reshape[2] = q_qube2_swingup_B.RateTransition;
    rtb_Reshape[3] = rtb_Sin1;
    rtb_Reshape[4] = rtb_Abs;
    rtb_Reshape[5] = q_qube2_swingup_B.RateTransition1;

    /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
     *  Constant: '<Root>/Constant10'
     *  Constant: '<Root>/Constant11'
     *  Constant: '<Root>/Constant4'
     *  Constant: '<Root>/Constant6'
     *  Constant: '<Root>/Constant7'
     *  Constant: '<Root>/Constant8'
     *  Constant: '<Root>/Constant9'
     *  Reshape: '<Root>/Reshape'
     */
    for (c = 0; c < 24; c++) {
      for (r = 0; r < 6; r++) {
        x[r] = q_qube2_swingup_P.layer1[24 * r + c] * rtb_Reshape[r];
      }

      rtb_MatrixMultiply4 = x[0];
      for (r = 0; r < 5; r++) {
        rtb_MatrixMultiply4 += x[r + 1];
      }

      values3[c] = fmax(0.0, rtb_MatrixMultiply4 + q_qube2_swingup_P.layer2[c]);
    }

    for (c = 0; c < 24; c++) {
      for (r = 0; r < 24; r++) {
        b_x[r] = q_qube2_swingup_P.layer3[24 * r + c] * values3[r];
      }

      rtb_MatrixMultiply4 = b_x[0];
      for (r = 0; r < 23; r++) {
        rtb_MatrixMultiply4 += b_x[r + 1];
      }

      values2[c] = fmax(0.0, rtb_MatrixMultiply4 + q_qube2_swingup_P.layer4[c]);
    }

    for (c = 0; c < 3; c++) {
      for (r = 0; r < 24; r++) {
        b_x[r] = q_qube2_swingup_P.layer5[3 * r + c] * values2[r];
      }

      rtb_MatrixMultiply4 = b_x[0];
      for (r = 0; r < 23; r++) {
        rtb_MatrixMultiply4 += b_x[r + 1];
      }

      values6[c] = rtb_MatrixMultiply4 + q_qube2_swingup_P.layer6[c];
    }

    if (!rtIsNaN(values6[0])) {
      c = 1;
    } else {
      c = 0;
      r = 2;
      exitg1 = false;
      while ((!exitg1) && (r < 4)) {
        if (!rtIsNaN(values6[r - 1])) {
          c = r;
          exitg1 = true;
        } else {
          r++;
        }
      }
    }

    if (c == 0) {
      c = 1;
    } else {
      rtb_MatrixMultiply4 = values6[c - 1];
      for (r = c; r < 3; r++) {
        if (rtb_MatrixMultiply4 < values6[r]) {
          rtb_MatrixMultiply4 = values6[r];
          c = r + 1;
        }
      }
    }

    q_qube2_swingup_B.action = ((real_T)c - 2.0) * q_qube2_swingup_P.tau_max;
    if ((q_qube2_swingup_B.Armcountstorad > 2.0420352248333655) &&
        (q_qube2_swingup_B.RateTransition > -5.0)) {
      q_qube2_swingup_B.action = -q_qube2_swingup_P.tau_max;
    } else if ((q_qube2_swingup_B.Armcountstorad < -2.0420352248333655) &&
               (q_qube2_swingup_B.RateTransition < 5.0)) {
      q_qube2_swingup_B.action = q_qube2_swingup_P.tau_max;
    }

    /* End of MATLAB Function: '<Root>/MATLAB Function' */

    /* Math: '<S1>/Transpose1' */
    rtb_Abs = q_qube2_swingup_B.action;

    /* Product: '<S1>/Matrix Multiply3' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Product: '<S1>/Matrix Multiply4'
     */
    q_qube2_swingup_B.MatrixMultiply3 = q_qube2_swingup_P.R *
      q_qube2_swingup_B.action * rtb_Abs;

    /* SignalConversion generated from: '<Root>/Vector Concatenate' */
    rtb_VectorConcatenate[0] = q_qube2_swingup_B.Armcountstorad;

    /* Math: '<Root>/Mod' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    rtb_Abs = rt_modd_snf(q_qube2_swingup_B.Pendulumcountstorad,
                          q_qube2_swingup_P.Constant1_Value);

    /* Bias: '<Root>/Bias' */
    q_qube2_swingup_B.Bias = rtb_Abs + q_qube2_swingup_P.Bias_Bias;

    /* SignalConversion generated from: '<Root>/Vector Concatenate' */
    rtb_VectorConcatenate[1] = q_qube2_swingup_B.Bias;

    /* SignalConversion generated from: '<Root>/Vector Concatenate' */
    rtb_VectorConcatenate[2] = q_qube2_swingup_B.RateTransition;

    /* SignalConversion generated from: '<Root>/Vector Concatenate' */
    rtb_VectorConcatenate[3] = q_qube2_swingup_B.RateTransition1;

    /* Product: '<S1>/Matrix Multiply1' */
    rtb_MatrixMultiply4 = 0.0;
    for (r = 0; r < 4; r++) {
      /* Product: '<S1>/Matrix Multiply1' incorporates:
       *  Constant: '<S1>/Constant2'
       *  Math: '<S1>/Transpose'
       *  Product: '<S1>/Matrix Multiply2'
       *  SignalConversion generated from: '<Root>/Vector Concatenate'
       * */
      rtb_MatrixMultiply4 += rtb_VectorConcatenate[r] * (q_qube2_swingup_P.Q[r +
        12] * q_qube2_swingup_B.RateTransition1 + (q_qube2_swingup_P.Q[r + 8] *
        q_qube2_swingup_B.RateTransition + (q_qube2_swingup_P.Q[r + 4] *
        q_qube2_swingup_B.Bias + q_qube2_swingup_P.Q[r] *
        q_qube2_swingup_B.Armcountstorad)));
    }

    /* Product: '<S1>/Matrix Multiply1' */
    q_qube2_swingup_B.MatrixMultiply1 = rtb_MatrixMultiply4;

    /* Sum: '<S1>/Sum' */
    q_qube2_swingup_B.Sum = q_qube2_swingup_B.MatrixMultiply3 +
      q_qube2_swingup_B.MatrixMultiply1;

    /* Gain: '<Root>/Gain' */
    rtb_Abs = 10.0 / q_qube2_swingup_P.tau_max * q_qube2_swingup_B.action;

    /* Saturate: '<Root>/+//-10V' */
    if (rtb_Abs > q_qube2_swingup_P.u0V_UpperSat) {
      /* Saturate: '<Root>/+//-10V' */
      q_qube2_swingup_B.u0V = q_qube2_swingup_P.u0V_UpperSat;
    } else if (rtb_Abs < q_qube2_swingup_P.u0V_LowerSat) {
      /* Saturate: '<Root>/+//-10V' */
      q_qube2_swingup_B.u0V = q_qube2_swingup_P.u0V_LowerSat;
    } else {
      /* Saturate: '<Root>/+//-10V' */
      q_qube2_swingup_B.u0V = rtb_Abs;
    }

    /* End of Saturate: '<Root>/+//-10V' */
    /* Gain: '<S3>/For +ve CCW' */
    rtb_Abs = q_qube2_swingup_P.ForveCCW_Gain * q_qube2_swingup_B.u0V;

    /* S-Function (hil_write_analog_block): '<S3>/HIL Write Analog' */

    /* S-Function Block: q_qube2_swingup/Rotary Pendulum Interface/HIL Write Analog (hil_write_analog_block) */
    {
      t_error result;
      result = hil_write_analog(q_qube2_swingup_DW.HILInitialize_Card,
        &q_qube2_swingup_P.HILWriteAnalog_channels, 1, &rtb_Abs);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
      }
    }

    /* Math: '<S4>/Mod' incorporates:
     *  Constant: '<S4>/Constant'
     */
    rtb_Abs = rt_modd_snf(q_qube2_swingup_B.Pendulumcountstorad,
                          q_qube2_swingup_P.Constant_Value);

    /* Bias: '<S4>/Bias1' */
    q_qube2_swingup_B.Bias1 = rtb_Abs + q_qube2_swingup_P.Bias1_Bias;

    /* Bias: '<S4>/Bias3' */
    rtb_Abs = q_qube2_swingup_B.Armcountstorad + q_qube2_swingup_P.Bias3_Bias;

    /* Bias: '<S4>/Bias2' incorporates:
     *  Constant: '<S4>/Constant2'
     *  Math: '<S4>/Mod1'
     */
    q_qube2_swingup_B.Bias2 = rt_modd_snf(rtb_Abs,
      q_qube2_swingup_P.Constant2_Value) + q_qube2_swingup_P.Bias2_Bias;

    /* Abs: '<S8>/Abs1' */
    rtb_Abs = fabs(q_qube2_swingup_B.Bias2);

    /* RelationalOperator: '<S8>/Relational Operator1' incorporates:
     *  Constant: '<S8>/Constant4'
     */
    rtb_RelationalOperator1 = (q_qube2_swingup_P.Constant4_Value >= rtb_Abs);

    /* Abs: '<S8>/Abs' */
    rtb_Abs = fabs(q_qube2_swingup_B.Bias1);

    /* Gain: '<S8>/Gain6' incorporates:
     *  Constant: '<S8>/Constant3'
     *  Logic: '<S8>/AND'
     *  RelationalOperator: '<S8>/Relational Operator'
     */
    q_qube2_swingup_B.Gain6 = (uint8_T)(rtb_RelationalOperator1 &&
      (q_qube2_swingup_P.Constant3_Value >= rtb_Abs) ? (int32_T)
      q_qube2_swingup_P.Gain6_Gain : 0);

    /* Sum: '<S7>/Add' incorporates:
     *  Gain: '<S7>/Gain'
     *  Gain: '<S7>/Gain1'
     *  Gain: '<S7>/Gain3'
     *  Gain: '<S7>/Gain4'
     *  Gain: '<S7>/Gain5'
     *  Math: '<S7>/Math Function'
     *  Math: '<S7>/Math Function1'
     *  Math: '<S7>/Math Function2'
     *  Math: '<S7>/Math Function3'
     *  Math: '<S7>/Math Function4'
     */
    q_qube2_swingup_B.Add = ((((0.0 - q_qube2_swingup_B.Bias1 *
      q_qube2_swingup_B.Bias1 * q_qube2_swingup_P.Gain4_Gain) -
      q_qube2_swingup_B.Bias2 * q_qube2_swingup_B.Bias2 *
      q_qube2_swingup_P.Gain_Gain) - q_qube2_swingup_B.RateTransition1 *
      q_qube2_swingup_B.RateTransition1 * q_qube2_swingup_P.Gain5_Gain) -
      q_qube2_swingup_B.RateTransition * q_qube2_swingup_B.RateTransition *
      q_qube2_swingup_P.Gain3_Gain) - q_qube2_swingup_B.action *
      q_qube2_swingup_B.action * q_qube2_swingup_P.Gain1_Gain;
  }

  /* End of RateTransition: '<S6>/Rate Transition1' */

  /* Integrator: '<S4>/Integrator' */
  q_qube2_swingup_B.Integrator = q_qube2_swingup_X.Integrator_CSTATE;
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* Sum: '<S4>/Add' incorporates:
     *  Gain: '<S8>/Gain6'
     */
    q_qube2_swingup_B.Add_k = (real_T)q_qube2_swingup_B.Gain6 * 2.0 +
      q_qube2_swingup_B.Add;

    /* S-Function (sdspcumsumprod): '<S4>/Cumulative Sum' */
    rtb_MatrixMultiply4 = q_qube2_swingup_DW.CumulativeSum_RunningCumVal +
      q_qube2_swingup_B.Add_k;

    /* S-Function (sdspcumsumprod): '<S4>/Cumulative Sum' */
    q_qube2_swingup_B.CumulativeSum = rtb_MatrixMultiply4;

    /* S-Function (sdspcumsumprod): '<S4>/Cumulative Sum' */
    q_qube2_swingup_DW.CumulativeSum_RunningCumVal = rtb_MatrixMultiply4;
  }
}

/* Model update function */
void q_qube2_swingup_update(void)
{
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    rt_ertODEUpdateContinuousStates(&q_qube2_swingup_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++q_qube2_swingup_M->Timing.clockTick0)) {
    ++q_qube2_swingup_M->Timing.clockTickH0;
  }

  q_qube2_swingup_M->Timing.t[0] = rtsiGetSolverStopTime
    (&q_qube2_swingup_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.008s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++q_qube2_swingup_M->Timing.clockTick1)) {
      ++q_qube2_swingup_M->Timing.clockTickH1;
    }

    q_qube2_swingup_M->Timing.t[1] = q_qube2_swingup_M->Timing.clockTick1 *
      q_qube2_swingup_M->Timing.stepSize1 +
      q_qube2_swingup_M->Timing.clockTickH1 *
      q_qube2_swingup_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void q_qube2_swingup_derivatives(void)
{
  XDot_q_qube2_swingup_T *_rtXdot;
  _rtXdot = ((XDot_q_qube2_swingup_T *) q_qube2_swingup_M->derivs);

  /* Derivatives for Integrator: '<S1>/Integrator4' */
  _rtXdot->Integrator4_CSTATE = q_qube2_swingup_B.Sum;

  /* Derivatives for TransferFcn: '<S6>/theta_dot' */
  _rtXdot->theta_dot_CSTATE = 0.0;
  _rtXdot->theta_dot_CSTATE += q_qube2_swingup_P.theta_dot_A *
    q_qube2_swingup_X.theta_dot_CSTATE;
  _rtXdot->theta_dot_CSTATE += q_qube2_swingup_B.Armcountstorad;

  /* Derivatives for TransferFcn: '<S6>/alpha_dot' */
  _rtXdot->alpha_dot_CSTATE = 0.0;
  _rtXdot->alpha_dot_CSTATE += q_qube2_swingup_P.alpha_dot_A *
    q_qube2_swingup_X.alpha_dot_CSTATE;
  _rtXdot->alpha_dot_CSTATE += q_qube2_swingup_B.Pendulumcountstorad;

  /* Derivatives for Integrator: '<S4>/Integrator' */
  _rtXdot->Integrator_CSTATE = q_qube2_swingup_B.Add_k;
}

/* Model initialize function */
void q_qube2_swingup_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: q_qube2_swingup/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qube_servo_usb", "0",
                      &q_qube2_swingup_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(q_qube2_swingup_DW.HILInitialize_Card,
      "d0=pwm;d1=pwm;led=auto;update_rate=normal;decimation=1", 55);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(q_qube2_swingup_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
      return;
    }

    if ((q_qube2_swingup_P.HILInitialize_AOPStart && !is_switching) ||
        (q_qube2_swingup_P.HILInitialize_AOPEnter && is_switching)) {
      result = hil_set_analog_output_ranges
        (q_qube2_swingup_DW.HILInitialize_Card,
         &q_qube2_swingup_P.HILInitialize_AOChannels, 1U,
         &q_qube2_swingup_P.HILInitialize_AOLow,
         &q_qube2_swingup_P.HILInitialize_AOHigh);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
        return;
      }
    }

    if ((q_qube2_swingup_P.HILInitialize_AOStart && !is_switching) ||
        (q_qube2_swingup_P.HILInitialize_AOEnter && is_switching)) {
      result = hil_write_analog(q_qube2_swingup_DW.HILInitialize_Card,
        &q_qube2_swingup_P.HILInitialize_AOChannels, 1U,
        &q_qube2_swingup_P.HILInitialize_AOInitial);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
        return;
      }
    }

    if (q_qube2_swingup_P.HILInitialize_AOReset) {
      result = hil_watchdog_set_analog_expiration_state
        (q_qube2_swingup_DW.HILInitialize_Card,
         &q_qube2_swingup_P.HILInitialize_AOChannels, 1U,
         &q_qube2_swingup_P.HILInitialize_AOWatchdog);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
        return;
      }
    }

    if ((q_qube2_swingup_P.HILInitialize_EIPStart && !is_switching) ||
        (q_qube2_swingup_P.HILInitialize_EIPEnter && is_switching)) {
      q_qube2_swingup_DW.HILInitialize_QuadratureModes[0] =
        q_qube2_swingup_P.HILInitialize_EIQuadrature;
      q_qube2_swingup_DW.HILInitialize_QuadratureModes[1] =
        q_qube2_swingup_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (q_qube2_swingup_DW.HILInitialize_Card,
         q_qube2_swingup_P.HILInitialize_EIChannels, 2U,
         (t_encoder_quadrature_mode *)
         &q_qube2_swingup_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
        return;
      }
    }

    if ((q_qube2_swingup_P.HILInitialize_EIStart && !is_switching) ||
        (q_qube2_swingup_P.HILInitialize_EIEnter && is_switching)) {
      q_qube2_swingup_DW.HILInitialize_InitialEICounts[0] =
        q_qube2_swingup_P.HILInitialize_EIInitial;
      q_qube2_swingup_DW.HILInitialize_InitialEICounts[1] =
        q_qube2_swingup_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts(q_qube2_swingup_DW.HILInitialize_Card,
        q_qube2_swingup_P.HILInitialize_EIChannels, 2U,
        &q_qube2_swingup_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (hil_read_encoder_timebase_block): '<S3>/HIL Read Encoder Timebase' */

  /* S-Function Block: q_qube2_swingup/Rotary Pendulum Interface/HIL Read Encoder Timebase (hil_read_encoder_timebase_block) */
  {
    t_error result;
    result = hil_task_create_encoder_reader
      (q_qube2_swingup_DW.HILInitialize_Card,
       q_qube2_swingup_P.HILReadEncoderTimebase_SamplesI,
       q_qube2_swingup_P.HILReadEncoderTimebase_Channels, 2,
       &q_qube2_swingup_DW.HILReadEncoderTimebase_Task);
    if (result >= 0) {
      result = hil_task_set_buffer_overflow_mode
        (q_qube2_swingup_DW.HILReadEncoderTimebase_Task, (t_buffer_overflow_mode)
         (q_qube2_swingup_P.HILReadEncoderTimebase_Overflow - 1));
    }

    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
    }
  }

  /* InitializeConditions for Integrator: '<S1>/Integrator4' */
  q_qube2_swingup_X.Integrator4_CSTATE = q_qube2_swingup_P.Integrator4_IC;

  /* InitializeConditions for TransferFcn: '<S6>/theta_dot' */
  q_qube2_swingup_X.theta_dot_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S6>/alpha_dot' */
  q_qube2_swingup_X.alpha_dot_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  q_qube2_swingup_X.Integrator_CSTATE = q_qube2_swingup_P.Integrator_IC;

  /* InitializeConditions for S-Function (sdspcumsumprod): '<S4>/Cumulative Sum' */
  q_qube2_swingup_DW.CumulativeSum_RunningCumVal = 0.0;
}

/* Model terminate function */
void q_qube2_swingup_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: q_qube2_swingup/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    hil_task_stop_all(q_qube2_swingup_DW.HILInitialize_Card);
    hil_monitor_stop_all(q_qube2_swingup_DW.HILInitialize_Card);
    is_switching = false;
    if ((q_qube2_swingup_P.HILInitialize_AOTerminate && !is_switching) ||
        (q_qube2_swingup_P.HILInitialize_AOExit && is_switching)) {
      num_final_analog_outputs = 1U;
    } else {
      num_final_analog_outputs = 0;
    }

    if (num_final_analog_outputs > 0) {
      result = hil_write_analog(q_qube2_swingup_DW.HILInitialize_Card,
        &q_qube2_swingup_P.HILInitialize_AOChannels, num_final_analog_outputs,
        &q_qube2_swingup_P.HILInitialize_AOFinal);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
      }
    }

    hil_task_delete_all(q_qube2_swingup_DW.HILInitialize_Card);
    hil_monitor_delete_all(q_qube2_swingup_DW.HILInitialize_Card);
    hil_close(q_qube2_swingup_DW.HILInitialize_Card);
    q_qube2_swingup_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  q_qube2_swingup_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  q_qube2_swingup_update();
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
  q_qube2_swingup_initialize();
}

void MdlTerminate(void)
{
  q_qube2_swingup_terminate();
}

/* Registration function */
RT_MODEL_q_qube2_swingup_T *q_qube2_swingup(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)q_qube2_swingup_M, 0,
                sizeof(RT_MODEL_q_qube2_swingup_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&q_qube2_swingup_M->solverInfo,
                          &q_qube2_swingup_M->Timing.simTimeStep);
    rtsiSetTPtr(&q_qube2_swingup_M->solverInfo, &rtmGetTPtr(q_qube2_swingup_M));
    rtsiSetStepSizePtr(&q_qube2_swingup_M->solverInfo,
                       &q_qube2_swingup_M->Timing.stepSize0);
    rtsiSetdXPtr(&q_qube2_swingup_M->solverInfo, &q_qube2_swingup_M->derivs);
    rtsiSetContStatesPtr(&q_qube2_swingup_M->solverInfo, (real_T **)
                         &q_qube2_swingup_M->contStates);
    rtsiSetNumContStatesPtr(&q_qube2_swingup_M->solverInfo,
      &q_qube2_swingup_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&q_qube2_swingup_M->solverInfo,
      &q_qube2_swingup_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&q_qube2_swingup_M->solverInfo,
      &q_qube2_swingup_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&q_qube2_swingup_M->solverInfo,
      &q_qube2_swingup_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&q_qube2_swingup_M->solverInfo, (&rtmGetErrorStatus
      (q_qube2_swingup_M)));
    rtsiSetRTModelPtr(&q_qube2_swingup_M->solverInfo, q_qube2_swingup_M);
  }

  rtsiSetSimTimeStep(&q_qube2_swingup_M->solverInfo, MAJOR_TIME_STEP);
  q_qube2_swingup_M->intgData.f[0] = q_qube2_swingup_M->odeF[0];
  q_qube2_swingup_M->contStates = ((real_T *) &q_qube2_swingup_X);
  rtsiSetSolverData(&q_qube2_swingup_M->solverInfo, (void *)
                    &q_qube2_swingup_M->intgData);
  rtsiSetSolverName(&q_qube2_swingup_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = q_qube2_swingup_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    q_qube2_swingup_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    q_qube2_swingup_M->Timing.sampleTimes =
      (&q_qube2_swingup_M->Timing.sampleTimesArray[0]);
    q_qube2_swingup_M->Timing.offsetTimes =
      (&q_qube2_swingup_M->Timing.offsetTimesArray[0]);

    /* task periods */
    q_qube2_swingup_M->Timing.sampleTimes[0] = (0.0);
    q_qube2_swingup_M->Timing.sampleTimes[1] = (0.008);

    /* task offsets */
    q_qube2_swingup_M->Timing.offsetTimes[0] = (0.0);
    q_qube2_swingup_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(q_qube2_swingup_M, &q_qube2_swingup_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = q_qube2_swingup_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    q_qube2_swingup_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(q_qube2_swingup_M, 20.0);
  q_qube2_swingup_M->Timing.stepSize0 = 0.008;
  q_qube2_swingup_M->Timing.stepSize1 = 0.008;

  /* External mode info */
  q_qube2_swingup_M->Sizes.checksums[0] = (311290339U);
  q_qube2_swingup_M->Sizes.checksums[1] = (678029373U);
  q_qube2_swingup_M->Sizes.checksums[2] = (1168732278U);
  q_qube2_swingup_M->Sizes.checksums[3] = (489994301U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    q_qube2_swingup_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(q_qube2_swingup_M->extModeInfo,
      &q_qube2_swingup_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(q_qube2_swingup_M->extModeInfo,
                        q_qube2_swingup_M->Sizes.checksums);
    rteiSetTPtr(q_qube2_swingup_M->extModeInfo, rtmGetTPtr(q_qube2_swingup_M));
  }

  q_qube2_swingup_M->solverInfoPtr = (&q_qube2_swingup_M->solverInfo);
  q_qube2_swingup_M->Timing.stepSize = (0.008);
  rtsiSetFixedStepSize(&q_qube2_swingup_M->solverInfo, 0.008);
  rtsiSetSolverMode(&q_qube2_swingup_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  q_qube2_swingup_M->blockIO = ((void *) &q_qube2_swingup_B);
  (void) memset(((void *) &q_qube2_swingup_B), 0,
                sizeof(B_q_qube2_swingup_T));

  /* parameters */
  q_qube2_swingup_M->defaultParam = ((real_T *)&q_qube2_swingup_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &q_qube2_swingup_X;
    q_qube2_swingup_M->contStates = (x);
    (void) memset((void *)&q_qube2_swingup_X, 0,
                  sizeof(X_q_qube2_swingup_T));
  }

  /* states (dwork) */
  q_qube2_swingup_M->dwork = ((void *) &q_qube2_swingup_DW);
  (void) memset((void *)&q_qube2_swingup_DW, 0,
                sizeof(DW_q_qube2_swingup_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    q_qube2_swingup_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  q_qube2_swingup_M->Sizes.numContStates = (4);/* Number of continuous states */
  q_qube2_swingup_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  q_qube2_swingup_M->Sizes.numY = (0); /* Number of model outputs */
  q_qube2_swingup_M->Sizes.numU = (0); /* Number of model inputs */
  q_qube2_swingup_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  q_qube2_swingup_M->Sizes.numSampTimes = (2);/* Number of sample times */
  q_qube2_swingup_M->Sizes.numBlocks = (95);/* Number of blocks */
  q_qube2_swingup_M->Sizes.numBlockIO = (20);/* Number of block outputs */
  q_qube2_swingup_M->Sizes.numBlockPrms = (948);/* Sum of parameter "widths" */
  return q_qube2_swingup_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
