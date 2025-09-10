//
// File: cartPend_control.cpp
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
#include "cartPend_control.h"
#include <math.h>
#include "rtwtypes.h"

// Model step function
void cartPend_control::step()
{
  real_T rtb_Merge_tmp;
  real_T rtb_Product_tmp;

  // If: '<Root>/If' incorporates:
  //   Abs: '<Root>/Abs'
  //   Inport: '<Root>/X'

  if (fabs(cartPend_control_U.X[2]) < 0.43633231299858238) {
    // Outputs for IfAction SubSystem: '<Root>/LQR' incorporates:
    //   ActionPort: '<S1>/Action Port'

    // Merge: '<Root>/Merge' incorporates:
    //   Gain: '<S1>/LQR_gain'
    //   Inport: '<Root>/error'

    cartPend_control_Y.u = ((-6.3245553203367555 * cartPend_control_U.error[0] +
      -5.9853809205253263 * cartPend_control_U.error[1]) + -36.805739912745281 *
      cartPend_control_U.error[2]) + -5.21705413024469 *
      cartPend_control_U.error[3];

    // End of Outputs for SubSystem: '<Root>/LQR'
  } else {
    // Outputs for IfAction SubSystem: '<Root>/energy swing up' incorporates:
    //   ActionPort: '<S2>/Action Port'

    // Trigonometry: '<S5>/Cos' incorporates:
    //   Trigonometry: '<S3>/Cos'

    rtb_Product_tmp = cos(cartPend_control_U.X[2]);

    // Math: '<S3>/Power' incorporates:
    //   Math: '<S5>/Square'

    rtb_Merge_tmp = cartPend_control_U.X[3] * cartPend_control_U.X[3];

    // Merge: '<Root>/Merge' incorporates:
    //   Constant: '<S3>/Constant'
    //   Constant: '<S5>/Constant'
    //   Constant: '<S5>/Constant1'
    //   Gain: '<S3>/Gain1'
    //   Gain: '<S3>/Gain2'
    //   Gain: '<S3>/Gain3'
    //   Gain: '<S3>/Gain4'
    //   Gain: '<S4>/k_cw'
    //   Gain: '<S5>/Gain'
    //   Gain: '<S5>/Gain1'
    //   Gain: '<S6>/k_vw'
    //   Math: '<S3>/Power'
    //   Product: '<S3>/Divide'
    //   Product: '<S5>/Product'
    //   Product: '<S5>/Product1'
    //   Product: '<S5>/Product2'
    //   Sum: '<S2>/Sum'
    //   Sum: '<S3>/Add'
    //   Sum: '<S5>/Add'
    //   Sum: '<S5>/Subtract'
    //   Trigonometry: '<S3>/Tanh'
    //   Trigonometry: '<S5>/Cos'

    cartPend_control_Y.u = ((-8.0 * cartPend_control_U.X[0] + -5.0 *
      cartPend_control_U.X[1]) - ((rtb_Merge_tmp * 1.0E-6 + 0.000161) + tanh
      (150.0 * cartPend_control_U.X[3]) * 0.0004) * (1.0 / (0.01747905 *
      rtb_Product_tmp))) + ((0.1714109256825 * rtb_Product_tmp - 0.1714109256825)
      + rtb_Merge_tmp * 0.0017479050000000001) * (rtb_Product_tmp *
      cartPend_control_U.X[3]) * 13.0;

    // End of Outputs for SubSystem: '<Root>/energy swing up'
  }

  // End of If: '<Root>/If'

  // Saturate: '<Root>/Saturation'
  if (cartPend_control_Y.u > 29.41995) {
    // Merge: '<Root>/Merge' incorporates:
    //   Outport: '<Root>/u'

    cartPend_control_Y.u = 29.41995;
  } else if (cartPend_control_Y.u < -29.41995) {
    // Merge: '<Root>/Merge' incorporates:
    //   Outport: '<Root>/u'

    cartPend_control_Y.u = -29.41995;
  }

  // End of Saturate: '<Root>/Saturation'
}

// Model initialize function
void cartPend_control::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void cartPend_control::terminate()
{
  // (no terminate code required)
}

const char_T* cartPend_control::RT_MODEL_cartPend_control_T::getErrorStatus()
  const
{
  return (errorStatus);
}

void cartPend_control::RT_MODEL_cartPend_control_T::setErrorStatus(const char_T*
  const volatile aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

// Constructor
cartPend_control::cartPend_control() :
  cartPend_control_U(),
  cartPend_control_Y(),
  cartPend_control_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
cartPend_control::~cartPend_control()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
cartPend_control::RT_MODEL_cartPend_control_T * cartPend_control::getRTM()
{
  return (&cartPend_control_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
