/* Copyright 2017-2018 The MathWorks, Inc. */
/*!
 * @file
 * Partitioning solver header.
 */

#ifndef nesl_rtw_swl_h
#define nesl_rtw_swl_h

#include <nesl_rtw.h>

PMF_DEPLOY_STATIC boolean_T swl_solve(const Simulator*            solver,
                                      const PmRealVector*         inputs,
                                      const PmRealVector*         states,
                                      const PmRealVector*         outputs,
                                      real_T                      time,
                                      const NeuDiagnosticManager* mgr,
                                      boolean_T                   firstOutput)
{
    return solver->mSolve(
        solver, inputs, states, outputs, time, mgr, firstOutput);
}

PMF_DEPLOY_STATIC boolean_T swl_check(const Simulator*            solver,
                                      const PmRealVector*         inputs,
                                      const PmRealVector*         states,
                                      real_T                      time,
                                      const NeuDiagnosticManager* mgr)
{
    return solver->mCheck(solver, inputs, states, time, mgr);
}

PMF_DEPLOY_STATIC boolean_T swl_start(const Simulator*            solver,
                                      const NeuDiagnosticManager* mgr)
{
    return solver->mStart(solver, mgr);
}

PMF_DEPLOY_STATIC NeslRtpManager* swl_rtp_manager_create(const Simulator* simulator)
{
    return rtp_manager_create(simulator);
}


#endif /* include guard */
