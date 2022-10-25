/*
 * ARDroneHoverHeight.c
 *
 * Code generation for model "ARDroneHoverHeight".
 *
 * Model version              : $Id: UAV_PIL.mdl 965 2013-03-21 01:08:53Z escobar $
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Wed Oct 12 12:38:32 2022
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ARDroneHoverHeight.h"
#include "ARDroneHoverHeight_private.h"
#include "ARDroneHoverHeight_dt.h"

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  0.03, 0.0,
};

/* Block signals (default storage) */
B_ARDroneHoverHeight_T ARDroneHoverHeight_B;

/* Continuous states */
X_ARDroneHoverHeight_T ARDroneHoverHeight_X;

/* Block states (default storage) */
DW_ARDroneHoverHeight_T ARDroneHoverHeight_DW;

/* Real-time model */
RT_MODEL_ARDroneHoverHeight_T ARDroneHoverHeight_M_;
RT_MODEL_ARDroneHoverHeight_T *const ARDroneHoverHeight_M =
  &ARDroneHoverHeight_M_;

/* Forward declaration for local functions */
static void ARDroneHoverHeight_getString(real_T a, char_T strOut_data[], int32_T
  strOut_size[2]);
static int32_T ARDroneHoverHeight_float2IEEE754(real_T fVal);

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
  ARDroneHoverHeight_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
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

