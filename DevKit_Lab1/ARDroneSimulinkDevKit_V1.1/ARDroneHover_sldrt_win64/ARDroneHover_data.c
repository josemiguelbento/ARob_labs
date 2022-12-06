/*
 * ARDroneHover_data.c
 *
 * Code generation for model "ARDroneHover".
 *
 * Model version              : $Id: UAV_PIL.mdl 965 2013-03-21 01:08:53Z escobar $
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Wed Oct 12 12:41:26 2022
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

  /* Mask Parameter: UDPSend_remotePort
   * Referenced by: '<S7>/UDP Send'
   */
  5556,

  /* Mask Parameter: UDPSend_remotePort_a
   * Referenced by: '<S10>/UDP Send'
   */
  5554,

  /* Expression: 1
   * Referenced by: '<Root>/commands enabled'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/commands disabled'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/take off'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/land'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/stop'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/_'
   */
  0.0,

  /* Expression: [0 0]
   * Referenced by: '<S18>/Constant1'
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
   * Referenced by: '<S4>/deg 2 rad1'
   */
  57.295779513082323,

  /* Expression: 0.75
   * Referenced by: '<Root>/Height ref (m)'
   */
  0.75,

  /* Expression: 1
   * Referenced by: '<S13>/proportional control gain'
   */
  1.0,

  /* Expression: 1.5
   * Referenced by: '<S1>/Saturation 4'
   */
  1.5,

  /* Expression: -1.5
   * Referenced by: '<S1>/Saturation 4'
   */
  -1.5,

  /* Expression: 0
   * Referenced by: '<Root>/Inertial X ref (m)'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Inertial Y ref (m)'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S15>/Gain3'
   */
  1.0,

  /* Expression: 0.4
   * Referenced by: '<S14>/Gain1'
   */
  0.4,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 1'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 1'
   */
  -1.0,

  /* Expression: 1*1/2
   * Referenced by: '<S15>/Gain2'
   */
  0.5,

  /* Expression: -0.5*1/2
   * Referenced by: '<S11>/Gain'
   */
  -0.25,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 2'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 2'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Heading ref (rad)'
   */
  0.0,

  /* Expression: 1.5
   * Referenced by: '<S12>/proportional control gain - yaw'
   */
  1.5,

  /* Expression: 1
   * Referenced by: '<S1>/Saturation 3'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Saturation 3'
   */
  -1.0,

  /* Expression: SimulationPace
   * Referenced by: '<Root>/Simulation Pace'
   */
  1.0,

  /* Expression: SleepMode
   * Referenced by: '<Root>/Simulation Pace'
   */
  2.0,

  /* Expression: OutputPaceError
   * Referenced by: '<Root>/Simulation Pace'
   */
  0.0,

  /* Expression: SampleTime
   * Referenced by: '<Root>/Simulation Pace'
   */
  0.03,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<Root>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<Root>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: KillSwitch_CurrentSetting
   * Referenced by: '<Root>/Kill-Switch'
   */
  1U,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S10>/Constant'
   */
  { 1U, 13U }
};
