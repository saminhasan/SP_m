#include "pm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
#define NULL_INDEX                     ((size_t) -1)
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
extern const NeAssertData hp_v4_a1692be3_1_assertData [ ] ; extern const
NeZCData hp_v4_a1692be3_1_ZCData [ ] ; void
hp_v4_a1692be3_1_computeRuntimeParameters ( const double *
runtimeRootVariables , double * runtimeParameters ) ; void
hp_v4_a1692be3_1_validateRuntimeParameters ( const double * runtimeParameters
, int32_T * assertSatisfactionFlags ) ; void
hp_v4_a1692be3_1_computeAsmRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void hp_v4_a1692be3_1_computeSimRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void hp_v4_a1692be3_1_initializeGeometries ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ) ; PmfMessageId
hp_v4_a1692be3_1_compDerivs ( const RuntimeDerivedValuesBundle * , const int
* , const double * , const int * , const double * , const double * , const
double * , const double * , double * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId hp_v4_a1692be3_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
hp_v4_a1692be3_1_numJacPerturbHiBounds ( const RuntimeDerivedValuesBundle * ,
const int * , const double * , const int * , const double * , const double *
, const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
hp_v4_a1692be3_1_checkDynamics ( const RuntimeDerivedValuesBundle * , const
double * , const double * , const double * , const double * , const double *
, const int * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
hp_v4_a1692be3_1_compOutputsDyn ( const RuntimeDerivedValuesBundle * , const
int * , const double * , const int * , const double * , const double * ,
const double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
hp_v4_a1692be3_1_compOutputsKin ( const RuntimeDerivedValuesBundle * , const
double * , const int * , const double * , const double * , const double * ,
const double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
hp_v4_a1692be3_1_compOutputs ( const RuntimeDerivedValuesBundle * , const int
* , const double * , const int * , const double * , const double * , const
double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
hp_v4_a1692be3_1_computeAsmModeVector ( const double * , const double * ,
const double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId hp_v4_a1692be3_1_computeSimModeVector ( const double * , const
double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId hp_v4_a1692be3_1_computeZeroCrossings ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId hp_v4_a1692be3_1_recordLog
( const RuntimeDerivedValuesBundle * , const int * , const double * , const
int * , const double * , const double * , const double * , double * , double
* , NeuDiagnosticManager * neDiagMgr ) ; void hp_v4_a1692be3_1_setTargets (
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , CTarget *
targets ) ; void hp_v4_a1692be3_1_resetAsmStateVector ( const void * mech ,
double * stateVector ) ; void hp_v4_a1692be3_1_resetSimStateVector ( const
void * mech , double * stateVector ) ; void
hp_v4_a1692be3_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
modeVector , const double * motionData , double * stateVector ) ; void
hp_v4_a1692be3_1_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
modeVector , double * stateVector ) ; void hp_v4_a1692be3_1_adjustPosition (
const void * mech , const double * dofDeltas , double * stateVector ) ; void
hp_v4_a1692be3_1_perturbAsmJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
hp_v4_a1692be3_1_perturbSimJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
hp_v4_a1692be3_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double magnitude , boolean_T doPerturbVelocity , double *
stateVector ) ; void hp_v4_a1692be3_1_computePosDofBlendMatrix ( const void *
mech , size_t stageIdx , size_t primitiveIdx , const double * stateVector ,
int partialType , double * matrix ) ; void
hp_v4_a1692be3_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * stateVector , int partialType
, double * matrix ) ; void hp_v4_a1692be3_1_projectPartiallyTargetedPos (
const void * mech , size_t stageIdx , size_t primitiveIdx , const double *
origStateVector , int partialType , double * stateVector ) ; void
hp_v4_a1692be3_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , double * motionData ) ; size_t
hp_v4_a1692be3_1_computeAssemblyPosError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData , double *
error ) ; size_t hp_v4_a1692be3_1_computeAssemblyJacobian ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const int * modeVector , const double * motionData , double * J
) ; size_t hp_v4_a1692be3_1_computeFullAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double
* stateVector , const int * modeVector , const double * motionData , double *
J ) ; boolean_T hp_v4_a1692be3_1_isInKinematicSingularity ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData ) ; void
hp_v4_a1692be3_1_convertStateVector ( const void * asmMech , const
RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle , const void *
simMech , const double * asmStateVector , const int * asmModeVector , const
int * simModeVector , double * simStateVector ) ; void
hp_v4_a1692be3_1_constructStateVector ( const void * mech , const double *
solverStateVector , const double * u , const double * uDot , const double *
discreteStateVector , double * fullStateVector ) ; void
hp_v4_a1692be3_1_extractSolverStateVector ( const void * mech , const double
* fullStateVector , double * solverStateVector ) ; void
hp_v4_a1692be3_1_extractDiscreteStateVector ( const void * mech , const
double * fullStateVector , double * discreteStateVector ) ; boolean_T
hp_v4_a1692be3_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; boolean_T hp_v4_a1692be3_1_isVelocityViolation ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
int * constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; PmfMessageId hp_v4_a1692be3_1_projectStateSim ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
int * constraintEqnEnableFlags , const int * modeVector , double *
stateVector , void * neDiagMgr ) ; void
hp_v4_a1692be3_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , const int * modeVector , double * error ) ; void
hp_v4_a1692be3_1_resetModeVector ( const void * mech , int * modeVector ) ;
boolean_T hp_v4_a1692be3_1_hasJointUpwardModeChange ( const void * mech ,
const int * prevModeVector , const int * modeVector ) ; PmfMessageId
hp_v4_a1692be3_1_performJointUpwardModeChange ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const int * prevModeVector , const int *
modeVector , const double * inputVector , double * stateVector , void *
neDiagMgr ) ; void hp_v4_a1692be3_1_onModeChangedCutJoints ( const void *
mech , const int * prevModeVector , const int * modeVector , double *
stateVector ) ; void hp_v4_a1692be3_1_setVariableModeJointsToLocked ( const
void * mech , int * modeVector ) ; PmfMessageId hp_v4_a1692be3_1_assemble (
const double * u , double * udot , double * x , NeuDiagnosticManager *
neDiagMgr ) { ( void ) x ; ( void ) u ; ( void ) udot ; ( void ) neDiagMgr ;
return NULL ; } static void dae_cg_setParameters_function ( const NeDae * dae
, const NeParameterBundle * paramBundle ) { const NeDaePrivateData * smData =
dae -> mPrivateData ; const double * runtimeRootVariables = paramBundle ->
mRealParameters . mX ; if ( smData -> mRuntimeParameterScalars . mN == 0 )
return ; hp_v4_a1692be3_1_computeRuntimeParameters ( runtimeRootVariables ,
smData -> mRuntimeParameterScalars . mX ) ;
hp_v4_a1692be3_1_computeAsmRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
hp_v4_a1692be3_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ; hp_v4_a1692be3_1_initializeGeometries ( &
smData -> mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; hp_v4_a1692be3_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 61 * sizeof ( real_T ) ) ; else errorId =
hp_v4_a1692be3_1_compDerivs ( & smData -> mSimRuntimeDerivedValuesBundle ,
smData -> mSimulationDelegate . mRunTimeEnabledEquations . mValues ,
systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 6 , systemInput -> mV . mX + 6 , systemInput -> mD .
mX , daeMethodOutput -> mXP0 . mX , & errorResult , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_numJacPerturbLoBounds_method ( const
NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; PmfMessageId errorId = NULL ; double
errorResult = 0.0 ; errorId = hp_v4_a1692be3_1_numJacPerturbLoBounds ( &
smData -> mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 6 , systemInput
-> mV . mX + 6 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_LO .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbHiBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
hp_v4_a1692be3_1_numJacPerturbHiBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 6 , systemInput
-> mV . mX + 6 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_HI .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_compOutputs_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; NeDaePrivateData * smData = dae
-> mPrivateData ; if ( smData -> mDoComputeDynamicOutputs ) { int derivErr =
0 ; double errorResult = 0.0 ; errorId = hp_v4_a1692be3_1_compOutputsDyn ( &
smData -> mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 6 , systemInput
-> mV . mX + 6 , systemInput -> mD . mX , smData -> mCachedDerivatives . mX ,
daeMethodOutput -> mY . mX , & derivErr , & errorResult , neDiagMgr ) ;
smData -> mCachedDerivativesAvailable = ( derivErr == 0 ) ; } else errorId =
hp_v4_a1692be3_1_compOutputsKin ( & smData -> mSimRuntimeDerivedValuesBundle
, systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 6 , systemInput -> mV . mX + 6 , systemInput -> mD .
mX , daeMethodOutput -> mY . mX , neDiagMgr ) ; return errorId ; } static
PmfMessageId dae_cg_mode_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
hp_v4_a1692be3_1_computeSimModeVector ( systemInput -> mU . mX , systemInput
-> mU . mX + 6 , systemInput -> mV . mX + 6 , daeMethodOutput -> mMODE . mX ,
& errorResult , neDiagMgr ) ; memcpy ( smData -> mCachedModeVector . mX ,
daeMethodOutput -> mMODE . mX , 0 * sizeof ( int32_T ) ) ; return errorId ; }
static PmfMessageId dae_cg_zeroCrossing_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; double errorResult = 0.0 ; return
hp_v4_a1692be3_1_computeZeroCrossings ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 6 , systemInput -> mV . mX + 6 , systemInput ->
mD . mX , daeMethodOutput -> mZC . mX , & errorResult , neDiagMgr ) ; }
static void dae_cg_setupLoggerFcn ( const NeDae * dae , NeLoggerBuilder *
neLoggerBuilder ) { ( void ) dae ; ( void ) neLoggerBuilder ; } static
PmfMessageId dae_cg_recordLog_method ( const NeDae * dae , const
NeSystemInput * systemInput , PmRealVector * output , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; double *
fullStateVector = smData -> mSimulationFullStateVector . mX ;
hp_v4_a1692be3_1_constructStateVector ( NULL , systemInput -> mX . mX ,
systemInput -> mU . mX , systemInput -> mU . mX + 6 , systemInput -> mD . mX
, fullStateVector ) ; errorId = hp_v4_a1692be3_1_recordLog ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , fullStateVector , systemInput -> mM . mX
, systemInput -> mU . mX , systemInput -> mU . mX + 6 , systemInput -> mV .
mX + 6 , output -> mX , & errorResult , neDiagMgr ) ; return errorId ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 6 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; if ( smData -> mNumConstraintEqns > 0 ) errorId = sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 6 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; if ( errorId == NULL ) { double result = 0.0 ; errorId =
hp_v4_a1692be3_1_checkDynamics ( & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mX . mX , systemInput -> mU . mX , systemInput -> mU . mX + 6
, systemInput -> mV . mX + 6 , systemInput -> mD . mX , systemInput -> mM .
mX , & result , neDiagMgr ) ; } return errorId ; } static PmfMessageId
dae_cg_CIC_MODE_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ; const
size_t mvSize = smData -> mModeVectorSize ; boolean_T modeChanged = false ;
if ( mvSize > 0 ) { errorId = hp_v4_a1692be3_1_computeSimModeVector (
systemInput -> mU . mX , systemInput -> mU . mX + 6 , systemInput -> mV . mX
+ 6 , systemInput -> mM . mX , & errorResult , neDiagMgr ) ; if ( errorId !=
NULL ) return errorId ; { size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if (
systemInput -> mM . mX [ i ] != smData -> mCachedModeVector . mX [ i ] ) {
modeChanged = true ; break ; } } } if ( modeChanged ) { errorId =
sm_core_onModeChanged ( & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mU . mX , systemInput -> mU .
mX + 6 , smData -> mCachedModeVector . mX , systemInput -> mM . mX ,
systemInput -> mX . mX , systemInput -> mD . mX , neDiagMgr ) ; if ( errorId
!= NULL ) return errorId ; memcpy ( smData -> mCachedModeVector . mX ,
systemInput -> mM . mX , 0 * sizeof ( int32_T ) ) ; } errorId =
sm_core_projectState ( true , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 6 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_assemble_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; const SmMechanismDelegate * delegate = & smData ->
mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 36 ; unsigned int asmStatus = 0 ; double *
assemblyFullStateVector = smData -> mAssemblyFullStateVector . mX ; double *
simulationFullStateVector = smData -> mSimulationFullStateVector . mX ; const
double * u = systemInput -> mU . mX ; const double * uDot = u + smData ->
mInputVectorSize ; const double * uDDot = systemInput -> mV . mX + smData ->
mInputVectorSize ; if ( smData -> mAssemblyModeVector . mN > 0 ) { errorId =
hp_v4_a1692be3_1_computeAsmModeVector ( u , uDot , uDDot , smData ->
mAssemblyModeVector . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL
) return errorId ; } if ( smData -> mModeVectorSize > 0 ) { errorId =
hp_v4_a1692be3_1_computeSimModeVector ( u , uDot , uDDot , systemInput -> mM
. mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ;
memcpy ( smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 *
sizeof ( int32_T ) ) ; } ( * delegate -> mSetTargets ) (
runtimeDerivedValuesBundle , smData -> mTargets ) ; { CTarget * target =
smData -> mTargets + smData -> mNumInternalTargets ; for ( i = 0 ; i < smData
-> mNumMotionInputPrimitives ; ++ i ) { const size_t inputOffset = smData ->
mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u [
inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; } for
( i = 0 ; i < smData -> mNumLockablePrimitives ; ++ i ) { const boolean_T
hasMode = smData -> mLockablePrimHasModes . mX [ i ] ; const size_t
modeOffset = smData -> mLockablePrimModeOffsets . mX [ i ] ; if ( hasMode &&
systemInput -> mM . mX [ modeOffset ] != 1 ) target -> mStrength = 0 ; else
target -> mStrength = 3 ; ++ target ; } } sm_core_computeStateVector (
delegate , runtimeDerivedValuesBundle , smData -> mAssemblyModeVector . mX ,
numTargets , smData -> mTargets , assemblyFullStateVector ) ; asmStatus =
sm_core_checkAssembly ( delegate , runtimeDerivedValuesBundle ,
assemblyFullStateVector , smData -> mAssemblyModeVector . mX , NULL , NULL ,
NULL ) ; if ( asmStatus != 1 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:ssci:core:dae:dae:assemblyFailure" , asmStatus == 2 ?
 "Model not assembled. The following violation occurred: Position Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled. The following violation occurred: Velocity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled. The following violation occurred: Singularity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
hp_v4_a1692be3_1_checkTargets ( & smData -> mSimRuntimeDerivedValuesBundle ,
assemblyFullStateVector ) ;
#endif
( * delegate -> mConvertStateVector ) ( NULL , runtimeDerivedValuesBundle ,
NULL , assemblyFullStateVector , smData -> mAssemblyModeVector . mX ,
systemInput -> mM . mX , simulationFullStateVector ) ; for ( i = 0 ; i <
smData -> mStateVectorSize ; ++ i ) systemInput -> mX . mX [ i ] =
simulationFullStateVector [ smData -> mStateVectorMap . mX [ i ] ] ; memcpy (
systemInput -> mD . mX , simulationFullStateVector + smData ->
mFullStateVectorSize - smData -> mDiscreteStateSize , smData ->
mDiscreteStateSize * sizeof ( double ) ) ; return errorId ; } typedef struct
{ size_t first ; size_t second ; } SizePair ; static void checkMemAllocStatus
( int_T status ) { ( void ) status ; } static PmCharVector
cStringToCharVector ( const char * src ) { const size_t n = strlen ( src ) ;
PmCharVector charVect ; const int_T status = pm_create_char_vector_fields ( &
charVect , n + 1 , pm_default_allocator ( ) ) ; checkMemAllocStatus ( status
) ; strcpy ( charVect . mX , src ) ; return charVect ; } static void
initBasicAttributes ( NeDaePrivateData * smData ) { size_t i ; smData ->
mStateVectorSize = 61 ; smData -> mFullStateVectorSize = 61 ; smData ->
mDiscreteStateSize = 0 ; smData -> mModeVectorSize = 0 ; smData ->
mNumZeroCrossings = 0 ; smData -> mInputVectorSize = 6 ; smData ->
mOutputVectorSize = 127 ; smData -> mNumConstraintEqns = 15 ; smData ->
mFundamentalSampleTime = + 0.000000000000000000e+00 ; for ( i = 0 ; i < 4 ;
++ i ) smData -> mChecksum [ i ] = 0 ; } static void initStateVector (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; static const int32_T stateVectorMap [ 61 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 ,
7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 ,
23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38
, 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 ,
54 , 55 , 56 , 57 , 58 , 59 , 60 } ; static const CTarget targets [ 36 ] = {
{ 1 , 66 , 0 , false , 0 , 2 , "deg" , false , false , +
1.000000000000000000e+00 , false , 4 , { + 5.824823725107175498e-01 , +
0.000000000000000000e+00 , - 9.197090092274493034e-02 , +
8.076234513049658226e-01 } , { + 0.000000000000000000e+00 } } , { 2 , 66 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 67 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 67 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 68 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 68 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 69 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 69 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 70 , 0 , false , 0 , 2 , "deg" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 5.824823725107175498e-01
, - 0.000000000000000000e+00 , + 9.197090092274490258e-02 , +
8.076234513049658226e-01 } , { + 0.000000000000000000e+00 } } , { 2 , 70 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 71 , 0 , false , 0 , 2 , "deg" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 5.824823725107176609e-01
, + 0.000000000000000000e+00 , - 9.197090092274488871e-02 , +
8.076234513049657116e-01 } , { + 0.000000000000000000e+00 } } , { 2 , 71 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 72 , 0 , false , 0 , 2 , "deg" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 5.824823725107176609e-01
, - 0.000000000000000000e+00 , + 9.197090092274488871e-02 , +
8.076234513049657116e-01 } , { + 0.000000000000000000e+00 } } , { 2 , 72 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 73 , 0 , false , 0 , 2 , "deg" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 5.824823725107176609e-01
, + 0.000000000000000000e+00 , - 9.197090092274483319e-02 , +
8.076234513049657116e-01 } , { + 0.000000000000000000e+00 } } , { 2 , 73 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 74 , 0 , false , 0 , 2 , "deg" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 5.824823725107176609e-01
, - 0.000000000000000000e+00 , + 9.197090092274490258e-02 , +
8.076234513049657116e-01 } , { + 0.000000000000000000e+00 } } , { 2 , 74 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 75 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 75 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 76 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 76 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 77 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 77 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 160 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 160 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 168 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 168 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 176 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 176 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 184 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 184 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 192 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 192 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 200 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 200 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } } ; int_T status ; size_t i ; status =
pm_create_real_vector_fields ( & smData -> mAssemblyFullStateVector , 61 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_real_vector_fields ( & smData -> mSimulationFullStateVector , 61 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData ->
mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize *
sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 36 ; smData ->
mNumMotionInputPrimitives = 0 ; smData -> mNumLockablePrimitives = 0 ; smData
-> mNumTargets = 36 ; PM_ALLOCATE_ARRAY ( smData -> mTargets , CTarget ,
smData -> mNumTargets , alloc ) ; for ( i = 0 ; i < smData -> mNumTargets ;
++ i ) sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; }
static void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
hp_v4_a1692be3_1_assertData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mParamAssertObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData
-> mParamAssertPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertDescriptors , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessages , PmCharVector , 0 , alloc
) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessageIds , PmCharVector , 0 ,
alloc ) ; for ( i = 0 ; i < smData -> mNumParamAsserts ; ++ i , ++ ad ) {
smData -> mParamAssertObjects [ i ] = cStringToCharVector ( ad -> mObject ) ;
smData -> mParamAssertPaths [ i ] = cStringToCharVector ( ad -> mPath ) ;
smData -> mParamAssertDescriptors [ i ] = cStringToCharVector ( ad ->
mDescriptor ) ; smData -> mParamAssertMessages [ i ] = cStringToCharVector (
ad -> mMessage ) ; smData -> mParamAssertMessageIds [ i ] =
cStringToCharVector ( ad -> mMessageID ) ; smData -> mParamAssertIsWarnings .
mX [ i ] = ad -> mIsWarn ; } } } static void initModeVector (
NeDaePrivateData * smData ) { { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mAssemblyModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mAssemblyModeVector . mN ; ++ i ) smData -> mAssemblyModeVector .
mX [ i ] = 0 ; } { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mCachedModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mModeVectorSize ; ++ i ) smData -> mCachedModeVector . mX [ i ] =
0 ; } } static void initZeroCrossings ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; smData ->
mZeroCrossingObjects = NULL ; smData -> mZeroCrossingPaths = NULL ; smData ->
mZeroCrossingDescriptors = NULL ; status = pm_create_int_vector_fields ( &
smData -> mZeroCrossingTypes , 0 , alloc ) ; checkMemAllocStatus ( status ) ;
if ( smData -> mNumZeroCrossings > 0 ) { const NeZCData * zcd =
hp_v4_a1692be3_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mZeroCrossingObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mZeroCrossingPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY
( smData -> mZeroCrossingDescriptors , PmCharVector , 0 , alloc ) ; for ( i =
0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) { smData ->
mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject ) ; smData
-> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ; smData
-> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd -> mDescriptor
) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } } } static
void initVariables ( NeDaePrivateData * smData ) { static const char *
varFullPaths [ 61 ] = { "Servo_1.Revolute_Joint_1.Rz.q" ,
"Servo_1.Revolute_Joint_1.Rz.w" ,
"Coupler_and_platform.Spherical_Joint_1.S.Q" ,
"Coupler_and_platform.Spherical_Joint_1.S.Q" ,
"Coupler_and_platform.Spherical_Joint_1.S.Q" ,
"Coupler_and_platform.Spherical_Joint_1.S.Q" ,
"Coupler_and_platform.Spherical_Joint_1.S.w" ,
"Coupler_and_platform.Spherical_Joint_1.S.w" ,
"Coupler_and_platform.Spherical_Joint_1.S.w" ,
"Coupler_and_platform.Spherical_Joint_7.S.Q" ,
"Coupler_and_platform.Spherical_Joint_7.S.Q" ,
"Coupler_and_platform.Spherical_Joint_7.S.Q" ,
"Coupler_and_platform.Spherical_Joint_7.S.Q" ,
"Coupler_and_platform.Spherical_Joint_7.S.w" ,
"Coupler_and_platform.Spherical_Joint_7.S.w" ,
"Coupler_and_platform.Spherical_Joint_7.S.w" ,
"Servo_2.Revolute_Joint_2.Rz.q" , "Servo_2.Revolute_Joint_2.Rz.w" ,
"Coupler_and_platform.Spherical_Joint_2.S.Q" ,
"Coupler_and_platform.Spherical_Joint_2.S.Q" ,
"Coupler_and_platform.Spherical_Joint_2.S.Q" ,
"Coupler_and_platform.Spherical_Joint_2.S.Q" ,
"Coupler_and_platform.Spherical_Joint_2.S.w" ,
"Coupler_and_platform.Spherical_Joint_2.S.w" ,
"Coupler_and_platform.Spherical_Joint_2.S.w" ,
"Servo_3.Revolute_Joint_3.Rz.q" , "Servo_3.Revolute_Joint_3.Rz.w" ,
"Coupler_and_platform.Spherical_Joint_3.S.Q" ,
"Coupler_and_platform.Spherical_Joint_3.S.Q" ,
"Coupler_and_platform.Spherical_Joint_3.S.Q" ,
"Coupler_and_platform.Spherical_Joint_3.S.Q" ,
"Coupler_and_platform.Spherical_Joint_3.S.w" ,
"Coupler_and_platform.Spherical_Joint_3.S.w" ,
"Coupler_and_platform.Spherical_Joint_3.S.w" ,
"Servo_4.Revolute_Joint_4.Rz.q" , "Servo_4.Revolute_Joint_4.Rz.w" ,
"Coupler_and_platform.Spherical_Joint_4.S.Q" ,
"Coupler_and_platform.Spherical_Joint_4.S.Q" ,
"Coupler_and_platform.Spherical_Joint_4.S.Q" ,
"Coupler_and_platform.Spherical_Joint_4.S.Q" ,
"Coupler_and_platform.Spherical_Joint_4.S.w" ,
"Coupler_and_platform.Spherical_Joint_4.S.w" ,
"Coupler_and_platform.Spherical_Joint_4.S.w" ,
"Servo_5.Revolute_Joint_5.Rz.q" , "Servo_5.Revolute_Joint_5.Rz.w" ,
"Coupler_and_platform.Spherical_Joint_5.S.Q" ,
"Coupler_and_platform.Spherical_Joint_5.S.Q" ,
"Coupler_and_platform.Spherical_Joint_5.S.Q" ,
"Coupler_and_platform.Spherical_Joint_5.S.Q" ,
"Coupler_and_platform.Spherical_Joint_5.S.w" ,
"Coupler_and_platform.Spherical_Joint_5.S.w" ,
"Coupler_and_platform.Spherical_Joint_5.S.w" ,
"Servo_6.Revolute_Joint_6.Rz.q" , "Servo_6.Revolute_Joint_6.Rz.w" ,
"Coupler_and_platform.Spherical_Joint_6.S.Q" ,
"Coupler_and_platform.Spherical_Joint_6.S.Q" ,
"Coupler_and_platform.Spherical_Joint_6.S.Q" ,
"Coupler_and_platform.Spherical_Joint_6.S.Q" ,
"Coupler_and_platform.Spherical_Joint_6.S.w" ,
"Coupler_and_platform.Spherical_Joint_6.S.w" ,
"Coupler_and_platform.Spherical_Joint_6.S.w" } ; static const char *
varObjects [ 61 ] = { "hp_v4/Servo 1/Revolute Joint 1" ,
"hp_v4/Servo 1/Revolute Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Servo 2/Revolute Joint 2" , "hp_v4/Servo 2/Revolute Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Servo 3/Revolute Joint 3" , "hp_v4/Servo 3/Revolute Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Servo 4/Revolute Joint 4" , "hp_v4/Servo 4/Revolute Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Servo 5/Revolute Joint 5" , "hp_v4/Servo 5/Revolute Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Servo 6/Revolute Joint 6" , "hp_v4/Servo 6/Revolute Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" } ; static const char *
varEncodedDims [ 61 ] = { "1x1" , "1x1" , "4x1" , "4x1" , "4x1" , "4x1" ,
"3x1" , "3x1" , "3x1" , "4x1" , "4x1" , "4x1" , "4x1" , "3x1" , "3x1" , "3x1"
, "1x1" , "1x1" , "4x1" , "4x1" , "4x1" , "4x1" , "3x1" , "3x1" , "3x1" ,
"1x1" , "1x1" , "4x1" , "4x1" , "4x1" , "4x1" , "3x1" , "3x1" , "3x1" , "1x1"
, "1x1" , "4x1" , "4x1" , "4x1" , "4x1" , "3x1" , "3x1" , "3x1" , "1x1" ,
"1x1" , "4x1" , "4x1" , "4x1" , "4x1" , "3x1" , "3x1" , "3x1" , "1x1" , "1x1"
, "4x1" , "4x1" , "4x1" , "4x1" , "3x1" , "3x1" , "3x1" } ; static const
size_t varNumels [ 61 ] = { 1 , 1 , 4 , 4 , 4 , 4 , 3 , 3 , 3 , 4 , 4 , 4 , 4
, 3 , 3 , 3 , 1 , 1 , 4 , 4 , 4 , 4 , 3 , 3 , 3 , 1 , 1 , 4 , 4 , 4 , 4 , 3 ,
3 , 3 , 1 , 1 , 4 , 4 , 4 , 4 , 3 , 3 , 3 , 1 , 1 , 4 , 4 , 4 , 4 , 3 , 3 , 3
, 1 , 1 , 4 , 4 , 4 , 4 , 3 , 3 , 3 } ; smData -> mNumVarScalars = 61 ;
smData -> mVarFullPaths = NULL ; smData -> mVarObjects = NULL ; smData ->
mVarEncodedDims = NULL ; if ( smData -> mNumVarScalars > 0 ) { size_t s ;
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ;
PM_ALLOCATE_ARRAY ( smData -> mVarFullPaths , PmCharVector , 61 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mVarObjects , PmCharVector , 61 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mVarEncodedDims , PmCharVector , 61 , alloc ) ;
for ( s = 0 ; s < smData -> mNumVarScalars ; ++ s ) { smData -> mVarFullPaths
[ s ] = cStringToCharVector ( varFullPaths [ s ] ) ; smData -> mVarObjects [
s ] = cStringToCharVector ( varObjects [ s ] ) ; smData -> mVarEncodedDims [
s ] = cStringToCharVector ( varEncodedDims [ s ] ) ; } status =
pm_create_size_vector_fields ( & smData -> mVarNumels , smData ->
mNumVarScalars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mVarNumels . mX , varNumels , 61 * sizeof ( size_t ) ) ; } } static void
initRuntimeParameters ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; size_t i = 0 ; static const
int32_T * rtpRootVarNumels = NULL ; static const char * * rtpFullPaths = NULL
; smData -> mNumRtpRootVars = 0 ; status = pm_create_int_vector_fields ( &
smData -> mRtpRootVarNumels , smData -> mNumRtpRootVars , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mRtpRootVarNumels . mX ,
rtpRootVarNumels , smData -> mNumRtpRootVars * sizeof ( int32_T ) ) ; smData
-> mRtpFullPaths = NULL ; if ( smData -> mNumRtpRootVars > 0 ) { size_t v ;
PM_ALLOCATE_ARRAY ( smData -> mRtpFullPaths , PmCharVector , 0 , alloc ) ;
for ( v = 0 ; v < smData -> mNumRtpRootVars ; ++ v ) { smData ->
mRtpFullPaths [ v ] = cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData
-> mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SscArraySize dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
SscIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , SscIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { SscIoInfo * info
= infos + s ; info -> name = info -> identifier = portPaths [ s ] . mX ; info
-> size = dimensions [ s ] ; info -> unit = units [ s ] . mX ; } } } if (
doInputs ) { smData -> mNumInputs = n ; smData -> mInputPortPaths = portPaths
; smData -> mInputUnits = units ; smData -> mInputInfos = infos ; } else {
smData -> mNumOutputs = n ; smData -> mOutputPortPaths = portPaths ; smData
-> mOutputUnits = units ; smData -> mOutputInfos = infos ; } } static void
initIoInfo ( NeDaePrivateData * smData ) { static const char * inputPortPaths
[ 6 ] = { "Servo_1.Revolute_Joint_1.ti" , "Servo_2.Revolute_Joint_2.ti" ,
"Servo_3.Revolute_Joint_3.ti" , "Servo_4.Revolute_Joint_4.ti" ,
"Servo_5.Revolute_Joint_5.ti" , "Servo_6.Revolute_Joint_6.ti" } ; static
const char * inputUnits [ 6 ] = { "kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2"
, "kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2" } ; static const SscArraySize
inputDimensions [ 6 ] = { { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1
, "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } } ; static const char *
outputPortPaths [ 53 ] = { "Coupler_and_platform.Spherical_Joint_1.Q" ,
"Coupler_and_platform.Spherical_Joint_10.Q" ,
"Coupler_and_platform.Spherical_Joint_11.Q" ,
"Coupler_and_platform.Spherical_Joint_12.Q" ,
"Coupler_and_platform.Spherical_Joint_2.Q" ,
"Coupler_and_platform.Spherical_Joint_3.Q" ,
"Coupler_and_platform.Spherical_Joint_4.Q" ,
"Coupler_and_platform.Spherical_Joint_5.Q" ,
"Coupler_and_platform.Spherical_Joint_6.Q" ,
"Coupler_and_platform.Spherical_Joint_7.Q" ,
"Coupler_and_platform.Spherical_Joint_8.Q" ,
"Coupler_and_platform.Spherical_Joint_9.Q" , "Servo_1.Revolute_Joint_1.q" ,
"Servo_1.Revolute_Joint_1.w" , "Servo_1.Revolute_Joint_1.b" ,
"Servo_1.Revolute_Joint_1.t" , "Servo_2.Revolute_Joint_2.q" ,
"Servo_2.Revolute_Joint_2.w" , "Servo_2.Revolute_Joint_2.b" ,
"Servo_2.Revolute_Joint_2.t" , "Servo_3.Revolute_Joint_3.q" ,
"Servo_3.Revolute_Joint_3.w" , "Servo_3.Revolute_Joint_3.b" ,
"Servo_3.Revolute_Joint_3.t" , "Servo_4.Revolute_Joint_4.q" ,
"Servo_4.Revolute_Joint_4.w" , "Servo_4.Revolute_Joint_4.b" ,
"Servo_4.Revolute_Joint_4.t" , "Servo_5.Revolute_Joint_5.q" ,
"Servo_5.Revolute_Joint_5.w" , "Servo_5.Revolute_Joint_5.b" ,
"Servo_5.Revolute_Joint_5.t" , "Servo_6.Revolute_Joint_6.q" ,
"Servo_6.Revolute_Joint_6.w" , "Servo_6.Revolute_Joint_6.b" ,
"Servo_6.Revolute_Joint_6.t" , "Spring_and_Damper_Force.fm" ,
"Coupler_and_platform.Subsystem.Transform_Sensor.Q" ,
"Coupler_and_platform.Subsystem.Transform_Sensor1.Q" ,
"Coupler_and_platform.Subsystem.Transform_Sensor2.Q" ,
"Coupler_and_platform.Subsystem.Transform_Sensor3.Q" ,
"Coupler_and_platform.Subsystem.Transform_Sensor4.Q" ,
"Coupler_and_platform.Subsystem.Transform_Sensor5.Q" ,
"Coupler_and_platform.Subsystem1.Transform_Sensor.Q" ,
"Coupler_and_platform.Subsystem1.Transform_Sensor1.Q" ,
"Coupler_and_platform.Subsystem1.Transform_Sensor2.Q" ,
"Coupler_and_platform.Subsystem1.Transform_Sensor3.Q" ,
"Coupler_and_platform.Subsystem1.Transform_Sensor4.Q" ,
"Coupler_and_platform.Subsystem1.Transform_Sensor5.Q" ,
"Platform_pose_logger.Transform_Sensor.seq" ,
"Platform_pose_logger.Transform_Sensor.x" ,
"Platform_pose_logger.Transform_Sensor.y" ,
"Platform_pose_logger.Transform_Sensor.z" } ; static const char * outputUnits
[ 53 ] = { "1" , "1" , "1" , "1" , "1" , "1" , "1" , "1" , "1" , "1" , "1" ,
"1" , "rad" , "rad/s" , "rad/s^2" , "kg*m^2/s^2" , "rad" , "rad/s" ,
"rad/s^2" , "kg*m^2/s^2" , "rad" , "rad/s" , "rad/s^2" , "kg*m^2/s^2" , "rad"
, "rad/s" , "rad/s^2" , "kg*m^2/s^2" , "rad" , "rad/s" , "rad/s^2" ,
"kg*m^2/s^2" , "rad" , "rad/s" , "rad/s^2" , "kg*m^2/s^2" , "kg*m/s^2" , "1"
, "1" , "1" , "1" , "1" , "1" , "1" , "1" , "1" , "1" , "1" , "1" , "rad" ,
"m" , "m" , "m" } ; static const SscArraySize outputDimensions [ 53 ] = { { 4
, "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , {
4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } ,
{ 4 , "4x1" } , { 4 , "4x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" }
, { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1"
} , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 ,
"1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1
, "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , {
1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 4 , "4x1" } , { 4 , "4x1" } ,
{ 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" }
, { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1" } , { 4 , "4x1"
} , { 3 , "3x1" } , { 1 , "1x1" } , { 1 , "1x1" } , { 1 , "1x1" } } ;
initIoInfoHelper ( 6 , inputPortPaths , inputUnits , inputDimensions , true ,
smData ) ; initIoInfoHelper ( 53 , outputPortPaths , outputUnits ,
outputDimensions , false , smData ) ; } static void initInputDerivs (
NeDaePrivateData * smData ) { static const int32_T numInputDerivs [ 6 ] = { 0
, 0 , 0 , 0 , 0 , 0 } ; PmAllocator * alloc = pm_default_allocator ( ) ;
const int_T status = pm_create_int_vector_fields ( & smData ->
mNumInputDerivs , smData -> mInputVectorSize , alloc ) ; checkMemAllocStatus
( status ) ; memcpy ( smData -> mNumInputDerivs . mX , numInputDerivs , 6 *
sizeof ( int32_T ) ) ; smData -> mInputOrder = 1 ; } static void
initDirectFeedthrough ( NeDaePrivateData * smData ) { static const boolean_T
directFeedthroughVector [ 6 ] = { false , false , false , false , false ,
false } ; static const boolean_T directFeedthroughMatrix [ 762 ] = { false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , false , false , true , true , false , false , true ,
true , false , false , true , true , false , false , true , true , false ,
false , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , true , true , false , false , true , true , false ,
false , true , true , false , false , true , true , false , false , true ,
true , false , false , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , false , false , true ,
true , false , false , true , true , false , false , true , true , false ,
false , true , true , false , false , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , false ,
false , true , true , false , false , true , true , false , false , true ,
true , false , false , true , true , false , false , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , false , false , true , true , false , false , true , true , false ,
false , true , true , false , false , true , true , false , false , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , false , false , true , true , false , false , true ,
true , false , false , true , true , false , false , true , true , false ,
false , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
} ; PmAllocator * alloc = pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 6 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 6 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 762 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 762 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; static const int32_T outputFunctionMap [ 127 ] = {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 1 , 1 , 0 , 0 , 1
, 1 , 0 , 0 , 1 , 1 , 0 , 0 , 1 , 1 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; smData -> mOutputFunctionMap =
pm_create_int_vector ( 127 , alloc ) ; memcpy ( smData -> mOutputFunctionMap
-> mX , outputFunctionMap , 127 * sizeof ( int32_T ) ) ; smData ->
mNumOutputClasses = 2 ; smData -> mHasKinematicOutputs = true ; smData ->
mHasDynamicOutputs = true ; smData -> mIsOutputClass0Dynamic = false ; smData
-> mDoComputeDynamicOutputs = false ; smData -> mCachedDerivativesAvailable =
false ; { size_t i = 0 ; const int_T status = pm_create_real_vector_fields (
& smData -> mCachedDerivatives , 61 , pm_default_allocator ( ) ) ;
checkMemAllocStatus ( status ) ; for ( i = 0 ; i < smData ->
mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives . mX [ i ] =
0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; static const SmSizePair
jointToStageIdx [ 13 ] = { { 66 , 1 } , { 70 , 4 } , { 71 , 6 } , { 72 , 8 }
, { 73 , 10 } , { 74 , 12 } , { 75 , 2 } , { 160 , 0 } , { 168 , 3 } , { 176
, 5 } , { 184 , 7 } , { 192 , 9 } , { 200 , 11 } } ; static const size_t
primitiveIndices [ 13 + 1 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 ,
11 , 12 , 13 } ; static const SmSizePair stateOffsets [ 13 ] = { { 0 , 1 } ,
{ 2 , 6 } , { 9 , 13 } , { 16 , 17 } , { 18 , 22 } , { 25 , 26 } , { 27 , 31
} , { 34 , 35 } , { 36 , 40 } , { 43 , 44 } , { 45 , 49 } , { 52 , 53 } , {
54 , 58 } } ; static const SmSizePair dofOffsets [ 13 ] = { { 0 , 1 } , { 1 ,
4 } , { 4 , 7 } , { 7 , 8 } , { 8 , 11 } , { 11 , 12 } , { 12 , 15 } , { 15 ,
16 } , { 16 , 19 } , { 19 , 20 } , { 20 , 23 } , { 23 , 24 } , { 24 , 27 } }
; static const size_t * flexibleStages = NULL ; static const size_t
remodIndices [ 6 ] = { 0 , 16 , 25 , 34 , 43 , 52 } ; static const size_t
equationsPerConstraint [ 5 ] = { 3 , 3 , 3 , 3 , 3 } ; static const int32_T
hasAllVelocityDisabledEquations [ 5 ] = { 0 , 0 , 0 , 0 , 0 } ; static const
int32_T runtimeEnabledEquations [ 15 ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 } ; static const size_t dofToVelSlot [ 27 ] = { 1 , 6
, 7 , 8 , 13 , 14 , 15 , 17 , 22 , 23 , 24 , 26 , 31 , 32 , 33 , 35 , 40 , 41
, 42 , 44 , 49 , 50 , 51 , 53 , 58 , 59 , 60 } ; static const size_t
constraintDofs [ 55 ] = { 15 , 16 , 17 , 18 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 19
, 20 , 21 , 22 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 23 , 24 , 25 , 26 , 0 , 1 , 2 ,
3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 11 , 12 , 13 ,
14 , 0 , 1 , 2 , 3 , 4 , 5 , 6 } ; static const size_t constraintDofOffsets [
5 + 1 ] = { 0 , 11 , 22 , 33 , 44 , 55 } ; const size_t Jm = 15 ; const
size_t Jn = 27 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 27 ; delegate -> mDof = 27 ; delegate -> mStateSize = 61 ;
delegate -> mContinuousStateSize = 61 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 13 ; delegate -> mNumConstraints = 5 ; delegate ->
mNumAllConstraintEquations = 15 ; sm_core_SmSizePairVector_create ( &
delegate -> mJointToStageIdx , 13 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 13 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 13 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 13 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 13 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 13 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 6 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 6 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mHasAllVelocityDisabledEquations , delegate -> mNumConstraints ,
0 ) ; memcpy ( sm_core_SmIntVector_nonConstValues ( & delegate ->
mHasAllVelocityDisabledEquations ) , hasAllVelocityDisabledEquations ,
delegate -> mNumConstraints * sizeof ( int32_T ) ) ;
sm_core_SmIntVector_create ( & delegate -> mRunTimeEnabledEquations ,
delegate -> mNumAllConstraintEquations , 0 ) ; memcpy (
sm_core_SmIntVector_nonConstValues ( & delegate -> mRunTimeEnabledEquations )
, runtimeEnabledEquations , delegate -> mNumAllConstraintEquations * sizeof (
int32_T ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot ,
delegate -> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof (
size_t ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs ,
55 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofs ) , constraintDofs , 55 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofOffsets , delegate
-> mNumConstraints + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues
( & delegate -> mConstraintDofOffsets ) , constraintDofOffsets , ( delegate
-> mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create
( & scratchpad -> mPosRequired , 27 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 27 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 5 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 5 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 5 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 5 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 5 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 27 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 27 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 13 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 13 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 13 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 13 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 13 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 7 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 61 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 61 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 61 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 61 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 1879 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 27 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 61 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 27 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 225 , 0.0
) ; delegate -> mSetTargets = hp_v4_a1692be3_1_setTargets ; delegate ->
mResetStateVector = hp_v4_a1692be3_1_resetAsmStateVector ; delegate ->
mInitializeTrackedAngleState = hp_v4_a1692be3_1_initializeTrackedAngleState ;
delegate -> mComputeDiscreteState = hp_v4_a1692be3_1_computeDiscreteState ;
delegate -> mAdjustPosition = hp_v4_a1692be3_1_adjustPosition ; delegate ->
mPerturbJointPrimitiveState = hp_v4_a1692be3_1_perturbAsmJointPrimitiveState
; delegate -> mPerturbFlexibleBodyState = NULL ; delegate ->
mComputePosDofBlendMatrix = hp_v4_a1692be3_1_computePosDofBlendMatrix ;
delegate -> mComputeVelDofBlendMatrix =
hp_v4_a1692be3_1_computeVelDofBlendMatrix ; delegate ->
mProjectPartiallyTargetedPos = hp_v4_a1692be3_1_projectPartiallyTargetedPos ;
delegate -> mPropagateMotion = hp_v4_a1692be3_1_propagateMotion ; delegate ->
mComputeAssemblyPosError = hp_v4_a1692be3_1_computeAssemblyPosError ;
delegate -> mComputeAssemblyJacobian =
hp_v4_a1692be3_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian = hp_v4_a1692be3_1_computeFullAssemblyJacobian ;
delegate -> mIsInKinematicSingularity =
hp_v4_a1692be3_1_isInKinematicSingularity ; delegate -> mConvertStateVector =
hp_v4_a1692be3_1_convertStateVector ; delegate -> mConstructStateVector =
NULL ; delegate -> mExtractSolverStateVector = NULL ; delegate ->
mExtractDiscreteStateVector = NULL ; delegate -> mIsPositionViolation = NULL
; delegate -> mIsVelocityViolation = NULL ; delegate -> mProjectStateSim =
NULL ; delegate -> mComputeConstraintError = NULL ; delegate ->
mResetModeVector = NULL ; delegate -> mHasJointUpwardModeChange = NULL ;
delegate -> mPerformJointUpwardModeChange = NULL ; delegate ->
mOnModeChangedCutJoints = NULL ; delegate -> mSetVariableModeJointsToLocked =
NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; static const SmSizePair jointToStageIdx [ 13 ] = { { 66 , 1 } , { 70
, 4 } , { 71 , 6 } , { 72 , 8 } , { 73 , 10 } , { 74 , 12 } , { 75 , 2 } , {
160 , 0 } , { 168 , 3 } , { 176 , 5 } , { 184 , 7 } , { 192 , 9 } , { 200 ,
11 } } ; static const size_t primitiveIndices [ 13 + 1 ] = { 0 , 1 , 2 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 } ; static const SmSizePair
stateOffsets [ 13 ] = { { 0 , 1 } , { 2 , 6 } , { 9 , 13 } , { 16 , 17 } , {
18 , 22 } , { 25 , 26 } , { 27 , 31 } , { 34 , 35 } , { 36 , 40 } , { 43 , 44
} , { 45 , 49 } , { 52 , 53 } , { 54 , 58 } } ; static const SmSizePair
dofOffsets [ 13 ] = { { 0 , 1 } , { 1 , 4 } , { 4 , 7 } , { 7 , 8 } , { 8 ,
11 } , { 11 , 12 } , { 12 , 15 } , { 15 , 16 } , { 16 , 19 } , { 19 , 20 } ,
{ 20 , 23 } , { 23 , 24 } , { 24 , 27 } } ; static const size_t *
flexibleStages = NULL ; static const size_t remodIndices [ 6 ] = { 0 , 16 ,
25 , 34 , 43 , 52 } ; static const size_t equationsPerConstraint [ 5 ] = { 3
, 3 , 3 , 3 , 3 } ; static const int32_T hasAllVelocityDisabledEquations [ 5
] = { 0 , 0 , 0 , 0 , 0 } ; static const int32_T runtimeEnabledEquations [ 15
] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static
const size_t dofToVelSlot [ 27 ] = { 1 , 6 , 7 , 8 , 13 , 14 , 15 , 17 , 22 ,
23 , 24 , 26 , 31 , 32 , 33 , 35 , 40 , 41 , 42 , 44 , 49 , 50 , 51 , 53 , 58
, 59 , 60 } ; static const size_t constraintDofs [ 55 ] = { 15 , 16 , 17 , 18
, 0 , 1 , 2 , 3 , 4 , 5 , 6 , 19 , 20 , 21 , 22 , 0 , 1 , 2 , 3 , 4 , 5 , 6 ,
23 , 24 , 25 , 26 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 0 , 1 , 2 ,
3 , 4 , 5 , 6 , 11 , 12 , 13 , 14 , 0 , 1 , 2 , 3 , 4 , 5 , 6 } ; static
const size_t constraintDofOffsets [ 5 + 1 ] = { 0 , 11 , 22 , 33 , 44 , 55 }
; const size_t Jm = 15 ; const size_t Jn = 27 ; SmSizePair zeroSizePair ;
zeroSizePair . mFirst = zeroSizePair . mSecond = 0 ;
sm_core_MechanismDelegate_allocScratchpad ( delegate ) ; scratchpad =
delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ; delegate ->
mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired = 2 ;
delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol = +
1.000000000000000062e-09 ; delegate -> mTreeJointDof = 27 ; delegate -> mDof
= 27 ; delegate -> mStateSize = 61 ; delegate -> mContinuousStateSize = 61 ;
delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 13 ; delegate ->
mNumConstraints = 5 ; delegate -> mNumAllConstraintEquations = 15 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 13 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 13 * sizeof ( SmSizePair )
) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate
-> mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 13 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 13 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 13 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 13 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 6 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 6 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mHasAllVelocityDisabledEquations , delegate -> mNumConstraints ,
0 ) ; memcpy ( sm_core_SmIntVector_nonConstValues ( & delegate ->
mHasAllVelocityDisabledEquations ) , hasAllVelocityDisabledEquations ,
delegate -> mNumConstraints * sizeof ( int32_T ) ) ;
sm_core_SmIntVector_create ( & delegate -> mRunTimeEnabledEquations ,
delegate -> mNumAllConstraintEquations , 0 ) ; memcpy (
sm_core_SmIntVector_nonConstValues ( & delegate -> mRunTimeEnabledEquations )
, runtimeEnabledEquations , delegate -> mNumAllConstraintEquations * sizeof (
int32_T ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot ,
delegate -> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof (
size_t ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs ,
55 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofs ) , constraintDofs , 55 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofOffsets , delegate
-> mNumConstraints + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues
( & delegate -> mConstraintDofOffsets ) , constraintDofOffsets , ( delegate
-> mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create
( & scratchpad -> mPosRequired , 27 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 27 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 27 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 5 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 5 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 5 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 27 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 5 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 5 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 27 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 27 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 13 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 13 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 13 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 13 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 13 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 7 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 61 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 61 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 61 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 61 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 1879 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 27 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 61 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 27 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 225 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
hp_v4_a1692be3_1_resetSimStateVector ; delegate ->
mInitializeTrackedAngleState = NULL ; delegate -> mComputeDiscreteState =
NULL ; delegate -> mAdjustPosition = NULL ; delegate ->
mPerturbJointPrimitiveState = hp_v4_a1692be3_1_perturbSimJointPrimitiveState
; delegate -> mPerturbFlexibleBodyState =
hp_v4_a1692be3_1_perturbFlexibleBodyState ; delegate ->
mComputePosDofBlendMatrix = NULL ; delegate -> mComputeVelDofBlendMatrix =
NULL ; delegate -> mProjectPartiallyTargetedPos = NULL ; delegate ->
mPropagateMotion = NULL ; delegate -> mComputeAssemblyPosError = NULL ;
delegate -> mComputeAssemblyJacobian = NULL ; delegate ->
mComputeFullAssemblyJacobian = NULL ; delegate -> mIsInKinematicSingularity =
NULL ; delegate -> mConvertStateVector = NULL ; delegate ->
mConstructStateVector = hp_v4_a1692be3_1_constructStateVector ; delegate ->
mExtractSolverStateVector = hp_v4_a1692be3_1_extractSolverStateVector ;
delegate -> mExtractDiscreteStateVector =
hp_v4_a1692be3_1_extractDiscreteStateVector ; delegate ->
mIsPositionViolation = hp_v4_a1692be3_1_isPositionViolation ; delegate ->
mIsVelocityViolation = hp_v4_a1692be3_1_isVelocityViolation ; delegate ->
mProjectStateSim = hp_v4_a1692be3_1_projectStateSim ; delegate ->
mComputeConstraintError = hp_v4_a1692be3_1_computeConstraintError ; delegate
-> mResetModeVector = hp_v4_a1692be3_1_resetModeVector ; delegate ->
mHasJointUpwardModeChange = hp_v4_a1692be3_1_hasJointUpwardModeChange ;
delegate -> mPerformJointUpwardModeChange =
hp_v4_a1692be3_1_performJointUpwardModeChange ; delegate ->
mOnModeChangedCutJoints = hp_v4_a1692be3_1_onModeChangedCutJoints ; delegate
-> mSetVariableModeJointsToLocked =
hp_v4_a1692be3_1_setVariableModeJointsToLocked ; delegate -> mMech = NULL ; }
static void initMechanismDelegates ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; static const size_t *
motionInputOffsets = NULL ; static const boolean_T * lockablePrimHasModes =
NULL ; static const size_t * lockablePrimModeOffsets = NULL ; int_T status =
0 ; initAssemblyDelegate ( & smData -> mAssemblyDelegate ) ;
initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
pm_create_size_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumMotionInputPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 0 * sizeof (
size_t ) ) ; status = pm_create_bool_vector_fields ( & smData ->
mLockablePrimHasModes , smData -> mNumLockablePrimitives , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mLockablePrimHasModes .
mX , lockablePrimHasModes , 0 * sizeof ( boolean_T ) ) ; status =
pm_create_size_vector_fields ( & smData -> mLockablePrimModeOffsets , smData
-> mNumLockablePrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mLockablePrimModeOffsets . mX , lockablePrimModeOffsets , 0 *
sizeof ( size_t ) ) ; } static void initComputationFcnPtrs ( NeDaePrivateData
* smData ) { smData -> mSetParametersFcn = dae_cg_setParameters_function ;
smData -> mPAssertFcn = dae_cg_pAssert_method ; smData -> mDerivativeFcn =
dae_cg_deriv_method ; smData -> mNumJacPerturbLoBoundsFcn =
dae_cg_numJacPerturbLoBounds_method ; smData -> mNumJacPerturbHiBoundsFcn =
dae_cg_numJacPerturbHiBounds_method ; smData -> mOutputFcn =
dae_cg_compOutputs_method ; smData -> mModeFcn = dae_cg_mode_method ; smData
-> mZeroCrossingFcn = dae_cg_zeroCrossing_method ; smData -> mProjectionFcn =
dae_cg_project_solve ; smData -> mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve ;
smData -> mCheckFcn = ( smData -> mStateVectorSize == 0 ) ?
dae_cg_check_solve : NULL ; smData -> mAssemblyFcn = dae_cg_assemble_solve ;
smData -> mSetupLoggerFcn = dae_cg_setupLoggerFcn ; smData -> mLogFcn =
dae_cg_recordLog_method ; smData -> mResidualsFcn = NULL ; smData ->
mLinearizeFcn = NULL ; smData -> mGenerateFcn = NULL ; } static void
initLiveLinkToSm ( NeDaePrivateData * smData ) { smData -> mLiveSmLink = NULL
; smData -> mLiveSmLink_destroy = NULL ; smData -> mLiveSmLink_copy = NULL ;
} void hp_v4_a1692be3_1_NeDaePrivateData_create ( NeDaePrivateData * smData )
{ initBasicAttributes ( smData ) ; initStateVector ( smData ) ; initAsserts (
smData ) ; initModeVector ( smData ) ; initZeroCrossings ( smData ) ;
initVariables ( smData ) ; initRuntimeParameters ( smData ) ; initIoInfo (
smData ) ; initInputDerivs ( smData ) ; initDirectFeedthrough ( smData ) ;
initOutputDerivProc ( smData ) ; initMechanismDelegates ( smData ) ;
initComputationFcnPtrs ( smData ) ; initLiveLinkToSm ( smData ) ; }
