/*
 * q_qube2_swingup_private.h
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

#ifndef RTW_HEADER_q_qube2_swingup_private_h_
#define RTW_HEADER_q_qube2_swingup_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern real_T rt_modd_snf(real_T u0, real_T u1);

/* private model entry point functions */
extern void q_qube2_swingup_derivatives(void);

#endif                               /* RTW_HEADER_q_qube2_swingup_private_h_ */