/* Function for MATLAB Function: '<S7>/Drone state request' */
static void ARDroneHoverHeight_getString(real_T a, char_T strOut_data[], int32_T
  strOut_size[2])
{
  int32_T d;
  uint8_T digit_data[11];
  real_T r;
  int32_T loop_ub;

  /* '<S9>:1:138' */
  d = 1;
  if ((a >= 10.0) && (a < 100.0)) {
    /* '<S9>:1:144' */
    /* '<S9>:1:145' */
    d = 2;
  }

  if ((a >= 100.0) && (a < 1000.0)) {
    /* '<S9>:1:148' */
    /* '<S9>:1:149' */
    d = 3;
  }

  if ((a >= 1000.0) && (a < 10000.0)) {
    /* '<S9>:1:152' */
    /* '<S9>:1:153' */
    d = 4;
  }

  if ((a >= 10000.0) && (a < 100000.0)) {
    /* '<S9>:1:156' */
    /* '<S9>:1:157' */
    d = 5;
  }

  if ((a >= 100000.0) && (a < 1.0E+6)) {
    /* '<S9>:1:160' */
    /* '<S9>:1:161' */
    d = 6;
  }

  if ((a >= 1.0E+6) && (a < 1.0E+7)) {
    /* '<S9>:1:164' */
    /* '<S9>:1:165' */
    d = 7;
  }

  if ((a >= 1.0E+7) && (a < 1.0E+8)) {
    /* '<S9>:1:168' */
    /* '<S9>:1:169' */
    d = 8;
  }

  if ((a >= 1.0E+8) && (a < 1.0E+9)) {
    /* '<S9>:1:172' */
    /* '<S9>:1:173' */
    d = 9;
  }

  if ((a >= 1.0E+9) && (a < 1.0E+10)) {
    /* '<S9>:1:176' */
    /* '<S9>:1:177' */
    d = 10;
  }

  if (a >= 1.0E+10) {
    /* '<S9>:1:180' */
    /* '<S9>:1:181' */
    d = 11;
  }

  /* '<S9>:1:186' */
  loop_ub = d - 1;
  if (0 <= loop_ub) {
    memset(&digit_data[0], 0, (loop_ub + 1) * sizeof(uint8_T));
  }

  /* '<S9>:1:189' */
  for (loop_ub = 0; loop_ub < d; loop_ub++) {
    /* '<S9>:1:189' */
    /* '<S9>:1:191' */
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

    /* '<S9>:1:194' */
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

  /* '<S9>:1:199' */
  strOut_size[0] = 1;
  strOut_size[1] = d;
  loop_ub = d - 1;
  for (d = 0; d <= loop_ub; d++) {
    strOut_data[d] = (int8_T)digit_data[d];
  }
}

/* Function for MATLAB Function: '<S7>/Drone state request' */
static int32_T ARDroneHoverHeight_float2IEEE754(real_T fVal)
{
  int32_T iVal;
  char_T binData[32];
  char_T binData2[32];
  int32_T bit;
  real_T b_iVal;
  uint8_T y[4];
  real32_T x;
  int32_T b_k;

  /* '<S9>:1:209' */
  /* '<S9>:1:207' */
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

  /* '<S9>:1:209' */
  for (b_k = 0; b_k < 8; b_k++) {
    binData2[b_k] = binData[(b_k << 2) + 3];
    binData2[b_k + 8] = binData[(b_k << 2) + 2];
    binData2[b_k + 16] = binData[(b_k << 2) + 1];
    binData2[b_k + 24] = binData[b_k << 2];
  }

  /* '<S9>:1:210' */
  b_iVal = 0.0;

  /* '<S9>:1:211' */
  for (b_k = 0; b_k < 32; b_k++) {
    /* '<S9>:1:211' */
    if (binData2[31 - b_k] == '1') {
      /* '<S9>:1:213' */
      /* '<S9>:1:214' */
      bit = 1;
    } else {
      /* '<S9>:1:216' */
      bit = 0;
    }

    if (32 - b_k == 1) {
      /* '<S9>:1:219' */
      /* '<S9>:1:220' */
      b_iVal -= (real_T)bit * 2.147483648E+9;
    } else {
      /* '<S9>:1:222' */
      b_iVal += rt_powd_snf(2.0, 32.0 - (-(real_T)b_k + 32.0)) * (real_T)bit;
    }
  }

  /* '<S9>:1:227' */
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
void ARDroneHoverHeight_output(void)
{
  char_T *sErr;
  real_T bytesToRead;
  real_T bytesLeft;
  real_T b;
  uint8_T data[496];
  uint32_T battery;
  char_T hex_data[8];
  char_T b_hex_data[8];
  real32_T res;
  real32_T b_res;
  real32_T c_res;
  uint32_T d_res;
  real32_T e_res;
  real32_T f_res;
  real32_T g_res;
  uint8_T di;
  uint8_T r;
  int32_T firstcol;
  boolean_T rEQ0;
  real_T enableRefs;
  real_T stop;
  real_T isFlying;
  char_T cmd_data[148];
  char_T strCmd_data[11];
  char_T strAux_data[12];
  real_T r_0;
  int32_T i;
  uint8_T tmp_data[1024];
  int32_T aux;
  int32_T loop_ub;
  int32_T strCmd_size[2];
  int32_T tmp_size_idx_1;
  int32_T cmd_size_idx_1;
  real_T tmp;
  real_T tmp_0;
  static const char_T c[10] = { 'A', 'T', '*', 'C', 'O', 'N', 'F', 'I', 'G', '='
  };

  static const char_T e[10] = { 'A', 'T', '*', 'C', 'O', 'M', 'W', 'D', 'G', '='
  };

  static const char_T d[30] = { ',', '\"', 'g', 'e', 'n', 'e', 'r', 'a', 'l',
    ':', 'n', 'a', 'v', 'd', 'a', 't', 'a', '_', 'd', 'e', 'm', 'o', '\"', ',',
    '\"', 'T', 'R', 'U', 'E', '\"' };

  static const char_T f[7] = { 'A', 'T', '*', 'R', 'E', 'F', '=' };

  static const char_T i_0[9] = { 'A', 'T', '*', 'F', 'T', 'R', 'I', 'M', '=' };

  static const char_T g[10] = { ',', '2', '9', '0', '7', '1', '7', '9', '5', '2'
  };

  static const char_T h[30] = { '\"', 'c', 'o', 'n', 'r', 'o', 'l', ':', 'a',
    'l', 't', 'i', 't', 'u', 'd', 'e', '_', 'm', 'a', 'x', '\"', ',', '\"', '1',
    '0', '0', '0', '0', '0', '\"' };

  static const char_T l[8] = { 'A', 'T', '*', 'P', 'C', 'M', 'D', '=' };

  static const char_T k[10] = { ',', '2', '9', '0', '7', '1', '7', '6', '9', '6'
  };

  static const char_T j[10] = { ',', '2', '9', '0', '7', '1', '8', '2', '0', '8'
  };

  boolean_T guard1 = false;
  boolean_T exitg1;
  if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
    /* set solver stop time */
    if (!(ARDroneHoverHeight_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&ARDroneHoverHeight_M->solverInfo,
                            ((ARDroneHoverHeight_M->Timing.clockTickH0 + 1) *
        ARDroneHoverHeight_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&ARDroneHoverHeight_M->solverInfo,
                            ((ARDroneHoverHeight_M->Timing.clockTick0 + 1) *
        ARDroneHoverHeight_M->Timing.stepSize0 +
        ARDroneHoverHeight_M->Timing.clockTickH0 *
        ARDroneHoverHeight_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(ARDroneHoverHeight_M)) {
    ARDroneHoverHeight_M->Timing.t[0] = rtsiGetT
      (&ARDroneHoverHeight_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
    /* S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
    sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U]);
    firstcol = 500;
    LibOutputs_Network(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U],
                       &ARDroneHoverHeight_B.UDPReceive1_o1[0U], &firstcol);
    if (*sErr != 0) {
      rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
      rtmSetStopRequested(ARDroneHoverHeight_M, 1);
    }

    ARDroneHoverHeight_B.UDPReceive1_o2 = (uint16_T)firstcol;

    /* MATLAB Function: '<S1>/Data synchronization ' */
    /* MATLAB Function 'ARDrone Wi-Fi  Block/Data synchronization ': '<S6>:1' */
    /* '<S6>:1:52' */
    for (i = 0; i < 500; i++) {
      ARDroneHoverHeight_DW.buffer[(int32_T)(ARDroneHoverHeight_DW.countBuffer +
        ((real_T)i + 1.0)) - 1] = ARDroneHoverHeight_B.UDPReceive1_o1[i];
    }

    /* '<S6>:1:54' */
    bytesToRead = ARDroneHoverHeight_DW.countBuffer + 500.0;

    /* '<S6>:1:59' */
    firstcol = 0;
    exitg1 = false;
    while ((!exitg1) && (firstcol <= (int32_T)(ARDroneHoverHeight_DW.countBuffer
             + 500.0) - 1)) {
      /* '<S6>:1:59' */
      if ((ARDroneHoverHeight_DW.countHeader == 4.0) &&
          (ARDroneHoverHeight_DW.count < 496.0)) {
        /* '<S6>:1:60' */
        /* '<S6>:1:61' */
        bytesLeft = 496.0 - ARDroneHoverHeight_DW.count;
        b = (((real_T)firstcol + 1.0) + (496.0 - ARDroneHoverHeight_DW.count)) -
          1.0;
        if ((real_T)firstcol + 1.0 > b) {
          i = 0;
          tmp_size_idx_1 = 0;
        } else {
          i = firstcol;
          tmp_size_idx_1 = (int32_T)b;
        }

        /* '<S6>:1:62' */
        aux = (int32_T)(ARDroneHoverHeight_DW.count + 1.0);
        loop_ub = tmp_size_idx_1 - i;
        for (cmd_size_idx_1 = 0; cmd_size_idx_1 < loop_ub; cmd_size_idx_1++) {
          ARDroneHoverHeight_DW.frame[(aux + cmd_size_idx_1) - 1] =
            ARDroneHoverHeight_DW.buffer[i + cmd_size_idx_1];
        }

        /* '<S6>:1:63' */
        ARDroneHoverHeight_DW.count = 496.0;

        /* '<S6>:1:64' */
        ARDroneHoverHeight_DW.countBuffer = (ARDroneHoverHeight_DW.countBuffer +
          500.0) - bytesLeft;
        bytesLeft += (real_T)firstcol + 1.0;
        if (bytesLeft > bytesToRead) {
          firstcol = 0;
          i = 0;
        } else {
          firstcol = (int32_T)bytesLeft - 1;
          i = (int32_T)bytesToRead;
        }

        /* '<S6>:1:65' */
        tmp_size_idx_1 = i - firstcol;
        loop_ub = i - firstcol;
        for (aux = 0; aux < loop_ub; aux++) {
          tmp_data[aux] = ARDroneHoverHeight_DW.buffer[firstcol + aux];
        }

        if (0 <= tmp_size_idx_1 - 1) {
          memcpy(&ARDroneHoverHeight_DW.buffer[0], &tmp_data[0], tmp_size_idx_1 *
                 sizeof(uint8_T));
        }

        exitg1 = true;
      } else if ((ARDroneHoverHeight_DW.countHeader == 3.0) &&
                 (ARDroneHoverHeight_DW.buffer[firstcol] == 85)) {
        /* '<S6>:1:70' */
        /* '<S6>:1:72' */
        ARDroneHoverHeight_DW.countHeader = 4.0;
        if ((ARDroneHoverHeight_DW.countBuffer + 500.0) - ((real_T)firstcol +
             1.0) > 496.0) {
          /* '<S6>:1:74' */
          /* '<S6>:1:75' */
          ARDroneHoverHeight_DW.count = 496.0;

          /* '<S6>:1:76' */
          for (aux = 0; aux < 496; aux++) {
            ARDroneHoverHeight_DW.frame[aux] = ARDroneHoverHeight_DW.buffer[(aux
              + firstcol) + 1];
          }

          /* '<S6>:1:77' */
          ARDroneHoverHeight_DW.countBuffer =
            ((ARDroneHoverHeight_DW.countBuffer + 500.0) - ((real_T)firstcol +
              1.0)) - 496.0;
          if ((((real_T)firstcol + 1.0) + 496.0) + 1.0 > bytesToRead) {
            firstcol = -497;
            i = 0;
          } else {
            i = (int32_T)bytesToRead;
          }

          /* '<S6>:1:78' */
          aux = firstcol + 497;
          tmp_size_idx_1 = i - aux;
          loop_ub = i - aux;
          for (cmd_size_idx_1 = 0; cmd_size_idx_1 < loop_ub; cmd_size_idx_1++) {
            tmp_data[cmd_size_idx_1] = ARDroneHoverHeight_DW.buffer[aux +
              cmd_size_idx_1];
          }

          if (0 <= tmp_size_idx_1 - 1) {
            memcpy(&ARDroneHoverHeight_DW.buffer[0], &tmp_data[0],
                   tmp_size_idx_1 * sizeof(uint8_T));
          }
        } else {
          /* '<S6>:1:81' */
          ARDroneHoverHeight_DW.count = (ARDroneHoverHeight_DW.countBuffer +
            500.0) - ((real_T)firstcol + 1.0);
          if (ARDroneHoverHeight_DW.count > 0.0) {
            /* '<S6>:1:82' */
            if (((real_T)firstcol + 1.0) + 1.0 >
                ARDroneHoverHeight_DW.countBuffer + 500.0) {
              firstcol = -1;
              i = 0;
            } else {
              i = (int32_T)(ARDroneHoverHeight_DW.countBuffer + 500.0);
            }

            /* '<S6>:1:83' */
            loop_ub = i - firstcol;
            for (aux = 0; aux <= loop_ub - 2; aux++) {
              ARDroneHoverHeight_DW.frame[aux] = ARDroneHoverHeight_DW.buffer
                [(firstcol + aux) + 1];
            }
          }

          /* '<S6>:1:85' */
          ARDroneHoverHeight_DW.countBuffer = 0.0;
        }

        exitg1 = true;
      } else {
        if ((ARDroneHoverHeight_DW.countHeader == 2.0) &&
            (ARDroneHoverHeight_DW.buffer[firstcol] == 102)) {
          /* '<S6>:1:92' */
          /* '<S6>:1:93' */
          ARDroneHoverHeight_DW.countHeader = 3.0;
        }

        if ((ARDroneHoverHeight_DW.countHeader == 1.0) &&
            (ARDroneHoverHeight_DW.buffer[firstcol] == 119)) {
          /* '<S6>:1:96' */
          /* '<S6>:1:97' */
          ARDroneHoverHeight_DW.countHeader = 2.0;
        }

        if ((ARDroneHoverHeight_DW.countHeader == 0.0) &&
            (ARDroneHoverHeight_DW.buffer[firstcol] == 136)) {
          /* '<S6>:1:100' */
          /* '<S6>:1:101' */
          ARDroneHoverHeight_DW.countHeader = 1.0;
        }

        firstcol++;
      }
    }

    if (ARDroneHoverHeight_DW.count == 496.0) {
      /* '<S6>:1:106' */
      /* '<S6>:1:107' */
      memcpy(&ARDroneHoverHeight_DW.lastFrame[0], &ARDroneHoverHeight_DW.frame[0],
             496U * sizeof(uint8_T));

      /* '<S6>:1:108' */
      firstcol = 1;

      /* '<S6>:1:109' */
      /* '<S6>:1:110' */
      memset(&ARDroneHoverHeight_DW.frame[0], 0, 496U * sizeof(uint8_T));

      /* '<S6>:1:111' */
      ARDroneHoverHeight_DW.count = 0.0;

      /* '<S6>:1:112' */
      ARDroneHoverHeight_DW.countHeader = 0.0;
    } else {
      /* '<S6>:1:115' */
      /* '<S6>:1:116' */
      firstcol = 0;
    }

    memcpy(&ARDroneHoverHeight_B.frameOut[0], &ARDroneHoverHeight_DW.lastFrame[0],
           496U * sizeof(uint8_T));
    ARDroneHoverHeight_B.flagOut = firstcol;

    /* End of MATLAB Function: '<S1>/Data synchronization ' */

    /* MATLAB Function: '<S1>/ARDrone data decoding' */
    memcpy(&data[0], &ARDroneHoverHeight_B.frameOut[0], 496U * sizeof(uint8_T));

    /* MATLAB Function 'ARDrone Wi-Fi  Block/ARDrone data decoding': '<S5>:1' */
    /* '<S5>:1:23' */
    bytesToRead = ARDroneHoverHeight_B.frameOut[0];
    for (firstcol = 0; firstcol < 487; firstcol++) {
      bytesToRead += (real_T)ARDroneHoverHeight_B.frameOut[firstcol + 1];
    }

    /* '<S5>:1:25' */
    /* '<S5>:1:27' */
    bytesToRead = (bytesToRead + 442.0) - (real_T)
      ((((ARDroneHoverHeight_B.frameOut[493] << 8) +
         ARDroneHoverHeight_B.frameOut[492]) + (ARDroneHoverHeight_B.frameOut
         [494] << 16)) + ((uint32_T)ARDroneHoverHeight_B.frameOut[495] << 24));
    if (ARDroneHoverHeight_B.frameOut[14] == 148) {
      /* '<S5>:1:30' */
      /* '<S5>:1:31' */
      memcpy(&ARDroneHoverHeight_DW.dataPrev[0], &ARDroneHoverHeight_B.frameOut
             [0], 496U * sizeof(uint8_T));
    } else {
      /* '<S5>:1:33' */
      memcpy(&data[0], &ARDroneHoverHeight_DW.dataPrev[0], 496U * sizeof(uint8_T));
    }

    /* '<S5>:1:37' */
    /* '<S5>:1:75' */
    for (i = 0; i < 32; i++) {
      ARDroneHoverHeight_B.status[i] = 0.0;
    }

    /* '<S5>:1:76' */
    loop_ub = 2;
    for (aux = 0; aux < 8; aux++) {
      hex_data[aux] = '0';
    }

    di = data[0];
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i > 0)) {
      r = di;
      di = (uint8_T)((uint32_T)di >> 4);
      r = (uint8_T)((uint32_T)r - (di << 4));
      if (r > 9) {
        r = (uint8_T)(r + 7U);
      }

      hex_data[(i - 1) << 2] = (int8_T)(r + 48);
      if (di > 0) {
        i--;
      } else {
        exitg1 = true;
      }
    }

    di = data[1];
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i > 0)) {
      r = di;
      di = (uint8_T)((uint32_T)di >> 4);
      r = (uint8_T)((uint32_T)r - (di << 4));
      if (r > 9) {
        r = (uint8_T)(r + 7U);
      }

      hex_data[((i - 1) << 2) + 1] = (int8_T)(r + 48);
      if (di > 0) {
        i--;
      } else {
        exitg1 = true;
      }
    }

    di = data[2];
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i > 0)) {
      r = di;
      di = (uint8_T)((uint32_T)di >> 4);
      r = (uint8_T)((uint32_T)r - (di << 4));
      if (r > 9) {
        r = (uint8_T)(r + 7U);
      }

      hex_data[((i - 1) << 2) + 2] = (int8_T)(r + 48);
      if (di > 0) {
        i--;
      } else {
        exitg1 = true;
      }
    }

    di = data[3];
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i > 0)) {
      r = di;
      di = (uint8_T)((uint32_T)di >> 4);
      r = (uint8_T)((uint32_T)r - (di << 4));
      if (r > 9) {
        r = (uint8_T)(r + 7U);
      }

      hex_data[((i - 1) << 2) + 3] = (int8_T)(r + 48);
      if (di > 0) {
        i--;
      } else {
        exitg1 = true;
      }
    }

    firstcol = 2;
    i = 0;
    rEQ0 = false;
    exitg1 = false;
    while ((!exitg1) && (i < 4)) {
      if (hex_data[i] != '0') {
        rEQ0 = true;
        exitg1 = true;
      } else {
        i++;
      }
    }

    if (rEQ0) {
      firstcol = 1;
    }

    if (firstcol > 1) {
      hex_data[0] = hex_data[4];
      b_hex_data[0] = hex_data[0];
      hex_data[1] = hex_data[5];
      b_hex_data[1] = hex_data[1];
      hex_data[2] = hex_data[6];
      b_hex_data[2] = hex_data[2];
      hex_data[3] = hex_data[7];
      b_hex_data[3] = hex_data[3];

      /* S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
      firstcol = 4;
      loop_ub = 1;
      for (aux = 0; aux < 4; aux++) {
        hex_data[aux] = b_hex_data[aux];
      }
    }

    /* '<S5>:1:78' */
    firstcol = ((loop_ub + loop_ub) + loop_ub) + loop_ub;
    for (aux = 0; aux < loop_ub; aux++) {
      b_hex_data[aux] = hex_data[(aux << 2) + 3];
    }

    for (aux = 0; aux < loop_ub; aux++) {
      b_hex_data[aux + loop_ub] = hex_data[(aux << 2) + 2];
    }

    for (aux = 0; aux < loop_ub; aux++) {
      b_hex_data[(aux + loop_ub) + loop_ub] = hex_data[(aux << 2) + 1];
    }

    for (aux = 0; aux < loop_ub; aux++) {
      b_hex_data[((aux + loop_ub) + loop_ub) + loop_ub] = hex_data[aux << 2];
    }

    /* '<S5>:1:79' */
    for (i = 0; i < firstcol; i++) {
      /* '<S5>:1:79' */
      if (b_hex_data[i] == 'F') {
        /* '<S5>:1:80' */
        /* '<S5>:1:81' */
        ARDroneHoverHeight_B.status[((i + 1) << 2) - 4] = 1.0;
        ARDroneHoverHeight_B.status[((i + 1) << 2) - 3] = 1.0;
        ARDroneHoverHeight_B.status[((i + 1) << 2) - 2] = 1.0;
        ARDroneHoverHeight_B.status[((i + 1) << 2) - 1] = 1.0;
      } else if (b_hex_data[i] == 'E') {
        /* '<S5>:1:82' */
        /* '<S5>:1:83' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 1.0;
        ARDroneHoverHeight_B.status[aux + 1] = 1.0;
        ARDroneHoverHeight_B.status[aux + 2] = 1.0;
        ARDroneHoverHeight_B.status[aux + 3] = 0.0;
      } else if (b_hex_data[i] == 'D') {
        /* '<S5>:1:84' */
        /* '<S5>:1:85' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 1.0;
        ARDroneHoverHeight_B.status[aux + 1] = 1.0;
        ARDroneHoverHeight_B.status[aux + 2] = 0.0;
        ARDroneHoverHeight_B.status[aux + 3] = 1.0;
      } else if (b_hex_data[i] == 'C') {
        /* '<S5>:1:86' */
        /* '<S5>:1:87' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 1.0;
        ARDroneHoverHeight_B.status[aux + 1] = 1.0;
        ARDroneHoverHeight_B.status[aux + 2] = 0.0;
        ARDroneHoverHeight_B.status[aux + 3] = 0.0;
      } else if (b_hex_data[i] == 'B') {
        /* '<S5>:1:88' */
        /* '<S5>:1:89' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 1.0;
        ARDroneHoverHeight_B.status[aux + 1] = 0.0;
        ARDroneHoverHeight_B.status[aux + 2] = 1.0;
        ARDroneHoverHeight_B.status[aux + 3] = 1.0;
      } else if (b_hex_data[i] == 'A') {
        /* '<S5>:1:90' */
        /* '<S5>:1:91' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 1.0;
        ARDroneHoverHeight_B.status[aux + 1] = 0.0;
        ARDroneHoverHeight_B.status[aux + 2] = 1.0;
        ARDroneHoverHeight_B.status[aux + 3] = 0.0;
      } else if (b_hex_data[i] == '9') {
        /* '<S5>:1:92' */
        /* '<S5>:1:93' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 1.0;
        ARDroneHoverHeight_B.status[aux + 1] = 0.0;
        ARDroneHoverHeight_B.status[aux + 2] = 0.0;
        ARDroneHoverHeight_B.status[aux + 3] = 1.0;
      } else if (b_hex_data[i] == '8') {
        /* '<S5>:1:94' */
        /* '<S5>:1:95' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 1.0;
        ARDroneHoverHeight_B.status[aux + 1] = 0.0;
        ARDroneHoverHeight_B.status[aux + 2] = 0.0;
        ARDroneHoverHeight_B.status[aux + 3] = 0.0;
      } else if (b_hex_data[i] == '7') {
        /* '<S5>:1:96' */
        /* '<S5>:1:97' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 0.0;
        ARDroneHoverHeight_B.status[aux + 1] = 1.0;
        ARDroneHoverHeight_B.status[aux + 2] = 1.0;
        ARDroneHoverHeight_B.status[aux + 3] = 1.0;
      } else if (b_hex_data[i] == '6') {
        /* '<S5>:1:98' */
        /* '<S5>:1:99' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 0.0;
        ARDroneHoverHeight_B.status[aux + 1] = 1.0;
        ARDroneHoverHeight_B.status[aux + 2] = 1.0;
        ARDroneHoverHeight_B.status[aux + 3] = 0.0;
      } else if (b_hex_data[i] == '5') {
        /* '<S5>:1:100' */
        /* '<S5>:1:101' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 0.0;
        ARDroneHoverHeight_B.status[aux + 1] = 1.0;
        ARDroneHoverHeight_B.status[aux + 2] = 0.0;
        ARDroneHoverHeight_B.status[aux + 3] = 1.0;
      } else if (b_hex_data[i] == '4') {
        /* '<S5>:1:102' */
        /* '<S5>:1:103' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 0.0;
        ARDroneHoverHeight_B.status[aux + 1] = 1.0;
        ARDroneHoverHeight_B.status[aux + 2] = 0.0;
        ARDroneHoverHeight_B.status[aux + 3] = 0.0;
      } else if (b_hex_data[i] == '3') {
        /* '<S5>:1:104' */
        /* '<S5>:1:105' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 0.0;
        ARDroneHoverHeight_B.status[aux + 1] = 0.0;
        ARDroneHoverHeight_B.status[aux + 2] = 1.0;
        ARDroneHoverHeight_B.status[aux + 3] = 1.0;
      } else if (b_hex_data[i] == '2') {
        /* '<S5>:1:106' */
        /* '<S5>:1:107' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 0.0;
        ARDroneHoverHeight_B.status[aux + 1] = 0.0;
        ARDroneHoverHeight_B.status[aux + 2] = 1.0;
        ARDroneHoverHeight_B.status[aux + 3] = 0.0;
      } else if (b_hex_data[i] == '1') {
        /* '<S5>:1:108' */
        /* '<S5>:1:109' */
        aux = ((i + 1) << 2) - 4;
        ARDroneHoverHeight_B.status[aux] = 0.0;
        ARDroneHoverHeight_B.status[aux + 1] = 0.0;
        ARDroneHoverHeight_B.status[aux + 2] = 0.0;
        ARDroneHoverHeight_B.status[aux + 3] = 1.0;
      } else {
        if (b_hex_data[i] == '0') {
          /* '<S5>:1:110' */
          /* '<S5>:1:111' */
          ARDroneHoverHeight_B.status[((i + 1) << 2) - 4] = 0.0;
          ARDroneHoverHeight_B.status[((i + 1) << 2) - 3] = 0.0;
          ARDroneHoverHeight_B.status[((i + 1) << 2) - 2] = 0.0;
          ARDroneHoverHeight_B.status[((i + 1) << 2) - 1] = 0.0;
        }
      }
    }

    /* '<S5>:1:38' */
    /* '<S5>:1:67' */
    memcpy((void *)&battery, (void *)&data[20], (uint32_T)((size_t)1 * sizeof
            (uint32_T)));

    /* '<S5>:1:71' */
    /* '<S5>:1:39' */
    /* '<S5>:1:69' */
    memcpy((void *)&res, (void *)&data[24], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S5>:1:71' */
    /* '<S5>:1:40' */
    /* '<S5>:1:69' */
    memcpy((void *)&b_res, (void *)&data[28], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S5>:1:71' */
    /* '<S5>:1:41' */
    /* '<S5>:1:69' */
    memcpy((void *)&c_res, (void *)&data[32], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S5>:1:71' */
    /* '<S5>:1:42' */
    /* '<S5>:1:67' */
    memcpy((void *)&d_res, (void *)&data[36], (uint32_T)((size_t)1 * sizeof
            (uint32_T)));

    /* '<S5>:1:71' */
    bytesLeft = (real_T)d_res / 1000.0;

    /* '<S5>:1:43' */
    /* '<S5>:1:69' */
    memcpy((void *)&e_res, (void *)&data[40], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S5>:1:71' */
    /* '<S5>:1:44' */
    /* '<S5>:1:69' */
    memcpy((void *)&f_res, (void *)&data[44], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S5>:1:71' */
    /* '<S5>:1:45' */
    /* '<S5>:1:69' */
    memcpy((void *)&g_res, (void *)&data[48], (uint32_T)((size_t)1 * sizeof
            (real32_T)));

    /* '<S5>:1:71' */
    if ((ARDroneHoverHeight_B.status[31] == 1.0) && (bytesLeft < 0.2)) {
      /* '<S5>:1:49' */
      /* '<S5>:1:50' */
      bytesLeft = ARDroneHoverHeight_DW.hPrev;
    } else {
      if (ARDroneHoverHeight_B.status[31] == 1.0) {
        /* '<S5>:1:51' */
        /* '<S5>:1:52' */
        ARDroneHoverHeight_DW.hPrev = bytesLeft;
      }
    }

    ARDroneHoverHeight_B.battery = battery;
    ARDroneHoverHeight_B.rollAngle = b_res / 1000.0F;
    ARDroneHoverHeight_B.pitchAngle = res / 1000.0F;
    ARDroneHoverHeight_B.yawAngle = c_res / 1000.0F;
    ARDroneHoverHeight_B.height = bytesLeft;
    ARDroneHoverHeight_B.u = e_res / 1000.0F;
    ARDroneHoverHeight_B.v = f_res / 1000.0F;
    ARDroneHoverHeight_B.w = g_res / 1000.0F;
    ARDroneHoverHeight_B.cksumError = fabs(bytesToRead);

    /* End of MATLAB Function: '<S1>/ARDrone data decoding' */

    /* DataTypeConversion: '<S1>/Type Conversion' */
    ARDroneHoverHeight_B.TypeConversion = ARDroneHoverHeight_B.battery;

    /* DataTypeConversion: '<S1>/Type Conversion1' */
    ARDroneHoverHeight_B.TypeConversion1 = ARDroneHoverHeight_B.rollAngle;

    /* DataTypeConversion: '<S1>/Type Conversion2' */
    ARDroneHoverHeight_B.TypeConversion2 = ARDroneHoverHeight_B.pitchAngle;

    /* UnitDelay: '<S1>/Unit Delay to avoid algebraic loop' */
    ARDroneHoverHeight_B.UnitDelaytoavoidalgebraicloop =
      ARDroneHoverHeight_DW.UnitDelaytoavoidalgebraicloop_DSTATE;

    /* ManualSwitch: '<Root>/Manual Switch1' incorporates:
     *  Constant: '<Root>/land'
     *  Constant: '<Root>/take off'
     */
    if (ARDroneHoverHeight_P.ManualSwitch1_CurrentSetting == 1) {
      ARDroneHoverHeight_B.ManualSwitch1 = ARDroneHoverHeight_P.land_Value;
    } else {
      ARDroneHoverHeight_B.ManualSwitch1 = ARDroneHoverHeight_P.takeoff_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch1' */

    /* Step: '<Root>/enable command step' */
    bytesToRead = ARDroneHoverHeight_M->Timing.t[1];
    if (bytesToRead < ARDroneHoverHeight_P.enablecommandstep_Time) {
      ARDroneHoverHeight_B.enablecommandstep =
        ARDroneHoverHeight_P.enablecommandstep_Y0;
    } else {
      ARDroneHoverHeight_B.enablecommandstep =
        ARDroneHoverHeight_P.enablecommandstep_YFinal;
    }

    /* End of Step: '<Root>/enable command step' */

    /* Step: '<Root>/disable command step' */
    bytesToRead = ARDroneHoverHeight_M->Timing.t[1];
    if (bytesToRead < ARDroneHoverHeight_P.disablecommandstep_Time) {
      ARDroneHoverHeight_B.disablecommandstep =
        ARDroneHoverHeight_P.disablecommandstep_Y0;
    } else {
      ARDroneHoverHeight_B.disablecommandstep =
        ARDroneHoverHeight_P.disablecommandstep_YFinal;
    }

    /* End of Step: '<Root>/disable command step' */

    /* Product: '<Root>/Product1' */
    ARDroneHoverHeight_B.Product1 = ARDroneHoverHeight_B.ManualSwitch1 *
      ARDroneHoverHeight_B.enablecommandstep *
      ARDroneHoverHeight_B.disablecommandstep;

    /* DataTypeConversion: '<S1>/Type Conversion3' */
    ARDroneHoverHeight_B.TypeConversion3 = ARDroneHoverHeight_B.yawAngle;

    /* MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
    /* MATLAB Function 'ARDrone Wi-Fi  Block/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ': '<S8>:1' */
    /* '<S8>:1:6' */
    ARDroneHoverHeight_B.yawOut = ARDroneHoverHeight_B.TypeConversion3;
    if ((ARDroneHoverHeight_B.UnitDelaytoavoidalgebraicloop == 1.0) &&
        (ARDroneHoverHeight_B.Product1 == 1.0)) {
      /* '<S8>:1:19' */
      /* '<S8>:1:20' */
      ARDroneHoverHeight_B.yawOut = ARDroneHoverHeight_B.TypeConversion3 -
        ARDroneHoverHeight_DW.yaw0;

      /* '<S8>:1:21' */
      ARDroneHoverHeight_DW.mode = 1.0;
    } else {
      if ((ARDroneHoverHeight_B.UnitDelaytoavoidalgebraicloop == 1.0) &&
          (ARDroneHoverHeight_DW.mode == 0.0)) {
        /* '<S8>:1:22' */
        /* '<S8>:1:23' */
        ARDroneHoverHeight_DW.yaw0 = ARDroneHoverHeight_B.TypeConversion3;
      }
    }

    /* '<S8>:1:27' */
    bytesToRead = ARDroneHoverHeight_B.yawOut;
    if (rtIsNaN(bytesToRead) || rtIsInf(bytesToRead)) {
      ARDroneHoverHeight_B.yawOut = (rtNaN);
    } else if (bytesToRead == 0.0) {
      ARDroneHoverHeight_B.yawOut = 0.0;
    } else {
      ARDroneHoverHeight_B.yawOut = fmod(bytesToRead, 360.0);
      if (ARDroneHoverHeight_B.yawOut == 0.0) {
        ARDroneHoverHeight_B.yawOut = 0.0;
      } else {
        if (bytesToRead < 0.0) {
          ARDroneHoverHeight_B.yawOut += 360.0;
        }
      }
    }

    if (ARDroneHoverHeight_B.yawOut > 180.0) {
      /* '<S8>:1:28' */
      /* '<S8>:1:29' */
      ARDroneHoverHeight_B.yawOut += -360.0;
    }

    /* End of MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */

    /* DataTypeConversion: '<S1>/Type Conversion5' */
    ARDroneHoverHeight_B.TypeConversion5 = ARDroneHoverHeight_B.u;

    /* DataTypeConversion: '<S1>/Type Conversion6' */
    ARDroneHoverHeight_B.TypeConversion6 = ARDroneHoverHeight_B.v;

    /* DataTypeConversion: '<S1>/Type Conversion7' */
    ARDroneHoverHeight_B.TypeConversion7 = ARDroneHoverHeight_B.w;

    /* Constant: '<S18>/Constant1' */
    ARDroneHoverHeight_B.Constant1[0] = ARDroneHoverHeight_P.Constant1_Value[0];
    ARDroneHoverHeight_B.Constant1[1] = ARDroneHoverHeight_P.Constant1_Value[1];
  }

  /* Gain: '<Root>/deg 2 rad' */
  ARDroneHoverHeight_B.deg2rad[0] = ARDroneHoverHeight_P.deg2rad_Gain *
    ARDroneHoverHeight_B.TypeConversion1;
  ARDroneHoverHeight_B.deg2rad[1] = ARDroneHoverHeight_P.deg2rad_Gain *
    ARDroneHoverHeight_B.TypeConversion2;
  ARDroneHoverHeight_B.deg2rad[2] = ARDroneHoverHeight_P.deg2rad_Gain *
    ARDroneHoverHeight_B.yawOut;

  /* Integrator: '<S18>/Integrator' */
  if (ARDroneHoverHeight_DW.Integrator_IWORK != 0) {
    ARDroneHoverHeight_X.Integrator_CSTATE[0] = ARDroneHoverHeight_B.Constant1[0];
    ARDroneHoverHeight_X.Integrator_CSTATE[1] = ARDroneHoverHeight_B.Constant1[1];
  }

  ARDroneHoverHeight_B.Integrator[0] = ARDroneHoverHeight_X.Integrator_CSTATE[0];
  ARDroneHoverHeight_B.Integrator[1] = ARDroneHoverHeight_X.Integrator_CSTATE[1];

  /* End of Integrator: '<S18>/Integrator' */
  if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
    /* DataTypeConversion: '<S1>/Type Conversion4' */
    ARDroneHoverHeight_B.TypeConversion4 = ARDroneHoverHeight_B.height;

    /* Constant: '<Root>/Heading ref (rad)' */
    ARDroneHoverHeight_B.yawref = ARDroneHoverHeight_P.Headingrefrad_Value;

    /* Step: '<Root>/climb step' */
    bytesToRead = ARDroneHoverHeight_M->Timing.t[1];
    if (bytesToRead < ARDroneHoverHeight_P.climbstep_Time) {
      ARDroneHoverHeight_B.climbstep = ARDroneHoverHeight_P.climbstep_Y0;
    } else {
      ARDroneHoverHeight_B.climbstep = ARDroneHoverHeight_P.climbstep_YFinal;
    }

    /* End of Step: '<Root>/climb step' */

    /* Step: '<Root>/descend step' */
    bytesToRead = ARDroneHoverHeight_M->Timing.t[1];
    if (bytesToRead < ARDroneHoverHeight_P.descendstep_Time) {
      ARDroneHoverHeight_B.descendstep = ARDroneHoverHeight_P.descendstep_Y0;
    } else {
      ARDroneHoverHeight_B.descendstep = ARDroneHoverHeight_P.descendstep_YFinal;
    }

    /* End of Step: '<Root>/descend step' */

    /* Product: '<Root>/Product2' */
    ARDroneHoverHeight_B.Product2 = ARDroneHoverHeight_B.climbstep *
      ARDroneHoverHeight_B.descendstep;

    /* Sum: '<Root>/Sum' incorporates:
     *  Constant: '<Root>/Height ref (m)'
     */
    ARDroneHoverHeight_B.altituderef = ARDroneHoverHeight_P.Heightrefm_Value +
      ARDroneHoverHeight_B.Product2;

    /* Constant: '<Root>/Inertial X ref (m)' */
    ARDroneHoverHeight_B.xeref = ARDroneHoverHeight_P.InertialXrefm_Value;

    /* Constant: '<Root>/Inertial Y ref (m)' */
    ARDroneHoverHeight_B.yeref = ARDroneHoverHeight_P.InertialYrefm_Value;

    /* Step: '<Root>/toff step2' */
    bytesToRead = ARDroneHoverHeight_M->Timing.t[1];
    if (bytesToRead < ARDroneHoverHeight_P.toffstep2_Time) {
      ARDroneHoverHeight_B.toffstep2 = ARDroneHoverHeight_P.toffstep2_Y0;
    } else {
      ARDroneHoverHeight_B.toffstep2 = ARDroneHoverHeight_P.toffstep2_YFinal;
    }

    /* End of Step: '<Root>/toff step2' */

    /* Step: '<Root>/land step1' */
    bytesToRead = ARDroneHoverHeight_M->Timing.t[1];
    if (bytesToRead < ARDroneHoverHeight_P.landstep1_Time) {
      ARDroneHoverHeight_B.landstep1 = ARDroneHoverHeight_P.landstep1_Y0;
    } else {
      ARDroneHoverHeight_B.landstep1 = ARDroneHoverHeight_P.landstep1_YFinal;
    }

    /* End of Step: '<Root>/land step1' */

    /* Product: '<Root>/Product' */
    ARDroneHoverHeight_B.Product = ARDroneHoverHeight_B.toffstep2 *
      ARDroneHoverHeight_B.landstep1 * ARDroneHoverHeight_B.ManualSwitch1;

    /* SignalConversion generated from: '<Root>/To Workspace' */
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[0] =
      ARDroneHoverHeight_B.deg2rad[0];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[1] =
      ARDroneHoverHeight_B.deg2rad[1];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[2] =
      ARDroneHoverHeight_B.deg2rad[2];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[3] =
      ARDroneHoverHeight_B.TypeConversion5;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[4] =
      ARDroneHoverHeight_B.TypeConversion6;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[5] =
      ARDroneHoverHeight_B.TypeConversion7;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[6] =
      ARDroneHoverHeight_B.Integrator[0];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[7] =
      ARDroneHoverHeight_B.Integrator[1];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[8] =
      ARDroneHoverHeight_B.TypeConversion4;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[9] =
      ARDroneHoverHeight_B.yawref;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[10] =
      ARDroneHoverHeight_B.altituderef;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[11] =
      ARDroneHoverHeight_B.xeref;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[12] =
      ARDroneHoverHeight_B.yeref;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[13] =
      ARDroneHoverHeight_B.Product;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[14] =
      ARDroneHoverHeight_B.Product1;

    /* SignalConversion generated from: '<S4>/To Workspace' */
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[0] =
      ARDroneHoverHeight_B.deg2rad[0];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[1] =
      ARDroneHoverHeight_B.deg2rad[1];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[2] =
      ARDroneHoverHeight_B.deg2rad[2];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[3] =
      ARDroneHoverHeight_B.TypeConversion5;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[4] =
      ARDroneHoverHeight_B.TypeConversion6;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[5] =
      ARDroneHoverHeight_B.TypeConversion7;
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[6] =
      ARDroneHoverHeight_B.Integrator[0];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[7] =
      ARDroneHoverHeight_B.Integrator[1];
    ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[8] =
      ARDroneHoverHeight_B.TypeConversion4;
  }

  /* Gain: '<S4>/deg 2 rad1' */
  ARDroneHoverHeight_B.deg2rad1 = ARDroneHoverHeight_P.deg2rad1_Gain *
    ARDroneHoverHeight_B.deg2rad[2];
  if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
    /* Sum: '<S13>/Sum3' */
    ARDroneHoverHeight_B.Sum3 = ARDroneHoverHeight_B.altituderef -
      ARDroneHoverHeight_B.TypeConversion4;

    /* Gain: '<S13>/proportional control gain' */
    ARDroneHoverHeight_B.proportionalcontrolgain =
      ARDroneHoverHeight_P.proportionalcontrolgain_Gain *
      ARDroneHoverHeight_B.Sum3;

    /* Saturate: '<S1>/Saturation 4' */
    bytesToRead = ARDroneHoverHeight_B.proportionalcontrolgain;
    bytesLeft = ARDroneHoverHeight_P.Saturation4_LowerSat;
    b = ARDroneHoverHeight_P.Saturation4_UpperSat;
    if (bytesToRead > b) {
      ARDroneHoverHeight_B.Saturation4 = b;
    } else if (bytesToRead < bytesLeft) {
      ARDroneHoverHeight_B.Saturation4 = bytesLeft;
    } else {
      ARDroneHoverHeight_B.Saturation4 = bytesToRead;
    }

    /* End of Saturate: '<S1>/Saturation 4' */
  }

  /* Sum: '<S15>/Sum4' */
  ARDroneHoverHeight_B.Sum4[0] = ARDroneHoverHeight_B.xeref -
    ARDroneHoverHeight_B.Integrator[0];
  ARDroneHoverHeight_B.Sum4[1] = ARDroneHoverHeight_B.yeref -
    ARDroneHoverHeight_B.Integrator[1];

  /* MATLAB Function: '<S15>/Coordinate trnasformation  from inertial frame to body frame ' */
  /* MATLAB Function 'Baseline Controller/Position controller/Coordinate trnasformation  from inertial frame to body frame ': '<S17>:1' */
  /* '<S17>:1:3' */
  /* '<S17>:1:4' */
  bytesLeft = cos(ARDroneHoverHeight_B.deg2rad[2]);
  b = sin(ARDroneHoverHeight_B.deg2rad[2]);
  bytesToRead = sin(ARDroneHoverHeight_B.deg2rad[2]);
  tmp_0 = cos(ARDroneHoverHeight_B.deg2rad[2]);
  tmp = -bytesToRead;
  ARDroneHoverHeight_B.Vec_xy[0] = 0.0;
  ARDroneHoverHeight_B.Vec_xy[0] += bytesLeft * ARDroneHoverHeight_B.Sum4[0];
  ARDroneHoverHeight_B.Vec_xy[0] += b * ARDroneHoverHeight_B.Sum4[1];
  ARDroneHoverHeight_B.Vec_xy[1] = 0.0;
  ARDroneHoverHeight_B.Vec_xy[1] += tmp * ARDroneHoverHeight_B.Sum4[0];
  ARDroneHoverHeight_B.Vec_xy[1] += tmp_0 * ARDroneHoverHeight_B.Sum4[1];

  /* Gain: '<S15>/Gain3' */
  ARDroneHoverHeight_B.Gain3 = ARDroneHoverHeight_P.Gain3_Gain *
    ARDroneHoverHeight_B.Vec_xy[1];

  /* Sum: '<S14>/Sum5' */
  ARDroneHoverHeight_B.Sum5 = ARDroneHoverHeight_B.Gain3 -
    ARDroneHoverHeight_B.TypeConversion6;

  /* Gain: '<S14>/Gain1' */
  ARDroneHoverHeight_B.Gain1 = ARDroneHoverHeight_P.Gain1_Gain *
    ARDroneHoverHeight_B.Sum5;

  /* Saturate: '<S1>/Saturation 1' */
  bytesToRead = ARDroneHoverHeight_B.Gain1;
  bytesLeft = ARDroneHoverHeight_P.Saturation1_LowerSat;
  b = ARDroneHoverHeight_P.Saturation1_UpperSat;
  if (bytesToRead > b) {
    ARDroneHoverHeight_B.Saturation1 = b;
  } else if (bytesToRead < bytesLeft) {
    ARDroneHoverHeight_B.Saturation1 = bytesLeft;
  } else {
    ARDroneHoverHeight_B.Saturation1 = bytesToRead;
  }

  /* End of Saturate: '<S1>/Saturation 1' */

  /* Gain: '<S15>/Gain2' */
  ARDroneHoverHeight_B.Gain2 = ARDroneHoverHeight_P.Gain2_Gain *
    ARDroneHoverHeight_B.Vec_xy[0];

  /* Sum: '<S11>/Sum2' */
  ARDroneHoverHeight_B.Sum2 = ARDroneHoverHeight_B.Gain2 -
    ARDroneHoverHeight_B.TypeConversion5;

  /* Gain: '<S11>/Gain' */
  ARDroneHoverHeight_B.Gain = ARDroneHoverHeight_P.Gain_Gain *
    ARDroneHoverHeight_B.Sum2;

  /* Saturate: '<S1>/Saturation 2' */
  bytesToRead = ARDroneHoverHeight_B.Gain;
  bytesLeft = ARDroneHoverHeight_P.Saturation2_LowerSat;
  b = ARDroneHoverHeight_P.Saturation2_UpperSat;
  if (bytesToRead > b) {
    ARDroneHoverHeight_B.Saturation2 = b;
  } else if (bytesToRead < bytesLeft) {
    ARDroneHoverHeight_B.Saturation2 = bytesLeft;
  } else {
    ARDroneHoverHeight_B.Saturation2 = bytesToRead;
  }

  /* End of Saturate: '<S1>/Saturation 2' */

  /* Sum: '<S12>/Sum1' */
  ARDroneHoverHeight_B.Sum1 = ARDroneHoverHeight_B.yawref -
    ARDroneHoverHeight_B.deg2rad[2];

  /* MATLAB Function: '<S12>/normalize angle  between -pi and pi radians' */
  /* MATLAB Function 'Baseline Controller/Heading controller/normalize angle  between -pi and pi radians': '<S16>:1' */
  /* '<S16>:1:4' */
  if (rtIsNaN(ARDroneHoverHeight_B.Sum1) || rtIsInf(ARDroneHoverHeight_B.Sum1))
  {
    ARDroneHoverHeight_B.angleOut = (rtNaN);
  } else if (ARDroneHoverHeight_B.Sum1 == 0.0) {
    ARDroneHoverHeight_B.angleOut = 0.0;
  } else {
    ARDroneHoverHeight_B.angleOut = fmod(ARDroneHoverHeight_B.Sum1,
      6.2831853071795862);
    rEQ0 = (ARDroneHoverHeight_B.angleOut == 0.0);
    if (!rEQ0) {
      bytesToRead = fabs(ARDroneHoverHeight_B.Sum1 / 6.2831853071795862);
      rEQ0 = !(fabs(bytesToRead - floor(bytesToRead + 0.5)) >
               2.2204460492503131E-16 * bytesToRead);
    }

    if (rEQ0) {
      ARDroneHoverHeight_B.angleOut = 0.0;
    } else {
      if (ARDroneHoverHeight_B.Sum1 < 0.0) {
        ARDroneHoverHeight_B.angleOut += 6.2831853071795862;
      }
    }
  }

  if (ARDroneHoverHeight_B.angleOut > 3.1415926535897931) {
    /* '<S16>:1:5' */
    /* '<S16>:1:6' */
    ARDroneHoverHeight_B.angleOut += -6.2831853071795862;
  }

  /* End of MATLAB Function: '<S12>/normalize angle  between -pi and pi radians' */

  /* Gain: '<S12>/proportional control gain - yaw' */
  ARDroneHoverHeight_B.proportionalcontrolgainyaw =
    ARDroneHoverHeight_P.proportionalcontrolgainyaw_Gain *
    ARDroneHoverHeight_B.angleOut;

  /* Saturate: '<S1>/Saturation 3' */
  bytesToRead = ARDroneHoverHeight_B.proportionalcontrolgainyaw;
  bytesLeft = ARDroneHoverHeight_P.Saturation3_LowerSat;
  b = ARDroneHoverHeight_P.Saturation3_UpperSat;
  if (bytesToRead > b) {
    ARDroneHoverHeight_B.Saturation3 = b;
  } else if (bytesToRead < bytesLeft) {
    ARDroneHoverHeight_B.Saturation3 = bytesLeft;
  } else {
    ARDroneHoverHeight_B.Saturation3 = bytesToRead;
  }

  /* End of Saturate: '<S1>/Saturation 3' */
  if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
    /* ManualSwitch: '<Root>/Kill-Switch' incorporates:
     *  Constant: '<Root>/_'
     *  Constant: '<Root>/stop'
     */
    if (ARDroneHoverHeight_P.KillSwitch_CurrentSetting == 1) {
      ARDroneHoverHeight_B.KillSwitch = ARDroneHoverHeight_P._Value;
    } else {
      ARDroneHoverHeight_B.KillSwitch = ARDroneHoverHeight_P.stop_Value;
    }

    /* End of ManualSwitch: '<Root>/Kill-Switch' */

    /* MATLAB Function: '<S7>/Drone state request' */
    bytesToRead = ARDroneHoverHeight_B.Product;
    bytesLeft = ARDroneHoverHeight_B.Saturation1;
    b = ARDroneHoverHeight_B.Saturation2;
    tmp = ARDroneHoverHeight_B.Saturation3;
    tmp_0 = ARDroneHoverHeight_B.Saturation4;
    enableRefs = ARDroneHoverHeight_B.Product1;
    stop = ARDroneHoverHeight_B.KillSwitch;

    /* MATLAB Function 'ARDrone Wi-Fi  Block/Subsystem1/Drone state request': '<S9>:1' */
    /* '<S9>:1:113' */
    /* '<S9>:1:72' */
    /* '<S9>:1:65' */
    /* '<S9>:1:54' */
    /* '<S9>:1:51' */
    /* '<S9>:1:42' */
    /* '<S9>:1:38' */
    /* '<S9>:1:32' */
    /* '<S9>:1:26' */
    /* '<S9>:1:16' */
    firstcol = 0;

    /* '<S9>:1:19' */
    isFlying = ARDroneHoverHeight_B.status[31];

    /* '<S9>:1:22' */
    memset(&ARDroneHoverHeight_B.dataControl[0], 0, 150U * sizeof(uint8_T));

    /* '<S9>:1:26' */
    cmd_size_idx_1 = 0;
    guard1 = false;
    if (ARDroneHoverHeight_DW.SequenceNumber <= 1.0) {
      /* '<S9>:1:29' */
      guard1 = true;
    } else {
      if (rtIsInf(ARDroneHoverHeight_DW.SequenceNumber)) {
        r_0 = (rtNaN);
      } else {
        r_0 = fmod(ARDroneHoverHeight_DW.SequenceNumber, 100.0);
        if (r_0 == 0.0) {
          r_0 = 0.0;
        }
      }

      if (r_0 == 0.0) {
        /* '<S9>:1:29' */
        guard1 = true;
      }
    }

    if (guard1) {
      /* '<S9>:1:30' */
      ARDroneHoverHeight_DW.SequenceNumber++;

      /* '<S9>:1:31' */
      ARDroneHoverHeight_getString(ARDroneHoverHeight_DW.SequenceNumber,
        strCmd_data, strCmd_size);

      /* '<S9>:1:32' */
      cmd_size_idx_1 = strCmd_size[1] + 41;
      loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
      for (aux = 0; aux < 10; aux++) {
        cmd_data[aux] = c[aux];
      }

      if (0 <= loop_ub) {
        memcpy(&cmd_data[10], &strCmd_data[0], (loop_ub + 1) * sizeof(char_T));
      }

      for (aux = 0; aux < 30; aux++) {
        cmd_data[(aux + loop_ub) + 11] = d[aux];
      }

      cmd_data[loop_ub + 41] = '\x0d';
    }

    /* '<S9>:1:36' */
    ARDroneHoverHeight_DW.SequenceNumber++;

    /* '<S9>:1:37' */
    ARDroneHoverHeight_getString(ARDroneHoverHeight_DW.SequenceNumber,
      strCmd_data, strCmd_size);

    /* '<S9>:1:38' */
    i = cmd_size_idx_1;

    /* MATLAB Function: '<S7>/Drone state request' */
    loop_ub = strCmd_size[1];
    cmd_size_idx_1 = (i + loop_ub) + 11;
    for (aux = 0; aux < 10; aux++) {
      /* MATLAB Function: '<S7>/Drone state request' */
      cmd_data[i + aux] = e[aux];
    }

    for (aux = 0; aux < loop_ub; aux++) {
      /* MATLAB Function: '<S7>/Drone state request' */
      cmd_data[(i + aux) + 10] = strCmd_data[aux];
    }

    /* MATLAB Function: '<S7>/Drone state request' */
    cmd_data[(i + loop_ub) + 10] = '\x0d';
    if (stop == 1.0) {
      /* '<S9>:1:41' */
      /* '<S9>:1:42' */
      cmd_size_idx_1 = strCmd_size[1] + 18;
      loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
      for (aux = 0; aux < 7; aux++) {
        cmd_data[aux] = f[aux];
      }

      if (0 <= loop_ub) {
        memcpy(&cmd_data[7], &strCmd_data[0], (loop_ub + 1) * sizeof(char_T));
      }

      for (aux = 0; aux < 10; aux++) {
        cmd_data[(aux + loop_ub) + 8] = g[aux];
      }

      cmd_data[loop_ub + 18] = '\x0d';
    } else if ((ARDroneHoverHeight_DW.SequenceNumber > 20.0) &&
               (ARDroneHoverHeight_DW.SequenceNumber < 22.0)) {
      /* '<S9>:1:46' */
      /* '<S9>:1:49' */
      ARDroneHoverHeight_DW.SequenceNumber = 22.0;

      /* '<S9>:1:50' */
      ARDroneHoverHeight_getString(22.0, strCmd_data, strCmd_size);

      /* '<S9>:1:51' */
      i = cmd_size_idx_1;
      loop_ub = strCmd_size[1];
      cmd_size_idx_1 = (i + loop_ub) + 10;
      for (aux = 0; aux < 9; aux++) {
        cmd_data[i + aux] = i_0[aux];
      }

      for (aux = 0; aux < loop_ub; aux++) {
        cmd_data[(i + aux) + 9] = strCmd_data[aux];
      }

      cmd_data[(i + loop_ub) + 9] = '\x0d';
    } else if ((ARDroneHoverHeight_DW.SequenceNumber >= 22.0) &&
               (ARDroneHoverHeight_DW.SequenceNumber < 25.0)) {
      /* '<S9>:1:53' */
      /* '<S9>:1:54' */
      i = cmd_size_idx_1;
      loop_ub = strCmd_size[1];
      cmd_size_idx_1 = (i + loop_ub) + 41;
      loop_ub--;
      for (aux = 0; aux < 10; aux++) {
        cmd_data[i + aux] = c[aux];
      }

      for (aux = 0; aux <= loop_ub; aux++) {
        cmd_data[(i + aux) + 10] = strCmd_data[aux];
      }

      for (aux = 0; aux < 30; aux++) {
        cmd_data[((i + aux) + loop_ub) + 11] = h[aux];
      }

      cmd_data[(i + loop_ub) + 41] = '\x0d';
    } else {
      if (ARDroneHoverHeight_DW.SequenceNumber >= 25.0) {
        /* '<S9>:1:57' */
        if (bytesToRead == 1.0) {
          /* '<S9>:1:59' */
          if (isFlying == 0.0) {
            /* '<S9>:1:61' */
            /* '<S9>:1:63' */
            ARDroneHoverHeight_DW.SequenceNumber++;

            /* '<S9>:1:64' */
            ARDroneHoverHeight_getString(ARDroneHoverHeight_DW.SequenceNumber,
              strCmd_data, strCmd_size);

            /* '<S9>:1:65' */
            i = cmd_size_idx_1;
            loop_ub = strCmd_size[1];
            cmd_size_idx_1 = (i + loop_ub) + 18;
            loop_ub--;
            for (aux = 0; aux < 7; aux++) {
              cmd_data[i + aux] = f[aux];
            }

            for (aux = 0; aux <= loop_ub; aux++) {
              cmd_data[(i + aux) + 7] = strCmd_data[aux];
            }

            for (aux = 0; aux < 10; aux++) {
              cmd_data[((i + aux) + loop_ub) + 8] = j[aux];
            }

            cmd_data[(i + loop_ub) + 18] = '\x0d';
          } else {
            if ((isFlying == 1.0) && (enableRefs == 1.0)) {
              /* '<S9>:1:67' */
              /* '<S9>:1:69' */
              ARDroneHoverHeight_DW.SequenceNumber++;

              /* '<S9>:1:70' */
              ARDroneHoverHeight_getString(ARDroneHoverHeight_DW.SequenceNumber,
                strCmd_data, strCmd_size);

              /* '<S9>:1:72' */
              i = cmd_size_idx_1;
              loop_ub = strCmd_size[1];
              cmd_size_idx_1 = (i + loop_ub) + 11;
              loop_ub--;
              for (aux = 0; aux < 8; aux++) {
                cmd_data[i + aux] = l[aux];
              }

              for (aux = 0; aux <= loop_ub; aux++) {
                cmd_data[(i + aux) + 8] = strCmd_data[aux];
              }

              cmd_data[(i + loop_ub) + 9] = ',';
              cmd_data[(i + loop_ub) + 10] = '1';
              cmd_data[(i + loop_ub) + 11] = ',';

              /* '<S9>:1:74' */
              i = ARDroneHoverHeight_float2IEEE754(bytesLeft);

              /* '<S9>:1:75' */
              ARDroneHoverHeight_getString(fabs((real_T)i), strCmd_data,
                strCmd_size);
              tmp_size_idx_1 = strCmd_size[1];
              loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&strAux_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (bytesLeft < 0.0) {
                /* '<S9>:1:76' */
                /* '<S9>:1:77' */
                tmp_size_idx_1 = strCmd_size[1] + 1;
                loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
                strAux_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&strAux_data[1], &strCmd_data[0], (loop_ub + 1) *
                         sizeof(char_T));
                }
              }

              /* '<S9>:1:79' */
              i = cmd_size_idx_1;
              cmd_size_idx_1 = (i + tmp_size_idx_1) + 1;
              for (aux = 0; aux < tmp_size_idx_1; aux++) {
                cmd_data[i + aux] = strAux_data[aux];
              }

              cmd_data[i + tmp_size_idx_1] = ',';

              /* '<S9>:1:81' */
              i = ARDroneHoverHeight_float2IEEE754(b);

              /* '<S9>:1:82' */
              ARDroneHoverHeight_getString(fabs((real_T)i), strCmd_data,
                strCmd_size);
              tmp_size_idx_1 = strCmd_size[1];
              loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&strAux_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (b < 0.0) {
                /* '<S9>:1:83' */
                /* '<S9>:1:84' */
                tmp_size_idx_1 = strCmd_size[1] + 1;
                loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
                strAux_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&strAux_data[1], &strCmd_data[0], (loop_ub + 1) *
                         sizeof(char_T));
                }
              }

              /* '<S9>:1:86' */
              i = cmd_size_idx_1;
              cmd_size_idx_1 = (i + tmp_size_idx_1) + 1;
              for (aux = 0; aux < tmp_size_idx_1; aux++) {
                cmd_data[i + aux] = strAux_data[aux];
              }

              cmd_data[i + tmp_size_idx_1] = ',';

              /* '<S9>:1:88' */
              i = ARDroneHoverHeight_float2IEEE754(tmp_0);

              /* '<S9>:1:89' */
              ARDroneHoverHeight_getString(fabs((real_T)i), strCmd_data,
                strCmd_size);
              tmp_size_idx_1 = strCmd_size[1];
              loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&strAux_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (tmp_0 < 0.0) {
                /* '<S9>:1:90' */
                /* '<S9>:1:91' */
                tmp_size_idx_1 = strCmd_size[1] + 1;
                loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
                strAux_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&strAux_data[1], &strCmd_data[0], (loop_ub + 1) *
                         sizeof(char_T));
                }
              }

              /* '<S9>:1:93' */
              i = cmd_size_idx_1;
              cmd_size_idx_1 = (i + tmp_size_idx_1) + 1;
              for (aux = 0; aux < tmp_size_idx_1; aux++) {
                cmd_data[i + aux] = strAux_data[aux];
              }

              cmd_data[i + tmp_size_idx_1] = ',';

              /* '<S9>:1:96' */
              i = ARDroneHoverHeight_float2IEEE754(tmp);

              /* '<S9>:1:97' */
              ARDroneHoverHeight_getString(fabs((real_T)i), strCmd_data,
                strCmd_size);
              tmp_size_idx_1 = strCmd_size[1];
              loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
              if (0 <= loop_ub) {
                memcpy(&strAux_data[0], &strCmd_data[0], (loop_ub + 1) * sizeof
                       (char_T));
              }

              if (tmp < 0.0) {
                /* '<S9>:1:98' */
                /* '<S9>:1:99' */
                firstcol = 2;

                /* '<S9>:1:100' */
                tmp_size_idx_1 = strCmd_size[1] + 1;
                loop_ub = strCmd_size[0] * strCmd_size[1] - 1;
                strAux_data[0] = '-';
                if (0 <= loop_ub) {
                  memcpy(&strAux_data[1], &strCmd_data[0], (loop_ub + 1) *
                         sizeof(char_T));
                }
              }

              /* '<S9>:1:102' */
              i = cmd_size_idx_1;
              cmd_size_idx_1 = (i + tmp_size_idx_1) + 1;
              for (aux = 0; aux < tmp_size_idx_1; aux++) {
                cmd_data[i + aux] = strAux_data[aux];
              }

              cmd_data[i + tmp_size_idx_1] = '\x0d';
            }
          }
        } else {
          if ((bytesToRead == 0.0) && (isFlying == 1.0)) {
            /* '<S9>:1:108' */
            /* '<S9>:1:110' */
            /* '<S9>:1:111' */
            ARDroneHoverHeight_DW.SequenceNumber++;

            /* '<S9>:1:112' */
            ARDroneHoverHeight_getString(ARDroneHoverHeight_DW.SequenceNumber,
              strCmd_data, strCmd_size);

            /* '<S9>:1:113' */
            i = cmd_size_idx_1;
            loop_ub = strCmd_size[1];
            cmd_size_idx_1 = (i + loop_ub) + 18;
            loop_ub--;
            for (aux = 0; aux < 7; aux++) {
              cmd_data[i + aux] = f[aux];
            }

            for (aux = 0; aux <= loop_ub; aux++) {
              cmd_data[(i + aux) + 7] = strCmd_data[aux];
            }

            for (aux = 0; aux < 10; aux++) {
              cmd_data[((i + aux) + loop_ub) + 8] = k[aux];
            }

            cmd_data[(i + loop_ub) + 18] = '\x0d';
          }
        }
      }
    }

    /* '<S9>:1:126' */
    for (aux = 0; aux < cmd_size_idx_1; aux++) {
      ARDroneHoverHeight_B.dataControl[aux] = (uint8_T)cmd_data[aux];
    }

    /* '<S9>:1:131' */
    ARDroneHoverHeight_B.isFlying = isFlying;
    ARDroneHoverHeight_B.error = firstcol;

    /* RateTransition: '<S10>/Rate Transition' incorporates:
     *  Constant: '<S10>/Constant'
     */
    if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
      ARDroneHoverHeight_B.RateTransition[0] =
        ARDroneHoverHeight_P.Constant_Value[0];
      ARDroneHoverHeight_B.RateTransition[1] =
        ARDroneHoverHeight_P.Constant_Value[1];
    }

    /* End of RateTransition: '<S10>/Rate Transition' */
  }

  /* SignalConversion generated from: '<S19>/ SFunction ' incorporates:
   *  MATLAB Function: '<S18>/Velocity from vehicle body frame  to inertial NED  frame'
   */
  ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1[0] =
    ARDroneHoverHeight_B.TypeConversion5;
  ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1[1] =
    ARDroneHoverHeight_B.TypeConversion6;

  /* MATLAB Function: '<S18>/Velocity from vehicle body frame  to inertial NED  frame' */
  /* MATLAB Function 'State estimation Important:This block provides an  inaccurate extimation of position  based on  velocity information. /Position estimation/Velocity from vehicle body frame  to inertial NED  frame': '<S19>:1' */
  /* '<S19>:1:3' */
  /* '<S19>:1:4' */
  bytesLeft = cos(ARDroneHoverHeight_B.deg2rad[2]);
  bytesToRead = sin(ARDroneHoverHeight_B.deg2rad[2]);
  tmp = sin(ARDroneHoverHeight_B.deg2rad[2]);
  tmp_0 = cos(ARDroneHoverHeight_B.deg2rad[2]);
  b = -bytesToRead;
  ARDroneHoverHeight_B.Vel_xy[0] = 0.0;
  ARDroneHoverHeight_B.Vel_xy[0] += bytesLeft *
    ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1[0];
  ARDroneHoverHeight_B.Vel_xy[0] += b *
    ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1[1];
  ARDroneHoverHeight_B.Vel_xy[1] = 0.0;
  ARDroneHoverHeight_B.Vel_xy[1] += tmp *
    ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1[0];
  ARDroneHoverHeight_B.Vel_xy[1] += tmp_0 *
    ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1[1];
  if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
    /* ManualSwitch: '<Root>/Manual Switch2' incorporates:
     *  Constant: '<Root>/commands disabled'
     *  Constant: '<Root>/commands enabled'
     */
    if (ARDroneHoverHeight_P.ManualSwitch2_CurrentSetting == 1) {
      ARDroneHoverHeight_B.ManualSwitch2 =
        ARDroneHoverHeight_P.commandsdisabled_Value;
    } else {
      ARDroneHoverHeight_B.ManualSwitch2 =
        ARDroneHoverHeight_P.commandsenabled_Value;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch2' */

    /* ManualSwitch: '<Root>/step' incorporates:
     *  Constant: '<Root>/ini_step_value'
     *  Constant: '<Root>/step value'
     */
    if (ARDroneHoverHeight_P.step_CurrentSetting == 1) {
      ARDroneHoverHeight_B.step = ARDroneHoverHeight_P.ini_step_value_Value;
    } else {
      ARDroneHoverHeight_B.step = ARDroneHoverHeight_P.stepvalue_Value;
    }

    /* End of ManualSwitch: '<Root>/step' */

    /* S-Function (saeroclockpacer): '<Root>/Simulation Pace' */
    /*
     * The Clock Pacer generates no code, it is only active in
     * interpreted simulation.
     */
  }
}

