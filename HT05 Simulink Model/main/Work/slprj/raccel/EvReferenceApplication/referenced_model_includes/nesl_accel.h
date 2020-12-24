/* Copyright 2007-2018 The MathWorks, Inc. */
/*!
 * @file
 * Network Engine standard header for use in Accelerator mode
 */

#ifndef nesl_accel_h
#define nesl_accel_h

/*
 * This include list had to be modified from the one in our standard nesl_rtw.h
 * -
 * - Simulink in the Accelerator mode does not provide access to rt_matrixlib.h
 *   required by nesl_la.h. This is o.k - the functions from nesl_la.h are used
 *   only in Start() function, for which we do not generate code in Accelerator.
 */
/*
// clang-format off
*/
#include <_nesl_rtw.h>
#include <ne_std.h>
#include <pm_default_allocator.h>

/* #include "nesl_la.h"  */
#include "nesl_rtw_utils.h"
#include "nesl_sd.h"

/*
// clang-format on
*/

#endif /* __nesl_accel_h__ */
/* [EOF] nesl_accel.h */
