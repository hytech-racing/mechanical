/* Copyright 2013-2018 The MathWorks, Inc. */
/*!
 * @file
 * diagnostic utilities
 */

#ifndef nesl_rtw_diag_h
#define nesl_rtw_diag_h

#include <stdio.h>

#define SAFE_DESTROY(_obj)    \
    if (_obj != NULL) {       \
        _obj->mDestroy(_obj); \
    }

/*
 * NeuDiagnosticManager
 */

PMF_DEPLOY_STATIC void
neu_destroy_diagnostic_manager(NeuDiagnosticManager* mgr){SAFE_DESTROY(mgr)}

PMF_DEPLOY_STATIC NeuDiagnosticTree* neu_diagnostic_manager_get_initial_tree(
    const NeuDiagnosticManager* mgr)
{
    /* Const cast required to pass through RTWCG-generated pointer type */
    union {
        const NeuDiagnosticTree* constDiagTree;
        NeuDiagnosticTree* diagTree;
    } u;
    
    u.constDiagTree = mgr->mGetInitialTree(mgr);
    
    return u.diagTree;
}

    /*
     * Reporting diagnostics
     */

#define RTW_DIAGNOSTICS_MESSAGE_BUFFER_SIZE 1024

PMF_DEPLOY_STATIC char* static_diagnostics_msg_buffer(void)
{
    static char msgBuffer[RTW_DIAGNOSTICS_MESSAGE_BUFFER_SIZE];
    return msgBuffer;
}

PMF_DEPLOY_STATIC char* rtw_diagnostics_msg(const NeuDiagnosticTree* tree)
{
    /* get static message buffer */
    char* msgBuffer = static_diagnostics_msg_buffer();

    /* create printer and print */
    NeuDiagnosticTreePrinter* printer =
        neu_create_diagnostic_tree_printer(pm_default_allocator());
    const char* msg = printer->mPrint(printer, tree);

    /* put the message into the buffer */
    strncpy(msgBuffer, msg, RTW_DIAGNOSTICS_MESSAGE_BUFFER_SIZE - 1);

    /* clean up */
    printer->mDestroy(printer);

    /* return the static message buffer */
    return msgBuffer;
}

PMF_DEPLOY_STATIC NeuDiagnosticManager* rtw_create_diagnostics(void)
{
    return neu_create_diagnostic_manager(pm_default_allocator());
}

PMF_DEPLOY_STATIC char* solver_mismatch_message(const char* solverInMdl,
                                                const char* solverToRun)
{
    char* msgBuffer = static_diagnostics_msg_buffer();
    sprintf(msgBuffer,
            "Detected inconsistent solvers in the model reference hierarchy. "
            "Model was built with %s, but the top model uses %s. "
            "Use the same solver in the top model and all referenced models.",
            solverInMdl,
            solverToRun);
    return msgBuffer;
}

/* error_buffer_is_empty() gets the value returned by TLC
   LibGetRTModelErrorStatus(). Normally, TLC returns an RTM field of type const
   char*, but per g1417602, it may short-circuit to (void*)0. Declaring const
   void* seems work in either case.
*/
PMF_DEPLOY_STATIC boolean_T error_buffer_is_empty(const void* ptr)
{
    return (ptr == NULL);
}

#endif /* include guard */