/* Model update function */
void ARDroneHoverHeight_update(void)
{
  char_T *sErr;

  /* Update for Integrator: '<S18>/Integrator' */
  ARDroneHoverHeight_DW.Integrator_IWORK = 0;
  if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
    /* Update for UnitDelay: '<S1>/Unit Delay to avoid algebraic loop' */
    ARDroneHoverHeight_DW.UnitDelaytoavoidalgebraicloop_DSTATE =
      ARDroneHoverHeight_B.isFlying;

    /* Update for S-Function (sdspToNetwork): '<S7>/UDP Send' */
    sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U],
                      &ARDroneHoverHeight_B.dataControl[0U], 150);
    if (*sErr != 0) {
      rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
      rtmSetStopRequested(ARDroneHoverHeight_M, 1);
    }

    /* End of Update for S-Function (sdspToNetwork): '<S7>/UDP Send' */

    /* Update for S-Function (sdspToNetwork): '<S10>/UDP Send' */
    sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U]);
    LibUpdate_Network(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U],
                      &ARDroneHoverHeight_B.RateTransition[0U], 2);
    if (*sErr != 0) {
      rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
      rtmSetStopRequested(ARDroneHoverHeight_M, 1);
    }

    /* End of Update for S-Function (sdspToNetwork): '<S10>/UDP Send' */
  }

  if (rtmIsMajorTimeStep(ARDroneHoverHeight_M)) {
    rt_ertODEUpdateContinuousStates(&ARDroneHoverHeight_M->solverInfo);
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
  if (!(++ARDroneHoverHeight_M->Timing.clockTick0)) {
    ++ARDroneHoverHeight_M->Timing.clockTickH0;
  }

  ARDroneHoverHeight_M->Timing.t[0] = rtsiGetSolverStopTime
    (&ARDroneHoverHeight_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.03s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++ARDroneHoverHeight_M->Timing.clockTick1)) {
      ++ARDroneHoverHeight_M->Timing.clockTickH1;
    }

    ARDroneHoverHeight_M->Timing.t[1] = ARDroneHoverHeight_M->Timing.clockTick1 *
      ARDroneHoverHeight_M->Timing.stepSize1 +
      ARDroneHoverHeight_M->Timing.clockTickH1 *
      ARDroneHoverHeight_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void ARDroneHoverHeight_derivatives(void)
{
  XDot_ARDroneHoverHeight_T *_rtXdot;
  _rtXdot = ((XDot_ARDroneHoverHeight_T *) ARDroneHoverHeight_M->derivs);

  /* Derivatives for Integrator: '<S18>/Integrator' */
  _rtXdot->Integrator_CSTATE[0] = ARDroneHoverHeight_B.Vel_xy[0];
  _rtXdot->Integrator_CSTATE[1] = ARDroneHoverHeight_B.Vel_xy[1];
}

