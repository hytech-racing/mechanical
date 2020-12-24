/* Copyright 2015-2017 The MathWorks, Inc. */
/*!
 * @file
 * simscape LTI header.
 */

#ifndef nesl_rtw_lti_h
#define nesl_rtw_lti_h

#include <nesl_rtw.h>

PMF_DEPLOY_STATIC boolean_T cgIcSolve(PmRealVector*         x,
                                      const PmRealVector*   u,
                                      const LtiIcParams*    icParams,
                                      NeuDiagnosticManager* mgr)
{
    return ic_solve_impl(x, u, icParams, NULL, mgr);
}

#endif /* include guard */
