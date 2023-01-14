/*
 * ARDroneHover.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "ARDroneHover".
 *
 * Model version              : $Id: UAV_PIL.mdl 965 2013-03-21 01:08:53Z escobar $
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Mon Jan 17 11:06:09 2022
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

/* options for Simulink Desktop Real-Time board 0 */
static double SLDRTBoardOptions0[] = {
  3.232235777E+9,
  5554.0,
};

/* options for Simulink Desktop Real-Time board 1 */
static double SLDRTBoardOptions1[] = {
  0.0,
  9089.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
};

/* options for Simulink Desktop Real-Time board 2 */
static double SLDRTBoardOptions2[] = {
  3.232235777E+9,
  5556.0,
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 2;
const double SLDRTTimers[4] = {
  0.065, 0.0,
  0.65, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 3;
SLDRTBOARD SLDRTBoards[3] = {
  { "Standard_Devices/UDP_Protocol", 5554U, 2, SLDRTBoardOptions0 },

  { "Standard_Devices/UDP_Protocol", 9089U, 256, SLDRTBoardOptions1 },

  { "Standard_Devices/UDP_Protocol", 5556U, 2, SLDRTBoardOptions2 },
};

/* Block signals (default storage) */
B_ARDroneHover_T ARDroneHover_B;

/* Continuous states */
X_ARDroneHover_T ARDroneHover_X;

/* Block states (default storage) */
DW_ARDroneHover_T ARDroneHover_DW;

/* Real-time model */
RT_MODEL_ARDroneHover_T ARDroneHover_M_;
RT_MODEL_ARDroneHover_T *const ARDroneHover_M = &ARDroneHover_M_;

/* Forward declaration for local functions */
static void ARDroneHover_dec2hex(const uint8_T d[4], char_T s_data[], int32_T
  s_size[2]);
static real_T ARDroneHover_hex2dec(const char_T s_data[], const int32_T s_size[2]);
static void ARDroneHover_getString(real_T a, char_T strOut_data[], int32_T
  strOut_size[2]);
static int32_T ARDroneHover_float2IEEE754(real_T fVal);
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(ARDroneHover_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(ARDroneHover_M, 2);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 1 shares data with slower tid rate: 2 */
  if (ARDroneHover_M->Timing.TaskCounters.TID[1] == 0) {
    ARDroneHover_M->Timing.RateInteraction.TID1_2 =
      (ARDroneHover_M->Timing.TaskCounters.TID[2] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    ARDroneHover_M->Timing.perTaskSampleHits[5] =
      ARDroneHover_M->Timing.RateInteraction.TID1_2;
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ARDroneHover_M->Timing.TaskCounters.TID[2])++;
  if ((ARDroneHover_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.65s, 0.0s] */
    ARDroneHover_M->Timing.TaskCounters.TID[2] = 0;
  }
}

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
  ARDroneHover_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for atomic system:
 *    '<S13>/Bit Concat'
 *    '<S13>/Bit Concat1'
 *    '<S13>/Bit Concat2'
 *    '<S13>/Bit Concat3'
 *    '<S13>/Bit Concat4'
 *    '<S13>/Bit Concat5'
 */
void ARDroneHover_BitConcat(uint8_T rtu_u1, uint8_T rtu_u2, uint8_T rtu_u3,
  uint8_T rtu_u4, B_BitConcat_ARDroneHover_T *localB)
{
  /* Outputs for Atomic SubSystem: '<S14>/bc4' */
  /* Outputs for Atomic SubSystem: '<S14>/bc3' */
  /* Outputs for Atomic SubSystem: '<S14>/bc2' */
  /* MATLAB Function: '<S29>/bit_concat' incorporates:
   *  MATLAB Function: '<S27>/bit_concat'
   *  MATLAB Function: '<S28>/bit_concat'
   */
  /* MATLAB Function 'Bit Concat2/bit_concat': '<S30>:1' */
  /* '<S30>:1:4' */
  /* MATLAB Function 'Bit Concat2/bit_concat': '<S31>:1' */
  /* '<S31>:1:4' */
  /* MATLAB Function 'Bit Concat2/bit_concat': '<S32>:1' */
  /* '<S32>:1:4' */
  localB->y = ((uint32_T)(rtu_u1 << 8 | rtu_u2) << 8 | rtu_u3) << 8 | rtu_u4;

  /* End of Outputs for SubSystem: '<S14>/bc2' */
  /* End of Outputs for SubSystem: '<S14>/bc3' */
  /* End of Outputs for SubSystem: '<S14>/bc4' */
}

/* Function for MATLAB Function: '<S1>/ARDrone data decoding' */
static void ARDroneHover_dec2hex(const uint8_T d[4], char_T s_data[], int32_T
  s_size[2])
{
  uint8_T di;
  uint8_T r;
  int32_T j;
  int32_T firstcol;
  boolean_T p;
  char_T s_data_0[8];
  boolean_T exitg1;
  s_size[0] = 4;
  s_size[1] = 2;
  for (j = 0; j < 8; j++) {
    s_data[j] = '0';
  }

  di = d[0];
  j = 2;
  exitg1 = false;
  while ((!exitg1) && (j > 0)) {
    r = di;
    di = (uint8_T)((uint32_T)di >> 4);
    r = (uint8_T)((uint32_T)r - (di << 4));
    if (r > 9) {
      r = (uint8_T)(r + 7U);
    }

    s_data[(j - 1) << 2] = (int8_T)(r + 48);
    if (di > 0) {
      j--;
    } else {
      exitg1 = true;
    }
  }

  di = d[1];
  j = 2;
  exitg1 = false;
  while ((!exitg1) && (j > 0)) {
    r = di;
    di = (uint8_T)((uint32_T)di >> 4);
    r = (uint8_T)((uint32_T)r - (di << 4));
    if (r > 9) {
      r = (uint8_T)(r + 7U);
    }

    s_data[1 + ((j - 1) << 2)] = (int8_T)(r + 48);
    if (di > 0) {
      j--;
    } else {
      exitg1 = true;
    }
  }

  di = d[2];
  j = 2;
  exitg1 = false;
  while ((!exitg1) && (j > 0)) {
    r = di;
    di = (uint8_T)((uint32_T)di >> 4);
    r = (uint8_T)((uint32_T)r - (di << 4));
    if (r > 9) {
      r = (uint8_T)(r + 7U);
    }

    s_data[2 + ((j - 1) << 2)] = (int8_T)(r + 48);
    if (di > 0) {
      j--;
    } else {
      exitg1 = true;
    }
  }

  di = d[3];
  j = 2;
  exitg1 = false;
  while ((!exitg1) && (j > 0)) {
    r = di;
    di = (uint8_T)((uint32_T)di >> 4);
    r = (uint8_T)((uint32_T)r - (di << 4));
    if (r > 9) {
      r = (uint8_T)(r + 7U);
    }

    s_data[3 + ((j - 1) << 2)] = (int8_T)(r + 48);
    if (di > 0) {
      j--;
    } else {
      exitg1 = true;
    }
  }

  firstcol = 2;
  j = 0;
  p = false;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    if (s_data[j] != '0') {
      p = true;
      exitg1 = true;
    } else {
      j++;
    }
  }

  if (p) {
    firstcol = 1;
  }

  if (firstcol > 1) {
    s_data[0] = s_data[4];
    s_data_0[0] = s_data[0];
    s_data[1] = s_data[5];
    s_data_0[1] = s_data[1];
    s_data[2] = s_data[6];
    s_data_0[2] = s_data[2];
    s_data[3] = s_data[7];
    s_data_0[3] = s_data[3];
    s_size[0] = 4;
    s_size[1] = 1;
    for (j = 0; j < 4; j++) {
      s_data[j] = s_data_0[j];
    }
  }
}

/* Function for MATLAB Function: '<S1>/ARDrone data decoding' */
static real_T ARDroneHover_hex2dec(const char_T s_data[], const int32_T s_size[2])
{
  real_T x;
  real_T p16;
  int32_T skj;
  int32_T b;
  int32_T b_j;
  x = 0.0;
  p16 = 1.0;
  b = (int32_T)(((-1.0 - (real_T)s_size[1]) + 1.0) / -1.0);
  for (b_j = 1; b_j - 1 < b; b_j++) {
    skj = s_size[1] - b_j;
    if (s_data[skj] != ' ') {
      skj = (uint8_T)s_data[skj];
      if ((skj != 0) && (skj != 48)) {
        if (skj > 57) {
          if (skj > 70) {
            skj -= 39;
          } else {
            skj -= 7;
          }
        }

        x += ((real_T)skj - 48.0) * p16;
      }

      p16 *= 16.0;
    }
  }

  return x;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
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
  real_T y;
  real_T tmp;
  real_T tmp_0;
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

/* Function for MATLAB Function: '<S9>/Drone state request' */
static void ARDroneHover_getString(real_T a, char_T strOut_data[], int32_T
  strOut_size[2])
{
  int32_T d;
  uint8_T digit_data[11];
  real_T r;
  int32_T loop_ub;

  /* '<S11>:1:138' */
  d = 1;
  if ((a >= 10.0) && (a < 100.0)) {
    /* '<S11>:1:144' */
    /* '<S11>:1:145' */
    d = 2;
  }

  if ((a >= 100.0) && (a < 1000.0)) {
    /* '<S11>:1:148' */
    /* '<S11>:1:149' */
    d = 3;
  }

  if ((a >= 1000.0) && (a < 10000.0)) {
    /* '<S11>:1:152' */
    /* '<S11>:1:153' */
    d = 4;
  }

  if ((a >= 10000.0) && (a < 100000.0)) {
    /* '<S11>:1:156' */
    /* '<S11>:1:157' */
    d = 5;
  }

  if ((a >= 100000.0) && (a < 1.0E+6)) {
    /* '<S11>:1:160' */
    /* '<S11>:1:161' */
    d = 6;
  }

  if ((a >= 1.0E+6) && (a < 1.0E+7)) {
    /* '<S11>:1:164' */
    /* '<S11>:1:165' */
    d = 7;
  }

  if ((a >= 1.0E+7) && (a < 1.0E+8)) {
    /* '<S11>:1:168' */
    /* '<S11>:1:169' */
    d = 8;
  }

  if ((a >= 1.0E+8) && (a < 1.0E+9)) {
    /* '<S11>:1:172' */
    /* '<S11>:1:173' */
    d = 9;
  }

  if ((a >= 1.0E+9) && (a < 1.0E+10)) {
    /* '<S11>:1:176' */
    /* '<S11>:1:177' */
    d = 10;
  }

  if (a >= 1.0E+10) {
    /* '<S11>:1:180' */
    /* '<S11>:1:181' */
    d = 11;
  }

  /* '<S11>:1:186' */
  loop_ub = d - 1;
  if (0 <= loop_ub) {
    memset(&digit_data[0], 0, (loop_ub + 1) * sizeof(uint8_T));
  }

  /* '<S11>:1:189' */
  for (loop_ub = 0; loop_ub < d; loop_ub++) {
    /* '<S11>:1:189' */
    /* '<S11>:1:191' */
    if (!rtIsInf(a)) {
      if (a == 0.0) {
        r = 0.0;
      } else {
        r = fmod(a, rt_powd_snf(10.0, 1.0 + (real_T)loop_ub));
        if (r == 0.0) {
          r = 0.0;
        }
      }
    } else {
      r = (rtNaN);
    }

    /* '<S11>:1:194' */
    r = r / rt_powd_snf(10.0, (1.0 + (real_T)loop_ub) - 1.0) + 48.0;
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

  /* '<S11>:1:199' */
  strOut_size[0] = 1;
  strOut_size[1] = d;
  loop_ub = d - 1;
  for (d = 0; d <= loop_ub; d++) {
    strOut_data[d] = (int8_T)digit_data[d];
  }
}

/* Function for MATLAB Function: '<S9>/Drone state request' */
static int32_T ARDroneHover_float2IEEE754(real_T fVal)
{
  int32_T iVal;
  char_T binData[32];
  char_T binData2[32];
  int32_T bit;
  real_T b_iVal;
  uint8_T y[4];
  real32_T x;
  int32_T b_k;

  /* '<S11>:1:209' */
  /* '<S11>:1:207' */
  x = (real32_T)fVal;
  memcpy((void *)&y[0], (void *)&x, (uint32_T)((size_t)4 * sizeof(uint8_T)));
  for (b_k = 0; b_k < 32; b_k++) {
    binData[b_k] = '0';
  }

  for (b_k = 0; b_k < 4; b_k++) {
    for (bit = 0; bit < 8; bit++) {
      if ((1 << bit & y[b_k]) != 0) {
        binData[b_k + ((7 - bit) << 2)] = '1';
      }
    }
  }

  /* '<S11>:1:209' */
  for (b_k = 0; b_k < 8; b_k++) {
    bit = b_k << 2;
    binData2[b_k] = binData[bit + 3];
    binData2[b_k + 8] = binData[bit + 2];
    binData2[b_k + 16] = binData[bit + 1];
    binData2[b_k + 24] = binData[bit];
  }

  /* '<S11>:1:210' */
  b_iVal = 0.0;

  /* '<S11>:1:211' */
  for (b_k = 0; b_k < 32; b_k++) {
    /* '<S11>:1:211' */
    if (binData2[31 - b_k] == '1') {
      /* '<S11>:1:213' */
      /* '<S11>:1:214' */
      bit = 1;
    } else {
      /* '<S11>:1:216' */
      bit = 0;
    }

    if (32 - b_k == 1) {
      /* '<S11>:1:219' */
      /* '<S11>:1:220' */
      b_iVal -= (real_T)bit * 2.147483648E+9;
    } else {
      /* '<S11>:1:222' */
      b_iVal += rt_powd_snf(2.0, 32.0 - (32.0 + -(real_T)b_k)) * (real_T)bit;
    }
  }

  /* '<S11>:1:227' */
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

/* Model output function for TID0 */
void ARDroneHover_output0(void)        /* Sample time: [0.0s, 0.0s] */
{
  /* local block i/o variables */
  uint8_T rtb_yaw4;
  uint8_T rtb_yaw3;
  uint8_T rtb_yaw2;
  uint8_T rtb_yaw1;
  uint8_T rtb_pitch4;
  uint8_T rtb_pitch3;
  uint8_T rtb_pitch2;
  uint8_T rtb_pitch1;
  uint8_T rtb_roll4;
  uint8_T rtb_roll3;
  uint8_T rtb_roll2;
  uint8_T rtb_roll1;
  uint8_T rtb_z4;
  uint8_T rtb_z3;
  uint8_T rtb_z2;
  uint8_T rtb_z1;
  uint8_T rtb_y4;
  uint8_T rtb_y3;
  uint8_T rtb_y2;
  uint8_T rtb_y1;
  uint8_T rtb_x4;
  uint8_T rtb_x3;
  uint8_T rtb_x2;
  uint8_T rtb_x1;
  boolean_T rtb_PacketInput1_o2;
  real_T bytesToRead;
  real_T bytesLeft;
  int32_T m;
  uint8_T data[496];
  char_T hex_data[8];
  char_T b_hex_data[8];
  real32_T res;
  real32_T b_res;
  boolean_T rEQ0;
  real_T q;
  real_T Rz[9];
  real_T psi_e;
  real_T p[3];
  real_T dot_p[3];
  real_T x_e[6];
  static const real_T a[18] = { 0.2, 0.0, 0.0, 0.0, 0.2, 0.0, 0.0, 0.0, 0.2,
    0.30000000000000004, 0.0, 0.0, 0.0, 0.30000000000000004, 0.0, 0.0, 0.0,
    0.30000000000000004 };

  static const int8_T b_a[18] = { 2, 0, 0, 0, 2, 0, 0, 0, 2, 3, 0, 0, 0, 3, 0, 0,
    0, 3 };

  static const int8_T y[3] = { 0, 0, 10 };

  char_T cmd_data[148];
  char_T strCmd_data[11];
  int32_T aux;
  char_T strAux_data[12];
  static const char_T c[10] = { 'A', 'T', '*', 'C', 'O', 'N', 'F', 'I', 'G', '='
  };

  static const char_T d[30] = { ',', '\"', 'g', 'e', 'n', 'e', 'r', 'a', 'l',
    ':', 'n', 'a', 'v', 'd', 'a', 't', 'a', '_', 'd', 'e', 'm', 'o', '\"', ',',
    '\"', 'T', 'R', 'U', 'E', '\"' };

  static const char_T e[10] = { 'A', 'T', '*', 'C', 'O', 'M', 'W', 'D', 'G', '='
  };

  static const char_T f[7] = { 'A', 'T', '*', 'R', 'E', 'F', '=' };

  static const char_T g[10] = { ',', '2', '9', '0', '7', '1', '7', '9', '5', '2'
  };

  static const char_T h[30] = { '\"', 'c', 'o', 'n', 'r', 'o', 'l', ':', 'a',
    'l', 't', 'i', 't', 'u', 'd', 'e', '_', 'm', 'a', 'x', '\"', ',', '\"', '1',
    '0', '0', '0', '0', '0', '\"' };

  static const char_T i[9] = { 'A', 'T', '*', 'F', 'T', 'R', 'I', 'M', '=' };

  static const char_T j[10] = { ',', '2', '9', '0', '7', '1', '8', '2', '0', '8'
  };

  static const char_T k[10] = { ',', '2', '9', '0', '7', '1', '7', '6', '9', '6'
  };

  static const char_T l[8] = { 'A', 'T', '*', 'P', 'C', 'M', 'D', '=' };

  real32_T rtb_yawAngle;
  real32_T rtb_u;
  real32_T rtb_v;
  real32_T rtb_w;
  real_T rtb_TmpSignalConversionAtSFunctionInport1_d[9];
  int8_T rtb_status[32];
  real_T rtb_Sum1;
  int32_T i_0;
  uint8_T tmp_data[1024];
  char_T cmd_data_0[148];
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T loop_ub_1;
  int32_T hex_size[2];
  int32_T hex_size_0[2];
  int32_T hex_size_1[2];
  int32_T hex_size_2[2];
  int32_T hex_size_3[2];
  int32_T hex_size_4[2];
  int32_T hex_size_5[2];
  int32_T hex_size_6[2];
  int32_T hex_size_7[2];
  real_T tmp;
  uint32_T x;
  real_T rtb_Sum1_tmp;
  boolean_T guard1 = false;
  int32_T exitg1;
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

    {                                  /* Sample time: [0.0s, 0.0s] */
      rate_monotonic_scheduler();
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(ARDroneHover_M)) {
    ARDroneHover_M->Timing.t[0] = rtsiGetT(&ARDroneHover_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* S-Function (sldrtpi): '<S1>/Packet Input' */
    /* S-Function Block: <S1>/Packet Input */
    {
      uint8_T indata[500U];
      int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 500U,
        &ARDroneHover_P.PacketInput_PacketID, (double*) indata, NULL);
      ARDroneHover_B.PacketInput_o2 = status & 0x1;/* Data Ready port */
      if (status & 0x1) {
        RTWin_ANYTYPEPTR indp;
        indp.p_uint8_T = indata;

        {
          int_T i1;
          uint8_T *y0 = &ARDroneHover_B.PacketInput_o1[0];
          for (i1=0; i1 < 500; i1++) {
            y0[i1] = *indp.p_uint8_T++;
          }
        }
      }
    }

    /* S-Function (sldrtpi): '<S2>/Packet Input1' */
    /* S-Function Block: <S2>/Packet Input1 */
    {
      uint8_T indata[64U];
      int status = RTBIO_DriverIO(1, STREAMINPUT, IOREAD, 64U,
        &ARDroneHover_P.PacketInput1_PacketID, (double*) indata, NULL);
      rtb_PacketInput1_o2 = status & 0x1;/* Data Ready port */
      if (status & 0x1) {
        RTWin_ANYTYPEPTR indp;
        indp.p_uint8_T = indata;

        {
          int_T i1;
          uint8_T *y0 = &ARDroneHover_B.PacketInput1_o1[0];
          for (i1=0; i1 < 64; i1++) {
            y0[i1] = *indp.p_uint8_T++;
          }
        }
      }
    }

    /* MATLAB Function: '<S1>/Data synchronization ' */
    /* MATLAB Function 'ARDrone Wi-Fi  Block/Data synchronization ': '<S8>:1' */
    /* '<S8>:1:52' */
    for (i_0 = 0; i_0 < 500; i_0++) {
      ARDroneHover_DW.buffer[(int32_T)(ARDroneHover_DW.countBuffer + ((real_T)
        i_0 + 1.0)) - 1] = ARDroneHover_B.PacketInput_o1[i_0];
    }

    /* '<S8>:1:54' */
    bytesToRead = ARDroneHover_DW.countBuffer + 500.0;

    /* '<S8>:1:59' */
    aux = 0;
    do {
      exitg1 = 0;
      m = (int32_T)(ARDroneHover_DW.countBuffer + 500.0);
      if (aux <= m - 1) {
        /* '<S8>:1:59' */
        if ((ARDroneHover_DW.countHeader == 4.0) && (ARDroneHover_DW.count <
             496.0)) {
          /* '<S8>:1:60' */
          /* '<S8>:1:61' */
          bytesLeft = 496.0 - ARDroneHover_DW.count;
          rtb_Sum1 = (1.0 + (real_T)aux) + (496.0 - ARDroneHover_DW.count);
          if (1.0 + (real_T)aux > rtb_Sum1 - 1.0) {
            m = 1;
            loop_ub = 0;
          } else {
            m = aux + 1;
            loop_ub = (int32_T)(rtb_Sum1 - 1.0);
          }

          /* '<S8>:1:62' */
          i_0 = (int32_T)(ARDroneHover_DW.count + 1.0) - 1;
          loop_ub -= m;
          for (loop_ub_0 = 0; loop_ub_0 <= loop_ub; loop_ub_0++) {
            ARDroneHover_DW.frame[i_0 + loop_ub_0] = ARDroneHover_DW.buffer[(m +
              loop_ub_0) - 1];
          }

          /* '<S8>:1:63' */
          ARDroneHover_DW.count = 496.0;

          /* '<S8>:1:64' */
          ARDroneHover_DW.countBuffer = (ARDroneHover_DW.countBuffer + 500.0) -
            bytesLeft;
          q = (1.0 + (real_T)aux) + bytesLeft;
          if (q > bytesToRead) {
            aux = 0;
            m = 0;
          } else {
            aux = (int32_T)q - 1;
            m = (int32_T)bytesToRead;
          }

          /* '<S8>:1:65' */
          loop_ub = m - aux;
          for (i_0 = 0; i_0 < loop_ub; i_0++) {
            tmp_data[i_0] = ARDroneHover_DW.buffer[aux + i_0];
          }

          if (0 <= loop_ub - 1) {
            memcpy(&ARDroneHover_DW.buffer[0], &tmp_data[0], loop_ub * sizeof
                   (uint8_T));
          }

          exitg1 = 1;
        } else if ((ARDroneHover_DW.countHeader == 3.0) &&
                   (ARDroneHover_DW.buffer[aux] == 85)) {
          /* '<S8>:1:70' */
          /* '<S8>:1:72' */
          ARDroneHover_DW.countHeader = 4.0;
          q = (ARDroneHover_DW.countBuffer + 500.0) - (1.0 + (real_T)aux);
          if (q > 496.0) {
            /* '<S8>:1:74' */
            /* '<S8>:1:75' */
            ARDroneHover_DW.count = 496.0;

            /* '<S8>:1:76' */
            for (i_0 = 0; i_0 < 496; i_0++) {
              ARDroneHover_DW.frame[(int16_T)i_0] = ARDroneHover_DW.buffer[(i_0
                + aux) + 1];
            }

            /* '<S8>:1:77' */
            ARDroneHover_DW.countBuffer = ((ARDroneHover_DW.countBuffer + 500.0)
              - (1.0 + (real_T)aux)) - 496.0;
            if (((1.0 + (real_T)aux) + 496.0) + 1.0 > bytesToRead) {
              aux = -497;
              m = 0;
            } else {
              m = (int32_T)bytesToRead;
            }

            /* '<S8>:1:78' */
            i_0 = aux + 497;
            loop_ub = m - i_0;
            for (loop_ub_0 = 0; loop_ub_0 < loop_ub; loop_ub_0++) {
              tmp_data[loop_ub_0] = ARDroneHover_DW.buffer[i_0 + loop_ub_0];
            }

            if (0 <= loop_ub - 1) {
              memcpy(&ARDroneHover_DW.buffer[0], &tmp_data[0], loop_ub * sizeof
                     (uint8_T));
            }
          } else {
            /* '<S8>:1:81' */
            ARDroneHover_DW.count = q;
            if (ARDroneHover_DW.count > 0.0) {
              /* '<S8>:1:82' */
              if ((1.0 + (real_T)aux) + 1.0 > ARDroneHover_DW.countBuffer +
                  500.0) {
                aux = -1;
                m = 0;
              }

              /* '<S8>:1:83' */
              loop_ub = m - aux;
              for (i_0 = 0; i_0 <= loop_ub - 2; i_0++) {
                ARDroneHover_DW.frame[i_0] = ARDroneHover_DW.buffer[(aux + i_0)
                  + 1];
              }
            }

            /* '<S8>:1:85' */
            ARDroneHover_DW.countBuffer = 0.0;
          }

          exitg1 = 1;
        } else {
          if ((ARDroneHover_DW.countHeader == 2.0) &&
              (ARDroneHover_DW.buffer[aux] == 102)) {
            /* '<S8>:1:92' */
            /* '<S8>:1:93' */
            ARDroneHover_DW.countHeader = 3.0;
          }

          if ((ARDroneHover_DW.countHeader == 1.0) &&
              (ARDroneHover_DW.buffer[aux] == 119)) {
            /* '<S8>:1:96' */
            /* '<S8>:1:97' */
            ARDroneHover_DW.countHeader = 2.0;
          }

          if ((ARDroneHover_DW.countHeader == 0.0) &&
              (ARDroneHover_DW.buffer[aux] == 136)) {
            /* '<S8>:1:100' */
            /* '<S8>:1:101' */
            ARDroneHover_DW.countHeader = 1.0;
          }

          aux++;
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (ARDroneHover_DW.count == 496.0) {
      /* '<S8>:1:106' */
      /* '<S8>:1:107' */
      /* '<S8>:1:108' */
      /* '<S8>:1:109' */
      /* '<S8>:1:110' */
      for (i_0 = 0; i_0 < 496; i_0++) {
        ARDroneHover_DW.lastFrame[i_0] = ARDroneHover_DW.frame[i_0];
        ARDroneHover_DW.frame[i_0] = 0U;
      }

      /* '<S8>:1:111' */
      ARDroneHover_DW.count = 0.0;

      /* '<S8>:1:112' */
      ARDroneHover_DW.countHeader = 0.0;
    } else {
      /* '<S8>:1:115' */
      /* '<S8>:1:116' */
    }

    /* MATLAB Function: '<S1>/ARDrone data decoding' incorporates:
     *  MATLAB Function: '<S1>/Data synchronization '
     */
    memcpy(&data[0], &ARDroneHover_DW.lastFrame[0], 496U * sizeof(uint8_T));

    /* MATLAB Function 'ARDrone Wi-Fi  Block/ARDrone data decoding': '<S7>:1' */
    /* '<S7>:1:23' */
    /* '<S7>:1:25' */
    /* '<S7>:1:27' */
    if (ARDroneHover_DW.lastFrame[14] == 148) {
      /* '<S7>:1:30' */
      /* '<S7>:1:31' */
      memcpy(&ARDroneHover_DW.dataPrev[0], &ARDroneHover_DW.lastFrame[0], 496U *
             sizeof(uint8_T));
    } else {
      /* '<S7>:1:33' */
      memcpy(&data[0], &ARDroneHover_DW.dataPrev[0], 496U * sizeof(uint8_T));
    }

    /* '<S7>:1:37' */
    /* '<S7>:1:74' */
    for (i_0 = 0; i_0 < 32; i_0++) {
      rtb_status[i_0] = 0;
    }

    /* '<S7>:1:75' */
    ARDroneHover_dec2hex(&data[0], hex_data, hex_size);

    /* '<S7>:1:77' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    aux = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    /* '<S7>:1:78' */
    for (m = 0; m < aux; m++) {
      /* '<S7>:1:78' */
      if (b_hex_data[m] == 'F') {
        /* '<S7>:1:79' */
        /* '<S7>:1:80' */
        rtb_status[((1 + m) << 2) - 4] = 1;
        rtb_status[((1 + m) << 2) - 3] = 1;
        rtb_status[((1 + m) << 2) - 2] = 1;
        rtb_status[((1 + m) << 2) - 1] = 1;
      } else if (b_hex_data[m] == 'E') {
        /* '<S7>:1:81' */
        /* '<S7>:1:82' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 1;
        rtb_status[1 + i_0] = 1;
        rtb_status[2 + i_0] = 1;
        rtb_status[3 + i_0] = 0;
      } else if (b_hex_data[m] == 'D') {
        /* '<S7>:1:83' */
        /* '<S7>:1:84' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 1;
        rtb_status[1 + i_0] = 1;
        rtb_status[2 + i_0] = 0;
        rtb_status[3 + i_0] = 1;
      } else if (b_hex_data[m] == 'C') {
        /* '<S7>:1:85' */
        /* '<S7>:1:86' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 1;
        rtb_status[1 + i_0] = 1;
        rtb_status[2 + i_0] = 0;
        rtb_status[3 + i_0] = 0;
      } else if (b_hex_data[m] == 'B') {
        /* '<S7>:1:87' */
        /* '<S7>:1:88' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 1;
        rtb_status[1 + i_0] = 0;
        rtb_status[2 + i_0] = 1;
        rtb_status[3 + i_0] = 1;
      } else if (b_hex_data[m] == 'A') {
        /* '<S7>:1:89' */
        /* '<S7>:1:90' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 1;
        rtb_status[1 + i_0] = 0;
        rtb_status[2 + i_0] = 1;
        rtb_status[3 + i_0] = 0;
      } else if (b_hex_data[m] == '9') {
        /* '<S7>:1:91' */
        /* '<S7>:1:92' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 1;
        rtb_status[1 + i_0] = 0;
        rtb_status[2 + i_0] = 0;
        rtb_status[3 + i_0] = 1;
      } else if (b_hex_data[m] == '8') {
        /* '<S7>:1:93' */
        /* '<S7>:1:94' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 1;
        rtb_status[1 + i_0] = 0;
        rtb_status[2 + i_0] = 0;
        rtb_status[3 + i_0] = 0;
      } else if (b_hex_data[m] == '7') {
        /* '<S7>:1:95' */
        /* '<S7>:1:96' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 0;
        rtb_status[1 + i_0] = 1;
        rtb_status[2 + i_0] = 1;
        rtb_status[3 + i_0] = 1;
      } else if (b_hex_data[m] == '6') {
        /* '<S7>:1:97' */
        /* '<S7>:1:98' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 0;
        rtb_status[1 + i_0] = 1;
        rtb_status[2 + i_0] = 1;
        rtb_status[3 + i_0] = 0;
      } else if (b_hex_data[m] == '5') {
        /* '<S7>:1:99' */
        /* '<S7>:1:100' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 0;
        rtb_status[1 + i_0] = 1;
        rtb_status[2 + i_0] = 0;
        rtb_status[3 + i_0] = 1;
      } else if (b_hex_data[m] == '4') {
        /* '<S7>:1:101' */
        /* '<S7>:1:102' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 0;
        rtb_status[1 + i_0] = 1;
        rtb_status[2 + i_0] = 0;
        rtb_status[3 + i_0] = 0;
      } else if (b_hex_data[m] == '3') {
        /* '<S7>:1:103' */
        /* '<S7>:1:104' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 0;
        rtb_status[1 + i_0] = 0;
        rtb_status[2 + i_0] = 1;
        rtb_status[3 + i_0] = 1;
      } else if (b_hex_data[m] == '2') {
        /* '<S7>:1:105' */
        /* '<S7>:1:106' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 0;
        rtb_status[1 + i_0] = 0;
        rtb_status[2 + i_0] = 1;
        rtb_status[3 + i_0] = 0;
      } else if (b_hex_data[m] == '1') {
        /* '<S7>:1:107' */
        /* '<S7>:1:108' */
        i_0 = ((1 + m) << 2) - 4;
        rtb_status[i_0] = 0;
        rtb_status[1 + i_0] = 0;
        rtb_status[2 + i_0] = 0;
        rtb_status[3 + i_0] = 1;
      } else {
        if (b_hex_data[m] == '0') {
          /* '<S7>:1:109' */
          /* '<S7>:1:110' */
          i_0 = (1 + m) << 2;
          rtb_status[i_0 - 4] = 0;
          rtb_status[i_0 - 3] = 0;
          rtb_status[i_0 - 2] = 0;
          rtb_status[i_0 - 1] = 0;
        }
      }
    }

    /* '<S7>:1:38' */
    /* '<S7>:1:64' */
    ARDroneHover_dec2hex(&data[20], hex_data, hex_size);

    /* '<S7>:1:65' */
    /* '<S7>:1:67' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    hex_size_7[0] = 1;
    hex_size_7[1] = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    /* DataTypeConversion: '<S1>/Type Conversion' incorporates:
     *  MATLAB Function: '<S1>/ARDrone data decoding'
     */
    ARDroneHover_B.TypeConversion = ARDroneHover_hex2dec(b_hex_data, hex_size_7);

    /* MATLAB Function: '<S1>/ARDrone data decoding' */
    /* '<S7>:1:39' */
    /* '<S7>:1:64' */
    ARDroneHover_dec2hex(&data[24], hex_data, hex_size);

    /* '<S7>:1:65' */
    /* '<S7>:1:69' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    hex_size_6[0] = 1;
    hex_size_6[1] = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    q = rt_roundd_snf(ARDroneHover_hex2dec(b_hex_data, hex_size_6));
    if (q < 4.294967296E+9) {
      if (q >= 0.0) {
        x = (uint32_T)q;
      } else {
        x = 0U;
      }
    } else {
      x = MAX_uint32_T;
    }

    memcpy((void *)&res, (void *)&x, (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S7>:1:40' */
    /* '<S7>:1:64' */
    ARDroneHover_dec2hex(&data[28], hex_data, hex_size);

    /* '<S7>:1:65' */
    /* '<S7>:1:69' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    hex_size_5[0] = 1;
    hex_size_5[1] = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    q = rt_roundd_snf(ARDroneHover_hex2dec(b_hex_data, hex_size_5));
    if (q < 4.294967296E+9) {
      if (q >= 0.0) {
        x = (uint32_T)q;
      } else {
        x = 0U;
      }
    } else {
      x = MAX_uint32_T;
    }

    memcpy((void *)&b_res, (void *)&x, (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S7>:1:41' */
    /* '<S7>:1:64' */
    ARDroneHover_dec2hex(&data[32], hex_data, hex_size);

    /* '<S7>:1:65' */
    /* '<S7>:1:69' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    hex_size_4[0] = 1;
    hex_size_4[1] = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    q = rt_roundd_snf(ARDroneHover_hex2dec(b_hex_data, hex_size_4));
    if (q < 4.294967296E+9) {
      if (q >= 0.0) {
        x = (uint32_T)q;
      } else {
        x = 0U;
      }
    } else {
      x = MAX_uint32_T;
    }

    memcpy((void *)&rtb_yawAngle, (void *)&x, (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S7>:1:42' */
    /* '<S7>:1:64' */
    ARDroneHover_dec2hex(&data[36], hex_data, hex_size);

    /* '<S7>:1:65' */
    /* '<S7>:1:67' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    hex_size_3[0] = 1;
    hex_size_3[1] = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    bytesLeft = ARDroneHover_hex2dec(b_hex_data, hex_size_3) / 1000.0;

    /* '<S7>:1:43' */
    /* '<S7>:1:64' */
    ARDroneHover_dec2hex(&data[40], hex_data, hex_size);

    /* '<S7>:1:65' */
    /* '<S7>:1:69' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    hex_size_2[0] = 1;
    hex_size_2[1] = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    q = rt_roundd_snf(ARDroneHover_hex2dec(b_hex_data, hex_size_2));
    if (q < 4.294967296E+9) {
      if (q >= 0.0) {
        x = (uint32_T)q;
      } else {
        x = 0U;
      }
    } else {
      x = MAX_uint32_T;
    }

    memcpy((void *)&rtb_u, (void *)&x, (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S7>:1:44' */
    /* '<S7>:1:64' */
    ARDroneHover_dec2hex(&data[44], hex_data, hex_size);

    /* '<S7>:1:65' */
    /* '<S7>:1:69' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    hex_size_1[0] = 1;
    hex_size_1[1] = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    q = rt_roundd_snf(ARDroneHover_hex2dec(b_hex_data, hex_size_1));
    if (q < 4.294967296E+9) {
      if (q >= 0.0) {
        x = (uint32_T)q;
      } else {
        x = 0U;
      }
    } else {
      x = MAX_uint32_T;
    }

    memcpy((void *)&rtb_v, (void *)&x, (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S7>:1:45' */
    /* '<S7>:1:64' */
    ARDroneHover_dec2hex(&data[48], hex_data, hex_size);

    /* '<S7>:1:65' */
    /* '<S7>:1:69' */
    loop_ub = hex_size[1];
    m = hex_size[1];
    loop_ub_0 = hex_size[1];
    loop_ub_1 = hex_size[1];
    hex_size_0[0] = 1;
    hex_size_0[1] = ((hex_size[1] + hex_size[1]) + hex_size[1]) + hex_size[1];
    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      b_hex_data[i_0] = hex_data[(i_0 << 2) + 3];
    }

    for (i_0 = 0; i_0 < m; i_0++) {
      b_hex_data[i_0 + loop_ub] = hex_data[(i_0 << 2) + 2];
    }

    for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
      b_hex_data[(i_0 + loop_ub) + m] = hex_data[(i_0 << 2) + 1];
    }

    for (i_0 = 0; i_0 < loop_ub_1; i_0++) {
      b_hex_data[((i_0 + loop_ub) + m) + loop_ub_0] = hex_data[i_0 << 2];
    }

    q = rt_roundd_snf(ARDroneHover_hex2dec(b_hex_data, hex_size_0));
    if (q < 4.294967296E+9) {
      if (q >= 0.0) {
        x = (uint32_T)q;
      } else {
        x = 0U;
      }
    } else {
      x = MAX_uint32_T;
    }

    memcpy((void *)&rtb_w, (void *)&x, (uint32_T)((size_t)1 * sizeof(real32_T)));
    if ((rtb_status[31] == 1) && (bytesLeft < 0.2)) {
      /* '<S7>:1:49' */
      /* '<S7>:1:50' */
      bytesLeft = ARDroneHover_DW.hPrev;
    } else {
      if (rtb_status[31] == 1) {
        /* '<S7>:1:51' */
        /* '<S7>:1:52' */
        ARDroneHover_DW.hPrev = bytesLeft;
      }
    }

    rtb_yawAngle /= 1000.0F;
    rtb_u /= 1000.0F;
    rtb_v /= 1000.0F;
    rtb_w /= 1000.0F;

    /* DataTypeConversion: '<S1>/Type Conversion1' incorporates:
     *  MATLAB Function: '<S1>/ARDrone data decoding'
     */
    ARDroneHover_B.TypeConversion1 = b_res / 1000.0F;

    /* DataTypeConversion: '<S1>/Type Conversion2' incorporates:
     *  MATLAB Function: '<S1>/ARDrone data decoding'
     */
    ARDroneHover_B.TypeConversion2 = res / 1000.0F;

    /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
     *  Constant: '<Root>/commands disabled'
     *  Constant: '<Root>/commands enabled'
     */
    if (ARDroneHover_P.ManualSwitch2_CurrentSetting == 1) {
      bytesToRead = ARDroneHover_P.commandsdisabled_Value;
    } else {
      bytesToRead = ARDroneHover_P.commandsenabled_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch2' */

    /* MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' incorporates:
     *  DataTypeConversion: '<S1>/Type Conversion3'
     *  UnitDelay: '<S1>/Unit Delay to avoid algebraic loop'
     */
    /* MATLAB Function 'ARDrone Wi-Fi  Block/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ': '<S10>:1' */
    /* '<S10>:1:6' */
    ARDroneHover_B.yawOut = rtb_yawAngle;
    if ((ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE == 1.0) &&
        (bytesToRead == 1.0)) {
      /* '<S10>:1:19' */
      /* '<S10>:1:20' */
      ARDroneHover_B.yawOut = rtb_yawAngle - ARDroneHover_DW.yaw0;

      /* '<S10>:1:21' */
      ARDroneHover_DW.mode = 1.0;
    } else {
      if ((ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE == 1.0) &&
          (ARDroneHover_DW.mode == 0.0)) {
        /* '<S10>:1:22' */
        /* '<S10>:1:23' */
        ARDroneHover_DW.yaw0 = rtb_yawAngle;
      }
    }

    /* '<S10>:1:27' */
    q = ARDroneHover_B.yawOut;
    if ((!rtIsInf(ARDroneHover_B.yawOut)) && (!rtIsNaN(ARDroneHover_B.yawOut)))
    {
      if (ARDroneHover_B.yawOut == 0.0) {
        ARDroneHover_B.yawOut = 0.0;
      } else {
        ARDroneHover_B.yawOut = fmod(ARDroneHover_B.yawOut, 360.0);
        if (ARDroneHover_B.yawOut == 0.0) {
          ARDroneHover_B.yawOut = 0.0;
        } else {
          if (q < 0.0) {
            ARDroneHover_B.yawOut += 360.0;
          }
        }
      }
    } else {
      ARDroneHover_B.yawOut = (rtNaN);
    }

    if (ARDroneHover_B.yawOut > 180.0) {
      /* '<S10>:1:28' */
      /* '<S10>:1:29' */
      ARDroneHover_B.yawOut += -360.0;
    }

    /* End of MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
    /* DataTypeConversion: '<S1>/Type Conversion4' incorporates:
     *  MATLAB Function: '<S1>/ARDrone data decoding'
     */
    ARDroneHover_B.TypeConversion4 = bytesLeft;

    /* Constant: '<S82>/Constant1' */
    ARDroneHover_B.Constant1[0] = ARDroneHover_P.Constant1_Value[0];
    ARDroneHover_B.Constant1[1] = ARDroneHover_P.Constant1_Value[1];
  }

  /* Integrator: '<S82>/Integrator' */
  if (ARDroneHover_DW.Integrator_IWORK != 0) {
    ARDroneHover_X.Integrator_CSTATE[0] = ARDroneHover_B.Constant1[0];
    ARDroneHover_X.Integrator_CSTATE[1] = ARDroneHover_B.Constant1[1];
  }

  ARDroneHover_B.Integrator[0] = ARDroneHover_X.Integrator_CSTATE[0];
  ARDroneHover_B.Integrator[1] = ARDroneHover_X.Integrator_CSTATE[1];

  /* End of Integrator: '<S82>/Integrator' */
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
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
    ARDroneHover_B.TypeConversion5 = rtb_u;

    /* DataTypeConversion: '<S1>/Type Conversion6' */
    ARDroneHover_B.TypeConversion6 = rtb_v;

    /* DataTypeConversion: '<S1>/Type Conversion7' */
    ARDroneHover_B.TypeConversion7 = rtb_w;

    /* SignalConversion: '<S6>/TmpSignal ConversionAtTo WorkspaceInport1' */
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
      ARDroneHover_B.Integrator[0];
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[7] =
      ARDroneHover_B.Integrator[1];
    ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[8] =
      ARDroneHover_B.TypeConversion4;
  }

  /* Gain: '<S6>/deg 2 rad1' */
  ARDroneHover_B.deg2rad1 = ARDroneHover_P.deg2rad1_Gain *
    ARDroneHover_B.deg2rad[2];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* Gain: '<S76>/proportional control gain' incorporates:
     *  Constant: '<Root>/Heading ref (rad)'
     *  Sum: '<S76>/Sum3'
     */
    ARDroneHover_B.proportionalcontrolgain =
      (ARDroneHover_P.Headingrefrad_Value[2] - ARDroneHover_B.TypeConversion4) *
      ARDroneHover_P.proportionalcontrolgain_Gain;

    /* Constant: '<Root>/Inertial Y ref (m)' */
    ARDroneHover_B.InertialYrefm = ARDroneHover_P.InertialYrefm_Value;
  }

  /* Sum: '<S75>/Sum1' */
  rtb_Sum1 = ARDroneHover_B.InertialYrefm - ARDroneHover_B.deg2rad[2];

  /* MATLAB Function: '<S75>/normalize angle  between -pi and pi radians' */
  /* MATLAB Function 'Outer-loop Controller/Baseline Controller/Heading controller/normalize angle  between -pi and pi radians': '<S79>:1' */
  /* '<S79>:1:4' */
  if ((!rtIsInf(rtb_Sum1)) && (!rtIsNaN(rtb_Sum1))) {
    if (rtb_Sum1 == 0.0) {
      bytesLeft = 0.0;
    } else {
      bytesLeft = fmod(rtb_Sum1, 6.2831853071795862);
      rEQ0 = (bytesLeft == 0.0);
      if (!rEQ0) {
        q = fabs(rtb_Sum1 / 6.2831853071795862);
        rEQ0 = (fabs(q - floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        bytesLeft = 0.0;
      } else {
        if (rtb_Sum1 < 0.0) {
          bytesLeft += 6.2831853071795862;
        }
      }
    }
  } else {
    bytesLeft = (rtNaN);
  }

  if (bytesLeft > 3.1415926535897931) {
    /* '<S79>:1:5' */
    /* '<S79>:1:6' */
    bytesLeft += -6.2831853071795862;
  }

  /* End of MATLAB Function: '<S75>/normalize angle  between -pi and pi radians' */

  /* Sum: '<S78>/Sum4' incorporates:
   *  Constant: '<Root>/Heading ref (rad)'
   */
  /* MATLAB Function 'Outer-loop Controller/Baseline Controller/Position controller/Coordinate trnasformation  from inertial frame to body frame ': '<S80>:1' */
  /* '<S80>:1:3' */
  /* '<S80>:1:4' */
  rtb_Sum1 = ARDroneHover_P.Headingrefrad_Value[0] - ARDroneHover_B.Integrator[0];
  tmp = ARDroneHover_P.Headingrefrad_Value[1] - ARDroneHover_B.Integrator[1];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* RelationalOperator: '<S71>/Compare' incorporates:
     *  Constant: '<S71>/Constant'
     */
    ARDroneHover_B.Compare = (bytesToRead <= ARDroneHover_P.Constant_Value);

    /* DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
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

    /* SignalConversion: '<S73>/TmpSignal ConversionAt SFunction Inport1' incorporates:
     *  MATLAB Function: '<S4>/MATLAB Function'
     */
    rtb_TmpSignalConversionAtSFunctionInport1_d[0] = ARDroneHover_B.deg2rad[0];
    rtb_TmpSignalConversionAtSFunctionInport1_d[1] = ARDroneHover_B.deg2rad[1];
    rtb_TmpSignalConversionAtSFunctionInport1_d[2] = ARDroneHover_B.deg2rad[2];
    rtb_TmpSignalConversionAtSFunctionInport1_d[3] =
      ARDroneHover_B.TypeConversion5;
    rtb_TmpSignalConversionAtSFunctionInport1_d[4] =
      ARDroneHover_B.TypeConversion6;
    rtb_TmpSignalConversionAtSFunctionInport1_d[5] =
      ARDroneHover_B.TypeConversion7;
    rtb_TmpSignalConversionAtSFunctionInport1_d[6] = ARDroneHover_B.Integrator[0];
    rtb_TmpSignalConversionAtSFunctionInport1_d[7] = ARDroneHover_B.Integrator[1];
    rtb_TmpSignalConversionAtSFunctionInport1_d[8] =
      ARDroneHover_B.TypeConversion4;

    /* MATLAB Function: '<S4>/MATLAB Function' incorporates:
     *  Constant: '<Root>/Heading ref (rad)'
     *  Constant: '<Root>/Height ref (m)'
     *  Constant: '<Root>/Inertial X ref (m)'
     *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
     *  SignalConversion: '<S73>/TmpSignal ConversionAt SFunction Inport1'
     */
    /* MATLAB Function 'Outer-loop Controller/MATLAB Function': '<S73>:1' */
    /* '<S73>:1:62' */
    /* '<S73>:1:53' */
    /* '<S73>:1:24' */
    /* '<S73>:1:21' */
    /* '<S73>:1:22' */
    q = cos(ARDroneHover_B.deg2rad[2]);
    Rz[0] = q;
    psi_e = sin(ARDroneHover_B.deg2rad[2]);
    Rz[3] = -psi_e;
    Rz[6] = 0.0;
    Rz[1] = psi_e;
    Rz[4] = q;
    Rz[7] = 0.0;
    Rz[2] = 0.0;
    Rz[5] = 0.0;
    Rz[8] = 1.0;

    /* '<S73>:1:25' */
    rtb_Sum1_tmp = ARDroneHover_B.deg2rad[2] - ARDroneHover_B.InertialYrefm;

    /* '<S73>:1:86' */
    if ((!rtIsInf(rtb_Sum1_tmp)) && (!rtIsNaN(rtb_Sum1_tmp))) {
      if (rtb_Sum1_tmp == 0.0) {
        psi_e = 0.0;
      } else {
        psi_e = fmod(rtb_Sum1_tmp, 6.2831853071795862);
        rEQ0 = (psi_e == 0.0);
        if (!rEQ0) {
          q = fabs(rtb_Sum1_tmp / 6.2831853071795862);
          rEQ0 = (fabs(q - floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
        }

        if (rEQ0) {
          psi_e = 0.0;
        } else {
          if (rtb_Sum1_tmp < 0.0) {
            psi_e += 6.2831853071795862;
          }
        }
      }
    } else {
      psi_e = (rtNaN);
    }

    if (psi_e > 3.1415926535897931) {
      /* '<S73>:1:87' */
      /* '<S73>:1:88' */
      psi_e += -6.2831853071795862;
    }

    /* '<S73>:1:27' */
    /* '<S73>:1:28' */
    for (i_0 = 0; i_0 < 3; i_0++) {
      p[i_0] = rtb_TmpSignalConversionAtSFunctionInport1_d[i_0 + 6];
      dot_p[i_0] = Rz[i_0 + 6] * ARDroneHover_B.TypeConversion7 + (Rz[i_0 + 3] *
        ARDroneHover_B.TypeConversion6 + Rz[i_0] *
        ARDroneHover_B.TypeConversion5);
    }

    /* '<S73>:1:30' */
    /* '<S73>:1:31' */
    /* '<S73>:1:32' */
    dot_p[2] = -dot_p[2];

    /* '<S73>:1:47' */
    x_e[0] = p[0] - ARDroneHover_P.Headingrefrad_Value[0];
    x_e[3] = dot_p[0] - ARDroneHover_P.Heightrefm_Value[0];
    x_e[1] = p[1] - ARDroneHover_P.Headingrefrad_Value[1];
    x_e[4] = dot_p[1] - ARDroneHover_P.Heightrefm_Value[1];
    x_e[2] = -ARDroneHover_B.TypeConversion4 -
      ARDroneHover_P.Headingrefrad_Value[2];
    x_e[5] = dot_p[2] - ARDroneHover_P.Heightrefm_Value[2];

    /* '<S73>:1:53' */
    for (i_0 = 0; i_0 < 3; i_0++) {
      q = 0.0;
      for (loop_ub_0 = 0; loop_ub_0 < 6; loop_ub_0++) {
        q += (real_T)b_a[3 * loop_ub_0 + i_0] * x_e[loop_ub_0];
      }

      dot_p[i_0] = ((q + (real_T)y[i_0]) -
                    ARDroneHover_P.InertialXrefm_Value[i_0]) +
        ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[i_0];
    }

    for (i_0 = 0; i_0 < 3; i_0++) {
      p[i_0] = Rz[3 * i_0 + 2] * dot_p[2] + (Rz[3 * i_0 + 1] * dot_p[1] + Rz[3 *
        i_0] * dot_p[0]);
    }

    /* '<S73>:1:57' */
    ARDroneHover_B.w_r = -(ARDroneHover_B.TypeConversion4 -
      (-ARDroneHover_P.Headingrefrad_Value[2]));

    /* '<S73>:1:58' */
    ARDroneHover_B.dot_psi_r = -2.0 * psi_e - 0.1 *
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3];

    /* '<S73>:1:59' */
    ARDroneHover_B.theta_r = rt_atan2d_snf(p[0], p[2]);

    /* '<S73>:1:60' */
    ARDroneHover_B.phi_r = rt_atan2d_snf(-p[1], sqrt(p[0] * p[0] + p[2] * p[2]));

    /* '<S73>:1:62' */
    for (i_0 = 0; i_0 < 3; i_0++) {
      p[i_0] = 0.0;
      for (loop_ub_0 = 0; loop_ub_0 < 6; loop_ub_0++) {
        p[i_0] += a[3 * loop_ub_0 + i_0] * x_e[loop_ub_0];
      }

      ARDroneHover_B.dot_xi[i_0] = p[i_0];
    }

    ARDroneHover_B.dot_xi[3] = psi_e;
  }

  /* ManualSwitch: '<S4>/Manual Switch3' incorporates:
   *  Gain: '<S74>/Gain'
   *  Gain: '<S75>/proportional control gain - yaw'
   *  Gain: '<S77>/Gain1'
   *  Gain: '<S78>/Gain2'
   *  Gain: '<S78>/Gain3'
   *  MATLAB Function: '<S78>/Coordinate trnasformation  from inertial frame to body frame '
   *  Sum: '<S74>/Sum2'
   *  Sum: '<S77>/Sum5'
   */
  if (ARDroneHover_P.ManualSwitch3_CurrentSetting == 1) {
    q = ARDroneHover_B.proportionalcontrolgain;
    bytesLeft *= ARDroneHover_P.proportionalcontrolgainyaw_Gain;
    psi_e = ((cos(ARDroneHover_B.deg2rad[2]) * rtb_Sum1 + sin
              (ARDroneHover_B.deg2rad[2]) * tmp) * ARDroneHover_P.Gain2_Gain -
             ARDroneHover_B.TypeConversion5) * ARDroneHover_P.Gain_Gain;
    rtb_Sum1 = ((-sin(ARDroneHover_B.deg2rad[2]) * rtb_Sum1 + cos
                 (ARDroneHover_B.deg2rad[2]) * tmp) * ARDroneHover_P.Gain3_Gain
                - ARDroneHover_B.TypeConversion6) * ARDroneHover_P.Gain1_Gain;
  } else {
    q = ARDroneHover_B.w_r;
    bytesLeft = ARDroneHover_B.dot_psi_r;
    psi_e = ARDroneHover_B.theta_r;
    rtb_Sum1 = ARDroneHover_B.phi_r;
  }

  /* End of ManualSwitch: '<S4>/Manual Switch3' */

  /* Saturate: '<S1>/Saturation 1' */
  if (rtb_Sum1 > ARDroneHover_P.Saturation1_UpperSat) {
    ARDroneHover_B.Saturation1 = ARDroneHover_P.Saturation1_UpperSat;
  } else if (rtb_Sum1 < ARDroneHover_P.Saturation1_LowerSat) {
    ARDroneHover_B.Saturation1 = ARDroneHover_P.Saturation1_LowerSat;
  } else {
    ARDroneHover_B.Saturation1 = rtb_Sum1;
  }

  /* End of Saturate: '<S1>/Saturation 1' */

  /* Saturate: '<S1>/Saturation 2' */
  if (psi_e > ARDroneHover_P.Saturation2_UpperSat) {
    ARDroneHover_B.Saturation2 = ARDroneHover_P.Saturation2_UpperSat;
  } else if (psi_e < ARDroneHover_P.Saturation2_LowerSat) {
    ARDroneHover_B.Saturation2 = ARDroneHover_P.Saturation2_LowerSat;
  } else {
    ARDroneHover_B.Saturation2 = psi_e;
  }

  /* End of Saturate: '<S1>/Saturation 2' */

  /* Saturate: '<S1>/Saturation 3' */
  if (bytesLeft > ARDroneHover_P.Saturation3_UpperSat) {
    ARDroneHover_B.Saturation3 = ARDroneHover_P.Saturation3_UpperSat;
  } else if (bytesLeft < ARDroneHover_P.Saturation3_LowerSat) {
    ARDroneHover_B.Saturation3 = ARDroneHover_P.Saturation3_LowerSat;
  } else {
    ARDroneHover_B.Saturation3 = bytesLeft;
  }

  /* End of Saturate: '<S1>/Saturation 3' */

  /* Saturate: '<S1>/Saturation 4' */
  if (q > ARDroneHover_P.Saturation4_UpperSat) {
    ARDroneHover_B.Saturation4 = ARDroneHover_P.Saturation4_UpperSat;
  } else if (q < ARDroneHover_P.Saturation4_LowerSat) {
    ARDroneHover_B.Saturation4 = ARDroneHover_P.Saturation4_LowerSat;
  } else {
    ARDroneHover_B.Saturation4 = q;
  }

  /* End of Saturate: '<S1>/Saturation 4' */
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* ManualSwitch: '<Root>/Manual Switch1' incorporates:
     *  Constant: '<Root>/land'
     *  Constant: '<Root>/take off'
     */
    if (ARDroneHover_P.ManualSwitch1_CurrentSetting == 1) {
      bytesLeft = ARDroneHover_P.land_Value;
    } else {
      bytesLeft = ARDroneHover_P.takeoff_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch1' */

    /* MATLAB Function: '<S9>/Drone state request' */
    /* MATLAB Function 'ARDrone Wi-Fi  Block/Subsystem1/Drone state request': '<S11>:1' */
    /* '<S11>:1:26' */
    /* '<S11>:1:32' */
    /* '<S11>:1:38' */
    /* '<S11>:1:42' */
    /* '<S11>:1:51' */
    /* '<S11>:1:54' */
    /* '<S11>:1:65' */
    /* '<S11>:1:72' */
    /* '<S11>:1:113' */
    /* '<S11>:1:16' */
    /* '<S11>:1:19' */
    /* '<S11>:1:22' */
    memset(&ARDroneHover_B.dataControl[0], 0, 150U * sizeof(uint8_T));

    /* '<S11>:1:26' */
    m = 0;
    guard1 = false;
    if (ARDroneHover_DW.SequenceNumber <= 1.0) {
      /* '<S11>:1:29' */
      guard1 = true;
    } else {
      if (!rtIsInf(ARDroneHover_DW.SequenceNumber)) {
        q = fmod(ARDroneHover_DW.SequenceNumber, 100.0);
        if (q == 0.0) {
          q = 0.0;
        }
      } else {
        q = (rtNaN);
      }

      if (q == 0.0) {
        /* '<S11>:1:29' */
        guard1 = true;
      }
    }

    if (guard1) {
      /* '<S11>:1:30' */
      ARDroneHover_DW.SequenceNumber++;

      /* '<S11>:1:31' */
      /* '<S11>:1:32' */
      ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data,
        hex_size);
      m = 41 + hex_size[1];
      for (i_0 = 0; i_0 < 10; i_0++) {
        cmd_data[i_0] = c[i_0];
      }

      aux = hex_size[0] * hex_size[1];
      if (0 <= aux - 1) {
        memcpy(&cmd_data[10], &strCmd_data[0], aux * sizeof(char_T));
      }

      for (i_0 = 0; i_0 < 30; i_0++) {
        cmd_data[(i_0 + aux) + 10] = d[i_0];
      }

      cmd_data[40 + aux] = '\x0d';
    }

    /* '<S11>:1:36' */
    ARDroneHover_DW.SequenceNumber++;

    /* '<S11>:1:37' */
    ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data, hex_size);

    /* '<S11>:1:38' */
    aux = m;

    /* MATLAB Function: '<S9>/Drone state request' */
    loop_ub = hex_size[1];
    m = (m + hex_size[1]) + 11;
    for (i_0 = 0; i_0 < 10; i_0++) {
      /* MATLAB Function: '<S9>/Drone state request' */
      cmd_data[aux + i_0] = e[i_0];
    }

    for (i_0 = 0; i_0 < loop_ub; i_0++) {
      /* MATLAB Function: '<S9>/Drone state request' */
      cmd_data[(aux + i_0) + 10] = strCmd_data[i_0];
    }

    /* MATLAB Function: '<S9>/Drone state request' */
    cmd_data[(aux + hex_size[1]) + 10] = '\x0d';

    /* ManualSwitch: '<Root>/Manual Switch' incorporates:
     *  Constant: '<Root>/_'
     *  Constant: '<Root>/stop'
     */
    if (ARDroneHover_P.ManualSwitch_CurrentSetting == 1) {
      q = ARDroneHover_P._Value;
    } else {
      q = ARDroneHover_P.stop_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch' */

    /* MATLAB Function: '<S9>/Drone state request' */
    if (q == 1.0) {
      /* '<S11>:1:41' */
      /* '<S11>:1:42' */
      m = hex_size[1] + 18;
      loop_ub = hex_size[0] * hex_size[1] - 1;
      for (i_0 = 0; i_0 < 7; i_0++) {
        cmd_data[i_0] = f[i_0];
      }

      if (0 <= loop_ub) {
        memcpy(&cmd_data[7], &strCmd_data[0], (loop_ub + 1) * sizeof(char_T));
      }

      for (i_0 = 0; i_0 < 10; i_0++) {
        cmd_data[(i_0 + loop_ub) + 8] = g[i_0];
      }

      cmd_data[18 + loop_ub] = '\x0d';
    } else if ((ARDroneHover_DW.SequenceNumber > 20.0) &&
               (ARDroneHover_DW.SequenceNumber < 22.0)) {
      /* '<S11>:1:46' */
      /* '<S11>:1:49' */
      ARDroneHover_DW.SequenceNumber = 22.0;

      /* '<S11>:1:50' */
      /* '<S11>:1:51' */
      ARDroneHover_getString(22.0, strCmd_data, hex_size);
      loop_ub = (m + hex_size[1]) + 10;
      if (0 <= m - 1) {
        memcpy(&cmd_data_0[0], &cmd_data[0], m * sizeof(char_T));
      }

      for (i_0 = 0; i_0 < 9; i_0++) {
        cmd_data_0[i_0 + m] = i[i_0];
      }

      aux = hex_size[0] * hex_size[1];
      for (i_0 = 0; i_0 < aux; i_0++) {
        cmd_data_0[(i_0 + m) + 9] = strCmd_data[i_0];
      }

      cmd_data_0[(m + aux) + 9] = '\x0d';
      m = loop_ub;
      if (0 <= loop_ub - 1) {
        memcpy(&cmd_data[0], &cmd_data_0[0], loop_ub * sizeof(char_T));
      }
    } else if ((ARDroneHover_DW.SequenceNumber >= 22.0) &&
               (ARDroneHover_DW.SequenceNumber < 25.0)) {
      /* '<S11>:1:53' */
      /* '<S11>:1:54' */
      aux = m;
      m = (m + hex_size[1]) + 41;
      loop_ub = hex_size[1] - 1;
      for (i_0 = 0; i_0 < 10; i_0++) {
        cmd_data[aux + i_0] = c[i_0];
      }

      for (i_0 = 0; i_0 <= loop_ub; i_0++) {
        cmd_data[(aux + i_0) + 10] = strCmd_data[i_0];
      }

      for (i_0 = 0; i_0 < 30; i_0++) {
        cmd_data[((aux + i_0) + loop_ub) + 11] = h[i_0];
      }

      cmd_data[(aux + loop_ub) + 41] = '\x0d';
    } else {
      if (ARDroneHover_DW.SequenceNumber >= 25.0) {
        /* '<S11>:1:57' */
        if (bytesLeft == 1.0) {
          /* '<S11>:1:59' */
          if (rtb_status[31] == 0) {
            /* '<S11>:1:61' */
            /* '<S11>:1:63' */
            ARDroneHover_DW.SequenceNumber++;

            /* '<S11>:1:64' */
            /* '<S11>:1:65' */
            ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data,
              hex_size);
            loop_ub = (m + hex_size[1]) + 18;
            if (0 <= m - 1) {
              memcpy(&cmd_data_0[0], &cmd_data[0], m * sizeof(char_T));
            }

            for (i_0 = 0; i_0 < 7; i_0++) {
              cmd_data_0[i_0 + m] = f[i_0];
            }

            aux = hex_size[0] * hex_size[1];
            for (i_0 = 0; i_0 < aux; i_0++) {
              cmd_data_0[(i_0 + m) + 7] = strCmd_data[i_0];
            }

            for (i_0 = 0; i_0 < 10; i_0++) {
              cmd_data_0[((i_0 + m) + aux) + 7] = j[i_0];
            }

            cmd_data_0[(m + aux) + 17] = '\x0d';
            m = loop_ub;
            if (0 <= loop_ub - 1) {
              memcpy(&cmd_data[0], &cmd_data_0[0], loop_ub * sizeof(char_T));
            }
          } else {
            if ((rtb_status[31] == 1) && (bytesToRead == 1.0)) {
              /* '<S11>:1:67' */
              /* '<S11>:1:69' */
              ARDroneHover_DW.SequenceNumber++;

              /* '<S11>:1:70' */
              /* '<S11>:1:72' */
              ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data,
                hex_size);
              loop_ub = (m + hex_size[1]) + 11;
              if (0 <= m - 1) {
                memcpy(&cmd_data_0[0], &cmd_data[0], m * sizeof(char_T));
              }

              for (i_0 = 0; i_0 < 8; i_0++) {
                cmd_data_0[i_0 + m] = l[i_0];
              }

              aux = hex_size[0] * hex_size[1];
              for (i_0 = 0; i_0 < aux; i_0++) {
                cmd_data_0[(i_0 + m) + 8] = strCmd_data[i_0];
              }

              i_0 = m + aux;
              cmd_data_0[i_0 + 8] = ',';
              cmd_data_0[i_0 + 9] = '1';
              cmd_data_0[i_0 + 10] = ',';
              if (0 <= loop_ub - 1) {
                memcpy(&cmd_data[0], &cmd_data_0[0], loop_ub * sizeof(char_T));
              }

              /* '<S11>:1:74' */
              aux = ARDroneHover_float2IEEE754(ARDroneHover_B.Saturation1);

              /* '<S11>:1:75' */
              ARDroneHover_getString(fabs((real_T)aux), strCmd_data, hex_size);
              loop_ub_0 = hex_size[1];
              aux = hex_size[0] * hex_size[1] - 1;
              if (0 <= aux) {
                memcpy(&strAux_data[0], &strCmd_data[0], (aux + 1) * sizeof
                       (char_T));
              }

              if (ARDroneHover_B.Saturation1 < 0.0) {
                /* '<S11>:1:76' */
                /* '<S11>:1:77' */
                loop_ub_0 = 1 + hex_size[1];
                strAux_data[0] = '-';
                if (0 <= aux) {
                  memcpy(&strAux_data[1], &strCmd_data[0], (aux + 1) * sizeof
                         (char_T));
                }
              }

              /* '<S11>:1:79' */
              aux = loop_ub + loop_ub_0;
              m = aux + 1;
              for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
                cmd_data[loop_ub + i_0] = strAux_data[i_0];
              }

              cmd_data[aux] = ',';

              /* '<S11>:1:81' */
              aux = ARDroneHover_float2IEEE754(ARDroneHover_B.Saturation2);

              /* '<S11>:1:82' */
              ARDroneHover_getString(fabs((real_T)aux), strCmd_data, hex_size);
              loop_ub_0 = hex_size[1];
              loop_ub = hex_size[0] * hex_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&strAux_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (ARDroneHover_B.Saturation2 < 0.0) {
                /* '<S11>:1:83' */
                /* '<S11>:1:84' */
                loop_ub_0 = 1 + hex_size[1];
                loop_ub = hex_size[0] * hex_size[1] - 1;
                strAux_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&strAux_data[1], &strCmd_data[0], (loop_ub + 1) *
                         sizeof(char_T));
                }
              }

              /* '<S11>:1:86' */
              aux = m;
              m = (m + loop_ub_0) + 1;
              for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
                cmd_data[aux + i_0] = strAux_data[i_0];
              }

              cmd_data[aux + loop_ub_0] = ',';

              /* '<S11>:1:88' */
              aux = ARDroneHover_float2IEEE754(ARDroneHover_B.Saturation4);

              /* '<S11>:1:89' */
              ARDroneHover_getString(fabs((real_T)aux), strCmd_data, hex_size);
              loop_ub_0 = hex_size[1];
              loop_ub = hex_size[0] * hex_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&strAux_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (ARDroneHover_B.Saturation4 < 0.0) {
                /* '<S11>:1:90' */
                /* '<S11>:1:91' */
                loop_ub_0 = 1 + hex_size[1];
                loop_ub = hex_size[0] * hex_size[1] - 1;
                strAux_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&strAux_data[1], &strCmd_data[0], (loop_ub + 1) *
                         sizeof(char_T));
                }
              }

              /* '<S11>:1:93' */
              aux = m;
              m = (m + loop_ub_0) + 1;
              for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
                cmd_data[aux + i_0] = strAux_data[i_0];
              }

              cmd_data[aux + loop_ub_0] = ',';

              /* '<S11>:1:96' */
              aux = ARDroneHover_float2IEEE754(ARDroneHover_B.Saturation3);

              /* '<S11>:1:97' */
              ARDroneHover_getString(fabs((real_T)aux), strCmd_data, hex_size);
              loop_ub_0 = hex_size[1];
              loop_ub = hex_size[0] * hex_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&strAux_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (ARDroneHover_B.Saturation3 < 0.0) {
                /* '<S11>:1:98' */
                /* '<S11>:1:99' */
                /* '<S11>:1:100' */
                loop_ub_0 = 1 + hex_size[1];
                loop_ub = hex_size[0] * hex_size[1] - 1;
                strAux_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&strAux_data[1], &strCmd_data[0], (loop_ub + 1) *
                         sizeof(char_T));
                }
              }

              /* '<S11>:1:102' */
              aux = m;
              m = (m + loop_ub_0) + 1;
              for (i_0 = 0; i_0 < loop_ub_0; i_0++) {
                cmd_data[aux + i_0] = strAux_data[i_0];
              }

              cmd_data[aux + loop_ub_0] = '\x0d';
            }
          }
        } else {
          if ((bytesLeft == 0.0) && (rtb_status[31] == 1)) {
            /* '<S11>:1:108' */
            /* '<S11>:1:110' */
            /* '<S11>:1:111' */
            ARDroneHover_DW.SequenceNumber++;

            /* '<S11>:1:112' */
            /* '<S11>:1:113' */
            ARDroneHover_getString(ARDroneHover_DW.SequenceNumber, strCmd_data,
              hex_size);
            loop_ub = (m + hex_size[1]) + 18;
            if (0 <= m - 1) {
              memcpy(&cmd_data_0[0], &cmd_data[0], m * sizeof(char_T));
            }

            for (i_0 = 0; i_0 < 7; i_0++) {
              cmd_data_0[i_0 + m] = f[i_0];
            }

            aux = hex_size[0] * hex_size[1];
            for (i_0 = 0; i_0 < aux; i_0++) {
              cmd_data_0[(i_0 + m) + 7] = strCmd_data[i_0];
            }

            for (i_0 = 0; i_0 < 10; i_0++) {
              cmd_data_0[((i_0 + m) + aux) + 7] = k[i_0];
            }

            cmd_data_0[(m + aux) + 17] = '\x0d';
            m = loop_ub;
            if (0 <= loop_ub - 1) {
              memcpy(&cmd_data[0], &cmd_data_0[0], loop_ub * sizeof(char_T));
            }
          }
        }
      }
    }

    /* '<S11>:1:126' */
    for (i_0 = 0; i_0 < m; i_0++) {
      ARDroneHover_B.dataControl[i_0] = (uint8_T)cmd_data[i_0];
    }

    /* '<S11>:1:131' */
    ARDroneHover_B.isFlying = rtb_status[31];

    /* S-Function (sldrtpo): '<S9>/Packet Output' */
    /* S-Function Block: <S9>/Packet Output */

    /* no code required */

    /* RateTransition: '<S12>/Rate Transition' incorporates:
     *  Constant: '<S12>/Constant'
     */
    if (ARDroneHover_M->Timing.RateInteraction.TID1_2) {
      ARDroneHover_B.RateTransition[0] = ARDroneHover_P.Constant_Value_k[0];
      ARDroneHover_B.RateTransition[1] = ARDroneHover_P.Constant_Value_k[1];
    }

    /* End of RateTransition: '<S12>/Rate Transition' */
  }

  /* Sum: '<S72>/Add1' */
  ARDroneHover_B.Add1[0] = ARDroneHover_B.deg2rad[0] - ARDroneHover_B.phi_r;
  ARDroneHover_B.Add1[1] = ARDroneHover_B.deg2rad[1] - ARDroneHover_B.theta_r;
  ARDroneHover_B.Add1[2] = ARDroneHover_B.deg2rad[2] -
    ARDroneHover_B.InertialYrefm;
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
  }

  /* Sum: '<S72>/Add' incorporates:
   *  Constant: '<Root>/Heading ref (rad)'
   */
  ARDroneHover_B.Add[0] = ARDroneHover_B.Integrator[0] -
    ARDroneHover_P.Headingrefrad_Value[0];
  ARDroneHover_B.Add[1] = ARDroneHover_B.Integrator[1] -
    ARDroneHover_P.Headingrefrad_Value[1];
  ARDroneHover_B.Add[2] = ARDroneHover_B.TypeConversion4 -
    ARDroneHover_P.Headingrefrad_Value[2];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
  }

  /* MATLAB Function: '<S72>/normalize angle  between -pi and pi radians' */
  /* MATLAB Function 'Outer-loop Controller/Error Scopes/normalize angle  between -pi and pi radians': '<S81>:1' */
  /* '<S81>:1:4' */
  if ((!rtIsInf(ARDroneHover_B.Add1[2])) && (!rtIsNaN(ARDroneHover_B.Add1[2])))
  {
    if (ARDroneHover_B.Add1[2] == 0.0) {
      ARDroneHover_B.angleOut = 0.0;
    } else {
      ARDroneHover_B.angleOut = fmod(ARDroneHover_B.Add1[2], 6.2831853071795862);
      rEQ0 = (ARDroneHover_B.angleOut == 0.0);
      if (!rEQ0) {
        q = fabs(ARDroneHover_B.Add1[2] / 6.2831853071795862);
        rEQ0 = (fabs(q - floor(q + 0.5)) <= 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        ARDroneHover_B.angleOut = 0.0;
      } else {
        if (ARDroneHover_B.Add1[2] < 0.0) {
          ARDroneHover_B.angleOut += 6.2831853071795862;
        }
      }
    }
  } else {
    ARDroneHover_B.angleOut = (rtNaN);
  }

  if (ARDroneHover_B.angleOut > 3.1415926535897931) {
    /* '<S81>:1:5' */
    /* '<S81>:1:6' */
    ARDroneHover_B.angleOut += -6.2831853071795862;
  }

  /* End of MATLAB Function: '<S72>/normalize angle  between -pi and pi radians' */
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
  }

  /* MATLAB Function: '<S82>/Velocity from vehicle body frame  to inertial NED  frame' incorporates:
   *  SignalConversion: '<S83>/TmpSignal ConversionAt SFunction Inport1'
   */
  /* MATLAB Function 'Position estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. /Position estimation/Velocity from vehicle body frame  to inertial NED  frame': '<S83>:1' */
  /* '<S83>:1:3' */
  /* '<S83>:1:4' */
  ARDroneHover_B.Vel_xy[0] = 0.0;
  ARDroneHover_B.Vel_xy[0] += cos(ARDroneHover_B.deg2rad[2]) *
    ARDroneHover_B.TypeConversion5;
  ARDroneHover_B.Vel_xy[0] += -sin(ARDroneHover_B.deg2rad[2]) *
    ARDroneHover_B.TypeConversion6;
  ARDroneHover_B.Vel_xy[1] = 0.0;
  ARDroneHover_B.Vel_xy[1] += sin(ARDroneHover_B.deg2rad[2]) *
    ARDroneHover_B.TypeConversion5;
  ARDroneHover_B.Vel_xy[1] += cos(ARDroneHover_B.deg2rad[2]) *
    ARDroneHover_B.TypeConversion6;

  /* Clock: '<Root>/Clock1' */
  ARDroneHover_B.Clock1 = ARDroneHover_M->Timing.t[0];
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* MATLAB Function: '<S13>/MATLAB Function1' incorporates:
     *  Constant: '<S2>/Constant1'
     *  MATLAB Function: '<S13>/MATLAB Function3'
     *  MATLAB Function: '<S13>/MATLAB Function4'
     *  MATLAB Function: '<S13>/MATLAB Function5'
     *  MATLAB Function: '<S13>/MATLAB Function6'
     *  MATLAB Function: '<S13>/MATLAB Function7'
     */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function1': '<S20>:1' */
    /* '<S20>:1:3' */
    bytesToRead = (ARDroneHover_P.Constant1_Value_p - 1.0) * 8.0;

    /* '<S20>:1:5' */
    rtb_x1 = ARDroneHover_B.PacketInput1_o1[(int32_T)(41.0 + bytesToRead) - 1];

    /* '<S20>:1:6' */
    rtb_x2 = ARDroneHover_B.PacketInput1_o1[(int32_T)((41.0 + bytesToRead) + 1.0)
      - 1];

    /* '<S20>:1:7' */
    rtb_x3 = ARDroneHover_B.PacketInput1_o1[(int32_T)((41.0 + bytesToRead) + 2.0)
      - 1];

    /* '<S20>:1:8' */
    rtb_x4 = ARDroneHover_B.PacketInput1_o1[(int32_T)((41.0 + bytesToRead) + 3.0)
      - 1];

    /* Outputs for Atomic SubSystem: '<S13>/Bit Concat' */
    ARDroneHover_BitConcat(rtb_x4, rtb_x3, rtb_x2, rtb_x1,
      &ARDroneHover_B.BitConcat);

    /* End of Outputs for SubSystem: '<S13>/Bit Concat' */

    /* MATLAB Function: '<S13>/MATLAB Function3' */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function3': '<S22>:1' */
    /* '<S22>:1:3' */
    /* '<S22>:1:5' */
    rtb_y1 = ARDroneHover_B.PacketInput1_o1[(int32_T)(45.0 + bytesToRead) - 1];

    /* '<S22>:1:6' */
    rtb_y2 = ARDroneHover_B.PacketInput1_o1[(int32_T)((45.0 + bytesToRead) + 1.0)
      - 1];

    /* '<S22>:1:7' */
    rtb_y3 = ARDroneHover_B.PacketInput1_o1[(int32_T)((45.0 + bytesToRead) + 2.0)
      - 1];

    /* '<S22>:1:8' */
    rtb_y4 = ARDroneHover_B.PacketInput1_o1[(int32_T)((45.0 + bytesToRead) + 3.0)
      - 1];

    /* Outputs for Atomic SubSystem: '<S13>/Bit Concat1' */
    ARDroneHover_BitConcat(rtb_y4, rtb_y3, rtb_y2, rtb_y1,
      &ARDroneHover_B.BitConcat1);

    /* End of Outputs for SubSystem: '<S13>/Bit Concat1' */

    /* MATLAB Function: '<S13>/MATLAB Function4' */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function4': '<S23>:1' */
    /* '<S23>:1:3' */
    /* '<S23>:1:5' */
    rtb_z1 = ARDroneHover_B.PacketInput1_o1[(int32_T)(49.0 + bytesToRead) - 1];

    /* '<S23>:1:6' */
    rtb_z2 = ARDroneHover_B.PacketInput1_o1[(int32_T)((49.0 + bytesToRead) + 1.0)
      - 1];

    /* '<S23>:1:7' */
    rtb_z3 = ARDroneHover_B.PacketInput1_o1[(int32_T)((49.0 + bytesToRead) + 2.0)
      - 1];

    /* '<S23>:1:8' */
    rtb_z4 = ARDroneHover_B.PacketInput1_o1[(int32_T)((49.0 + bytesToRead) + 3.0)
      - 1];

    /* Outputs for Atomic SubSystem: '<S13>/Bit Concat2' */
    ARDroneHover_BitConcat(rtb_z4, rtb_z3, rtb_z2, rtb_z1,
      &ARDroneHover_B.BitConcat2);

    /* End of Outputs for SubSystem: '<S13>/Bit Concat2' */

    /* MATLAB Function: '<S13>/MATLAB Function5' */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function5': '<S24>:1' */
    /* '<S24>:1:3' */
    /* '<S24>:1:5' */
    rtb_roll1 = ARDroneHover_B.PacketInput1_o1[(int32_T)(53.0 + bytesToRead) - 1];

    /* '<S24>:1:6' */
    rtb_roll2 = ARDroneHover_B.PacketInput1_o1[(int32_T)((53.0 + bytesToRead) +
      1.0) - 1];

    /* '<S24>:1:7' */
    rtb_roll3 = ARDroneHover_B.PacketInput1_o1[(int32_T)((53.0 + bytesToRead) +
      2.0) - 1];

    /* '<S24>:1:8' */
    rtb_roll4 = ARDroneHover_B.PacketInput1_o1[(int32_T)((53.0 + bytesToRead) +
      3.0) - 1];

    /* Outputs for Atomic SubSystem: '<S13>/Bit Concat3' */
    ARDroneHover_BitConcat(rtb_roll4, rtb_roll3, rtb_roll2, rtb_roll1,
      &ARDroneHover_B.BitConcat3);

    /* End of Outputs for SubSystem: '<S13>/Bit Concat3' */

    /* MATLAB Function: '<S13>/MATLAB Function6' */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function6': '<S25>:1' */
    /* '<S25>:1:3' */
    /* '<S25>:1:5' */
    rtb_pitch1 = ARDroneHover_B.PacketInput1_o1[(int32_T)(57.0 + bytesToRead) -
      1];

    /* '<S25>:1:6' */
    rtb_pitch2 = ARDroneHover_B.PacketInput1_o1[(int32_T)((57.0 + bytesToRead) +
      1.0) - 1];

    /* '<S25>:1:7' */
    rtb_pitch3 = ARDroneHover_B.PacketInput1_o1[(int32_T)((57.0 + bytesToRead) +
      2.0) - 1];

    /* '<S25>:1:8' */
    rtb_pitch4 = ARDroneHover_B.PacketInput1_o1[(int32_T)((57.0 + bytesToRead) +
      3.0) - 1];

    /* Outputs for Atomic SubSystem: '<S13>/Bit Concat4' */
    ARDroneHover_BitConcat(rtb_pitch4, rtb_pitch3, rtb_pitch2, rtb_pitch1,
      &ARDroneHover_B.BitConcat4);

    /* End of Outputs for SubSystem: '<S13>/Bit Concat4' */

    /* MATLAB Function: '<S13>/MATLAB Function7' */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function7': '<S26>:1' */
    /* '<S26>:1:3' */
    /* '<S26>:1:5' */
    rtb_yaw1 = ARDroneHover_B.PacketInput1_o1[(int32_T)(61.0 + bytesToRead) - 1];

    /* '<S26>:1:6' */
    rtb_yaw2 = ARDroneHover_B.PacketInput1_o1[(int32_T)((61.0 + bytesToRead) +
      1.0) - 1];

    /* '<S26>:1:7' */
    rtb_yaw3 = ARDroneHover_B.PacketInput1_o1[(int32_T)((61.0 + bytesToRead) +
      2.0) - 1];

    /* '<S26>:1:8' */
    rtb_yaw4 = ARDroneHover_B.PacketInput1_o1[(int32_T)((61.0 + bytesToRead) +
      3.0) - 1];

    /* Outputs for Atomic SubSystem: '<S13>/Bit Concat5' */
    ARDroneHover_BitConcat(rtb_yaw4, rtb_yaw3, rtb_yaw2, rtb_yaw1,
      &ARDroneHover_B.BitConcat5);

    /* End of Outputs for SubSystem: '<S13>/Bit Concat5' */

    /* MATLAB Function: '<S13>/MATLAB Function2' */
    /* MATLAB Function 'Data from Qualisys/Subsystem/MATLAB Function2': '<S21>:1' */
    /* '<S21>:1:4' */
    memcpy((void *)&res, (void *)&ARDroneHover_B.BitConcat.y, (uint32_T)((size_t)
            1 * sizeof(real32_T)));

    /* '<S21>:1:5' */
    memcpy((void *)&b_res, (void *)&ARDroneHover_B.BitConcat1.y, (uint32_T)
           ((size_t)1 * sizeof(real32_T)));

    /* '<S21>:1:6' */
    memcpy((void *)&rtb_w, (void *)&ARDroneHover_B.BitConcat2.y, (uint32_T)
           ((size_t)1 * sizeof(real32_T)));

    /* '<S21>:1:7' */
    memcpy((void *)&ARDroneHover_B.Roll, (void *)&ARDroneHover_B.BitConcat3.y,
           (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S21>:1:8' */
    memcpy((void *)&rtb_yawAngle, (void *)&ARDroneHover_B.BitConcat4.y,
           (uint32_T)((size_t)1 * sizeof(real32_T)));

    /* '<S21>:1:9' */
    memcpy((void *)&rtb_v, (void *)&ARDroneHover_B.BitConcat5.y, (uint32_T)
           ((size_t)1 * sizeof(real32_T)));

    /* Gain: '<S13>/Gain' incorporates:
     *  MATLAB Function: '<S13>/MATLAB Function2'
     */
    ARDroneHover_B.Gain = ARDroneHover_P.Gain_Gain_n * res;

    /* Gain: '<S2>/Gain9' incorporates:
     *  Gain: '<S13>/Gain1'
     *  MATLAB Function: '<S13>/MATLAB Function2'
     */
    ARDroneHover_B.Gain9 = ARDroneHover_P.Gain1_Gain_p * b_res *
      ARDroneHover_P.Gain9_Gain;

    /* Gain: '<S2>/Gain10' incorporates:
     *  Gain: '<S13>/Gain2'
     *  MATLAB Function: '<S13>/MATLAB Function2'
     */
    ARDroneHover_B.Gain10 = ARDroneHover_P.Gain2_Gain_m * rtb_w *
      ARDroneHover_P.Gain10_Gain;

    /* Gain: '<S2>/Gain6' incorporates:
     *  MATLAB Function: '<S13>/MATLAB Function2'
     */
    ARDroneHover_B.Gain6 = ARDroneHover_P.Gain6_Gain * rtb_yawAngle;

    /* Gain: '<S2>/Gain7' incorporates:
     *  MATLAB Function: '<S13>/MATLAB Function2'
     */
    ARDroneHover_B.Gain7 = ARDroneHover_P.Gain7_Gain * rtb_v;
  }
}

