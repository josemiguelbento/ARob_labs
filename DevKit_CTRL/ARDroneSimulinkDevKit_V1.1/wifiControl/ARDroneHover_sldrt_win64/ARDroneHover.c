/*
 * ARDroneHover.c
 *
 * Code generation for model "ARDroneHover".
 *
 * Model version              : $Id: UAV_PIL.mdl 965 2013-03-21 01:08:53Z escobar $
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Jan 11 10:33:33 2023
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ARDroneHover.h"
#include "ARDroneHover_private.h"
#include "ARDroneHover_dt.h"

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  0.01, 0.0,
};

/* Block signals (default storage) */
B_ARDroneHover_T ARDroneHover_B;

/* Continuous states */
X_ARDroneHover_T ARDroneHover_X;

/* Block states (default storage) */
DW_ARDroneHover_T ARDroneHover_DW;

/* Real-time model */
static RT_MODEL_ARDroneHover_T ARDroneHover_M_;
RT_MODEL_ARDroneHover_T *const ARDroneHover_M = &ARDroneHover_M_;

/* Forward declaration for local functions */
static void ARDroneHover_decToBinScalar(uint8_T d, char_T s_data[], int32_T
  s_size[2]);
static void ARDroneHover_dec2hex(const uint8_T d[4], char_T s_data[], int32_T
  s_size[2]);
static void ARDroneHover_getString(real_T a, char_T strOut_data[], int32_T
  strOut_size[2]);
static int32_T ARDroneHover_float2IEEE754(real_T fVal);

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
  int_T nXc = 5;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  ARDroneHover_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for atomic system:
 *    '<S15>/Bit Concat'
 *    '<S15>/Bit Concat1'
 *    '<S15>/Bit Concat2'
 *    '<S15>/Bit Concat3'
 *    '<S15>/Bit Concat4'
 *    '<S15>/Bit Concat5'
 */
void ARDroneHover_BitConcat(uint8_T rtu_u1, uint8_T rtu_u2, uint8_T rtu_u3,
  uint8_T rtu_u4, B_BitConcat_ARDroneHover_T *localB)
{
  /* Outputs for Atomic SubSystem: '<S16>/bc2' */
  /* MATLAB Function: '<S29>/bit_concat' */
  /* MATLAB Function 'Bit Concat2/bit_concat': '<S32>:1' */
  /* '<S32>:1:4' */
  localB->y_c = (uint16_T)(rtu_u1 << 8 | rtu_u2);

  /* End of Outputs for SubSystem: '<S16>/bc2' */

  /* Outputs for Atomic SubSystem: '<S16>/bc3' */
  /* MATLAB Function: '<S30>/bit_concat' */
  /* MATLAB Function 'Bit Concat2/bit_concat': '<S33>:1' */
  /* '<S33>:1:4' */
  localB->y_l = (uint32_T)localB->y_c << 8 | rtu_u3;

  /* End of Outputs for SubSystem: '<S16>/bc3' */

  /* Outputs for Atomic SubSystem: '<S16>/bc4' */
  /* MATLAB Function: '<S31>/bit_concat' */
  /* MATLAB Function 'Bit Concat2/bit_concat': '<S34>:1' */
  /* '<S34>:1:4' */
  localB->y = localB->y_l << 8 | rtu_u4;

  /* End of Outputs for SubSystem: '<S16>/bc4' */
}

/*
 * System initialize for atomic system:
 *    '<S65>/MATLAB Function'
 *    '<S65>/MATLAB Function1'
 *    '<S65>/MATLAB Function2'
 */
