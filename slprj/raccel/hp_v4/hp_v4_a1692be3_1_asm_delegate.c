#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "pm_default_allocator.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void hp_v4_a1692be3_1_setTargets ( const RuntimeDerivedValuesBundle * rtdv ,
CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
hp_v4_a1692be3_1_resetAsmStateVector ( const void * mech , double * state ) {
double xx [ 2 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 1.0 ; state [ 0
] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 1 ] ; state [ 3 ]
= xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] =
xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx
[ 1 ] ; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx
[ 0 ] ; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx
[ 0 ] ; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx
[ 1 ] ; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx
[ 0 ] ; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx
[ 0 ] ; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx
[ 1 ] ; state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ; state [ 30 ] = xx
[ 0 ] ; state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ; state [ 33 ] = xx
[ 0 ] ; state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ; state [ 36 ] = xx
[ 1 ] ; state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ; state [ 39 ] = xx
[ 0 ] ; state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ; state [ 42 ] = xx
[ 0 ] ; state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [ 0 ] ; state [ 45 ] = xx
[ 1 ] ; state [ 46 ] = xx [ 0 ] ; state [ 47 ] = xx [ 0 ] ; state [ 48 ] = xx
[ 0 ] ; state [ 49 ] = xx [ 0 ] ; state [ 50 ] = xx [ 0 ] ; state [ 51 ] = xx
[ 0 ] ; state [ 52 ] = xx [ 0 ] ; state [ 53 ] = xx [ 0 ] ; state [ 54 ] = xx
[ 1 ] ; state [ 55 ] = xx [ 0 ] ; state [ 56 ] = xx [ 0 ] ; state [ 57 ] = xx
[ 0 ] ; state [ 58 ] = xx [ 0 ] ; state [ 59 ] = xx [ 0 ] ; state [ 60 ] = xx
[ 0 ] ; } void hp_v4_a1692be3_1_initializeTrackedAngleState ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const int * modeVector ,
const double * motionData , double * state ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector
; ( void ) motionData ; } void hp_v4_a1692be3_1_computeDiscreteState ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
modeVector , double * state ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector ; } void
hp_v4_a1692be3_1_adjustPosition ( const void * mech , const double *
dofDeltas , double * state ) { double xx [ 42 ] ; ( void ) mech ; xx [ 0 ] =
state [ 2 ] ; xx [ 1 ] = state [ 3 ] ; xx [ 2 ] = state [ 4 ] ; xx [ 3 ] =
state [ 5 ] ; xx [ 4 ] = dofDeltas [ 1 ] ; xx [ 5 ] = dofDeltas [ 2 ] ; xx [
6 ] = dofDeltas [ 3 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx + 4 ,
xx + 7 ) ; xx [ 0 ] = state [ 2 ] + xx [ 7 ] ; xx [ 1 ] = state [ 3 ] + xx [
8 ] ; xx [ 2 ] = state [ 4 ] + xx [ 9 ] ; xx [ 3 ] = state [ 5 ] + xx [ 10 ]
; xx [ 4 ] = 1.0e-64 ; xx [ 5 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] * xx
[ 1 ] + xx [ 2 ] * xx [ 2 ] + xx [ 3 ] * xx [ 3 ] ) ; if ( xx [ 4 ] > xx [ 5
] ) xx [ 5 ] = xx [ 4 ] ; xx [ 6 ] = state [ 9 ] ; xx [ 7 ] = state [ 10 ] ;
xx [ 8 ] = state [ 11 ] ; xx [ 9 ] = state [ 12 ] ; xx [ 10 ] = dofDeltas [ 4
] ; xx [ 11 ] = dofDeltas [ 5 ] ; xx [ 12 ] = dofDeltas [ 6 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 6 , xx + 10 , xx + 13 ) ; xx [ 6 ] =
state [ 9 ] + xx [ 13 ] ; xx [ 7 ] = state [ 10 ] + xx [ 14 ] ; xx [ 8 ] =
state [ 11 ] + xx [ 15 ] ; xx [ 9 ] = state [ 12 ] + xx [ 16 ] ; xx [ 10 ] =
sqrt ( xx [ 6 ] * xx [ 6 ] + xx [ 7 ] * xx [ 7 ] + xx [ 8 ] * xx [ 8 ] + xx [
9 ] * xx [ 9 ] ) ; if ( xx [ 4 ] > xx [ 10 ] ) xx [ 10 ] = xx [ 4 ] ; xx [ 11
] = state [ 18 ] ; xx [ 12 ] = state [ 19 ] ; xx [ 13 ] = state [ 20 ] ; xx [
14 ] = state [ 21 ] ; xx [ 15 ] = dofDeltas [ 8 ] ; xx [ 16 ] = dofDeltas [ 9
] ; xx [ 17 ] = dofDeltas [ 10 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 11
, xx + 15 , xx + 18 ) ; xx [ 11 ] = state [ 18 ] + xx [ 18 ] ; xx [ 12 ] =
state [ 19 ] + xx [ 19 ] ; xx [ 13 ] = state [ 20 ] + xx [ 20 ] ; xx [ 14 ] =
state [ 21 ] + xx [ 21 ] ; xx [ 15 ] = sqrt ( xx [ 11 ] * xx [ 11 ] + xx [ 12
] * xx [ 12 ] + xx [ 13 ] * xx [ 13 ] + xx [ 14 ] * xx [ 14 ] ) ; if ( xx [ 4
] > xx [ 15 ] ) xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = state [ 27 ] ; xx [ 17 ] =
state [ 28 ] ; xx [ 18 ] = state [ 29 ] ; xx [ 19 ] = state [ 30 ] ; xx [ 20
] = dofDeltas [ 12 ] ; xx [ 21 ] = dofDeltas [ 13 ] ; xx [ 22 ] = dofDeltas [
14 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 16 , xx + 20 , xx + 23 ) ; xx [
16 ] = state [ 27 ] + xx [ 23 ] ; xx [ 17 ] = state [ 28 ] + xx [ 24 ] ; xx [
18 ] = state [ 29 ] + xx [ 25 ] ; xx [ 19 ] = state [ 30 ] + xx [ 26 ] ; xx [
20 ] = sqrt ( xx [ 16 ] * xx [ 16 ] + xx [ 17 ] * xx [ 17 ] + xx [ 18 ] * xx
[ 18 ] + xx [ 19 ] * xx [ 19 ] ) ; if ( xx [ 4 ] > xx [ 20 ] ) xx [ 20 ] = xx
[ 4 ] ; xx [ 21 ] = state [ 36 ] ; xx [ 22 ] = state [ 37 ] ; xx [ 23 ] =
state [ 38 ] ; xx [ 24 ] = state [ 39 ] ; xx [ 25 ] = dofDeltas [ 16 ] ; xx [
26 ] = dofDeltas [ 17 ] ; xx [ 27 ] = dofDeltas [ 18 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 21 , xx + 25 , xx + 28 ) ; xx [ 21 ] =
state [ 36 ] + xx [ 28 ] ; xx [ 22 ] = state [ 37 ] + xx [ 29 ] ; xx [ 23 ] =
state [ 38 ] + xx [ 30 ] ; xx [ 24 ] = state [ 39 ] + xx [ 31 ] ; xx [ 25 ] =
sqrt ( xx [ 21 ] * xx [ 21 ] + xx [ 22 ] * xx [ 22 ] + xx [ 23 ] * xx [ 23 ]
+ xx [ 24 ] * xx [ 24 ] ) ; if ( xx [ 4 ] > xx [ 25 ] ) xx [ 25 ] = xx [ 4 ]
; xx [ 26 ] = state [ 45 ] ; xx [ 27 ] = state [ 46 ] ; xx [ 28 ] = state [
47 ] ; xx [ 29 ] = state [ 48 ] ; xx [ 30 ] = dofDeltas [ 20 ] ; xx [ 31 ] =
dofDeltas [ 21 ] ; xx [ 32 ] = dofDeltas [ 22 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 26 , xx + 30 , xx + 33 ) ; xx [ 26 ] =
state [ 45 ] + xx [ 33 ] ; xx [ 27 ] = state [ 46 ] + xx [ 34 ] ; xx [ 28 ] =
state [ 47 ] + xx [ 35 ] ; xx [ 29 ] = state [ 48 ] + xx [ 36 ] ; xx [ 30 ] =
sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 27 ] * xx [ 27 ] + xx [ 28 ] * xx [ 28 ]
+ xx [ 29 ] * xx [ 29 ] ) ; if ( xx [ 4 ] > xx [ 30 ] ) xx [ 30 ] = xx [ 4 ]
; xx [ 31 ] = state [ 54 ] ; xx [ 32 ] = state [ 55 ] ; xx [ 33 ] = state [
56 ] ; xx [ 34 ] = state [ 57 ] ; xx [ 35 ] = dofDeltas [ 24 ] ; xx [ 36 ] =
dofDeltas [ 25 ] ; xx [ 37 ] = dofDeltas [ 26 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 31 , xx + 35 , xx + 38 ) ; xx [ 31 ] =
state [ 54 ] + xx [ 38 ] ; xx [ 32 ] = state [ 55 ] + xx [ 39 ] ; xx [ 33 ] =
state [ 56 ] + xx [ 40 ] ; xx [ 34 ] = state [ 57 ] + xx [ 41 ] ; xx [ 35 ] =
sqrt ( xx [ 31 ] * xx [ 31 ] + xx [ 32 ] * xx [ 32 ] + xx [ 33 ] * xx [ 33 ]
+ xx [ 34 ] * xx [ 34 ] ) ; if ( xx [ 4 ] > xx [ 35 ] ) xx [ 35 ] = xx [ 4 ]
; state [ 0 ] = state [ 0 ] + dofDeltas [ 0 ] ; state [ 2 ] = xx [ 0 ] / xx [
5 ] ; state [ 3 ] = xx [ 1 ] / xx [ 5 ] ; state [ 4 ] = xx [ 2 ] / xx [ 5 ] ;
state [ 5 ] = xx [ 3 ] / xx [ 5 ] ; state [ 9 ] = xx [ 6 ] / xx [ 10 ] ;
state [ 10 ] = xx [ 7 ] / xx [ 10 ] ; state [ 11 ] = xx [ 8 ] / xx [ 10 ] ;
state [ 12 ] = xx [ 9 ] / xx [ 10 ] ; state [ 16 ] = state [ 16 ] + dofDeltas
[ 7 ] ; state [ 18 ] = xx [ 11 ] / xx [ 15 ] ; state [ 19 ] = xx [ 12 ] / xx
[ 15 ] ; state [ 20 ] = xx [ 13 ] / xx [ 15 ] ; state [ 21 ] = xx [ 14 ] / xx
[ 15 ] ; state [ 25 ] = state [ 25 ] + dofDeltas [ 11 ] ; state [ 27 ] = xx [
16 ] / xx [ 20 ] ; state [ 28 ] = xx [ 17 ] / xx [ 20 ] ; state [ 29 ] = xx [
18 ] / xx [ 20 ] ; state [ 30 ] = xx [ 19 ] / xx [ 20 ] ; state [ 34 ] =
state [ 34 ] + dofDeltas [ 15 ] ; state [ 36 ] = xx [ 21 ] / xx [ 25 ] ;
state [ 37 ] = xx [ 22 ] / xx [ 25 ] ; state [ 38 ] = xx [ 23 ] / xx [ 25 ] ;
state [ 39 ] = xx [ 24 ] / xx [ 25 ] ; state [ 43 ] = state [ 43 ] +
dofDeltas [ 19 ] ; state [ 45 ] = xx [ 26 ] / xx [ 30 ] ; state [ 46 ] = xx [
27 ] / xx [ 30 ] ; state [ 47 ] = xx [ 28 ] / xx [ 30 ] ; state [ 48 ] = xx [
29 ] / xx [ 30 ] ; state [ 52 ] = state [ 52 ] + dofDeltas [ 23 ] ; state [
54 ] = xx [ 31 ] / xx [ 35 ] ; state [ 55 ] = xx [ 32 ] / xx [ 35 ] ; state [
56 ] = xx [ 33 ] / xx [ 35 ] ; state [ 57 ] = xx [ 34 ] / xx [ 35 ] ; }
static void perturbAsmJointPrimitiveState_0_0 ( double mag , double * state )
{ state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_1_0 ( double mag , double * state ) {
double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [
0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ]
) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx
[ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [
4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 :
xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] ==
0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5
] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx
[ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [
8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx
[ 0 ] = state [ 2 ] ; xx [ 1 ] = state [ 3 ] ; xx [ 2 ] = state [ 4 ] ; xx [
3 ] = state [ 5 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4
) ; state [ 2 ] = xx [ 4 ] ; state [ 3 ] = xx [ 5 ] ; state [ 4 ] = xx [ 6 ]
; state [ 5 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_1_0v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 2 ] ; xx [ 4 ] = state [ 3
] ; xx [ 5 ] = state [ 4 ] ; xx [ 6 ] = state [ 5 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 2 ] =
xx [ 7 ] ; state [ 3 ] = xx [ 8 ] ; state [ 4 ] = xx [ 9 ] ; state [ 5 ] = xx
[ 10 ] ; state [ 6 ] = state [ 6 ] + 1.2 * mag ; state [ 7 ] = state [ 7 ] -
xx [ 2 ] ; state [ 8 ] = state [ 8 ] + 0.9 * mag ; } static void
perturbAsmJointPrimitiveState_2_0 ( double mag , double * state ) { double xx
[ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / (
xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [
3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ;
xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx
[ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] /
xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 :
xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ]
; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx
[ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [
13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 0 ] =
state [ 9 ] ; xx [ 1 ] = state [ 10 ] ; xx [ 2 ] = state [ 11 ] ; xx [ 3 ] =
state [ 12 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4 ) ;
state [ 9 ] = xx [ 4 ] ; state [ 10 ] = xx [ 5 ] ; state [ 11 ] = xx [ 6 ] ;
state [ 12 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_2_0v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 9 ] ; xx [ 4 ] = state [
10 ] ; xx [ 5 ] = state [ 11 ] ; xx [ 6 ] = state [ 12 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 9 ] =
xx [ 7 ] ; state [ 10 ] = xx [ 8 ] ; state [ 11 ] = xx [ 9 ] ; state [ 12 ] =
xx [ 10 ] ; state [ 13 ] = state [ 13 ] + 1.2 * mag ; state [ 14 ] = state [
14 ] - xx [ 2 ] ; state [ 15 ] = state [ 15 ] + 0.9 * mag ; } static void
perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) { state [
16 ] = state [ 16 ] + mag ; } static void perturbAsmJointPrimitiveState_3_0v
( double mag , double * state ) { state [ 16 ] = state [ 16 ] + mag ; state [
17 ] = state [ 17 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_4_0 ( double mag , double * state ) { double xx
[ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / (
xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [
3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ;
xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx
[ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] /
xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 :
xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ]
; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx
[ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [
13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 0 ] =
state [ 18 ] ; xx [ 1 ] = state [ 19 ] ; xx [ 2 ] = state [ 20 ] ; xx [ 3 ] =
state [ 21 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4 ) ;
state [ 18 ] = xx [ 4 ] ; state [ 19 ] = xx [ 5 ] ; state [ 20 ] = xx [ 6 ] ;
state [ 21 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_4_0v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 18 ] ; xx [ 4 ] = state [
19 ] ; xx [ 5 ] = state [ 20 ] ; xx [ 6 ] = state [ 21 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 18 ] =
xx [ 7 ] ; state [ 19 ] = xx [ 8 ] ; state [ 20 ] = xx [ 9 ] ; state [ 21 ] =
xx [ 10 ] ; state [ 22 ] = state [ 22 ] + 1.2 * mag ; state [ 23 ] = state [
23 ] - xx [ 2 ] ; state [ 24 ] = state [ 24 ] + 0.9 * mag ; } static void
perturbAsmJointPrimitiveState_5_0 ( double mag , double * state ) { state [
25 ] = state [ 25 ] + mag ; } static void perturbAsmJointPrimitiveState_5_0v
( double mag , double * state ) { state [ 25 ] = state [ 25 ] + mag ; state [
26 ] = state [ 26 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_6_0 ( double mag , double * state ) { double xx
[ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / (
xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [
3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ;
xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx
[ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] /
xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 :
xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ]
; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx
[ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [
13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 0 ] =
state [ 27 ] ; xx [ 1 ] = state [ 28 ] ; xx [ 2 ] = state [ 29 ] ; xx [ 3 ] =
state [ 30 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4 ) ;
state [ 27 ] = xx [ 4 ] ; state [ 28 ] = xx [ 5 ] ; state [ 29 ] = xx [ 6 ] ;
state [ 30 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_6_0v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 27 ] ; xx [ 4 ] = state [
28 ] ; xx [ 5 ] = state [ 29 ] ; xx [ 6 ] = state [ 30 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 27 ] =
xx [ 7 ] ; state [ 28 ] = xx [ 8 ] ; state [ 29 ] = xx [ 9 ] ; state [ 30 ] =
xx [ 10 ] ; state [ 31 ] = state [ 31 ] + 1.2 * mag ; state [ 32 ] = state [
32 ] - xx [ 2 ] ; state [ 33 ] = state [ 33 ] + 0.9 * mag ; } static void
perturbAsmJointPrimitiveState_7_0 ( double mag , double * state ) { state [
34 ] = state [ 34 ] + mag ; } static void perturbAsmJointPrimitiveState_7_0v
( double mag , double * state ) { state [ 34 ] = state [ 34 ] + mag ; state [
35 ] = state [ 35 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_8_0 ( double mag , double * state ) { double xx
[ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / (
xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [
3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ;
xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx
[ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] /
xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 :
xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ]
; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx
[ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [
13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 0 ] =
state [ 36 ] ; xx [ 1 ] = state [ 37 ] ; xx [ 2 ] = state [ 38 ] ; xx [ 3 ] =
state [ 39 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4 ) ;
state [ 36 ] = xx [ 4 ] ; state [ 37 ] = xx [ 5 ] ; state [ 38 ] = xx [ 6 ] ;
state [ 39 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_8_0v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 36 ] ; xx [ 4 ] = state [
37 ] ; xx [ 5 ] = state [ 38 ] ; xx [ 6 ] = state [ 39 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 36 ] =
xx [ 7 ] ; state [ 37 ] = xx [ 8 ] ; state [ 38 ] = xx [ 9 ] ; state [ 39 ] =
xx [ 10 ] ; state [ 40 ] = state [ 40 ] + 1.2 * mag ; state [ 41 ] = state [
41 ] - xx [ 2 ] ; state [ 42 ] = state [ 42 ] + 0.9 * mag ; } static void
perturbAsmJointPrimitiveState_9_0 ( double mag , double * state ) { state [
43 ] = state [ 43 ] + mag ; } static void perturbAsmJointPrimitiveState_9_0v
( double mag , double * state ) { state [ 43 ] = state [ 43 ] + mag ; state [
44 ] = state [ 44 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_10_0 ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 0 ] =
state [ 45 ] ; xx [ 1 ] = state [ 46 ] ; xx [ 2 ] = state [ 47 ] ; xx [ 3 ] =
state [ 48 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4 ) ;
state [ 45 ] = xx [ 4 ] ; state [ 46 ] = xx [ 5 ] ; state [ 47 ] = xx [ 6 ] ;
state [ 48 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_10_0v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 45 ] ; xx [ 4 ] = state [
46 ] ; xx [ 5 ] = state [ 47 ] ; xx [ 6 ] = state [ 48 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 45 ] =
xx [ 7 ] ; state [ 46 ] = xx [ 8 ] ; state [ 47 ] = xx [ 9 ] ; state [ 48 ] =
xx [ 10 ] ; state [ 49 ] = state [ 49 ] + 1.2 * mag ; state [ 50 ] = state [
50 ] - xx [ 2 ] ; state [ 51 ] = state [ 51 ] + 0.9 * mag ; } static void
perturbAsmJointPrimitiveState_11_0 ( double mag , double * state ) { state [
52 ] = state [ 52 ] + mag ; } static void perturbAsmJointPrimitiveState_11_0v
( double mag , double * state ) { state [ 52 ] = state [ 52 ] + mag ; state [
53 ] = state [ 53 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_12_0 ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 0 ] =
state [ 54 ] ; xx [ 1 ] = state [ 55 ] ; xx [ 2 ] = state [ 56 ] ; xx [ 3 ] =
state [ 57 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4 ) ;
state [ 54 ] = xx [ 4 ] ; state [ 55 ] = xx [ 5 ] ; state [ 56 ] = xx [ 6 ] ;
state [ 57 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_12_0v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 54 ] ; xx [ 4 ] = state [
55 ] ; xx [ 5 ] = state [ 56 ] ; xx [ 6 ] = state [ 57 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 54 ] =
xx [ 7 ] ; state [ 55 ] = xx [ 8 ] ; state [ 56 ] = xx [ 9 ] ; state [ 57 ] =
xx [ 10 ] ; state [ 58 ] = state [ 58 ] + 1.2 * mag ; state [ 59 ] = state [
59 ] - xx [ 2 ] ; state [ 60 ] = state [ 60 ] + 0.9 * mag ; } void
hp_v4_a1692be3_1_perturbAsmJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity , double
* state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( ( stageIdx * 6 +
primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbAsmJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbAsmJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbAsmJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbAsmJointPrimitiveState_8_0v ( mag , state ) ; break ; case 108 :
perturbAsmJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbAsmJointPrimitiveState_9_0v ( mag , state ) ; break ; case 120 :
perturbAsmJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbAsmJointPrimitiveState_10_0v ( mag , state ) ; break ; case 132 :
perturbAsmJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbAsmJointPrimitiveState_11_0v ( mag , state ) ; break ; case 144 :
perturbAsmJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbAsmJointPrimitiveState_12_0v ( mag , state ) ; break ; } } static void
computePosDofBlendMatrix_1_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 2.0
; xx [ 2 ] = xx [ 1 ] * ( state [ 3 ] * state [ 4 ] - state [ 2 ] * state [ 5
] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( state [
2 ] * state [ 2 ] + state [ 3 ] * state [ 3 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [
6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8
] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx
[ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx
[ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 3 ] * state [ 5 ]
+ state [ 2 ] * state [ 4 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [
11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ]
; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] =
xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] /
xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ]
= xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [
14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] =
xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx
[ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ]
; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType
) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ]
+ xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [
5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7
] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ;
xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] =
xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13
] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx
[ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ;
matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ;
matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ;
} static void computePosDofBlendMatrix_2_0 ( const double * state , int
partialType , double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 9.87654321 ;
xx [ 1 ] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 10 ] * state [ 11 ] - state
[ 9 ] * state [ 12 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx
[ 5 ] = ( state [ 9 ] * state [ 9 ] + state [ 10 ] * state [ 10 ] ) * xx [ 1
] - xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] +
xx [ 6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [
9 ] = xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3
] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state
[ 10 ] * state [ 12 ] + state [ 9 ] * state [ 11 ] ) * xx [ 1 ] ; xx [ 1 ] =
sqrt ( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0
: xx [ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16
] = xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx
[ 12 ] ; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0
? 0.0 : xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] /
xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ]
= xx [ 8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [
8 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + (
partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ;
xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [
16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] =
xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] =
sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] ==
0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx
[ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx
[ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10
] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + (
partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx
[ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ]
= xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [
11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ;
matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ;
matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ;
matrix [ 8 ] = xx [ 8 ] ; } static void computePosDofBlendMatrix_4_0 ( const
double * state , int partialType , double * matrix ) { double xx [ 20 ] ; xx
[ 0 ] = 9.87654321 ; xx [ 1 ] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 19 ] *
state [ 20 ] - state [ 18 ] * state [ 21 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ]
; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( state [ 18 ] * state [ 18 ] + state [ 19 ] *
state [ 19 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [
7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx
[ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9
] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] =
0.0 ; xx [ 11 ] = ( state [ 19 ] * state [ 21 ] + state [ 18 ] * state [ 20 ]
) * xx [ 1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12
] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [
15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] =
xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] = xx [ 13 + ( partialType ) ] ;
xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ]
== 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [
2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx
[ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ;
xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 :
xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [
15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] =
xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx
[ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [
7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ;
xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [
16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType
) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [
8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3
] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [
10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ;
xx [ 0 ] = xx [ 11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1
] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4
] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7
] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ; } static void
computePosDofBlendMatrix_6_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 2.0
; xx [ 2 ] = xx [ 1 ] * ( state [ 28 ] * state [ 29 ] - state [ 27 ] * state
[ 30 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = (
state [ 27 ] * state [ 27 ] + state [ 28 ] * state [ 28 ] ) * xx [ 1 ] - xx [
4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ]
) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx
[ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0
? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 28 ] *
state [ 30 ] + state [ 27 ] * state [ 29 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt (
xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx
[ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ]
; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 :
xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ]
; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8
] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx
[ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType
) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] =
xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [
10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + (
partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9
] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx
[ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ]
= xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [
10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [
13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ]
= xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ]
; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4
] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx
[ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + (
partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix
[ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix
[ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix
[ 8 ] = xx [ 8 ] ; } static void computePosDofBlendMatrix_8_0 ( const double
* state , int partialType , double * matrix ) { double xx [ 20 ] ; xx [ 0 ] =
9.87654321 ; xx [ 1 ] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 37 ] * state [
38 ] - state [ 36 ] * state [ 39 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [
4 ] = 1.0 ; xx [ 5 ] = ( state [ 36 ] * state [ 36 ] + state [ 37 ] * state [
37 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] =
sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ]
/ xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ;
xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx
[ 11 ] = ( state [ 37 ] * state [ 39 ] + state [ 36 ] * state [ 38 ] ) * xx [
1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [
1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] =
xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8
] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ]
= xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ?
0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx
[ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ;
xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ]
= xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ]
/ xx [ 1 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [
4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ;
xx [ 1 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx
[ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [
5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] =
xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [
10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [
12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ]
= xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [
11 + ( partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5
] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx
[ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ]
= xx [ 11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [
2 ] ; matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [
8 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [
8 ] ; matrix [ 8 ] = xx [ 8 ] ; } static void computePosDofBlendMatrix_10_0 (
const double * state , int partialType , double * matrix ) { double xx [ 20 ]
; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 46
] * state [ 47 ] - state [ 45 ] * state [ 48 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [
2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( state [ 45 ] * state [ 45 ] + state [ 46
] * state [ 46 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ;
xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 :
- xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx
[ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ]
= 0.0 ; xx [ 11 ] = ( state [ 46 ] * state [ 48 ] + state [ 45 ] * state [ 47
] ) * xx [ 1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [
12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ;
xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18
] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] = xx [ 13 + ( partialType ) ]
; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3
] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx
[ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] =
xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3
] ; xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0
: xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [
15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] =
xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx
[ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [
7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ;
xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [
16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType
) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [
8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3
] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [
10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ;
xx [ 0 ] = xx [ 11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1
] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4
] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7
] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ; } static void
computePosDofBlendMatrix_12_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 2.0
; xx [ 2 ] = xx [ 1 ] * ( state [ 55 ] * state [ 56 ] - state [ 54 ] * state
[ 57 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = (
state [ 54 ] * state [ 54 ] + state [ 55 ] * state [ 55 ] ) * xx [ 1 ] - xx [
4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ]
) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx
[ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0
? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 55 ] *
state [ 57 ] + state [ 54 ] * state [ 56 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt (
xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx
[ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ]
; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 :
xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ]
; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8
] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx
[ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType
) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] =
xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [
10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + (
partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9
] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx
[ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ]
= xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [
10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [
13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ]
= xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ]
; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4
] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx
[ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + (
partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix
[ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix
[ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix
[ 8 ] = xx [ 8 ] ; } void hp_v4_a1692be3_1_computePosDofBlendMatrix ( const
void * mech , size_t stageIdx , size_t primIdx , const double * state , int
partialType , double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void
) primIdx ; ( void ) state ; ( void ) partialType ; ( void ) matrix ; switch
( ( stageIdx * 6 + primIdx ) ) { case 6 : computePosDofBlendMatrix_1_0 (
state , partialType , matrix ) ; break ; case 12 :
computePosDofBlendMatrix_2_0 ( state , partialType , matrix ) ; break ; case
24 : computePosDofBlendMatrix_4_0 ( state , partialType , matrix ) ; break ;
case 36 : computePosDofBlendMatrix_6_0 ( state , partialType , matrix ) ;
break ; case 48 : computePosDofBlendMatrix_8_0 ( state , partialType , matrix
) ; break ; case 60 : computePosDofBlendMatrix_10_0 ( state , partialType ,
matrix ) ; break ; case 72 : computePosDofBlendMatrix_12_0 ( state ,
partialType , matrix ) ; break ; } } static void computeVelDofBlendMatrix_1_0
( const double * state , int partialType , double * matrix ) { double xx [ 15
] ; ( void ) state ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0
; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ]
= xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 +
( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx
[ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx
[ 11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1
] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9
] = xx [ 1 ] ; xx [ 12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
0 ] = xx [ 3 + ( partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] =
xx [ 11 ] ; matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4
] = xx [ 14 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [
7 ] = xx [ 13 ] ; matrix [ 8 ] = xx [ 13 ] ; } static void
computeVelDofBlendMatrix_2_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx [ 0 ] = 9.87654321
; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ; matrix [ 2 ] = xx [ 12
] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14 ] ; matrix [ 5 ] = xx [
0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [ 13 ] ; matrix [ 8 ] = xx
[ 13 ] ; } static void computeVelDofBlendMatrix_4_0 ( const double * state ,
int partialType , double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx
[ 0 ] = 9.87654321 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + (
partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ;
matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14
] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [
13 ] ; matrix [ 8 ] = xx [ 13 ] ; } static void computeVelDofBlendMatrix_6_0
( const double * state , int partialType , double * matrix ) { double xx [ 15
] ; ( void ) state ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0
; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ]
= xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 +
( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx
[ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx
[ 11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1
] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9
] = xx [ 1 ] ; xx [ 12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
0 ] = xx [ 3 + ( partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] =
xx [ 11 ] ; matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4
] = xx [ 14 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [
7 ] = xx [ 13 ] ; matrix [ 8 ] = xx [ 13 ] ; } static void
computeVelDofBlendMatrix_8_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx [ 0 ] = 9.87654321
; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ; matrix [ 2 ] = xx [ 12
] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14 ] ; matrix [ 5 ] = xx [
0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [ 13 ] ; matrix [ 8 ] = xx
[ 13 ] ; } static void computeVelDofBlendMatrix_10_0 ( const double * state ,
int partialType , double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx
[ 0 ] = 9.87654321 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + (
partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ;
matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14
] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [
13 ] ; matrix [ 8 ] = xx [ 13 ] ; } static void computeVelDofBlendMatrix_12_0
( const double * state , int partialType , double * matrix ) { double xx [ 15
] ; ( void ) state ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0
; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ]
= xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 +
( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx
[ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx
[ 11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1
] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9
] = xx [ 1 ] ; xx [ 12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
0 ] = xx [ 3 + ( partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] =
xx [ 11 ] ; matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4
] = xx [ 14 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [
7 ] = xx [ 13 ] ; matrix [ 8 ] = xx [ 13 ] ; } void
hp_v4_a1692be3_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { case 6 : computeVelDofBlendMatrix_1_0 ( state , partialType ,
matrix ) ; break ; case 12 : computeVelDofBlendMatrix_2_0 ( state ,
partialType , matrix ) ; break ; case 24 : computeVelDofBlendMatrix_4_0 (
state , partialType , matrix ) ; break ; case 36 :
computeVelDofBlendMatrix_6_0 ( state , partialType , matrix ) ; break ; case
48 : computeVelDofBlendMatrix_8_0 ( state , partialType , matrix ) ; break ;
case 60 : computeVelDofBlendMatrix_10_0 ( state , partialType , matrix ) ;
break ; case 72 : computeVelDofBlendMatrix_12_0 ( state , partialType ,
matrix ) ; break ; } } static void projectPartiallyTargetedPos_1_0 ( const
double * origState , int partialType , double * state ) { boolean_T bb [ 2 ]
; double xx [ 17 ] ; xx [ 0 ] = 2.0 ; xx [ 1 ] = ( state [ 3 ] * state [ 5 ]
+ state [ 2 ] * state [ 4 ] ) * xx [ 0 ] ; xx [ 2 ] = 0.99999999999999 ; bb [
0 ] = fabs ( xx [ 1 ] ) > xx [ 2 ] ; xx [ 3 ] = 1.570796326794897 ; if ( xx [
1 ] < 0.0 ) xx [ 4 ] = - 1.0 ; else if ( xx [ 1 ] > 0.0 ) xx [ 4 ] = + 1.0 ;
else xx [ 4 ] = 0.0 ; xx [ 5 ] = fabs ( xx [ 1 ] ) > 1.0 ? atan2 ( xx [ 1 ] ,
0.0 ) : asin ( xx [ 1 ] ) ; xx [ 1 ] = bb [ 0 ] ? xx [ 3 ] * xx [ 4 ] : xx [
5 ] ; xx [ 5 ] = ( origState [ 3 ] * origState [ 5 ] + origState [ 2 ] *
origState [ 4 ] ) * xx [ 0 ] ; bb [ 1 ] = fabs ( xx [ 5 ] ) > xx [ 2 ] ; if (
xx [ 5 ] < 0.0 ) xx [ 2 ] = - 1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 2 ] = +
1.0 ; else xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [
5 ] , 0.0 ) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [ 1 ] ? xx [ 3 ] * xx [ 2 ] :
xx [ 6 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 5 ] ;
xx [ 9 ] = xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ; xx [ 12 ]
= xx [ 5 ] ; xx [ 1 ] = xx [ 6 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1
] ) ; xx [ 5 ] = 0.5 ; xx [ 6 ] = state [ 4 ] * state [ 5 ] ; xx [ 7 ] =
state [ 2 ] * state [ 3 ] ; xx [ 8 ] = state [ 2 ] * state [ 2 ] ; xx [ 9 ] =
1.0 ; xx [ 10 ] = ( xx [ 8 ] + state [ 4 ] * state [ 4 ] ) * xx [ 0 ] - xx [
9 ] ; xx [ 11 ] = ( xx [ 6 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 10 ] = ( xx [ 11
] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ; xx [
11 ] = ( xx [ 8 ] + state [ 5 ] * state [ 5 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [
12 ] = - ( xx [ 0 ] * ( xx [ 6 ] - xx [ 7 ] ) ) ; xx [ 11 ] = ( xx [ 12 ] ==
0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 6 ]
= bb [ 0 ] ? xx [ 5 ] * xx [ 10 ] : xx [ 11 ] ; xx [ 7 ] = ( xx [ 8 ] + state
[ 3 ] * state [ 3 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 10 ] = - ( xx [ 0 ] * (
state [ 3 ] * state [ 4 ] - state [ 2 ] * state [ 5 ] ) ) ; xx [ 7 ] = ( xx [
10 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 10 ] , xx [ 7 ] ) ; xx
[ 8 ] = bb [ 0 ] ? xx [ 4 ] * xx [ 6 ] : xx [ 7 ] ; xx [ 4 ] = origState [ 4
] * origState [ 5 ] ; xx [ 7 ] = origState [ 2 ] * origState [ 3 ] ; xx [ 10
] = origState [ 2 ] * origState [ 2 ] ; xx [ 11 ] = ( xx [ 10 ] + origState [
4 ] * origState [ 4 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = ( xx [ 4 ] + xx [
7 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0
: atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 12 ] = ( xx [ 10 ] + origState [ 5 ]
* origState [ 5 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 13 ] = - ( xx [ 0 ] * ( xx [
4 ] - xx [ 7 ] ) ) ; xx [ 12 ] = ( xx [ 13 ] == 0.0 && xx [ 12 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [ 4 ] = bb [ 1 ] ? xx [ 5 ] * xx [
11 ] : xx [ 12 ] ; xx [ 5 ] = ( xx [ 10 ] + origState [ 3 ] * origState [ 3 ]
) * xx [ 0 ] - xx [ 9 ] ; xx [ 7 ] = - ( xx [ 0 ] * ( origState [ 3 ] *
origState [ 4 ] - origState [ 2 ] * origState [ 5 ] ) ) ; xx [ 5 ] = ( xx [ 7
] == 0.0 && xx [ 5 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 7 ] , xx [ 5 ] ) ; xx [ 0
] = bb [ 1 ] ? xx [ 2 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 9 ] = xx [ 8 ] ; xx [ 10
] = xx [ 8 ] ; xx [ 11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [
0 ] ; xx [ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 9 + (
partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx [ 6 ] ; xx [ 8
] = xx [ 4 ] ; xx [ 9 ] = xx [ 6 ] ; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [
6 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 4 ] = xx [ 7 + (
partialType ) ] ; xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 6 ] = sin ( xx [ 0 ] ) ;
xx [ 0 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 2 ] * xx [ 0 ] ; xx [ 7 ] = sin
( xx [ 1 ] ) ; xx [ 1 ] = xx [ 5 ] * xx [ 2 ] ; xx [ 8 ] = xx [ 3 ] * xx [ 2
] ; xx [ 9 ] = xx [ 5 ] * xx [ 6 ] + xx [ 4 ] * xx [ 7 ] ; xx [ 10 ] = xx [ 0
] * xx [ 6 ] - xx [ 1 ] * xx [ 7 ] ; xx [ 11 ] = - ( xx [ 3 ] * xx [ 6 ] ) ;
xx [ 12 ] = xx [ 1 ] - xx [ 0 ] * xx [ 7 ] * xx [ 6 ] ; xx [ 13 ] = xx [ 4 ]
+ xx [ 5 ] * xx [ 7 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = - ( xx
[ 3 ] * xx [ 0 ] ) ; xx [ 16 ] = xx [ 5 ] * xx [ 3 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 8 , xx + 0 ) ; state [ 2 ] = xx [
0 ] ; state [ 3 ] = xx [ 1 ] ; state [ 4 ] = xx [ 2 ] ; state [ 5 ] = xx [ 3
] ; } static void projectPartiallyTargetedPos_2_0 ( const double * origState
, int partialType , double * state ) { boolean_T bb [ 2 ] ; double xx [ 17 ]
; xx [ 0 ] = 2.0 ; xx [ 1 ] = ( state [ 10 ] * state [ 12 ] + state [ 9 ] *
state [ 11 ] ) * xx [ 0 ] ; xx [ 2 ] = 0.99999999999999 ; bb [ 0 ] = fabs (
xx [ 1 ] ) > xx [ 2 ] ; xx [ 3 ] = 1.570796326794897 ; if ( xx [ 1 ] < 0.0 )
xx [ 4 ] = - 1.0 ; else if ( xx [ 1 ] > 0.0 ) xx [ 4 ] = + 1.0 ; else xx [ 4
] = 0.0 ; xx [ 5 ] = fabs ( xx [ 1 ] ) > 1.0 ? atan2 ( xx [ 1 ] , 0.0 ) :
asin ( xx [ 1 ] ) ; xx [ 1 ] = bb [ 0 ] ? xx [ 3 ] * xx [ 4 ] : xx [ 5 ] ; xx
[ 5 ] = ( origState [ 10 ] * origState [ 12 ] + origState [ 9 ] * origState [
11 ] ) * xx [ 0 ] ; bb [ 1 ] = fabs ( xx [ 5 ] ) > xx [ 2 ] ; if ( xx [ 5 ] <
0.0 ) xx [ 2 ] = - 1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 2 ] = + 1.0 ; else
xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [ 5 ] , 0.0
) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [ 1 ] ? xx [ 3 ] * xx [ 2 ] : xx [ 6 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ]
= xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 5
] ; xx [ 1 ] = xx [ 6 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx
[ 5 ] = 0.5 ; xx [ 6 ] = state [ 11 ] * state [ 12 ] ; xx [ 7 ] = state [ 9 ]
* state [ 10 ] ; xx [ 8 ] = state [ 9 ] * state [ 9 ] ; xx [ 9 ] = 1.0 ; xx [
10 ] = ( xx [ 8 ] + state [ 11 ] * state [ 11 ] ) * xx [ 0 ] - xx [ 9 ] ; xx
[ 11 ] = ( xx [ 6 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 10 ] = ( xx [ 11 ] == 0.0
&& xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ; xx [ 11 ] = (
xx [ 8 ] + state [ 12 ] * state [ 12 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] =
- ( xx [ 0 ] * ( xx [ 6 ] - xx [ 7 ] ) ) ; xx [ 11 ] = ( xx [ 12 ] == 0.0 &&
xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 6 ] = bb [
0 ] ? xx [ 5 ] * xx [ 10 ] : xx [ 11 ] ; xx [ 7 ] = ( xx [ 8 ] + state [ 10 ]
* state [ 10 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 10 ] = - ( xx [ 0 ] * ( state [
10 ] * state [ 11 ] - state [ 9 ] * state [ 12 ] ) ) ; xx [ 7 ] = ( xx [ 10 ]
== 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 10 ] , xx [ 7 ] ) ; xx [ 8 ]
= bb [ 0 ] ? xx [ 4 ] * xx [ 6 ] : xx [ 7 ] ; xx [ 4 ] = origState [ 11 ] *
origState [ 12 ] ; xx [ 7 ] = origState [ 9 ] * origState [ 10 ] ; xx [ 10 ]
= origState [ 9 ] * origState [ 9 ] ; xx [ 11 ] = ( xx [ 10 ] + origState [
11 ] * origState [ 11 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = ( xx [ 4 ] + xx
[ 7 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 12 ] = ( xx [ 10 ] + origState [
12 ] * origState [ 12 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 13 ] = - ( xx [ 0 ] *
( xx [ 4 ] - xx [ 7 ] ) ) ; xx [ 12 ] = ( xx [ 13 ] == 0.0 && xx [ 12 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [ 4 ] = bb [ 1 ] ? xx [ 5
] * xx [ 11 ] : xx [ 12 ] ; xx [ 5 ] = ( xx [ 10 ] + origState [ 10 ] *
origState [ 10 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 7 ] = - ( xx [ 0 ] * (
origState [ 10 ] * origState [ 11 ] - origState [ 9 ] * origState [ 12 ] ) )
; xx [ 5 ] = ( xx [ 7 ] == 0.0 && xx [ 5 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 7 ]
, xx [ 5 ] ) ; xx [ 0 ] = bb [ 1 ] ? xx [ 2 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 9
] = xx [ 8 ] ; xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = xx [ 8 ] ; xx [ 12 ] = xx [
8 ] ; xx [ 13 ] = xx [ 0 ] ; xx [ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] ; xx
[ 0 ] = xx [ 9 + ( partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] =
xx [ 6 ] ; xx [ 8 ] = xx [ 4 ] ; xx [ 9 ] = xx [ 6 ] ; xx [ 10 ] = xx [ 4 ] ;
xx [ 11 ] = xx [ 6 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 4 ]
= xx [ 7 + ( partialType ) ] ; xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 6 ] = sin (
xx [ 0 ] ) ; xx [ 0 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 2 ] * xx [ 0 ] ;
xx [ 7 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 5 ] * xx [ 2 ] ; xx [ 8 ] = xx
[ 3 ] * xx [ 2 ] ; xx [ 9 ] = xx [ 5 ] * xx [ 6 ] + xx [ 4 ] * xx [ 7 ] ; xx
[ 10 ] = xx [ 0 ] * xx [ 6 ] - xx [ 1 ] * xx [ 7 ] ; xx [ 11 ] = - ( xx [ 3 ]
* xx [ 6 ] ) ; xx [ 12 ] = xx [ 1 ] - xx [ 0 ] * xx [ 7 ] * xx [ 6 ] ; xx [
13 ] = xx [ 4 ] + xx [ 5 ] * xx [ 7 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 7 ] ; xx
[ 15 ] = - ( xx [ 3 ] * xx [ 0 ] ) ; xx [ 16 ] = xx [ 5 ] * xx [ 3 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 8 , xx + 0 ) ; state [ 9 ] = xx [
0 ] ; state [ 10 ] = xx [ 1 ] ; state [ 11 ] = xx [ 2 ] ; state [ 12 ] = xx [
3 ] ; } static void projectPartiallyTargetedPos_4_0 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 2 ] ; double
xx [ 17 ] ; xx [ 0 ] = 2.0 ; xx [ 1 ] = ( state [ 19 ] * state [ 21 ] + state
[ 18 ] * state [ 20 ] ) * xx [ 0 ] ; xx [ 2 ] = 0.99999999999999 ; bb [ 0 ] =
fabs ( xx [ 1 ] ) > xx [ 2 ] ; xx [ 3 ] = 1.570796326794897 ; if ( xx [ 1 ] <
0.0 ) xx [ 4 ] = - 1.0 ; else if ( xx [ 1 ] > 0.0 ) xx [ 4 ] = + 1.0 ; else
xx [ 4 ] = 0.0 ; xx [ 5 ] = fabs ( xx [ 1 ] ) > 1.0 ? atan2 ( xx [ 1 ] , 0.0
) : asin ( xx [ 1 ] ) ; xx [ 1 ] = bb [ 0 ] ? xx [ 3 ] * xx [ 4 ] : xx [ 5 ]
; xx [ 5 ] = ( origState [ 19 ] * origState [ 21 ] + origState [ 18 ] *
origState [ 20 ] ) * xx [ 0 ] ; bb [ 1 ] = fabs ( xx [ 5 ] ) > xx [ 2 ] ; if
( xx [ 5 ] < 0.0 ) xx [ 2 ] = - 1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 2 ] = +
1.0 ; else xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [
5 ] , 0.0 ) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [ 1 ] ? xx [ 3 ] * xx [ 2 ] :
xx [ 6 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 5 ] ;
xx [ 9 ] = xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ; xx [ 12 ]
= xx [ 5 ] ; xx [ 1 ] = xx [ 6 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1
] ) ; xx [ 5 ] = 0.5 ; xx [ 6 ] = state [ 20 ] * state [ 21 ] ; xx [ 7 ] =
state [ 18 ] * state [ 19 ] ; xx [ 8 ] = state [ 18 ] * state [ 18 ] ; xx [ 9
] = 1.0 ; xx [ 10 ] = ( xx [ 8 ] + state [ 20 ] * state [ 20 ] ) * xx [ 0 ] -
xx [ 9 ] ; xx [ 11 ] = ( xx [ 6 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 10 ] = ( xx
[ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ;
xx [ 11 ] = ( xx [ 8 ] + state [ 21 ] * state [ 21 ] ) * xx [ 0 ] - xx [ 9 ]
; xx [ 12 ] = - ( xx [ 0 ] * ( xx [ 6 ] - xx [ 7 ] ) ) ; xx [ 11 ] = ( xx [
12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ;
xx [ 6 ] = bb [ 0 ] ? xx [ 5 ] * xx [ 10 ] : xx [ 11 ] ; xx [ 7 ] = ( xx [ 8
] + state [ 19 ] * state [ 19 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 10 ] = - ( xx
[ 0 ] * ( state [ 19 ] * state [ 20 ] - state [ 18 ] * state [ 21 ] ) ) ; xx
[ 7 ] = ( xx [ 10 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 10 ] ,
xx [ 7 ] ) ; xx [ 8 ] = bb [ 0 ] ? xx [ 4 ] * xx [ 6 ] : xx [ 7 ] ; xx [ 4 ]
= origState [ 20 ] * origState [ 21 ] ; xx [ 7 ] = origState [ 18 ] *
origState [ 19 ] ; xx [ 10 ] = origState [ 18 ] * origState [ 18 ] ; xx [ 11
] = ( xx [ 10 ] + origState [ 20 ] * origState [ 20 ] ) * xx [ 0 ] - xx [ 9 ]
; xx [ 12 ] = ( xx [ 4 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 12 ] ==
0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 12 ]
= ( xx [ 10 ] + origState [ 21 ] * origState [ 21 ] ) * xx [ 0 ] - xx [ 9 ] ;
xx [ 13 ] = - ( xx [ 0 ] * ( xx [ 4 ] - xx [ 7 ] ) ) ; xx [ 12 ] = ( xx [ 13
] == 0.0 && xx [ 12 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [
4 ] = bb [ 1 ] ? xx [ 5 ] * xx [ 11 ] : xx [ 12 ] ; xx [ 5 ] = ( xx [ 10 ] +
origState [ 19 ] * origState [ 19 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 7 ] = - (
xx [ 0 ] * ( origState [ 19 ] * origState [ 20 ] - origState [ 18 ] *
origState [ 21 ] ) ) ; xx [ 5 ] = ( xx [ 7 ] == 0.0 && xx [ 5 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 7 ] , xx [ 5 ] ) ; xx [ 0 ] = bb [ 1 ] ? xx [ 2 ] * xx [ 4
] : xx [ 5 ] ; xx [ 9 ] = xx [ 8 ] ; xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = xx [
8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 0 ] ; xx [ 14 ] = xx [ 0 ] ; xx
[ 15 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 9 + ( partialType ) ] ; xx [ 2 ] = cos (
xx [ 0 ] ) ; xx [ 7 ] = xx [ 6 ] ; xx [ 8 ] = xx [ 4 ] ; xx [ 9 ] = xx [ 6 ]
; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [ 6 ] ; xx [ 12 ] = xx [ 4 ] ; xx [
13 ] = xx [ 6 ] ; xx [ 4 ] = xx [ 7 + ( partialType ) ] ; xx [ 5 ] = cos ( xx
[ 4 ] ) ; xx [ 6 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = sin ( xx [ 4 ] ) ; xx [ 4
] = xx [ 2 ] * xx [ 0 ] ; xx [ 7 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 5 ] *
xx [ 2 ] ; xx [ 8 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 9 ] = xx [ 5 ] * xx [ 6 ] +
xx [ 4 ] * xx [ 7 ] ; xx [ 10 ] = xx [ 0 ] * xx [ 6 ] - xx [ 1 ] * xx [ 7 ] ;
xx [ 11 ] = - ( xx [ 3 ] * xx [ 6 ] ) ; xx [ 12 ] = xx [ 1 ] - xx [ 0 ] * xx
[ 7 ] * xx [ 6 ] ; xx [ 13 ] = xx [ 4 ] + xx [ 5 ] * xx [ 7 ] * xx [ 6 ] ; xx
[ 14 ] = xx [ 7 ] ; xx [ 15 ] = - ( xx [ 3 ] * xx [ 0 ] ) ; xx [ 16 ] = xx [
5 ] * xx [ 3 ] ; pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 8 , xx + 0 ) ;
state [ 18 ] = xx [ 0 ] ; state [ 19 ] = xx [ 1 ] ; state [ 20 ] = xx [ 2 ] ;
state [ 21 ] = xx [ 3 ] ; } static void projectPartiallyTargetedPos_6_0 (
const double * origState , int partialType , double * state ) { boolean_T bb
[ 2 ] ; double xx [ 17 ] ; xx [ 0 ] = 2.0 ; xx [ 1 ] = ( state [ 28 ] * state
[ 30 ] + state [ 27 ] * state [ 29 ] ) * xx [ 0 ] ; xx [ 2 ] =
0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 1 ] ) > xx [ 2 ] ; xx [ 3 ] =
1.570796326794897 ; if ( xx [ 1 ] < 0.0 ) xx [ 4 ] = - 1.0 ; else if ( xx [ 1
] > 0.0 ) xx [ 4 ] = + 1.0 ; else xx [ 4 ] = 0.0 ; xx [ 5 ] = fabs ( xx [ 1 ]
) > 1.0 ? atan2 ( xx [ 1 ] , 0.0 ) : asin ( xx [ 1 ] ) ; xx [ 1 ] = bb [ 0 ]
? xx [ 3 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 5 ] = ( origState [ 28 ] * origState
[ 30 ] + origState [ 27 ] * origState [ 29 ] ) * xx [ 0 ] ; bb [ 1 ] = fabs (
xx [ 5 ] ) > xx [ 2 ] ; if ( xx [ 5 ] < 0.0 ) xx [ 2 ] = - 1.0 ; else if ( xx
[ 5 ] > 0.0 ) xx [ 2 ] = + 1.0 ; else xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs ( xx [
5 ] ) > 1.0 ? atan2 ( xx [ 5 ] , 0.0 ) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [
1 ] ? xx [ 3 ] * xx [ 2 ] : xx [ 6 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [
1 ] ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] ; xx [
11 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 5 ] ; xx [ 1 ] = xx [ 6 + ( partialType )
] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 5 ] = 0.5 ; xx [ 6 ] = state [ 29 ] *
state [ 30 ] ; xx [ 7 ] = state [ 27 ] * state [ 28 ] ; xx [ 8 ] = state [ 27
] * state [ 27 ] ; xx [ 9 ] = 1.0 ; xx [ 10 ] = ( xx [ 8 ] + state [ 29 ] *
state [ 29 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 11 ] = ( xx [ 6 ] + xx [ 7 ] ) *
xx [ 0 ] ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2
( xx [ 11 ] , xx [ 10 ] ) ; xx [ 11 ] = ( xx [ 8 ] + state [ 30 ] * state [
30 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = - ( xx [ 0 ] * ( xx [ 6 ] - xx [ 7
] ) ) ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 (
xx [ 12 ] , xx [ 11 ] ) ; xx [ 6 ] = bb [ 0 ] ? xx [ 5 ] * xx [ 10 ] : xx [
11 ] ; xx [ 7 ] = ( xx [ 8 ] + state [ 28 ] * state [ 28 ] ) * xx [ 0 ] - xx
[ 9 ] ; xx [ 10 ] = - ( xx [ 0 ] * ( state [ 28 ] * state [ 29 ] - state [ 27
] * state [ 30 ] ) ) ; xx [ 7 ] = ( xx [ 10 ] == 0.0 && xx [ 7 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 10 ] , xx [ 7 ] ) ; xx [ 8 ] = bb [ 0 ] ? xx [ 4 ] * xx [
6 ] : xx [ 7 ] ; xx [ 4 ] = origState [ 29 ] * origState [ 30 ] ; xx [ 7 ] =
origState [ 27 ] * origState [ 28 ] ; xx [ 10 ] = origState [ 27 ] *
origState [ 27 ] ; xx [ 11 ] = ( xx [ 10 ] + origState [ 29 ] * origState [
29 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = ( xx [ 4 ] + xx [ 7 ] ) * xx [ 0 ]
; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [
12 ] , xx [ 11 ] ) ; xx [ 12 ] = ( xx [ 10 ] + origState [ 30 ] * origState [
30 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 13 ] = - ( xx [ 0 ] * ( xx [ 4 ] - xx [ 7
] ) ) ; xx [ 12 ] = ( xx [ 13 ] == 0.0 && xx [ 12 ] == 0.0 ) ? 0.0 : atan2 (
xx [ 13 ] , xx [ 12 ] ) ; xx [ 4 ] = bb [ 1 ] ? xx [ 5 ] * xx [ 11 ] : xx [
12 ] ; xx [ 5 ] = ( xx [ 10 ] + origState [ 28 ] * origState [ 28 ] ) * xx [
0 ] - xx [ 9 ] ; xx [ 7 ] = - ( xx [ 0 ] * ( origState [ 28 ] * origState [
29 ] - origState [ 27 ] * origState [ 30 ] ) ) ; xx [ 5 ] = ( xx [ 7 ] == 0.0
&& xx [ 5 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 7 ] , xx [ 5 ] ) ; xx [ 0 ] = bb [
1 ] ? xx [ 2 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 9 ] = xx [ 8 ] ; xx [ 10 ] = xx [
8 ] ; xx [ 11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 0 ] ; xx
[ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 9 + ( partialType
) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx [ 6 ] ; xx [ 8 ] = xx [ 4 ]
; xx [ 9 ] = xx [ 6 ] ; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [ 6 ] ; xx [ 12
] = xx [ 4 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 4 ] = xx [ 7 + ( partialType ) ] ;
xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 6 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = sin (
xx [ 4 ] ) ; xx [ 4 ] = xx [ 2 ] * xx [ 0 ] ; xx [ 7 ] = sin ( xx [ 1 ] ) ;
xx [ 1 ] = xx [ 5 ] * xx [ 2 ] ; xx [ 8 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 9 ] =
xx [ 5 ] * xx [ 6 ] + xx [ 4 ] * xx [ 7 ] ; xx [ 10 ] = xx [ 0 ] * xx [ 6 ] -
xx [ 1 ] * xx [ 7 ] ; xx [ 11 ] = - ( xx [ 3 ] * xx [ 6 ] ) ; xx [ 12 ] = xx
[ 1 ] - xx [ 0 ] * xx [ 7 ] * xx [ 6 ] ; xx [ 13 ] = xx [ 4 ] + xx [ 5 ] * xx
[ 7 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = - ( xx [ 3 ] * xx [ 0 ]
) ; xx [ 16 ] = xx [ 5 ] * xx [ 3 ] ; pm_math_Quaternion_Matrix3x3Ctor_ra (
xx + 8 , xx + 0 ) ; state [ 27 ] = xx [ 0 ] ; state [ 28 ] = xx [ 1 ] ; state
[ 29 ] = xx [ 2 ] ; state [ 30 ] = xx [ 3 ] ; } static void
projectPartiallyTargetedPos_8_0 ( const double * origState , int partialType
, double * state ) { boolean_T bb [ 2 ] ; double xx [ 17 ] ; xx [ 0 ] = 2.0 ;
xx [ 1 ] = ( state [ 37 ] * state [ 39 ] + state [ 36 ] * state [ 38 ] ) * xx
[ 0 ] ; xx [ 2 ] = 0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 1 ] ) > xx [ 2 ]
; xx [ 3 ] = 1.570796326794897 ; if ( xx [ 1 ] < 0.0 ) xx [ 4 ] = - 1.0 ;
else if ( xx [ 1 ] > 0.0 ) xx [ 4 ] = + 1.0 ; else xx [ 4 ] = 0.0 ; xx [ 5 ]
= fabs ( xx [ 1 ] ) > 1.0 ? atan2 ( xx [ 1 ] , 0.0 ) : asin ( xx [ 1 ] ) ; xx
[ 1 ] = bb [ 0 ] ? xx [ 3 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 5 ] = ( origState [
37 ] * origState [ 39 ] + origState [ 36 ] * origState [ 38 ] ) * xx [ 0 ] ;
bb [ 1 ] = fabs ( xx [ 5 ] ) > xx [ 2 ] ; if ( xx [ 5 ] < 0.0 ) xx [ 2 ] = -
1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 2 ] = + 1.0 ; else xx [ 2 ] = 0.0 ; xx
[ 6 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [ 5 ] , 0.0 ) : asin ( xx [ 5 ]
) ; xx [ 5 ] = bb [ 1 ] ? xx [ 3 ] * xx [ 2 ] : xx [ 6 ] ; xx [ 6 ] = xx [ 1
] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = xx [ 5 ] ; xx [ 10
] = xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 5 ] ; xx [ 1 ] = xx [
6 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 5 ] = 0.5 ; xx [ 6
] = state [ 38 ] * state [ 39 ] ; xx [ 7 ] = state [ 36 ] * state [ 37 ] ; xx
[ 8 ] = state [ 36 ] * state [ 36 ] ; xx [ 9 ] = 1.0 ; xx [ 10 ] = ( xx [ 8 ]
+ state [ 38 ] * state [ 38 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 11 ] = ( xx [ 6
] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ; xx [ 11 ] = ( xx [ 8 ] +
state [ 39 ] * state [ 39 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = - ( xx [ 0
] * ( xx [ 6 ] - xx [ 7 ] ) ) ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 6 ] = bb [ 0 ] ? xx [
5 ] * xx [ 10 ] : xx [ 11 ] ; xx [ 7 ] = ( xx [ 8 ] + state [ 37 ] * state [
37 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 10 ] = - ( xx [ 0 ] * ( state [ 37 ] *
state [ 38 ] - state [ 36 ] * state [ 39 ] ) ) ; xx [ 7 ] = ( xx [ 10 ] ==
0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 10 ] , xx [ 7 ] ) ; xx [ 8 ] =
bb [ 0 ] ? xx [ 4 ] * xx [ 6 ] : xx [ 7 ] ; xx [ 4 ] = origState [ 38 ] *
origState [ 39 ] ; xx [ 7 ] = origState [ 36 ] * origState [ 37 ] ; xx [ 10 ]
= origState [ 36 ] * origState [ 36 ] ; xx [ 11 ] = ( xx [ 10 ] + origState [
38 ] * origState [ 38 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = ( xx [ 4 ] + xx
[ 7 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 12 ] = ( xx [ 10 ] + origState [
39 ] * origState [ 39 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 13 ] = - ( xx [ 0 ] *
( xx [ 4 ] - xx [ 7 ] ) ) ; xx [ 12 ] = ( xx [ 13 ] == 0.0 && xx [ 12 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [ 4 ] = bb [ 1 ] ? xx [ 5
] * xx [ 11 ] : xx [ 12 ] ; xx [ 5 ] = ( xx [ 10 ] + origState [ 37 ] *
origState [ 37 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 7 ] = - ( xx [ 0 ] * (
origState [ 37 ] * origState [ 38 ] - origState [ 36 ] * origState [ 39 ] ) )
; xx [ 5 ] = ( xx [ 7 ] == 0.0 && xx [ 5 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 7 ]
, xx [ 5 ] ) ; xx [ 0 ] = bb [ 1 ] ? xx [ 2 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 9
] = xx [ 8 ] ; xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = xx [ 8 ] ; xx [ 12 ] = xx [
8 ] ; xx [ 13 ] = xx [ 0 ] ; xx [ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] ; xx
[ 0 ] = xx [ 9 + ( partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] =
xx [ 6 ] ; xx [ 8 ] = xx [ 4 ] ; xx [ 9 ] = xx [ 6 ] ; xx [ 10 ] = xx [ 4 ] ;
xx [ 11 ] = xx [ 6 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 4 ]
= xx [ 7 + ( partialType ) ] ; xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 6 ] = sin (
xx [ 0 ] ) ; xx [ 0 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 2 ] * xx [ 0 ] ;
xx [ 7 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 5 ] * xx [ 2 ] ; xx [ 8 ] = xx
[ 3 ] * xx [ 2 ] ; xx [ 9 ] = xx [ 5 ] * xx [ 6 ] + xx [ 4 ] * xx [ 7 ] ; xx
[ 10 ] = xx [ 0 ] * xx [ 6 ] - xx [ 1 ] * xx [ 7 ] ; xx [ 11 ] = - ( xx [ 3 ]
* xx [ 6 ] ) ; xx [ 12 ] = xx [ 1 ] - xx [ 0 ] * xx [ 7 ] * xx [ 6 ] ; xx [
13 ] = xx [ 4 ] + xx [ 5 ] * xx [ 7 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 7 ] ; xx
[ 15 ] = - ( xx [ 3 ] * xx [ 0 ] ) ; xx [ 16 ] = xx [ 5 ] * xx [ 3 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 8 , xx + 0 ) ; state [ 36 ] = xx [
0 ] ; state [ 37 ] = xx [ 1 ] ; state [ 38 ] = xx [ 2 ] ; state [ 39 ] = xx [
3 ] ; } static void projectPartiallyTargetedPos_10_0 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 2 ] ; double
xx [ 17 ] ; xx [ 0 ] = 2.0 ; xx [ 1 ] = ( state [ 46 ] * state [ 48 ] + state
[ 45 ] * state [ 47 ] ) * xx [ 0 ] ; xx [ 2 ] = 0.99999999999999 ; bb [ 0 ] =
fabs ( xx [ 1 ] ) > xx [ 2 ] ; xx [ 3 ] = 1.570796326794897 ; if ( xx [ 1 ] <
0.0 ) xx [ 4 ] = - 1.0 ; else if ( xx [ 1 ] > 0.0 ) xx [ 4 ] = + 1.0 ; else
xx [ 4 ] = 0.0 ; xx [ 5 ] = fabs ( xx [ 1 ] ) > 1.0 ? atan2 ( xx [ 1 ] , 0.0
) : asin ( xx [ 1 ] ) ; xx [ 1 ] = bb [ 0 ] ? xx [ 3 ] * xx [ 4 ] : xx [ 5 ]
; xx [ 5 ] = ( origState [ 46 ] * origState [ 48 ] + origState [ 45 ] *
origState [ 47 ] ) * xx [ 0 ] ; bb [ 1 ] = fabs ( xx [ 5 ] ) > xx [ 2 ] ; if
( xx [ 5 ] < 0.0 ) xx [ 2 ] = - 1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 2 ] = +
1.0 ; else xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [
5 ] , 0.0 ) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [ 1 ] ? xx [ 3 ] * xx [ 2 ] :
xx [ 6 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 5 ] ;
xx [ 9 ] = xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ; xx [ 12 ]
= xx [ 5 ] ; xx [ 1 ] = xx [ 6 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1
] ) ; xx [ 5 ] = 0.5 ; xx [ 6 ] = state [ 47 ] * state [ 48 ] ; xx [ 7 ] =
state [ 45 ] * state [ 46 ] ; xx [ 8 ] = state [ 45 ] * state [ 45 ] ; xx [ 9
] = 1.0 ; xx [ 10 ] = ( xx [ 8 ] + state [ 47 ] * state [ 47 ] ) * xx [ 0 ] -
xx [ 9 ] ; xx [ 11 ] = ( xx [ 6 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 10 ] = ( xx
[ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ;
xx [ 11 ] = ( xx [ 8 ] + state [ 48 ] * state [ 48 ] ) * xx [ 0 ] - xx [ 9 ]
; xx [ 12 ] = - ( xx [ 0 ] * ( xx [ 6 ] - xx [ 7 ] ) ) ; xx [ 11 ] = ( xx [
12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ;
xx [ 6 ] = bb [ 0 ] ? xx [ 5 ] * xx [ 10 ] : xx [ 11 ] ; xx [ 7 ] = ( xx [ 8
] + state [ 46 ] * state [ 46 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 10 ] = - ( xx
[ 0 ] * ( state [ 46 ] * state [ 47 ] - state [ 45 ] * state [ 48 ] ) ) ; xx
[ 7 ] = ( xx [ 10 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 10 ] ,
xx [ 7 ] ) ; xx [ 8 ] = bb [ 0 ] ? xx [ 4 ] * xx [ 6 ] : xx [ 7 ] ; xx [ 4 ]
= origState [ 47 ] * origState [ 48 ] ; xx [ 7 ] = origState [ 45 ] *
origState [ 46 ] ; xx [ 10 ] = origState [ 45 ] * origState [ 45 ] ; xx [ 11
] = ( xx [ 10 ] + origState [ 47 ] * origState [ 47 ] ) * xx [ 0 ] - xx [ 9 ]
; xx [ 12 ] = ( xx [ 4 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 12 ] ==
0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 12 ]
= ( xx [ 10 ] + origState [ 48 ] * origState [ 48 ] ) * xx [ 0 ] - xx [ 9 ] ;
xx [ 13 ] = - ( xx [ 0 ] * ( xx [ 4 ] - xx [ 7 ] ) ) ; xx [ 12 ] = ( xx [ 13
] == 0.0 && xx [ 12 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [
4 ] = bb [ 1 ] ? xx [ 5 ] * xx [ 11 ] : xx [ 12 ] ; xx [ 5 ] = ( xx [ 10 ] +
origState [ 46 ] * origState [ 46 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 7 ] = - (
xx [ 0 ] * ( origState [ 46 ] * origState [ 47 ] - origState [ 45 ] *
origState [ 48 ] ) ) ; xx [ 5 ] = ( xx [ 7 ] == 0.0 && xx [ 5 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 7 ] , xx [ 5 ] ) ; xx [ 0 ] = bb [ 1 ] ? xx [ 2 ] * xx [ 4
] : xx [ 5 ] ; xx [ 9 ] = xx [ 8 ] ; xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = xx [
8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 0 ] ; xx [ 14 ] = xx [ 0 ] ; xx
[ 15 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 9 + ( partialType ) ] ; xx [ 2 ] = cos (
xx [ 0 ] ) ; xx [ 7 ] = xx [ 6 ] ; xx [ 8 ] = xx [ 4 ] ; xx [ 9 ] = xx [ 6 ]
; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [ 6 ] ; xx [ 12 ] = xx [ 4 ] ; xx [
13 ] = xx [ 6 ] ; xx [ 4 ] = xx [ 7 + ( partialType ) ] ; xx [ 5 ] = cos ( xx
[ 4 ] ) ; xx [ 6 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = sin ( xx [ 4 ] ) ; xx [ 4
] = xx [ 2 ] * xx [ 0 ] ; xx [ 7 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 5 ] *
xx [ 2 ] ; xx [ 8 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 9 ] = xx [ 5 ] * xx [ 6 ] +
xx [ 4 ] * xx [ 7 ] ; xx [ 10 ] = xx [ 0 ] * xx [ 6 ] - xx [ 1 ] * xx [ 7 ] ;
xx [ 11 ] = - ( xx [ 3 ] * xx [ 6 ] ) ; xx [ 12 ] = xx [ 1 ] - xx [ 0 ] * xx
[ 7 ] * xx [ 6 ] ; xx [ 13 ] = xx [ 4 ] + xx [ 5 ] * xx [ 7 ] * xx [ 6 ] ; xx
[ 14 ] = xx [ 7 ] ; xx [ 15 ] = - ( xx [ 3 ] * xx [ 0 ] ) ; xx [ 16 ] = xx [
5 ] * xx [ 3 ] ; pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 8 , xx + 0 ) ;
state [ 45 ] = xx [ 0 ] ; state [ 46 ] = xx [ 1 ] ; state [ 47 ] = xx [ 2 ] ;
state [ 48 ] = xx [ 3 ] ; } static void projectPartiallyTargetedPos_12_0 (
const double * origState , int partialType , double * state ) { boolean_T bb
[ 2 ] ; double xx [ 17 ] ; xx [ 0 ] = 2.0 ; xx [ 1 ] = ( state [ 55 ] * state
[ 57 ] + state [ 54 ] * state [ 56 ] ) * xx [ 0 ] ; xx [ 2 ] =
0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 1 ] ) > xx [ 2 ] ; xx [ 3 ] =
1.570796326794897 ; if ( xx [ 1 ] < 0.0 ) xx [ 4 ] = - 1.0 ; else if ( xx [ 1
] > 0.0 ) xx [ 4 ] = + 1.0 ; else xx [ 4 ] = 0.0 ; xx [ 5 ] = fabs ( xx [ 1 ]
) > 1.0 ? atan2 ( xx [ 1 ] , 0.0 ) : asin ( xx [ 1 ] ) ; xx [ 1 ] = bb [ 0 ]
? xx [ 3 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 5 ] = ( origState [ 55 ] * origState
[ 57 ] + origState [ 54 ] * origState [ 56 ] ) * xx [ 0 ] ; bb [ 1 ] = fabs (
xx [ 5 ] ) > xx [ 2 ] ; if ( xx [ 5 ] < 0.0 ) xx [ 2 ] = - 1.0 ; else if ( xx
[ 5 ] > 0.0 ) xx [ 2 ] = + 1.0 ; else xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs ( xx [
5 ] ) > 1.0 ? atan2 ( xx [ 5 ] , 0.0 ) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [
1 ] ? xx [ 3 ] * xx [ 2 ] : xx [ 6 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [
1 ] ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] ; xx [
11 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 5 ] ; xx [ 1 ] = xx [ 6 + ( partialType )
] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 5 ] = 0.5 ; xx [ 6 ] = state [ 56 ] *
state [ 57 ] ; xx [ 7 ] = state [ 54 ] * state [ 55 ] ; xx [ 8 ] = state [ 54
] * state [ 54 ] ; xx [ 9 ] = 1.0 ; xx [ 10 ] = ( xx [ 8 ] + state [ 56 ] *
state [ 56 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 11 ] = ( xx [ 6 ] + xx [ 7 ] ) *
xx [ 0 ] ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2
( xx [ 11 ] , xx [ 10 ] ) ; xx [ 11 ] = ( xx [ 8 ] + state [ 57 ] * state [
57 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = - ( xx [ 0 ] * ( xx [ 6 ] - xx [ 7
] ) ) ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 (
xx [ 12 ] , xx [ 11 ] ) ; xx [ 6 ] = bb [ 0 ] ? xx [ 5 ] * xx [ 10 ] : xx [
11 ] ; xx [ 7 ] = ( xx [ 8 ] + state [ 55 ] * state [ 55 ] ) * xx [ 0 ] - xx
[ 9 ] ; xx [ 10 ] = - ( xx [ 0 ] * ( state [ 55 ] * state [ 56 ] - state [ 54
] * state [ 57 ] ) ) ; xx [ 7 ] = ( xx [ 10 ] == 0.0 && xx [ 7 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 10 ] , xx [ 7 ] ) ; xx [ 8 ] = bb [ 0 ] ? xx [ 4 ] * xx [
6 ] : xx [ 7 ] ; xx [ 4 ] = origState [ 56 ] * origState [ 57 ] ; xx [ 7 ] =
origState [ 54 ] * origState [ 55 ] ; xx [ 10 ] = origState [ 54 ] *
origState [ 54 ] ; xx [ 11 ] = ( xx [ 10 ] + origState [ 56 ] * origState [
56 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = ( xx [ 4 ] + xx [ 7 ] ) * xx [ 0 ]
; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [
12 ] , xx [ 11 ] ) ; xx [ 12 ] = ( xx [ 10 ] + origState [ 57 ] * origState [
57 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 13 ] = - ( xx [ 0 ] * ( xx [ 4 ] - xx [ 7
] ) ) ; xx [ 12 ] = ( xx [ 13 ] == 0.0 && xx [ 12 ] == 0.0 ) ? 0.0 : atan2 (
xx [ 13 ] , xx [ 12 ] ) ; xx [ 4 ] = bb [ 1 ] ? xx [ 5 ] * xx [ 11 ] : xx [
12 ] ; xx [ 5 ] = ( xx [ 10 ] + origState [ 55 ] * origState [ 55 ] ) * xx [
0 ] - xx [ 9 ] ; xx [ 7 ] = - ( xx [ 0 ] * ( origState [ 55 ] * origState [
56 ] - origState [ 54 ] * origState [ 57 ] ) ) ; xx [ 5 ] = ( xx [ 7 ] == 0.0
&& xx [ 5 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 7 ] , xx [ 5 ] ) ; xx [ 0 ] = bb [
1 ] ? xx [ 2 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 9 ] = xx [ 8 ] ; xx [ 10 ] = xx [
8 ] ; xx [ 11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 0 ] ; xx
[ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 9 + ( partialType
) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 7 ] = xx [ 6 ] ; xx [ 8 ] = xx [ 4 ]
; xx [ 9 ] = xx [ 6 ] ; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [ 6 ] ; xx [ 12
] = xx [ 4 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 4 ] = xx [ 7 + ( partialType ) ] ;
xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 6 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = sin (
xx [ 4 ] ) ; xx [ 4 ] = xx [ 2 ] * xx [ 0 ] ; xx [ 7 ] = sin ( xx [ 1 ] ) ;
xx [ 1 ] = xx [ 5 ] * xx [ 2 ] ; xx [ 8 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 9 ] =
xx [ 5 ] * xx [ 6 ] + xx [ 4 ] * xx [ 7 ] ; xx [ 10 ] = xx [ 0 ] * xx [ 6 ] -
xx [ 1 ] * xx [ 7 ] ; xx [ 11 ] = - ( xx [ 3 ] * xx [ 6 ] ) ; xx [ 12 ] = xx
[ 1 ] - xx [ 0 ] * xx [ 7 ] * xx [ 6 ] ; xx [ 13 ] = xx [ 4 ] + xx [ 5 ] * xx
[ 7 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = - ( xx [ 3 ] * xx [ 0 ]
) ; xx [ 16 ] = xx [ 5 ] * xx [ 3 ] ; pm_math_Quaternion_Matrix3x3Ctor_ra (
xx + 8 , xx + 0 ) ; state [ 54 ] = xx [ 0 ] ; state [ 55 ] = xx [ 1 ] ; state
[ 56 ] = xx [ 2 ] ; state [ 57 ] = xx [ 3 ] ; } void
hp_v4_a1692be3_1_projectPartiallyTargetedPos ( const void * mech , size_t
stageIdx , size_t primIdx , const double * origState , int partialType ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) origState ; ( void ) partialType ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) ) { case 6 : projectPartiallyTargetedPos_1_0 (
origState , partialType , state ) ; break ; case 12 :
projectPartiallyTargetedPos_2_0 ( origState , partialType , state ) ; break ;
case 24 : projectPartiallyTargetedPos_4_0 ( origState , partialType , state )
; break ; case 36 : projectPartiallyTargetedPos_6_0 ( origState , partialType
, state ) ; break ; case 48 : projectPartiallyTargetedPos_8_0 ( origState ,
partialType , state ) ; break ; case 60 : projectPartiallyTargetedPos_10_0 (
origState , partialType , state ) ; break ; case 72 :
projectPartiallyTargetedPos_12_0 ( origState , partialType , state ) ; break
; } } void hp_v4_a1692be3_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 248 ] ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.5004402260104069 ; xx [ 1 ] =
0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [
4 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 5 ] = - xx [ 4 ] ; xx [ 6 ] =
1.016807521344378e-3 ; xx [ 7 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 6 ] * xx
[ 7 ] ; xx [ 8 ] = 0.8657710899485228 ; xx [ 9 ] = 0.9999994830510986 ; xx [
10 ] = xx [ 9 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 0 ] * xx [ 2 ] + xx [ 8 ] * xx [
10 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 8 ] * xx [ 2 ] - xx
[ 0 ] * xx [ 10 ] ; xx [ 12 ] = xx [ 7 ] ; xx [ 13 ] = xx [ 11 ] ; xx [ 14 ]
= xx [ 3 ] ; xx [ 0 ] = 0.03998704855625266 ; xx [ 2 ] = xx [ 0 ] * xx [ 11 ]
; xx [ 8 ] = 5.357679714268354e-5 ; xx [ 10 ] = xx [ 8 ] * xx [ 3 ] + xx [ 7
] * xx [ 0 ] ; xx [ 15 ] = xx [ 8 ] * xx [ 11 ] ; xx [ 16 ] = xx [ 2 ] ; xx [
17 ] = - xx [ 10 ] ; xx [ 18 ] = xx [ 15 ] ; pm_math_Vector3_cross_ra ( xx +
12 , xx + 16 , xx + 19 ) ; xx [ 12 ] = 2.0 ; xx [ 13 ] = 0.07299038105676657
- ( ( xx [ 19 ] - xx [ 2 ] * xx [ 4 ] ) * xx [ 12 ] - xx [ 8 ] ) ; xx [ 2 ] =
( xx [ 4 ] * xx [ 10 ] + xx [ 20 ] ) * xx [ 12 ] ; xx [ 10 ] =
0.07678203230275514 - ( xx [ 0 ] + xx [ 12 ] * ( xx [ 21 ] - xx [ 15 ] * xx [
4 ] ) ) ; xx [ 4 ] = 5.084038263768928e-4 ; xx [ 14 ] = 0.9999998707627665 ;
xx [ 15 ] = xx [ 4 ] * state [ 4 ] + xx [ 14 ] * state [ 2 ] ; xx [ 16 ] = xx
[ 4 ] * state [ 5 ] - xx [ 14 ] * state [ 3 ] ; xx [ 17 ] = - xx [ 16 ] ; xx
[ 18 ] = xx [ 4 ] * state [ 2 ] - xx [ 14 ] * state [ 4 ] ; xx [ 19 ] = - xx
[ 18 ] ; xx [ 20 ] = xx [ 4 ] * state [ 3 ] + xx [ 14 ] * state [ 5 ] ; xx [
21 ] = 0.07994638184694522 ; xx [ 22 ] = 0.14 ; xx [ 23 ] = xx [ 18 ] * xx [
22 ] ; xx [ 24 ] = xx [ 22 ] * xx [ 20 ] ; xx [ 25 ] = xx [ 21 ] + xx [ 22 ]
- ( xx [ 18 ] * xx [ 23 ] + xx [ 24 ] * xx [ 20 ] ) * xx [ 12 ] ; xx [ 26 ] =
( xx [ 24 ] * xx [ 15 ] + xx [ 16 ] * xx [ 23 ] ) * xx [ 12 ] ; xx [ 27 ] =
0.04006839315796021 ; xx [ 28 ] = xx [ 27 ] + xx [ 12 ] * ( xx [ 23 ] * xx [
15 ] - xx [ 16 ] * xx [ 24 ] ) ; xx [ 23 ] = 0.1395577324697271 ; xx [ 24 ] =
0.9902139361309295 ; xx [ 29 ] = xx [ 23 ] * state [ 12 ] - xx [ 24 ] * state
[ 9 ] ; xx [ 30 ] = xx [ 23 ] * state [ 11 ] + xx [ 24 ] * state [ 10 ] ; xx
[ 31 ] = - xx [ 30 ] ; xx [ 32 ] = xx [ 24 ] * state [ 11 ] - xx [ 23 ] *
state [ 10 ] ; xx [ 33 ] = - xx [ 32 ] ; xx [ 34 ] = xx [ 23 ] * state [ 9 ]
+ xx [ 24 ] * state [ 12 ] ; xx [ 35 ] = - xx [ 34 ] ; xx [ 36 ] = xx [ 31 ]
; xx [ 37 ] = xx [ 33 ] ; xx [ 38 ] = xx [ 35 ] ; xx [ 39 ] =
0.03530169195229536 ; xx [ 40 ] = xx [ 39 ] * xx [ 34 ] ; xx [ 41 ] =
0.0654271681639358 ; xx [ 42 ] = xx [ 41 ] * xx [ 34 ] ; xx [ 34 ] = xx [ 39
] * xx [ 30 ] - xx [ 32 ] * xx [ 41 ] ; xx [ 43 ] = - xx [ 40 ] ; xx [ 44 ] =
xx [ 42 ] ; xx [ 45 ] = xx [ 34 ] ; pm_math_Vector3_cross_ra ( xx + 36 , xx +
43 , xx + 46 ) ; xx [ 30 ] = xx [ 22 ] + xx [ 12 ] * ( xx [ 46 ] - xx [ 40 ]
* xx [ 29 ] ) - xx [ 41 ] ; xx [ 32 ] = ( xx [ 42 ] * xx [ 29 ] + xx [ 47 ] )
* xx [ 12 ] - xx [ 39 ] ; xx [ 36 ] = ( xx [ 34 ] * xx [ 29 ] + xx [ 48 ] ) *
xx [ 12 ] ; xx [ 34 ] = 0.8662794937748999 ; xx [ 37 ] = xx [ 1 ] * state [
16 ] ; xx [ 38 ] = cos ( xx [ 37 ] ) ; xx [ 40 ] = xx [ 34 ] * xx [ 38 ] ; xx
[ 42 ] = - xx [ 40 ] ; xx [ 43 ] = sin ( xx [ 37 ] ) ; xx [ 37 ] = xx [ 6 ] *
xx [ 43 ] ; xx [ 44 ] = 0.4995596447523596 ; xx [ 45 ] = xx [ 9 ] * xx [ 43 ]
; xx [ 43 ] = xx [ 34 ] * xx [ 37 ] + xx [ 44 ] * xx [ 45 ] ; xx [ 46 ] = -
xx [ 43 ] ; xx [ 47 ] = xx [ 44 ] * xx [ 38 ] ; xx [ 38 ] = - xx [ 47 ] ; xx
[ 48 ] = xx [ 44 ] * xx [ 37 ] - xx [ 34 ] * xx [ 45 ] ; xx [ 34 ] =
0.1029903810567666 ; xx [ 49 ] = xx [ 46 ] ; xx [ 50 ] = xx [ 38 ] ; xx [ 51
] = xx [ 48 ] ; xx [ 37 ] = xx [ 0 ] * xx [ 47 ] ; xx [ 44 ] = xx [ 8 ] * xx
[ 48 ] + xx [ 43 ] * xx [ 0 ] ; xx [ 43 ] = xx [ 8 ] * xx [ 47 ] ; xx [ 52 ]
= xx [ 37 ] ; xx [ 53 ] = - xx [ 44 ] ; xx [ 54 ] = - xx [ 43 ] ;
pm_math_Vector3_cross_ra ( xx + 49 , xx + 52 , xx + 55 ) ; xx [ 45 ] = ( xx [
55 ] - xx [ 37 ] * xx [ 40 ] ) * xx [ 12 ] - xx [ 8 ] ; xx [ 37 ] = ( xx [ 40
] * xx [ 44 ] + xx [ 56 ] ) * xx [ 12 ] ; xx [ 44 ] = 0.02482050807568879 ;
xx [ 47 ] = xx [ 12 ] * ( xx [ 57 ] + xx [ 43 ] * xx [ 40 ] ) - xx [ 0 ] ; xx
[ 40 ] = xx [ 14 ] * state [ 18 ] - xx [ 4 ] * state [ 20 ] ; xx [ 43 ] = xx
[ 14 ] * state [ 19 ] + xx [ 4 ] * state [ 21 ] ; xx [ 49 ] = xx [ 14 ] *
state [ 20 ] + xx [ 4 ] * state [ 18 ] ; xx [ 50 ] = xx [ 14 ] * state [ 21 ]
- xx [ 4 ] * state [ 19 ] ; xx [ 51 ] = xx [ 49 ] * xx [ 22 ] ; xx [ 52 ] =
xx [ 22 ] * xx [ 50 ] ; xx [ 53 ] = xx [ 21 ] + xx [ 22 ] - ( xx [ 49 ] * xx
[ 51 ] + xx [ 52 ] * xx [ 50 ] ) * xx [ 12 ] ; xx [ 54 ] = ( xx [ 52 ] * xx [
40 ] + xx [ 43 ] * xx [ 51 ] ) * xx [ 12 ] ; xx [ 55 ] = xx [ 12 ] * ( xx [
43 ] * xx [ 52 ] - xx [ 51 ] * xx [ 40 ] ) - xx [ 27 ] ; xx [ 51 ] = xx [ 1 ]
* state [ 25 ] ; xx [ 52 ] = cos ( xx [ 51 ] ) ; xx [ 56 ] = xx [ 14 ] * xx [
52 ] ; xx [ 57 ] = - xx [ 56 ] ; xx [ 58 ] = sin ( xx [ 51 ] ) ; xx [ 51 ] =
xx [ 6 ] * xx [ 58 ] ; xx [ 59 ] = xx [ 9 ] * xx [ 58 ] ; xx [ 58 ] = xx [ 14
] * xx [ 51 ] - xx [ 4 ] * xx [ 59 ] ; xx [ 60 ] = xx [ 4 ] * xx [ 52 ] ; xx
[ 52 ] = - xx [ 60 ] ; xx [ 61 ] = xx [ 14 ] * xx [ 59 ] + xx [ 4 ] * xx [ 51
] ; xx [ 51 ] = - xx [ 61 ] ; xx [ 59 ] = 0.03000000000000003 ; xx [ 62 ] =
xx [ 0 ] * xx [ 60 ] ; xx [ 63 ] = xx [ 58 ] ; xx [ 64 ] = xx [ 52 ] ; xx [
65 ] = xx [ 51 ] ; xx [ 66 ] = xx [ 8 ] * xx [ 61 ] - xx [ 58 ] * xx [ 0 ] ;
xx [ 61 ] = xx [ 8 ] * xx [ 60 ] ; xx [ 67 ] = - xx [ 62 ] ; xx [ 68 ] = xx [
66 ] ; xx [ 69 ] = - xx [ 61 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 67
, xx + 70 ) ; xx [ 60 ] = ( xx [ 62 ] * xx [ 56 ] + xx [ 70 ] ) * xx [ 12 ] -
xx [ 8 ] ; xx [ 62 ] = ( xx [ 71 ] - xx [ 56 ] * xx [ 66 ] ) * xx [ 12 ] ; xx
[ 63 ] = 0.1016025403784439 ; xx [ 64 ] = xx [ 0 ] + xx [ 12 ] * ( xx [ 72 ]
+ xx [ 61 ] * xx [ 56 ] ) ; xx [ 56 ] = xx [ 4 ] * state [ 29 ] + xx [ 14 ] *
state [ 27 ] ; xx [ 61 ] = xx [ 4 ] * state [ 30 ] - xx [ 14 ] * state [ 28 ]
; xx [ 65 ] = - xx [ 61 ] ; xx [ 66 ] = xx [ 4 ] * state [ 27 ] - xx [ 14 ] *
state [ 29 ] ; xx [ 67 ] = - xx [ 66 ] ; xx [ 68 ] = xx [ 4 ] * state [ 28 ]
+ xx [ 14 ] * state [ 30 ] ; xx [ 69 ] = xx [ 66 ] * xx [ 22 ] ; xx [ 70 ] =
xx [ 22 ] * xx [ 68 ] ; xx [ 71 ] = xx [ 21 ] + xx [ 22 ] - ( xx [ 66 ] * xx
[ 69 ] + xx [ 70 ] * xx [ 68 ] ) * xx [ 12 ] ; xx [ 72 ] = ( xx [ 70 ] * xx [
56 ] + xx [ 61 ] * xx [ 69 ] ) * xx [ 12 ] ; xx [ 73 ] = xx [ 27 ] + xx [ 12
] * ( xx [ 69 ] * xx [ 56 ] - xx [ 61 ] * xx [ 70 ] ) ; xx [ 69 ] = xx [ 1 ]
* state [ 34 ] ; xx [ 70 ] = cos ( xx [ 69 ] ) ; xx [ 74 ] = xx [ 4 ] * xx [
70 ] ; xx [ 75 ] = - xx [ 74 ] ; xx [ 76 ] = sin ( xx [ 69 ] ) ; xx [ 69 ] =
xx [ 6 ] * xx [ 76 ] ; xx [ 77 ] = xx [ 9 ] * xx [ 76 ] ; xx [ 76 ] = xx [ 4
] * xx [ 69 ] + xx [ 14 ] * xx [ 77 ] ; xx [ 78 ] = - xx [ 76 ] ; xx [ 79 ] =
xx [ 14 ] * xx [ 70 ] ; xx [ 70 ] = - xx [ 79 ] ; xx [ 80 ] = xx [ 14 ] * xx
[ 69 ] - xx [ 4 ] * xx [ 77 ] ; xx [ 69 ] = 0.03 ; xx [ 81 ] = xx [ 78 ] ; xx
[ 82 ] = xx [ 70 ] ; xx [ 83 ] = xx [ 80 ] ; xx [ 77 ] = xx [ 0 ] * xx [ 79 ]
; xx [ 84 ] = xx [ 8 ] * xx [ 80 ] + xx [ 76 ] * xx [ 0 ] ; xx [ 76 ] = xx [
8 ] * xx [ 79 ] ; xx [ 85 ] = xx [ 77 ] ; xx [ 86 ] = - xx [ 84 ] ; xx [ 87 ]
= - xx [ 76 ] ; pm_math_Vector3_cross_ra ( xx + 81 , xx + 85 , xx + 88 ) ; xx
[ 79 ] = ( xx [ 88 ] - xx [ 74 ] * xx [ 77 ] ) * xx [ 12 ] - xx [ 8 ] ; xx [
77 ] = ( xx [ 74 ] * xx [ 84 ] + xx [ 89 ] ) * xx [ 12 ] ; xx [ 81 ] =
0.1016025403784439 ; xx [ 82 ] = xx [ 12 ] * ( xx [ 90 ] + xx [ 76 ] * xx [
74 ] ) - xx [ 0 ] ; xx [ 74 ] = xx [ 14 ] * state [ 36 ] - xx [ 4 ] * state [
38 ] ; xx [ 76 ] = xx [ 14 ] * state [ 37 ] + xx [ 4 ] * state [ 39 ] ; xx [
83 ] = xx [ 14 ] * state [ 38 ] + xx [ 4 ] * state [ 36 ] ; xx [ 84 ] = xx [
14 ] * state [ 39 ] - xx [ 4 ] * state [ 37 ] ; xx [ 85 ] = xx [ 83 ] * xx [
22 ] ; xx [ 86 ] = xx [ 22 ] * xx [ 84 ] ; xx [ 87 ] = xx [ 21 ] + xx [ 22 ]
- ( xx [ 83 ] * xx [ 85 ] + xx [ 86 ] * xx [ 84 ] ) * xx [ 12 ] ; xx [ 88 ] =
( xx [ 86 ] * xx [ 74 ] + xx [ 76 ] * xx [ 85 ] ) * xx [ 12 ] ; xx [ 89 ] =
xx [ 12 ] * ( xx [ 76 ] * xx [ 86 ] - xx [ 85 ] * xx [ 74 ] ) - xx [ 27 ] ;
xx [ 85 ] = 0.4995596447523598 ; xx [ 86 ] = xx [ 1 ] * state [ 43 ] ; xx [
90 ] = cos ( xx [ 86 ] ) ; xx [ 91 ] = xx [ 85 ] * xx [ 90 ] ; xx [ 92 ] = -
xx [ 91 ] ; xx [ 93 ] = sin ( xx [ 86 ] ) ; xx [ 86 ] = xx [ 6 ] * xx [ 93 ]
; xx [ 94 ] = 0.8662794937748998 ; xx [ 95 ] = xx [ 9 ] * xx [ 93 ] ; xx [ 93
] = xx [ 85 ] * xx [ 86 ] - xx [ 94 ] * xx [ 95 ] ; xx [ 96 ] = xx [ 94 ] *
xx [ 90 ] ; xx [ 90 ] = - xx [ 96 ] ; xx [ 97 ] = xx [ 85 ] * xx [ 95 ] + xx
[ 94 ] * xx [ 86 ] ; xx [ 85 ] = - xx [ 97 ] ; xx [ 86 ] = 0.1029903810567666
; xx [ 94 ] = xx [ 0 ] * xx [ 96 ] ; xx [ 98 ] = xx [ 93 ] ; xx [ 99 ] = xx [
90 ] ; xx [ 100 ] = xx [ 85 ] ; xx [ 95 ] = xx [ 8 ] * xx [ 97 ] - xx [ 93 ]
* xx [ 0 ] ; xx [ 97 ] = xx [ 8 ] * xx [ 96 ] ; xx [ 101 ] = - xx [ 94 ] ; xx
[ 102 ] = xx [ 95 ] ; xx [ 103 ] = - xx [ 97 ] ; pm_math_Vector3_cross_ra (
xx + 98 , xx + 101 , xx + 104 ) ; xx [ 96 ] = ( xx [ 94 ] * xx [ 91 ] + xx [
104 ] ) * xx [ 12 ] - xx [ 8 ] ; xx [ 94 ] = ( xx [ 105 ] - xx [ 91 ] * xx [
95 ] ) * xx [ 12 ] ; xx [ 95 ] = 0.02482050807568867 ; xx [ 98 ] = xx [ 0 ] +
xx [ 12 ] * ( xx [ 106 ] + xx [ 97 ] * xx [ 91 ] ) ; xx [ 91 ] = xx [ 4 ] *
state [ 47 ] + xx [ 14 ] * state [ 45 ] ; xx [ 97 ] = xx [ 4 ] * state [ 48 ]
- xx [ 14 ] * state [ 46 ] ; xx [ 99 ] = - xx [ 97 ] ; xx [ 100 ] = xx [ 4 ]
* state [ 45 ] - xx [ 14 ] * state [ 47 ] ; xx [ 101 ] = - xx [ 100 ] ; xx [
102 ] = xx [ 4 ] * state [ 46 ] + xx [ 14 ] * state [ 48 ] ; xx [ 103 ] = xx
[ 100 ] * xx [ 22 ] ; xx [ 104 ] = xx [ 22 ] * xx [ 102 ] ; xx [ 105 ] = xx [
21 ] + xx [ 22 ] - ( xx [ 100 ] * xx [ 103 ] + xx [ 104 ] * xx [ 102 ] ) * xx
[ 12 ] ; xx [ 106 ] = ( xx [ 104 ] * xx [ 91 ] + xx [ 97 ] * xx [ 103 ] ) *
xx [ 12 ] ; xx [ 107 ] = xx [ 27 ] + xx [ 12 ] * ( xx [ 103 ] * xx [ 91 ] -
xx [ 97 ] * xx [ 104 ] ) ; xx [ 103 ] = 0.8657710899485229 ; xx [ 104 ] = xx
[ 1 ] * state [ 52 ] ; xx [ 1 ] = cos ( xx [ 104 ] ) ; xx [ 108 ] = xx [ 103
] * xx [ 1 ] ; xx [ 109 ] = sin ( xx [ 104 ] ) ; xx [ 104 ] = xx [ 6 ] * xx [
109 ] ; xx [ 110 ] = 0.5004402260104068 ; xx [ 111 ] = xx [ 9 ] * xx [ 109 ]
; xx [ 109 ] = xx [ 103 ] * xx [ 104 ] - xx [ 110 ] * xx [ 111 ] ; xx [ 112 ]
= xx [ 110 ] * xx [ 1 ] ; xx [ 1 ] = - xx [ 112 ] ; xx [ 113 ] = xx [ 103 ] *
xx [ 111 ] + xx [ 110 ] * xx [ 104 ] ; xx [ 103 ] = 0.07299038105676654 ; xx
[ 104 ] = xx [ 0 ] * xx [ 112 ] ; xx [ 114 ] = xx [ 109 ] ; xx [ 115 ] = xx [
1 ] ; xx [ 116 ] = xx [ 113 ] ; xx [ 110 ] = xx [ 109 ] * xx [ 0 ] - xx [ 8 ]
* xx [ 113 ] ; xx [ 111 ] = xx [ 8 ] * xx [ 112 ] ; xx [ 117 ] = xx [ 104 ] ;
xx [ 118 ] = xx [ 110 ] ; xx [ 119 ] = - xx [ 111 ] ;
pm_math_Vector3_cross_ra ( xx + 114 , xx + 117 , xx + 120 ) ; xx [ 112 ] = (
xx [ 104 ] * xx [ 108 ] + xx [ 120 ] ) * xx [ 12 ] - xx [ 8 ] ; xx [ 8 ] = (
xx [ 108 ] * xx [ 110 ] + xx [ 121 ] ) * xx [ 12 ] ; xx [ 104 ] =
0.07678203230275511 ; xx [ 110 ] = xx [ 12 ] * ( xx [ 122 ] - xx [ 111 ] * xx
[ 108 ] ) - xx [ 0 ] ; xx [ 0 ] = xx [ 14 ] * state [ 54 ] - xx [ 4 ] * state
[ 56 ] ; xx [ 111 ] = xx [ 14 ] * state [ 55 ] + xx [ 4 ] * state [ 57 ] ; xx
[ 114 ] = xx [ 14 ] * state [ 56 ] + xx [ 4 ] * state [ 54 ] ; xx [ 115 ] =
xx [ 14 ] * state [ 57 ] - xx [ 4 ] * state [ 55 ] ; xx [ 4 ] = xx [ 114 ] *
xx [ 22 ] ; xx [ 14 ] = xx [ 22 ] * xx [ 115 ] ; xx [ 116 ] = xx [ 21 ] + xx
[ 22 ] - ( xx [ 114 ] * xx [ 4 ] + xx [ 14 ] * xx [ 115 ] ) * xx [ 12 ] ; xx
[ 21 ] = ( xx [ 14 ] * xx [ 0 ] + xx [ 111 ] * xx [ 4 ] ) * xx [ 12 ] ; xx [
117 ] = xx [ 12 ] * ( xx [ 111 ] * xx [ 14 ] - xx [ 4 ] * xx [ 0 ] ) - xx [
27 ] ; xx [ 118 ] = xx [ 75 ] ; xx [ 119 ] = xx [ 78 ] ; xx [ 120 ] = xx [ 70
] ; xx [ 121 ] = xx [ 80 ] ; xx [ 122 ] = xx [ 74 ] ; xx [ 123 ] = xx [ 76 ]
; xx [ 124 ] = xx [ 83 ] ; xx [ 125 ] = xx [ 84 ] ;
pm_math_Quaternion_compose_ra ( xx + 118 , xx + 122 , xx + 126 ) ;
pm_math_Quaternion_xform_ra ( xx + 118 , xx + 87 , xx + 130 ) ; xx [ 118 ] =
xx [ 5 ] ; xx [ 119 ] = xx [ 7 ] ; xx [ 120 ] = xx [ 11 ] ; xx [ 121 ] = xx [
3 ] ; xx [ 133 ] = xx [ 15 ] ; xx [ 134 ] = xx [ 17 ] ; xx [ 135 ] = xx [ 19
] ; xx [ 136 ] = xx [ 20 ] ; pm_math_Quaternion_compose_ra ( xx + 118 , xx +
133 , xx + 137 ) ; xx [ 141 ] = xx [ 25 ] ; xx [ 142 ] = xx [ 26 ] ; xx [ 143
] = xx [ 28 ] ; pm_math_Quaternion_xform_ra ( xx + 118 , xx + 141 , xx + 144
) ; xx [ 4 ] = xx [ 144 ] + xx [ 13 ] ; xx [ 14 ] = xx [ 145 ] - xx [ 2 ] ;
xx [ 27 ] = xx [ 146 ] + xx [ 10 ] ; xx [ 118 ] = xx [ 29 ] ; xx [ 119 ] = xx
[ 31 ] ; xx [ 120 ] = xx [ 33 ] ; xx [ 121 ] = xx [ 35 ] ;
pm_math_Quaternion_compose_ra ( xx + 137 , xx + 118 , xx + 141 ) ; xx [ 145 ]
= xx [ 30 ] ; xx [ 146 ] = xx [ 32 ] ; xx [ 147 ] = xx [ 36 ] ;
pm_math_Quaternion_xform_ra ( xx + 137 , xx + 145 , xx + 148 ) ;
pm_math_Quaternion_compose_ra ( xx + 133 , xx + 118 , xx + 151 ) ;
pm_math_Quaternion_xform_ra ( xx + 133 , xx + 145 , xx + 155 ) ; xx [ 158 ] =
xx [ 92 ] ; xx [ 159 ] = xx [ 93 ] ; xx [ 160 ] = xx [ 90 ] ; xx [ 161 ] = xx
[ 85 ] ; xx [ 162 ] = xx [ 91 ] ; xx [ 163 ] = xx [ 99 ] ; xx [ 164 ] = xx [
101 ] ; xx [ 165 ] = xx [ 102 ] ; pm_math_Quaternion_compose_ra ( xx + 158 ,
xx + 162 , xx + 166 ) ; pm_math_Quaternion_xform_ra ( xx + 158 , xx + 105 ,
xx + 170 ) ; xx [ 158 ] = xx [ 108 ] ; xx [ 159 ] = xx [ 109 ] ; xx [ 160 ] =
xx [ 1 ] ; xx [ 161 ] = xx [ 113 ] ; xx [ 173 ] = xx [ 0 ] ; xx [ 174 ] = xx
[ 111 ] ; xx [ 175 ] = xx [ 114 ] ; xx [ 176 ] = xx [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 158 , xx + 173 , xx + 177 ) ; xx [ 181 ]
= xx [ 116 ] ; xx [ 182 ] = xx [ 21 ] ; xx [ 183 ] = xx [ 117 ] ;
pm_math_Quaternion_xform_ra ( xx + 158 , xx + 181 , xx + 184 ) ; xx [ 158 ] =
xx [ 42 ] ; xx [ 159 ] = xx [ 46 ] ; xx [ 160 ] = xx [ 38 ] ; xx [ 161 ] = xx
[ 48 ] ; xx [ 187 ] = xx [ 40 ] ; xx [ 188 ] = xx [ 43 ] ; xx [ 189 ] = xx [
49 ] ; xx [ 190 ] = xx [ 50 ] ; pm_math_Quaternion_compose_ra ( xx + 158 , xx
+ 187 , xx + 191 ) ; pm_math_Quaternion_xform_ra ( xx + 158 , xx + 53 , xx +
181 ) ; xx [ 158 ] = xx [ 57 ] ; xx [ 159 ] = xx [ 58 ] ; xx [ 160 ] = xx [
52 ] ; xx [ 161 ] = xx [ 51 ] ; xx [ 195 ] = xx [ 56 ] ; xx [ 196 ] = xx [ 65
] ; xx [ 197 ] = xx [ 67 ] ; xx [ 198 ] = xx [ 68 ] ;
pm_math_Quaternion_compose_ra ( xx + 158 , xx + 195 , xx + 199 ) ;
pm_math_Quaternion_xform_ra ( xx + 158 , xx + 71 , xx + 203 ) ; xx [ 158 ] =
xx [ 6 ] * state [ 1 ] ; xx [ 159 ] = 0.0 ; xx [ 160 ] = xx [ 9 ] * state [ 1
] ; xx [ 161 ] = 1.291763771785659e-5 ; xx [ 206 ] = xx [ 161 ] * state [ 1 ]
; xx [ 207 ] = xx [ 18 ] * xx [ 160 ] ; xx [ 208 ] = xx [ 17 ] ; xx [ 209 ] =
xx [ 19 ] ; xx [ 210 ] = xx [ 20 ] ; xx [ 211 ] = xx [ 16 ] * xx [ 160 ] - xx
[ 158 ] * xx [ 20 ] ; xx [ 16 ] = xx [ 18 ] * xx [ 158 ] ; xx [ 212 ] = - xx
[ 207 ] ; xx [ 213 ] = xx [ 211 ] ; xx [ 214 ] = - xx [ 16 ] ;
pm_math_Vector3_cross_ra ( xx + 208 , xx + 212 , xx + 215 ) ; xx [ 18 ] = (
xx [ 207 ] * xx [ 15 ] + xx [ 215 ] ) * xx [ 12 ] - xx [ 158 ] + state [ 6 ]
; xx [ 207 ] = xx [ 12 ] * ( xx [ 216 ] - xx [ 211 ] * xx [ 15 ] ) + state [
7 ] ; xx [ 208 ] = xx [ 160 ] + xx [ 12 ] * ( xx [ 217 ] + xx [ 16 ] * xx [
15 ] ) + state [ 8 ] ; xx [ 209 ] = - ( xx [ 26 ] * xx [ 160 ] ) ; xx [ 210 ]
= xx [ 25 ] * xx [ 160 ] + xx [ 28 ] * xx [ 158 ] + xx [ 206 ] ; xx [ 211 ] =
- ( xx [ 26 ] * xx [ 158 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 133
, xx + 209 , xx + 212 ) ; xx [ 16 ] = xx [ 213 ] + xx [ 22 ] * state [ 8 ] ;
xx [ 133 ] = xx [ 214 ] - xx [ 22 ] * state [ 7 ] ; xx [ 134 ] = xx [ 18 ] ;
xx [ 135 ] = xx [ 207 ] ; xx [ 136 ] = xx [ 208 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 118 , xx + 134 , xx + 209 ) ; xx [
213 ] = xx [ 23 ] * state [ 13 ] ; xx [ 214 ] = xx [ 23 ] * state [ 14 ] ; xx
[ 215 ] = state [ 13 ] - ( xx [ 23 ] * xx [ 213 ] - xx [ 24 ] * xx [ 214 ] )
* xx [ 12 ] ; xx [ 216 ] = state [ 14 ] - xx [ 12 ] * ( xx [ 24 ] * xx [ 213
] + xx [ 23 ] * xx [ 214 ] ) ; pm_math_Vector3_cross_ra ( xx + 134 , xx + 145
, xx + 217 ) ; xx [ 134 ] = xx [ 217 ] + xx [ 212 ] ; xx [ 135 ] = xx [ 218 ]
+ xx [ 16 ] ; xx [ 136 ] = xx [ 219 ] + xx [ 133 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 118 , xx + 134 , xx + 145 ) ; xx [
23 ] = xx [ 6 ] * state [ 17 ] ; xx [ 24 ] = xx [ 9 ] * state [ 17 ] ; xx [
118 ] = xx [ 161 ] * state [ 17 ] ; xx [ 119 ] = xx [ 43 ] ; xx [ 120 ] = xx
[ 49 ] ; xx [ 121 ] = xx [ 50 ] ; xx [ 134 ] = xx [ 49 ] * xx [ 24 ] ; xx [
135 ] = xx [ 23 ] * xx [ 50 ] - xx [ 43 ] * xx [ 24 ] ; xx [ 136 ] = xx [ 49
] * xx [ 23 ] ; xx [ 217 ] = xx [ 134 ] ; xx [ 218 ] = xx [ 135 ] ; xx [ 219
] = - xx [ 136 ] ; pm_math_Vector3_cross_ra ( xx + 119 , xx + 217 , xx + 220
) ; xx [ 119 ] = - ( xx [ 54 ] * xx [ 24 ] ) ; xx [ 120 ] = xx [ 53 ] * xx [
24 ] - xx [ 55 ] * xx [ 23 ] + xx [ 118 ] ; xx [ 121 ] = xx [ 54 ] * xx [ 23
] ; pm_math_Quaternion_inverseXform_ra ( xx + 187 , xx + 119 , xx + 217 ) ;
xx [ 119 ] = xx [ 6 ] * state [ 26 ] ; xx [ 120 ] = xx [ 9 ] * state [ 26 ] ;
xx [ 121 ] = xx [ 161 ] * state [ 26 ] ; xx [ 187 ] = xx [ 66 ] * xx [ 120 ]
; xx [ 188 ] = xx [ 65 ] ; xx [ 189 ] = xx [ 67 ] ; xx [ 190 ] = xx [ 68 ] ;
xx [ 213 ] = xx [ 61 ] * xx [ 120 ] - xx [ 119 ] * xx [ 68 ] ; xx [ 61 ] = xx
[ 66 ] * xx [ 119 ] ; xx [ 223 ] = - xx [ 187 ] ; xx [ 224 ] = xx [ 213 ] ;
xx [ 225 ] = - xx [ 61 ] ; pm_math_Vector3_cross_ra ( xx + 188 , xx + 223 ,
xx + 226 ) ; xx [ 188 ] = - ( xx [ 72 ] * xx [ 120 ] ) ; xx [ 189 ] = xx [ 71
] * xx [ 120 ] + xx [ 73 ] * xx [ 119 ] + xx [ 121 ] ; xx [ 190 ] = - ( xx [
72 ] * xx [ 119 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 195 , xx +
188 , xx + 223 ) ; xx [ 66 ] = xx [ 6 ] * state [ 35 ] ; xx [ 188 ] = xx [ 9
] * state [ 35 ] ; xx [ 189 ] = xx [ 161 ] * state [ 35 ] ; xx [ 195 ] = xx [
76 ] ; xx [ 196 ] = xx [ 83 ] ; xx [ 197 ] = xx [ 84 ] ; xx [ 190 ] = xx [ 83
] * xx [ 188 ] ; xx [ 198 ] = xx [ 66 ] * xx [ 84 ] - xx [ 76 ] * xx [ 188 ]
; xx [ 214 ] = xx [ 83 ] * xx [ 66 ] ; xx [ 229 ] = xx [ 190 ] ; xx [ 230 ] =
xx [ 198 ] ; xx [ 231 ] = - xx [ 214 ] ; pm_math_Vector3_cross_ra ( xx + 195
, xx + 229 , xx + 232 ) ; xx [ 195 ] = - ( xx [ 88 ] * xx [ 188 ] ) ; xx [
196 ] = xx [ 87 ] * xx [ 188 ] - xx [ 89 ] * xx [ 66 ] + xx [ 189 ] ; xx [
197 ] = xx [ 88 ] * xx [ 66 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 122
, xx + 195 , xx + 229 ) ; xx [ 122 ] = xx [ 6 ] * state [ 44 ] ; xx [ 123 ] =
xx [ 9 ] * state [ 44 ] ; xx [ 124 ] = xx [ 161 ] * state [ 44 ] ; xx [ 125 ]
= xx [ 100 ] * xx [ 123 ] ; xx [ 195 ] = xx [ 99 ] ; xx [ 196 ] = xx [ 101 ]
; xx [ 197 ] = xx [ 102 ] ; xx [ 235 ] = xx [ 97 ] * xx [ 123 ] - xx [ 122 ]
* xx [ 102 ] ; xx [ 97 ] = xx [ 100 ] * xx [ 122 ] ; xx [ 236 ] = - xx [ 125
] ; xx [ 237 ] = xx [ 235 ] ; xx [ 238 ] = - xx [ 97 ] ;
pm_math_Vector3_cross_ra ( xx + 195 , xx + 236 , xx + 239 ) ; xx [ 195 ] = -
( xx [ 106 ] * xx [ 123 ] ) ; xx [ 196 ] = xx [ 105 ] * xx [ 123 ] + xx [ 107
] * xx [ 122 ] + xx [ 124 ] ; xx [ 197 ] = - ( xx [ 106 ] * xx [ 122 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 162 , xx + 195 , xx + 236 ) ; xx [
100 ] = xx [ 6 ] * state [ 53 ] ; xx [ 6 ] = xx [ 9 ] * state [ 53 ] ; xx [ 9
] = xx [ 161 ] * state [ 53 ] ; xx [ 161 ] = xx [ 111 ] ; xx [ 162 ] = xx [
114 ] ; xx [ 163 ] = xx [ 115 ] ; xx [ 164 ] = xx [ 114 ] * xx [ 6 ] ; xx [
165 ] = xx [ 100 ] * xx [ 115 ] - xx [ 111 ] * xx [ 6 ] ; xx [ 195 ] = xx [
114 ] * xx [ 100 ] ; xx [ 242 ] = xx [ 164 ] ; xx [ 243 ] = xx [ 165 ] ; xx [
244 ] = - xx [ 195 ] ; pm_math_Vector3_cross_ra ( xx + 161 , xx + 242 , xx +
245 ) ; xx [ 161 ] = - ( xx [ 21 ] * xx [ 6 ] ) ; xx [ 162 ] = xx [ 116 ] *
xx [ 6 ] - xx [ 117 ] * xx [ 100 ] + xx [ 9 ] ; xx [ 163 ] = xx [ 21 ] * xx [
100 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 173 , xx + 161 , xx + 242 )
; motionData [ 0 ] = xx [ 5 ] ; motionData [ 1 ] = xx [ 7 ] ; motionData [ 2
] = xx [ 11 ] ; motionData [ 3 ] = xx [ 3 ] ; motionData [ 4 ] = xx [ 13 ] ;
motionData [ 5 ] = - xx [ 2 ] ; motionData [ 6 ] = xx [ 10 ] ; motionData [ 7
] = xx [ 15 ] ; motionData [ 8 ] = xx [ 17 ] ; motionData [ 9 ] = xx [ 19 ] ;
motionData [ 10 ] = xx [ 20 ] ; motionData [ 11 ] = xx [ 25 ] ; motionData [
12 ] = xx [ 26 ] ; motionData [ 13 ] = xx [ 28 ] ; motionData [ 14 ] = xx [
29 ] ; motionData [ 15 ] = xx [ 31 ] ; motionData [ 16 ] = xx [ 33 ] ;
motionData [ 17 ] = xx [ 35 ] ; motionData [ 18 ] = xx [ 30 ] ; motionData [
19 ] = xx [ 32 ] ; motionData [ 20 ] = xx [ 36 ] ; motionData [ 21 ] = xx [
42 ] ; motionData [ 22 ] = xx [ 46 ] ; motionData [ 23 ] = xx [ 38 ] ;
motionData [ 24 ] = xx [ 48 ] ; motionData [ 25 ] = xx [ 34 ] - xx [ 45 ] ;
motionData [ 26 ] = - xx [ 37 ] ; motionData [ 27 ] = xx [ 44 ] - xx [ 47 ] ;
motionData [ 28 ] = xx [ 40 ] ; motionData [ 29 ] = xx [ 43 ] ; motionData [
30 ] = xx [ 49 ] ; motionData [ 31 ] = xx [ 50 ] ; motionData [ 32 ] = xx [
53 ] ; motionData [ 33 ] = xx [ 54 ] ; motionData [ 34 ] = xx [ 55 ] ;
motionData [ 35 ] = xx [ 57 ] ; motionData [ 36 ] = xx [ 58 ] ; motionData [
37 ] = xx [ 52 ] ; motionData [ 38 ] = xx [ 51 ] ; motionData [ 39 ] = xx [
59 ] - xx [ 60 ] ; motionData [ 40 ] = - xx [ 62 ] ; motionData [ 41 ] = - (
xx [ 63 ] + xx [ 64 ] ) ; motionData [ 42 ] = xx [ 56 ] ; motionData [ 43 ] =
xx [ 65 ] ; motionData [ 44 ] = xx [ 67 ] ; motionData [ 45 ] = xx [ 68 ] ;
motionData [ 46 ] = xx [ 71 ] ; motionData [ 47 ] = xx [ 72 ] ; motionData [
48 ] = xx [ 73 ] ; motionData [ 49 ] = xx [ 75 ] ; motionData [ 50 ] = xx [
78 ] ; motionData [ 51 ] = xx [ 70 ] ; motionData [ 52 ] = xx [ 80 ] ;
motionData [ 53 ] = - ( xx [ 69 ] + xx [ 79 ] ) ; motionData [ 54 ] = - xx [
77 ] ; motionData [ 55 ] = - ( xx [ 81 ] + xx [ 82 ] ) ; motionData [ 56 ] =
xx [ 74 ] ; motionData [ 57 ] = xx [ 76 ] ; motionData [ 58 ] = xx [ 83 ] ;
motionData [ 59 ] = xx [ 84 ] ; motionData [ 60 ] = xx [ 87 ] ; motionData [
61 ] = xx [ 88 ] ; motionData [ 62 ] = xx [ 89 ] ; motionData [ 63 ] = xx [
92 ] ; motionData [ 64 ] = xx [ 93 ] ; motionData [ 65 ] = xx [ 90 ] ;
motionData [ 66 ] = xx [ 85 ] ; motionData [ 67 ] = - ( xx [ 86 ] + xx [ 96 ]
) ; motionData [ 68 ] = - xx [ 94 ] ; motionData [ 69 ] = xx [ 95 ] - xx [ 98
] ; motionData [ 70 ] = xx [ 91 ] ; motionData [ 71 ] = xx [ 99 ] ;
motionData [ 72 ] = xx [ 101 ] ; motionData [ 73 ] = xx [ 102 ] ; motionData
[ 74 ] = xx [ 105 ] ; motionData [ 75 ] = xx [ 106 ] ; motionData [ 76 ] = xx
[ 107 ] ; motionData [ 77 ] = xx [ 108 ] ; motionData [ 78 ] = xx [ 109 ] ;
motionData [ 79 ] = xx [ 1 ] ; motionData [ 80 ] = xx [ 113 ] ; motionData [
81 ] = - ( xx [ 103 ] + xx [ 112 ] ) ; motionData [ 82 ] = - xx [ 8 ] ;
motionData [ 83 ] = xx [ 104 ] - xx [ 110 ] ; motionData [ 84 ] = xx [ 0 ] ;
motionData [ 85 ] = xx [ 111 ] ; motionData [ 86 ] = xx [ 114 ] ; motionData
[ 87 ] = xx [ 115 ] ; motionData [ 88 ] = xx [ 116 ] ; motionData [ 89 ] = xx
[ 21 ] ; motionData [ 90 ] = xx [ 117 ] ; motionData [ 91 ] = xx [ 126 ] ;
motionData [ 92 ] = xx [ 127 ] ; motionData [ 93 ] = xx [ 128 ] ; motionData
[ 94 ] = xx [ 129 ] ; motionData [ 95 ] = xx [ 130 ] - xx [ 79 ] - xx [ 69 ]
; motionData [ 96 ] = xx [ 131 ] - xx [ 77 ] ; motionData [ 97 ] = xx [ 132 ]
- xx [ 82 ] - xx [ 81 ] ; motionData [ 98 ] = xx [ 137 ] ; motionData [ 99 ]
= xx [ 138 ] ; motionData [ 100 ] = xx [ 139 ] ; motionData [ 101 ] = xx [
140 ] ; motionData [ 102 ] = xx [ 4 ] ; motionData [ 103 ] = xx [ 14 ] ;
motionData [ 104 ] = xx [ 27 ] ; motionData [ 105 ] = xx [ 141 ] ; motionData
[ 106 ] = xx [ 142 ] ; motionData [ 107 ] = xx [ 143 ] ; motionData [ 108 ] =
xx [ 144 ] ; motionData [ 109 ] = xx [ 148 ] + xx [ 4 ] ; motionData [ 110 ]
= xx [ 149 ] + xx [ 14 ] ; motionData [ 111 ] = xx [ 150 ] + xx [ 27 ] ;
motionData [ 112 ] = xx [ 151 ] ; motionData [ 113 ] = xx [ 152 ] ;
motionData [ 114 ] = xx [ 153 ] ; motionData [ 115 ] = xx [ 154 ] ;
motionData [ 116 ] = xx [ 155 ] + xx [ 25 ] ; motionData [ 117 ] = xx [ 156 ]
+ xx [ 26 ] ; motionData [ 118 ] = xx [ 157 ] + xx [ 28 ] ; motionData [ 119
] = xx [ 166 ] ; motionData [ 120 ] = xx [ 167 ] ; motionData [ 121 ] = xx [
168 ] ; motionData [ 122 ] = xx [ 169 ] ; motionData [ 123 ] = xx [ 170 ] -
xx [ 96 ] - xx [ 86 ] ; motionData [ 124 ] = xx [ 171 ] - xx [ 94 ] ;
motionData [ 125 ] = xx [ 172 ] - xx [ 98 ] + xx [ 95 ] ; motionData [ 126 ]
= xx [ 177 ] ; motionData [ 127 ] = xx [ 178 ] ; motionData [ 128 ] = xx [
179 ] ; motionData [ 129 ] = xx [ 180 ] ; motionData [ 130 ] = xx [ 184 ] -
xx [ 112 ] - xx [ 103 ] ; motionData [ 131 ] = xx [ 185 ] - xx [ 8 ] ;
motionData [ 132 ] = xx [ 186 ] - xx [ 110 ] + xx [ 104 ] ; motionData [ 133
] = xx [ 191 ] ; motionData [ 134 ] = xx [ 192 ] ; motionData [ 135 ] = xx [
193 ] ; motionData [ 136 ] = xx [ 194 ] ; motionData [ 137 ] = xx [ 181 ] -
xx [ 45 ] + xx [ 34 ] ; motionData [ 138 ] = xx [ 182 ] - xx [ 37 ] ;
motionData [ 139 ] = xx [ 183 ] - xx [ 47 ] + xx [ 44 ] ; motionData [ 140 ]
= xx [ 199 ] ; motionData [ 141 ] = xx [ 200 ] ; motionData [ 142 ] = xx [
201 ] ; motionData [ 143 ] = xx [ 202 ] ; motionData [ 144 ] = xx [ 203 ] -
xx [ 60 ] + xx [ 59 ] ; motionData [ 145 ] = xx [ 204 ] - xx [ 62 ] ;
motionData [ 146 ] = xx [ 205 ] - xx [ 64 ] - xx [ 63 ] ; motionData [ 147 ]
= - xx [ 158 ] ; motionData [ 148 ] = xx [ 159 ] ; motionData [ 149 ] = xx [
160 ] ; motionData [ 150 ] = xx [ 159 ] ; motionData [ 151 ] = xx [ 206 ] ;
motionData [ 152 ] = xx [ 159 ] ; motionData [ 153 ] = xx [ 18 ] ; motionData
[ 154 ] = xx [ 207 ] ; motionData [ 155 ] = xx [ 208 ] ; motionData [ 156 ] =
xx [ 212 ] ; motionData [ 157 ] = xx [ 16 ] ; motionData [ 158 ] = xx [ 133 ]
; motionData [ 159 ] = xx [ 209 ] + xx [ 215 ] ; motionData [ 160 ] = xx [
210 ] + xx [ 216 ] ; motionData [ 161 ] = xx [ 211 ] + state [ 15 ] ;
motionData [ 162 ] = xx [ 145 ] + xx [ 39 ] * state [ 15 ] ; motionData [ 163
] = xx [ 146 ] - xx [ 41 ] * state [ 15 ] ; motionData [ 164 ] = xx [ 147 ] +
xx [ 216 ] * xx [ 41 ] - xx [ 39 ] * xx [ 215 ] ; motionData [ 165 ] = xx [
23 ] ; motionData [ 166 ] = xx [ 159 ] ; motionData [ 167 ] = xx [ 24 ] ;
motionData [ 168 ] = xx [ 159 ] ; motionData [ 169 ] = xx [ 118 ] ;
motionData [ 170 ] = xx [ 159 ] ; motionData [ 171 ] = xx [ 23 ] + ( xx [ 220
] - xx [ 134 ] * xx [ 40 ] ) * xx [ 12 ] + state [ 22 ] ; motionData [ 172 ]
= xx [ 12 ] * ( xx [ 221 ] - xx [ 135 ] * xx [ 40 ] ) + state [ 23 ] ;
motionData [ 173 ] = xx [ 24 ] + xx [ 12 ] * ( xx [ 222 ] + xx [ 136 ] * xx [
40 ] ) + state [ 24 ] ; motionData [ 174 ] = xx [ 217 ] ; motionData [ 175 ]
= xx [ 218 ] + xx [ 22 ] * state [ 24 ] ; motionData [ 176 ] = xx [ 219 ] -
xx [ 22 ] * state [ 23 ] ; motionData [ 177 ] = - xx [ 119 ] ; motionData [
178 ] = xx [ 159 ] ; motionData [ 179 ] = xx [ 120 ] ; motionData [ 180 ] =
xx [ 159 ] ; motionData [ 181 ] = xx [ 121 ] ; motionData [ 182 ] = xx [ 159
] ; motionData [ 183 ] = ( xx [ 187 ] * xx [ 56 ] + xx [ 226 ] ) * xx [ 12 ]
- xx [ 119 ] + state [ 31 ] ; motionData [ 184 ] = xx [ 12 ] * ( xx [ 227 ] -
xx [ 213 ] * xx [ 56 ] ) + state [ 32 ] ; motionData [ 185 ] = xx [ 120 ] +
xx [ 12 ] * ( xx [ 228 ] + xx [ 61 ] * xx [ 56 ] ) + state [ 33 ] ;
motionData [ 186 ] = xx [ 223 ] ; motionData [ 187 ] = xx [ 224 ] + xx [ 22 ]
* state [ 33 ] ; motionData [ 188 ] = xx [ 225 ] - xx [ 22 ] * state [ 32 ] ;
motionData [ 189 ] = xx [ 66 ] ; motionData [ 190 ] = xx [ 159 ] ; motionData
[ 191 ] = xx [ 188 ] ; motionData [ 192 ] = xx [ 159 ] ; motionData [ 193 ] =
xx [ 189 ] ; motionData [ 194 ] = xx [ 159 ] ; motionData [ 195 ] = xx [ 66 ]
+ ( xx [ 232 ] - xx [ 190 ] * xx [ 74 ] ) * xx [ 12 ] + state [ 40 ] ;
motionData [ 196 ] = xx [ 12 ] * ( xx [ 233 ] - xx [ 198 ] * xx [ 74 ] ) +
state [ 41 ] ; motionData [ 197 ] = xx [ 188 ] + xx [ 12 ] * ( xx [ 234 ] +
xx [ 214 ] * xx [ 74 ] ) + state [ 42 ] ; motionData [ 198 ] = xx [ 229 ] ;
motionData [ 199 ] = xx [ 230 ] + xx [ 22 ] * state [ 42 ] ; motionData [ 200
] = xx [ 231 ] - xx [ 22 ] * state [ 41 ] ; motionData [ 201 ] = - xx [ 122 ]
; motionData [ 202 ] = xx [ 159 ] ; motionData [ 203 ] = xx [ 123 ] ;
motionData [ 204 ] = xx [ 159 ] ; motionData [ 205 ] = xx [ 124 ] ;
motionData [ 206 ] = xx [ 159 ] ; motionData [ 207 ] = ( xx [ 125 ] * xx [ 91
] + xx [ 239 ] ) * xx [ 12 ] - xx [ 122 ] + state [ 49 ] ; motionData [ 208 ]
= xx [ 12 ] * ( xx [ 240 ] - xx [ 235 ] * xx [ 91 ] ) + state [ 50 ] ;
motionData [ 209 ] = xx [ 123 ] + xx [ 12 ] * ( xx [ 241 ] + xx [ 97 ] * xx [
91 ] ) + state [ 51 ] ; motionData [ 210 ] = xx [ 236 ] ; motionData [ 211 ]
= xx [ 237 ] + xx [ 22 ] * state [ 51 ] ; motionData [ 212 ] = xx [ 238 ] -
xx [ 22 ] * state [ 50 ] ; motionData [ 213 ] = xx [ 100 ] ; motionData [ 214
] = xx [ 159 ] ; motionData [ 215 ] = xx [ 6 ] ; motionData [ 216 ] = xx [
159 ] ; motionData [ 217 ] = xx [ 9 ] ; motionData [ 218 ] = xx [ 159 ] ;
motionData [ 219 ] = xx [ 100 ] + ( xx [ 245 ] - xx [ 164 ] * xx [ 0 ] ) * xx
[ 12 ] + state [ 58 ] ; motionData [ 220 ] = xx [ 12 ] * ( xx [ 246 ] - xx [
165 ] * xx [ 0 ] ) + state [ 59 ] ; motionData [ 221 ] = xx [ 6 ] + xx [ 12 ]
* ( xx [ 247 ] + xx [ 195 ] * xx [ 0 ] ) + state [ 60 ] ; motionData [ 222 ]
= xx [ 242 ] ; motionData [ 223 ] = xx [ 243 ] + xx [ 22 ] * state [ 60 ] ;
motionData [ 224 ] = xx [ 244 ] - xx [ 22 ] * state [ 59 ] ; } static size_t
computeAssemblyPosError_0 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData , double * error ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 14 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; xx [ 0 ] = 2.0 ; xx [ 1 ] = motionData [ 106 ] ; xx [ 2 ] =
motionData [ 107 ] ; xx [ 3 ] = motionData [ 108 ] ; xx [ 4 ] =
5.68852606864536e-4 ; xx [ 5 ] = xx [ 4 ] * motionData [ 108 ] ; xx [ 6 ] =
0.07434110703613682 ; xx [ 7 ] = xx [ 4 ] * motionData [ 106 ] + xx [ 6 ] *
motionData [ 107 ] ; xx [ 8 ] = - xx [ 5 ] ; xx [ 9 ] = - ( xx [ 6 ] *
motionData [ 108 ] ) ; xx [ 10 ] = xx [ 7 ] ; pm_math_Vector3_cross_ra ( xx +
1 , xx + 8 , xx + 11 ) ; xx [ 1 ] = 0.14 ; xx [ 2 ] = xx [ 1 ] * motionData [
93 ] ; xx [ 3 ] = xx [ 1 ] * motionData [ 94 ] ; error [ 0 ] = xx [ 0 ] * (
xx [ 11 ] - xx [ 5 ] * motionData [ 105 ] ) + motionData [ 109 ] - (
motionData [ 95 ] - ( xx [ 2 ] * motionData [ 93 ] + xx [ 3 ] * motionData [
94 ] ) * xx [ 0 ] ) - 0.2143411070361368 ; error [ 1 ] = ( xx [ 12 ] - xx [ 6
] * motionData [ 105 ] * motionData [ 108 ] ) * xx [ 0 ] + motionData [ 110 ]
- ( ( xx [ 3 ] * motionData [ 91 ] + xx [ 2 ] * motionData [ 92 ] ) * xx [ 0
] + motionData [ 96 ] ) + xx [ 4 ] ; error [ 2 ] = ( xx [ 7 ] * motionData [
105 ] + xx [ 13 ] ) * xx [ 0 ] + motionData [ 111 ] - ( xx [ 0 ] * ( xx [ 3 ]
* motionData [ 92 ] - xx [ 2 ] * motionData [ 91 ] ) + motionData [ 97 ] ) ;
return 3 ; } static size_t computeAssemblyPosError_1 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 14 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 2.0 ; xx [ 1
] = motionData [ 106 ] ; xx [ 2 ] = motionData [ 107 ] ; xx [ 3 ] =
motionData [ 108 ] ; xx [ 4 ] = 0.07431243570379253 ; xx [ 5 ] = xx [ 4 ] *
motionData [ 108 ] ; xx [ 6 ] = 2.141422054707503e-3 ; xx [ 7 ] = xx [ 6 ] *
motionData [ 107 ] - xx [ 4 ] * motionData [ 106 ] ; xx [ 8 ] = xx [ 5 ] ; xx
[ 9 ] = - ( xx [ 6 ] * motionData [ 108 ] ) ; xx [ 10 ] = xx [ 7 ] ;
pm_math_Vector3_cross_ra ( xx + 1 , xx + 8 , xx + 11 ) ; xx [ 1 ] = 0.14 ; xx
[ 2 ] = xx [ 1 ] * motionData [ 121 ] ; xx [ 3 ] = xx [ 1 ] * motionData [
122 ] ; error [ 0 ] = xx [ 0 ] * ( xx [ 11 ] + xx [ 5 ] * motionData [ 105 ]
) + motionData [ 109 ] - ( motionData [ 123 ] - ( xx [ 2 ] * motionData [ 121
] + xx [ 3 ] * motionData [ 122 ] ) * xx [ 0 ] ) - 0.1421414220547075 ; error
[ 1 ] = ( xx [ 12 ] - xx [ 6 ] * motionData [ 105 ] * motionData [ 108 ] ) *
xx [ 0 ] + motionData [ 110 ] - ( ( xx [ 3 ] * motionData [ 119 ] + xx [ 2 ]
* motionData [ 120 ] ) * xx [ 0 ] + motionData [ 124 ] ) - xx [ 4 ] ; error [
2 ] = ( xx [ 7 ] * motionData [ 105 ] + xx [ 13 ] ) * xx [ 0 ] + motionData [
111 ] - ( xx [ 0 ] * ( xx [ 3 ] * motionData [ 120 ] - xx [ 2 ] * motionData
[ 119 ] ) + motionData [ 125 ] ) ; return 3 ; } static size_t
computeAssemblyPosError_2 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData , double * error ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 14 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; xx [ 0 ] = 2.0 ; xx [ 1 ] = motionData [ 106 ] ; xx [ 2 ] =
motionData [ 107 ] ; xx [ 3 ] = motionData [ 108 ] ; xx [ 4 ] =
0.06466571354218477 ; xx [ 5 ] = xx [ 4 ] * motionData [ 108 ] ; xx [ 6 ] =
0.03667791270951477 ; xx [ 7 ] = xx [ 4 ] * motionData [ 106 ] + xx [ 6 ] *
motionData [ 107 ] ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = xx [ 6 ] * motionData [
108 ] ; xx [ 10 ] = - xx [ 7 ] ; pm_math_Vector3_cross_ra ( xx + 1 , xx + 8 ,
xx + 11 ) ; xx [ 1 ] = 0.14 ; xx [ 2 ] = xx [ 1 ] * motionData [ 128 ] ; xx [
3 ] = xx [ 1 ] * motionData [ 129 ] ; error [ 0 ] = xx [ 0 ] * ( xx [ 11 ] +
xx [ 5 ] * motionData [ 105 ] ) + motionData [ 109 ] - ( motionData [ 130 ] -
( xx [ 2 ] * motionData [ 128 ] + xx [ 3 ] * motionData [ 129 ] ) * xx [ 0 ]
) - 0.1033220872904852 ; error [ 1 ] = ( xx [ 6 ] * motionData [ 105 ] *
motionData [ 108 ] + xx [ 12 ] ) * xx [ 0 ] + motionData [ 110 ] - ( ( xx [ 3
] * motionData [ 126 ] + xx [ 2 ] * motionData [ 127 ] ) * xx [ 0 ] +
motionData [ 131 ] ) - xx [ 4 ] ; error [ 2 ] = ( xx [ 13 ] - xx [ 7 ] *
motionData [ 105 ] ) * xx [ 0 ] + motionData [ 111 ] - ( xx [ 0 ] * ( xx [ 3
] * motionData [ 127 ] - xx [ 2 ] * motionData [ 126 ] ) + motionData [ 132 ]
) ; return 3 ; } static size_t computeAssemblyPosError_3 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 14 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 2.0 ; xx [ 1
] = motionData [ 106 ] ; xx [ 2 ] = motionData [ 107 ] ; xx [ 3 ] =
motionData [ 108 ] ; xx [ 4 ] = 0.0640968609353203 ; xx [ 5 ] = xx [ 4 ] *
motionData [ 108 ] ; xx [ 6 ] = 0.03766319432662211 ; xx [ 7 ] = xx [ 4 ] *
motionData [ 106 ] - xx [ 6 ] * motionData [ 107 ] ; xx [ 8 ] = - xx [ 5 ] ;
xx [ 9 ] = xx [ 6 ] * motionData [ 108 ] ; xx [ 10 ] = xx [ 7 ] ;
pm_math_Vector3_cross_ra ( xx + 1 , xx + 8 , xx + 11 ) ; xx [ 1 ] = 0.14 ; xx
[ 2 ] = xx [ 1 ] * motionData [ 135 ] ; xx [ 3 ] = xx [ 1 ] * motionData [
136 ] ; error [ 0 ] = xx [ 0 ] * ( xx [ 11 ] - xx [ 5 ] * motionData [ 105 ]
) + motionData [ 109 ] - ( motionData [ 137 ] - ( xx [ 2 ] * motionData [ 135
] + xx [ 3 ] * motionData [ 136 ] ) * xx [ 0 ] ) - 0.1023368056733779 ; error
[ 1 ] = ( xx [ 6 ] * motionData [ 105 ] * motionData [ 108 ] + xx [ 12 ] ) *
xx [ 0 ] + motionData [ 110 ] - ( ( xx [ 3 ] * motionData [ 133 ] + xx [ 2 ]
* motionData [ 134 ] ) * xx [ 0 ] + motionData [ 138 ] ) + xx [ 4 ] ; error [
2 ] = ( xx [ 7 ] * motionData [ 105 ] + xx [ 13 ] ) * xx [ 0 ] + motionData [
111 ] - ( xx [ 0 ] * ( xx [ 3 ] * motionData [ 134 ] - xx [ 2 ] * motionData
[ 133 ] ) + motionData [ 139 ] ) ; return 3 ; } static size_t
computeAssemblyPosError_4 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData , double * error ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 14 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; xx [ 0 ] = 2.0 ; xx [ 1 ] = motionData [ 106 ] ; xx [ 2 ] =
motionData [ 107 ] ; xx [ 3 ] = motionData [ 108 ] ; xx [ 4 ] =
0.03901074375149718 ; xx [ 5 ] = xx [ 4 ] * motionData [ 108 ] ; xx [ 6 ] =
0.06328574610922835 ; xx [ 7 ] = xx [ 4 ] * motionData [ 106 ] + xx [ 6 ] *
motionData [ 107 ] ; xx [ 8 ] = - xx [ 5 ] ; xx [ 9 ] = - ( xx [ 6 ] *
motionData [ 108 ] ) ; xx [ 10 ] = xx [ 7 ] ; pm_math_Vector3_cross_ra ( xx +
1 , xx + 8 , xx + 11 ) ; xx [ 1 ] = 0.14 ; xx [ 2 ] = xx [ 1 ] * motionData [
142 ] ; xx [ 3 ] = xx [ 1 ] * motionData [ 143 ] ; error [ 0 ] = xx [ 0 ] * (
xx [ 11 ] - xx [ 5 ] * motionData [ 105 ] ) + motionData [ 109 ] - (
motionData [ 144 ] - ( xx [ 2 ] * motionData [ 142 ] + xx [ 3 ] * motionData
[ 143 ] ) * xx [ 0 ] ) - 0.2032857461092283 ; error [ 1 ] = ( xx [ 12 ] - xx
[ 6 ] * motionData [ 105 ] * motionData [ 108 ] ) * xx [ 0 ] + motionData [
110 ] - ( ( xx [ 3 ] * motionData [ 140 ] + xx [ 2 ] * motionData [ 141 ] ) *
xx [ 0 ] + motionData [ 145 ] ) + xx [ 4 ] ; error [ 2 ] = ( xx [ 7 ] *
motionData [ 105 ] + xx [ 13 ] ) * xx [ 0 ] + motionData [ 111 ] - ( xx [ 0 ]
* ( xx [ 3 ] * motionData [ 141 ] - xx [ 2 ] * motionData [ 140 ] ) +
motionData [ 146 ] ) ; return 3 ; } size_t
hp_v4_a1692be3_1_computeAssemblyPosError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { case 0 : return computeAssemblyPosError_0 ( rtdv ,
modeVector , motionData , error ) ; case 1 : return computeAssemblyPosError_1
( rtdv , modeVector , motionData , error ) ; case 2 : return
computeAssemblyPosError_2 ( rtdv , modeVector , motionData , error ) ; case 3
: return computeAssemblyPosError_3 ( rtdv , modeVector , motionData , error )
; case 4 : return computeAssemblyPosError_4 ( rtdv , modeVector , motionData
, error ) ; } return 0 ; } static size_t computeAssemblyJacobian_0 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 107 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ;
xx [ 0 ] = 0.5004402260104069 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state
[ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 5
] = 1.016807521344378e-3 ; xx [ 6 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 5 ]
* xx [ 6 ] ; xx [ 7 ] = 0.8657710899485228 ; xx [ 8 ] = 0.9999994830510986 ;
xx [ 9 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 0 ] * xx [ 2 ] + xx [ 7 ] *
xx [ 9 ] ; xx [ 10 ] = xx [ 7 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 7 ] * xx [ 2 ] -
xx [ 0 ] * xx [ 9 ] ; xx [ 11 ] = - xx [ 4 ] ; xx [ 12 ] = xx [ 6 ] ; xx [ 13
] = xx [ 10 ] ; xx [ 14 ] = xx [ 3 ] ; xx [ 15 ] = motionData [ 112 ] ; xx [
16 ] = motionData [ 113 ] ; xx [ 17 ] = motionData [ 114 ] ; xx [ 18 ] =
motionData [ 115 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15 , xx +
19 ) ; xx [ 15 ] = motionData [ 113 ] ; xx [ 16 ] = motionData [ 114 ] ; xx [
17 ] = motionData [ 115 ] ; xx [ 0 ] = xx [ 5 ] * motionData [ 115 ] + xx [ 8
] * motionData [ 113 ] ; xx [ 2 ] = xx [ 5 ] * motionData [ 114 ] ; xx [ 23 ]
= xx [ 8 ] * motionData [ 114 ] ; xx [ 24 ] = - xx [ 0 ] ; xx [ 25 ] = xx [ 2
] ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 23 , xx + 26 ) ; xx [ 7 ] = 2.0
; xx [ 9 ] = xx [ 8 ] + ( xx [ 28 ] - xx [ 2 ] * motionData [ 112 ] ) * xx [
7 ] ; xx [ 2 ] = 5.68852606864536e-4 ; xx [ 15 ] = 0.07434110703613682 ; xx [
16 ] = 0.1486822140722736 ; xx [ 23 ] = - ( xx [ 9 ] * xx [ 2 ] ) ; xx [ 24 ]
= - ( xx [ 9 ] * xx [ 15 ] ) ; xx [ 25 ] = ( xx [ 7 ] * ( xx [ 26 ] - xx [ 8
] * motionData [ 112 ] * motionData [ 114 ] ) - xx [ 5 ] ) * xx [ 2 ] + xx [
16 ] * ( xx [ 27 ] + xx [ 0 ] * motionData [ 112 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 17 ] = - (
xx [ 8 ] * motionData [ 117 ] ) ; xx [ 18 ] = xx [ 8 ] * motionData [ 116 ] +
xx [ 5 ] * motionData [ 118 ] ; xx [ 19 ] = - ( xx [ 5 ] * motionData [ 117 ]
) ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 17 , xx + 20 ) ; xx [ 0 ] =
1.291763771785659e-5 ; xx [ 9 ] = xx [ 6 ] * xx [ 0 ] ; xx [ 11 ] = xx [ 0 ]
* xx [ 3 ] ; xx [ 29 ] = motionData [ 0 ] ; xx [ 30 ] = motionData [ 1 ] ; xx
[ 31 ] = motionData [ 2 ] ; xx [ 32 ] = motionData [ 3 ] ; xx [ 12 ] =
5.084038263768928e-4 ; xx [ 13 ] = 0.9999998707627665 ; xx [ 14 ] = xx [ 12 ]
* state [ 4 ] + xx [ 13 ] * state [ 2 ] ; xx [ 17 ] = xx [ 12 ] * state [ 5 ]
- xx [ 13 ] * state [ 3 ] ; xx [ 18 ] = - xx [ 17 ] ; xx [ 19 ] = xx [ 12 ] *
state [ 2 ] - xx [ 13 ] * state [ 4 ] ; xx [ 23 ] = - xx [ 19 ] ; xx [ 24 ] =
xx [ 12 ] * state [ 3 ] + xx [ 13 ] * state [ 5 ] ; xx [ 33 ] = xx [ 14 ] ;
xx [ 34 ] = xx [ 18 ] ; xx [ 35 ] = xx [ 23 ] ; xx [ 36 ] = xx [ 24 ] ;
pm_math_Quaternion_compose_ra ( xx + 29 , xx + 33 , xx + 37 ) ; xx [ 33 ] =
motionData [ 14 ] ; xx [ 34 ] = motionData [ 15 ] ; xx [ 35 ] = motionData [
16 ] ; xx [ 36 ] = motionData [ 17 ] ; pm_math_Quaternion_compose_ra ( xx +
37 , xx + 33 , xx + 41 ) ; xx [ 25 ] = motionData [ 14 ] * motionData [ 16 ]
; xx [ 33 ] = motionData [ 15 ] * motionData [ 17 ] ; xx [ 34 ] = ( xx [ 25 ]
+ xx [ 33 ] ) * xx [ 7 ] ; xx [ 35 ] = 1.0 ; xx [ 36 ] = motionData [ 16 ] *
motionData [ 16 ] ; xx [ 37 ] = motionData [ 17 ] * motionData [ 17 ] ; xx [
38 ] = motionData [ 15 ] * motionData [ 16 ] ; xx [ 39 ] = motionData [ 14 ]
* motionData [ 17 ] ; xx [ 45 ] = - ( xx [ 2 ] * xx [ 34 ] ) ; xx [ 46 ] = -
( xx [ 15 ] * xx [ 34 ] ) ; xx [ 47 ] = xx [ 2 ] * ( xx [ 35 ] - ( xx [ 36 ]
+ xx [ 37 ] ) * xx [ 7 ] ) + xx [ 16 ] * ( xx [ 38 ] - xx [ 39 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 45 , xx + 48 ) ; xx [ 34 ] = xx
[ 24 ] * motionData [ 20 ] ; xx [ 40 ] = xx [ 19 ] * motionData [ 19 ] ; xx [
45 ] = xx [ 34 ] - xx [ 40 ] ; xx [ 51 ] = xx [ 18 ] ; xx [ 52 ] = xx [ 23 ]
; xx [ 53 ] = xx [ 24 ] ; xx [ 18 ] = xx [ 17 ] * motionData [ 19 ] ; xx [ 23
] = xx [ 17 ] * motionData [ 20 ] ; xx [ 54 ] = xx [ 45 ] ; xx [ 55 ] = xx [
18 ] ; xx [ 56 ] = xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 54 ,
xx + 57 ) ; xx [ 54 ] = ( xx [ 14 ] * xx [ 45 ] + xx [ 57 ] ) * xx [ 7 ] ; xx
[ 55 ] = ( xx [ 18 ] * xx [ 14 ] + xx [ 58 ] ) * xx [ 7 ] - motionData [ 20 ]
; xx [ 56 ] = motionData [ 19 ] + ( xx [ 23 ] * xx [ 14 ] + xx [ 59 ] ) * xx
[ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 54 , xx + 45 ) ; xx [ 18
] = motionData [ 16 ] * motionData [ 17 ] ; xx [ 23 ] = motionData [ 14 ] *
motionData [ 15 ] ; xx [ 54 ] = xx [ 7 ] * ( xx [ 18 ] - xx [ 23 ] ) ; xx [
55 ] = 1.137705213729072e-3 ; xx [ 56 ] = motionData [ 15 ] * motionData [ 15
] ; xx [ 57 ] = - ( xx [ 2 ] * xx [ 54 ] ) ; xx [ 58 ] = - ( xx [ 15 ] * xx [
54 ] ) ; xx [ 59 ] = ( xx [ 39 ] + xx [ 38 ] ) * xx [ 55 ] + xx [ 15 ] * ( xx
[ 35 ] - ( xx [ 37 ] + xx [ 56 ] ) * xx [ 7 ] ) ; pm_math_Quaternion_xform_ra
( xx + 41 , xx + 57 , xx + 37 ) ; xx [ 54 ] = xx [ 19 ] * motionData [ 18 ] ;
xx [ 57 ] = xx [ 17 ] * motionData [ 18 ] ; xx [ 58 ] = xx [ 34 ] - xx [ 57 ]
; xx [ 34 ] = xx [ 19 ] * motionData [ 20 ] ; xx [ 59 ] = xx [ 54 ] ; xx [ 60
] = xx [ 58 ] ; xx [ 61 ] = xx [ 34 ] ; pm_math_Vector3_cross_ra ( xx + 51 ,
xx + 59 , xx + 62 ) ; xx [ 59 ] = 0.14 ; xx [ 60 ] = xx [ 19 ] * xx [ 59 ] ;
xx [ 61 ] = xx [ 17 ] * xx [ 59 ] ; xx [ 65 ] = xx [ 61 ] * xx [ 14 ] ; xx [
66 ] = xx [ 17 ] * xx [ 61 ] ; xx [ 67 ] = motionData [ 20 ] + ( xx [ 54 ] *
xx [ 14 ] + xx [ 62 ] ) * xx [ 7 ] + ( xx [ 60 ] * xx [ 14 ] + xx [ 61 ] * xx
[ 24 ] ) * xx [ 7 ] ; xx [ 68 ] = ( xx [ 14 ] * xx [ 58 ] + xx [ 63 ] ) * xx
[ 7 ] + xx [ 7 ] * ( xx [ 60 ] * xx [ 24 ] - xx [ 65 ] ) ; xx [ 69 ] = ( xx [
34 ] * xx [ 14 ] + xx [ 64 ] ) * xx [ 7 ] - ( motionData [ 18 ] - ( xx [ 66 ]
+ xx [ 19 ] * xx [ 60 ] ) * xx [ 7 ] ) - xx [ 59 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 67 , xx + 62 ) ; xx [ 17 ] = xx
[ 35 ] - ( xx [ 56 ] + xx [ 36 ] ) * xx [ 7 ] ; xx [ 34 ] = - ( xx [ 2 ] * xx
[ 17 ] ) ; xx [ 35 ] = - ( xx [ 15 ] * xx [ 17 ] ) ; xx [ 36 ] = xx [ 55 ] *
( xx [ 33 ] - xx [ 25 ] ) + ( xx [ 23 ] + xx [ 18 ] ) * xx [ 16 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 34 , xx + 16 ) ; xx [ 23 ] = xx
[ 24 ] * motionData [ 18 ] ; xx [ 25 ] = xx [ 24 ] * motionData [ 19 ] ; xx [
33 ] = xx [ 57 ] + xx [ 40 ] ; xx [ 34 ] = - xx [ 23 ] ; xx [ 35 ] = - xx [
25 ] ; xx [ 36 ] = - xx [ 33 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 34
, xx + 40 ) ; xx [ 34 ] = xx [ 59 ] * xx [ 24 ] ; xx [ 51 ] = xx [ 7 ] * ( xx
[ 40 ] - xx [ 23 ] * xx [ 14 ] ) - motionData [ 19 ] + xx [ 7 ] * ( xx [ 19 ]
* xx [ 61 ] - xx [ 34 ] * xx [ 14 ] ) ; xx [ 52 ] = motionData [ 18 ] + xx [
7 ] * ( xx [ 41 ] - xx [ 25 ] * xx [ 14 ] ) - ( xx [ 34 ] * xx [ 24 ] + xx [
66 ] ) * xx [ 7 ] + xx [ 59 ] ; xx [ 53 ] = xx [ 7 ] * ( xx [ 42 ] - xx [ 33
] * xx [ 14 ] ) - ( xx [ 65 ] + xx [ 19 ] * xx [ 34 ] ) * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 51 , xx + 23 ) ; xx [ 29 ] =
motionData [ 98 ] ; xx [ 30 ] = motionData [ 99 ] ; xx [ 31 ] = motionData [
100 ] ; xx [ 32 ] = motionData [ 101 ] ; xx [ 14 ] = 0.9902139361309295 ; xx
[ 19 ] = 0.1395577324697271 ; xx [ 33 ] = xx [ 14 ] * state [ 11 ] - xx [ 19
] * state [ 10 ] ; xx [ 34 ] = 0.05200961894323344 ; xx [ 35 ] = xx [ 33 ] *
xx [ 34 ] ; xx [ 36 ] = xx [ 19 ] * state [ 12 ] - xx [ 14 ] * state [ 9 ] ;
xx [ 40 ] = xx [ 19 ] * state [ 11 ] + xx [ 14 ] * state [ 10 ] ; xx [ 41 ] =
xx [ 34 ] * xx [ 40 ] ; xx [ 42 ] = xx [ 19 ] * state [ 9 ] + xx [ 14 ] *
state [ 12 ] ; xx [ 51 ] = xx [ 7 ] * ( xx [ 35 ] * xx [ 36 ] - xx [ 41 ] *
xx [ 42 ] ) ; xx [ 52 ] = - ( ( xx [ 41 ] * xx [ 36 ] + xx [ 35 ] * xx [ 42 ]
) * xx [ 7 ] ) ; xx [ 53 ] = ( xx [ 41 ] * xx [ 40 ] + xx [ 33 ] * xx [ 35 ]
) * xx [ 7 ] - xx [ 34 ] ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 51 ,
xx + 54 ) ; xx [ 14 ] = - xx [ 40 ] ; xx [ 19 ] = - xx [ 33 ] ; xx [ 34 ] = -
xx [ 42 ] ; xx [ 65 ] = xx [ 36 ] ; xx [ 66 ] = xx [ 14 ] ; xx [ 67 ] = xx [
19 ] ; xx [ 68 ] = xx [ 34 ] ; pm_math_Quaternion_compose_ra ( xx + 29 , xx +
65 , xx + 69 ) ; xx [ 35 ] = 0.01999999999999999 ; xx [ 41 ] = xx [ 35 ] * xx
[ 71 ] ; xx [ 43 ] = xx [ 35 ] * xx [ 70 ] ; xx [ 44 ] = 0.07160254037844391
; xx [ 51 ] = xx [ 44 ] * xx [ 71 ] ; xx [ 52 ] = xx [ 44 ] * xx [ 70 ] ; xx
[ 53 ] = 0.05312177826491075 ; xx [ 57 ] = xx [ 53 ] * xx [ 40 ] ; xx [ 58 ]
= xx [ 33 ] * xx [ 53 ] ; xx [ 65 ] = xx [ 7 ] * ( xx [ 57 ] * xx [ 42 ] - xx
[ 58 ] * xx [ 36 ] ) ; xx [ 66 ] = ( xx [ 57 ] * xx [ 36 ] + xx [ 58 ] * xx [
42 ] ) * xx [ 7 ] ; xx [ 67 ] = xx [ 53 ] - ( xx [ 57 ] * xx [ 40 ] + xx [ 33
] * xx [ 58 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 65
, xx + 73 ) ; xx [ 53 ] = xx [ 15 ] * xx [ 72 ] ; xx [ 57 ] = xx [ 2 ] * xx [
71 ] - xx [ 15 ] * xx [ 70 ] ; xx [ 65 ] = xx [ 53 ] ; xx [ 66 ] = - ( xx [ 2
] * xx [ 72 ] ) ; xx [ 67 ] = xx [ 57 ] ; pm_math_Vector3_cross_ra ( xx + 70
, xx + 65 , xx + 76 ) ; xx [ 58 ] = 0.03530169195229536 ; xx [ 65 ] = xx [ 14
] ; xx [ 66 ] = xx [ 19 ] ; xx [ 67 ] = xx [ 34 ] ; xx [ 14 ] =
0.0654271681639358 ; xx [ 19 ] = xx [ 14 ] * xx [ 42 ] ; xx [ 34 ] = xx [ 58
] * xx [ 42 ] ; xx [ 42 ] = xx [ 14 ] * xx [ 40 ] + xx [ 33 ] * xx [ 58 ] ;
xx [ 79 ] = - xx [ 19 ] ; xx [ 80 ] = - xx [ 34 ] ; xx [ 81 ] = xx [ 42 ] ;
pm_math_Vector3_cross_ra ( xx + 65 , xx + 79 , xx + 82 ) ; xx [ 65 ] = xx [
58 ] + xx [ 7 ] * ( xx [ 82 ] - xx [ 19 ] * xx [ 36 ] ) ; xx [ 66 ] = ( xx [
83 ] - xx [ 34 ] * xx [ 36 ] ) * xx [ 7 ] - xx [ 14 ] ; xx [ 67 ] = ( xx [ 42
] * xx [ 36 ] + xx [ 84 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx +
29 , xx + 65 , xx + 79 ) ; xx [ 14 ] = 9.87654321 ; xx [ 19 ] = xx [ 1 ] *
state [ 34 ] ; xx [ 1 ] = cos ( xx [ 19 ] ) ; xx [ 29 ] = xx [ 12 ] * xx [ 1
] ; xx [ 30 ] = sin ( xx [ 19 ] ) ; xx [ 19 ] = xx [ 5 ] * xx [ 30 ] ; xx [
31 ] = xx [ 8 ] * xx [ 30 ] ; xx [ 30 ] = xx [ 12 ] * xx [ 19 ] + xx [ 13 ] *
xx [ 31 ] ; xx [ 32 ] = xx [ 13 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 13 ] * xx [ 19
] - xx [ 12 ] * xx [ 31 ] ; xx [ 65 ] = - xx [ 29 ] ; xx [ 66 ] = - xx [ 30 ]
; xx [ 67 ] = - xx [ 32 ] ; xx [ 68 ] = xx [ 1 ] ; xx [ 82 ] = motionData [
56 ] ; xx [ 83 ] = motionData [ 57 ] ; xx [ 84 ] = motionData [ 58 ] ; xx [
85 ] = motionData [ 59 ] ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 82
, xx + 86 ) ; xx [ 82 ] = motionData [ 57 ] ; xx [ 83 ] = motionData [ 58 ] ;
xx [ 84 ] = motionData [ 59 ] ; xx [ 19 ] = xx [ 5 ] * motionData [ 59 ] - xx
[ 8 ] * motionData [ 57 ] ; xx [ 31 ] = xx [ 5 ] * motionData [ 58 ] ; xx [
90 ] = xx [ 8 ] * motionData [ 58 ] ; xx [ 91 ] = xx [ 19 ] ; xx [ 92 ] = -
xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 82 , xx + 90 , xx + 93 ) ; xx [
33 ] = 0.28 * ( xx [ 94 ] - xx [ 19 ] * motionData [ 56 ] ) ; xx [ 19 ] = (
xx [ 8 ] + ( xx [ 31 ] * motionData [ 56 ] + xx [ 95 ] ) * xx [ 7 ] ) * xx [
59 ] ; xx [ 31 ] = xx [ 88 ] * xx [ 33 ] + xx [ 89 ] * xx [ 19 ] ; xx [ 34 ]
= xx [ 87 ] * xx [ 33 ] ; xx [ 36 ] = xx [ 87 ] * xx [ 19 ] ; xx [ 82 ] = -
xx [ 31 ] ; xx [ 83 ] = xx [ 34 ] ; xx [ 84 ] = xx [ 36 ] ;
pm_math_Vector3_cross_ra ( xx + 87 , xx + 82 , xx + 90 ) ; xx [ 82 ] = - ( xx
[ 8 ] * motionData [ 61 ] ) ; xx [ 83 ] = xx [ 8 ] * motionData [ 60 ] - xx [
5 ] * motionData [ 62 ] ; xx [ 84 ] = xx [ 5 ] * motionData [ 61 ] ;
pm_math_Quaternion_xform_ra ( xx + 65 , xx + 82 , xx + 87 ) ; xx [ 5 ] = xx [
30 ] * xx [ 0 ] ; xx [ 8 ] = xx [ 0 ] * xx [ 1 ] ; xx [ 40 ] = 0.0 ; xx [ 65
] = motionData [ 49 ] ; xx [ 66 ] = motionData [ 50 ] ; xx [ 67 ] =
motionData [ 51 ] ; xx [ 68 ] = motionData [ 52 ] ; xx [ 42 ] = xx [ 13 ] *
state [ 38 ] + xx [ 12 ] * state [ 36 ] ; xx [ 58 ] = xx [ 42 ] * xx [ 59 ] ;
xx [ 60 ] = xx [ 13 ] * state [ 36 ] - xx [ 12 ] * state [ 38 ] ; xx [ 61 ] =
xx [ 13 ] * state [ 37 ] + xx [ 12 ] * state [ 39 ] ; xx [ 82 ] = xx [ 61 ] *
xx [ 59 ] ; xx [ 83 ] = xx [ 13 ] * state [ 39 ] - xx [ 12 ] * state [ 37 ] ;
xx [ 12 ] = xx [ 82 ] * xx [ 60 ] ; xx [ 13 ] = xx [ 61 ] * xx [ 82 ] ; xx [
93 ] = - ( ( xx [ 58 ] * xx [ 60 ] + xx [ 82 ] * xx [ 83 ] ) * xx [ 7 ] ) ;
xx [ 94 ] = xx [ 7 ] * ( xx [ 12 ] - xx [ 58 ] * xx [ 83 ] ) ; xx [ 95 ] = (
xx [ 13 ] + xx [ 42 ] * xx [ 58 ] ) * xx [ 7 ] - xx [ 59 ] ;
pm_math_Quaternion_xform_ra ( xx + 65 , xx + 93 , xx + 96 ) ; xx [ 99 ] = xx
[ 60 ] ; xx [ 100 ] = xx [ 61 ] ; xx [ 101 ] = xx [ 42 ] ; xx [ 102 ] = xx [
83 ] ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 99 , xx + 103 ) ; xx [
58 ] = xx [ 59 ] * xx [ 105 ] ; xx [ 61 ] = xx [ 59 ] * xx [ 104 ] ; xx [ 84
] = xx [ 59 ] * xx [ 106 ] ; xx [ 85 ] = xx [ 59 ] * xx [ 83 ] ; xx [ 93 ] =
xx [ 7 ] * ( xx [ 42 ] * xx [ 82 ] - xx [ 85 ] * xx [ 60 ] ) ; xx [ 94 ] = xx
[ 59 ] - ( xx [ 85 ] * xx [ 83 ] + xx [ 13 ] ) * xx [ 7 ] ; xx [ 95 ] = ( xx
[ 12 ] + xx [ 42 ] * xx [ 85 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra (
xx + 65 , xx + 93 , xx + 99 ) ; xx [ 12 ] = xx [ 103 ] * xx [ 61 ] ; xx [ 13
] = xx [ 104 ] * xx [ 61 ] ; J [ 0 ] = xx [ 26 ] + xx [ 20 ] + xx [ 7 ] * (
xx [ 9 ] * xx [ 10 ] + xx [ 11 ] * xx [ 4 ] ) ; J [ 1 ] = xx [ 48 ] + xx [ 45
] ; J [ 2 ] = xx [ 37 ] + xx [ 62 ] ; J [ 3 ] = xx [ 16 ] + xx [ 23 ] ; J [ 4
] = xx [ 54 ] - ( xx [ 69 ] * xx [ 41 ] + xx [ 72 ] * xx [ 43 ] ) * xx [ 7 ]
; J [ 5 ] = ( xx [ 69 ] * xx [ 51 ] + xx [ 72 ] * xx [ 52 ] ) * xx [ 7 ] + xx
[ 73 ] ; J [ 6 ] = xx [ 7 ] * ( xx [ 76 ] + xx [ 69 ] * xx [ 53 ] ) + xx [ 79
] - xx [ 2 ] ; J [ 15 ] = - ( xx [ 7 ] * ( xx [ 90 ] - xx [ 31 ] * xx [ 86 ]
) + xx [ 87 ] + xx [ 7 ] * ( xx [ 5 ] * xx [ 32 ] + xx [ 8 ] * xx [ 29 ] ) )
; J [ 16 ] = xx [ 40 ] ; J [ 17 ] = - ( xx [ 96 ] - ( xx [ 103 ] * xx [ 58 ]
+ xx [ 106 ] * xx [ 61 ] ) * xx [ 7 ] ) ; J [ 18 ] = - ( xx [ 7 ] * ( xx [
105 ] * xx [ 61 ] - xx [ 103 ] * xx [ 84 ] ) + xx [ 99 ] ) ; J [ 27 ] = xx [
27 ] + xx [ 21 ] - ( xx [ 11 ] * xx [ 3 ] + xx [ 6 ] * xx [ 9 ] ) * xx [ 7 ]
+ xx [ 0 ] ; J [ 28 ] = xx [ 49 ] + xx [ 46 ] ; J [ 29 ] = xx [ 38 ] + xx [
63 ] ; J [ 30 ] = xx [ 17 ] + xx [ 24 ] ; J [ 31 ] = xx [ 7 ] * ( xx [ 69 ] *
xx [ 43 ] - xx [ 72 ] * xx [ 41 ] ) + xx [ 55 ] ; J [ 32 ] = xx [ 7 ] * ( xx
[ 72 ] * xx [ 51 ] - xx [ 69 ] * xx [ 52 ] ) + xx [ 74 ] ; J [ 33 ] = ( xx [
77 ] - xx [ 2 ] * xx [ 69 ] * xx [ 72 ] ) * xx [ 7 ] + xx [ 80 ] - xx [ 15 ]
; J [ 42 ] = - ( xx [ 19 ] + ( xx [ 86 ] * xx [ 34 ] + xx [ 91 ] ) * xx [ 7 ]
+ xx [ 88 ] - ( xx [ 8 ] * xx [ 1 ] + xx [ 30 ] * xx [ 5 ] ) * xx [ 7 ] + xx
[ 0 ] ) ; J [ 43 ] = xx [ 40 ] ; J [ 44 ] = - ( xx [ 7 ] * ( xx [ 12 ] - xx [
106 ] * xx [ 58 ] ) + xx [ 97 ] ) ; J [ 45 ] = - ( xx [ 100 ] - ( xx [ 106 ]
* xx [ 84 ] + xx [ 13 ] ) * xx [ 7 ] + xx [ 59 ] ) ; J [ 54 ] = xx [ 28 ] +
xx [ 22 ] + ( xx [ 11 ] * xx [ 10 ] - xx [ 9 ] * xx [ 4 ] ) * xx [ 7 ] ; J [
55 ] = xx [ 50 ] + xx [ 47 ] ; J [ 56 ] = xx [ 39 ] + xx [ 64 ] ; J [ 57 ] =
xx [ 18 ] + xx [ 25 ] ; J [ 58 ] = xx [ 56 ] + ( xx [ 70 ] * xx [ 43 ] + xx [
71 ] * xx [ 41 ] ) * xx [ 7 ] - xx [ 35 ] ; J [ 59 ] = xx [ 75 ] - ( xx [ 70
] * xx [ 52 ] + xx [ 71 ] * xx [ 51 ] ) * xx [ 7 ] + xx [ 44 ] ; J [ 60 ] = (
xx [ 69 ] * xx [ 57 ] + xx [ 78 ] ) * xx [ 7 ] + xx [ 81 ] ; J [ 69 ] = - ( (
xx [ 86 ] * xx [ 36 ] + xx [ 92 ] ) * xx [ 7 ] - xx [ 33 ] + xx [ 89 ] + ( xx
[ 5 ] * xx [ 29 ] - xx [ 8 ] * xx [ 32 ] ) * xx [ 7 ] ) ; J [ 70 ] = xx [ 40
] ; J [ 71 ] = - ( xx [ 98 ] + ( xx [ 13 ] + xx [ 105 ] * xx [ 58 ] ) * xx [
7 ] - xx [ 59 ] ) ; J [ 72 ] = - ( ( xx [ 12 ] + xx [ 105 ] * xx [ 84 ] ) *
xx [ 7 ] + xx [ 101 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_1 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 108 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.5004402260104069 ; xx [ 1 ] = 0.5
; xx [ 2 ] = xx [ 1 ] * state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ]
= xx [ 0 ] * xx [ 3 ] ; xx [ 5 ] = 1.016807521344378e-3 ; xx [ 6 ] = sin ( xx
[ 2 ] ) ; xx [ 2 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = 0.8657710899485228 ; xx
[ 8 ] = 0.9999994830510986 ; xx [ 9 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 6 ] = xx [
0 ] * xx [ 2 ] + xx [ 7 ] * xx [ 9 ] ; xx [ 10 ] = xx [ 7 ] * xx [ 3 ] ; xx [
3 ] = xx [ 7 ] * xx [ 2 ] - xx [ 0 ] * xx [ 9 ] ; xx [ 11 ] = - xx [ 4 ] ; xx
[ 12 ] = xx [ 6 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 3 ] ; xx [ 15 ]
= motionData [ 112 ] ; xx [ 16 ] = motionData [ 113 ] ; xx [ 17 ] =
motionData [ 114 ] ; xx [ 18 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15 , xx + 19 ) ; xx [ 15 ] =
motionData [ 113 ] ; xx [ 16 ] = motionData [ 114 ] ; xx [ 17 ] = motionData
[ 115 ] ; xx [ 0 ] = xx [ 5 ] * motionData [ 115 ] + xx [ 8 ] * motionData [
113 ] ; xx [ 2 ] = xx [ 5 ] * motionData [ 114 ] ; xx [ 23 ] = xx [ 8 ] *
motionData [ 114 ] ; xx [ 24 ] = - xx [ 0 ] ; xx [ 25 ] = xx [ 2 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 23 , xx + 26 ) ; xx [ 7 ] = 2.0 ;
xx [ 9 ] = xx [ 8 ] + ( xx [ 28 ] - xx [ 2 ] * motionData [ 112 ] ) * xx [ 7
] ; xx [ 2 ] = 0.07431243570379253 ; xx [ 15 ] = 2.141422054707503e-3 ; xx [
16 ] = 4.282844109415006e-3 ; xx [ 23 ] = xx [ 9 ] * xx [ 2 ] ; xx [ 24 ] = -
( xx [ 9 ] * xx [ 15 ] ) ; xx [ 25 ] = xx [ 16 ] * ( xx [ 27 ] + xx [ 0 ] *
motionData [ 112 ] ) - ( xx [ 7 ] * ( xx [ 26 ] - xx [ 8 ] * motionData [ 112
] * motionData [ 114 ] ) - xx [ 5 ] ) * xx [ 2 ] ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 17 ] = - (
xx [ 8 ] * motionData [ 117 ] ) ; xx [ 18 ] = xx [ 8 ] * motionData [ 116 ] +
xx [ 5 ] * motionData [ 118 ] ; xx [ 19 ] = - ( xx [ 5 ] * motionData [ 117 ]
) ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 17 , xx + 20 ) ; xx [ 0 ] =
1.291763771785659e-5 ; xx [ 9 ] = xx [ 6 ] * xx [ 0 ] ; xx [ 11 ] = xx [ 0 ]
* xx [ 3 ] ; xx [ 29 ] = motionData [ 0 ] ; xx [ 30 ] = motionData [ 1 ] ; xx
[ 31 ] = motionData [ 2 ] ; xx [ 32 ] = motionData [ 3 ] ; xx [ 12 ] =
5.084038263768928e-4 ; xx [ 13 ] = 0.9999998707627665 ; xx [ 14 ] = xx [ 12 ]
* state [ 4 ] + xx [ 13 ] * state [ 2 ] ; xx [ 17 ] = xx [ 12 ] * state [ 5 ]
- xx [ 13 ] * state [ 3 ] ; xx [ 18 ] = - xx [ 17 ] ; xx [ 19 ] = xx [ 12 ] *
state [ 2 ] - xx [ 13 ] * state [ 4 ] ; xx [ 23 ] = - xx [ 19 ] ; xx [ 24 ] =
xx [ 12 ] * state [ 3 ] + xx [ 13 ] * state [ 5 ] ; xx [ 33 ] = xx [ 14 ] ;
xx [ 34 ] = xx [ 18 ] ; xx [ 35 ] = xx [ 23 ] ; xx [ 36 ] = xx [ 24 ] ;
pm_math_Quaternion_compose_ra ( xx + 29 , xx + 33 , xx + 37 ) ; xx [ 33 ] =
motionData [ 14 ] ; xx [ 34 ] = motionData [ 15 ] ; xx [ 35 ] = motionData [
16 ] ; xx [ 36 ] = motionData [ 17 ] ; pm_math_Quaternion_compose_ra ( xx +
37 , xx + 33 , xx + 41 ) ; xx [ 25 ] = motionData [ 14 ] * motionData [ 16 ]
; xx [ 33 ] = motionData [ 15 ] * motionData [ 17 ] ; xx [ 34 ] = ( xx [ 25 ]
+ xx [ 33 ] ) * xx [ 7 ] ; xx [ 35 ] = motionData [ 15 ] * motionData [ 16 ]
; xx [ 36 ] = motionData [ 14 ] * motionData [ 17 ] ; xx [ 37 ] = 1.0 ; xx [
38 ] = motionData [ 16 ] * motionData [ 16 ] ; xx [ 39 ] = motionData [ 17 ]
* motionData [ 17 ] ; xx [ 45 ] = xx [ 2 ] * xx [ 34 ] ; xx [ 46 ] = - ( xx [
15 ] * xx [ 34 ] ) ; xx [ 47 ] = xx [ 16 ] * ( xx [ 35 ] - xx [ 36 ] ) - xx [
2 ] * ( xx [ 37 ] - ( xx [ 38 ] + xx [ 39 ] ) * xx [ 7 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 45 , xx + 48 ) ; xx [ 34 ] = xx
[ 24 ] * motionData [ 20 ] ; xx [ 40 ] = xx [ 19 ] * motionData [ 19 ] ; xx [
45 ] = xx [ 34 ] - xx [ 40 ] ; xx [ 51 ] = xx [ 18 ] ; xx [ 52 ] = xx [ 23 ]
; xx [ 53 ] = xx [ 24 ] ; xx [ 18 ] = xx [ 17 ] * motionData [ 19 ] ; xx [ 23
] = xx [ 17 ] * motionData [ 20 ] ; xx [ 54 ] = xx [ 45 ] ; xx [ 55 ] = xx [
18 ] ; xx [ 56 ] = xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 54 ,
xx + 57 ) ; xx [ 54 ] = ( xx [ 14 ] * xx [ 45 ] + xx [ 57 ] ) * xx [ 7 ] ; xx
[ 55 ] = ( xx [ 18 ] * xx [ 14 ] + xx [ 58 ] ) * xx [ 7 ] - motionData [ 20 ]
; xx [ 56 ] = motionData [ 19 ] + ( xx [ 23 ] * xx [ 14 ] + xx [ 59 ] ) * xx
[ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 54 , xx + 45 ) ; xx [ 18
] = motionData [ 16 ] * motionData [ 17 ] ; xx [ 23 ] = motionData [ 14 ] *
motionData [ 15 ] ; xx [ 54 ] = xx [ 7 ] * ( xx [ 18 ] - xx [ 23 ] ) ; xx [
55 ] = motionData [ 15 ] * motionData [ 15 ] ; xx [ 56 ] = 0.1486248714075851
; xx [ 57 ] = xx [ 2 ] * xx [ 54 ] ; xx [ 58 ] = - ( xx [ 15 ] * xx [ 54 ] )
; xx [ 59 ] = xx [ 15 ] * ( xx [ 37 ] - ( xx [ 39 ] + xx [ 55 ] ) * xx [ 7 ]
) - ( xx [ 36 ] + xx [ 35 ] ) * xx [ 56 ] ; pm_math_Quaternion_xform_ra ( xx
+ 41 , xx + 57 , xx + 60 ) ; xx [ 35 ] = xx [ 19 ] * motionData [ 18 ] ; xx [
36 ] = xx [ 17 ] * motionData [ 18 ] ; xx [ 39 ] = xx [ 34 ] - xx [ 36 ] ; xx
[ 34 ] = xx [ 19 ] * motionData [ 20 ] ; xx [ 57 ] = xx [ 35 ] ; xx [ 58 ] =
xx [ 39 ] ; xx [ 59 ] = xx [ 34 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx +
57 , xx + 63 ) ; xx [ 54 ] = 0.14 ; xx [ 57 ] = xx [ 19 ] * xx [ 54 ] ; xx [
58 ] = xx [ 17 ] * xx [ 54 ] ; xx [ 59 ] = xx [ 58 ] * xx [ 14 ] ; xx [ 66 ]
= xx [ 17 ] * xx [ 58 ] ; xx [ 67 ] = motionData [ 20 ] + ( xx [ 35 ] * xx [
14 ] + xx [ 63 ] ) * xx [ 7 ] + ( xx [ 57 ] * xx [ 14 ] + xx [ 58 ] * xx [ 24
] ) * xx [ 7 ] ; xx [ 68 ] = ( xx [ 14 ] * xx [ 39 ] + xx [ 64 ] ) * xx [ 7 ]
+ xx [ 7 ] * ( xx [ 57 ] * xx [ 24 ] - xx [ 59 ] ) ; xx [ 69 ] = ( xx [ 34 ]
* xx [ 14 ] + xx [ 65 ] ) * xx [ 7 ] - ( motionData [ 18 ] - ( xx [ 66 ] + xx
[ 19 ] * xx [ 57 ] ) * xx [ 7 ] ) - xx [ 54 ] ; pm_math_Quaternion_xform_ra (
xx + 29 , xx + 67 , xx + 63 ) ; xx [ 17 ] = xx [ 37 ] - ( xx [ 55 ] + xx [ 38
] ) * xx [ 7 ] ; xx [ 37 ] = xx [ 2 ] * xx [ 17 ] ; xx [ 38 ] = - ( xx [ 15 ]
* xx [ 17 ] ) ; xx [ 39 ] = ( xx [ 23 ] + xx [ 18 ] ) * xx [ 16 ] - xx [ 56 ]
* ( xx [ 33 ] - xx [ 25 ] ) ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 37
, xx + 16 ) ; xx [ 23 ] = xx [ 24 ] * motionData [ 18 ] ; xx [ 25 ] = xx [ 24
] * motionData [ 19 ] ; xx [ 33 ] = xx [ 36 ] + xx [ 40 ] ; xx [ 34 ] = - xx
[ 23 ] ; xx [ 35 ] = - xx [ 25 ] ; xx [ 36 ] = - xx [ 33 ] ;
pm_math_Vector3_cross_ra ( xx + 51 , xx + 34 , xx + 37 ) ; xx [ 34 ] = xx [
54 ] * xx [ 24 ] ; xx [ 40 ] = xx [ 7 ] * ( xx [ 37 ] - xx [ 23 ] * xx [ 14 ]
) - motionData [ 19 ] + xx [ 7 ] * ( xx [ 19 ] * xx [ 58 ] - xx [ 34 ] * xx [
14 ] ) ; xx [ 41 ] = motionData [ 18 ] + xx [ 7 ] * ( xx [ 38 ] - xx [ 25 ] *
xx [ 14 ] ) - ( xx [ 34 ] * xx [ 24 ] + xx [ 66 ] ) * xx [ 7 ] + xx [ 54 ] ;
xx [ 42 ] = xx [ 7 ] * ( xx [ 39 ] - xx [ 33 ] * xx [ 14 ] ) - ( xx [ 59 ] +
xx [ 19 ] * xx [ 34 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 ,
xx + 40 , xx + 23 ) ; xx [ 29 ] = motionData [ 98 ] ; xx [ 30 ] = motionData
[ 99 ] ; xx [ 31 ] = motionData [ 100 ] ; xx [ 32 ] = motionData [ 101 ] ; xx
[ 14 ] = 0.9902139361309295 ; xx [ 19 ] = 0.1395577324697271 ; xx [ 33 ] = xx
[ 14 ] * state [ 11 ] - xx [ 19 ] * state [ 10 ] ; xx [ 34 ] =
0.05200961894323344 ; xx [ 35 ] = xx [ 33 ] * xx [ 34 ] ; xx [ 36 ] = xx [ 19
] * state [ 12 ] - xx [ 14 ] * state [ 9 ] ; xx [ 37 ] = xx [ 19 ] * state [
11 ] + xx [ 14 ] * state [ 10 ] ; xx [ 38 ] = xx [ 34 ] * xx [ 37 ] ; xx [ 39
] = xx [ 19 ] * state [ 9 ] + xx [ 14 ] * state [ 12 ] ; xx [ 40 ] = xx [ 7 ]
* ( xx [ 35 ] * xx [ 36 ] - xx [ 38 ] * xx [ 39 ] ) ; xx [ 41 ] = - ( ( xx [
38 ] * xx [ 36 ] + xx [ 35 ] * xx [ 39 ] ) * xx [ 7 ] ) ; xx [ 42 ] = ( xx [
38 ] * xx [ 37 ] + xx [ 33 ] * xx [ 35 ] ) * xx [ 7 ] - xx [ 34 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 40 , xx + 51 ) ; xx [ 14 ] = -
xx [ 37 ] ; xx [ 19 ] = - xx [ 33 ] ; xx [ 34 ] = - xx [ 39 ] ; xx [ 40 ] =
xx [ 36 ] ; xx [ 41 ] = xx [ 14 ] ; xx [ 42 ] = xx [ 19 ] ; xx [ 43 ] = xx [
34 ] ; pm_math_Quaternion_compose_ra ( xx + 29 , xx + 40 , xx + 55 ) ; xx [
35 ] = 0.07200961894323347 ; xx [ 38 ] = xx [ 35 ] * xx [ 57 ] ; xx [ 40 ] =
xx [ 35 ] * xx [ 56 ] ; xx [ 41 ] = 0.05312177826491075 ; xx [ 42 ] = xx [ 41
] * xx [ 37 ] ; xx [ 43 ] = xx [ 33 ] * xx [ 41 ] ; xx [ 66 ] = xx [ 7 ] * (
xx [ 42 ] * xx [ 39 ] - xx [ 43 ] * xx [ 36 ] ) ; xx [ 67 ] = ( xx [ 42 ] *
xx [ 36 ] + xx [ 43 ] * xx [ 39 ] ) * xx [ 7 ] ; xx [ 68 ] = xx [ 41 ] - ( xx
[ 42 ] * xx [ 37 ] + xx [ 33 ] * xx [ 43 ] ) * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 66 , xx + 41 ) ; xx [ 44 ] =
0.01848076211353309 ; xx [ 59 ] = xx [ 44 ] * xx [ 57 ] ; xx [ 66 ] = xx [ 44
] * xx [ 56 ] ; xx [ 67 ] = xx [ 15 ] * xx [ 58 ] ; xx [ 68 ] = xx [ 15 ] *
xx [ 56 ] + xx [ 2 ] * xx [ 57 ] ; xx [ 69 ] = xx [ 67 ] ; xx [ 70 ] = xx [ 2
] * xx [ 58 ] ; xx [ 71 ] = - xx [ 68 ] ; pm_math_Vector3_cross_ra ( xx + 56
, xx + 69 , xx + 72 ) ; xx [ 69 ] = 0.03530169195229536 ; xx [ 75 ] = xx [ 14
] ; xx [ 76 ] = xx [ 19 ] ; xx [ 77 ] = xx [ 34 ] ; xx [ 14 ] =
0.0654271681639358 ; xx [ 19 ] = xx [ 14 ] * xx [ 39 ] ; xx [ 34 ] = xx [ 69
] * xx [ 39 ] ; xx [ 39 ] = xx [ 14 ] * xx [ 37 ] + xx [ 33 ] * xx [ 69 ] ;
xx [ 78 ] = - xx [ 19 ] ; xx [ 79 ] = - xx [ 34 ] ; xx [ 80 ] = xx [ 39 ] ;
pm_math_Vector3_cross_ra ( xx + 75 , xx + 78 , xx + 81 ) ; xx [ 75 ] = xx [
69 ] + xx [ 7 ] * ( xx [ 81 ] - xx [ 19 ] * xx [ 36 ] ) ; xx [ 76 ] = ( xx [
82 ] - xx [ 34 ] * xx [ 36 ] ) * xx [ 7 ] - xx [ 14 ] ; xx [ 77 ] = ( xx [ 39
] * xx [ 36 ] + xx [ 83 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx +
29 , xx + 75 , xx + 69 ) ; xx [ 14 ] = 9.87654321 ; xx [ 19 ] =
0.4995596447523598 ; xx [ 29 ] = xx [ 1 ] * state [ 43 ] ; xx [ 1 ] = cos (
xx [ 29 ] ) ; xx [ 30 ] = xx [ 19 ] * xx [ 1 ] ; xx [ 31 ] = sin ( xx [ 29 ]
) ; xx [ 29 ] = xx [ 5 ] * xx [ 31 ] ; xx [ 32 ] = 0.8662794937748998 ; xx [
33 ] = xx [ 8 ] * xx [ 31 ] ; xx [ 31 ] = xx [ 19 ] * xx [ 29 ] - xx [ 32 ] *
xx [ 33 ] ; xx [ 34 ] = xx [ 32 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 19 ] * xx [ 33
] + xx [ 32 ] * xx [ 29 ] ; xx [ 75 ] = - xx [ 30 ] ; xx [ 76 ] = xx [ 31 ] ;
xx [ 77 ] = - xx [ 34 ] ; xx [ 78 ] = - xx [ 1 ] ; xx [ 79 ] = motionData [
70 ] ; xx [ 80 ] = motionData [ 71 ] ; xx [ 81 ] = motionData [ 72 ] ; xx [
82 ] = motionData [ 73 ] ; pm_math_Quaternion_compose_ra ( xx + 75 , xx + 79
, xx + 83 ) ; xx [ 79 ] = motionData [ 71 ] ; xx [ 80 ] = motionData [ 72 ] ;
xx [ 81 ] = motionData [ 73 ] ; xx [ 19 ] = xx [ 5 ] * motionData [ 73 ] + xx
[ 8 ] * motionData [ 71 ] ; xx [ 29 ] = xx [ 5 ] * motionData [ 72 ] ; xx [
87 ] = xx [ 8 ] * motionData [ 72 ] ; xx [ 88 ] = - xx [ 19 ] ; xx [ 89 ] =
xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx + 87 , xx + 90 ) ; xx [
32 ] = 0.28 * ( xx [ 91 ] + xx [ 19 ] * motionData [ 70 ] ) ; xx [ 19 ] = (
xx [ 8 ] + ( xx [ 92 ] - xx [ 29 ] * motionData [ 70 ] ) * xx [ 7 ] ) * xx [
54 ] ; xx [ 29 ] = xx [ 85 ] * xx [ 32 ] + xx [ 86 ] * xx [ 19 ] ; xx [ 33 ]
= xx [ 84 ] * xx [ 32 ] ; xx [ 36 ] = xx [ 84 ] * xx [ 19 ] ; xx [ 79 ] = -
xx [ 29 ] ; xx [ 80 ] = xx [ 33 ] ; xx [ 81 ] = xx [ 36 ] ;
pm_math_Vector3_cross_ra ( xx + 84 , xx + 79 , xx + 87 ) ; xx [ 79 ] = - ( xx
[ 8 ] * motionData [ 75 ] ) ; xx [ 80 ] = xx [ 8 ] * motionData [ 74 ] + xx [
5 ] * motionData [ 76 ] ; xx [ 81 ] = - ( xx [ 5 ] * motionData [ 75 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 79 , xx + 84 ) ; xx [ 5 ] = xx [
31 ] * xx [ 0 ] ; xx [ 8 ] = xx [ 0 ] * xx [ 1 ] ; xx [ 37 ] = 0.0 ; xx [ 75
] = motionData [ 63 ] ; xx [ 76 ] = motionData [ 64 ] ; xx [ 77 ] =
motionData [ 65 ] ; xx [ 78 ] = motionData [ 66 ] ; xx [ 39 ] = xx [ 12 ] *
state [ 45 ] - xx [ 13 ] * state [ 47 ] ; xx [ 79 ] = xx [ 39 ] * xx [ 54 ] ;
xx [ 80 ] = xx [ 12 ] * state [ 47 ] + xx [ 13 ] * state [ 45 ] ; xx [ 81 ] =
xx [ 12 ] * state [ 48 ] - xx [ 13 ] * state [ 46 ] ; xx [ 82 ] = xx [ 81 ] *
xx [ 54 ] ; xx [ 90 ] = xx [ 12 ] * state [ 46 ] + xx [ 13 ] * state [ 48 ] ;
xx [ 12 ] = xx [ 82 ] * xx [ 80 ] ; xx [ 13 ] = xx [ 81 ] * xx [ 82 ] ; xx [
91 ] = ( xx [ 79 ] * xx [ 80 ] + xx [ 82 ] * xx [ 90 ] ) * xx [ 7 ] ; xx [ 92
] = xx [ 7 ] * ( xx [ 79 ] * xx [ 90 ] - xx [ 12 ] ) ; xx [ 93 ] = ( xx [ 13
] + xx [ 39 ] * xx [ 79 ] ) * xx [ 7 ] - xx [ 54 ] ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 91 , xx + 94 ) ; xx [ 97 ] = xx
[ 80 ] ; xx [ 98 ] = - xx [ 81 ] ; xx [ 99 ] = - xx [ 39 ] ; xx [ 100 ] = xx
[ 90 ] ; pm_math_Quaternion_compose_ra ( xx + 75 , xx + 97 , xx + 101 ) ; xx
[ 79 ] = xx [ 54 ] * xx [ 103 ] ; xx [ 81 ] = xx [ 54 ] * xx [ 102 ] ; xx [
91 ] = xx [ 54 ] * xx [ 104 ] ; xx [ 92 ] = xx [ 54 ] * xx [ 90 ] ; xx [ 97 ]
= xx [ 7 ] * ( xx [ 39 ] * xx [ 82 ] - xx [ 92 ] * xx [ 80 ] ) ; xx [ 98 ] =
xx [ 54 ] - ( xx [ 92 ] * xx [ 90 ] + xx [ 13 ] ) * xx [ 7 ] ; xx [ 99 ] = -
( ( xx [ 12 ] + xx [ 39 ] * xx [ 92 ] ) * xx [ 7 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 97 , xx + 105 ) ; xx [ 12 ] = xx
[ 101 ] * xx [ 81 ] ; xx [ 13 ] = xx [ 102 ] * xx [ 81 ] ; J [ 0 ] = xx [ 26
] + xx [ 20 ] + xx [ 7 ] * ( xx [ 9 ] * xx [ 10 ] + xx [ 11 ] * xx [ 4 ] ) ;
J [ 1 ] = xx [ 48 ] + xx [ 45 ] ; J [ 2 ] = xx [ 60 ] + xx [ 63 ] ; J [ 3 ] =
xx [ 16 ] + xx [ 23 ] ; J [ 4 ] = xx [ 51 ] - ( xx [ 55 ] * xx [ 38 ] + xx [
58 ] * xx [ 40 ] ) * xx [ 7 ] ; J [ 5 ] = xx [ 41 ] - ( xx [ 55 ] * xx [ 59 ]
+ xx [ 58 ] * xx [ 66 ] ) * xx [ 7 ] ; J [ 6 ] = xx [ 7 ] * ( xx [ 72 ] + xx
[ 55 ] * xx [ 67 ] ) + xx [ 69 ] + xx [ 2 ] ; J [ 19 ] = - ( xx [ 7 ] * ( xx
[ 87 ] - xx [ 29 ] * xx [ 83 ] ) + xx [ 84 ] - xx [ 7 ] * ( xx [ 5 ] * xx [
34 ] + xx [ 8 ] * xx [ 30 ] ) ) ; J [ 20 ] = xx [ 37 ] ; J [ 21 ] = - ( xx [
94 ] - ( xx [ 101 ] * xx [ 79 ] + xx [ 104 ] * xx [ 81 ] ) * xx [ 7 ] ) ; J [
22 ] = - ( xx [ 7 ] * ( xx [ 103 ] * xx [ 81 ] - xx [ 101 ] * xx [ 91 ] ) +
xx [ 105 ] ) ; J [ 27 ] = xx [ 27 ] + xx [ 21 ] - ( xx [ 11 ] * xx [ 3 ] + xx
[ 6 ] * xx [ 9 ] ) * xx [ 7 ] + xx [ 0 ] ; J [ 28 ] = xx [ 49 ] + xx [ 46 ] ;
J [ 29 ] = xx [ 61 ] + xx [ 64 ] ; J [ 30 ] = xx [ 17 ] + xx [ 24 ] ; J [ 31
] = xx [ 7 ] * ( xx [ 55 ] * xx [ 40 ] - xx [ 58 ] * xx [ 38 ] ) + xx [ 52 ]
; J [ 32 ] = xx [ 7 ] * ( xx [ 55 ] * xx [ 66 ] - xx [ 58 ] * xx [ 59 ] ) +
xx [ 42 ] ; J [ 33 ] = ( xx [ 2 ] * xx [ 55 ] * xx [ 58 ] + xx [ 73 ] ) * xx
[ 7 ] + xx [ 70 ] - xx [ 15 ] ; J [ 46 ] = - ( xx [ 19 ] + ( xx [ 83 ] * xx [
33 ] + xx [ 88 ] ) * xx [ 7 ] + xx [ 85 ] - ( xx [ 8 ] * xx [ 1 ] + xx [ 31 ]
* xx [ 5 ] ) * xx [ 7 ] + xx [ 0 ] ) ; J [ 47 ] = xx [ 37 ] ; J [ 48 ] = - (
xx [ 7 ] * ( xx [ 12 ] - xx [ 104 ] * xx [ 79 ] ) + xx [ 95 ] ) ; J [ 49 ] =
- ( xx [ 106 ] - ( xx [ 104 ] * xx [ 91 ] + xx [ 13 ] ) * xx [ 7 ] + xx [ 54
] ) ; J [ 54 ] = xx [ 28 ] + xx [ 22 ] + ( xx [ 11 ] * xx [ 10 ] - xx [ 9 ] *
xx [ 4 ] ) * xx [ 7 ] ; J [ 55 ] = xx [ 50 ] + xx [ 47 ] ; J [ 56 ] = xx [ 62
] + xx [ 65 ] ; J [ 57 ] = xx [ 18 ] + xx [ 25 ] ; J [ 58 ] = xx [ 53 ] + (
xx [ 56 ] * xx [ 40 ] + xx [ 57 ] * xx [ 38 ] ) * xx [ 7 ] - xx [ 35 ] ; J [
59 ] = xx [ 43 ] + ( xx [ 56 ] * xx [ 66 ] + xx [ 57 ] * xx [ 59 ] ) * xx [ 7
] - xx [ 44 ] ; J [ 60 ] = ( xx [ 74 ] - xx [ 55 ] * xx [ 68 ] ) * xx [ 7 ] +
xx [ 71 ] ; J [ 73 ] = - ( ( xx [ 83 ] * xx [ 36 ] + xx [ 89 ] ) * xx [ 7 ] -
xx [ 32 ] + xx [ 86 ] + ( xx [ 8 ] * xx [ 34 ] - xx [ 5 ] * xx [ 30 ] ) * xx
[ 7 ] ) ; J [ 74 ] = xx [ 37 ] ; J [ 75 ] = - ( xx [ 96 ] + ( xx [ 13 ] + xx
[ 103 ] * xx [ 79 ] ) * xx [ 7 ] - xx [ 54 ] ) ; J [ 76 ] = - ( ( xx [ 12 ] +
xx [ 103 ] * xx [ 91 ] ) * xx [ 7 ] + xx [ 107 ] ) ; return 3 ; } static
size_t computeAssemblyJacobian_2 ( const RuntimeDerivedValuesBundle * rtdv ,
const double * state , const int * modeVector , const double * motionData ,
double * J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 108 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.5004402260104069 ; xx [ 1 ]
= 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx
[ 4 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 5 ] = 1.016807521344378e-3 ; xx [ 6 ] =
sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] =
0.8657710899485228 ; xx [ 8 ] = 0.9999994830510986 ; xx [ 9 ] = xx [ 8 ] * xx
[ 6 ] ; xx [ 6 ] = xx [ 0 ] * xx [ 2 ] + xx [ 7 ] * xx [ 9 ] ; xx [ 10 ] = xx
[ 7 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 7 ] * xx [ 2 ] - xx [ 0 ] * xx [ 9 ] ; xx
[ 11 ] = - xx [ 4 ] ; xx [ 12 ] = xx [ 6 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14
] = xx [ 3 ] ; xx [ 15 ] = motionData [ 112 ] ; xx [ 16 ] = motionData [ 113
] ; xx [ 17 ] = motionData [ 114 ] ; xx [ 18 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15 , xx + 19 ) ; xx [ 15 ] =
motionData [ 113 ] ; xx [ 16 ] = motionData [ 114 ] ; xx [ 17 ] = motionData
[ 115 ] ; xx [ 0 ] = xx [ 5 ] * motionData [ 115 ] + xx [ 8 ] * motionData [
113 ] ; xx [ 2 ] = xx [ 5 ] * motionData [ 114 ] ; xx [ 23 ] = xx [ 8 ] *
motionData [ 114 ] ; xx [ 24 ] = - xx [ 0 ] ; xx [ 25 ] = xx [ 2 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 23 , xx + 26 ) ; xx [ 7 ] = 2.0 ;
xx [ 9 ] = xx [ 8 ] + ( xx [ 28 ] - xx [ 2 ] * motionData [ 112 ] ) * xx [ 7
] ; xx [ 2 ] = 0.06466571354218477 ; xx [ 15 ] = 0.03667791270951477 ; xx [
16 ] = 0.07335582541902955 ; xx [ 23 ] = xx [ 9 ] * xx [ 2 ] ; xx [ 24 ] = xx
[ 9 ] * xx [ 15 ] ; xx [ 25 ] = - ( ( xx [ 7 ] * ( xx [ 26 ] - xx [ 8 ] *
motionData [ 112 ] * motionData [ 114 ] ) - xx [ 5 ] ) * xx [ 2 ] + xx [ 16 ]
* ( xx [ 27 ] + xx [ 0 ] * motionData [ 112 ] ) ) ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 17 ] = - (
xx [ 8 ] * motionData [ 117 ] ) ; xx [ 18 ] = xx [ 8 ] * motionData [ 116 ] +
xx [ 5 ] * motionData [ 118 ] ; xx [ 19 ] = - ( xx [ 5 ] * motionData [ 117 ]
) ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 17 , xx + 20 ) ; xx [ 0 ] =
1.291763771785659e-5 ; xx [ 9 ] = xx [ 6 ] * xx [ 0 ] ; xx [ 11 ] = xx [ 0 ]
* xx [ 3 ] ; xx [ 29 ] = motionData [ 0 ] ; xx [ 30 ] = motionData [ 1 ] ; xx
[ 31 ] = motionData [ 2 ] ; xx [ 32 ] = motionData [ 3 ] ; xx [ 12 ] =
5.084038263768928e-4 ; xx [ 13 ] = 0.9999998707627665 ; xx [ 14 ] = xx [ 12 ]
* state [ 4 ] + xx [ 13 ] * state [ 2 ] ; xx [ 17 ] = xx [ 12 ] * state [ 5 ]
- xx [ 13 ] * state [ 3 ] ; xx [ 18 ] = - xx [ 17 ] ; xx [ 19 ] = xx [ 12 ] *
state [ 2 ] - xx [ 13 ] * state [ 4 ] ; xx [ 23 ] = - xx [ 19 ] ; xx [ 24 ] =
xx [ 12 ] * state [ 3 ] + xx [ 13 ] * state [ 5 ] ; xx [ 33 ] = xx [ 14 ] ;
xx [ 34 ] = xx [ 18 ] ; xx [ 35 ] = xx [ 23 ] ; xx [ 36 ] = xx [ 24 ] ;
pm_math_Quaternion_compose_ra ( xx + 29 , xx + 33 , xx + 37 ) ; xx [ 33 ] =
motionData [ 14 ] ; xx [ 34 ] = motionData [ 15 ] ; xx [ 35 ] = motionData [
16 ] ; xx [ 36 ] = motionData [ 17 ] ; pm_math_Quaternion_compose_ra ( xx +
37 , xx + 33 , xx + 41 ) ; xx [ 25 ] = motionData [ 14 ] * motionData [ 16 ]
; xx [ 33 ] = motionData [ 15 ] * motionData [ 17 ] ; xx [ 34 ] = ( xx [ 25 ]
+ xx [ 33 ] ) * xx [ 7 ] ; xx [ 35 ] = 1.0 ; xx [ 36 ] = motionData [ 16 ] *
motionData [ 16 ] ; xx [ 37 ] = motionData [ 17 ] * motionData [ 17 ] ; xx [
38 ] = motionData [ 15 ] * motionData [ 16 ] ; xx [ 39 ] = motionData [ 14 ]
* motionData [ 17 ] ; xx [ 45 ] = xx [ 2 ] * xx [ 34 ] ; xx [ 46 ] = xx [ 15
] * xx [ 34 ] ; xx [ 47 ] = - ( xx [ 2 ] * ( xx [ 35 ] - ( xx [ 36 ] + xx [
37 ] ) * xx [ 7 ] ) + xx [ 16 ] * ( xx [ 38 ] - xx [ 39 ] ) ) ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 45 , xx + 48 ) ; xx [ 34 ] = xx
[ 24 ] * motionData [ 20 ] ; xx [ 40 ] = xx [ 19 ] * motionData [ 19 ] ; xx [
45 ] = xx [ 34 ] - xx [ 40 ] ; xx [ 51 ] = xx [ 18 ] ; xx [ 52 ] = xx [ 23 ]
; xx [ 53 ] = xx [ 24 ] ; xx [ 18 ] = xx [ 17 ] * motionData [ 19 ] ; xx [ 23
] = xx [ 17 ] * motionData [ 20 ] ; xx [ 54 ] = xx [ 45 ] ; xx [ 55 ] = xx [
18 ] ; xx [ 56 ] = xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 54 ,
xx + 57 ) ; xx [ 54 ] = ( xx [ 14 ] * xx [ 45 ] + xx [ 57 ] ) * xx [ 7 ] ; xx
[ 55 ] = ( xx [ 18 ] * xx [ 14 ] + xx [ 58 ] ) * xx [ 7 ] - motionData [ 20 ]
; xx [ 56 ] = motionData [ 19 ] + ( xx [ 23 ] * xx [ 14 ] + xx [ 59 ] ) * xx
[ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 54 , xx + 45 ) ; xx [ 18
] = motionData [ 16 ] * motionData [ 17 ] ; xx [ 23 ] = motionData [ 14 ] *
motionData [ 15 ] ; xx [ 54 ] = xx [ 7 ] * ( xx [ 18 ] - xx [ 23 ] ) ; xx [
55 ] = 0.1293314270843695 ; xx [ 56 ] = motionData [ 15 ] * motionData [ 15 ]
; xx [ 57 ] = xx [ 2 ] * xx [ 54 ] ; xx [ 58 ] = xx [ 15 ] * xx [ 54 ] ; xx [
59 ] = - ( ( xx [ 39 ] + xx [ 38 ] ) * xx [ 55 ] + xx [ 15 ] * ( xx [ 35 ] -
( xx [ 37 ] + xx [ 56 ] ) * xx [ 7 ] ) ) ; pm_math_Quaternion_xform_ra ( xx +
41 , xx + 57 , xx + 37 ) ; xx [ 54 ] = xx [ 19 ] * motionData [ 18 ] ; xx [
57 ] = xx [ 17 ] * motionData [ 18 ] ; xx [ 58 ] = xx [ 34 ] - xx [ 57 ] ; xx
[ 34 ] = xx [ 19 ] * motionData [ 20 ] ; xx [ 59 ] = xx [ 54 ] ; xx [ 60 ] =
xx [ 58 ] ; xx [ 61 ] = xx [ 34 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx +
59 , xx + 62 ) ; xx [ 59 ] = 0.14 ; xx [ 60 ] = xx [ 19 ] * xx [ 59 ] ; xx [
61 ] = xx [ 17 ] * xx [ 59 ] ; xx [ 65 ] = xx [ 61 ] * xx [ 14 ] ; xx [ 66 ]
= xx [ 17 ] * xx [ 61 ] ; xx [ 67 ] = motionData [ 20 ] + ( xx [ 54 ] * xx [
14 ] + xx [ 62 ] ) * xx [ 7 ] + ( xx [ 60 ] * xx [ 14 ] + xx [ 61 ] * xx [ 24
] ) * xx [ 7 ] ; xx [ 68 ] = ( xx [ 14 ] * xx [ 58 ] + xx [ 63 ] ) * xx [ 7 ]
+ xx [ 7 ] * ( xx [ 60 ] * xx [ 24 ] - xx [ 65 ] ) ; xx [ 69 ] = ( xx [ 34 ]
* xx [ 14 ] + xx [ 64 ] ) * xx [ 7 ] - ( motionData [ 18 ] - ( xx [ 66 ] + xx
[ 19 ] * xx [ 60 ] ) * xx [ 7 ] ) - xx [ 59 ] ; pm_math_Quaternion_xform_ra (
xx + 29 , xx + 67 , xx + 62 ) ; xx [ 17 ] = xx [ 35 ] - ( xx [ 56 ] + xx [ 36
] ) * xx [ 7 ] ; xx [ 34 ] = xx [ 2 ] * xx [ 17 ] ; xx [ 35 ] = xx [ 15 ] *
xx [ 17 ] ; xx [ 36 ] = - ( xx [ 55 ] * ( xx [ 33 ] - xx [ 25 ] ) + ( xx [ 23
] + xx [ 18 ] ) * xx [ 16 ] ) ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
34 , xx + 16 ) ; xx [ 23 ] = xx [ 24 ] * motionData [ 18 ] ; xx [ 25 ] = xx [
24 ] * motionData [ 19 ] ; xx [ 33 ] = xx [ 57 ] + xx [ 40 ] ; xx [ 34 ] = -
xx [ 23 ] ; xx [ 35 ] = - xx [ 25 ] ; xx [ 36 ] = - xx [ 33 ] ;
pm_math_Vector3_cross_ra ( xx + 51 , xx + 34 , xx + 40 ) ; xx [ 34 ] = xx [
59 ] * xx [ 24 ] ; xx [ 51 ] = xx [ 7 ] * ( xx [ 40 ] - xx [ 23 ] * xx [ 14 ]
) - motionData [ 19 ] + xx [ 7 ] * ( xx [ 19 ] * xx [ 61 ] - xx [ 34 ] * xx [
14 ] ) ; xx [ 52 ] = motionData [ 18 ] + xx [ 7 ] * ( xx [ 41 ] - xx [ 25 ] *
xx [ 14 ] ) - ( xx [ 34 ] * xx [ 24 ] + xx [ 66 ] ) * xx [ 7 ] + xx [ 59 ] ;
xx [ 53 ] = xx [ 7 ] * ( xx [ 42 ] - xx [ 33 ] * xx [ 14 ] ) - ( xx [ 65 ] +
xx [ 19 ] * xx [ 34 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 ,
xx + 51 , xx + 23 ) ; xx [ 29 ] = motionData [ 98 ] ; xx [ 30 ] = motionData
[ 99 ] ; xx [ 31 ] = motionData [ 100 ] ; xx [ 32 ] = motionData [ 101 ] ; xx
[ 14 ] = 0.9902139361309295 ; xx [ 19 ] = 0.1395577324697271 ; xx [ 33 ] = xx
[ 14 ] * state [ 11 ] - xx [ 19 ] * state [ 10 ] ; xx [ 34 ] =
0.05200961894323344 ; xx [ 35 ] = xx [ 33 ] * xx [ 34 ] ; xx [ 36 ] = xx [ 19
] * state [ 12 ] - xx [ 14 ] * state [ 9 ] ; xx [ 40 ] = xx [ 19 ] * state [
11 ] + xx [ 14 ] * state [ 10 ] ; xx [ 41 ] = xx [ 34 ] * xx [ 40 ] ; xx [ 42
] = xx [ 19 ] * state [ 9 ] + xx [ 14 ] * state [ 12 ] ; xx [ 51 ] = xx [ 7 ]
* ( xx [ 35 ] * xx [ 36 ] - xx [ 41 ] * xx [ 42 ] ) ; xx [ 52 ] = - ( ( xx [
41 ] * xx [ 36 ] + xx [ 35 ] * xx [ 42 ] ) * xx [ 7 ] ) ; xx [ 53 ] = ( xx [
41 ] * xx [ 40 ] + xx [ 33 ] * xx [ 35 ] ) * xx [ 7 ] - xx [ 34 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 51 , xx + 54 ) ; xx [ 14 ] = -
xx [ 40 ] ; xx [ 19 ] = - xx [ 33 ] ; xx [ 34 ] = - xx [ 42 ] ; xx [ 65 ] =
xx [ 36 ] ; xx [ 66 ] = xx [ 14 ] ; xx [ 67 ] = xx [ 19 ] ; xx [ 68 ] = xx [
34 ] ; pm_math_Quaternion_compose_ra ( xx + 29 , xx + 65 , xx + 69 ) ; xx [
35 ] = 0.05200961894323338 ; xx [ 41 ] = xx [ 35 ] * xx [ 71 ] ; xx [ 43 ] =
xx [ 35 ] * xx [ 70 ] ; xx [ 44 ] = 0.05312177826491075 ; xx [ 51 ] = xx [ 44
] * xx [ 40 ] ; xx [ 52 ] = xx [ 33 ] * xx [ 44 ] ; xx [ 65 ] = xx [ 7 ] * (
xx [ 51 ] * xx [ 42 ] - xx [ 52 ] * xx [ 36 ] ) ; xx [ 66 ] = ( xx [ 51 ] *
xx [ 36 ] + xx [ 52 ] * xx [ 42 ] ) * xx [ 7 ] ; xx [ 67 ] = xx [ 44 ] - ( xx
[ 51 ] * xx [ 40 ] + xx [ 33 ] * xx [ 52 ] ) * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 65 , xx + 51 ) ; xx [ 44 ] =
0.05312177826491074 ; xx [ 57 ] = xx [ 44 ] * xx [ 71 ] ; xx [ 58 ] = xx [ 44
] * xx [ 70 ] ; xx [ 60 ] = xx [ 15 ] * xx [ 72 ] ; xx [ 61 ] = xx [ 15 ] *
xx [ 70 ] - xx [ 2 ] * xx [ 71 ] ; xx [ 65 ] = - xx [ 60 ] ; xx [ 66 ] = xx [
2 ] * xx [ 72 ] ; xx [ 67 ] = xx [ 61 ] ; pm_math_Vector3_cross_ra ( xx + 70
, xx + 65 , xx + 73 ) ; xx [ 65 ] = 0.03530169195229536 ; xx [ 66 ] = xx [ 14
] ; xx [ 67 ] = xx [ 19 ] ; xx [ 68 ] = xx [ 34 ] ; xx [ 14 ] =
0.0654271681639358 ; xx [ 19 ] = xx [ 14 ] * xx [ 42 ] ; xx [ 34 ] = xx [ 65
] * xx [ 42 ] ; xx [ 42 ] = xx [ 14 ] * xx [ 40 ] + xx [ 33 ] * xx [ 65 ] ;
xx [ 76 ] = - xx [ 19 ] ; xx [ 77 ] = - xx [ 34 ] ; xx [ 78 ] = xx [ 42 ] ;
pm_math_Vector3_cross_ra ( xx + 66 , xx + 76 , xx + 79 ) ; xx [ 66 ] = xx [
65 ] + xx [ 7 ] * ( xx [ 79 ] - xx [ 19 ] * xx [ 36 ] ) ; xx [ 67 ] = ( xx [
80 ] - xx [ 34 ] * xx [ 36 ] ) * xx [ 7 ] - xx [ 14 ] ; xx [ 68 ] = ( xx [ 42
] * xx [ 36 ] + xx [ 81 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx +
29 , xx + 66 , xx + 76 ) ; xx [ 14 ] = 9.87654321 ; xx [ 19 ] =
0.8657710899485229 ; xx [ 29 ] = xx [ 1 ] * state [ 52 ] ; xx [ 1 ] = cos (
xx [ 29 ] ) ; xx [ 30 ] = xx [ 19 ] * xx [ 1 ] ; xx [ 31 ] = sin ( xx [ 29 ]
) ; xx [ 29 ] = xx [ 5 ] * xx [ 31 ] ; xx [ 32 ] = 0.5004402260104068 ; xx [
33 ] = xx [ 8 ] * xx [ 31 ] ; xx [ 31 ] = xx [ 19 ] * xx [ 29 ] - xx [ 32 ] *
xx [ 33 ] ; xx [ 34 ] = xx [ 32 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 19 ] * xx [ 33
] + xx [ 32 ] * xx [ 29 ] ; xx [ 65 ] = xx [ 30 ] ; xx [ 66 ] = xx [ 31 ] ;
xx [ 67 ] = - xx [ 34 ] ; xx [ 68 ] = xx [ 1 ] ; xx [ 79 ] = motionData [ 84
] ; xx [ 80 ] = motionData [ 85 ] ; xx [ 81 ] = motionData [ 86 ] ; xx [ 82 ]
= motionData [ 87 ] ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 79 , xx
+ 83 ) ; xx [ 79 ] = motionData [ 85 ] ; xx [ 80 ] = motionData [ 86 ] ; xx [
81 ] = motionData [ 87 ] ; xx [ 19 ] = xx [ 5 ] * motionData [ 87 ] - xx [ 8
] * motionData [ 85 ] ; xx [ 29 ] = xx [ 5 ] * motionData [ 86 ] ; xx [ 87 ]
= xx [ 8 ] * motionData [ 86 ] ; xx [ 88 ] = xx [ 19 ] ; xx [ 89 ] = - xx [
29 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx + 87 , xx + 90 ) ; xx [ 32 ] =
0.28 * ( xx [ 91 ] - xx [ 19 ] * motionData [ 84 ] ) ; xx [ 19 ] = ( xx [ 8 ]
+ ( xx [ 29 ] * motionData [ 84 ] + xx [ 92 ] ) * xx [ 7 ] ) * xx [ 59 ] ; xx
[ 29 ] = xx [ 85 ] * xx [ 32 ] + xx [ 86 ] * xx [ 19 ] ; xx [ 33 ] = xx [ 84
] * xx [ 32 ] ; xx [ 36 ] = xx [ 84 ] * xx [ 19 ] ; xx [ 79 ] = - xx [ 29 ] ;
xx [ 80 ] = xx [ 33 ] ; xx [ 81 ] = xx [ 36 ] ; pm_math_Vector3_cross_ra ( xx
+ 84 , xx + 79 , xx + 87 ) ; xx [ 79 ] = - ( xx [ 8 ] * motionData [ 89 ] ) ;
xx [ 80 ] = xx [ 8 ] * motionData [ 88 ] - xx [ 5 ] * motionData [ 90 ] ; xx
[ 81 ] = xx [ 5 ] * motionData [ 89 ] ; pm_math_Quaternion_xform_ra ( xx + 65
, xx + 79 , xx + 84 ) ; xx [ 5 ] = xx [ 31 ] * xx [ 0 ] ; xx [ 8 ] = xx [ 0 ]
* xx [ 1 ] ; xx [ 40 ] = 0.0 ; xx [ 65 ] = motionData [ 77 ] ; xx [ 66 ] =
motionData [ 78 ] ; xx [ 67 ] = motionData [ 79 ] ; xx [ 68 ] = motionData [
80 ] ; xx [ 42 ] = xx [ 13 ] * state [ 56 ] + xx [ 12 ] * state [ 54 ] ; xx [
79 ] = xx [ 42 ] * xx [ 59 ] ; xx [ 80 ] = xx [ 13 ] * state [ 54 ] - xx [ 12
] * state [ 56 ] ; xx [ 81 ] = xx [ 13 ] * state [ 55 ] + xx [ 12 ] * state [
57 ] ; xx [ 82 ] = xx [ 81 ] * xx [ 59 ] ; xx [ 90 ] = xx [ 13 ] * state [ 57
] - xx [ 12 ] * state [ 55 ] ; xx [ 12 ] = xx [ 82 ] * xx [ 80 ] ; xx [ 13 ]
= xx [ 81 ] * xx [ 82 ] ; xx [ 91 ] = - ( ( xx [ 79 ] * xx [ 80 ] + xx [ 82 ]
* xx [ 90 ] ) * xx [ 7 ] ) ; xx [ 92 ] = xx [ 7 ] * ( xx [ 12 ] - xx [ 79 ] *
xx [ 90 ] ) ; xx [ 93 ] = ( xx [ 13 ] + xx [ 42 ] * xx [ 79 ] ) * xx [ 7 ] -
xx [ 59 ] ; pm_math_Quaternion_xform_ra ( xx + 65 , xx + 91 , xx + 94 ) ; xx
[ 97 ] = xx [ 80 ] ; xx [ 98 ] = xx [ 81 ] ; xx [ 99 ] = xx [ 42 ] ; xx [ 100
] = xx [ 90 ] ; pm_math_Quaternion_compose_ra ( xx + 65 , xx + 97 , xx + 101
) ; xx [ 79 ] = xx [ 59 ] * xx [ 103 ] ; xx [ 81 ] = xx [ 59 ] * xx [ 102 ] ;
xx [ 91 ] = xx [ 59 ] * xx [ 104 ] ; xx [ 92 ] = xx [ 59 ] * xx [ 90 ] ; xx [
97 ] = xx [ 7 ] * ( xx [ 42 ] * xx [ 82 ] - xx [ 92 ] * xx [ 80 ] ) ; xx [ 98
] = xx [ 59 ] - ( xx [ 92 ] * xx [ 90 ] + xx [ 13 ] ) * xx [ 7 ] ; xx [ 99 ]
= ( xx [ 12 ] + xx [ 42 ] * xx [ 92 ] ) * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 65 , xx + 97 , xx + 105 ) ; xx [ 12 ] = xx
[ 101 ] * xx [ 81 ] ; xx [ 13 ] = xx [ 102 ] * xx [ 81 ] ; J [ 0 ] = xx [ 26
] + xx [ 20 ] + xx [ 7 ] * ( xx [ 9 ] * xx [ 10 ] + xx [ 11 ] * xx [ 4 ] ) ;
J [ 1 ] = xx [ 48 ] + xx [ 45 ] ; J [ 2 ] = xx [ 37 ] + xx [ 62 ] ; J [ 3 ] =
xx [ 16 ] + xx [ 23 ] ; J [ 4 ] = xx [ 54 ] - ( xx [ 69 ] * xx [ 41 ] + xx [
72 ] * xx [ 43 ] ) * xx [ 7 ] ; J [ 5 ] = xx [ 51 ] - ( xx [ 69 ] * xx [ 57 ]
+ xx [ 72 ] * xx [ 58 ] ) * xx [ 7 ] ; J [ 6 ] = xx [ 7 ] * ( xx [ 73 ] - xx
[ 69 ] * xx [ 60 ] ) + xx [ 76 ] + xx [ 2 ] ; J [ 23 ] = - ( xx [ 7 ] * ( xx
[ 87 ] - xx [ 29 ] * xx [ 83 ] ) + xx [ 84 ] - xx [ 7 ] * ( xx [ 5 ] * xx [
34 ] + xx [ 8 ] * xx [ 30 ] ) ) ; J [ 24 ] = xx [ 40 ] ; J [ 25 ] = - ( xx [
94 ] - ( xx [ 101 ] * xx [ 79 ] + xx [ 104 ] * xx [ 81 ] ) * xx [ 7 ] ) ; J [
26 ] = - ( xx [ 7 ] * ( xx [ 103 ] * xx [ 81 ] - xx [ 101 ] * xx [ 91 ] ) +
xx [ 105 ] ) ; J [ 27 ] = xx [ 27 ] + xx [ 21 ] - ( xx [ 11 ] * xx [ 3 ] + xx
[ 6 ] * xx [ 9 ] ) * xx [ 7 ] + xx [ 0 ] ; J [ 28 ] = xx [ 49 ] + xx [ 46 ] ;
J [ 29 ] = xx [ 38 ] + xx [ 63 ] ; J [ 30 ] = xx [ 17 ] + xx [ 24 ] ; J [ 31
] = xx [ 7 ] * ( xx [ 69 ] * xx [ 43 ] - xx [ 72 ] * xx [ 41 ] ) + xx [ 55 ]
; J [ 32 ] = xx [ 7 ] * ( xx [ 69 ] * xx [ 58 ] - xx [ 72 ] * xx [ 57 ] ) +
xx [ 52 ] ; J [ 33 ] = ( xx [ 2 ] * xx [ 69 ] * xx [ 72 ] + xx [ 74 ] ) * xx
[ 7 ] + xx [ 77 ] + xx [ 15 ] ; J [ 50 ] = - ( xx [ 19 ] + ( xx [ 83 ] * xx [
33 ] + xx [ 88 ] ) * xx [ 7 ] + xx [ 85 ] - ( xx [ 8 ] * xx [ 1 ] + xx [ 31 ]
* xx [ 5 ] ) * xx [ 7 ] + xx [ 0 ] ) ; J [ 51 ] = xx [ 40 ] ; J [ 52 ] = - (
xx [ 7 ] * ( xx [ 12 ] - xx [ 104 ] * xx [ 79 ] ) + xx [ 95 ] ) ; J [ 53 ] =
- ( xx [ 106 ] - ( xx [ 104 ] * xx [ 91 ] + xx [ 13 ] ) * xx [ 7 ] + xx [ 59
] ) ; J [ 54 ] = xx [ 28 ] + xx [ 22 ] + ( xx [ 11 ] * xx [ 10 ] - xx [ 9 ] *
xx [ 4 ] ) * xx [ 7 ] ; J [ 55 ] = xx [ 50 ] + xx [ 47 ] ; J [ 56 ] = xx [ 39
] + xx [ 64 ] ; J [ 57 ] = xx [ 18 ] + xx [ 25 ] ; J [ 58 ] = xx [ 56 ] + (
xx [ 70 ] * xx [ 43 ] + xx [ 71 ] * xx [ 41 ] ) * xx [ 7 ] - xx [ 35 ] ; J [
59 ] = xx [ 53 ] + ( xx [ 70 ] * xx [ 58 ] + xx [ 71 ] * xx [ 57 ] ) * xx [ 7
] - xx [ 44 ] ; J [ 60 ] = ( xx [ 69 ] * xx [ 61 ] + xx [ 75 ] ) * xx [ 7 ] +
xx [ 78 ] ; J [ 77 ] = - ( ( xx [ 83 ] * xx [ 36 ] + xx [ 89 ] ) * xx [ 7 ] -
xx [ 32 ] + xx [ 86 ] + ( xx [ 5 ] * xx [ 30 ] - xx [ 8 ] * xx [ 34 ] ) * xx
[ 7 ] ) ; J [ 78 ] = xx [ 40 ] ; J [ 79 ] = - ( xx [ 96 ] + ( xx [ 13 ] + xx
[ 103 ] * xx [ 79 ] ) * xx [ 7 ] - xx [ 59 ] ) ; J [ 80 ] = - ( ( xx [ 12 ] +
xx [ 103 ] * xx [ 91 ] ) * xx [ 7 ] + xx [ 107 ] ) ; return 3 ; } static
size_t computeAssemblyJacobian_3 ( const RuntimeDerivedValuesBundle * rtdv ,
const double * state , const int * modeVector , const double * motionData ,
double * J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 107 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.5004402260104069 ; xx [ 1 ]
= 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx
[ 4 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 5 ] = 1.016807521344378e-3 ; xx [ 6 ] =
sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] =
0.8657710899485228 ; xx [ 8 ] = 0.9999994830510986 ; xx [ 9 ] = xx [ 8 ] * xx
[ 6 ] ; xx [ 6 ] = xx [ 0 ] * xx [ 2 ] + xx [ 7 ] * xx [ 9 ] ; xx [ 10 ] = xx
[ 7 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 7 ] * xx [ 2 ] - xx [ 0 ] * xx [ 9 ] ; xx
[ 11 ] = - xx [ 4 ] ; xx [ 12 ] = xx [ 6 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14
] = xx [ 3 ] ; xx [ 15 ] = motionData [ 112 ] ; xx [ 16 ] = motionData [ 113
] ; xx [ 17 ] = motionData [ 114 ] ; xx [ 18 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15 , xx + 19 ) ; xx [ 15 ] =
motionData [ 113 ] ; xx [ 16 ] = motionData [ 114 ] ; xx [ 17 ] = motionData
[ 115 ] ; xx [ 0 ] = xx [ 5 ] * motionData [ 115 ] + xx [ 8 ] * motionData [
113 ] ; xx [ 2 ] = xx [ 5 ] * motionData [ 114 ] ; xx [ 23 ] = xx [ 8 ] *
motionData [ 114 ] ; xx [ 24 ] = - xx [ 0 ] ; xx [ 25 ] = xx [ 2 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 23 , xx + 26 ) ; xx [ 7 ] = 2.0 ;
xx [ 9 ] = xx [ 8 ] + ( xx [ 28 ] - xx [ 2 ] * motionData [ 112 ] ) * xx [ 7
] ; xx [ 2 ] = 0.0640968609353203 ; xx [ 15 ] = 0.03766319432662211 ; xx [ 16
] = 0.07532638865324422 ; xx [ 23 ] = - ( xx [ 9 ] * xx [ 2 ] ) ; xx [ 24 ] =
xx [ 9 ] * xx [ 15 ] ; xx [ 25 ] = ( xx [ 7 ] * ( xx [ 26 ] - xx [ 8 ] *
motionData [ 112 ] * motionData [ 114 ] ) - xx [ 5 ] ) * xx [ 2 ] - xx [ 16 ]
* ( xx [ 27 ] + xx [ 0 ] * motionData [ 112 ] ) ; pm_math_Quaternion_xform_ra
( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 17 ] = - ( xx [ 8 ] * motionData [ 117
] ) ; xx [ 18 ] = xx [ 8 ] * motionData [ 116 ] + xx [ 5 ] * motionData [ 118
] ; xx [ 19 ] = - ( xx [ 5 ] * motionData [ 117 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 11 , xx + 17 , xx + 20 ) ; xx [ 0 ] =
1.291763771785659e-5 ; xx [ 9 ] = xx [ 6 ] * xx [ 0 ] ; xx [ 11 ] = xx [ 0 ]
* xx [ 3 ] ; xx [ 29 ] = motionData [ 0 ] ; xx [ 30 ] = motionData [ 1 ] ; xx
[ 31 ] = motionData [ 2 ] ; xx [ 32 ] = motionData [ 3 ] ; xx [ 12 ] =
5.084038263768928e-4 ; xx [ 13 ] = 0.9999998707627665 ; xx [ 14 ] = xx [ 12 ]
* state [ 4 ] + xx [ 13 ] * state [ 2 ] ; xx [ 17 ] = xx [ 12 ] * state [ 5 ]
- xx [ 13 ] * state [ 3 ] ; xx [ 18 ] = - xx [ 17 ] ; xx [ 19 ] = xx [ 12 ] *
state [ 2 ] - xx [ 13 ] * state [ 4 ] ; xx [ 23 ] = - xx [ 19 ] ; xx [ 24 ] =
xx [ 12 ] * state [ 3 ] + xx [ 13 ] * state [ 5 ] ; xx [ 33 ] = xx [ 14 ] ;
xx [ 34 ] = xx [ 18 ] ; xx [ 35 ] = xx [ 23 ] ; xx [ 36 ] = xx [ 24 ] ;
pm_math_Quaternion_compose_ra ( xx + 29 , xx + 33 , xx + 37 ) ; xx [ 33 ] =
motionData [ 14 ] ; xx [ 34 ] = motionData [ 15 ] ; xx [ 35 ] = motionData [
16 ] ; xx [ 36 ] = motionData [ 17 ] ; pm_math_Quaternion_compose_ra ( xx +
37 , xx + 33 , xx + 41 ) ; xx [ 25 ] = motionData [ 14 ] * motionData [ 16 ]
; xx [ 33 ] = motionData [ 15 ] * motionData [ 17 ] ; xx [ 34 ] = ( xx [ 25 ]
+ xx [ 33 ] ) * xx [ 7 ] ; xx [ 35 ] = 1.0 ; xx [ 36 ] = motionData [ 16 ] *
motionData [ 16 ] ; xx [ 37 ] = motionData [ 17 ] * motionData [ 17 ] ; xx [
38 ] = motionData [ 15 ] * motionData [ 16 ] ; xx [ 39 ] = motionData [ 14 ]
* motionData [ 17 ] ; xx [ 45 ] = - ( xx [ 2 ] * xx [ 34 ] ) ; xx [ 46 ] = xx
[ 15 ] * xx [ 34 ] ; xx [ 47 ] = xx [ 2 ] * ( xx [ 35 ] - ( xx [ 36 ] + xx [
37 ] ) * xx [ 7 ] ) - xx [ 16 ] * ( xx [ 38 ] - xx [ 39 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 45 , xx + 48 ) ; xx [ 34 ] = xx
[ 24 ] * motionData [ 20 ] ; xx [ 40 ] = xx [ 19 ] * motionData [ 19 ] ; xx [
45 ] = xx [ 34 ] - xx [ 40 ] ; xx [ 51 ] = xx [ 18 ] ; xx [ 52 ] = xx [ 23 ]
; xx [ 53 ] = xx [ 24 ] ; xx [ 18 ] = xx [ 17 ] * motionData [ 19 ] ; xx [ 23
] = xx [ 17 ] * motionData [ 20 ] ; xx [ 54 ] = xx [ 45 ] ; xx [ 55 ] = xx [
18 ] ; xx [ 56 ] = xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 54 ,
xx + 57 ) ; xx [ 54 ] = ( xx [ 14 ] * xx [ 45 ] + xx [ 57 ] ) * xx [ 7 ] ; xx
[ 55 ] = ( xx [ 18 ] * xx [ 14 ] + xx [ 58 ] ) * xx [ 7 ] - motionData [ 20 ]
; xx [ 56 ] = motionData [ 19 ] + ( xx [ 23 ] * xx [ 14 ] + xx [ 59 ] ) * xx
[ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 54 , xx + 45 ) ; xx [ 18
] = motionData [ 16 ] * motionData [ 17 ] ; xx [ 23 ] = motionData [ 14 ] *
motionData [ 15 ] ; xx [ 54 ] = xx [ 7 ] * ( xx [ 18 ] - xx [ 23 ] ) ; xx [
55 ] = 0.1281937218706406 ; xx [ 56 ] = motionData [ 15 ] * motionData [ 15 ]
; xx [ 57 ] = - ( xx [ 2 ] * xx [ 54 ] ) ; xx [ 58 ] = xx [ 15 ] * xx [ 54 ]
; xx [ 59 ] = ( xx [ 39 ] + xx [ 38 ] ) * xx [ 55 ] - xx [ 15 ] * ( xx [ 35 ]
- ( xx [ 37 ] + xx [ 56 ] ) * xx [ 7 ] ) ; pm_math_Quaternion_xform_ra ( xx +
41 , xx + 57 , xx + 37 ) ; xx [ 54 ] = xx [ 19 ] * motionData [ 18 ] ; xx [
57 ] = xx [ 17 ] * motionData [ 18 ] ; xx [ 58 ] = xx [ 34 ] - xx [ 57 ] ; xx
[ 34 ] = xx [ 19 ] * motionData [ 20 ] ; xx [ 59 ] = xx [ 54 ] ; xx [ 60 ] =
xx [ 58 ] ; xx [ 61 ] = xx [ 34 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx +
59 , xx + 62 ) ; xx [ 59 ] = 0.14 ; xx [ 60 ] = xx [ 19 ] * xx [ 59 ] ; xx [
61 ] = xx [ 17 ] * xx [ 59 ] ; xx [ 65 ] = xx [ 61 ] * xx [ 14 ] ; xx [ 66 ]
= xx [ 17 ] * xx [ 61 ] ; xx [ 67 ] = motionData [ 20 ] + ( xx [ 54 ] * xx [
14 ] + xx [ 62 ] ) * xx [ 7 ] + ( xx [ 60 ] * xx [ 14 ] + xx [ 61 ] * xx [ 24
] ) * xx [ 7 ] ; xx [ 68 ] = ( xx [ 14 ] * xx [ 58 ] + xx [ 63 ] ) * xx [ 7 ]
+ xx [ 7 ] * ( xx [ 60 ] * xx [ 24 ] - xx [ 65 ] ) ; xx [ 69 ] = ( xx [ 34 ]
* xx [ 14 ] + xx [ 64 ] ) * xx [ 7 ] - ( motionData [ 18 ] - ( xx [ 66 ] + xx
[ 19 ] * xx [ 60 ] ) * xx [ 7 ] ) - xx [ 59 ] ; pm_math_Quaternion_xform_ra (
xx + 29 , xx + 67 , xx + 62 ) ; xx [ 17 ] = xx [ 35 ] - ( xx [ 56 ] + xx [ 36
] ) * xx [ 7 ] ; xx [ 34 ] = - ( xx [ 2 ] * xx [ 17 ] ) ; xx [ 35 ] = xx [ 15
] * xx [ 17 ] ; xx [ 36 ] = xx [ 55 ] * ( xx [ 33 ] - xx [ 25 ] ) - ( xx [ 23
] + xx [ 18 ] ) * xx [ 16 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 34
, xx + 16 ) ; xx [ 23 ] = xx [ 24 ] * motionData [ 18 ] ; xx [ 25 ] = xx [ 24
] * motionData [ 19 ] ; xx [ 33 ] = xx [ 57 ] + xx [ 40 ] ; xx [ 34 ] = - xx
[ 23 ] ; xx [ 35 ] = - xx [ 25 ] ; xx [ 36 ] = - xx [ 33 ] ;
pm_math_Vector3_cross_ra ( xx + 51 , xx + 34 , xx + 40 ) ; xx [ 34 ] = xx [
59 ] * xx [ 24 ] ; xx [ 51 ] = xx [ 7 ] * ( xx [ 40 ] - xx [ 23 ] * xx [ 14 ]
) - motionData [ 19 ] + xx [ 7 ] * ( xx [ 19 ] * xx [ 61 ] - xx [ 34 ] * xx [
14 ] ) ; xx [ 52 ] = motionData [ 18 ] + xx [ 7 ] * ( xx [ 41 ] - xx [ 25 ] *
xx [ 14 ] ) - ( xx [ 34 ] * xx [ 24 ] + xx [ 66 ] ) * xx [ 7 ] + xx [ 59 ] ;
xx [ 53 ] = xx [ 7 ] * ( xx [ 42 ] - xx [ 33 ] * xx [ 14 ] ) - ( xx [ 65 ] +
xx [ 19 ] * xx [ 34 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 ,
xx + 51 , xx + 23 ) ; xx [ 29 ] = motionData [ 98 ] ; xx [ 30 ] = motionData
[ 99 ] ; xx [ 31 ] = motionData [ 100 ] ; xx [ 32 ] = motionData [ 101 ] ; xx
[ 14 ] = 0.1395577324697271 ; xx [ 19 ] = 0.9902139361309295 ; xx [ 33 ] = xx
[ 14 ] * state [ 12 ] - xx [ 19 ] * state [ 9 ] ; xx [ 34 ] = xx [ 14 ] *
state [ 11 ] + xx [ 19 ] * state [ 10 ] ; xx [ 35 ] = - xx [ 34 ] ; xx [ 36 ]
= xx [ 19 ] * state [ 11 ] - xx [ 14 ] * state [ 10 ] ; xx [ 40 ] = - xx [ 36
] ; xx [ 41 ] = xx [ 14 ] * state [ 9 ] + xx [ 19 ] * state [ 12 ] ; xx [ 14
] = - xx [ 41 ] ; xx [ 51 ] = xx [ 33 ] ; xx [ 52 ] = xx [ 35 ] ; xx [ 53 ] =
xx [ 40 ] ; xx [ 54 ] = xx [ 14 ] ; pm_math_Quaternion_compose_ra ( xx + 29 ,
xx + 51 , xx + 55 ) ; xx [ 19 ] = 0.07200961894323345 ; xx [ 42 ] = xx [ 19 ]
* xx [ 57 ] ; xx [ 43 ] = xx [ 19 ] * xx [ 56 ] ; xx [ 44 ] =
0.05200961894323344 ; xx [ 51 ] = xx [ 36 ] * xx [ 44 ] ; xx [ 52 ] = xx [ 44
] * xx [ 34 ] ; xx [ 65 ] = xx [ 7 ] * ( xx [ 51 ] * xx [ 33 ] - xx [ 52 ] *
xx [ 41 ] ) ; xx [ 66 ] = - ( ( xx [ 52 ] * xx [ 33 ] + xx [ 51 ] * xx [ 41 ]
) * xx [ 7 ] ) ; xx [ 67 ] = ( xx [ 52 ] * xx [ 34 ] + xx [ 36 ] * xx [ 51 ]
) * xx [ 7 ] - xx [ 44 ] ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 65 ,
xx + 51 ) ; xx [ 44 ] = 0.05312177826491075 ; xx [ 54 ] = xx [ 44 ] * xx [ 34
] ; xx [ 60 ] = xx [ 36 ] * xx [ 44 ] ; xx [ 65 ] = xx [ 7 ] * ( xx [ 54 ] *
xx [ 41 ] - xx [ 60 ] * xx [ 33 ] ) ; xx [ 66 ] = ( xx [ 54 ] * xx [ 33 ] +
xx [ 60 ] * xx [ 41 ] ) * xx [ 7 ] ; xx [ 67 ] = xx [ 44 ] - ( xx [ 54 ] * xx
[ 34 ] + xx [ 36 ] * xx [ 60 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra (
xx + 29 , xx + 65 , xx + 68 ) ; xx [ 44 ] = 0.01848076211353319 ; xx [ 54 ] =
xx [ 44 ] * xx [ 57 ] ; xx [ 60 ] = xx [ 44 ] * xx [ 56 ] ; xx [ 61 ] = xx [
15 ] * xx [ 58 ] ; xx [ 65 ] = xx [ 15 ] * xx [ 56 ] + xx [ 2 ] * xx [ 57 ] ;
xx [ 71 ] = - xx [ 61 ] ; xx [ 72 ] = - ( xx [ 2 ] * xx [ 58 ] ) ; xx [ 73 ]
= xx [ 65 ] ; pm_math_Vector3_cross_ra ( xx + 56 , xx + 71 , xx + 74 ) ; xx [
66 ] = 0.03530169195229536 ; xx [ 71 ] = xx [ 35 ] ; xx [ 72 ] = xx [ 40 ] ;
xx [ 73 ] = xx [ 14 ] ; xx [ 14 ] = 0.0654271681639358 ; xx [ 35 ] = xx [ 14
] * xx [ 41 ] ; xx [ 40 ] = xx [ 66 ] * xx [ 41 ] ; xx [ 41 ] = xx [ 14 ] *
xx [ 34 ] + xx [ 36 ] * xx [ 66 ] ; xx [ 77 ] = - xx [ 35 ] ; xx [ 78 ] = -
xx [ 40 ] ; xx [ 79 ] = xx [ 41 ] ; pm_math_Vector3_cross_ra ( xx + 71 , xx +
77 , xx + 80 ) ; xx [ 71 ] = xx [ 66 ] + xx [ 7 ] * ( xx [ 80 ] - xx [ 35 ] *
xx [ 33 ] ) ; xx [ 72 ] = ( xx [ 81 ] - xx [ 40 ] * xx [ 33 ] ) * xx [ 7 ] -
xx [ 14 ] ; xx [ 73 ] = ( xx [ 41 ] * xx [ 33 ] + xx [ 82 ] ) * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 71 , xx + 33 ) ; xx [ 14 ] =
0.8662794937748999 ; xx [ 29 ] = xx [ 1 ] * state [ 16 ] ; xx [ 1 ] = cos (
xx [ 29 ] ) ; xx [ 30 ] = xx [ 14 ] * xx [ 1 ] ; xx [ 31 ] = sin ( xx [ 29 ]
) ; xx [ 29 ] = xx [ 5 ] * xx [ 31 ] ; xx [ 32 ] = 0.4995596447523596 ; xx [
36 ] = xx [ 8 ] * xx [ 31 ] ; xx [ 31 ] = xx [ 14 ] * xx [ 29 ] + xx [ 32 ] *
xx [ 36 ] ; xx [ 40 ] = xx [ 32 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 32 ] * xx [ 29
] - xx [ 14 ] * xx [ 36 ] ; xx [ 77 ] = - xx [ 30 ] ; xx [ 78 ] = - xx [ 31 ]
; xx [ 79 ] = - xx [ 40 ] ; xx [ 80 ] = xx [ 1 ] ; xx [ 81 ] = motionData [
28 ] ; xx [ 82 ] = motionData [ 29 ] ; xx [ 83 ] = motionData [ 30 ] ; xx [
84 ] = motionData [ 31 ] ; pm_math_Quaternion_compose_ra ( xx + 77 , xx + 81
, xx + 85 ) ; xx [ 71 ] = motionData [ 29 ] ; xx [ 72 ] = motionData [ 30 ] ;
xx [ 73 ] = motionData [ 31 ] ; xx [ 14 ] = xx [ 5 ] * motionData [ 31 ] - xx
[ 8 ] * motionData [ 29 ] ; xx [ 29 ] = xx [ 5 ] * motionData [ 30 ] ; xx [
81 ] = xx [ 8 ] * motionData [ 30 ] ; xx [ 82 ] = xx [ 14 ] ; xx [ 83 ] = -
xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 71 , xx + 81 , xx + 89 ) ; xx [
32 ] = 0.28 * ( xx [ 90 ] - xx [ 14 ] * motionData [ 28 ] ) ; xx [ 14 ] = (
xx [ 8 ] + ( xx [ 29 ] * motionData [ 28 ] + xx [ 91 ] ) * xx [ 7 ] ) * xx [
59 ] ; xx [ 29 ] = xx [ 87 ] * xx [ 32 ] + xx [ 88 ] * xx [ 14 ] ; xx [ 36 ]
= xx [ 86 ] * xx [ 32 ] ; xx [ 41 ] = xx [ 86 ] * xx [ 14 ] ; xx [ 71 ] = -
xx [ 29 ] ; xx [ 72 ] = xx [ 36 ] ; xx [ 73 ] = xx [ 41 ] ;
pm_math_Vector3_cross_ra ( xx + 86 , xx + 71 , xx + 81 ) ; xx [ 71 ] = - ( xx
[ 8 ] * motionData [ 33 ] ) ; xx [ 72 ] = xx [ 8 ] * motionData [ 32 ] - xx [
5 ] * motionData [ 34 ] ; xx [ 73 ] = xx [ 5 ] * motionData [ 33 ] ;
pm_math_Quaternion_xform_ra ( xx + 77 , xx + 71 , xx + 86 ) ; xx [ 5 ] = xx [
31 ] * xx [ 0 ] ; xx [ 8 ] = xx [ 0 ] * xx [ 1 ] ; xx [ 66 ] = 0.0 ; xx [ 77
] = motionData [ 21 ] ; xx [ 78 ] = motionData [ 22 ] ; xx [ 79 ] =
motionData [ 23 ] ; xx [ 80 ] = motionData [ 24 ] ; xx [ 67 ] = xx [ 13 ] *
state [ 20 ] + xx [ 12 ] * state [ 18 ] ; xx [ 71 ] = xx [ 67 ] * xx [ 59 ] ;
xx [ 72 ] = xx [ 13 ] * state [ 18 ] - xx [ 12 ] * state [ 20 ] ; xx [ 73 ] =
xx [ 13 ] * state [ 19 ] + xx [ 12 ] * state [ 21 ] ; xx [ 84 ] = xx [ 73 ] *
xx [ 59 ] ; xx [ 89 ] = xx [ 13 ] * state [ 21 ] - xx [ 12 ] * state [ 19 ] ;
xx [ 12 ] = xx [ 84 ] * xx [ 72 ] ; xx [ 13 ] = xx [ 73 ] * xx [ 84 ] ; xx [
90 ] = - ( ( xx [ 71 ] * xx [ 72 ] + xx [ 84 ] * xx [ 89 ] ) * xx [ 7 ] ) ;
xx [ 91 ] = xx [ 7 ] * ( xx [ 12 ] - xx [ 71 ] * xx [ 89 ] ) ; xx [ 92 ] = (
xx [ 13 ] + xx [ 67 ] * xx [ 71 ] ) * xx [ 7 ] - xx [ 59 ] ;
pm_math_Quaternion_xform_ra ( xx + 77 , xx + 90 , xx + 93 ) ; xx [ 96 ] = xx
[ 72 ] ; xx [ 97 ] = xx [ 73 ] ; xx [ 98 ] = xx [ 67 ] ; xx [ 99 ] = xx [ 89
] ; pm_math_Quaternion_compose_ra ( xx + 77 , xx + 96 , xx + 100 ) ; xx [ 71
] = xx [ 59 ] * xx [ 102 ] ; xx [ 73 ] = xx [ 59 ] * xx [ 101 ] ; xx [ 90 ] =
xx [ 59 ] * xx [ 103 ] ; xx [ 91 ] = xx [ 59 ] * xx [ 89 ] ; xx [ 96 ] = xx [
7 ] * ( xx [ 67 ] * xx [ 84 ] - xx [ 91 ] * xx [ 72 ] ) ; xx [ 97 ] = xx [ 59
] - ( xx [ 91 ] * xx [ 89 ] + xx [ 13 ] ) * xx [ 7 ] ; xx [ 98 ] = ( xx [ 12
] + xx [ 67 ] * xx [ 91 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx +
77 , xx + 96 , xx + 104 ) ; xx [ 12 ] = 9.87654321 ; xx [ 13 ] = xx [ 100 ] *
xx [ 73 ] ; xx [ 67 ] = xx [ 101 ] * xx [ 73 ] ; J [ 0 ] = xx [ 26 ] + xx [
20 ] + xx [ 7 ] * ( xx [ 9 ] * xx [ 10 ] + xx [ 11 ] * xx [ 4 ] ) ; J [ 1 ] =
xx [ 48 ] + xx [ 45 ] ; J [ 2 ] = xx [ 37 ] + xx [ 62 ] ; J [ 3 ] = xx [ 16 ]
+ xx [ 23 ] ; J [ 4 ] = ( xx [ 55 ] * xx [ 42 ] + xx [ 58 ] * xx [ 43 ] ) *
xx [ 7 ] + xx [ 51 ] ; J [ 5 ] = xx [ 68 ] - ( xx [ 55 ] * xx [ 54 ] + xx [
58 ] * xx [ 60 ] ) * xx [ 7 ] ; J [ 6 ] = xx [ 7 ] * ( xx [ 74 ] - xx [ 55 ]
* xx [ 61 ] ) + xx [ 33 ] - xx [ 2 ] ; J [ 7 ] = - ( xx [ 7 ] * ( xx [ 81 ] -
xx [ 29 ] * xx [ 85 ] ) + xx [ 86 ] + xx [ 7 ] * ( xx [ 5 ] * xx [ 40 ] + xx
[ 8 ] * xx [ 30 ] ) ) ; J [ 8 ] = xx [ 66 ] ; J [ 9 ] = - ( xx [ 93 ] - ( xx
[ 100 ] * xx [ 71 ] + xx [ 103 ] * xx [ 73 ] ) * xx [ 7 ] ) ; J [ 10 ] = - (
xx [ 7 ] * ( xx [ 102 ] * xx [ 73 ] - xx [ 100 ] * xx [ 90 ] ) + xx [ 104 ] )
; J [ 27 ] = xx [ 27 ] + xx [ 21 ] - ( xx [ 11 ] * xx [ 3 ] + xx [ 6 ] * xx [
9 ] ) * xx [ 7 ] + xx [ 0 ] ; J [ 28 ] = xx [ 49 ] + xx [ 46 ] ; J [ 29 ] =
xx [ 38 ] + xx [ 63 ] ; J [ 30 ] = xx [ 17 ] + xx [ 24 ] ; J [ 31 ] = xx [ 7
] * ( xx [ 58 ] * xx [ 42 ] - xx [ 55 ] * xx [ 43 ] ) + xx [ 52 ] ; J [ 32 ]
= xx [ 7 ] * ( xx [ 55 ] * xx [ 60 ] - xx [ 58 ] * xx [ 54 ] ) + xx [ 69 ] ;
J [ 33 ] = ( xx [ 75 ] - xx [ 2 ] * xx [ 55 ] * xx [ 58 ] ) * xx [ 7 ] + xx [
34 ] + xx [ 15 ] ; J [ 34 ] = - ( xx [ 14 ] + ( xx [ 85 ] * xx [ 36 ] + xx [
82 ] ) * xx [ 7 ] + xx [ 87 ] - ( xx [ 8 ] * xx [ 1 ] + xx [ 31 ] * xx [ 5 ]
) * xx [ 7 ] + xx [ 0 ] ) ; J [ 35 ] = xx [ 66 ] ; J [ 36 ] = - ( xx [ 7 ] *
( xx [ 13 ] - xx [ 103 ] * xx [ 71 ] ) + xx [ 94 ] ) ; J [ 37 ] = - ( xx [
105 ] - ( xx [ 103 ] * xx [ 90 ] + xx [ 67 ] ) * xx [ 7 ] + xx [ 59 ] ) ; J [
54 ] = xx [ 28 ] + xx [ 22 ] + ( xx [ 11 ] * xx [ 10 ] - xx [ 9 ] * xx [ 4 ]
) * xx [ 7 ] ; J [ 55 ] = xx [ 50 ] + xx [ 47 ] ; J [ 56 ] = xx [ 39 ] + xx [
64 ] ; J [ 57 ] = xx [ 18 ] + xx [ 25 ] ; J [ 58 ] = xx [ 53 ] - ( xx [ 56 ]
* xx [ 43 ] + xx [ 57 ] * xx [ 42 ] ) * xx [ 7 ] + xx [ 19 ] ; J [ 59 ] = xx
[ 70 ] + ( xx [ 56 ] * xx [ 60 ] + xx [ 57 ] * xx [ 54 ] ) * xx [ 7 ] - xx [
44 ] ; J [ 60 ] = ( xx [ 55 ] * xx [ 65 ] + xx [ 76 ] ) * xx [ 7 ] + xx [ 35
] ; J [ 61 ] = - ( ( xx [ 85 ] * xx [ 41 ] + xx [ 83 ] ) * xx [ 7 ] - xx [ 32
] + xx [ 88 ] + ( xx [ 5 ] * xx [ 30 ] - xx [ 8 ] * xx [ 40 ] ) * xx [ 7 ] )
; J [ 62 ] = xx [ 66 ] ; J [ 63 ] = - ( xx [ 95 ] + ( xx [ 67 ] + xx [ 102 ]
* xx [ 71 ] ) * xx [ 7 ] - xx [ 59 ] ) ; J [ 64 ] = - ( ( xx [ 13 ] + xx [
102 ] * xx [ 90 ] ) * xx [ 7 ] + xx [ 106 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_4 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 108 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.5004402260104069 ; xx [ 1 ] = 0.5
; xx [ 2 ] = xx [ 1 ] * state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ]
= xx [ 0 ] * xx [ 3 ] ; xx [ 5 ] = 1.016807521344378e-3 ; xx [ 6 ] = sin ( xx
[ 2 ] ) ; xx [ 2 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = 0.8657710899485228 ; xx
[ 8 ] = 0.9999994830510986 ; xx [ 9 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 6 ] = xx [
0 ] * xx [ 2 ] + xx [ 7 ] * xx [ 9 ] ; xx [ 10 ] = xx [ 7 ] * xx [ 3 ] ; xx [
3 ] = xx [ 7 ] * xx [ 2 ] - xx [ 0 ] * xx [ 9 ] ; xx [ 11 ] = - xx [ 4 ] ; xx
[ 12 ] = xx [ 6 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 3 ] ; xx [ 15 ]
= motionData [ 112 ] ; xx [ 16 ] = motionData [ 113 ] ; xx [ 17 ] =
motionData [ 114 ] ; xx [ 18 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15 , xx + 19 ) ; xx [ 15 ] =
motionData [ 113 ] ; xx [ 16 ] = motionData [ 114 ] ; xx [ 17 ] = motionData
[ 115 ] ; xx [ 0 ] = xx [ 5 ] * motionData [ 115 ] + xx [ 8 ] * motionData [
113 ] ; xx [ 2 ] = xx [ 5 ] * motionData [ 114 ] ; xx [ 23 ] = xx [ 8 ] *
motionData [ 114 ] ; xx [ 24 ] = - xx [ 0 ] ; xx [ 25 ] = xx [ 2 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 23 , xx + 26 ) ; xx [ 7 ] = 2.0 ;
xx [ 9 ] = xx [ 8 ] + ( xx [ 28 ] - xx [ 2 ] * motionData [ 112 ] ) * xx [ 7
] ; xx [ 2 ] = 0.03901074375149718 ; xx [ 15 ] = 0.06328574610922835 ; xx [
16 ] = 0.1265714922184567 ; xx [ 23 ] = - ( xx [ 9 ] * xx [ 2 ] ) ; xx [ 24 ]
= - ( xx [ 9 ] * xx [ 15 ] ) ; xx [ 25 ] = ( xx [ 7 ] * ( xx [ 26 ] - xx [ 8
] * motionData [ 112 ] * motionData [ 114 ] ) - xx [ 5 ] ) * xx [ 2 ] + xx [
16 ] * ( xx [ 27 ] + xx [ 0 ] * motionData [ 112 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 23 , xx + 26 ) ; xx [ 17 ] = - (
xx [ 8 ] * motionData [ 117 ] ) ; xx [ 18 ] = xx [ 8 ] * motionData [ 116 ] +
xx [ 5 ] * motionData [ 118 ] ; xx [ 19 ] = - ( xx [ 5 ] * motionData [ 117 ]
) ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 17 , xx + 20 ) ; xx [ 0 ] =
1.291763771785659e-5 ; xx [ 9 ] = xx [ 6 ] * xx [ 0 ] ; xx [ 11 ] = xx [ 0 ]
* xx [ 3 ] ; xx [ 29 ] = motionData [ 0 ] ; xx [ 30 ] = motionData [ 1 ] ; xx
[ 31 ] = motionData [ 2 ] ; xx [ 32 ] = motionData [ 3 ] ; xx [ 12 ] =
5.084038263768928e-4 ; xx [ 13 ] = 0.9999998707627665 ; xx [ 14 ] = xx [ 12 ]
* state [ 4 ] + xx [ 13 ] * state [ 2 ] ; xx [ 17 ] = xx [ 12 ] * state [ 5 ]
- xx [ 13 ] * state [ 3 ] ; xx [ 18 ] = - xx [ 17 ] ; xx [ 19 ] = xx [ 12 ] *
state [ 2 ] - xx [ 13 ] * state [ 4 ] ; xx [ 23 ] = - xx [ 19 ] ; xx [ 24 ] =
xx [ 12 ] * state [ 3 ] + xx [ 13 ] * state [ 5 ] ; xx [ 33 ] = xx [ 14 ] ;
xx [ 34 ] = xx [ 18 ] ; xx [ 35 ] = xx [ 23 ] ; xx [ 36 ] = xx [ 24 ] ;
pm_math_Quaternion_compose_ra ( xx + 29 , xx + 33 , xx + 37 ) ; xx [ 33 ] =
motionData [ 14 ] ; xx [ 34 ] = motionData [ 15 ] ; xx [ 35 ] = motionData [
16 ] ; xx [ 36 ] = motionData [ 17 ] ; pm_math_Quaternion_compose_ra ( xx +
37 , xx + 33 , xx + 41 ) ; xx [ 25 ] = motionData [ 14 ] * motionData [ 16 ]
; xx [ 33 ] = motionData [ 15 ] * motionData [ 17 ] ; xx [ 34 ] = ( xx [ 25 ]
+ xx [ 33 ] ) * xx [ 7 ] ; xx [ 35 ] = 1.0 ; xx [ 36 ] = motionData [ 16 ] *
motionData [ 16 ] ; xx [ 37 ] = motionData [ 17 ] * motionData [ 17 ] ; xx [
38 ] = motionData [ 15 ] * motionData [ 16 ] ; xx [ 39 ] = motionData [ 14 ]
* motionData [ 17 ] ; xx [ 45 ] = - ( xx [ 2 ] * xx [ 34 ] ) ; xx [ 46 ] = -
( xx [ 15 ] * xx [ 34 ] ) ; xx [ 47 ] = xx [ 2 ] * ( xx [ 35 ] - ( xx [ 36 ]
+ xx [ 37 ] ) * xx [ 7 ] ) + xx [ 16 ] * ( xx [ 38 ] - xx [ 39 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 45 , xx + 48 ) ; xx [ 34 ] = xx
[ 24 ] * motionData [ 20 ] ; xx [ 40 ] = xx [ 19 ] * motionData [ 19 ] ; xx [
45 ] = xx [ 34 ] - xx [ 40 ] ; xx [ 51 ] = xx [ 18 ] ; xx [ 52 ] = xx [ 23 ]
; xx [ 53 ] = xx [ 24 ] ; xx [ 18 ] = xx [ 17 ] * motionData [ 19 ] ; xx [ 23
] = xx [ 17 ] * motionData [ 20 ] ; xx [ 54 ] = xx [ 45 ] ; xx [ 55 ] = xx [
18 ] ; xx [ 56 ] = xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 54 ,
xx + 57 ) ; xx [ 54 ] = ( xx [ 14 ] * xx [ 45 ] + xx [ 57 ] ) * xx [ 7 ] ; xx
[ 55 ] = ( xx [ 18 ] * xx [ 14 ] + xx [ 58 ] ) * xx [ 7 ] - motionData [ 20 ]
; xx [ 56 ] = motionData [ 19 ] + ( xx [ 23 ] * xx [ 14 ] + xx [ 59 ] ) * xx
[ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 54 , xx + 45 ) ; xx [ 18
] = motionData [ 16 ] * motionData [ 17 ] ; xx [ 23 ] = motionData [ 14 ] *
motionData [ 15 ] ; xx [ 54 ] = xx [ 7 ] * ( xx [ 18 ] - xx [ 23 ] ) ; xx [
55 ] = 0.07802148750299437 ; xx [ 56 ] = motionData [ 15 ] * motionData [ 15
] ; xx [ 57 ] = - ( xx [ 2 ] * xx [ 54 ] ) ; xx [ 58 ] = - ( xx [ 15 ] * xx [
54 ] ) ; xx [ 59 ] = ( xx [ 39 ] + xx [ 38 ] ) * xx [ 55 ] + xx [ 15 ] * ( xx
[ 35 ] - ( xx [ 37 ] + xx [ 56 ] ) * xx [ 7 ] ) ; pm_math_Quaternion_xform_ra
( xx + 41 , xx + 57 , xx + 37 ) ; xx [ 54 ] = xx [ 19 ] * motionData [ 18 ] ;
xx [ 57 ] = xx [ 17 ] * motionData [ 18 ] ; xx [ 58 ] = xx [ 34 ] - xx [ 57 ]
; xx [ 34 ] = xx [ 19 ] * motionData [ 20 ] ; xx [ 59 ] = xx [ 54 ] ; xx [ 60
] = xx [ 58 ] ; xx [ 61 ] = xx [ 34 ] ; pm_math_Vector3_cross_ra ( xx + 51 ,
xx + 59 , xx + 62 ) ; xx [ 59 ] = 0.14 ; xx [ 60 ] = xx [ 19 ] * xx [ 59 ] ;
xx [ 61 ] = xx [ 17 ] * xx [ 59 ] ; xx [ 65 ] = xx [ 61 ] * xx [ 14 ] ; xx [
66 ] = xx [ 17 ] * xx [ 61 ] ; xx [ 67 ] = motionData [ 20 ] + ( xx [ 54 ] *
xx [ 14 ] + xx [ 62 ] ) * xx [ 7 ] + ( xx [ 60 ] * xx [ 14 ] + xx [ 61 ] * xx
[ 24 ] ) * xx [ 7 ] ; xx [ 68 ] = ( xx [ 14 ] * xx [ 58 ] + xx [ 63 ] ) * xx
[ 7 ] + xx [ 7 ] * ( xx [ 60 ] * xx [ 24 ] - xx [ 65 ] ) ; xx [ 69 ] = ( xx [
34 ] * xx [ 14 ] + xx [ 64 ] ) * xx [ 7 ] - ( motionData [ 18 ] - ( xx [ 66 ]
+ xx [ 19 ] * xx [ 60 ] ) * xx [ 7 ] ) - xx [ 59 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 67 , xx + 62 ) ; xx [ 17 ] = xx
[ 35 ] - ( xx [ 56 ] + xx [ 36 ] ) * xx [ 7 ] ; xx [ 34 ] = - ( xx [ 2 ] * xx
[ 17 ] ) ; xx [ 35 ] = - ( xx [ 15 ] * xx [ 17 ] ) ; xx [ 36 ] = xx [ 55 ] *
( xx [ 33 ] - xx [ 25 ] ) + ( xx [ 23 ] + xx [ 18 ] ) * xx [ 16 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 34 , xx + 16 ) ; xx [ 23 ] = xx
[ 24 ] * motionData [ 18 ] ; xx [ 25 ] = xx [ 24 ] * motionData [ 19 ] ; xx [
33 ] = xx [ 57 ] + xx [ 40 ] ; xx [ 34 ] = - xx [ 23 ] ; xx [ 35 ] = - xx [
25 ] ; xx [ 36 ] = - xx [ 33 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 34
, xx + 40 ) ; xx [ 34 ] = xx [ 59 ] * xx [ 24 ] ; xx [ 51 ] = xx [ 7 ] * ( xx
[ 40 ] - xx [ 23 ] * xx [ 14 ] ) - motionData [ 19 ] + xx [ 7 ] * ( xx [ 19 ]
* xx [ 61 ] - xx [ 34 ] * xx [ 14 ] ) ; xx [ 52 ] = motionData [ 18 ] + xx [
7 ] * ( xx [ 41 ] - xx [ 25 ] * xx [ 14 ] ) - ( xx [ 34 ] * xx [ 24 ] + xx [
66 ] ) * xx [ 7 ] + xx [ 59 ] ; xx [ 53 ] = xx [ 7 ] * ( xx [ 42 ] - xx [ 33
] * xx [ 14 ] ) - ( xx [ 65 ] + xx [ 19 ] * xx [ 34 ] ) * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 51 , xx + 23 ) ; xx [ 29 ] =
motionData [ 98 ] ; xx [ 30 ] = motionData [ 99 ] ; xx [ 31 ] = motionData [
100 ] ; xx [ 32 ] = motionData [ 101 ] ; xx [ 14 ] = 0.1395577324697271 ; xx
[ 19 ] = 0.9902139361309295 ; xx [ 33 ] = xx [ 14 ] * state [ 12 ] - xx [ 19
] * state [ 9 ] ; xx [ 34 ] = xx [ 14 ] * state [ 11 ] + xx [ 19 ] * state [
10 ] ; xx [ 35 ] = - xx [ 34 ] ; xx [ 36 ] = xx [ 19 ] * state [ 11 ] - xx [
14 ] * state [ 10 ] ; xx [ 40 ] = - xx [ 36 ] ; xx [ 41 ] = xx [ 14 ] * state
[ 9 ] + xx [ 19 ] * state [ 12 ] ; xx [ 14 ] = - xx [ 41 ] ; xx [ 51 ] = xx [
33 ] ; xx [ 52 ] = xx [ 35 ] ; xx [ 53 ] = xx [ 40 ] ; xx [ 54 ] = xx [ 14 ]
; pm_math_Quaternion_compose_ra ( xx + 29 , xx + 51 , xx + 55 ) ; xx [ 19 ] =
0.02000000000000002 ; xx [ 42 ] = xx [ 19 ] * xx [ 57 ] ; xx [ 43 ] = xx [ 19
] * xx [ 56 ] ; xx [ 44 ] = 0.05200961894323344 ; xx [ 51 ] = xx [ 36 ] * xx
[ 44 ] ; xx [ 52 ] = xx [ 44 ] * xx [ 34 ] ; xx [ 65 ] = xx [ 7 ] * ( xx [ 51
] * xx [ 33 ] - xx [ 52 ] * xx [ 41 ] ) ; xx [ 66 ] = - ( ( xx [ 52 ] * xx [
33 ] + xx [ 51 ] * xx [ 41 ] ) * xx [ 7 ] ) ; xx [ 67 ] = ( xx [ 52 ] * xx [
34 ] + xx [ 36 ] * xx [ 51 ] ) * xx [ 7 ] - xx [ 44 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 65 , xx + 51 ) ; xx [ 44 ] =
0.07160254037844389 ; xx [ 54 ] = xx [ 44 ] * xx [ 57 ] ; xx [ 60 ] = xx [ 44
] * xx [ 56 ] ; xx [ 61 ] = 0.05312177826491075 ; xx [ 65 ] = xx [ 61 ] * xx
[ 34 ] ; xx [ 66 ] = xx [ 36 ] * xx [ 61 ] ; xx [ 67 ] = xx [ 7 ] * ( xx [ 65
] * xx [ 41 ] - xx [ 66 ] * xx [ 33 ] ) ; xx [ 68 ] = ( xx [ 65 ] * xx [ 33 ]
+ xx [ 66 ] * xx [ 41 ] ) * xx [ 7 ] ; xx [ 69 ] = xx [ 61 ] - ( xx [ 65 ] *
xx [ 34 ] + xx [ 36 ] * xx [ 66 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra
( xx + 29 , xx + 67 , xx + 70 ) ; xx [ 61 ] = xx [ 15 ] * xx [ 58 ] ; xx [ 65
] = xx [ 2 ] * xx [ 57 ] - xx [ 15 ] * xx [ 56 ] ; xx [ 66 ] = xx [ 61 ] ; xx
[ 67 ] = - ( xx [ 2 ] * xx [ 58 ] ) ; xx [ 68 ] = xx [ 65 ] ;
pm_math_Vector3_cross_ra ( xx + 56 , xx + 66 , xx + 73 ) ; xx [ 66 ] =
0.03530169195229536 ; xx [ 67 ] = xx [ 35 ] ; xx [ 68 ] = xx [ 40 ] ; xx [ 69
] = xx [ 14 ] ; xx [ 14 ] = 0.0654271681639358 ; xx [ 35 ] = xx [ 14 ] * xx [
41 ] ; xx [ 40 ] = xx [ 66 ] * xx [ 41 ] ; xx [ 41 ] = xx [ 14 ] * xx [ 34 ]
+ xx [ 36 ] * xx [ 66 ] ; xx [ 76 ] = - xx [ 35 ] ; xx [ 77 ] = - xx [ 40 ] ;
xx [ 78 ] = xx [ 41 ] ; pm_math_Vector3_cross_ra ( xx + 67 , xx + 76 , xx +
79 ) ; xx [ 67 ] = xx [ 66 ] + xx [ 7 ] * ( xx [ 79 ] - xx [ 35 ] * xx [ 33 ]
) ; xx [ 68 ] = ( xx [ 80 ] - xx [ 40 ] * xx [ 33 ] ) * xx [ 7 ] - xx [ 14 ]
; xx [ 69 ] = ( xx [ 41 ] * xx [ 33 ] + xx [ 81 ] ) * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 29 , xx + 67 , xx + 33 ) ; xx [ 14 ] =
9.87654321 ; xx [ 29 ] = xx [ 1 ] * state [ 25 ] ; xx [ 1 ] = cos ( xx [ 29 ]
) ; xx [ 30 ] = xx [ 13 ] * xx [ 1 ] ; xx [ 31 ] = sin ( xx [ 29 ] ) ; xx [
29 ] = xx [ 5 ] * xx [ 31 ] ; xx [ 32 ] = xx [ 8 ] * xx [ 31 ] ; xx [ 31 ] =
xx [ 13 ] * xx [ 29 ] - xx [ 12 ] * xx [ 32 ] ; xx [ 36 ] = xx [ 12 ] * xx [
1 ] ; xx [ 1 ] = xx [ 13 ] * xx [ 32 ] + xx [ 12 ] * xx [ 29 ] ; xx [ 66 ] =
- xx [ 30 ] ; xx [ 67 ] = xx [ 31 ] ; xx [ 68 ] = - xx [ 36 ] ; xx [ 69 ] = -
xx [ 1 ] ; xx [ 76 ] = motionData [ 42 ] ; xx [ 77 ] = motionData [ 43 ] ; xx
[ 78 ] = motionData [ 44 ] ; xx [ 79 ] = motionData [ 45 ] ;
pm_math_Quaternion_compose_ra ( xx + 66 , xx + 76 , xx + 80 ) ; xx [ 76 ] =
motionData [ 43 ] ; xx [ 77 ] = motionData [ 44 ] ; xx [ 78 ] = motionData [
45 ] ; xx [ 29 ] = xx [ 5 ] * motionData [ 45 ] + xx [ 8 ] * motionData [ 43
] ; xx [ 32 ] = xx [ 5 ] * motionData [ 44 ] ; xx [ 84 ] = xx [ 8 ] *
motionData [ 44 ] ; xx [ 85 ] = - xx [ 29 ] ; xx [ 86 ] = xx [ 32 ] ;
pm_math_Vector3_cross_ra ( xx + 76 , xx + 84 , xx + 87 ) ; xx [ 40 ] = 0.28 *
( xx [ 88 ] + xx [ 29 ] * motionData [ 42 ] ) ; xx [ 29 ] = ( xx [ 8 ] + ( xx
[ 89 ] - xx [ 32 ] * motionData [ 42 ] ) * xx [ 7 ] ) * xx [ 59 ] ; xx [ 32 ]
= xx [ 82 ] * xx [ 40 ] + xx [ 83 ] * xx [ 29 ] ; xx [ 41 ] = xx [ 81 ] * xx
[ 40 ] ; xx [ 76 ] = xx [ 81 ] * xx [ 29 ] ; xx [ 77 ] = - xx [ 32 ] ; xx [
78 ] = xx [ 41 ] ; xx [ 79 ] = xx [ 76 ] ; pm_math_Vector3_cross_ra ( xx + 81
, xx + 77 , xx + 84 ) ; xx [ 77 ] = - ( xx [ 8 ] * motionData [ 47 ] ) ; xx [
78 ] = xx [ 8 ] * motionData [ 46 ] + xx [ 5 ] * motionData [ 48 ] ; xx [ 79
] = - ( xx [ 5 ] * motionData [ 47 ] ) ; pm_math_Quaternion_xform_ra ( xx +
66 , xx + 77 , xx + 81 ) ; xx [ 5 ] = xx [ 31 ] * xx [ 0 ] ; xx [ 8 ] = xx [
0 ] * xx [ 1 ] ; xx [ 66 ] = 0.0 ; xx [ 87 ] = motionData [ 35 ] ; xx [ 88 ]
= motionData [ 36 ] ; xx [ 89 ] = motionData [ 37 ] ; xx [ 90 ] = motionData
[ 38 ] ; xx [ 67 ] = xx [ 12 ] * state [ 27 ] - xx [ 13 ] * state [ 29 ] ; xx
[ 68 ] = xx [ 67 ] * xx [ 59 ] ; xx [ 69 ] = xx [ 12 ] * state [ 29 ] + xx [
13 ] * state [ 27 ] ; xx [ 77 ] = xx [ 12 ] * state [ 30 ] - xx [ 13 ] *
state [ 28 ] ; xx [ 78 ] = xx [ 77 ] * xx [ 59 ] ; xx [ 79 ] = xx [ 12 ] *
state [ 28 ] + xx [ 13 ] * state [ 30 ] ; xx [ 12 ] = xx [ 78 ] * xx [ 69 ] ;
xx [ 13 ] = xx [ 77 ] * xx [ 78 ] ; xx [ 91 ] = ( xx [ 68 ] * xx [ 69 ] + xx
[ 78 ] * xx [ 79 ] ) * xx [ 7 ] ; xx [ 92 ] = xx [ 7 ] * ( xx [ 68 ] * xx [
79 ] - xx [ 12 ] ) ; xx [ 93 ] = ( xx [ 13 ] + xx [ 67 ] * xx [ 68 ] ) * xx [
7 ] - xx [ 59 ] ; pm_math_Quaternion_xform_ra ( xx + 87 , xx + 91 , xx + 94 )
; xx [ 97 ] = xx [ 69 ] ; xx [ 98 ] = - xx [ 77 ] ; xx [ 99 ] = - xx [ 67 ] ;
xx [ 100 ] = xx [ 79 ] ; pm_math_Quaternion_compose_ra ( xx + 87 , xx + 97 ,
xx + 101 ) ; xx [ 68 ] = xx [ 59 ] * xx [ 103 ] ; xx [ 77 ] = xx [ 59 ] * xx
[ 102 ] ; xx [ 91 ] = xx [ 59 ] * xx [ 104 ] ; xx [ 92 ] = xx [ 59 ] * xx [
79 ] ; xx [ 97 ] = xx [ 7 ] * ( xx [ 67 ] * xx [ 78 ] - xx [ 92 ] * xx [ 69 ]
) ; xx [ 98 ] = xx [ 59 ] - ( xx [ 92 ] * xx [ 79 ] + xx [ 13 ] ) * xx [ 7 ]
; xx [ 99 ] = - ( ( xx [ 12 ] + xx [ 67 ] * xx [ 92 ] ) * xx [ 7 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 87 , xx + 97 , xx + 105 ) ; xx [ 12 ] = xx
[ 101 ] * xx [ 77 ] ; xx [ 13 ] = xx [ 102 ] * xx [ 77 ] ; J [ 0 ] = xx [ 26
] + xx [ 20 ] + xx [ 7 ] * ( xx [ 9 ] * xx [ 10 ] + xx [ 11 ] * xx [ 4 ] ) ;
J [ 1 ] = xx [ 48 ] + xx [ 45 ] ; J [ 2 ] = xx [ 37 ] + xx [ 62 ] ; J [ 3 ] =
xx [ 16 ] + xx [ 23 ] ; J [ 4 ] = ( xx [ 55 ] * xx [ 42 ] + xx [ 58 ] * xx [
43 ] ) * xx [ 7 ] + xx [ 51 ] ; J [ 5 ] = ( xx [ 55 ] * xx [ 54 ] + xx [ 58 ]
* xx [ 60 ] ) * xx [ 7 ] + xx [ 70 ] ; J [ 6 ] = xx [ 7 ] * ( xx [ 73 ] + xx
[ 55 ] * xx [ 61 ] ) + xx [ 33 ] - xx [ 2 ] ; J [ 11 ] = - ( xx [ 7 ] * ( xx
[ 84 ] - xx [ 32 ] * xx [ 80 ] ) + xx [ 81 ] - xx [ 7 ] * ( xx [ 5 ] * xx [
36 ] + xx [ 8 ] * xx [ 30 ] ) ) ; J [ 12 ] = xx [ 66 ] ; J [ 13 ] = - ( xx [
94 ] - ( xx [ 101 ] * xx [ 68 ] + xx [ 104 ] * xx [ 77 ] ) * xx [ 7 ] ) ; J [
14 ] = - ( xx [ 7 ] * ( xx [ 103 ] * xx [ 77 ] - xx [ 101 ] * xx [ 91 ] ) +
xx [ 105 ] ) ; J [ 27 ] = xx [ 27 ] + xx [ 21 ] - ( xx [ 11 ] * xx [ 3 ] + xx
[ 6 ] * xx [ 9 ] ) * xx [ 7 ] + xx [ 0 ] ; J [ 28 ] = xx [ 49 ] + xx [ 46 ] ;
J [ 29 ] = xx [ 38 ] + xx [ 63 ] ; J [ 30 ] = xx [ 17 ] + xx [ 24 ] ; J [ 31
] = xx [ 7 ] * ( xx [ 58 ] * xx [ 42 ] - xx [ 55 ] * xx [ 43 ] ) + xx [ 52 ]
; J [ 32 ] = xx [ 7 ] * ( xx [ 58 ] * xx [ 54 ] - xx [ 55 ] * xx [ 60 ] ) +
xx [ 71 ] ; J [ 33 ] = ( xx [ 74 ] - xx [ 2 ] * xx [ 55 ] * xx [ 58 ] ) * xx
[ 7 ] + xx [ 34 ] - xx [ 15 ] ; J [ 38 ] = - ( xx [ 29 ] + ( xx [ 80 ] * xx [
41 ] + xx [ 85 ] ) * xx [ 7 ] + xx [ 82 ] - ( xx [ 8 ] * xx [ 1 ] + xx [ 31 ]
* xx [ 5 ] ) * xx [ 7 ] + xx [ 0 ] ) ; J [ 39 ] = xx [ 66 ] ; J [ 40 ] = - (
xx [ 7 ] * ( xx [ 12 ] - xx [ 104 ] * xx [ 68 ] ) + xx [ 95 ] ) ; J [ 41 ] =
- ( xx [ 106 ] - ( xx [ 104 ] * xx [ 91 ] + xx [ 13 ] ) * xx [ 7 ] + xx [ 59
] ) ; J [ 54 ] = xx [ 28 ] + xx [ 22 ] + ( xx [ 11 ] * xx [ 10 ] - xx [ 9 ] *
xx [ 4 ] ) * xx [ 7 ] ; J [ 55 ] = xx [ 50 ] + xx [ 47 ] ; J [ 56 ] = xx [ 39
] + xx [ 64 ] ; J [ 57 ] = xx [ 18 ] + xx [ 25 ] ; J [ 58 ] = xx [ 53 ] - (
xx [ 56 ] * xx [ 43 ] + xx [ 57 ] * xx [ 42 ] ) * xx [ 7 ] + xx [ 19 ] ; J [
59 ] = xx [ 72 ] - ( xx [ 56 ] * xx [ 60 ] + xx [ 57 ] * xx [ 54 ] ) * xx [ 7
] + xx [ 44 ] ; J [ 60 ] = ( xx [ 55 ] * xx [ 65 ] + xx [ 75 ] ) * xx [ 7 ] +
xx [ 35 ] ; J [ 65 ] = - ( ( xx [ 80 ] * xx [ 76 ] + xx [ 86 ] ) * xx [ 7 ] -
xx [ 40 ] + xx [ 83 ] + ( xx [ 8 ] * xx [ 36 ] - xx [ 5 ] * xx [ 30 ] ) * xx
[ 7 ] ) ; J [ 66 ] = xx [ 66 ] ; J [ 67 ] = - ( xx [ 96 ] + ( xx [ 13 ] + xx
[ 103 ] * xx [ 68 ] ) * xx [ 7 ] - xx [ 59 ] ) ; J [ 68 ] = - ( ( xx [ 12 ] +
xx [ 103 ] * xx [ 91 ] ) * xx [ 7 ] + xx [ 107 ] ) ; return 3 ; } size_t
hp_v4_a1692be3_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { case 0 : return
computeAssemblyJacobian_0 ( rtdv , state , modeVector , motionData , J ) ;
case 1 : return computeAssemblyJacobian_1 ( rtdv , state , modeVector ,
motionData , J ) ; case 2 : return computeAssemblyJacobian_2 ( rtdv , state ,
modeVector , motionData , J ) ; case 3 : return computeAssemblyJacobian_3 (
rtdv , state , modeVector , motionData , J ) ; case 4 : return
computeAssemblyJacobian_4 ( rtdv , state , modeVector , motionData , J ) ; }
return 0 ; } size_t hp_v4_a1692be3_1_computeFullAssemblyJacobian ( const void
* mech , const RuntimeDerivedValuesBundle * rtdv , const double * state ,
const int * modeVector , const double * motionData , double * J ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 331 ] ; ( void ) mech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.5004402260104069 ; xx [ 1 ] =
0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [
4 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 5 ] = 1.016807521344378e-3 ; xx [ 6 ] = sin
( xx [ 2 ] ) ; xx [ 2 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = 0.8657710899485228
; xx [ 8 ] = 0.9999994830510986 ; xx [ 9 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 6 ] =
xx [ 0 ] * xx [ 2 ] + xx [ 7 ] * xx [ 9 ] ; xx [ 10 ] = xx [ 7 ] * xx [ 3 ] ;
xx [ 3 ] = xx [ 7 ] * xx [ 2 ] - xx [ 0 ] * xx [ 9 ] ; xx [ 11 ] = - xx [ 4 ]
; xx [ 12 ] = xx [ 6 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 3 ] ; xx [
15 ] = motionData [ 112 ] ; xx [ 16 ] = motionData [ 113 ] ; xx [ 17 ] =
motionData [ 114 ] ; xx [ 18 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15 , xx + 19 ) ; xx [ 15 ] =
motionData [ 113 ] ; xx [ 16 ] = motionData [ 114 ] ; xx [ 17 ] = motionData
[ 115 ] ; xx [ 0 ] = xx [ 5 ] * motionData [ 115 ] + xx [ 8 ] * motionData [
113 ] ; xx [ 2 ] = xx [ 5 ] * motionData [ 114 ] ; xx [ 23 ] = xx [ 8 ] *
motionData [ 114 ] ; xx [ 24 ] = - xx [ 0 ] ; xx [ 25 ] = xx [ 2 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 23 , xx + 26 ) ; xx [ 7 ] = 2.0 ;
xx [ 9 ] = xx [ 8 ] + ( xx [ 28 ] - xx [ 2 ] * motionData [ 112 ] ) * xx [ 7
] ; xx [ 2 ] = 5.68852606864536e-4 ; xx [ 15 ] = 0.07434110703613682 ; xx [
16 ] = xx [ 7 ] * ( xx [ 26 ] - xx [ 8 ] * motionData [ 112 ] * motionData [
114 ] ) - xx [ 5 ] ; xx [ 17 ] = 0.1486822140722736 ; xx [ 18 ] = xx [ 27 ] +
xx [ 0 ] * motionData [ 112 ] ; xx [ 23 ] = - ( xx [ 9 ] * xx [ 2 ] ) ; xx [
24 ] = - ( xx [ 9 ] * xx [ 15 ] ) ; xx [ 25 ] = xx [ 16 ] * xx [ 2 ] + xx [
17 ] * xx [ 18 ] ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 23 , xx + 26
) ; xx [ 23 ] = - ( xx [ 8 ] * motionData [ 117 ] ) ; xx [ 24 ] = xx [ 8 ] *
motionData [ 116 ] + xx [ 5 ] * motionData [ 118 ] ; xx [ 25 ] = - ( xx [ 5 ]
* motionData [ 117 ] ) ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 23 , xx
+ 29 ) ; xx [ 0 ] = 1.291763771785659e-5 ; xx [ 11 ] = xx [ 6 ] * xx [ 0 ] ;
xx [ 12 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 13 ] = xx [ 29 ] + xx [ 7 ] * ( xx [
11 ] * xx [ 10 ] + xx [ 12 ] * xx [ 4 ] ) ; xx [ 32 ] = motionData [ 0 ] ; xx
[ 33 ] = motionData [ 1 ] ; xx [ 34 ] = motionData [ 2 ] ; xx [ 35 ] =
motionData [ 3 ] ; xx [ 14 ] = 5.084038263768928e-4 ; xx [ 23 ] =
0.9999998707627665 ; xx [ 24 ] = xx [ 14 ] * state [ 4 ] + xx [ 23 ] * state
[ 2 ] ; xx [ 25 ] = xx [ 14 ] * state [ 5 ] - xx [ 23 ] * state [ 3 ] ; xx [
36 ] = - xx [ 25 ] ; xx [ 37 ] = xx [ 14 ] * state [ 2 ] - xx [ 23 ] * state
[ 4 ] ; xx [ 38 ] = - xx [ 37 ] ; xx [ 39 ] = xx [ 14 ] * state [ 3 ] + xx [
23 ] * state [ 5 ] ; xx [ 40 ] = xx [ 24 ] ; xx [ 41 ] = xx [ 36 ] ; xx [ 42
] = xx [ 38 ] ; xx [ 43 ] = xx [ 39 ] ; pm_math_Quaternion_compose_ra ( xx +
32 , xx + 40 , xx + 44 ) ; xx [ 40 ] = motionData [ 14 ] ; xx [ 41 ] =
motionData [ 15 ] ; xx [ 42 ] = motionData [ 16 ] ; xx [ 43 ] = motionData [
17 ] ; pm_math_Quaternion_compose_ra ( xx + 44 , xx + 40 , xx + 48 ) ; xx [
40 ] = motionData [ 14 ] * motionData [ 16 ] ; xx [ 41 ] = motionData [ 15 ]
* motionData [ 17 ] ; xx [ 42 ] = ( xx [ 40 ] + xx [ 41 ] ) * xx [ 7 ] ; xx [
43 ] = 1.0 ; xx [ 44 ] = motionData [ 16 ] * motionData [ 16 ] ; xx [ 45 ] =
motionData [ 17 ] * motionData [ 17 ] ; xx [ 46 ] = xx [ 43 ] - ( xx [ 44 ] +
xx [ 45 ] ) * xx [ 7 ] ; xx [ 47 ] = motionData [ 15 ] * motionData [ 16 ] ;
xx [ 52 ] = motionData [ 14 ] * motionData [ 17 ] ; xx [ 53 ] = xx [ 47 ] -
xx [ 52 ] ; xx [ 54 ] = - ( xx [ 2 ] * xx [ 42 ] ) ; xx [ 55 ] = - ( xx [ 15
] * xx [ 42 ] ) ; xx [ 56 ] = xx [ 2 ] * xx [ 46 ] + xx [ 17 ] * xx [ 53 ] ;
pm_math_Quaternion_xform_ra ( xx + 48 , xx + 54 , xx + 57 ) ; xx [ 54 ] = xx
[ 39 ] * motionData [ 20 ] ; xx [ 55 ] = xx [ 37 ] * motionData [ 19 ] ; xx [
56 ] = xx [ 54 ] - xx [ 55 ] ; xx [ 60 ] = xx [ 36 ] ; xx [ 61 ] = xx [ 38 ]
; xx [ 62 ] = xx [ 39 ] ; xx [ 36 ] = xx [ 25 ] * motionData [ 19 ] ; xx [ 38
] = xx [ 25 ] * motionData [ 20 ] ; xx [ 63 ] = xx [ 56 ] ; xx [ 64 ] = xx [
36 ] ; xx [ 65 ] = xx [ 38 ] ; pm_math_Vector3_cross_ra ( xx + 60 , xx + 63 ,
xx + 66 ) ; xx [ 63 ] = ( xx [ 24 ] * xx [ 56 ] + xx [ 66 ] ) * xx [ 7 ] ; xx
[ 64 ] = ( xx [ 36 ] * xx [ 24 ] + xx [ 67 ] ) * xx [ 7 ] - motionData [ 20 ]
; xx [ 65 ] = motionData [ 19 ] + ( xx [ 38 ] * xx [ 24 ] + xx [ 68 ] ) * xx
[ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 32 , xx + 63 , xx + 66 ) ; xx [ 36
] = motionData [ 16 ] * motionData [ 17 ] ; xx [ 38 ] = motionData [ 14 ] *
motionData [ 15 ] ; xx [ 56 ] = xx [ 7 ] * ( xx [ 36 ] - xx [ 38 ] ) ; xx [
63 ] = xx [ 52 ] + xx [ 47 ] ; xx [ 47 ] = 1.137705213729072e-3 ; xx [ 52 ] =
motionData [ 15 ] * motionData [ 15 ] ; xx [ 64 ] = xx [ 43 ] - ( xx [ 45 ] +
xx [ 52 ] ) * xx [ 7 ] ; xx [ 69 ] = - ( xx [ 2 ] * xx [ 56 ] ) ; xx [ 70 ] =
- ( xx [ 15 ] * xx [ 56 ] ) ; xx [ 71 ] = xx [ 63 ] * xx [ 47 ] + xx [ 15 ] *
xx [ 64 ] ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 69 , xx + 72 ) ; xx
[ 45 ] = xx [ 37 ] * motionData [ 18 ] ; xx [ 65 ] = xx [ 25 ] * motionData [
18 ] ; xx [ 69 ] = xx [ 54 ] - xx [ 65 ] ; xx [ 54 ] = xx [ 37 ] * motionData
[ 20 ] ; xx [ 75 ] = xx [ 45 ] ; xx [ 76 ] = xx [ 69 ] ; xx [ 77 ] = xx [ 54
] ; pm_math_Vector3_cross_ra ( xx + 60 , xx + 75 , xx + 78 ) ; xx [ 70 ] =
0.14 ; xx [ 71 ] = xx [ 37 ] * xx [ 70 ] ; xx [ 75 ] = xx [ 25 ] * xx [ 70 ]
; xx [ 76 ] = xx [ 75 ] * xx [ 24 ] ; xx [ 77 ] = xx [ 25 ] * xx [ 75 ] ; xx
[ 81 ] = motionData [ 20 ] + ( xx [ 45 ] * xx [ 24 ] + xx [ 78 ] ) * xx [ 7 ]
+ ( xx [ 71 ] * xx [ 24 ] + xx [ 75 ] * xx [ 39 ] ) * xx [ 7 ] ; xx [ 82 ] =
( xx [ 24 ] * xx [ 69 ] + xx [ 79 ] ) * xx [ 7 ] + xx [ 7 ] * ( xx [ 71 ] *
xx [ 39 ] - xx [ 76 ] ) ; xx [ 83 ] = ( xx [ 54 ] * xx [ 24 ] + xx [ 80 ] ) *
xx [ 7 ] - ( motionData [ 18 ] - ( xx [ 77 ] + xx [ 37 ] * xx [ 71 ] ) * xx [
7 ] ) - xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 32 , xx + 81 , xx + 78
) ; xx [ 25 ] = xx [ 43 ] - ( xx [ 52 ] + xx [ 44 ] ) * xx [ 7 ] ; xx [ 43 ]
= xx [ 41 ] - xx [ 40 ] ; xx [ 40 ] = xx [ 38 ] + xx [ 36 ] ; xx [ 81 ] = - (
xx [ 2 ] * xx [ 25 ] ) ; xx [ 82 ] = - ( xx [ 15 ] * xx [ 25 ] ) ; xx [ 83 ]
= xx [ 47 ] * xx [ 43 ] + xx [ 40 ] * xx [ 17 ] ; pm_math_Quaternion_xform_ra
( xx + 48 , xx + 81 , xx + 84 ) ; xx [ 17 ] = xx [ 39 ] * motionData [ 18 ] ;
xx [ 36 ] = xx [ 39 ] * motionData [ 19 ] ; xx [ 38 ] = xx [ 65 ] + xx [ 55 ]
; xx [ 81 ] = - xx [ 17 ] ; xx [ 82 ] = - xx [ 36 ] ; xx [ 83 ] = - xx [ 38 ]
; pm_math_Vector3_cross_ra ( xx + 60 , xx + 81 , xx + 87 ) ; xx [ 41 ] = xx [
70 ] * xx [ 39 ] ; xx [ 60 ] = xx [ 7 ] * ( xx [ 87 ] - xx [ 17 ] * xx [ 24 ]
) - motionData [ 19 ] + xx [ 7 ] * ( xx [ 37 ] * xx [ 75 ] - xx [ 41 ] * xx [
24 ] ) ; xx [ 61 ] = motionData [ 18 ] + xx [ 7 ] * ( xx [ 88 ] - xx [ 36 ] *
xx [ 24 ] ) - ( xx [ 41 ] * xx [ 39 ] + xx [ 77 ] ) * xx [ 7 ] + xx [ 70 ] ;
xx [ 62 ] = xx [ 7 ] * ( xx [ 89 ] - xx [ 38 ] * xx [ 24 ] ) - ( xx [ 76 ] +
xx [ 37 ] * xx [ 41 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 32 ,
xx + 60 , xx + 36 ) ; xx [ 32 ] = motionData [ 98 ] ; xx [ 33 ] = motionData
[ 99 ] ; xx [ 34 ] = motionData [ 100 ] ; xx [ 35 ] = motionData [ 101 ] ; xx
[ 17 ] = 0.9902139361309295 ; xx [ 24 ] = 0.1395577324697271 ; xx [ 39 ] = xx
[ 17 ] * state [ 11 ] - xx [ 24 ] * state [ 10 ] ; xx [ 41 ] =
0.05200961894323344 ; xx [ 44 ] = xx [ 39 ] * xx [ 41 ] ; xx [ 45 ] = xx [ 24
] * state [ 12 ] - xx [ 17 ] * state [ 9 ] ; xx [ 47 ] = xx [ 24 ] * state [
11 ] + xx [ 17 ] * state [ 10 ] ; xx [ 52 ] = xx [ 41 ] * xx [ 47 ] ; xx [ 54
] = xx [ 24 ] * state [ 9 ] + xx [ 17 ] * state [ 12 ] ; xx [ 60 ] = xx [ 7 ]
* ( xx [ 44 ] * xx [ 45 ] - xx [ 52 ] * xx [ 54 ] ) ; xx [ 61 ] = - ( ( xx [
52 ] * xx [ 45 ] + xx [ 44 ] * xx [ 54 ] ) * xx [ 7 ] ) ; xx [ 62 ] = ( xx [
52 ] * xx [ 47 ] + xx [ 39 ] * xx [ 44 ] ) * xx [ 7 ] - xx [ 41 ] ;
pm_math_Quaternion_xform_ra ( xx + 32 , xx + 60 , xx + 75 ) ; xx [ 17 ] = -
xx [ 47 ] ; xx [ 24 ] = - xx [ 39 ] ; xx [ 41 ] = - xx [ 54 ] ; xx [ 87 ] =
xx [ 45 ] ; xx [ 88 ] = xx [ 17 ] ; xx [ 89 ] = xx [ 24 ] ; xx [ 90 ] = xx [
41 ] ; pm_math_Quaternion_compose_ra ( xx + 32 , xx + 87 , xx + 91 ) ; xx [
44 ] = 0.01999999999999999 ; xx [ 52 ] = xx [ 44 ] * xx [ 93 ] ; xx [ 55 ] =
xx [ 44 ] * xx [ 92 ] ; xx [ 60 ] = 0.07160254037844391 ; xx [ 61 ] = xx [ 60
] * xx [ 93 ] ; xx [ 62 ] = xx [ 60 ] * xx [ 92 ] ; xx [ 65 ] =
0.05312177826491075 ; xx [ 69 ] = xx [ 65 ] * xx [ 47 ] ; xx [ 71 ] = xx [ 39
] * xx [ 65 ] ; xx [ 81 ] = xx [ 7 ] * ( xx [ 69 ] * xx [ 54 ] - xx [ 71 ] *
xx [ 45 ] ) ; xx [ 82 ] = ( xx [ 69 ] * xx [ 45 ] + xx [ 71 ] * xx [ 54 ] ) *
xx [ 7 ] ; xx [ 83 ] = xx [ 65 ] - ( xx [ 69 ] * xx [ 47 ] + xx [ 39 ] * xx [
71 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 32 , xx + 81 , xx + 87
) ; xx [ 65 ] = xx [ 15 ] * xx [ 94 ] ; xx [ 69 ] = xx [ 2 ] * xx [ 93 ] - xx
[ 15 ] * xx [ 92 ] ; xx [ 81 ] = xx [ 65 ] ; xx [ 82 ] = - ( xx [ 2 ] * xx [
94 ] ) ; xx [ 83 ] = xx [ 69 ] ; pm_math_Vector3_cross_ra ( xx + 92 , xx + 81
, xx + 95 ) ; xx [ 71 ] = 0.03530169195229536 ; xx [ 81 ] = xx [ 17 ] ; xx [
82 ] = xx [ 24 ] ; xx [ 83 ] = xx [ 41 ] ; xx [ 17 ] = 0.0654271681639358 ;
xx [ 24 ] = xx [ 17 ] * xx [ 54 ] ; xx [ 41 ] = xx [ 71 ] * xx [ 54 ] ; xx [
54 ] = xx [ 17 ] * xx [ 47 ] + xx [ 39 ] * xx [ 71 ] ; xx [ 98 ] = - xx [ 24
] ; xx [ 99 ] = - xx [ 41 ] ; xx [ 100 ] = xx [ 54 ] ;
pm_math_Vector3_cross_ra ( xx + 81 , xx + 98 , xx + 101 ) ; xx [ 81 ] = xx [
71 ] + xx [ 7 ] * ( xx [ 101 ] - xx [ 24 ] * xx [ 45 ] ) ; xx [ 82 ] = ( xx [
102 ] - xx [ 41 ] * xx [ 45 ] ) * xx [ 7 ] - xx [ 17 ] ; xx [ 83 ] = ( xx [
54 ] * xx [ 45 ] + xx [ 103 ] ) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx
+ 32 , xx + 81 , xx + 98 ) ; xx [ 17 ] = 9.87654321 ; xx [ 24 ] = xx [ 1 ] *
state [ 34 ] ; xx [ 32 ] = cos ( xx [ 24 ] ) ; xx [ 33 ] = xx [ 14 ] * xx [
32 ] ; xx [ 34 ] = sin ( xx [ 24 ] ) ; xx [ 24 ] = xx [ 5 ] * xx [ 34 ] ; xx
[ 35 ] = xx [ 8 ] * xx [ 34 ] ; xx [ 34 ] = xx [ 14 ] * xx [ 24 ] + xx [ 23 ]
* xx [ 35 ] ; xx [ 39 ] = xx [ 23 ] * xx [ 32 ] ; xx [ 32 ] = xx [ 23 ] * xx
[ 24 ] - xx [ 14 ] * xx [ 35 ] ; xx [ 101 ] = - xx [ 33 ] ; xx [ 102 ] = - xx
[ 34 ] ; xx [ 103 ] = - xx [ 39 ] ; xx [ 104 ] = xx [ 32 ] ; xx [ 105 ] =
motionData [ 56 ] ; xx [ 106 ] = motionData [ 57 ] ; xx [ 107 ] = motionData
[ 58 ] ; xx [ 108 ] = motionData [ 59 ] ; pm_math_Quaternion_compose_ra ( xx
+ 101 , xx + 105 , xx + 109 ) ; xx [ 24 ] = 0.28 ; xx [ 81 ] = motionData [
57 ] ; xx [ 82 ] = motionData [ 58 ] ; xx [ 83 ] = motionData [ 59 ] ; xx [
35 ] = xx [ 5 ] * motionData [ 59 ] - xx [ 8 ] * motionData [ 57 ] ; xx [ 41
] = xx [ 5 ] * motionData [ 58 ] ; xx [ 105 ] = xx [ 8 ] * motionData [ 58 ]
; xx [ 106 ] = xx [ 35 ] ; xx [ 107 ] = - xx [ 41 ] ;
pm_math_Vector3_cross_ra ( xx + 81 , xx + 105 , xx + 113 ) ; xx [ 45 ] = xx [
24 ] * ( xx [ 114 ] - xx [ 35 ] * motionData [ 56 ] ) ; xx [ 35 ] = ( xx [ 8
] + ( xx [ 41 ] * motionData [ 56 ] + xx [ 115 ] ) * xx [ 7 ] ) * xx [ 70 ] ;
xx [ 41 ] = xx [ 111 ] * xx [ 45 ] + xx [ 112 ] * xx [ 35 ] ; xx [ 47 ] = xx
[ 110 ] * xx [ 45 ] ; xx [ 54 ] = xx [ 110 ] * xx [ 35 ] ; xx [ 81 ] = - xx [
41 ] ; xx [ 82 ] = xx [ 47 ] ; xx [ 83 ] = xx [ 54 ] ;
pm_math_Vector3_cross_ra ( xx + 110 , xx + 81 , xx + 105 ) ; xx [ 81 ] = - (
xx [ 8 ] * motionData [ 61 ] ) ; xx [ 82 ] = xx [ 8 ] * motionData [ 60 ] -
xx [ 5 ] * motionData [ 62 ] ; xx [ 83 ] = xx [ 5 ] * motionData [ 61 ] ;
pm_math_Quaternion_xform_ra ( xx + 101 , xx + 81 , xx + 110 ) ; xx [ 71 ] =
xx [ 34 ] * xx [ 0 ] ; xx [ 81 ] = xx [ 0 ] * xx [ 32 ] ; xx [ 82 ] = 0.0 ;
xx [ 101 ] = motionData [ 49 ] ; xx [ 102 ] = motionData [ 50 ] ; xx [ 103 ]
= motionData [ 51 ] ; xx [ 104 ] = motionData [ 52 ] ; xx [ 83 ] = xx [ 23 ]
* state [ 38 ] + xx [ 14 ] * state [ 36 ] ; xx [ 90 ] = xx [ 83 ] * xx [ 70 ]
; xx [ 108 ] = xx [ 23 ] * state [ 36 ] - xx [ 14 ] * state [ 38 ] ; xx [ 113
] = xx [ 23 ] * state [ 37 ] + xx [ 14 ] * state [ 39 ] ; xx [ 114 ] = xx [
113 ] * xx [ 70 ] ; xx [ 115 ] = xx [ 23 ] * state [ 39 ] - xx [ 14 ] * state
[ 37 ] ; xx [ 116 ] = xx [ 114 ] * xx [ 108 ] ; xx [ 117 ] = xx [ 113 ] * xx
[ 114 ] ; xx [ 118 ] = - ( ( xx [ 90 ] * xx [ 108 ] + xx [ 114 ] * xx [ 115 ]
) * xx [ 7 ] ) ; xx [ 119 ] = xx [ 7 ] * ( xx [ 116 ] - xx [ 90 ] * xx [ 115
] ) ; xx [ 120 ] = ( xx [ 117 ] + xx [ 83 ] * xx [ 90 ] ) * xx [ 7 ] - xx [
70 ] ; pm_math_Quaternion_xform_ra ( xx + 101 , xx + 118 , xx + 121 ) ; xx [
124 ] = xx [ 108 ] ; xx [ 125 ] = xx [ 113 ] ; xx [ 126 ] = xx [ 83 ] ; xx [
127 ] = xx [ 115 ] ; pm_math_Quaternion_compose_ra ( xx + 101 , xx + 124 , xx
+ 128 ) ; xx [ 90 ] = xx [ 70 ] * xx [ 130 ] ; xx [ 113 ] = xx [ 70 ] * xx [
129 ] ; xx [ 118 ] = xx [ 70 ] * xx [ 131 ] ; xx [ 119 ] = xx [ 70 ] * xx [
115 ] ; xx [ 124 ] = xx [ 7 ] * ( xx [ 83 ] * xx [ 114 ] - xx [ 119 ] * xx [
108 ] ) ; xx [ 125 ] = xx [ 70 ] - ( xx [ 119 ] * xx [ 115 ] + xx [ 117 ] ) *
xx [ 7 ] ; xx [ 126 ] = ( xx [ 116 ] + xx [ 83 ] * xx [ 119 ] ) * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 101 , xx + 124 , xx + 114 ) ; xx [ 83 ] =
xx [ 30 ] - ( xx [ 12 ] * xx [ 3 ] + xx [ 6 ] * xx [ 11 ] ) * xx [ 7 ] ; xx [
3 ] = xx [ 91 ] * xx [ 94 ] ; xx [ 6 ] = xx [ 128 ] * xx [ 113 ] ; xx [ 101 ]
= xx [ 129 ] * xx [ 113 ] ; xx [ 29 ] = xx [ 31 ] + ( xx [ 12 ] * xx [ 10 ] -
xx [ 11 ] * xx [ 4 ] ) * xx [ 7 ] ; xx [ 4 ] = 0.07431243570379253 ; xx [ 10
] = 2.141422054707503e-3 ; xx [ 11 ] = 4.282844109415006e-3 ; xx [ 102 ] = xx
[ 9 ] * xx [ 4 ] ; xx [ 103 ] = - ( xx [ 9 ] * xx [ 10 ] ) ; xx [ 104 ] = xx
[ 11 ] * xx [ 18 ] - xx [ 16 ] * xx [ 4 ] ; pm_math_Quaternion_xform_ra ( xx
+ 19 , xx + 102 , xx + 124 ) ; xx [ 102 ] = xx [ 4 ] * xx [ 42 ] ; xx [ 103 ]
= - ( xx [ 10 ] * xx [ 42 ] ) ; xx [ 104 ] = xx [ 11 ] * xx [ 53 ] - xx [ 4 ]
* xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 102 , xx + 132 ) ;
xx [ 12 ] = 0.1486248714075851 ; xx [ 102 ] = xx [ 4 ] * xx [ 56 ] ; xx [ 103
] = - ( xx [ 10 ] * xx [ 56 ] ) ; xx [ 104 ] = xx [ 10 ] * xx [ 64 ] - xx [
63 ] * xx [ 12 ] ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 102 , xx +
135 ) ; xx [ 102 ] = xx [ 4 ] * xx [ 25 ] ; xx [ 103 ] = - ( xx [ 10 ] * xx [
25 ] ) ; xx [ 104 ] = xx [ 40 ] * xx [ 11 ] - xx [ 12 ] * xx [ 43 ] ;
pm_math_Quaternion_xform_ra ( xx + 48 , xx + 102 , xx + 138 ) ; xx [ 11 ] =
0.07200961894323347 ; xx [ 12 ] = xx [ 11 ] * xx [ 93 ] ; xx [ 30 ] = xx [ 11
] * xx [ 92 ] ; xx [ 31 ] = 0.01848076211353309 ; xx [ 102 ] = xx [ 31 ] * xx
[ 93 ] ; xx [ 103 ] = xx [ 31 ] * xx [ 92 ] ; xx [ 104 ] = xx [ 10 ] * xx [
94 ] ; xx [ 108 ] = xx [ 10 ] * xx [ 92 ] + xx [ 4 ] * xx [ 93 ] ; xx [ 141 ]
= xx [ 104 ] ; xx [ 142 ] = xx [ 4 ] * xx [ 94 ] ; xx [ 143 ] = - xx [ 108 ]
; pm_math_Vector3_cross_ra ( xx + 92 , xx + 141 , xx + 144 ) ; xx [ 117 ] =
0.4995596447523598 ; xx [ 119 ] = xx [ 1 ] * state [ 43 ] ; xx [ 120 ] = cos
( xx [ 119 ] ) ; xx [ 127 ] = xx [ 117 ] * xx [ 120 ] ; xx [ 129 ] = sin ( xx
[ 119 ] ) ; xx [ 119 ] = xx [ 5 ] * xx [ 129 ] ; xx [ 141 ] =
0.8662794937748998 ; xx [ 142 ] = xx [ 8 ] * xx [ 129 ] ; xx [ 129 ] = xx [
117 ] * xx [ 119 ] - xx [ 141 ] * xx [ 142 ] ; xx [ 143 ] = xx [ 141 ] * xx [
120 ] ; xx [ 120 ] = xx [ 117 ] * xx [ 142 ] + xx [ 141 ] * xx [ 119 ] ; xx [
147 ] = - xx [ 127 ] ; xx [ 148 ] = xx [ 129 ] ; xx [ 149 ] = - xx [ 143 ] ;
xx [ 150 ] = - xx [ 120 ] ; xx [ 151 ] = motionData [ 70 ] ; xx [ 152 ] =
motionData [ 71 ] ; xx [ 153 ] = motionData [ 72 ] ; xx [ 154 ] = motionData
[ 73 ] ; pm_math_Quaternion_compose_ra ( xx + 147 , xx + 151 , xx + 155 ) ;
xx [ 151 ] = motionData [ 71 ] ; xx [ 152 ] = motionData [ 72 ] ; xx [ 153 ]
= motionData [ 73 ] ; xx [ 117 ] = xx [ 5 ] * motionData [ 73 ] + xx [ 8 ] *
motionData [ 71 ] ; xx [ 119 ] = xx [ 5 ] * motionData [ 72 ] ; xx [ 159 ] =
xx [ 8 ] * motionData [ 72 ] ; xx [ 160 ] = - xx [ 117 ] ; xx [ 161 ] = xx [
119 ] ; pm_math_Vector3_cross_ra ( xx + 151 , xx + 159 , xx + 162 ) ; xx [
141 ] = xx [ 24 ] * ( xx [ 163 ] + xx [ 117 ] * motionData [ 70 ] ) ; xx [
117 ] = ( xx [ 8 ] + ( xx [ 164 ] - xx [ 119 ] * motionData [ 70 ] ) * xx [ 7
] ) * xx [ 70 ] ; xx [ 119 ] = xx [ 157 ] * xx [ 141 ] + xx [ 158 ] * xx [
117 ] ; xx [ 142 ] = xx [ 156 ] * xx [ 141 ] ; xx [ 151 ] = xx [ 156 ] * xx [
117 ] ; xx [ 152 ] = - xx [ 119 ] ; xx [ 153 ] = xx [ 142 ] ; xx [ 154 ] = xx
[ 151 ] ; pm_math_Vector3_cross_ra ( xx + 156 , xx + 152 , xx + 159 ) ; xx [
152 ] = - ( xx [ 8 ] * motionData [ 75 ] ) ; xx [ 153 ] = xx [ 8 ] *
motionData [ 74 ] + xx [ 5 ] * motionData [ 76 ] ; xx [ 154 ] = - ( xx [ 5 ]
* motionData [ 75 ] ) ; pm_math_Quaternion_xform_ra ( xx + 147 , xx + 152 ,
xx + 156 ) ; xx [ 147 ] = xx [ 129 ] * xx [ 0 ] ; xx [ 148 ] = xx [ 0 ] * xx
[ 120 ] ; xx [ 162 ] = motionData [ 63 ] ; xx [ 163 ] = motionData [ 64 ] ;
xx [ 164 ] = motionData [ 65 ] ; xx [ 165 ] = motionData [ 66 ] ; xx [ 149 ]
= xx [ 14 ] * state [ 45 ] - xx [ 23 ] * state [ 47 ] ; xx [ 150 ] = xx [ 149
] * xx [ 70 ] ; xx [ 152 ] = xx [ 14 ] * state [ 47 ] + xx [ 23 ] * state [
45 ] ; xx [ 153 ] = xx [ 14 ] * state [ 48 ] - xx [ 23 ] * state [ 46 ] ; xx
[ 154 ] = xx [ 153 ] * xx [ 70 ] ; xx [ 166 ] = xx [ 14 ] * state [ 46 ] + xx
[ 23 ] * state [ 48 ] ; xx [ 167 ] = xx [ 154 ] * xx [ 152 ] ; xx [ 168 ] =
xx [ 153 ] * xx [ 154 ] ; xx [ 169 ] = ( xx [ 150 ] * xx [ 152 ] + xx [ 154 ]
* xx [ 166 ] ) * xx [ 7 ] ; xx [ 170 ] = xx [ 7 ] * ( xx [ 150 ] * xx [ 166 ]
- xx [ 167 ] ) ; xx [ 171 ] = ( xx [ 168 ] + xx [ 149 ] * xx [ 150 ] ) * xx [
7 ] - xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 162 , xx + 169 , xx +
172 ) ; xx [ 175 ] = xx [ 152 ] ; xx [ 176 ] = - xx [ 153 ] ; xx [ 177 ] = -
xx [ 149 ] ; xx [ 178 ] = xx [ 166 ] ; pm_math_Quaternion_compose_ra ( xx +
162 , xx + 175 , xx + 179 ) ; xx [ 150 ] = xx [ 70 ] * xx [ 181 ] ; xx [ 153
] = xx [ 70 ] * xx [ 180 ] ; xx [ 169 ] = xx [ 70 ] * xx [ 182 ] ; xx [ 170 ]
= xx [ 70 ] * xx [ 166 ] ; xx [ 175 ] = xx [ 7 ] * ( xx [ 149 ] * xx [ 154 ]
- xx [ 170 ] * xx [ 152 ] ) ; xx [ 176 ] = xx [ 70 ] - ( xx [ 170 ] * xx [
166 ] + xx [ 168 ] ) * xx [ 7 ] ; xx [ 177 ] = - ( ( xx [ 167 ] + xx [ 149 ]
* xx [ 170 ] ) * xx [ 7 ] ) ; pm_math_Quaternion_xform_ra ( xx + 162 , xx +
175 , xx + 166 ) ; xx [ 149 ] = xx [ 179 ] * xx [ 153 ] ; xx [ 152 ] = xx [
180 ] * xx [ 153 ] ; xx [ 154 ] = 0.06466571354218477 ; xx [ 162 ] =
0.03667791270951477 ; xx [ 163 ] = 0.07335582541902955 ; xx [ 175 ] = xx [ 9
] * xx [ 154 ] ; xx [ 176 ] = xx [ 9 ] * xx [ 162 ] ; xx [ 177 ] = - ( xx [
16 ] * xx [ 154 ] + xx [ 163 ] * xx [ 18 ] ) ; pm_math_Quaternion_xform_ra (
xx + 19 , xx + 175 , xx + 183 ) ; xx [ 175 ] = xx [ 154 ] * xx [ 42 ] ; xx [
176 ] = xx [ 162 ] * xx [ 42 ] ; xx [ 177 ] = - ( xx [ 154 ] * xx [ 46 ] + xx
[ 163 ] * xx [ 53 ] ) ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 175 , xx
+ 186 ) ; xx [ 164 ] = 0.1293314270843695 ; xx [ 175 ] = xx [ 154 ] * xx [ 56
] ; xx [ 176 ] = xx [ 162 ] * xx [ 56 ] ; xx [ 177 ] = - ( xx [ 63 ] * xx [
164 ] + xx [ 162 ] * xx [ 64 ] ) ; pm_math_Quaternion_xform_ra ( xx + 48 , xx
+ 175 , xx + 189 ) ; xx [ 175 ] = xx [ 154 ] * xx [ 25 ] ; xx [ 176 ] = xx [
162 ] * xx [ 25 ] ; xx [ 177 ] = - ( xx [ 164 ] * xx [ 43 ] + xx [ 40 ] * xx
[ 163 ] ) ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 175 , xx + 163 ) ;
xx [ 170 ] = 0.05200961894323338 ; xx [ 171 ] = xx [ 170 ] * xx [ 93 ] ; xx [
175 ] = xx [ 170 ] * xx [ 92 ] ; xx [ 176 ] = 0.05312177826491074 ; xx [ 177
] = xx [ 176 ] * xx [ 93 ] ; xx [ 178 ] = xx [ 176 ] * xx [ 92 ] ; xx [ 180 ]
= xx [ 162 ] * xx [ 94 ] ; xx [ 192 ] = xx [ 162 ] * xx [ 92 ] - xx [ 154 ] *
xx [ 93 ] ; xx [ 193 ] = - xx [ 180 ] ; xx [ 194 ] = xx [ 154 ] * xx [ 94 ] ;
xx [ 195 ] = xx [ 192 ] ; pm_math_Vector3_cross_ra ( xx + 92 , xx + 193 , xx
+ 196 ) ; xx [ 193 ] = 0.8657710899485229 ; xx [ 194 ] = xx [ 1 ] * state [
52 ] ; xx [ 195 ] = cos ( xx [ 194 ] ) ; xx [ 199 ] = xx [ 193 ] * xx [ 195 ]
; xx [ 200 ] = sin ( xx [ 194 ] ) ; xx [ 194 ] = xx [ 5 ] * xx [ 200 ] ; xx [
201 ] = 0.5004402260104068 ; xx [ 202 ] = xx [ 8 ] * xx [ 200 ] ; xx [ 200 ]
= xx [ 193 ] * xx [ 194 ] - xx [ 201 ] * xx [ 202 ] ; xx [ 203 ] = xx [ 201 ]
* xx [ 195 ] ; xx [ 195 ] = xx [ 193 ] * xx [ 202 ] + xx [ 201 ] * xx [ 194 ]
; xx [ 204 ] = xx [ 199 ] ; xx [ 205 ] = xx [ 200 ] ; xx [ 206 ] = - xx [ 203
] ; xx [ 207 ] = xx [ 195 ] ; xx [ 208 ] = motionData [ 84 ] ; xx [ 209 ] =
motionData [ 85 ] ; xx [ 210 ] = motionData [ 86 ] ; xx [ 211 ] = motionData
[ 87 ] ; pm_math_Quaternion_compose_ra ( xx + 204 , xx + 208 , xx + 212 ) ;
xx [ 208 ] = motionData [ 85 ] ; xx [ 209 ] = motionData [ 86 ] ; xx [ 210 ]
= motionData [ 87 ] ; xx [ 193 ] = xx [ 5 ] * motionData [ 87 ] - xx [ 8 ] *
motionData [ 85 ] ; xx [ 194 ] = xx [ 5 ] * motionData [ 86 ] ; xx [ 216 ] =
xx [ 8 ] * motionData [ 86 ] ; xx [ 217 ] = xx [ 193 ] ; xx [ 218 ] = - xx [
194 ] ; pm_math_Vector3_cross_ra ( xx + 208 , xx + 216 , xx + 219 ) ; xx [
201 ] = xx [ 24 ] * ( xx [ 220 ] - xx [ 193 ] * motionData [ 84 ] ) ; xx [
193 ] = ( xx [ 8 ] + ( xx [ 194 ] * motionData [ 84 ] + xx [ 221 ] ) * xx [ 7
] ) * xx [ 70 ] ; xx [ 194 ] = xx [ 214 ] * xx [ 201 ] + xx [ 215 ] * xx [
193 ] ; xx [ 202 ] = xx [ 213 ] * xx [ 201 ] ; xx [ 208 ] = xx [ 213 ] * xx [
193 ] ; xx [ 209 ] = - xx [ 194 ] ; xx [ 210 ] = xx [ 202 ] ; xx [ 211 ] = xx
[ 208 ] ; pm_math_Vector3_cross_ra ( xx + 213 , xx + 209 , xx + 216 ) ; xx [
209 ] = - ( xx [ 8 ] * motionData [ 89 ] ) ; xx [ 210 ] = xx [ 8 ] *
motionData [ 88 ] - xx [ 5 ] * motionData [ 90 ] ; xx [ 211 ] = xx [ 5 ] *
motionData [ 89 ] ; pm_math_Quaternion_xform_ra ( xx + 204 , xx + 209 , xx +
213 ) ; xx [ 204 ] = xx [ 200 ] * xx [ 0 ] ; xx [ 205 ] = xx [ 0 ] * xx [ 195
] ; xx [ 219 ] = motionData [ 77 ] ; xx [ 220 ] = motionData [ 78 ] ; xx [
221 ] = motionData [ 79 ] ; xx [ 222 ] = motionData [ 80 ] ; xx [ 206 ] = xx
[ 23 ] * state [ 56 ] + xx [ 14 ] * state [ 54 ] ; xx [ 207 ] = xx [ 206 ] *
xx [ 70 ] ; xx [ 209 ] = xx [ 23 ] * state [ 54 ] - xx [ 14 ] * state [ 56 ]
; xx [ 210 ] = xx [ 23 ] * state [ 55 ] + xx [ 14 ] * state [ 57 ] ; xx [ 211
] = xx [ 210 ] * xx [ 70 ] ; xx [ 223 ] = xx [ 23 ] * state [ 57 ] - xx [ 14
] * state [ 55 ] ; xx [ 224 ] = xx [ 211 ] * xx [ 209 ] ; xx [ 225 ] = xx [
210 ] * xx [ 211 ] ; xx [ 226 ] = - ( ( xx [ 207 ] * xx [ 209 ] + xx [ 211 ]
* xx [ 223 ] ) * xx [ 7 ] ) ; xx [ 227 ] = xx [ 7 ] * ( xx [ 224 ] - xx [ 207
] * xx [ 223 ] ) ; xx [ 228 ] = ( xx [ 225 ] + xx [ 206 ] * xx [ 207 ] ) * xx
[ 7 ] - xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 219 , xx + 226 , xx +
229 ) ; xx [ 232 ] = xx [ 209 ] ; xx [ 233 ] = xx [ 210 ] ; xx [ 234 ] = xx [
206 ] ; xx [ 235 ] = xx [ 223 ] ; pm_math_Quaternion_compose_ra ( xx + 219 ,
xx + 232 , xx + 236 ) ; xx [ 207 ] = xx [ 70 ] * xx [ 238 ] ; xx [ 210 ] = xx
[ 70 ] * xx [ 237 ] ; xx [ 226 ] = xx [ 70 ] * xx [ 239 ] ; xx [ 227 ] = xx [
70 ] * xx [ 223 ] ; xx [ 232 ] = xx [ 7 ] * ( xx [ 206 ] * xx [ 211 ] - xx [
227 ] * xx [ 209 ] ) ; xx [ 233 ] = xx [ 70 ] - ( xx [ 227 ] * xx [ 223 ] +
xx [ 225 ] ) * xx [ 7 ] ; xx [ 234 ] = ( xx [ 224 ] + xx [ 206 ] * xx [ 227 ]
) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 219 , xx + 232 , xx + 223 )
; xx [ 206 ] = xx [ 236 ] * xx [ 210 ] ; xx [ 209 ] = xx [ 237 ] * xx [ 210 ]
; xx [ 211 ] = 0.0640968609353203 ; xx [ 219 ] = 0.03766319432662211 ; xx [
220 ] = 0.07532638865324422 ; xx [ 232 ] = - ( xx [ 9 ] * xx [ 211 ] ) ; xx [
233 ] = xx [ 9 ] * xx [ 219 ] ; xx [ 234 ] = xx [ 16 ] * xx [ 211 ] - xx [
220 ] * xx [ 18 ] ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 232 , xx +
240 ) ; xx [ 232 ] = - ( xx [ 211 ] * xx [ 42 ] ) ; xx [ 233 ] = xx [ 219 ] *
xx [ 42 ] ; xx [ 234 ] = xx [ 211 ] * xx [ 46 ] - xx [ 220 ] * xx [ 53 ] ;
pm_math_Quaternion_xform_ra ( xx + 48 , xx + 232 , xx + 243 ) ; xx [ 221 ] =
0.1281937218706406 ; xx [ 232 ] = - ( xx [ 211 ] * xx [ 56 ] ) ; xx [ 233 ] =
xx [ 219 ] * xx [ 56 ] ; xx [ 234 ] = xx [ 63 ] * xx [ 221 ] - xx [ 219 ] *
xx [ 64 ] ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 232 , xx + 246 ) ;
xx [ 232 ] = - ( xx [ 211 ] * xx [ 25 ] ) ; xx [ 233 ] = xx [ 219 ] * xx [ 25
] ; xx [ 234 ] = xx [ 221 ] * xx [ 43 ] - xx [ 40 ] * xx [ 220 ] ;
pm_math_Quaternion_xform_ra ( xx + 48 , xx + 232 , xx + 220 ) ; xx [ 227 ] =
0.07200961894323345 ; xx [ 228 ] = xx [ 227 ] * xx [ 93 ] ; xx [ 232 ] = xx [
227 ] * xx [ 92 ] ; xx [ 233 ] = 0.01848076211353319 ; xx [ 234 ] = xx [ 233
] * xx [ 93 ] ; xx [ 235 ] = xx [ 233 ] * xx [ 92 ] ; xx [ 237 ] = xx [ 219 ]
* xx [ 94 ] ; xx [ 249 ] = xx [ 219 ] * xx [ 92 ] + xx [ 211 ] * xx [ 93 ] ;
xx [ 250 ] = - xx [ 237 ] ; xx [ 251 ] = - ( xx [ 211 ] * xx [ 94 ] ) ; xx [
252 ] = xx [ 249 ] ; pm_math_Vector3_cross_ra ( xx + 92 , xx + 250 , xx + 253
) ; xx [ 250 ] = 0.8662794937748999 ; xx [ 251 ] = xx [ 1 ] * state [ 16 ] ;
xx [ 252 ] = cos ( xx [ 251 ] ) ; xx [ 256 ] = xx [ 250 ] * xx [ 252 ] ; xx [
257 ] = sin ( xx [ 251 ] ) ; xx [ 251 ] = xx [ 5 ] * xx [ 257 ] ; xx [ 258 ]
= 0.4995596447523596 ; xx [ 259 ] = xx [ 8 ] * xx [ 257 ] ; xx [ 257 ] = xx [
250 ] * xx [ 251 ] + xx [ 258 ] * xx [ 259 ] ; xx [ 260 ] = xx [ 258 ] * xx [
252 ] ; xx [ 252 ] = xx [ 258 ] * xx [ 251 ] - xx [ 250 ] * xx [ 259 ] ; xx [
261 ] = - xx [ 256 ] ; xx [ 262 ] = - xx [ 257 ] ; xx [ 263 ] = - xx [ 260 ]
; xx [ 264 ] = xx [ 252 ] ; xx [ 265 ] = motionData [ 28 ] ; xx [ 266 ] =
motionData [ 29 ] ; xx [ 267 ] = motionData [ 30 ] ; xx [ 268 ] = motionData
[ 31 ] ; pm_math_Quaternion_compose_ra ( xx + 261 , xx + 265 , xx + 269 ) ;
xx [ 265 ] = motionData [ 29 ] ; xx [ 266 ] = motionData [ 30 ] ; xx [ 267 ]
= motionData [ 31 ] ; xx [ 250 ] = xx [ 5 ] * motionData [ 31 ] - xx [ 8 ] *
motionData [ 29 ] ; xx [ 251 ] = xx [ 5 ] * motionData [ 30 ] ; xx [ 273 ] =
xx [ 8 ] * motionData [ 30 ] ; xx [ 274 ] = xx [ 250 ] ; xx [ 275 ] = - xx [
251 ] ; pm_math_Vector3_cross_ra ( xx + 265 , xx + 273 , xx + 276 ) ; xx [
258 ] = xx [ 24 ] * ( xx [ 277 ] - xx [ 250 ] * motionData [ 28 ] ) ; xx [
250 ] = ( xx [ 8 ] + ( xx [ 251 ] * motionData [ 28 ] + xx [ 278 ] ) * xx [ 7
] ) * xx [ 70 ] ; xx [ 251 ] = xx [ 271 ] * xx [ 258 ] + xx [ 272 ] * xx [
250 ] ; xx [ 259 ] = xx [ 270 ] * xx [ 258 ] ; xx [ 265 ] = xx [ 270 ] * xx [
250 ] ; xx [ 266 ] = - xx [ 251 ] ; xx [ 267 ] = xx [ 259 ] ; xx [ 268 ] = xx
[ 265 ] ; pm_math_Vector3_cross_ra ( xx + 270 , xx + 266 , xx + 273 ) ; xx [
266 ] = - ( xx [ 8 ] * motionData [ 33 ] ) ; xx [ 267 ] = xx [ 8 ] *
motionData [ 32 ] - xx [ 5 ] * motionData [ 34 ] ; xx [ 268 ] = xx [ 5 ] *
motionData [ 33 ] ; pm_math_Quaternion_xform_ra ( xx + 261 , xx + 266 , xx +
270 ) ; xx [ 261 ] = xx [ 257 ] * xx [ 0 ] ; xx [ 262 ] = xx [ 0 ] * xx [ 252
] ; xx [ 276 ] = motionData [ 21 ] ; xx [ 277 ] = motionData [ 22 ] ; xx [
278 ] = motionData [ 23 ] ; xx [ 279 ] = motionData [ 24 ] ; xx [ 263 ] = xx
[ 23 ] * state [ 20 ] + xx [ 14 ] * state [ 18 ] ; xx [ 264 ] = xx [ 263 ] *
xx [ 70 ] ; xx [ 266 ] = xx [ 23 ] * state [ 18 ] - xx [ 14 ] * state [ 20 ]
; xx [ 267 ] = xx [ 23 ] * state [ 19 ] + xx [ 14 ] * state [ 21 ] ; xx [ 268
] = xx [ 267 ] * xx [ 70 ] ; xx [ 280 ] = xx [ 23 ] * state [ 21 ] - xx [ 14
] * state [ 19 ] ; xx [ 281 ] = xx [ 268 ] * xx [ 266 ] ; xx [ 282 ] = xx [
267 ] * xx [ 268 ] ; xx [ 283 ] = - ( ( xx [ 264 ] * xx [ 266 ] + xx [ 268 ]
* xx [ 280 ] ) * xx [ 7 ] ) ; xx [ 284 ] = xx [ 7 ] * ( xx [ 281 ] - xx [ 264
] * xx [ 280 ] ) ; xx [ 285 ] = ( xx [ 282 ] + xx [ 263 ] * xx [ 264 ] ) * xx
[ 7 ] - xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 276 , xx + 283 , xx +
286 ) ; xx [ 289 ] = xx [ 266 ] ; xx [ 290 ] = xx [ 267 ] ; xx [ 291 ] = xx [
263 ] ; xx [ 292 ] = xx [ 280 ] ; pm_math_Quaternion_compose_ra ( xx + 276 ,
xx + 289 , xx + 293 ) ; xx [ 264 ] = xx [ 70 ] * xx [ 295 ] ; xx [ 267 ] = xx
[ 70 ] * xx [ 294 ] ; xx [ 283 ] = xx [ 70 ] * xx [ 296 ] ; xx [ 284 ] = xx [
70 ] * xx [ 280 ] ; xx [ 289 ] = xx [ 7 ] * ( xx [ 263 ] * xx [ 268 ] - xx [
284 ] * xx [ 266 ] ) ; xx [ 290 ] = xx [ 70 ] - ( xx [ 284 ] * xx [ 280 ] +
xx [ 282 ] ) * xx [ 7 ] ; xx [ 291 ] = ( xx [ 281 ] + xx [ 263 ] * xx [ 284 ]
) * xx [ 7 ] ; pm_math_Quaternion_xform_ra ( xx + 276 , xx + 289 , xx + 280 )
; xx [ 263 ] = xx [ 293 ] * xx [ 267 ] ; xx [ 266 ] = xx [ 294 ] * xx [ 267 ]
; xx [ 268 ] = 0.03901074375149718 ; xx [ 276 ] = 0.06328574610922835 ; xx [
277 ] = 0.1265714922184567 ; xx [ 289 ] = - ( xx [ 9 ] * xx [ 268 ] ) ; xx [
290 ] = - ( xx [ 9 ] * xx [ 276 ] ) ; xx [ 291 ] = xx [ 16 ] * xx [ 268 ] +
xx [ 277 ] * xx [ 18 ] ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 289 ,
xx + 297 ) ; xx [ 18 ] = - ( xx [ 268 ] * xx [ 42 ] ) ; xx [ 19 ] = - ( xx [
276 ] * xx [ 42 ] ) ; xx [ 20 ] = xx [ 268 ] * xx [ 46 ] + xx [ 277 ] * xx [
53 ] ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 18 , xx + 289 ) ; xx [ 9
] = 0.07802148750299437 ; xx [ 18 ] = - ( xx [ 268 ] * xx [ 56 ] ) ; xx [ 19
] = - ( xx [ 276 ] * xx [ 56 ] ) ; xx [ 20 ] = xx [ 63 ] * xx [ 9 ] + xx [
276 ] * xx [ 64 ] ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 18 , xx +
300 ) ; xx [ 18 ] = - ( xx [ 268 ] * xx [ 25 ] ) ; xx [ 19 ] = - ( xx [ 276 ]
* xx [ 25 ] ) ; xx [ 20 ] = xx [ 9 ] * xx [ 43 ] + xx [ 40 ] * xx [ 277 ] ;
pm_math_Quaternion_xform_ra ( xx + 48 , xx + 18 , xx + 277 ) ; xx [ 9 ] =
0.02000000000000002 ; xx [ 16 ] = xx [ 9 ] * xx [ 93 ] ; xx [ 18 ] = xx [ 9 ]
* xx [ 92 ] ; xx [ 19 ] = 0.07160254037844389 ; xx [ 20 ] = xx [ 19 ] * xx [
93 ] ; xx [ 21 ] = xx [ 19 ] * xx [ 92 ] ; xx [ 22 ] = xx [ 276 ] * xx [ 94 ]
; xx [ 25 ] = xx [ 268 ] * xx [ 93 ] - xx [ 276 ] * xx [ 92 ] ; xx [ 48 ] =
xx [ 22 ] ; xx [ 49 ] = - ( xx [ 268 ] * xx [ 94 ] ) ; xx [ 50 ] = xx [ 25 ]
; pm_math_Vector3_cross_ra ( xx + 92 , xx + 48 , xx + 303 ) ; xx [ 40 ] = xx
[ 1 ] * state [ 25 ] ; xx [ 1 ] = cos ( xx [ 40 ] ) ; xx [ 42 ] = xx [ 23 ] *
xx [ 1 ] ; xx [ 43 ] = sin ( xx [ 40 ] ) ; xx [ 40 ] = xx [ 5 ] * xx [ 43 ] ;
xx [ 46 ] = xx [ 8 ] * xx [ 43 ] ; xx [ 43 ] = xx [ 23 ] * xx [ 40 ] - xx [
14 ] * xx [ 46 ] ; xx [ 48 ] = xx [ 14 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 23 ] *
xx [ 46 ] + xx [ 14 ] * xx [ 40 ] ; xx [ 306 ] = - xx [ 42 ] ; xx [ 307 ] =
xx [ 43 ] ; xx [ 308 ] = - xx [ 48 ] ; xx [ 309 ] = - xx [ 1 ] ; xx [ 310 ] =
motionData [ 42 ] ; xx [ 311 ] = motionData [ 43 ] ; xx [ 312 ] = motionData
[ 44 ] ; xx [ 313 ] = motionData [ 45 ] ; pm_math_Quaternion_compose_ra ( xx
+ 306 , xx + 310 , xx + 314 ) ; xx [ 49 ] = motionData [ 43 ] ; xx [ 50 ] =
motionData [ 44 ] ; xx [ 51 ] = motionData [ 45 ] ; xx [ 40 ] = xx [ 5 ] *
motionData [ 45 ] + xx [ 8 ] * motionData [ 43 ] ; xx [ 46 ] = xx [ 5 ] *
motionData [ 44 ] ; xx [ 310 ] = xx [ 8 ] * motionData [ 44 ] ; xx [ 311 ] =
- xx [ 40 ] ; xx [ 312 ] = xx [ 46 ] ; pm_math_Vector3_cross_ra ( xx + 49 ,
xx + 310 , xx + 318 ) ; xx [ 49 ] = xx [ 24 ] * ( xx [ 319 ] + xx [ 40 ] *
motionData [ 42 ] ) ; xx [ 24 ] = ( xx [ 8 ] + ( xx [ 320 ] - xx [ 46 ] *
motionData [ 42 ] ) * xx [ 7 ] ) * xx [ 70 ] ; xx [ 40 ] = xx [ 316 ] * xx [
49 ] + xx [ 317 ] * xx [ 24 ] ; xx [ 46 ] = xx [ 315 ] * xx [ 49 ] ; xx [ 50
] = xx [ 315 ] * xx [ 24 ] ; xx [ 310 ] = - xx [ 40 ] ; xx [ 311 ] = xx [ 46
] ; xx [ 312 ] = xx [ 50 ] ; pm_math_Vector3_cross_ra ( xx + 315 , xx + 310 ,
xx + 318 ) ; xx [ 310 ] = - ( xx [ 8 ] * motionData [ 47 ] ) ; xx [ 311 ] =
xx [ 8 ] * motionData [ 46 ] + xx [ 5 ] * motionData [ 48 ] ; xx [ 312 ] = -
( xx [ 5 ] * motionData [ 47 ] ) ; pm_math_Quaternion_xform_ra ( xx + 306 ,
xx + 310 , xx + 315 ) ; xx [ 5 ] = xx [ 43 ] * xx [ 0 ] ; xx [ 8 ] = xx [ 0 ]
* xx [ 1 ] ; xx [ 306 ] = motionData [ 35 ] ; xx [ 307 ] = motionData [ 36 ]
; xx [ 308 ] = motionData [ 37 ] ; xx [ 309 ] = motionData [ 38 ] ; xx [ 51 ]
= xx [ 14 ] * state [ 27 ] - xx [ 23 ] * state [ 29 ] ; xx [ 53 ] = xx [ 51 ]
* xx [ 70 ] ; xx [ 56 ] = xx [ 14 ] * state [ 29 ] + xx [ 23 ] * state [ 27 ]
; xx [ 63 ] = xx [ 14 ] * state [ 30 ] - xx [ 23 ] * state [ 28 ] ; xx [ 64 ]
= xx [ 63 ] * xx [ 70 ] ; xx [ 284 ] = xx [ 14 ] * state [ 28 ] + xx [ 23 ] *
state [ 30 ] ; xx [ 14 ] = xx [ 64 ] * xx [ 56 ] ; xx [ 23 ] = xx [ 63 ] * xx
[ 64 ] ; xx [ 310 ] = ( xx [ 53 ] * xx [ 56 ] + xx [ 64 ] * xx [ 284 ] ) * xx
[ 7 ] ; xx [ 311 ] = xx [ 7 ] * ( xx [ 53 ] * xx [ 284 ] - xx [ 14 ] ) ; xx [
312 ] = ( xx [ 23 ] + xx [ 51 ] * xx [ 53 ] ) * xx [ 7 ] - xx [ 70 ] ;
pm_math_Quaternion_xform_ra ( xx + 306 , xx + 310 , xx + 321 ) ; xx [ 310 ] =
xx [ 56 ] ; xx [ 311 ] = - xx [ 63 ] ; xx [ 312 ] = - xx [ 51 ] ; xx [ 313 ]
= xx [ 284 ] ; pm_math_Quaternion_compose_ra ( xx + 306 , xx + 310 , xx + 324
) ; xx [ 53 ] = xx [ 70 ] * xx [ 326 ] ; xx [ 63 ] = xx [ 70 ] * xx [ 325 ] ;
xx [ 285 ] = xx [ 70 ] * xx [ 327 ] ; xx [ 292 ] = xx [ 70 ] * xx [ 284 ] ;
xx [ 310 ] = xx [ 7 ] * ( xx [ 51 ] * xx [ 64 ] - xx [ 292 ] * xx [ 56 ] ) ;
xx [ 311 ] = xx [ 70 ] - ( xx [ 292 ] * xx [ 284 ] + xx [ 23 ] ) * xx [ 7 ] ;
xx [ 312 ] = - ( ( xx [ 14 ] + xx [ 51 ] * xx [ 292 ] ) * xx [ 7 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 306 , xx + 310 , xx + 328 ) ; xx [ 14 ] =
xx [ 324 ] * xx [ 63 ] ; xx [ 23 ] = xx [ 325 ] * xx [ 63 ] ; J [ 0 ] = xx [
26 ] + xx [ 13 ] ; J [ 1 ] = xx [ 57 ] + xx [ 66 ] ; J [ 2 ] = xx [ 72 ] + xx
[ 78 ] ; J [ 3 ] = xx [ 84 ] + xx [ 36 ] ; J [ 4 ] = xx [ 75 ] - ( xx [ 91 ]
* xx [ 52 ] + xx [ 94 ] * xx [ 55 ] ) * xx [ 7 ] ; J [ 5 ] = ( xx [ 91 ] * xx
[ 61 ] + xx [ 94 ] * xx [ 62 ] ) * xx [ 7 ] + xx [ 87 ] ; J [ 6 ] = xx [ 7 ]
* ( xx [ 95 ] + xx [ 91 ] * xx [ 65 ] ) + xx [ 98 ] - xx [ 2 ] ; J [ 15 ] = -
( xx [ 7 ] * ( xx [ 105 ] - xx [ 41 ] * xx [ 109 ] ) + xx [ 110 ] + xx [ 7 ]
* ( xx [ 71 ] * xx [ 39 ] + xx [ 81 ] * xx [ 33 ] ) ) ; J [ 16 ] = xx [ 82 ]
; J [ 17 ] = - ( xx [ 121 ] - ( xx [ 128 ] * xx [ 90 ] + xx [ 131 ] * xx [
113 ] ) * xx [ 7 ] ) ; J [ 18 ] = - ( xx [ 7 ] * ( xx [ 130 ] * xx [ 113 ] -
xx [ 128 ] * xx [ 118 ] ) + xx [ 114 ] ) ; J [ 27 ] = xx [ 27 ] + xx [ 83 ] +
xx [ 0 ] ; J [ 28 ] = xx [ 58 ] + xx [ 67 ] ; J [ 29 ] = xx [ 73 ] + xx [ 79
] ; J [ 30 ] = xx [ 85 ] + xx [ 37 ] ; J [ 31 ] = xx [ 7 ] * ( xx [ 91 ] * xx
[ 55 ] - xx [ 94 ] * xx [ 52 ] ) + xx [ 76 ] ; J [ 32 ] = xx [ 7 ] * ( xx [
94 ] * xx [ 61 ] - xx [ 91 ] * xx [ 62 ] ) + xx [ 88 ] ; J [ 33 ] = ( xx [ 96
] - xx [ 2 ] * xx [ 3 ] ) * xx [ 7 ] + xx [ 99 ] - xx [ 15 ] ; J [ 42 ] = - (
xx [ 35 ] + ( xx [ 109 ] * xx [ 47 ] + xx [ 106 ] ) * xx [ 7 ] + xx [ 111 ] -
( xx [ 81 ] * xx [ 32 ] + xx [ 34 ] * xx [ 71 ] ) * xx [ 7 ] + xx [ 0 ] ) ; J
[ 43 ] = xx [ 82 ] ; J [ 44 ] = - ( xx [ 7 ] * ( xx [ 6 ] - xx [ 131 ] * xx [
90 ] ) + xx [ 122 ] ) ; J [ 45 ] = - ( xx [ 115 ] - ( xx [ 131 ] * xx [ 118 ]
+ xx [ 101 ] ) * xx [ 7 ] + xx [ 70 ] ) ; J [ 54 ] = xx [ 28 ] + xx [ 29 ] ;
J [ 55 ] = xx [ 59 ] + xx [ 68 ] ; J [ 56 ] = xx [ 74 ] + xx [ 80 ] ; J [ 57
] = xx [ 86 ] + xx [ 38 ] ; J [ 58 ] = xx [ 77 ] + ( xx [ 92 ] * xx [ 55 ] +
xx [ 93 ] * xx [ 52 ] ) * xx [ 7 ] - xx [ 44 ] ; J [ 59 ] = xx [ 89 ] - ( xx
[ 92 ] * xx [ 62 ] + xx [ 93 ] * xx [ 61 ] ) * xx [ 7 ] + xx [ 60 ] ; J [ 60
] = ( xx [ 91 ] * xx [ 69 ] + xx [ 97 ] ) * xx [ 7 ] + xx [ 100 ] ; J [ 69 ]
= - ( ( xx [ 109 ] * xx [ 54 ] + xx [ 107 ] ) * xx [ 7 ] - xx [ 45 ] + xx [
112 ] + ( xx [ 71 ] * xx [ 33 ] - xx [ 81 ] * xx [ 39 ] ) * xx [ 7 ] ) ; J [
70 ] = xx [ 82 ] ; J [ 71 ] = - ( xx [ 123 ] + ( xx [ 101 ] + xx [ 130 ] * xx
[ 90 ] ) * xx [ 7 ] - xx [ 70 ] ) ; J [ 72 ] = - ( ( xx [ 6 ] + xx [ 130 ] *
xx [ 118 ] ) * xx [ 7 ] + xx [ 116 ] ) ; J [ 81 ] = xx [ 124 ] + xx [ 13 ] ;
J [ 82 ] = xx [ 132 ] + xx [ 66 ] ; J [ 83 ] = xx [ 135 ] + xx [ 78 ] ; J [
84 ] = xx [ 138 ] + xx [ 36 ] ; J [ 85 ] = xx [ 75 ] - ( xx [ 91 ] * xx [ 12
] + xx [ 94 ] * xx [ 30 ] ) * xx [ 7 ] ; J [ 86 ] = xx [ 87 ] - ( xx [ 91 ] *
xx [ 102 ] + xx [ 94 ] * xx [ 103 ] ) * xx [ 7 ] ; J [ 87 ] = xx [ 7 ] * ( xx
[ 144 ] + xx [ 91 ] * xx [ 104 ] ) + xx [ 98 ] + xx [ 4 ] ; J [ 100 ] = - (
xx [ 7 ] * ( xx [ 159 ] - xx [ 119 ] * xx [ 155 ] ) + xx [ 156 ] - xx [ 7 ] *
( xx [ 147 ] * xx [ 143 ] + xx [ 148 ] * xx [ 127 ] ) ) ; J [ 101 ] = xx [ 82
] ; J [ 102 ] = - ( xx [ 172 ] - ( xx [ 179 ] * xx [ 150 ] + xx [ 182 ] * xx
[ 153 ] ) * xx [ 7 ] ) ; J [ 103 ] = - ( xx [ 7 ] * ( xx [ 181 ] * xx [ 153 ]
- xx [ 179 ] * xx [ 169 ] ) + xx [ 166 ] ) ; J [ 108 ] = xx [ 125 ] + xx [ 83
] + xx [ 0 ] ; J [ 109 ] = xx [ 133 ] + xx [ 67 ] ; J [ 110 ] = xx [ 136 ] +
xx [ 79 ] ; J [ 111 ] = xx [ 139 ] + xx [ 37 ] ; J [ 112 ] = xx [ 7 ] * ( xx
[ 91 ] * xx [ 30 ] - xx [ 94 ] * xx [ 12 ] ) + xx [ 76 ] ; J [ 113 ] = xx [ 7
] * ( xx [ 91 ] * xx [ 103 ] - xx [ 94 ] * xx [ 102 ] ) + xx [ 88 ] ; J [ 114
] = ( xx [ 4 ] * xx [ 3 ] + xx [ 145 ] ) * xx [ 7 ] + xx [ 99 ] - xx [ 10 ] ;
J [ 127 ] = - ( xx [ 117 ] + ( xx [ 155 ] * xx [ 142 ] + xx [ 160 ] ) * xx [
7 ] + xx [ 157 ] - ( xx [ 148 ] * xx [ 120 ] + xx [ 129 ] * xx [ 147 ] ) * xx
[ 7 ] + xx [ 0 ] ) ; J [ 128 ] = xx [ 82 ] ; J [ 129 ] = - ( xx [ 7 ] * ( xx
[ 149 ] - xx [ 182 ] * xx [ 150 ] ) + xx [ 173 ] ) ; J [ 130 ] = - ( xx [ 167
] - ( xx [ 182 ] * xx [ 169 ] + xx [ 152 ] ) * xx [ 7 ] + xx [ 70 ] ) ; J [
135 ] = xx [ 126 ] + xx [ 29 ] ; J [ 136 ] = xx [ 134 ] + xx [ 68 ] ; J [ 137
] = xx [ 137 ] + xx [ 80 ] ; J [ 138 ] = xx [ 140 ] + xx [ 38 ] ; J [ 139 ] =
xx [ 77 ] + ( xx [ 92 ] * xx [ 30 ] + xx [ 93 ] * xx [ 12 ] ) * xx [ 7 ] - xx
[ 11 ] ; J [ 140 ] = xx [ 89 ] + ( xx [ 92 ] * xx [ 103 ] + xx [ 93 ] * xx [
102 ] ) * xx [ 7 ] - xx [ 31 ] ; J [ 141 ] = ( xx [ 146 ] - xx [ 91 ] * xx [
108 ] ) * xx [ 7 ] + xx [ 100 ] ; J [ 154 ] = - ( ( xx [ 155 ] * xx [ 151 ] +
xx [ 161 ] ) * xx [ 7 ] - xx [ 141 ] + xx [ 158 ] + ( xx [ 148 ] * xx [ 143 ]
- xx [ 147 ] * xx [ 127 ] ) * xx [ 7 ] ) ; J [ 155 ] = xx [ 82 ] ; J [ 156 ]
= - ( xx [ 174 ] + ( xx [ 152 ] + xx [ 181 ] * xx [ 150 ] ) * xx [ 7 ] - xx [
70 ] ) ; J [ 157 ] = - ( ( xx [ 149 ] + xx [ 181 ] * xx [ 169 ] ) * xx [ 7 ]
+ xx [ 168 ] ) ; J [ 162 ] = xx [ 183 ] + xx [ 13 ] ; J [ 163 ] = xx [ 186 ]
+ xx [ 66 ] ; J [ 164 ] = xx [ 189 ] + xx [ 78 ] ; J [ 165 ] = xx [ 163 ] +
xx [ 36 ] ; J [ 166 ] = xx [ 75 ] - ( xx [ 91 ] * xx [ 171 ] + xx [ 94 ] * xx
[ 175 ] ) * xx [ 7 ] ; J [ 167 ] = xx [ 87 ] - ( xx [ 91 ] * xx [ 177 ] + xx
[ 94 ] * xx [ 178 ] ) * xx [ 7 ] ; J [ 168 ] = xx [ 7 ] * ( xx [ 196 ] - xx [
91 ] * xx [ 180 ] ) + xx [ 98 ] + xx [ 154 ] ; J [ 185 ] = - ( xx [ 7 ] * (
xx [ 216 ] - xx [ 194 ] * xx [ 212 ] ) + xx [ 213 ] - xx [ 7 ] * ( xx [ 204 ]
* xx [ 203 ] + xx [ 205 ] * xx [ 199 ] ) ) ; J [ 186 ] = xx [ 82 ] ; J [ 187
] = - ( xx [ 229 ] - ( xx [ 236 ] * xx [ 207 ] + xx [ 239 ] * xx [ 210 ] ) *
xx [ 7 ] ) ; J [ 188 ] = - ( xx [ 7 ] * ( xx [ 238 ] * xx [ 210 ] - xx [ 236
] * xx [ 226 ] ) + xx [ 223 ] ) ; J [ 189 ] = xx [ 184 ] + xx [ 83 ] + xx [ 0
] ; J [ 190 ] = xx [ 187 ] + xx [ 67 ] ; J [ 191 ] = xx [ 190 ] + xx [ 79 ] ;
J [ 192 ] = xx [ 164 ] + xx [ 37 ] ; J [ 193 ] = xx [ 7 ] * ( xx [ 91 ] * xx
[ 175 ] - xx [ 94 ] * xx [ 171 ] ) + xx [ 76 ] ; J [ 194 ] = xx [ 7 ] * ( xx
[ 91 ] * xx [ 178 ] - xx [ 94 ] * xx [ 177 ] ) + xx [ 88 ] ; J [ 195 ] = ( xx
[ 154 ] * xx [ 3 ] + xx [ 197 ] ) * xx [ 7 ] + xx [ 99 ] + xx [ 162 ] ; J [
212 ] = - ( xx [ 193 ] + ( xx [ 212 ] * xx [ 202 ] + xx [ 217 ] ) * xx [ 7 ]
+ xx [ 214 ] - ( xx [ 205 ] * xx [ 195 ] + xx [ 200 ] * xx [ 204 ] ) * xx [ 7
] + xx [ 0 ] ) ; J [ 213 ] = xx [ 82 ] ; J [ 214 ] = - ( xx [ 7 ] * ( xx [
206 ] - xx [ 239 ] * xx [ 207 ] ) + xx [ 230 ] ) ; J [ 215 ] = - ( xx [ 224 ]
- ( xx [ 239 ] * xx [ 226 ] + xx [ 209 ] ) * xx [ 7 ] + xx [ 70 ] ) ; J [ 216
] = xx [ 185 ] + xx [ 29 ] ; J [ 217 ] = xx [ 188 ] + xx [ 68 ] ; J [ 218 ] =
xx [ 191 ] + xx [ 80 ] ; J [ 219 ] = xx [ 165 ] + xx [ 38 ] ; J [ 220 ] = xx
[ 77 ] + ( xx [ 92 ] * xx [ 175 ] + xx [ 93 ] * xx [ 171 ] ) * xx [ 7 ] - xx
[ 170 ] ; J [ 221 ] = xx [ 89 ] + ( xx [ 92 ] * xx [ 178 ] + xx [ 93 ] * xx [
177 ] ) * xx [ 7 ] - xx [ 176 ] ; J [ 222 ] = ( xx [ 91 ] * xx [ 192 ] + xx [
198 ] ) * xx [ 7 ] + xx [ 100 ] ; J [ 239 ] = - ( ( xx [ 212 ] * xx [ 208 ] +
xx [ 218 ] ) * xx [ 7 ] - xx [ 201 ] + xx [ 215 ] + ( xx [ 204 ] * xx [ 199 ]
- xx [ 205 ] * xx [ 203 ] ) * xx [ 7 ] ) ; J [ 240 ] = xx [ 82 ] ; J [ 241 ]
= - ( xx [ 231 ] + ( xx [ 209 ] + xx [ 238 ] * xx [ 207 ] ) * xx [ 7 ] - xx [
70 ] ) ; J [ 242 ] = - ( ( xx [ 206 ] + xx [ 238 ] * xx [ 226 ] ) * xx [ 7 ]
+ xx [ 225 ] ) ; J [ 243 ] = xx [ 240 ] + xx [ 13 ] ; J [ 244 ] = xx [ 243 ]
+ xx [ 66 ] ; J [ 245 ] = xx [ 246 ] + xx [ 78 ] ; J [ 246 ] = xx [ 220 ] +
xx [ 36 ] ; J [ 247 ] = ( xx [ 91 ] * xx [ 228 ] + xx [ 94 ] * xx [ 232 ] ) *
xx [ 7 ] + xx [ 75 ] ; J [ 248 ] = xx [ 87 ] - ( xx [ 91 ] * xx [ 234 ] + xx
[ 94 ] * xx [ 235 ] ) * xx [ 7 ] ; J [ 249 ] = xx [ 7 ] * ( xx [ 253 ] - xx [
91 ] * xx [ 237 ] ) + xx [ 98 ] - xx [ 211 ] ; J [ 250 ] = - ( xx [ 7 ] * (
xx [ 273 ] - xx [ 251 ] * xx [ 269 ] ) + xx [ 270 ] + xx [ 7 ] * ( xx [ 261 ]
* xx [ 260 ] + xx [ 262 ] * xx [ 256 ] ) ) ; J [ 251 ] = xx [ 82 ] ; J [ 252
] = - ( xx [ 286 ] - ( xx [ 293 ] * xx [ 264 ] + xx [ 296 ] * xx [ 267 ] ) *
xx [ 7 ] ) ; J [ 253 ] = - ( xx [ 7 ] * ( xx [ 295 ] * xx [ 267 ] - xx [ 293
] * xx [ 283 ] ) + xx [ 280 ] ) ; J [ 270 ] = xx [ 241 ] + xx [ 83 ] + xx [ 0
] ; J [ 271 ] = xx [ 244 ] + xx [ 67 ] ; J [ 272 ] = xx [ 247 ] + xx [ 79 ] ;
J [ 273 ] = xx [ 221 ] + xx [ 37 ] ; J [ 274 ] = xx [ 7 ] * ( xx [ 94 ] * xx
[ 228 ] - xx [ 91 ] * xx [ 232 ] ) + xx [ 76 ] ; J [ 275 ] = xx [ 7 ] * ( xx
[ 91 ] * xx [ 235 ] - xx [ 94 ] * xx [ 234 ] ) + xx [ 88 ] ; J [ 276 ] = ( xx
[ 254 ] - xx [ 211 ] * xx [ 3 ] ) * xx [ 7 ] + xx [ 99 ] + xx [ 219 ] ; J [
277 ] = - ( xx [ 250 ] + ( xx [ 269 ] * xx [ 259 ] + xx [ 274 ] ) * xx [ 7 ]
+ xx [ 271 ] - ( xx [ 262 ] * xx [ 252 ] + xx [ 257 ] * xx [ 261 ] ) * xx [ 7
] + xx [ 0 ] ) ; J [ 278 ] = xx [ 82 ] ; J [ 279 ] = - ( xx [ 7 ] * ( xx [
263 ] - xx [ 296 ] * xx [ 264 ] ) + xx [ 287 ] ) ; J [ 280 ] = - ( xx [ 281 ]
- ( xx [ 296 ] * xx [ 283 ] + xx [ 266 ] ) * xx [ 7 ] + xx [ 70 ] ) ; J [ 297
] = xx [ 242 ] + xx [ 29 ] ; J [ 298 ] = xx [ 245 ] + xx [ 68 ] ; J [ 299 ] =
xx [ 248 ] + xx [ 80 ] ; J [ 300 ] = xx [ 222 ] + xx [ 38 ] ; J [ 301 ] = xx
[ 77 ] - ( xx [ 92 ] * xx [ 232 ] + xx [ 93 ] * xx [ 228 ] ) * xx [ 7 ] + xx
[ 227 ] ; J [ 302 ] = xx [ 89 ] + ( xx [ 92 ] * xx [ 235 ] + xx [ 93 ] * xx [
234 ] ) * xx [ 7 ] - xx [ 233 ] ; J [ 303 ] = ( xx [ 91 ] * xx [ 249 ] + xx [
255 ] ) * xx [ 7 ] + xx [ 100 ] ; J [ 304 ] = - ( ( xx [ 269 ] * xx [ 265 ] +
xx [ 275 ] ) * xx [ 7 ] - xx [ 258 ] + xx [ 272 ] + ( xx [ 261 ] * xx [ 256 ]
- xx [ 262 ] * xx [ 260 ] ) * xx [ 7 ] ) ; J [ 305 ] = xx [ 82 ] ; J [ 306 ]
= - ( xx [ 288 ] + ( xx [ 266 ] + xx [ 295 ] * xx [ 264 ] ) * xx [ 7 ] - xx [
70 ] ) ; J [ 307 ] = - ( ( xx [ 263 ] + xx [ 295 ] * xx [ 283 ] ) * xx [ 7 ]
+ xx [ 282 ] ) ; J [ 324 ] = xx [ 297 ] + xx [ 13 ] ; J [ 325 ] = xx [ 289 ]
+ xx [ 66 ] ; J [ 326 ] = xx [ 300 ] + xx [ 78 ] ; J [ 327 ] = xx [ 277 ] +
xx [ 36 ] ; J [ 328 ] = ( xx [ 91 ] * xx [ 16 ] + xx [ 94 ] * xx [ 18 ] ) *
xx [ 7 ] + xx [ 75 ] ; J [ 329 ] = ( xx [ 91 ] * xx [ 20 ] + xx [ 94 ] * xx [
21 ] ) * xx [ 7 ] + xx [ 87 ] ; J [ 330 ] = xx [ 7 ] * ( xx [ 303 ] + xx [ 91
] * xx [ 22 ] ) + xx [ 98 ] - xx [ 268 ] ; J [ 335 ] = - ( xx [ 7 ] * ( xx [
318 ] - xx [ 40 ] * xx [ 314 ] ) + xx [ 315 ] - xx [ 7 ] * ( xx [ 5 ] * xx [
48 ] + xx [ 8 ] * xx [ 42 ] ) ) ; J [ 336 ] = xx [ 82 ] ; J [ 337 ] = - ( xx
[ 321 ] - ( xx [ 324 ] * xx [ 53 ] + xx [ 327 ] * xx [ 63 ] ) * xx [ 7 ] ) ;
J [ 338 ] = - ( xx [ 7 ] * ( xx [ 326 ] * xx [ 63 ] - xx [ 324 ] * xx [ 285 ]
) + xx [ 328 ] ) ; J [ 351 ] = xx [ 298 ] + xx [ 83 ] + xx [ 0 ] ; J [ 352 ]
= xx [ 290 ] + xx [ 67 ] ; J [ 353 ] = xx [ 301 ] + xx [ 79 ] ; J [ 354 ] =
xx [ 278 ] + xx [ 37 ] ; J [ 355 ] = xx [ 7 ] * ( xx [ 94 ] * xx [ 16 ] - xx
[ 91 ] * xx [ 18 ] ) + xx [ 76 ] ; J [ 356 ] = xx [ 7 ] * ( xx [ 94 ] * xx [
20 ] - xx [ 91 ] * xx [ 21 ] ) + xx [ 88 ] ; J [ 357 ] = ( xx [ 304 ] - xx [
268 ] * xx [ 3 ] ) * xx [ 7 ] + xx [ 99 ] - xx [ 276 ] ; J [ 362 ] = - ( xx [
24 ] + ( xx [ 314 ] * xx [ 46 ] + xx [ 319 ] ) * xx [ 7 ] + xx [ 316 ] - ( xx
[ 8 ] * xx [ 1 ] + xx [ 43 ] * xx [ 5 ] ) * xx [ 7 ] + xx [ 0 ] ) ; J [ 363 ]
= xx [ 82 ] ; J [ 364 ] = - ( xx [ 7 ] * ( xx [ 14 ] - xx [ 327 ] * xx [ 53 ]
) + xx [ 322 ] ) ; J [ 365 ] = - ( xx [ 329 ] - ( xx [ 327 ] * xx [ 285 ] +
xx [ 23 ] ) * xx [ 7 ] + xx [ 70 ] ) ; J [ 378 ] = xx [ 299 ] + xx [ 29 ] ; J
[ 379 ] = xx [ 291 ] + xx [ 68 ] ; J [ 380 ] = xx [ 302 ] + xx [ 80 ] ; J [
381 ] = xx [ 279 ] + xx [ 38 ] ; J [ 382 ] = xx [ 77 ] - ( xx [ 92 ] * xx [
18 ] + xx [ 93 ] * xx [ 16 ] ) * xx [ 7 ] + xx [ 9 ] ; J [ 383 ] = xx [ 89 ]
- ( xx [ 92 ] * xx [ 21 ] + xx [ 93 ] * xx [ 20 ] ) * xx [ 7 ] + xx [ 19 ] ;
J [ 384 ] = ( xx [ 91 ] * xx [ 25 ] + xx [ 305 ] ) * xx [ 7 ] + xx [ 100 ] ;
J [ 389 ] = - ( ( xx [ 314 ] * xx [ 50 ] + xx [ 320 ] ) * xx [ 7 ] - xx [ 49
] + xx [ 317 ] + ( xx [ 8 ] * xx [ 48 ] - xx [ 5 ] * xx [ 42 ] ) * xx [ 7 ] )
; J [ 390 ] = xx [ 82 ] ; J [ 391 ] = - ( xx [ 323 ] + ( xx [ 23 ] + xx [ 326
] * xx [ 53 ] ) * xx [ 7 ] - xx [ 70 ] ) ; J [ 392 ] = - ( ( xx [ 14 ] + xx [
326 ] * xx [ 285 ] ) * xx [ 7 ] + xx [ 330 ] ) ; return 15 ; } static
boolean_T isInKinematicSingularity_0 ( const RuntimeDerivedValuesBundle *
rtdv , const int * modeVector , const double * motionData ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void )
motionData ; return 0 ; } static boolean_T isInKinematicSingularity_1 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static boolean_T
isInKinematicSingularity_2 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } static boolean_T isInKinematicSingularity_3 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static boolean_T
isInKinematicSingularity_4 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } boolean_T hp_v4_a1692be3_1_isInKinematicSingularity ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int
* modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ;
( void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { case 0
: return isInKinematicSingularity_0 ( rtdv , modeVector , motionData ) ; case
1 : return isInKinematicSingularity_1 ( rtdv , modeVector , motionData ) ;
case 2 : return isInKinematicSingularity_2 ( rtdv , modeVector , motionData )
; case 3 : return isInKinematicSingularity_3 ( rtdv , modeVector , motionData
) ; case 4 : return isInKinematicSingularity_4 ( rtdv , modeVector ,
motionData ) ; } return 0 ; } void hp_v4_a1692be3_1_convertStateVector (
const void * asmMech , const RuntimeDerivedValuesBundle * rtdv , const void *
simMech , const double * asmState , const int * asmModeVector , const int *
simModeVector , double * simState ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ;
( void ) simModeVector ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] =
asmState [ 1 ] ; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState
[ 3 ] ; simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ;
simState [ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState
[ 8 ] = asmState [ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] =
asmState [ 10 ] ; simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] =
asmState [ 12 ] ; simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] =
asmState [ 14 ] ; simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] =
asmState [ 16 ] ; simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] =
asmState [ 18 ] ; simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] =
asmState [ 20 ] ; simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] =
asmState [ 22 ] ; simState [ 23 ] = asmState [ 23 ] ; simState [ 24 ] =
asmState [ 24 ] ; simState [ 25 ] = asmState [ 25 ] ; simState [ 26 ] =
asmState [ 26 ] ; simState [ 27 ] = asmState [ 27 ] ; simState [ 28 ] =
asmState [ 28 ] ; simState [ 29 ] = asmState [ 29 ] ; simState [ 30 ] =
asmState [ 30 ] ; simState [ 31 ] = asmState [ 31 ] ; simState [ 32 ] =
asmState [ 32 ] ; simState [ 33 ] = asmState [ 33 ] ; simState [ 34 ] =
asmState [ 34 ] ; simState [ 35 ] = asmState [ 35 ] ; simState [ 36 ] =
asmState [ 36 ] ; simState [ 37 ] = asmState [ 37 ] ; simState [ 38 ] =
asmState [ 38 ] ; simState [ 39 ] = asmState [ 39 ] ; simState [ 40 ] =
asmState [ 40 ] ; simState [ 41 ] = asmState [ 41 ] ; simState [ 42 ] =
asmState [ 42 ] ; simState [ 43 ] = asmState [ 43 ] ; simState [ 44 ] =
asmState [ 44 ] ; simState [ 45 ] = asmState [ 45 ] ; simState [ 46 ] =
asmState [ 46 ] ; simState [ 47 ] = asmState [ 47 ] ; simState [ 48 ] =
asmState [ 48 ] ; simState [ 49 ] = asmState [ 49 ] ; simState [ 50 ] =
asmState [ 50 ] ; simState [ 51 ] = asmState [ 51 ] ; simState [ 52 ] =
asmState [ 52 ] ; simState [ 53 ] = asmState [ 53 ] ; simState [ 54 ] =
asmState [ 54 ] ; simState [ 55 ] = asmState [ 55 ] ; simState [ 56 ] =
asmState [ 56 ] ; simState [ 57 ] = asmState [ 57 ] ; simState [ 58 ] =
asmState [ 58 ] ; simState [ 59 ] = asmState [ 59 ] ; simState [ 60 ] =
asmState [ 60 ] ; }
