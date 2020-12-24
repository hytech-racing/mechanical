/* Copyright 2019 The MathWorks, Inc. */
/*!
 * @file
 * rtp manager support in deployed code
 */

#ifndef nesl_rtw_rtp_h
#define nesl_rtw_rtp_h

#include <nesl_rtw.h>

PMF_DEPLOY_STATIC
NeslRtpManager* nesl_lease_rtp_manager(const char* key, int index)
{
    const NeslSimulatorGroupRegistry* registry = nesl_get_registry();

    /* Const cast required to pass through RTWCG-generated pointer type */
    union {
        const NeslRtpManager* constManager;
        NeslRtpManager* manager;
    } u;

    u.constManager = registry->mLeaseRtpManager(
        registry, key, (size_t)index);

    return u.manager;
}

PMF_DEPLOY_STATIC
boolean_T nesl_rtp_manager_set_rtps(NeslRtpManager*       manager,
                                    double                time,
                                    NeParameterBundle     bundle,
                                    NeuDiagnosticManager* diag)
{
    return manager->mSetParameters(manager, time, &bundle, diag);
}

#endif /* include guard */