void ARDroneHover_MATLABFunction_Init(DW_MATLABFunction_ARDroneHover_T *localDW)
{
  localDW->u_ = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S65>/MATLAB Function'
 *    '<S65>/MATLAB Function1'
 *    '<S65>/MATLAB Function2'
 */
void ARDroneHover_MATLABFunction(real_T rtu_u, B_MATLABFunction_ARDroneHover_T
  *localB, DW_MATLABFunction_ARDroneHover_T *localDW)
{
  real_T u;
  u = rtu_u;

  /* MATLAB Function 'Data to States/Compute the Derivative/MATLAB Function': '<S67>:1' */
  if (rtIsNaN(rtu_u)) {
    /* '<S67>:1:9' */
    /* '<S67>:1:10' */
    u = localDW->u_;
  } else {
    /* '<S67>:1:12' */
    localDW->u_ = rtu_u;
  }

  /* '<S67>:1:15' */
  localB->y = u;
}

/* Function for MATLAB Function: '<S1>/ARDrone data decoding' */
static void ARDroneHover_decToBinScalar(uint8_T d, char_T s_data[], int32_T
  s_size[2])
{
  int32_T idx;
  int32_T k;
  int32_T npad;
  char_T sfull[8];
  boolean_T exitg1;
  for (idx = 0; idx < 8; idx++) {
    sfull[idx] = '0';
    if ((1 << (7 - idx) & d) != 0) {
      sfull[idx] = '1';
    }
  }

  idx = 0;
  npad = 0;
  exitg1 = false;
  while ((!exitg1) && (npad < 8)) {
    if (sfull[npad] == '1') {
      idx = npad + 1;
      exitg1 = true;
    } else {
      npad++;
    }
  }

  if (idx == 0) {
    idx = 8;
  }

  if (4 >= 9 - idx) {
    s_size[0] = 1;
    s_size[1] = 4;
  } else {
    s_size[0] = 1;
    s_size[1] = 9 - idx;
  }

  if (9 - idx < 4) {
    npad = idx;
    for (k = 0; k <= idx - 6; k++) {
      s_data[k] = '0';
    }
  } else {
    npad = 5;
  }

  for (k = -1; k < 8 - idx; k++) {
    s_data[(npad + k) - 4] = sfull[idx + k];
  }
}

/* Function for MATLAB Function: '<S1>/ARDrone data decoding' */
static void ARDroneHover_dec2hex(const uint8_T d[4], char_T s_data[], int32_T
  s_size[2])
{
  int32_T smn_size[2];
  int32_T smx_size[2];
  int32_T b_npad;
  int32_T c_idx;
  int32_T i_k;
  int32_T k;
  int32_T nCompleteNibbles;
  int32_T npad;
  int32_T reqLen;
  int32_T u0;
  char_T b_data[32];
  char_T smn_data[8];
  char_T smx_data[8];
  char_T b_h;
  int8_T outsize_idx_1;
  uint8_T b_ex;
  uint8_T b_v;
  boolean_T exitg1;
  nCompleteNibbles = 0;
  b_v = d[0];
  if (b_v < d[1]) {
    b_v = d[1];
    nCompleteNibbles = 1;
  }

  if (b_v < d[2]) {
    b_v = d[2];
    nCompleteNibbles = 2;
  }

  if (b_v < d[3]) {
    b_v = d[3];
    nCompleteNibbles = 3;
  }

  k = 0;
  b_ex = d[0];
  if (b_ex > d[1]) {
    b_ex = d[1];
    k = 1;
  }

  if (b_ex > d[2]) {
    b_ex = d[2];
    k = 2;
  }

  if (b_ex > d[3]) {
    b_ex = d[3];
    k = 3;
  }

  ARDroneHover_decToBinScalar(b_v, smx_data, smx_size);
  if (nCompleteNibbles == k) {
    outsize_idx_1 = (int8_T)smx_size[1];
    u0 = outsize_idx_1;
    for (nCompleteNibbles = 0; nCompleteNibbles < smx_size[1]; nCompleteNibbles
         ++) {
      k = nCompleteNibbles << 2;
      b_data[k] = smx_data[nCompleteNibbles];
      b_data[k + 1] = smx_data[nCompleteNibbles];
      b_data[k + 2] = smx_data[nCompleteNibbles];
      b_data[k + 3] = smx_data[nCompleteNibbles];
    }
  } else {
    ARDroneHover_decToBinScalar(b_ex, smn_data, smn_size);
    u0 = smx_size[1];
    reqLen = smn_size[1];
    if (u0 > reqLen) {
      reqLen = u0;
    }

    u0 = (int8_T)reqLen;
    npad = (reqLen - smx_size[1]) - 1;
    for (c_idx = 0; c_idx <= npad; c_idx++) {
      b_data[nCompleteNibbles + (c_idx << 2)] = '0';
    }

    for (c_idx = 0; c_idx < smx_size[1]; c_idx++) {
      b_data[nCompleteNibbles + (((npad + c_idx) + 1) << 2)] = smx_data[c_idx];
    }

    npad = (reqLen - smn_size[1]) - 1;
    for (c_idx = 0; c_idx <= npad; c_idx++) {
      b_data[k + (c_idx << 2)] = '0';
    }

    for (c_idx = 0; c_idx < smn_size[1]; c_idx++) {
      b_data[k + (((npad + c_idx) + 1) << 2)] = smn_data[c_idx];
    }

    for (npad = 0; npad < 4; npad++) {
      if ((npad != k) && (npad != nCompleteNibbles)) {
        for (c_idx = 0; c_idx < 8; c_idx++) {
          smn_data[c_idx] = '0';
          if ((1 << (7 - c_idx) & d[npad]) != 0) {
            smn_data[c_idx] = '1';
          }
        }

        c_idx = 0;
        b_npad = 0;
        exitg1 = false;
        while ((!exitg1) && (b_npad < 8)) {
          if (smn_data[b_npad] == '1') {
            c_idx = b_npad + 1;
            exitg1 = true;
          } else {
            b_npad++;
          }
        }

        if (c_idx == 0) {
          c_idx = 8;
        }

        if (reqLen >= 9 - c_idx) {
          smx_size[1] = (int8_T)reqLen;
        } else {
          smx_size[1] = 9 - c_idx;
        }

        if (9 - c_idx < reqLen) {
          b_npad = (reqLen + c_idx) - 10;
          for (i_k = 0; i_k <= b_npad; i_k++) {
            smx_data[i_k] = '0';
          }
        } else {
          b_npad = -1;
        }

        for (i_k = -1; i_k < 8 - c_idx; i_k++) {
          smx_data[(b_npad + i_k) + 2] = smn_data[c_idx + i_k];
        }

        c_idx = smx_size[1];
        for (b_npad = 0; b_npad < c_idx; b_npad++) {
          b_data[npad + (b_npad << 2)] = smx_data[b_npad];
        }
      }
    }
  }

  nCompleteNibbles = u0 >> 2;
  reqLen = u0 - (nCompleteNibbles << 2);
  if (reqLen == 0) {
    s_size[0] = 4;
    s_size[1] = nCompleteNibbles;
    for (npad = 0; npad < nCompleteNibbles; npad++) {
      k = npad << 2;
      if (b_data[(k + 3) << 2] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[(k + 2) << 2] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[(k + 1) << 2] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      if (b_data[k << 2] == '1') {
        b_v = (uint8_T)(b_v + 8);
      }

      if (b_v > 9) {
        b_h = (int8_T)(b_v + 55);
      } else {
        b_h = (int8_T)(b_v + 48);
      }

      s_data[npad << 2] = b_h;
    }

    for (npad = 0; npad < nCompleteNibbles; npad++) {
      k = npad << 2;
      if (b_data[((k + 3) << 2) + 1] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[((k + 2) << 2) + 1] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[((k + 1) << 2) + 1] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      if (b_data[(k << 2) + 1] == '1') {
        b_v = (uint8_T)(b_v + 8);
      }

      if (b_v > 9) {
        b_h = (int8_T)(b_v + 55);
      } else {
        b_h = (int8_T)(b_v + 48);
      }

      s_data[(npad << 2) + 1] = b_h;
    }

    for (npad = 0; npad < nCompleteNibbles; npad++) {
      k = npad << 2;
      if (b_data[((k + 3) << 2) + 2] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[((k + 2) << 2) + 2] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[((k + 1) << 2) + 2] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      if (b_data[(k << 2) + 2] == '1') {
        b_v = (uint8_T)(b_v + 8);
      }

      if (b_v > 9) {
        b_h = (int8_T)(b_v + 55);
      } else {
        b_h = (int8_T)(b_v + 48);
      }

      s_data[(npad << 2) + 2] = b_h;
    }

    for (npad = 0; npad < nCompleteNibbles; npad++) {
      k = npad << 2;
      if (b_data[((k + 3) << 2) + 3] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[((k + 2) << 2) + 3] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[((k + 1) << 2) + 3] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      if (b_data[(k << 2) + 3] == '1') {
        b_v = (uint8_T)(b_v + 8);
      }

      if (b_v > 9) {
        b_h = (int8_T)(b_v + 55);
      } else {
        b_h = (int8_T)(b_v + 48);
      }

      s_data[(npad << 2) + 3] = b_h;
    }
  } else {
    s_size[0] = 4;
    s_size[1] = nCompleteNibbles + 1;
    if (reqLen == 1) {
      if (b_data[0] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      s_data[0] = (int8_T)(b_v + 48);
    } else if (reqLen == 2) {
      if (b_data[4] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[0] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      s_data[0] = (int8_T)(b_v + 48);
    } else {
      if (b_data[8] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[4] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[0] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      s_data[0] = (int8_T)(b_v + 48);
    }

    for (c_idx = 0; c_idx < nCompleteNibbles; c_idx++) {
      k = (c_idx << 2) + reqLen;
      if (b_data[(k + 3) << 2] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[(k + 2) << 2] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[(k + 1) << 2] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      if (b_data[k << 2] == '1') {
        b_v = (uint8_T)(b_v + 8);
      }

      if (b_v > 9) {
        b_h = (int8_T)(b_v + 55);
      } else {
        b_h = (int8_T)(b_v + 48);
      }

      s_data[(c_idx + 1) << 2] = b_h;
    }

    if (reqLen == 1) {
      if (b_data[1] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      s_data[1] = (int8_T)(b_v + 48);
    } else if (reqLen == 2) {
      if (b_data[5] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[1] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      s_data[1] = (int8_T)(b_v + 48);
    } else {
      if (b_data[9] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[5] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[1] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      s_data[1] = (int8_T)(b_v + 48);
    }

    for (c_idx = 0; c_idx < nCompleteNibbles; c_idx++) {
      k = (c_idx << 2) + reqLen;
      if (b_data[((k + 3) << 2) + 1] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[((k + 2) << 2) + 1] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[((k + 1) << 2) + 1] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      if (b_data[(k << 2) + 1] == '1') {
        b_v = (uint8_T)(b_v + 8);
      }

      if (b_v > 9) {
        b_h = (int8_T)(b_v + 55);
      } else {
        b_h = (int8_T)(b_v + 48);
      }

      s_data[((c_idx + 1) << 2) + 1] = b_h;
    }

    if (reqLen == 1) {
      if (b_data[2] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      s_data[2] = (int8_T)(b_v + 48);
    } else if (reqLen == 2) {
      if (b_data[6] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[2] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      s_data[2] = (int8_T)(b_v + 48);
    } else {
      if (b_data[10] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[6] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[2] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      s_data[2] = (int8_T)(b_v + 48);
    }

    for (c_idx = 0; c_idx < nCompleteNibbles; c_idx++) {
      k = (c_idx << 2) + reqLen;
      if (b_data[((k + 3) << 2) + 2] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[((k + 2) << 2) + 2] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[((k + 1) << 2) + 2] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      if (b_data[(k << 2) + 2] == '1') {
        b_v = (uint8_T)(b_v + 8);
      }

      if (b_v > 9) {
        b_h = (int8_T)(b_v + 55);
      } else {
        b_h = (int8_T)(b_v + 48);
      }

      s_data[((c_idx + 1) << 2) + 2] = b_h;
    }

    if (reqLen == 1) {
      if (b_data[3] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      s_data[3] = (int8_T)(b_v + 48);
    } else if (reqLen == 2) {
      if (b_data[7] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[3] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      s_data[3] = (int8_T)(b_v + 48);
    } else {
      if (b_data[11] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[7] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[3] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      s_data[3] = (int8_T)(b_v + 48);
    }

    for (c_idx = 0; c_idx < nCompleteNibbles; c_idx++) {
      k = (c_idx << 2) + reqLen;
      if (b_data[((k + 3) << 2) + 3] == '1') {
        b_v = 1U;
      } else {
        b_v = 0U;
      }

      if (b_data[((k + 2) << 2) + 3] == '1') {
        b_v = (uint8_T)(b_v + 2);
      }

      if (b_data[((k + 1) << 2) + 3] == '1') {
        b_v = (uint8_T)(b_v + 4);
      }

      if (b_data[(k << 2) + 3] == '1') {
        b_v = (uint8_T)(b_v + 8);
      }

      if (b_v > 9) {
        b_h = (int8_T)(b_v + 55);
      } else {
        b_h = (int8_T)(b_v + 48);
      }

      s_data[((c_idx + 1) << 2) + 3] = b_h;
    }
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T tmp;
  int32_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u1 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp_0, tmp);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T tmp;
  real_T tmp_0;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S11>/Drone state request' */
static void ARDroneHover_getString(real_T a, char_T strOut_data[], int32_T
  strOut_size[2])
{
  real_T r;
  int32_T d;
  int32_T loop_ub;
  uint8_T digit_data[11];

  /* '<S13>:1:138' */
  d = 1;
  if ((a >= 10.0) && (a < 100.0)) {
    /* '<S13>:1:144' */
    /* '<S13>:1:145' */
    d = 2;
  }

  if ((a >= 100.0) && (a < 1000.0)) {
    /* '<S13>:1:148' */
    /* '<S13>:1:149' */
    d = 3;
  }

  if ((a >= 1000.0) && (a < 10000.0)) {
    /* '<S13>:1:152' */
    /* '<S13>:1:153' */
    d = 4;
  }

  if ((a >= 10000.0) && (a < 100000.0)) {
    /* '<S13>:1:156' */
    /* '<S13>:1:157' */
    d = 5;
  }

  if ((a >= 100000.0) && (a < 1.0E+6)) {
    /* '<S13>:1:160' */
    /* '<S13>:1:161' */
    d = 6;
  }

  if ((a >= 1.0E+6) && (a < 1.0E+7)) {
    /* '<S13>:1:164' */
    /* '<S13>:1:165' */
    d = 7;
  }

  if ((a >= 1.0E+7) && (a < 1.0E+8)) {
    /* '<S13>:1:168' */
    /* '<S13>:1:169' */
    d = 8;
  }

  if ((a >= 1.0E+8) && (a < 1.0E+9)) {
    /* '<S13>:1:172' */
    /* '<S13>:1:173' */
    d = 9;
  }

  if ((a >= 1.0E+9) && (a < 1.0E+10)) {
    /* '<S13>:1:176' */
    /* '<S13>:1:177' */
    d = 10;
  }

  if (a >= 1.0E+10) {
    /* '<S13>:1:180' */
    /* '<S13>:1:181' */
    d = 11;
  }

  /* '<S13>:1:186' */
  loop_ub = d - 1;
  if (0 <= loop_ub) {
    memset(&digit_data[0], 0, (loop_ub + 1) * sizeof(uint8_T));
  }

  /* '<S13>:1:189' */
  for (loop_ub = 0; loop_ub < d; loop_ub++) {
    /* '<S13>:1:189' */
    /* '<S13>:1:191' */
    if (rtIsInf(a)) {
      r = (rtNaN);
    } else if (a == 0.0) {
      r = 0.0;
    } else {
      r = fmod(a, rt_powd_snf(10.0, (real_T)loop_ub + 1.0));
      if (r == 0.0) {
        r = 0.0;
      }
    }

    /* '<S13>:1:194' */
    r = r / rt_powd_snf(10.0, ((real_T)loop_ub + 1.0) - 1.0) + 48.0;
    if (r < 0.0) {
      r = ceil(r);
    } else {
      r = floor(r);
    }

    if (rtIsNaN(r)) {
      r = 0.0;
    } else {
      r = fmod(r, 256.0);
    }

    digit_data[(d - loop_ub) - 1] = (uint8_T)(r < 0.0 ? (int32_T)(int8_T)
      -(int8_T)(uint8_T)-r : (int32_T)(int8_T)(uint8_T)r);
  }

  /* '<S13>:1:199' */
  strOut_size[0] = 1;
  strOut_size[1] = d;
  loop_ub = d - 1;
  for (d = 0; d <= loop_ub; d++) {
    strOut_data[d] = (int8_T)digit_data[d];
  }
}

/* Function for MATLAB Function: '<S11>/Drone state request' */
static int32_T ARDroneHover_float2IEEE754(real_T fVal)
{
  real_T b_iVal;
  int32_T b_k;
  int32_T c_k;
  int32_T iVal;
  int32_T idx;
  int32_T npad;
  real32_T x;
  char_T binData[32];
  char_T binData2[32];
  char_T s[8];
  char_T sfull[8];
  uint8_T y[4];
  boolean_T exitg1;

  /* '<S13>:1:209' */
  /* '<S13>:1:207' */
  x = (real32_T)fVal;
  memcpy((void *)&y[0], (void *)&x, (uint32_T)((size_t)4 * sizeof(uint8_T)));
  for (b_k = 0; b_k < 4; b_k++) {
    for (idx = 0; idx < 8; idx++) {
      sfull[idx] = '0';
      if ((1 << (7 - idx) & y[b_k]) != 0) {
        sfull[idx] = '1';
      }
    }

    idx = 0;
    npad = 0;
    exitg1 = false;
    while ((!exitg1) && (npad < 8)) {
      if (sfull[npad] == '1') {
        idx = npad + 1;
        exitg1 = true;
      } else {
        npad++;
      }
    }

    if (idx == 0) {
      idx = 8;
    }

    if (9 - idx < 8) {
      npad = idx;
      for (c_k = 0; c_k <= idx - 2; c_k++) {
        s[c_k] = '0';
      }
    } else {
      npad = 1;
    }

    for (c_k = -1; c_k < 8 - idx; c_k++) {
      s[npad + c_k] = sfull[idx + c_k];
    }

    for (idx = 0; idx < 8; idx++) {
      binData[b_k + (idx << 2)] = s[idx];
    }
  }

  /* '<S13>:1:209' */
  for (idx = 0; idx < 8; idx++) {
    binData2[idx] = binData[(idx << 2) + 3];
    binData2[idx + 8] = binData[(idx << 2) + 2];
    binData2[idx + 16] = binData[(idx << 2) + 1];
    binData2[idx + 24] = binData[idx << 2];
  }

  /* '<S13>:1:210' */
  b_iVal = 0.0;

  /* '<S13>:1:211' */
  for (b_k = 0; b_k < 32; b_k++) {
    /* '<S13>:1:211' */
    if (binData2[31 - b_k] == '1') {
      /* '<S13>:1:213' */
      /* '<S13>:1:214' */
      idx = 1;
    } else {
      /* '<S13>:1:216' */
      idx = 0;
    }

    if (32 - b_k == 1) {
      /* '<S13>:1:219' */
      /* '<S13>:1:220' */
      b_iVal -= (real_T)idx * 2.147483648E+9;
    } else {
      /* '<S13>:1:222' */
      b_iVal += rt_powd_snf(2.0, 32.0 - (-(real_T)b_k + 32.0)) * (real_T)idx;
    }
  }

  /* '<S13>:1:227' */
  if (b_iVal < 2.147483648E+9) {
    if (b_iVal >= -2.147483648E+9) {
      iVal = (int32_T)b_iVal;
    } else {
      iVal = MIN_int32_T;
    }
  } else {
    iVal = MAX_int32_T;
  }

  return iVal;
}

/* Model output function */
void ARDroneHover_output(void)
{
  static const real_T y[3] = { 0.0, 0.0, 9.81 };

  static const char_T d[30] = { ',', '\"', 'g', 'e', 'n', 'e', 'r', 'a', 'l',
    ':', 'n', 'a', 'v', 'd', 'a', 't', 'a', '_', 'd', 'e', 'm', 'o', '\"', ',',
    '\"', 'T', 'R', 'U', 'E', '\"' };

  static const char_T h[30] = { '\"', 'c', 'o', 'n', 'r', 'o', 'l', ':', 'a',
    'l', 't', 'i', 't', 'u', 'd', 'e', '_', 'm', 'a', 'x', '\"', ',', '\"', '1',
    '0', '0', '0', '0', '0', '\"' };

  static const char_T c[10] = { 'A', 'T', '*', 'C', 'O', 'N', 'F', 'I', 'G', '='
  };

  static const char_T e[10] = { 'A', 'T', '*', 'C', 'O', 'M', 'W', 'D', 'G', '='
  };

  static const char_T g[10] = { ',', '2', '9', '0', '7', '1', '7', '9', '5', '2'
  };

  static const char_T j[10] = { ',', '2', '9', '0', '7', '1', '8', '2', '0', '8'
  };

  static const char_T k[10] = { ',', '2', '9', '0', '7', '1', '7', '6', '9', '6'
  };

  static const char_T i_0[9] = { 'A', 'T', '*', 'F', 'T', 'R', 'I', 'M', '=' };

  static const char_T l[8] = { 'A', 'T', '*', 'P', 'C', 'M', 'D', '=' };

  static const char_T f[7] = { 'A', 'T', '*', 'R', 'E', 'F', '=' };

  static const int8_T a[18] = { 1, 0, 0, 0, 1, 0, 0, 0, 1, 2, 0, 0, 0, 2, 0, 0,
    0, 2 };

  real_T tmp_k[9];
  real_T x_e[6];
  real_T dot_p[3];
  real_T p[3];
  real_T bytesLeft;
  real_T bytesToRead;
  real_T enableRefs;
  real_T isFlying;
  real_T psi_e;
  real_T r;
  real_T stop;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;
  real_T tmp_5;
  real_T tmp_6;
  real_T tmp_7;
  real_T tmp_8;
  real_T tmp_9;
  real_T tmp_a;
  real_T tmp_b;
  real_T tmp_c;
  real_T tmp_d;
  real_T tmp_e;
  real_T tmp_f;
  real_T tmp_g;
  real_T tmp_h;
  real_T tmp_i;
  real_T tmp_j;
  real_T tmp_l;
  real_T tmp_m;
  int32_T hex_size[2];
  int32_T aux;
  int32_T b_hex_size_idx_1;
  int32_T cmd_size_idx_1;
  int32_T i;
  int32_T loop_ub;
  int32_T m;
  int32_T samplesRead;
  real32_T b_x;
  real32_T c_x;
  real32_T d_x;
  real32_T e_x;
  real32_T f_x;
  real32_T x;
  uint32_T battery;
  uint32_T pitch;
  uint32_T res;
  uint32_T roll;
  uint32_T yaw;
  char_T cmd_data[148];
  char_T b_hex_data[12];
  char_T hex_data[12];
  char_T strCmd_data[11];
  char_T *sErr;
  uint8_T tmp_data[1024];
  uint8_T data[496];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T rEQ0;
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* set solver stop time */
    if (!(ARDroneHover_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&ARDroneHover_M->solverInfo,
                            ((ARDroneHover_M->Timing.clockTickH0 + 1) *
        ARDroneHover_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&ARDroneHover_M->solverInfo,
                            ((ARDroneHover_M->Timing.clockTick0 + 1) *
        ARDroneHover_M->Timing.stepSize0 + ARDroneHover_M->Timing.clockTickH0 *
        ARDroneHover_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(ARDroneHover_M)) {
    ARDroneHover_M->Timing.t[0] = rtsiGetT(&ARDroneHover_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
    sErr = GetErrorBuffer(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U]);
    samplesRead = 500;
    LibOutputs_Network(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U],
                       &ARDroneHover_B.UDPReceive1_o1[0U], &samplesRead);
    if (*sErr != 0) {
      rtmSetErrorStatus(ARDroneHover_M, sErr);
      rtmSetStopRequested(ARDroneHover_M, 1);
    }

    /* S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
    ARDroneHover_B.UDPReceive1_o2 = (uint16_T)samplesRead;

    /* MATLAB Function: '<S1>/Data synchronization ' incorporates:
     *  S-Function (sdspFromNetwork): '<S1>/UDP Receive1'
     */
    /* MATLAB Function 'ARDrone Wi-Fi  Block/Data synchronization ': '<S10>:1' */
    /* '<S10>:1:52' */
    for (i = 0; i < 500; i++) {
      ARDroneHover_DW.buffer[(int32_T)(ARDroneHover_DW.countBuffer + ((real_T)i
        + 1.0)) - 1] = ARDroneHover_B.UDPReceive1_o1[i];
    }

    /* '<S10>:1:54' */
    bytesToRead = ARDroneHover_DW.countBuffer + 500.0;

    /* '<S10>:1:59' */
    aux = 0;
    exitg1 = false;
    while ((!exitg1) && (aux <= (int32_T)(ARDroneHover_DW.countBuffer + 500.0) -
                         1)) {
      /* '<S10>:1:59' */
      if ((ARDroneHover_DW.countHeader == 4.0) && (ARDroneHover_DW.count < 496.0))
      {
        /* '<S10>:1:60' */
        /* '<S10>:1:61' */
        bytesLeft = 496.0 - ARDroneHover_DW.count;
        psi_e = (((real_T)aux + 1.0) + (496.0 - ARDroneHover_DW.count)) - 1.0;
        if ((real_T)aux + 1.0 > psi_e) {
          m = 0;
          loop_ub = 0;
        } else {
          m = aux;
          loop_ub = (int32_T)psi_e;
        }

        /* '<S10>:1:62' */
        i = (int32_T)(ARDroneHover_DW.count + 1.0);
        loop_ub -= m;
        for (b_hex_size_idx_1 = 0; b_hex_size_idx_1 < loop_ub; b_hex_size_idx_1
             ++) {
          ARDroneHover_DW.frame[(i + b_hex_size_idx_1) - 1] =
            ARDroneHover_DW.buffer[m + b_hex_size_idx_1];
        }

        /* '<S10>:1:63' */
        ARDroneHover_DW.count = 496.0;

        /* '<S10>:1:64' */
        ARDroneHover_DW.countBuffer = (ARDroneHover_DW.countBuffer + 500.0) -
          bytesLeft;
        bytesLeft += (real_T)aux + 1.0;
        if (bytesLeft > bytesToRead) {
          aux = 0;
          m = 0;
        } else {
          aux = (int32_T)bytesLeft - 1;
          m = (int32_T)bytesToRead;
        }

        /* '<S10>:1:65' */
        samplesRead = m - aux;
        loop_ub = m - aux;
        for (i = 0; i < loop_ub; i++) {
          tmp_data[i] = ARDroneHover_DW.buffer[aux + i];
        }

        if (0 <= samplesRead - 1) {
          memcpy(&ARDroneHover_DW.buffer[0], &tmp_data[0], samplesRead * sizeof
                 (uint8_T));
        }

        exitg1 = true;
      } else if ((ARDroneHover_DW.countHeader == 3.0) &&
                 (ARDroneHover_DW.buffer[aux] == 85)) {
        /* '<S10>:1:70' */
        /* '<S10>:1:72' */
        ARDroneHover_DW.countHeader = 4.0;
        if ((ARDroneHover_DW.countBuffer + 500.0) - ((real_T)aux + 1.0) > 496.0)
        {
          /* '<S10>:1:74' */
          /* '<S10>:1:75' */
          ARDroneHover_DW.count = 496.0;

          /* '<S10>:1:76' */
          for (i = 0; i < 496; i++) {
            ARDroneHover_DW.frame[i] = ARDroneHover_DW.buffer[(i + aux) + 1];
          }

          /* '<S10>:1:77' */
          ARDroneHover_DW.countBuffer = ((ARDroneHover_DW.countBuffer + 500.0) -
            ((real_T)aux + 1.0)) - 496.0;
          if ((((real_T)aux + 1.0) + 496.0) + 1.0 > bytesToRead) {
            aux = -497;
            m = 0;
          } else {
            m = (int32_T)bytesToRead;
          }

          /* '<S10>:1:78' */
          i = aux + 497;
          samplesRead = m - i;
          loop_ub = m - i;
          for (b_hex_size_idx_1 = 0; b_hex_size_idx_1 < loop_ub;
               b_hex_size_idx_1++) {
            tmp_data[b_hex_size_idx_1] = ARDroneHover_DW.buffer[i +
              b_hex_size_idx_1];
          }

          if (0 <= samplesRead - 1) {
            memcpy(&ARDroneHover_DW.buffer[0], &tmp_data[0], samplesRead *
                   sizeof(uint8_T));
          }
        } else {
          /* '<S10>:1:81' */
          ARDroneHover_DW.count = (ARDroneHover_DW.countBuffer + 500.0) -
            ((real_T)aux + 1.0);
          if (ARDroneHover_DW.count > 0.0) {
            /* '<S10>:1:82' */
            if (((real_T)aux + 1.0) + 1.0 > ARDroneHover_DW.countBuffer + 500.0)
            {
              aux = -1;
              m = 0;
            } else {
              m = (int32_T)(ARDroneHover_DW.countBuffer + 500.0);
            }

            /* '<S10>:1:83' */
            loop_ub = m - aux;
            for (i = 0; i <= loop_ub - 2; i++) {
              ARDroneHover_DW.frame[i] = ARDroneHover_DW.buffer[(aux + i) + 1];
            }
          }

          /* '<S10>:1:85' */
          ARDroneHover_DW.countBuffer = 0.0;
        }

        exitg1 = true;
      } else {
        if ((ARDroneHover_DW.countHeader == 2.0) && (ARDroneHover_DW.buffer[aux]
             == 102)) {
          /* '<S10>:1:92' */
          /* '<S10>:1:93' */
          ARDroneHover_DW.countHeader = 3.0;
        }

        if ((ARDroneHover_DW.countHeader == 1.0) && (ARDroneHover_DW.buffer[aux]
             == 119)) {
          /* '<S10>:1:96' */
          /* '<S10>:1:97' */
          ARDroneHover_DW.countHeader = 2.0;
        }

        if ((ARDroneHover_DW.countHeader == 0.0) && (ARDroneHover_DW.buffer[aux]
             == 136)) {
          /* '<S10>:1:100' */
          /* '<S10>:1:101' */
          ARDroneHover_DW.countHeader = 1.0;
        }

        aux++;
      }
    }

    if (ARDroneHover_DW.count == 496.0) {
      /* '<S10>:1:106' */
      /* '<S10>:1:107' */
      memcpy(&ARDroneHover_DW.lastFrame[0], &ARDroneHover_DW.frame[0], 496U *
             sizeof(uint8_T));

      /* '<S10>:1:108' */
      aux = 1;

      /* '<S10>:1:109' */
      /* '<S10>:1:110' */
      memset(&ARDroneHover_DW.frame[0], 0, 496U * sizeof(uint8_T));

      /* '<S10>:1:111' */
      ARDroneHover_DW.count = 0.0;

      /* '<S10>:1:112' */
      ARDroneHover_DW.countHeader = 0.0;
    } else {
      /* '<S10>:1:115' */
      /* '<S10>:1:116' */
      aux = 0;
    }

    memcpy(&ARDroneHover_B.frameOut[0], &ARDroneHover_DW.lastFrame[0], 496U *
           sizeof(uint8_T));
    ARDroneHover_B.flagOut = aux;

    /* End of MATLAB Function: '<S1>/Data synchronization ' */

    /* MATLAB Function: '<S1>/ARDrone data decoding' */
    memcpy(&data[0], &ARDroneHover_B.frameOut[0], 496U * sizeof(uint8_T));

    /* MATLAB Function 'ARDrone Wi-Fi  Block/ARDrone data decoding': '<S9>:1' */
    /* '<S9>:1:23' */
    bytesToRead = ARDroneHover_B.frameOut[0];
    for (aux = 0; aux < 487; aux++) {
      bytesToRead += (real_T)ARDroneHover_B.frameOut[aux + 1];
    }

    /* '<S9>:1:25' */
    /* '<S9>:1:27' */
    bytesToRead = (bytesToRead + 442.0) - (real_T)((((ARDroneHover_B.frameOut
      [493] << 8) + ARDroneHover_B.frameOut[492]) + (ARDroneHover_B.frameOut[494]
      << 16)) + ((uint32_T)ARDroneHover_B.frameOut[495] << 24));
    if (ARDroneHover_B.frameOut[14] == 148) {
      /* '<S9>:1:30' */
      /* '<S9>:1:31' */
      memcpy(&ARDroneHover_DW.dataPrev[0], &ARDroneHover_B.frameOut[0], 496U *
             sizeof(uint8_T));
    } else {
      /* '<S9>:1:33' */
      memcpy(&data[0], &ARDroneHover_DW.dataPrev[0], 496U * sizeof(uint8_T));
    }

    /* '<S9>:1:37' */
    /* '<S9>:1:75' */
    for (i = 0; i < 32; i++) {
      ARDroneHover_B.status[i] = 0.0;
    }

    /* '<S9>:1:76' */
    ARDroneHover_dec2hex(&data[0], hex_data, hex_size);

    /* '<S9>:1:78' */
    loop_ub = hex_size[1];
    aux = hex_size[1];
    m = hex_size[1];
    samplesRead = hex_size[1];
    b_hex_size_idx_1 = ((loop_ub + aux) + m) + samplesRead;
    for (i = 0; i < loop_ub; i++) {
      b_hex_data[i] = hex_data[(i << 2) + 3];
    }

    for (i = 0; i < aux; i++) {
      b_hex_data[i + loop_ub] = hex_data[(i << 2) + 2];
    }

    for (i = 0; i < m; i++) {
      b_hex_data[(i + loop_ub) + aux] = hex_data[(i << 2) + 1];
    }

    for (i = 0; i < samplesRead; i++) {
      b_hex_data[((i + loop_ub) + aux) + m] = hex_data[i << 2];
    }

    /* '<S9>:1:79' */
    for (m = 0; m < b_hex_size_idx_1; m++) {
      /* '<S9>:1:79' */
      if (b_hex_data[m] == 'F') {
        /* '<S9>:1:80' */
        /* '<S9>:1:81' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 1.0;
        ARDroneHover_B.status[i + 1] = 1.0;
        ARDroneHover_B.status[i + 2] = 1.0;
        ARDroneHover_B.status[i + 3] = 1.0;
      } else if (b_hex_data[m] == 'E') {
        /* '<S9>:1:82' */
        /* '<S9>:1:83' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 1.0;
        ARDroneHover_B.status[i + 1] = 1.0;
        ARDroneHover_B.status[i + 2] = 1.0;
        ARDroneHover_B.status[i + 3] = 0.0;
      } else if (b_hex_data[m] == 'D') {
        /* '<S9>:1:84' */
        /* '<S9>:1:85' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 1.0;
        ARDroneHover_B.status[i + 1] = 1.0;
        ARDroneHover_B.status[i + 2] = 0.0;
        ARDroneHover_B.status[i + 3] = 1.0;
      } else if (b_hex_data[m] == 'C') {
        /* '<S9>:1:86' */
        /* '<S9>:1:87' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 1.0;
        ARDroneHover_B.status[i + 1] = 1.0;
        ARDroneHover_B.status[i + 2] = 0.0;
        ARDroneHover_B.status[i + 3] = 0.0;
      } else if (b_hex_data[m] == 'B') {
        /* '<S9>:1:88' */
        /* '<S9>:1:89' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 1.0;
        ARDroneHover_B.status[i + 1] = 0.0;
        ARDroneHover_B.status[i + 2] = 1.0;
        ARDroneHover_B.status[i + 3] = 1.0;
      } else if (b_hex_data[m] == 'A') {
        /* '<S9>:1:90' */
        /* '<S9>:1:91' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 1.0;
        ARDroneHover_B.status[i + 1] = 0.0;
        ARDroneHover_B.status[i + 2] = 1.0;
        ARDroneHover_B.status[i + 3] = 0.0;
      } else if (b_hex_data[m] == '9') {
        /* '<S9>:1:92' */
        /* '<S9>:1:93' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 1.0;
        ARDroneHover_B.status[i + 1] = 0.0;
        ARDroneHover_B.status[i + 2] = 0.0;
        ARDroneHover_B.status[i + 3] = 1.0;
      } else if (b_hex_data[m] == '8') {
        /* '<S9>:1:94' */
        /* '<S9>:1:95' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 1.0;
        ARDroneHover_B.status[i + 1] = 0.0;
        ARDroneHover_B.status[i + 2] = 0.0;
        ARDroneHover_B.status[i + 3] = 0.0;
      } else if (b_hex_data[m] == '7') {
        /* '<S9>:1:96' */
        /* '<S9>:1:97' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 0.0;
        ARDroneHover_B.status[i + 1] = 1.0;
        ARDroneHover_B.status[i + 2] = 1.0;
        ARDroneHover_B.status[i + 3] = 1.0;
      } else if (b_hex_data[m] == '6') {
        /* '<S9>:1:98' */
        /* '<S9>:1:99' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 0.0;
        ARDroneHover_B.status[i + 1] = 1.0;
        ARDroneHover_B.status[i + 2] = 1.0;
        ARDroneHover_B.status[i + 3] = 0.0;
      } else if (b_hex_data[m] == '5') {
        /* '<S9>:1:100' */
        /* '<S9>:1:101' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 0.0;
        ARDroneHover_B.status[i + 1] = 1.0;
        ARDroneHover_B.status[i + 2] = 0.0;
        ARDroneHover_B.status[i + 3] = 1.0;
      } else if (b_hex_data[m] == '4') {
        /* '<S9>:1:102' */
        /* '<S9>:1:103' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 0.0;
        ARDroneHover_B.status[i + 1] = 1.0;
        ARDroneHover_B.status[i + 2] = 0.0;
        ARDroneHover_B.status[i + 3] = 0.0;
      } else if (b_hex_data[m] == '3') {
        /* '<S9>:1:104' */
        /* '<S9>:1:105' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 0.0;
        ARDroneHover_B.status[i + 1] = 0.0;
        ARDroneHover_B.status[i + 2] = 1.0;
        ARDroneHover_B.status[i + 3] = 1.0;
      } else if (b_hex_data[m] == '2') {
        /* '<S9>:1:106' */
        /* '<S9>:1:107' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 0.0;
        ARDroneHover_B.status[i + 1] = 0.0;
        ARDroneHover_B.status[i + 2] = 1.0;
        ARDroneHover_B.status[i + 3] = 0.0;
      } else if (b_hex_data[m] == '1') {
        /* '<S9>:1:108' */
        /* '<S9>:1:109' */
        i = ((m + 1) << 2) - 4;
        ARDroneHover_B.status[i] = 0.0;
        ARDroneHover_B.status[i + 1] = 0.0;
        ARDroneHover_B.status[i + 2] = 0.0;
        ARDroneHover_B.status[i + 3] = 1.0;
      } else {
        if (b_hex_data[m] == '0') {
          /* '<S9>:1:110' */
          /* '<S9>:1:111' */
          i = ((m + 1) << 2) - 4;
          ARDroneHover_B.status[i] = 0.0;
          ARDroneHover_B.status[i + 1] = 0.0;
          ARDroneHover_B.status[i + 2] = 0.0;
          ARDroneHover_B.status[i + 3] = 0.0;
        }
      }
    }

    /* '<S9>:1:38' */
    /* '<S9>:1:67' */
    memcpy((void *)&battery, (void *)&data[20], (uint32_T)((size_t)1 * sizeof
            (uint32_T)));

    /* '<S9>:1:71' */
    /* '<S9>:1:39' */
    /* '<S9>:1:69' */
    memcpy((void *)&x, (void *)&data[24], (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S9>:1:71' */
    /* '<S9>:1:40' */
    /* '<S9>:1:69' */
    memcpy((void *)&b_x, (void *)&data[28], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S9>:1:71' */
    /* '<S9>:1:41' */
    /* '<S9>:1:69' */
    memcpy((void *)&c_x, (void *)&data[32], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S9>:1:71' */
    /* '<S9>:1:42' */
    /* '<S9>:1:67' */
    memcpy((void *)&res, (void *)&data[36], (uint32_T)((size_t)1 * sizeof
            (uint32_T)));

    /* '<S9>:1:71' */
    bytesLeft = (real_T)res / 1000.0;

    /* '<S9>:1:43' */
    /* '<S9>:1:69' */
    memcpy((void *)&d_x, (void *)&data[40], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S9>:1:71' */
    /* '<S9>:1:44' */
    /* '<S9>:1:69' */
    memcpy((void *)&e_x, (void *)&data[44], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S9>:1:71' */
    /* '<S9>:1:45' */
    /* '<S9>:1:69' */
    memcpy((void *)&f_x, (void *)&data[48], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S9>:1:71' */
    if ((ARDroneHover_B.status[31] == 1.0) && (bytesLeft < 0.2)) {
      /* '<S9>:1:49' */
      /* '<S9>:1:50' */
      bytesLeft = ARDroneHover_DW.hPrev;
    } else {
      if (ARDroneHover_B.status[31] == 1.0) {
        /* '<S9>:1:51' */
        /* '<S9>:1:52' */
        ARDroneHover_DW.hPrev = bytesLeft;
      }
    }

    ARDroneHover_B.battery = battery;
    ARDroneHover_B.rollAngle = b_x / 1000.0F;
    ARDroneHover_B.pitchAngle = x / 1000.0F;
    ARDroneHover_B.yawAngle = c_x / 1000.0F;
    ARDroneHover_B.height = bytesLeft;
    ARDroneHover_B.u = d_x / 1000.0F;
    ARDroneHover_B.v = e_x / 1000.0F;
    ARDroneHover_B.w = f_x / 1000.0F;
    ARDroneHover_B.cksumError = fabs(bytesToRead);

    /* End of MATLAB Function: '<S1>/ARDrone data decoding' */

    /* DataTypeConversion: '<S1>/Type Conversion' */
    ARDroneHover_B.TypeConversion = ARDroneHover_B.battery;

    /* S-Function (sdspFromNetwork): '<S3>/UDP Receive' */
    sErr = GetErrorBuffer(&ARDroneHover_DW.UDPReceive_NetworkLib[0U]);
    aux = 255;
    LibOutputs_Network(&ARDroneHover_DW.UDPReceive_NetworkLib[0U],
                       &ARDroneHover_B.UDPReceive_o1[0U], &aux);
    if (*sErr != 0) {
      rtmSetErrorStatus(ARDroneHover_M, sErr);
      rtmSetStopRequested(ARDroneHover_M, 1);
    }

    /* S-Function (sdspFromNetwork): '<S3>/UDP Receive' */
    ARDroneHover_B.UDPReceive_o2 = (uint16_T)aux;

    /* MATLAB Function: '<S15>/MATLAB Function1' incorporates:
     *  Constant: '<S3>/Constant1'
     *  S-Function (sdspFromNetwork): '<S3>/UDP Receive'
     */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function1': '<S22>:1' */
    /* '<S22>:1:3' */
    bytesToRead = (ARDroneHover_P.Constant1_Value - 1.0) * 8.0;

    /* '<S22>:1:5' */
    ARDroneHover_B.x1 = ARDroneHover_B.UDPReceive_o1[(int32_T)(bytesToRead +
      41.0) - 1];

    /* '<S22>:1:6' */
    ARDroneHover_B.x2 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      41.0) + 1.0) - 1];

    /* '<S22>:1:7' */
    ARDroneHover_B.x3 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      41.0) + 2.0) - 1];

    /* '<S22>:1:8' */
    ARDroneHover_B.x4 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      41.0) + 3.0) - 1];

    /* DataTypeConversion: '<S15>/Data Type Conversion3' */
    ARDroneHover_B.DataTypeConversion3 = ARDroneHover_B.x4;

    /* DataTypeConversion: '<S15>/Data Type Conversion4' */
    ARDroneHover_B.DataTypeConversion4 = ARDroneHover_B.x3;

    /* DataTypeConversion: '<S15>/Data Type Conversion5' */
    ARDroneHover_B.DataTypeConversion5 = ARDroneHover_B.x2;

    /* DataTypeConversion: '<S15>/Data Type Conversion6' */
    ARDroneHover_B.DataTypeConversion6 = ARDroneHover_B.x1;

    /* Outputs for Atomic SubSystem: '<S15>/Bit Concat' */
    ARDroneHover_BitConcat(ARDroneHover_B.DataTypeConversion3,
      ARDroneHover_B.DataTypeConversion4, ARDroneHover_B.DataTypeConversion5,
      ARDroneHover_B.DataTypeConversion6, &ARDroneHover_B.BitConcat);

    /* End of Outputs for SubSystem: '<S15>/Bit Concat' */

    /* MATLAB Function: '<S15>/MATLAB Function3' incorporates:
     *  Constant: '<S3>/Constant1'
     *  S-Function (sdspFromNetwork): '<S3>/UDP Receive'
     */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function3': '<S24>:1' */
    /* '<S24>:1:3' */
    bytesToRead = (ARDroneHover_P.Constant1_Value - 1.0) * 8.0;

    /* '<S24>:1:5' */
    ARDroneHover_B.y1 = ARDroneHover_B.UDPReceive_o1[(int32_T)(bytesToRead +
      45.0) - 1];

    /* '<S24>:1:6' */
    ARDroneHover_B.y2 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      45.0) + 1.0) - 1];

    /* '<S24>:1:7' */
    ARDroneHover_B.y3 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      45.0) + 2.0) - 1];

    /* '<S24>:1:8' */
    ARDroneHover_B.y4 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      45.0) + 3.0) - 1];

    /* DataTypeConversion: '<S15>/Data Type Conversion1' */
    ARDroneHover_B.DataTypeConversion1 = ARDroneHover_B.y4;

    /* DataTypeConversion: '<S15>/Data Type Conversion2' */
    ARDroneHover_B.DataTypeConversion2 = ARDroneHover_B.y3;

    /* DataTypeConversion: '<S15>/Data Type Conversion7' */
    ARDroneHover_B.DataTypeConversion7 = ARDroneHover_B.y2;

    /* DataTypeConversion: '<S15>/Data Type Conversion8' */
    ARDroneHover_B.DataTypeConversion8 = ARDroneHover_B.y1;

    /* Outputs for Atomic SubSystem: '<S15>/Bit Concat1' */
    ARDroneHover_BitConcat(ARDroneHover_B.DataTypeConversion1,
      ARDroneHover_B.DataTypeConversion2, ARDroneHover_B.DataTypeConversion7,
      ARDroneHover_B.DataTypeConversion8, &ARDroneHover_B.BitConcat1);

    /* End of Outputs for SubSystem: '<S15>/Bit Concat1' */

    /* MATLAB Function: '<S15>/MATLAB Function4' incorporates:
     *  Constant: '<S3>/Constant1'
     *  S-Function (sdspFromNetwork): '<S3>/UDP Receive'
     */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function4': '<S25>:1' */
    /* '<S25>:1:3' */
    bytesToRead = (ARDroneHover_P.Constant1_Value - 1.0) * 8.0;

    /* '<S25>:1:5' */
    ARDroneHover_B.z1 = ARDroneHover_B.UDPReceive_o1[(int32_T)(bytesToRead +
      49.0) - 1];

    /* '<S25>:1:6' */
    ARDroneHover_B.z2 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      49.0) + 1.0) - 1];

    /* '<S25>:1:7' */
    ARDroneHover_B.z3 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      49.0) + 2.0) - 1];

    /* '<S25>:1:8' */
    ARDroneHover_B.z4 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      49.0) + 3.0) - 1];

    /* DataTypeConversion: '<S15>/Data Type Conversion9' */
    ARDroneHover_B.DataTypeConversion9 = ARDroneHover_B.z4;

    /* DataTypeConversion: '<S15>/Data Type Conversion10' */
    ARDroneHover_B.DataTypeConversion10 = ARDroneHover_B.z3;

    /* DataTypeConversion: '<S15>/Data Type Conversion11' */
    ARDroneHover_B.DataTypeConversion11 = ARDroneHover_B.z2;

    /* DataTypeConversion: '<S15>/Data Type Conversion12' */
    ARDroneHover_B.DataTypeConversion12 = ARDroneHover_B.z1;

    /* Outputs for Atomic SubSystem: '<S15>/Bit Concat2' */
    ARDroneHover_BitConcat(ARDroneHover_B.DataTypeConversion9,
      ARDroneHover_B.DataTypeConversion10, ARDroneHover_B.DataTypeConversion11,
      ARDroneHover_B.DataTypeConversion12, &ARDroneHover_B.BitConcat2);

    /* End of Outputs for SubSystem: '<S15>/Bit Concat2' */

    /* MATLAB Function: '<S15>/MATLAB Function5' incorporates:
     *  Constant: '<S3>/Constant1'
     *  S-Function (sdspFromNetwork): '<S3>/UDP Receive'
     */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function5': '<S26>:1' */
    /* '<S26>:1:3' */
    bytesToRead = (ARDroneHover_P.Constant1_Value - 1.0) * 8.0;

    /* '<S26>:1:5' */
    ARDroneHover_B.roll1 = ARDroneHover_B.UDPReceive_o1[(int32_T)(bytesToRead +
      53.0) - 1];

    /* '<S26>:1:6' */
    ARDroneHover_B.roll2 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      53.0) + 1.0) - 1];

    /* '<S26>:1:7' */
    ARDroneHover_B.roll3 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      53.0) + 2.0) - 1];

    /* '<S26>:1:8' */
    ARDroneHover_B.roll4 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      53.0) + 3.0) - 1];

    /* DataTypeConversion: '<S15>/Data Type Conversion16' */
    ARDroneHover_B.DataTypeConversion16 = ARDroneHover_B.roll4;

    /* DataTypeConversion: '<S15>/Data Type Conversion13' */
    ARDroneHover_B.DataTypeConversion13 = ARDroneHover_B.roll3;

    /* DataTypeConversion: '<S15>/Data Type Conversion14' */
    ARDroneHover_B.DataTypeConversion14 = ARDroneHover_B.roll2;

    /* DataTypeConversion: '<S15>/Data Type Conversion15' */
    ARDroneHover_B.DataTypeConversion15 = ARDroneHover_B.roll1;

    /* Outputs for Atomic SubSystem: '<S15>/Bit Concat3' */
    ARDroneHover_BitConcat(ARDroneHover_B.DataTypeConversion16,
      ARDroneHover_B.DataTypeConversion13, ARDroneHover_B.DataTypeConversion14,
      ARDroneHover_B.DataTypeConversion15, &ARDroneHover_B.BitConcat3);

    /* End of Outputs for SubSystem: '<S15>/Bit Concat3' */

    /* MATLAB Function: '<S15>/MATLAB Function6' incorporates:
     *  Constant: '<S3>/Constant1'
     *  S-Function (sdspFromNetwork): '<S3>/UDP Receive'
     */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function6': '<S27>:1' */
    /* '<S27>:1:3' */
    bytesToRead = (ARDroneHover_P.Constant1_Value - 1.0) * 8.0;

    /* '<S27>:1:5' */
    ARDroneHover_B.pitch1 = ARDroneHover_B.UDPReceive_o1[(int32_T)(bytesToRead +
      57.0) - 1];

    /* '<S27>:1:6' */
    ARDroneHover_B.pitch2 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead
      + 57.0) + 1.0) - 1];

    /* '<S27>:1:7' */
    ARDroneHover_B.pitch3 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead
      + 57.0) + 2.0) - 1];

    /* '<S27>:1:8' */
    ARDroneHover_B.pitch4 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead
      + 57.0) + 3.0) - 1];

    /* DataTypeConversion: '<S15>/Data Type Conversion20' */
    ARDroneHover_B.DataTypeConversion20 = ARDroneHover_B.pitch4;

    /* DataTypeConversion: '<S15>/Data Type Conversion17' */
    ARDroneHover_B.DataTypeConversion17 = ARDroneHover_B.pitch3;

    /* DataTypeConversion: '<S15>/Data Type Conversion18' */
    ARDroneHover_B.DataTypeConversion18 = ARDroneHover_B.pitch2;

    /* DataTypeConversion: '<S15>/Data Type Conversion19' */
    ARDroneHover_B.DataTypeConversion19 = ARDroneHover_B.pitch1;

    /* Outputs for Atomic SubSystem: '<S15>/Bit Concat4' */
    ARDroneHover_BitConcat(ARDroneHover_B.DataTypeConversion20,
      ARDroneHover_B.DataTypeConversion17, ARDroneHover_B.DataTypeConversion18,
      ARDroneHover_B.DataTypeConversion19, &ARDroneHover_B.BitConcat4);

    /* End of Outputs for SubSystem: '<S15>/Bit Concat4' */

    /* MATLAB Function: '<S15>/MATLAB Function7' incorporates:
     *  Constant: '<S3>/Constant1'
     *  S-Function (sdspFromNetwork): '<S3>/UDP Receive'
     */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function7': '<S28>:1' */
    /* '<S28>:1:3' */
    bytesToRead = (ARDroneHover_P.Constant1_Value - 1.0) * 8.0;

    /* '<S28>:1:5' */
    ARDroneHover_B.yaw1 = ARDroneHover_B.UDPReceive_o1[(int32_T)(bytesToRead +
      61.0) - 1];

    /* '<S28>:1:6' */
    ARDroneHover_B.yaw2 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      61.0) + 1.0) - 1];

    /* '<S28>:1:7' */
    ARDroneHover_B.yaw3 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      61.0) + 2.0) - 1];

    /* '<S28>:1:8' */
    ARDroneHover_B.yaw4 = ARDroneHover_B.UDPReceive_o1[(int32_T)((bytesToRead +
      61.0) + 3.0) - 1];

    /* DataTypeConversion: '<S15>/Data Type Conversion24' */
    ARDroneHover_B.DataTypeConversion24 = ARDroneHover_B.yaw4;

    /* DataTypeConversion: '<S15>/Data Type Conversion21' */
    ARDroneHover_B.DataTypeConversion21 = ARDroneHover_B.yaw3;

    /* DataTypeConversion: '<S15>/Data Type Conversion22' */
    ARDroneHover_B.DataTypeConversion22 = ARDroneHover_B.yaw2;

    /* DataTypeConversion: '<S15>/Data Type Conversion23' */
    ARDroneHover_B.DataTypeConversion23 = ARDroneHover_B.yaw1;

    /* Outputs for Atomic SubSystem: '<S15>/Bit Concat5' */
    ARDroneHover_BitConcat(ARDroneHover_B.DataTypeConversion24,
      ARDroneHover_B.DataTypeConversion21, ARDroneHover_B.DataTypeConversion22,
      ARDroneHover_B.DataTypeConversion23, &ARDroneHover_B.BitConcat5);

    /* End of Outputs for SubSystem: '<S15>/Bit Concat5' */

    /* MATLAB Function: '<S15>/MATLAB Function2' */
    battery = ARDroneHover_B.BitConcat1.y;
    res = ARDroneHover_B.BitConcat2.y;
    roll = ARDroneHover_B.BitConcat3.y;
    pitch = ARDroneHover_B.BitConcat4.y;
    yaw = ARDroneHover_B.BitConcat5.y;

    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function2': '<S23>:1' */
    /* '<S23>:1:4' */
    memcpy((void *)&x, (void *)&ARDroneHover_B.BitConcat.y, (uint32_T)((size_t)1
            * sizeof(real32_T)));

    /* '<S23>:1:5' */
    memcpy((void *)&b_x, (void *)&battery, (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S23>:1:6' */
    memcpy((void *)&c_x, (void *)&res, (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S23>:1:7' */
    memcpy((void *)&d_x, (void *)&roll, (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S23>:1:8' */
    memcpy((void *)&e_x, (void *)&pitch, (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S23>:1:9' */
    memcpy((void *)&f_x, (void *)&yaw, (uint32_T)((size_t)1 * sizeof(real32_T)));
    ARDroneHover_B.X = x;
    ARDroneHover_B.Y = b_x;
    ARDroneHover_B.Z = c_x;
    ARDroneHover_B.Roll = d_x;
    ARDroneHover_B.Pitch = e_x;
    ARDroneHover_B.Yaw = f_x;

    /* DataTypeConversion: '<S4>/Type Conversion 4' */
    ARDroneHover_B.rollanglerad = ARDroneHover_B.Yaw;

    /* Gain: '<S4>/Gain1' */
    ARDroneHover_B.Gain1 = ARDroneHover_P.Gain1_Gain_b *
      ARDroneHover_B.rollanglerad;

    /* Gain: '<S3>/Gain6' */
    ARDroneHover_B.Gain6 = ARDroneHover_P.Gain6_Gain * ARDroneHover_B.Pitch;

    /* DataTypeConversion: '<S4>/Type Conversion 5' */
    ARDroneHover_B.pitchanglerad = ARDroneHover_B.Gain6;

    /* Gain: '<S4>/Gain2' */
    ARDroneHover_B.Gain2 = ARDroneHover_P.Gain2_Gain *
      ARDroneHover_B.pitchanglerad;

    /* Gain: '<S3>/Gain7' */
    ARDroneHover_B.Gain7 = ARDroneHover_P.Gain7_Gain * ARDroneHover_B.Roll;

    /* DataTypeConversion: '<S4>/Type Conversion 6' */
    ARDroneHover_B.yawanglerad = ARDroneHover_B.Gain7;

    /* Gain: '<S4>/Gain3' */
    ARDroneHover_B.Gain3 = ARDroneHover_P.Gain3_Gain *
      ARDroneHover_B.yawanglerad;

    /* Gain: '<S15>/Gain' */
    ARDroneHover_B.Gain_n = ARDroneHover_P.Gain_Gain_nh * ARDroneHover_B.X;

    /* DataTypeConversion: '<S4>/Type Conversion 1' */
    ARDroneHover_B.X_em = ARDroneHover_B.Gain_n;

    /* MATLAB Function: '<S65>/MATLAB Function' */
    ARDroneHover_MATLABFunction(ARDroneHover_B.X_em,
      &ARDroneHover_B.sf_MATLABFunction, &ARDroneHover_DW.sf_MATLABFunction);
  }

  /* Integrator: '<S70>/Integrator' */
  if (ARDroneHover_DW.Integrator_IWORK != 0) {
    ARDroneHover_X.Integrator_CSTATE = ARDroneHover_B.X_em;
  }

  /* Integrator: '<S70>/Integrator' */
  ARDroneHover_B.Integrator = ARDroneHover_X.Integrator_CSTATE;

  /* Sum: '<S70>/Sum' */
  ARDroneHover_B.Sum = ARDroneHover_B.sf_MATLABFunction.y -
    ARDroneHover_B.Integrator;

  /* Gain: '<S70>/Gain' */
  ARDroneHover_B.Gain = ARDroneHover_P.Gain_Gain_n * ARDroneHover_B.Sum;
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* Gain: '<S15>/Gain1' */
    ARDroneHover_B.Gain1_c = ARDroneHover_P.Gain1_Gain_p * ARDroneHover_B.Y;

    /* Gain: '<S3>/Gain9' */
    ARDroneHover_B.Gain9 = ARDroneHover_P.Gain9_Gain * ARDroneHover_B.Gain1_c;

    /* DataTypeConversion: '<S4>/Type Conversion 2' */
    ARDroneHover_B.Y_em = ARDroneHover_B.Gain9;

    /* MATLAB Function: '<S65>/MATLAB Function1' */
    ARDroneHover_MATLABFunction(ARDroneHover_B.Y_em,
      &ARDroneHover_B.sf_MATLABFunction1_a,
      &ARDroneHover_DW.sf_MATLABFunction1_a);
  }

  /* Integrator: '<S71>/Integrator' */
  if (ARDroneHover_DW.Integrator_IWORK_c != 0) {
    ARDroneHover_X.Integrator_CSTATE_h = ARDroneHover_B.Y_em;
  }

  /* Integrator: '<S71>/Integrator' */
  ARDroneHover_B.Integrator_c = ARDroneHover_X.Integrator_CSTATE_h;

  /* Sum: '<S71>/Sum' */
  ARDroneHover_B.Sum_c = ARDroneHover_B.sf_MATLABFunction1_a.y -
    ARDroneHover_B.Integrator_c;

  /* Gain: '<S71>/Gain' */
  ARDroneHover_B.Gain_d = ARDroneHover_P.Gain_Gain_l * ARDroneHover_B.Sum_c;
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* Gain: '<S15>/Gain2' */
    ARDroneHover_B.Gain2_d = ARDroneHover_P.Gain2_Gain_m * ARDroneHover_B.Z;

    /* Gain: '<S3>/Gain10' */
    ARDroneHover_B.Gain10 = ARDroneHover_P.Gain10_Gain * ARDroneHover_B.Gain2_d;

    /* DataTypeConversion: '<S4>/Type Conversion 3' */
    ARDroneHover_B.hm = ARDroneHover_B.Gain10;

    /* MATLAB Function: '<S65>/MATLAB Function2' */
    ARDroneHover_MATLABFunction(ARDroneHover_B.hm,
      &ARDroneHover_B.sf_MATLABFunction2_l,
      &ARDroneHover_DW.sf_MATLABFunction2_l);
  }

  /* Integrator: '<S72>/Integrator' */
  if (ARDroneHover_DW.Integrator_IWORK_f != 0) {
    ARDroneHover_X.Integrator_CSTATE_hy = ARDroneHover_B.hm;
  }

  /* Integrator: '<S72>/Integrator' */
  ARDroneHover_B.Integrator_a = ARDroneHover_X.Integrator_CSTATE_hy;

  /* Sum: '<S72>/Sum' */
  ARDroneHover_B.Sum_b = ARDroneHover_B.sf_MATLABFunction2_l.y -
    ARDroneHover_B.Integrator_a;

  /* Gain: '<S72>/Gain' */
  ARDroneHover_B.Gain_f = ARDroneHover_P.Gain_Gain_i * ARDroneHover_B.Sum_b;

  /* SignalConversion generated from: '<S66>/ SFunction ' incorporates:
   *  MATLAB Function: '<S4>/MATLAB Function'
   */
  ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[0] =
    ARDroneHover_B.Gain;
  ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[1] =
    ARDroneHover_B.Gain_d;
  ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[2] =
    ARDroneHover_B.Gain_f;

  /* MATLAB Function: '<S4>/MATLAB Function' */
  /* MATLAB Function 'Data to States/MATLAB Function': '<S66>:1' */
  /* '<S66>:1:3' */
  /* '<S66>:1:13' */
  bytesToRead = cos(ARDroneHover_B.Gain2);
  bytesLeft = cos(ARDroneHover_B.Gain3);
  tmp_l = sin(ARDroneHover_B.Gain1);
  tmp_m = sin(ARDroneHover_B.Gain2);
  enableRefs = cos(ARDroneHover_B.Gain3);
  stop = cos(ARDroneHover_B.Gain1);
  isFlying = sin(ARDroneHover_B.Gain3);
  r = cos(ARDroneHover_B.Gain1);
  tmp = sin(ARDroneHover_B.Gain2);
  tmp_0 = cos(ARDroneHover_B.Gain3);
  tmp_1 = sin(ARDroneHover_B.Gain1);
  tmp_2 = sin(ARDroneHover_B.Gain3);
  tmp_3 = cos(ARDroneHover_B.Gain2);
  tmp_4 = sin(ARDroneHover_B.Gain3);
  tmp_5 = sin(ARDroneHover_B.Gain1);
  tmp_6 = sin(ARDroneHover_B.Gain2);
  tmp_7 = sin(ARDroneHover_B.Gain3);
  tmp_8 = cos(ARDroneHover_B.Gain1);
  tmp_9 = cos(ARDroneHover_B.Gain3);
  tmp_a = cos(ARDroneHover_B.Gain1);
  tmp_b = sin(ARDroneHover_B.Gain2);
  tmp_c = sin(ARDroneHover_B.Gain3);
  tmp_d = sin(ARDroneHover_B.Gain1);
  tmp_e = cos(ARDroneHover_B.Gain3);
  tmp_f = sin(ARDroneHover_B.Gain2);
  tmp_g = sin(ARDroneHover_B.Gain1);
  tmp_h = cos(ARDroneHover_B.Gain2);
  tmp_i = cos(ARDroneHover_B.Gain1);
  tmp_j = cos(ARDroneHover_B.Gain2);
  tmp_k[0] = bytesToRead * bytesLeft;
  tmp_k[1] = tmp_l * tmp_m * enableRefs - stop * isFlying;
  tmp_k[2] = r * tmp * tmp_0 + tmp_1 * tmp_2;
  tmp_k[3] = tmp_3 * tmp_4;
  tmp_k[4] = tmp_5 * tmp_6 * tmp_7 + tmp_8 * tmp_9;
  tmp_k[5] = tmp_a * tmp_b * tmp_c - tmp_d * tmp_e;
  tmp_k[6] = -tmp_f;
  tmp_k[7] = tmp_g * tmp_h;
  tmp_k[8] = tmp_i * tmp_j;
  for (i = 0; i < 3; i++) {
    ARDroneHover_B.v_b[i] = 0.0;
    ARDroneHover_B.v_b[i] += tmp_k[i] *
      ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[0];
    ARDroneHover_B.v_b[i] += tmp_k[i + 3] *
      ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[1];
    ARDroneHover_B.v_b[i] += tmp_k[i + 6] *
      ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[2];
  }

  /* Gain: '<S4>/Gain4' */
  ARDroneHover_B.Gain4 = ARDroneHover_P.Gain4_Gain * ARDroneHover_B.v_b[2];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* Gain: '<S4>/Gain' */
    ARDroneHover_B.Gain_l = ARDroneHover_P.Gain_Gain_f * ARDroneHover_B.hm;

    /* DataTypeConversion: '<S1>/Type Conversion4' */
    ARDroneHover_B.TypeConversion4 = ARDroneHover_B.height;

    /* Constant: '<S85>/Constant1' */
    ARDroneHover_B.Constant1[0] = ARDroneHover_P.Constant1_Value_b[0];
    ARDroneHover_B.Constant1[1] = ARDroneHover_P.Constant1_Value_b[1];
  }

  /* Integrator: '<S85>/Integrator' */
  if (ARDroneHover_DW.Integrator_IWORK_p != 0) {
    ARDroneHover_X.Integrator_CSTATE_d[0] = ARDroneHover_B.Constant1[0];
    ARDroneHover_X.Integrator_CSTATE_d[1] = ARDroneHover_B.Constant1[1];
  }

  /* Integrator: '<S85>/Integrator' */
  ARDroneHover_B.Integrator_g[0] = ARDroneHover_X.Integrator_CSTATE_d[0];
  ARDroneHover_B.Integrator_g[1] = ARDroneHover_X.Integrator_CSTATE_d[1];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* DataTypeConversion: '<S1>/Type Conversion1' */
    ARDroneHover_B.TypeConversion1 = ARDroneHover_B.rollAngle;

    /* DataTypeConversion: '<S1>/Type Conversion2' */
    ARDroneHover_B.TypeConversion2 = ARDroneHover_B.pitchAngle;

    /* UnitDelay: '<S1>/Unit Delay to avoid algebraic loop' */
    ARDroneHover_B.UnitDelaytoavoidalgebraicloop =
      ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE;

    /* ManualSwitch: '<Root>/Manual Switch2' */
    if (ARDroneHover_P.ManualSwitch2_CurrentSetting == 1) {
      /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
       *  Constant: '<Root>/commands disabled'
       */
      ARDroneHover_B.ManualSwitch2 = ARDroneHover_P.commandsdisabled_Value;
    } else {
      /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
       *  Constant: '<Root>/commands enabled'
       */
      ARDroneHover_B.ManualSwitch2 = ARDroneHover_P.commandsenabled_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch2' */

    /* DataTypeConversion: '<S1>/Type Conversion3' */
    ARDroneHover_B.TypeConversion3 = ARDroneHover_B.yawAngle;

    /* MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
    /* MATLAB Function 'ARDrone Wi-Fi  Block/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ': '<S12>:1' */
    /* '<S12>:1:6' */
    ARDroneHover_B.yawOut = ARDroneHover_B.TypeConversion3;
    if ((ARDroneHover_B.UnitDelaytoavoidalgebraicloop == 1.0) &&
        (ARDroneHover_B.ManualSwitch2 == 1.0)) {
      /* '<S12>:1:19' */
      /* '<S12>:1:20' */
      ARDroneHover_B.yawOut = ARDroneHover_B.TypeConversion3 -
        ARDroneHover_DW.yaw0;

      /* '<S12>:1:21' */
      ARDroneHover_DW.mode = 1.0;
    } else {
      if ((ARDroneHover_B.UnitDelaytoavoidalgebraicloop == 1.0) &&
          (ARDroneHover_DW.mode == 0.0)) {
        /* '<S12>:1:22' */
        /* '<S12>:1:23' */
        ARDroneHover_DW.yaw0 = ARDroneHover_B.TypeConversion3;
      }
    }

    /* '<S12>:1:27' */
    bytesToRead = ARDroneHover_B.yawOut;
    if (rtIsNaN(bytesToRead) || rtIsInf(bytesToRead)) {
      ARDroneHover_B.yawOut = (rtNaN);
    } else if (bytesToRead == 0.0) {
      ARDroneHover_B.yawOut = 0.0;
    } else {
      ARDroneHover_B.yawOut = fmod(bytesToRead, 360.0);
      if (ARDroneHover_B.yawOut == 0.0) {
        ARDroneHover_B.yawOut = 0.0;
      } else {
        if (bytesToRead < 0.0) {
          ARDroneHover_B.yawOut += 360.0;
        }
      }
    }

    if (ARDroneHover_B.yawOut > 180.0) {
      /* '<S12>:1:28' */
      /* '<S12>:1:29' */
      ARDroneHover_B.yawOut += -360.0;
    }

    /* End of MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  }

  /* Gain: '<Root>/deg 2 rad' */
  ARDroneHover_B.deg2rad[0] = ARDroneHover_P.deg2rad_Gain *
    ARDroneHover_B.TypeConversion1;
  ARDroneHover_B.deg2rad[1] = ARDroneHover_P.deg2rad_Gain *
    ARDroneHover_B.TypeConversion2;
  ARDroneHover_B.deg2rad[2] = ARDroneHover_P.deg2rad_Gain *
    ARDroneHover_B.yawOut;
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* DataTypeConversion: '<S1>/Type Conversion5' */
    ARDroneHover_B.TypeConversion5 = ARDroneHover_B.u;

    /* DataTypeConversion: '<S1>/Type Conversion6' */
    ARDroneHover_B.TypeConversion6 = ARDroneHover_B.v;

    /* DataTypeConversion: '<S1>/Type Conversion7' */
    ARDroneHover_B.TypeConversion7 = ARDroneHover_B.w;

    /* SignalConversion generated from: '<S8>/To Workspace' */
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[0] =
      ARDroneHover_B.deg2rad[0];
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[1] =
      ARDroneHover_B.deg2rad[1];
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[2] =
      ARDroneHover_B.deg2rad[2];
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[3] =
      ARDroneHover_B.TypeConversion5;
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[4] =
      ARDroneHover_B.TypeConversion6;
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[5] =
      ARDroneHover_B.TypeConversion7;
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[6] =
      ARDroneHover_B.Integrator_g[0];
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[7] =
      ARDroneHover_B.Integrator_g[1];
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[8] =
      ARDroneHover_B.TypeConversion4;
  }

  /* Gain: '<S8>/deg 2 rad1' */
  ARDroneHover_B.deg2rad1 = ARDroneHover_P.deg2rad1_Gain *
    ARDroneHover_B.deg2rad[2];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
  }

  /* Clock: '<S2>/Clock1' */
  ARDroneHover_B.Clock1 = ARDroneHover_M->Timing.t[0];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* SignalConversion generated from: '<S5>/ SFunction ' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function1'
     */
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[0] =
      ARDroneHover_B.Gain1;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[1] =
      ARDroneHover_B.Gain2;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[2] =
      ARDroneHover_B.Gain3;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[3] =
      ARDroneHover_B.v_b[0];
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[4] =
      ARDroneHover_B.v_b[1];
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[5] =
      ARDroneHover_B.Gain4;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[6] =
      ARDroneHover_B.X_em;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[7] =
      ARDroneHover_B.Y_em;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[8] =
      ARDroneHover_B.Gain_l;

    /* MATLAB Function: '<Root>/MATLAB Function1' */
    /* MATLAB Function 'MATLAB Function1': '<S5>:1' */
    /* '<S5>:1:21' */
    /* '<S5>:1:22' */
    if (!ARDroneHover_DW.previous_status_not_empty) {
      /* '<S5>:1:24' */
      ARDroneHover_DW.previous_status_not_empty = true;

      /* '<S5>:1:26' */
      ARDroneHover_DW.p0[0] =
        ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[6];
      ARDroneHover_DW.p0[1] =
        ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[7];
      ARDroneHover_DW.p0[2] = -1.0;
    }

    if (ARDroneHover_B.ManualSwitch2 == 0.0) {
      /* '<S5>:1:29' */
      if (ARDroneHover_DW.previous_status == 1.0) {
        /* '<S5>:1:30' */
        /* '<S5>:1:32' */
        ARDroneHover_DW.p0[0] =
          ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[6];
        ARDroneHover_DW.p0[1] =
          ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[7];
        ARDroneHover_DW.p0[2] = -1.0;
      }

      /* '<S5>:1:34' */
      /* '<S5>:1:35' */
      /* '<S5>:1:36' */
      ARDroneHover_B.pd[0] = ARDroneHover_DW.p0[0];
      ARDroneHover_B.dot_pd[0] = 0.0;
      ARDroneHover_B.ddot_pd[0] = 0.0;
      ARDroneHover_B.pd[1] = ARDroneHover_DW.p0[1];
      ARDroneHover_B.dot_pd[1] = 0.0;
      ARDroneHover_B.ddot_pd[1] = 0.0;
      ARDroneHover_B.pd[2] = ARDroneHover_DW.p0[2];
      ARDroneHover_B.dot_pd[2] = 0.0;
      ARDroneHover_B.ddot_pd[2] = 0.0;

      /* '<S5>:1:37' */
      ARDroneHover_B.psi_d = 0.0;
    } else {
      if ((!ARDroneHover_DW.t0_not_empty) || (ARDroneHover_DW.previous_status ==
           0.0)) {
        /* '<S5>:1:39' */
        /* '<S5>:1:41' */
        ARDroneHover_DW.t0 = ARDroneHover_B.Clock1;
        ARDroneHover_DW.t0_not_empty = true;

        /* '<S5>:1:42' */
        ARDroneHover_DW.p0[0] =
          ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[6];
        ARDroneHover_DW.p0[1] =
          ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[7];
        ARDroneHover_DW.p0[2] = -1.0;
      }

      /* '<S5>:1:44' */
      bytesToRead = ARDroneHover_B.Clock1 - ARDroneHover_DW.t0;

      /* '<S5>:1:54' */
      /* '<S5>:1:55' */
      ARDroneHover_B.pd[0] = (cos(0.5 * bytesToRead) - 1.0) +
        ARDroneHover_DW.p0[0];
      ARDroneHover_B.pd[1] = sin(0.5 * bytesToRead) + ARDroneHover_DW.p0[1];
      ARDroneHover_B.pd[2] = ARDroneHover_DW.p0[2];

      /* '<S5>:1:56' */
      ARDroneHover_B.dot_pd[0] = -sin(0.5 * bytesToRead) * 0.5;
      ARDroneHover_B.dot_pd[1] = cos(0.5 * bytesToRead) * 0.5;
      ARDroneHover_B.dot_pd[2] = 0.0;

      /* '<S5>:1:57' */
      ARDroneHover_B.ddot_pd[0] = -cos(0.5 * bytesToRead) * 0.25;
      ARDroneHover_B.ddot_pd[1] = -sin(0.5 * bytesToRead) * 0.25;
      ARDroneHover_B.ddot_pd[2] = 0.0;

      /* '<S5>:1:58' */
      ARDroneHover_B.psi_d = 0.5 * bytesToRead;
    }

    /* '<S5>:1:83' */
    ARDroneHover_DW.previous_status = ARDroneHover_B.ManualSwitch2;

    /* Gain: '<S6>/Gain' */
    ARDroneHover_B.Gain_j = ARDroneHover_P.Gain_Gain_p * ARDroneHover_B.pd[2];

    /* Sum: '<S79>/Sum3' */
    ARDroneHover_B.Sum3 = ARDroneHover_B.Gain_j - ARDroneHover_B.Gain_l;

    /* Gain: '<S79>/proportional control gain' */
    ARDroneHover_B.proportionalcontrolgain =
      ARDroneHover_P.proportionalcontrolgain_Gain * ARDroneHover_B.Sum3;

    /* Sum: '<S78>/Sum1' */
    ARDroneHover_B.Sum1 = ARDroneHover_B.psi_d - ARDroneHover_B.Gain3;

    /* MATLAB Function: '<S78>/normalize angle  between -pi and pi radians' */
    /* MATLAB Function 'Outer-loop Controller/Baseline Controller/Heading controller/normalize angle  between -pi and pi radians': '<S82>:1' */
    /* '<S82>:1:4' */
    if (rtIsNaN(ARDroneHover_B.Sum1) || rtIsInf(ARDroneHover_B.Sum1)) {
      ARDroneHover_B.angleOut_f = (rtNaN);
    } else if (ARDroneHover_B.Sum1 == 0.0) {
      ARDroneHover_B.angleOut_f = 0.0;
    } else {
      ARDroneHover_B.angleOut_f = fmod(ARDroneHover_B.Sum1, 6.2831853071795862);
      rEQ0 = (ARDroneHover_B.angleOut_f == 0.0);
      if (!rEQ0) {
        bytesToRead = fabs(ARDroneHover_B.Sum1 / 6.2831853071795862);
        rEQ0 = !(fabs(bytesToRead - floor(bytesToRead + 0.5)) >
                 2.2204460492503131E-16 * bytesToRead);
      }

      if (rEQ0) {
        ARDroneHover_B.angleOut_f = 0.0;
      } else {
        if (ARDroneHover_B.Sum1 < 0.0) {
          ARDroneHover_B.angleOut_f += 6.2831853071795862;
        }
      }
    }

    if (ARDroneHover_B.angleOut_f > 3.1415926535897931) {
      /* '<S82>:1:5' */
      /* '<S82>:1:6' */
      ARDroneHover_B.angleOut_f += -6.2831853071795862;
    }

    /* End of MATLAB Function: '<S78>/normalize angle  between -pi and pi radians' */

    /* Gain: '<S78>/proportional control gain - yaw' */
    ARDroneHover_B.proportionalcontrolgainyaw =
      ARDroneHover_P.proportionalcontrolgainyaw_Gain * ARDroneHover_B.angleOut_f;

    /* Sum: '<S81>/Sum4' */
    ARDroneHover_B.Sum4[0] = ARDroneHover_B.pd[0] - ARDroneHover_B.X_em;
    ARDroneHover_B.Sum4[1] = ARDroneHover_B.pd[1] - ARDroneHover_B.Y_em;

    /* MATLAB Function: '<S81>/Coordinate trnasformation  from inertial frame to body frame ' */
    /* MATLAB Function 'Outer-loop Controller/Baseline Controller/Position controller/Coordinate trnasformation  from inertial frame to body frame ': '<S83>:1' */
    /* '<S83>:1:3' */
    /* '<S83>:1:4' */
    psi_e = cos(ARDroneHover_B.Gain3);
    bytesLeft = sin(ARDroneHover_B.Gain3);
    bytesToRead = sin(ARDroneHover_B.Gain3);
    tmp_m = cos(ARDroneHover_B.Gain3);
    tmp_l = -bytesToRead;
    ARDroneHover_B.Vec_xy[0] = 0.0;
    ARDroneHover_B.Vec_xy[0] += psi_e * ARDroneHover_B.Sum4[0];
    ARDroneHover_B.Vec_xy[0] += bytesLeft * ARDroneHover_B.Sum4[1];
    ARDroneHover_B.Vec_xy[1] = 0.0;
    ARDroneHover_B.Vec_xy[1] += tmp_l * ARDroneHover_B.Sum4[0];
    ARDroneHover_B.Vec_xy[1] += tmp_m * ARDroneHover_B.Sum4[1];

    /* Gain: '<S81>/Gain2' */
    ARDroneHover_B.Gain2_o = ARDroneHover_P.Gain2_Gain_b *
      ARDroneHover_B.Vec_xy[0];

    /* Gain: '<S81>/Gain3' */
    ARDroneHover_B.Gain3_m = ARDroneHover_P.Gain3_Gain_l *
      ARDroneHover_B.Vec_xy[1];

    /* RelationalOperator: '<S74>/Compare' incorporates:
     *  Constant: '<S74>/Constant'
     */
    ARDroneHover_B.Compare = (ARDroneHover_B.ManualSwitch2 <=
      ARDroneHover_P.Constant_Value);

    /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    if (ARDroneHover_B.Compare ||
        (ARDroneHover_DW.DiscreteTimeIntegrator_PrevResetState != 0)) {
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] =
        ARDroneHover_P.DiscreteTimeIntegrator_IC[0];
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] =
        ARDroneHover_P.DiscreteTimeIntegrator_IC[1];
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] =
        ARDroneHover_P.DiscreteTimeIntegrator_IC[2];
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] =
        ARDroneHover_P.DiscreteTimeIntegrator_IC[3];
    }

    if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] >=
        ARDroneHover_P.DiscreteTimeIntegrator_UpperSat) {
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] =
        ARDroneHover_P.DiscreteTimeIntegrator_UpperSat;
    } else {
      if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] <=
          ARDroneHover_P.DiscreteTimeIntegrator_LowerSat) {
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] =
          ARDroneHover_P.DiscreteTimeIntegrator_LowerSat;
      }
    }

    /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    ARDroneHover_B.DiscreteTimeIntegrator[0] =
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0];

    /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] >=
        ARDroneHover_P.DiscreteTimeIntegrator_UpperSat) {
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] =
        ARDroneHover_P.DiscreteTimeIntegrator_UpperSat;
    } else {
      if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] <=
          ARDroneHover_P.DiscreteTimeIntegrator_LowerSat) {
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] =
          ARDroneHover_P.DiscreteTimeIntegrator_LowerSat;
      }
    }

    /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    ARDroneHover_B.DiscreteTimeIntegrator[1] =
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1];

    /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] >=
        ARDroneHover_P.DiscreteTimeIntegrator_UpperSat) {
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] =
        ARDroneHover_P.DiscreteTimeIntegrator_UpperSat;
    } else {
      if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] <=
          ARDroneHover_P.DiscreteTimeIntegrator_LowerSat) {
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] =
          ARDroneHover_P.DiscreteTimeIntegrator_LowerSat;
      }
    }

    /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    ARDroneHover_B.DiscreteTimeIntegrator[2] =
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2];

    /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] >=
        ARDroneHover_P.DiscreteTimeIntegrator_UpperSat) {
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] =
        ARDroneHover_P.DiscreteTimeIntegrator_UpperSat;
    } else {
      if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] <=
          ARDroneHover_P.DiscreteTimeIntegrator_LowerSat) {
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] =
          ARDroneHover_P.DiscreteTimeIntegrator_LowerSat;
      }
    }

    /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    ARDroneHover_B.DiscreteTimeIntegrator[3] =
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3];

    /* SignalConversion generated from: '<S76>/ SFunction ' incorporates:
     *  MATLAB Function: '<S6>/MATLAB Function'
     */
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0] =
      ARDroneHover_B.Gain1;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1] =
      ARDroneHover_B.Gain2;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2] =
      ARDroneHover_B.Gain3;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[3] =
      ARDroneHover_B.v_b[0];
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[4] =
      ARDroneHover_B.v_b[1];
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[5] =
      ARDroneHover_B.Gain4;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[6] =
      ARDroneHover_B.X_em;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[7] =
      ARDroneHover_B.Y_em;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[8] =
      ARDroneHover_B.Gain_l;

    /* MATLAB Function: '<S6>/MATLAB Function' */
    /* MATLAB Function 'Outer-loop Controller/MATLAB Function': '<S76>:1' */
    /* '<S76>:1:53' */
    /* '<S76>:1:24' */
    /* '<S76>:1:62' */
    /* '<S76>:1:21' */
    /* '<S76>:1:22' */
    /* '<S76>:1:23' */
    /* '<S76>:1:72' */
    /* '<S76>:1:73' */
    /* '<S76>:1:25' */
    bytesLeft = ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2] -
      ARDroneHover_B.psi_d;

    /* '<S76>:1:86' */
    if (rtIsNaN(bytesLeft) || rtIsInf(bytesLeft)) {
      psi_e = (rtNaN);
    } else if (bytesLeft == 0.0) {
      psi_e = 0.0;
    } else {
      psi_e = fmod(bytesLeft, 6.2831853071795862);
      rEQ0 = (psi_e == 0.0);
      if (!rEQ0) {
        bytesToRead = fabs(bytesLeft / 6.2831853071795862);
        rEQ0 = !(fabs(bytesToRead - floor(bytesToRead + 0.5)) >
                 2.2204460492503131E-16 * bytesToRead);
      }

      if (rEQ0) {
        psi_e = 0.0;
      } else {
        if (bytesLeft < 0.0) {
          psi_e += 6.2831853071795862;
        }
      }
    }

    if (psi_e > 3.1415926535897931) {
      /* '<S76>:1:87' */
      /* '<S76>:1:88' */
      psi_e += -6.2831853071795862;
    }

    /* '<S76>:1:27' */
    p[0] = ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[6];
    p[1] = ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[7];

    /* '<S76>:1:28' */
    p[2] = -ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[8];

    /* '<S76>:1:30' */
    /* '<S76>:1:31' */
    bytesToRead = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    bytesLeft = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_l = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp_m = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    enableRefs = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    stop = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    isFlying = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    r = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    tmp_0 = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_1 = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp_2 = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_3 = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    tmp_4 = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_5 = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp_6 = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    tmp_7 = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_8 = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp_9 = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_a = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp_b = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    tmp_c = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_d = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp_e = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_f = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    tmp_g = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp_h = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    tmp_i = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[0]);
    tmp_j = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[1]);
    tmp_k[0] = bytesToRead * bytesLeft;
    tmp_k[3] = tmp_l * tmp_m * enableRefs - stop * isFlying;
    tmp_k[6] = r * tmp * tmp_0 + tmp_1 * tmp_2;
    tmp_k[1] = tmp_3 * tmp_4;
    tmp_k[4] = tmp_5 * tmp_6 * tmp_7 + tmp_8 * tmp_9;
    tmp_k[7] = tmp_a * tmp_b * tmp_c - tmp_d * tmp_e;
    tmp_k[2] = -tmp_f;
    tmp_k[5] = tmp_g * tmp_h;
    tmp_k[8] = tmp_i * tmp_j;

    /* '<S76>:1:32' */
    /* '<S76>:1:47' */
    for (i = 0; i < 3; i++) {
      bytesToRead = tmp_k[i] *
        ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[3];
      bytesToRead += tmp_k[i + 3] *
        ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[4];
      bytesToRead += tmp_k[i + 6] *
        ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[5];
      x_e[i] = p[i] - ARDroneHover_B.pd[i];
      dot_p[i] = bytesToRead;
    }

    dot_p[2] = -dot_p[2];

    /* '<S76>:1:53' */
    bytesToRead = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    bytesLeft = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_l = sin(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_m = cos(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[2]);
    tmp_k[0] = bytesToRead;
    tmp_k[1] = -bytesLeft;
    tmp_k[2] = 0.0;
    tmp_k[3] = tmp_l;
    tmp_k[4] = tmp_m;
    tmp_k[5] = 0.0;
    x_e[3] = dot_p[0] - ARDroneHover_B.dot_pd[0];
    tmp_k[6] = 0.0;
    x_e[4] = dot_p[1] - ARDroneHover_B.dot_pd[1];
    tmp_k[7] = 0.0;
    x_e[5] = dot_p[2] - ARDroneHover_B.dot_pd[2];
    tmp_k[8] = 1.0;
    for (i = 0; i < 3; i++) {
      bytesToRead = 0.0;
      for (b_hex_size_idx_1 = 0; b_hex_size_idx_1 < 6; b_hex_size_idx_1++) {
        bytesToRead += (real_T)a[3 * b_hex_size_idx_1 + i] *
          x_e[b_hex_size_idx_1];
      }

      dot_p[i] = ((bytesToRead + y[i]) - ARDroneHover_B.ddot_pd[i]) +
        ARDroneHover_B.DiscreteTimeIntegrator[i];
    }

    for (i = 0; i < 3; i++) {
      bytesToRead = tmp_k[i] * dot_p[0];
      bytesToRead += tmp_k[i + 3] * dot_p[1];
      bytesToRead += tmp_k[i + 6] * dot_p[2];
      p[i] = bytesToRead;
    }

    /* '<S76>:1:57' */
    ARDroneHover_B.w_r =
      -(ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[8] -
        (-ARDroneHover_B.pd[2]));

    /* '<S76>:1:58' */
    ARDroneHover_B.dot_psi_r = -1.5 * psi_e - 0.0 *
      ARDroneHover_B.DiscreteTimeIntegrator[3];

    /* '<S76>:1:59' */
    ARDroneHover_B.theta_r = rt_atan2d_snf(p[0], p[2]);

    /* '<S76>:1:60' */
    ARDroneHover_B.phi_r = rt_atan2d_snf(-p[1], sqrt(p[0] * p[0] + p[2] * p[2]));

    /* '<S76>:1:62' */
    for (i = 0; i < 3; i++) {
      p[i] = 0.0;
      for (b_hex_size_idx_1 = 0; b_hex_size_idx_1 < 6; b_hex_size_idx_1++) {
        bytesToRead = p[i];
        bytesToRead += 0.0 * x_e[b_hex_size_idx_1];
        p[i] = bytesToRead;
      }
    }

    ARDroneHover_B.dot_xi[0] = p[0];
    ARDroneHover_B.dot_xi[1] = p[1];
    ARDroneHover_B.dot_xi[2] = p[2];
    ARDroneHover_B.dot_xi[3] = psi_e;
  }

  /* ManualSwitch: '<S6>/Manual Switch3' */
  if (ARDroneHover_P.ManualSwitch3_CurrentSetting == 1) {
    /* Sum: '<S77>/Sum2' */
    ARDroneHover_B.Sum2 = ARDroneHover_B.Gain2_o - ARDroneHover_B.v_b[0];

    /* Gain: '<S77>/Gain' */
    ARDroneHover_B.Gain_h = ARDroneHover_P.Gain_Gain * ARDroneHover_B.Sum2;

    /* Sum: '<S80>/Sum5' */
    ARDroneHover_B.Sum5 = ARDroneHover_B.Gain3_m - ARDroneHover_B.v_b[1];

    /* Gain: '<S80>/Gain1' */
    ARDroneHover_B.Gain1_j = ARDroneHover_P.Gain1_Gain * ARDroneHover_B.Sum5;

    /* ManualSwitch: '<S6>/Manual Switch3' */
    ARDroneHover_B.ManualSwitch3[0] = ARDroneHover_B.proportionalcontrolgain;
    ARDroneHover_B.ManualSwitch3[1] = ARDroneHover_B.proportionalcontrolgainyaw;
    ARDroneHover_B.ManualSwitch3[2] = ARDroneHover_B.Gain_h;
    ARDroneHover_B.ManualSwitch3[3] = ARDroneHover_B.Gain1_j;
  } else {
    /* ManualSwitch: '<S6>/Manual Switch3' */
    ARDroneHover_B.ManualSwitch3[0] = ARDroneHover_B.w_r;
    ARDroneHover_B.ManualSwitch3[1] = ARDroneHover_B.dot_psi_r;
    ARDroneHover_B.ManualSwitch3[2] = ARDroneHover_B.theta_r;
    ARDroneHover_B.ManualSwitch3[3] = ARDroneHover_B.phi_r;
  }

  /* End of ManualSwitch: '<S6>/Manual Switch3' */

  /* Saturate: '<S1>/Saturation 1' */
  psi_e = ARDroneHover_B.ManualSwitch3[3];
  bytesToRead = ARDroneHover_P.Saturation1_LowerSat;
  bytesLeft = ARDroneHover_P.Saturation1_UpperSat;
  if (psi_e > bytesLeft) {
    /* Saturate: '<S1>/Saturation 1' */
    ARDroneHover_B.Saturation1 = bytesLeft;
  } else if (psi_e < bytesToRead) {
    /* Saturate: '<S1>/Saturation 1' */
    ARDroneHover_B.Saturation1 = bytesToRead;
  } else {
    /* Saturate: '<S1>/Saturation 1' */
    ARDroneHover_B.Saturation1 = psi_e;
  }

  /* End of Saturate: '<S1>/Saturation 1' */

  /* Saturate: '<S1>/Saturation 2' */
  psi_e = ARDroneHover_B.ManualSwitch3[2];
  bytesToRead = ARDroneHover_P.Saturation2_LowerSat;
  bytesLeft = ARDroneHover_P.Saturation2_UpperSat;
  if (psi_e > bytesLeft) {
    /* Saturate: '<S1>/Saturation 2' */
    ARDroneHover_B.Saturation2 = bytesLeft;
  } else if (psi_e < bytesToRead) {
    /* Saturate: '<S1>/Saturation 2' */
    ARDroneHover_B.Saturation2 = bytesToRead;
  } else {
    /* Saturate: '<S1>/Saturation 2' */
    ARDroneHover_B.Saturation2 = psi_e;
  }

  /* End of Saturate: '<S1>/Saturation 2' */

  /* Saturate: '<S1>/Saturation 3' */
  psi_e = ARDroneHover_B.ManualSwitch3[1];
  bytesToRead = ARDroneHover_P.Saturation3_LowerSat;
  bytesLeft = ARDroneHover_P.Saturation3_UpperSat;
  if (psi_e > bytesLeft) {
    /* Saturate: '<S1>/Saturation 3' */
    ARDroneHover_B.Saturation3 = bytesLeft;
  } else if (psi_e < bytesToRead) {
    /* Saturate: '<S1>/Saturation 3' */
    ARDroneHover_B.Saturation3 = bytesToRead;
  } else {
    /* Saturate: '<S1>/Saturation 3' */
    ARDroneHover_B.Saturation3 = psi_e;
  }

  /* End of Saturate: '<S1>/Saturation 3' */

  /* Saturate: '<S1>/Saturation 4' */
  psi_e = ARDroneHover_B.ManualSwitch3[0];
  bytesToRead = ARDroneHover_P.Saturation4_LowerSat;
  bytesLeft = ARDroneHover_P.Saturation4_UpperSat;
  if (psi_e > bytesLeft) {
    /* Saturate: '<S1>/Saturation 4' */
    ARDroneHover_B.Saturation4 = bytesLeft;
  } else if (psi_e < bytesToRead) {
    /* Saturate: '<S1>/Saturation 4' */
    ARDroneHover_B.Saturation4 = bytesToRead;
  } else {
    /* Saturate: '<S1>/Saturation 4' */
    ARDroneHover_B.Saturation4 = psi_e;
  }

  /* End of Saturate: '<S1>/Saturation 4' */
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* ManualSwitch: '<Root>/Manual Switch1' */
    if (ARDroneHover_P.ManualSwitch1_CurrentSetting == 1) {
      /* ManualSwitch: '<Root>/Manual Switch1' incorporates:
       *  Constant: '<Root>/land'
       */
      ARDroneHover_B.ManualSwitch1 = ARDroneHover_P.land_Value;
    } else {
      /* ManualSwitch: '<Root>/Manual Switch1' incorporates:
       *  Constant: '<Root>/take off'
       */
      ARDroneHover_B.ManualSwitch1 = ARDroneHover_P.takeoff_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch1' */

    /* ManualSwitch: '<Root>/Kill-Switch' */
    if (ARDroneHover_P.KillSwitch_CurrentSetting == 1) {
      /* ManualSwitch: '<Root>/Kill-Switch' incorporates:
       *  Constant: '<Root>/_'
       */
      ARDroneHover_B.KillSwitch = ARDroneHover_P._Value;
    } else {
      /* ManualSwitch: '<Root>/Kill-Switch' incorporates:
       *  Constant: '<Root>/stop'
       */
      ARDroneHover_B.KillSwitch = ARDroneHover_P.stop_Value;
    }

    /* End of ManualSwitch: '<Root>/Kill-Switch' */

    /* MATLAB Function: '<S11>/Drone state request' */
    bytesToRead = ARDroneHover_B.ManualSwitch1;
    bytesLeft = ARDroneHover_B.Saturation1;
    psi_e = ARDroneHover_B.Saturation2;
    tmp_l = ARDroneHover_B.Saturation3;
    tmp_m = ARDroneHover_B.Saturation4;
    enableRefs = ARDroneHover_B.ManualSwitch2;
    stop = ARDroneHover_B.KillSwitch;

    /* MATLAB Function 'ARDrone Wi-Fi  Block/Subsystem1/Drone state request': '<S13>:1' */
    /* '<S13>:1:113' */
    /* '<S13>:1:72' */
    /* '<S13>:1:65' */
    /* '<S13>:1:54' */
    /* '<S13>:1:51' */
    /* '<S13>:1:42' */
    /* '<S13>:1:38' */
    /* '<S13>:1:32' */
    /* '<S13>:1:26' */
    /* '<S13>:1:16' */
    samplesRead = 0;

    /* '<S13>:1:19' */
    isFlying = ARDroneHover_B.status[31];

    /* '<S13>:1:22' */
    memset(&ARDroneHover_B.dataControl[0], 0, 150U * sizeof(uint8_T));

    /* '<S13>:1:26' */
    cmd_size_idx_1 = 0;
    guard1 = false;
    if (ARDroneHover_DW.SequenceNumber <= 1.0) {
      /* '<S13>:1:29' */
      guard1 = true;
    } else {
      if (rtIsInf(ARDroneHover_DW.SequenceNumber)) {
        r = (rtNaN);
      } else {
        r = fmod(ARDroneHover_DW.SequenceNumber, 100.0);
        if (r == 0.0) {
          r = 0.0;
        }
      }

      if (r == 0.0) {
        /* '<S13>:1:29' */
        guard1 = true;
      }
    }

    if (guard1) {
      /* '<S13>:1:30' */
      ARDroneHover_DW.SequenceNumber++;

      /* '<S13>:1:31' */
      ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data,
        hex_size);

      /* '<S13>:1:32' */
      cmd_size_idx_1 = hex_size[1] + 41;
      loop_ub = hex_size[0] * hex_size[1] - 1;
      for (i = 0; i < 10; i++) {
        cmd_data[i] = c[i];
      }

      if (0 <= loop_ub) {
        memcpy(&cmd_data[10], &strCmd_data[0], (loop_ub + 1) * sizeof(char_T));
      }

      for (i = 0; i < 30; i++) {
        cmd_data[(i + loop_ub) + 11] = d[i];
      }

      cmd_data[loop_ub + 41] = '\x0d';
    }

    /* '<S13>:1:36' */
    ARDroneHover_DW.SequenceNumber++;

    /* '<S13>:1:37' */
    ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data, hex_size);

    /* '<S13>:1:38' */
    aux = cmd_size_idx_1;

    /* MATLAB Function: '<S11>/Drone state request' */
    loop_ub = hex_size[1];
    cmd_size_idx_1 = (aux + loop_ub) + 11;
    for (i = 0; i < 10; i++) {
      /* MATLAB Function: '<S11>/Drone state request' */
      cmd_data[aux + i] = e[i];
    }

    for (i = 0; i < loop_ub; i++) {
      /* MATLAB Function: '<S11>/Drone state request' */
      cmd_data[(aux + i) + 10] = strCmd_data[i];
    }

    /* MATLAB Function: '<S11>/Drone state request' */
    cmd_data[(aux + loop_ub) + 10] = '\x0d';
    if (stop == 1.0) {
      /* '<S13>:1:41' */
      /* '<S13>:1:42' */
      cmd_size_idx_1 = hex_size[1] + 18;
      loop_ub = hex_size[0] * hex_size[1] - 1;
      for (i = 0; i < 7; i++) {
        cmd_data[i] = f[i];
      }

      if (0 <= loop_ub) {
        memcpy(&cmd_data[7], &strCmd_data[0], (loop_ub + 1) * sizeof(char_T));
      }

      for (i = 0; i < 10; i++) {
        cmd_data[(i + loop_ub) + 8] = g[i];
      }

      cmd_data[loop_ub + 18] = '\x0d';
    } else if ((ARDroneHover_DW.SequenceNumber > 20.0) &&
               (ARDroneHover_DW.SequenceNumber < 22.0)) {
      /* '<S13>:1:46' */
      /* '<S13>:1:49' */
      ARDroneHover_DW.SequenceNumber = 22.0;

      /* '<S13>:1:50' */
      ARDroneHover_getString(22.0, strCmd_data, hex_size);

      /* '<S13>:1:51' */
      aux = cmd_size_idx_1;
      loop_ub = hex_size[1];
      cmd_size_idx_1 = (aux + loop_ub) + 10;
      for (i = 0; i < 9; i++) {
        cmd_data[aux + i] = i_0[i];
      }

      for (i = 0; i < loop_ub; i++) {
        cmd_data[(aux + i) + 9] = strCmd_data[i];
      }

      cmd_data[(aux + loop_ub) + 9] = '\x0d';
    } else if ((ARDroneHover_DW.SequenceNumber >= 22.0) &&
               (ARDroneHover_DW.SequenceNumber < 25.0)) {
      /* '<S13>:1:53' */
      /* '<S13>:1:54' */
      aux = cmd_size_idx_1;
      loop_ub = hex_size[1];
      cmd_size_idx_1 = (aux + loop_ub) + 41;
      loop_ub--;
      for (i = 0; i < 10; i++) {
        cmd_data[aux + i] = c[i];
      }

      for (i = 0; i <= loop_ub; i++) {
        cmd_data[(aux + i) + 10] = strCmd_data[i];
      }

      for (i = 0; i < 30; i++) {
        cmd_data[((aux + i) + loop_ub) + 11] = h[i];
      }

      cmd_data[(aux + loop_ub) + 41] = '\x0d';
    } else {
      if (ARDroneHover_DW.SequenceNumber >= 25.0) {
        /* '<S13>:1:57' */
        if (bytesToRead == 1.0) {
          /* '<S13>:1:59' */
          if (isFlying == 0.0) {
            /* '<S13>:1:61' */
            /* '<S13>:1:63' */
            ARDroneHover_DW.SequenceNumber++;

            /* '<S13>:1:64' */
            ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data,
              hex_size);

            /* '<S13>:1:65' */
            aux = cmd_size_idx_1;
            loop_ub = hex_size[1];
            cmd_size_idx_1 = (aux + loop_ub) + 18;
            loop_ub--;
            for (i = 0; i < 7; i++) {
              cmd_data[aux + i] = f[i];
            }

            for (i = 0; i <= loop_ub; i++) {
              cmd_data[(aux + i) + 7] = strCmd_data[i];
            }

            for (i = 0; i < 10; i++) {
              cmd_data[((aux + i) + loop_ub) + 8] = j[i];
            }

            cmd_data[(aux + loop_ub) + 18] = '\x0d';
          } else {
            if ((isFlying == 1.0) && (enableRefs == 1.0)) {
              /* '<S13>:1:67' */
              /* '<S13>:1:69' */
              ARDroneHover_DW.SequenceNumber++;

              /* '<S13>:1:70' */
              ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data,
                hex_size);

              /* '<S13>:1:72' */
              aux = cmd_size_idx_1;
              loop_ub = hex_size[1];
              cmd_size_idx_1 = (aux + loop_ub) + 11;
              loop_ub--;
              for (i = 0; i < 8; i++) {
                cmd_data[aux + i] = l[i];
              }

              for (i = 0; i <= loop_ub; i++) {
                cmd_data[(aux + i) + 8] = strCmd_data[i];
              }

              cmd_data[(aux + loop_ub) + 9] = ',';
              cmd_data[(aux + loop_ub) + 10] = '1';
              cmd_data[(aux + loop_ub) + 11] = ',';

              /* '<S13>:1:74' */
              aux = ARDroneHover_float2IEEE754(bytesLeft);

              /* '<S13>:1:75' */
              ARDroneHover_getString(fabs((real_T)aux), strCmd_data, hex_size);
              b_hex_size_idx_1 = hex_size[1];
              loop_ub = hex_size[0] * hex_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&b_hex_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (bytesLeft < 0.0) {
                /* '<S13>:1:76' */
                /* '<S13>:1:77' */
                b_hex_size_idx_1 = hex_size[1] + 1;
                loop_ub = hex_size[0] * hex_size[1] - 1;
                b_hex_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&b_hex_data[1], &strCmd_data[0], (loop_ub + 1) * sizeof
                         (char_T));
                }
              }

              /* '<S13>:1:79' */
              aux = cmd_size_idx_1;
              m = b_hex_size_idx_1;
              cmd_size_idx_1 = (aux + m) + 1;
              for (i = 0; i < m; i++) {
                cmd_data[aux + i] = b_hex_data[i];
              }

              cmd_data[aux + m] = ',';

              /* '<S13>:1:81' */
              aux = ARDroneHover_float2IEEE754(psi_e);

              /* '<S13>:1:82' */
              ARDroneHover_getString(fabs((real_T)aux), strCmd_data, hex_size);
              b_hex_size_idx_1 = hex_size[1];
              loop_ub = hex_size[0] * hex_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&b_hex_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (psi_e < 0.0) {
                /* '<S13>:1:83' */
                /* '<S13>:1:84' */
                b_hex_size_idx_1 = hex_size[1] + 1;
                loop_ub = hex_size[0] * hex_size[1] - 1;
                b_hex_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&b_hex_data[1], &strCmd_data[0], (loop_ub + 1) * sizeof
                         (char_T));
                }
              }

              /* '<S13>:1:86' */
              aux = cmd_size_idx_1;
              m = b_hex_size_idx_1;
              cmd_size_idx_1 = (aux + m) + 1;
              for (i = 0; i < m; i++) {
                cmd_data[aux + i] = b_hex_data[i];
              }

              cmd_data[aux + m] = ',';

              /* '<S13>:1:88' */
              aux = ARDroneHover_float2IEEE754(tmp_m);

              /* '<S13>:1:89' */
              ARDroneHover_getString(fabs((real_T)aux), strCmd_data, hex_size);
              b_hex_size_idx_1 = hex_size[1];
              loop_ub = hex_size[0] * hex_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&b_hex_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (tmp_m < 0.0) {
                /* '<S13>:1:90' */
                /* '<S13>:1:91' */
                b_hex_size_idx_1 = hex_size[1] + 1;
                loop_ub = hex_size[0] * hex_size[1] - 1;
                b_hex_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&b_hex_data[1], &strCmd_data[0], (loop_ub + 1) * sizeof
                         (char_T));
                }
              }

              /* '<S13>:1:93' */
              aux = cmd_size_idx_1;
              m = b_hex_size_idx_1;
              cmd_size_idx_1 = (aux + m) + 1;
              for (i = 0; i < m; i++) {
                cmd_data[aux + i] = b_hex_data[i];
              }

              cmd_data[aux + m] = ',';

              /* '<S13>:1:96' */
              aux = ARDroneHover_float2IEEE754(tmp_l);

              /* '<S13>:1:97' */
              ARDroneHover_getString(fabs((real_T)aux), strCmd_data, hex_size);
              b_hex_size_idx_1 = hex_size[1];
              loop_ub = hex_size[0] * hex_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&b_hex_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (tmp_l < 0.0) {
                /* '<S13>:1:98' */
                /* '<S13>:1:99' */
                samplesRead = 2;

                /* '<S13>:1:100' */
                b_hex_size_idx_1 = hex_size[1] + 1;
                loop_ub = hex_size[0] * hex_size[1] - 1;
                b_hex_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&b_hex_data[1], &strCmd_data[0], (loop_ub + 1) * sizeof
                         (char_T));
                }
              }

              /* '<S13>:1:102' */
              aux = cmd_size_idx_1;
              m = b_hex_size_idx_1;
              cmd_size_idx_1 = (aux + m) + 1;
              for (i = 0; i < m; i++) {
                cmd_data[aux + i] = b_hex_data[i];
              }

              cmd_data[aux + m] = '\x0d';
            }
          }
        } else {
          if ((bytesToRead == 0.0) && (isFlying == 1.0)) {
            /* '<S13>:1:108' */
            /* '<S13>:1:110' */
            /* '<S13>:1:111' */
            ARDroneHover_DW.SequenceNumber++;

            /* '<S13>:1:112' */
            ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data,
              hex_size);

            /* '<S13>:1:113' */
            aux = cmd_size_idx_1;
            loop_ub = hex_size[1];
            cmd_size_idx_1 = (aux + loop_ub) + 18;
            loop_ub--;
            for (i = 0; i < 7; i++) {
              cmd_data[aux + i] = f[i];
            }

            for (i = 0; i <= loop_ub; i++) {
              cmd_data[(aux + i) + 7] = strCmd_data[i];
            }

            for (i = 0; i < 10; i++) {
              cmd_data[((aux + i) + loop_ub) + 8] = k[i];
            }

            cmd_data[(aux + loop_ub) + 18] = '\x0d';
          }
        }
      }
    }

    /* '<S13>:1:126' */
    for (i = 0; i < cmd_size_idx_1; i++) {
      ARDroneHover_B.dataControl[i] = (uint8_T)cmd_data[i];
    }

    /* '<S13>:1:131' */
    ARDroneHover_B.isFlying = isFlying;
    ARDroneHover_B.error = samplesRead;

    /* RateTransition: '<S14>/Rate Transition' */
    if (rtmIsMajorTimeStep(ARDroneHover_M)) {
      /* RateTransition: '<S14>/Rate Transition' incorporates:
       *  Constant: '<S14>/Constant'
       */
      ARDroneHover_B.RateTransition[0] = ARDroneHover_P.Constant_Value_k[0];
      ARDroneHover_B.RateTransition[1] = ARDroneHover_P.Constant_Value_k[1];
    }

    /* End of RateTransition: '<S14>/Rate Transition' */
    /* Sum: '<S75>/Add1' */
    ARDroneHover_B.Add1[0] = ARDroneHover_B.Gain1 - ARDroneHover_B.phi_r;
    ARDroneHover_B.Add1[1] = ARDroneHover_B.Gain2 - ARDroneHover_B.theta_r;
    ARDroneHover_B.Add1[2] = ARDroneHover_B.Gain3 - ARDroneHover_B.psi_d;

    /* Sum: '<S75>/Add' */
    ARDroneHover_B.Add[0] = ARDroneHover_B.X_em - ARDroneHover_B.pd[0];
    ARDroneHover_B.Add[1] = ARDroneHover_B.Y_em - ARDroneHover_B.pd[1];
    ARDroneHover_B.Add[2] = ARDroneHover_B.Gain_l - ARDroneHover_B.pd[2];

    /* MATLAB Function: '<S75>/normalize angle  between -pi and pi radians' */
    /* MATLAB Function 'Outer-loop Controller/Error Scopes/normalize angle  between -pi and pi radians': '<S84>:1' */
    /* '<S84>:1:4' */
    if (rtIsNaN(ARDroneHover_B.Add1[2]) || rtIsInf(ARDroneHover_B.Add1[2])) {
      ARDroneHover_B.angleOut = (rtNaN);
    } else if (ARDroneHover_B.Add1[2] == 0.0) {
      ARDroneHover_B.angleOut = 0.0;
    } else {
      ARDroneHover_B.angleOut = fmod(ARDroneHover_B.Add1[2], 6.2831853071795862);
      rEQ0 = (ARDroneHover_B.angleOut == 0.0);
      if (!rEQ0) {
        bytesToRead = fabs(ARDroneHover_B.Add1[2] / 6.2831853071795862);
        rEQ0 = !(fabs(bytesToRead - floor(bytesToRead + 0.5)) >
                 2.2204460492503131E-16 * bytesToRead);
      }

      if (rEQ0) {
        ARDroneHover_B.angleOut = 0.0;
      } else {
        if (ARDroneHover_B.Add1[2] < 0.0) {
          ARDroneHover_B.angleOut += 6.2831853071795862;
        }
      }
    }

    if (ARDroneHover_B.angleOut > 3.1415926535897931) {
      /* '<S84>:1:5' */
      /* '<S84>:1:6' */
      ARDroneHover_B.angleOut += -6.2831853071795862;
    }

    /* End of MATLAB Function: '<S75>/normalize angle  between -pi and pi radians' */
  }

  /* SignalConversion generated from: '<S86>/ SFunction ' incorporates:
   *  MATLAB Function: '<S85>/Velocity from vehicle body frame  to inertial NED  frame'
   */
  ARDroneHover_B.TmpSignalConversionAtSFunctionInport1[0] =
    ARDroneHover_B.TypeConversion5;
  ARDroneHover_B.TmpSignalConversionAtSFunctionInport1[1] =
    ARDroneHover_B.TypeConversion6;

  /* MATLAB Function: '<S85>/Velocity from vehicle body frame  to inertial NED  frame' */
  /* MATLAB Function 'State estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. /Position estimation/Velocity from vehicle body frame  to inertial NED  frame': '<S86>:1' */
  /* '<S86>:1:3' */
  /* '<S86>:1:4' */
  psi_e = cos(ARDroneHover_B.deg2rad[2]);
  bytesToRead = sin(ARDroneHover_B.deg2rad[2]);
  tmp_l = sin(ARDroneHover_B.deg2rad[2]);
  tmp_m = cos(ARDroneHover_B.deg2rad[2]);
  bytesLeft = -bytesToRead;
  ARDroneHover_B.Vel_xy[0] = 0.0;
  ARDroneHover_B.Vel_xy[0] += psi_e *
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1[0];
  ARDroneHover_B.Vel_xy[0] += bytesLeft *
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1[1];
  ARDroneHover_B.Vel_xy[1] = 0.0;
  ARDroneHover_B.Vel_xy[1] += tmp_l *
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1[0];
  ARDroneHover_B.Vel_xy[1] += tmp_m *
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1[1];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
  }
}

