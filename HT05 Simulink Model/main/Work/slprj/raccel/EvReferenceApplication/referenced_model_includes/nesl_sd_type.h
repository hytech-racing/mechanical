/* Copyright 2013-2017 The MathWorks, Inc. */
/*!
 * @file
 * NeslSimulationData data type for code generation
 */

#ifndef nesl_sd_type_h
#define nesl_sd_type_h

/* clang-format off */
#define NESL_SIM_DATA_MACRO(_X)                         \
    _X( Time,                    PmRealVector   )       \
    _X( ContStates,              PmRealVector   )       \
    _X( ModeVector,              PmIntVector    )       \
    _X( DiscStates,              PmRealVector   )       \
    _X( SampleHits,              PmIntVector    )       \
    _X( Outputs,                 PmRealVector   )       \
    _X( Dx,                      PmRealVector   )       \
    _X( NonSampledZCs,           PmRealVector   )       \
    _X( MassMatrixPr,            PmRealVector   )       \
    _X( InputValues,             PmRealVector   )       \
    _X( InputOffsets,            PmIntVector    )       \
    _X( Tolerances,              PmRealVector   )       \
    _X( FoundZcEvents,           boolean_T      )       \
    _X( IsMajorTimeStep,         boolean_T      )       \
    _X( IsSolverAssertCheck,     boolean_T      )       \
    _X( IsSolverCheckingCIC,     boolean_T      )       \
    _X( IsComputingJacobian,     boolean_T      )       \
    _X( IsEvaluatingF0,          boolean_T      )       \
    _X( IsSolverRequestingReset, boolean_T      )       \
    _X( IsFundamentalSampleHit,  boolean_T      )       \
    _X( CstateHasChanged,        boolean_T      )       \

#define NESL_SIM_DATA_VECTOR_MACRO(_X)          \
    _X( Residuals,     PmRealVector )           \
    _X( LinJacobian,   PmRealVector )           \
    _X( SolJacobianPr, PmRealVector )           \

#define NESL_SIM_DATA_PATTERN_MACRO(_X)                 \
    _X( M_P                , PmSparsityPattern )        \
    _X( LinJacobianPattern , PmSparsityPattern )        \
    _X( SolJacobianPattern , PmSparsityPattern )

/* clang-format on */

#define LOCAL_ADD_MEMBER(_name, _type) _type m##_name;

struct NeslSimulationDataDataTag
{
    NESL_SIM_DATA_MACRO(LOCAL_ADD_MEMBER)
    NESL_SIM_DATA_VECTOR_MACRO(LOCAL_ADD_MEMBER)
    NESL_SIM_DATA_PATTERN_MACRO(LOCAL_ADD_MEMBER)
};

#endif /* include guard */

/* [EOF] nesl_sd_type.h */
