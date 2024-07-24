#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "hp_v4_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 20
#endif
#ifndef SS_INT64
#define SS_INT64 21
#endif
#else
#include "builtin_typeid_types.h"
#include "hp_v4.h"
#include "hp_v4_capi.h"
#include "hp_v4_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"hp_v4/Clock" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "hp_v4/Add" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } ,
{ 2 , 0 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table" ) ,
TARGET_STRING ( "lookup" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"hp_v4/Servo 1/PD Controller/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 4 , 0 , TARGET_STRING ( "hp_v4/Servo 1/PD Controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"hp_v4/Servo 1/PD Controller/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 6 , 0 , TARGET_STRING ( "hp_v4/Servo 1/PD Controller/Differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"hp_v4/Servo 2/PD Controller/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 8 , 0 , TARGET_STRING ( "hp_v4/Servo 2/PD Controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"hp_v4/Servo 2/PD Controller/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 10 , 0 , TARGET_STRING ( "hp_v4/Servo 2/PD Controller/Differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"hp_v4/Servo 3/PD Controller/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 12 , 0 , TARGET_STRING ( "hp_v4/Servo 3/PD Controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"hp_v4/Servo 3/PD Controller/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 14 , 0 , TARGET_STRING ( "hp_v4/Servo 3/PD Controller/Differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"hp_v4/Servo 4/PD Controller/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 16 , 0 , TARGET_STRING ( "hp_v4/Servo 4/PD Controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"hp_v4/Servo 4/PD Controller/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 18 , 0 , TARGET_STRING ( "hp_v4/Servo 4/PD Controller/Differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"hp_v4/Servo 5/PD Controller/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 20 , 0 , TARGET_STRING ( "hp_v4/Servo 5/PD Controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"hp_v4/Servo 5/PD Controller/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 22 , 0 , TARGET_STRING ( "hp_v4/Servo 5/PD Controller/Differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"hp_v4/Servo 6/PD Controller/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 24 , 0 , TARGET_STRING ( "hp_v4/Servo 6/PD Controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"hp_v4/Servo 6/PD Controller/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 26 , 0 , TARGET_STRING ( "hp_v4/Servo 6/PD Controller/Differentiator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"hp_v4/Base/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"hp_v4/Base/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"hp_v4/Base/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"hp_v4/Base/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"hp_v4/Base/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"hp_v4/Base/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"hp_v4/Base/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"hp_v4/Base/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 4 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 35 ,
TARGET_STRING ( "hp_v4/Motor Angles" ) , TARGET_STRING ( "Time0" ) , 0 , 5 ,
0 } , { 36 , TARGET_STRING ( "hp_v4/Motor Angles" ) , TARGET_STRING ( "Data0"
) , 0 , 6 , 0 } , { 37 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table" ) , TARGET_STRING ( "Table" ) , 0 , 5
, 0 } , { 38 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 5 , 0 } , { 39 ,
TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table" ) , TARGET_STRING (
"maxIndex" ) , 1 , 0 , 0 } , { 40 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table" ) , TARGET_STRING ( "dimSizes" ) , 1 ,
0 , 0 } , { 41 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table" ) ,
TARGET_STRING ( "numYWorkElts" ) , 1 , 7 , 0 } , { 42 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table1" ) , TARGET_STRING ( "Table" ) , 0 , 5
, 0 } , { 43 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 5 , 0 } , { 44 ,
TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table1" ) , TARGET_STRING (
"maxIndex" ) , 1 , 0 , 0 } , { 45 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table1" ) , TARGET_STRING ( "dimSizes" ) , 1
, 0 , 0 } , { 46 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table1" )
, TARGET_STRING ( "numYWorkElts" ) , 1 , 7 , 0 } , { 47 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table2" ) , TARGET_STRING ( "Table" ) , 0 , 5
, 0 } , { 48 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table2" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 5 , 0 } , { 49 ,
TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table2" ) , TARGET_STRING (
"maxIndex" ) , 1 , 0 , 0 } , { 50 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table2" ) , TARGET_STRING ( "dimSizes" ) , 1
, 0 , 0 } , { 51 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table2" )
, TARGET_STRING ( "numYWorkElts" ) , 1 , 7 , 0 } , { 52 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table3" ) , TARGET_STRING ( "Table" ) , 0 , 5
, 0 } , { 53 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table3" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 5 , 0 } , { 54 ,
TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table3" ) , TARGET_STRING (
"maxIndex" ) , 1 , 0 , 0 } , { 55 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table3" ) , TARGET_STRING ( "dimSizes" ) , 1
, 0 , 0 } , { 56 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table3" )
, TARGET_STRING ( "numYWorkElts" ) , 1 , 7 , 0 } , { 57 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table4" ) , TARGET_STRING ( "Table" ) , 0 , 5
, 0 } , { 58 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table4" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 5 , 0 } , { 59 ,
TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table4" ) , TARGET_STRING (
"maxIndex" ) , 1 , 0 , 0 } , { 60 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table4" ) , TARGET_STRING ( "dimSizes" ) , 1
, 0 , 0 } , { 61 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table4" )
, TARGET_STRING ( "numYWorkElts" ) , 1 , 7 , 0 } , { 62 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table5" ) , TARGET_STRING ( "Table" ) , 0 , 5
, 0 } , { 63 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table5" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 5 , 0 } , { 64 ,
TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table5" ) , TARGET_STRING (
"maxIndex" ) , 1 , 0 , 0 } , { 65 , TARGET_STRING (
"hp_v4/Lookup tables/1-D Lookup Table5" ) , TARGET_STRING ( "dimSizes" ) , 1
, 0 , 0 } , { 66 , TARGET_STRING ( "hp_v4/Lookup tables/1-D Lookup Table5" )
, TARGET_STRING ( "numYWorkElts" ) , 1 , 7 , 0 } , { 67 , TARGET_STRING (
"hp_v4/Servo 1/PD Controller/Differentiator" ) , TARGET_STRING ( "A" ) , 0 ,
0 , 0 } , { 68 , TARGET_STRING ( "hp_v4/Servo 1/PD Controller/Differentiator"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
"hp_v4/Servo 1/PD Controller/Differentiator" ) , TARGET_STRING ( "D" ) , 0 ,
0 , 0 } , { 70 , TARGET_STRING ( "hp_v4/Servo 2/PD Controller/Differentiator"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
"hp_v4/Servo 2/PD Controller/Differentiator" ) , TARGET_STRING ( "C" ) , 0 ,
0 , 0 } , { 72 , TARGET_STRING ( "hp_v4/Servo 2/PD Controller/Differentiator"
) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"hp_v4/Servo 3/PD Controller/Differentiator" ) , TARGET_STRING ( "A" ) , 0 ,
0 , 0 } , { 74 , TARGET_STRING ( "hp_v4/Servo 3/PD Controller/Differentiator"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
"hp_v4/Servo 3/PD Controller/Differentiator" ) , TARGET_STRING ( "D" ) , 0 ,
0 , 0 } , { 76 , TARGET_STRING ( "hp_v4/Servo 4/PD Controller/Differentiator"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
"hp_v4/Servo 4/PD Controller/Differentiator" ) , TARGET_STRING ( "C" ) , 0 ,
0 , 0 } , { 78 , TARGET_STRING ( "hp_v4/Servo 4/PD Controller/Differentiator"
) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
"hp_v4/Servo 5/PD Controller/Differentiator" ) , TARGET_STRING ( "A" ) , 0 ,
0 , 0 } , { 80 , TARGET_STRING ( "hp_v4/Servo 5/PD Controller/Differentiator"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
"hp_v4/Servo 5/PD Controller/Differentiator" ) , TARGET_STRING ( "D" ) , 0 ,
0 , 0 } , { 82 , TARGET_STRING ( "hp_v4/Servo 6/PD Controller/Differentiator"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
"hp_v4/Servo 6/PD Controller/Differentiator" ) , TARGET_STRING ( "C" ) , 0 ,
0 , 0 } , { 84 , TARGET_STRING ( "hp_v4/Servo 6/PD Controller/Differentiator"
) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 85 , TARGET_STRING ( "P"
) , 0 , 0 , 0 } , { 86 , TARGET_STRING ( "tf" ) , 0 , 0 , 0 } , { 0 , ( NULL
) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . mllhy1xoml , & rtB . gn1n1fxih5 [
0 ] , & rtB . hhzq3ogi50 , & rtB . dp5bxc123k , & rtB . gpwpvx52su , & rtB .
i5bhabdhl2 , & rtB . dscxlqeplg , & rtB . fayoqg13fo , & rtB . j3zzcipv1r , &
rtB . pubnjkrbwr , & rtB . adsurmfp2a , & rtB . l1jg00snd3 , & rtB .
fihfkiqrmx , & rtB . b30ue11hhm , & rtB . buortkjwm2 , & rtB . ptoa4qnrig , &
rtB . orf45wfkfm , & rtB . c5pwxc5wo5 , & rtB . ckmycfifmz , & rtB .
fws3etbeh2 , & rtB . ox5zppqi1h , & rtB . lartlnyq5x , & rtB . d2o1c2v3x2 , &
rtB . payh5vdrtp , & rtB . piuvoczjcx , & rtB . d5hwduhu53 , & rtB .
n5qbqiye51 , & rtB . ovgjo1k5mz [ 0 ] , & rtB . mtn15vznzx [ 0 ] , & rtB .
pkw51cykqx [ 0 ] , & rtB . nyu1nqmmee [ 0 ] , & rtB . hjqo1tqvvs [ 0 ] , &
rtB . pj4l423n1b [ 0 ] , & rtB . h4hnjuf4ok [ 0 ] , & rtB . ba3ozliipq [ 0 ]
, & rtP . MotorAngles_Time0 [ 0 ] , & rtP . MotorAngles_Data0 [ 0 ] , & rtP .
uDLookupTable_tableData [ 0 ] , & rtP . uDLookupTable_bp01Data [ 0 ] , & rtP
. uDLookupTable_maxIndex , & rtP . uDLookupTable_dimSizes , & rtP .
uDLookupTable_numYWorkElts [ 0 ] , & rtP . uDLookupTable1_tableData [ 0 ] , &
rtP . uDLookupTable1_bp01Data [ 0 ] , & rtP . uDLookupTable1_maxIndex , & rtP
. uDLookupTable1_dimSizes , & rtP . uDLookupTable1_numYWorkElts [ 0 ] , & rtP
. uDLookupTable2_tableData [ 0 ] , & rtP . uDLookupTable2_bp01Data [ 0 ] , &
rtP . uDLookupTable2_maxIndex , & rtP . uDLookupTable2_dimSizes , & rtP .
uDLookupTable2_numYWorkElts [ 0 ] , & rtP . uDLookupTable3_tableData [ 0 ] ,
& rtP . uDLookupTable3_bp01Data [ 0 ] , & rtP . uDLookupTable3_maxIndex , &
rtP . uDLookupTable3_dimSizes , & rtP . uDLookupTable3_numYWorkElts [ 0 ] , &
rtP . uDLookupTable4_tableData [ 0 ] , & rtP . uDLookupTable4_bp01Data [ 0 ]
, & rtP . uDLookupTable4_maxIndex , & rtP . uDLookupTable4_dimSizes , & rtP .
uDLookupTable4_numYWorkElts [ 0 ] , & rtP . uDLookupTable5_tableData [ 0 ] ,
& rtP . uDLookupTable5_bp01Data [ 0 ] , & rtP . uDLookupTable5_maxIndex , &
rtP . uDLookupTable5_dimSizes , & rtP . uDLookupTable5_numYWorkElts [ 0 ] , &
rtP . Differentiator_A , & rtP . Differentiator_C , & rtP . Differentiator_D
, & rtP . Differentiator_A_opdpomj0oy , & rtP . Differentiator_C_nlo0afvsm0 ,
& rtP . Differentiator_D_ilujgvwoqy , & rtP . Differentiator_A_ny15flnyyl , &
rtP . Differentiator_C_dih140nhs2 , & rtP . Differentiator_D_akfaxsdhsp , &
rtP . Differentiator_A_ngyitj1gem , & rtP . Differentiator_C_mvzrzdbpid , &
rtP . Differentiator_D_lmu5sgqwp5 , & rtP . Differentiator_A_ks03awdndf , &
rtP . Differentiator_C_htp4rrhqlx , & rtP . Differentiator_D_id3tz2qugi , &
rtP . Differentiator_A_nkg2t2gpet , & rtP . Differentiator_C_ofqvx1s2jg , &
rtP . Differentiator_D_dhqehaoneg , & rtP . P , & rtP . tf , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T )
SS_UINT32 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 6 , 1 , 4 , 1 , 115 , 1 , 61 ,
1 , 40001 , 1 , 240006 , 1 , 2 , 1 } ; static const real_T rtcapiStoredFloats
[ ] = { 0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) ,
( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { static_cast < const
void * > ( & rtcapiStoredFloats [ 0 ] ) , static_cast < const void * > ( &
rtcapiStoredFloats [ 0 ] ) , static_cast < int8_T > ( 0 ) , static_cast <
uint8_T > ( 0 ) } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 35 , rtRootInputs , 0 , rtRootOutputs , 0 } , {
rtBlockParameters , 50 , rtModelParameters , 2 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 2535540888U , 2055807711U , 2378655218U ,
508624394U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * hp_v4_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void hp_v4_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void hp_v4_host_InitializeDataMapInfo ( hp_v4_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