/* Model initialize function */
void ARDroneHoverHeight_initialize(void)
{
  {
    char_T *sErr;

    /* Start for S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
    sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U]);
    CreateUDPInterface(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U], 0,
                        "0.0.0.0", ARDroneHoverHeight_P.UDPReceive1_localPort,
                        "192.168.1.1", -1, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
        rtmSetStopRequested(ARDroneHoverHeight_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */

    /* Start for Constant: '<S18>/Constant1' */
    ARDroneHoverHeight_B.Constant1[0] = ARDroneHoverHeight_P.Constant1_Value[0];
    ARDroneHoverHeight_B.Constant1[1] = ARDroneHoverHeight_P.Constant1_Value[1];

    /* Start for S-Function (sdspToNetwork): '<S7>/UDP Send' */
    sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U], 1,
                        "0.0.0.0", 5556, "192.168.1.1",
                        ARDroneHoverHeight_P.UDPSend_remotePort, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
        rtmSetStopRequested(ARDroneHoverHeight_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S7>/UDP Send' */

    /* Start for S-Function (sdspToNetwork): '<S10>/UDP Send' */
    sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U]);
    CreateUDPInterface(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U], 1,
                        "0.0.0.0", 5554, "192.168.1.1",
                        ARDroneHoverHeight_P.UDPSend_remotePort_a, 8192, 1, 0);
    }

    if (*sErr == 0) {
      LibStart(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
        rtmSetStopRequested(ARDroneHoverHeight_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<S10>/UDP Send' */
  }

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay to avoid algebraic loop' */
  ARDroneHoverHeight_DW.UnitDelaytoavoidalgebraicloop_DSTATE =
    ARDroneHoverHeight_P.UnitDelaytoavoidalgebraicloop_InitialCondition;

  /* InitializeConditions for Integrator: '<S18>/Integrator' */
  if (rtmIsFirstInitCond(ARDroneHoverHeight_M)) {
    ARDroneHoverHeight_X.Integrator_CSTATE[0] = 0.0;
    ARDroneHoverHeight_X.Integrator_CSTATE[1] = 0.0;
  }

  ARDroneHoverHeight_DW.Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S18>/Integrator' */

  /* SystemInitialize for MATLAB Function: '<S1>/Data synchronization ' */
  memset(&ARDroneHoverHeight_DW.buffer[0], 0, sizeof(uint8_T) << 10U);
  ARDroneHoverHeight_DW.countBuffer = 0.0;
  ARDroneHoverHeight_DW.count = 0.0;
  ARDroneHoverHeight_DW.countHeader = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/ARDrone data decoding' */
  ARDroneHoverHeight_DW.hPrev = 0.0;

  /* SystemInitialize for MATLAB Function: '<S1>/Data synchronization ' */
  memset(&ARDroneHoverHeight_DW.frame[0], 0, 496U * sizeof(uint8_T));
  memset(&ARDroneHoverHeight_DW.lastFrame[0], 0, 496U * sizeof(uint8_T));

  /* SystemInitialize for MATLAB Function: '<S1>/ARDrone data decoding' */
  memset(&ARDroneHoverHeight_DW.dataPrev[0], 0, 496U * sizeof(uint8_T));

  /* SystemInitialize for MATLAB Function: '<S1>/This block sets the heading angle to zero when the  commands from the Simulink controller are enabled. ' */
  ARDroneHoverHeight_DW.yaw0 = 0.0;
  ARDroneHoverHeight_DW.mode = 0.0;

  /* SystemInitialize for MATLAB Function: '<S7>/Drone state request' */
  ARDroneHoverHeight_DW.SequenceNumber = 1.0;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(ARDroneHoverHeight_M)) {
    rtmSetFirstInitCond(ARDroneHoverHeight_M, 0);
  }
}