/* Model update function for TID0 */
void ARDroneHover_update0(void)        /* Sample time: [0.0s, 0.0s] */
{
  /* Update for Integrator: '<S82>/Integrator' */
  ARDroneHover_DW.Integrator_IWORK = 0;
  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    /* Update for UnitDelay: '<S1>/Unit Delay to avoid algebraic loop' */
    ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE =
      ARDroneHover_B.isFlying;

    /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
    if (!ARDroneHover_B.Compare) {
      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[0] +=
        ARDroneHover_P.DiscreteTimeIntegrator_gainval * ARDroneHover_B.dot_xi[0];
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

      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[1] +=
        ARDroneHover_P.DiscreteTimeIntegrator_gainval * ARDroneHover_B.dot_xi[1];
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

      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[2] +=
        ARDroneHover_P.DiscreteTimeIntegrator_gainval * ARDroneHover_B.dot_xi[2];
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

      ARDroneHover_DW.DiscreteTimeIntegrator_DSTATE[3] +=
        ARDroneHover_P.DiscreteTimeIntegrator_gainval * ARDroneHover_B.dot_xi[3];
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

    /* End of Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */

    /* Update for S-Function (sldrtpo): '<S9>/Packet Output' */

    /* S-Function Block: <S9>/Packet Output */
    {
      uint8_T outdata[150U];
      RTWin_ANYTYPEPTR outdp;
      outdp.p_uint8_T = outdata;

      {
        int_T i1;
        const uint8_T *u0 = &ARDroneHover_B.dataControl[0];
        for (i1=0; i1 < 150; i1++) {
          {
            uint8_T pktout = u0[i1];
            *outdp.p_uint8_T++ = pktout;
          }
        }
      }

      RTBIO_DriverIO(2, STREAMOUTPUT, IOWRITE, 150U,
                     &ARDroneHover_P.PacketOutput_PacketID, (double*) outdata,
                     NULL);
    }
  }

  if (rtmIsMajorTimeStep(ARDroneHover_M)) {
    rt_ertODEUpdateContinuousStates(&ARDroneHover_M->solverInfo);
  }

  /* Update absolute time */
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

  /* Update absolute time */
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

/* Derivatives for root system: '<Root>' */
void ARDroneHover_derivatives(void)
{
  XDot_ARDroneHover_T *_rtXdot;
  _rtXdot = ((XDot_ARDroneHover_T *) ARDroneHover_M->derivs);

  /* Derivatives for Integrator: '<S82>/Integrator' */
  _rtXdot->Integrator_CSTATE[0] = ARDroneHover_B.Vel_xy[0];
  _rtXdot->Integrator_CSTATE[1] = ARDroneHover_B.Vel_xy[1];
}

/* Model output function for TID2 */
void ARDroneHover_output2(void)        /* Sample time: [0.65s, 0.0s] */
{
  /* S-Function (sldrtpo): '<S12>/Packet Output1' */
  /* S-Function Block: <S12>/Packet Output1 */

  /* no code required */
}

/* Model update function for TID2 */
void ARDroneHover_update2(void)        /* Sample time: [0.65s, 0.0s] */
{
  /* Update for S-Function (sldrtpo): '<S12>/Packet Output1' */

  /* S-Function Block: <S12>/Packet Output1 */
  {
    uint8_T outdata[2U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = ARDroneHover_B.RateTransition[0];
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = ARDroneHover_B.RateTransition[1];
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 2U,
                   &ARDroneHover_P.PacketOutput1_PacketID, (double*) outdata,
                   NULL);
  }

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ARDroneHover_M->Timing.clockTick2)) {
    ++ARDroneHover_M->Timing.clockTickH2;
  }

  ARDroneHover_M->Timing.t[2] = ARDroneHover_M->Timing.clockTick2 *
    ARDroneHover_M->Timing.stepSize2 + ARDroneHover_M->Timing.clockTickH2 *
    ARDroneHover_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
