/*
 * ARDroneHover_data.c
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

/* Block parameters (default storage) */
P_ARDroneHover_T ARDroneHover_P = {
  /* Mask Parameter: UDPReceive1_localPort
   * Referenced by: '<S1>/UDP Receive1'
   */
  5554,

  /* Mask Parameter: UDPReceive_localPort
   * Referenced by: '<S3>/UDP Receive'
   */
  9089,

  /* Mask Parameter: UDPSend_remotePort
   * Referenced by: '<S11>/UDP Send'
   */
  5556,

  /* Mask Parameter: UDPSend_remotePort_a
   * Referenced by: '<S14>/UDP Send'
   */
  5554,

  /* Expression: -0.5*1/2
   * Referenced by: '<S77>/Gain'
   */
  -0.25,

  /* Expression: 0.4
   * Referenced by: '<S80>/Gain1'
   */
  0.4,

  /* Expression: 0
   * Referenced by: '<Root>/_'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/stop'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/land'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/take off'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/commands disabled'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/commands enabled'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S74>/Constant'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/Constant1'
   */
  1.0,

  /* Expression: pi/180
   * Referenced by: '<S4>/Gain1'
   */
  0.017453292519943295,

  /* Expression: pi/180
   * Referenced by: '<S4>/Gain2'
   */
  0.017453292519943295,

  /* Expression: pi/180
   * Referenced by: '<S4>/Gain3'
   */
  0.017453292519943295,

  /* Expression: 6
   * Referenced by: '<S70>/Gain'
   */
  6.0,

  /* Expression: 6
   * Referenced by: '<S71>/Gain'
   */
  6.0,

  /* Expression: 6
   * Referenced by: '<S72>/Gain'
   */
  6.0,

  /* Expression: -1
   * Referenced by: '<S4>/Gain4'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S4>/Gain'
   */
  -1.0,

  /* Expression: [0 0]
   * Referenced by: '<S85>/Constant1'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay to avoid algebraic loop'
   */
  0.0,

  /* Expression: pi/180
   * Referenced by: '<Root>/deg 2 rad'
   */
  0.017453292519943295,

  /* Expression: 180/pi
   * Referenced by: '<S8>/deg 2 rad1'
   */
  57.295779513082323,

  /* Expression: -1
   * Referenced by: '<S6>/Gain'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S79>/proportional control gain'
   */
  1.0,

  /* Expression: 1.5
   * Referenced by: '<S78>/proportional control gain - yaw'
   */
  1.5,

  /* Expression: 1*1/2
   * Referenced by: '<S81>/Gain2'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S81>/Gain3'
   */
  1.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S6>/Discrete-Time Integrator'
   */
  0.01,

  /* Expression: [0;0;0;0]
   * Referenced by: '<S6>/Discrete-Time Integrator'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 100
   * Referenced by: '<S6>/Discrete-Time Integrator'
   */
  100.0,

  /* Expression: -100
   * Referenced by: '<S6>/Discrete-Time Integrator'
   */
  -100.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 2'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 2'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 3'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 3'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 4'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 4'
   */
  -1.0,

  /* Computed Parameter: Gain6_Gain
   * Referenced by: '<S3>/Gain6'
   */
  -1.0F,

  /* Computed Parameter: Gain7_Gain
   * Referenced by: '<S3>/Gain7'
   */
  -1.0F,

  /* Computed Parameter: Gain_Gain_nh
   * Referenced by: '<S15>/Gain'
   */
  0.001F,

  /* Computed Parameter: Gain1_Gain_p
   * Referenced by: '<S15>/Gain1'
   */
  0.001F,

  /* Computed Parameter: Gain9_Gain
   * Referenced by: '<S3>/Gain9'
   */
  -1.0F,

  /* Computed Parameter: Gain2_Gain_m
   * Referenced by: '<S15>/Gain2'
   */
  0.001F,

  /* Computed Parameter: Gain10_Gain
   * Referenced by: '<S3>/Gain10'
   */
  -1.0F,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<Root>/Manual Switch2'
   */
  0U,

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<S6>/Manual Switch3'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<Root>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: KillSwitch_CurrentSetting
   * Referenced by: '<Root>/Kill-Switch'
   */
  1U,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S14>/Constant'
   */
  { 1U, 13U }
};