/* Model update function */
void ARDroneHover_update(void)
{
  char_T *sErr;

  /* Update for Integrator: '<S70>/Integrator' */
  ARDroneHover_DW.Integrator_IWORK = 0;

  /* Update for Integrator: '<S71>/Integrator' */
  ARDroneHover_DW.Integrator_IWORK_c = 0;

  /* Update for Integrator: '<S72>/Integrator' */
  ARDroneHover_DW.Integrator_IWORK_f = 0;

  /* Update for Integrator: '<S85>/Integrator' */
  ARDroneHover_DW.Integrator_IWORK_p = 0;
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* Update for UnitDelay: '<S1>/Unit Delay to avoid algebraic loop' */
    ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE =
      ARDroneHover_B.isFlying;

    /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
    if (!ARDroneHover_B.Compare) {
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] +=
        ARDroneHover_P.DiscreteTimeIntegrator_gainval * ARDroneHover_B.dot_xi[0];
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] +=
        ARDroneHover_P.DiscreteTimeIntegrator_gainval * ARDroneHover_B.dot_xi[1];
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] +=
        ARDroneHover_P.DiscreteTimeIntegrator_gainval * ARDroneHover_B.dot_xi[2];
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] +=
        ARDroneHover_P.DiscreteTimeIntegrator_gainval * ARDroneHover_B.dot_xi[3];
      if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] >=
          ARDroneHover_P.DiscreteTimeIntegrator_UpperSat) {
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] =
          ARDroneHover_P.DiscreteTimeIntegrator_UpperSat;
      } else {
        if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] <=
            ARDroneHover_P.DiscreteTimeIntegrator_LowerSat) {
          ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] =
            ARDroneHover_P.DiscreteTimeIntegrator_LowerSat;
        }
      }

      if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] >=
          ARDroneHover_P.DiscreteTimeIntegrator_UpperSat) {
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] =
          ARDroneHover_P.DiscreteTimeIntegrator_UpperSat;
      } else {
        if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] <=
            ARDroneHover_P.DiscreteTimeIntegrator_LowerSat) {
          ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] =
            ARDroneHover_P.DiscreteTimeIntegrator_LowerSat;
        }
      }

      if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] >=
          ARDroneHover_P.DiscreteTimeIntegrator_UpperSat) {
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] =
          ARDroneHover_P.DiscreteTimeIntegrator_UpperSat;
      } else {
        if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] <=
            ARDroneHover_P.DiscreteTimeIntegrator_LowerSat) {
          ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] =
            ARDroneHover_P.DiscreteTimeIntegrator_LowerSat;
        }
      }

      if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] >=
          ARDroneHover_P.DiscreteTimeIntegrator_UpperSat) {
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] =
          ARDroneHover_P.DiscreteTimeIntegrator_UpperSat;
      } else {
        if (ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] <=
            ARDroneHover_P.DiscreteTimeIntegrator_LowerSat) {
          ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] =
            ARDroneHover_P.DiscreteTimeIntegrator_LowerSat;
        }
      }
    }

    ARDroneHover_DW.DiscreteTimeIntegrator_PrevResetState = (int8_T)
      ARDroneHover_B.Compare;

    /* End of Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */

    /* Update for S-Function (sdspToNetwork): '<S11>/UDP Send' */
    sErr = GetErrorBuffer(&ARDroneHover_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&ARDroneHover_DW.UDPSend_NetworkLib[0U],
                      &ARDroneHover_B.dataControl[0U], 150);
    if (*sErr != 0) {
      rtmSetErrorStatus(ARDroneHover_M, sErr);
      rtmSetStopRequested(ARDroneHover_M, 1);
    }

    /* End of Update for S-Function (sdspToNetwork): '<S11>/UDP Send' */

    /* Update for S-Function (sdspToNetwork): '<S14>/UDP Send' */
    sErr = GetErrorBuffer(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U]);
    LibUpdate_Network(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U],
                      &ARDroneHover_B.RateTransition[0U], 2);
    if (*sErr != 0) {
      rtmSetErrorStatus(ARDroneHover_M, sErr);
      rtmSetStopRequested(ARDroneHover_M, 1);
    }

    /* End of Update for S-Function (sdspToNetwork): '<S14>/UDP Send' */
  }

  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    rt_ertODEUpdateContinuousStates(&ARDroneHover_M->solverInfo);
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
  if (!(++ARDroneHover_M->Timing.clockTick0)) {
    ++ARDroneHover_M->Timing.clockTickH0;
  }

  ARDroneHover_M->Timing.t[0] = rtsiGetSolverStopTime
    (&ARDroneHover_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++ARDroneHover_M->Timing.clockTick1)) {
      ++ARDroneHover_M->Timing.clockTickH1;
    }

    ARDroneHover_M->Timing.t[1] = ARDroneHover_M->Timing.clockTick1 *
      ARDroneHover_M->Timing.stepSize1 + ARDroneHover_M->Timing.clockTickH1 *
      ARDroneHover_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void ARDroneHover_derivatives(void)
{
  XDot_ARDroneHover_T *_rtXdot;
  _rtXdot = ((XDot_ARDroneHover_T *) ARDroneHover_M->derivs);

  /* Derivatives for Integrator: '<S70>/Integrator' */
  _rtXdot->Integrator_CSTATE = ARDroneHover_B.Gain;

  /* Derivatives for Integrator: '<S71>/Integrator' */
  _rtXdot->Integrator_CSTATE_h = ARDroneHover_B.Gain_d;

  /* Derivatives for Integrator: '<S72>/Integrator' */
  _rtXdot->Integrator_CSTATE_hy = ARDroneHover_B.Gain_f;

  /* Derivatives for Integrator: '<S85>/Integrator' */
  _rtXdot->Integrator_CSTATE_d[0] = ARDroneHover_B.Vel_xy[0];
  _rtXdot->Integrator_CSTATE_d[1] = ARDroneHover_B.Vel_xy[1];
}

