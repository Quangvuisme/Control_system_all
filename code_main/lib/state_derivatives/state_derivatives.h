//
// File: state_derivatives.h
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
#ifndef state_derivatives_h_
#define state_derivatives_h_
#include "rtwtypes.h"
#include <stddef.h>
#include "state_derivatives_types.h"

// Class declaration for model state_derivatives
class state_derivatives
{
  // public data and function members
 public:
  // Block signals (default storage)
  struct B_state_derivatives_T {
    real_T Probe[2];                   // '<S4>/Probe'
    real_T Probe_j[2];                 // '<S9>/Probe'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_state_derivatives_T {
    real_T Integrator_DSTATE;          // '<S8>/Integrator'
    real_T Integrator_DSTATE_o;        // '<S13>/Integrator'
    int8_T Integrator_PrevResetState;  // '<S8>/Integrator'
    int8_T Integrator_PrevResetState_p;// '<S13>/Integrator'
    uint8_T Integrator_IC_LOADING;     // '<S8>/Integrator'
    uint8_T Integrator_IC_LOADING_f;   // '<S13>/Integrator'
  };

  // External inputs (root inport signals with default storage)
  struct ExtU_state_derivatives_T {
    real_T x_in;                       // '<Root>/x_in'
    real_T q_in;                       // '<Root>/q_in'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY_state_derivatives_T {
    real_T x;                          // '<Root>/x'
    real_T x_d;                        // '<Root>/x_d'
    real_T q;                          // '<Root>/q'
    real_T q_d;                        // '<Root>/q_d'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_state_derivatives_T {
    const char_T * volatile errorStatus;
    const char_T* getErrorStatus() const;
    void setErrorStatus(const char_T* const volatile aErrorStatus);
  };

  // Real-Time Model get method
  state_derivatives::RT_MODEL_state_derivatives_T * getRTM();

  // Root inports set method
  void setExternalInputs(const ExtU_state_derivatives_T
    *pExtU_state_derivatives_T)
  {
    state_derivatives_U = *pExtU_state_derivatives_T;
  }

  // Root outports get method
  const ExtY_state_derivatives_T &getExternalOutputs() const
  {
    return state_derivatives_Y;
  }

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  static void terminate();

  // Constructor
  state_derivatives();

  // Destructor
  ~state_derivatives();

  // private data and function members
 private:
  // External inputs
  ExtU_state_derivatives_T state_derivatives_U;

  // External outputs
  ExtY_state_derivatives_T state_derivatives_Y;

  // Block signals
  B_state_derivatives_T state_derivatives_B;

  // Block states
  DW_state_derivatives_T state_derivatives_DW;

  // Real-Time Model
  RT_MODEL_state_derivatives_T state_derivatives_M;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S2>/Gain' : Eliminated nontunable gain of 1
//  Block '<S8>/Saturation' : Eliminated Saturate block
//  Block '<S2>/[A,B]' : Eliminated Saturate block
//  Block '<S3>/Gain' : Eliminated nontunable gain of 1
//  Block '<S13>/Saturation' : Eliminated Saturate block
//  Block '<S3>/[A,B]' : Eliminated Saturate block


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'state_derivatives'
//  '<S1>'   : 'state_derivatives/state_derivatives'
//  '<S2>'   : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)'
//  '<S3>'   : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)1'
//  '<S4>'   : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)/Enable//disable time constant'
//  '<S5>'   : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)/Initialization'
//  '<S6>'   : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)/Integrator (Discrete or Continuous)'
//  '<S7>'   : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)/Initialization/Init_u'
//  '<S8>'   : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
//  '<S9>'   : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)1/Enable//disable time constant'
//  '<S10>'  : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)1/Initialization'
//  '<S11>'  : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)1/Integrator (Discrete or Continuous)'
//  '<S12>'  : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)1/Initialization/Init_u'
//  '<S13>'  : 'state_derivatives/state_derivatives/Filtered Derivative (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete'

#endif                                 // state_derivatives_h_

//
// File trailer for generated code.
//
// [EOF]
//