/* Model terminate function */
void ARDroneHoverHeight_terminate(void)
{
  char_T *sErr;

  /* Terminate for S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
  sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U]);
  LibTerminate(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
    rtmSetStopRequested(ARDroneHoverHeight_M, 1);
  }

  LibDestroy(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U], 0);
  DestroyUDPInterface(&ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S1>/UDP Receive1' */
  /* Terminate for S-Function (sdspToNetwork): '<S7>/UDP Send' */
  sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
    rtmSetStopRequested(ARDroneHoverHeight_M, 1);
  }

  LibDestroy(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&ARDroneHoverHeight_DW.UDPSend_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S7>/UDP Send' */

  /* Terminate for S-Function (sdspToNetwork): '<S10>/UDP Send' */
  sErr = GetErrorBuffer(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U]);
  LibTerminate(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(ARDroneHoverHeight_M, sErr);
    rtmSetStopRequested(ARDroneHoverHeight_M, 1);
  }

  LibDestroy(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U], 1);
  DestroyUDPInterface(&ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<S10>/UDP Send' */
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
  ARDroneHoverHeight_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ARDroneHoverHeight_update();
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
  ARDroneHoverHeight_initialize();
}

void MdlTerminate(void)
{
  ARDroneHoverHeight_terminate();
}

/* Registration function */
RT_MODEL_ARDroneHoverHeight_T *ARDroneHoverHeight(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ARDroneHoverHeight_M, 0,
                sizeof(RT_MODEL_ARDroneHoverHeight_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ARDroneHoverHeight_M->solverInfo,
                          &ARDroneHoverHeight_M->Timing.simTimeStep);
    rtsiSetTPtr(&ARDroneHoverHeight_M->solverInfo, &rtmGetTPtr
                (ARDroneHoverHeight_M));
    rtsiSetStepSizePtr(&ARDroneHoverHeight_M->solverInfo,
                       &ARDroneHoverHeight_M->Timing.stepSize0);
    rtsiSetdXPtr(&ARDroneHoverHeight_M->solverInfo,
                 &ARDroneHoverHeight_M->derivs);
    rtsiSetContStatesPtr(&ARDroneHoverHeight_M->solverInfo, (real_T **)
                         &ARDroneHoverHeight_M->contStates);
    rtsiSetNumContStatesPtr(&ARDroneHoverHeight_M->solverInfo,
      &ARDroneHoverHeight_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&ARDroneHoverHeight_M->solverInfo,
      &ARDroneHoverHeight_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&ARDroneHoverHeight_M->solverInfo,
      &ARDroneHoverHeight_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&ARDroneHoverHeight_M->solverInfo,
      &ARDroneHoverHeight_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&ARDroneHoverHeight_M->solverInfo, (&rtmGetErrorStatus
      (ARDroneHoverHeight_M)));
    rtsiSetRTModelPtr(&ARDroneHoverHeight_M->solverInfo, ARDroneHoverHeight_M);
  }

  rtsiSetSimTimeStep(&ARDroneHoverHeight_M->solverInfo, MAJOR_TIME_STEP);
  ARDroneHoverHeight_M->intgData.f[0] = ARDroneHoverHeight_M->odeF[0];
  ARDroneHoverHeight_M->contStates = ((real_T *) &ARDroneHoverHeight_X);
  rtsiSetSolverData(&ARDroneHoverHeight_M->solverInfo, (void *)
                    &ARDroneHoverHeight_M->intgData);
  rtsiSetSolverName(&ARDroneHoverHeight_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ARDroneHoverHeight_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    ARDroneHoverHeight_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ARDroneHoverHeight_M->Timing.sampleTimes =
      (&ARDroneHoverHeight_M->Timing.sampleTimesArray[0]);
    ARDroneHoverHeight_M->Timing.offsetTimes =
      (&ARDroneHoverHeight_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ARDroneHoverHeight_M->Timing.sampleTimes[0] = (0.0);
    ARDroneHoverHeight_M->Timing.sampleTimes[1] = (0.03);

    /* task offsets */
    ARDroneHoverHeight_M->Timing.offsetTimes[0] = (0.0);
    ARDroneHoverHeight_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(ARDroneHoverHeight_M, &ARDroneHoverHeight_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ARDroneHoverHeight_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    ARDroneHoverHeight_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ARDroneHoverHeight_M, -1);
  ARDroneHoverHeight_M->Timing.stepSize0 = 0.03;
  ARDroneHoverHeight_M->Timing.stepSize1 = 0.03;
  rtmSetFirstInitCond(ARDroneHoverHeight_M, 1);

  /* External mode info */
  ARDroneHoverHeight_M->Sizes.checksums[0] = (3725271430U);
  ARDroneHoverHeight_M->Sizes.checksums[1] = (2195939391U);
  ARDroneHoverHeight_M->Sizes.checksums[2] = (3803603901U);
  ARDroneHoverHeight_M->Sizes.checksums[3] = (1699805881U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[16];
    ARDroneHoverHeight_M->extModeInfo = (&rt_ExtModeInfo);
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
    rteiSetModelMappingInfoPtr(ARDroneHoverHeight_M->extModeInfo,
      &ARDroneHoverHeight_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ARDroneHoverHeight_M->extModeInfo,
                        ARDroneHoverHeight_M->Sizes.checksums);
    rteiSetTPtr(ARDroneHoverHeight_M->extModeInfo, rtmGetTPtr
                (ARDroneHoverHeight_M));
  }

  ARDroneHoverHeight_M->solverInfoPtr = (&ARDroneHoverHeight_M->solverInfo);
  ARDroneHoverHeight_M->Timing.stepSize = (0.03);
  rtsiSetFixedStepSize(&ARDroneHoverHeight_M->solverInfo, 0.03);
  rtsiSetSolverMode(&ARDroneHoverHeight_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ARDroneHoverHeight_M->blockIO = ((void *) &ARDroneHoverHeight_B);
  (void) memset(((void *) &ARDroneHoverHeight_B), 0,
                sizeof(B_ARDroneHoverHeight_T));

  {
    int32_T i;
    for (i = 0; i < 15; i++) {
      ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      ARDroneHoverHeight_B.TmpSignalConversionAtToWorkspaceInport1_o[i] = 0.0;
    }

    for (i = 0; i < 32; i++) {
      ARDroneHoverHeight_B.status[i] = 0.0;
    }

    ARDroneHoverHeight_B.TypeConversion = 0.0;
    ARDroneHoverHeight_B.TypeConversion1 = 0.0;
    ARDroneHoverHeight_B.TypeConversion2 = 0.0;
    ARDroneHoverHeight_B.UnitDelaytoavoidalgebraicloop = 0.0;
    ARDroneHoverHeight_B.ManualSwitch1 = 0.0;
    ARDroneHoverHeight_B.enablecommandstep = 0.0;
    ARDroneHoverHeight_B.disablecommandstep = 0.0;
    ARDroneHoverHeight_B.Product1 = 0.0;
    ARDroneHoverHeight_B.TypeConversion3 = 0.0;
    ARDroneHoverHeight_B.deg2rad[0] = 0.0;
    ARDroneHoverHeight_B.deg2rad[1] = 0.0;
    ARDroneHoverHeight_B.deg2rad[2] = 0.0;
    ARDroneHoverHeight_B.TypeConversion5 = 0.0;
    ARDroneHoverHeight_B.TypeConversion6 = 0.0;
    ARDroneHoverHeight_B.TypeConversion7 = 0.0;
    ARDroneHoverHeight_B.Constant1[0] = 0.0;
    ARDroneHoverHeight_B.Constant1[1] = 0.0;
    ARDroneHoverHeight_B.Integrator[0] = 0.0;
    ARDroneHoverHeight_B.Integrator[1] = 0.0;
    ARDroneHoverHeight_B.TypeConversion4 = 0.0;
    ARDroneHoverHeight_B.yawref = 0.0;
    ARDroneHoverHeight_B.climbstep = 0.0;
    ARDroneHoverHeight_B.descendstep = 0.0;
    ARDroneHoverHeight_B.Product2 = 0.0;
    ARDroneHoverHeight_B.altituderef = 0.0;
    ARDroneHoverHeight_B.xeref = 0.0;
    ARDroneHoverHeight_B.yeref = 0.0;
    ARDroneHoverHeight_B.toffstep2 = 0.0;
    ARDroneHoverHeight_B.landstep1 = 0.0;
    ARDroneHoverHeight_B.Product = 0.0;
    ARDroneHoverHeight_B.deg2rad1 = 0.0;
    ARDroneHoverHeight_B.Sum3 = 0.0;
    ARDroneHoverHeight_B.proportionalcontrolgain = 0.0;
    ARDroneHoverHeight_B.Saturation4 = 0.0;
    ARDroneHoverHeight_B.Sum4[0] = 0.0;
    ARDroneHoverHeight_B.Sum4[1] = 0.0;
    ARDroneHoverHeight_B.Gain3 = 0.0;
    ARDroneHoverHeight_B.Sum5 = 0.0;
    ARDroneHoverHeight_B.Gain1 = 0.0;
    ARDroneHoverHeight_B.Saturation1 = 0.0;
    ARDroneHoverHeight_B.Gain2 = 0.0;
    ARDroneHoverHeight_B.Sum2 = 0.0;
    ARDroneHoverHeight_B.Gain = 0.0;
    ARDroneHoverHeight_B.Saturation2 = 0.0;
    ARDroneHoverHeight_B.Sum1 = 0.0;
    ARDroneHoverHeight_B.proportionalcontrolgainyaw = 0.0;
    ARDroneHoverHeight_B.Saturation3 = 0.0;
    ARDroneHoverHeight_B.KillSwitch = 0.0;
    ARDroneHoverHeight_B.ManualSwitch2 = 0.0;
    ARDroneHoverHeight_B.step = 0.0;
    ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1[0] = 0.0;
    ARDroneHoverHeight_B.TmpSignalConversionAtSFunctionInport1[1] = 0.0;
    ARDroneHoverHeight_B.Vel_xy[0] = 0.0;
    ARDroneHoverHeight_B.Vel_xy[1] = 0.0;
    ARDroneHoverHeight_B.Vec_xy[0] = 0.0;
    ARDroneHoverHeight_B.Vec_xy[1] = 0.0;
    ARDroneHoverHeight_B.angleOut = 0.0;
    ARDroneHoverHeight_B.yawOut = 0.0;
    ARDroneHoverHeight_B.isFlying = 0.0;
    ARDroneHoverHeight_B.error = 0.0;
    ARDroneHoverHeight_B.flagOut = 0.0;
    ARDroneHoverHeight_B.height = 0.0;
    ARDroneHoverHeight_B.cksumError = 0.0;
    ARDroneHoverHeight_B.rollAngle = 0.0F;
    ARDroneHoverHeight_B.pitchAngle = 0.0F;
    ARDroneHoverHeight_B.yawAngle = 0.0F;
    ARDroneHoverHeight_B.u = 0.0F;
    ARDroneHoverHeight_B.v = 0.0F;
    ARDroneHoverHeight_B.w = 0.0F;
  }

  /* parameters */
  ARDroneHoverHeight_M->defaultParam = ((real_T *)&ARDroneHoverHeight_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &ARDroneHoverHeight_X;
    ARDroneHoverHeight_M->contStates = (x);
    (void) memset((void *)&ARDroneHoverHeight_X, 0,
                  sizeof(X_ARDroneHoverHeight_T));
  }

  /* states (dwork) */
  ARDroneHoverHeight_M->dwork = ((void *) &ARDroneHoverHeight_DW);
  (void) memset((void *)&ARDroneHoverHeight_DW, 0,
                sizeof(DW_ARDroneHoverHeight_T));
  ARDroneHoverHeight_DW.UnitDelaytoavoidalgebraicloop_DSTATE = 0.0;

  {
    int32_T i;
    for (i = 0; i < 137; i++) {
      ARDroneHoverHeight_DW.UDPReceive1_NetworkLib[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 137; i++) {
      ARDroneHoverHeight_DW.UDPSend_NetworkLib[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 137; i++) {
      ARDroneHoverHeight_DW.UDPSend_NetworkLib_h[i] = 0.0;
    }
  }

  ARDroneHoverHeight_DW.yaw0 = 0.0;
  ARDroneHoverHeight_DW.mode = 0.0;
  ARDroneHoverHeight_DW.SequenceNumber = 0.0;
  ARDroneHoverHeight_DW.count = 0.0;
  ARDroneHoverHeight_DW.countHeader = 0.0;
  ARDroneHoverHeight_DW.countBuffer = 0.0;
  ARDroneHoverHeight_DW.hPrev = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ARDroneHoverHeight_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  ARDroneHoverHeight_M->Sizes.numContStates = (2);/* Number of continuous states */
  ARDroneHoverHeight_M->Sizes.numPeriodicContStates = (0);
                                      /* Number of periodic continuous states */
  ARDroneHoverHeight_M->Sizes.numY = (0);/* Number of model outputs */
  ARDroneHoverHeight_M->Sizes.numU = (0);/* Number of model inputs */
  ARDroneHoverHeight_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ARDroneHoverHeight_M->Sizes.numSampTimes = (2);/* Number of sample times */
  ARDroneHoverHeight_M->Sizes.numBlocks = (96);/* Number of blocks */
  ARDroneHoverHeight_M->Sizes.numBlockIO = (70);/* Number of block outputs */
  ARDroneHoverHeight_M->Sizes.numBlockPrms = (62);/* Sum of parameter "widths" */
  return ARDroneHoverHeight_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