void ARDroneHover_output(int_T tid)
{
  switch (tid) {
   case 0 :
    ARDroneHover_output0();
    break;

   case 2 :
    ARDroneHover_output2();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
void ARDroneHover_update(int_T tid)
{
  switch (tid) {
   case 0 :
    ARDroneHover_update0();
    break;

   case 2 :
    ARDroneHover_update2();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void ARDroneHover_initialize(void)
{
  /* Start for Constant: '<S82>/Constant1' */
  ARDroneHover_B.Constant1[0] = ARDroneHover_P.Constant1_Value[0];
  ARDroneHover_B.Constant1[1] = ARDroneHover_P.Constant1_Value[1];

  /* Start for Constant: '<Root>/Inertial Y ref (m)' */
  ARDroneHover_B.InertialYrefm = ARDroneHover_P.InertialYrefm_Value;

  /* Start for S-Function (sldrtpo): '<S9>/Packet Output' */

  /* S-Function Block: <S9>/Packet Output */
  /* no initial value should be set */

  /* Start for S-Function (sldrtpo): '<S12>/Packet Output1' */

  /* S-Function Block: <S12>/Packet Output1 */
  /* no initial value should be set */

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay to avoid algebraic loop' */
  ARDroneHover_DW.UnitDelaytoavoidalgebraicloop_DSTATE =
    ARDroneHover_P.UnitDelaytoavoidalgebraicloop_InitialCondition;

  /* InitializeConditions for Integrator: '<S82>/Integrator' */
  if (rtmIsFirstInitCond(ARDroneHover_M)) {
    ARDroneHover_X.Integrator_CSTATE[0] = 0.0;
    ARDroneHover_X.Integrator_CSTATE[1] = 0.0;
  }

  ARDroneHover_DW.Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S82>/Integrator' */

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
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

  /* SystemInitialize for MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  ARDroneHover_DW.yaw0 = 0.0;
  ARDroneHover_DW.mode = 0.0;

  /* SystemInitialize for MATLAB Function: '<S9>/Drone state request' */
  ARDroneHover_DW.SequenceNumber = 1.0;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(ARDroneHover_M)) {
    rtmSetFirstInitCond(ARDroneHover_M, 0);
  }
}

/* Model terminate function */
void ARDroneHover_terminate(void)
{
  /* Terminate for S-Function (sldrtpo): '<S9>/Packet Output' */

  /* S-Function Block: <S9>/Packet Output */
  /* no initial value should be set */

  /* Terminate for S-Function (sldrtpo): '<S12>/Packet Output1' */

  /* S-Function Block: <S12>/Packet Output1 */
  /* no initial value should be set */
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
  if (tid == 1)
    tid = 0;
  ARDroneHover_output(tid);
}

void MdlUpdate(int_T tid)
{
  if (tid == 1)
    tid = 0;
  ARDroneHover_update(tid);
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
    mdlTsMap[2] = 2;
    ARDroneHover_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ARDroneHover_M->Timing.sampleTimes =
      (&ARDroneHover_M->Timing.sampleTimesArray[0]);
    ARDroneHover_M->Timing.offsetTimes =
      (&ARDroneHover_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ARDroneHover_M->Timing.sampleTimes[0] = (0.0);
    ARDroneHover_M->Timing.sampleTimes[1] = (0.065);
    ARDroneHover_M->Timing.sampleTimes[2] = (0.65);

    /* task offsets */
    ARDroneHover_M->Timing.offsetTimes[0] = (0.0);
    ARDroneHover_M->Timing.offsetTimes[1] = (0.0);
    ARDroneHover_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(ARDroneHover_M, &ARDroneHover_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ARDroneHover_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits = ARDroneHover_M->Timing.perTaskSampleHitsArray;
    ARDroneHover_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    ARDroneHover_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ARDroneHover_M, -1);
  ARDroneHover_M->Timing.stepSize0 = 0.065;
  ARDroneHover_M->Timing.stepSize1 = 0.065;
  ARDroneHover_M->Timing.stepSize2 = 0.65;
  rtmSetFirstInitCond(ARDroneHover_M, 1);

  /* External mode info */
  ARDroneHover_M->Sizes.checksums[0] = (3815497446U);
  ARDroneHover_M->Sizes.checksums[1] = (4030339132U);
  ARDroneHover_M->Sizes.checksums[2] = (46755770U);
  ARDroneHover_M->Sizes.checksums[3] = (3497617164U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[66];
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
    rteiSetModelMappingInfoPtr(ARDroneHover_M->extModeInfo,
      &ARDroneHover_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ARDroneHover_M->extModeInfo,
                        ARDroneHover_M->Sizes.checksums);
    rteiSetTPtr(ARDroneHover_M->extModeInfo, rtmGetTPtr(ARDroneHover_M));
  }

  ARDroneHover_M->solverInfoPtr = (&ARDroneHover_M->solverInfo);
  ARDroneHover_M->Timing.stepSize = (0.065);
  rtsiSetFixedStepSize(&ARDroneHover_M->solverInfo, 0.065);
  rtsiSetSolverMode(&ARDroneHover_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  ARDroneHover_M->blockIO = ((void *) &ARDroneHover_B);
  (void) memset(((void *) &ARDroneHover_B), 0,
                sizeof(B_ARDroneHover_T));

  {
    int32_T i;
    for (i = 0; i < 9; i++) {
      ARDroneHover_B.TmpSignalConversionAtToWorkspaceInport1[i] = 0.0;
    }

    ARDroneHover_B.TypeConversion = 0.0;
    ARDroneHover_B.TypeConversion1 = 0.0;
    ARDroneHover_B.TypeConversion2 = 0.0;
    ARDroneHover_B.TypeConversion4 = 0.0;
    ARDroneHover_B.Constant1[0] = 0.0;
    ARDroneHover_B.Constant1[1] = 0.0;
    ARDroneHover_B.Integrator[0] = 0.0;
    ARDroneHover_B.Integrator[1] = 0.0;
    ARDroneHover_B.deg2rad[0] = 0.0;
    ARDroneHover_B.deg2rad[1] = 0.0;
    ARDroneHover_B.deg2rad[2] = 0.0;
    ARDroneHover_B.TypeConversion5 = 0.0;
    ARDroneHover_B.TypeConversion6 = 0.0;
    ARDroneHover_B.TypeConversion7 = 0.0;
    ARDroneHover_B.deg2rad1 = 0.0;
    ARDroneHover_B.proportionalcontrolgain = 0.0;
    ARDroneHover_B.InertialYrefm = 0.0;
    ARDroneHover_B.Saturation1 = 0.0;
    ARDroneHover_B.Saturation2 = 0.0;
    ARDroneHover_B.Saturation3 = 0.0;
    ARDroneHover_B.Saturation4 = 0.0;
    ARDroneHover_B.Add1[0] = 0.0;
    ARDroneHover_B.Add1[1] = 0.0;
    ARDroneHover_B.Add1[2] = 0.0;
    ARDroneHover_B.Add[0] = 0.0;
    ARDroneHover_B.Add[1] = 0.0;
    ARDroneHover_B.Add[2] = 0.0;
    ARDroneHover_B.Clock1 = 0.0;
    ARDroneHover_B.Vel_xy[0] = 0.0;
    ARDroneHover_B.Vel_xy[1] = 0.0;
    ARDroneHover_B.w_r = 0.0;
    ARDroneHover_B.dot_psi_r = 0.0;
    ARDroneHover_B.theta_r = 0.0;
    ARDroneHover_B.phi_r = 0.0;
    ARDroneHover_B.dot_xi[0] = 0.0;
    ARDroneHover_B.dot_xi[1] = 0.0;
    ARDroneHover_B.dot_xi[2] = 0.0;
    ARDroneHover_B.dot_xi[3] = 0.0;
    ARDroneHover_B.angleOut = 0.0;
    ARDroneHover_B.yawOut = 0.0;
    ARDroneHover_B.isFlying = 0.0;
    ARDroneHover_B.Gain = 0.0F;
    ARDroneHover_B.Gain9 = 0.0F;
    ARDroneHover_B.Gain10 = 0.0F;
    ARDroneHover_B.Gain6 = 0.0F;
    ARDroneHover_B.Gain7 = 0.0F;
    ARDroneHover_B.Roll = 0.0F;
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
  ARDroneHover_DW.yaw0 = 0.0;
  ARDroneHover_DW.mode = 0.0;
  ARDroneHover_DW.SequenceNumber = 0.0;
  ARDroneHover_DW.count = 0.0;
  ARDroneHover_DW.countHeader = 0.0;
  ARDroneHover_DW.countBuffer = 0.0;
  ARDroneHover_DW.hPrev = 0.0;

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
  ARDroneHover_M->Sizes.numContStates = (2);/* Number of continuous states */
  ARDroneHover_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  ARDroneHover_M->Sizes.numY = (0);    /* Number of model outputs */
  ARDroneHover_M->Sizes.numU = (0);    /* Number of model inputs */
  ARDroneHover_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ARDroneHover_M->Sizes.numSampTimes = (3);/* Number of sample times */
  ARDroneHover_M->Sizes.numBlocks = (143);/* Number of blocks */
  ARDroneHover_M->Sizes.numBlockIO = (48);/* Number of block outputs */
  ARDroneHover_M->Sizes.numBlockPrms = (69);/* Sum of parameter "widths" */
  return ARDroneHover_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
