/* Copyright 2010-2018 The MathWorks, Inc. */
/*!
 * @file
 * NeslSimulationData implementation for code generation
 */

#ifndef nesl_sd_h
#define nesl_sd_h

#include "nesl_sd_type.h"

#ifndef pm_allocator_alloc
#define pm_allocator_alloc(_allocator, _m, _n) \
    ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#endif

#ifndef pm_allocator_free
#define pm_allocator_free(_allocator, _ptr)                          \
    {                                                                \
        void* __allocator_pointer = (_ptr);                          \
        if (__allocator_pointer != 0) {                              \
            (_allocator)->mFreeFcn(_allocator, __allocator_pointer); \
        }                                                            \
    }
#endif

#define LOCAL_SIM_DATA_FUNCTION(_name, _type)        \
    PMF_DEPLOY_STATIC _type* local_sim_data_##_name( \
        const NeslSimulationData* sd)                \
    {                                                \
        return &sd->mData->m##_name;                 \
    }

NESL_SIM_DATA_MACRO(LOCAL_SIM_DATA_FUNCTION)
NESL_SIM_DATA_VECTOR_MACRO(LOCAL_SIM_DATA_FUNCTION)
NESL_SIM_DATA_PATTERN_MACRO(LOCAL_SIM_DATA_FUNCTION)

PMF_DEPLOY_STATIC void local_sim_data_destroy(NeslSimulationData* sd)
{
    PmAllocator* a = pm_default_allocator();
    pm_allocator_free(a, sd->mData);
    pm_allocator_free(a, sd);
}

#define LOCAL_SIM_DATA_ASSIGN(_name, _type) \
    sim_data->m##_name = local_sim_data_##_name;

PMF_DEPLOY_STATIC NeslSimulationData* nesl_create_simulation_data(void)
{
    PmAllocator*        a        = pm_default_allocator();
    NeslSimulationData* sim_data = (NeslSimulationData*)pm_allocator_alloc(
        a, sizeof(NeslSimulationData), 1);
    NeslSimulationDataData* data = (NeslSimulationDataData*)pm_allocator_alloc(
        a, sizeof(NeslSimulationDataData), 1);

    NESL_SIM_DATA_MACRO(LOCAL_SIM_DATA_ASSIGN)
    NESL_SIM_DATA_VECTOR_MACRO(LOCAL_SIM_DATA_ASSIGN)
    NESL_SIM_DATA_PATTERN_MACRO(LOCAL_SIM_DATA_ASSIGN)
    sim_data->mDestroy = local_sim_data_destroy;
    sim_data->mData    = data;
    return sim_data;
}

#endif /* include guard */

/* [EOF] nesl_sd.h */