/* Model initialize function */
void ARDroneHover_initialize(void)
{
  {
    char_T *sErr;

    /* Start for S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
    sErr = GetErrorBuffer(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U]);
    CreateUDPInterface(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U], 0,
                        "0.0.0.0", ARDroneHover_P.UDPReceive1_localPort,
                        "192.168.1.1", -1, 500, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(ARDroneHover_M, sErr);
        rtmSetStopRequested(ARDroneHover_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */

    /* Start for S-Function (sdspFromNetwork): '<S3>/UDP Receive' */
    sErr = GetErrorBuffer(&ARDroneHover_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&ARDroneHover_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&ARDroneHover_DW.UDPReceive_NetworkLib[0U], 0, "0.0.0.0",
                        ARDroneHover_P.UDPReceive_localPort, "169.254.54.40", -1,
                        64, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&ARDroneHover_DW.UDPReceive_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&ARDroneHover_DW.UDPReceive_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(ARDroneHover_M, sErr);
        rtmSetStopRequested(ARDroneHover_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<S3>/UDP Receive' */

    /* Start for Constant: '<S85>/Constant1' */
    ARDroneHover_B.Constant1[0] = ARDroneHover_P.Constant1_Value_b[0];
    ARDroneHover_B.Constant1[1] = ARDroneHover_P.Constant1_Value_b[1];

    /* Start for S-Function (sdspToNetwork): '<S11>/UDP Send' */
    sErr = GetErrorBuffer(&ARDroneHover_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&ARDroneHover_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&ARDroneHover_DW.UDPSend_NetworkLib[0U], 1, "0.0.0.0",
                        5556, "192.168.1.1", ARDroneHover_P.UDPSend_remotePort,
                        8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&ARDroneHover_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&ARDroneHover_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(ARDroneHover_M, sErr);
        rtmSetStopRequested(ARDroneHover_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S11>/UDP Send' */

    /* Start for S-Function (sdspToNetwork): '<S14>/UDP Send' */
    sErr = GetErrorBuffer(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U]);
    CreateUDPInterface(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U], 1, "0.0.0.0",
                        5554, "192.168.1.1", ARDroneHover_P.UDPSend_remotePort_a,
                        8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(ARDroneHover_M, sErr);
        rtmSetStopRequested(ARDroneHover_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S14>/UDP Send' */
  }

  /* InitializeConditions for Integrator: '<S70>/Integrator' incorporates:
   *  Integrator: '<S71>/Integrator'
   */
  if (rtmIsFirstInitCond(ARDroneHover_M)) {
    ARDroneHover_X.Integrator_CSTATE = 0.0;
    ARDroneHover_X.Integrator_CSTATE_h = 0.0;
  }

  ARDroneHover_DW.Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S70>/Integrator' */

  /* InitializeConditions for Integrator: '<S71>/Integrator' */
  ARDroneHover_DW.Integrator_IWORK_c = 1;

  /* InitializeConditions for Integrator: '<S72>/Integrator' incorporates:
   *  Integrator: '<S85>/Integrator'
   */
  if (rtmIsFirstInitCond(ARDroneHover_M)) {
    ARDroneHover_X.Integrator_CSTATE_hy = 0.0;
    ARDroneHover_X.Integrator_CSTATE_d[0] = 0.0;
    ARDroneHover_X.Integrator_CSTATE_d[1] = 0.0;
  }

  ARDroneHover_DW.Integrator_IWORK_f = 1;

  /* End of InitializeConditions for Integrator: '<S72>/Integrator' */

  /* InitializeConditions for Integrator: '<S85>/Integrator' */
  ARDroneHover_DW.Integrator_IWORK_p = 1;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay to avoid algebraic loop' */
  ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE =
    ARDroneHover_P.UnitDelaytoavoidalgebraicloop_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] =
    ARDroneHover_P.DiscreteTimeIntegrator_IC[0];
  ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] =
    ARDroneHover_P.DiscreteTimeIntegrator_IC[1];
  ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] =
    ARDroneHover_P.DiscreteTimeIntegrator_IC[2];
  ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] =
    ARDroneHover_P.DiscreteTimeIntegrator_IC[3];
  ARDroneHover_DW.DiscreteTimeIntegrator_PrevResetState = 0;

  /* SystemInitialize for MATLAB Function: '<S1>/Data synchronization ' */
  memset(&ARDroneHover_DW.buffer[0], 0, sizeof(uint8_T) << 10U);
  ARDroneHover_DW.countBuffer = 0.0;
  ARDroneHover_DW.count = 0.0;
  ARDroneHover_DW.countHeader = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/ARDrone data decoding' */
  ARDroneHover_DW.hPrev = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/Data synchronization ' */
  memset(&ARDroneHover_DW.frame[0], 0, 496U * sizeof(uint8_T));
  memset(&ARDroneHover_DW.lastFrame[0], 0, 496U * sizeof(uint8_T));

  /* SystemInitialize for MATLAB Function: '<S1>/ARDrone data decoding' */
  memset(&ARDroneHover_DW.dataPrev[0], 0, 496U * sizeof(uint8_T));

  /* SystemInitialize for MATLAB Function: '<S65>/MATLAB Function' */
  ARDroneHover_MATLABFunction_Init(&ARDroneHover_DW.sf_MATLABFunction);

  /* SystemInitialize for MATLAB Function: '<S65>/MATLAB Function1' */
  ARDroneHover_MATLABFunction_Init(&ARDroneHover_DW.sf_MATLABFunction1_a);

  /* SystemInitialize for MATLAB Function: '<S65>/MATLAB Function2' */
  ARDroneHover_MATLABFunction_Init(&ARDroneHover_DW.sf_MATLABFunction2_l);

  /* SystemInitialize for MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  ARDroneHover_DW.yaw0 = 0.0;
  ARDroneHover_DW.mode = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function1' */
  ARDroneHover_DW.t0_not_empty = false;
  ARDroneHover_DW.previous_status_not_empty = false;
  ARDroneHover_DW.previous_status = 1.0;

  /* SystemInitialize for MATLAB Function: '<S11>/Drone state request' */
  ARDroneHover_DW.SequenceNumber = 1.0;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(ARDroneHover_M)) {
    rtmSetFirstInitCond(ARDroneHover_M, 0);
  }
}

