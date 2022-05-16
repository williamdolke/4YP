/*
 * q_qube2_swingup.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "q_qube2_swingup".
 *
 * Model version              : 5.19
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Feb  7 17:17:47 2022
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

/* Forward declaration for local functions */
static real_T q_q_eml_rand_mt19937ar_stateful(void);
static real_T q_qube2_swingup_rand(void);

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
  int_T nXc = 2;
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

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T q_q_eml_rand_mt19937ar_stateful(void)
{
  real_T r;
  int32_T exitg1;
  int32_T k;
  int32_T kk;
  uint32_T u[2];
  uint32_T mti;
  uint32_T y;
  boolean_T b_isvalid;
  boolean_T exitg2;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
      mti = q_qube2_swingup_DW.state_m[624] + 1U;
      if (q_qube2_swingup_DW.state_m[624] + 1U >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (q_qube2_swingup_DW.state_m[kk + 1] & 2147483647U) |
            (q_qube2_swingup_DW.state_m[kk] & 2147483648U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          q_qube2_swingup_DW.state_m[kk] = q_qube2_swingup_DW.state_m[kk + 397] ^
            y;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (q_qube2_swingup_DW.state_m[kk + 227] & 2147483648U) |
            (q_qube2_swingup_DW.state_m[kk + 228] & 2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          q_qube2_swingup_DW.state_m[kk + 227] = q_qube2_swingup_DW.state_m[kk] ^
            y;
        }

        y = (q_qube2_swingup_DW.state_m[623] & 2147483648U) |
          (q_qube2_swingup_DW.state_m[0] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        q_qube2_swingup_DW.state_m[623] = q_qube2_swingup_DW.state_m[396] ^ y;
        mti = 1U;
      }

      y = q_qube2_swingup_DW.state_m[(int32_T)mti - 1];
      q_qube2_swingup_DW.state_m[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      u[k] = y >> 18U ^ y;
    }

    r = ((real_T)(u[0] >> 5U) * 6.7108864E+7 + (real_T)(u[1] >> 6U)) *
      1.1102230246251565E-16;
    if (r == 0.0) {
      if ((q_qube2_swingup_DW.state_m[624] >= 1U) &&
          (q_qube2_swingup_DW.state_m[624] < 625U)) {
        b_isvalid = false;
        k = 1;
        exitg2 = false;
        while ((!exitg2) && (k < 625)) {
          if (q_qube2_swingup_DW.state_m[k - 1] == 0U) {
            k++;
          } else {
            b_isvalid = true;
            exitg2 = true;
          }
        }
      } else {
        b_isvalid = false;
      }

      if (!b_isvalid) {
        mti = 5489U;
        q_qube2_swingup_DW.state_m[0] = 5489U;
        for (k = 0; k < 623; k++) {
          mti = ((mti >> 30U ^ mti) * 1812433253U + k) + 1U;
          q_qube2_swingup_DW.state_m[k + 1] = mti;
        }

        q_qube2_swingup_DW.state_m[624] = 624U;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T q_qube2_swingup_rand(void)
{
  real_T r;
  int32_T hi;
  uint32_T test1;
  uint32_T test2;
  if (q_qube2_swingup_DW.method == 4U) {
    hi = (int32_T)(q_qube2_swingup_DW.state / 127773U);
    test1 = (q_qube2_swingup_DW.state - hi * 127773U) * 16807U;
    test2 = 2836U * hi;
    if (test1 < test2) {
      test1 = ~(test2 - test1) & 2147483647U;
    } else {
      test1 -= test2;
    }

    q_qube2_swingup_DW.state = test1;
    r = (real_T)test1 * 4.6566128752457969E-10;
  } else if (q_qube2_swingup_DW.method == 5U) {
    test1 = 69069U * q_qube2_swingup_DW.state_n[0] + 1234567U;
    test2 = q_qube2_swingup_DW.state_n[1] << 13 ^ q_qube2_swingup_DW.state_n[1];
    test2 ^= test2 >> 17;
    test2 ^= test2 << 5;
    q_qube2_swingup_DW.state_n[0] = test1;
    q_qube2_swingup_DW.state_n[1] = test2;
    r = (real_T)(test1 + test2) * 2.328306436538696E-10;
  } else {
    r = q_q_eml_rand_mt19937ar_stateful();
  }

  return r;
}

/* Model output function */
void q_qube2_swingup_output(void)
{
  /* local block i/o variables */
  real_T rtb_HILReadEncoderTimebase_o1;
  real_T rtb_HILReadEncoderTimebase_o2;
  real_T Add_k;
  real_T discreteState;
  real_T discreteState_idx_0;
  real_T discreteState_idx_1;
  real_T discreteState_idx_2;
  real_T ex;
  real_T rtb_ForveCCW;
  int32_T i;
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
    /* S-Function (hil_read_encoder_timebase_block): '<S2>/HIL Read Encoder Timebase' */

    /* S-Function Block: q_qube2_swingup/Rotary Pendulum Interface/HIL Read Encoder Timebase (hil_read_encoder_timebase_block) */
    {
      t_error result;
      result = hil_task_read_encoder
        (q_qube2_swingup_DW.HILReadEncoderTimebase_Task, 1,
         &q_qube2_swingup_DW.HILReadEncoderTimebase_Buffer[0]);
      if (result < 0) {
        rtb_HILReadEncoderTimebase_o1 = 0;
        rtb_HILReadEncoderTimebase_o2 = 0;
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
      } else {
        rtb_HILReadEncoderTimebase_o1 =
          q_qube2_swingup_DW.HILReadEncoderTimebase_Buffer[0];
        rtb_HILReadEncoderTimebase_o2 =
          q_qube2_swingup_DW.HILReadEncoderTimebase_Buffer[1];
      }
    }

    /* Memory: '<Root>/Memory' */
    memcpy(&q_qube2_swingup_B.Memory[0],
           &q_qube2_swingup_DW.Memory_PreviousInput[0], 12288U * sizeof(real_T));

    /* Delay: '<Root>/Delay' */
    q_qube2_swingup_B.Delay = q_qube2_swingup_DW.Delay_DSTATE;

    /* Gain: '<Root>/Gain' */
    rtb_ForveCCW = 10.0 / q_qube2_swingup_P.tau_max * q_qube2_swingup_B.Delay;

    /* Saturate: '<Root>/+//-10V' */
    if (rtb_ForveCCW > q_qube2_swingup_P.u0V_UpperSat) {
      /* Saturate: '<Root>/+//-10V' */
      q_qube2_swingup_B.u0V = q_qube2_swingup_P.u0V_UpperSat;
    } else if (rtb_ForveCCW < q_qube2_swingup_P.u0V_LowerSat) {
      /* Saturate: '<Root>/+//-10V' */
      q_qube2_swingup_B.u0V = q_qube2_swingup_P.u0V_LowerSat;
    } else {
      /* Saturate: '<Root>/+//-10V' */
      q_qube2_swingup_B.u0V = rtb_ForveCCW;
    }

    /* End of Saturate: '<Root>/+//-10V' */
    /* Gain: '<S4>/Arm: counts to rad' */
    q_qube2_swingup_B.Armcountstorad = q_qube2_swingup_P.Armcountstorad_Gain *
      rtb_HILReadEncoderTimebase_o1;
  }

  /* TransferFcn: '<S5>/theta_dot' */
  q_qube2_swingup_B.theta_dot = 0.0;
  q_qube2_swingup_B.theta_dot += q_qube2_swingup_P.theta_dot_C *
    q_qube2_swingup_X.theta_dot_CSTATE;
  q_qube2_swingup_B.theta_dot += q_qube2_swingup_P.theta_dot_D *
    q_qube2_swingup_B.Armcountstorad;

  /* RateTransition: '<S5>/Rate Transition' */
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* RateTransition: '<S5>/Rate Transition' */
    q_qube2_swingup_B.RateTransition = q_qube2_swingup_B.theta_dot;

    /* Gain: '<S4>/Pendulum:  counts to rad' */
    q_qube2_swingup_B.Pendulumcountstorad =
      q_qube2_swingup_P.Pendulumcountstorad_Gain * rtb_HILReadEncoderTimebase_o2;
  }

  /* End of RateTransition: '<S5>/Rate Transition' */

  /* TransferFcn: '<S5>/alpha_dot' */
  q_qube2_swingup_B.alpha_dot = 0.0;
  q_qube2_swingup_B.alpha_dot += q_qube2_swingup_P.alpha_dot_C *
    q_qube2_swingup_X.alpha_dot_CSTATE;
  q_qube2_swingup_B.alpha_dot += q_qube2_swingup_P.alpha_dot_D *
    q_qube2_swingup_B.Pendulumcountstorad;

  /* RateTransition: '<S5>/Rate Transition1' incorporates:
   *  Constant: '<Root>/Constant2'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  SignalConversion generated from: '<S1>/ SFunction '
   */
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* RateTransition: '<S5>/Rate Transition1' */
    q_qube2_swingup_B.RateTransition1 = q_qube2_swingup_B.alpha_dot;

    /* Bias: '<S3>/Bias3' */
    rtb_ForveCCW = q_qube2_swingup_B.Armcountstorad +
      q_qube2_swingup_P.Bias3_Bias;

    /* Bias: '<S3>/Bias2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  Math: '<S3>/Mod1'
     */
    q_qube2_swingup_B.Bias2 = rt_modd_snf(rtb_ForveCCW,
      q_qube2_swingup_P.Constant2_Value) + q_qube2_swingup_P.Bias2_Bias;

    /* Abs: '<S7>/Abs1' */
    rtb_ForveCCW = fabs(q_qube2_swingup_B.Bias2);

    /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
     *  Constant: '<S7>/Constant4'
     */
    rtb_RelationalOperator1 = (q_qube2_swingup_P.Constant4_Value >= rtb_ForveCCW);

    /* Math: '<S3>/Mod' incorporates:
     *  Constant: '<S3>/Constant'
     */
    rtb_ForveCCW = rt_modd_snf(q_qube2_swingup_B.Pendulumcountstorad,
      q_qube2_swingup_P.Constant_Value);

    /* Bias: '<S3>/Bias1' */
    q_qube2_swingup_B.Bias1 = rtb_ForveCCW + q_qube2_swingup_P.Bias1_Bias;

    /* Abs: '<S7>/Abs' */
    rtb_ForveCCW = fabs(q_qube2_swingup_B.Bias1);

    /* Gain: '<S7>/Gain6' incorporates:
     *  Constant: '<S7>/Constant3'
     *  Logic: '<S7>/AND'
     *  RelationalOperator: '<S7>/Relational Operator'
     */
    q_qube2_swingup_B.Gain6 = (uint8_T)(rtb_RelationalOperator1 &&
      (q_qube2_swingup_P.Constant3_Value >= rtb_ForveCCW) ? (int32_T)
      q_qube2_swingup_P.Gain6_Gain : 0);

    /* Sum: '<S6>/Add' incorporates:
     *  Gain: '<S6>/Gain'
     *  Gain: '<S6>/Gain1'
     *  Gain: '<S6>/Gain3'
     *  Gain: '<S6>/Gain4'
     *  Gain: '<S6>/Gain5'
     *  Math: '<S6>/Math Function'
     *  Math: '<S6>/Math Function1'
     *  Math: '<S6>/Math Function2'
     *  Math: '<S6>/Math Function3'
     *  Math: '<S6>/Math Function4'
     */
    q_qube2_swingup_B.Add = ((((0.0 - q_qube2_swingup_B.Bias1 *
      q_qube2_swingup_B.Bias1 * q_qube2_swingup_P.Gain4_Gain) -
      q_qube2_swingup_B.Bias2 * q_qube2_swingup_B.Bias2 *
      q_qube2_swingup_P.Gain_Gain) - q_qube2_swingup_B.RateTransition1 *
      q_qube2_swingup_B.RateTransition1 * q_qube2_swingup_P.Gain5_Gain) -
      q_qube2_swingup_B.RateTransition * q_qube2_swingup_B.RateTransition *
      q_qube2_swingup_P.Gain3_Gain) - q_qube2_swingup_B.Delay *
      q_qube2_swingup_B.Delay * q_qube2_swingup_P.Gain1_Gain;

    /* Sum: '<S3>/Add' incorporates:
     *  Gain: '<S7>/Gain6'
     */
    Add_k = (real_T)q_qube2_swingup_B.Gain6 * 2.0 + q_qube2_swingup_B.Add;

    /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
     *  Memory: '<Root>/Memory'
     */
    memcpy(&q_qube2_swingup_B.Q[0], &q_qube2_swingup_B.Memory[0], 12288U *
           sizeof(real_T));
    discreteState_idx_0 = fmax(fmin(floor((q_qube2_swingup_B.Armcountstorad -
      -3.1415926535897931) / (6.2831853071795862 / q_qube2_swingup_P.buckets)) +
      1.0, q_qube2_swingup_P.buckets), 1.0);
    discreteState_idx_1 = fmax(fmin(floor((q_qube2_swingup_B.RateTransition -
      -50.0) / (100.0 / q_qube2_swingup_P.buckets)) + 1.0,
      q_qube2_swingup_P.buckets), 1.0);
    discreteState_idx_2 = fmax(fmin(floor((q_qube2_swingup_B.Pendulumcountstorad
      - 3.1415926535897931) / (0.0 / q_qube2_swingup_P.buckets)) + 1.0,
      q_qube2_swingup_P.buckets), 1.0);

    /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Constant2'
     *  Memory: '<Root>/Memory1'
     *  Memory: '<Root>/Memory2'
     *  Memory: '<Root>/Memory3'
     *  SignalConversion generated from: '<S1>/ SFunction '
     */
    discreteState = fmax(fmin(floor((q_qube2_swingup_B.RateTransition1 - -50.0) /
      (100.0 / q_qube2_swingup_P.buckets)) + 1.0, q_qube2_swingup_P.buckets),
                         1.0);
    if ((q_qube2_swingup_B.Armcountstorad > 2.0420352248333655) &&
        (q_qube2_swingup_B.RateTransition > -5.0)) {
      rtb_ForveCCW = 1.0;
      ex = q_qube2_swingup_B.Q[((((((int32_T)discreteState_idx_1 - 1) << 3) +
        (int32_T)discreteState_idx_0) + (((int32_T)discreteState_idx_2 - 1) << 6))
        + (((int32_T)discreteState - 1) << 9)) - 1];
    } else if ((q_qube2_swingup_B.Armcountstorad < -2.0420352248333655) &&
               (q_qube2_swingup_B.RateTransition < 5.0)) {
      rtb_ForveCCW = 3.0;
      ex = q_qube2_swingup_B.Q[((((((int32_T)discreteState_idx_1 - 1) << 3) +
        (int32_T)discreteState_idx_0) + (((int32_T)discreteState_idx_2 - 1) << 6))
        + (((int32_T)discreteState - 1) << 9)) + 8191];
    } else if (q_qube2_swingup_rand() > 0.0) {
      i = -1;
      ex = q_qube2_swingup_B.Q[((((((int32_T)discreteState_idx_1 - 1) << 3) +
        (int32_T)discreteState_idx_0) + (((int32_T)discreteState_idx_2 - 1) << 6))
        + (((int32_T)discreteState - 1) << 9)) - 1];
      rtb_ForveCCW = q_qube2_swingup_B.Q[((((((int32_T)discreteState_idx_1 - 1) <<
        3) + (int32_T)discreteState_idx_0) + (((int32_T)discreteState_idx_2 - 1)
        << 6)) + (((int32_T)discreteState - 1) << 9)) + 4095];
      if (rtIsNaN(rtb_ForveCCW)) {
        rtb_RelationalOperator1 = false;
      } else if (rtIsNaN(ex)) {
        rtb_RelationalOperator1 = true;
      } else {
        rtb_RelationalOperator1 = (ex < rtb_ForveCCW);
      }

      if (rtb_RelationalOperator1) {
        ex = rtb_ForveCCW;
        i = 0;
      }

      rtb_ForveCCW = q_qube2_swingup_B.Q[((((((int32_T)discreteState_idx_1 - 1) <<
        3) + (int32_T)discreteState_idx_0) + (((int32_T)discreteState_idx_2 - 1)
        << 6)) + (((int32_T)discreteState - 1) << 9)) + 8191];
      if (rtIsNaN(rtb_ForveCCW)) {
        rtb_RelationalOperator1 = false;
      } else if (rtIsNaN(ex)) {
        rtb_RelationalOperator1 = true;
      } else {
        rtb_RelationalOperator1 = (ex < rtb_ForveCCW);
      }

      if (rtb_RelationalOperator1) {
        ex = rtb_ForveCCW;
        i = 1;
      }

      rtb_ForveCCW = (real_T)i + 2.0;
    } else {
      rtb_ForveCCW = q_qube2_swingup_rand();
      rtb_ForveCCW = floor(rtb_ForveCCW * 3.0) + 1.0;
      ex = q_qube2_swingup_B.Q[(((((((int32_T)discreteState_idx_1 - 1) << 3) +
        (int32_T)discreteState_idx_0) + (((int32_T)discreteState_idx_2 - 1) << 6))
        + (((int32_T)discreteState - 1) << 9)) + (((int32_T)rtb_ForveCCW - 1) <<
        12)) - 1];
    }

    q_qube2_swingup_B.Q[(((((int32_T)fmax(fmin
      (q_qube2_swingup_DW.Memory2_PreviousInput[0], q_qube2_swingup_P.buckets),
      1.0) + (((int32_T)fmax(fmin(q_qube2_swingup_DW.Memory2_PreviousInput[1],
      q_qube2_swingup_P.buckets), 1.0) - 1) << 3)) + (((int32_T)fmax(fmin
      (q_qube2_swingup_DW.Memory2_PreviousInput[2], q_qube2_swingup_P.buckets),
      1.0) - 1) << 6)) + (((int32_T)fmax(fmin
      (q_qube2_swingup_DW.Memory2_PreviousInput[3], q_qube2_swingup_P.buckets),
      1.0) - 1) << 9)) + (((int32_T)q_qube2_swingup_DW.Memory1_PreviousInput - 1)
                          << 12)) - 1] = (0.99 * ex + Add_k) * 0.0 +
      q_qube2_swingup_DW.Memory3_PreviousInput;
    q_qube2_swingup_B.maxIndex = rtb_ForveCCW;
    q_qube2_swingup_B.maxQ = ex;
    q_qube2_swingup_B.discreteState[0] = discreteState_idx_0;
    q_qube2_swingup_B.discreteState[1] = discreteState_idx_1;
    q_qube2_swingup_B.discreteState[2] = discreteState_idx_2;
    q_qube2_swingup_B.discreteState[3] = discreteState;
    q_qube2_swingup_B.action = (rtb_ForveCCW - 2.0) * q_qube2_swingup_P.actInfo
      [2];

    /* Gain: '<S2>/For +ve CCW' */
    rtb_ForveCCW = q_qube2_swingup_P.ForveCCW_Gain * q_qube2_swingup_B.u0V;

    /* S-Function (hil_write_analog_block): '<S2>/HIL Write Analog' */

    /* S-Function Block: q_qube2_swingup/Rotary Pendulum Interface/HIL Write Analog (hil_write_analog_block) */
    {
      t_error result;
      result = hil_write_analog(q_qube2_swingup_DW.HILInitialize_Card,
        &q_qube2_swingup_P.HILWriteAnalog_channels, 1, &rtb_ForveCCW);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_qube2_swingup_M, _rt_error_message);
      }
    }

    /* S-Function (sdspcumsumprod): '<S3>/Cumulative Sum' */
    rtb_ForveCCW = q_qube2_swingup_DW.CumulativeSum_RunningCumVal;
    rtb_ForveCCW += Add_k;

    /* S-Function (sdspcumsumprod): '<S3>/Cumulative Sum' */
    q_qube2_swingup_B.CumulativeSum = rtb_ForveCCW;

    /* S-Function (sdspcumsumprod): '<S3>/Cumulative Sum' */
    q_qube2_swingup_DW.CumulativeSum_RunningCumVal = rtb_ForveCCW;
  }

  /* End of RateTransition: '<S5>/Rate Transition1' */
}

