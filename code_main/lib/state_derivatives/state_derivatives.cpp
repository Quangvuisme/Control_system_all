//
// File: state_derivatives.cpp
//
// Code generated for Simulink model 'state_derivatives'.
//
// Model version                  : 1.1
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Thu Jan  2 14:56:22 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "state_derivatives.h"
#include "rtwtypes.h"

// Model step function
void state_derivatives::step()
{
  real_T u0;

  // Gain: '<S4>/Minimum sampling to time constant ratio'
  u0 = 10.0 * state_derivatives_B.Probe[0];

  // DiscreteIntegrator: '<S8>/Integrator' incorporates:
  //   Inport: '<Root>/x_in'

  if (state_derivatives_DW.Integrator_IC_LOADING != 0) {
    state_derivatives_DW.Integrator_DSTATE = state_derivatives_U.x_in;
  }

  if (state_derivatives_DW.Integrator_PrevResetState != 0) {
    state_derivatives_DW.Integrator_DSTATE = state_derivatives_U.x_in;
  }

  // MinMax: '<S4>/MinMax'
  if (!(u0 >= 0.02)) {
    u0 = 0.02;
  }

  // Product: '<S2>/1//T' incorporates:
  //   DiscreteIntegrator: '<S8>/Integrator'
  //   Inport: '<Root>/x_in'
  //   MinMax: '<S4>/MinMax'
  //   Sum: '<S2>/Sum1'

  state_derivatives_Y.x_d = 1.0 / u0 * (state_derivatives_U.x_in -
    state_derivatives_DW.Integrator_DSTATE);

  // Gain: '<S9>/Minimum sampling to time constant ratio'
  u0 = 10.0 * state_derivatives_B.Probe_j[0];

  // DiscreteIntegrator: '<S13>/Integrator' incorporates:
  //   Inport: '<Root>/q_in'

  if (state_derivatives_DW.Integrator_IC_LOADING_f != 0) {
    state_derivatives_DW.Integrator_DSTATE_o = state_derivatives_U.q_in;
  }

  if (state_derivatives_DW.Integrator_PrevResetState_p != 0) {
    state_derivatives_DW.Integrator_DSTATE_o = state_derivatives_U.q_in;
  }

  // MinMax: '<S9>/MinMax'
  if (!(u0 >= 0.02)) {
    u0 = 0.02;
  }

  // Product: '<S3>/1//T' incorporates:
  //   DiscreteIntegrator: '<S13>/Integrator'
  //   Inport: '<Root>/q_in'
  //   MinMax: '<S9>/MinMax'
  //   Sum: '<S3>/Sum1'

  state_derivatives_Y.q_d = 1.0 / u0 * (state_derivatives_U.q_in -
    state_derivatives_DW.Integrator_DSTATE_o);

  // Outport: '<Root>/x' incorporates:
  //   Inport: '<Root>/x_in'

  state_derivatives_Y.x = state_derivatives_U.x_in;

  // Outport: '<Root>/q' incorporates:
  //   Inport: '<Root>/q_in'

  state_derivatives_Y.q = state_derivatives_U.q_in;

  // Update for DiscreteIntegrator: '<S8>/Integrator'
  state_derivatives_DW.Integrator_IC_LOADING = 0U;
  state_derivatives_DW.Integrator_DSTATE += 0.001 * state_derivatives_Y.x_d;
  state_derivatives_DW.Integrator_PrevResetState = 0;

  // Update for DiscreteIntegrator: '<S13>/Integrator'
  state_derivatives_DW.Integrator_IC_LOADING_f = 0U;
  state_derivatives_DW.Integrator_DSTATE_o += 0.001 * state_derivatives_Y.q_d;
  state_derivatives_DW.Integrator_PrevResetState_p = 0;
}

// Model initialize function
void state_derivatives::initialize()
{
  // Start for Probe: '<S4>/Probe'
  state_derivatives_B.Probe[0] = 0.001;
  state_derivatives_B.Probe[1] = 0.0;

  // Start for Probe: '<S9>/Probe'
  state_derivatives_B.Probe_j[0] = 0.001;
  state_derivatives_B.Probe_j[1] = 0.0;

  // InitializeConditions for DiscreteIntegrator: '<S8>/Integrator'
  state_derivatives_DW.Integrator_IC_LOADING = 1U;

  // InitializeConditions for DiscreteIntegrator: '<S13>/Integrator'
  state_derivatives_DW.Integrator_IC_LOADING_f = 1U;
}

// Model terminate function
void state_derivatives::terminate()
{
  // (no terminate code required)
}

const char_T* state_derivatives::RT_MODEL_state_derivatives_T::getErrorStatus()
  const
{
  return (errorStatus);
}

void state_derivatives::RT_MODEL_state_derivatives_T::setErrorStatus(const
  char_T* const volatile aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

// Constructor
state_derivatives::state_derivatives() :
  state_derivatives_U(),
  state_derivatives_Y(),
  state_derivatives_B(),
  state_derivatives_DW(),
  state_derivatives_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
state_derivatives::~state_derivatives()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
state_derivatives::RT_MODEL_state_derivatives_T * state_derivatives::getRTM()
{
  return (&state_derivatives_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