/* Model terminate function */
void ARDroneHover_terminate(void)
{
  char_T *sErr;

  /* Terminate for S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
  sErr = GetErrorBuffer(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U]);
  LibTerminate(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(ARDroneHover_M, sErr);
    rtmSetStopRequested(ARDroneHover_M, 1);
  }

  LibDestroy(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U], 0);
  DestroyUDPInterface(&ARDroneHover_DW.UDPReceive1_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */

  /* Terminate for S-Function (sdspFromNetwork): '<S3>/UDP Receive' */
  sErr = GetErrorBuffer(&ARDroneHover_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&ARDroneHover_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(ARDroneHover_M, sErr);
    rtmSetStopRequested(ARDroneHover_M, 1);
  }

  LibDestroy(&ARDroneHover_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&ARDroneHover_DW.UDPReceive_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S3>/UDP Receive' */
  /* Terminate for S-Function (sdspToNetwork): '<S11>/UDP Send' */
  sErr = GetErrorBuffer(&ARDroneHover_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&ARDroneHover_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(ARDroneHover_M, sErr);
    rtmSetStopRequested(ARDroneHover_M, 1);
  }

  LibDestroy(&ARDroneHover_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&ARDroneHover_DW.UDPSend_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S11>/UDP Send' */

  /* Terminate for S-Function (sdspToNetwork): '<S14>/UDP Send' */
  sErr = GetErrorBuffer(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U]);
  LibTerminate(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(ARDroneHover_M, sErr);
    rtmSetStopRequested(ARDroneHover_M, 1);
  }

  LibDestroy(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U], 1);
  DestroyUDPInterface(&ARDroneHover_DW.UDPSend_NetworkLib_h[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S14>/UDP Send' */
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
  ARDroneHover_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ARDroneHover_update();
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
  ARDroneHover_initialize();
}

void MdlTerminate(void)
{
  ARDroneHover_terminate();
}

/* Registration function */
RT_MODEL_ARDroneHover_T *ARDroneHover(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ARDroneHover_M, 0,
                sizeof(RT_MODEL_ARDroneHover_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ARDroneHover_M->solverInfo,
                          &ARDroneHover_M->Timing.simTimeStep);
    rtsiSetTPtr(&ARDroneHover_M->solverInfo, &rtmGetTPtr(ARDroneHover_M));
    rtsiSetStepSizePtr(&ARDroneHover_M->solverInfo,
                       &ARDroneHover_M->Timing.stepSize0);
    rtsiSetdXPtr(&ARDroneHover_M->solverInfo, &ARDroneHover_M->derivs);
    rtsiSetContStatesPtr(&ARDroneHover_M->solverInfo, (real_T **)
                         &ARDroneHover_M->contStates);
    rtsiSetNumContStatesPtr(&ARDroneHover_M->solverInfo,
      &ARDroneHover_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&ARDroneHover_M->solverInfo,
      &ARDroneHover_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&ARDroneHover_M->solverInfo,
      &ARDroneHover_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&ARDroneHover_M->solverInfo,
      &ARDroneHover_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&ARDroneHover_M->solverInfo, (&rtmGetErrorStatus
      (ARDroneHover_M)));
    rtsiSetRTModelPtr(&ARDroneHover_M->solverInfo, ARDroneHover_M);
  }

  rtsiSetSimTimeStep(&ARDroneHover_M->solverInfo, MAJOR_TIME_STEP);
  ARDroneHover_M->intgData.f[0] = ARDroneHover_M->odeF[0];
  ARDroneHover_M->contStates = ((real_T *) &ARDroneHover_X);
  rtsiSetSolverData(&ARDroneHover_M->solverInfo, (void *)
                    &ARDroneHover_M->intgData);
  rtsiSetSolverName(&ARDroneHover_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ARDroneHover_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    ARDroneHover_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ARDroneHover_M->Timing.sampleTimes =
      (&ARDroneHover_M->Timing.sampleTimesArray[0]);
    ARDroneHover_M->Timing.offsetTimes =
      (&ARDroneHover_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ARDroneHover_M->Timing.sampleTimes[0] = (0.0);
    ARDroneHover_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    ARDroneHover_M->Timing.offsetTimes[0] = (0.0);
    ARDroneHover_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(ARDroneHover_M, &ARDroneHover_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ARDroneHover_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    ARDroneHover_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ARDroneHover_M, -1);
  ARDroneHover_M->Timing.stepSize0 = 0.01;
  ARDroneHover_M->Timing.stepSize1 = 0.01;
  rtmSetFirstInitCond(ARDroneHover_M, 1);

  /* External mode info */
  ARDroneHover_M->Sizes.checksums[0] = (40893877U);
  ARDroneHover_M->Sizes.checksums[1] = (4027954335U);
  ARDroneHover_M->Sizes.checksums[2] = (4061695294U);
  ARDroneHover_M->Sizes.checksums[3] = (3534872955U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[71];
    ARDroneHover_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    systemRan[26] = &rtAlwaysEnabled;
    systemRan[27] = &rtAlwaysEnabled;
    systemRan[28] = &rtAlwaysEnabled;
    systemRan[29] = &rtAlwaysEnabled;
    systemRan[30] = &rtAlwaysEnabled;
    systemRan[31] = &rtAlwaysEnabled;
    systemRan[32] = &rtAlwaysEnabled;
    systemRan[33] = &rtAlwaysEnabled;
    systemRan[34] = &rtAlwaysEnabled;
    systemRan[35] = &rtAlwaysEnabled;
    systemRan[36] = &rtAlwaysEnabled;
    systemRan[37] = &rtAlwaysEnabled;
    systemRan[38] = &rtAlwaysEnabled;
    systemRan[39] = &rtAlwaysEnabled;
    systemRan[40] = &rtAlwaysEnabled;
    systemRan[41] = &rtAlwaysEnabled;
    systemRan[42] = &rtAlwaysEnabled;
    systemRan[43] = &rtAlwaysEnabled;
    systemRan[44] = &rtAlwaysEnabled;
    systemRan[45] = &rtAlwaysEnabled;
    systemRan[46] = &rtAlwaysEnabled;
    systemRan[47] = &rtAlwaysEnabled;
    systemRan[48] = &rtAlwaysEnabled;
    systemRan[49] = &rtAlwaysEnabled;
    systemRan[50] = &rtAlwaysEnabled;
    systemRan[51] = &rtAlwaysEnabled;
    systemRan[52] = &rtAlwaysEnabled;
    systemRan[53] = &rtAlwaysEnabled;
    systemRan[54] = &rtAlwaysEnabled;
    systemRan[55] = &rtAlwaysEnabled;
    systemRan[56] = &rtAlwaysEnabled;
    systemRan[57] = &rtAlwaysEnabled;
    systemRan[58] = &rtAlwaysEnabled;
    systemRan[59] = &rtAlwaysEnabled;
    systemRan[60] = &rtAlwaysEnabled;
    systemRan[61] = &rtAlwaysEnabled;
    systemRan[62] = &rtAlwaysEnabled;
    systemRan[63] = &rtAlwaysEnabled;
    systemRan[64] = &rtAlwaysEnabled;
    systemRan[65] = &rtAlwaysEnabled;
    systemRan[66] = &rtAlwaysEnabled;
    systemRan[67] = &rtAlwaysEnabled;
    systemRan[68] = &rtAlwaysEnabled;
    systemRan[69] = &rtAlwaysEnabled;
    systemRan[70] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ARDroneHover_M->extModeInfo,
      &ARDroneHover_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ARDroneHover_M->extModeInfo,
                        ARDroneHover_M->Sizes.checksums);
    rteiSetTPtr(ARDroneHover_M->extModeInfo, rtmGetTPtr(ARDroneHover_M));
  }

  ARDroneHover_M->solverInfoPtr = (&ARDroneHover_M->solverInfo);
  ARDroneHover_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&ARDroneHover_M->solverInfo, 0.01);
  rtsiSetSolverMode(&ARDroneHover_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ARDroneHover_M->blockIO = ((void *) &ARDroneHover_B);
  (void) memset(((void *) &ARDroneHover_B), 0,
                sizeof(B_ARDroneHover_T));

  {
    int32_T i;
    for (i = 0; i < 9; i++) {
      ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_b[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      ARDroneHover_B.TmpSignalConversionAtSFunctionInport2[i] = 0.0;
    }

    for (i = 0; i < 32; i++) {
      ARDroneHover_B.status[i] = 0.0;
    }

    ARDroneHover_B.TypeConversion = 0.0;
    ARDroneHover_B.rollanglerad = 0.0;
    ARDroneHover_B.Gain1 = 0.0;
    ARDroneHover_B.pitchanglerad = 0.0;
    ARDroneHover_B.Gain2 = 0.0;
    ARDroneHover_B.yawanglerad = 0.0;
    ARDroneHover_B.Gain3 = 0.0;
    ARDroneHover_B.X_em = 0.0;
    ARDroneHover_B.Integrator = 0.0;
    ARDroneHover_B.Sum = 0.0;
    ARDroneHover_B.Gain = 0.0;
    ARDroneHover_B.Y_em = 0.0;
    ARDroneHover_B.Integrator_c = 0.0;
    ARDroneHover_B.Sum_c = 0.0;
    ARDroneHover_B.Gain_d = 0.0;
    ARDroneHover_B.hm = 0.0;
    ARDroneHover_B.Integrator_a = 0.0;
    ARDroneHover_B.Sum_b = 0.0;
    ARDroneHover_B.Gain_f = 0.0;
    ARDroneHover_B.Gain4 = 0.0;
    ARDroneHover_B.Gain_l = 0.0;
    ARDroneHover_B.TypeConversion4 = 0.0;
    ARDroneHover_B.Constant1[0] = 0.0;
    ARDroneHover_B.Constant1[1] = 0.0;
    ARDroneHover_B.Integrator_g[0] = 0.0;
    ARDroneHover_B.Integrator_g[1] = 0.0;
    ARDroneHover_B.TypeConversion1 = 0.0;
    ARDroneHover_B.TypeConversion2 = 0.0;
    ARDroneHover_B.UnitDelaytoavoidalgebraicloop = 0.0;
    ARDroneHover_B.ManualSwitch2 = 0.0;
    ARDroneHover_B.TypeConversion3 = 0.0;
    ARDroneHover_B.deg2rad[0] = 0.0;
    ARDroneHover_B.deg2rad[1] = 0.0;
    ARDroneHover_B.deg2rad[2] = 0.0;
    ARDroneHover_B.TypeConversion5 = 0.0;
    ARDroneHover_B.TypeConversion6 = 0.0;
    ARDroneHover_B.TypeConversion7 = 0.0;
    ARDroneHover_B.deg2rad1 = 0.0;
    ARDroneHover_B.Clock1 = 0.0;
    ARDroneHover_B.Gain_j = 0.0;
    ARDroneHover_B.Sum3 = 0.0;
    ARDroneHover_B.proportionalcontrolgain = 0.0;
    ARDroneHover_B.Sum1 = 0.0;
    ARDroneHover_B.proportionalcontrolgainyaw = 0.0;
    ARDroneHover_B.Sum4[0] = 0.0;
    ARDroneHover_B.Sum4[1] = 0.0;
    ARDroneHover_B.Gain2_o = 0.0;
    ARDroneHover_B.Gain3_m = 0.0;
    ARDroneHover_B.DiscreteTimeIntegrator[0] = 0.0;
    ARDroneHover_B.DiscreteTimeIntegrator[1] = 0.0;
    ARDroneHover_B.DiscreteTimeIntegrator[2] = 0.0;
    ARDroneHover_B.DiscreteTimeIntegrator[3] = 0.0;
    ARDroneHover_B.ManualSwitch3[0] = 0.0;
    ARDroneHover_B.ManualSwitch3[1] = 0.0;
    ARDroneHover_B.ManualSwitch3[2] = 0.0;
    ARDroneHover_B.ManualSwitch3[3] = 0.0;
    ARDroneHover_B.Saturation1 = 0.0;
    ARDroneHover_B.Saturation2 = 0.0;
    ARDroneHover_B.Saturation3 = 0.0;
    ARDroneHover_B.Saturation4 = 0.0;
    ARDroneHover_B.ManualSwitch1 = 0.0;
    ARDroneHover_B.KillSwitch = 0.0;
    ARDroneHover_B.Add1[0] = 0.0;
    ARDroneHover_B.Add1[1] = 0.0;
    ARDroneHover_B.Add1[2] = 0.0;
    ARDroneHover_B.Add[0] = 0.0;
    ARDroneHover_B.Add[1] = 0.0;
    ARDroneHover_B.Add[2] = 0.0;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1[0] = 0.0;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1[1] = 0.0;
    ARDroneHover_B.Vel_xy[0] = 0.0;
    ARDroneHover_B.Vel_xy[1] = 0.0;
    ARDroneHover_B.Sum2 = 0.0;
    ARDroneHover_B.Gain_h = 0.0;
    ARDroneHover_B.Sum5 = 0.0;
    ARDroneHover_B.Gain1_j = 0.0;
    ARDroneHover_B.w_r = 0.0;
    ARDroneHover_B.dot_psi_r = 0.0;
    ARDroneHover_B.theta_r = 0.0;
    ARDroneHover_B.phi_r = 0.0;
    ARDroneHover_B.dot_xi[0] = 0.0;
    ARDroneHover_B.dot_xi[1] = 0.0;
    ARDroneHover_B.dot_xi[2] = 0.0;
    ARDroneHover_B.dot_xi[3] = 0.0;
    ARDroneHover_B.angleOut = 0.0;
    ARDroneHover_B.Vec_xy[0] = 0.0;
    ARDroneHover_B.Vec_xy[1] = 0.0;
    ARDroneHover_B.angleOut_f = 0.0;
    ARDroneHover_B.pd[0] = 0.0;
    ARDroneHover_B.pd[1] = 0.0;
    ARDroneHover_B.pd[2] = 0.0;
    ARDroneHover_B.dot_pd[0] = 0.0;
    ARDroneHover_B.dot_pd[1] = 0.0;
    ARDroneHover_B.dot_pd[2] = 0.0;
    ARDroneHover_B.ddot_pd[0] = 0.0;
    ARDroneHover_B.ddot_pd[1] = 0.0;
    ARDroneHover_B.ddot_pd[2] = 0.0;
    ARDroneHover_B.psi_d = 0.0;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[0] = 0.0;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[1] = 0.0;
    ARDroneHover_B.TmpSignalConversionAtSFunctionInport1_d[2] = 0.0;
    ARDroneHover_B.v_b[0] = 0.0;
    ARDroneHover_B.v_b[1] = 0.0;
    ARDroneHover_B.v_b[2] = 0.0;
    ARDroneHover_B.yawOut = 0.0;
    ARDroneHover_B.isFlying = 0.0;
    ARDroneHover_B.error = 0.0;
    ARDroneHover_B.flagOut = 0.0;
    ARDroneHover_B.height = 0.0;
    ARDroneHover_B.cksumError = 0.0;
    ARDroneHover_B.Gain6 = 0.0F;
    ARDroneHover_B.Gain7 = 0.0F;
    ARDroneHover_B.Gain_n = 0.0F;
    ARDroneHover_B.Gain1_c = 0.0F;
    ARDroneHover_B.Gain9 = 0.0F;
    ARDroneHover_B.Gain2_d = 0.0F;
    ARDroneHover_B.Gain10 = 0.0F;
    ARDroneHover_B.X = 0.0F;
    ARDroneHover_B.Y = 0.0F;
    ARDroneHover_B.Z = 0.0F;
    ARDroneHover_B.Roll = 0.0F;
    ARDroneHover_B.Pitch = 0.0F;
    ARDroneHover_B.Yaw = 0.0F;
    ARDroneHover_B.rollAngle = 0.0F;
    ARDroneHover_B.pitchAngle = 0.0F;
    ARDroneHover_B.yawAngle = 0.0F;
    ARDroneHover_B.u = 0.0F;
    ARDroneHover_B.v = 0.0F;
    ARDroneHover_B.w = 0.0F;
    ARDroneHover_B.sf_MATLABFunction2_l.y = 0.0;
    ARDroneHover_B.sf_MATLABFunction1_a.y = 0.0;
    ARDroneHover_B.sf_MATLABFunction.y = 0.0;
  }

  /* parameters */
  ARDroneHover_M->defaultParam = ((real_T *)&ARDroneHover_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &ARDroneHover_X;
    ARDroneHover_M->contStates = (x);
    (void) memset((void *)&ARDroneHover_X, 0,
                  sizeof(X_ARDroneHover_T));
  }

  /* states (dwork) */
  ARDroneHover_M->dwork = ((void *) &ARDroneHover_DW);
  (void) memset((void *)&ARDroneHover_DW, 0,
                sizeof(DW_ARDroneHover_T));
  ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE = 0.0;
  ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] = 0.0;
  ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] = 0.0;
  ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] = 0.0;
  ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] = 0.0;

  {
    int32_T i;
    for (i = 0; i < 137; i++) {
      ARDroneHover_DW.UDPReceive1_NetworkLib[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 137; i++) {
      ARDroneHover_DW.UDPReceive_NetworkLib[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 137; i++) {
      ARDroneHover_DW.UDPSend_NetworkLib[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 137; i++) {
      ARDroneHover_DW.UDPSend_NetworkLib_h[i] = 0.0;
    }
  }

  ARDroneHover_DW.t0 = 0.0;
  ARDroneHover_DW.p0[0] = 0.0;
  ARDroneHover_DW.p0[1] = 0.0;
  ARDroneHover_DW.p0[2] = 0.0;
  ARDroneHover_DW.previous_status = 0.0;
  ARDroneHover_DW.yaw0 = 0.0;
  ARDroneHover_DW.mode = 0.0;
  ARDroneHover_DW.SequenceNumber = 0.0;
  ARDroneHover_DW.count = 0.0;
  ARDroneHover_DW.countHeader = 0.0;
  ARDroneHover_DW.countBuffer = 0.0;
  ARDroneHover_DW.hPrev = 0.0;
  ARDroneHover_DW.sf_MATLABFunction2_l.u_ = 0.0;
  ARDroneHover_DW.sf_MATLABFunction1_a.u_ = 0.0;
  ARDroneHover_DW.sf_MATLABFunction.u_ = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ARDroneHover_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  ARDroneHover_M->Sizes.numContStates = (5);/* Number of continuous states */
  ARDroneHover_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  ARDroneHover_M->Sizes.numY = (0);    /* Number of model outputs */
  ARDroneHover_M->Sizes.numU = (0);    /* Number of model inputs */
  ARDroneHover_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ARDroneHover_M->Sizes.numSampTimes = (2);/* Number of sample times */
  ARDroneHover_M->Sizes.numBlocks = (189);/* Number of blocks */
  ARDroneHover_M->Sizes.numBlockIO = (180);/* Number of block outputs */
  ARDroneHover_M->Sizes.numBlockPrms = (60);/* Sum of parameter "widths" */
  return ARDroneHover_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
