#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , {
"struct_7dWZSyvMmNBeWutbmrfr4F" , 17 , 24 } , {
"struct_XArRdz7W8rVNfuehXMdccE" , 18 , 8 } , { "struct_vFYyOIUFqu5DT6xyvjYkw"
, 19 , 312 } , { "uint64_T" , 20 , 8 } , { "int64_T" , 21 , 8 } , { "uint_T"
, 22 , 32 } , { "char_T" , 23 , 8 } , { "uchar_T" , 24 , 8 } , { "time_T" ,
25 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof
( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) ,
sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof (
boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T )
, sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof
( int64_T ) , sizeof ( uint64_T ) , sizeof ( int32_T ) , sizeof ( int32_T ) ,
sizeof ( int32_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof (
uint_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ;
static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" , "physical_connection" , "int64_T" , "uint64_T" ,
"struct_7dWZSyvMmNBeWutbmrfr4F" , "struct_XArRdz7W8rVNfuehXMdccE" ,
"struct_vFYyOIUFqu5DT6xyvjYkw" , "uint64_T" , "int64_T" , "uint_T" , "char_T"
, "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { {
( char_T * ) ( & rtB . hhzq3ogi50 ) , 0 , 0 , 232 } , { ( char_T * ) ( & rtDW
. dhwnkpcnxt ) , 0 , 0 , 480054 } , { ( char_T * ) ( & rtDW . cvejppxdpv .
TimePtr ) , 11 , 0 , 124 } , { ( char_T * ) ( & rtDW . m2oxmlar1f ) , 6 , 0 ,
1 } , { ( char_T * ) ( & rtDW . hgx5cayjie ) , 7 , 0 , 6 } , { ( char_T * ) (
& rtDW . fs5pe54qqo . PrevIndex ) , 10 , 0 , 4 } , { ( char_T * ) ( & rtDW .
cssxtmycgo ) , 3 , 0 , 12 } , { ( char_T * ) ( & rtDW . jx0wvnooqh ) , 8 , 0
, 4 } } ; static DataTypeTransitionTable rtBTransTable = { 8U ,
rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = { { (
char_T * ) ( & rtP . P ) , 0 , 0 , 760039 } , { ( char_T * ) ( & rtP .
uDLookupTable_maxIndex ) , 7 , 0 , 24 } } ; static DataTypeTransitionTable
rtPTransTable = { 2U , rtPTransitions } ;