/* Model update function */
void q_qube2_swingup_update(void)
{
  if (rtmIsMajorTimeStep(q_qube2_swingup_M)) {
    /* Update for Memory: '<Root>/Memory' */
    memcpy(&q_qube2_swingup_DW.Memory_PreviousInput[0], &q_qube2_swingup_B.Q[0],
           12288U * sizeof(real_T));

    /* Update for Delay: '<Root>/Delay' */
    q_qube2_swingup_DW.Delay_DSTATE = q_qube2_swingup_B.action;

    /* Update for Memory: '<Root>/Memory2' */
    q_qube2_swingup_DW.Memory2_PreviousInput[0] =
      q_qube2_swingup_B.discreteState[0];
    q_qube2_swingup_DW.Memory2_PreviousInput[1] =
      q_qube2_swingup_B.discreteState[1];
    q_qube2_swingup_DW.Memory2_PreviousInput[2] =
      q_qube2_swingup_B.discreteState[2];
    q_qube2_swingup_DW.Memory2_PreviousInput[3] =
      q_qube2_swingup_B.discreteState[3];

    /* Update for Memory: '<Root>/Memory3' */
    q_qube2_swingup_DW.Memory3_PreviousInput = q_qube2_swingup_B.maxQ;

    /* Update for Memory: '<Root>/Memory1' */
    q_qube2_swingup_DW.Memory1_PreviousInput = q_qube2_swingup_B.maxIndex;
  }

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
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
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

  /* Derivatives for TransferFcn: '<S5>/theta_dot' */
  _rtXdot->theta_dot_CSTATE = 0.0;
  _rtXdot->theta_dot_CSTATE += q_qube2_swingup_P.theta_dot_A *
    q_qube2_swingup_X.theta_dot_CSTATE;
  _rtXdot->theta_dot_CSTATE += q_qube2_swingup_B.Armcountstorad;

  /* Derivatives for TransferFcn: '<S5>/alpha_dot' */
  _rtXdot->alpha_dot_CSTATE = 0.0;
  _rtXdot->alpha_dot_CSTATE += q_qube2_swingup_P.alpha_dot_A *
    q_qube2_swingup_X.alpha_dot_CSTATE;
  _rtXdot->alpha_dot_CSTATE += q_qube2_swingup_B.Pendulumcountstorad;
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

  /* Start for S-Function (hil_read_encoder_timebase_block): '<S2>/HIL Read Encoder Timebase' */

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

  {
    static const uint32_T tmp[625] = { 5489U, 1301868182U, 2938499221U,
      2950281878U, 1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U,
      219885934U, 2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U,
      3418470598U, 951210697U, 3693558366U, 2923482051U, 1793174584U,
      2982310801U, 1586906132U, 1951078751U, 1808158765U, 1733897588U,
      431328322U, 4202539044U, 530658942U, 1714810322U, 3025256284U, 3342585396U,
      1937033938U, 2640572511U, 1654299090U, 3692403553U, 4233871309U,
      3497650794U, 862629010U, 2943236032U, 2426458545U, 1603307207U,
      1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U, 761573964U,
      3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U, 3295982469U,
      1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
      699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
      1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U,
      3570962471U, 4287636090U, 4087307012U, 3603343627U, 202242161U,
      2995682783U, 1620962684U, 3704723357U, 371613603U, 2814834333U,
      2111005706U, 624778151U, 2094172212U, 4284947003U, 1211977835U, 991917094U,
      1570449747U, 2962370480U, 1259410321U, 170182696U, 146300961U, 2836829791U,
      619452428U, 2723670296U, 1881399711U, 1161269684U, 1675188680U,
      4132175277U, 780088327U, 3409462821U, 1036518241U, 1834958505U,
      3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U, 1924681712U,
      3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
      3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U,
      2339662006U, 501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U,
      3393774360U, 1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U,
      819755096U, 2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U,
      1029741190U, 2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U,
      2701024045U, 4117700889U, 759495121U, 3332270341U, 2313004527U,
      2277067795U, 4131855432U, 2722057515U, 1264804546U, 3848622725U,
      2211267957U, 4100593547U, 959123777U, 2130745407U, 3194437393U, 486673947U,
      1377371204U, 17472727U, 352317554U, 3955548058U, 159652094U, 1232063192U,
      3835177280U, 49423123U, 3083993636U, 733092U, 2120519771U, 2573409834U,
      1112952433U, 3239502554U, 761045320U, 1087580692U, 2540165110U, 641058802U,
      1792435497U, 2261799288U, 1579184083U, 627146892U, 2165744623U,
      2200142389U, 2167590760U, 2381418376U, 1793358889U, 3081659520U,
      1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
      3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
      3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
      354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
      1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U,
      1684529556U, 1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U,
      171579916U, 3878728600U, 2475806724U, 2030324028U, 3331164912U,
      1708711359U, 1970023127U, 2859691344U, 2588476477U, 2748146879U,
      136111222U, 2967685492U, 909517429U, 2835297809U, 3206906216U, 3186870716U,
      341264097U, 2542035121U, 3353277068U, 548223577U, 3170936588U, 1678403446U,
      297435620U, 2337555430U, 466603495U, 1132321815U, 1208589219U, 696392160U,
      894244439U, 2562678859U, 470224582U, 3306867480U, 201364898U, 2075966438U,
      1767227936U, 2929737987U, 3674877796U, 2654196643U, 3692734598U,
      3528895099U, 2796780123U, 3048728353U, 842329300U, 191554730U, 2922459673U,
      3489020079U, 3979110629U, 1022523848U, 2202932467U, 3583655201U,
      3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U, 396426791U,
      3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
      3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
      2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U,
      1521001832U, 3605886097U, 2802786495U, 2728923319U, 3996284304U,
      903417639U, 1171249804U, 1020374987U, 2824535874U, 423621996U, 1988534473U,
      2493544470U, 1008604435U, 1756003503U, 1488867287U, 1386808992U,
      732088248U, 1780630732U, 2482101014U, 976561178U, 1543448953U, 2602866064U,
      2021139923U, 1952599828U, 2360242564U, 2117959962U, 2753061860U,
      2388623612U, 4138193781U, 2962920654U, 2284970429U, 766920861U,
      3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
      3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U,
      686850534U, 1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U,
      4195430425U, 607905174U, 3902331779U, 2454067926U, 1708133115U,
      1170874362U, 2008609376U, 3260320415U, 2211196135U, 433538229U,
      2728786374U, 2189520818U, 262554063U, 1182318347U, 3710237267U,
      1221022450U, 715966018U, 2417068910U, 2591870721U, 2870691989U,
      3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
      4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U,
      1123218514U, 551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U,
      422862282U, 3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U,
      1324564878U, 1928816105U, 1786535431U, 2878099422U, 3290185549U,
      539474248U, 1657512683U, 552370646U, 1671741683U, 3655312128U, 1552739510U,
      2605208763U, 1441755014U, 181878989U, 3124053868U, 1447103986U,
      3183906156U, 1728556020U, 3502241336U, 3055466967U, 1013272474U,
      818402132U, 1715099063U, 2900113506U, 397254517U, 4194863039U, 1009068739U,
      232864647U, 2540223708U, 2608288560U, 2415367765U, 478404847U, 3455100648U,
      3182600021U, 2115988978U, 434269567U, 4117179324U, 3461774077U, 887256537U,
      3545801025U, 286388911U, 3451742129U, 1981164769U, 786667016U, 3310123729U,
      3097811076U, 2224235657U, 2959658883U, 3370969234U, 2514770915U,
      3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
      4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U,
      1477814055U, 4043852216U, 1876372354U, 3133294443U, 3871104810U,
      3177020907U, 2074304428U, 3479393793U, 759562891U, 164128153U, 1839069216U,
      2114162633U, 3989947309U, 3611054956U, 1333547922U, 835429831U, 494987340U,
      171987910U, 1252001001U, 370809172U, 3508925425U, 2535703112U, 1276855041U,
      1922855120U, 835673414U, 3030664304U, 613287117U, 171219893U, 3423096126U,
      3376881639U, 2287770315U, 1658692645U, 1262815245U, 3957234326U,
      1168096164U, 2968737525U, 2655813712U, 2132313144U, 3976047964U,
      326516571U, 353088456U, 3679188938U, 3205649712U, 2654036126U, 1249024881U,
      880166166U, 691800469U, 2229503665U, 1673458056U, 4032208375U, 1851778863U,
      2563757330U, 376742205U, 1794655231U, 340247333U, 1505873033U, 396524441U,
      879666767U, 3335579166U, 3260764261U, 3335999539U, 506221798U, 4214658741U,
      975887814U, 2080536343U, 3360539560U, 571586418U, 138896374U, 4234352651U,
      2737620262U, 3928362291U, 1516365296U, 38056726U, 3599462320U, 3585007266U,
      3850961033U, 471667319U, 1536883193U, 2310166751U, 1861637689U,
      2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
      2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
      643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U,
      3285177704U, 1948416081U, 1311525291U, 1183517742U, 1739192232U,
      3979815115U, 2567840007U, 4116821529U, 213304419U, 4125718577U,
      1473064925U, 2442436592U, 1893310111U, 4195361916U, 3747569474U,
      828465101U, 2991227658U, 750582866U, 1205170309U, 1409813056U, 678418130U,
      1171531016U, 3821236156U, 354504587U, 4202874632U, 3882511497U,
      1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U, 3725758099U,
      831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U, 3358210805U,
      4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U, 190157081U,
      3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
      2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
      453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U,
      3541393095U, 4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U,
      1795580598U, 2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U,
      705213300U, 363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U,
      2199989172U, 1987356470U, 4026755612U, 2147252133U, 270400031U,
      1367820199U, 2369854699U, 2844269403U, 79981964U, 624U };

    /* InitializeConditions for Memory: '<Root>/Memory' */
    memcpy(&q_qube2_swingup_DW.Memory_PreviousInput[0],
           &q_qube2_swingup_P.Q_init[0], 12288U * sizeof(real_T));

    /* InitializeConditions for Delay: '<Root>/Delay' */
    q_qube2_swingup_DW.Delay_DSTATE = q_qube2_swingup_P.Delay_InitialCondition;

    /* InitializeConditions for TransferFcn: '<S5>/theta_dot' */
    q_qube2_swingup_X.theta_dot_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S5>/alpha_dot' */
    q_qube2_swingup_X.alpha_dot_CSTATE = 0.0;

    /* InitializeConditions for Memory: '<Root>/Memory2' */
    q_qube2_swingup_DW.Memory2_PreviousInput[0] =
      q_qube2_swingup_P.Memory2_InitialCondition[0];
    q_qube2_swingup_DW.Memory2_PreviousInput[1] =
      q_qube2_swingup_P.Memory2_InitialCondition[1];
    q_qube2_swingup_DW.Memory2_PreviousInput[2] =
      q_qube2_swingup_P.Memory2_InitialCondition[2];
    q_qube2_swingup_DW.Memory2_PreviousInput[3] =
      q_qube2_swingup_P.Memory2_InitialCondition[3];

    /* InitializeConditions for Memory: '<Root>/Memory3' */
    q_qube2_swingup_DW.Memory3_PreviousInput =
      q_qube2_swingup_P.Memory3_InitialCondition;

    /* InitializeConditions for Memory: '<Root>/Memory1' */
    q_qube2_swingup_DW.Memory1_PreviousInput =
      q_qube2_swingup_P.Memory1_InitialCondition;

    /* InitializeConditions for S-Function (sdspcumsumprod): '<S3>/Cumulative Sum' */
    q_qube2_swingup_DW.CumulativeSum_RunningCumVal = 0.0;

    /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
    memcpy(&q_qube2_swingup_DW.state_m[0], &tmp[0], 625U * sizeof(uint32_T));
    q_qube2_swingup_DW.method = 7U;
    q_qube2_swingup_DW.state = 1144108930U;
    q_qube2_swingup_DW.state_n[0] = 362436069U;
    q_qube2_swingup_DW.state_n[1] = 521288629U;
  }
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
    q_qube2_swingup_M->Timing.sampleTimes[1] = (0.002);

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

  rtmSetTFinal(q_qube2_swingup_M, 10.0);
  q_qube2_swingup_M->Timing.stepSize0 = 0.002;
  q_qube2_swingup_M->Timing.stepSize1 = 0.002;

  /* External mode info */
  q_qube2_swingup_M->Sizes.checksums[0] = (23202989U);
  q_qube2_swingup_M->Sizes.checksums[1] = (2967210451U);
  q_qube2_swingup_M->Sizes.checksums[2] = (2684489686U);
  q_qube2_swingup_M->Sizes.checksums[3] = (2545215438U);

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
  q_qube2_swingup_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&q_qube2_swingup_M->solverInfo, 0.002);
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
  q_qube2_swingup_M->Sizes.numContStates = (2);/* Number of continuous states */
  q_qube2_swingup_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  q_qube2_swingup_M->Sizes.numY = (0); /* Number of model outputs */
  q_qube2_swingup_M->Sizes.numU = (0); /* Number of model inputs */
  q_qube2_swingup_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  q_qube2_swingup_M->Sizes.numSampTimes = (2);/* Number of sample times */
  q_qube2_swingup_M->Sizes.numBlocks = (64);/* Number of blocks */
  q_qube2_swingup_M->Sizes.numBlockIO = (24);/* Number of block outputs */
  q_qube2_swingup_M->Sizes.numBlockPrms = (12382);/* Sum of parameter "widths" */
  return q_qube2_swingup_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
