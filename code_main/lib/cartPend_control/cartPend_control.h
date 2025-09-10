//
// File: cartPend_control.h
//
// Code generated for Simulink model 'cartPend_control'.
//
// Model version                  : 1.3
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Thu Mar 20 15:07:42 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef cartPend_control_h_
#define cartPend_control_h_
#include "rtwtypes.h"
#include <stddef.h>
#include "cartPend_control_types.h"

// Class declaration for model cartPend_control
class cartPend_control
{
  // public data and function members
 public:
  // External inputs (root inport signals with default storage)
  struct ExtU_cartPend_control_T {
    real_T X[4];                       // '<Root>/X'
    real_T error[4];                   // '<Root>/error'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY_cartPend_control_T {
    real_T u;                          // '<Root>/u'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_cartPend_control_T {
    const char_T * volatile errorStatus;
    const char_T* getErrorStatus() const;
    void setErrorStatus(const char_T* const volatile aErrorStatus);
  };

  // Real-Time Model get method
  cartPend_control::RT_MODEL_cartPend_control_T * getRTM();

  // Root inports set method
  void setExternalInputs(const ExtU_cartPend_control_T *pExtU_cartPend_control_T)
  {
    cartPend_control_U = *pExtU_cartPend_control_T;
  }

  // Root outports get method
  const ExtY_cartPend_control_T &getExternalOutputs() const
  {
    return cartPend_control_Y;
  }

  // model initialize function
  static void initialize();

  // model step function
  void step();

  // model terminate function
  static void terminate();

  // Constructor
  cartPend_control();

  // Destructor
  ~cartPend_control();

  // private data and function members
 private:
  // External inputs
  ExtU_cartPend_control_T cartPend_control_U;

  // External outputs
  ExtY_cartPend_control_T cartPend_control_Y;

  // Real-Time Model
  RT_MODEL_cartPend_control_T cartPend_control_M;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Reshape' : Reshape block reduction


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
//  '<Root>' : 'cartPend_control'
//  '<S1>'   : 'cartPend_control/LQR'
//  '<S2>'   : 'cartPend_control/energy swing up'
//  '<S3>'   : 'cartPend_control/energy swing up/friction_cancellation'
//  '<S4>'   : 'cartPend_control/energy swing up/position potential well'
//  '<S5>'   : 'cartPend_control/energy swing up/pumb_energy'
//  '<S6>'   : 'cartPend_control/energy swing up/velocity potential well'

#endif                                 // cartPend_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
