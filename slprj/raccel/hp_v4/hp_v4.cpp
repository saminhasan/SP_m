#include "hp_v4.h"
#include "rtsplntypes.h"
#include "rtwtypes.h"
#include "hp_v4_types.h"
#include "hp_v4_private.h"
#include <string.h>
#include "mwmathutil.h"
#include <stddef.h>
#include <stdlib.h>
#include "rt_logging_mmi.h"
#include "hp_v4_capi.h"
#include "hp_v4_dt.h"
extern "C" { extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char *
id , int nargs , ... ) ; extern ssExecutionInfo gblExecutionInfo ;
RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown (
boolean_T extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) {
boolean_T stopRequested = false ; rtExtModeWaitForStartPkt (
gblRTWExtModeInfo , 2 , & stopRequested ) ; } rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_engine_exec.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "24.1 (R2024a) 19-Nov-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const
char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; } }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_engine_exec.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
const int32_T pd1ght0taf = - 1 ; B rtB ; X rtX ; DW rtDW ;
#ifdef __cplusplus
extern "C" {
#endif
static SimStruct model_S ; SimStruct * const rtS = & model_S ;
#ifdef __cplusplus
}
#endif
static void msssidpgtw ( lo2w1vhvek * * pEmxArray , int32_T numDimensions ) ;
static void csrcqh2o3a ( lo2w1vhvek * emxArray , int32_T oldNumel ) ; static
void ersxgrldfg ( lo2w1vhvek * * pEmxArray ) ; real_T look_SplNBinXZcd (
uint32_T numDims , const real_T * u , const rt_LUTSplineWork * const SWork )
{ rt_LUTnWork * const TWork_look = SWork -> m_TWork ; real_T * const fraction
= static_cast < real_T * > ( TWork_look -> m_bpLambda ) ; uint32_T * const
bpIdx = TWork_look -> m_bpIndex ; const uint32_T * const maxIndex =
TWork_look -> m_maxIndex ; uint32_T k ; for ( k = 0U ; k < numDims ; k ++ ) {
const real_T * const bpData = ( ( const real_T * const * ) TWork_look ->
m_bpDataSet ) [ k ] ; bpIdx [ k ] = plook_binx ( u [ k ] , bpData , maxIndex
[ k ] , & fraction [ k ] ) ; } return ( intrp_NSplcd ( numDims , SWork , 2U )
) ; } void rt_Spline2Derivd ( const real_T * x , const real_T * y , uint32_T
n , real_T * u , real_T * y2 ) { real_T p , qn , sig , un ; uint32_T n1 , i ,
k ; n1 = n - 1U ; y2 [ 0U ] = 0.0 ; u [ 0U ] = 0.0 ; for ( i = 1U ; i < n1 ;
i ++ ) { real_T dxm1 = x [ i ] - x [ i - 1U ] ; real_T dxp1 = x [ i + 1U ] -
x [ i ] ; real_T dxpm = dxp1 + dxm1 ; sig = dxm1 / dxpm ; p = ( sig * y2 [ i
- 1U ] ) + 2.0 ; y2 [ i ] = ( sig - 1.0 ) / p ; u [ i ] = ( ( y [ i + 1U ] -
y [ i ] ) / dxp1 ) - ( ( y [ i ] - y [ i - 1U ] ) / dxm1 ) ; u [ i ] = ( ( (
6.0 * u [ i ] ) / dxpm ) - ( sig * u [ i - 1U ] ) ) / p ; } qn = 0.0 ; un =
0.0 ; y2 [ n1 ] = ( un - ( qn * u [ n1 - 1U ] ) ) / ( ( qn * y2 [ n1 - 1U ] )
+ 1.0 ) ; for ( k = n1 ; k > 0U ; k -- ) { y2 [ k - 1U ] = ( y2 [ k - 1U ] *
y2 [ k ] ) + u [ k - 1U ] ; } return ; } real_T intrp_NSplcd ( uint32_T
numDims , const rt_LUTSplineWork * const splWork , uint32_T extrapMethod ) {
uint32_T il ; uint32_T iu , k , i ; real_T h , s , p , smsq , pmsq ; const
rt_LUTnWork * TWork_interp = static_cast < const rt_LUTnWork * > ( splWork ->
m_TWork ) ; const real_T * fraction = static_cast < real_T * > ( TWork_interp
-> m_bpLambda ) ; const real_T * yp = static_cast < real_T * > ( TWork_interp
-> m_tableData ) ; real_T * yyA = static_cast < real_T * > ( splWork -> m_yyA
) ; real_T * yyB = static_cast < real_T * > ( splWork -> m_yyB ) ; real_T *
yy2 = static_cast < real_T * > ( splWork -> m_yy2 ) ; real_T * up =
static_cast < real_T * > ( splWork -> m_up ) ; real_T * y2 = static_cast <
real_T * > ( splWork -> m_y2 ) ; uint8_T * reCalc = splWork -> m_reCalc ;
const real_T * * bpDataSet = ( const real_T * * ) TWork_interp -> m_bpDataSet
; const real_T * xp = bpDataSet [ 0U ] ; real_T * yy = yyA ; uint32_T bufBank
= 0U ; uint32_T len = TWork_interp -> m_maxIndex [ 0U ] + 1U ; if ( * reCalc
== 1 ) { for ( i = 0U ; i < splWork -> m_numYWorkElts [ 0U ] ; i ++ ) {
rt_Spline2Derivd ( xp , yp , len , up , y2 ) ; yp = & yp [ len ] ; y2 = & y2
[ len ] ; } yp = ( const real_T * ) TWork_interp -> m_tableData ; y2 = (
real_T * ) splWork -> m_y2 ; } * reCalc = 0 ; for ( k = 0U ; k < numDims ; k
++ ) { xp = bpDataSet [ k ] ; len = TWork_interp -> m_maxIndex [ k ] + 1U ;
il = TWork_interp -> m_bpIndex [ k ] ; iu = il + 1U ; h = xp [ iu ] - xp [ il
] ; p = fraction [ k ] ; s = 1.0 - p ; pmsq = p * ( ( p * p ) - 1.0 ) ; smsq
= s * ( ( s * s ) - 1.0 ) ; if ( ( p > 1.0 ) && ( extrapMethod == 2U ) ) {
real_T slope ; for ( i = 0U ; i < splWork -> m_numYWorkElts [ k ] ; i ++ ) {
slope = ( yp [ iu ] - yp [ il ] ) + ( ( y2 [ il ] * h * h ) * ( 1.0 / 6.0 ) )
; yy [ i ] = yp [ iu ] + ( slope * ( p - 1.0 ) ) ; yp = & yp [ len ] ; y2 = &
y2 [ len ] ; } } else if ( ( p < 0.0 ) && ( extrapMethod == 2U ) ) { real_T
slope ; for ( i = 0U ; i < splWork -> m_numYWorkElts [ k ] ; i ++ ) { slope =
( yp [ iu ] - yp [ il ] ) - ( ( y2 [ iu ] * h * h ) * ( 1.0 / 6.0 ) ) ; yy [
i ] = yp [ il ] + ( slope * p ) ; yp = & yp [ len ] ; y2 = & y2 [ len ] ; } }
else { for ( i = 0U ; i < splWork -> m_numYWorkElts [ k ] ; i ++ ) { yy [ i ]
= yp [ il ] + p * ( yp [ iu ] - yp [ il ] ) + ( ( smsq * y2 [ il ] + pmsq *
y2 [ iu ] ) * h * h ) * ( 1.0 / 6.0 ) ; yp = & yp [ len ] ; y2 = & y2 [ len ]
; } } yp = yy ; y2 = yy2 ; if ( splWork -> m_numYWorkElts [ k + 1U ] > 0U ) {
uint32_T nextLen = TWork_interp -> m_maxIndex [ k + 1U ] + 1U ; const real_T
* nextXp = bpDataSet [ k + 1U ] ; for ( i = 0U ; i < splWork ->
m_numYWorkElts [ k + 1U ] ; i ++ ) { rt_Spline2Derivd ( nextXp , yp , nextLen
, up , y2 ) ; yp = & yp [ nextLen ] ; y2 = & y2 [ nextLen ] ; } } yp = yy ;
y2 = yy2 ; if ( bufBank == 0U ) { yy = yyA ; bufBank = 1U ; } else { yy = yyB
; bufBank = 0U ; } } return ( yp [ 0U ] ) ; } uint32_T plook_binx ( real_T u
, const real_T bp [ ] , uint32_T maxIndex , real_T * fraction ) { uint32_T
bpIndex ; if ( u <= bp [ 0U ] ) { bpIndex = 0U ; * fraction = ( u - bp [ 0U ]
) / ( bp [ 1U ] - bp [ 0U ] ) ; } else if ( u < bp [ maxIndex ] ) { bpIndex =
binsearch_u32d ( u , bp , maxIndex >> 1U , maxIndex ) ; * fraction = ( u - bp
[ bpIndex ] ) / ( bp [ bpIndex + 1U ] - bp [ bpIndex ] ) ; } else { bpIndex =
maxIndex - 1U ; * fraction = ( u - bp [ maxIndex - 1U ] ) / ( bp [ maxIndex ]
- bp [ maxIndex - 1U ] ) ; } return bpIndex ; } uint32_T binsearch_u32d (
real_T u , const real_T bp [ ] , uint32_T startIndex , uint32_T maxIndex ) {
uint32_T bpIdx ; uint32_T bpIndex ; uint32_T iRght ; bpIdx = startIndex ;
bpIndex = 0U ; iRght = maxIndex ; while ( iRght - bpIndex > 1U ) { if ( u <
bp [ bpIdx ] ) { iRght = bpIdx ; } else { bpIndex = bpIdx ; } bpIdx = ( iRght
+ bpIndex ) >> 1U ; } return bpIndex ; } static void msssidpgtw ( lo2w1vhvek
* * pEmxArray , int32_T numDimensions ) { lo2w1vhvek * emxArray ; int32_T i ;
* pEmxArray = static_cast < lo2w1vhvek * > ( malloc ( sizeof ( lo2w1vhvek ) )
) ; emxArray = * pEmxArray ; emxArray -> data = static_cast < char_T * > (
NULL ) ; emxArray -> numDimensions = numDimensions ; emxArray -> size =
static_cast < int32_T * > ( malloc ( sizeof ( int32_T ) * static_cast <
uint32_T > ( numDimensions ) ) ) ; emxArray -> allocatedSize = 0 ; emxArray
-> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray
-> size [ i ] = 0 ; } } static void csrcqh2o3a ( lo2w1vhvek * emxArray ,
int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if (
oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray
-> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if (
newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if (
i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i =
MAX_int32_T ; } else { i <<= 1 ; } } newData = malloc ( static_cast <
uint32_T > ( i ) * sizeof ( char_T ) ) ; if ( emxArray -> data != NULL ) {
memcpy ( newData , emxArray -> data , sizeof ( char_T ) * static_cast <
uint32_T > ( oldNumel ) ) ; if ( emxArray -> canFreeData ) { free ( emxArray
-> data ) ; } } emxArray -> data = static_cast < char_T * > ( newData ) ;
emxArray -> allocatedSize = i ; emxArray -> canFreeData = true ; } } static
void ersxgrldfg ( lo2w1vhvek * * pEmxArray ) { if ( * pEmxArray !=
static_cast < lo2w1vhvek * > ( NULL ) ) { if ( ( ( * pEmxArray ) -> data !=
static_cast < char_T * > ( NULL ) ) && ( * pEmxArray ) -> canFreeData ) {
free ( ( * pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free
( * pEmxArray ) ; * pEmxArray = static_cast < lo2w1vhvek * > ( NULL ) ; } }
extern "C" void MdlInitialize ( void ) { rtX . ac4vk3qjis = 0.0 ; rtX .
p1ph2wabhc = 0.0 ; rtX . gvc3a5sbir = 0.0 ; rtX . dphv0wm5ij = 0.0 ; rtX .
i4ge0rdrtz = 0.0 ; rtX . ds23b5mlzt = 0.0 ; rtDW . o5uvukdfkz = false ; rtDW
. m2oxmlar1f = pd1ght0taf ; } extern "C" void MdlStart ( void ) { CXPtMax *
_rtXPerturbMax ; CXPtMin * _rtXPerturbMin ; NeModelParameters modelParameters
; NeModelParameters modelParameters_e ; NeModelParameters modelParameters_p ;
NeslSimulationData * simulationData ; NeslSimulator * tmp ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_i
; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_i ; char * msg_p ; real_T tmp_m [ 24 ] ; real_T time ; real_T tmp_e ;
int32_T tmp_i ; int_T tmp_g [ 7 ] ; boolean_T tmp_p ; boolean_T val ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Mux" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"Mux" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "hp_v4/Motor Data" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Mux" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 24 } ; sigDims . nDims
= 1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. jchrmxk4qx . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"631c6770-0577-4ab2-872b-f16906900333" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . jchrmxk4qx . AQHandles , hDT , & srcInfo ) ; if ( rtDW . jchrmxk4qx .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . jchrmxk4qx . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
jchrmxk4qx . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . jchrmxk4qx .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . jchrmxk4qx . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . jchrmxk4qx . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . jchrmxk4qx . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"simout" ) ; sdiRegisterWksVariable ( rtDW . jchrmxk4qx . AQHandles , varName
, "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Platform pose logger" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Platform pose logger" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "hp_v4/Platform pose" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Platform pose logger" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 6 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. i4o5kapmqk . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"2689732f-56ae-474d-8371-b555c2fb50cb" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . i4o5kapmqk . AQHandles , hDT , & srcInfo ) ; if ( rtDW . i4o5kapmqk .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . i4o5kapmqk . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
i4o5kapmqk . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . i4o5kapmqk .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . i4o5kapmqk . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . i4o5kapmqk . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . i4o5kapmqk . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"pose_simscape" ) ; sdiRegisterWksVariable ( rtDW . i4o5kapmqk . AQHandles ,
varName , "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Mux" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"Mux" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"hp_v4/Coupler and platform/Subsystem/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Mux" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 24 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions =
sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ihlaycufuy .
AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo .
mmi . InstanceMap . fullPath , "7b3b42bb-c147-4d22-96d4-9eda35a8cc9a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "1" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . ihlaycufuy . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . ihlaycufuy . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . ihlaycufuy . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ihlaycufuy .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ihlaycufuy . AQHandles ,
ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
ihlaycufuy . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ihlaycufuy . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ihlaycufuy . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"lj" ) ; sdiRegisterWksVariable ( rtDW . ihlaycufuy . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Mux" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"Mux" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"hp_v4/Coupler and platform/Subsystem1/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Mux" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 24 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions =
sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ihlaycufuy3 .
AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo .
mmi . InstanceMap . fullPath , "abc56f8e-3a4a-4bd6-a55b-aa4b17bcd087" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "1" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . ihlaycufuy3 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . ihlaycufuy3 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . ihlaycufuy3 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . ihlaycufuy3 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ihlaycufuy3 . AQHandles ,
ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
ihlaycufuy3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
ihlaycufuy3 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ihlaycufuy3 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"hj" ) ; sdiRegisterWksVariable ( rtDW . ihlaycufuy3 . AQHandles , varName ,
"timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } { FWksInfo *
fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof (
FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "motorData" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 6 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . MotorAngles_Data0 ; fromwksInfo -> nDataPoints =
40001 ; fromwksInfo -> time = ( double * ) rtP . MotorAngles_Time0 ; rtDW .
cvejppxdpv . TimePtr = fromwksInfo -> time ; rtDW . cvejppxdpv . DataPtr =
fromwksInfo -> data ; rtDW . cvejppxdpv . RSimInfoPtr = fromwksInfo ; } rtDW
. fs5pe54qqo . PrevIndex = 0 ; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork
* ) & rtDW . bqog2u2pjc [ 0 ] ; void * * bpDataSet = static_cast < void * * >
( & rtDW . inkr1e5adu ) ; TWork_start -> m_dimSizes = static_cast < const
uint32_T * > ( & rtP . uDLookupTable_dimSizes ) ; TWork_start -> m_tableData
= ( void * ) rtP . uDLookupTable_tableData ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & rtDW . hgx5cayjie ; TWork_start ->
m_bpLambda = & rtDW . fu0do4t3as ; TWork_start -> m_maxIndex = static_cast <
const uint32_T * > ( & rtP . uDLookupTable_maxIndex ) ; bpDataSet [ 0 ] = (
void * ) rtP . uDLookupTable_bp01Data ; } { rt_LUTSplineWork * rt_SplWk = (
rt_LUTSplineWork * ) & rtDW . n0ljlet1z3 [ 0 ] ; rt_SplWk -> m_TWork = (
rt_LUTnWork * ) & rtDW . bqog2u2pjc [ 0 ] ; rt_SplWk -> m_yyA = & rtDW .
majfgt41ui ; rt_SplWk -> m_yyB = & rtDW . pz5d0moowf ; rt_SplWk -> m_yy2 = &
rtDW . obcozvopvv ; rt_SplWk -> m_up = & rtDW . ikqokrktqt [ 0 ] ; rt_SplWk
-> m_y2 = & rtDW . p3apf3xypr [ 0 ] ; rt_SplWk -> m_numYWorkElts = rtP .
uDLookupTable_numYWorkElts ; rt_SplWk -> m_reCalc = & rtDW . cssxtmycgo ; *
rt_SplWk -> m_reCalc = 1 ; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * )
& rtDW . na3foxxgyq [ 0 ] ; void * * bpDataSet = static_cast < void * * > ( &
rtDW . hcyxs4w4z1 ) ; TWork_start -> m_dimSizes = static_cast < const
uint32_T * > ( & rtP . uDLookupTable1_dimSizes ) ; TWork_start -> m_tableData
= ( void * ) rtP . uDLookupTable1_tableData ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & rtDW . k4hpgnvelg ; TWork_start ->
m_bpLambda = & rtDW . h1tshsgvlr ; TWork_start -> m_maxIndex = static_cast <
const uint32_T * > ( & rtP . uDLookupTable1_maxIndex ) ; bpDataSet [ 0 ] = (
void * ) rtP . uDLookupTable1_bp01Data ; } { rt_LUTSplineWork * rt_SplWk = (
rt_LUTSplineWork * ) & rtDW . encdw23bwv [ 0 ] ; rt_SplWk -> m_TWork = (
rt_LUTnWork * ) & rtDW . na3foxxgyq [ 0 ] ; rt_SplWk -> m_yyA = & rtDW .
gz313zzwv0 ; rt_SplWk -> m_yyB = & rtDW . exnfkomltd ; rt_SplWk -> m_yy2 = &
rtDW . ba1o4znci0 ; rt_SplWk -> m_up = & rtDW . ksxmibc2fy [ 0 ] ; rt_SplWk
-> m_y2 = & rtDW . mc1j2ro0sq [ 0 ] ; rt_SplWk -> m_numYWorkElts = rtP .
uDLookupTable1_numYWorkElts ; rt_SplWk -> m_reCalc = & rtDW . hesh10yaxb ; *
rt_SplWk -> m_reCalc = 1 ; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * )
& rtDW . cr3v5nlzet [ 0 ] ; void * * bpDataSet = static_cast < void * * > ( &
rtDW . fbacpiic1n ) ; TWork_start -> m_dimSizes = static_cast < const
uint32_T * > ( & rtP . uDLookupTable2_dimSizes ) ; TWork_start -> m_tableData
= ( void * ) rtP . uDLookupTable2_tableData ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & rtDW . odyd01dqxa ; TWork_start ->
m_bpLambda = & rtDW . ixdsgzcw4h ; TWork_start -> m_maxIndex = static_cast <
const uint32_T * > ( & rtP . uDLookupTable2_maxIndex ) ; bpDataSet [ 0 ] = (
void * ) rtP . uDLookupTable2_bp01Data ; } { rt_LUTSplineWork * rt_SplWk = (
rt_LUTSplineWork * ) & rtDW . dk0oub0bmr [ 0 ] ; rt_SplWk -> m_TWork = (
rt_LUTnWork * ) & rtDW . cr3v5nlzet [ 0 ] ; rt_SplWk -> m_yyA = & rtDW .
lx0xtcqd2q ; rt_SplWk -> m_yyB = & rtDW . ipeo2lwiiv ; rt_SplWk -> m_yy2 = &
rtDW . o3qizeoydg ; rt_SplWk -> m_up = & rtDW . mwdjyjhmsi [ 0 ] ; rt_SplWk
-> m_y2 = & rtDW . bdtltpway1 [ 0 ] ; rt_SplWk -> m_numYWorkElts = rtP .
uDLookupTable2_numYWorkElts ; rt_SplWk -> m_reCalc = & rtDW . pio0zawnt1 ; *
rt_SplWk -> m_reCalc = 1 ; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * )
& rtDW . fpf3xnlo1i [ 0 ] ; void * * bpDataSet = static_cast < void * * > ( &
rtDW . ble400lud2 ) ; TWork_start -> m_dimSizes = static_cast < const
uint32_T * > ( & rtP . uDLookupTable3_dimSizes ) ; TWork_start -> m_tableData
= ( void * ) rtP . uDLookupTable3_tableData ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & rtDW . frc3nwwngy ; TWork_start ->
m_bpLambda = & rtDW . jjqxg4jfpn ; TWork_start -> m_maxIndex = static_cast <
const uint32_T * > ( & rtP . uDLookupTable3_maxIndex ) ; bpDataSet [ 0 ] = (
void * ) rtP . uDLookupTable3_bp01Data ; } { rt_LUTSplineWork * rt_SplWk = (
rt_LUTSplineWork * ) & rtDW . cqsk2n0hyd [ 0 ] ; rt_SplWk -> m_TWork = (
rt_LUTnWork * ) & rtDW . fpf3xnlo1i [ 0 ] ; rt_SplWk -> m_yyA = & rtDW .
l1qqxacxgl ; rt_SplWk -> m_yyB = & rtDW . jzblxaem0z ; rt_SplWk -> m_yy2 = &
rtDW . e2rz24nt3a ; rt_SplWk -> m_up = & rtDW . m0aqu4oy1c [ 0 ] ; rt_SplWk
-> m_y2 = & rtDW . fy35y14duc [ 0 ] ; rt_SplWk -> m_numYWorkElts = rtP .
uDLookupTable3_numYWorkElts ; rt_SplWk -> m_reCalc = & rtDW . nnel3hccnf ; *
rt_SplWk -> m_reCalc = 1 ; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * )
& rtDW . dw2xvocr35 [ 0 ] ; void * * bpDataSet = static_cast < void * * > ( &
rtDW . fksomzwttx ) ; TWork_start -> m_dimSizes = static_cast < const
uint32_T * > ( & rtP . uDLookupTable4_dimSizes ) ; TWork_start -> m_tableData
= ( void * ) rtP . uDLookupTable4_tableData ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & rtDW . p4lw0xvjkj ; TWork_start ->
m_bpLambda = & rtDW . dpggk1ar0d ; TWork_start -> m_maxIndex = static_cast <
const uint32_T * > ( & rtP . uDLookupTable4_maxIndex ) ; bpDataSet [ 0 ] = (
void * ) rtP . uDLookupTable4_bp01Data ; } { rt_LUTSplineWork * rt_SplWk = (
rt_LUTSplineWork * ) & rtDW . atdas2blb1 [ 0 ] ; rt_SplWk -> m_TWork = (
rt_LUTnWork * ) & rtDW . dw2xvocr35 [ 0 ] ; rt_SplWk -> m_yyA = & rtDW .
dw2eh4vk53 ; rt_SplWk -> m_yyB = & rtDW . gvnceosiwa ; rt_SplWk -> m_yy2 = &
rtDW . mlyws0ulw1 ; rt_SplWk -> m_up = & rtDW . aapx2mrkrz [ 0 ] ; rt_SplWk
-> m_y2 = & rtDW . opiw53bhx4 [ 0 ] ; rt_SplWk -> m_numYWorkElts = rtP .
uDLookupTable4_numYWorkElts ; rt_SplWk -> m_reCalc = & rtDW . eq31iilrw4 ; *
rt_SplWk -> m_reCalc = 1 ; } { rt_LUTnWork * TWork_start = ( rt_LUTnWork * )
& rtDW . p0yqk3t1ml [ 0 ] ; void * * bpDataSet = static_cast < void * * > ( &
rtDW . ivgyezlk4b ) ; TWork_start -> m_dimSizes = static_cast < const
uint32_T * > ( & rtP . uDLookupTable5_dimSizes ) ; TWork_start -> m_tableData
= ( void * ) rtP . uDLookupTable5_tableData ; TWork_start -> m_bpDataSet =
bpDataSet ; TWork_start -> m_bpIndex = & rtDW . mjohstu43y ; TWork_start ->
m_bpLambda = & rtDW . o20gezqes2 ; TWork_start -> m_maxIndex = static_cast <
const uint32_T * > ( & rtP . uDLookupTable5_maxIndex ) ; bpDataSet [ 0 ] = (
void * ) rtP . uDLookupTable5_bp01Data ; } { rt_LUTSplineWork * rt_SplWk = (
rt_LUTSplineWork * ) & rtDW . fk0tbksf1y [ 0 ] ; rt_SplWk -> m_TWork = (
rt_LUTnWork * ) & rtDW . p0yqk3t1ml [ 0 ] ; rt_SplWk -> m_yyA = & rtDW .
ifwz1fktid ; rt_SplWk -> m_yyB = & rtDW . ejgjdw1cxq ; rt_SplWk -> m_yy2 = &
rtDW . gemftv1sxb ; rt_SplWk -> m_up = & rtDW . fuya4qod4r [ 0 ] ; rt_SplWk
-> m_y2 = & rtDW . f4r5toieaz [ 0 ] ; rt_SplWk -> m_numYWorkElts = rtP .
uDLookupTable5_numYWorkElts ; rt_SplWk -> m_reCalc = & rtDW . ng00scgd4k ; *
rt_SplWk -> m_reCalc = 1 ; } tmp = nesl_lease_simulator (
"hp_v4/Base/Solver Configuration_1" , 0 , 0 ) ; rtDW . fzn2dadk4e = ( void *
) tmp ; tmp_p = pointer_is_null ( rtDW . fzn2dadk4e ) ; if ( tmp_p ) {
hp_v4_a1692be3_1_gateway ( ) ; tmp = nesl_lease_simulator (
"hp_v4/Base/Solver Configuration_1" , 0 , 0 ) ; rtDW . fzn2dadk4e = ( void *
) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"hp_v4/Base/Solver Configuration_100" , ( void * * ) ( & rtDW . fzn2dadk4e )
, 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . gj141fpmf0 = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
iaunsf4jhe = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverAbsTol = 0.0001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters . mStartTime
= 0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_OFF ; modelParameters .
mRTWModifiedTimeStamp = 6.43639547E+8 ; modelParameters . mZcDisabled = false
; modelParameters . mUseModelRefSolver = false ; modelParameters .
mTargetFPGAHIL = false ; tmp_e = 0.001 ; modelParameters . mSolverTolerance =
tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize = tmp_e ; tmp_p = true
; modelParameters . mVariableStepSolver = tmp_p ; tmp_p = false ;
modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp_p ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = static_cast < NeuDiagnosticManager * > ( rtDW .
iaunsf4jhe ) ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( static_cast <
NeslSimulator * > ( rtDW . fzn2dadk4e ) , & modelParameters ,
diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData =
static_cast < NeslSimulationData * > ( rtDW . gj141fpmf0 ) ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 61 ;
simulationData -> mData -> mContStates . mX = & rtX . faps05mlpl [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . luyus4t4io ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
lh1550hwj0 ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mHadEvents = false ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp_p ; tmp_p = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp_p ; tmp_p =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp_p ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp_p =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . ovgjo1k5mz [ 0 ] ; tmp_m [ 1 ] = rtB . ovgjo1k5mz [ 1 ] ;
tmp_m [ 2 ] = rtB . ovgjo1k5mz [ 2 ] ; tmp_m [ 3 ] = rtB . ovgjo1k5mz [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . mtn15vznzx [ 0 ] ; tmp_m [ 5 ] = rtB .
mtn15vznzx [ 1 ] ; tmp_m [ 6 ] = rtB . mtn15vznzx [ 2 ] ; tmp_m [ 7 ] = rtB .
mtn15vznzx [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . pkw51cykqx [ 0 ] ;
tmp_m [ 9 ] = rtB . pkw51cykqx [ 1 ] ; tmp_m [ 10 ] = rtB . pkw51cykqx [ 2 ]
; tmp_m [ 11 ] = rtB . pkw51cykqx [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . nyu1nqmmee [ 0 ] ; tmp_m [ 13 ] = rtB . nyu1nqmmee [ 1 ] ; tmp_m [ 14 ]
= rtB . nyu1nqmmee [ 2 ] ; tmp_m [ 15 ] = rtB . nyu1nqmmee [ 3 ] ; tmp_g [ 4
] = 16 ; tmp_m [ 16 ] = rtB . hjqo1tqvvs [ 0 ] ; tmp_m [ 17 ] = rtB .
hjqo1tqvvs [ 1 ] ; tmp_m [ 18 ] = rtB . hjqo1tqvvs [ 2 ] ; tmp_m [ 19 ] = rtB
. hjqo1tqvvs [ 3 ] ; tmp_g [ 5 ] = 20 ; tmp_m [ 20 ] = rtB . pj4l423n1b [ 0 ]
; tmp_m [ 21 ] = rtB . pj4l423n1b [ 1 ] ; tmp_m [ 22 ] = rtB . pj4l423n1b [ 2
] ; tmp_m [ 23 ] = rtB . pj4l423n1b [ 3 ] ; tmp_g [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 61 ; simulationData -> mData ->
mNumjacDxLo . mX = & _rtXPerturbMin -> faps05mlpl [ 0 ] ; simulationData ->
mData -> mNumjacDxHi . mN = 61 ; simulationData -> mData -> mNumjacDxHi . mX
= & _rtXPerturbMax -> faps05mlpl [ 0 ] ; diagnosticManager = static_cast <
NeuDiagnosticManager * > ( rtDW . iaunsf4jhe ) ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( static_cast < NeslSimulator * > ( rtDW . fzn2dadk4e ) ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"hp_v4/Base/Solver Configuration_1" , 1 , 0 ) ; rtDW . kks2bzqouh = ( void *
) tmp ; tmp_p = pointer_is_null ( rtDW . kks2bzqouh ) ; if ( tmp_p ) {
hp_v4_a1692be3_1_gateway ( ) ; tmp = nesl_lease_simulator (
"hp_v4/Base/Solver Configuration_1" , 1 , 0 ) ; rtDW . kks2bzqouh = ( void *
) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"hp_v4/Base/Solver Configuration_110" , ( void * * ) ( & rtDW . kks2bzqouh )
, 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . ilo32t4j3n = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
ioe5pmekjs = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverAbsTol = 0.0001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_p .
mStartTime = 0.0 ; modelParameters_p . mLoadInitialState = false ;
modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_OFF
; modelParameters_p . mRTWModifiedTimeStamp = 6.43639547E+8 ;
modelParameters_p . mZcDisabled = false ; modelParameters_p .
mUseModelRefSolver = false ; modelParameters_p . mTargetFPGAHIL = false ;
tmp_e = 0.001 ; modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = static_cast <
NeuDiagnosticManager * > ( rtDW . ioe5pmekjs ) ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( static_cast < NeslSimulator * > ( rtDW .
kks2bzqouh ) , & modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 )
{ tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) {
msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS ,
msg_e ) ; } } tmp = nesl_lease_simulator (
"hp_v4/Base/Solver Configuration_1" , 1 , 1 ) ; rtDW . dywywnpwvp = ( void *
) tmp ; tmp_p = pointer_is_null ( rtDW . dywywnpwvp ) ; if ( tmp_p ) {
hp_v4_a1692be3_1_gateway ( ) ; tmp = nesl_lease_simulator (
"hp_v4/Base/Solver Configuration_1" , 1 , 1 ) ; rtDW . dywywnpwvp = ( void *
) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"hp_v4/Base/Solver Configuration_111" , ( void * * ) ( & rtDW . dywywnpwvp )
, 0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . dxe20odrog = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
eunmtunrhm = ( void * ) diagnosticManager ; modelParameters_e . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_e . mSolverAbsTol = 0.0001 ;
modelParameters_e . mSolverRelTol = 0.001 ; modelParameters_e .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_e .
mStartTime = 0.0 ; modelParameters_e . mLoadInitialState = false ;
modelParameters_e . mUseSimState = false ; modelParameters_e .
mLinTrimCompile = false ; modelParameters_e . mLoggingMode = SSC_LOGGING_OFF
; modelParameters_e . mRTWModifiedTimeStamp = 6.43639547E+8 ;
modelParameters_e . mZcDisabled = false ; modelParameters_e .
mUseModelRefSolver = false ; modelParameters_e . mTargetFPGAHIL = false ;
tmp_e = 0.001 ; modelParameters_e . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_e . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_e
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_e .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_e . mLoadInitialState = val ;
modelParameters_e . mZcDisabled = false ; diagnosticManager = static_cast <
NeuDiagnosticManager * > ( rtDW . eunmtunrhm ) ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( static_cast < NeslSimulator * > ( rtDW .
dywywnpwvp ) , & modelParameters_e , diagnosticManager ) ; if ( tmp_i != 0 )
{ tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) {
msg_i = rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS ,
msg_i ) ; } } MdlInitialize ( ) ; } extern "C" void MdlOutputs ( int_T tid )
{ real_T gqqojra0tq ; real_T p3jrwby4hc ; real_T gdc00yjnuf ; real_T
epbaboo5u4 ; real_T c4y5sjr2a3 ; real_T nsyvsrs3zs [ 6 ] ; NeslSimulationData
* simulationData ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_p ; lo2w1vhvek * str ; lo2w1vhvek * varargin_1 ; real_T tmp_i [ 85 ] ;
real_T tmp_p [ 85 ] ; real_T nzwfwttlnh [ 24 ] ; real_T awlcsxmnwl [ 12 ] ;
real_T mjhmvpefou ; real_T nDots ; real_T time ; real_T time_e ; real_T
time_g ; real_T time_i ; real_T time_m ; real_T time_p ; real_T tmp_g ;
int32_T b_outsize_idx_1 ; int32_T nbytes ; int32_T outsize_idx_1 ; int32_T
tmp_j ; int32_T validatedHoleFilling_idx_0 ; int_T tmp_e [ 8 ] ; int_T tmp_m
[ 8 ] ; int_T tmp [ 7 ] ; boolean_T first_output ; { real_T * pDataValues = (
real_T * ) rtDW . cvejppxdpv . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . cvejppxdpv . TimePtr ; int_T currTimeIndex = rtDW . fs5pe54qqo .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . cvejppxdpv . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . fs5pe54qqo . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & nsyvsrs3zs [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & nsyvsrs3zs [ 0 ]
) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ;
} } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ;
real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for
( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 =
pDataValues [ TimeIndex + 1 ] ; ( & nsyvsrs3zs [ 0 ] ) [ elIdx ] = ( real_T )
rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } }
mjhmvpefou = ssGetT ( rtS ) ; rtB . hhzq3ogi50 = look_SplNBinXZcd ( 1U , &
mjhmvpefou , ( rt_LUTSplineWork * ) & rtDW . n0ljlet1z3 [ 0 ] ) ; gqqojra0tq
= look_SplNBinXZcd ( 1U , & mjhmvpefou , ( rt_LUTSplineWork * ) & rtDW .
encdw23bwv [ 0 ] ) ; p3jrwby4hc = look_SplNBinXZcd ( 1U , & mjhmvpefou , (
rt_LUTSplineWork * ) & rtDW . dk0oub0bmr [ 0 ] ) ; gdc00yjnuf =
look_SplNBinXZcd ( 1U , & mjhmvpefou , ( rt_LUTSplineWork * ) & rtDW .
cqsk2n0hyd [ 0 ] ) ; epbaboo5u4 = look_SplNBinXZcd ( 1U , & mjhmvpefou , (
rt_LUTSplineWork * ) & rtDW . atdas2blb1 [ 0 ] ) ; c4y5sjr2a3 =
look_SplNBinXZcd ( 1U , & mjhmvpefou , ( rt_LUTSplineWork * ) & rtDW .
fk0tbksf1y [ 0 ] ) ; rtB . gn1n1fxih5 [ 0 ] = nsyvsrs3zs [ 0 ] - rtB .
hhzq3ogi50 ; rtB . gn1n1fxih5 [ 1 ] = nsyvsrs3zs [ 1 ] - gqqojra0tq ; rtB .
gn1n1fxih5 [ 2 ] = nsyvsrs3zs [ 2 ] - p3jrwby4hc ; rtB . gn1n1fxih5 [ 3 ] =
nsyvsrs3zs [ 3 ] - gdc00yjnuf ; rtB . gn1n1fxih5 [ 4 ] = nsyvsrs3zs [ 4 ] -
epbaboo5u4 ; rtB . gn1n1fxih5 [ 5 ] = nsyvsrs3zs [ 5 ] - c4y5sjr2a3 ;
simulationData = static_cast < NeslSimulationData * > ( rtDW . gj141fpmf0 ) ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 61 ; simulationData -> mData -> mContStates . mX = & rtX .
faps05mlpl [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . luyus4t4io ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . lh1550hwj0 ; first_output = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = first_output ; simulationData -> mData ->
mHadEvents = false ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
first_output = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp [ 0 ] = 0 ;
nzwfwttlnh [ 0 ] = rtB . ovgjo1k5mz [ 0 ] ; nzwfwttlnh [ 1 ] = rtB .
ovgjo1k5mz [ 1 ] ; nzwfwttlnh [ 2 ] = rtB . ovgjo1k5mz [ 2 ] ; nzwfwttlnh [ 3
] = rtB . ovgjo1k5mz [ 3 ] ; tmp [ 1 ] = 4 ; nzwfwttlnh [ 4 ] = rtB .
mtn15vznzx [ 0 ] ; nzwfwttlnh [ 5 ] = rtB . mtn15vznzx [ 1 ] ; nzwfwttlnh [ 6
] = rtB . mtn15vznzx [ 2 ] ; nzwfwttlnh [ 7 ] = rtB . mtn15vznzx [ 3 ] ; tmp
[ 2 ] = 8 ; nzwfwttlnh [ 8 ] = rtB . pkw51cykqx [ 0 ] ; nzwfwttlnh [ 9 ] =
rtB . pkw51cykqx [ 1 ] ; nzwfwttlnh [ 10 ] = rtB . pkw51cykqx [ 2 ] ;
nzwfwttlnh [ 11 ] = rtB . pkw51cykqx [ 3 ] ; tmp [ 3 ] = 12 ; nzwfwttlnh [ 12
] = rtB . nyu1nqmmee [ 0 ] ; nzwfwttlnh [ 13 ] = rtB . nyu1nqmmee [ 1 ] ;
nzwfwttlnh [ 14 ] = rtB . nyu1nqmmee [ 2 ] ; nzwfwttlnh [ 15 ] = rtB .
nyu1nqmmee [ 3 ] ; tmp [ 4 ] = 16 ; nzwfwttlnh [ 16 ] = rtB . hjqo1tqvvs [ 0
] ; nzwfwttlnh [ 17 ] = rtB . hjqo1tqvvs [ 1 ] ; nzwfwttlnh [ 18 ] = rtB .
hjqo1tqvvs [ 2 ] ; nzwfwttlnh [ 19 ] = rtB . hjqo1tqvvs [ 3 ] ; tmp [ 5 ] =
20 ; nzwfwttlnh [ 20 ] = rtB . pj4l423n1b [ 0 ] ; nzwfwttlnh [ 21 ] = rtB .
pj4l423n1b [ 1 ] ; nzwfwttlnh [ 22 ] = rtB . pj4l423n1b [ 2 ] ; nzwfwttlnh [
23 ] = rtB . pj4l423n1b [ 3 ] ; tmp [ 6 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
nzwfwttlnh [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp [ 0 ] ; simulationData
-> mData -> mOutputs . mN = 61 ; simulationData -> mData -> mOutputs . mX = &
rtB . ba3ozliipq [ 0 ] ; simulationData -> mData -> mTolerances . mN = 0 ;
simulationData -> mData -> mTolerances . mX = NULL ; simulationData -> mData
-> mCstateHasChanged = false ; simulationData -> mData -> mDstateHasChanged =
false ; time_p = ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ;
simulationData -> mData -> mHadEvents = false ; diagnosticManager =
static_cast < NeuDiagnosticManager * > ( rtDW . iaunsf4jhe ) ; diagnosticTree
= neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; nbytes =
ne_simulator_method ( static_cast < NeslSimulator * > ( rtDW . fzn2dadk4e ) ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( nbytes != 0 )
{ first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData =
static_cast < NeslSimulationData * > ( rtDW . ilo32t4j3n ) ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . pbzaaqmd2w ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . kl2nhb3awd ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mHadEvents = false ; simulationData
-> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = first_output ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . ovgjo1k5mz [ 0 ] ; tmp_p [ 1 ] = rtB . ovgjo1k5mz [ 1 ] ;
tmp_p [ 2 ] = rtB . ovgjo1k5mz [ 2 ] ; tmp_p [ 3 ] = rtB . ovgjo1k5mz [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mtn15vznzx [ 0 ] ; tmp_p [ 5 ] = rtB .
mtn15vznzx [ 1 ] ; tmp_p [ 6 ] = rtB . mtn15vznzx [ 2 ] ; tmp_p [ 7 ] = rtB .
mtn15vznzx [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . pkw51cykqx [ 0 ] ;
tmp_p [ 9 ] = rtB . pkw51cykqx [ 1 ] ; tmp_p [ 10 ] = rtB . pkw51cykqx [ 2 ]
; tmp_p [ 11 ] = rtB . pkw51cykqx [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . nyu1nqmmee [ 0 ] ; tmp_p [ 13 ] = rtB . nyu1nqmmee [ 1 ] ; tmp_p [ 14 ]
= rtB . nyu1nqmmee [ 2 ] ; tmp_p [ 15 ] = rtB . nyu1nqmmee [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . hjqo1tqvvs [ 0 ] ; tmp_p [ 17 ] = rtB .
hjqo1tqvvs [ 1 ] ; tmp_p [ 18 ] = rtB . hjqo1tqvvs [ 2 ] ; tmp_p [ 19 ] = rtB
. hjqo1tqvvs [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . pj4l423n1b [ 0 ]
; tmp_p [ 21 ] = rtB . pj4l423n1b [ 1 ] ; tmp_p [ 22 ] = rtB . pj4l423n1b [ 2
] ; tmp_p [ 23 ] = rtB . pj4l423n1b [ 3 ] ; tmp_e [ 6 ] = 24 ; memcpy ( &
tmp_p [ 24 ] , & rtB . ba3ozliipq [ 0 ] , 61U * sizeof ( real_T ) ) ; tmp_e [
7 ] = 85 ; simulationData -> mData -> mInputValues . mN = 85 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mOutputs . mN = 115 ; simulationData
-> mData -> mOutputs . mX = & rtB . h4hnjuf4ok [ 0 ] ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ; simulationData
-> mData -> mDstateHasChanged = false ; time_i = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulationData -> mData -> mHadEvents =
false ; diagnosticManager = static_cast < NeuDiagnosticManager * > ( rtDW .
ioe5pmekjs ) ; diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; nbytes = ne_simulator_method ( static_cast <
NeslSimulator * > ( rtDW . kks2bzqouh ) , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( nbytes != 0 ) { first_output =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) {
msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS ,
msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtB . gpwpvx52su = rtB . hhzq3ogi50 - rtB . h4hnjuf4ok [ 48 ] ; rtB .
dp5bxc123k = rtP . P * rtB . gpwpvx52su ; rtB . dscxlqeplg = 0.0 ; rtB .
dscxlqeplg += rtP . Differentiator_C * rtX . ac4vk3qjis ; rtB . dscxlqeplg +=
rtP . Differentiator_D * rtB . gpwpvx52su ; rtB . i5bhabdhl2 = rtB .
dp5bxc123k + rtB . dscxlqeplg ; if ( rtDW . hdt2cnju50 == 0.0 ) { rtDW .
hdt2cnju50 = 1.0 ; rtX . ptpwazju4o [ 0 ] = rtB . i5bhabdhl2 ; rtX .
ptpwazju4o [ 1 ] = 0.0 ; } rtB . ovgjo1k5mz [ 0 ] = rtX . ptpwazju4o [ 0 ] ;
rtB . ovgjo1k5mz [ 1 ] = rtX . ptpwazju4o [ 1 ] ; rtB . ovgjo1k5mz [ 2 ] = (
( rtB . i5bhabdhl2 - rtX . ptpwazju4o [ 0 ] ) * 1000.0 - 2.0 * rtX .
ptpwazju4o [ 1 ] ) * 1000.0 ; rtB . ovgjo1k5mz [ 3 ] = 0.0 ; rtB . j3zzcipv1r
= gqqojra0tq - rtB . h4hnjuf4ok [ 50 ] ; rtB . fayoqg13fo = rtP . P * rtB .
j3zzcipv1r ; rtB . adsurmfp2a = 0.0 ; rtB . adsurmfp2a += rtP .
Differentiator_C_nlo0afvsm0 * rtX . p1ph2wabhc ; rtB . adsurmfp2a += rtP .
Differentiator_D_ilujgvwoqy * rtB . j3zzcipv1r ; rtB . pubnjkrbwr = rtB .
fayoqg13fo + rtB . adsurmfp2a ; if ( rtDW . denmfeoj33 == 0.0 ) { rtDW .
denmfeoj33 = 1.0 ; rtX . lfij1kvlny [ 0 ] = rtB . pubnjkrbwr ; rtX .
lfij1kvlny [ 1 ] = 0.0 ; } rtB . mtn15vznzx [ 0 ] = rtX . lfij1kvlny [ 0 ] ;
rtB . mtn15vznzx [ 1 ] = rtX . lfij1kvlny [ 1 ] ; rtB . mtn15vznzx [ 2 ] = (
( rtB . pubnjkrbwr - rtX . lfij1kvlny [ 0 ] ) * 1000.0 - 2.0 * rtX .
lfij1kvlny [ 1 ] ) * 1000.0 ; rtB . mtn15vznzx [ 3 ] = 0.0 ; rtB . fihfkiqrmx
= p3jrwby4hc - rtB . h4hnjuf4ok [ 52 ] ; rtB . l1jg00snd3 = rtP . P * rtB .
fihfkiqrmx ; rtB . buortkjwm2 = 0.0 ; rtB . buortkjwm2 += rtP .
Differentiator_C_dih140nhs2 * rtX . gvc3a5sbir ; rtB . buortkjwm2 += rtP .
Differentiator_D_akfaxsdhsp * rtB . fihfkiqrmx ; rtB . b30ue11hhm = rtB .
l1jg00snd3 + rtB . buortkjwm2 ; if ( rtDW . oiygwdxnsf == 0.0 ) { rtDW .
oiygwdxnsf = 1.0 ; rtX . nn31jtzhnb [ 0 ] = rtB . b30ue11hhm ; rtX .
nn31jtzhnb [ 1 ] = 0.0 ; } rtB . pkw51cykqx [ 0 ] = rtX . nn31jtzhnb [ 0 ] ;
rtB . pkw51cykqx [ 1 ] = rtX . nn31jtzhnb [ 1 ] ; rtB . pkw51cykqx [ 2 ] = (
( rtB . b30ue11hhm - rtX . nn31jtzhnb [ 0 ] ) * 1000.0 - 2.0 * rtX .
nn31jtzhnb [ 1 ] ) * 1000.0 ; rtB . pkw51cykqx [ 3 ] = 0.0 ; rtB . orf45wfkfm
= gdc00yjnuf - rtB . h4hnjuf4ok [ 54 ] ; rtB . ptoa4qnrig = rtP . P * rtB .
orf45wfkfm ; rtB . ckmycfifmz = 0.0 ; rtB . ckmycfifmz += rtP .
Differentiator_C_mvzrzdbpid * rtX . dphv0wm5ij ; rtB . ckmycfifmz += rtP .
Differentiator_D_lmu5sgqwp5 * rtB . orf45wfkfm ; rtB . c5pwxc5wo5 = rtB .
ptoa4qnrig + rtB . ckmycfifmz ; if ( rtDW . b021cdni5x == 0.0 ) { rtDW .
b021cdni5x = 1.0 ; rtX . o1k2rcoak1 [ 0 ] = rtB . c5pwxc5wo5 ; rtX .
o1k2rcoak1 [ 1 ] = 0.0 ; } rtB . nyu1nqmmee [ 0 ] = rtX . o1k2rcoak1 [ 0 ] ;
rtB . nyu1nqmmee [ 1 ] = rtX . o1k2rcoak1 [ 1 ] ; rtB . nyu1nqmmee [ 2 ] = (
( rtB . c5pwxc5wo5 - rtX . o1k2rcoak1 [ 0 ] ) * 1000.0 - 2.0 * rtX .
o1k2rcoak1 [ 1 ] ) * 1000.0 ; rtB . nyu1nqmmee [ 3 ] = 0.0 ; rtB . ox5zppqi1h
= epbaboo5u4 - rtB . h4hnjuf4ok [ 56 ] ; rtB . fws3etbeh2 = rtP . P * rtB .
ox5zppqi1h ; rtB . d2o1c2v3x2 = 0.0 ; rtB . d2o1c2v3x2 += rtP .
Differentiator_C_htp4rrhqlx * rtX . i4ge0rdrtz ; rtB . d2o1c2v3x2 += rtP .
Differentiator_D_id3tz2qugi * rtB . ox5zppqi1h ; rtB . lartlnyq5x = rtB .
fws3etbeh2 + rtB . d2o1c2v3x2 ; if ( rtDW . ixypknoxn3 == 0.0 ) { rtDW .
ixypknoxn3 = 1.0 ; rtX . oqct3dohkn [ 0 ] = rtB . lartlnyq5x ; rtX .
oqct3dohkn [ 1 ] = 0.0 ; } rtB . hjqo1tqvvs [ 0 ] = rtX . oqct3dohkn [ 0 ] ;
rtB . hjqo1tqvvs [ 1 ] = rtX . oqct3dohkn [ 1 ] ; rtB . hjqo1tqvvs [ 2 ] = (
( rtB . lartlnyq5x - rtX . oqct3dohkn [ 0 ] ) * 1000.0 - 2.0 * rtX .
oqct3dohkn [ 1 ] ) * 1000.0 ; rtB . hjqo1tqvvs [ 3 ] = 0.0 ; rtB . piuvoczjcx
= c4y5sjr2a3 - rtB . h4hnjuf4ok [ 58 ] ; rtB . payh5vdrtp = rtP . P * rtB .
piuvoczjcx ; rtB . n5qbqiye51 = 0.0 ; rtB . n5qbqiye51 += rtP .
Differentiator_C_ofqvx1s2jg * rtX . ds23b5mlzt ; rtB . n5qbqiye51 += rtP .
Differentiator_D_dhqehaoneg * rtB . piuvoczjcx ; rtB . d5hwduhu53 = rtB .
payh5vdrtp + rtB . n5qbqiye51 ; if ( rtDW . o3oqp2eeb5 == 0.0 ) { rtDW .
o3oqp2eeb5 = 1.0 ; rtX . fy55cqpr3y [ 0 ] = rtB . d5hwduhu53 ; rtX .
fy55cqpr3y [ 1 ] = 0.0 ; } rtB . pj4l423n1b [ 0 ] = rtX . fy55cqpr3y [ 0 ] ;
rtB . pj4l423n1b [ 1 ] = rtX . fy55cqpr3y [ 1 ] ; rtB . pj4l423n1b [ 2 ] = (
( rtB . d5hwduhu53 - rtX . fy55cqpr3y [ 0 ] ) * 1000.0 - 2.0 * rtX .
fy55cqpr3y [ 1 ] ) * 1000.0 ; rtB . pj4l423n1b [ 3 ] = 0.0 ; simulationData =
static_cast < NeslSimulationData * > ( rtDW . dxe20odrog ) ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . iflczmob3f ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . etecsxhwe2 ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mHadEvents = false ; simulationData
-> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = first_output ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_m [ 0 ] = 0 ;
tmp_i [ 0 ] = rtB . ovgjo1k5mz [ 0 ] ; tmp_i [ 1 ] = rtB . ovgjo1k5mz [ 1 ] ;
tmp_i [ 2 ] = rtB . ovgjo1k5mz [ 2 ] ; tmp_i [ 3 ] = rtB . ovgjo1k5mz [ 3 ] ;
tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . mtn15vznzx [ 0 ] ; tmp_i [ 5 ] = rtB .
mtn15vznzx [ 1 ] ; tmp_i [ 6 ] = rtB . mtn15vznzx [ 2 ] ; tmp_i [ 7 ] = rtB .
mtn15vznzx [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . pkw51cykqx [ 0 ] ;
tmp_i [ 9 ] = rtB . pkw51cykqx [ 1 ] ; tmp_i [ 10 ] = rtB . pkw51cykqx [ 2 ]
; tmp_i [ 11 ] = rtB . pkw51cykqx [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . nyu1nqmmee [ 0 ] ; tmp_i [ 13 ] = rtB . nyu1nqmmee [ 1 ] ; tmp_i [ 14 ]
= rtB . nyu1nqmmee [ 2 ] ; tmp_i [ 15 ] = rtB . nyu1nqmmee [ 3 ] ; tmp_m [ 4
] = 16 ; tmp_i [ 16 ] = rtB . hjqo1tqvvs [ 0 ] ; tmp_i [ 17 ] = rtB .
hjqo1tqvvs [ 1 ] ; tmp_i [ 18 ] = rtB . hjqo1tqvvs [ 2 ] ; tmp_i [ 19 ] = rtB
. hjqo1tqvvs [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . pj4l423n1b [ 0 ]
; tmp_i [ 21 ] = rtB . pj4l423n1b [ 1 ] ; tmp_i [ 22 ] = rtB . pj4l423n1b [ 2
] ; tmp_i [ 23 ] = rtB . pj4l423n1b [ 3 ] ; tmp_m [ 6 ] = 24 ; memcpy ( &
tmp_i [ 24 ] , & rtB . ba3ozliipq [ 0 ] , 61U * sizeof ( real_T ) ) ; tmp_m [
7 ] = 85 ; simulationData -> mData -> mInputValues . mN = 85 ; simulationData
-> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 8 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 12 ; simulationData
-> mData -> mOutputs . mX = & awlcsxmnwl [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; simulationData ->
mData -> mDstateHasChanged = false ; time_g = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_g ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulationData -> mData -> mHadEvents =
false ; diagnosticManager = static_cast < NeuDiagnosticManager * > ( rtDW .
eunmtunrhm ) ; diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; nbytes = ne_simulator_method ( static_cast <
NeslSimulator * > ( rtDW . dywywnpwvp ) , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( nbytes != 0 ) { first_output =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) {
msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS ,
msg_e ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
nzwfwttlnh [ 0 ] = rtB . h4hnjuf4ok [ 48 ] ; nzwfwttlnh [ 2 ] = awlcsxmnwl [
0 ] ; nzwfwttlnh [ 4 ] = rtB . h4hnjuf4ok [ 50 ] ; nzwfwttlnh [ 6 ] =
awlcsxmnwl [ 2 ] ; nzwfwttlnh [ 8 ] = rtB . h4hnjuf4ok [ 52 ] ; nzwfwttlnh [
10 ] = awlcsxmnwl [ 4 ] ; nzwfwttlnh [ 12 ] = rtB . h4hnjuf4ok [ 54 ] ;
nzwfwttlnh [ 14 ] = awlcsxmnwl [ 6 ] ; nzwfwttlnh [ 16 ] = rtB . h4hnjuf4ok [
56 ] ; nzwfwttlnh [ 18 ] = awlcsxmnwl [ 8 ] ; nzwfwttlnh [ 20 ] = rtB .
h4hnjuf4ok [ 58 ] ; nzwfwttlnh [ 22 ] = awlcsxmnwl [ 10 ] ; nzwfwttlnh [ 1 ]
= rtB . h4hnjuf4ok [ 49 ] ; nzwfwttlnh [ 3 ] = awlcsxmnwl [ 1 ] ; nzwfwttlnh
[ 5 ] = rtB . h4hnjuf4ok [ 51 ] ; nzwfwttlnh [ 7 ] = awlcsxmnwl [ 3 ] ;
nzwfwttlnh [ 9 ] = rtB . h4hnjuf4ok [ 53 ] ; nzwfwttlnh [ 11 ] = awlcsxmnwl [
5 ] ; nzwfwttlnh [ 13 ] = rtB . h4hnjuf4ok [ 55 ] ; nzwfwttlnh [ 15 ] =
awlcsxmnwl [ 7 ] ; nzwfwttlnh [ 17 ] = rtB . h4hnjuf4ok [ 57 ] ; nzwfwttlnh [
19 ] = awlcsxmnwl [ 9 ] ; nzwfwttlnh [ 21 ] = rtB . h4hnjuf4ok [ 59 ] ;
nzwfwttlnh [ 23 ] = awlcsxmnwl [ 11 ] ; { if ( rtDW . jchrmxk4qx . AQHandles
&& ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . jchrmxk4qx . AQHandles
, ssGetTaskTime ( rtS , 0 ) , ( char * ) & nzwfwttlnh [ 0 ] + 0 ) ; } } rtB .
mllhy1xoml = ssGetT ( rtS ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW .
m2oxmlar1f = pd1ght0taf ; mjhmvpefou = rtB . mllhy1xoml / rtP . tf * 100.0 ;
if ( muDoubleScalarIsNaN ( mjhmvpefou ) || muDoubleScalarIsInf ( mjhmvpefou )
) { nDots = ( rtNaN ) ; } else if ( mjhmvpefou == 0.0 ) { nDots = 0.0 ; }
else { nDots = muDoubleScalarRem ( mjhmvpefou , 5.0 ) ; if ( nDots == 0.0 ) {
nDots = 0.0 ; } else if ( mjhmvpefou < 0.0 ) { nDots += 5.0 ; } } if ( nDots
== 0.0 ) { nDots = muDoubleScalarFloor ( mjhmvpefou / 100.0 * 30.0 ) ;
outsize_idx_1 = static_cast < int32_T > ( nDots ) ; b_outsize_idx_1 =
static_cast < int32_T > ( 30.0 - nDots ) ; tmp_g = muDoubleScalarFloor (
mjhmvpefou ) ; if ( tmp_g < 2.147483648E+9 ) { if ( tmp_g >= - 2.147483648E+9
) { validatedHoleFilling_idx_0 = static_cast < int32_T > ( tmp_g ) ; } else {
validatedHoleFilling_idx_0 = MIN_int32_T ; } } else if ( tmp_g >=
2.147483648E+9 ) { validatedHoleFilling_idx_0 = MAX_int32_T ; } else {
validatedHoleFilling_idx_0 = 0 ; } nbytes = ( int32_T ) std :: snprintf (
NULL , 0 , " : %3d%%" , validatedHoleFilling_idx_0 ) + 1 ; msssidpgtw ( & str
, 2 ) ; tmp_j = str -> size [ 0 ] * str -> size [ 1 ] ; str -> size [ 0 ] = 1
; str -> size [ 1 ] = nbytes ; csrcqh2o3a ( str , tmp_j ) ; std :: snprintf (
& str -> data [ 0 ] , ( size_t ) nbytes , " : %3d%%" ,
validatedHoleFilling_idx_0 ) ; if ( nbytes - 1 < 1 ) {
validatedHoleFilling_idx_0 = - 1 ; } else { validatedHoleFilling_idx_0 =
nbytes - 2 ; } msssidpgtw ( & varargin_1 , 2 ) ; tmp_j = varargin_1 -> size [
0 ] * varargin_1 -> size [ 1 ] ; varargin_1 -> size [ 0 ] = 1 ; varargin_1 ->
size [ 1 ] = ( ( static_cast < int32_T > ( 30.0 - nDots ) + static_cast <
int32_T > ( nDots ) ) + validatedHoleFilling_idx_0 ) + 6 ; csrcqh2o3a (
varargin_1 , tmp_j ) ; varargin_1 -> data [ 0 ] = '>' ; varargin_1 -> data [
1 ] = '>' ; varargin_1 -> data [ 2 ] = ' ' ; varargin_1 -> data [ 3 ] = '[' ;
for ( nbytes = 0 ; nbytes < outsize_idx_1 ; nbytes ++ ) { varargin_1 -> data
[ nbytes + 4 ] = '=' ; } for ( nbytes = 0 ; nbytes < b_outsize_idx_1 ; nbytes
++ ) { varargin_1 -> data [ ( nbytes + static_cast < int32_T > ( nDots ) ) +
4 ] = '.' ; } varargin_1 -> data [ ( static_cast < int32_T > ( nDots ) +
static_cast < int32_T > ( 30.0 - nDots ) ) + 4 ] = ']' ; for ( nbytes = 0 ;
nbytes <= validatedHoleFilling_idx_0 ; nbytes ++ ) { varargin_1 -> data [ ( (
nbytes + static_cast < int32_T > ( nDots ) ) + static_cast < int32_T > ( 30.0
- nDots ) ) + 5 ] = str -> data [ nbytes ] ; } outsize_idx_1 = varargin_1 ->
size [ 1 ] ; tmp_j = str -> size [ 0 ] * str -> size [ 1 ] ; str -> size [ 0
] = 1 ; str -> size [ 1 ] = varargin_1 -> size [ 1 ] + 1 ; csrcqh2o3a ( str ,
tmp_j ) ; if ( outsize_idx_1 - 1 >= 0 ) { memcpy ( & str -> data [ 0 ] , &
varargin_1 -> data [ 0 ] , static_cast < uint32_T > ( outsize_idx_1 ) *
sizeof ( char_T ) ) ; } str -> data [ varargin_1 -> size [ 1 ] ] = '\x00' ;
ersxgrldfg ( & varargin_1 ) ; std :: printf ( "%s\n" , & str -> data [ 0 ] )
; ersxgrldfg ( & str ) ; std :: fflush ( stdout ) ; } if ( mjhmvpefou >=
100.0 ) { std :: printf ( ">> Simulation Complete.\n" ) ; std :: fflush (
stdout ) ; } } nsyvsrs3zs [ 0 ] = rtB . h4hnjuf4ok [ 112 ] ; nsyvsrs3zs [ 3 ]
= rtB . h4hnjuf4ok [ 109 ] ; nsyvsrs3zs [ 1 ] = rtB . h4hnjuf4ok [ 113 ] ;
nsyvsrs3zs [ 4 ] = rtB . h4hnjuf4ok [ 110 ] ; nsyvsrs3zs [ 2 ] = rtB .
h4hnjuf4ok [ 114 ] ; nsyvsrs3zs [ 5 ] = rtB . h4hnjuf4ok [ 111 ] ; { if (
rtDW . i4o5kapmqk . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . i4o5kapmqk . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) &
nsyvsrs3zs [ 0 ] + 0 ) ; } } { if ( rtDW . ihlaycufuy . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ihlaycufuy . AQHandles ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . h4hnjuf4ok [ 61 ] + 0 ) ; } }
{ if ( rtDW . ihlaycufuy3 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . ihlaycufuy3 . AQHandles , ssGetTaskTime ( rtS , 0 ) ,
( char * ) & rtB . h4hnjuf4ok [ 85 ] + 0 ) ; } } UNUSED_PARAMETER ( tid ) ; }
extern "C" void MdlOutputsTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
extern "C" void MdlUpdate ( int_T tid ) { NeslSimulationData * simulationData
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; char * msg ; real_T tmp_p [ 24 ] ; real_T time ; int32_T
tmp_i ; int_T tmp_e [ 7 ] ; boolean_T tmp ; simulationData = static_cast <
NeslSimulationData * > ( rtDW . gj141fpmf0 ) ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 61 ;
simulationData -> mData -> mContStates . mX = & rtX . faps05mlpl [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . luyus4t4io ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
lh1550hwj0 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mHadEvents = false ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . ovgjo1k5mz [ 0 ] ; tmp_p [ 1 ]
= rtB . ovgjo1k5mz [ 1 ] ; tmp_p [ 2 ] = rtB . ovgjo1k5mz [ 2 ] ; tmp_p [ 3 ]
= rtB . ovgjo1k5mz [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mtn15vznzx [
0 ] ; tmp_p [ 5 ] = rtB . mtn15vznzx [ 1 ] ; tmp_p [ 6 ] = rtB . mtn15vznzx [
2 ] ; tmp_p [ 7 ] = rtB . mtn15vznzx [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . pkw51cykqx [ 0 ] ; tmp_p [ 9 ] = rtB . pkw51cykqx [ 1 ] ; tmp_p [ 10 ]
= rtB . pkw51cykqx [ 2 ] ; tmp_p [ 11 ] = rtB . pkw51cykqx [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . nyu1nqmmee [ 0 ] ; tmp_p [ 13 ] = rtB .
nyu1nqmmee [ 1 ] ; tmp_p [ 14 ] = rtB . nyu1nqmmee [ 2 ] ; tmp_p [ 15 ] = rtB
. nyu1nqmmee [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . hjqo1tqvvs [ 0 ]
; tmp_p [ 17 ] = rtB . hjqo1tqvvs [ 1 ] ; tmp_p [ 18 ] = rtB . hjqo1tqvvs [ 2
] ; tmp_p [ 19 ] = rtB . hjqo1tqvvs [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] =
rtB . pj4l423n1b [ 0 ] ; tmp_p [ 21 ] = rtB . pj4l423n1b [ 1 ] ; tmp_p [ 22 ]
= rtB . pj4l423n1b [ 2 ] ; tmp_p [ 23 ] = rtB . pj4l423n1b [ 3 ] ; tmp_e [ 6
] = 24 ; simulationData -> mData -> mInputValues . mN = 24 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = static_cast < NeuDiagnosticManager * > (
rtDW . iaunsf4jhe ) ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( static_cast < NeslSimulator * > ( rtDW . fzn2dadk4e ) ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } extern "C" void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } extern "C" void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 24 ] ; real_T time ; int_T tmp_e [ 7 ] ; int_T is
; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData =
static_cast < NeslSimulationData * > ( rtDW . gj141fpmf0 ) ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 61 ;
simulationData -> mData -> mContStates . mX = & rtX . faps05mlpl [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . luyus4t4io ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
lh1550hwj0 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mHadEvents = false ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . ovgjo1k5mz [ 0 ] ; tmp_p [ 1 ]
= rtB . ovgjo1k5mz [ 1 ] ; tmp_p [ 2 ] = rtB . ovgjo1k5mz [ 2 ] ; tmp_p [ 3 ]
= rtB . ovgjo1k5mz [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mtn15vznzx [
0 ] ; tmp_p [ 5 ] = rtB . mtn15vznzx [ 1 ] ; tmp_p [ 6 ] = rtB . mtn15vznzx [
2 ] ; tmp_p [ 7 ] = rtB . mtn15vznzx [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . pkw51cykqx [ 0 ] ; tmp_p [ 9 ] = rtB . pkw51cykqx [ 1 ] ; tmp_p [ 10 ]
= rtB . pkw51cykqx [ 2 ] ; tmp_p [ 11 ] = rtB . pkw51cykqx [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . nyu1nqmmee [ 0 ] ; tmp_p [ 13 ] = rtB .
nyu1nqmmee [ 1 ] ; tmp_p [ 14 ] = rtB . nyu1nqmmee [ 2 ] ; tmp_p [ 15 ] = rtB
. nyu1nqmmee [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . hjqo1tqvvs [ 0 ]
; tmp_p [ 17 ] = rtB . hjqo1tqvvs [ 1 ] ; tmp_p [ 18 ] = rtB . hjqo1tqvvs [ 2
] ; tmp_p [ 19 ] = rtB . hjqo1tqvvs [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] =
rtB . pj4l423n1b [ 0 ] ; tmp_p [ 21 ] = rtB . pj4l423n1b [ 1 ] ; tmp_p [ 22 ]
= rtB . pj4l423n1b [ 2 ] ; tmp_p [ 23 ] = rtB . pj4l423n1b [ 3 ] ; tmp_e [ 6
] = 24 ; simulationData -> mData -> mInputValues . mN = 24 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 7 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN = 61 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> faps05mlpl [ 0 ] ; diagnosticManager =
static_cast < NeuDiagnosticManager * > ( rtDW . iaunsf4jhe ) ; diagnosticTree
= neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( static_cast < NeslSimulator * > ( rtDW . fzn2dadk4e ) ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( is != 0 )
{ tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} _rtXdot -> ac4vk3qjis = 0.0 ; _rtXdot -> ac4vk3qjis += rtP .
Differentiator_A * rtX . ac4vk3qjis ; _rtXdot -> ac4vk3qjis += rtB .
gpwpvx52su ; _rtXdot -> ptpwazju4o [ 0 ] = rtX . ptpwazju4o [ 1 ] ; _rtXdot
-> ptpwazju4o [ 1 ] = ( ( rtB . i5bhabdhl2 - rtX . ptpwazju4o [ 0 ] ) *
1000.0 - 2.0 * rtX . ptpwazju4o [ 1 ] ) * 1000.0 ; _rtXdot -> p1ph2wabhc =
0.0 ; _rtXdot -> p1ph2wabhc += rtP . Differentiator_A_opdpomj0oy * rtX .
p1ph2wabhc ; _rtXdot -> p1ph2wabhc += rtB . j3zzcipv1r ; _rtXdot ->
lfij1kvlny [ 0 ] = rtX . lfij1kvlny [ 1 ] ; _rtXdot -> lfij1kvlny [ 1 ] = ( (
rtB . pubnjkrbwr - rtX . lfij1kvlny [ 0 ] ) * 1000.0 - 2.0 * rtX . lfij1kvlny
[ 1 ] ) * 1000.0 ; _rtXdot -> gvc3a5sbir = 0.0 ; _rtXdot -> gvc3a5sbir += rtP
. Differentiator_A_ny15flnyyl * rtX . gvc3a5sbir ; _rtXdot -> gvc3a5sbir +=
rtB . fihfkiqrmx ; _rtXdot -> nn31jtzhnb [ 0 ] = rtX . nn31jtzhnb [ 1 ] ;
_rtXdot -> nn31jtzhnb [ 1 ] = ( ( rtB . b30ue11hhm - rtX . nn31jtzhnb [ 0 ] )
* 1000.0 - 2.0 * rtX . nn31jtzhnb [ 1 ] ) * 1000.0 ; _rtXdot -> dphv0wm5ij =
0.0 ; _rtXdot -> dphv0wm5ij += rtP . Differentiator_A_ngyitj1gem * rtX .
dphv0wm5ij ; _rtXdot -> dphv0wm5ij += rtB . orf45wfkfm ; _rtXdot ->
o1k2rcoak1 [ 0 ] = rtX . o1k2rcoak1 [ 1 ] ; _rtXdot -> o1k2rcoak1 [ 1 ] = ( (
rtB . c5pwxc5wo5 - rtX . o1k2rcoak1 [ 0 ] ) * 1000.0 - 2.0 * rtX . o1k2rcoak1
[ 1 ] ) * 1000.0 ; _rtXdot -> i4ge0rdrtz = 0.0 ; _rtXdot -> i4ge0rdrtz += rtP
. Differentiator_A_ks03awdndf * rtX . i4ge0rdrtz ; _rtXdot -> i4ge0rdrtz +=
rtB . ox5zppqi1h ; _rtXdot -> oqct3dohkn [ 0 ] = rtX . oqct3dohkn [ 1 ] ;
_rtXdot -> oqct3dohkn [ 1 ] = ( ( rtB . lartlnyq5x - rtX . oqct3dohkn [ 0 ] )
* 1000.0 - 2.0 * rtX . oqct3dohkn [ 1 ] ) * 1000.0 ; _rtXdot -> ds23b5mlzt =
0.0 ; _rtXdot -> ds23b5mlzt += rtP . Differentiator_A_nkg2t2gpet * rtX .
ds23b5mlzt ; _rtXdot -> ds23b5mlzt += rtB . piuvoczjcx ; _rtXdot ->
fy55cqpr3y [ 0 ] = rtX . fy55cqpr3y [ 1 ] ; _rtXdot -> fy55cqpr3y [ 1 ] = ( (
rtB . d5hwduhu53 - rtX . fy55cqpr3y [ 0 ] ) * 1000.0 - 2.0 * rtX . fy55cqpr3y
[ 1 ] ) * 1000.0 ; } extern "C" void MdlProjection ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 24 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 7 ] ; boolean_T
tmp ; simulationData = static_cast < NeslSimulationData * > ( rtDW .
gj141fpmf0 ) ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 61 ; simulationData -> mData -> mContStates . mX
= & rtX . faps05mlpl [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . luyus4t4io ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . lh1550hwj0 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mHadEvents = false ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . ovgjo1k5mz [ 0 ] ; tmp_p [ 1 ] = rtB . ovgjo1k5mz [ 1 ] ;
tmp_p [ 2 ] = rtB . ovgjo1k5mz [ 2 ] ; tmp_p [ 3 ] = rtB . ovgjo1k5mz [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mtn15vznzx [ 0 ] ; tmp_p [ 5 ] = rtB .
mtn15vznzx [ 1 ] ; tmp_p [ 6 ] = rtB . mtn15vznzx [ 2 ] ; tmp_p [ 7 ] = rtB .
mtn15vznzx [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . pkw51cykqx [ 0 ] ;
tmp_p [ 9 ] = rtB . pkw51cykqx [ 1 ] ; tmp_p [ 10 ] = rtB . pkw51cykqx [ 2 ]
; tmp_p [ 11 ] = rtB . pkw51cykqx [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . nyu1nqmmee [ 0 ] ; tmp_p [ 13 ] = rtB . nyu1nqmmee [ 1 ] ; tmp_p [ 14 ]
= rtB . nyu1nqmmee [ 2 ] ; tmp_p [ 15 ] = rtB . nyu1nqmmee [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . hjqo1tqvvs [ 0 ] ; tmp_p [ 17 ] = rtB .
hjqo1tqvvs [ 1 ] ; tmp_p [ 18 ] = rtB . hjqo1tqvvs [ 2 ] ; tmp_p [ 19 ] = rtB
. hjqo1tqvvs [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . pj4l423n1b [ 0 ]
; tmp_p [ 21 ] = rtB . pj4l423n1b [ 1 ] ; tmp_p [ 22 ] = rtB . pj4l423n1b [ 2
] ; tmp_p [ 23 ] = rtB . pj4l423n1b [ 3 ] ; tmp_e [ 6 ] = 24 ; simulationData
-> mData -> mInputValues . mN = 24 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 7 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = static_cast < NeuDiagnosticManager * > ( rtDW .
iaunsf4jhe ) ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( static_cast <
NeslSimulator * > ( rtDW . fzn2dadk4e ) , NESL_SIM_PROJECTION ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
} extern "C" void MdlTerminate ( void ) { rt_FREE ( rtDW . cvejppxdpv .
RSimInfoPtr ) ; neu_destroy_diagnostic_manager ( static_cast <
NeuDiagnosticManager * > ( rtDW . iaunsf4jhe ) ) ;
nesl_destroy_simulation_data ( static_cast < NeslSimulationData * > ( rtDW .
gj141fpmf0 ) ) ; nesl_erase_simulator ( "hp_v4/Base/Solver Configuration_1" )
; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( static_cast <
NeuDiagnosticManager * > ( rtDW . ioe5pmekjs ) ) ;
nesl_destroy_simulation_data ( static_cast < NeslSimulationData * > ( rtDW .
ilo32t4j3n ) ) ; nesl_erase_simulator ( "hp_v4/Base/Solver Configuration_1" )
; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( static_cast <
NeuDiagnosticManager * > ( rtDW . eunmtunrhm ) ) ;
nesl_destroy_simulation_data ( static_cast < NeslSimulationData * > ( rtDW .
dxe20odrog ) ) ; nesl_erase_simulator ( "hp_v4/Base/Solver Configuration_1" )
; nesl_destroy_registry ( ) ; { if ( rtDW . jchrmxk4qx . AQHandles ) {
sdiTerminateStreaming ( & rtDW . jchrmxk4qx . AQHandles ) ; } } { if ( rtDW .
i4o5kapmqk . AQHandles ) { sdiTerminateStreaming ( & rtDW . i4o5kapmqk .
AQHandles ) ; } } { if ( rtDW . ihlaycufuy . AQHandles ) {
sdiTerminateStreaming ( & rtDW . ihlaycufuy . AQHandles ) ; } } { if ( rtDW .
ihlaycufuy3 . AQHandles ) { sdiTerminateStreaming ( & rtDW . ihlaycufuy3 .
AQHandles ) ; } } } static void mr_hp_v4_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_hp_v4_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_hp_v4_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_hp_v4_restoreDataFromMxArray ( void * destData , const mxArray * srcArray
, mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_hp_v4_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_hp_v4_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_hp_v4_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_hp_v4_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_hp_v4_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_hp_v4_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_hp_v4_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_hp_v4_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_hp_v4_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_hp_v4_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber
( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal )
) ; } static uint_T mr_hp_v4_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_hp_v4_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_hp_v4_GetDWork ( ) { static const char_T * ssDWFieldNames
[ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_hp_v4_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 81 ] = {
"rtDW.dhwnkpcnxt" , "rtDW.hdt2cnju50" , "rtDW.iiko3sw2xx" , "rtDW.denmfeoj33"
, "rtDW.dqyjqqu5qg" , "rtDW.oiygwdxnsf" , "rtDW.ogx3yrgm3u" ,
"rtDW.b021cdni5x" , "rtDW.joh1nzqmvf" , "rtDW.ixypknoxn3" , "rtDW.ivnrdooirg"
, "rtDW.o3oqp2eeb5" , "rtDW.fu0do4t3as" , "rtDW.majfgt41ui" ,
"rtDW.pz5d0moowf" , "rtDW.obcozvopvv" , "rtDW.ikqokrktqt" , "rtDW.p3apf3xypr"
, "rtDW.h1tshsgvlr" , "rtDW.gz313zzwv0" , "rtDW.exnfkomltd" ,
"rtDW.ba1o4znci0" , "rtDW.ksxmibc2fy" , "rtDW.mc1j2ro0sq" , "rtDW.ixdsgzcw4h"
, "rtDW.lx0xtcqd2q" , "rtDW.ipeo2lwiiv" , "rtDW.o3qizeoydg" ,
"rtDW.mwdjyjhmsi" , "rtDW.bdtltpway1" , "rtDW.jjqxg4jfpn" , "rtDW.l1qqxacxgl"
, "rtDW.jzblxaem0z" , "rtDW.e2rz24nt3a" , "rtDW.m0aqu4oy1c" ,
"rtDW.fy35y14duc" , "rtDW.dpggk1ar0d" , "rtDW.dw2eh4vk53" , "rtDW.gvnceosiwa"
, "rtDW.mlyws0ulw1" , "rtDW.aapx2mrkrz" , "rtDW.opiw53bhx4" ,
"rtDW.o20gezqes2" , "rtDW.ifwz1fktid" , "rtDW.ejgjdw1cxq" , "rtDW.gemftv1sxb"
, "rtDW.fuya4qod4r" , "rtDW.f4r5toieaz" , "rtDW.luyus4t4io" ,
"rtDW.b2synjeilb" , "rtDW.pbzaaqmd2w" , "rtDW.dukinnnx0c" , "rtDW.iflczmob3f"
, "rtDW.cdhabo5zsb" , "rtDW.m2oxmlar1f" , "rtDW.hgx5cayjie" ,
"rtDW.k4hpgnvelg" , "rtDW.odyd01dqxa" , "rtDW.frc3nwwngy" , "rtDW.p4lw0xvjkj"
, "rtDW.mjohstu43y" , "rtDW.fs5pe54qqo" , "rtDW.lh1550hwj0" ,
"rtDW.kl2nhb3awd" , "rtDW.etecsxhwe2" , "rtDW.cssxtmycgo" , "rtDW.hesh10yaxb"
, "rtDW.pio0zawnt1" , "rtDW.nnel3hccnf" , "rtDW.eq31iilrw4" ,
"rtDW.ng00scgd4k" , "rtDW.ejp5wltkrt" , "rtDW.luj1mf0fur" , "rtDW.omi41as3l2"
, "rtDW.emnnr3112x" , "rtDW.cdgp4gsp3h" , "rtDW.ofsupcghmu" ,
"rtDW.jx0wvnooqh" , "rtDW.aycgjk4b45" , "rtDW.opcdwztal3" , "rtDW.o5uvukdfkz"
, } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 81 ,
rtdwDataFieldNames ) ; volatile void * dwork_0 = reinterpret_cast < volatile
void * > ( & ( rtDW . dhwnkpcnxt ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData
, 0 , 0 , ( const_cast < void * > ( dwork_0 ) ) , sizeof ( rtDW . dhwnkpcnxt
) ) ; volatile void * dwork_1 = reinterpret_cast < volatile void * > ( & (
rtDW . hdt2cnju50 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 1 , (
const_cast < void * > ( dwork_1 ) ) , sizeof ( rtDW . hdt2cnju50 ) ) ;
volatile void * dwork_2 = reinterpret_cast < volatile void * > ( & ( rtDW .
iiko3sw2xx ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const_cast < void * > ( dwork_2 ) ) , sizeof ( rtDW . iiko3sw2xx ) ) ;
volatile void * dwork_3 = reinterpret_cast < volatile void * > ( & ( rtDW .
denmfeoj33 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 3 , (
const_cast < void * > ( dwork_3 ) ) , sizeof ( rtDW . denmfeoj33 ) ) ;
volatile void * dwork_4 = reinterpret_cast < volatile void * > ( & ( rtDW .
dqyjqqu5qg ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const_cast < void * > ( dwork_4 ) ) , sizeof ( rtDW . dqyjqqu5qg ) ) ;
volatile void * dwork_5 = reinterpret_cast < volatile void * > ( & ( rtDW .
oiygwdxnsf ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 5 , (
const_cast < void * > ( dwork_5 ) ) , sizeof ( rtDW . oiygwdxnsf ) ) ;
volatile void * dwork_6 = reinterpret_cast < volatile void * > ( & ( rtDW .
ogx3yrgm3u ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 6 , (
const_cast < void * > ( dwork_6 ) ) , sizeof ( rtDW . ogx3yrgm3u ) ) ;
volatile void * dwork_7 = reinterpret_cast < volatile void * > ( & ( rtDW .
b021cdni5x ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 7 , (
const_cast < void * > ( dwork_7 ) ) , sizeof ( rtDW . b021cdni5x ) ) ;
volatile void * dwork_8 = reinterpret_cast < volatile void * > ( & ( rtDW .
joh1nzqmvf ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const_cast < void * > ( dwork_8 ) ) , sizeof ( rtDW . joh1nzqmvf ) ) ;
volatile void * dwork_9 = reinterpret_cast < volatile void * > ( & ( rtDW .
ixypknoxn3 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 9 , (
const_cast < void * > ( dwork_9 ) ) , sizeof ( rtDW . ixypknoxn3 ) ) ;
volatile void * dwork_10 = reinterpret_cast < volatile void * > ( & ( rtDW .
ivnrdooirg ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 10 , (
const_cast < void * > ( dwork_10 ) ) , sizeof ( rtDW . ivnrdooirg ) ) ;
volatile void * dwork_11 = reinterpret_cast < volatile void * > ( & ( rtDW .
o3oqp2eeb5 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const_cast < void * > ( dwork_11 ) ) , sizeof ( rtDW . o3oqp2eeb5 ) ) ;
volatile void * dwork_12 = reinterpret_cast < volatile void * > ( & ( rtDW .
fu0do4t3as ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 12 , (
const_cast < void * > ( dwork_12 ) ) , sizeof ( rtDW . fu0do4t3as ) ) ;
volatile void * dwork_13 = reinterpret_cast < volatile void * > ( & ( rtDW .
majfgt41ui ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 13 , (
const_cast < void * > ( dwork_13 ) ) , sizeof ( rtDW . majfgt41ui ) ) ;
volatile void * dwork_14 = reinterpret_cast < volatile void * > ( & ( rtDW .
pz5d0moowf ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 14 , (
const_cast < void * > ( dwork_14 ) ) , sizeof ( rtDW . pz5d0moowf ) ) ;
volatile void * dwork_15 = reinterpret_cast < volatile void * > ( & ( rtDW .
obcozvopvv ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 15 , (
const_cast < void * > ( dwork_15 ) ) , sizeof ( rtDW . obcozvopvv ) ) ;
volatile void * dwork_16 = reinterpret_cast < volatile void * > ( & ( rtDW .
ikqokrktqt ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 16 , (
const_cast < void * > ( dwork_16 ) ) , sizeof ( rtDW . ikqokrktqt ) ) ;
volatile void * dwork_17 = reinterpret_cast < volatile void * > ( & ( rtDW .
p3apf3xypr ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 17 , (
const_cast < void * > ( dwork_17 ) ) , sizeof ( rtDW . p3apf3xypr ) ) ;
volatile void * dwork_18 = reinterpret_cast < volatile void * > ( & ( rtDW .
h1tshsgvlr ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 18 , (
const_cast < void * > ( dwork_18 ) ) , sizeof ( rtDW . h1tshsgvlr ) ) ;
volatile void * dwork_19 = reinterpret_cast < volatile void * > ( & ( rtDW .
gz313zzwv0 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 19 , (
const_cast < void * > ( dwork_19 ) ) , sizeof ( rtDW . gz313zzwv0 ) ) ;
volatile void * dwork_20 = reinterpret_cast < volatile void * > ( & ( rtDW .
exnfkomltd ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 20 , (
const_cast < void * > ( dwork_20 ) ) , sizeof ( rtDW . exnfkomltd ) ) ;
volatile void * dwork_21 = reinterpret_cast < volatile void * > ( & ( rtDW .
ba1o4znci0 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 21 , (
const_cast < void * > ( dwork_21 ) ) , sizeof ( rtDW . ba1o4znci0 ) ) ;
volatile void * dwork_22 = reinterpret_cast < volatile void * > ( & ( rtDW .
ksxmibc2fy ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 22 , (
const_cast < void * > ( dwork_22 ) ) , sizeof ( rtDW . ksxmibc2fy ) ) ;
volatile void * dwork_23 = reinterpret_cast < volatile void * > ( & ( rtDW .
mc1j2ro0sq ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 23 , (
const_cast < void * > ( dwork_23 ) ) , sizeof ( rtDW . mc1j2ro0sq ) ) ;
volatile void * dwork_24 = reinterpret_cast < volatile void * > ( & ( rtDW .
ixdsgzcw4h ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 24 , (
const_cast < void * > ( dwork_24 ) ) , sizeof ( rtDW . ixdsgzcw4h ) ) ;
volatile void * dwork_25 = reinterpret_cast < volatile void * > ( & ( rtDW .
lx0xtcqd2q ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 25 , (
const_cast < void * > ( dwork_25 ) ) , sizeof ( rtDW . lx0xtcqd2q ) ) ;
volatile void * dwork_26 = reinterpret_cast < volatile void * > ( & ( rtDW .
ipeo2lwiiv ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 26 , (
const_cast < void * > ( dwork_26 ) ) , sizeof ( rtDW . ipeo2lwiiv ) ) ;
volatile void * dwork_27 = reinterpret_cast < volatile void * > ( & ( rtDW .
o3qizeoydg ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 27 , (
const_cast < void * > ( dwork_27 ) ) , sizeof ( rtDW . o3qizeoydg ) ) ;
volatile void * dwork_28 = reinterpret_cast < volatile void * > ( & ( rtDW .
mwdjyjhmsi ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 28 , (
const_cast < void * > ( dwork_28 ) ) , sizeof ( rtDW . mwdjyjhmsi ) ) ;
volatile void * dwork_29 = reinterpret_cast < volatile void * > ( & ( rtDW .
bdtltpway1 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 29 , (
const_cast < void * > ( dwork_29 ) ) , sizeof ( rtDW . bdtltpway1 ) ) ;
volatile void * dwork_30 = reinterpret_cast < volatile void * > ( & ( rtDW .
jjqxg4jfpn ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 30 , (
const_cast < void * > ( dwork_30 ) ) , sizeof ( rtDW . jjqxg4jfpn ) ) ;
volatile void * dwork_31 = reinterpret_cast < volatile void * > ( & ( rtDW .
l1qqxacxgl ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 31 , (
const_cast < void * > ( dwork_31 ) ) , sizeof ( rtDW . l1qqxacxgl ) ) ;
volatile void * dwork_32 = reinterpret_cast < volatile void * > ( & ( rtDW .
jzblxaem0z ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 32 , (
const_cast < void * > ( dwork_32 ) ) , sizeof ( rtDW . jzblxaem0z ) ) ;
volatile void * dwork_33 = reinterpret_cast < volatile void * > ( & ( rtDW .
e2rz24nt3a ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 33 , (
const_cast < void * > ( dwork_33 ) ) , sizeof ( rtDW . e2rz24nt3a ) ) ;
volatile void * dwork_34 = reinterpret_cast < volatile void * > ( & ( rtDW .
m0aqu4oy1c ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 34 , (
const_cast < void * > ( dwork_34 ) ) , sizeof ( rtDW . m0aqu4oy1c ) ) ;
volatile void * dwork_35 = reinterpret_cast < volatile void * > ( & ( rtDW .
fy35y14duc ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 35 , (
const_cast < void * > ( dwork_35 ) ) , sizeof ( rtDW . fy35y14duc ) ) ;
volatile void * dwork_36 = reinterpret_cast < volatile void * > ( & ( rtDW .
dpggk1ar0d ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 36 , (
const_cast < void * > ( dwork_36 ) ) , sizeof ( rtDW . dpggk1ar0d ) ) ;
volatile void * dwork_37 = reinterpret_cast < volatile void * > ( & ( rtDW .
dw2eh4vk53 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 37 , (
const_cast < void * > ( dwork_37 ) ) , sizeof ( rtDW . dw2eh4vk53 ) ) ;
volatile void * dwork_38 = reinterpret_cast < volatile void * > ( & ( rtDW .
gvnceosiwa ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 38 , (
const_cast < void * > ( dwork_38 ) ) , sizeof ( rtDW . gvnceosiwa ) ) ;
volatile void * dwork_39 = reinterpret_cast < volatile void * > ( & ( rtDW .
mlyws0ulw1 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 39 , (
const_cast < void * > ( dwork_39 ) ) , sizeof ( rtDW . mlyws0ulw1 ) ) ;
volatile void * dwork_40 = reinterpret_cast < volatile void * > ( & ( rtDW .
aapx2mrkrz ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 40 , (
const_cast < void * > ( dwork_40 ) ) , sizeof ( rtDW . aapx2mrkrz ) ) ;
volatile void * dwork_41 = reinterpret_cast < volatile void * > ( & ( rtDW .
opiw53bhx4 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 41 , (
const_cast < void * > ( dwork_41 ) ) , sizeof ( rtDW . opiw53bhx4 ) ) ;
volatile void * dwork_42 = reinterpret_cast < volatile void * > ( & ( rtDW .
o20gezqes2 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 42 , (
const_cast < void * > ( dwork_42 ) ) , sizeof ( rtDW . o20gezqes2 ) ) ;
volatile void * dwork_43 = reinterpret_cast < volatile void * > ( & ( rtDW .
ifwz1fktid ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 43 , (
const_cast < void * > ( dwork_43 ) ) , sizeof ( rtDW . ifwz1fktid ) ) ;
volatile void * dwork_44 = reinterpret_cast < volatile void * > ( & ( rtDW .
ejgjdw1cxq ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 44 , (
const_cast < void * > ( dwork_44 ) ) , sizeof ( rtDW . ejgjdw1cxq ) ) ;
volatile void * dwork_45 = reinterpret_cast < volatile void * > ( & ( rtDW .
gemftv1sxb ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 45 , (
const_cast < void * > ( dwork_45 ) ) , sizeof ( rtDW . gemftv1sxb ) ) ;
volatile void * dwork_46 = reinterpret_cast < volatile void * > ( & ( rtDW .
fuya4qod4r ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 46 , (
const_cast < void * > ( dwork_46 ) ) , sizeof ( rtDW . fuya4qod4r ) ) ;
volatile void * dwork_47 = reinterpret_cast < volatile void * > ( & ( rtDW .
f4r5toieaz ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 47 , (
const_cast < void * > ( dwork_47 ) ) , sizeof ( rtDW . f4r5toieaz ) ) ;
volatile void * dwork_48 = reinterpret_cast < volatile void * > ( & ( rtDW .
luyus4t4io ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 48 , (
const_cast < void * > ( dwork_48 ) ) , sizeof ( rtDW . luyus4t4io ) ) ;
volatile void * dwork_49 = reinterpret_cast < volatile void * > ( & ( rtDW .
b2synjeilb ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 49 , (
const_cast < void * > ( dwork_49 ) ) , sizeof ( rtDW . b2synjeilb ) ) ;
volatile void * dwork_50 = reinterpret_cast < volatile void * > ( & ( rtDW .
pbzaaqmd2w ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 50 , (
const_cast < void * > ( dwork_50 ) ) , sizeof ( rtDW . pbzaaqmd2w ) ) ;
volatile void * dwork_51 = reinterpret_cast < volatile void * > ( & ( rtDW .
dukinnnx0c ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 51 , (
const_cast < void * > ( dwork_51 ) ) , sizeof ( rtDW . dukinnnx0c ) ) ;
volatile void * dwork_52 = reinterpret_cast < volatile void * > ( & ( rtDW .
iflczmob3f ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 52 , (
const_cast < void * > ( dwork_52 ) ) , sizeof ( rtDW . iflczmob3f ) ) ;
volatile void * dwork_53 = reinterpret_cast < volatile void * > ( & ( rtDW .
cdhabo5zsb ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 53 , (
const_cast < void * > ( dwork_53 ) ) , sizeof ( rtDW . cdhabo5zsb ) ) ;
volatile void * dwork_54 = reinterpret_cast < volatile void * > ( & ( rtDW .
m2oxmlar1f ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 54 , (
const_cast < void * > ( dwork_54 ) ) , sizeof ( rtDW . m2oxmlar1f ) ) ;
volatile void * dwork_55 = reinterpret_cast < volatile void * > ( & ( rtDW .
hgx5cayjie ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 55 , (
const_cast < void * > ( dwork_55 ) ) , sizeof ( rtDW . hgx5cayjie ) ) ;
volatile void * dwork_56 = reinterpret_cast < volatile void * > ( & ( rtDW .
k4hpgnvelg ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 56 , (
const_cast < void * > ( dwork_56 ) ) , sizeof ( rtDW . k4hpgnvelg ) ) ;
volatile void * dwork_57 = reinterpret_cast < volatile void * > ( & ( rtDW .
odyd01dqxa ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 57 , (
const_cast < void * > ( dwork_57 ) ) , sizeof ( rtDW . odyd01dqxa ) ) ;
volatile void * dwork_58 = reinterpret_cast < volatile void * > ( & ( rtDW .
frc3nwwngy ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 58 , (
const_cast < void * > ( dwork_58 ) ) , sizeof ( rtDW . frc3nwwngy ) ) ;
volatile void * dwork_59 = reinterpret_cast < volatile void * > ( & ( rtDW .
p4lw0xvjkj ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 59 , (
const_cast < void * > ( dwork_59 ) ) , sizeof ( rtDW . p4lw0xvjkj ) ) ;
volatile void * dwork_60 = reinterpret_cast < volatile void * > ( & ( rtDW .
mjohstu43y ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 60 , (
const_cast < void * > ( dwork_60 ) ) , sizeof ( rtDW . mjohstu43y ) ) ;
volatile void * dwork_61 = reinterpret_cast < volatile void * > ( & ( rtDW .
fs5pe54qqo ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 61 , (
const_cast < void * > ( dwork_61 ) ) , sizeof ( rtDW . fs5pe54qqo ) ) ;
volatile void * dwork_62 = reinterpret_cast < volatile void * > ( & ( rtDW .
lh1550hwj0 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 62 , (
const_cast < void * > ( dwork_62 ) ) , sizeof ( rtDW . lh1550hwj0 ) ) ;
volatile void * dwork_63 = reinterpret_cast < volatile void * > ( & ( rtDW .
kl2nhb3awd ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 63 , (
const_cast < void * > ( dwork_63 ) ) , sizeof ( rtDW . kl2nhb3awd ) ) ;
volatile void * dwork_64 = reinterpret_cast < volatile void * > ( & ( rtDW .
etecsxhwe2 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 64 , (
const_cast < void * > ( dwork_64 ) ) , sizeof ( rtDW . etecsxhwe2 ) ) ;
volatile void * dwork_65 = reinterpret_cast < volatile void * > ( & ( rtDW .
cssxtmycgo ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 65 , (
const_cast < void * > ( dwork_65 ) ) , sizeof ( rtDW . cssxtmycgo ) ) ;
volatile void * dwork_66 = reinterpret_cast < volatile void * > ( & ( rtDW .
hesh10yaxb ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 66 , (
const_cast < void * > ( dwork_66 ) ) , sizeof ( rtDW . hesh10yaxb ) ) ;
volatile void * dwork_67 = reinterpret_cast < volatile void * > ( & ( rtDW .
pio0zawnt1 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 67 , (
const_cast < void * > ( dwork_67 ) ) , sizeof ( rtDW . pio0zawnt1 ) ) ;
volatile void * dwork_68 = reinterpret_cast < volatile void * > ( & ( rtDW .
nnel3hccnf ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 68 , (
const_cast < void * > ( dwork_68 ) ) , sizeof ( rtDW . nnel3hccnf ) ) ;
volatile void * dwork_69 = reinterpret_cast < volatile void * > ( & ( rtDW .
eq31iilrw4 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 69 , (
const_cast < void * > ( dwork_69 ) ) , sizeof ( rtDW . eq31iilrw4 ) ) ;
volatile void * dwork_70 = reinterpret_cast < volatile void * > ( & ( rtDW .
ng00scgd4k ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 70 , (
const_cast < void * > ( dwork_70 ) ) , sizeof ( rtDW . ng00scgd4k ) ) ;
volatile void * dwork_71 = reinterpret_cast < volatile void * > ( & ( rtDW .
ejp5wltkrt ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 71 , (
const_cast < void * > ( dwork_71 ) ) , sizeof ( rtDW . ejp5wltkrt ) ) ;
volatile void * dwork_72 = reinterpret_cast < volatile void * > ( & ( rtDW .
luj1mf0fur ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 72 , (
const_cast < void * > ( dwork_72 ) ) , sizeof ( rtDW . luj1mf0fur ) ) ;
volatile void * dwork_73 = reinterpret_cast < volatile void * > ( & ( rtDW .
omi41as3l2 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 73 , (
const_cast < void * > ( dwork_73 ) ) , sizeof ( rtDW . omi41as3l2 ) ) ;
volatile void * dwork_74 = reinterpret_cast < volatile void * > ( & ( rtDW .
emnnr3112x ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 74 , (
const_cast < void * > ( dwork_74 ) ) , sizeof ( rtDW . emnnr3112x ) ) ;
volatile void * dwork_75 = reinterpret_cast < volatile void * > ( & ( rtDW .
cdgp4gsp3h ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 75 , (
const_cast < void * > ( dwork_75 ) ) , sizeof ( rtDW . cdgp4gsp3h ) ) ;
volatile void * dwork_76 = reinterpret_cast < volatile void * > ( & ( rtDW .
ofsupcghmu ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 76 , (
const_cast < void * > ( dwork_76 ) ) , sizeof ( rtDW . ofsupcghmu ) ) ;
volatile void * dwork_77 = reinterpret_cast < volatile void * > ( & ( rtDW .
jx0wvnooqh ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 77 , (
const_cast < void * > ( dwork_77 ) ) , sizeof ( rtDW . jx0wvnooqh ) ) ;
volatile void * dwork_78 = reinterpret_cast < volatile void * > ( & ( rtDW .
aycgjk4b45 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 78 , (
const_cast < void * > ( dwork_78 ) ) , sizeof ( rtDW . aycgjk4b45 ) ) ;
volatile void * dwork_79 = reinterpret_cast < volatile void * > ( & ( rtDW .
opcdwztal3 ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 79 , (
const_cast < void * > ( dwork_79 ) ) , sizeof ( rtDW . opcdwztal3 ) ) ;
volatile void * dwork_80 = reinterpret_cast < volatile void * > ( & ( rtDW .
o5uvukdfkz ) ) ; mr_hp_v4_cacheDataAsMxArray ( rtdwData , 0 , 80 , (
const_cast < void * > ( dwork_80 ) ) , sizeof ( rtDW . o5uvukdfkz ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_hp_v4_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_hp_v4_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; volatile void * dwork_0 = reinterpret_cast < volatile void * > ( & (
rtDW . dhwnkpcnxt ) ) ; mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void
* > ( dwork_0 ) ) , rtdwData , 0 , 0 , sizeof ( rtDW . dhwnkpcnxt ) ) ;
volatile void * dwork_1 = reinterpret_cast < volatile void * > ( & ( rtDW .
hdt2cnju50 ) ) ; mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > (
dwork_1 ) ) , rtdwData , 0 , 1 , sizeof ( rtDW . hdt2cnju50 ) ) ; volatile
void * dwork_2 = reinterpret_cast < volatile void * > ( & ( rtDW . iiko3sw2xx
) ) ; mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_2 ) )
, rtdwData , 0 , 2 , sizeof ( rtDW . iiko3sw2xx ) ) ; volatile void * dwork_3
= reinterpret_cast < volatile void * > ( & ( rtDW . denmfeoj33 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_3 ) ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . denmfeoj33 ) ) ; volatile void * dwork_4 =
reinterpret_cast < volatile void * > ( & ( rtDW . dqyjqqu5qg ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_4 ) ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . dqyjqqu5qg ) ) ; volatile void * dwork_5 =
reinterpret_cast < volatile void * > ( & ( rtDW . oiygwdxnsf ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_5 ) ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . oiygwdxnsf ) ) ; volatile void * dwork_6 =
reinterpret_cast < volatile void * > ( & ( rtDW . ogx3yrgm3u ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_6 ) ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . ogx3yrgm3u ) ) ; volatile void * dwork_7 =
reinterpret_cast < volatile void * > ( & ( rtDW . b021cdni5x ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_7 ) ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . b021cdni5x ) ) ; volatile void * dwork_8 =
reinterpret_cast < volatile void * > ( & ( rtDW . joh1nzqmvf ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_8 ) ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . joh1nzqmvf ) ) ; volatile void * dwork_9 =
reinterpret_cast < volatile void * > ( & ( rtDW . ixypknoxn3 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_9 ) ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . ixypknoxn3 ) ) ; volatile void * dwork_10
= reinterpret_cast < volatile void * > ( & ( rtDW . ivnrdooirg ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_10 ) ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . ivnrdooirg ) ) ; volatile void * dwork_11
= reinterpret_cast < volatile void * > ( & ( rtDW . o3oqp2eeb5 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_11 ) ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . o3oqp2eeb5 ) ) ; volatile void * dwork_12
= reinterpret_cast < volatile void * > ( & ( rtDW . fu0do4t3as ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_12 ) ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . fu0do4t3as ) ) ; volatile void * dwork_13
= reinterpret_cast < volatile void * > ( & ( rtDW . majfgt41ui ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_13 ) ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . majfgt41ui ) ) ; volatile void * dwork_14
= reinterpret_cast < volatile void * > ( & ( rtDW . pz5d0moowf ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_14 ) ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . pz5d0moowf ) ) ; volatile void * dwork_15
= reinterpret_cast < volatile void * > ( & ( rtDW . obcozvopvv ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_15 ) ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . obcozvopvv ) ) ; volatile void * dwork_16
= reinterpret_cast < volatile void * > ( & ( rtDW . ikqokrktqt ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_16 ) ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . ikqokrktqt ) ) ; volatile void * dwork_17
= reinterpret_cast < volatile void * > ( & ( rtDW . p3apf3xypr ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_17 ) ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . p3apf3xypr ) ) ; volatile void * dwork_18
= reinterpret_cast < volatile void * > ( & ( rtDW . h1tshsgvlr ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_18 ) ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . h1tshsgvlr ) ) ; volatile void * dwork_19
= reinterpret_cast < volatile void * > ( & ( rtDW . gz313zzwv0 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_19 ) ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . gz313zzwv0 ) ) ; volatile void * dwork_20
= reinterpret_cast < volatile void * > ( & ( rtDW . exnfkomltd ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_20 ) ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . exnfkomltd ) ) ; volatile void * dwork_21
= reinterpret_cast < volatile void * > ( & ( rtDW . ba1o4znci0 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_21 ) ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . ba1o4znci0 ) ) ; volatile void * dwork_22
= reinterpret_cast < volatile void * > ( & ( rtDW . ksxmibc2fy ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_22 ) ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . ksxmibc2fy ) ) ; volatile void * dwork_23
= reinterpret_cast < volatile void * > ( & ( rtDW . mc1j2ro0sq ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_23 ) ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . mc1j2ro0sq ) ) ; volatile void * dwork_24
= reinterpret_cast < volatile void * > ( & ( rtDW . ixdsgzcw4h ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_24 ) ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . ixdsgzcw4h ) ) ; volatile void * dwork_25
= reinterpret_cast < volatile void * > ( & ( rtDW . lx0xtcqd2q ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_25 ) ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . lx0xtcqd2q ) ) ; volatile void * dwork_26
= reinterpret_cast < volatile void * > ( & ( rtDW . ipeo2lwiiv ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_26 ) ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . ipeo2lwiiv ) ) ; volatile void * dwork_27
= reinterpret_cast < volatile void * > ( & ( rtDW . o3qizeoydg ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_27 ) ) ,
rtdwData , 0 , 27 , sizeof ( rtDW . o3qizeoydg ) ) ; volatile void * dwork_28
= reinterpret_cast < volatile void * > ( & ( rtDW . mwdjyjhmsi ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_28 ) ) ,
rtdwData , 0 , 28 , sizeof ( rtDW . mwdjyjhmsi ) ) ; volatile void * dwork_29
= reinterpret_cast < volatile void * > ( & ( rtDW . bdtltpway1 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_29 ) ) ,
rtdwData , 0 , 29 , sizeof ( rtDW . bdtltpway1 ) ) ; volatile void * dwork_30
= reinterpret_cast < volatile void * > ( & ( rtDW . jjqxg4jfpn ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_30 ) ) ,
rtdwData , 0 , 30 , sizeof ( rtDW . jjqxg4jfpn ) ) ; volatile void * dwork_31
= reinterpret_cast < volatile void * > ( & ( rtDW . l1qqxacxgl ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_31 ) ) ,
rtdwData , 0 , 31 , sizeof ( rtDW . l1qqxacxgl ) ) ; volatile void * dwork_32
= reinterpret_cast < volatile void * > ( & ( rtDW . jzblxaem0z ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_32 ) ) ,
rtdwData , 0 , 32 , sizeof ( rtDW . jzblxaem0z ) ) ; volatile void * dwork_33
= reinterpret_cast < volatile void * > ( & ( rtDW . e2rz24nt3a ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_33 ) ) ,
rtdwData , 0 , 33 , sizeof ( rtDW . e2rz24nt3a ) ) ; volatile void * dwork_34
= reinterpret_cast < volatile void * > ( & ( rtDW . m0aqu4oy1c ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_34 ) ) ,
rtdwData , 0 , 34 , sizeof ( rtDW . m0aqu4oy1c ) ) ; volatile void * dwork_35
= reinterpret_cast < volatile void * > ( & ( rtDW . fy35y14duc ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_35 ) ) ,
rtdwData , 0 , 35 , sizeof ( rtDW . fy35y14duc ) ) ; volatile void * dwork_36
= reinterpret_cast < volatile void * > ( & ( rtDW . dpggk1ar0d ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_36 ) ) ,
rtdwData , 0 , 36 , sizeof ( rtDW . dpggk1ar0d ) ) ; volatile void * dwork_37
= reinterpret_cast < volatile void * > ( & ( rtDW . dw2eh4vk53 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_37 ) ) ,
rtdwData , 0 , 37 , sizeof ( rtDW . dw2eh4vk53 ) ) ; volatile void * dwork_38
= reinterpret_cast < volatile void * > ( & ( rtDW . gvnceosiwa ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_38 ) ) ,
rtdwData , 0 , 38 , sizeof ( rtDW . gvnceosiwa ) ) ; volatile void * dwork_39
= reinterpret_cast < volatile void * > ( & ( rtDW . mlyws0ulw1 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_39 ) ) ,
rtdwData , 0 , 39 , sizeof ( rtDW . mlyws0ulw1 ) ) ; volatile void * dwork_40
= reinterpret_cast < volatile void * > ( & ( rtDW . aapx2mrkrz ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_40 ) ) ,
rtdwData , 0 , 40 , sizeof ( rtDW . aapx2mrkrz ) ) ; volatile void * dwork_41
= reinterpret_cast < volatile void * > ( & ( rtDW . opiw53bhx4 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_41 ) ) ,
rtdwData , 0 , 41 , sizeof ( rtDW . opiw53bhx4 ) ) ; volatile void * dwork_42
= reinterpret_cast < volatile void * > ( & ( rtDW . o20gezqes2 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_42 ) ) ,
rtdwData , 0 , 42 , sizeof ( rtDW . o20gezqes2 ) ) ; volatile void * dwork_43
= reinterpret_cast < volatile void * > ( & ( rtDW . ifwz1fktid ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_43 ) ) ,
rtdwData , 0 , 43 , sizeof ( rtDW . ifwz1fktid ) ) ; volatile void * dwork_44
= reinterpret_cast < volatile void * > ( & ( rtDW . ejgjdw1cxq ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_44 ) ) ,
rtdwData , 0 , 44 , sizeof ( rtDW . ejgjdw1cxq ) ) ; volatile void * dwork_45
= reinterpret_cast < volatile void * > ( & ( rtDW . gemftv1sxb ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_45 ) ) ,
rtdwData , 0 , 45 , sizeof ( rtDW . gemftv1sxb ) ) ; volatile void * dwork_46
= reinterpret_cast < volatile void * > ( & ( rtDW . fuya4qod4r ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_46 ) ) ,
rtdwData , 0 , 46 , sizeof ( rtDW . fuya4qod4r ) ) ; volatile void * dwork_47
= reinterpret_cast < volatile void * > ( & ( rtDW . f4r5toieaz ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_47 ) ) ,
rtdwData , 0 , 47 , sizeof ( rtDW . f4r5toieaz ) ) ; volatile void * dwork_48
= reinterpret_cast < volatile void * > ( & ( rtDW . luyus4t4io ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_48 ) ) ,
rtdwData , 0 , 48 , sizeof ( rtDW . luyus4t4io ) ) ; volatile void * dwork_49
= reinterpret_cast < volatile void * > ( & ( rtDW . b2synjeilb ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_49 ) ) ,
rtdwData , 0 , 49 , sizeof ( rtDW . b2synjeilb ) ) ; volatile void * dwork_50
= reinterpret_cast < volatile void * > ( & ( rtDW . pbzaaqmd2w ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_50 ) ) ,
rtdwData , 0 , 50 , sizeof ( rtDW . pbzaaqmd2w ) ) ; volatile void * dwork_51
= reinterpret_cast < volatile void * > ( & ( rtDW . dukinnnx0c ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_51 ) ) ,
rtdwData , 0 , 51 , sizeof ( rtDW . dukinnnx0c ) ) ; volatile void * dwork_52
= reinterpret_cast < volatile void * > ( & ( rtDW . iflczmob3f ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_52 ) ) ,
rtdwData , 0 , 52 , sizeof ( rtDW . iflczmob3f ) ) ; volatile void * dwork_53
= reinterpret_cast < volatile void * > ( & ( rtDW . cdhabo5zsb ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_53 ) ) ,
rtdwData , 0 , 53 , sizeof ( rtDW . cdhabo5zsb ) ) ; volatile void * dwork_54
= reinterpret_cast < volatile void * > ( & ( rtDW . m2oxmlar1f ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_54 ) ) ,
rtdwData , 0 , 54 , sizeof ( rtDW . m2oxmlar1f ) ) ; volatile void * dwork_55
= reinterpret_cast < volatile void * > ( & ( rtDW . hgx5cayjie ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_55 ) ) ,
rtdwData , 0 , 55 , sizeof ( rtDW . hgx5cayjie ) ) ; volatile void * dwork_56
= reinterpret_cast < volatile void * > ( & ( rtDW . k4hpgnvelg ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_56 ) ) ,
rtdwData , 0 , 56 , sizeof ( rtDW . k4hpgnvelg ) ) ; volatile void * dwork_57
= reinterpret_cast < volatile void * > ( & ( rtDW . odyd01dqxa ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_57 ) ) ,
rtdwData , 0 , 57 , sizeof ( rtDW . odyd01dqxa ) ) ; volatile void * dwork_58
= reinterpret_cast < volatile void * > ( & ( rtDW . frc3nwwngy ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_58 ) ) ,
rtdwData , 0 , 58 , sizeof ( rtDW . frc3nwwngy ) ) ; volatile void * dwork_59
= reinterpret_cast < volatile void * > ( & ( rtDW . p4lw0xvjkj ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_59 ) ) ,
rtdwData , 0 , 59 , sizeof ( rtDW . p4lw0xvjkj ) ) ; volatile void * dwork_60
= reinterpret_cast < volatile void * > ( & ( rtDW . mjohstu43y ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_60 ) ) ,
rtdwData , 0 , 60 , sizeof ( rtDW . mjohstu43y ) ) ; volatile void * dwork_61
= reinterpret_cast < volatile void * > ( & ( rtDW . fs5pe54qqo ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_61 ) ) ,
rtdwData , 0 , 61 , sizeof ( rtDW . fs5pe54qqo ) ) ; volatile void * dwork_62
= reinterpret_cast < volatile void * > ( & ( rtDW . lh1550hwj0 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_62 ) ) ,
rtdwData , 0 , 62 , sizeof ( rtDW . lh1550hwj0 ) ) ; volatile void * dwork_63
= reinterpret_cast < volatile void * > ( & ( rtDW . kl2nhb3awd ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_63 ) ) ,
rtdwData , 0 , 63 , sizeof ( rtDW . kl2nhb3awd ) ) ; volatile void * dwork_64
= reinterpret_cast < volatile void * > ( & ( rtDW . etecsxhwe2 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_64 ) ) ,
rtdwData , 0 , 64 , sizeof ( rtDW . etecsxhwe2 ) ) ; volatile void * dwork_65
= reinterpret_cast < volatile void * > ( & ( rtDW . cssxtmycgo ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_65 ) ) ,
rtdwData , 0 , 65 , sizeof ( rtDW . cssxtmycgo ) ) ; volatile void * dwork_66
= reinterpret_cast < volatile void * > ( & ( rtDW . hesh10yaxb ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_66 ) ) ,
rtdwData , 0 , 66 , sizeof ( rtDW . hesh10yaxb ) ) ; volatile void * dwork_67
= reinterpret_cast < volatile void * > ( & ( rtDW . pio0zawnt1 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_67 ) ) ,
rtdwData , 0 , 67 , sizeof ( rtDW . pio0zawnt1 ) ) ; volatile void * dwork_68
= reinterpret_cast < volatile void * > ( & ( rtDW . nnel3hccnf ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_68 ) ) ,
rtdwData , 0 , 68 , sizeof ( rtDW . nnel3hccnf ) ) ; volatile void * dwork_69
= reinterpret_cast < volatile void * > ( & ( rtDW . eq31iilrw4 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_69 ) ) ,
rtdwData , 0 , 69 , sizeof ( rtDW . eq31iilrw4 ) ) ; volatile void * dwork_70
= reinterpret_cast < volatile void * > ( & ( rtDW . ng00scgd4k ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_70 ) ) ,
rtdwData , 0 , 70 , sizeof ( rtDW . ng00scgd4k ) ) ; volatile void * dwork_71
= reinterpret_cast < volatile void * > ( & ( rtDW . ejp5wltkrt ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_71 ) ) ,
rtdwData , 0 , 71 , sizeof ( rtDW . ejp5wltkrt ) ) ; volatile void * dwork_72
= reinterpret_cast < volatile void * > ( & ( rtDW . luj1mf0fur ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_72 ) ) ,
rtdwData , 0 , 72 , sizeof ( rtDW . luj1mf0fur ) ) ; volatile void * dwork_73
= reinterpret_cast < volatile void * > ( & ( rtDW . omi41as3l2 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_73 ) ) ,
rtdwData , 0 , 73 , sizeof ( rtDW . omi41as3l2 ) ) ; volatile void * dwork_74
= reinterpret_cast < volatile void * > ( & ( rtDW . emnnr3112x ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_74 ) ) ,
rtdwData , 0 , 74 , sizeof ( rtDW . emnnr3112x ) ) ; volatile void * dwork_75
= reinterpret_cast < volatile void * > ( & ( rtDW . cdgp4gsp3h ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_75 ) ) ,
rtdwData , 0 , 75 , sizeof ( rtDW . cdgp4gsp3h ) ) ; volatile void * dwork_76
= reinterpret_cast < volatile void * > ( & ( rtDW . ofsupcghmu ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_76 ) ) ,
rtdwData , 0 , 76 , sizeof ( rtDW . ofsupcghmu ) ) ; volatile void * dwork_77
= reinterpret_cast < volatile void * > ( & ( rtDW . jx0wvnooqh ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_77 ) ) ,
rtdwData , 0 , 77 , sizeof ( rtDW . jx0wvnooqh ) ) ; volatile void * dwork_78
= reinterpret_cast < volatile void * > ( & ( rtDW . aycgjk4b45 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_78 ) ) ,
rtdwData , 0 , 78 , sizeof ( rtDW . aycgjk4b45 ) ) ; volatile void * dwork_79
= reinterpret_cast < volatile void * > ( & ( rtDW . opcdwztal3 ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_79 ) ) ,
rtdwData , 0 , 79 , sizeof ( rtDW . opcdwztal3 ) ) ; volatile void * dwork_80
= reinterpret_cast < volatile void * > ( & ( rtDW . o5uvukdfkz ) ) ;
mr_hp_v4_restoreDataFromMxArray ( ( const_cast < void * > ( dwork_80 ) ) ,
rtdwData , 0 , 80 , sizeof ( rtDW . o5uvukdfkz ) ) ; } } mxArray *
mr_hp_v4_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 7 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 7 ] = { "Scope" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" , "Scope" , "Scope" ,
"SimscapeSinkBlock" , } ; static const char_T * blockPath [ 7 ] = {
"hp_v4/Scope3" , "hp_v4/Base/Solver Configuration/EVAL_KEY/STATE_1" ,
"hp_v4/Base/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"hp_v4/Base/Solver Configuration/EVAL_KEY/OUTPUT_1_1" , "hp_v4/Servo 1/Scope"
, "hp_v4/Scope2" , "hp_v4/Base/Solver Configuration/EVAL_KEY/SINK_1" , } ;
static const int reason [ 7 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs
[ 0 ] = 0 ; subs [ 0 ] < 7 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } extern "C" void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
79 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 240 ) ;
ssSetNumBlockIO ( rtS , 35 ) ; ssSetNumBlockParams ( rtS , 760063 ) ; }
extern "C" void MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0
, 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0001 ) ; ssSetOffsetTime ( rtS , 0 ,
0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } extern "C" void
raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2535540888U ) ;
ssSetChecksumVal ( rtS , 1 , 2055807711U ) ; ssSetChecksumVal ( rtS , 2 ,
2378655218U ) ; ssSetChecksumVal ( rtS , 3 , 508624394U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
extern "C" SimStruct * raccel_register_model ( ssExecutionInfo *
executionInfo ) { static struct _ssMdlInfo mdlInfo ; static struct
_ssBlkInfo2 blkInfo2 ; static struct _ssBlkInfoSLSize blkInfoSLSize ;
rt_modelMapInfoPtr = & ( rt_dataMapInfo . mmi ) ; executionInfo ->
gblObjects_ . numToFiles = 0 ; executionInfo -> gblObjects_ . numFrFiles = 0
; executionInfo -> gblObjects_ . numFrWksBlocks = 1 ; executionInfo ->
gblObjects_ . numModelInputs = 0 ; executionInfo -> gblObjects_ .
numRootInportBlks = 0 ; executionInfo -> gblObjects_ . inportDataTypeIdx =
NULL ; executionInfo -> gblObjects_ . inportDims = NULL ; executionInfo ->
gblObjects_ . inportComplex = NULL ; executionInfo -> gblObjects_ .
inportInterpoFlag = NULL ; executionInfo -> gblObjects_ . inportContinuous =
NULL ; ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS ,
& blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo
( rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( static_cast < void * > ( & rtB ) ) , 0 , sizeof ( B ) ) ;
} { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void )
memset ( static_cast < void * > ( x ) , 0 , sizeof ( X ) ) ; } { void * dwork
= ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset (
dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 26 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } hp_v4_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"hp_v4" ) ; ssSetPath ( rtS , "hp_v4" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 4.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 4 , 3 , 4 , 3 , 1 , 1 , 4 , 3 , 1 , 1 , 4 , 3 , 1 , 1 , 4 , 3 , 1 , 1 , 4 ,
3 , 1 , 1 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 ,
1 , 4 , 3 , 4 , 3 , 1 , 1 , 4 , 3 , 1 , 1 , 4 , 3 , 1 , 1 , 4 , 3 , 1 , 1 , 4
, 3 , 1 , 1 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
"hp_v4/Servo 1/Revolute Joint 1" , "hp_v4/Servo 1/Revolute Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 1" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Coupler and platform/Spherical Joint 7" ,
"hp_v4/Servo 2/Revolute Joint 2" , "hp_v4/Servo 2/Revolute Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Coupler and platform/Spherical Joint 2" ,
"hp_v4/Servo 3/Revolute Joint 3" , "hp_v4/Servo 3/Revolute Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Coupler and platform/Spherical Joint 3" ,
"hp_v4/Servo 4/Revolute Joint 4" , "hp_v4/Servo 4/Revolute Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Coupler and platform/Spherical Joint 4" ,
"hp_v4/Servo 5/Revolute Joint 5" , "hp_v4/Servo 5/Revolute Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Coupler and platform/Spherical Joint 5" ,
"hp_v4/Servo 6/Revolute Joint 6" , "hp_v4/Servo 6/Revolute Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" ,
"hp_v4/Coupler and platform/Spherical Joint 6" ,
"hp_v4/Servo 1/PD Controller/Differentiator" ,
"hp_v4/Servo 1/Simulink-PS\nConverter1" ,
"hp_v4/Servo 1/Simulink-PS\nConverter1" ,
"hp_v4/Servo 2/PD Controller/Differentiator" ,
"hp_v4/Servo 2/Simulink-PS\nConverter1" ,
"hp_v4/Servo 2/Simulink-PS\nConverter1" ,
"hp_v4/Servo 3/PD Controller/Differentiator" ,
"hp_v4/Servo 3/Simulink-PS\nConverter1" ,
"hp_v4/Servo 3/Simulink-PS\nConverter1" ,
"hp_v4/Servo 4/PD Controller/Differentiator" ,
"hp_v4/Servo 4/Simulink-PS\nConverter1" ,
"hp_v4/Servo 4/Simulink-PS\nConverter1" ,
"hp_v4/Servo 5/PD Controller/Differentiator" ,
"hp_v4/Servo 5/Simulink-PS\nConverter1" ,
"hp_v4/Servo 5/Simulink-PS\nConverter1" ,
"hp_v4/Servo 6/PD Controller/Differentiator" ,
"hp_v4/Servo 6/Simulink-PS\nConverter1" ,
"hp_v4/Servo 6/Simulink-PS\nConverter1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"hp_v4/Base/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" } ; static const
char_T * rt_LoggedStateNames [ ] = { "hp_v4.Servo_1.Revolute_Joint_1.Rz.q" ,
"hp_v4.Servo_1.Revolute_Joint_1.Rz.w" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_1.S.Q" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_1.S.w" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_7.S.Q" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_7.S.w" ,
"hp_v4.Servo_2.Revolute_Joint_2.Rz.q" , "hp_v4.Servo_2.Revolute_Joint_2.Rz.w"
, "hp_v4.Coupler_and_platform.Spherical_Joint_2.S.Q" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_2.S.w" ,
"hp_v4.Servo_3.Revolute_Joint_3.Rz.q" , "hp_v4.Servo_3.Revolute_Joint_3.Rz.w"
, "hp_v4.Coupler_and_platform.Spherical_Joint_3.S.Q" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_3.S.w" ,
"hp_v4.Servo_4.Revolute_Joint_4.Rz.q" , "hp_v4.Servo_4.Revolute_Joint_4.Rz.w"
, "hp_v4.Coupler_and_platform.Spherical_Joint_4.S.Q" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_4.S.w" ,
"hp_v4.Servo_5.Revolute_Joint_5.Rz.q" , "hp_v4.Servo_5.Revolute_Joint_5.Rz.w"
, "hp_v4.Coupler_and_platform.Spherical_Joint_5.S.Q" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_5.S.w" ,
"hp_v4.Servo_6.Revolute_Joint_6.Rz.q" , "hp_v4.Servo_6.Revolute_Joint_6.Rz.w"
, "hp_v4.Coupler_and_platform.Spherical_Joint_6.S.Q" ,
"hp_v4.Coupler_and_platform.Spherical_Joint_6.S.w" , "" ,
"hp_v4.Servo_1.Simulink_PS_Converter1.outputFiltered_2231596674_0" ,
"hp_v4.Servo_1.Simulink_PS_Converter1.outputFiltered_2231596674_1" , "" ,
"hp_v4.Servo_2.Simulink_PS_Converter1.outputFiltered_3265465426_0" ,
"hp_v4.Servo_2.Simulink_PS_Converter1.outputFiltered_3265465426_1" , "" ,
"hp_v4.Servo_3.Simulink_PS_Converter1.outputFiltered_4290979298_0" ,
"hp_v4.Servo_3.Simulink_PS_Converter1.outputFiltered_4290979298_1" , "" ,
"hp_v4.Servo_4.Simulink_PS_Converter1.outputFiltered_1306786290_0" ,
"hp_v4.Servo_4.Simulink_PS_Converter1.outputFiltered_1306786290_1" , "" ,
"hp_v4.Servo_5.Simulink_PS_Converter1.outputFiltered_1887686722_0" ,
"hp_v4.Servo_5.Simulink_PS_Converter1.outputFiltered_1887686722_1" , "" ,
"hp_v4.Servo_6.Simulink_PS_Converter1.outputFiltered_925084306_0" ,
"hp_v4.Servo_6.Simulink_PS_Converter1.outputFiltered_925084306_1" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ]
= { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE
, SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11
, 12 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 56 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 56 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . faps05mlpl [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . faps05mlpl [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . faps05mlpl [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . faps05mlpl [ 6 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . faps05mlpl [ 9 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . faps05mlpl [ 13 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . faps05mlpl [ 16 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . faps05mlpl [ 17 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . faps05mlpl [ 18 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . faps05mlpl [ 22 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . faps05mlpl [ 25 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . faps05mlpl [ 26 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . faps05mlpl [ 27 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . faps05mlpl [ 31 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . faps05mlpl [ 34 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . faps05mlpl [ 35 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . faps05mlpl [ 36 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . faps05mlpl [ 40 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . faps05mlpl [ 43 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . faps05mlpl [ 44 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . faps05mlpl [ 45 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . faps05mlpl [ 49 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . faps05mlpl [ 52 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . faps05mlpl [ 53 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . faps05mlpl [ 54 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . faps05mlpl [ 58 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . ac4vk3qjis ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . ptpwazju4o [ 0 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . ptpwazju4o [ 1 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . p1ph2wabhc ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . lfij1kvlny [ 0 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . lfij1kvlny [ 1 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . gvc3a5sbir ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . nn31jtzhnb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . nn31jtzhnb [ 1 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . dphv0wm5ij ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . o1k2rcoak1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . o1k2rcoak1 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . i4ge0rdrtz ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . oqct3dohkn [ 0 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . oqct3dohkn [ 1 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . ds23b5mlzt ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . fy55cqpr3y [ 0 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . fy55cqpr3y [ 1 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtDW . dhwnkpcnxt ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtDW . hdt2cnju50 ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtDW . iiko3sw2xx ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtDW . denmfeoj33 ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtDW . dqyjqqu5qg ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtDW . oiygwdxnsf ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtDW . ogx3yrgm3u ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtDW . b021cdni5x ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtDW . joh1nzqmvf ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtDW . ixypknoxn3 ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtDW . ivnrdooirg ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtDW . o3oqp2eeb5 ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 79 ] ; static real_T absTol [ 79 ] = { 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 ,
0.0001 , 0.0001 , 0.0001 , 0.0001 , 0.0001 } ; static uint8_T absTolControl [
79 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U } ; static real_T contStateJacPerturbBoundMinVec [ 79 ] ;
static real_T contStateJacPerturbBoundMaxVec [ 79 ] ; { int i ; for ( i = 0 ;
i < 79 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.0001 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepAuto" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetJacobianPerturbationBoundsMinVec ( rtS ,
contStateJacPerturbBoundMinVec ) ; ssSetJacobianPerturbationBoundsMaxVec (
rtS , contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1
) ; ( void ) memset ( static_cast < void * > ( & mdlMethods2 ) , 0 , sizeof (
mdlMethods2 ) ) ; ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void )
memset ( static_cast < void * > ( & mdlMethods3 ) , 0 , sizeof ( mdlMethods3
) ) ; ssSetModelMethods3 ( rtS , & mdlMethods3 ) ; ssSetModelProjection ( rtS
, MdlProjection ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 2535540888U ) ; ssSetChecksumVal ( rtS , 1 ,
2055807711U ) ; ssSetChecksumVal ( rtS , 2 , 2378655218U ) ; ssSetChecksumVal
( rtS , 3 , 508624394U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 2 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_hp_v4_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_hp_v4_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_hp_v4_SetDWork
) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS
) ) { return rtS ; } executionInfo -> simulationOptions_ . stateSaveName_ =
rtliGetLogX ( ssGetRTWLogInfo ( rtS ) ) ; executionInfo -> simulationOptions_
. finalStateName_ = rtliGetLogXFinal ( ssGetRTWLogInfo ( rtS ) ) ;
executionInfo -> simulationOptions_ . outputSaveName_ = rtliGetLogY (
ssGetRTWLogInfo ( rtS ) ) ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
extern "C" { } void MdlOutputsParameterSampleTime ( int_T tid ) {
MdlOutputsTID2 ( tid ) ; }
