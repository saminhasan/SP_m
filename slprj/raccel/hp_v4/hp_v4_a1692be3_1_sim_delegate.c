#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "pm_default_allocator.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void hp_v4_a1692be3_1_resetSimStateVector ( const void * mech , double *
state ) { double xx [ 2 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 1.0 ;
state [ 0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 1 ] ;
state [ 3 ] = xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ;
state [ 6 ] = xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ;
state [ 9 ] = xx [ 1 ] ; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ;
state [ 12 ] = xx [ 0 ] ; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ;
state [ 15 ] = xx [ 0 ] ; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ;
state [ 18 ] = xx [ 1 ] ; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ;
state [ 21 ] = xx [ 0 ] ; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ;
state [ 24 ] = xx [ 0 ] ; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ;
state [ 27 ] = xx [ 1 ] ; state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ;
state [ 30 ] = xx [ 0 ] ; state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ;
state [ 33 ] = xx [ 0 ] ; state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ;
state [ 36 ] = xx [ 1 ] ; state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ;
state [ 39 ] = xx [ 0 ] ; state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ;
state [ 42 ] = xx [ 0 ] ; state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [ 0 ] ;
state [ 45 ] = xx [ 1 ] ; state [ 46 ] = xx [ 0 ] ; state [ 47 ] = xx [ 0 ] ;
state [ 48 ] = xx [ 0 ] ; state [ 49 ] = xx [ 0 ] ; state [ 50 ] = xx [ 0 ] ;
state [ 51 ] = xx [ 0 ] ; state [ 52 ] = xx [ 0 ] ; state [ 53 ] = xx [ 0 ] ;
state [ 54 ] = xx [ 1 ] ; state [ 55 ] = xx [ 0 ] ; state [ 56 ] = xx [ 0 ] ;
state [ 57 ] = xx [ 0 ] ; state [ 58 ] = xx [ 0 ] ; state [ 59 ] = xx [ 0 ] ;
state [ 60 ] = xx [ 0 ] ; } static void perturbSimJointPrimitiveState_0_0 (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; } static
void perturbSimJointPrimitiveState_0_0v ( double mag , double * state ) {
state [ 0 ] = state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_1_0 ( double mag , double * state )
{ double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx
[ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 2 ] ; xx [ 1 ] = state [ 3 ] ; xx [ 2 ] = state [ 4 ] ;
xx [ 3 ] = state [ 5 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 ,
xx + 4 ) ; state [ 2 ] = xx [ 4 ] ; state [ 3 ] = xx [ 5 ] ; state [ 4 ] = xx
[ 6 ] ; state [ 5 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_1_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 2 ] ; xx [ 4 ] = state [ 3 ] ; xx [ 5 ] = state [ 4 ] ; xx [ 6 ] =
state [ 5 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 2 ] = xx [ 7 ] ; state [ 3 ] = xx [ 8 ] ; state [ 4 ] = xx [ 9 ] ;
state [ 5 ] = xx [ 10 ] ; state [ 6 ] = state [ 6 ] + 1.2 * mag ; state [ 7 ]
= state [ 7 ] - xx [ 2 ] ; state [ 8 ] = state [ 8 ] + 0.9 * mag ; } static
void perturbSimJointPrimitiveState_2_0 ( double mag , double * state ) {
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
[ 0 ] = state [ 9 ] ; xx [ 1 ] = state [ 10 ] ; xx [ 2 ] = state [ 11 ] ; xx
[ 3 ] = state [ 12 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx
+ 4 ) ; state [ 9 ] = xx [ 4 ] ; state [ 10 ] = xx [ 5 ] ; state [ 11 ] = xx
[ 6 ] ; state [ 12 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_2_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 9 ] ; xx [ 4 ] = state [ 10 ] ; xx [ 5 ] = state [ 11 ] ; xx [ 6 ] =
state [ 12 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 9 ] = xx [ 7 ] ; state [ 10 ] = xx [ 8 ] ; state [ 11 ] = xx [ 9 ] ;
state [ 12 ] = xx [ 10 ] ; state [ 13 ] = state [ 13 ] + 1.2 * mag ; state [
14 ] = state [ 14 ] - xx [ 2 ] ; state [ 15 ] = state [ 15 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_3_0 ( double mag , double * state )
{ state [ 16 ] = state [ 16 ] + mag ; } static void
perturbSimJointPrimitiveState_3_0v ( double mag , double * state ) { state [
16 ] = state [ 16 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_4_0 ( double mag , double * state )
{ double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx
[ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 18 ] ; xx [ 1 ] = state [ 19 ] ; xx [ 2 ] = state [ 20 ]
; xx [ 3 ] = state [ 21 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 18 ] = xx [ 4 ] ; state [ 19 ] = xx [ 5 ] ; state [ 20 ]
= xx [ 6 ] ; state [ 21 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_4_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 18 ] ; xx [ 4 ] = state [ 19 ] ; xx [ 5 ] = state [ 20 ] ; xx [ 6 ] =
state [ 21 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 18 ] = xx [ 7 ] ; state [ 19 ] = xx [ 8 ] ; state [ 20 ] = xx [ 9 ] ;
state [ 21 ] = xx [ 10 ] ; state [ 22 ] = state [ 22 ] + 1.2 * mag ; state [
23 ] = state [ 23 ] - xx [ 2 ] ; state [ 24 ] = state [ 24 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_5_0 ( double mag , double * state )
{ state [ 25 ] = state [ 25 ] + mag ; } static void
perturbSimJointPrimitiveState_5_0v ( double mag , double * state ) { state [
25 ] = state [ 25 ] + mag ; state [ 26 ] = state [ 26 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_6_0 ( double mag , double * state )
{ double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx
[ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 27 ] ; xx [ 1 ] = state [ 28 ] ; xx [ 2 ] = state [ 29 ]
; xx [ 3 ] = state [ 30 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 27 ] = xx [ 4 ] ; state [ 28 ] = xx [ 5 ] ; state [ 29 ]
= xx [ 6 ] ; state [ 30 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_6_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 27 ] ; xx [ 4 ] = state [ 28 ] ; xx [ 5 ] = state [ 29 ] ; xx [ 6 ] =
state [ 30 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 27 ] = xx [ 7 ] ; state [ 28 ] = xx [ 8 ] ; state [ 29 ] = xx [ 9 ] ;
state [ 30 ] = xx [ 10 ] ; state [ 31 ] = state [ 31 ] + 1.2 * mag ; state [
32 ] = state [ 32 ] - xx [ 2 ] ; state [ 33 ] = state [ 33 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 34 ] = state [ 34 ] + mag ; } static void
perturbSimJointPrimitiveState_7_0v ( double mag , double * state ) { state [
34 ] = state [ 34 ] + mag ; state [ 35 ] = state [ 35 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_8_0 ( double mag , double * state )
{ double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx
[ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 36 ] ; xx [ 1 ] = state [ 37 ] ; xx [ 2 ] = state [ 38 ]
; xx [ 3 ] = state [ 39 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 36 ] = xx [ 4 ] ; state [ 37 ] = xx [ 5 ] ; state [ 38 ]
= xx [ 6 ] ; state [ 39 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_8_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 36 ] ; xx [ 4 ] = state [ 37 ] ; xx [ 5 ] = state [ 38 ] ; xx [ 6 ] =
state [ 39 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 36 ] = xx [ 7 ] ; state [ 37 ] = xx [ 8 ] ; state [ 38 ] = xx [ 9 ] ;
state [ 39 ] = xx [ 10 ] ; state [ 40 ] = state [ 40 ] + 1.2 * mag ; state [
41 ] = state [ 41 ] - xx [ 2 ] ; state [ 42 ] = state [ 42 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_9_0 ( double mag , double * state )
{ state [ 43 ] = state [ 43 ] + mag ; } static void
perturbSimJointPrimitiveState_9_0v ( double mag , double * state ) { state [
43 ] = state [ 43 ] + mag ; state [ 44 ] = state [ 44 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_0 ( double mag , double * state
) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] =
xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [
2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 45 ] ; xx [ 1 ] = state [ 46 ] ; xx [ 2 ] = state [ 47 ]
; xx [ 3 ] = state [ 48 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 45 ] = xx [ 4 ] ; state [ 46 ] = xx [ 5 ] ; state [ 47 ]
= xx [ 6 ] ; state [ 48 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_10_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 45 ] ; xx [ 4 ] = state [ 46 ] ; xx [ 5 ] = state [ 47 ] ; xx [ 6 ] =
state [ 48 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 45 ] = xx [ 7 ] ; state [ 46 ] = xx [ 8 ] ; state [ 47 ] = xx [ 9 ] ;
state [ 48 ] = xx [ 10 ] ; state [ 49 ] = state [ 49 ] + 1.2 * mag ; state [
50 ] = state [ 50 ] - xx [ 2 ] ; state [ 51 ] = state [ 51 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 52 ] = state [ 52 ] + mag ; } static void
perturbSimJointPrimitiveState_11_0v ( double mag , double * state ) { state [
52 ] = state [ 52 ] + mag ; state [ 53 ] = state [ 53 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_12_0 ( double mag , double * state
) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] =
xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [
2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 54 ] ; xx [ 1 ] = state [ 55 ] ; xx [ 2 ] = state [ 56 ]
; xx [ 3 ] = state [ 57 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 54 ] = xx [ 4 ] ; state [ 55 ] = xx [ 5 ] ; state [ 56 ]
= xx [ 6 ] ; state [ 57 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_12_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 54 ] ; xx [ 4 ] = state [ 55 ] ; xx [ 5 ] = state [ 56 ] ; xx [ 6 ] =
state [ 57 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 54 ] = xx [ 7 ] ; state [ 55 ] = xx [ 8 ] ; state [ 56 ] = xx [ 9 ] ;
state [ 57 ] = xx [ 10 ] ; state [ 58 ] = state [ 58 ] + 1.2 * mag ; state [
59 ] = state [ 59 ] - xx [ 2 ] ; state [ 60 ] = state [ 60 ] + 0.9 * mag ; }
void hp_v4_a1692be3_1_perturbSimJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbSimJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbSimJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbSimJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbSimJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbSimJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbSimJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbSimJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbSimJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbSimJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbSimJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbSimJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbSimJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbSimJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbSimJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbSimJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbSimJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbSimJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbSimJointPrimitiveState_8_0v ( mag , state ) ; break ; case 108 :
perturbSimJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbSimJointPrimitiveState_9_0v ( mag , state ) ; break ; case 120 :
perturbSimJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbSimJointPrimitiveState_10_0v ( mag , state ) ; break ; case 132 :
perturbSimJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbSimJointPrimitiveState_11_0v ( mag , state ) ; break ; case 144 :
perturbSimJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbSimJointPrimitiveState_12_0v ( mag , state ) ; break ; } } void
hp_v4_a1692be3_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double mag , boolean_T doPerturbVelocity , double * state ) { (
void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void ) doPerturbVelocity ;
( void ) state ; switch ( stageIdx * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { }
} void hp_v4_a1692be3_1_constructStateVector ( const void * mech , const
double * solverState , const double * u , const double * uDot , double *
discreteState , double * fullState ) { ( void ) mech ; ( void ) u ; ( void )
uDot ; ( void ) discreteState ; fullState [ 0 ] = solverState [ 0 ] ;
fullState [ 1 ] = solverState [ 1 ] ; fullState [ 2 ] = solverState [ 2 ] ;
fullState [ 3 ] = solverState [ 3 ] ; fullState [ 4 ] = solverState [ 4 ] ;
fullState [ 5 ] = solverState [ 5 ] ; fullState [ 6 ] = solverState [ 6 ] ;
fullState [ 7 ] = solverState [ 7 ] ; fullState [ 8 ] = solverState [ 8 ] ;
fullState [ 9 ] = solverState [ 9 ] ; fullState [ 10 ] = solverState [ 10 ] ;
fullState [ 11 ] = solverState [ 11 ] ; fullState [ 12 ] = solverState [ 12 ]
; fullState [ 13 ] = solverState [ 13 ] ; fullState [ 14 ] = solverState [ 14
] ; fullState [ 15 ] = solverState [ 15 ] ; fullState [ 16 ] = solverState [
16 ] ; fullState [ 17 ] = solverState [ 17 ] ; fullState [ 18 ] = solverState
[ 18 ] ; fullState [ 19 ] = solverState [ 19 ] ; fullState [ 20 ] =
solverState [ 20 ] ; fullState [ 21 ] = solverState [ 21 ] ; fullState [ 22 ]
= solverState [ 22 ] ; fullState [ 23 ] = solverState [ 23 ] ; fullState [ 24
] = solverState [ 24 ] ; fullState [ 25 ] = solverState [ 25 ] ; fullState [
26 ] = solverState [ 26 ] ; fullState [ 27 ] = solverState [ 27 ] ; fullState
[ 28 ] = solverState [ 28 ] ; fullState [ 29 ] = solverState [ 29 ] ;
fullState [ 30 ] = solverState [ 30 ] ; fullState [ 31 ] = solverState [ 31 ]
; fullState [ 32 ] = solverState [ 32 ] ; fullState [ 33 ] = solverState [ 33
] ; fullState [ 34 ] = solverState [ 34 ] ; fullState [ 35 ] = solverState [
35 ] ; fullState [ 36 ] = solverState [ 36 ] ; fullState [ 37 ] = solverState
[ 37 ] ; fullState [ 38 ] = solverState [ 38 ] ; fullState [ 39 ] =
solverState [ 39 ] ; fullState [ 40 ] = solverState [ 40 ] ; fullState [ 41 ]
= solverState [ 41 ] ; fullState [ 42 ] = solverState [ 42 ] ; fullState [ 43
] = solverState [ 43 ] ; fullState [ 44 ] = solverState [ 44 ] ; fullState [
45 ] = solverState [ 45 ] ; fullState [ 46 ] = solverState [ 46 ] ; fullState
[ 47 ] = solverState [ 47 ] ; fullState [ 48 ] = solverState [ 48 ] ;
fullState [ 49 ] = solverState [ 49 ] ; fullState [ 50 ] = solverState [ 50 ]
; fullState [ 51 ] = solverState [ 51 ] ; fullState [ 52 ] = solverState [ 52
] ; fullState [ 53 ] = solverState [ 53 ] ; fullState [ 54 ] = solverState [
54 ] ; fullState [ 55 ] = solverState [ 55 ] ; fullState [ 56 ] = solverState
[ 56 ] ; fullState [ 57 ] = solverState [ 57 ] ; fullState [ 58 ] =
solverState [ 58 ] ; fullState [ 59 ] = solverState [ 59 ] ; fullState [ 60 ]
= solverState [ 60 ] ; } void hp_v4_a1692be3_1_extractSolverStateVector (
const void * mech , const double * fullState , double * solverState ) { (
void ) mech ; solverState [ 0 ] = fullState [ 0 ] ; solverState [ 1 ] =
fullState [ 1 ] ; solverState [ 2 ] = fullState [ 2 ] ; solverState [ 3 ] =
fullState [ 3 ] ; solverState [ 4 ] = fullState [ 4 ] ; solverState [ 5 ] =
fullState [ 5 ] ; solverState [ 6 ] = fullState [ 6 ] ; solverState [ 7 ] =
fullState [ 7 ] ; solverState [ 8 ] = fullState [ 8 ] ; solverState [ 9 ] =
fullState [ 9 ] ; solverState [ 10 ] = fullState [ 10 ] ; solverState [ 11 ]
= fullState [ 11 ] ; solverState [ 12 ] = fullState [ 12 ] ; solverState [ 13
] = fullState [ 13 ] ; solverState [ 14 ] = fullState [ 14 ] ; solverState [
15 ] = fullState [ 15 ] ; solverState [ 16 ] = fullState [ 16 ] ; solverState
[ 17 ] = fullState [ 17 ] ; solverState [ 18 ] = fullState [ 18 ] ;
solverState [ 19 ] = fullState [ 19 ] ; solverState [ 20 ] = fullState [ 20 ]
; solverState [ 21 ] = fullState [ 21 ] ; solverState [ 22 ] = fullState [ 22
] ; solverState [ 23 ] = fullState [ 23 ] ; solverState [ 24 ] = fullState [
24 ] ; solverState [ 25 ] = fullState [ 25 ] ; solverState [ 26 ] = fullState
[ 26 ] ; solverState [ 27 ] = fullState [ 27 ] ; solverState [ 28 ] =
fullState [ 28 ] ; solverState [ 29 ] = fullState [ 29 ] ; solverState [ 30 ]
= fullState [ 30 ] ; solverState [ 31 ] = fullState [ 31 ] ; solverState [ 32
] = fullState [ 32 ] ; solverState [ 33 ] = fullState [ 33 ] ; solverState [
34 ] = fullState [ 34 ] ; solverState [ 35 ] = fullState [ 35 ] ; solverState
[ 36 ] = fullState [ 36 ] ; solverState [ 37 ] = fullState [ 37 ] ;
solverState [ 38 ] = fullState [ 38 ] ; solverState [ 39 ] = fullState [ 39 ]
; solverState [ 40 ] = fullState [ 40 ] ; solverState [ 41 ] = fullState [ 41
] ; solverState [ 42 ] = fullState [ 42 ] ; solverState [ 43 ] = fullState [
43 ] ; solverState [ 44 ] = fullState [ 44 ] ; solverState [ 45 ] = fullState
[ 45 ] ; solverState [ 46 ] = fullState [ 46 ] ; solverState [ 47 ] =
fullState [ 47 ] ; solverState [ 48 ] = fullState [ 48 ] ; solverState [ 49 ]
= fullState [ 49 ] ; solverState [ 50 ] = fullState [ 50 ] ; solverState [ 51
] = fullState [ 51 ] ; solverState [ 52 ] = fullState [ 52 ] ; solverState [
53 ] = fullState [ 53 ] ; solverState [ 54 ] = fullState [ 54 ] ; solverState
[ 55 ] = fullState [ 55 ] ; solverState [ 56 ] = fullState [ 56 ] ;
solverState [ 57 ] = fullState [ 57 ] ; solverState [ 58 ] = fullState [ 58 ]
; solverState [ 59 ] = fullState [ 59 ] ; solverState [ 60 ] = fullState [ 60
] ; } void hp_v4_a1692be3_1_extractDiscreteStateVector ( const void * mech ,
const double * fullState , double * discreteState ) { ( void ) mech ; ( void
) fullState ; ( void ) discreteState ; } boolean_T
hp_v4_a1692be3_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii [ 1 ] ;
double xx [ 155 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) modeVector ; xx [ 0 ] = 2.0 ; xx [ 1 ] =
0.5004402260104069 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 0 ] ; xx
[ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] = xx [ 1 ] * xx [ 4 ] ; xx [ 6 ] =
1.016807521344378e-3 ; xx [ 7 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 6 ] * xx
[ 7 ] ; xx [ 8 ] = 0.8657710899485228 ; xx [ 9 ] = 0.9999994830510986 ; xx [
10 ] = xx [ 9 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 1 ] * xx [ 3 ] + xx [ 8 ] * xx [
10 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 8 ] * xx [ 3 ] - xx
[ 1 ] * xx [ 10 ] ; xx [ 12 ] = - xx [ 5 ] ; xx [ 13 ] = xx [ 7 ] ; xx [ 14 ]
= xx [ 11 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 1 ] = 5.084038263768928e-4 ; xx [ 3
] = 0.9999998707627665 ; xx [ 8 ] = xx [ 1 ] * state [ 4 ] + xx [ 3 ] * state
[ 2 ] ; xx [ 10 ] = xx [ 1 ] * state [ 5 ] - xx [ 3 ] * state [ 3 ] ; xx [ 16
] = xx [ 1 ] * state [ 2 ] - xx [ 3 ] * state [ 4 ] ; xx [ 17 ] = xx [ 1 ] *
state [ 3 ] + xx [ 3 ] * state [ 5 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = -
xx [ 10 ] ; xx [ 20 ] = - xx [ 16 ] ; xx [ 21 ] = xx [ 17 ] ;
pm_math_Quaternion_compose_ra ( xx + 12 , xx + 18 , xx + 22 ) ; xx [ 18 ] =
0.1395577324697271 ; xx [ 19 ] = 0.9902139361309295 ; xx [ 20 ] = xx [ 18 ] *
state [ 12 ] - xx [ 19 ] * state [ 9 ] ; xx [ 21 ] = xx [ 18 ] * state [ 11 ]
+ xx [ 19 ] * state [ 10 ] ; xx [ 26 ] = - xx [ 21 ] ; xx [ 27 ] = xx [ 19 ]
* state [ 11 ] - xx [ 18 ] * state [ 10 ] ; xx [ 28 ] = - xx [ 27 ] ; xx [ 29
] = xx [ 18 ] * state [ 9 ] + xx [ 19 ] * state [ 12 ] ; xx [ 18 ] = - xx [
29 ] ; xx [ 30 ] = xx [ 20 ] ; xx [ 31 ] = xx [ 26 ] ; xx [ 32 ] = xx [ 28 ]
; xx [ 33 ] = xx [ 18 ] ; pm_math_Quaternion_compose_ra ( xx + 22 , xx + 30 ,
xx + 34 ) ; xx [ 19 ] = 5.68852606864536e-4 ; xx [ 30 ] = xx [ 19 ] * xx [ 37
] ; xx [ 31 ] = 0.07434110703613682 ; xx [ 32 ] = xx [ 19 ] * xx [ 35 ] + xx
[ 31 ] * xx [ 36 ] ; xx [ 38 ] = - xx [ 30 ] ; xx [ 39 ] = - ( xx [ 31 ] * xx
[ 37 ] ) ; xx [ 40 ] = xx [ 32 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx +
38 , xx + 41 ) ; xx [ 38 ] = xx [ 26 ] ; xx [ 39 ] = xx [ 28 ] ; xx [ 40 ] =
xx [ 18 ] ; xx [ 18 ] = 0.03530169195229536 ; xx [ 26 ] = xx [ 18 ] * xx [ 29
] ; xx [ 28 ] = 0.0654271681639358 ; xx [ 33 ] = xx [ 28 ] * xx [ 29 ] ; xx [
29 ] = xx [ 18 ] * xx [ 21 ] - xx [ 27 ] * xx [ 28 ] ; xx [ 44 ] = - xx [ 26
] ; xx [ 45 ] = xx [ 33 ] ; xx [ 46 ] = xx [ 29 ] ; pm_math_Vector3_cross_ra
( xx + 38 , xx + 44 , xx + 47 ) ; xx [ 38 ] = xx [ 0 ] * ( xx [ 47 ] - xx [
26 ] * xx [ 20 ] ) + 0.07457283183606418 ; xx [ 39 ] = ( xx [ 33 ] * xx [ 20
] + xx [ 48 ] ) * xx [ 0 ] - xx [ 18 ] ; xx [ 40 ] = ( xx [ 29 ] * xx [ 20 ]
+ xx [ 49 ] ) * xx [ 0 ] ; pm_math_Quaternion_xform_ra ( xx + 22 , xx + 38 ,
xx + 26 ) ; xx [ 18 ] = 0.2199463818469452 ; xx [ 20 ] = 0.14 ; xx [ 21 ] =
xx [ 16 ] * xx [ 20 ] ; xx [ 22 ] = xx [ 20 ] * xx [ 17 ] ; xx [ 23 ] =
0.04006839315796021 ; xx [ 38 ] = xx [ 18 ] - ( xx [ 16 ] * xx [ 21 ] + xx [
22 ] * xx [ 17 ] ) * xx [ 0 ] ; xx [ 39 ] = ( xx [ 22 ] * xx [ 8 ] + xx [ 10
] * xx [ 21 ] ) * xx [ 0 ] ; xx [ 40 ] = xx [ 23 ] + xx [ 0 ] * ( xx [ 21 ] *
xx [ 8 ] - xx [ 10 ] * xx [ 22 ] ) ; pm_math_Quaternion_xform_ra ( xx + 12 ,
xx + 38 , xx + 44 ) ; xx [ 12 ] = xx [ 7 ] ; xx [ 13 ] = xx [ 11 ] ; xx [ 14
] = xx [ 4 ] ; xx [ 8 ] = 0.03998704855625266 ; xx [ 10 ] = xx [ 8 ] * xx [
11 ] ; xx [ 15 ] = 5.357679714268354e-5 ; xx [ 16 ] = xx [ 15 ] * xx [ 4 ] +
xx [ 7 ] * xx [ 8 ] ; xx [ 4 ] = xx [ 15 ] * xx [ 11 ] ; xx [ 38 ] = xx [ 10
] ; xx [ 39 ] = - xx [ 16 ] ; xx [ 40 ] = xx [ 4 ] ; pm_math_Vector3_cross_ra
( xx + 12 , xx + 38 , xx + 47 ) ; xx [ 7 ] = xx [ 26 ] + xx [ 44 ] - ( xx [
47 ] - xx [ 10 ] * xx [ 5 ] ) * xx [ 0 ] + 0.07304395785390926 ; xx [ 10 ] =
xx [ 2 ] * state [ 34 ] ; xx [ 11 ] = cos ( xx [ 10 ] ) ; xx [ 12 ] = xx [ 1
] * xx [ 11 ] ; xx [ 13 ] = sin ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 6 ] * xx [
13 ] ; xx [ 14 ] = xx [ 9 ] * xx [ 13 ] ; xx [ 13 ] = xx [ 1 ] * xx [ 10 ] +
xx [ 3 ] * xx [ 14 ] ; xx [ 17 ] = - xx [ 13 ] ; xx [ 21 ] = xx [ 3 ] * xx [
11 ] ; xx [ 11 ] = - xx [ 21 ] ; xx [ 22 ] = xx [ 3 ] * xx [ 10 ] - xx [ 1 ]
* xx [ 14 ] ; xx [ 50 ] = - xx [ 12 ] ; xx [ 51 ] = xx [ 17 ] ; xx [ 52 ] =
xx [ 11 ] ; xx [ 53 ] = xx [ 22 ] ; xx [ 10 ] = xx [ 3 ] * state [ 38 ] + xx
[ 1 ] * state [ 36 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 20 ] ; xx [ 24 ] = xx [ 3
] * state [ 39 ] - xx [ 1 ] * state [ 37 ] ; xx [ 25 ] = xx [ 20 ] * xx [ 24
] ; xx [ 29 ] = xx [ 3 ] * state [ 36 ] - xx [ 1 ] * state [ 38 ] ; xx [ 33 ]
= xx [ 3 ] * state [ 37 ] + xx [ 1 ] * state [ 39 ] ; xx [ 38 ] = xx [ 18 ] -
( xx [ 10 ] * xx [ 14 ] + xx [ 25 ] * xx [ 24 ] ) * xx [ 0 ] ; xx [ 39 ] = (
xx [ 25 ] * xx [ 29 ] + xx [ 33 ] * xx [ 14 ] ) * xx [ 0 ] ; xx [ 40 ] = xx [
0 ] * ( xx [ 33 ] * xx [ 25 ] - xx [ 14 ] * xx [ 29 ] ) - xx [ 23 ] ;
pm_math_Quaternion_xform_ra ( xx + 50 , xx + 38 , xx + 54 ) ; xx [ 38 ] = xx
[ 17 ] ; xx [ 39 ] = xx [ 11 ] ; xx [ 40 ] = xx [ 22 ] ; xx [ 11 ] = xx [ 8 ]
* xx [ 21 ] ; xx [ 14 ] = xx [ 15 ] * xx [ 22 ] + xx [ 13 ] * xx [ 8 ] ; xx [
13 ] = xx [ 15 ] * xx [ 21 ] ; xx [ 57 ] = xx [ 11 ] ; xx [ 58 ] = - xx [ 14
] ; xx [ 59 ] = - xx [ 13 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx + 57 ,
xx + 60 ) ; xx [ 63 ] = xx [ 29 ] ; xx [ 64 ] = xx [ 33 ] ; xx [ 65 ] = xx [
10 ] ; xx [ 66 ] = xx [ 24 ] ; pm_math_Quaternion_compose_ra ( xx + 50 , xx +
63 , xx + 67 ) ; xx [ 10 ] = xx [ 20 ] * xx [ 69 ] ; xx [ 17 ] = xx [ 20 ] *
xx [ 70 ] ; xx [ 21 ] = xx [ 34 ] * xx [ 37 ] ; xx [ 22 ] = xx [ 27 ] + xx [
45 ] - ( xx [ 5 ] * xx [ 16 ] + xx [ 48 ] ) * xx [ 0 ] ; xx [ 16 ] = xx [ 28
] + xx [ 46 ] - xx [ 0 ] * ( xx [ 49 ] - xx [ 4 ] * xx [ 5 ] ) +
0.03679498374650248 ; xx [ 4 ] = 0.07431243570379253 ; xx [ 5 ] = xx [ 4 ] *
xx [ 37 ] ; xx [ 24 ] = 2.141422054707503e-3 ; xx [ 25 ] = xx [ 24 ] * xx [
36 ] - xx [ 4 ] * xx [ 35 ] ; xx [ 26 ] = xx [ 5 ] ; xx [ 27 ] = - ( xx [ 24
] * xx [ 37 ] ) ; xx [ 28 ] = xx [ 25 ] ; pm_math_Vector3_cross_ra ( xx + 35
, xx + 26 , xx + 38 ) ; xx [ 26 ] = 0.4995596447523598 ; xx [ 27 ] = xx [ 2 ]
* state [ 43 ] ; xx [ 28 ] = cos ( xx [ 27 ] ) ; xx [ 29 ] = xx [ 26 ] * xx [
28 ] ; xx [ 33 ] = sin ( xx [ 27 ] ) ; xx [ 27 ] = xx [ 6 ] * xx [ 33 ] ; xx
[ 44 ] = 0.8662794937748998 ; xx [ 45 ] = xx [ 9 ] * xx [ 33 ] ; xx [ 33 ] =
xx [ 26 ] * xx [ 27 ] - xx [ 44 ] * xx [ 45 ] ; xx [ 46 ] = xx [ 44 ] * xx [
28 ] ; xx [ 28 ] = - xx [ 46 ] ; xx [ 47 ] = xx [ 26 ] * xx [ 45 ] + xx [ 44
] * xx [ 27 ] ; xx [ 26 ] = - xx [ 47 ] ; xx [ 48 ] = - xx [ 29 ] ; xx [ 49 ]
= xx [ 33 ] ; xx [ 50 ] = xx [ 28 ] ; xx [ 51 ] = xx [ 26 ] ; xx [ 27 ] = xx
[ 1 ] * state [ 45 ] - xx [ 3 ] * state [ 47 ] ; xx [ 44 ] = xx [ 27 ] * xx [
20 ] ; xx [ 45 ] = xx [ 1 ] * state [ 46 ] + xx [ 3 ] * state [ 48 ] ; xx [
52 ] = xx [ 20 ] * xx [ 45 ] ; xx [ 53 ] = xx [ 1 ] * state [ 47 ] + xx [ 3 ]
* state [ 45 ] ; xx [ 57 ] = xx [ 1 ] * state [ 48 ] - xx [ 3 ] * state [ 46
] ; xx [ 63 ] = xx [ 18 ] - ( xx [ 27 ] * xx [ 44 ] + xx [ 52 ] * xx [ 45 ] )
* xx [ 0 ] ; xx [ 64 ] = ( xx [ 52 ] * xx [ 53 ] + xx [ 57 ] * xx [ 44 ] ) *
xx [ 0 ] ; xx [ 65 ] = xx [ 23 ] + xx [ 0 ] * ( xx [ 44 ] * xx [ 53 ] - xx [
57 ] * xx [ 52 ] ) ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 63 , xx +
71 ) ; xx [ 44 ] = xx [ 8 ] * xx [ 46 ] ; xx [ 63 ] = xx [ 33 ] ; xx [ 64 ] =
xx [ 28 ] ; xx [ 65 ] = xx [ 26 ] ; xx [ 26 ] = xx [ 15 ] * xx [ 47 ] - xx [
33 ] * xx [ 8 ] ; xx [ 28 ] = xx [ 15 ] * xx [ 46 ] ; xx [ 74 ] = - xx [ 44 ]
; xx [ 75 ] = xx [ 26 ] ; xx [ 76 ] = - xx [ 28 ] ; pm_math_Vector3_cross_ra
( xx + 63 , xx + 74 , xx + 77 ) ; xx [ 63 ] = xx [ 53 ] ; xx [ 64 ] = - xx [
57 ] ; xx [ 65 ] = - xx [ 27 ] ; xx [ 66 ] = xx [ 45 ] ;
pm_math_Quaternion_compose_ra ( xx + 48 , xx + 63 , xx + 80 ) ; xx [ 27 ] =
xx [ 20 ] * xx [ 82 ] ; xx [ 33 ] = xx [ 20 ] * xx [ 83 ] ; xx [ 45 ] =
0.03667791270951477 ; xx [ 46 ] = 0.06466571354218477 ; xx [ 47 ] = xx [ 46 ]
* xx [ 37 ] ; xx [ 48 ] = xx [ 46 ] * xx [ 35 ] + xx [ 45 ] * xx [ 36 ] ; xx
[ 49 ] = xx [ 47 ] ; xx [ 50 ] = xx [ 45 ] * xx [ 37 ] ; xx [ 51 ] = - xx [
48 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx + 49 , xx + 57 ) ; xx [ 49 ] =
0.8657710899485229 ; xx [ 50 ] = xx [ 2 ] * state [ 52 ] ; xx [ 51 ] = cos (
xx [ 50 ] ) ; xx [ 52 ] = xx [ 49 ] * xx [ 51 ] ; xx [ 53 ] = sin ( xx [ 50 ]
) ; xx [ 50 ] = xx [ 6 ] * xx [ 53 ] ; xx [ 63 ] = 0.5004402260104068 ; xx [
64 ] = xx [ 9 ] * xx [ 53 ] ; xx [ 53 ] = xx [ 49 ] * xx [ 50 ] - xx [ 63 ] *
xx [ 64 ] ; xx [ 65 ] = xx [ 63 ] * xx [ 51 ] ; xx [ 51 ] = - xx [ 65 ] ; xx
[ 66 ] = xx [ 49 ] * xx [ 64 ] + xx [ 63 ] * xx [ 50 ] ; xx [ 84 ] = xx [ 52
] ; xx [ 85 ] = xx [ 53 ] ; xx [ 86 ] = xx [ 51 ] ; xx [ 87 ] = xx [ 66 ] ;
xx [ 49 ] = xx [ 3 ] * state [ 56 ] + xx [ 1 ] * state [ 54 ] ; xx [ 50 ] =
xx [ 49 ] * xx [ 20 ] ; xx [ 63 ] = xx [ 3 ] * state [ 57 ] - xx [ 1 ] *
state [ 55 ] ; xx [ 64 ] = xx [ 20 ] * xx [ 63 ] ; xx [ 74 ] = xx [ 3 ] *
state [ 54 ] - xx [ 1 ] * state [ 56 ] ; xx [ 75 ] = xx [ 3 ] * state [ 55 ]
+ xx [ 1 ] * state [ 57 ] ; xx [ 88 ] = xx [ 18 ] - ( xx [ 49 ] * xx [ 50 ] +
xx [ 64 ] * xx [ 63 ] ) * xx [ 0 ] ; xx [ 89 ] = ( xx [ 64 ] * xx [ 74 ] + xx
[ 75 ] * xx [ 50 ] ) * xx [ 0 ] ; xx [ 90 ] = xx [ 0 ] * ( xx [ 75 ] * xx [
64 ] - xx [ 50 ] * xx [ 74 ] ) - xx [ 23 ] ; pm_math_Quaternion_xform_ra ( xx
+ 84 , xx + 88 , xx + 91 ) ; xx [ 50 ] = xx [ 8 ] * xx [ 65 ] ; xx [ 88 ] =
xx [ 53 ] ; xx [ 89 ] = xx [ 51 ] ; xx [ 90 ] = xx [ 66 ] ; xx [ 51 ] = xx [
53 ] * xx [ 8 ] - xx [ 15 ] * xx [ 66 ] ; xx [ 53 ] = xx [ 15 ] * xx [ 65 ] ;
xx [ 64 ] = xx [ 50 ] ; xx [ 65 ] = xx [ 51 ] ; xx [ 66 ] = - xx [ 53 ] ;
pm_math_Vector3_cross_ra ( xx + 88 , xx + 64 , xx + 94 ) ; xx [ 97 ] = xx [
74 ] ; xx [ 98 ] = xx [ 75 ] ; xx [ 99 ] = xx [ 49 ] ; xx [ 100 ] = xx [ 63 ]
; pm_math_Quaternion_compose_ra ( xx + 84 , xx + 97 , xx + 63 ) ; xx [ 49 ] =
xx [ 20 ] * xx [ 65 ] ; xx [ 74 ] = xx [ 20 ] * xx [ 66 ] ; xx [ 75 ] =
0.03766319432662211 ; xx [ 76 ] = 0.0640968609353203 ; xx [ 84 ] = xx [ 76 ]
* xx [ 37 ] ; xx [ 85 ] = xx [ 76 ] * xx [ 35 ] - xx [ 75 ] * xx [ 36 ] ; xx
[ 86 ] = - xx [ 84 ] ; xx [ 87 ] = xx [ 75 ] * xx [ 37 ] ; xx [ 88 ] = xx [
85 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx + 86 , xx + 97 ) ; xx [ 86 ] =
0.8662794937748999 ; xx [ 87 ] = xx [ 2 ] * state [ 16 ] ; xx [ 88 ] = cos (
xx [ 87 ] ) ; xx [ 89 ] = xx [ 86 ] * xx [ 88 ] ; xx [ 90 ] = sin ( xx [ 87 ]
) ; xx [ 87 ] = xx [ 6 ] * xx [ 90 ] ; xx [ 100 ] = 0.4995596447523596 ; xx [
101 ] = xx [ 9 ] * xx [ 90 ] ; xx [ 90 ] = xx [ 86 ] * xx [ 87 ] + xx [ 100 ]
* xx [ 101 ] ; xx [ 102 ] = - xx [ 90 ] ; xx [ 103 ] = xx [ 100 ] * xx [ 88 ]
; xx [ 88 ] = - xx [ 103 ] ; xx [ 104 ] = xx [ 100 ] * xx [ 87 ] - xx [ 86 ]
* xx [ 101 ] ; xx [ 105 ] = - xx [ 89 ] ; xx [ 106 ] = xx [ 102 ] ; xx [ 107
] = xx [ 88 ] ; xx [ 108 ] = xx [ 104 ] ; xx [ 86 ] = xx [ 3 ] * state [ 20 ]
+ xx [ 1 ] * state [ 18 ] ; xx [ 87 ] = xx [ 86 ] * xx [ 20 ] ; xx [ 100 ] =
xx [ 3 ] * state [ 21 ] - xx [ 1 ] * state [ 19 ] ; xx [ 101 ] = xx [ 20 ] *
xx [ 100 ] ; xx [ 109 ] = xx [ 3 ] * state [ 18 ] - xx [ 1 ] * state [ 20 ] ;
xx [ 110 ] = xx [ 3 ] * state [ 19 ] + xx [ 1 ] * state [ 21 ] ; xx [ 111 ] =
xx [ 18 ] - ( xx [ 86 ] * xx [ 87 ] + xx [ 101 ] * xx [ 100 ] ) * xx [ 0 ] ;
xx [ 112 ] = ( xx [ 101 ] * xx [ 109 ] + xx [ 110 ] * xx [ 87 ] ) * xx [ 0 ]
; xx [ 113 ] = xx [ 0 ] * ( xx [ 110 ] * xx [ 101 ] - xx [ 87 ] * xx [ 109 ]
) - xx [ 23 ] ; pm_math_Quaternion_xform_ra ( xx + 105 , xx + 111 , xx + 114
) ; xx [ 111 ] = xx [ 102 ] ; xx [ 112 ] = xx [ 88 ] ; xx [ 113 ] = xx [ 104
] ; xx [ 87 ] = xx [ 8 ] * xx [ 103 ] ; xx [ 88 ] = xx [ 15 ] * xx [ 104 ] +
xx [ 90 ] * xx [ 8 ] ; xx [ 90 ] = xx [ 15 ] * xx [ 103 ] ; xx [ 101 ] = xx [
87 ] ; xx [ 102 ] = - xx [ 88 ] ; xx [ 103 ] = - xx [ 90 ] ;
pm_math_Vector3_cross_ra ( xx + 111 , xx + 101 , xx + 117 ) ; xx [ 101 ] = xx
[ 109 ] ; xx [ 102 ] = xx [ 110 ] ; xx [ 103 ] = xx [ 86 ] ; xx [ 104 ] = xx
[ 100 ] ; pm_math_Quaternion_compose_ra ( xx + 105 , xx + 101 , xx + 109 ) ;
xx [ 86 ] = xx [ 20 ] * xx [ 111 ] ; xx [ 100 ] = xx [ 20 ] * xx [ 112 ] ; xx
[ 101 ] = 0.03901074375149718 ; xx [ 102 ] = xx [ 101 ] * xx [ 37 ] ; xx [
103 ] = 0.06328574610922835 ; xx [ 104 ] = xx [ 101 ] * xx [ 35 ] + xx [ 103
] * xx [ 36 ] ; xx [ 105 ] = - xx [ 102 ] ; xx [ 106 ] = - ( xx [ 103 ] * xx
[ 37 ] ) ; xx [ 107 ] = xx [ 104 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx
+ 105 , xx + 120 ) ; xx [ 35 ] = xx [ 2 ] * state [ 25 ] ; xx [ 2 ] = cos (
xx [ 35 ] ) ; xx [ 36 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 37 ] = sin ( xx [ 35 ] )
; xx [ 35 ] = xx [ 6 ] * xx [ 37 ] ; xx [ 6 ] = xx [ 9 ] * xx [ 37 ] ; xx [ 9
] = xx [ 3 ] * xx [ 35 ] - xx [ 1 ] * xx [ 6 ] ; xx [ 37 ] = xx [ 1 ] * xx [
2 ] ; xx [ 2 ] = - xx [ 37 ] ; xx [ 105 ] = xx [ 3 ] * xx [ 6 ] + xx [ 1 ] *
xx [ 35 ] ; xx [ 6 ] = - xx [ 105 ] ; xx [ 123 ] = - xx [ 36 ] ; xx [ 124 ] =
xx [ 9 ] ; xx [ 125 ] = xx [ 2 ] ; xx [ 126 ] = xx [ 6 ] ; xx [ 35 ] = xx [ 1
] * state [ 27 ] - xx [ 3 ] * state [ 29 ] ; xx [ 106 ] = xx [ 35 ] * xx [ 20
] ; xx [ 107 ] = xx [ 1 ] * state [ 28 ] + xx [ 3 ] * state [ 30 ] ; xx [ 108
] = xx [ 20 ] * xx [ 107 ] ; xx [ 113 ] = xx [ 1 ] * state [ 29 ] + xx [ 3 ]
* state [ 27 ] ; xx [ 127 ] = xx [ 1 ] * state [ 30 ] - xx [ 3 ] * state [ 28
] ; xx [ 128 ] = xx [ 18 ] - ( xx [ 35 ] * xx [ 106 ] + xx [ 108 ] * xx [ 107
] ) * xx [ 0 ] ; xx [ 129 ] = ( xx [ 108 ] * xx [ 113 ] + xx [ 127 ] * xx [
106 ] ) * xx [ 0 ] ; xx [ 130 ] = xx [ 23 ] + xx [ 0 ] * ( xx [ 106 ] * xx [
113 ] - xx [ 127 ] * xx [ 108 ] ) ; pm_math_Quaternion_xform_ra ( xx + 123 ,
xx + 128 , xx + 131 ) ; xx [ 1 ] = xx [ 8 ] * xx [ 37 ] ; xx [ 128 ] = xx [ 9
] ; xx [ 129 ] = xx [ 2 ] ; xx [ 130 ] = xx [ 6 ] ; xx [ 2 ] = xx [ 15 ] * xx
[ 105 ] - xx [ 9 ] * xx [ 8 ] ; xx [ 3 ] = xx [ 15 ] * xx [ 37 ] ; xx [ 134 ]
= - xx [ 1 ] ; xx [ 135 ] = xx [ 2 ] ; xx [ 136 ] = - xx [ 3 ] ;
pm_math_Vector3_cross_ra ( xx + 128 , xx + 134 , xx + 137 ) ; xx [ 140 ] = xx
[ 113 ] ; xx [ 141 ] = - xx [ 127 ] ; xx [ 142 ] = - xx [ 35 ] ; xx [ 143 ] =
xx [ 107 ] ; pm_math_Quaternion_compose_ra ( xx + 123 , xx + 140 , xx + 105 )
; xx [ 6 ] = xx [ 20 ] * xx [ 107 ] ; xx [ 8 ] = xx [ 20 ] * xx [ 108 ] ; xx
[ 140 ] = fabs ( xx [ 0 ] * ( xx [ 41 ] - xx [ 34 ] * xx [ 30 ] ) - xx [ 31 ]
+ xx [ 7 ] - ( xx [ 54 ] - ( xx [ 60 ] - xx [ 12 ] * xx [ 11 ] ) * xx [ 0 ] -
( xx [ 69 ] * xx [ 10 ] + xx [ 70 ] * xx [ 17 ] ) * xx [ 0 ] ) -
0.1100535767971427 ) ; xx [ 141 ] = fabs ( xx [ 19 ] + ( xx [ 42 ] - xx [ 31
] * xx [ 21 ] ) * xx [ 0 ] + xx [ 22 ] - ( ( xx [ 67 ] * xx [ 17 ] + xx [ 68
] * xx [ 10 ] ) * xx [ 0 ] + xx [ 55 ] - ( xx [ 12 ] * xx [ 14 ] + xx [ 61 ]
) * xx [ 0 ] ) ) ; xx [ 142 ] = fabs ( ( xx [ 34 ] * xx [ 32 ] + xx [ 43 ] )
* xx [ 0 ] + xx [ 16 ] - ( xx [ 0 ] * ( xx [ 68 ] * xx [ 17 ] - xx [ 67 ] *
xx [ 10 ] ) + xx [ 56 ] - xx [ 0 ] * ( xx [ 62 ] + xx [ 13 ] * xx [ 12 ] ) )
+ 0.06161549182219125 ) ; xx [ 143 ] = fabs ( xx [ 0 ] * ( xx [ 38 ] + xx [
34 ] * xx [ 5 ] ) - xx [ 24 ] + xx [ 7 ] - ( xx [ 71 ] - ( xx [ 44 ] * xx [
29 ] + xx [ 77 ] ) * xx [ 0 ] - ( xx [ 82 ] * xx [ 27 ] + xx [ 83 ] * xx [ 33
] ) * xx [ 0 ] ) - 0.03706319574037606 ) ; xx [ 144 ] = fabs ( ( xx [ 39 ] -
xx [ 24 ] * xx [ 21 ] ) * xx [ 0 ] - xx [ 4 ] + xx [ 22 ] - ( ( xx [ 80 ] *
xx [ 33 ] + xx [ 81 ] * xx [ 27 ] ) * xx [ 0 ] + xx [ 72 ] - ( xx [ 78 ] - xx
[ 29 ] * xx [ 26 ] ) * xx [ 0 ] ) ) ; xx [ 145 ] = fabs ( ( xx [ 34 ] * xx [
25 ] + xx [ 40 ] ) * xx [ 0 ] + xx [ 16 ] - ( xx [ 0 ] * ( xx [ 81 ] * xx [
33 ] - xx [ 80 ] * xx [ 27 ] ) + xx [ 73 ] - xx [ 0 ] * ( xx [ 79 ] + xx [ 28
] * xx [ 29 ] ) ) + 0.01516654048056399 ) ; xx [ 146 ] = fabs ( xx [ 45 ] +
xx [ 0 ] * ( xx [ 57 ] + xx [ 34 ] * xx [ 47 ] ) + xx [ 7 ] - ( xx [ 91 ] - (
xx [ 50 ] * xx [ 52 ] + xx [ 94 ] ) * xx [ 0 ] - ( xx [ 65 ] * xx [ 49 ] + xx
[ 66 ] * xx [ 74 ] ) * xx [ 0 ] ) - 0.06706319574037613 ) ; xx [ 147 ] = fabs
( ( xx [ 45 ] * xx [ 21 ] + xx [ 58 ] ) * xx [ 0 ] - xx [ 46 ] + xx [ 22 ] -
( ( xx [ 63 ] * xx [ 74 ] + xx [ 64 ] * xx [ 49 ] ) * xx [ 0 ] + xx [ 92 ] -
( xx [ 52 ] * xx [ 51 ] + xx [ 95 ] ) * xx [ 0 ] ) ) ; xx [ 148 ] = fabs ( (
xx [ 59 ] - xx [ 34 ] * xx [ 48 ] ) * xx [ 0 ] + xx [ 16 ] - ( xx [ 0 ] * (
xx [ 64 ] * xx [ 74 ] - xx [ 63 ] * xx [ 49 ] ) + xx [ 93 ] - xx [ 0 ] * ( xx
[ 96 ] - xx [ 53 ] * xx [ 52 ] ) ) - 0.1167690808590078 ) ; xx [ 149 ] = fabs
( xx [ 75 ] + xx [ 0 ] * ( xx [ 97 ] - xx [ 34 ] * xx [ 84 ] ) + xx [ 7 ] - (
xx [ 114 ] - ( xx [ 117 ] - xx [ 87 ] * xx [ 89 ] ) * xx [ 0 ] - ( xx [ 111 ]
* xx [ 86 ] + xx [ 112 ] * xx [ 100 ] ) * xx [ 0 ] ) - 0.2430439578539093 ) ;
xx [ 150 ] = fabs ( xx [ 76 ] + ( xx [ 75 ] * xx [ 21 ] + xx [ 98 ] ) * xx [
0 ] + xx [ 22 ] - ( ( xx [ 109 ] * xx [ 100 ] + xx [ 110 ] * xx [ 86 ] ) * xx
[ 0 ] + xx [ 115 ] - ( xx [ 89 ] * xx [ 88 ] + xx [ 118 ] ) * xx [ 0 ] ) ) ;
xx [ 151 ] = fabs ( ( xx [ 34 ] * xx [ 85 ] + xx [ 99 ] ) * xx [ 0 ] + xx [
16 ] - ( xx [ 0 ] * ( xx [ 110 ] * xx [ 100 ] - xx [ 109 ] * xx [ 86 ] ) + xx
[ 116 ] - xx [ 0 ] * ( xx [ 119 ] + xx [ 90 ] * xx [ 89 ] ) ) -
0.06480755663194146 ) ; xx [ 152 ] = fabs ( xx [ 0 ] * ( xx [ 120 ] - xx [ 34
] * xx [ 102 ] ) - xx [ 103 ] + xx [ 7 ] - ( xx [ 131 ] - ( xx [ 1 ] * xx [
36 ] + xx [ 137 ] ) * xx [ 0 ] - ( xx [ 107 ] * xx [ 6 ] + xx [ 108 ] * xx [
8 ] ) * xx [ 0 ] ) - 0.1700535767971427 ) ; xx [ 153 ] = fabs ( xx [ 101 ] +
( xx [ 121 ] - xx [ 103 ] * xx [ 21 ] ) * xx [ 0 ] + xx [ 22 ] - ( ( xx [ 105
] * xx [ 8 ] + xx [ 106 ] * xx [ 6 ] ) * xx [ 0 ] + xx [ 132 ] - ( xx [ 138 ]
- xx [ 36 ] * xx [ 2 ] ) * xx [ 0 ] ) ) ; xx [ 154 ] = fabs ( ( xx [ 34 ] *
xx [ 104 ] + xx [ 122 ] ) * xx [ 0 ] + xx [ 16 ] - ( xx [ 0 ] * ( xx [ 106 ]
* xx [ 8 ] - xx [ 105 ] * xx [ 6 ] ) + xx [ 133 ] - xx [ 0 ] * ( xx [ 139 ] +
xx [ 3 ] * xx [ 36 ] ) ) + 0.1415895889346966 ) ; ii [ 0 ] = 140 ; { int ll ;
for ( ll = 141 ; ll < 155 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0
] = ll ; } ii [ 0 ] -= 140 ; xx [ 0 ] = xx [ 140 + ( ii [ 0 ] ) ] ; return xx
[ 0 ] > 1.0e-9 ; } boolean_T hp_v4_a1692be3_1_isVelocityViolation ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
eqnEnableFlags , const double * state , const int * modeVector ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; int ii [ 1 ] ; double xx [ 142 ] ; ( void ) mech ; ( void )
rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; xx [
0 ] = 0.5004402260104069 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 0 ]
; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 5 ] =
1.016807521344378e-3 ; xx [ 6 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 5 ] * xx
[ 6 ] ; xx [ 7 ] = 0.8657710899485228 ; xx [ 8 ] = 0.9999994830510986 ; xx [
9 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 0 ] * xx [ 2 ] + xx [ 7 ] * xx [
9 ] ; xx [ 10 ] = xx [ 7 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 7 ] * xx [ 2 ] - xx [
0 ] * xx [ 9 ] ; xx [ 11 ] = - xx [ 4 ] ; xx [ 12 ] = xx [ 6 ] ; xx [ 13 ] =
xx [ 10 ] ; xx [ 14 ] = xx [ 3 ] ; xx [ 0 ] = 5.084038263768928e-4 ; xx [ 2 ]
= 0.9999998707627665 ; xx [ 7 ] = xx [ 0 ] * state [ 4 ] + xx [ 2 ] * state [
2 ] ; xx [ 9 ] = xx [ 0 ] * state [ 5 ] - xx [ 2 ] * state [ 3 ] ; xx [ 15 ]
= - xx [ 9 ] ; xx [ 16 ] = xx [ 0 ] * state [ 2 ] - xx [ 2 ] * state [ 4 ] ;
xx [ 17 ] = - xx [ 16 ] ; xx [ 18 ] = xx [ 0 ] * state [ 3 ] + xx [ 2 ] *
state [ 5 ] ; xx [ 19 ] = xx [ 7 ] ; xx [ 20 ] = xx [ 15 ] ; xx [ 21 ] = xx [
17 ] ; xx [ 22 ] = xx [ 18 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx +
19 , xx + 23 ) ; xx [ 19 ] = 0.1395577324697271 ; xx [ 20 ] =
0.9902139361309295 ; xx [ 21 ] = xx [ 19 ] * state [ 12 ] - xx [ 20 ] * state
[ 9 ] ; xx [ 22 ] = xx [ 19 ] * state [ 11 ] + xx [ 20 ] * state [ 10 ] ; xx
[ 27 ] = - xx [ 22 ] ; xx [ 28 ] = xx [ 20 ] * state [ 11 ] - xx [ 19 ] *
state [ 10 ] ; xx [ 29 ] = - xx [ 28 ] ; xx [ 30 ] = xx [ 19 ] * state [ 9 ]
+ xx [ 20 ] * state [ 12 ] ; xx [ 31 ] = - xx [ 30 ] ; xx [ 32 ] = xx [ 21 ]
; xx [ 33 ] = xx [ 27 ] ; xx [ 34 ] = xx [ 29 ] ; xx [ 35 ] = xx [ 31 ] ;
pm_math_Quaternion_compose_ra ( xx + 23 , xx + 32 , xx + 36 ) ; xx [ 40 ] =
xx [ 8 ] * state [ 1 ] ; xx [ 41 ] = xx [ 16 ] * xx [ 40 ] ; xx [ 42 ] = xx [
15 ] ; xx [ 43 ] = xx [ 17 ] ; xx [ 44 ] = xx [ 18 ] ; xx [ 15 ] = xx [ 5 ] *
state [ 1 ] ; xx [ 17 ] = xx [ 9 ] * xx [ 40 ] - xx [ 15 ] * xx [ 18 ] ; xx [
45 ] = xx [ 16 ] * xx [ 15 ] ; xx [ 46 ] = - xx [ 41 ] ; xx [ 47 ] = xx [ 17
] ; xx [ 48 ] = - xx [ 45 ] ; pm_math_Vector3_cross_ra ( xx + 42 , xx + 46 ,
xx + 49 ) ; xx [ 46 ] = 2.0 ; xx [ 52 ] = ( xx [ 41 ] * xx [ 7 ] + xx [ 49 ]
) * xx [ 46 ] - xx [ 15 ] + state [ 6 ] ; xx [ 53 ] = xx [ 46 ] * ( xx [ 50 ]
- xx [ 17 ] * xx [ 7 ] ) + state [ 7 ] ; xx [ 54 ] = xx [ 40 ] + xx [ 46 ] *
( xx [ 51 ] + xx [ 45 ] * xx [ 7 ] ) + state [ 8 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 32 , xx + 52 , xx + 47 ) ; xx [ 17
] = xx [ 49 ] + state [ 15 ] ; xx [ 41 ] = 5.68852606864536e-4 ; xx [ 45 ] =
0.07434110703613682 ; xx [ 50 ] = xx [ 19 ] * state [ 13 ] ; xx [ 51 ] = xx [
19 ] * state [ 14 ] ; xx [ 55 ] = state [ 13 ] - ( xx [ 19 ] * xx [ 50 ] - xx
[ 20 ] * xx [ 51 ] ) * xx [ 46 ] ; xx [ 56 ] = xx [ 47 ] + xx [ 55 ] ; xx [
47 ] = state [ 14 ] - xx [ 46 ] * ( xx [ 20 ] * xx [ 50 ] + xx [ 19 ] * xx [
51 ] ) ; xx [ 19 ] = xx [ 48 ] + xx [ 47 ] ; xx [ 48 ] = - ( xx [ 17 ] * xx [
41 ] ) ; xx [ 49 ] = - ( xx [ 17 ] * xx [ 45 ] ) ; xx [ 50 ] = xx [ 56 ] * xx
[ 41 ] + xx [ 19 ] * xx [ 45 ] ; pm_math_Quaternion_xform_ra ( xx + 36 , xx +
48 , xx + 57 ) ; xx [ 20 ] = 1.291763771785659e-5 ; xx [ 41 ] = xx [ 6 ] * xx
[ 20 ] ; xx [ 45 ] = xx [ 20 ] * xx [ 3 ] ; xx [ 48 ] = 0.14 ; xx [ 49 ] = xx
[ 48 ] * state [ 7 ] ; xx [ 50 ] = xx [ 48 ] * state [ 8 ] ; xx [ 51 ] = xx [
16 ] * xx [ 49 ] - xx [ 50 ] * xx [ 18 ] ; xx [ 60 ] = xx [ 9 ] * xx [ 49 ] ;
xx [ 61 ] = xx [ 9 ] * xx [ 50 ] ; xx [ 62 ] = xx [ 51 ] ; xx [ 63 ] = - xx [
60 ] ; xx [ 64 ] = - xx [ 61 ] ; pm_math_Vector3_cross_ra ( xx + 42 , xx + 62
, xx + 65 ) ; xx [ 42 ] = xx [ 48 ] * xx [ 18 ] ; xx [ 43 ] = xx [ 16 ] * xx
[ 48 ] ; xx [ 44 ] = ( xx [ 42 ] * xx [ 7 ] + xx [ 9 ] * xx [ 43 ] ) * xx [
46 ] ; xx [ 62 ] = 0.2199463818469452 ; xx [ 63 ] = 0.04006839315796021 ; xx
[ 68 ] = ( xx [ 51 ] * xx [ 7 ] + xx [ 65 ] ) * xx [ 46 ] - xx [ 44 ] * xx [
40 ] ; xx [ 69 ] = xx [ 50 ] + xx [ 46 ] * ( xx [ 66 ] - xx [ 60 ] * xx [ 7 ]
) + xx [ 40 ] * ( xx [ 62 ] - ( xx [ 16 ] * xx [ 43 ] + xx [ 42 ] * xx [ 18 ]
) * xx [ 46 ] ) + ( xx [ 63 ] + xx [ 46 ] * ( xx [ 43 ] * xx [ 7 ] - xx [ 9 ]
* xx [ 42 ] ) ) * xx [ 15 ] ; xx [ 70 ] = xx [ 46 ] * ( xx [ 67 ] - xx [ 61 ]
* xx [ 7 ] ) - xx [ 49 ] - xx [ 44 ] * xx [ 15 ] ;
pm_math_Quaternion_xform_ra ( xx + 11 , xx + 68 , xx + 42 ) ; xx [ 7 ] =
0.03530169195229536 ; xx [ 9 ] = 0.0654271681639358 ; xx [ 11 ] = xx [ 7 ] *
state [ 15 ] ; xx [ 12 ] = - ( xx [ 9 ] * state [ 15 ] ) ; xx [ 13 ] = xx [
47 ] * xx [ 9 ] - xx [ 7 ] * xx [ 55 ] ; pm_math_Quaternion_xform_ra ( xx +
32 , xx + 11 , xx + 14 ) ; xx [ 11 ] = xx [ 27 ] ; xx [ 12 ] = xx [ 29 ] ; xx
[ 13 ] = xx [ 31 ] ; xx [ 18 ] = xx [ 7 ] * xx [ 30 ] ; xx [ 27 ] = xx [ 9 ]
* xx [ 30 ] ; xx [ 29 ] = xx [ 7 ] * xx [ 22 ] - xx [ 28 ] * xx [ 9 ] ; xx [
30 ] = - xx [ 18 ] ; xx [ 31 ] = xx [ 27 ] ; xx [ 32 ] = xx [ 29 ] ;
pm_math_Vector3_cross_ra ( xx + 11 , xx + 30 , xx + 33 ) ; xx [ 11 ] = xx [
48 ] + xx [ 46 ] * ( xx [ 33 ] - xx [ 18 ] * xx [ 21 ] ) - xx [ 9 ] ; xx [ 12
] = ( xx [ 27 ] * xx [ 21 ] + xx [ 34 ] ) * xx [ 46 ] - xx [ 7 ] ; xx [ 13 ]
= ( xx [ 29 ] * xx [ 21 ] + xx [ 35 ] ) * xx [ 46 ] ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 11 , xx + 27 ) ; xx [ 11 ] = xx [
14 ] + xx [ 27 ] ; xx [ 12 ] = xx [ 15 ] + xx [ 28 ] ; xx [ 13 ] = xx [ 16 ]
+ xx [ 29 ] ; pm_math_Quaternion_xform_ra ( xx + 23 , xx + 11 , xx + 14 ) ;
xx [ 7 ] = xx [ 46 ] * ( xx [ 41 ] * xx [ 10 ] + xx [ 45 ] * xx [ 4 ] ) *
state [ 1 ] + xx [ 42 ] + xx [ 14 ] ; xx [ 9 ] = xx [ 1 ] * state [ 34 ] ; xx
[ 11 ] = cos ( xx [ 9 ] ) ; xx [ 12 ] = xx [ 0 ] * xx [ 11 ] ; xx [ 13 ] =
sin ( xx [ 9 ] ) ; xx [ 9 ] = xx [ 5 ] * xx [ 13 ] ; xx [ 18 ] = xx [ 8 ] *
xx [ 13 ] ; xx [ 13 ] = xx [ 0 ] * xx [ 9 ] + xx [ 2 ] * xx [ 18 ] ; xx [ 21
] = xx [ 2 ] * xx [ 11 ] ; xx [ 11 ] = xx [ 2 ] * xx [ 9 ] - xx [ 0 ] * xx [
18 ] ; xx [ 22 ] = - xx [ 12 ] ; xx [ 23 ] = - xx [ 13 ] ; xx [ 24 ] = - xx [
21 ] ; xx [ 25 ] = xx [ 11 ] ; xx [ 9 ] = xx [ 2 ] * state [ 36 ] - xx [ 0 ]
* state [ 38 ] ; xx [ 18 ] = xx [ 2 ] * state [ 37 ] + xx [ 0 ] * state [ 39
] ; xx [ 26 ] = xx [ 2 ] * state [ 38 ] + xx [ 0 ] * state [ 36 ] ; xx [ 27 ]
= xx [ 2 ] * state [ 39 ] - xx [ 0 ] * state [ 37 ] ; xx [ 28 ] = xx [ 9 ] ;
xx [ 29 ] = xx [ 18 ] ; xx [ 30 ] = xx [ 26 ] ; xx [ 31 ] = xx [ 27 ] ;
pm_math_Quaternion_compose_ra ( xx + 22 , xx + 28 , xx + 32 ) ; xx [ 28 ] =
xx [ 18 ] ; xx [ 29 ] = xx [ 26 ] ; xx [ 30 ] = xx [ 27 ] ; xx [ 31 ] = xx [
8 ] * state [ 35 ] ; xx [ 40 ] = xx [ 5 ] * state [ 35 ] ; xx [ 47 ] = xx [
40 ] * xx [ 27 ] - xx [ 18 ] * xx [ 31 ] ; xx [ 49 ] = xx [ 26 ] * xx [ 40 ]
; xx [ 50 ] = xx [ 26 ] * xx [ 31 ] ; xx [ 51 ] = xx [ 47 ] ; xx [ 52 ] = -
xx [ 49 ] ; pm_math_Vector3_cross_ra ( xx + 28 , xx + 50 , xx + 53 ) ; xx [
50 ] = ( xx [ 46 ] * ( xx [ 54 ] - xx [ 47 ] * xx [ 9 ] ) + state [ 41 ] ) *
xx [ 48 ] ; xx [ 47 ] = ( xx [ 31 ] + xx [ 46 ] * ( xx [ 55 ] + xx [ 49 ] *
xx [ 9 ] ) + state [ 42 ] ) * xx [ 48 ] ; xx [ 49 ] = xx [ 34 ] * xx [ 50 ] +
xx [ 35 ] * xx [ 47 ] ; xx [ 51 ] = xx [ 33 ] * xx [ 50 ] ; xx [ 52 ] = xx [
33 ] * xx [ 47 ] ; xx [ 53 ] = - xx [ 49 ] ; xx [ 54 ] = xx [ 51 ] ; xx [ 55
] = xx [ 52 ] ; pm_math_Vector3_cross_ra ( xx + 33 , xx + 53 , xx + 64 ) ; xx
[ 33 ] = xx [ 13 ] * xx [ 20 ] ; xx [ 34 ] = xx [ 20 ] * xx [ 11 ] ; xx [ 35
] = xx [ 48 ] * state [ 41 ] ; xx [ 53 ] = xx [ 48 ] * state [ 42 ] ; xx [ 54
] = xx [ 26 ] * xx [ 35 ] + xx [ 53 ] * xx [ 27 ] ; xx [ 55 ] = xx [ 18 ] *
xx [ 35 ] ; xx [ 60 ] = xx [ 18 ] * xx [ 53 ] ; xx [ 67 ] = - xx [ 54 ] ; xx
[ 68 ] = xx [ 55 ] ; xx [ 69 ] = xx [ 60 ] ; pm_math_Vector3_cross_ra ( xx +
28 , xx + 67 , xx + 70 ) ; xx [ 28 ] = xx [ 48 ] * xx [ 27 ] ; xx [ 29 ] = xx
[ 26 ] * xx [ 48 ] ; xx [ 30 ] = ( xx [ 28 ] * xx [ 9 ] + xx [ 18 ] * xx [ 29
] ) * xx [ 46 ] ; xx [ 67 ] = ( xx [ 70 ] - xx [ 54 ] * xx [ 9 ] ) * xx [ 46
] - xx [ 30 ] * xx [ 31 ] ; xx [ 68 ] = xx [ 53 ] + xx [ 46 ] * ( xx [ 71 ] +
xx [ 55 ] * xx [ 9 ] ) + xx [ 31 ] * ( xx [ 62 ] - ( xx [ 26 ] * xx [ 29 ] +
xx [ 28 ] * xx [ 27 ] ) * xx [ 46 ] ) - ( xx [ 46 ] * ( xx [ 18 ] * xx [ 28 ]
- xx [ 29 ] * xx [ 9 ] ) - xx [ 63 ] ) * xx [ 40 ] ; xx [ 69 ] = xx [ 46 ] *
( xx [ 72 ] + xx [ 60 ] * xx [ 9 ] ) - xx [ 35 ] + xx [ 30 ] * xx [ 40 ] ;
pm_math_Quaternion_xform_ra ( xx + 22 , xx + 67 , xx + 26 ) ; xx [ 9 ] = ( xx
[ 20 ] - ( xx [ 45 ] * xx [ 3 ] + xx [ 6 ] * xx [ 41 ] ) * xx [ 46 ] ) *
state [ 1 ] + xx [ 43 ] + xx [ 15 ] ; xx [ 3 ] = xx [ 46 ] * ( xx [ 45 ] * xx
[ 10 ] - xx [ 41 ] * xx [ 4 ] ) * state [ 1 ] + xx [ 44 ] + xx [ 16 ] ; xx [
4 ] = 0.07431243570379253 ; xx [ 6 ] = 2.141422054707503e-3 ; xx [ 14 ] = xx
[ 17 ] * xx [ 4 ] ; xx [ 15 ] = - ( xx [ 17 ] * xx [ 6 ] ) ; xx [ 16 ] = xx [
19 ] * xx [ 6 ] - xx [ 56 ] * xx [ 4 ] ; pm_math_Quaternion_xform_ra ( xx +
36 , xx + 14 , xx + 22 ) ; xx [ 4 ] = 0.4995596447523598 ; xx [ 6 ] = xx [ 1
] * state [ 43 ] ; xx [ 10 ] = cos ( xx [ 6 ] ) ; xx [ 14 ] = xx [ 4 ] * xx [
10 ] ; xx [ 15 ] = sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 5 ] * xx [ 15 ] ; xx [
16 ] = 0.8662794937748998 ; xx [ 18 ] = xx [ 8 ] * xx [ 15 ] ; xx [ 15 ] = xx
[ 4 ] * xx [ 6 ] - xx [ 16 ] * xx [ 18 ] ; xx [ 25 ] = xx [ 16 ] * xx [ 10 ]
; xx [ 10 ] = xx [ 4 ] * xx [ 18 ] + xx [ 16 ] * xx [ 6 ] ; xx [ 40 ] = - xx
[ 14 ] ; xx [ 41 ] = xx [ 15 ] ; xx [ 42 ] = - xx [ 25 ] ; xx [ 43 ] = - xx [
10 ] ; xx [ 4 ] = xx [ 0 ] * state [ 47 ] + xx [ 2 ] * state [ 45 ] ; xx [ 6
] = xx [ 0 ] * state [ 48 ] - xx [ 2 ] * state [ 46 ] ; xx [ 16 ] = - xx [ 6
] ; xx [ 18 ] = xx [ 0 ] * state [ 45 ] - xx [ 2 ] * state [ 47 ] ; xx [ 29 ]
= - xx [ 18 ] ; xx [ 30 ] = xx [ 0 ] * state [ 46 ] + xx [ 2 ] * state [ 48 ]
; xx [ 67 ] = xx [ 4 ] ; xx [ 68 ] = xx [ 16 ] ; xx [ 69 ] = xx [ 29 ] ; xx [
70 ] = xx [ 30 ] ; pm_math_Quaternion_compose_ra ( xx + 40 , xx + 67 , xx +
71 ) ; xx [ 53 ] = xx [ 16 ] ; xx [ 54 ] = xx [ 29 ] ; xx [ 55 ] = xx [ 30 ]
; xx [ 16 ] = xx [ 8 ] * state [ 44 ] ; xx [ 29 ] = xx [ 5 ] * state [ 44 ] ;
xx [ 31 ] = xx [ 6 ] * xx [ 16 ] - xx [ 29 ] * xx [ 30 ] ; xx [ 35 ] = xx [
18 ] * xx [ 29 ] ; xx [ 67 ] = - ( xx [ 18 ] * xx [ 16 ] ) ; xx [ 68 ] = xx [
31 ] ; xx [ 69 ] = - xx [ 35 ] ; pm_math_Vector3_cross_ra ( xx + 53 , xx + 67
, xx + 75 ) ; xx [ 44 ] = ( xx [ 46 ] * ( xx [ 76 ] - xx [ 31 ] * xx [ 4 ] )
+ state [ 50 ] ) * xx [ 48 ] ; xx [ 31 ] = ( xx [ 16 ] + xx [ 46 ] * ( xx [
77 ] + xx [ 35 ] * xx [ 4 ] ) + state [ 51 ] ) * xx [ 48 ] ; xx [ 35 ] = xx [
73 ] * xx [ 44 ] + xx [ 74 ] * xx [ 31 ] ; xx [ 45 ] = xx [ 72 ] * xx [ 44 ]
; xx [ 60 ] = xx [ 72 ] * xx [ 31 ] ; xx [ 67 ] = - xx [ 35 ] ; xx [ 68 ] =
xx [ 45 ] ; xx [ 69 ] = xx [ 60 ] ; pm_math_Vector3_cross_ra ( xx + 72 , xx +
67 , xx + 75 ) ; xx [ 61 ] = xx [ 48 ] * state [ 50 ] ; xx [ 67 ] = xx [ 48 ]
* state [ 51 ] ; xx [ 68 ] = xx [ 18 ] * xx [ 61 ] - xx [ 67 ] * xx [ 30 ] ;
xx [ 69 ] = xx [ 6 ] * xx [ 61 ] ; xx [ 70 ] = xx [ 6 ] * xx [ 67 ] ; xx [ 72
] = xx [ 68 ] ; xx [ 73 ] = - xx [ 69 ] ; xx [ 74 ] = - xx [ 70 ] ;
pm_math_Vector3_cross_ra ( xx + 53 , xx + 72 , xx + 78 ) ; xx [ 53 ] = xx [
48 ] * xx [ 30 ] ; xx [ 54 ] = xx [ 18 ] * xx [ 48 ] ; xx [ 55 ] = ( xx [ 53
] * xx [ 4 ] + xx [ 6 ] * xx [ 54 ] ) * xx [ 46 ] ; xx [ 72 ] = ( xx [ 68 ] *
xx [ 4 ] + xx [ 78 ] ) * xx [ 46 ] - xx [ 55 ] * xx [ 16 ] ; xx [ 73 ] = xx [
67 ] + xx [ 46 ] * ( xx [ 79 ] - xx [ 69 ] * xx [ 4 ] ) + xx [ 16 ] * ( xx [
62 ] - ( xx [ 18 ] * xx [ 54 ] + xx [ 53 ] * xx [ 30 ] ) * xx [ 46 ] ) + ( xx
[ 63 ] + xx [ 46 ] * ( xx [ 54 ] * xx [ 4 ] - xx [ 6 ] * xx [ 53 ] ) ) * xx [
29 ] ; xx [ 74 ] = xx [ 46 ] * ( xx [ 80 ] - xx [ 70 ] * xx [ 4 ] ) - xx [ 61
] - xx [ 55 ] * xx [ 29 ] ; pm_math_Quaternion_xform_ra ( xx + 40 , xx + 72 ,
xx + 53 ) ; xx [ 4 ] = xx [ 15 ] * xx [ 20 ] ; xx [ 6 ] = xx [ 20 ] * xx [ 10
] ; xx [ 16 ] = 0.06466571354218477 ; xx [ 18 ] = 0.03667791270951477 ; xx [
40 ] = xx [ 17 ] * xx [ 16 ] ; xx [ 41 ] = xx [ 17 ] * xx [ 18 ] ; xx [ 42 ]
= - ( xx [ 56 ] * xx [ 16 ] + xx [ 19 ] * xx [ 18 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 36 , xx + 40 , xx + 67 ) ; xx [ 16 ] =
0.8657710899485229 ; xx [ 18 ] = xx [ 1 ] * state [ 52 ] ; xx [ 29 ] = cos (
xx [ 18 ] ) ; xx [ 30 ] = xx [ 16 ] * xx [ 29 ] ; xx [ 40 ] = sin ( xx [ 18 ]
) ; xx [ 18 ] = xx [ 5 ] * xx [ 40 ] ; xx [ 41 ] = 0.5004402260104068 ; xx [
42 ] = xx [ 8 ] * xx [ 40 ] ; xx [ 40 ] = xx [ 16 ] * xx [ 18 ] - xx [ 41 ] *
xx [ 42 ] ; xx [ 43 ] = xx [ 41 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 16 ] * xx [
42 ] + xx [ 41 ] * xx [ 18 ] ; xx [ 78 ] = xx [ 30 ] ; xx [ 79 ] = xx [ 40 ]
; xx [ 80 ] = - xx [ 43 ] ; xx [ 81 ] = xx [ 29 ] ; xx [ 16 ] = xx [ 2 ] *
state [ 54 ] - xx [ 0 ] * state [ 56 ] ; xx [ 18 ] = xx [ 2 ] * state [ 55 ]
+ xx [ 0 ] * state [ 57 ] ; xx [ 41 ] = xx [ 2 ] * state [ 56 ] + xx [ 0 ] *
state [ 54 ] ; xx [ 42 ] = xx [ 2 ] * state [ 57 ] - xx [ 0 ] * state [ 55 ]
; xx [ 82 ] = xx [ 16 ] ; xx [ 83 ] = xx [ 18 ] ; xx [ 84 ] = xx [ 41 ] ; xx
[ 85 ] = xx [ 42 ] ; pm_math_Quaternion_compose_ra ( xx + 78 , xx + 82 , xx +
86 ) ; xx [ 72 ] = xx [ 18 ] ; xx [ 73 ] = xx [ 41 ] ; xx [ 74 ] = xx [ 42 ]
; xx [ 61 ] = xx [ 8 ] * state [ 53 ] ; xx [ 70 ] = xx [ 5 ] * state [ 53 ] ;
xx [ 82 ] = xx [ 70 ] * xx [ 42 ] - xx [ 18 ] * xx [ 61 ] ; xx [ 83 ] = xx [
41 ] * xx [ 70 ] ; xx [ 90 ] = xx [ 41 ] * xx [ 61 ] ; xx [ 91 ] = xx [ 82 ]
; xx [ 92 ] = - xx [ 83 ] ; pm_math_Vector3_cross_ra ( xx + 72 , xx + 90 , xx
+ 93 ) ; xx [ 84 ] = ( xx [ 46 ] * ( xx [ 94 ] - xx [ 82 ] * xx [ 16 ] ) +
state [ 59 ] ) * xx [ 48 ] ; xx [ 82 ] = ( xx [ 61 ] + xx [ 46 ] * ( xx [ 95
] + xx [ 83 ] * xx [ 16 ] ) + state [ 60 ] ) * xx [ 48 ] ; xx [ 83 ] = xx [
88 ] * xx [ 84 ] + xx [ 89 ] * xx [ 82 ] ; xx [ 85 ] = xx [ 87 ] * xx [ 84 ]
; xx [ 90 ] = xx [ 87 ] * xx [ 82 ] ; xx [ 91 ] = - xx [ 83 ] ; xx [ 92 ] =
xx [ 85 ] ; xx [ 93 ] = xx [ 90 ] ; pm_math_Vector3_cross_ra ( xx + 87 , xx +
91 , xx + 94 ) ; xx [ 87 ] = xx [ 48 ] * state [ 59 ] ; xx [ 88 ] = xx [ 48 ]
* state [ 60 ] ; xx [ 89 ] = xx [ 41 ] * xx [ 87 ] + xx [ 88 ] * xx [ 42 ] ;
xx [ 91 ] = xx [ 18 ] * xx [ 87 ] ; xx [ 92 ] = xx [ 18 ] * xx [ 88 ] ; xx [
97 ] = - xx [ 89 ] ; xx [ 98 ] = xx [ 91 ] ; xx [ 99 ] = xx [ 92 ] ;
pm_math_Vector3_cross_ra ( xx + 72 , xx + 97 , xx + 100 ) ; xx [ 72 ] = xx [
48 ] * xx [ 42 ] ; xx [ 73 ] = xx [ 41 ] * xx [ 48 ] ; xx [ 74 ] = ( xx [ 72
] * xx [ 16 ] + xx [ 18 ] * xx [ 73 ] ) * xx [ 46 ] ; xx [ 97 ] = ( xx [ 100
] - xx [ 89 ] * xx [ 16 ] ) * xx [ 46 ] - xx [ 74 ] * xx [ 61 ] ; xx [ 98 ] =
xx [ 88 ] + xx [ 46 ] * ( xx [ 101 ] + xx [ 91 ] * xx [ 16 ] ) + xx [ 61 ] *
( xx [ 62 ] - ( xx [ 41 ] * xx [ 73 ] + xx [ 72 ] * xx [ 42 ] ) * xx [ 46 ] )
- ( xx [ 46 ] * ( xx [ 18 ] * xx [ 72 ] - xx [ 73 ] * xx [ 16 ] ) - xx [ 63 ]
) * xx [ 70 ] ; xx [ 99 ] = xx [ 46 ] * ( xx [ 102 ] + xx [ 92 ] * xx [ 16 ]
) - xx [ 87 ] + xx [ 74 ] * xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 78
, xx + 97 , xx + 72 ) ; xx [ 16 ] = xx [ 40 ] * xx [ 20 ] ; xx [ 18 ] = xx [
20 ] * xx [ 29 ] ; xx [ 41 ] = 0.0640968609353203 ; xx [ 42 ] =
0.03766319432662211 ; xx [ 78 ] = - ( xx [ 17 ] * xx [ 41 ] ) ; xx [ 79 ] =
xx [ 17 ] * xx [ 42 ] ; xx [ 80 ] = xx [ 56 ] * xx [ 41 ] - xx [ 19 ] * xx [
42 ] ; pm_math_Quaternion_xform_ra ( xx + 36 , xx + 78 , xx + 87 ) ; xx [ 41
] = 0.8662794937748999 ; xx [ 42 ] = xx [ 1 ] * state [ 16 ] ; xx [ 61 ] =
cos ( xx [ 42 ] ) ; xx [ 70 ] = xx [ 41 ] * xx [ 61 ] ; xx [ 78 ] = sin ( xx
[ 42 ] ) ; xx [ 42 ] = xx [ 5 ] * xx [ 78 ] ; xx [ 79 ] = 0.4995596447523596
; xx [ 80 ] = xx [ 8 ] * xx [ 78 ] ; xx [ 78 ] = xx [ 41 ] * xx [ 42 ] + xx [
79 ] * xx [ 80 ] ; xx [ 81 ] = xx [ 79 ] * xx [ 61 ] ; xx [ 61 ] = xx [ 79 ]
* xx [ 42 ] - xx [ 41 ] * xx [ 80 ] ; xx [ 97 ] = - xx [ 70 ] ; xx [ 98 ] = -
xx [ 78 ] ; xx [ 99 ] = - xx [ 81 ] ; xx [ 100 ] = xx [ 61 ] ; xx [ 41 ] = xx
[ 2 ] * state [ 18 ] - xx [ 0 ] * state [ 20 ] ; xx [ 42 ] = xx [ 2 ] * state
[ 19 ] + xx [ 0 ] * state [ 21 ] ; xx [ 79 ] = xx [ 2 ] * state [ 20 ] + xx [
0 ] * state [ 18 ] ; xx [ 80 ] = xx [ 2 ] * state [ 21 ] - xx [ 0 ] * state [
19 ] ; xx [ 101 ] = xx [ 41 ] ; xx [ 102 ] = xx [ 42 ] ; xx [ 103 ] = xx [ 79
] ; xx [ 104 ] = xx [ 80 ] ; pm_math_Quaternion_compose_ra ( xx + 97 , xx +
101 , xx + 105 ) ; xx [ 91 ] = xx [ 42 ] ; xx [ 92 ] = xx [ 79 ] ; xx [ 93 ]
= xx [ 80 ] ; xx [ 101 ] = xx [ 8 ] * state [ 17 ] ; xx [ 102 ] = xx [ 5 ] *
state [ 17 ] ; xx [ 103 ] = xx [ 102 ] * xx [ 80 ] - xx [ 42 ] * xx [ 101 ] ;
xx [ 104 ] = xx [ 79 ] * xx [ 102 ] ; xx [ 109 ] = xx [ 79 ] * xx [ 101 ] ;
xx [ 110 ] = xx [ 103 ] ; xx [ 111 ] = - xx [ 104 ] ;
pm_math_Vector3_cross_ra ( xx + 91 , xx + 109 , xx + 112 ) ; xx [ 109 ] = (
xx [ 46 ] * ( xx [ 113 ] - xx [ 103 ] * xx [ 41 ] ) + state [ 23 ] ) * xx [
48 ] ; xx [ 103 ] = ( xx [ 101 ] + xx [ 46 ] * ( xx [ 114 ] + xx [ 104 ] * xx
[ 41 ] ) + state [ 24 ] ) * xx [ 48 ] ; xx [ 104 ] = xx [ 107 ] * xx [ 109 ]
+ xx [ 108 ] * xx [ 103 ] ; xx [ 110 ] = xx [ 106 ] * xx [ 109 ] ; xx [ 111 ]
= xx [ 106 ] * xx [ 103 ] ; xx [ 112 ] = - xx [ 104 ] ; xx [ 113 ] = xx [ 110
] ; xx [ 114 ] = xx [ 111 ] ; pm_math_Vector3_cross_ra ( xx + 106 , xx + 112
, xx + 115 ) ; xx [ 106 ] = xx [ 78 ] * xx [ 20 ] ; xx [ 107 ] = xx [ 20 ] *
xx [ 61 ] ; xx [ 108 ] = xx [ 48 ] * state [ 23 ] ; xx [ 112 ] = xx [ 48 ] *
state [ 24 ] ; xx [ 113 ] = xx [ 79 ] * xx [ 108 ] + xx [ 112 ] * xx [ 80 ] ;
xx [ 114 ] = xx [ 42 ] * xx [ 108 ] ; xx [ 118 ] = xx [ 42 ] * xx [ 112 ] ;
xx [ 119 ] = - xx [ 113 ] ; xx [ 120 ] = xx [ 114 ] ; xx [ 121 ] = xx [ 118 ]
; pm_math_Vector3_cross_ra ( xx + 91 , xx + 119 , xx + 122 ) ; xx [ 91 ] = xx
[ 48 ] * xx [ 80 ] ; xx [ 92 ] = xx [ 79 ] * xx [ 48 ] ; xx [ 93 ] = ( xx [
91 ] * xx [ 41 ] + xx [ 42 ] * xx [ 92 ] ) * xx [ 46 ] ; xx [ 119 ] = ( xx [
122 ] - xx [ 113 ] * xx [ 41 ] ) * xx [ 46 ] - xx [ 93 ] * xx [ 101 ] ; xx [
120 ] = xx [ 112 ] + xx [ 46 ] * ( xx [ 123 ] + xx [ 114 ] * xx [ 41 ] ) + xx
[ 101 ] * ( xx [ 62 ] - ( xx [ 79 ] * xx [ 92 ] + xx [ 91 ] * xx [ 80 ] ) *
xx [ 46 ] ) - ( xx [ 46 ] * ( xx [ 42 ] * xx [ 91 ] - xx [ 92 ] * xx [ 41 ] )
- xx [ 63 ] ) * xx [ 102 ] ; xx [ 121 ] = xx [ 46 ] * ( xx [ 124 ] + xx [ 118
] * xx [ 41 ] ) - xx [ 108 ] + xx [ 93 ] * xx [ 102 ] ;
pm_math_Quaternion_xform_ra ( xx + 97 , xx + 119 , xx + 91 ) ; xx [ 41 ] =
0.03901074375149718 ; xx [ 42 ] = 0.06328574610922835 ; xx [ 97 ] = - ( xx [
17 ] * xx [ 41 ] ) ; xx [ 98 ] = - ( xx [ 17 ] * xx [ 42 ] ) ; xx [ 99 ] = xx
[ 56 ] * xx [ 41 ] + xx [ 19 ] * xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx
+ 36 , xx + 97 , xx + 100 ) ; xx [ 17 ] = xx [ 1 ] * state [ 25 ] ; xx [ 1 ]
= cos ( xx [ 17 ] ) ; xx [ 19 ] = xx [ 2 ] * xx [ 1 ] ; xx [ 36 ] = sin ( xx
[ 17 ] ) ; xx [ 17 ] = xx [ 5 ] * xx [ 36 ] ; xx [ 37 ] = xx [ 8 ] * xx [ 36
] ; xx [ 36 ] = xx [ 2 ] * xx [ 17 ] - xx [ 0 ] * xx [ 37 ] ; xx [ 38 ] = xx
[ 0 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 2 ] * xx [ 37 ] + xx [ 0 ] * xx [ 17 ] ;
xx [ 118 ] = - xx [ 19 ] ; xx [ 119 ] = xx [ 36 ] ; xx [ 120 ] = - xx [ 38 ]
; xx [ 121 ] = - xx [ 1 ] ; xx [ 17 ] = xx [ 0 ] * state [ 29 ] + xx [ 2 ] *
state [ 27 ] ; xx [ 37 ] = xx [ 0 ] * state [ 30 ] - xx [ 2 ] * state [ 28 ]
; xx [ 39 ] = - xx [ 37 ] ; xx [ 41 ] = xx [ 0 ] * state [ 27 ] - xx [ 2 ] *
state [ 29 ] ; xx [ 42 ] = - xx [ 41 ] ; xx [ 56 ] = xx [ 0 ] * state [ 28 ]
+ xx [ 2 ] * state [ 30 ] ; xx [ 122 ] = xx [ 17 ] ; xx [ 123 ] = xx [ 39 ] ;
xx [ 124 ] = xx [ 42 ] ; xx [ 125 ] = xx [ 56 ] ;
pm_math_Quaternion_compose_ra ( xx + 118 , xx + 122 , xx + 126 ) ; xx [ 97 ]
= xx [ 39 ] ; xx [ 98 ] = xx [ 42 ] ; xx [ 99 ] = xx [ 56 ] ; xx [ 0 ] = xx [
8 ] * state [ 26 ] ; xx [ 2 ] = xx [ 5 ] * state [ 26 ] ; xx [ 5 ] = xx [ 37
] * xx [ 0 ] - xx [ 2 ] * xx [ 56 ] ; xx [ 8 ] = xx [ 41 ] * xx [ 2 ] ; xx [
112 ] = - ( xx [ 41 ] * xx [ 0 ] ) ; xx [ 113 ] = xx [ 5 ] ; xx [ 114 ] = -
xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 97 , xx + 112 , xx + 122 ) ; xx [
39 ] = ( xx [ 46 ] * ( xx [ 123 ] - xx [ 5 ] * xx [ 17 ] ) + state [ 32 ] ) *
xx [ 48 ] ; xx [ 5 ] = ( xx [ 0 ] + xx [ 46 ] * ( xx [ 124 ] + xx [ 8 ] * xx
[ 17 ] ) + state [ 33 ] ) * xx [ 48 ] ; xx [ 8 ] = xx [ 128 ] * xx [ 39 ] +
xx [ 129 ] * xx [ 5 ] ; xx [ 42 ] = xx [ 127 ] * xx [ 39 ] ; xx [ 79 ] = xx [
127 ] * xx [ 5 ] ; xx [ 112 ] = - xx [ 8 ] ; xx [ 113 ] = xx [ 42 ] ; xx [
114 ] = xx [ 79 ] ; pm_math_Vector3_cross_ra ( xx + 127 , xx + 112 , xx + 122
) ; xx [ 80 ] = xx [ 48 ] * state [ 32 ] ; xx [ 108 ] = xx [ 48 ] * state [
33 ] ; xx [ 112 ] = xx [ 41 ] * xx [ 80 ] - xx [ 108 ] * xx [ 56 ] ; xx [ 113
] = xx [ 37 ] * xx [ 80 ] ; xx [ 114 ] = xx [ 37 ] * xx [ 108 ] ; xx [ 127 ]
= xx [ 112 ] ; xx [ 128 ] = - xx [ 113 ] ; xx [ 129 ] = - xx [ 114 ] ;
pm_math_Vector3_cross_ra ( xx + 97 , xx + 127 , xx + 130 ) ; xx [ 97 ] = xx [
48 ] * xx [ 56 ] ; xx [ 98 ] = xx [ 41 ] * xx [ 48 ] ; xx [ 48 ] = ( xx [ 97
] * xx [ 17 ] + xx [ 37 ] * xx [ 98 ] ) * xx [ 46 ] ; xx [ 127 ] = ( xx [ 112
] * xx [ 17 ] + xx [ 130 ] ) * xx [ 46 ] - xx [ 48 ] * xx [ 0 ] ; xx [ 128 ]
= xx [ 108 ] + xx [ 46 ] * ( xx [ 131 ] - xx [ 113 ] * xx [ 17 ] ) + xx [ 0 ]
* ( xx [ 62 ] - ( xx [ 41 ] * xx [ 98 ] + xx [ 97 ] * xx [ 56 ] ) * xx [ 46 ]
) + ( xx [ 63 ] + xx [ 46 ] * ( xx [ 98 ] * xx [ 17 ] - xx [ 37 ] * xx [ 97 ]
) ) * xx [ 2 ] ; xx [ 129 ] = xx [ 46 ] * ( xx [ 132 ] - xx [ 114 ] * xx [ 17
] ) - xx [ 80 ] - xx [ 48 ] * xx [ 2 ] ; pm_math_Quaternion_xform_ra ( xx +
118 , xx + 127 , xx + 97 ) ; xx [ 0 ] = xx [ 36 ] * xx [ 20 ] ; xx [ 2 ] = xx
[ 20 ] * xx [ 1 ] ; xx [ 127 ] = fabs ( xx [ 57 ] + xx [ 7 ] - ( xx [ 46 ] *
( xx [ 64 ] - xx [ 49 ] * xx [ 32 ] ) + xx [ 46 ] * ( xx [ 33 ] * xx [ 21 ] +
xx [ 34 ] * xx [ 12 ] ) * state [ 35 ] + xx [ 26 ] ) ) ; xx [ 128 ] = fabs (
xx [ 58 ] + xx [ 9 ] - ( xx [ 47 ] + ( xx [ 32 ] * xx [ 51 ] + xx [ 65 ] ) *
xx [ 46 ] + ( xx [ 20 ] - ( xx [ 34 ] * xx [ 11 ] + xx [ 13 ] * xx [ 33 ] ) *
xx [ 46 ] ) * state [ 35 ] + xx [ 27 ] ) ) ; xx [ 129 ] = fabs ( xx [ 59 ] +
xx [ 3 ] - ( ( xx [ 32 ] * xx [ 52 ] + xx [ 66 ] ) * xx [ 46 ] - xx [ 50 ] +
xx [ 46 ] * ( xx [ 33 ] * xx [ 12 ] - xx [ 34 ] * xx [ 21 ] ) * state [ 35 ]
+ xx [ 28 ] ) ) ; xx [ 130 ] = fabs ( xx [ 22 ] + xx [ 7 ] - ( xx [ 46 ] * (
xx [ 75 ] - xx [ 35 ] * xx [ 71 ] ) + xx [ 53 ] - xx [ 46 ] * ( xx [ 4 ] * xx
[ 25 ] + xx [ 6 ] * xx [ 14 ] ) * state [ 44 ] ) ) ; xx [ 131 ] = fabs ( xx [
23 ] + xx [ 9 ] - ( xx [ 31 ] + ( xx [ 71 ] * xx [ 45 ] + xx [ 76 ] ) * xx [
46 ] + ( xx [ 20 ] - ( xx [ 6 ] * xx [ 10 ] + xx [ 15 ] * xx [ 4 ] ) * xx [
46 ] ) * state [ 44 ] + xx [ 54 ] ) ) ; xx [ 132 ] = fabs ( xx [ 24 ] + xx [
3 ] - ( ( xx [ 71 ] * xx [ 60 ] + xx [ 77 ] ) * xx [ 46 ] - xx [ 44 ] + xx [
46 ] * ( xx [ 6 ] * xx [ 25 ] - xx [ 4 ] * xx [ 14 ] ) * state [ 44 ] + xx [
55 ] ) ) ; xx [ 133 ] = fabs ( xx [ 67 ] + xx [ 7 ] - ( xx [ 46 ] * ( xx [ 94
] - xx [ 83 ] * xx [ 86 ] ) + xx [ 72 ] - xx [ 46 ] * ( xx [ 16 ] * xx [ 43 ]
+ xx [ 18 ] * xx [ 30 ] ) * state [ 53 ] ) ) ; xx [ 134 ] = fabs ( xx [ 68 ]
+ xx [ 9 ] - ( xx [ 82 ] + ( xx [ 86 ] * xx [ 85 ] + xx [ 95 ] ) * xx [ 46 ]
+ ( xx [ 20 ] - ( xx [ 18 ] * xx [ 29 ] + xx [ 40 ] * xx [ 16 ] ) * xx [ 46 ]
) * state [ 53 ] + xx [ 73 ] ) ) ; xx [ 135 ] = fabs ( xx [ 69 ] + xx [ 3 ] -
( ( xx [ 86 ] * xx [ 90 ] + xx [ 96 ] ) * xx [ 46 ] - xx [ 84 ] + xx [ 46 ] *
( xx [ 16 ] * xx [ 30 ] - xx [ 18 ] * xx [ 43 ] ) * state [ 53 ] + xx [ 74 ]
) ) ; xx [ 136 ] = fabs ( xx [ 87 ] + xx [ 7 ] - ( xx [ 46 ] * ( xx [ 115 ] -
xx [ 104 ] * xx [ 105 ] ) + xx [ 46 ] * ( xx [ 106 ] * xx [ 81 ] + xx [ 107 ]
* xx [ 70 ] ) * state [ 17 ] + xx [ 91 ] ) ) ; xx [ 137 ] = fabs ( xx [ 88 ]
+ xx [ 9 ] - ( xx [ 103 ] + ( xx [ 105 ] * xx [ 110 ] + xx [ 116 ] ) * xx [
46 ] + ( xx [ 20 ] - ( xx [ 107 ] * xx [ 61 ] + xx [ 78 ] * xx [ 106 ] ) * xx
[ 46 ] ) * state [ 17 ] + xx [ 92 ] ) ) ; xx [ 138 ] = fabs ( xx [ 89 ] + xx
[ 3 ] - ( ( xx [ 105 ] * xx [ 111 ] + xx [ 117 ] ) * xx [ 46 ] - xx [ 109 ] +
xx [ 46 ] * ( xx [ 106 ] * xx [ 70 ] - xx [ 107 ] * xx [ 81 ] ) * state [ 17
] + xx [ 93 ] ) ) ; xx [ 139 ] = fabs ( xx [ 100 ] + xx [ 7 ] - ( xx [ 46 ] *
( xx [ 122 ] - xx [ 8 ] * xx [ 126 ] ) + xx [ 97 ] - xx [ 46 ] * ( xx [ 0 ] *
xx [ 38 ] + xx [ 2 ] * xx [ 19 ] ) * state [ 26 ] ) ) ; xx [ 140 ] = fabs (
xx [ 101 ] + xx [ 9 ] - ( xx [ 5 ] + ( xx [ 126 ] * xx [ 42 ] + xx [ 123 ] )
* xx [ 46 ] + ( xx [ 20 ] - ( xx [ 2 ] * xx [ 1 ] + xx [ 36 ] * xx [ 0 ] ) *
xx [ 46 ] ) * state [ 26 ] + xx [ 98 ] ) ) ; xx [ 141 ] = fabs ( xx [ 102 ] +
xx [ 3 ] - ( ( xx [ 126 ] * xx [ 79 ] + xx [ 124 ] ) * xx [ 46 ] - xx [ 39 ]
+ xx [ 46 ] * ( xx [ 2 ] * xx [ 38 ] - xx [ 0 ] * xx [ 19 ] ) * state [ 26 ]
+ xx [ 99 ] ) ) ; ii [ 0 ] = 127 ; { int ll ; for ( ll = 128 ; ll < 142 ; ++
ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 127 ;
xx [ 0 ] = xx [ 127 + ( ii [ 0 ] ) ] ; return xx [ 0 ] > 1.0e-9 ; }
PmfMessageId hp_v4_a1692be3_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
modeVector , double * state , void * neDiagMgr0 ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ;
int ii [ 15 ] ; double xx [ 1326 ] ; ( void ) mech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) neDiagMgr
; xx [ 0 ] = 0.5004402260104069 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] *
state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = xx [ 0 ] * xx [ 3 ] ;
xx [ 5 ] = 1.016807521344378e-3 ; xx [ 6 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx
[ 5 ] * xx [ 6 ] ; xx [ 7 ] = 0.8657710899485228 ; xx [ 8 ] =
0.9999994830510986 ; xx [ 9 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 0 ] *
xx [ 2 ] + xx [ 7 ] * xx [ 9 ] ; xx [ 10 ] = xx [ 7 ] * xx [ 3 ] ; xx [ 3 ] =
xx [ 7 ] * xx [ 2 ] - xx [ 0 ] * xx [ 9 ] ; xx [ 11 ] = - xx [ 4 ] ; xx [ 12
] = xx [ 6 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 3 ] ; xx [ 2 ] =
5.084038263768928e-4 ; xx [ 9 ] = sqrt ( state [ 2 ] * state [ 2 ] + state [
3 ] * state [ 3 ] + state [ 4 ] * state [ 4 ] + state [ 5 ] * state [ 5 ] ) ;
xx [ 15 ] = state [ 4 ] / xx [ 9 ] ; xx [ 16 ] = 0.9999998707627665 ; xx [ 17
] = state [ 2 ] / xx [ 9 ] ; xx [ 18 ] = xx [ 2 ] * xx [ 15 ] + xx [ 16 ] *
xx [ 17 ] ; xx [ 19 ] = state [ 5 ] / xx [ 9 ] ; xx [ 20 ] = state [ 3 ] / xx
[ 9 ] ; xx [ 9 ] = xx [ 2 ] * xx [ 19 ] - xx [ 16 ] * xx [ 20 ] ; xx [ 21 ] =
- xx [ 9 ] ; xx [ 22 ] = xx [ 2 ] * xx [ 17 ] - xx [ 16 ] * xx [ 15 ] ; xx [
23 ] = - xx [ 22 ] ; xx [ 24 ] = xx [ 2 ] * xx [ 20 ] + xx [ 16 ] * xx [ 19 ]
; xx [ 25 ] = xx [ 18 ] ; xx [ 26 ] = xx [ 21 ] ; xx [ 27 ] = xx [ 23 ] ; xx
[ 28 ] = xx [ 24 ] ; xx [ 29 ] = 0.1395577324697271 ; xx [ 30 ] = sqrt (
state [ 9 ] * state [ 9 ] + state [ 10 ] * state [ 10 ] + state [ 11 ] *
state [ 11 ] + state [ 12 ] * state [ 12 ] ) ; xx [ 31 ] = state [ 12 ] / xx
[ 30 ] ; xx [ 32 ] = 0.9902139361309295 ; xx [ 33 ] = state [ 9 ] / xx [ 30 ]
; xx [ 34 ] = xx [ 29 ] * xx [ 31 ] - xx [ 32 ] * xx [ 33 ] ; xx [ 35 ] =
state [ 11 ] / xx [ 30 ] ; xx [ 36 ] = state [ 10 ] / xx [ 30 ] ; xx [ 30 ] =
xx [ 29 ] * xx [ 35 ] + xx [ 32 ] * xx [ 36 ] ; xx [ 37 ] = - xx [ 30 ] ; xx
[ 38 ] = xx [ 32 ] * xx [ 35 ] - xx [ 29 ] * xx [ 36 ] ; xx [ 39 ] = - xx [
38 ] ; xx [ 40 ] = xx [ 29 ] * xx [ 33 ] + xx [ 32 ] * xx [ 31 ] ; xx [ 41 ]
= - xx [ 40 ] ; xx [ 42 ] = xx [ 34 ] ; xx [ 43 ] = xx [ 37 ] ; xx [ 44 ] =
xx [ 39 ] ; xx [ 45 ] = xx [ 41 ] ; pm_math_Quaternion_compose_ra ( xx + 25 ,
xx + 42 , xx + 46 ) ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 46 , xx
+ 50 ) ; xx [ 54 ] = xx [ 5 ] * xx [ 49 ] + xx [ 8 ] * xx [ 47 ] ; xx [ 55 ]
= xx [ 5 ] * xx [ 48 ] ; xx [ 56 ] = xx [ 8 ] * xx [ 48 ] ; xx [ 57 ] = - xx
[ 54 ] ; xx [ 58 ] = xx [ 55 ] ; pm_math_Vector3_cross_ra ( xx + 47 , xx + 56
, xx + 59 ) ; xx [ 47 ] = 2.0 ; xx [ 49 ] = xx [ 8 ] + ( xx [ 61 ] - xx [ 46
] * xx [ 55 ] ) * xx [ 47 ] ; xx [ 55 ] = 5.68852606864536e-4 ; xx [ 56 ] =
0.07434110703613682 ; xx [ 57 ] = xx [ 47 ] * ( xx [ 59 ] - xx [ 8 ] * xx [
46 ] * xx [ 48 ] ) - xx [ 5 ] ; xx [ 48 ] = 0.1486822140722736 ; xx [ 58 ] =
xx [ 60 ] + xx [ 46 ] * xx [ 54 ] ; xx [ 59 ] = - ( xx [ 49 ] * xx [ 55 ] ) ;
xx [ 60 ] = - ( xx [ 49 ] * xx [ 56 ] ) ; xx [ 61 ] = xx [ 57 ] * xx [ 55 ] +
xx [ 48 ] * xx [ 58 ] ; pm_math_Quaternion_xform_ra ( xx + 50 , xx + 59 , xx
+ 62 ) ; xx [ 46 ] = 0.14 ; xx [ 59 ] = xx [ 37 ] ; xx [ 60 ] = xx [ 39 ] ;
xx [ 61 ] = xx [ 41 ] ; xx [ 37 ] = 0.03530169195229536 ; xx [ 39 ] = xx [ 37
] * xx [ 40 ] ; xx [ 41 ] = 0.0654271681639358 ; xx [ 54 ] = xx [ 41 ] * xx [
40 ] ; xx [ 65 ] = xx [ 37 ] * xx [ 30 ] - xx [ 38 ] * xx [ 41 ] ; xx [ 66 ]
= - xx [ 39 ] ; xx [ 67 ] = xx [ 54 ] ; xx [ 68 ] = xx [ 65 ] ;
pm_math_Vector3_cross_ra ( xx + 59 , xx + 66 , xx + 69 ) ; xx [ 66 ] = xx [
39 ] * xx [ 34 ] ; xx [ 67 ] = xx [ 46 ] + xx [ 47 ] * ( xx [ 69 ] - xx [ 66
] ) - xx [ 41 ] ; xx [ 68 ] = xx [ 54 ] * xx [ 34 ] ; xx [ 72 ] = ( xx [ 68 ]
+ xx [ 70 ] ) * xx [ 47 ] - xx [ 37 ] ; xx [ 69 ] = ( xx [ 65 ] * xx [ 34 ] +
xx [ 71 ] ) * xx [ 47 ] ; xx [ 73 ] = xx [ 67 ] ; xx [ 74 ] = xx [ 72 ] ; xx
[ 75 ] = xx [ 69 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 73 , xx +
76 ) ; xx [ 65 ] = xx [ 46 ] * xx [ 24 ] ; xx [ 70 ] = xx [ 65 ] * xx [ 18 ]
; xx [ 71 ] = xx [ 22 ] * xx [ 46 ] ; xx [ 79 ] = ( xx [ 70 ] + xx [ 9 ] * xx
[ 71 ] ) * xx [ 47 ] ; xx [ 80 ] = xx [ 77 ] + xx [ 79 ] ; xx [ 81 ] = xx [
22 ] * xx [ 71 ] ; xx [ 82 ] = xx [ 65 ] * xx [ 24 ] ; xx [ 83 ] = xx [ 46 ]
- ( xx [ 81 ] + xx [ 82 ] ) * xx [ 47 ] ; xx [ 84 ] = 0.07994638184694522 ;
xx [ 77 ] = xx [ 71 ] * xx [ 18 ] ; xx [ 85 ] = xx [ 47 ] * ( xx [ 77 ] - xx
[ 9 ] * xx [ 65 ] ) ; xx [ 86 ] = 0.04006839315796021 ; xx [ 87 ] = - ( xx [
80 ] * xx [ 8 ] ) ; xx [ 88 ] = ( xx [ 76 ] + xx [ 83 ] + xx [ 84 ] ) * xx [
8 ] + ( xx [ 78 ] + xx [ 85 ] + xx [ 86 ] ) * xx [ 5 ] ; xx [ 89 ] = - ( xx [
80 ] * xx [ 5 ] ) ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 87 , xx + 90
) ; xx [ 76 ] = 1.291763771785659e-5 ; xx [ 78 ] = xx [ 6 ] * xx [ 76 ] ; xx
[ 80 ] = xx [ 76 ] * xx [ 3 ] ; xx [ 87 ] = xx [ 90 ] + xx [ 47 ] * ( xx [ 78
] * xx [ 10 ] + xx [ 80 ] * xx [ 4 ] ) ; pm_math_Quaternion_compose_ra ( xx +
11 , xx + 25 , xx + 93 ) ; pm_math_Quaternion_compose_ra ( xx + 93 , xx + 42
, xx + 25 ) ; xx [ 42 ] = xx [ 40 ] * xx [ 30 ] ; xx [ 43 ] = xx [ 38 ] * xx
[ 34 ] ; xx [ 44 ] = xx [ 47 ] * ( xx [ 42 ] - xx [ 43 ] ) ; xx [ 45 ] = 1.0
; xx [ 88 ] = xx [ 38 ] * xx [ 38 ] ; xx [ 89 ] = xx [ 40 ] * xx [ 40 ] ; xx
[ 97 ] = xx [ 45 ] - ( xx [ 88 ] + xx [ 89 ] ) * xx [ 47 ] ; xx [ 98 ] = xx [
40 ] * xx [ 34 ] ; xx [ 99 ] = xx [ 38 ] * xx [ 30 ] ; xx [ 100 ] = xx [ 98 ]
+ xx [ 99 ] ; xx [ 101 ] = - ( xx [ 55 ] * xx [ 44 ] ) ; xx [ 102 ] = - ( xx
[ 56 ] * xx [ 44 ] ) ; xx [ 103 ] = xx [ 55 ] * xx [ 97 ] + xx [ 100 ] * xx [
48 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 101 , xx + 104 ) ; xx [
101 ] = xx [ 69 ] * xx [ 24 ] ; xx [ 102 ] = xx [ 72 ] * xx [ 22 ] ; xx [ 103
] = xx [ 101 ] - xx [ 102 ] ; xx [ 107 ] = xx [ 21 ] ; xx [ 108 ] = xx [ 23 ]
; xx [ 109 ] = xx [ 24 ] ; xx [ 21 ] = xx [ 72 ] * xx [ 9 ] ; xx [ 23 ] = xx
[ 9 ] * xx [ 69 ] ; xx [ 110 ] = xx [ 103 ] ; xx [ 111 ] = xx [ 21 ] ; xx [
112 ] = xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 107 , xx + 110 , xx + 113
) ; xx [ 110 ] = ( xx [ 18 ] * xx [ 103 ] + xx [ 113 ] ) * xx [ 47 ] ; xx [
111 ] = ( xx [ 21 ] * xx [ 18 ] + xx [ 114 ] ) * xx [ 47 ] - xx [ 69 ] ; xx [
112 ] = xx [ 72 ] + ( xx [ 23 ] * xx [ 18 ] + xx [ 115 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 11 , xx + 110 , xx + 113 ) ; xx [ 21 ] =
xx [ 30 ] * xx [ 34 ] ; xx [ 23 ] = xx [ 38 ] * xx [ 40 ] ; xx [ 103 ] = ( xx
[ 21 ] + xx [ 23 ] ) * xx [ 47 ] ; xx [ 110 ] = 1.137705213729072e-3 ; xx [
111 ] = xx [ 99 ] - xx [ 98 ] ; xx [ 98 ] = xx [ 30 ] * xx [ 30 ] ; xx [ 99 ]
= xx [ 45 ] - ( xx [ 89 ] + xx [ 98 ] ) * xx [ 47 ] ; xx [ 116 ] = - ( xx [
55 ] * xx [ 103 ] ) ; xx [ 117 ] = - ( xx [ 56 ] * xx [ 103 ] ) ; xx [ 118 ]
= xx [ 110 ] * xx [ 111 ] + xx [ 56 ] * xx [ 99 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 116 , xx + 119 ) ; xx [ 89 ] =
xx [ 67 ] * xx [ 22 ] ; xx [ 112 ] = xx [ 67 ] * xx [ 9 ] ; xx [ 116 ] = xx [
101 ] - xx [ 112 ] ; xx [ 101 ] = xx [ 22 ] * xx [ 69 ] ; xx [ 122 ] = xx [
89 ] ; xx [ 123 ] = xx [ 116 ] ; xx [ 124 ] = xx [ 101 ] ;
pm_math_Vector3_cross_ra ( xx + 107 , xx + 122 , xx + 125 ) ; xx [ 117 ] = xx
[ 9 ] * xx [ 46 ] ; xx [ 118 ] = xx [ 117 ] * xx [ 18 ] ; xx [ 122 ] = xx [ 9
] * xx [ 117 ] ; xx [ 128 ] = xx [ 69 ] + ( xx [ 89 ] * xx [ 18 ] + xx [ 125
] ) * xx [ 47 ] + ( xx [ 77 ] + xx [ 117 ] * xx [ 24 ] ) * xx [ 47 ] ; xx [
129 ] = ( xx [ 18 ] * xx [ 116 ] + xx [ 126 ] ) * xx [ 47 ] + xx [ 47 ] * (
xx [ 71 ] * xx [ 24 ] - xx [ 118 ] ) ; xx [ 130 ] = ( xx [ 101 ] * xx [ 18 ]
+ xx [ 127 ] ) * xx [ 47 ] - ( xx [ 67 ] - ( xx [ 122 ] + xx [ 81 ] ) * xx [
47 ] ) - xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 128 , xx +
123 ) ; xx [ 9 ] = xx [ 45 ] - ( xx [ 98 ] + xx [ 88 ] ) * xx [ 47 ] ; xx [
69 ] = xx [ 43 ] + xx [ 42 ] ; xx [ 42 ] = xx [ 23 ] - xx [ 21 ] ; xx [ 126 ]
= - ( xx [ 55 ] * xx [ 9 ] ) ; xx [ 127 ] = - ( xx [ 56 ] * xx [ 9 ] ) ; xx [
128 ] = xx [ 69 ] * xx [ 110 ] + xx [ 48 ] * xx [ 42 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 126 , xx + 129 ) ; xx [ 21 ] =
xx [ 67 ] * xx [ 24 ] ; xx [ 23 ] = xx [ 72 ] * xx [ 24 ] ; xx [ 24 ] = xx [
112 ] + xx [ 102 ] ; xx [ 126 ] = - xx [ 21 ] ; xx [ 127 ] = - xx [ 23 ] ; xx
[ 128 ] = - xx [ 24 ] ; pm_math_Vector3_cross_ra ( xx + 107 , xx + 126 , xx +
132 ) ; xx [ 107 ] = xx [ 47 ] * ( xx [ 132 ] - xx [ 21 ] * xx [ 18 ] ) - xx
[ 72 ] + xx [ 47 ] * ( xx [ 22 ] * xx [ 117 ] - xx [ 70 ] ) ; xx [ 108 ] = xx
[ 67 ] + xx [ 47 ] * ( xx [ 133 ] - xx [ 23 ] * xx [ 18 ] ) - ( xx [ 82 ] +
xx [ 122 ] ) * xx [ 47 ] + xx [ 46 ] ; xx [ 109 ] = xx [ 47 ] * ( xx [ 134 ]
- xx [ 24 ] * xx [ 18 ] ) - ( xx [ 118 ] + xx [ 22 ] * xx [ 65 ] ) * xx [ 47
] ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 107 , xx + 21 ) ; xx [ 18 ]
= 0.05200961894323344 ; xx [ 24 ] = xx [ 38 ] * xx [ 18 ] ; xx [ 43 ] = xx [
18 ] * xx [ 30 ] ; xx [ 70 ] = xx [ 47 ] * ( xx [ 24 ] * xx [ 34 ] - xx [ 43
] * xx [ 40 ] ) ; xx [ 71 ] = - ( ( xx [ 43 ] * xx [ 34 ] + xx [ 24 ] * xx [
40 ] ) * xx [ 47 ] ) ; xx [ 72 ] = ( xx [ 43 ] * xx [ 30 ] + xx [ 38 ] * xx [
24 ] ) * xx [ 47 ] - xx [ 18 ] ; pm_math_Quaternion_xform_ra ( xx + 93 , xx +
70 , xx + 107 ) ; xx [ 24 ] = 0.01999999999999999 ; xx [ 43 ] = xx [ 24 ] *
xx [ 27 ] ; xx [ 65 ] = xx [ 24 ] * xx [ 26 ] ; xx [ 67 ] =
0.07160254037844391 ; xx [ 70 ] = xx [ 67 ] * xx [ 27 ] ; xx [ 71 ] = xx [ 67
] * xx [ 26 ] ; xx [ 72 ] = 0.05312177826491075 ; xx [ 77 ] = xx [ 72 ] * xx
[ 30 ] ; xx [ 81 ] = xx [ 38 ] * xx [ 72 ] ; xx [ 116 ] = xx [ 47 ] * ( xx [
77 ] * xx [ 40 ] - xx [ 81 ] * xx [ 34 ] ) ; xx [ 117 ] = ( xx [ 77 ] * xx [
34 ] + xx [ 81 ] * xx [ 40 ] ) * xx [ 47 ] ; xx [ 118 ] = xx [ 72 ] - ( xx [
77 ] * xx [ 30 ] + xx [ 38 ] * xx [ 81 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 93 , xx + 116 , xx + 126 ) ; xx [ 40 ] =
xx [ 56 ] * xx [ 28 ] ; xx [ 77 ] = xx [ 55 ] * xx [ 28 ] ; xx [ 81 ] = - xx
[ 77 ] ; xx [ 82 ] = xx [ 55 ] * xx [ 27 ] - xx [ 56 ] * xx [ 26 ] ; xx [ 116
] = xx [ 40 ] ; xx [ 117 ] = xx [ 81 ] ; xx [ 118 ] = xx [ 82 ] ;
pm_math_Vector3_cross_ra ( xx + 26 , xx + 116 , xx + 132 ) ; xx [ 88 ] = xx [
41 ] * xx [ 30 ] + xx [ 38 ] * xx [ 37 ] ; xx [ 116 ] = - xx [ 54 ] ; xx [
117 ] = - xx [ 39 ] ; xx [ 118 ] = xx [ 88 ] ; pm_math_Vector3_cross_ra ( xx
+ 59 , xx + 116 , xx + 135 ) ; xx [ 59 ] = xx [ 37 ] + xx [ 47 ] * ( xx [ 135
] - xx [ 68 ] ) ; xx [ 60 ] = ( xx [ 136 ] - xx [ 66 ] ) * xx [ 47 ] - xx [
41 ] ; xx [ 61 ] = ( xx [ 88 ] * xx [ 34 ] + xx [ 137 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 93 , xx + 59 , xx + 116 ) ; xx [ 30 ] =
0.0 ; xx [ 34 ] = xx [ 1 ] * state [ 34 ] ; xx [ 38 ] = cos ( xx [ 34 ] ) ;
xx [ 39 ] = xx [ 2 ] * xx [ 38 ] ; xx [ 54 ] = sin ( xx [ 34 ] ) ; xx [ 34 ]
= xx [ 5 ] * xx [ 54 ] ; xx [ 59 ] = xx [ 8 ] * xx [ 54 ] ; xx [ 54 ] = xx [
2 ] * xx [ 34 ] + xx [ 16 ] * xx [ 59 ] ; xx [ 60 ] = - xx [ 54 ] ; xx [ 61 ]
= xx [ 16 ] * xx [ 38 ] ; xx [ 38 ] = - xx [ 61 ] ; xx [ 66 ] = xx [ 16 ] *
xx [ 34 ] - xx [ 2 ] * xx [ 59 ] ; xx [ 135 ] = - xx [ 39 ] ; xx [ 136 ] = xx
[ 60 ] ; xx [ 137 ] = xx [ 38 ] ; xx [ 138 ] = xx [ 66 ] ; xx [ 34 ] = sqrt (
state [ 36 ] * state [ 36 ] + state [ 37 ] * state [ 37 ] + state [ 38 ] *
state [ 38 ] + state [ 39 ] * state [ 39 ] ) ; xx [ 59 ] = state [ 36 ] / xx
[ 34 ] ; xx [ 68 ] = state [ 38 ] / xx [ 34 ] ; xx [ 88 ] = xx [ 16 ] * xx [
59 ] - xx [ 2 ] * xx [ 68 ] ; xx [ 89 ] = state [ 37 ] / xx [ 34 ] ; xx [ 98
] = state [ 39 ] / xx [ 34 ] ; xx [ 34 ] = xx [ 16 ] * xx [ 89 ] + xx [ 2 ] *
xx [ 98 ] ; xx [ 101 ] = xx [ 16 ] * xx [ 68 ] + xx [ 2 ] * xx [ 59 ] ; xx [
102 ] = xx [ 16 ] * xx [ 98 ] - xx [ 2 ] * xx [ 89 ] ; xx [ 139 ] = xx [ 88 ]
; xx [ 140 ] = xx [ 34 ] ; xx [ 141 ] = xx [ 101 ] ; xx [ 142 ] = xx [ 102 ]
; pm_math_Quaternion_compose_ra ( xx + 135 , xx + 139 , xx + 143 ) ; xx [ 112
] = 0.28 ; xx [ 139 ] = xx [ 34 ] ; xx [ 140 ] = xx [ 101 ] ; xx [ 141 ] = xx
[ 102 ] ; xx [ 122 ] = xx [ 5 ] * xx [ 102 ] - xx [ 34 ] * xx [ 8 ] ; xx [
142 ] = xx [ 101 ] * xx [ 5 ] ; xx [ 147 ] = xx [ 101 ] * xx [ 8 ] ; xx [ 148
] = xx [ 122 ] ; xx [ 149 ] = - xx [ 142 ] ; pm_math_Vector3_cross_ra ( xx +
139 , xx + 147 , xx + 150 ) ; xx [ 139 ] = xx [ 112 ] * ( xx [ 151 ] - xx [
122 ] * xx [ 88 ] ) ; xx [ 122 ] = ( xx [ 8 ] + xx [ 47 ] * ( xx [ 152 ] + xx
[ 142 ] * xx [ 88 ] ) ) * xx [ 46 ] ; xx [ 140 ] = xx [ 145 ] * xx [ 139 ] +
xx [ 146 ] * xx [ 122 ] ; xx [ 141 ] = xx [ 144 ] * xx [ 139 ] ; xx [ 142 ] =
xx [ 144 ] * xx [ 122 ] ; xx [ 147 ] = - xx [ 140 ] ; xx [ 148 ] = xx [ 141 ]
; xx [ 149 ] = xx [ 142 ] ; pm_math_Vector3_cross_ra ( xx + 144 , xx + 147 ,
xx + 150 ) ; xx [ 147 ] = xx [ 46 ] * xx [ 102 ] ; xx [ 148 ] = xx [ 147 ] *
xx [ 88 ] ; xx [ 149 ] = xx [ 101 ] * xx [ 46 ] ; xx [ 153 ] = ( xx [ 148 ] +
xx [ 34 ] * xx [ 149 ] ) * xx [ 47 ] ; xx [ 154 ] = xx [ 101 ] * xx [ 149 ] ;
xx [ 155 ] = xx [ 147 ] * xx [ 102 ] ; xx [ 156 ] = xx [ 84 ] + xx [ 46 ] - (
xx [ 154 ] + xx [ 155 ] ) * xx [ 47 ] ; xx [ 157 ] = xx [ 149 ] * xx [ 88 ] ;
xx [ 158 ] = xx [ 47 ] * ( xx [ 34 ] * xx [ 147 ] - xx [ 157 ] ) - xx [ 86 ]
; xx [ 159 ] = - ( xx [ 8 ] * xx [ 153 ] ) ; xx [ 160 ] = xx [ 156 ] * xx [ 8
] - xx [ 158 ] * xx [ 5 ] ; xx [ 161 ] = xx [ 5 ] * xx [ 153 ] ;
pm_math_Quaternion_xform_ra ( xx + 135 , xx + 159 , xx + 162 ) ; xx [ 159 ] =
xx [ 54 ] * xx [ 76 ] ; xx [ 160 ] = xx [ 76 ] * xx [ 66 ] ; xx [ 161 ] = xx
[ 34 ] * xx [ 46 ] ; xx [ 165 ] = xx [ 161 ] * xx [ 88 ] ; xx [ 88 ] = xx [
34 ] * xx [ 161 ] ; xx [ 166 ] = - ( ( xx [ 157 ] + xx [ 161 ] * xx [ 102 ] )
* xx [ 47 ] ) ; xx [ 167 ] = xx [ 47 ] * ( xx [ 165 ] - xx [ 149 ] * xx [ 102
] ) ; xx [ 168 ] = ( xx [ 88 ] + xx [ 154 ] ) * xx [ 47 ] - xx [ 46 ] ;
pm_math_Quaternion_xform_ra ( xx + 135 , xx + 166 , xx + 169 ) ; xx [ 34 ] =
xx [ 46 ] * xx [ 145 ] ; xx [ 102 ] = xx [ 143 ] * xx [ 34 ] ; xx [ 149 ] =
xx [ 46 ] * xx [ 144 ] ; xx [ 154 ] = xx [ 46 ] * xx [ 146 ] ; xx [ 157 ] =
xx [ 143 ] * xx [ 154 ] ; xx [ 166 ] = xx [ 47 ] * ( xx [ 101 ] * xx [ 161 ]
- xx [ 148 ] ) ; xx [ 167 ] = xx [ 46 ] - ( xx [ 155 ] + xx [ 88 ] ) * xx [
47 ] ; xx [ 168 ] = ( xx [ 165 ] + xx [ 101 ] * xx [ 147 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 135 , xx + 166 , xx + 172 ) ; xx [ 88 ] =
xx [ 91 ] - ( xx [ 80 ] * xx [ 3 ] + xx [ 6 ] * xx [ 78 ] ) * xx [ 47 ] ; xx
[ 101 ] = xx [ 25 ] * xx [ 28 ] ; xx [ 147 ] = xx [ 143 ] * xx [ 149 ] ; xx [
148 ] = xx [ 146 ] * xx [ 154 ] ; xx [ 155 ] = xx [ 144 ] * xx [ 149 ] ; xx [
90 ] = xx [ 92 ] + ( xx [ 80 ] * xx [ 10 ] - xx [ 78 ] * xx [ 4 ] ) * xx [ 47
] ; xx [ 78 ] = xx [ 145 ] * xx [ 34 ] ; xx [ 80 ] = 0.07431243570379253 ; xx
[ 91 ] = 2.141422054707503e-3 ; xx [ 92 ] = 4.282844109415006e-3 ; xx [ 165 ]
= xx [ 49 ] * xx [ 80 ] ; xx [ 166 ] = - ( xx [ 49 ] * xx [ 91 ] ) ; xx [ 167
] = xx [ 92 ] * xx [ 58 ] - xx [ 57 ] * xx [ 80 ] ;
pm_math_Quaternion_xform_ra ( xx + 50 , xx + 165 , xx + 175 ) ; xx [ 165 ] =
xx [ 80 ] * xx [ 44 ] ; xx [ 166 ] = - ( xx [ 91 ] * xx [ 44 ] ) ; xx [ 167 ]
= xx [ 100 ] * xx [ 92 ] - xx [ 80 ] * xx [ 97 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 165 , xx + 178 ) ; xx [ 161 ] =
0.1486248714075851 ; xx [ 165 ] = xx [ 80 ] * xx [ 103 ] ; xx [ 166 ] = - (
xx [ 91 ] * xx [ 103 ] ) ; xx [ 167 ] = xx [ 91 ] * xx [ 99 ] - xx [ 161 ] *
xx [ 111 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 165 , xx + 181 ) ;
xx [ 165 ] = xx [ 80 ] * xx [ 9 ] ; xx [ 166 ] = - ( xx [ 91 ] * xx [ 9 ] ) ;
xx [ 167 ] = xx [ 92 ] * xx [ 42 ] - xx [ 69 ] * xx [ 161 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 165 , xx + 184 ) ; xx [ 165 ] =
0.07200961894323347 ; xx [ 166 ] = xx [ 165 ] * xx [ 27 ] ; xx [ 167 ] = xx [
165 ] * xx [ 26 ] ; xx [ 168 ] = 0.01848076211353309 ; xx [ 187 ] = xx [ 168
] * xx [ 27 ] ; xx [ 188 ] = xx [ 168 ] * xx [ 26 ] ; xx [ 189 ] = xx [ 91 ]
* xx [ 28 ] ; xx [ 190 ] = xx [ 80 ] * xx [ 28 ] ; xx [ 191 ] = xx [ 91 ] *
xx [ 26 ] + xx [ 80 ] * xx [ 27 ] ; xx [ 192 ] = xx [ 189 ] ; xx [ 193 ] = xx
[ 190 ] ; xx [ 194 ] = - xx [ 191 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx
+ 192 , xx + 195 ) ; xx [ 192 ] = 0.4995596447523598 ; xx [ 193 ] = xx [ 1 ]
* state [ 43 ] ; xx [ 194 ] = cos ( xx [ 193 ] ) ; xx [ 198 ] = xx [ 192 ] *
xx [ 194 ] ; xx [ 199 ] = sin ( xx [ 193 ] ) ; xx [ 193 ] = xx [ 5 ] * xx [
199 ] ; xx [ 200 ] = 0.8662794937748998 ; xx [ 201 ] = xx [ 8 ] * xx [ 199 ]
; xx [ 199 ] = xx [ 192 ] * xx [ 193 ] - xx [ 200 ] * xx [ 201 ] ; xx [ 202 ]
= xx [ 200 ] * xx [ 194 ] ; xx [ 194 ] = - xx [ 202 ] ; xx [ 203 ] = xx [ 192
] * xx [ 201 ] + xx [ 200 ] * xx [ 193 ] ; xx [ 193 ] = - xx [ 203 ] ; xx [
204 ] = - xx [ 198 ] ; xx [ 205 ] = xx [ 199 ] ; xx [ 206 ] = xx [ 194 ] ; xx
[ 207 ] = xx [ 193 ] ; xx [ 201 ] = sqrt ( state [ 45 ] * state [ 45 ] +
state [ 46 ] * state [ 46 ] + state [ 47 ] * state [ 47 ] + state [ 48 ] *
state [ 48 ] ) ; xx [ 208 ] = state [ 47 ] / xx [ 201 ] ; xx [ 209 ] = state
[ 45 ] / xx [ 201 ] ; xx [ 210 ] = xx [ 2 ] * xx [ 208 ] + xx [ 16 ] * xx [
209 ] ; xx [ 211 ] = state [ 48 ] / xx [ 201 ] ; xx [ 212 ] = state [ 46 ] /
xx [ 201 ] ; xx [ 201 ] = xx [ 2 ] * xx [ 211 ] - xx [ 16 ] * xx [ 212 ] ; xx
[ 213 ] = - xx [ 201 ] ; xx [ 214 ] = xx [ 2 ] * xx [ 209 ] - xx [ 16 ] * xx
[ 208 ] ; xx [ 215 ] = - xx [ 214 ] ; xx [ 216 ] = xx [ 2 ] * xx [ 212 ] + xx
[ 16 ] * xx [ 211 ] ; xx [ 217 ] = xx [ 210 ] ; xx [ 218 ] = xx [ 213 ] ; xx
[ 219 ] = xx [ 215 ] ; xx [ 220 ] = xx [ 216 ] ;
pm_math_Quaternion_compose_ra ( xx + 204 , xx + 217 , xx + 221 ) ; xx [ 217 ]
= xx [ 213 ] ; xx [ 218 ] = xx [ 215 ] ; xx [ 219 ] = xx [ 216 ] ; xx [ 213 ]
= xx [ 201 ] * xx [ 8 ] - xx [ 5 ] * xx [ 216 ] ; xx [ 215 ] = xx [ 214 ] *
xx [ 5 ] ; xx [ 225 ] = - ( xx [ 214 ] * xx [ 8 ] ) ; xx [ 226 ] = xx [ 213 ]
; xx [ 227 ] = - xx [ 215 ] ; pm_math_Vector3_cross_ra ( xx + 217 , xx + 225
, xx + 228 ) ; xx [ 217 ] = xx [ 112 ] * ( xx [ 229 ] - xx [ 213 ] * xx [ 210
] ) ; xx [ 213 ] = ( xx [ 8 ] + xx [ 47 ] * ( xx [ 230 ] + xx [ 215 ] * xx [
210 ] ) ) * xx [ 46 ] ; xx [ 215 ] = xx [ 223 ] * xx [ 217 ] + xx [ 224 ] *
xx [ 213 ] ; xx [ 218 ] = xx [ 222 ] * xx [ 217 ] ; xx [ 219 ] = xx [ 222 ] *
xx [ 213 ] ; xx [ 225 ] = - xx [ 215 ] ; xx [ 226 ] = xx [ 218 ] ; xx [ 227 ]
= xx [ 219 ] ; pm_math_Vector3_cross_ra ( xx + 222 , xx + 225 , xx + 228 ) ;
xx [ 220 ] = xx [ 46 ] * xx [ 216 ] ; xx [ 225 ] = xx [ 220 ] * xx [ 210 ] ;
xx [ 226 ] = xx [ 214 ] * xx [ 46 ] ; xx [ 227 ] = ( xx [ 225 ] + xx [ 201 ]
* xx [ 226 ] ) * xx [ 47 ] ; xx [ 231 ] = xx [ 214 ] * xx [ 226 ] ; xx [ 232
] = xx [ 220 ] * xx [ 216 ] ; xx [ 233 ] = xx [ 84 ] + xx [ 46 ] - ( xx [ 231
] + xx [ 232 ] ) * xx [ 47 ] ; xx [ 234 ] = xx [ 226 ] * xx [ 210 ] ; xx [
235 ] = xx [ 86 ] + xx [ 47 ] * ( xx [ 234 ] - xx [ 201 ] * xx [ 220 ] ) ; xx
[ 236 ] = - ( xx [ 8 ] * xx [ 227 ] ) ; xx [ 237 ] = xx [ 233 ] * xx [ 8 ] +
xx [ 235 ] * xx [ 5 ] ; xx [ 238 ] = - ( xx [ 5 ] * xx [ 227 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 204 , xx + 236 , xx + 239 ) ; xx [ 236 ] =
xx [ 199 ] * xx [ 76 ] ; xx [ 237 ] = xx [ 76 ] * xx [ 203 ] ; xx [ 238 ] =
xx [ 201 ] * xx [ 46 ] ; xx [ 242 ] = xx [ 238 ] * xx [ 210 ] ; xx [ 210 ] =
xx [ 201 ] * xx [ 238 ] ; xx [ 243 ] = ( xx [ 234 ] + xx [ 238 ] * xx [ 216 ]
) * xx [ 47 ] ; xx [ 244 ] = xx [ 47 ] * ( xx [ 226 ] * xx [ 216 ] - xx [ 242
] ) ; xx [ 245 ] = ( xx [ 210 ] + xx [ 231 ] ) * xx [ 47 ] - xx [ 46 ] ;
pm_math_Quaternion_xform_ra ( xx + 204 , xx + 243 , xx + 246 ) ; xx [ 201 ] =
xx [ 46 ] * xx [ 223 ] ; xx [ 216 ] = xx [ 221 ] * xx [ 201 ] ; xx [ 226 ] =
xx [ 46 ] * xx [ 222 ] ; xx [ 231 ] = xx [ 46 ] * xx [ 224 ] ; xx [ 234 ] =
xx [ 221 ] * xx [ 231 ] ; xx [ 243 ] = xx [ 47 ] * ( xx [ 214 ] * xx [ 238 ]
- xx [ 225 ] ) ; xx [ 244 ] = xx [ 46 ] - ( xx [ 232 ] + xx [ 210 ] ) * xx [
47 ] ; xx [ 245 ] = - ( ( xx [ 242 ] + xx [ 214 ] * xx [ 220 ] ) * xx [ 47 ]
) ; pm_math_Quaternion_xform_ra ( xx + 204 , xx + 243 , xx + 249 ) ; xx [ 210
] = xx [ 221 ] * xx [ 226 ] ; xx [ 214 ] = xx [ 224 ] * xx [ 231 ] ; xx [ 220
] = xx [ 222 ] * xx [ 226 ] ; xx [ 225 ] = xx [ 223 ] * xx [ 201 ] ; xx [ 232
] = 0.06466571354218477 ; xx [ 238 ] = 0.03667791270951477 ; xx [ 242 ] =
0.07335582541902955 ; xx [ 243 ] = xx [ 49 ] * xx [ 232 ] ; xx [ 244 ] = xx [
49 ] * xx [ 238 ] ; xx [ 245 ] = - ( xx [ 57 ] * xx [ 232 ] + xx [ 242 ] * xx
[ 58 ] ) ; pm_math_Quaternion_xform_ra ( xx + 50 , xx + 243 , xx + 252 ) ; xx
[ 243 ] = xx [ 232 ] * xx [ 44 ] ; xx [ 244 ] = xx [ 238 ] * xx [ 44 ] ; xx [
245 ] = - ( xx [ 232 ] * xx [ 97 ] + xx [ 100 ] * xx [ 242 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 243 , xx + 255 ) ; xx [ 243 ] =
0.1293314270843695 ; xx [ 258 ] = xx [ 232 ] * xx [ 103 ] ; xx [ 259 ] = xx [
238 ] * xx [ 103 ] ; xx [ 260 ] = - ( xx [ 243 ] * xx [ 111 ] + xx [ 238 ] *
xx [ 99 ] ) ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 258 , xx + 261 ) ;
xx [ 258 ] = xx [ 232 ] * xx [ 9 ] ; xx [ 259 ] = xx [ 238 ] * xx [ 9 ] ; xx
[ 260 ] = - ( xx [ 69 ] * xx [ 243 ] + xx [ 242 ] * xx [ 42 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 258 , xx + 264 ) ; xx [ 244 ] =
0.05200961894323338 ; xx [ 245 ] = xx [ 244 ] * xx [ 27 ] ; xx [ 258 ] = xx [
244 ] * xx [ 26 ] ; xx [ 259 ] = 0.05312177826491074 ; xx [ 260 ] = xx [ 259
] * xx [ 27 ] ; xx [ 267 ] = xx [ 259 ] * xx [ 26 ] ; xx [ 268 ] = xx [ 238 ]
* xx [ 28 ] ; xx [ 269 ] = xx [ 232 ] * xx [ 28 ] ; xx [ 270 ] = xx [ 238 ] *
xx [ 26 ] - xx [ 232 ] * xx [ 27 ] ; xx [ 271 ] = - xx [ 268 ] ; xx [ 272 ] =
xx [ 269 ] ; xx [ 273 ] = xx [ 270 ] ; pm_math_Vector3_cross_ra ( xx + 26 ,
xx + 271 , xx + 274 ) ; xx [ 271 ] = 0.8657710899485229 ; xx [ 272 ] = xx [ 1
] * state [ 52 ] ; xx [ 273 ] = cos ( xx [ 272 ] ) ; xx [ 277 ] = xx [ 271 ]
* xx [ 273 ] ; xx [ 278 ] = sin ( xx [ 272 ] ) ; xx [ 272 ] = xx [ 5 ] * xx [
278 ] ; xx [ 279 ] = 0.5004402260104068 ; xx [ 280 ] = xx [ 8 ] * xx [ 278 ]
; xx [ 278 ] = xx [ 271 ] * xx [ 272 ] - xx [ 279 ] * xx [ 280 ] ; xx [ 281 ]
= xx [ 279 ] * xx [ 273 ] ; xx [ 273 ] = - xx [ 281 ] ; xx [ 282 ] = xx [ 271
] * xx [ 280 ] + xx [ 279 ] * xx [ 272 ] ; xx [ 283 ] = xx [ 277 ] ; xx [ 284
] = xx [ 278 ] ; xx [ 285 ] = xx [ 273 ] ; xx [ 286 ] = xx [ 282 ] ; xx [ 272
] = sqrt ( state [ 54 ] * state [ 54 ] + state [ 55 ] * state [ 55 ] + state
[ 56 ] * state [ 56 ] + state [ 57 ] * state [ 57 ] ) ; xx [ 280 ] = state [
54 ] / xx [ 272 ] ; xx [ 287 ] = state [ 56 ] / xx [ 272 ] ; xx [ 288 ] = xx
[ 16 ] * xx [ 280 ] - xx [ 2 ] * xx [ 287 ] ; xx [ 289 ] = state [ 55 ] / xx
[ 272 ] ; xx [ 290 ] = state [ 57 ] / xx [ 272 ] ; xx [ 272 ] = xx [ 16 ] *
xx [ 289 ] + xx [ 2 ] * xx [ 290 ] ; xx [ 291 ] = xx [ 16 ] * xx [ 287 ] + xx
[ 2 ] * xx [ 280 ] ; xx [ 292 ] = xx [ 16 ] * xx [ 290 ] - xx [ 2 ] * xx [
289 ] ; xx [ 293 ] = xx [ 288 ] ; xx [ 294 ] = xx [ 272 ] ; xx [ 295 ] = xx [
291 ] ; xx [ 296 ] = xx [ 292 ] ; pm_math_Quaternion_compose_ra ( xx + 283 ,
xx + 293 , xx + 297 ) ; xx [ 293 ] = xx [ 272 ] ; xx [ 294 ] = xx [ 291 ] ;
xx [ 295 ] = xx [ 292 ] ; xx [ 296 ] = xx [ 5 ] * xx [ 292 ] - xx [ 272 ] *
xx [ 8 ] ; xx [ 301 ] = xx [ 291 ] * xx [ 5 ] ; xx [ 302 ] = xx [ 291 ] * xx
[ 8 ] ; xx [ 303 ] = xx [ 296 ] ; xx [ 304 ] = - xx [ 301 ] ;
pm_math_Vector3_cross_ra ( xx + 293 , xx + 302 , xx + 305 ) ; xx [ 293 ] = xx
[ 112 ] * ( xx [ 306 ] - xx [ 296 ] * xx [ 288 ] ) ; xx [ 294 ] = ( xx [ 8 ]
+ xx [ 47 ] * ( xx [ 307 ] + xx [ 301 ] * xx [ 288 ] ) ) * xx [ 46 ] ; xx [
295 ] = xx [ 299 ] * xx [ 293 ] + xx [ 300 ] * xx [ 294 ] ; xx [ 296 ] = xx [
298 ] * xx [ 293 ] ; xx [ 301 ] = xx [ 298 ] * xx [ 294 ] ; xx [ 302 ] = - xx
[ 295 ] ; xx [ 303 ] = xx [ 296 ] ; xx [ 304 ] = xx [ 301 ] ;
pm_math_Vector3_cross_ra ( xx + 298 , xx + 302 , xx + 305 ) ; xx [ 302 ] = xx
[ 46 ] * xx [ 292 ] ; xx [ 303 ] = xx [ 302 ] * xx [ 288 ] ; xx [ 304 ] = xx
[ 291 ] * xx [ 46 ] ; xx [ 308 ] = ( xx [ 303 ] + xx [ 272 ] * xx [ 304 ] ) *
xx [ 47 ] ; xx [ 309 ] = xx [ 291 ] * xx [ 304 ] ; xx [ 310 ] = xx [ 302 ] *
xx [ 292 ] ; xx [ 311 ] = xx [ 84 ] + xx [ 46 ] - ( xx [ 309 ] + xx [ 310 ] )
* xx [ 47 ] ; xx [ 312 ] = xx [ 304 ] * xx [ 288 ] ; xx [ 313 ] = xx [ 47 ] *
( xx [ 272 ] * xx [ 302 ] - xx [ 312 ] ) - xx [ 86 ] ; xx [ 314 ] = - ( xx [
8 ] * xx [ 308 ] ) ; xx [ 315 ] = xx [ 311 ] * xx [ 8 ] - xx [ 313 ] * xx [ 5
] ; xx [ 316 ] = xx [ 5 ] * xx [ 308 ] ; pm_math_Quaternion_xform_ra ( xx +
283 , xx + 314 , xx + 317 ) ; xx [ 314 ] = xx [ 278 ] * xx [ 76 ] ; xx [ 315
] = xx [ 76 ] * xx [ 282 ] ; xx [ 316 ] = xx [ 272 ] * xx [ 46 ] ; xx [ 320 ]
= xx [ 316 ] * xx [ 288 ] ; xx [ 288 ] = xx [ 272 ] * xx [ 316 ] ; xx [ 321 ]
= - ( ( xx [ 312 ] + xx [ 316 ] * xx [ 292 ] ) * xx [ 47 ] ) ; xx [ 322 ] =
xx [ 47 ] * ( xx [ 320 ] - xx [ 304 ] * xx [ 292 ] ) ; xx [ 323 ] = ( xx [
288 ] + xx [ 309 ] ) * xx [ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra (
xx + 283 , xx + 321 , xx + 324 ) ; xx [ 272 ] = xx [ 46 ] * xx [ 299 ] ; xx [
292 ] = xx [ 297 ] * xx [ 272 ] ; xx [ 304 ] = xx [ 46 ] * xx [ 298 ] ; xx [
309 ] = xx [ 46 ] * xx [ 300 ] ; xx [ 312 ] = xx [ 297 ] * xx [ 309 ] ; xx [
321 ] = xx [ 47 ] * ( xx [ 291 ] * xx [ 316 ] - xx [ 303 ] ) ; xx [ 322 ] =
xx [ 46 ] - ( xx [ 310 ] + xx [ 288 ] ) * xx [ 47 ] ; xx [ 323 ] = ( xx [ 320
] + xx [ 291 ] * xx [ 302 ] ) * xx [ 47 ] ; pm_math_Quaternion_xform_ra ( xx
+ 283 , xx + 321 , xx + 327 ) ; xx [ 288 ] = xx [ 297 ] * xx [ 304 ] ; xx [
291 ] = xx [ 300 ] * xx [ 309 ] ; xx [ 302 ] = xx [ 298 ] * xx [ 304 ] ; xx [
303 ] = xx [ 299 ] * xx [ 272 ] ; xx [ 310 ] = 0.0640968609353203 ; xx [ 316
] = 0.03766319432662211 ; xx [ 320 ] = 0.07532638865324422 ; xx [ 321 ] = - (
xx [ 49 ] * xx [ 310 ] ) ; xx [ 322 ] = xx [ 49 ] * xx [ 316 ] ; xx [ 323 ] =
xx [ 57 ] * xx [ 310 ] - xx [ 320 ] * xx [ 58 ] ; pm_math_Quaternion_xform_ra
( xx + 50 , xx + 321 , xx + 330 ) ; xx [ 321 ] = - ( xx [ 310 ] * xx [ 44 ] )
; xx [ 322 ] = xx [ 316 ] * xx [ 44 ] ; xx [ 323 ] = xx [ 310 ] * xx [ 97 ] -
xx [ 100 ] * xx [ 320 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 321 ,
xx + 333 ) ; xx [ 321 ] = 0.1281937218706406 ; xx [ 336 ] = - ( xx [ 310 ] *
xx [ 103 ] ) ; xx [ 337 ] = xx [ 316 ] * xx [ 103 ] ; xx [ 338 ] = xx [ 321 ]
* xx [ 111 ] - xx [ 316 ] * xx [ 99 ] ; pm_math_Quaternion_xform_ra ( xx + 25
, xx + 336 , xx + 339 ) ; xx [ 336 ] = - ( xx [ 310 ] * xx [ 9 ] ) ; xx [ 337
] = xx [ 316 ] * xx [ 9 ] ; xx [ 338 ] = xx [ 69 ] * xx [ 321 ] - xx [ 320 ]
* xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 336 , xx + 342 ) ;
xx [ 322 ] = 0.07200961894323345 ; xx [ 323 ] = xx [ 322 ] * xx [ 27 ] ; xx [
336 ] = xx [ 322 ] * xx [ 26 ] ; xx [ 337 ] = 0.01848076211353319 ; xx [ 338
] = xx [ 337 ] * xx [ 27 ] ; xx [ 345 ] = xx [ 337 ] * xx [ 26 ] ; xx [ 346 ]
= xx [ 316 ] * xx [ 28 ] ; xx [ 347 ] = xx [ 310 ] * xx [ 28 ] ; xx [ 348 ] =
- xx [ 347 ] ; xx [ 349 ] = xx [ 316 ] * xx [ 26 ] + xx [ 310 ] * xx [ 27 ] ;
xx [ 350 ] = - xx [ 346 ] ; xx [ 351 ] = xx [ 348 ] ; xx [ 352 ] = xx [ 349 ]
; pm_math_Vector3_cross_ra ( xx + 26 , xx + 350 , xx + 353 ) ; xx [ 350 ] =
0.8662794937748999 ; xx [ 351 ] = xx [ 1 ] * state [ 16 ] ; xx [ 352 ] = cos
( xx [ 351 ] ) ; xx [ 356 ] = xx [ 350 ] * xx [ 352 ] ; xx [ 357 ] = sin ( xx
[ 351 ] ) ; xx [ 351 ] = xx [ 5 ] * xx [ 357 ] ; xx [ 358 ] =
0.4995596447523596 ; xx [ 359 ] = xx [ 8 ] * xx [ 357 ] ; xx [ 357 ] = xx [
350 ] * xx [ 351 ] + xx [ 358 ] * xx [ 359 ] ; xx [ 360 ] = - xx [ 357 ] ; xx
[ 361 ] = xx [ 358 ] * xx [ 352 ] ; xx [ 352 ] = - xx [ 361 ] ; xx [ 362 ] =
xx [ 358 ] * xx [ 351 ] - xx [ 350 ] * xx [ 359 ] ; xx [ 363 ] = - xx [ 356 ]
; xx [ 364 ] = xx [ 360 ] ; xx [ 365 ] = xx [ 352 ] ; xx [ 366 ] = xx [ 362 ]
; xx [ 351 ] = sqrt ( state [ 18 ] * state [ 18 ] + state [ 19 ] * state [ 19
] + state [ 20 ] * state [ 20 ] + state [ 21 ] * state [ 21 ] ) ; xx [ 359 ]
= state [ 18 ] / xx [ 351 ] ; xx [ 367 ] = state [ 20 ] / xx [ 351 ] ; xx [
368 ] = xx [ 16 ] * xx [ 359 ] - xx [ 2 ] * xx [ 367 ] ; xx [ 369 ] = state [
19 ] / xx [ 351 ] ; xx [ 370 ] = state [ 21 ] / xx [ 351 ] ; xx [ 351 ] = xx
[ 16 ] * xx [ 369 ] + xx [ 2 ] * xx [ 370 ] ; xx [ 371 ] = xx [ 16 ] * xx [
367 ] + xx [ 2 ] * xx [ 359 ] ; xx [ 372 ] = xx [ 16 ] * xx [ 370 ] - xx [ 2
] * xx [ 369 ] ; xx [ 373 ] = xx [ 368 ] ; xx [ 374 ] = xx [ 351 ] ; xx [ 375
] = xx [ 371 ] ; xx [ 376 ] = xx [ 372 ] ; pm_math_Quaternion_compose_ra ( xx
+ 363 , xx + 373 , xx + 377 ) ; xx [ 373 ] = xx [ 351 ] ; xx [ 374 ] = xx [
371 ] ; xx [ 375 ] = xx [ 372 ] ; xx [ 376 ] = xx [ 5 ] * xx [ 372 ] - xx [
351 ] * xx [ 8 ] ; xx [ 381 ] = xx [ 371 ] * xx [ 5 ] ; xx [ 382 ] = xx [ 371
] * xx [ 8 ] ; xx [ 383 ] = xx [ 376 ] ; xx [ 384 ] = - xx [ 381 ] ;
pm_math_Vector3_cross_ra ( xx + 373 , xx + 382 , xx + 385 ) ; xx [ 373 ] = xx
[ 112 ] * ( xx [ 386 ] - xx [ 376 ] * xx [ 368 ] ) ; xx [ 374 ] = ( xx [ 8 ]
+ xx [ 47 ] * ( xx [ 387 ] + xx [ 381 ] * xx [ 368 ] ) ) * xx [ 46 ] ; xx [
375 ] = xx [ 379 ] * xx [ 373 ] + xx [ 380 ] * xx [ 374 ] ; xx [ 376 ] = xx [
378 ] * xx [ 373 ] ; xx [ 381 ] = xx [ 378 ] * xx [ 374 ] ; xx [ 382 ] = - xx
[ 375 ] ; xx [ 383 ] = xx [ 376 ] ; xx [ 384 ] = xx [ 381 ] ;
pm_math_Vector3_cross_ra ( xx + 378 , xx + 382 , xx + 385 ) ; xx [ 382 ] = xx
[ 46 ] * xx [ 372 ] ; xx [ 383 ] = xx [ 382 ] * xx [ 368 ] ; xx [ 384 ] = xx
[ 371 ] * xx [ 46 ] ; xx [ 388 ] = ( xx [ 383 ] + xx [ 351 ] * xx [ 384 ] ) *
xx [ 47 ] ; xx [ 389 ] = xx [ 371 ] * xx [ 384 ] ; xx [ 390 ] = xx [ 382 ] *
xx [ 372 ] ; xx [ 391 ] = xx [ 84 ] + xx [ 46 ] - ( xx [ 389 ] + xx [ 390 ] )
* xx [ 47 ] ; xx [ 392 ] = xx [ 384 ] * xx [ 368 ] ; xx [ 393 ] = xx [ 47 ] *
( xx [ 351 ] * xx [ 382 ] - xx [ 392 ] ) - xx [ 86 ] ; xx [ 394 ] = - ( xx [
8 ] * xx [ 388 ] ) ; xx [ 395 ] = xx [ 391 ] * xx [ 8 ] - xx [ 393 ] * xx [ 5
] ; xx [ 396 ] = xx [ 5 ] * xx [ 388 ] ; pm_math_Quaternion_xform_ra ( xx +
363 , xx + 394 , xx + 397 ) ; xx [ 394 ] = xx [ 357 ] * xx [ 76 ] ; xx [ 395
] = xx [ 76 ] * xx [ 362 ] ; xx [ 396 ] = xx [ 351 ] * xx [ 46 ] ; xx [ 400 ]
= xx [ 396 ] * xx [ 368 ] ; xx [ 368 ] = xx [ 351 ] * xx [ 396 ] ; xx [ 401 ]
= - ( ( xx [ 392 ] + xx [ 396 ] * xx [ 372 ] ) * xx [ 47 ] ) ; xx [ 402 ] =
xx [ 47 ] * ( xx [ 400 ] - xx [ 384 ] * xx [ 372 ] ) ; xx [ 403 ] = ( xx [
368 ] + xx [ 389 ] ) * xx [ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra (
xx + 363 , xx + 401 , xx + 404 ) ; xx [ 351 ] = xx [ 46 ] * xx [ 379 ] ; xx [
372 ] = xx [ 377 ] * xx [ 351 ] ; xx [ 384 ] = xx [ 46 ] * xx [ 378 ] ; xx [
389 ] = xx [ 46 ] * xx [ 380 ] ; xx [ 392 ] = xx [ 377 ] * xx [ 389 ] ; xx [
401 ] = xx [ 47 ] * ( xx [ 371 ] * xx [ 396 ] - xx [ 383 ] ) ; xx [ 402 ] =
xx [ 46 ] - ( xx [ 390 ] + xx [ 368 ] ) * xx [ 47 ] ; xx [ 403 ] = ( xx [ 400
] + xx [ 371 ] * xx [ 382 ] ) * xx [ 47 ] ; pm_math_Quaternion_xform_ra ( xx
+ 363 , xx + 401 , xx + 407 ) ; xx [ 368 ] = xx [ 377 ] * xx [ 384 ] ; xx [
371 ] = xx [ 380 ] * xx [ 389 ] ; xx [ 382 ] = xx [ 378 ] * xx [ 384 ] ; xx [
383 ] = xx [ 379 ] * xx [ 351 ] ; xx [ 390 ] = 0.03901074375149718 ; xx [ 396
] = 0.06328574610922835 ; xx [ 400 ] = 0.1265714922184567 ; xx [ 401 ] = - (
xx [ 49 ] * xx [ 390 ] ) ; xx [ 402 ] = - ( xx [ 49 ] * xx [ 396 ] ) ; xx [
403 ] = xx [ 57 ] * xx [ 390 ] + xx [ 400 ] * xx [ 58 ] ;
pm_math_Quaternion_xform_ra ( xx + 50 , xx + 401 , xx + 410 ) ; xx [ 49 ] = -
( xx [ 390 ] * xx [ 44 ] ) ; xx [ 50 ] = - ( xx [ 396 ] * xx [ 44 ] ) ; xx [
51 ] = xx [ 390 ] * xx [ 97 ] + xx [ 100 ] * xx [ 400 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 49 , xx + 401 ) ; xx [ 44 ] =
0.07802148750299437 ; xx [ 49 ] = - ( xx [ 390 ] * xx [ 103 ] ) ; xx [ 50 ] =
- ( xx [ 396 ] * xx [ 103 ] ) ; xx [ 51 ] = xx [ 44 ] * xx [ 111 ] + xx [ 396
] * xx [ 99 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 49 , xx + 413 )
; xx [ 49 ] = - ( xx [ 390 ] * xx [ 9 ] ) ; xx [ 50 ] = - ( xx [ 396 ] * xx [
9 ] ) ; xx [ 51 ] = xx [ 69 ] * xx [ 44 ] + xx [ 400 ] * xx [ 42 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 49 , xx + 416 ) ; xx [ 9 ] =
0.02000000000000002 ; xx [ 42 ] = xx [ 9 ] * xx [ 27 ] ; xx [ 49 ] = xx [ 9 ]
* xx [ 26 ] ; xx [ 50 ] = 0.07160254037844389 ; xx [ 51 ] = xx [ 50 ] * xx [
27 ] ; xx [ 52 ] = xx [ 50 ] * xx [ 26 ] ; xx [ 53 ] = xx [ 396 ] * xx [ 28 ]
; xx [ 57 ] = xx [ 390 ] * xx [ 28 ] ; xx [ 58 ] = - xx [ 57 ] ; xx [ 69 ] =
xx [ 390 ] * xx [ 27 ] - xx [ 396 ] * xx [ 26 ] ; xx [ 419 ] = xx [ 53 ] ; xx
[ 420 ] = xx [ 58 ] ; xx [ 421 ] = xx [ 69 ] ; pm_math_Vector3_cross_ra ( xx
+ 26 , xx + 419 , xx + 422 ) ; xx [ 97 ] = xx [ 1 ] * state [ 25 ] ; xx [ 99
] = cos ( xx [ 97 ] ) ; xx [ 100 ] = xx [ 16 ] * xx [ 99 ] ; xx [ 103 ] = sin
( xx [ 97 ] ) ; xx [ 97 ] = xx [ 5 ] * xx [ 103 ] ; xx [ 111 ] = xx [ 8 ] *
xx [ 103 ] ; xx [ 103 ] = xx [ 16 ] * xx [ 97 ] - xx [ 2 ] * xx [ 111 ] ; xx
[ 419 ] = xx [ 2 ] * xx [ 99 ] ; xx [ 99 ] = - xx [ 419 ] ; xx [ 420 ] = xx [
16 ] * xx [ 111 ] + xx [ 2 ] * xx [ 97 ] ; xx [ 97 ] = - xx [ 420 ] ; xx [
425 ] = - xx [ 100 ] ; xx [ 426 ] = xx [ 103 ] ; xx [ 427 ] = xx [ 99 ] ; xx
[ 428 ] = xx [ 97 ] ; xx [ 111 ] = sqrt ( state [ 27 ] * state [ 27 ] + state
[ 28 ] * state [ 28 ] + state [ 29 ] * state [ 29 ] + state [ 30 ] * state [
30 ] ) ; xx [ 421 ] = state [ 29 ] / xx [ 111 ] ; xx [ 429 ] = state [ 27 ] /
xx [ 111 ] ; xx [ 430 ] = xx [ 2 ] * xx [ 421 ] + xx [ 16 ] * xx [ 429 ] ; xx
[ 431 ] = state [ 30 ] / xx [ 111 ] ; xx [ 432 ] = state [ 28 ] / xx [ 111 ]
; xx [ 111 ] = xx [ 2 ] * xx [ 431 ] - xx [ 16 ] * xx [ 432 ] ; xx [ 433 ] =
- xx [ 111 ] ; xx [ 434 ] = xx [ 2 ] * xx [ 429 ] - xx [ 16 ] * xx [ 421 ] ;
xx [ 435 ] = - xx [ 434 ] ; xx [ 436 ] = xx [ 2 ] * xx [ 432 ] + xx [ 16 ] *
xx [ 431 ] ; xx [ 437 ] = xx [ 430 ] ; xx [ 438 ] = xx [ 433 ] ; xx [ 439 ] =
xx [ 435 ] ; xx [ 440 ] = xx [ 436 ] ; pm_math_Quaternion_compose_ra ( xx +
425 , xx + 437 , xx + 441 ) ; xx [ 437 ] = xx [ 433 ] ; xx [ 438 ] = xx [ 435
] ; xx [ 439 ] = xx [ 436 ] ; xx [ 433 ] = xx [ 111 ] * xx [ 8 ] - xx [ 5 ] *
xx [ 436 ] ; xx [ 435 ] = xx [ 434 ] * xx [ 5 ] ; xx [ 445 ] = - ( xx [ 434 ]
* xx [ 8 ] ) ; xx [ 446 ] = xx [ 433 ] ; xx [ 447 ] = - xx [ 435 ] ;
pm_math_Vector3_cross_ra ( xx + 437 , xx + 445 , xx + 448 ) ; xx [ 437 ] = xx
[ 112 ] * ( xx [ 449 ] - xx [ 433 ] * xx [ 430 ] ) ; xx [ 433 ] = ( xx [ 8 ]
+ xx [ 47 ] * ( xx [ 450 ] + xx [ 435 ] * xx [ 430 ] ) ) * xx [ 46 ] ; xx [
435 ] = xx [ 443 ] * xx [ 437 ] + xx [ 444 ] * xx [ 433 ] ; xx [ 438 ] = xx [
442 ] * xx [ 437 ] ; xx [ 439 ] = xx [ 442 ] * xx [ 433 ] ; xx [ 445 ] = - xx
[ 435 ] ; xx [ 446 ] = xx [ 438 ] ; xx [ 447 ] = xx [ 439 ] ;
pm_math_Vector3_cross_ra ( xx + 442 , xx + 445 , xx + 448 ) ; xx [ 440 ] = xx
[ 46 ] * xx [ 436 ] ; xx [ 445 ] = xx [ 440 ] * xx [ 430 ] ; xx [ 446 ] = xx
[ 434 ] * xx [ 46 ] ; xx [ 447 ] = ( xx [ 445 ] + xx [ 111 ] * xx [ 446 ] ) *
xx [ 47 ] ; xx [ 451 ] = xx [ 434 ] * xx [ 446 ] ; xx [ 452 ] = xx [ 440 ] *
xx [ 436 ] ; xx [ 453 ] = xx [ 84 ] + xx [ 46 ] - ( xx [ 451 ] + xx [ 452 ] )
* xx [ 47 ] ; xx [ 454 ] = xx [ 446 ] * xx [ 430 ] ; xx [ 455 ] = xx [ 86 ] +
xx [ 47 ] * ( xx [ 454 ] - xx [ 111 ] * xx [ 440 ] ) ; xx [ 456 ] = - ( xx [
8 ] * xx [ 447 ] ) ; xx [ 457 ] = xx [ 453 ] * xx [ 8 ] + xx [ 455 ] * xx [ 5
] ; xx [ 458 ] = - ( xx [ 5 ] * xx [ 447 ] ) ; pm_math_Quaternion_xform_ra (
xx + 425 , xx + 456 , xx + 459 ) ; xx [ 456 ] = xx [ 103 ] * xx [ 76 ] ; xx [
457 ] = xx [ 76 ] * xx [ 420 ] ; xx [ 458 ] = xx [ 111 ] * xx [ 46 ] ; xx [
462 ] = xx [ 458 ] * xx [ 430 ] ; xx [ 430 ] = xx [ 111 ] * xx [ 458 ] ; xx [
463 ] = ( xx [ 454 ] + xx [ 458 ] * xx [ 436 ] ) * xx [ 47 ] ; xx [ 464 ] =
xx [ 47 ] * ( xx [ 446 ] * xx [ 436 ] - xx [ 462 ] ) ; xx [ 465 ] = ( xx [
430 ] + xx [ 451 ] ) * xx [ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra (
xx + 425 , xx + 463 , xx + 466 ) ; xx [ 111 ] = xx [ 46 ] * xx [ 443 ] ; xx [
436 ] = xx [ 441 ] * xx [ 111 ] ; xx [ 446 ] = xx [ 46 ] * xx [ 442 ] ; xx [
451 ] = xx [ 46 ] * xx [ 444 ] ; xx [ 454 ] = xx [ 441 ] * xx [ 451 ] ; xx [
463 ] = xx [ 47 ] * ( xx [ 434 ] * xx [ 458 ] - xx [ 445 ] ) ; xx [ 464 ] =
xx [ 46 ] - ( xx [ 452 ] + xx [ 430 ] ) * xx [ 47 ] ; xx [ 465 ] = - ( ( xx [
462 ] + xx [ 434 ] * xx [ 440 ] ) * xx [ 47 ] ) ; pm_math_Quaternion_xform_ra
( xx + 425 , xx + 463 , xx + 469 ) ; xx [ 430 ] = xx [ 441 ] * xx [ 446 ] ;
xx [ 434 ] = xx [ 444 ] * xx [ 451 ] ; xx [ 440 ] = xx [ 442 ] * xx [ 446 ] ;
xx [ 445 ] = xx [ 443 ] * xx [ 111 ] ; xx [ 472 ] = xx [ 62 ] + xx [ 87 ] ;
xx [ 473 ] = xx [ 104 ] + xx [ 113 ] ; xx [ 474 ] = xx [ 119 ] + xx [ 123 ] ;
xx [ 475 ] = xx [ 129 ] + xx [ 21 ] ; xx [ 476 ] = xx [ 107 ] - ( xx [ 25 ] *
xx [ 43 ] + xx [ 28 ] * xx [ 65 ] ) * xx [ 47 ] ; xx [ 477 ] = ( xx [ 25 ] *
xx [ 70 ] + xx [ 28 ] * xx [ 71 ] ) * xx [ 47 ] + xx [ 126 ] ; xx [ 478 ] =
xx [ 47 ] * ( xx [ 132 ] + xx [ 25 ] * xx [ 40 ] ) + xx [ 116 ] - xx [ 55 ] ;
xx [ 479 ] = xx [ 30 ] ; xx [ 480 ] = xx [ 30 ] ; xx [ 481 ] = xx [ 30 ] ; xx
[ 482 ] = xx [ 30 ] ; xx [ 483 ] = xx [ 30 ] ; xx [ 484 ] = xx [ 30 ] ; xx [
485 ] = xx [ 30 ] ; xx [ 486 ] = xx [ 30 ] ; xx [ 487 ] = - ( xx [ 47 ] * (
xx [ 150 ] - xx [ 140 ] * xx [ 143 ] ) + xx [ 162 ] + xx [ 47 ] * ( xx [ 159
] * xx [ 61 ] + xx [ 160 ] * xx [ 39 ] ) ) ; xx [ 488 ] = xx [ 30 ] ; xx [
489 ] = - ( xx [ 169 ] - ( xx [ 102 ] + xx [ 146 ] * xx [ 149 ] ) * xx [ 47 ]
) ; xx [ 490 ] = - ( xx [ 47 ] * ( xx [ 145 ] * xx [ 149 ] - xx [ 157 ] ) +
xx [ 172 ] ) ; xx [ 491 ] = xx [ 30 ] ; xx [ 492 ] = xx [ 30 ] ; xx [ 493 ] =
xx [ 30 ] ; xx [ 494 ] = xx [ 30 ] ; xx [ 495 ] = xx [ 30 ] ; xx [ 496 ] = xx
[ 30 ] ; xx [ 497 ] = xx [ 30 ] ; xx [ 498 ] = xx [ 30 ] ; xx [ 499 ] = xx [
63 ] + xx [ 88 ] + xx [ 76 ] ; xx [ 500 ] = xx [ 105 ] + xx [ 114 ] ; xx [
501 ] = xx [ 120 ] + xx [ 124 ] ; xx [ 502 ] = xx [ 130 ] + xx [ 22 ] ; xx [
503 ] = xx [ 47 ] * ( xx [ 25 ] * xx [ 65 ] - xx [ 28 ] * xx [ 43 ] ) + xx [
108 ] ; xx [ 504 ] = xx [ 47 ] * ( xx [ 28 ] * xx [ 70 ] - xx [ 25 ] * xx [
71 ] ) + xx [ 127 ] ; xx [ 505 ] = ( xx [ 133 ] - xx [ 55 ] * xx [ 101 ] ) *
xx [ 47 ] + xx [ 117 ] - xx [ 56 ] ; xx [ 506 ] = xx [ 30 ] ; xx [ 507 ] = xx
[ 30 ] ; xx [ 508 ] = xx [ 30 ] ; xx [ 509 ] = xx [ 30 ] ; xx [ 510 ] = xx [
30 ] ; xx [ 511 ] = xx [ 30 ] ; xx [ 512 ] = xx [ 30 ] ; xx [ 513 ] = xx [ 30
] ; xx [ 514 ] = - ( xx [ 122 ] + ( xx [ 143 ] * xx [ 141 ] + xx [ 151 ] ) *
xx [ 47 ] + xx [ 163 ] - ( xx [ 160 ] * xx [ 66 ] + xx [ 54 ] * xx [ 159 ] )
* xx [ 47 ] + xx [ 76 ] ) ; xx [ 515 ] = xx [ 30 ] ; xx [ 516 ] = - ( xx [ 47
] * ( xx [ 147 ] - xx [ 146 ] * xx [ 34 ] ) + xx [ 170 ] ) ; xx [ 517 ] = - (
xx [ 173 ] - ( xx [ 148 ] + xx [ 155 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [ 518
] = xx [ 30 ] ; xx [ 519 ] = xx [ 30 ] ; xx [ 520 ] = xx [ 30 ] ; xx [ 521 ]
= xx [ 30 ] ; xx [ 522 ] = xx [ 30 ] ; xx [ 523 ] = xx [ 30 ] ; xx [ 524 ] =
xx [ 30 ] ; xx [ 525 ] = xx [ 30 ] ; xx [ 526 ] = xx [ 64 ] + xx [ 90 ] ; xx
[ 527 ] = xx [ 106 ] + xx [ 115 ] ; xx [ 528 ] = xx [ 121 ] + xx [ 125 ] ; xx
[ 529 ] = xx [ 131 ] + xx [ 23 ] ; xx [ 530 ] = xx [ 109 ] + ( xx [ 26 ] * xx
[ 65 ] + xx [ 27 ] * xx [ 43 ] ) * xx [ 47 ] - xx [ 24 ] ; xx [ 531 ] = xx [
128 ] - ( xx [ 26 ] * xx [ 71 ] + xx [ 27 ] * xx [ 70 ] ) * xx [ 47 ] + xx [
67 ] ; xx [ 532 ] = ( xx [ 25 ] * xx [ 82 ] + xx [ 134 ] ) * xx [ 47 ] + xx [
118 ] ; xx [ 533 ] = xx [ 30 ] ; xx [ 534 ] = xx [ 30 ] ; xx [ 535 ] = xx [
30 ] ; xx [ 536 ] = xx [ 30 ] ; xx [ 537 ] = xx [ 30 ] ; xx [ 538 ] = xx [ 30
] ; xx [ 539 ] = xx [ 30 ] ; xx [ 540 ] = xx [ 30 ] ; xx [ 541 ] = - ( ( xx [
143 ] * xx [ 142 ] + xx [ 152 ] ) * xx [ 47 ] - xx [ 139 ] + xx [ 164 ] + (
xx [ 159 ] * xx [ 39 ] - xx [ 160 ] * xx [ 61 ] ) * xx [ 47 ] ) ; xx [ 542 ]
= xx [ 30 ] ; xx [ 543 ] = - ( xx [ 171 ] + ( xx [ 155 ] + xx [ 78 ] ) * xx [
47 ] - xx [ 46 ] ) ; xx [ 544 ] = - ( ( xx [ 147 ] + xx [ 145 ] * xx [ 154 ]
) * xx [ 47 ] + xx [ 174 ] ) ; xx [ 545 ] = xx [ 30 ] ; xx [ 546 ] = xx [ 30
] ; xx [ 547 ] = xx [ 30 ] ; xx [ 548 ] = xx [ 30 ] ; xx [ 549 ] = xx [ 30 ]
; xx [ 550 ] = xx [ 30 ] ; xx [ 551 ] = xx [ 30 ] ; xx [ 552 ] = xx [ 30 ] ;
xx [ 553 ] = xx [ 175 ] + xx [ 87 ] ; xx [ 554 ] = xx [ 178 ] + xx [ 113 ] ;
xx [ 555 ] = xx [ 181 ] + xx [ 123 ] ; xx [ 556 ] = xx [ 184 ] + xx [ 21 ] ;
xx [ 557 ] = xx [ 107 ] - ( xx [ 25 ] * xx [ 166 ] + xx [ 28 ] * xx [ 167 ] )
* xx [ 47 ] ; xx [ 558 ] = xx [ 126 ] - ( xx [ 25 ] * xx [ 187 ] + xx [ 28 ]
* xx [ 188 ] ) * xx [ 47 ] ; xx [ 559 ] = xx [ 47 ] * ( xx [ 195 ] + xx [ 25
] * xx [ 189 ] ) + xx [ 116 ] + xx [ 80 ] ; xx [ 560 ] = xx [ 30 ] ; xx [ 561
] = xx [ 30 ] ; xx [ 562 ] = xx [ 30 ] ; xx [ 563 ] = xx [ 30 ] ; xx [ 564 ]
= xx [ 30 ] ; xx [ 565 ] = xx [ 30 ] ; xx [ 566 ] = xx [ 30 ] ; xx [ 567 ] =
xx [ 30 ] ; xx [ 568 ] = xx [ 30 ] ; xx [ 569 ] = xx [ 30 ] ; xx [ 570 ] = xx
[ 30 ] ; xx [ 571 ] = xx [ 30 ] ; xx [ 572 ] = - ( xx [ 47 ] * ( xx [ 228 ] -
xx [ 215 ] * xx [ 221 ] ) + xx [ 239 ] - xx [ 47 ] * ( xx [ 236 ] * xx [ 202
] + xx [ 237 ] * xx [ 198 ] ) ) ; xx [ 573 ] = xx [ 30 ] ; xx [ 574 ] = - (
xx [ 246 ] - ( xx [ 216 ] + xx [ 224 ] * xx [ 226 ] ) * xx [ 47 ] ) ; xx [
575 ] = - ( xx [ 47 ] * ( xx [ 223 ] * xx [ 226 ] - xx [ 234 ] ) + xx [ 249 ]
) ; xx [ 576 ] = xx [ 30 ] ; xx [ 577 ] = xx [ 30 ] ; xx [ 578 ] = xx [ 30 ]
; xx [ 579 ] = xx [ 30 ] ; xx [ 580 ] = xx [ 176 ] + xx [ 88 ] + xx [ 76 ] ;
xx [ 581 ] = xx [ 179 ] + xx [ 114 ] ; xx [ 582 ] = xx [ 182 ] + xx [ 124 ] ;
xx [ 583 ] = xx [ 185 ] + xx [ 22 ] ; xx [ 584 ] = xx [ 47 ] * ( xx [ 25 ] *
xx [ 167 ] - xx [ 28 ] * xx [ 166 ] ) + xx [ 108 ] ; xx [ 585 ] = xx [ 47 ] *
( xx [ 25 ] * xx [ 188 ] - xx [ 28 ] * xx [ 187 ] ) + xx [ 127 ] ; xx [ 586 ]
= ( xx [ 80 ] * xx [ 101 ] + xx [ 196 ] ) * xx [ 47 ] + xx [ 117 ] - xx [ 91
] ; xx [ 587 ] = xx [ 30 ] ; xx [ 588 ] = xx [ 30 ] ; xx [ 589 ] = xx [ 30 ]
; xx [ 590 ] = xx [ 30 ] ; xx [ 591 ] = xx [ 30 ] ; xx [ 592 ] = xx [ 30 ] ;
xx [ 593 ] = xx [ 30 ] ; xx [ 594 ] = xx [ 30 ] ; xx [ 595 ] = xx [ 30 ] ; xx
[ 596 ] = xx [ 30 ] ; xx [ 597 ] = xx [ 30 ] ; xx [ 598 ] = xx [ 30 ] ; xx [
599 ] = - ( xx [ 213 ] + ( xx [ 221 ] * xx [ 218 ] + xx [ 229 ] ) * xx [ 47 ]
+ xx [ 240 ] - ( xx [ 237 ] * xx [ 203 ] + xx [ 199 ] * xx [ 236 ] ) * xx [
47 ] + xx [ 76 ] ) ; xx [ 600 ] = xx [ 30 ] ; xx [ 601 ] = - ( xx [ 47 ] * (
xx [ 210 ] - xx [ 224 ] * xx [ 201 ] ) + xx [ 247 ] ) ; xx [ 602 ] = - ( xx [
250 ] - ( xx [ 214 ] + xx [ 220 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [ 603 ] =
xx [ 30 ] ; xx [ 604 ] = xx [ 30 ] ; xx [ 605 ] = xx [ 30 ] ; xx [ 606 ] = xx
[ 30 ] ; xx [ 607 ] = xx [ 177 ] + xx [ 90 ] ; xx [ 608 ] = xx [ 180 ] + xx [
115 ] ; xx [ 609 ] = xx [ 183 ] + xx [ 125 ] ; xx [ 610 ] = xx [ 186 ] + xx [
23 ] ; xx [ 611 ] = xx [ 109 ] + ( xx [ 26 ] * xx [ 167 ] + xx [ 27 ] * xx [
166 ] ) * xx [ 47 ] - xx [ 165 ] ; xx [ 612 ] = xx [ 128 ] + ( xx [ 26 ] * xx
[ 188 ] + xx [ 27 ] * xx [ 187 ] ) * xx [ 47 ] - xx [ 168 ] ; xx [ 613 ] = (
xx [ 197 ] - xx [ 25 ] * xx [ 191 ] ) * xx [ 47 ] + xx [ 118 ] ; xx [ 614 ] =
xx [ 30 ] ; xx [ 615 ] = xx [ 30 ] ; xx [ 616 ] = xx [ 30 ] ; xx [ 617 ] = xx
[ 30 ] ; xx [ 618 ] = xx [ 30 ] ; xx [ 619 ] = xx [ 30 ] ; xx [ 620 ] = xx [
30 ] ; xx [ 621 ] = xx [ 30 ] ; xx [ 622 ] = xx [ 30 ] ; xx [ 623 ] = xx [ 30
] ; xx [ 624 ] = xx [ 30 ] ; xx [ 625 ] = xx [ 30 ] ; xx [ 626 ] = - ( ( xx [
221 ] * xx [ 219 ] + xx [ 230 ] ) * xx [ 47 ] - xx [ 217 ] + xx [ 241 ] + (
xx [ 237 ] * xx [ 202 ] - xx [ 236 ] * xx [ 198 ] ) * xx [ 47 ] ) ; xx [ 627
] = xx [ 30 ] ; xx [ 628 ] = - ( xx [ 248 ] + ( xx [ 220 ] + xx [ 225 ] ) *
xx [ 47 ] - xx [ 46 ] ) ; xx [ 629 ] = - ( ( xx [ 210 ] + xx [ 223 ] * xx [
231 ] ) * xx [ 47 ] + xx [ 251 ] ) ; xx [ 630 ] = xx [ 30 ] ; xx [ 631 ] = xx
[ 30 ] ; xx [ 632 ] = xx [ 30 ] ; xx [ 633 ] = xx [ 30 ] ; xx [ 634 ] = xx [
252 ] + xx [ 87 ] ; xx [ 635 ] = xx [ 255 ] + xx [ 113 ] ; xx [ 636 ] = xx [
261 ] + xx [ 123 ] ; xx [ 637 ] = xx [ 264 ] + xx [ 21 ] ; xx [ 638 ] = xx [
107 ] - ( xx [ 25 ] * xx [ 245 ] + xx [ 28 ] * xx [ 258 ] ) * xx [ 47 ] ; xx
[ 639 ] = xx [ 126 ] - ( xx [ 25 ] * xx [ 260 ] + xx [ 28 ] * xx [ 267 ] ) *
xx [ 47 ] ; xx [ 640 ] = xx [ 47 ] * ( xx [ 274 ] - xx [ 25 ] * xx [ 268 ] )
+ xx [ 116 ] + xx [ 232 ] ; xx [ 641 ] = xx [ 30 ] ; xx [ 642 ] = xx [ 30 ] ;
xx [ 643 ] = xx [ 30 ] ; xx [ 644 ] = xx [ 30 ] ; xx [ 645 ] = xx [ 30 ] ; xx
[ 646 ] = xx [ 30 ] ; xx [ 647 ] = xx [ 30 ] ; xx [ 648 ] = xx [ 30 ] ; xx [
649 ] = xx [ 30 ] ; xx [ 650 ] = xx [ 30 ] ; xx [ 651 ] = xx [ 30 ] ; xx [
652 ] = xx [ 30 ] ; xx [ 653 ] = xx [ 30 ] ; xx [ 654 ] = xx [ 30 ] ; xx [
655 ] = xx [ 30 ] ; xx [ 656 ] = xx [ 30 ] ; xx [ 657 ] = - ( xx [ 47 ] * (
xx [ 305 ] - xx [ 295 ] * xx [ 297 ] ) + xx [ 317 ] - xx [ 47 ] * ( xx [ 314
] * xx [ 281 ] + xx [ 315 ] * xx [ 277 ] ) ) ; xx [ 658 ] = xx [ 30 ] ; xx [
659 ] = - ( xx [ 324 ] - ( xx [ 292 ] + xx [ 300 ] * xx [ 304 ] ) * xx [ 47 ]
) ; xx [ 660 ] = - ( xx [ 47 ] * ( xx [ 299 ] * xx [ 304 ] - xx [ 312 ] ) +
xx [ 327 ] ) ; xx [ 661 ] = xx [ 253 ] + xx [ 88 ] + xx [ 76 ] ; xx [ 662 ] =
xx [ 256 ] + xx [ 114 ] ; xx [ 663 ] = xx [ 262 ] + xx [ 124 ] ; xx [ 664 ] =
xx [ 265 ] + xx [ 22 ] ; xx [ 665 ] = xx [ 47 ] * ( xx [ 25 ] * xx [ 258 ] -
xx [ 28 ] * xx [ 245 ] ) + xx [ 108 ] ; xx [ 666 ] = xx [ 47 ] * ( xx [ 25 ]
* xx [ 267 ] - xx [ 28 ] * xx [ 260 ] ) + xx [ 127 ] ; xx [ 667 ] = ( xx [
232 ] * xx [ 101 ] + xx [ 275 ] ) * xx [ 47 ] + xx [ 117 ] + xx [ 238 ] ; xx
[ 668 ] = xx [ 30 ] ; xx [ 669 ] = xx [ 30 ] ; xx [ 670 ] = xx [ 30 ] ; xx [
671 ] = xx [ 30 ] ; xx [ 672 ] = xx [ 30 ] ; xx [ 673 ] = xx [ 30 ] ; xx [
674 ] = xx [ 30 ] ; xx [ 675 ] = xx [ 30 ] ; xx [ 676 ] = xx [ 30 ] ; xx [
677 ] = xx [ 30 ] ; xx [ 678 ] = xx [ 30 ] ; xx [ 679 ] = xx [ 30 ] ; xx [
680 ] = xx [ 30 ] ; xx [ 681 ] = xx [ 30 ] ; xx [ 682 ] = xx [ 30 ] ; xx [
683 ] = xx [ 30 ] ; xx [ 684 ] = - ( xx [ 294 ] + ( xx [ 297 ] * xx [ 296 ] +
xx [ 306 ] ) * xx [ 47 ] + xx [ 318 ] - ( xx [ 315 ] * xx [ 282 ] + xx [ 278
] * xx [ 314 ] ) * xx [ 47 ] + xx [ 76 ] ) ; xx [ 685 ] = xx [ 30 ] ; xx [
686 ] = - ( xx [ 47 ] * ( xx [ 288 ] - xx [ 300 ] * xx [ 272 ] ) + xx [ 325 ]
) ; xx [ 687 ] = - ( xx [ 328 ] - ( xx [ 291 ] + xx [ 302 ] ) * xx [ 47 ] +
xx [ 46 ] ) ; xx [ 688 ] = xx [ 254 ] + xx [ 90 ] ; xx [ 689 ] = xx [ 257 ] +
xx [ 115 ] ; xx [ 690 ] = xx [ 263 ] + xx [ 125 ] ; xx [ 691 ] = xx [ 266 ] +
xx [ 23 ] ; xx [ 692 ] = xx [ 109 ] + ( xx [ 26 ] * xx [ 258 ] + xx [ 27 ] *
xx [ 245 ] ) * xx [ 47 ] - xx [ 244 ] ; xx [ 693 ] = xx [ 128 ] + ( xx [ 26 ]
* xx [ 267 ] + xx [ 27 ] * xx [ 260 ] ) * xx [ 47 ] - xx [ 259 ] ; xx [ 694 ]
= ( xx [ 25 ] * xx [ 270 ] + xx [ 276 ] ) * xx [ 47 ] + xx [ 118 ] ; xx [ 695
] = xx [ 30 ] ; xx [ 696 ] = xx [ 30 ] ; xx [ 697 ] = xx [ 30 ] ; xx [ 698 ]
= xx [ 30 ] ; xx [ 699 ] = xx [ 30 ] ; xx [ 700 ] = xx [ 30 ] ; xx [ 701 ] =
xx [ 30 ] ; xx [ 702 ] = xx [ 30 ] ; xx [ 703 ] = xx [ 30 ] ; xx [ 704 ] = xx
[ 30 ] ; xx [ 705 ] = xx [ 30 ] ; xx [ 706 ] = xx [ 30 ] ; xx [ 707 ] = xx [
30 ] ; xx [ 708 ] = xx [ 30 ] ; xx [ 709 ] = xx [ 30 ] ; xx [ 710 ] = xx [ 30
] ; xx [ 711 ] = - ( ( xx [ 297 ] * xx [ 301 ] + xx [ 307 ] ) * xx [ 47 ] -
xx [ 293 ] + xx [ 319 ] + ( xx [ 314 ] * xx [ 277 ] - xx [ 315 ] * xx [ 281 ]
) * xx [ 47 ] ) ; xx [ 712 ] = xx [ 30 ] ; xx [ 713 ] = - ( xx [ 326 ] + ( xx
[ 302 ] + xx [ 303 ] ) * xx [ 47 ] - xx [ 46 ] ) ; xx [ 714 ] = - ( ( xx [
288 ] + xx [ 299 ] * xx [ 309 ] ) * xx [ 47 ] + xx [ 329 ] ) ; xx [ 715 ] =
xx [ 330 ] + xx [ 87 ] ; xx [ 716 ] = xx [ 333 ] + xx [ 113 ] ; xx [ 717 ] =
xx [ 339 ] + xx [ 123 ] ; xx [ 718 ] = xx [ 342 ] + xx [ 21 ] ; xx [ 719 ] =
( xx [ 25 ] * xx [ 323 ] + xx [ 28 ] * xx [ 336 ] ) * xx [ 47 ] + xx [ 107 ]
; xx [ 720 ] = xx [ 126 ] - ( xx [ 25 ] * xx [ 338 ] + xx [ 28 ] * xx [ 345 ]
) * xx [ 47 ] ; xx [ 721 ] = xx [ 47 ] * ( xx [ 353 ] - xx [ 25 ] * xx [ 346
] ) + xx [ 116 ] - xx [ 310 ] ; xx [ 722 ] = - ( xx [ 47 ] * ( xx [ 385 ] -
xx [ 375 ] * xx [ 377 ] ) + xx [ 397 ] + xx [ 47 ] * ( xx [ 394 ] * xx [ 361
] + xx [ 395 ] * xx [ 356 ] ) ) ; xx [ 723 ] = xx [ 30 ] ; xx [ 724 ] = - (
xx [ 404 ] - ( xx [ 372 ] + xx [ 380 ] * xx [ 384 ] ) * xx [ 47 ] ) ; xx [
725 ] = - ( xx [ 47 ] * ( xx [ 379 ] * xx [ 384 ] - xx [ 392 ] ) + xx [ 407 ]
) ; xx [ 726 ] = xx [ 30 ] ; xx [ 727 ] = xx [ 30 ] ; xx [ 728 ] = xx [ 30 ]
; xx [ 729 ] = xx [ 30 ] ; xx [ 730 ] = xx [ 30 ] ; xx [ 731 ] = xx [ 30 ] ;
xx [ 732 ] = xx [ 30 ] ; xx [ 733 ] = xx [ 30 ] ; xx [ 734 ] = xx [ 30 ] ; xx
[ 735 ] = xx [ 30 ] ; xx [ 736 ] = xx [ 30 ] ; xx [ 737 ] = xx [ 30 ] ; xx [
738 ] = xx [ 30 ] ; xx [ 739 ] = xx [ 30 ] ; xx [ 740 ] = xx [ 30 ] ; xx [
741 ] = xx [ 30 ] ; xx [ 742 ] = xx [ 331 ] + xx [ 88 ] + xx [ 76 ] ; xx [
743 ] = xx [ 334 ] + xx [ 114 ] ; xx [ 744 ] = xx [ 340 ] + xx [ 124 ] ; xx [
745 ] = xx [ 343 ] + xx [ 22 ] ; xx [ 746 ] = xx [ 47 ] * ( xx [ 28 ] * xx [
323 ] - xx [ 25 ] * xx [ 336 ] ) + xx [ 108 ] ; xx [ 747 ] = xx [ 47 ] * ( xx
[ 25 ] * xx [ 345 ] - xx [ 28 ] * xx [ 338 ] ) + xx [ 127 ] ; xx [ 748 ] = (
xx [ 354 ] - xx [ 310 ] * xx [ 101 ] ) * xx [ 47 ] + xx [ 117 ] + xx [ 316 ]
; xx [ 749 ] = - ( xx [ 374 ] + ( xx [ 377 ] * xx [ 376 ] + xx [ 386 ] ) * xx
[ 47 ] + xx [ 398 ] - ( xx [ 395 ] * xx [ 362 ] + xx [ 357 ] * xx [ 394 ] ) *
xx [ 47 ] + xx [ 76 ] ) ; xx [ 750 ] = xx [ 30 ] ; xx [ 751 ] = - ( xx [ 47 ]
* ( xx [ 368 ] - xx [ 380 ] * xx [ 351 ] ) + xx [ 405 ] ) ; xx [ 752 ] = - (
xx [ 408 ] - ( xx [ 371 ] + xx [ 382 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [ 753
] = xx [ 30 ] ; xx [ 754 ] = xx [ 30 ] ; xx [ 755 ] = xx [ 30 ] ; xx [ 756 ]
= xx [ 30 ] ; xx [ 757 ] = xx [ 30 ] ; xx [ 758 ] = xx [ 30 ] ; xx [ 759 ] =
xx [ 30 ] ; xx [ 760 ] = xx [ 30 ] ; xx [ 761 ] = xx [ 30 ] ; xx [ 762 ] = xx
[ 30 ] ; xx [ 763 ] = xx [ 30 ] ; xx [ 764 ] = xx [ 30 ] ; xx [ 765 ] = xx [
30 ] ; xx [ 766 ] = xx [ 30 ] ; xx [ 767 ] = xx [ 30 ] ; xx [ 768 ] = xx [ 30
] ; xx [ 769 ] = xx [ 332 ] + xx [ 90 ] ; xx [ 770 ] = xx [ 335 ] + xx [ 115
] ; xx [ 771 ] = xx [ 341 ] + xx [ 125 ] ; xx [ 772 ] = xx [ 344 ] + xx [ 23
] ; xx [ 773 ] = xx [ 109 ] - ( xx [ 26 ] * xx [ 336 ] + xx [ 27 ] * xx [ 323
] ) * xx [ 47 ] + xx [ 322 ] ; xx [ 774 ] = xx [ 128 ] + ( xx [ 26 ] * xx [
345 ] + xx [ 27 ] * xx [ 338 ] ) * xx [ 47 ] - xx [ 337 ] ; xx [ 775 ] = ( xx
[ 25 ] * xx [ 349 ] + xx [ 355 ] ) * xx [ 47 ] + xx [ 118 ] ; xx [ 776 ] = -
( ( xx [ 377 ] * xx [ 381 ] + xx [ 387 ] ) * xx [ 47 ] - xx [ 373 ] + xx [
399 ] + ( xx [ 394 ] * xx [ 356 ] - xx [ 395 ] * xx [ 361 ] ) * xx [ 47 ] ) ;
xx [ 777 ] = xx [ 30 ] ; xx [ 778 ] = - ( xx [ 406 ] + ( xx [ 382 ] + xx [
383 ] ) * xx [ 47 ] - xx [ 46 ] ) ; xx [ 779 ] = - ( ( xx [ 368 ] + xx [ 379
] * xx [ 389 ] ) * xx [ 47 ] + xx [ 409 ] ) ; xx [ 780 ] = xx [ 30 ] ; xx [
781 ] = xx [ 30 ] ; xx [ 782 ] = xx [ 30 ] ; xx [ 783 ] = xx [ 30 ] ; xx [
784 ] = xx [ 30 ] ; xx [ 785 ] = xx [ 30 ] ; xx [ 786 ] = xx [ 30 ] ; xx [
787 ] = xx [ 30 ] ; xx [ 788 ] = xx [ 30 ] ; xx [ 789 ] = xx [ 30 ] ; xx [
790 ] = xx [ 30 ] ; xx [ 791 ] = xx [ 30 ] ; xx [ 792 ] = xx [ 30 ] ; xx [
793 ] = xx [ 30 ] ; xx [ 794 ] = xx [ 30 ] ; xx [ 795 ] = xx [ 30 ] ; xx [
796 ] = xx [ 410 ] + xx [ 87 ] ; xx [ 797 ] = xx [ 401 ] + xx [ 113 ] ; xx [
798 ] = xx [ 413 ] + xx [ 123 ] ; xx [ 799 ] = xx [ 416 ] + xx [ 21 ] ; xx [
800 ] = ( xx [ 25 ] * xx [ 42 ] + xx [ 28 ] * xx [ 49 ] ) * xx [ 47 ] + xx [
107 ] ; xx [ 801 ] = ( xx [ 25 ] * xx [ 51 ] + xx [ 28 ] * xx [ 52 ] ) * xx [
47 ] + xx [ 126 ] ; xx [ 802 ] = xx [ 47 ] * ( xx [ 422 ] + xx [ 25 ] * xx [
53 ] ) + xx [ 116 ] - xx [ 390 ] ; xx [ 803 ] = xx [ 30 ] ; xx [ 804 ] = xx [
30 ] ; xx [ 805 ] = xx [ 30 ] ; xx [ 806 ] = xx [ 30 ] ; xx [ 807 ] = - ( xx
[ 47 ] * ( xx [ 448 ] - xx [ 435 ] * xx [ 441 ] ) + xx [ 459 ] - xx [ 47 ] *
( xx [ 456 ] * xx [ 419 ] + xx [ 457 ] * xx [ 100 ] ) ) ; xx [ 808 ] = xx [
30 ] ; xx [ 809 ] = - ( xx [ 466 ] - ( xx [ 436 ] + xx [ 444 ] * xx [ 446 ] )
* xx [ 47 ] ) ; xx [ 810 ] = - ( xx [ 47 ] * ( xx [ 443 ] * xx [ 446 ] - xx [
454 ] ) + xx [ 469 ] ) ; xx [ 811 ] = xx [ 30 ] ; xx [ 812 ] = xx [ 30 ] ; xx
[ 813 ] = xx [ 30 ] ; xx [ 814 ] = xx [ 30 ] ; xx [ 815 ] = xx [ 30 ] ; xx [
816 ] = xx [ 30 ] ; xx [ 817 ] = xx [ 30 ] ; xx [ 818 ] = xx [ 30 ] ; xx [
819 ] = xx [ 30 ] ; xx [ 820 ] = xx [ 30 ] ; xx [ 821 ] = xx [ 30 ] ; xx [
822 ] = xx [ 30 ] ; xx [ 823 ] = xx [ 411 ] + xx [ 88 ] + xx [ 76 ] ; xx [
824 ] = xx [ 402 ] + xx [ 114 ] ; xx [ 825 ] = xx [ 414 ] + xx [ 124 ] ; xx [
826 ] = xx [ 417 ] + xx [ 22 ] ; xx [ 827 ] = xx [ 47 ] * ( xx [ 28 ] * xx [
42 ] - xx [ 25 ] * xx [ 49 ] ) + xx [ 108 ] ; xx [ 828 ] = xx [ 47 ] * ( xx [
28 ] * xx [ 51 ] - xx [ 25 ] * xx [ 52 ] ) + xx [ 127 ] ; xx [ 829 ] = ( xx [
423 ] - xx [ 390 ] * xx [ 101 ] ) * xx [ 47 ] + xx [ 117 ] - xx [ 396 ] ; xx
[ 830 ] = xx [ 30 ] ; xx [ 831 ] = xx [ 30 ] ; xx [ 832 ] = xx [ 30 ] ; xx [
833 ] = xx [ 30 ] ; xx [ 834 ] = - ( xx [ 433 ] + ( xx [ 441 ] * xx [ 438 ] +
xx [ 449 ] ) * xx [ 47 ] + xx [ 460 ] - ( xx [ 457 ] * xx [ 420 ] + xx [ 103
] * xx [ 456 ] ) * xx [ 47 ] + xx [ 76 ] ) ; xx [ 835 ] = xx [ 30 ] ; xx [
836 ] = - ( xx [ 47 ] * ( xx [ 430 ] - xx [ 444 ] * xx [ 111 ] ) + xx [ 467 ]
) ; xx [ 837 ] = - ( xx [ 470 ] - ( xx [ 434 ] + xx [ 440 ] ) * xx [ 47 ] +
xx [ 46 ] ) ; xx [ 838 ] = xx [ 30 ] ; xx [ 839 ] = xx [ 30 ] ; xx [ 840 ] =
xx [ 30 ] ; xx [ 841 ] = xx [ 30 ] ; xx [ 842 ] = xx [ 30 ] ; xx [ 843 ] = xx
[ 30 ] ; xx [ 844 ] = xx [ 30 ] ; xx [ 845 ] = xx [ 30 ] ; xx [ 846 ] = xx [
30 ] ; xx [ 847 ] = xx [ 30 ] ; xx [ 848 ] = xx [ 30 ] ; xx [ 849 ] = xx [ 30
] ; xx [ 850 ] = xx [ 412 ] + xx [ 90 ] ; xx [ 851 ] = xx [ 403 ] + xx [ 115
] ; xx [ 852 ] = xx [ 415 ] + xx [ 125 ] ; xx [ 853 ] = xx [ 418 ] + xx [ 23
] ; xx [ 854 ] = xx [ 109 ] - ( xx [ 26 ] * xx [ 49 ] + xx [ 27 ] * xx [ 42 ]
) * xx [ 47 ] + xx [ 9 ] ; xx [ 855 ] = xx [ 128 ] - ( xx [ 26 ] * xx [ 52 ]
+ xx [ 27 ] * xx [ 51 ] ) * xx [ 47 ] + xx [ 50 ] ; xx [ 856 ] = ( xx [ 25 ]
* xx [ 69 ] + xx [ 424 ] ) * xx [ 47 ] + xx [ 118 ] ; xx [ 857 ] = xx [ 30 ]
; xx [ 858 ] = xx [ 30 ] ; xx [ 859 ] = xx [ 30 ] ; xx [ 860 ] = xx [ 30 ] ;
xx [ 861 ] = - ( ( xx [ 441 ] * xx [ 439 ] + xx [ 450 ] ) * xx [ 47 ] - xx [
437 ] + xx [ 461 ] + ( xx [ 457 ] * xx [ 419 ] - xx [ 456 ] * xx [ 100 ] ) *
xx [ 47 ] ) ; xx [ 862 ] = xx [ 30 ] ; xx [ 863 ] = - ( xx [ 468 ] + ( xx [
440 ] + xx [ 445 ] ) * xx [ 47 ] - xx [ 46 ] ) ; xx [ 864 ] = - ( ( xx [ 430
] + xx [ 443 ] * xx [ 451 ] ) * xx [ 47 ] + xx [ 471 ] ) ; xx [ 865 ] = xx [
30 ] ; xx [ 866 ] = xx [ 30 ] ; xx [ 867 ] = xx [ 30 ] ; xx [ 868 ] = xx [ 30
] ; xx [ 869 ] = xx [ 30 ] ; xx [ 870 ] = xx [ 30 ] ; xx [ 871 ] = xx [ 30 ]
; xx [ 872 ] = xx [ 30 ] ; xx [ 873 ] = xx [ 30 ] ; xx [ 874 ] = xx [ 30 ] ;
xx [ 875 ] = xx [ 30 ] ; xx [ 876 ] = xx [ 30 ] ; xx [ 21 ] = xx [ 55 ] * xx
[ 26 ] + xx [ 56 ] * xx [ 27 ] ; xx [ 62 ] = xx [ 81 ] ; xx [ 63 ] = - xx [
40 ] ; xx [ 64 ] = xx [ 21 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 62 ,
xx + 69 ) ; pm_math_Quaternion_xform_ra ( xx + 93 , xx + 73 , xx + 62 ) ; xx
[ 73 ] = xx [ 84 ] + xx [ 83 ] ; xx [ 74 ] = xx [ 79 ] ; xx [ 75 ] = xx [ 86
] + xx [ 85 ] ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 73 , xx + 81 ) ;
xx [ 11 ] = xx [ 6 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 3 ] ; xx [ 14
] = 0.03998704855625266 ; xx [ 22 ] = xx [ 14 ] * xx [ 10 ] ; xx [ 23 ] =
5.357679714268354e-5 ; xx [ 40 ] = xx [ 23 ] * xx [ 3 ] + xx [ 6 ] * xx [ 14
] ; xx [ 3 ] = xx [ 23 ] * xx [ 10 ] ; xx [ 73 ] = xx [ 22 ] ; xx [ 74 ] = -
xx [ 40 ] ; xx [ 75 ] = xx [ 3 ] ; pm_math_Vector3_cross_ra ( xx + 11 , xx +
73 , xx + 93 ) ; xx [ 6 ] = 0.07304395785390926 ; xx [ 10 ] = xx [ 62 ] + xx
[ 81 ] - ( xx [ 93 ] - xx [ 22 ] * xx [ 4 ] ) * xx [ 47 ] + xx [ 6 ] ; xx [
11 ] = xx [ 156 ] ; xx [ 12 ] = xx [ 153 ] ; xx [ 13 ] = xx [ 158 ] ;
pm_math_Quaternion_xform_ra ( xx + 135 , xx + 11 , xx + 73 ) ; xx [ 11 ] = xx
[ 60 ] ; xx [ 12 ] = xx [ 38 ] ; xx [ 13 ] = xx [ 66 ] ; xx [ 22 ] = xx [ 14
] * xx [ 61 ] ; xx [ 38 ] = xx [ 23 ] * xx [ 66 ] + xx [ 54 ] * xx [ 14 ] ;
xx [ 42 ] = xx [ 23 ] * xx [ 61 ] ; xx [ 104 ] = xx [ 22 ] ; xx [ 105 ] = -
xx [ 38 ] ; xx [ 106 ] = - xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 11 ,
xx + 104 , xx + 107 ) ; xx [ 11 ] = 0.1100535767971427 ; xx [ 12 ] = xx [ 63
] + xx [ 82 ] - ( xx [ 4 ] * xx [ 40 ] + xx [ 94 ] ) * xx [ 47 ] ; xx [ 13 ]
= 0.03679498374650248 ; xx [ 40 ] = xx [ 64 ] + xx [ 83 ] - xx [ 47 ] * ( xx
[ 95 ] - xx [ 3 ] * xx [ 4 ] ) + xx [ 13 ] ; xx [ 3 ] = 0.06161549182219125 ;
xx [ 4 ] = xx [ 91 ] * xx [ 27 ] - xx [ 80 ] * xx [ 26 ] ; xx [ 60 ] = xx [
190 ] ; xx [ 61 ] = - xx [ 189 ] ; xx [ 62 ] = xx [ 4 ] ;
pm_math_Vector3_cross_ra ( xx + 26 , xx + 60 , xx + 63 ) ; xx [ 60 ] = xx [
233 ] ; xx [ 61 ] = xx [ 227 ] ; xx [ 62 ] = xx [ 235 ] ;
pm_math_Quaternion_xform_ra ( xx + 204 , xx + 60 , xx + 81 ) ; xx [ 43 ] = xx
[ 14 ] * xx [ 202 ] ; xx [ 60 ] = xx [ 199 ] ; xx [ 61 ] = xx [ 194 ] ; xx [
62 ] = xx [ 193 ] ; xx [ 49 ] = xx [ 23 ] * xx [ 203 ] - xx [ 199 ] * xx [ 14
] ; xx [ 51 ] = xx [ 23 ] * xx [ 202 ] ; xx [ 93 ] = - xx [ 43 ] ; xx [ 94 ]
= xx [ 49 ] ; xx [ 95 ] = - xx [ 51 ] ; pm_math_Vector3_cross_ra ( xx + 60 ,
xx + 93 , xx + 104 ) ; xx [ 52 ] = 0.03706319574037606 ; xx [ 54 ] =
0.01516654048056399 ; xx [ 60 ] = xx [ 232 ] * xx [ 26 ] + xx [ 238 ] * xx [
27 ] ; xx [ 93 ] = xx [ 269 ] ; xx [ 94 ] = xx [ 268 ] ; xx [ 95 ] = - xx [
60 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 93 , xx + 113 ) ; xx [ 93 ]
= xx [ 311 ] ; xx [ 94 ] = xx [ 308 ] ; xx [ 95 ] = xx [ 313 ] ;
pm_math_Quaternion_xform_ra ( xx + 283 , xx + 93 , xx + 116 ) ; xx [ 61 ] =
xx [ 14 ] * xx [ 281 ] ; xx [ 93 ] = xx [ 278 ] ; xx [ 94 ] = xx [ 273 ] ; xx
[ 95 ] = xx [ 282 ] ; xx [ 62 ] = xx [ 278 ] * xx [ 14 ] - xx [ 23 ] * xx [
282 ] ; xx [ 66 ] = xx [ 23 ] * xx [ 281 ] ; xx [ 119 ] = xx [ 61 ] ; xx [
120 ] = xx [ 62 ] ; xx [ 121 ] = - xx [ 66 ] ; pm_math_Vector3_cross_ra ( xx
+ 93 , xx + 119 , xx + 122 ) ; xx [ 79 ] = 0.06706319574037613 ; xx [ 85 ] =
0.1167690808590078 ; xx [ 87 ] = xx [ 310 ] * xx [ 26 ] - xx [ 316 ] * xx [
27 ] ; xx [ 93 ] = xx [ 348 ] ; xx [ 94 ] = xx [ 346 ] ; xx [ 95 ] = xx [ 87
] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 93 , xx + 119 ) ; xx [ 93 ] =
xx [ 391 ] ; xx [ 94 ] = xx [ 388 ] ; xx [ 95 ] = xx [ 393 ] ;
pm_math_Quaternion_xform_ra ( xx + 363 , xx + 93 , xx + 125 ) ; xx [ 93 ] =
xx [ 360 ] ; xx [ 94 ] = xx [ 352 ] ; xx [ 95 ] = xx [ 362 ] ; xx [ 88 ] = xx
[ 14 ] * xx [ 361 ] ; xx [ 90 ] = xx [ 23 ] * xx [ 362 ] + xx [ 357 ] * xx [
14 ] ; xx [ 96 ] = xx [ 23 ] * xx [ 361 ] ; xx [ 128 ] = xx [ 88 ] ; xx [ 129
] = - xx [ 90 ] ; xx [ 130 ] = - xx [ 96 ] ; pm_math_Vector3_cross_ra ( xx +
93 , xx + 128 , xx + 131 ) ; xx [ 93 ] = 0.2430439578539093 ; xx [ 94 ] =
0.06480755663194146 ; xx [ 95 ] = xx [ 390 ] * xx [ 26 ] + xx [ 396 ] * xx [
27 ] ; xx [ 128 ] = xx [ 58 ] ; xx [ 129 ] = - xx [ 53 ] ; xx [ 130 ] = xx [
95 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 128 , xx + 134 ) ; xx [ 26 ]
= xx [ 453 ] ; xx [ 27 ] = xx [ 447 ] ; xx [ 28 ] = xx [ 455 ] ;
pm_math_Quaternion_xform_ra ( xx + 425 , xx + 26 , xx + 128 ) ; xx [ 26 ] =
xx [ 14 ] * xx [ 419 ] ; xx [ 137 ] = xx [ 103 ] ; xx [ 138 ] = xx [ 99 ] ;
xx [ 139 ] = xx [ 97 ] ; xx [ 27 ] = xx [ 23 ] * xx [ 420 ] - xx [ 103 ] * xx
[ 14 ] ; xx [ 28 ] = xx [ 23 ] * xx [ 419 ] ; xx [ 140 ] = - xx [ 26 ] ; xx [
141 ] = xx [ 27 ] ; xx [ 142 ] = - xx [ 28 ] ; pm_math_Vector3_cross_ra ( xx
+ 137 , xx + 140 , xx + 145 ) ; xx [ 53 ] = 0.1700535767971427 ; xx [ 58 ] =
0.1415895889346966 ; xx [ 169 ] = - ( xx [ 47 ] * ( xx [ 69 ] - xx [ 25 ] *
xx [ 77 ] ) - xx [ 56 ] + xx [ 10 ] - ( xx [ 73 ] - ( xx [ 107 ] - xx [ 39 ]
* xx [ 22 ] ) * xx [ 47 ] - ( xx [ 78 ] + xx [ 148 ] ) * xx [ 47 ] ) - xx [
11 ] ) ; xx [ 170 ] = ( xx [ 157 ] + xx [ 144 ] * xx [ 34 ] ) * xx [ 47 ] +
xx [ 74 ] - ( xx [ 39 ] * xx [ 38 ] + xx [ 108 ] ) * xx [ 47 ] - ( xx [ 55 ]
+ ( xx [ 70 ] - xx [ 56 ] * xx [ 101 ] ) * xx [ 47 ] + xx [ 12 ] ) ; xx [ 171
] = - ( ( xx [ 25 ] * xx [ 21 ] + xx [ 71 ] ) * xx [ 47 ] + xx [ 40 ] - ( xx
[ 47 ] * ( xx [ 144 ] * xx [ 154 ] - xx [ 102 ] ) + xx [ 75 ] - xx [ 47 ] * (
xx [ 109 ] + xx [ 42 ] * xx [ 39 ] ) ) + xx [ 3 ] ) ; xx [ 172 ] = - ( xx [
47 ] * ( xx [ 63 ] + xx [ 25 ] * xx [ 190 ] ) - xx [ 91 ] + xx [ 10 ] - ( xx
[ 81 ] - ( xx [ 43 ] * xx [ 198 ] + xx [ 104 ] ) * xx [ 47 ] - ( xx [ 225 ] +
xx [ 214 ] ) * xx [ 47 ] ) - xx [ 52 ] ) ; xx [ 173 ] = ( xx [ 234 ] + xx [
222 ] * xx [ 201 ] ) * xx [ 47 ] + xx [ 82 ] - ( xx [ 105 ] - xx [ 198 ] * xx
[ 49 ] ) * xx [ 47 ] - ( ( xx [ 64 ] - xx [ 91 ] * xx [ 101 ] ) * xx [ 47 ] -
xx [ 80 ] + xx [ 12 ] ) ; xx [ 174 ] = - ( ( xx [ 25 ] * xx [ 4 ] + xx [ 65 ]
) * xx [ 47 ] + xx [ 40 ] - ( xx [ 47 ] * ( xx [ 222 ] * xx [ 231 ] - xx [
216 ] ) + xx [ 83 ] - xx [ 47 ] * ( xx [ 106 ] + xx [ 51 ] * xx [ 198 ] ) ) +
xx [ 54 ] ) ; xx [ 175 ] = - ( xx [ 238 ] + xx [ 47 ] * ( xx [ 113 ] + xx [
25 ] * xx [ 269 ] ) + xx [ 10 ] - ( xx [ 116 ] - ( xx [ 61 ] * xx [ 277 ] +
xx [ 122 ] ) * xx [ 47 ] - ( xx [ 303 ] + xx [ 291 ] ) * xx [ 47 ] ) - xx [
79 ] ) ; xx [ 176 ] = ( xx [ 312 ] + xx [ 298 ] * xx [ 272 ] ) * xx [ 47 ] +
xx [ 117 ] - ( xx [ 277 ] * xx [ 62 ] + xx [ 123 ] ) * xx [ 47 ] - ( ( xx [
238 ] * xx [ 101 ] + xx [ 114 ] ) * xx [ 47 ] - xx [ 232 ] + xx [ 12 ] ) ; xx
[ 177 ] = - ( ( xx [ 115 ] - xx [ 25 ] * xx [ 60 ] ) * xx [ 47 ] + xx [ 40 ]
- ( xx [ 47 ] * ( xx [ 298 ] * xx [ 309 ] - xx [ 292 ] ) + xx [ 118 ] - xx [
47 ] * ( xx [ 124 ] - xx [ 66 ] * xx [ 277 ] ) ) - xx [ 85 ] ) ; xx [ 178 ] =
- ( xx [ 316 ] + xx [ 47 ] * ( xx [ 119 ] - xx [ 25 ] * xx [ 347 ] ) + xx [
10 ] - ( xx [ 125 ] - ( xx [ 131 ] - xx [ 88 ] * xx [ 356 ] ) * xx [ 47 ] - (
xx [ 383 ] + xx [ 371 ] ) * xx [ 47 ] ) - xx [ 93 ] ) ; xx [ 179 ] = ( xx [
392 ] + xx [ 378 ] * xx [ 351 ] ) * xx [ 47 ] + xx [ 126 ] - ( xx [ 356 ] *
xx [ 90 ] + xx [ 132 ] ) * xx [ 47 ] - ( xx [ 310 ] + ( xx [ 316 ] * xx [ 101
] + xx [ 120 ] ) * xx [ 47 ] + xx [ 12 ] ) ; xx [ 180 ] = - ( ( xx [ 25 ] *
xx [ 87 ] + xx [ 121 ] ) * xx [ 47 ] + xx [ 40 ] - ( xx [ 47 ] * ( xx [ 378 ]
* xx [ 389 ] - xx [ 372 ] ) + xx [ 127 ] - xx [ 47 ] * ( xx [ 133 ] + xx [ 96
] * xx [ 356 ] ) ) - xx [ 94 ] ) ; xx [ 181 ] = - ( xx [ 47 ] * ( xx [ 134 ]
- xx [ 25 ] * xx [ 57 ] ) - xx [ 396 ] + xx [ 10 ] - ( xx [ 128 ] - ( xx [ 26
] * xx [ 100 ] + xx [ 145 ] ) * xx [ 47 ] - ( xx [ 445 ] + xx [ 434 ] ) * xx
[ 47 ] ) - xx [ 53 ] ) ; xx [ 182 ] = ( xx [ 454 ] + xx [ 442 ] * xx [ 111 ]
) * xx [ 47 ] + xx [ 129 ] - ( xx [ 146 ] - xx [ 100 ] * xx [ 27 ] ) * xx [
47 ] - ( xx [ 390 ] + ( xx [ 135 ] - xx [ 396 ] * xx [ 101 ] ) * xx [ 47 ] +
xx [ 12 ] ) ; xx [ 183 ] = - ( ( xx [ 25 ] * xx [ 95 ] + xx [ 136 ] ) * xx [
47 ] + xx [ 40 ] - ( xx [ 47 ] * ( xx [ 442 ] * xx [ 451 ] - xx [ 436 ] ) +
xx [ 130 ] - xx [ 47 ] * ( xx [ 147 ] + xx [ 28 ] * xx [ 100 ] ) ) + xx [ 58
] ) ; xx [ 4 ] = 1.0e-8 ; memcpy ( xx + 877 , xx + 472 , 405 * sizeof (
double ) ) ; factorAndSolveWide ( 15 , 27 , xx + 877 , xx + 140 , xx + 213 ,
ii + 0 , xx + 169 , xx [ 4 ] , xx + 113 ) ; xx [ 10 ] = state [ 0 ] + xx [
113 ] ; xx [ 12 ] = xx [ 10 ] * xx [ 1 ] ; xx [ 21 ] = cos ( xx [ 12 ] ) ; xx
[ 22 ] = xx [ 0 ] * xx [ 21 ] ; xx [ 25 ] = sin ( xx [ 12 ] ) ; xx [ 12 ] =
xx [ 5 ] * xx [ 25 ] ; xx [ 26 ] = xx [ 8 ] * xx [ 25 ] ; xx [ 25 ] = xx [ 0
] * xx [ 12 ] + xx [ 7 ] * xx [ 26 ] ; xx [ 27 ] = xx [ 7 ] * xx [ 21 ] ; xx
[ 21 ] = xx [ 7 ] * xx [ 12 ] - xx [ 0 ] * xx [ 26 ] ; xx [ 60 ] = - xx [ 22
] ; xx [ 61 ] = xx [ 25 ] ; xx [ 62 ] = xx [ 27 ] ; xx [ 63 ] = xx [ 21 ] ;
xx [ 99 ] = xx [ 17 ] ; xx [ 100 ] = xx [ 20 ] ; xx [ 101 ] = xx [ 15 ] ; xx
[ 102 ] = xx [ 19 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 99 , xx + 114 ,
xx + 103 ) ; xx [ 12 ] = xx [ 15 ] + xx [ 105 ] ; xx [ 15 ] = xx [ 17 ] + xx
[ 103 ] ; xx [ 17 ] = xx [ 20 ] + xx [ 104 ] ; xx [ 20 ] = xx [ 19 ] + xx [
106 ] ; xx [ 19 ] = 1.0e-64 ; xx [ 26 ] = sqrt ( xx [ 15 ] * xx [ 15 ] + xx [
17 ] * xx [ 17 ] + xx [ 12 ] * xx [ 12 ] + xx [ 20 ] * xx [ 20 ] ) ; if ( xx
[ 19 ] > xx [ 26 ] ) xx [ 26 ] = xx [ 19 ] ; xx [ 28 ] = xx [ 12 ] / xx [ 26
] ; xx [ 12 ] = xx [ 15 ] / xx [ 26 ] ; xx [ 15 ] = xx [ 2 ] * xx [ 28 ] + xx
[ 16 ] * xx [ 12 ] ; xx [ 34 ] = xx [ 20 ] / xx [ 26 ] ; xx [ 20 ] = xx [ 17
] / xx [ 26 ] ; xx [ 17 ] = xx [ 2 ] * xx [ 34 ] - xx [ 16 ] * xx [ 20 ] ; xx
[ 26 ] = - xx [ 17 ] ; xx [ 38 ] = xx [ 2 ] * xx [ 12 ] - xx [ 16 ] * xx [ 28
] ; xx [ 39 ] = - xx [ 38 ] ; xx [ 40 ] = xx [ 2 ] * xx [ 20 ] + xx [ 16 ] *
xx [ 34 ] ; xx [ 99 ] = xx [ 15 ] ; xx [ 100 ] = xx [ 26 ] ; xx [ 101 ] = xx
[ 39 ] ; xx [ 102 ] = xx [ 40 ] ; xx [ 103 ] = xx [ 33 ] ; xx [ 104 ] = xx [
36 ] ; xx [ 105 ] = xx [ 35 ] ; xx [ 106 ] = xx [ 31 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 103 , xx + 117 , xx + 140 ) ; xx [ 42
] = xx [ 31 ] + xx [ 143 ] ; xx [ 31 ] = xx [ 33 ] + xx [ 140 ] ; xx [ 33 ] =
xx [ 36 ] + xx [ 141 ] ; xx [ 36 ] = xx [ 35 ] + xx [ 142 ] ; xx [ 35 ] =
sqrt ( xx [ 31 ] * xx [ 31 ] + xx [ 33 ] * xx [ 33 ] + xx [ 36 ] * xx [ 36 ]
+ xx [ 42 ] * xx [ 42 ] ) ; if ( xx [ 19 ] > xx [ 35 ] ) xx [ 35 ] = xx [ 19
] ; xx [ 43 ] = xx [ 42 ] / xx [ 35 ] ; xx [ 42 ] = xx [ 31 ] / xx [ 35 ] ;
xx [ 31 ] = xx [ 29 ] * xx [ 43 ] - xx [ 32 ] * xx [ 42 ] ; xx [ 49 ] = xx [
36 ] / xx [ 35 ] ; xx [ 36 ] = xx [ 33 ] / xx [ 35 ] ; xx [ 33 ] = xx [ 29 ]
* xx [ 49 ] + xx [ 32 ] * xx [ 36 ] ; xx [ 35 ] = - xx [ 33 ] ; xx [ 51 ] =
xx [ 32 ] * xx [ 49 ] - xx [ 29 ] * xx [ 36 ] ; xx [ 57 ] = - xx [ 51 ] ; xx
[ 64 ] = xx [ 29 ] * xx [ 42 ] + xx [ 32 ] * xx [ 43 ] ; xx [ 65 ] = - xx [
64 ] ; xx [ 103 ] = xx [ 31 ] ; xx [ 104 ] = xx [ 35 ] ; xx [ 105 ] = xx [ 57
] ; xx [ 106 ] = xx [ 65 ] ; pm_math_Quaternion_compose_ra ( xx + 99 , xx +
103 , xx + 140 ) ; pm_math_Quaternion_compose_ra ( xx + 60 , xx + 140 , xx +
144 ) ; xx [ 66 ] = xx [ 5 ] * xx [ 143 ] + xx [ 8 ] * xx [ 141 ] ; xx [ 69 ]
= xx [ 5 ] * xx [ 142 ] ; xx [ 73 ] = xx [ 8 ] * xx [ 142 ] ; xx [ 74 ] = -
xx [ 66 ] ; xx [ 75 ] = xx [ 69 ] ; pm_math_Vector3_cross_ra ( xx + 141 , xx
+ 73 , xx + 81 ) ; xx [ 70 ] = xx [ 8 ] + ( xx [ 83 ] - xx [ 140 ] * xx [ 69
] ) * xx [ 47 ] ; xx [ 69 ] = xx [ 47 ] * ( xx [ 81 ] - xx [ 8 ] * xx [ 140 ]
* xx [ 142 ] ) - xx [ 5 ] ; xx [ 71 ] = xx [ 82 ] + xx [ 140 ] * xx [ 66 ] ;
xx [ 73 ] = - ( xx [ 70 ] * xx [ 55 ] ) ; xx [ 74 ] = - ( xx [ 70 ] * xx [ 56
] ) ; xx [ 75 ] = xx [ 69 ] * xx [ 55 ] + xx [ 48 ] * xx [ 71 ] ;
pm_math_Quaternion_xform_ra ( xx + 144 , xx + 73 , xx + 81 ) ; xx [ 73 ] = xx
[ 35 ] ; xx [ 74 ] = xx [ 57 ] ; xx [ 75 ] = xx [ 65 ] ; xx [ 35 ] = xx [ 37
] * xx [ 64 ] ; xx [ 57 ] = xx [ 41 ] * xx [ 64 ] ; xx [ 65 ] = xx [ 37 ] *
xx [ 33 ] - xx [ 51 ] * xx [ 41 ] ; xx [ 95 ] = - xx [ 35 ] ; xx [ 96 ] = xx
[ 57 ] ; xx [ 97 ] = xx [ 65 ] ; pm_math_Vector3_cross_ra ( xx + 73 , xx + 95
, xx + 107 ) ; xx [ 66 ] = xx [ 35 ] * xx [ 31 ] ; xx [ 77 ] = xx [ 46 ] + xx
[ 47 ] * ( xx [ 107 ] - xx [ 66 ] ) - xx [ 41 ] ; xx [ 78 ] = xx [ 57 ] * xx
[ 31 ] ; xx [ 87 ] = ( xx [ 78 ] + xx [ 108 ] ) * xx [ 47 ] - xx [ 37 ] ; xx
[ 88 ] = ( xx [ 65 ] * xx [ 31 ] + xx [ 109 ] ) * xx [ 47 ] ; xx [ 95 ] = xx
[ 77 ] ; xx [ 96 ] = xx [ 87 ] ; xx [ 97 ] = xx [ 88 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 95 , xx + 107 ) ; xx [ 65 ] = xx
[ 46 ] * xx [ 40 ] ; xx [ 90 ] = xx [ 65 ] * xx [ 15 ] ; xx [ 111 ] = xx [ 38
] * xx [ 46 ] ; xx [ 140 ] = ( xx [ 90 ] + xx [ 17 ] * xx [ 111 ] ) * xx [ 47
] ; xx [ 141 ] = xx [ 108 ] + xx [ 140 ] ; xx [ 142 ] = xx [ 38 ] * xx [ 111
] ; xx [ 143 ] = xx [ 65 ] * xx [ 40 ] ; xx [ 148 ] = xx [ 46 ] - ( xx [ 142
] + xx [ 143 ] ) * xx [ 47 ] ; xx [ 108 ] = xx [ 111 ] * xx [ 15 ] ; xx [ 149
] = xx [ 47 ] * ( xx [ 108 ] - xx [ 17 ] * xx [ 65 ] ) ; xx [ 150 ] = - ( xx
[ 141 ] * xx [ 8 ] ) ; xx [ 151 ] = ( xx [ 107 ] + xx [ 148 ] + xx [ 84 ] ) *
xx [ 8 ] + ( xx [ 109 ] + xx [ 149 ] + xx [ 86 ] ) * xx [ 5 ] ; xx [ 152 ] =
- ( xx [ 141 ] * xx [ 5 ] ) ; pm_math_Quaternion_xform_ra ( xx + 60 , xx +
150 , xx + 153 ) ; xx [ 107 ] = xx [ 25 ] * xx [ 76 ] ; xx [ 109 ] = xx [ 76
] * xx [ 21 ] ; xx [ 141 ] = xx [ 153 ] + xx [ 47 ] * ( xx [ 107 ] * xx [ 27
] + xx [ 109 ] * xx [ 22 ] ) ; pm_math_Quaternion_compose_ra ( xx + 60 , xx +
99 , xx + 156 ) ; pm_math_Quaternion_compose_ra ( xx + 156 , xx + 103 , xx +
99 ) ; xx [ 103 ] = xx [ 64 ] * xx [ 33 ] ; xx [ 104 ] = xx [ 51 ] * xx [ 31
] ; xx [ 105 ] = xx [ 47 ] * ( xx [ 103 ] - xx [ 104 ] ) ; xx [ 106 ] = xx [
51 ] * xx [ 51 ] ; xx [ 150 ] = xx [ 64 ] * xx [ 64 ] ; xx [ 151 ] = xx [ 45
] - ( xx [ 106 ] + xx [ 150 ] ) * xx [ 47 ] ; xx [ 152 ] = xx [ 64 ] * xx [
31 ] ; xx [ 160 ] = xx [ 51 ] * xx [ 33 ] ; xx [ 162 ] = xx [ 152 ] + xx [
160 ] ; xx [ 169 ] = - ( xx [ 55 ] * xx [ 105 ] ) ; xx [ 170 ] = - ( xx [ 56
] * xx [ 105 ] ) ; xx [ 171 ] = xx [ 55 ] * xx [ 151 ] + xx [ 162 ] * xx [ 48
] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 169 , xx + 172 ) ; xx [ 163
] = xx [ 88 ] * xx [ 40 ] ; xx [ 164 ] = xx [ 87 ] * xx [ 38 ] ; xx [ 166 ] =
xx [ 163 ] - xx [ 164 ] ; xx [ 169 ] = xx [ 26 ] ; xx [ 170 ] = xx [ 39 ] ;
xx [ 171 ] = xx [ 40 ] ; xx [ 26 ] = xx [ 87 ] * xx [ 17 ] ; xx [ 39 ] = xx [
17 ] * xx [ 88 ] ; xx [ 175 ] = xx [ 166 ] ; xx [ 176 ] = xx [ 26 ] ; xx [
177 ] = xx [ 39 ] ; pm_math_Vector3_cross_ra ( xx + 169 , xx + 175 , xx + 178
) ; xx [ 175 ] = ( xx [ 15 ] * xx [ 166 ] + xx [ 178 ] ) * xx [ 47 ] ; xx [
176 ] = ( xx [ 26 ] * xx [ 15 ] + xx [ 179 ] ) * xx [ 47 ] - xx [ 88 ] ; xx [
177 ] = xx [ 87 ] + ( xx [ 39 ] * xx [ 15 ] + xx [ 180 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 60 , xx + 175 , xx + 178 ) ; xx [ 26 ] =
xx [ 33 ] * xx [ 31 ] ; xx [ 39 ] = xx [ 51 ] * xx [ 64 ] ; xx [ 166 ] = ( xx
[ 26 ] + xx [ 39 ] ) * xx [ 47 ] ; xx [ 167 ] = xx [ 160 ] - xx [ 152 ] ; xx
[ 152 ] = xx [ 33 ] * xx [ 33 ] ; xx [ 160 ] = xx [ 45 ] - ( xx [ 150 ] + xx
[ 152 ] ) * xx [ 47 ] ; xx [ 175 ] = - ( xx [ 55 ] * xx [ 166 ] ) ; xx [ 176
] = - ( xx [ 56 ] * xx [ 166 ] ) ; xx [ 177 ] = xx [ 110 ] * xx [ 167 ] + xx
[ 56 ] * xx [ 160 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 175 , xx +
181 ) ; xx [ 150 ] = xx [ 77 ] * xx [ 38 ] ; xx [ 175 ] = xx [ 77 ] * xx [ 17
] ; xx [ 176 ] = xx [ 163 ] - xx [ 175 ] ; xx [ 163 ] = xx [ 38 ] * xx [ 88 ]
; xx [ 184 ] = xx [ 150 ] ; xx [ 185 ] = xx [ 176 ] ; xx [ 186 ] = xx [ 163 ]
; pm_math_Vector3_cross_ra ( xx + 169 , xx + 184 , xx + 187 ) ; xx [ 177 ] =
xx [ 17 ] * xx [ 46 ] ; xx [ 184 ] = xx [ 177 ] * xx [ 15 ] ; xx [ 185 ] = xx
[ 17 ] * xx [ 177 ] ; xx [ 193 ] = xx [ 88 ] + ( xx [ 150 ] * xx [ 15 ] + xx
[ 187 ] ) * xx [ 47 ] + ( xx [ 108 ] + xx [ 177 ] * xx [ 40 ] ) * xx [ 47 ] ;
xx [ 194 ] = ( xx [ 15 ] * xx [ 176 ] + xx [ 188 ] ) * xx [ 47 ] + xx [ 47 ]
* ( xx [ 111 ] * xx [ 40 ] - xx [ 184 ] ) ; xx [ 195 ] = ( xx [ 163 ] * xx [
15 ] + xx [ 189 ] ) * xx [ 47 ] - ( xx [ 77 ] - ( xx [ 185 ] + xx [ 142 ] ) *
xx [ 47 ] ) - xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 60 , xx + 193 ,
xx + 186 ) ; xx [ 17 ] = xx [ 45 ] - ( xx [ 152 ] + xx [ 106 ] ) * xx [ 47 ]
; xx [ 88 ] = xx [ 104 ] + xx [ 103 ] ; xx [ 103 ] = xx [ 39 ] - xx [ 26 ] ;
xx [ 189 ] = - ( xx [ 55 ] * xx [ 17 ] ) ; xx [ 190 ] = - ( xx [ 56 ] * xx [
17 ] ) ; xx [ 191 ] = xx [ 88 ] * xx [ 110 ] + xx [ 48 ] * xx [ 103 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 189 , xx + 193 ) ; xx [ 26 ] =
xx [ 77 ] * xx [ 40 ] ; xx [ 39 ] = xx [ 87 ] * xx [ 40 ] ; xx [ 40 ] = xx [
175 ] + xx [ 164 ] ; xx [ 189 ] = - xx [ 26 ] ; xx [ 190 ] = - xx [ 39 ] ; xx
[ 191 ] = - xx [ 40 ] ; pm_math_Vector3_cross_ra ( xx + 169 , xx + 189 , xx +
196 ) ; xx [ 169 ] = xx [ 47 ] * ( xx [ 196 ] - xx [ 26 ] * xx [ 15 ] ) - xx
[ 87 ] + xx [ 47 ] * ( xx [ 38 ] * xx [ 177 ] - xx [ 90 ] ) ; xx [ 170 ] = xx
[ 77 ] + xx [ 47 ] * ( xx [ 197 ] - xx [ 39 ] * xx [ 15 ] ) - ( xx [ 143 ] +
xx [ 185 ] ) * xx [ 47 ] + xx [ 46 ] ; xx [ 171 ] = xx [ 47 ] * ( xx [ 198 ]
- xx [ 40 ] * xx [ 15 ] ) - ( xx [ 184 ] + xx [ 38 ] * xx [ 65 ] ) * xx [ 47
] ; pm_math_Quaternion_xform_ra ( xx + 60 , xx + 169 , xx + 38 ) ; xx [ 15 ]
= xx [ 51 ] * xx [ 18 ] ; xx [ 26 ] = xx [ 18 ] * xx [ 33 ] ; xx [ 169 ] = xx
[ 47 ] * ( xx [ 15 ] * xx [ 31 ] - xx [ 26 ] * xx [ 64 ] ) ; xx [ 170 ] = - (
( xx [ 26 ] * xx [ 31 ] + xx [ 15 ] * xx [ 64 ] ) * xx [ 47 ] ) ; xx [ 171 ]
= ( xx [ 26 ] * xx [ 33 ] + xx [ 51 ] * xx [ 15 ] ) * xx [ 47 ] - xx [ 18 ] ;
pm_math_Quaternion_xform_ra ( xx + 156 , xx + 169 , xx + 175 ) ; xx [ 15 ] =
xx [ 24 ] * xx [ 101 ] ; xx [ 26 ] = xx [ 24 ] * xx [ 100 ] ; xx [ 65 ] = xx
[ 67 ] * xx [ 101 ] ; xx [ 77 ] = xx [ 67 ] * xx [ 100 ] ; xx [ 87 ] = xx [
72 ] * xx [ 33 ] ; xx [ 90 ] = xx [ 51 ] * xx [ 72 ] ; xx [ 169 ] = xx [ 47 ]
* ( xx [ 87 ] * xx [ 64 ] - xx [ 90 ] * xx [ 31 ] ) ; xx [ 170 ] = ( xx [ 87
] * xx [ 31 ] + xx [ 90 ] * xx [ 64 ] ) * xx [ 47 ] ; xx [ 171 ] = xx [ 72 ]
- ( xx [ 87 ] * xx [ 33 ] + xx [ 51 ] * xx [ 90 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 156 , xx + 169 , xx + 189 ) ; xx [ 64 ] =
xx [ 56 ] * xx [ 102 ] ; xx [ 87 ] = xx [ 55 ] * xx [ 102 ] ; xx [ 90 ] = -
xx [ 87 ] ; xx [ 104 ] = xx [ 55 ] * xx [ 101 ] - xx [ 56 ] * xx [ 100 ] ; xx
[ 169 ] = xx [ 64 ] ; xx [ 170 ] = xx [ 90 ] ; xx [ 171 ] = xx [ 104 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 169 , xx + 196 ) ; xx [ 106 ] = xx
[ 41 ] * xx [ 33 ] + xx [ 51 ] * xx [ 37 ] ; xx [ 169 ] = - xx [ 57 ] ; xx [
170 ] = - xx [ 35 ] ; xx [ 171 ] = xx [ 106 ] ; pm_math_Vector3_cross_ra ( xx
+ 73 , xx + 169 , xx + 201 ) ; xx [ 73 ] = xx [ 37 ] + xx [ 47 ] * ( xx [ 201
] - xx [ 78 ] ) ; xx [ 74 ] = ( xx [ 202 ] - xx [ 66 ] ) * xx [ 47 ] - xx [
41 ] ; xx [ 75 ] = ( xx [ 106 ] * xx [ 31 ] + xx [ 203 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 156 , xx + 73 , xx + 169 ) ; xx [ 31 ] =
state [ 34 ] + xx [ 128 ] ; xx [ 33 ] = xx [ 31 ] * xx [ 1 ] ; xx [ 35 ] =
cos ( xx [ 33 ] ) ; xx [ 51 ] = xx [ 2 ] * xx [ 35 ] ; xx [ 57 ] = sin ( xx [
33 ] ) ; xx [ 33 ] = xx [ 5 ] * xx [ 57 ] ; xx [ 66 ] = xx [ 8 ] * xx [ 57 ]
; xx [ 57 ] = xx [ 2 ] * xx [ 33 ] + xx [ 16 ] * xx [ 66 ] ; xx [ 73 ] = - xx
[ 57 ] ; xx [ 74 ] = xx [ 16 ] * xx [ 35 ] ; xx [ 35 ] = - xx [ 74 ] ; xx [
75 ] = xx [ 16 ] * xx [ 33 ] - xx [ 2 ] * xx [ 66 ] ; xx [ 201 ] = - xx [ 51
] ; xx [ 202 ] = xx [ 73 ] ; xx [ 203 ] = xx [ 35 ] ; xx [ 204 ] = xx [ 75 ]
; xx [ 213 ] = xx [ 59 ] ; xx [ 214 ] = xx [ 89 ] ; xx [ 215 ] = xx [ 68 ] ;
xx [ 216 ] = xx [ 98 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 213 , xx +
129 , xx + 217 ) ; xx [ 33 ] = xx [ 59 ] + xx [ 217 ] ; xx [ 59 ] = xx [ 89 ]
+ xx [ 218 ] ; xx [ 66 ] = xx [ 68 ] + xx [ 219 ] ; xx [ 68 ] = xx [ 98 ] +
xx [ 220 ] ; xx [ 78 ] = sqrt ( xx [ 33 ] * xx [ 33 ] + xx [ 59 ] * xx [ 59 ]
+ xx [ 66 ] * xx [ 66 ] + xx [ 68 ] * xx [ 68 ] ) ; if ( xx [ 19 ] > xx [ 78
] ) xx [ 78 ] = xx [ 19 ] ; xx [ 89 ] = xx [ 33 ] / xx [ 78 ] ; xx [ 33 ] =
xx [ 66 ] / xx [ 78 ] ; xx [ 66 ] = xx [ 16 ] * xx [ 89 ] - xx [ 2 ] * xx [
33 ] ; xx [ 98 ] = xx [ 59 ] / xx [ 78 ] ; xx [ 59 ] = xx [ 68 ] / xx [ 78 ]
; xx [ 68 ] = xx [ 16 ] * xx [ 98 ] + xx [ 2 ] * xx [ 59 ] ; xx [ 78 ] = xx [
16 ] * xx [ 33 ] + xx [ 2 ] * xx [ 89 ] ; xx [ 106 ] = xx [ 16 ] * xx [ 59 ]
- xx [ 2 ] * xx [ 98 ] ; xx [ 213 ] = xx [ 66 ] ; xx [ 214 ] = xx [ 68 ] ; xx
[ 215 ] = xx [ 78 ] ; xx [ 216 ] = xx [ 106 ] ; pm_math_Quaternion_compose_ra
( xx + 201 , xx + 213 , xx + 217 ) ; xx [ 205 ] = xx [ 68 ] ; xx [ 206 ] = xx
[ 78 ] ; xx [ 207 ] = xx [ 106 ] ; xx [ 108 ] = xx [ 5 ] * xx [ 106 ] - xx [
68 ] * xx [ 8 ] ; xx [ 111 ] = xx [ 78 ] * xx [ 5 ] ; xx [ 213 ] = xx [ 78 ]
* xx [ 8 ] ; xx [ 214 ] = xx [ 108 ] ; xx [ 215 ] = - xx [ 111 ] ;
pm_math_Vector3_cross_ra ( xx + 205 , xx + 213 , xx + 221 ) ; xx [ 142 ] = xx
[ 112 ] * ( xx [ 222 ] - xx [ 108 ] * xx [ 66 ] ) ; xx [ 108 ] = ( xx [ 8 ] +
xx [ 47 ] * ( xx [ 223 ] + xx [ 111 ] * xx [ 66 ] ) ) * xx [ 46 ] ; xx [ 111
] = xx [ 219 ] * xx [ 142 ] + xx [ 220 ] * xx [ 108 ] ; xx [ 143 ] = xx [ 218
] * xx [ 142 ] ; xx [ 150 ] = xx [ 218 ] * xx [ 108 ] ; xx [ 205 ] = - xx [
111 ] ; xx [ 206 ] = xx [ 143 ] ; xx [ 207 ] = xx [ 150 ] ;
pm_math_Vector3_cross_ra ( xx + 218 , xx + 205 , xx + 213 ) ; xx [ 152 ] = xx
[ 46 ] * xx [ 106 ] ; xx [ 163 ] = xx [ 152 ] * xx [ 66 ] ; xx [ 164 ] = xx [
78 ] * xx [ 46 ] ; xx [ 184 ] = ( xx [ 163 ] + xx [ 68 ] * xx [ 164 ] ) * xx
[ 47 ] ; xx [ 185 ] = xx [ 78 ] * xx [ 164 ] ; xx [ 199 ] = xx [ 152 ] * xx [
106 ] ; xx [ 205 ] = xx [ 84 ] + xx [ 46 ] - ( xx [ 185 ] + xx [ 199 ] ) * xx
[ 47 ] ; xx [ 206 ] = xx [ 164 ] * xx [ 66 ] ; xx [ 207 ] = xx [ 47 ] * ( xx
[ 68 ] * xx [ 152 ] - xx [ 206 ] ) - xx [ 86 ] ; xx [ 221 ] = - ( xx [ 8 ] *
xx [ 184 ] ) ; xx [ 222 ] = xx [ 205 ] * xx [ 8 ] - xx [ 207 ] * xx [ 5 ] ;
xx [ 223 ] = xx [ 5 ] * xx [ 184 ] ; pm_math_Quaternion_xform_ra ( xx + 201 ,
xx + 221 , xx + 224 ) ; xx [ 210 ] = xx [ 57 ] * xx [ 76 ] ; xx [ 216 ] = xx
[ 76 ] * xx [ 75 ] ; xx [ 221 ] = xx [ 68 ] * xx [ 46 ] ; xx [ 222 ] = xx [
221 ] * xx [ 66 ] ; xx [ 66 ] = xx [ 68 ] * xx [ 221 ] ; xx [ 227 ] = - ( (
xx [ 206 ] + xx [ 221 ] * xx [ 106 ] ) * xx [ 47 ] ) ; xx [ 228 ] = xx [ 47 ]
* ( xx [ 222 ] - xx [ 164 ] * xx [ 106 ] ) ; xx [ 229 ] = ( xx [ 66 ] + xx [
185 ] ) * xx [ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 201 , xx
+ 227 , xx + 233 ) ; xx [ 68 ] = xx [ 46 ] * xx [ 219 ] ; xx [ 106 ] = xx [
217 ] * xx [ 68 ] ; xx [ 164 ] = xx [ 46 ] * xx [ 218 ] ; xx [ 185 ] = xx [
46 ] * xx [ 220 ] ; xx [ 206 ] = xx [ 217 ] * xx [ 185 ] ; xx [ 227 ] = xx [
47 ] * ( xx [ 78 ] * xx [ 221 ] - xx [ 163 ] ) ; xx [ 228 ] = xx [ 46 ] - (
xx [ 199 ] + xx [ 66 ] ) * xx [ 47 ] ; xx [ 229 ] = ( xx [ 222 ] + xx [ 78 ]
* xx [ 152 ] ) * xx [ 47 ] ; pm_math_Quaternion_xform_ra ( xx + 201 , xx +
227 , xx + 221 ) ; xx [ 66 ] = xx [ 154 ] - ( xx [ 109 ] * xx [ 21 ] + xx [
25 ] * xx [ 107 ] ) * xx [ 47 ] ; xx [ 78 ] = xx [ 99 ] * xx [ 102 ] ; xx [
152 ] = xx [ 217 ] * xx [ 164 ] ; xx [ 163 ] = xx [ 220 ] * xx [ 185 ] ; xx [
199 ] = xx [ 218 ] * xx [ 164 ] ; xx [ 153 ] = xx [ 155 ] + ( xx [ 109 ] * xx
[ 27 ] - xx [ 107 ] * xx [ 22 ] ) * xx [ 47 ] ; xx [ 107 ] = xx [ 219 ] * xx
[ 68 ] ; xx [ 227 ] = xx [ 70 ] * xx [ 80 ] ; xx [ 228 ] = - ( xx [ 70 ] * xx
[ 91 ] ) ; xx [ 229 ] = xx [ 92 ] * xx [ 71 ] - xx [ 69 ] * xx [ 80 ] ;
pm_math_Quaternion_xform_ra ( xx + 144 , xx + 227 , xx + 239 ) ; xx [ 227 ] =
xx [ 80 ] * xx [ 105 ] ; xx [ 228 ] = - ( xx [ 91 ] * xx [ 105 ] ) ; xx [ 229
] = xx [ 162 ] * xx [ 92 ] - xx [ 80 ] * xx [ 151 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 227 , xx + 245 ) ; xx [ 227 ] =
xx [ 80 ] * xx [ 166 ] ; xx [ 228 ] = - ( xx [ 91 ] * xx [ 166 ] ) ; xx [ 229
] = xx [ 91 ] * xx [ 160 ] - xx [ 161 ] * xx [ 167 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 227 , xx + 248 ) ; xx [ 227 ] =
xx [ 80 ] * xx [ 17 ] ; xx [ 228 ] = - ( xx [ 91 ] * xx [ 17 ] ) ; xx [ 229 ]
= xx [ 92 ] * xx [ 103 ] - xx [ 88 ] * xx [ 161 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 227 , xx + 251 ) ; xx [ 109 ] =
xx [ 165 ] * xx [ 101 ] ; xx [ 154 ] = xx [ 165 ] * xx [ 100 ] ; xx [ 155 ] =
xx [ 168 ] * xx [ 101 ] ; xx [ 227 ] = xx [ 168 ] * xx [ 100 ] ; xx [ 228 ] =
xx [ 91 ] * xx [ 102 ] ; xx [ 229 ] = xx [ 80 ] * xx [ 102 ] ; xx [ 230 ] =
xx [ 91 ] * xx [ 100 ] + xx [ 80 ] * xx [ 101 ] ; xx [ 254 ] = xx [ 228 ] ;
xx [ 255 ] = xx [ 229 ] ; xx [ 256 ] = - xx [ 230 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 254 , xx + 260 ) ; xx [ 231 ] =
state [ 43 ] + xx [ 132 ] ; xx [ 236 ] = xx [ 231 ] * xx [ 1 ] ; xx [ 237 ] =
cos ( xx [ 236 ] ) ; xx [ 254 ] = xx [ 192 ] * xx [ 237 ] ; xx [ 255 ] = sin
( xx [ 236 ] ) ; xx [ 236 ] = xx [ 5 ] * xx [ 255 ] ; xx [ 256 ] = xx [ 8 ] *
xx [ 255 ] ; xx [ 255 ] = xx [ 192 ] * xx [ 236 ] - xx [ 200 ] * xx [ 256 ] ;
xx [ 257 ] = xx [ 200 ] * xx [ 237 ] ; xx [ 237 ] = - xx [ 257 ] ; xx [ 258 ]
= xx [ 192 ] * xx [ 256 ] + xx [ 200 ] * xx [ 236 ] ; xx [ 236 ] = - xx [ 258
] ; xx [ 263 ] = - xx [ 254 ] ; xx [ 264 ] = xx [ 255 ] ; xx [ 265 ] = xx [
237 ] ; xx [ 266 ] = xx [ 236 ] ; xx [ 267 ] = xx [ 209 ] ; xx [ 268 ] = xx [
212 ] ; xx [ 269 ] = xx [ 208 ] ; xx [ 270 ] = xx [ 211 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 267 , xx + 133 , xx + 272 ) ; xx [ 256
] = xx [ 208 ] + xx [ 274 ] ; xx [ 208 ] = xx [ 209 ] + xx [ 272 ] ; xx [ 209
] = xx [ 212 ] + xx [ 273 ] ; xx [ 212 ] = xx [ 211 ] + xx [ 275 ] ; xx [ 211
] = sqrt ( xx [ 208 ] * xx [ 208 ] + xx [ 209 ] * xx [ 209 ] + xx [ 256 ] *
xx [ 256 ] + xx [ 212 ] * xx [ 212 ] ) ; if ( xx [ 19 ] > xx [ 211 ] ) xx [
211 ] = xx [ 19 ] ; xx [ 267 ] = xx [ 256 ] / xx [ 211 ] ; xx [ 256 ] = xx [
208 ] / xx [ 211 ] ; xx [ 208 ] = xx [ 2 ] * xx [ 267 ] + xx [ 16 ] * xx [
256 ] ; xx [ 268 ] = xx [ 212 ] / xx [ 211 ] ; xx [ 212 ] = xx [ 209 ] / xx [
211 ] ; xx [ 209 ] = xx [ 2 ] * xx [ 268 ] - xx [ 16 ] * xx [ 212 ] ; xx [
211 ] = - xx [ 209 ] ; xx [ 269 ] = xx [ 2 ] * xx [ 256 ] - xx [ 16 ] * xx [
267 ] ; xx [ 270 ] = - xx [ 269 ] ; xx [ 272 ] = xx [ 2 ] * xx [ 212 ] + xx [
16 ] * xx [ 268 ] ; xx [ 273 ] = xx [ 208 ] ; xx [ 274 ] = xx [ 211 ] ; xx [
275 ] = xx [ 270 ] ; xx [ 276 ] = xx [ 272 ] ; pm_math_Quaternion_compose_ra
( xx + 263 , xx + 273 , xx + 281 ) ; xx [ 273 ] = xx [ 211 ] ; xx [ 274 ] =
xx [ 270 ] ; xx [ 275 ] = xx [ 272 ] ; xx [ 211 ] = xx [ 209 ] * xx [ 8 ] -
xx [ 5 ] * xx [ 272 ] ; xx [ 270 ] = xx [ 269 ] * xx [ 5 ] ; xx [ 276 ] = - (
xx [ 269 ] * xx [ 8 ] ) ; xx [ 277 ] = xx [ 211 ] ; xx [ 278 ] = - xx [ 270 ]
; pm_math_Vector3_cross_ra ( xx + 273 , xx + 276 , xx + 291 ) ; xx [ 273 ] =
xx [ 112 ] * ( xx [ 292 ] - xx [ 211 ] * xx [ 208 ] ) ; xx [ 211 ] = ( xx [ 8
] + xx [ 47 ] * ( xx [ 293 ] + xx [ 270 ] * xx [ 208 ] ) ) * xx [ 46 ] ; xx [
270 ] = xx [ 283 ] * xx [ 273 ] + xx [ 284 ] * xx [ 211 ] ; xx [ 274 ] = xx [
282 ] * xx [ 273 ] ; xx [ 275 ] = xx [ 282 ] * xx [ 211 ] ; xx [ 276 ] = - xx
[ 270 ] ; xx [ 277 ] = xx [ 274 ] ; xx [ 278 ] = xx [ 275 ] ;
pm_math_Vector3_cross_ra ( xx + 282 , xx + 276 , xx + 291 ) ; xx [ 276 ] = xx
[ 46 ] * xx [ 272 ] ; xx [ 277 ] = xx [ 276 ] * xx [ 208 ] ; xx [ 278 ] = xx
[ 269 ] * xx [ 46 ] ; xx [ 285 ] = ( xx [ 277 ] + xx [ 209 ] * xx [ 278 ] ) *
xx [ 47 ] ; xx [ 286 ] = xx [ 269 ] * xx [ 278 ] ; xx [ 288 ] = xx [ 276 ] *
xx [ 272 ] ; xx [ 294 ] = xx [ 84 ] + xx [ 46 ] - ( xx [ 286 ] + xx [ 288 ] )
* xx [ 47 ] ; xx [ 295 ] = xx [ 278 ] * xx [ 208 ] ; xx [ 296 ] = xx [ 86 ] +
xx [ 47 ] * ( xx [ 295 ] - xx [ 209 ] * xx [ 276 ] ) ; xx [ 297 ] = - ( xx [
8 ] * xx [ 285 ] ) ; xx [ 298 ] = xx [ 294 ] * xx [ 8 ] + xx [ 296 ] * xx [ 5
] ; xx [ 299 ] = - ( xx [ 5 ] * xx [ 285 ] ) ; pm_math_Quaternion_xform_ra (
xx + 263 , xx + 297 , xx + 300 ) ; xx [ 297 ] = xx [ 255 ] * xx [ 76 ] ; xx [
298 ] = xx [ 76 ] * xx [ 258 ] ; xx [ 299 ] = xx [ 209 ] * xx [ 46 ] ; xx [
303 ] = xx [ 299 ] * xx [ 208 ] ; xx [ 208 ] = xx [ 209 ] * xx [ 299 ] ; xx [
304 ] = ( xx [ 295 ] + xx [ 299 ] * xx [ 272 ] ) * xx [ 47 ] ; xx [ 305 ] =
xx [ 47 ] * ( xx [ 278 ] * xx [ 272 ] - xx [ 303 ] ) ; xx [ 306 ] = ( xx [
208 ] + xx [ 286 ] ) * xx [ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra (
xx + 263 , xx + 304 , xx + 307 ) ; xx [ 209 ] = xx [ 46 ] * xx [ 283 ] ; xx [
272 ] = xx [ 281 ] * xx [ 209 ] ; xx [ 278 ] = xx [ 46 ] * xx [ 282 ] ; xx [
286 ] = xx [ 46 ] * xx [ 284 ] ; xx [ 295 ] = xx [ 281 ] * xx [ 286 ] ; xx [
304 ] = xx [ 47 ] * ( xx [ 269 ] * xx [ 299 ] - xx [ 277 ] ) ; xx [ 305 ] =
xx [ 46 ] - ( xx [ 288 ] + xx [ 208 ] ) * xx [ 47 ] ; xx [ 306 ] = - ( ( xx [
303 ] + xx [ 269 ] * xx [ 276 ] ) * xx [ 47 ] ) ; pm_math_Quaternion_xform_ra
( xx + 263 , xx + 304 , xx + 311 ) ; xx [ 208 ] = xx [ 281 ] * xx [ 278 ] ;
xx [ 269 ] = xx [ 284 ] * xx [ 286 ] ; xx [ 276 ] = xx [ 282 ] * xx [ 278 ] ;
xx [ 277 ] = xx [ 283 ] * xx [ 209 ] ; xx [ 303 ] = xx [ 70 ] * xx [ 232 ] ;
xx [ 304 ] = xx [ 70 ] * xx [ 238 ] ; xx [ 305 ] = - ( xx [ 69 ] * xx [ 232 ]
+ xx [ 242 ] * xx [ 71 ] ) ; pm_math_Quaternion_xform_ra ( xx + 144 , xx +
303 , xx + 317 ) ; xx [ 303 ] = xx [ 232 ] * xx [ 105 ] ; xx [ 304 ] = xx [
238 ] * xx [ 105 ] ; xx [ 305 ] = - ( xx [ 232 ] * xx [ 151 ] + xx [ 162 ] *
xx [ 242 ] ) ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 303 , xx + 323 )
; xx [ 303 ] = xx [ 232 ] * xx [ 166 ] ; xx [ 304 ] = xx [ 238 ] * xx [ 166 ]
; xx [ 305 ] = - ( xx [ 243 ] * xx [ 167 ] + xx [ 238 ] * xx [ 160 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 303 , xx + 326 ) ; xx [ 303 ] =
xx [ 232 ] * xx [ 17 ] ; xx [ 304 ] = xx [ 238 ] * xx [ 17 ] ; xx [ 305 ] = -
( xx [ 88 ] * xx [ 243 ] + xx [ 242 ] * xx [ 103 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 303 , xx + 329 ) ; xx [ 288 ] =
xx [ 244 ] * xx [ 101 ] ; xx [ 299 ] = xx [ 244 ] * xx [ 100 ] ; xx [ 303 ] =
xx [ 259 ] * xx [ 101 ] ; xx [ 304 ] = xx [ 259 ] * xx [ 100 ] ; xx [ 305 ] =
xx [ 238 ] * xx [ 102 ] ; xx [ 306 ] = xx [ 232 ] * xx [ 102 ] ; xx [ 314 ] =
xx [ 238 ] * xx [ 100 ] - xx [ 232 ] * xx [ 101 ] ; xx [ 332 ] = - xx [ 305 ]
; xx [ 333 ] = xx [ 306 ] ; xx [ 334 ] = xx [ 314 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 332 , xx + 338 ) ; xx [ 315 ] =
state [ 52 ] + xx [ 136 ] ; xx [ 332 ] = xx [ 315 ] * xx [ 1 ] ; xx [ 333 ] =
cos ( xx [ 332 ] ) ; xx [ 334 ] = xx [ 271 ] * xx [ 333 ] ; xx [ 335 ] = sin
( xx [ 332 ] ) ; xx [ 332 ] = xx [ 5 ] * xx [ 335 ] ; xx [ 336 ] = xx [ 8 ] *
xx [ 335 ] ; xx [ 335 ] = xx [ 271 ] * xx [ 332 ] - xx [ 279 ] * xx [ 336 ] ;
xx [ 341 ] = xx [ 279 ] * xx [ 333 ] ; xx [ 333 ] = - xx [ 341 ] ; xx [ 342 ]
= xx [ 271 ] * xx [ 336 ] + xx [ 279 ] * xx [ 332 ] ; xx [ 343 ] = xx [ 334 ]
; xx [ 344 ] = xx [ 335 ] ; xx [ 345 ] = xx [ 333 ] ; xx [ 346 ] = xx [ 342 ]
; xx [ 351 ] = xx [ 280 ] ; xx [ 352 ] = xx [ 289 ] ; xx [ 353 ] = xx [ 287 ]
; xx [ 354 ] = xx [ 290 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 351 , xx +
137 , xx + 360 ) ; xx [ 332 ] = xx [ 280 ] + xx [ 360 ] ; xx [ 280 ] = xx [
289 ] + xx [ 361 ] ; xx [ 289 ] = xx [ 287 ] + xx [ 362 ] ; xx [ 287 ] = xx [
290 ] + xx [ 363 ] ; xx [ 290 ] = sqrt ( xx [ 332 ] * xx [ 332 ] + xx [ 280 ]
* xx [ 280 ] + xx [ 289 ] * xx [ 289 ] + xx [ 287 ] * xx [ 287 ] ) ; if ( xx
[ 19 ] > xx [ 290 ] ) xx [ 290 ] = xx [ 19 ] ; xx [ 336 ] = xx [ 332 ] / xx [
290 ] ; xx [ 332 ] = xx [ 289 ] / xx [ 290 ] ; xx [ 289 ] = xx [ 16 ] * xx [
336 ] - xx [ 2 ] * xx [ 332 ] ; xx [ 347 ] = xx [ 280 ] / xx [ 290 ] ; xx [
280 ] = xx [ 287 ] / xx [ 290 ] ; xx [ 287 ] = xx [ 16 ] * xx [ 347 ] + xx [
2 ] * xx [ 280 ] ; xx [ 290 ] = xx [ 16 ] * xx [ 332 ] + xx [ 2 ] * xx [ 336
] ; xx [ 348 ] = xx [ 16 ] * xx [ 280 ] - xx [ 2 ] * xx [ 347 ] ; xx [ 351 ]
= xx [ 289 ] ; xx [ 352 ] = xx [ 287 ] ; xx [ 353 ] = xx [ 290 ] ; xx [ 354 ]
= xx [ 348 ] ; pm_math_Quaternion_compose_ra ( xx + 343 , xx + 351 , xx + 360
) ; xx [ 351 ] = xx [ 287 ] ; xx [ 352 ] = xx [ 290 ] ; xx [ 353 ] = xx [ 348
] ; xx [ 349 ] = xx [ 5 ] * xx [ 348 ] - xx [ 287 ] * xx [ 8 ] ; xx [ 354 ] =
xx [ 290 ] * xx [ 5 ] ; xx [ 355 ] = xx [ 290 ] * xx [ 8 ] ; xx [ 356 ] = xx
[ 349 ] ; xx [ 357 ] = - xx [ 354 ] ; pm_math_Vector3_cross_ra ( xx + 351 ,
xx + 355 , xx + 364 ) ; xx [ 351 ] = xx [ 112 ] * ( xx [ 365 ] - xx [ 349 ] *
xx [ 289 ] ) ; xx [ 349 ] = ( xx [ 8 ] + xx [ 47 ] * ( xx [ 366 ] + xx [ 354
] * xx [ 289 ] ) ) * xx [ 46 ] ; xx [ 352 ] = xx [ 362 ] * xx [ 351 ] + xx [
363 ] * xx [ 349 ] ; xx [ 353 ] = xx [ 361 ] * xx [ 351 ] ; xx [ 354 ] = xx [
361 ] * xx [ 349 ] ; xx [ 355 ] = - xx [ 352 ] ; xx [ 356 ] = xx [ 353 ] ; xx
[ 357 ] = xx [ 354 ] ; pm_math_Vector3_cross_ra ( xx + 361 , xx + 355 , xx +
364 ) ; xx [ 355 ] = xx [ 46 ] * xx [ 348 ] ; xx [ 356 ] = xx [ 355 ] * xx [
289 ] ; xx [ 357 ] = xx [ 290 ] * xx [ 46 ] ; xx [ 368 ] = ( xx [ 356 ] + xx
[ 287 ] * xx [ 357 ] ) * xx [ 47 ] ; xx [ 371 ] = xx [ 290 ] * xx [ 357 ] ;
xx [ 372 ] = xx [ 355 ] * xx [ 348 ] ; xx [ 373 ] = xx [ 84 ] + xx [ 46 ] - (
xx [ 371 ] + xx [ 372 ] ) * xx [ 47 ] ; xx [ 374 ] = xx [ 357 ] * xx [ 289 ]
; xx [ 375 ] = xx [ 47 ] * ( xx [ 287 ] * xx [ 355 ] - xx [ 374 ] ) - xx [ 86
] ; xx [ 376 ] = - ( xx [ 8 ] * xx [ 368 ] ) ; xx [ 377 ] = xx [ 373 ] * xx [
8 ] - xx [ 375 ] * xx [ 5 ] ; xx [ 378 ] = xx [ 5 ] * xx [ 368 ] ;
pm_math_Quaternion_xform_ra ( xx + 343 , xx + 376 , xx + 379 ) ; xx [ 376 ] =
xx [ 335 ] * xx [ 76 ] ; xx [ 377 ] = xx [ 76 ] * xx [ 342 ] ; xx [ 378 ] =
xx [ 287 ] * xx [ 46 ] ; xx [ 382 ] = xx [ 378 ] * xx [ 289 ] ; xx [ 289 ] =
xx [ 287 ] * xx [ 378 ] ; xx [ 383 ] = - ( ( xx [ 374 ] + xx [ 378 ] * xx [
348 ] ) * xx [ 47 ] ) ; xx [ 384 ] = xx [ 47 ] * ( xx [ 382 ] - xx [ 357 ] *
xx [ 348 ] ) ; xx [ 385 ] = ( xx [ 289 ] + xx [ 371 ] ) * xx [ 47 ] - xx [ 46
] ; pm_math_Quaternion_xform_ra ( xx + 343 , xx + 383 , xx + 386 ) ; xx [ 287
] = xx [ 46 ] * xx [ 362 ] ; xx [ 348 ] = xx [ 360 ] * xx [ 287 ] ; xx [ 357
] = xx [ 46 ] * xx [ 361 ] ; xx [ 371 ] = xx [ 46 ] * xx [ 363 ] ; xx [ 374 ]
= xx [ 360 ] * xx [ 371 ] ; xx [ 383 ] = xx [ 47 ] * ( xx [ 290 ] * xx [ 378
] - xx [ 356 ] ) ; xx [ 384 ] = xx [ 46 ] - ( xx [ 372 ] + xx [ 289 ] ) * xx
[ 47 ] ; xx [ 385 ] = ( xx [ 382 ] + xx [ 290 ] * xx [ 355 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 343 , xx + 383 , xx + 391 ) ; xx [ 289 ] =
xx [ 360 ] * xx [ 357 ] ; xx [ 290 ] = xx [ 363 ] * xx [ 371 ] ; xx [ 355 ] =
xx [ 361 ] * xx [ 357 ] ; xx [ 356 ] = xx [ 362 ] * xx [ 287 ] ; xx [ 382 ] =
- ( xx [ 70 ] * xx [ 310 ] ) ; xx [ 383 ] = xx [ 70 ] * xx [ 316 ] ; xx [ 384
] = xx [ 69 ] * xx [ 310 ] - xx [ 320 ] * xx [ 71 ] ;
pm_math_Quaternion_xform_ra ( xx + 144 , xx + 382 , xx + 397 ) ; xx [ 382 ] =
- ( xx [ 310 ] * xx [ 105 ] ) ; xx [ 383 ] = xx [ 316 ] * xx [ 105 ] ; xx [
384 ] = xx [ 310 ] * xx [ 151 ] - xx [ 162 ] * xx [ 320 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 382 , xx + 401 ) ; xx [ 382 ] =
- ( xx [ 310 ] * xx [ 166 ] ) ; xx [ 383 ] = xx [ 316 ] * xx [ 166 ] ; xx [
384 ] = xx [ 321 ] * xx [ 167 ] - xx [ 316 ] * xx [ 160 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 382 , xx + 404 ) ; xx [ 382 ] =
- ( xx [ 310 ] * xx [ 17 ] ) ; xx [ 383 ] = xx [ 316 ] * xx [ 17 ] ; xx [ 384
] = xx [ 88 ] * xx [ 321 ] - xx [ 320 ] * xx [ 103 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 382 , xx + 407 ) ; xx [ 372 ] =
xx [ 322 ] * xx [ 101 ] ; xx [ 378 ] = xx [ 322 ] * xx [ 100 ] ; xx [ 382 ] =
xx [ 337 ] * xx [ 101 ] ; xx [ 383 ] = xx [ 337 ] * xx [ 100 ] ; xx [ 384 ] =
xx [ 316 ] * xx [ 102 ] ; xx [ 385 ] = xx [ 310 ] * xx [ 102 ] ; xx [ 389 ] =
- xx [ 385 ] ; xx [ 394 ] = xx [ 316 ] * xx [ 100 ] + xx [ 310 ] * xx [ 101 ]
; xx [ 410 ] = - xx [ 384 ] ; xx [ 411 ] = xx [ 389 ] ; xx [ 412 ] = xx [ 394
] ; pm_math_Vector3_cross_ra ( xx + 100 , xx + 410 , xx + 413 ) ; xx [ 395 ]
= state [ 16 ] + xx [ 120 ] ; xx [ 410 ] = xx [ 395 ] * xx [ 1 ] ; xx [ 411 ]
= cos ( xx [ 410 ] ) ; xx [ 412 ] = xx [ 350 ] * xx [ 411 ] ; xx [ 416 ] =
sin ( xx [ 410 ] ) ; xx [ 410 ] = xx [ 5 ] * xx [ 416 ] ; xx [ 417 ] = xx [ 8
] * xx [ 416 ] ; xx [ 416 ] = xx [ 350 ] * xx [ 410 ] + xx [ 358 ] * xx [ 417
] ; xx [ 418 ] = - xx [ 416 ] ; xx [ 419 ] = xx [ 358 ] * xx [ 411 ] ; xx [
411 ] = - xx [ 419 ] ; xx [ 420 ] = xx [ 358 ] * xx [ 410 ] - xx [ 350 ] * xx
[ 417 ] ; xx [ 422 ] = - xx [ 412 ] ; xx [ 423 ] = xx [ 418 ] ; xx [ 424 ] =
xx [ 411 ] ; xx [ 425 ] = xx [ 420 ] ; xx [ 433 ] = xx [ 359 ] ; xx [ 434 ] =
xx [ 369 ] ; xx [ 435 ] = xx [ 367 ] ; xx [ 436 ] = xx [ 370 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 433 , xx + 121 , xx + 437 ) ; xx [ 410
] = xx [ 359 ] + xx [ 437 ] ; xx [ 359 ] = xx [ 369 ] + xx [ 438 ] ; xx [ 369
] = xx [ 367 ] + xx [ 439 ] ; xx [ 367 ] = xx [ 370 ] + xx [ 440 ] ; xx [ 370
] = sqrt ( xx [ 410 ] * xx [ 410 ] + xx [ 359 ] * xx [ 359 ] + xx [ 369 ] *
xx [ 369 ] + xx [ 367 ] * xx [ 367 ] ) ; if ( xx [ 19 ] > xx [ 370 ] ) xx [
370 ] = xx [ 19 ] ; xx [ 417 ] = xx [ 410 ] / xx [ 370 ] ; xx [ 410 ] = xx [
369 ] / xx [ 370 ] ; xx [ 369 ] = xx [ 16 ] * xx [ 417 ] - xx [ 2 ] * xx [
410 ] ; xx [ 426 ] = xx [ 359 ] / xx [ 370 ] ; xx [ 359 ] = xx [ 367 ] / xx [
370 ] ; xx [ 367 ] = xx [ 16 ] * xx [ 426 ] + xx [ 2 ] * xx [ 359 ] ; xx [
370 ] = xx [ 16 ] * xx [ 410 ] + xx [ 2 ] * xx [ 417 ] ; xx [ 427 ] = xx [ 16
] * xx [ 359 ] - xx [ 2 ] * xx [ 426 ] ; xx [ 433 ] = xx [ 369 ] ; xx [ 434 ]
= xx [ 367 ] ; xx [ 435 ] = xx [ 370 ] ; xx [ 436 ] = xx [ 427 ] ;
pm_math_Quaternion_compose_ra ( xx + 422 , xx + 433 , xx + 437 ) ; xx [ 433 ]
= xx [ 367 ] ; xx [ 434 ] = xx [ 370 ] ; xx [ 435 ] = xx [ 427 ] ; xx [ 428 ]
= xx [ 5 ] * xx [ 427 ] - xx [ 367 ] * xx [ 8 ] ; xx [ 430 ] = xx [ 370 ] *
xx [ 5 ] ; xx [ 441 ] = xx [ 370 ] * xx [ 8 ] ; xx [ 442 ] = xx [ 428 ] ; xx
[ 443 ] = - xx [ 430 ] ; pm_math_Vector3_cross_ra ( xx + 433 , xx + 441 , xx
+ 444 ) ; xx [ 433 ] = xx [ 112 ] * ( xx [ 445 ] - xx [ 428 ] * xx [ 369 ] )
; xx [ 428 ] = ( xx [ 8 ] + xx [ 47 ] * ( xx [ 446 ] + xx [ 430 ] * xx [ 369
] ) ) * xx [ 46 ] ; xx [ 430 ] = xx [ 439 ] * xx [ 433 ] + xx [ 440 ] * xx [
428 ] ; xx [ 434 ] = xx [ 438 ] * xx [ 433 ] ; xx [ 435 ] = xx [ 438 ] * xx [
428 ] ; xx [ 441 ] = - xx [ 430 ] ; xx [ 442 ] = xx [ 434 ] ; xx [ 443 ] = xx
[ 435 ] ; pm_math_Vector3_cross_ra ( xx + 438 , xx + 441 , xx + 444 ) ; xx [
436 ] = xx [ 46 ] * xx [ 427 ] ; xx [ 441 ] = xx [ 436 ] * xx [ 369 ] ; xx [
442 ] = xx [ 370 ] * xx [ 46 ] ; xx [ 443 ] = ( xx [ 441 ] + xx [ 367 ] * xx
[ 442 ] ) * xx [ 47 ] ; xx [ 447 ] = xx [ 370 ] * xx [ 442 ] ; xx [ 448 ] =
xx [ 436 ] * xx [ 427 ] ; xx [ 449 ] = xx [ 84 ] + xx [ 46 ] - ( xx [ 447 ] +
xx [ 448 ] ) * xx [ 47 ] ; xx [ 450 ] = xx [ 442 ] * xx [ 369 ] ; xx [ 451 ]
= xx [ 47 ] * ( xx [ 367 ] * xx [ 436 ] - xx [ 450 ] ) - xx [ 86 ] ; xx [ 452
] = - ( xx [ 8 ] * xx [ 443 ] ) ; xx [ 453 ] = xx [ 449 ] * xx [ 8 ] - xx [
451 ] * xx [ 5 ] ; xx [ 454 ] = xx [ 5 ] * xx [ 443 ] ;
pm_math_Quaternion_xform_ra ( xx + 422 , xx + 452 , xx + 455 ) ; xx [ 452 ] =
xx [ 416 ] * xx [ 76 ] ; xx [ 453 ] = xx [ 76 ] * xx [ 420 ] ; xx [ 454 ] =
xx [ 367 ] * xx [ 46 ] ; xx [ 458 ] = xx [ 454 ] * xx [ 369 ] ; xx [ 369 ] =
xx [ 367 ] * xx [ 454 ] ; xx [ 459 ] = - ( ( xx [ 450 ] + xx [ 454 ] * xx [
427 ] ) * xx [ 47 ] ) ; xx [ 460 ] = xx [ 47 ] * ( xx [ 458 ] - xx [ 442 ] *
xx [ 427 ] ) ; xx [ 461 ] = ( xx [ 369 ] + xx [ 447 ] ) * xx [ 47 ] - xx [ 46
] ; pm_math_Quaternion_xform_ra ( xx + 422 , xx + 459 , xx + 462 ) ; xx [ 367
] = xx [ 46 ] * xx [ 439 ] ; xx [ 427 ] = xx [ 437 ] * xx [ 367 ] ; xx [ 442
] = xx [ 46 ] * xx [ 438 ] ; xx [ 447 ] = xx [ 46 ] * xx [ 440 ] ; xx [ 450 ]
= xx [ 437 ] * xx [ 447 ] ; xx [ 459 ] = xx [ 47 ] * ( xx [ 370 ] * xx [ 454
] - xx [ 441 ] ) ; xx [ 460 ] = xx [ 46 ] - ( xx [ 448 ] + xx [ 369 ] ) * xx
[ 47 ] ; xx [ 461 ] = ( xx [ 458 ] + xx [ 370 ] * xx [ 436 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 422 , xx + 459 , xx + 465 ) ; xx [ 369 ] =
xx [ 437 ] * xx [ 442 ] ; xx [ 370 ] = xx [ 440 ] * xx [ 447 ] ; xx [ 436 ] =
xx [ 438 ] * xx [ 442 ] ; xx [ 441 ] = xx [ 439 ] * xx [ 367 ] ; xx [ 458 ] =
- ( xx [ 70 ] * xx [ 390 ] ) ; xx [ 459 ] = - ( xx [ 70 ] * xx [ 396 ] ) ; xx
[ 460 ] = xx [ 69 ] * xx [ 390 ] + xx [ 400 ] * xx [ 71 ] ;
pm_math_Quaternion_xform_ra ( xx + 144 , xx + 458 , xx + 69 ) ; xx [ 144 ] =
- ( xx [ 390 ] * xx [ 105 ] ) ; xx [ 145 ] = - ( xx [ 396 ] * xx [ 105 ] ) ;
xx [ 146 ] = xx [ 390 ] * xx [ 151 ] + xx [ 162 ] * xx [ 400 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 144 , xx + 458 ) ; xx [ 144 ] =
- ( xx [ 390 ] * xx [ 166 ] ) ; xx [ 145 ] = - ( xx [ 396 ] * xx [ 166 ] ) ;
xx [ 146 ] = xx [ 44 ] * xx [ 167 ] + xx [ 396 ] * xx [ 160 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 144 , xx + 468 ) ; xx [ 144 ] =
- ( xx [ 390 ] * xx [ 17 ] ) ; xx [ 145 ] = - ( xx [ 396 ] * xx [ 17 ] ) ; xx
[ 146 ] = xx [ 88 ] * xx [ 44 ] + xx [ 400 ] * xx [ 103 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 144 , xx + 471 ) ; xx [ 17 ] =
xx [ 9 ] * xx [ 101 ] ; xx [ 88 ] = xx [ 9 ] * xx [ 100 ] ; xx [ 103 ] = xx [
50 ] * xx [ 101 ] ; xx [ 105 ] = xx [ 50 ] * xx [ 100 ] ; xx [ 144 ] = xx [
396 ] * xx [ 102 ] ; xx [ 145 ] = xx [ 390 ] * xx [ 102 ] ; xx [ 146 ] = - xx
[ 145 ] ; xx [ 147 ] = xx [ 390 ] * xx [ 101 ] - xx [ 396 ] * xx [ 100 ] ; xx
[ 474 ] = xx [ 144 ] ; xx [ 475 ] = xx [ 146 ] ; xx [ 476 ] = xx [ 147 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 474 , xx + 477 ) ; xx [ 151 ] =
state [ 25 ] + xx [ 124 ] ; xx [ 160 ] = xx [ 151 ] * xx [ 1 ] ; xx [ 162 ] =
cos ( xx [ 160 ] ) ; xx [ 166 ] = xx [ 16 ] * xx [ 162 ] ; xx [ 167 ] = sin (
xx [ 160 ] ) ; xx [ 160 ] = xx [ 5 ] * xx [ 167 ] ; xx [ 448 ] = xx [ 8 ] *
xx [ 167 ] ; xx [ 167 ] = xx [ 16 ] * xx [ 160 ] - xx [ 2 ] * xx [ 448 ] ; xx
[ 454 ] = xx [ 2 ] * xx [ 162 ] ; xx [ 162 ] = - xx [ 454 ] ; xx [ 461 ] = xx
[ 16 ] * xx [ 448 ] + xx [ 2 ] * xx [ 160 ] ; xx [ 160 ] = - xx [ 461 ] ; xx
[ 480 ] = - xx [ 166 ] ; xx [ 481 ] = xx [ 167 ] ; xx [ 482 ] = xx [ 162 ] ;
xx [ 483 ] = xx [ 160 ] ; xx [ 484 ] = xx [ 429 ] ; xx [ 485 ] = xx [ 432 ] ;
xx [ 486 ] = xx [ 421 ] ; xx [ 487 ] = xx [ 431 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 484 , xx + 125 , xx + 113 ) ; xx [ 117
] = xx [ 421 ] + xx [ 115 ] ; xx [ 118 ] = xx [ 429 ] + xx [ 113 ] ; xx [ 119
] = xx [ 432 ] + xx [ 114 ] ; xx [ 113 ] = xx [ 431 ] + xx [ 116 ] ; xx [ 114
] = sqrt ( xx [ 118 ] * xx [ 118 ] + xx [ 119 ] * xx [ 119 ] + xx [ 117 ] *
xx [ 117 ] + xx [ 113 ] * xx [ 113 ] ) ; if ( xx [ 19 ] > xx [ 114 ] ) xx [
114 ] = xx [ 19 ] ; xx [ 115 ] = xx [ 117 ] / xx [ 114 ] ; xx [ 116 ] = xx [
118 ] / xx [ 114 ] ; xx [ 117 ] = xx [ 2 ] * xx [ 115 ] + xx [ 16 ] * xx [
116 ] ; xx [ 118 ] = xx [ 113 ] / xx [ 114 ] ; xx [ 113 ] = xx [ 119 ] / xx [
114 ] ; xx [ 114 ] = xx [ 2 ] * xx [ 118 ] - xx [ 16 ] * xx [ 113 ] ; xx [
119 ] = - xx [ 114 ] ; xx [ 120 ] = xx [ 2 ] * xx [ 116 ] - xx [ 16 ] * xx [
115 ] ; xx [ 121 ] = - xx [ 120 ] ; xx [ 122 ] = xx [ 2 ] * xx [ 113 ] + xx [
16 ] * xx [ 118 ] ; xx [ 123 ] = xx [ 117 ] ; xx [ 124 ] = xx [ 119 ] ; xx [
125 ] = xx [ 121 ] ; xx [ 126 ] = xx [ 122 ] ; pm_math_Quaternion_compose_ra
( xx + 480 , xx + 123 , xx + 127 ) ; xx [ 123 ] = xx [ 119 ] ; xx [ 124 ] =
xx [ 121 ] ; xx [ 125 ] = xx [ 122 ] ; xx [ 119 ] = xx [ 114 ] * xx [ 8 ] -
xx [ 5 ] * xx [ 122 ] ; xx [ 121 ] = xx [ 120 ] * xx [ 5 ] ; xx [ 131 ] = - (
xx [ 120 ] * xx [ 8 ] ) ; xx [ 132 ] = xx [ 119 ] ; xx [ 133 ] = - xx [ 121 ]
; pm_math_Vector3_cross_ra ( xx + 123 , xx + 131 , xx + 134 ) ; xx [ 123 ] =
xx [ 112 ] * ( xx [ 135 ] - xx [ 119 ] * xx [ 117 ] ) ; xx [ 119 ] = ( xx [ 8
] + xx [ 47 ] * ( xx [ 136 ] + xx [ 121 ] * xx [ 117 ] ) ) * xx [ 46 ] ; xx [
121 ] = xx [ 129 ] * xx [ 123 ] + xx [ 130 ] * xx [ 119 ] ; xx [ 124 ] = xx [
128 ] * xx [ 123 ] ; xx [ 125 ] = xx [ 128 ] * xx [ 119 ] ; xx [ 131 ] = - xx
[ 121 ] ; xx [ 132 ] = xx [ 124 ] ; xx [ 133 ] = xx [ 125 ] ;
pm_math_Vector3_cross_ra ( xx + 128 , xx + 131 , xx + 134 ) ; xx [ 126 ] = xx
[ 46 ] * xx [ 122 ] ; xx [ 131 ] = xx [ 126 ] * xx [ 117 ] ; xx [ 132 ] = xx
[ 120 ] * xx [ 46 ] ; xx [ 133 ] = ( xx [ 131 ] + xx [ 114 ] * xx [ 132 ] ) *
xx [ 47 ] ; xx [ 137 ] = xx [ 120 ] * xx [ 132 ] ; xx [ 138 ] = xx [ 126 ] *
xx [ 122 ] ; xx [ 139 ] = xx [ 84 ] + xx [ 46 ] - ( xx [ 137 ] + xx [ 138 ] )
* xx [ 47 ] ; xx [ 421 ] = xx [ 132 ] * xx [ 117 ] ; xx [ 429 ] = xx [ 86 ] +
xx [ 47 ] * ( xx [ 421 ] - xx [ 114 ] * xx [ 126 ] ) ; xx [ 474 ] = - ( xx [
8 ] * xx [ 133 ] ) ; xx [ 475 ] = xx [ 139 ] * xx [ 8 ] + xx [ 429 ] * xx [ 5
] ; xx [ 476 ] = - ( xx [ 5 ] * xx [ 133 ] ) ; pm_math_Quaternion_xform_ra (
xx + 480 , xx + 474 , xx + 484 ) ; xx [ 431 ] = xx [ 167 ] * xx [ 76 ] ; xx [
432 ] = xx [ 76 ] * xx [ 461 ] ; xx [ 448 ] = xx [ 114 ] * xx [ 46 ] ; xx [
474 ] = xx [ 448 ] * xx [ 117 ] ; xx [ 117 ] = xx [ 114 ] * xx [ 448 ] ; xx [
487 ] = ( xx [ 421 ] + xx [ 448 ] * xx [ 122 ] ) * xx [ 47 ] ; xx [ 488 ] =
xx [ 47 ] * ( xx [ 132 ] * xx [ 122 ] - xx [ 474 ] ) ; xx [ 489 ] = ( xx [
117 ] + xx [ 137 ] ) * xx [ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra (
xx + 480 , xx + 487 , xx + 490 ) ; xx [ 114 ] = xx [ 46 ] * xx [ 129 ] ; xx [
122 ] = xx [ 127 ] * xx [ 114 ] ; xx [ 132 ] = xx [ 46 ] * xx [ 128 ] ; xx [
137 ] = xx [ 46 ] * xx [ 130 ] ; xx [ 421 ] = xx [ 127 ] * xx [ 137 ] ; xx [
487 ] = xx [ 47 ] * ( xx [ 120 ] * xx [ 448 ] - xx [ 131 ] ) ; xx [ 488 ] =
xx [ 46 ] - ( xx [ 138 ] + xx [ 117 ] ) * xx [ 47 ] ; xx [ 489 ] = - ( ( xx [
474 ] + xx [ 120 ] * xx [ 126 ] ) * xx [ 47 ] ) ; pm_math_Quaternion_xform_ra
( xx + 480 , xx + 487 , xx + 474 ) ; xx [ 117 ] = xx [ 127 ] * xx [ 132 ] ;
xx [ 120 ] = xx [ 130 ] * xx [ 137 ] ; xx [ 126 ] = xx [ 128 ] * xx [ 132 ] ;
xx [ 131 ] = xx [ 129 ] * xx [ 114 ] ; xx [ 493 ] = xx [ 81 ] + xx [ 141 ] ;
xx [ 494 ] = xx [ 172 ] + xx [ 178 ] ; xx [ 495 ] = xx [ 181 ] + xx [ 186 ] ;
xx [ 496 ] = xx [ 193 ] + xx [ 38 ] ; xx [ 497 ] = xx [ 175 ] - ( xx [ 99 ] *
xx [ 15 ] + xx [ 102 ] * xx [ 26 ] ) * xx [ 47 ] ; xx [ 498 ] = ( xx [ 99 ] *
xx [ 65 ] + xx [ 102 ] * xx [ 77 ] ) * xx [ 47 ] + xx [ 189 ] ; xx [ 499 ] =
xx [ 47 ] * ( xx [ 196 ] + xx [ 99 ] * xx [ 64 ] ) + xx [ 169 ] - xx [ 55 ] ;
xx [ 500 ] = xx [ 30 ] ; xx [ 501 ] = xx [ 30 ] ; xx [ 502 ] = xx [ 30 ] ; xx
[ 503 ] = xx [ 30 ] ; xx [ 504 ] = xx [ 30 ] ; xx [ 505 ] = xx [ 30 ] ; xx [
506 ] = xx [ 30 ] ; xx [ 507 ] = xx [ 30 ] ; xx [ 508 ] = - ( xx [ 47 ] * (
xx [ 213 ] - xx [ 111 ] * xx [ 217 ] ) + xx [ 224 ] + xx [ 47 ] * ( xx [ 210
] * xx [ 74 ] + xx [ 216 ] * xx [ 51 ] ) ) ; xx [ 509 ] = xx [ 30 ] ; xx [
510 ] = - ( xx [ 233 ] - ( xx [ 106 ] + xx [ 220 ] * xx [ 164 ] ) * xx [ 47 ]
) ; xx [ 511 ] = - ( xx [ 47 ] * ( xx [ 219 ] * xx [ 164 ] - xx [ 206 ] ) +
xx [ 221 ] ) ; xx [ 512 ] = xx [ 30 ] ; xx [ 513 ] = xx [ 30 ] ; xx [ 514 ] =
xx [ 30 ] ; xx [ 515 ] = xx [ 30 ] ; xx [ 516 ] = xx [ 30 ] ; xx [ 517 ] = xx
[ 30 ] ; xx [ 518 ] = xx [ 30 ] ; xx [ 519 ] = xx [ 30 ] ; xx [ 520 ] = xx [
82 ] + xx [ 66 ] + xx [ 76 ] ; xx [ 521 ] = xx [ 173 ] + xx [ 179 ] ; xx [
522 ] = xx [ 182 ] + xx [ 187 ] ; xx [ 523 ] = xx [ 194 ] + xx [ 39 ] ; xx [
524 ] = xx [ 47 ] * ( xx [ 99 ] * xx [ 26 ] - xx [ 102 ] * xx [ 15 ] ) + xx [
176 ] ; xx [ 525 ] = xx [ 47 ] * ( xx [ 102 ] * xx [ 65 ] - xx [ 99 ] * xx [
77 ] ) + xx [ 190 ] ; xx [ 526 ] = ( xx [ 197 ] - xx [ 55 ] * xx [ 78 ] ) *
xx [ 47 ] + xx [ 170 ] - xx [ 56 ] ; xx [ 527 ] = xx [ 30 ] ; xx [ 528 ] = xx
[ 30 ] ; xx [ 529 ] = xx [ 30 ] ; xx [ 530 ] = xx [ 30 ] ; xx [ 531 ] = xx [
30 ] ; xx [ 532 ] = xx [ 30 ] ; xx [ 533 ] = xx [ 30 ] ; xx [ 534 ] = xx [ 30
] ; xx [ 535 ] = - ( xx [ 108 ] + ( xx [ 217 ] * xx [ 143 ] + xx [ 214 ] ) *
xx [ 47 ] + xx [ 225 ] - ( xx [ 216 ] * xx [ 75 ] + xx [ 57 ] * xx [ 210 ] )
* xx [ 47 ] + xx [ 76 ] ) ; xx [ 536 ] = xx [ 30 ] ; xx [ 537 ] = - ( xx [ 47
] * ( xx [ 152 ] - xx [ 220 ] * xx [ 68 ] ) + xx [ 234 ] ) ; xx [ 538 ] = - (
xx [ 222 ] - ( xx [ 163 ] + xx [ 199 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [ 539
] = xx [ 30 ] ; xx [ 540 ] = xx [ 30 ] ; xx [ 541 ] = xx [ 30 ] ; xx [ 542 ]
= xx [ 30 ] ; xx [ 543 ] = xx [ 30 ] ; xx [ 544 ] = xx [ 30 ] ; xx [ 545 ] =
xx [ 30 ] ; xx [ 546 ] = xx [ 30 ] ; xx [ 547 ] = xx [ 83 ] + xx [ 153 ] ; xx
[ 548 ] = xx [ 174 ] + xx [ 180 ] ; xx [ 549 ] = xx [ 183 ] + xx [ 188 ] ; xx
[ 550 ] = xx [ 195 ] + xx [ 40 ] ; xx [ 551 ] = xx [ 177 ] + ( xx [ 100 ] *
xx [ 26 ] + xx [ 101 ] * xx [ 15 ] ) * xx [ 47 ] - xx [ 24 ] ; xx [ 552 ] =
xx [ 191 ] - ( xx [ 100 ] * xx [ 77 ] + xx [ 101 ] * xx [ 65 ] ) * xx [ 47 ]
+ xx [ 67 ] ; xx [ 553 ] = ( xx [ 99 ] * xx [ 104 ] + xx [ 198 ] ) * xx [ 47
] + xx [ 171 ] ; xx [ 554 ] = xx [ 30 ] ; xx [ 555 ] = xx [ 30 ] ; xx [ 556 ]
= xx [ 30 ] ; xx [ 557 ] = xx [ 30 ] ; xx [ 558 ] = xx [ 30 ] ; xx [ 559 ] =
xx [ 30 ] ; xx [ 560 ] = xx [ 30 ] ; xx [ 561 ] = xx [ 30 ] ; xx [ 562 ] = -
( ( xx [ 217 ] * xx [ 150 ] + xx [ 215 ] ) * xx [ 47 ] - xx [ 142 ] + xx [
226 ] + ( xx [ 210 ] * xx [ 51 ] - xx [ 216 ] * xx [ 74 ] ) * xx [ 47 ] ) ;
xx [ 563 ] = xx [ 30 ] ; xx [ 564 ] = - ( xx [ 235 ] + ( xx [ 199 ] + xx [
107 ] ) * xx [ 47 ] - xx [ 46 ] ) ; xx [ 565 ] = - ( ( xx [ 152 ] + xx [ 219
] * xx [ 185 ] ) * xx [ 47 ] + xx [ 223 ] ) ; xx [ 566 ] = xx [ 30 ] ; xx [
567 ] = xx [ 30 ] ; xx [ 568 ] = xx [ 30 ] ; xx [ 569 ] = xx [ 30 ] ; xx [
570 ] = xx [ 30 ] ; xx [ 571 ] = xx [ 30 ] ; xx [ 572 ] = xx [ 30 ] ; xx [
573 ] = xx [ 30 ] ; xx [ 574 ] = xx [ 239 ] + xx [ 141 ] ; xx [ 575 ] = xx [
245 ] + xx [ 178 ] ; xx [ 576 ] = xx [ 248 ] + xx [ 186 ] ; xx [ 577 ] = xx [
251 ] + xx [ 38 ] ; xx [ 578 ] = xx [ 175 ] - ( xx [ 99 ] * xx [ 109 ] + xx [
102 ] * xx [ 154 ] ) * xx [ 47 ] ; xx [ 579 ] = xx [ 189 ] - ( xx [ 99 ] * xx
[ 155 ] + xx [ 102 ] * xx [ 227 ] ) * xx [ 47 ] ; xx [ 580 ] = xx [ 47 ] * (
xx [ 260 ] + xx [ 99 ] * xx [ 228 ] ) + xx [ 169 ] + xx [ 80 ] ; xx [ 581 ] =
xx [ 30 ] ; xx [ 582 ] = xx [ 30 ] ; xx [ 583 ] = xx [ 30 ] ; xx [ 584 ] = xx
[ 30 ] ; xx [ 585 ] = xx [ 30 ] ; xx [ 586 ] = xx [ 30 ] ; xx [ 587 ] = xx [
30 ] ; xx [ 588 ] = xx [ 30 ] ; xx [ 589 ] = xx [ 30 ] ; xx [ 590 ] = xx [ 30
] ; xx [ 591 ] = xx [ 30 ] ; xx [ 592 ] = xx [ 30 ] ; xx [ 593 ] = - ( xx [
47 ] * ( xx [ 291 ] - xx [ 270 ] * xx [ 281 ] ) + xx [ 300 ] - xx [ 47 ] * (
xx [ 297 ] * xx [ 257 ] + xx [ 298 ] * xx [ 254 ] ) ) ; xx [ 594 ] = xx [ 30
] ; xx [ 595 ] = - ( xx [ 307 ] - ( xx [ 272 ] + xx [ 284 ] * xx [ 278 ] ) *
xx [ 47 ] ) ; xx [ 596 ] = - ( xx [ 47 ] * ( xx [ 283 ] * xx [ 278 ] - xx [
295 ] ) + xx [ 311 ] ) ; xx [ 597 ] = xx [ 30 ] ; xx [ 598 ] = xx [ 30 ] ; xx
[ 599 ] = xx [ 30 ] ; xx [ 600 ] = xx [ 30 ] ; xx [ 601 ] = xx [ 240 ] + xx [
66 ] + xx [ 76 ] ; xx [ 602 ] = xx [ 246 ] + xx [ 179 ] ; xx [ 603 ] = xx [
249 ] + xx [ 187 ] ; xx [ 604 ] = xx [ 252 ] + xx [ 39 ] ; xx [ 605 ] = xx [
47 ] * ( xx [ 99 ] * xx [ 154 ] - xx [ 102 ] * xx [ 109 ] ) + xx [ 176 ] ; xx
[ 606 ] = xx [ 47 ] * ( xx [ 99 ] * xx [ 227 ] - xx [ 102 ] * xx [ 155 ] ) +
xx [ 190 ] ; xx [ 607 ] = ( xx [ 80 ] * xx [ 78 ] + xx [ 261 ] ) * xx [ 47 ]
+ xx [ 170 ] - xx [ 91 ] ; xx [ 608 ] = xx [ 30 ] ; xx [ 609 ] = xx [ 30 ] ;
xx [ 610 ] = xx [ 30 ] ; xx [ 611 ] = xx [ 30 ] ; xx [ 612 ] = xx [ 30 ] ; xx
[ 613 ] = xx [ 30 ] ; xx [ 614 ] = xx [ 30 ] ; xx [ 615 ] = xx [ 30 ] ; xx [
616 ] = xx [ 30 ] ; xx [ 617 ] = xx [ 30 ] ; xx [ 618 ] = xx [ 30 ] ; xx [
619 ] = xx [ 30 ] ; xx [ 620 ] = - ( xx [ 211 ] + ( xx [ 281 ] * xx [ 274 ] +
xx [ 292 ] ) * xx [ 47 ] + xx [ 301 ] - ( xx [ 298 ] * xx [ 258 ] + xx [ 255
] * xx [ 297 ] ) * xx [ 47 ] + xx [ 76 ] ) ; xx [ 621 ] = xx [ 30 ] ; xx [
622 ] = - ( xx [ 47 ] * ( xx [ 208 ] - xx [ 284 ] * xx [ 209 ] ) + xx [ 308 ]
) ; xx [ 623 ] = - ( xx [ 312 ] - ( xx [ 269 ] + xx [ 276 ] ) * xx [ 47 ] +
xx [ 46 ] ) ; xx [ 624 ] = xx [ 30 ] ; xx [ 625 ] = xx [ 30 ] ; xx [ 626 ] =
xx [ 30 ] ; xx [ 627 ] = xx [ 30 ] ; xx [ 628 ] = xx [ 241 ] + xx [ 153 ] ;
xx [ 629 ] = xx [ 247 ] + xx [ 180 ] ; xx [ 630 ] = xx [ 250 ] + xx [ 188 ] ;
xx [ 631 ] = xx [ 253 ] + xx [ 40 ] ; xx [ 632 ] = xx [ 177 ] + ( xx [ 100 ]
* xx [ 154 ] + xx [ 101 ] * xx [ 109 ] ) * xx [ 47 ] - xx [ 165 ] ; xx [ 633
] = xx [ 191 ] + ( xx [ 100 ] * xx [ 227 ] + xx [ 101 ] * xx [ 155 ] ) * xx [
47 ] - xx [ 168 ] ; xx [ 634 ] = ( xx [ 262 ] - xx [ 99 ] * xx [ 230 ] ) * xx
[ 47 ] + xx [ 171 ] ; xx [ 635 ] = xx [ 30 ] ; xx [ 636 ] = xx [ 30 ] ; xx [
637 ] = xx [ 30 ] ; xx [ 638 ] = xx [ 30 ] ; xx [ 639 ] = xx [ 30 ] ; xx [
640 ] = xx [ 30 ] ; xx [ 641 ] = xx [ 30 ] ; xx [ 642 ] = xx [ 30 ] ; xx [
643 ] = xx [ 30 ] ; xx [ 644 ] = xx [ 30 ] ; xx [ 645 ] = xx [ 30 ] ; xx [
646 ] = xx [ 30 ] ; xx [ 647 ] = - ( ( xx [ 281 ] * xx [ 275 ] + xx [ 293 ] )
* xx [ 47 ] - xx [ 273 ] + xx [ 302 ] + ( xx [ 298 ] * xx [ 257 ] - xx [ 297
] * xx [ 254 ] ) * xx [ 47 ] ) ; xx [ 648 ] = xx [ 30 ] ; xx [ 649 ] = - ( xx
[ 309 ] + ( xx [ 276 ] + xx [ 277 ] ) * xx [ 47 ] - xx [ 46 ] ) ; xx [ 650 ]
= - ( ( xx [ 208 ] + xx [ 283 ] * xx [ 286 ] ) * xx [ 47 ] + xx [ 313 ] ) ;
xx [ 651 ] = xx [ 30 ] ; xx [ 652 ] = xx [ 30 ] ; xx [ 653 ] = xx [ 30 ] ; xx
[ 654 ] = xx [ 30 ] ; xx [ 655 ] = xx [ 317 ] + xx [ 141 ] ; xx [ 656 ] = xx
[ 323 ] + xx [ 178 ] ; xx [ 657 ] = xx [ 326 ] + xx [ 186 ] ; xx [ 658 ] = xx
[ 329 ] + xx [ 38 ] ; xx [ 659 ] = xx [ 175 ] - ( xx [ 99 ] * xx [ 288 ] + xx
[ 102 ] * xx [ 299 ] ) * xx [ 47 ] ; xx [ 660 ] = xx [ 189 ] - ( xx [ 99 ] *
xx [ 303 ] + xx [ 102 ] * xx [ 304 ] ) * xx [ 47 ] ; xx [ 661 ] = xx [ 47 ] *
( xx [ 338 ] - xx [ 99 ] * xx [ 305 ] ) + xx [ 169 ] + xx [ 232 ] ; xx [ 662
] = xx [ 30 ] ; xx [ 663 ] = xx [ 30 ] ; xx [ 664 ] = xx [ 30 ] ; xx [ 665 ]
= xx [ 30 ] ; xx [ 666 ] = xx [ 30 ] ; xx [ 667 ] = xx [ 30 ] ; xx [ 668 ] =
xx [ 30 ] ; xx [ 669 ] = xx [ 30 ] ; xx [ 670 ] = xx [ 30 ] ; xx [ 671 ] = xx
[ 30 ] ; xx [ 672 ] = xx [ 30 ] ; xx [ 673 ] = xx [ 30 ] ; xx [ 674 ] = xx [
30 ] ; xx [ 675 ] = xx [ 30 ] ; xx [ 676 ] = xx [ 30 ] ; xx [ 677 ] = xx [ 30
] ; xx [ 678 ] = - ( xx [ 47 ] * ( xx [ 364 ] - xx [ 352 ] * xx [ 360 ] ) +
xx [ 379 ] - xx [ 47 ] * ( xx [ 376 ] * xx [ 341 ] + xx [ 377 ] * xx [ 334 ]
) ) ; xx [ 679 ] = xx [ 30 ] ; xx [ 680 ] = - ( xx [ 386 ] - ( xx [ 348 ] +
xx [ 363 ] * xx [ 357 ] ) * xx [ 47 ] ) ; xx [ 681 ] = - ( xx [ 47 ] * ( xx [
362 ] * xx [ 357 ] - xx [ 374 ] ) + xx [ 391 ] ) ; xx [ 682 ] = xx [ 318 ] +
xx [ 66 ] + xx [ 76 ] ; xx [ 683 ] = xx [ 324 ] + xx [ 179 ] ; xx [ 684 ] =
xx [ 327 ] + xx [ 187 ] ; xx [ 685 ] = xx [ 330 ] + xx [ 39 ] ; xx [ 686 ] =
xx [ 47 ] * ( xx [ 99 ] * xx [ 299 ] - xx [ 102 ] * xx [ 288 ] ) + xx [ 176 ]
; xx [ 687 ] = xx [ 47 ] * ( xx [ 99 ] * xx [ 304 ] - xx [ 102 ] * xx [ 303 ]
) + xx [ 190 ] ; xx [ 688 ] = ( xx [ 232 ] * xx [ 78 ] + xx [ 339 ] ) * xx [
47 ] + xx [ 170 ] + xx [ 238 ] ; xx [ 689 ] = xx [ 30 ] ; xx [ 690 ] = xx [
30 ] ; xx [ 691 ] = xx [ 30 ] ; xx [ 692 ] = xx [ 30 ] ; xx [ 693 ] = xx [ 30
] ; xx [ 694 ] = xx [ 30 ] ; xx [ 695 ] = xx [ 30 ] ; xx [ 696 ] = xx [ 30 ]
; xx [ 697 ] = xx [ 30 ] ; xx [ 698 ] = xx [ 30 ] ; xx [ 699 ] = xx [ 30 ] ;
xx [ 700 ] = xx [ 30 ] ; xx [ 701 ] = xx [ 30 ] ; xx [ 702 ] = xx [ 30 ] ; xx
[ 703 ] = xx [ 30 ] ; xx [ 704 ] = xx [ 30 ] ; xx [ 705 ] = - ( xx [ 349 ] +
( xx [ 360 ] * xx [ 353 ] + xx [ 365 ] ) * xx [ 47 ] + xx [ 380 ] - ( xx [
377 ] * xx [ 342 ] + xx [ 335 ] * xx [ 376 ] ) * xx [ 47 ] + xx [ 76 ] ) ; xx
[ 706 ] = xx [ 30 ] ; xx [ 707 ] = - ( xx [ 47 ] * ( xx [ 289 ] - xx [ 363 ]
* xx [ 287 ] ) + xx [ 387 ] ) ; xx [ 708 ] = - ( xx [ 392 ] - ( xx [ 290 ] +
xx [ 355 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [ 709 ] = xx [ 319 ] + xx [ 153 ]
; xx [ 710 ] = xx [ 325 ] + xx [ 180 ] ; xx [ 711 ] = xx [ 328 ] + xx [ 188 ]
; xx [ 712 ] = xx [ 331 ] + xx [ 40 ] ; xx [ 713 ] = xx [ 177 ] + ( xx [ 100
] * xx [ 299 ] + xx [ 101 ] * xx [ 288 ] ) * xx [ 47 ] - xx [ 244 ] ; xx [
714 ] = xx [ 191 ] + ( xx [ 100 ] * xx [ 304 ] + xx [ 101 ] * xx [ 303 ] ) *
xx [ 47 ] - xx [ 259 ] ; xx [ 715 ] = ( xx [ 99 ] * xx [ 314 ] + xx [ 340 ] )
* xx [ 47 ] + xx [ 171 ] ; xx [ 716 ] = xx [ 30 ] ; xx [ 717 ] = xx [ 30 ] ;
xx [ 718 ] = xx [ 30 ] ; xx [ 719 ] = xx [ 30 ] ; xx [ 720 ] = xx [ 30 ] ; xx
[ 721 ] = xx [ 30 ] ; xx [ 722 ] = xx [ 30 ] ; xx [ 723 ] = xx [ 30 ] ; xx [
724 ] = xx [ 30 ] ; xx [ 725 ] = xx [ 30 ] ; xx [ 726 ] = xx [ 30 ] ; xx [
727 ] = xx [ 30 ] ; xx [ 728 ] = xx [ 30 ] ; xx [ 729 ] = xx [ 30 ] ; xx [
730 ] = xx [ 30 ] ; xx [ 731 ] = xx [ 30 ] ; xx [ 732 ] = - ( ( xx [ 360 ] *
xx [ 354 ] + xx [ 366 ] ) * xx [ 47 ] - xx [ 351 ] + xx [ 381 ] + ( xx [ 376
] * xx [ 334 ] - xx [ 377 ] * xx [ 341 ] ) * xx [ 47 ] ) ; xx [ 733 ] = xx [
30 ] ; xx [ 734 ] = - ( xx [ 388 ] + ( xx [ 355 ] + xx [ 356 ] ) * xx [ 47 ]
- xx [ 46 ] ) ; xx [ 735 ] = - ( ( xx [ 289 ] + xx [ 362 ] * xx [ 371 ] ) *
xx [ 47 ] + xx [ 393 ] ) ; xx [ 736 ] = xx [ 397 ] + xx [ 141 ] ; xx [ 737 ]
= xx [ 401 ] + xx [ 178 ] ; xx [ 738 ] = xx [ 404 ] + xx [ 186 ] ; xx [ 739 ]
= xx [ 407 ] + xx [ 38 ] ; xx [ 740 ] = ( xx [ 99 ] * xx [ 372 ] + xx [ 102 ]
* xx [ 378 ] ) * xx [ 47 ] + xx [ 175 ] ; xx [ 741 ] = xx [ 189 ] - ( xx [ 99
] * xx [ 382 ] + xx [ 102 ] * xx [ 383 ] ) * xx [ 47 ] ; xx [ 742 ] = xx [ 47
] * ( xx [ 413 ] - xx [ 99 ] * xx [ 384 ] ) + xx [ 169 ] - xx [ 310 ] ; xx [
743 ] = - ( xx [ 47 ] * ( xx [ 444 ] - xx [ 430 ] * xx [ 437 ] ) + xx [ 455 ]
+ xx [ 47 ] * ( xx [ 452 ] * xx [ 419 ] + xx [ 453 ] * xx [ 412 ] ) ) ; xx [
744 ] = xx [ 30 ] ; xx [ 745 ] = - ( xx [ 462 ] - ( xx [ 427 ] + xx [ 440 ] *
xx [ 442 ] ) * xx [ 47 ] ) ; xx [ 746 ] = - ( xx [ 47 ] * ( xx [ 439 ] * xx [
442 ] - xx [ 450 ] ) + xx [ 465 ] ) ; xx [ 747 ] = xx [ 30 ] ; xx [ 748 ] =
xx [ 30 ] ; xx [ 749 ] = xx [ 30 ] ; xx [ 750 ] = xx [ 30 ] ; xx [ 751 ] = xx
[ 30 ] ; xx [ 752 ] = xx [ 30 ] ; xx [ 753 ] = xx [ 30 ] ; xx [ 754 ] = xx [
30 ] ; xx [ 755 ] = xx [ 30 ] ; xx [ 756 ] = xx [ 30 ] ; xx [ 757 ] = xx [ 30
] ; xx [ 758 ] = xx [ 30 ] ; xx [ 759 ] = xx [ 30 ] ; xx [ 760 ] = xx [ 30 ]
; xx [ 761 ] = xx [ 30 ] ; xx [ 762 ] = xx [ 30 ] ; xx [ 763 ] = xx [ 398 ] +
xx [ 66 ] + xx [ 76 ] ; xx [ 764 ] = xx [ 402 ] + xx [ 179 ] ; xx [ 765 ] =
xx [ 405 ] + xx [ 187 ] ; xx [ 766 ] = xx [ 408 ] + xx [ 39 ] ; xx [ 767 ] =
xx [ 47 ] * ( xx [ 102 ] * xx [ 372 ] - xx [ 99 ] * xx [ 378 ] ) + xx [ 176 ]
; xx [ 768 ] = xx [ 47 ] * ( xx [ 99 ] * xx [ 383 ] - xx [ 102 ] * xx [ 382 ]
) + xx [ 190 ] ; xx [ 769 ] = ( xx [ 414 ] - xx [ 310 ] * xx [ 78 ] ) * xx [
47 ] + xx [ 170 ] + xx [ 316 ] ; xx [ 770 ] = - ( xx [ 428 ] + ( xx [ 437 ] *
xx [ 434 ] + xx [ 445 ] ) * xx [ 47 ] + xx [ 456 ] - ( xx [ 453 ] * xx [ 420
] + xx [ 416 ] * xx [ 452 ] ) * xx [ 47 ] + xx [ 76 ] ) ; xx [ 771 ] = xx [
30 ] ; xx [ 772 ] = - ( xx [ 47 ] * ( xx [ 369 ] - xx [ 440 ] * xx [ 367 ] )
+ xx [ 463 ] ) ; xx [ 773 ] = - ( xx [ 466 ] - ( xx [ 370 ] + xx [ 436 ] ) *
xx [ 47 ] + xx [ 46 ] ) ; xx [ 774 ] = xx [ 30 ] ; xx [ 775 ] = xx [ 30 ] ;
xx [ 776 ] = xx [ 30 ] ; xx [ 777 ] = xx [ 30 ] ; xx [ 778 ] = xx [ 30 ] ; xx
[ 779 ] = xx [ 30 ] ; xx [ 780 ] = xx [ 30 ] ; xx [ 781 ] = xx [ 30 ] ; xx [
782 ] = xx [ 30 ] ; xx [ 783 ] = xx [ 30 ] ; xx [ 784 ] = xx [ 30 ] ; xx [
785 ] = xx [ 30 ] ; xx [ 786 ] = xx [ 30 ] ; xx [ 787 ] = xx [ 30 ] ; xx [
788 ] = xx [ 30 ] ; xx [ 789 ] = xx [ 30 ] ; xx [ 790 ] = xx [ 399 ] + xx [
153 ] ; xx [ 791 ] = xx [ 403 ] + xx [ 180 ] ; xx [ 792 ] = xx [ 406 ] + xx [
188 ] ; xx [ 793 ] = xx [ 409 ] + xx [ 40 ] ; xx [ 794 ] = xx [ 177 ] - ( xx
[ 100 ] * xx [ 378 ] + xx [ 101 ] * xx [ 372 ] ) * xx [ 47 ] + xx [ 322 ] ;
xx [ 795 ] = xx [ 191 ] + ( xx [ 100 ] * xx [ 383 ] + xx [ 101 ] * xx [ 382 ]
) * xx [ 47 ] - xx [ 337 ] ; xx [ 796 ] = ( xx [ 99 ] * xx [ 394 ] + xx [ 415
] ) * xx [ 47 ] + xx [ 171 ] ; xx [ 797 ] = - ( ( xx [ 437 ] * xx [ 435 ] +
xx [ 446 ] ) * xx [ 47 ] - xx [ 433 ] + xx [ 457 ] + ( xx [ 452 ] * xx [ 412
] - xx [ 453 ] * xx [ 419 ] ) * xx [ 47 ] ) ; xx [ 798 ] = xx [ 30 ] ; xx [
799 ] = - ( xx [ 464 ] + ( xx [ 436 ] + xx [ 441 ] ) * xx [ 47 ] - xx [ 46 ]
) ; xx [ 800 ] = - ( ( xx [ 369 ] + xx [ 439 ] * xx [ 447 ] ) * xx [ 47 ] +
xx [ 467 ] ) ; xx [ 801 ] = xx [ 30 ] ; xx [ 802 ] = xx [ 30 ] ; xx [ 803 ] =
xx [ 30 ] ; xx [ 804 ] = xx [ 30 ] ; xx [ 805 ] = xx [ 30 ] ; xx [ 806 ] = xx
[ 30 ] ; xx [ 807 ] = xx [ 30 ] ; xx [ 808 ] = xx [ 30 ] ; xx [ 809 ] = xx [
30 ] ; xx [ 810 ] = xx [ 30 ] ; xx [ 811 ] = xx [ 30 ] ; xx [ 812 ] = xx [ 30
] ; xx [ 813 ] = xx [ 30 ] ; xx [ 814 ] = xx [ 30 ] ; xx [ 815 ] = xx [ 30 ]
; xx [ 816 ] = xx [ 30 ] ; xx [ 817 ] = xx [ 69 ] + xx [ 141 ] ; xx [ 818 ] =
xx [ 458 ] + xx [ 178 ] ; xx [ 819 ] = xx [ 468 ] + xx [ 186 ] ; xx [ 820 ] =
xx [ 471 ] + xx [ 38 ] ; xx [ 821 ] = ( xx [ 99 ] * xx [ 17 ] + xx [ 102 ] *
xx [ 88 ] ) * xx [ 47 ] + xx [ 175 ] ; xx [ 822 ] = ( xx [ 99 ] * xx [ 103 ]
+ xx [ 102 ] * xx [ 105 ] ) * xx [ 47 ] + xx [ 189 ] ; xx [ 823 ] = xx [ 47 ]
* ( xx [ 477 ] + xx [ 99 ] * xx [ 144 ] ) + xx [ 169 ] - xx [ 390 ] ; xx [
824 ] = xx [ 30 ] ; xx [ 825 ] = xx [ 30 ] ; xx [ 826 ] = xx [ 30 ] ; xx [
827 ] = xx [ 30 ] ; xx [ 828 ] = - ( xx [ 47 ] * ( xx [ 134 ] - xx [ 121 ] *
xx [ 127 ] ) + xx [ 484 ] - xx [ 47 ] * ( xx [ 431 ] * xx [ 454 ] + xx [ 432
] * xx [ 166 ] ) ) ; xx [ 829 ] = xx [ 30 ] ; xx [ 830 ] = - ( xx [ 490 ] - (
xx [ 122 ] + xx [ 130 ] * xx [ 132 ] ) * xx [ 47 ] ) ; xx [ 831 ] = - ( xx [
47 ] * ( xx [ 129 ] * xx [ 132 ] - xx [ 421 ] ) + xx [ 474 ] ) ; xx [ 832 ] =
xx [ 30 ] ; xx [ 833 ] = xx [ 30 ] ; xx [ 834 ] = xx [ 30 ] ; xx [ 835 ] = xx
[ 30 ] ; xx [ 836 ] = xx [ 30 ] ; xx [ 837 ] = xx [ 30 ] ; xx [ 838 ] = xx [
30 ] ; xx [ 839 ] = xx [ 30 ] ; xx [ 840 ] = xx [ 30 ] ; xx [ 841 ] = xx [ 30
] ; xx [ 842 ] = xx [ 30 ] ; xx [ 843 ] = xx [ 30 ] ; xx [ 844 ] = xx [ 70 ]
+ xx [ 66 ] + xx [ 76 ] ; xx [ 845 ] = xx [ 459 ] + xx [ 179 ] ; xx [ 846 ] =
xx [ 469 ] + xx [ 187 ] ; xx [ 847 ] = xx [ 472 ] + xx [ 39 ] ; xx [ 848 ] =
xx [ 47 ] * ( xx [ 102 ] * xx [ 17 ] - xx [ 99 ] * xx [ 88 ] ) + xx [ 176 ] ;
xx [ 849 ] = xx [ 47 ] * ( xx [ 102 ] * xx [ 103 ] - xx [ 99 ] * xx [ 105 ] )
+ xx [ 190 ] ; xx [ 850 ] = ( xx [ 478 ] - xx [ 390 ] * xx [ 78 ] ) * xx [ 47
] + xx [ 170 ] - xx [ 396 ] ; xx [ 851 ] = xx [ 30 ] ; xx [ 852 ] = xx [ 30 ]
; xx [ 853 ] = xx [ 30 ] ; xx [ 854 ] = xx [ 30 ] ; xx [ 855 ] = - ( xx [ 119
] + ( xx [ 127 ] * xx [ 124 ] + xx [ 135 ] ) * xx [ 47 ] + xx [ 485 ] - ( xx
[ 432 ] * xx [ 461 ] + xx [ 167 ] * xx [ 431 ] ) * xx [ 47 ] + xx [ 76 ] ) ;
xx [ 856 ] = xx [ 30 ] ; xx [ 857 ] = - ( xx [ 47 ] * ( xx [ 117 ] - xx [ 130
] * xx [ 114 ] ) + xx [ 491 ] ) ; xx [ 858 ] = - ( xx [ 475 ] - ( xx [ 120 ]
+ xx [ 126 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [ 859 ] = xx [ 30 ] ; xx [ 860
] = xx [ 30 ] ; xx [ 861 ] = xx [ 30 ] ; xx [ 862 ] = xx [ 30 ] ; xx [ 863 ]
= xx [ 30 ] ; xx [ 864 ] = xx [ 30 ] ; xx [ 865 ] = xx [ 30 ] ; xx [ 866 ] =
xx [ 30 ] ; xx [ 867 ] = xx [ 30 ] ; xx [ 868 ] = xx [ 30 ] ; xx [ 869 ] = xx
[ 30 ] ; xx [ 870 ] = xx [ 30 ] ; xx [ 871 ] = xx [ 71 ] + xx [ 153 ] ; xx [
872 ] = xx [ 460 ] + xx [ 180 ] ; xx [ 873 ] = xx [ 470 ] + xx [ 188 ] ; xx [
874 ] = xx [ 473 ] + xx [ 40 ] ; xx [ 875 ] = xx [ 177 ] - ( xx [ 100 ] * xx
[ 88 ] + xx [ 101 ] * xx [ 17 ] ) * xx [ 47 ] + xx [ 9 ] ; xx [ 876 ] = xx [
191 ] - ( xx [ 100 ] * xx [ 105 ] + xx [ 101 ] * xx [ 103 ] ) * xx [ 47 ] +
xx [ 50 ] ; xx [ 877 ] = ( xx [ 99 ] * xx [ 147 ] + xx [ 479 ] ) * xx [ 47 ]
+ xx [ 171 ] ; xx [ 878 ] = xx [ 30 ] ; xx [ 879 ] = xx [ 30 ] ; xx [ 880 ] =
xx [ 30 ] ; xx [ 881 ] = xx [ 30 ] ; xx [ 882 ] = - ( ( xx [ 127 ] * xx [ 125
] + xx [ 136 ] ) * xx [ 47 ] - xx [ 123 ] + xx [ 486 ] + ( xx [ 432 ] * xx [
454 ] - xx [ 431 ] * xx [ 166 ] ) * xx [ 47 ] ) ; xx [ 883 ] = xx [ 30 ] ; xx
[ 884 ] = - ( xx [ 492 ] + ( xx [ 126 ] + xx [ 131 ] ) * xx [ 47 ] - xx [ 46
] ) ; xx [ 885 ] = - ( ( xx [ 117 ] + xx [ 129 ] * xx [ 137 ] ) * xx [ 47 ] +
xx [ 476 ] ) ; xx [ 886 ] = xx [ 30 ] ; xx [ 887 ] = xx [ 30 ] ; xx [ 888 ] =
xx [ 30 ] ; xx [ 889 ] = xx [ 30 ] ; xx [ 890 ] = xx [ 30 ] ; xx [ 891 ] = xx
[ 30 ] ; xx [ 892 ] = xx [ 30 ] ; xx [ 893 ] = xx [ 30 ] ; xx [ 894 ] = xx [
30 ] ; xx [ 895 ] = xx [ 30 ] ; xx [ 896 ] = xx [ 30 ] ; xx [ 897 ] = xx [ 30
] ; xx [ 15 ] = xx [ 55 ] * xx [ 100 ] + xx [ 56 ] * xx [ 101 ] ; xx [ 38 ] =
xx [ 90 ] ; xx [ 39 ] = - xx [ 64 ] ; xx [ 40 ] = xx [ 15 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 38 , xx + 64 ) ;
pm_math_Quaternion_xform_ra ( xx + 156 , xx + 95 , xx + 38 ) ; xx [ 69 ] = xx
[ 84 ] + xx [ 148 ] ; xx [ 70 ] = xx [ 140 ] ; xx [ 71 ] = xx [ 86 ] + xx [
149 ] ; pm_math_Quaternion_xform_ra ( xx + 60 , xx + 69 , xx + 81 ) ; xx [ 60
] = xx [ 25 ] ; xx [ 61 ] = xx [ 27 ] ; xx [ 62 ] = xx [ 21 ] ; xx [ 17 ] =
xx [ 14 ] * xx [ 27 ] ; xx [ 26 ] = xx [ 23 ] * xx [ 21 ] + xx [ 25 ] * xx [
14 ] ; xx [ 21 ] = xx [ 23 ] * xx [ 27 ] ; xx [ 69 ] = xx [ 17 ] ; xx [ 70 ]
= - xx [ 26 ] ; xx [ 71 ] = xx [ 21 ] ; pm_math_Vector3_cross_ra ( xx + 60 ,
xx + 69 , xx + 95 ) ; xx [ 25 ] = xx [ 38 ] + xx [ 81 ] - ( xx [ 95 ] - xx [
17 ] * xx [ 22 ] ) * xx [ 47 ] + xx [ 6 ] ; xx [ 60 ] = xx [ 205 ] ; xx [ 61
] = xx [ 184 ] ; xx [ 62 ] = xx [ 207 ] ; pm_math_Quaternion_xform_ra ( xx +
201 , xx + 60 , xx + 69 ) ; xx [ 60 ] = xx [ 73 ] ; xx [ 61 ] = xx [ 35 ] ;
xx [ 62 ] = xx [ 75 ] ; xx [ 17 ] = xx [ 14 ] * xx [ 74 ] ; xx [ 27 ] = xx [
23 ] * xx [ 75 ] + xx [ 57 ] * xx [ 14 ] ; xx [ 35 ] = xx [ 23 ] * xx [ 74 ]
; xx [ 73 ] = xx [ 17 ] ; xx [ 74 ] = - xx [ 27 ] ; xx [ 75 ] = - xx [ 35 ] ;
pm_math_Vector3_cross_ra ( xx + 60 , xx + 73 , xx + 103 ) ; xx [ 57 ] = xx [
39 ] + xx [ 82 ] - ( xx [ 22 ] * xx [ 26 ] + xx [ 96 ] ) * xx [ 47 ] ; xx [
26 ] = xx [ 40 ] + xx [ 83 ] - xx [ 47 ] * ( xx [ 97 ] - xx [ 21 ] * xx [ 22
] ) + xx [ 13 ] ; xx [ 21 ] = xx [ 91 ] * xx [ 101 ] - xx [ 80 ] * xx [ 100 ]
; xx [ 38 ] = xx [ 229 ] ; xx [ 39 ] = - xx [ 228 ] ; xx [ 40 ] = xx [ 21 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 38 , xx + 60 ) ; xx [ 38 ] = xx [
294 ] ; xx [ 39 ] = xx [ 285 ] ; xx [ 40 ] = xx [ 296 ] ;
pm_math_Quaternion_xform_ra ( xx + 263 , xx + 38 , xx + 73 ) ; xx [ 22 ] = xx
[ 14 ] * xx [ 257 ] ; xx [ 38 ] = xx [ 255 ] ; xx [ 39 ] = xx [ 237 ] ; xx [
40 ] = xx [ 236 ] ; xx [ 63 ] = xx [ 23 ] * xx [ 258 ] - xx [ 255 ] * xx [ 14
] ; xx [ 77 ] = xx [ 23 ] * xx [ 257 ] ; xx [ 81 ] = - xx [ 22 ] ; xx [ 82 ]
= xx [ 63 ] ; xx [ 83 ] = - xx [ 77 ] ; pm_math_Vector3_cross_ra ( xx + 38 ,
xx + 81 , xx + 95 ) ; xx [ 38 ] = xx [ 232 ] * xx [ 100 ] + xx [ 238 ] * xx [
101 ] ; xx [ 81 ] = xx [ 306 ] ; xx [ 82 ] = xx [ 305 ] ; xx [ 83 ] = - xx [
38 ] ; pm_math_Vector3_cross_ra ( xx + 100 , xx + 81 , xx + 123 ) ; xx [ 81 ]
= xx [ 373 ] ; xx [ 82 ] = xx [ 368 ] ; xx [ 83 ] = xx [ 375 ] ;
pm_math_Quaternion_xform_ra ( xx + 343 , xx + 81 , xx + 134 ) ; xx [ 39 ] =
xx [ 14 ] * xx [ 341 ] ; xx [ 81 ] = xx [ 335 ] ; xx [ 82 ] = xx [ 333 ] ; xx
[ 83 ] = xx [ 342 ] ; xx [ 40 ] = xx [ 335 ] * xx [ 14 ] - xx [ 23 ] * xx [
342 ] ; xx [ 84 ] = xx [ 23 ] * xx [ 341 ] ; xx [ 140 ] = xx [ 39 ] ; xx [
141 ] = xx [ 40 ] ; xx [ 142 ] = - xx [ 84 ] ; pm_math_Vector3_cross_ra ( xx
+ 81 , xx + 140 , xx + 147 ) ; xx [ 81 ] = xx [ 310 ] * xx [ 100 ] - xx [ 316
] * xx [ 101 ] ; xx [ 140 ] = xx [ 389 ] ; xx [ 141 ] = xx [ 384 ] ; xx [ 142
] = xx [ 81 ] ; pm_math_Vector3_cross_ra ( xx + 100 , xx + 140 , xx + 152 ) ;
xx [ 140 ] = xx [ 449 ] ; xx [ 141 ] = xx [ 443 ] ; xx [ 142 ] = xx [ 451 ] ;
pm_math_Quaternion_xform_ra ( xx + 422 , xx + 140 , xx + 155 ) ; xx [ 140 ] =
xx [ 418 ] ; xx [ 141 ] = xx [ 411 ] ; xx [ 142 ] = xx [ 420 ] ; xx [ 82 ] =
xx [ 14 ] * xx [ 419 ] ; xx [ 83 ] = xx [ 23 ] * xx [ 420 ] + xx [ 416 ] * xx
[ 14 ] ; xx [ 88 ] = xx [ 23 ] * xx [ 419 ] ; xx [ 169 ] = xx [ 82 ] ; xx [
170 ] = - xx [ 83 ] ; xx [ 171 ] = - xx [ 88 ] ; pm_math_Vector3_cross_ra (
xx + 140 , xx + 169 , xx + 172 ) ; xx [ 90 ] = xx [ 390 ] * xx [ 100 ] + xx [
396 ] * xx [ 101 ] ; xx [ 140 ] = xx [ 146 ] ; xx [ 141 ] = - xx [ 144 ] ; xx
[ 142 ] = xx [ 90 ] ; pm_math_Vector3_cross_ra ( xx + 100 , xx + 140 , xx +
169 ) ; xx [ 100 ] = xx [ 139 ] ; xx [ 101 ] = xx [ 133 ] ; xx [ 102 ] = xx [
429 ] ; pm_math_Quaternion_xform_ra ( xx + 480 , xx + 100 , xx + 138 ) ; xx [
100 ] = xx [ 14 ] * xx [ 454 ] ; xx [ 141 ] = xx [ 167 ] ; xx [ 142 ] = xx [
162 ] ; xx [ 143 ] = xx [ 160 ] ; xx [ 101 ] = xx [ 23 ] * xx [ 461 ] - xx [
167 ] * xx [ 14 ] ; xx [ 102 ] = xx [ 23 ] * xx [ 454 ] ; xx [ 158 ] = - xx [
100 ] ; xx [ 159 ] = xx [ 101 ] ; xx [ 160 ] = - xx [ 102 ] ;
pm_math_Vector3_cross_ra ( xx + 141 , xx + 158 , xx + 175 ) ; xx [ 451 ] = -
( xx [ 47 ] * ( xx [ 64 ] - xx [ 99 ] * xx [ 87 ] ) - xx [ 56 ] + xx [ 25 ] -
( xx [ 69 ] - ( xx [ 103 ] - xx [ 51 ] * xx [ 17 ] ) * xx [ 47 ] - ( xx [ 107
] + xx [ 163 ] ) * xx [ 47 ] ) - xx [ 11 ] ) ; xx [ 452 ] = ( xx [ 206 ] + xx
[ 218 ] * xx [ 68 ] ) * xx [ 47 ] + xx [ 70 ] - ( xx [ 51 ] * xx [ 27 ] + xx
[ 104 ] ) * xx [ 47 ] - ( xx [ 55 ] + ( xx [ 65 ] - xx [ 56 ] * xx [ 78 ] ) *
xx [ 47 ] + xx [ 57 ] ) ; xx [ 453 ] = - ( ( xx [ 99 ] * xx [ 15 ] + xx [ 66
] ) * xx [ 47 ] + xx [ 26 ] - ( xx [ 47 ] * ( xx [ 218 ] * xx [ 185 ] - xx [
106 ] ) + xx [ 71 ] - xx [ 47 ] * ( xx [ 105 ] + xx [ 35 ] * xx [ 51 ] ) ) +
xx [ 3 ] ) ; xx [ 454 ] = - ( xx [ 47 ] * ( xx [ 60 ] + xx [ 99 ] * xx [ 229
] ) - xx [ 91 ] + xx [ 25 ] - ( xx [ 73 ] - ( xx [ 22 ] * xx [ 254 ] + xx [
95 ] ) * xx [ 47 ] - ( xx [ 277 ] + xx [ 269 ] ) * xx [ 47 ] ) - xx [ 52 ] )
; xx [ 455 ] = ( xx [ 295 ] + xx [ 282 ] * xx [ 209 ] ) * xx [ 47 ] + xx [ 74
] - ( xx [ 96 ] - xx [ 254 ] * xx [ 63 ] ) * xx [ 47 ] - ( ( xx [ 61 ] - xx [
91 ] * xx [ 78 ] ) * xx [ 47 ] - xx [ 80 ] + xx [ 57 ] ) ; xx [ 456 ] = - ( (
xx [ 99 ] * xx [ 21 ] + xx [ 62 ] ) * xx [ 47 ] + xx [ 26 ] - ( xx [ 47 ] * (
xx [ 282 ] * xx [ 286 ] - xx [ 272 ] ) + xx [ 75 ] - xx [ 47 ] * ( xx [ 97 ]
+ xx [ 77 ] * xx [ 254 ] ) ) + xx [ 54 ] ) ; xx [ 457 ] = - ( xx [ 238 ] + xx
[ 47 ] * ( xx [ 123 ] + xx [ 99 ] * xx [ 306 ] ) + xx [ 25 ] - ( xx [ 134 ] -
( xx [ 39 ] * xx [ 334 ] + xx [ 147 ] ) * xx [ 47 ] - ( xx [ 356 ] + xx [ 290
] ) * xx [ 47 ] ) - xx [ 79 ] ) ; xx [ 458 ] = ( xx [ 374 ] + xx [ 361 ] * xx
[ 287 ] ) * xx [ 47 ] + xx [ 135 ] - ( xx [ 334 ] * xx [ 40 ] + xx [ 148 ] )
* xx [ 47 ] - ( ( xx [ 238 ] * xx [ 78 ] + xx [ 124 ] ) * xx [ 47 ] - xx [
232 ] + xx [ 57 ] ) ; xx [ 459 ] = - ( ( xx [ 125 ] - xx [ 99 ] * xx [ 38 ] )
* xx [ 47 ] + xx [ 26 ] - ( xx [ 47 ] * ( xx [ 361 ] * xx [ 371 ] - xx [ 348
] ) + xx [ 136 ] - xx [ 47 ] * ( xx [ 149 ] - xx [ 84 ] * xx [ 334 ] ) ) - xx
[ 85 ] ) ; xx [ 460 ] = - ( xx [ 316 ] + xx [ 47 ] * ( xx [ 152 ] - xx [ 99 ]
* xx [ 385 ] ) + xx [ 25 ] - ( xx [ 155 ] - ( xx [ 172 ] - xx [ 82 ] * xx [
412 ] ) * xx [ 47 ] - ( xx [ 441 ] + xx [ 370 ] ) * xx [ 47 ] ) - xx [ 93 ] )
; xx [ 461 ] = ( xx [ 450 ] + xx [ 438 ] * xx [ 367 ] ) * xx [ 47 ] + xx [
156 ] - ( xx [ 412 ] * xx [ 83 ] + xx [ 173 ] ) * xx [ 47 ] - ( xx [ 310 ] +
( xx [ 316 ] * xx [ 78 ] + xx [ 153 ] ) * xx [ 47 ] + xx [ 57 ] ) ; xx [ 462
] = - ( ( xx [ 99 ] * xx [ 81 ] + xx [ 154 ] ) * xx [ 47 ] + xx [ 26 ] - ( xx
[ 47 ] * ( xx [ 438 ] * xx [ 447 ] - xx [ 427 ] ) + xx [ 157 ] - xx [ 47 ] *
( xx [ 174 ] + xx [ 88 ] * xx [ 412 ] ) ) - xx [ 94 ] ) ; xx [ 463 ] = - ( xx
[ 47 ] * ( xx [ 169 ] - xx [ 99 ] * xx [ 145 ] ) - xx [ 396 ] + xx [ 25 ] - (
xx [ 138 ] - ( xx [ 100 ] * xx [ 166 ] + xx [ 175 ] ) * xx [ 47 ] - ( xx [
131 ] + xx [ 120 ] ) * xx [ 47 ] ) - xx [ 53 ] ) ; xx [ 464 ] = ( xx [ 421 ]
+ xx [ 128 ] * xx [ 114 ] ) * xx [ 47 ] + xx [ 139 ] - ( xx [ 176 ] - xx [
166 ] * xx [ 101 ] ) * xx [ 47 ] - ( xx [ 390 ] + ( xx [ 170 ] - xx [ 396 ] *
xx [ 78 ] ) * xx [ 47 ] + xx [ 57 ] ) ; xx [ 465 ] = - ( ( xx [ 99 ] * xx [
90 ] + xx [ 171 ] ) * xx [ 47 ] + xx [ 26 ] - ( xx [ 47 ] * ( xx [ 128 ] * xx
[ 137 ] - xx [ 122 ] ) + xx [ 140 ] - xx [ 47 ] * ( xx [ 177 ] + xx [ 102 ] *
xx [ 166 ] ) ) + xx [ 58 ] ) ; memcpy ( xx + 898 , xx + 493 , 405 * sizeof (
double ) ) ; factorAndSolveWide ( 15 , 27 , xx + 898 , xx + 169 , xx + 213 ,
ii + 0 , xx + 451 , xx [ 4 ] , xx + 119 ) ; xx [ 15 ] = xx [ 10 ] + xx [ 119
] ; xx [ 60 ] = xx [ 12 ] ; xx [ 61 ] = xx [ 20 ] ; xx [ 62 ] = xx [ 28 ] ;
xx [ 63 ] = xx [ 34 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 60 , xx + 120
, xx + 68 ) ; xx [ 10 ] = xx [ 12 ] + xx [ 68 ] ; xx [ 12 ] = xx [ 20 ] + xx
[ 69 ] ; xx [ 17 ] = xx [ 28 ] + xx [ 70 ] ; xx [ 20 ] = xx [ 34 ] + xx [ 71
] ; xx [ 21 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 12 ] * xx [ 12 ] + xx [
17 ] * xx [ 17 ] + xx [ 20 ] * xx [ 20 ] ) ; if ( xx [ 19 ] > xx [ 21 ] ) xx
[ 21 ] = xx [ 19 ] ; xx [ 22 ] = xx [ 10 ] / xx [ 21 ] ; xx [ 10 ] = xx [ 12
] / xx [ 21 ] ; xx [ 12 ] = xx [ 17 ] / xx [ 21 ] ; xx [ 17 ] = xx [ 20 ] /
xx [ 21 ] ; xx [ 25 ] = xx [ 42 ] ; xx [ 26 ] = xx [ 36 ] ; xx [ 27 ] = xx [
49 ] ; xx [ 28 ] = xx [ 43 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 25 , xx
+ 123 , xx + 60 ) ; xx [ 20 ] = xx [ 42 ] + xx [ 60 ] ; xx [ 21 ] = xx [ 36 ]
+ xx [ 61 ] ; xx [ 25 ] = xx [ 49 ] + xx [ 62 ] ; xx [ 26 ] = xx [ 43 ] + xx
[ 63 ] ; xx [ 27 ] = sqrt ( xx [ 20 ] * xx [ 20 ] + xx [ 21 ] * xx [ 21 ] +
xx [ 25 ] * xx [ 25 ] + xx [ 26 ] * xx [ 26 ] ) ; if ( xx [ 19 ] > xx [ 27 ]
) xx [ 27 ] = xx [ 19 ] ; xx [ 28 ] = xx [ 20 ] / xx [ 27 ] ; xx [ 20 ] = xx
[ 21 ] / xx [ 27 ] ; xx [ 21 ] = xx [ 25 ] / xx [ 27 ] ; xx [ 25 ] = xx [ 26
] / xx [ 27 ] ; xx [ 26 ] = xx [ 395 ] + xx [ 126 ] ; xx [ 60 ] = xx [ 417 ]
; xx [ 61 ] = xx [ 426 ] ; xx [ 62 ] = xx [ 410 ] ; xx [ 63 ] = xx [ 359 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 60 , xx + 127 , xx + 68 ) ; xx [ 27 ]
= xx [ 417 ] + xx [ 68 ] ; xx [ 34 ] = xx [ 426 ] + xx [ 69 ] ; xx [ 35 ] =
xx [ 410 ] + xx [ 70 ] ; xx [ 36 ] = xx [ 359 ] + xx [ 71 ] ; xx [ 38 ] =
sqrt ( xx [ 27 ] * xx [ 27 ] + xx [ 34 ] * xx [ 34 ] + xx [ 35 ] * xx [ 35 ]
+ xx [ 36 ] * xx [ 36 ] ) ; if ( xx [ 19 ] > xx [ 38 ] ) xx [ 38 ] = xx [ 19
] ; xx [ 39 ] = xx [ 27 ] / xx [ 38 ] ; xx [ 27 ] = xx [ 34 ] / xx [ 38 ] ;
xx [ 34 ] = xx [ 35 ] / xx [ 38 ] ; xx [ 35 ] = xx [ 36 ] / xx [ 38 ] ; xx [
36 ] = xx [ 151 ] + xx [ 130 ] ; xx [ 60 ] = xx [ 116 ] ; xx [ 61 ] = xx [
113 ] ; xx [ 62 ] = xx [ 115 ] ; xx [ 63 ] = xx [ 118 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 60 , xx + 131 , xx + 68 ) ; xx [ 38 ]
= xx [ 116 ] + xx [ 68 ] ; xx [ 40 ] = xx [ 113 ] + xx [ 69 ] ; xx [ 42 ] =
xx [ 115 ] + xx [ 70 ] ; xx [ 43 ] = xx [ 118 ] + xx [ 71 ] ; xx [ 49 ] =
sqrt ( xx [ 38 ] * xx [ 38 ] + xx [ 40 ] * xx [ 40 ] + xx [ 42 ] * xx [ 42 ]
+ xx [ 43 ] * xx [ 43 ] ) ; if ( xx [ 19 ] > xx [ 49 ] ) xx [ 49 ] = xx [ 19
] ; xx [ 51 ] = xx [ 38 ] / xx [ 49 ] ; xx [ 38 ] = xx [ 40 ] / xx [ 49 ] ;
xx [ 40 ] = xx [ 42 ] / xx [ 49 ] ; xx [ 42 ] = xx [ 43 ] / xx [ 49 ] ; xx [
43 ] = xx [ 31 ] + xx [ 134 ] ; xx [ 60 ] = xx [ 89 ] ; xx [ 61 ] = xx [ 98 ]
; xx [ 62 ] = xx [ 33 ] ; xx [ 63 ] = xx [ 59 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 60 , xx + 135 , xx + 68 ) ; xx [ 31 ]
= xx [ 89 ] + xx [ 68 ] ; xx [ 49 ] = xx [ 98 ] + xx [ 69 ] ; xx [ 57 ] = xx
[ 33 ] + xx [ 70 ] ; xx [ 33 ] = xx [ 59 ] + xx [ 71 ] ; xx [ 59 ] = sqrt (
xx [ 31 ] * xx [ 31 ] + xx [ 49 ] * xx [ 49 ] + xx [ 57 ] * xx [ 57 ] + xx [
33 ] * xx [ 33 ] ) ; if ( xx [ 19 ] > xx [ 59 ] ) xx [ 59 ] = xx [ 19 ] ; xx
[ 60 ] = xx [ 31 ] / xx [ 59 ] ; xx [ 31 ] = xx [ 49 ] / xx [ 59 ] ; xx [ 49
] = xx [ 57 ] / xx [ 59 ] ; xx [ 57 ] = xx [ 33 ] / xx [ 59 ] ; xx [ 33 ] =
xx [ 231 ] + xx [ 138 ] ; xx [ 61 ] = xx [ 256 ] ; xx [ 62 ] = xx [ 212 ] ;
xx [ 63 ] = xx [ 267 ] ; xx [ 64 ] = xx [ 268 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 61 , xx + 139 , xx + 68 ) ; xx [ 59 ]
= xx [ 256 ] + xx [ 68 ] ; xx [ 61 ] = xx [ 212 ] + xx [ 69 ] ; xx [ 62 ] =
xx [ 267 ] + xx [ 70 ] ; xx [ 63 ] = xx [ 268 ] + xx [ 71 ] ; xx [ 64 ] =
sqrt ( xx [ 59 ] * xx [ 59 ] + xx [ 61 ] * xx [ 61 ] + xx [ 62 ] * xx [ 62 ]
+ xx [ 63 ] * xx [ 63 ] ) ; if ( xx [ 19 ] > xx [ 64 ] ) xx [ 64 ] = xx [ 19
] ; xx [ 65 ] = xx [ 59 ] / xx [ 64 ] ; xx [ 59 ] = xx [ 61 ] / xx [ 64 ] ;
xx [ 61 ] = xx [ 62 ] / xx [ 64 ] ; xx [ 62 ] = xx [ 63 ] / xx [ 64 ] ; xx [
63 ] = xx [ 315 ] + xx [ 142 ] ; xx [ 68 ] = xx [ 336 ] ; xx [ 69 ] = xx [
347 ] ; xx [ 70 ] = xx [ 332 ] ; xx [ 71 ] = xx [ 280 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 68 , xx + 143 , xx + 81 ) ; xx [ 64 ]
= xx [ 336 ] + xx [ 81 ] ; xx [ 66 ] = xx [ 347 ] + xx [ 82 ] ; xx [ 68 ] =
xx [ 332 ] + xx [ 83 ] ; xx [ 69 ] = xx [ 280 ] + xx [ 84 ] ; xx [ 70 ] =
sqrt ( xx [ 64 ] * xx [ 64 ] + xx [ 66 ] * xx [ 66 ] + xx [ 68 ] * xx [ 68 ]
+ xx [ 69 ] * xx [ 69 ] ) ; if ( xx [ 19 ] > xx [ 70 ] ) xx [ 70 ] = xx [ 19
] ; xx [ 19 ] = xx [ 64 ] / xx [ 70 ] ; xx [ 64 ] = xx [ 66 ] / xx [ 70 ] ;
xx [ 66 ] = xx [ 68 ] / xx [ 70 ] ; xx [ 68 ] = xx [ 69 ] / xx [ 70 ] ; xx [
401 ] = xx [ 15 ] ; xx [ 402 ] = state [ 1 ] ; xx [ 403 ] = xx [ 22 ] ; xx [
404 ] = xx [ 10 ] ; xx [ 405 ] = xx [ 12 ] ; xx [ 406 ] = xx [ 17 ] ; xx [
407 ] = state [ 6 ] ; xx [ 408 ] = state [ 7 ] ; xx [ 409 ] = state [ 8 ] ;
xx [ 410 ] = xx [ 28 ] ; xx [ 411 ] = xx [ 20 ] ; xx [ 412 ] = xx [ 21 ] ; xx
[ 413 ] = xx [ 25 ] ; xx [ 414 ] = state [ 13 ] ; xx [ 415 ] = state [ 14 ] ;
xx [ 416 ] = state [ 15 ] ; xx [ 417 ] = xx [ 26 ] ; xx [ 418 ] = state [ 17
] ; xx [ 419 ] = xx [ 39 ] ; xx [ 420 ] = xx [ 27 ] ; xx [ 421 ] = xx [ 34 ]
; xx [ 422 ] = xx [ 35 ] ; xx [ 423 ] = state [ 22 ] ; xx [ 424 ] = state [
23 ] ; xx [ 425 ] = state [ 24 ] ; xx [ 426 ] = xx [ 36 ] ; xx [ 427 ] =
state [ 26 ] ; xx [ 428 ] = xx [ 51 ] ; xx [ 429 ] = xx [ 38 ] ; xx [ 430 ] =
xx [ 40 ] ; xx [ 431 ] = xx [ 42 ] ; xx [ 432 ] = state [ 31 ] ; xx [ 433 ] =
state [ 32 ] ; xx [ 434 ] = state [ 33 ] ; xx [ 435 ] = xx [ 43 ] ; xx [ 436
] = state [ 35 ] ; xx [ 437 ] = xx [ 60 ] ; xx [ 438 ] = xx [ 31 ] ; xx [ 439
] = xx [ 49 ] ; xx [ 440 ] = xx [ 57 ] ; xx [ 441 ] = state [ 40 ] ; xx [ 442
] = state [ 41 ] ; xx [ 443 ] = state [ 42 ] ; xx [ 444 ] = xx [ 33 ] ; xx [
445 ] = state [ 44 ] ; xx [ 446 ] = xx [ 65 ] ; xx [ 447 ] = xx [ 59 ] ; xx [
448 ] = xx [ 61 ] ; xx [ 449 ] = xx [ 62 ] ; xx [ 450 ] = state [ 49 ] ; xx [
451 ] = state [ 50 ] ; xx [ 452 ] = state [ 51 ] ; xx [ 453 ] = xx [ 63 ] ;
xx [ 454 ] = state [ 53 ] ; xx [ 455 ] = xx [ 19 ] ; xx [ 456 ] = xx [ 64 ] ;
xx [ 457 ] = xx [ 66 ] ; xx [ 458 ] = xx [ 68 ] ; xx [ 459 ] = state [ 58 ] ;
xx [ 460 ] = state [ 59 ] ; xx [ 461 ] = state [ 60 ] ; xx [ 69 ] = xx [ 15 ]
* xx [ 1 ] ; xx [ 15 ] = cos ( xx [ 69 ] ) ; xx [ 70 ] = xx [ 0 ] * xx [ 15 ]
; xx [ 71 ] = sin ( xx [ 69 ] ) ; xx [ 69 ] = xx [ 5 ] * xx [ 71 ] ; xx [ 73
] = xx [ 8 ] * xx [ 71 ] ; xx [ 71 ] = xx [ 0 ] * xx [ 69 ] + xx [ 7 ] * xx [
73 ] ; xx [ 74 ] = xx [ 7 ] * xx [ 15 ] ; xx [ 15 ] = xx [ 7 ] * xx [ 69 ] -
xx [ 0 ] * xx [ 73 ] ; xx [ 81 ] = - xx [ 70 ] ; xx [ 82 ] = xx [ 71 ] ; xx [
83 ] = xx [ 74 ] ; xx [ 84 ] = xx [ 15 ] ; xx [ 69 ] = xx [ 2 ] * xx [ 12 ] +
xx [ 16 ] * xx [ 22 ] ; xx [ 73 ] = xx [ 2 ] * xx [ 17 ] - xx [ 16 ] * xx [
10 ] ; xx [ 75 ] = xx [ 2 ] * xx [ 22 ] - xx [ 16 ] * xx [ 12 ] ; xx [ 12 ] =
xx [ 2 ] * xx [ 10 ] + xx [ 16 ] * xx [ 17 ] ; xx [ 87 ] = xx [ 69 ] ; xx [
88 ] = - xx [ 73 ] ; xx [ 89 ] = - xx [ 75 ] ; xx [ 90 ] = xx [ 12 ] ;
pm_math_Quaternion_compose_ra ( xx + 81 , xx + 87 , xx + 95 ) ; xx [ 10 ] =
xx [ 29 ] * xx [ 25 ] - xx [ 32 ] * xx [ 28 ] ; xx [ 17 ] = xx [ 29 ] * xx [
21 ] + xx [ 32 ] * xx [ 20 ] ; xx [ 22 ] = - xx [ 17 ] ; xx [ 77 ] = xx [ 32
] * xx [ 21 ] - xx [ 29 ] * xx [ 20 ] ; xx [ 20 ] = - xx [ 77 ] ; xx [ 21 ] =
xx [ 29 ] * xx [ 28 ] + xx [ 32 ] * xx [ 25 ] ; xx [ 25 ] = - xx [ 21 ] ; xx
[ 87 ] = xx [ 10 ] ; xx [ 88 ] = xx [ 22 ] ; xx [ 89 ] = xx [ 20 ] ; xx [ 90
] = xx [ 25 ] ; pm_math_Quaternion_compose_ra ( xx + 95 , xx + 87 , xx + 99 )
; xx [ 28 ] = xx [ 55 ] * xx [ 102 ] ; xx [ 78 ] = xx [ 55 ] * xx [ 100 ] +
xx [ 56 ] * xx [ 101 ] ; xx [ 87 ] = - xx [ 28 ] ; xx [ 88 ] = - ( xx [ 56 ]
* xx [ 102 ] ) ; xx [ 89 ] = xx [ 78 ] ; pm_math_Vector3_cross_ra ( xx + 100
, xx + 87 , xx + 103 ) ; xx [ 87 ] = xx [ 22 ] ; xx [ 88 ] = xx [ 20 ] ; xx [
89 ] = xx [ 25 ] ; xx [ 20 ] = xx [ 37 ] * xx [ 21 ] ; xx [ 22 ] = xx [ 41 ]
* xx [ 21 ] ; xx [ 21 ] = xx [ 37 ] * xx [ 17 ] - xx [ 77 ] * xx [ 41 ] ; xx
[ 106 ] = - xx [ 20 ] ; xx [ 107 ] = xx [ 22 ] ; xx [ 108 ] = xx [ 21 ] ;
pm_math_Vector3_cross_ra ( xx + 87 , xx + 106 , xx + 113 ) ; xx [ 87 ] = xx [
47 ] * ( xx [ 113 ] - xx [ 20 ] * xx [ 10 ] ) + 0.07457283183606418 ; xx [ 88
] = ( xx [ 22 ] * xx [ 10 ] + xx [ 114 ] ) * xx [ 47 ] - xx [ 37 ] ; xx [ 89
] = ( xx [ 21 ] * xx [ 10 ] + xx [ 115 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 95 , xx + 87 , xx + 20 ) ; xx [ 10 ] =
0.2199463818469452 ; xx [ 17 ] = xx [ 75 ] * xx [ 46 ] ; xx [ 25 ] = xx [ 46
] * xx [ 12 ] ; xx [ 87 ] = xx [ 10 ] - ( xx [ 75 ] * xx [ 17 ] + xx [ 25 ] *
xx [ 12 ] ) * xx [ 47 ] ; xx [ 88 ] = ( xx [ 25 ] * xx [ 69 ] + xx [ 73 ] *
xx [ 17 ] ) * xx [ 47 ] ; xx [ 89 ] = xx [ 86 ] + xx [ 47 ] * ( xx [ 17 ] *
xx [ 69 ] - xx [ 73 ] * xx [ 25 ] ) ; pm_math_Quaternion_xform_ra ( xx + 81 ,
xx + 87 , xx + 95 ) ; xx [ 81 ] = xx [ 71 ] ; xx [ 82 ] = xx [ 74 ] ; xx [ 83
] = xx [ 15 ] ; xx [ 12 ] = xx [ 14 ] * xx [ 74 ] ; xx [ 17 ] = xx [ 23 ] *
xx [ 15 ] + xx [ 71 ] * xx [ 14 ] ; xx [ 15 ] = xx [ 23 ] * xx [ 74 ] ; xx [
73 ] = xx [ 12 ] ; xx [ 74 ] = - xx [ 17 ] ; xx [ 75 ] = xx [ 15 ] ;
pm_math_Vector3_cross_ra ( xx + 81 , xx + 73 , xx + 87 ) ; xx [ 25 ] = xx [
20 ] + xx [ 95 ] - ( xx [ 87 ] - xx [ 12 ] * xx [ 70 ] ) * xx [ 47 ] + xx [ 6
] ; xx [ 6 ] = xx [ 43 ] * xx [ 1 ] ; xx [ 12 ] = cos ( xx [ 6 ] ) ; xx [ 43
] = xx [ 2 ] * xx [ 12 ] ; xx [ 69 ] = sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 5 ]
* xx [ 69 ] ; xx [ 71 ] = xx [ 8 ] * xx [ 69 ] ; xx [ 69 ] = xx [ 2 ] * xx [
6 ] + xx [ 16 ] * xx [ 71 ] ; xx [ 73 ] = - xx [ 69 ] ; xx [ 74 ] = xx [ 16 ]
* xx [ 12 ] ; xx [ 12 ] = - xx [ 74 ] ; xx [ 75 ] = xx [ 16 ] * xx [ 6 ] - xx
[ 2 ] * xx [ 71 ] ; xx [ 81 ] = - xx [ 43 ] ; xx [ 82 ] = xx [ 73 ] ; xx [ 83
] = xx [ 12 ] ; xx [ 84 ] = xx [ 75 ] ; xx [ 6 ] = xx [ 16 ] * xx [ 49 ] + xx
[ 2 ] * xx [ 60 ] ; xx [ 71 ] = xx [ 6 ] * xx [ 46 ] ; xx [ 77 ] = xx [ 16 ]
* xx [ 57 ] - xx [ 2 ] * xx [ 31 ] ; xx [ 90 ] = xx [ 46 ] * xx [ 77 ] ; xx [
98 ] = xx [ 16 ] * xx [ 60 ] - xx [ 2 ] * xx [ 49 ] ; xx [ 49 ] = xx [ 16 ] *
xx [ 31 ] + xx [ 2 ] * xx [ 57 ] ; xx [ 106 ] = xx [ 10 ] - ( xx [ 6 ] * xx [
71 ] + xx [ 90 ] * xx [ 77 ] ) * xx [ 47 ] ; xx [ 107 ] = ( xx [ 90 ] * xx [
98 ] + xx [ 49 ] * xx [ 71 ] ) * xx [ 47 ] ; xx [ 108 ] = xx [ 47 ] * ( xx [
49 ] * xx [ 90 ] - xx [ 71 ] * xx [ 98 ] ) - xx [ 86 ] ;
pm_math_Quaternion_xform_ra ( xx + 81 , xx + 106 , xx + 113 ) ; xx [ 106 ] =
xx [ 73 ] ; xx [ 107 ] = xx [ 12 ] ; xx [ 108 ] = xx [ 75 ] ; xx [ 12 ] = xx
[ 14 ] * xx [ 74 ] ; xx [ 31 ] = xx [ 23 ] * xx [ 75 ] + xx [ 69 ] * xx [ 14
] ; xx [ 57 ] = xx [ 23 ] * xx [ 74 ] ; xx [ 73 ] = xx [ 12 ] ; xx [ 74 ] = -
xx [ 31 ] ; xx [ 75 ] = - xx [ 57 ] ; pm_math_Vector3_cross_ra ( xx + 106 ,
xx + 73 , xx + 116 ) ; xx [ 106 ] = xx [ 98 ] ; xx [ 107 ] = xx [ 49 ] ; xx [
108 ] = xx [ 6 ] ; xx [ 109 ] = xx [ 77 ] ; pm_math_Quaternion_compose_ra (
xx + 81 , xx + 106 , xx + 119 ) ; xx [ 6 ] = xx [ 46 ] * xx [ 121 ] ; xx [ 49
] = xx [ 46 ] * xx [ 122 ] ; xx [ 60 ] = xx [ 99 ] * xx [ 102 ] ; xx [ 69 ] =
xx [ 21 ] + xx [ 96 ] - ( xx [ 70 ] * xx [ 17 ] + xx [ 88 ] ) * xx [ 47 ] ;
xx [ 17 ] = xx [ 22 ] + xx [ 97 ] - xx [ 47 ] * ( xx [ 89 ] - xx [ 15 ] * xx
[ 70 ] ) + xx [ 13 ] ; xx [ 13 ] = xx [ 80 ] * xx [ 102 ] ; xx [ 15 ] = xx [
91 ] * xx [ 101 ] - xx [ 80 ] * xx [ 100 ] ; xx [ 20 ] = xx [ 13 ] ; xx [ 21
] = - ( xx [ 91 ] * xx [ 102 ] ) ; xx [ 22 ] = xx [ 15 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 20 , xx + 73 ) ; xx [ 20 ] = xx [
33 ] * xx [ 1 ] ; xx [ 21 ] = cos ( xx [ 20 ] ) ; xx [ 22 ] = xx [ 192 ] * xx
[ 21 ] ; xx [ 33 ] = sin ( xx [ 20 ] ) ; xx [ 20 ] = xx [ 5 ] * xx [ 33 ] ;
xx [ 70 ] = xx [ 8 ] * xx [ 33 ] ; xx [ 33 ] = xx [ 192 ] * xx [ 20 ] - xx [
200 ] * xx [ 70 ] ; xx [ 71 ] = xx [ 200 ] * xx [ 21 ] ; xx [ 21 ] = - xx [
71 ] ; xx [ 77 ] = xx [ 192 ] * xx [ 70 ] + xx [ 200 ] * xx [ 20 ] ; xx [ 20
] = - xx [ 77 ] ; xx [ 81 ] = - xx [ 22 ] ; xx [ 82 ] = xx [ 33 ] ; xx [ 83 ]
= xx [ 21 ] ; xx [ 84 ] = xx [ 20 ] ; xx [ 70 ] = xx [ 2 ] * xx [ 65 ] - xx [
16 ] * xx [ 61 ] ; xx [ 87 ] = xx [ 70 ] * xx [ 46 ] ; xx [ 88 ] = xx [ 2 ] *
xx [ 59 ] + xx [ 16 ] * xx [ 62 ] ; xx [ 89 ] = xx [ 46 ] * xx [ 88 ] ; xx [
90 ] = xx [ 2 ] * xx [ 61 ] + xx [ 16 ] * xx [ 65 ] ; xx [ 61 ] = xx [ 2 ] *
xx [ 62 ] - xx [ 16 ] * xx [ 59 ] ; xx [ 95 ] = xx [ 10 ] - ( xx [ 70 ] * xx
[ 87 ] + xx [ 89 ] * xx [ 88 ] ) * xx [ 47 ] ; xx [ 96 ] = ( xx [ 89 ] * xx [
90 ] + xx [ 61 ] * xx [ 87 ] ) * xx [ 47 ] ; xx [ 97 ] = xx [ 86 ] + xx [ 47
] * ( xx [ 87 ] * xx [ 90 ] - xx [ 61 ] * xx [ 89 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 81 , xx + 95 , xx + 106 ) ; xx [ 59 ] = xx
[ 14 ] * xx [ 71 ] ; xx [ 95 ] = xx [ 33 ] ; xx [ 96 ] = xx [ 21 ] ; xx [ 97
] = xx [ 20 ] ; xx [ 20 ] = xx [ 23 ] * xx [ 77 ] - xx [ 33 ] * xx [ 14 ] ;
xx [ 21 ] = xx [ 23 ] * xx [ 71 ] ; xx [ 123 ] = - xx [ 59 ] ; xx [ 124 ] =
xx [ 20 ] ; xx [ 125 ] = - xx [ 21 ] ; pm_math_Vector3_cross_ra ( xx + 95 ,
xx + 123 , xx + 126 ) ; xx [ 95 ] = xx [ 90 ] ; xx [ 96 ] = - xx [ 61 ] ; xx
[ 97 ] = - xx [ 70 ] ; xx [ 98 ] = xx [ 88 ] ; pm_math_Quaternion_compose_ra
( xx + 81 , xx + 95 , xx + 87 ) ; xx [ 33 ] = xx [ 46 ] * xx [ 89 ] ; xx [ 61
] = xx [ 46 ] * xx [ 90 ] ; xx [ 62 ] = xx [ 232 ] * xx [ 102 ] ; xx [ 65 ] =
xx [ 232 ] * xx [ 100 ] + xx [ 238 ] * xx [ 101 ] ; xx [ 81 ] = xx [ 62 ] ;
xx [ 82 ] = xx [ 238 ] * xx [ 102 ] ; xx [ 83 ] = - xx [ 65 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 81 , xx + 95 ) ; xx [ 70 ] = xx [
63 ] * xx [ 1 ] ; xx [ 63 ] = cos ( xx [ 70 ] ) ; xx [ 71 ] = xx [ 271 ] * xx
[ 63 ] ; xx [ 77 ] = sin ( xx [ 70 ] ) ; xx [ 70 ] = xx [ 5 ] * xx [ 77 ] ;
xx [ 81 ] = xx [ 8 ] * xx [ 77 ] ; xx [ 77 ] = xx [ 271 ] * xx [ 70 ] - xx [
279 ] * xx [ 81 ] ; xx [ 82 ] = xx [ 279 ] * xx [ 63 ] ; xx [ 63 ] = - xx [
82 ] ; xx [ 83 ] = xx [ 271 ] * xx [ 81 ] + xx [ 279 ] * xx [ 70 ] ; xx [ 129
] = xx [ 71 ] ; xx [ 130 ] = xx [ 77 ] ; xx [ 131 ] = xx [ 63 ] ; xx [ 132 ]
= xx [ 83 ] ; xx [ 70 ] = xx [ 16 ] * xx [ 66 ] + xx [ 2 ] * xx [ 19 ] ; xx [
81 ] = xx [ 70 ] * xx [ 46 ] ; xx [ 84 ] = xx [ 16 ] * xx [ 68 ] - xx [ 2 ] *
xx [ 64 ] ; xx [ 98 ] = xx [ 46 ] * xx [ 84 ] ; xx [ 109 ] = xx [ 16 ] * xx [
19 ] - xx [ 2 ] * xx [ 66 ] ; xx [ 19 ] = xx [ 16 ] * xx [ 64 ] + xx [ 2 ] *
xx [ 68 ] ; xx [ 123 ] = xx [ 10 ] - ( xx [ 70 ] * xx [ 81 ] + xx [ 98 ] * xx
[ 84 ] ) * xx [ 47 ] ; xx [ 124 ] = ( xx [ 98 ] * xx [ 109 ] + xx [ 19 ] * xx
[ 81 ] ) * xx [ 47 ] ; xx [ 125 ] = xx [ 47 ] * ( xx [ 19 ] * xx [ 98 ] - xx
[ 81 ] * xx [ 109 ] ) - xx [ 86 ] ; pm_math_Quaternion_xform_ra ( xx + 129 ,
xx + 123 , xx + 133 ) ; xx [ 64 ] = xx [ 14 ] * xx [ 82 ] ; xx [ 123 ] = xx [
77 ] ; xx [ 124 ] = xx [ 63 ] ; xx [ 125 ] = xx [ 83 ] ; xx [ 63 ] = xx [ 77
] * xx [ 14 ] - xx [ 23 ] * xx [ 83 ] ; xx [ 66 ] = xx [ 23 ] * xx [ 82 ] ;
xx [ 81 ] = xx [ 64 ] ; xx [ 82 ] = xx [ 63 ] ; xx [ 83 ] = - xx [ 66 ] ;
pm_math_Vector3_cross_ra ( xx + 123 , xx + 81 , xx + 136 ) ; xx [ 139 ] = xx
[ 109 ] ; xx [ 140 ] = xx [ 19 ] ; xx [ 141 ] = xx [ 70 ] ; xx [ 142 ] = xx [
84 ] ; pm_math_Quaternion_compose_ra ( xx + 129 , xx + 139 , xx + 81 ) ; xx [
19 ] = xx [ 46 ] * xx [ 83 ] ; xx [ 68 ] = xx [ 46 ] * xx [ 84 ] ; xx [ 70 ]
= xx [ 310 ] * xx [ 102 ] ; xx [ 77 ] = xx [ 310 ] * xx [ 100 ] - xx [ 316 ]
* xx [ 101 ] ; xx [ 123 ] = - xx [ 70 ] ; xx [ 124 ] = xx [ 316 ] * xx [ 102
] ; xx [ 125 ] = xx [ 77 ] ; pm_math_Vector3_cross_ra ( xx + 100 , xx + 123 ,
xx + 129 ) ; xx [ 98 ] = xx [ 26 ] * xx [ 1 ] ; xx [ 26 ] = cos ( xx [ 98 ] )
; xx [ 109 ] = xx [ 350 ] * xx [ 26 ] ; xx [ 111 ] = sin ( xx [ 98 ] ) ; xx [
98 ] = xx [ 5 ] * xx [ 111 ] ; xx [ 123 ] = xx [ 8 ] * xx [ 111 ] ; xx [ 111
] = xx [ 350 ] * xx [ 98 ] + xx [ 358 ] * xx [ 123 ] ; xx [ 124 ] = - xx [
111 ] ; xx [ 125 ] = xx [ 358 ] * xx [ 26 ] ; xx [ 26 ] = - xx [ 125 ] ; xx [
132 ] = xx [ 358 ] * xx [ 98 ] - xx [ 350 ] * xx [ 123 ] ; xx [ 139 ] = - xx
[ 109 ] ; xx [ 140 ] = xx [ 124 ] ; xx [ 141 ] = xx [ 26 ] ; xx [ 142 ] = xx
[ 132 ] ; xx [ 98 ] = xx [ 16 ] * xx [ 34 ] + xx [ 2 ] * xx [ 39 ] ; xx [ 123
] = xx [ 98 ] * xx [ 46 ] ; xx [ 143 ] = xx [ 16 ] * xx [ 35 ] - xx [ 2 ] *
xx [ 27 ] ; xx [ 144 ] = xx [ 46 ] * xx [ 143 ] ; xx [ 145 ] = xx [ 16 ] * xx
[ 39 ] - xx [ 2 ] * xx [ 34 ] ; xx [ 34 ] = xx [ 16 ] * xx [ 27 ] + xx [ 2 ]
* xx [ 35 ] ; xx [ 146 ] = xx [ 10 ] - ( xx [ 98 ] * xx [ 123 ] + xx [ 144 ]
* xx [ 143 ] ) * xx [ 47 ] ; xx [ 147 ] = ( xx [ 144 ] * xx [ 145 ] + xx [ 34
] * xx [ 123 ] ) * xx [ 47 ] ; xx [ 148 ] = xx [ 47 ] * ( xx [ 34 ] * xx [
144 ] - xx [ 123 ] * xx [ 145 ] ) - xx [ 86 ] ; pm_math_Quaternion_xform_ra (
xx + 139 , xx + 146 , xx + 149 ) ; xx [ 146 ] = xx [ 124 ] ; xx [ 147 ] = xx
[ 26 ] ; xx [ 148 ] = xx [ 132 ] ; xx [ 26 ] = xx [ 14 ] * xx [ 125 ] ; xx [
27 ] = xx [ 23 ] * xx [ 132 ] + xx [ 111 ] * xx [ 14 ] ; xx [ 35 ] = xx [ 23
] * xx [ 125 ] ; xx [ 123 ] = xx [ 26 ] ; xx [ 124 ] = - xx [ 27 ] ; xx [ 125
] = - xx [ 35 ] ; pm_math_Vector3_cross_ra ( xx + 146 , xx + 123 , xx + 152 )
; xx [ 155 ] = xx [ 145 ] ; xx [ 156 ] = xx [ 34 ] ; xx [ 157 ] = xx [ 98 ] ;
xx [ 158 ] = xx [ 143 ] ; pm_math_Quaternion_compose_ra ( xx + 139 , xx + 155
, xx + 143 ) ; xx [ 34 ] = xx [ 46 ] * xx [ 145 ] ; xx [ 39 ] = xx [ 46 ] *
xx [ 146 ] ; xx [ 98 ] = xx [ 390 ] * xx [ 102 ] ; xx [ 111 ] = xx [ 390 ] *
xx [ 100 ] + xx [ 396 ] * xx [ 101 ] ; xx [ 123 ] = - xx [ 98 ] ; xx [ 124 ]
= - ( xx [ 396 ] * xx [ 102 ] ) ; xx [ 125 ] = xx [ 111 ] ;
pm_math_Vector3_cross_ra ( xx + 100 , xx + 123 , xx + 139 ) ; xx [ 100 ] = xx
[ 36 ] * xx [ 1 ] ; xx [ 36 ] = cos ( xx [ 100 ] ) ; xx [ 101 ] = xx [ 16 ] *
xx [ 36 ] ; xx [ 102 ] = sin ( xx [ 100 ] ) ; xx [ 100 ] = xx [ 5 ] * xx [
102 ] ; xx [ 123 ] = xx [ 8 ] * xx [ 102 ] ; xx [ 102 ] = xx [ 16 ] * xx [
100 ] - xx [ 2 ] * xx [ 123 ] ; xx [ 124 ] = xx [ 2 ] * xx [ 36 ] ; xx [ 36 ]
= - xx [ 124 ] ; xx [ 125 ] = xx [ 16 ] * xx [ 123 ] + xx [ 2 ] * xx [ 100 ]
; xx [ 100 ] = - xx [ 125 ] ; xx [ 155 ] = - xx [ 101 ] ; xx [ 156 ] = xx [
102 ] ; xx [ 157 ] = xx [ 36 ] ; xx [ 158 ] = xx [ 100 ] ; xx [ 123 ] = xx [
2 ] * xx [ 51 ] - xx [ 16 ] * xx [ 40 ] ; xx [ 132 ] = xx [ 123 ] * xx [ 46 ]
; xx [ 142 ] = xx [ 2 ] * xx [ 38 ] + xx [ 16 ] * xx [ 42 ] ; xx [ 147 ] = xx
[ 46 ] * xx [ 142 ] ; xx [ 148 ] = xx [ 2 ] * xx [ 40 ] + xx [ 16 ] * xx [ 51
] ; xx [ 40 ] = xx [ 2 ] * xx [ 42 ] - xx [ 16 ] * xx [ 38 ] ; xx [ 162 ] =
xx [ 10 ] - ( xx [ 123 ] * xx [ 132 ] + xx [ 147 ] * xx [ 142 ] ) * xx [ 47 ]
; xx [ 163 ] = ( xx [ 147 ] * xx [ 148 ] + xx [ 40 ] * xx [ 132 ] ) * xx [ 47
] ; xx [ 164 ] = xx [ 86 ] + xx [ 47 ] * ( xx [ 132 ] * xx [ 148 ] - xx [ 40
] * xx [ 147 ] ) ; pm_math_Quaternion_xform_ra ( xx + 155 , xx + 162 , xx +
169 ) ; xx [ 38 ] = xx [ 14 ] * xx [ 124 ] ; xx [ 162 ] = xx [ 102 ] ; xx [
163 ] = xx [ 36 ] ; xx [ 164 ] = xx [ 100 ] ; xx [ 36 ] = xx [ 23 ] * xx [
125 ] - xx [ 102 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 23 ] * xx [ 124 ] ; xx [
172 ] = - xx [ 38 ] ; xx [ 173 ] = xx [ 36 ] ; xx [ 174 ] = - xx [ 14 ] ;
pm_math_Vector3_cross_ra ( xx + 162 , xx + 172 , xx + 175 ) ; xx [ 178 ] = xx
[ 148 ] ; xx [ 179 ] = - xx [ 40 ] ; xx [ 180 ] = - xx [ 123 ] ; xx [ 181 ] =
xx [ 142 ] ; pm_math_Quaternion_compose_ra ( xx + 155 , xx + 178 , xx + 182 )
; xx [ 23 ] = xx [ 46 ] * xx [ 184 ] ; xx [ 40 ] = xx [ 46 ] * xx [ 185 ] ;
xx [ 201 ] = fabs ( xx [ 47 ] * ( xx [ 103 ] - xx [ 99 ] * xx [ 28 ] ) - xx [
56 ] + xx [ 25 ] - ( xx [ 113 ] - ( xx [ 116 ] - xx [ 43 ] * xx [ 12 ] ) * xx
[ 47 ] - ( xx [ 121 ] * xx [ 6 ] + xx [ 122 ] * xx [ 49 ] ) * xx [ 47 ] ) -
xx [ 11 ] ) ; xx [ 202 ] = fabs ( xx [ 55 ] + ( xx [ 104 ] - xx [ 56 ] * xx [
60 ] ) * xx [ 47 ] + xx [ 69 ] - ( ( xx [ 119 ] * xx [ 49 ] + xx [ 120 ] * xx
[ 6 ] ) * xx [ 47 ] + xx [ 114 ] - ( xx [ 43 ] * xx [ 31 ] + xx [ 117 ] ) *
xx [ 47 ] ) ) ; xx [ 203 ] = fabs ( ( xx [ 99 ] * xx [ 78 ] + xx [ 105 ] ) *
xx [ 47 ] + xx [ 17 ] - ( xx [ 47 ] * ( xx [ 120 ] * xx [ 49 ] - xx [ 119 ] *
xx [ 6 ] ) + xx [ 115 ] - xx [ 47 ] * ( xx [ 118 ] + xx [ 57 ] * xx [ 43 ] )
) + xx [ 3 ] ) ; xx [ 204 ] = fabs ( xx [ 47 ] * ( xx [ 73 ] + xx [ 99 ] * xx
[ 13 ] ) - xx [ 91 ] + xx [ 25 ] - ( xx [ 106 ] - ( xx [ 59 ] * xx [ 22 ] +
xx [ 126 ] ) * xx [ 47 ] - ( xx [ 89 ] * xx [ 33 ] + xx [ 90 ] * xx [ 61 ] )
* xx [ 47 ] ) - xx [ 52 ] ) ; xx [ 205 ] = fabs ( ( xx [ 74 ] - xx [ 91 ] *
xx [ 60 ] ) * xx [ 47 ] - xx [ 80 ] + xx [ 69 ] - ( ( xx [ 87 ] * xx [ 61 ] +
xx [ 88 ] * xx [ 33 ] ) * xx [ 47 ] + xx [ 107 ] - ( xx [ 127 ] - xx [ 22 ] *
xx [ 20 ] ) * xx [ 47 ] ) ) ; xx [ 206 ] = fabs ( ( xx [ 99 ] * xx [ 15 ] +
xx [ 75 ] ) * xx [ 47 ] + xx [ 17 ] - ( xx [ 47 ] * ( xx [ 88 ] * xx [ 61 ] -
xx [ 87 ] * xx [ 33 ] ) + xx [ 108 ] - xx [ 47 ] * ( xx [ 128 ] + xx [ 21 ] *
xx [ 22 ] ) ) + xx [ 54 ] ) ; xx [ 207 ] = fabs ( xx [ 238 ] + xx [ 47 ] * (
xx [ 95 ] + xx [ 99 ] * xx [ 62 ] ) + xx [ 25 ] - ( xx [ 133 ] - ( xx [ 64 ]
* xx [ 71 ] + xx [ 136 ] ) * xx [ 47 ] - ( xx [ 83 ] * xx [ 19 ] + xx [ 84 ]
* xx [ 68 ] ) * xx [ 47 ] ) - xx [ 79 ] ) ; xx [ 208 ] = fabs ( ( xx [ 238 ]
* xx [ 60 ] + xx [ 96 ] ) * xx [ 47 ] - xx [ 232 ] + xx [ 69 ] - ( ( xx [ 81
] * xx [ 68 ] + xx [ 82 ] * xx [ 19 ] ) * xx [ 47 ] + xx [ 134 ] - ( xx [ 71
] * xx [ 63 ] + xx [ 137 ] ) * xx [ 47 ] ) ) ; xx [ 209 ] = fabs ( ( xx [ 97
] - xx [ 99 ] * xx [ 65 ] ) * xx [ 47 ] + xx [ 17 ] - ( xx [ 47 ] * ( xx [ 82
] * xx [ 68 ] - xx [ 81 ] * xx [ 19 ] ) + xx [ 135 ] - xx [ 47 ] * ( xx [ 138
] - xx [ 66 ] * xx [ 71 ] ) ) - xx [ 85 ] ) ; xx [ 210 ] = fabs ( xx [ 316 ]
+ xx [ 47 ] * ( xx [ 129 ] - xx [ 99 ] * xx [ 70 ] ) + xx [ 25 ] - ( xx [ 149
] - ( xx [ 152 ] - xx [ 26 ] * xx [ 109 ] ) * xx [ 47 ] - ( xx [ 145 ] * xx [
34 ] + xx [ 146 ] * xx [ 39 ] ) * xx [ 47 ] ) - xx [ 93 ] ) ; xx [ 211 ] =
fabs ( xx [ 310 ] + ( xx [ 316 ] * xx [ 60 ] + xx [ 130 ] ) * xx [ 47 ] + xx
[ 69 ] - ( ( xx [ 143 ] * xx [ 39 ] + xx [ 144 ] * xx [ 34 ] ) * xx [ 47 ] +
xx [ 150 ] - ( xx [ 109 ] * xx [ 27 ] + xx [ 153 ] ) * xx [ 47 ] ) ) ; xx [
212 ] = fabs ( ( xx [ 99 ] * xx [ 77 ] + xx [ 131 ] ) * xx [ 47 ] + xx [ 17 ]
- ( xx [ 47 ] * ( xx [ 144 ] * xx [ 39 ] - xx [ 143 ] * xx [ 34 ] ) + xx [
151 ] - xx [ 47 ] * ( xx [ 154 ] + xx [ 35 ] * xx [ 109 ] ) ) - xx [ 94 ] ) ;
xx [ 213 ] = fabs ( xx [ 47 ] * ( xx [ 139 ] - xx [ 99 ] * xx [ 98 ] ) - xx [
396 ] + xx [ 25 ] - ( xx [ 169 ] - ( xx [ 38 ] * xx [ 101 ] + xx [ 175 ] ) *
xx [ 47 ] - ( xx [ 184 ] * xx [ 23 ] + xx [ 185 ] * xx [ 40 ] ) * xx [ 47 ] )
- xx [ 53 ] ) ; xx [ 214 ] = fabs ( xx [ 390 ] + ( xx [ 140 ] - xx [ 396 ] *
xx [ 60 ] ) * xx [ 47 ] + xx [ 69 ] - ( ( xx [ 182 ] * xx [ 40 ] + xx [ 183 ]
* xx [ 23 ] ) * xx [ 47 ] + xx [ 170 ] - ( xx [ 176 ] - xx [ 101 ] * xx [ 36
] ) * xx [ 47 ] ) ) ; xx [ 215 ] = fabs ( ( xx [ 99 ] * xx [ 111 ] + xx [ 141
] ) * xx [ 47 ] + xx [ 17 ] - ( xx [ 47 ] * ( xx [ 183 ] * xx [ 40 ] - xx [
182 ] * xx [ 23 ] ) + xx [ 171 ] - xx [ 47 ] * ( xx [ 177 ] + xx [ 14 ] * xx
[ 101 ] ) ) + xx [ 58 ] ) ; ii [ 0 ] = 201 ; { int ll ; for ( ll = 202 ; ll <
216 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ]
-= 201 ; xx [ 3 ] = xx [ 201 + ( ii [ 0 ] ) ] ; xx [ 6 ] = 1.0e-9 ; if ( xx [
3 ] > xx [ 6 ] ) { switch ( ii [ 0 ] ) { case 0 : case 1 : case 2 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 10' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 11' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 6 : case 7 : case 8 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 12' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : case 10 : case 11 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 8' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 12 : case 13 : case 14 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 9' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 3 ] = xx [ 1 ] * xx [ 401 ] ; xx [ 11 ] = cos ( xx
[ 3 ] ) ; xx [ 12 ] = xx [ 0 ] * xx [ 11 ] ; xx [ 13 ] = sin ( xx [ 3 ] ) ;
xx [ 3 ] = xx [ 5 ] * xx [ 13 ] ; xx [ 14 ] = xx [ 8 ] * xx [ 13 ] ; xx [ 13
] = xx [ 0 ] * xx [ 3 ] + xx [ 7 ] * xx [ 14 ] ; xx [ 15 ] = xx [ 7 ] * xx [
11 ] ; xx [ 11 ] = xx [ 7 ] * xx [ 3 ] - xx [ 0 ] * xx [ 14 ] ; xx [ 19 ] = -
xx [ 12 ] ; xx [ 20 ] = xx [ 13 ] ; xx [ 21 ] = xx [ 15 ] ; xx [ 22 ] = xx [
11 ] ; xx [ 0 ] = xx [ 2 ] * xx [ 405 ] + xx [ 16 ] * xx [ 403 ] ; xx [ 3 ] =
xx [ 2 ] * xx [ 406 ] - xx [ 16 ] * xx [ 404 ] ; xx [ 7 ] = - xx [ 3 ] ; xx [
14 ] = xx [ 2 ] * xx [ 403 ] - xx [ 16 ] * xx [ 405 ] ; xx [ 17 ] = - xx [ 14
] ; xx [ 23 ] = xx [ 2 ] * xx [ 404 ] + xx [ 16 ] * xx [ 406 ] ; xx [ 25 ] =
xx [ 0 ] ; xx [ 26 ] = xx [ 7 ] ; xx [ 27 ] = xx [ 17 ] ; xx [ 28 ] = xx [ 23
] ; xx [ 31 ] = xx [ 29 ] * xx [ 413 ] - xx [ 32 ] * xx [ 410 ] ; xx [ 33 ] =
xx [ 29 ] * xx [ 412 ] + xx [ 32 ] * xx [ 411 ] ; xx [ 34 ] = - xx [ 33 ] ;
xx [ 35 ] = xx [ 32 ] * xx [ 412 ] - xx [ 29 ] * xx [ 411 ] ; xx [ 36 ] = -
xx [ 35 ] ; xx [ 38 ] = xx [ 29 ] * xx [ 410 ] + xx [ 32 ] * xx [ 413 ] ; xx
[ 39 ] = - xx [ 38 ] ; xx [ 51 ] = xx [ 31 ] ; xx [ 52 ] = xx [ 34 ] ; xx [
53 ] = xx [ 36 ] ; xx [ 54 ] = xx [ 39 ] ; pm_math_Quaternion_compose_ra ( xx
+ 25 , xx + 51 , xx + 57 ) ; pm_math_Quaternion_compose_ra ( xx + 19 , xx +
57 , xx + 61 ) ; xx [ 40 ] = xx [ 5 ] * xx [ 60 ] + xx [ 8 ] * xx [ 58 ] ; xx
[ 42 ] = xx [ 5 ] * xx [ 59 ] ; xx [ 68 ] = xx [ 8 ] * xx [ 59 ] ; xx [ 69 ]
= - xx [ 40 ] ; xx [ 70 ] = xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 58 ,
xx + 68 , xx + 73 ) ; xx [ 43 ] = xx [ 8 ] + ( xx [ 75 ] - xx [ 57 ] * xx [
42 ] ) * xx [ 47 ] ; xx [ 42 ] = xx [ 47 ] * ( xx [ 73 ] - xx [ 8 ] * xx [ 57
] * xx [ 59 ] ) - xx [ 5 ] ; xx [ 49 ] = xx [ 74 ] + xx [ 57 ] * xx [ 40 ] ;
xx [ 57 ] = - ( xx [ 43 ] * xx [ 55 ] ) ; xx [ 58 ] = - ( xx [ 43 ] * xx [ 56
] ) ; xx [ 59 ] = xx [ 42 ] * xx [ 55 ] + xx [ 48 ] * xx [ 49 ] ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 57 , xx + 68 ) ; xx [ 57 ] = xx
[ 34 ] ; xx [ 58 ] = xx [ 36 ] ; xx [ 59 ] = xx [ 39 ] ; xx [ 34 ] = xx [ 37
] * xx [ 38 ] ; xx [ 36 ] = xx [ 41 ] * xx [ 38 ] ; xx [ 39 ] = xx [ 37 ] *
xx [ 33 ] - xx [ 35 ] * xx [ 41 ] ; xx [ 73 ] = - xx [ 34 ] ; xx [ 74 ] = xx
[ 36 ] ; xx [ 75 ] = xx [ 39 ] ; pm_math_Vector3_cross_ra ( xx + 57 , xx + 73
, xx + 77 ) ; xx [ 40 ] = xx [ 34 ] * xx [ 31 ] ; xx [ 60 ] = xx [ 46 ] + xx
[ 47 ] * ( xx [ 77 ] - xx [ 40 ] ) - xx [ 41 ] ; xx [ 65 ] = xx [ 36 ] * xx [
31 ] ; xx [ 66 ] = ( xx [ 65 ] + xx [ 78 ] ) * xx [ 47 ] - xx [ 37 ] ; xx [
71 ] = ( xx [ 39 ] * xx [ 31 ] + xx [ 79 ] ) * xx [ 47 ] ; xx [ 73 ] = xx [
60 ] ; xx [ 74 ] = xx [ 66 ] ; xx [ 75 ] = xx [ 71 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 73 , xx + 77 ) ; xx [ 39 ] = xx
[ 46 ] * xx [ 23 ] ; xx [ 81 ] = xx [ 39 ] * xx [ 0 ] ; xx [ 82 ] = xx [ 14 ]
* xx [ 46 ] ; xx [ 83 ] = ( xx [ 81 ] + xx [ 3 ] * xx [ 82 ] ) * xx [ 47 ] ;
xx [ 84 ] = xx [ 78 ] + xx [ 83 ] ; xx [ 85 ] = xx [ 14 ] * xx [ 82 ] ; xx [
87 ] = xx [ 39 ] * xx [ 23 ] ; xx [ 88 ] = xx [ 10 ] - ( xx [ 85 ] + xx [ 87
] ) * xx [ 47 ] ; xx [ 78 ] = xx [ 82 ] * xx [ 0 ] ; xx [ 89 ] = xx [ 86 ] +
xx [ 47 ] * ( xx [ 78 ] - xx [ 3 ] * xx [ 39 ] ) ; xx [ 93 ] = - ( xx [ 84 ]
* xx [ 8 ] ) ; xx [ 94 ] = ( xx [ 77 ] + xx [ 88 ] ) * xx [ 8 ] + ( xx [ 79 ]
+ xx [ 89 ] ) * xx [ 5 ] ; xx [ 95 ] = - ( xx [ 84 ] * xx [ 5 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 93 , xx + 96 ) ; xx [ 77 ] = xx
[ 13 ] * xx [ 76 ] ; xx [ 79 ] = xx [ 76 ] * xx [ 11 ] ; xx [ 84 ] = xx [ 77
] * xx [ 15 ] + xx [ 79 ] * xx [ 12 ] ; xx [ 90 ] = xx [ 47 ] * xx [ 84 ] ;
xx [ 93 ] = xx [ 96 ] + xx [ 90 ] ; pm_math_Quaternion_compose_ra ( xx + 19 ,
xx + 25 , xx + 99 ) ; pm_math_Quaternion_compose_ra ( xx + 99 , xx + 51 , xx
+ 25 ) ; xx [ 94 ] = xx [ 38 ] * xx [ 33 ] ; xx [ 95 ] = xx [ 35 ] * xx [ 31
] ; xx [ 103 ] = xx [ 47 ] * ( xx [ 94 ] - xx [ 95 ] ) ; xx [ 104 ] = xx [ 35
] * xx [ 35 ] ; xx [ 105 ] = xx [ 38 ] * xx [ 38 ] ; xx [ 106 ] = xx [ 45 ] -
( xx [ 104 ] + xx [ 105 ] ) * xx [ 47 ] ; xx [ 107 ] = xx [ 38 ] * xx [ 31 ]
; xx [ 108 ] = xx [ 35 ] * xx [ 33 ] ; xx [ 109 ] = xx [ 107 ] + xx [ 108 ] ;
xx [ 113 ] = - ( xx [ 55 ] * xx [ 103 ] ) ; xx [ 114 ] = - ( xx [ 56 ] * xx [
103 ] ) ; xx [ 115 ] = xx [ 55 ] * xx [ 106 ] + xx [ 109 ] * xx [ 48 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 113 , xx + 116 ) ; xx [ 111 ] =
xx [ 71 ] * xx [ 23 ] ; xx [ 113 ] = xx [ 66 ] * xx [ 14 ] ; xx [ 114 ] = xx
[ 111 ] - xx [ 113 ] ; xx [ 119 ] = xx [ 7 ] ; xx [ 120 ] = xx [ 17 ] ; xx [
121 ] = xx [ 23 ] ; xx [ 7 ] = xx [ 66 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 3 ] *
xx [ 71 ] ; xx [ 122 ] = xx [ 114 ] ; xx [ 123 ] = xx [ 7 ] ; xx [ 124 ] = xx
[ 17 ] ; pm_math_Vector3_cross_ra ( xx + 119 , xx + 122 , xx + 125 ) ; xx [
122 ] = ( xx [ 0 ] * xx [ 114 ] + xx [ 125 ] ) * xx [ 47 ] ; xx [ 123 ] = (
xx [ 7 ] * xx [ 0 ] + xx [ 126 ] ) * xx [ 47 ] - xx [ 71 ] ; xx [ 124 ] = xx
[ 66 ] + ( xx [ 17 ] * xx [ 0 ] + xx [ 127 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 122 , xx + 125 ) ; xx [ 7 ] = xx
[ 33 ] * xx [ 31 ] ; xx [ 17 ] = xx [ 35 ] * xx [ 38 ] ; xx [ 114 ] = ( xx [
7 ] + xx [ 17 ] ) * xx [ 47 ] ; xx [ 115 ] = xx [ 108 ] - xx [ 107 ] ; xx [
107 ] = xx [ 33 ] * xx [ 33 ] ; xx [ 108 ] = xx [ 45 ] - ( xx [ 105 ] + xx [
107 ] ) * xx [ 47 ] ; xx [ 122 ] = - ( xx [ 55 ] * xx [ 114 ] ) ; xx [ 123 ]
= - ( xx [ 56 ] * xx [ 114 ] ) ; xx [ 124 ] = xx [ 110 ] * xx [ 115 ] + xx [
56 ] * xx [ 108 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 122 , xx +
128 ) ; xx [ 105 ] = xx [ 60 ] * xx [ 14 ] ; xx [ 122 ] = xx [ 60 ] * xx [ 3
] ; xx [ 123 ] = xx [ 111 ] - xx [ 122 ] ; xx [ 111 ] = xx [ 14 ] * xx [ 71 ]
; xx [ 131 ] = xx [ 105 ] ; xx [ 132 ] = xx [ 123 ] ; xx [ 133 ] = xx [ 111 ]
; pm_math_Vector3_cross_ra ( xx + 119 , xx + 131 , xx + 134 ) ; xx [ 124 ] =
xx [ 3 ] * xx [ 46 ] ; xx [ 131 ] = xx [ 124 ] * xx [ 0 ] ; xx [ 132 ] = xx [
3 ] * xx [ 124 ] ; xx [ 137 ] = xx [ 71 ] + ( xx [ 105 ] * xx [ 0 ] + xx [
134 ] ) * xx [ 47 ] + ( xx [ 78 ] + xx [ 124 ] * xx [ 23 ] ) * xx [ 47 ] ; xx
[ 138 ] = ( xx [ 0 ] * xx [ 123 ] + xx [ 135 ] ) * xx [ 47 ] + xx [ 47 ] * (
xx [ 82 ] * xx [ 23 ] - xx [ 131 ] ) ; xx [ 139 ] = ( xx [ 111 ] * xx [ 0 ] +
xx [ 136 ] ) * xx [ 47 ] - ( xx [ 60 ] - ( xx [ 132 ] + xx [ 85 ] ) * xx [ 47
] ) - xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 137 , xx + 133
) ; xx [ 71 ] = xx [ 45 ] - ( xx [ 107 ] + xx [ 104 ] ) * xx [ 47 ] ; xx [ 45
] = xx [ 95 ] + xx [ 94 ] ; xx [ 78 ] = xx [ 17 ] - xx [ 7 ] ; xx [ 136 ] = -
( xx [ 55 ] * xx [ 71 ] ) ; xx [ 137 ] = - ( xx [ 56 ] * xx [ 71 ] ) ; xx [
138 ] = xx [ 45 ] * xx [ 110 ] + xx [ 48 ] * xx [ 78 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 136 , xx + 139 ) ; xx [ 7 ] = xx
[ 60 ] * xx [ 23 ] ; xx [ 17 ] = xx [ 66 ] * xx [ 23 ] ; xx [ 48 ] = xx [ 122
] + xx [ 113 ] ; xx [ 136 ] = - xx [ 7 ] ; xx [ 137 ] = - xx [ 17 ] ; xx [
138 ] = - xx [ 48 ] ; pm_math_Vector3_cross_ra ( xx + 119 , xx + 136 , xx +
142 ) ; xx [ 136 ] = xx [ 47 ] * ( xx [ 142 ] - xx [ 7 ] * xx [ 0 ] ) - xx [
66 ] + xx [ 47 ] * ( xx [ 14 ] * xx [ 124 ] - xx [ 81 ] ) ; xx [ 137 ] = xx [
60 ] + xx [ 47 ] * ( xx [ 143 ] - xx [ 17 ] * xx [ 0 ] ) - ( xx [ 87 ] + xx [
132 ] ) * xx [ 47 ] + xx [ 46 ] ; xx [ 138 ] = xx [ 47 ] * ( xx [ 144 ] - xx
[ 48 ] * xx [ 0 ] ) - ( xx [ 131 ] + xx [ 14 ] * xx [ 39 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 136 , xx + 122 ) ; xx [ 7 ] = xx
[ 35 ] * xx [ 18 ] ; xx [ 17 ] = xx [ 18 ] * xx [ 33 ] ; xx [ 136 ] = xx [ 47
] * ( xx [ 7 ] * xx [ 31 ] - xx [ 17 ] * xx [ 38 ] ) ; xx [ 137 ] = - ( ( xx
[ 17 ] * xx [ 31 ] + xx [ 7 ] * xx [ 38 ] ) * xx [ 47 ] ) ; xx [ 138 ] = ( xx
[ 17 ] * xx [ 33 ] + xx [ 35 ] * xx [ 7 ] ) * xx [ 47 ] - xx [ 18 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 136 , xx + 142 ) ; xx [ 7 ] = xx
[ 24 ] * xx [ 27 ] ; xx [ 17 ] = xx [ 24 ] * xx [ 26 ] ; xx [ 18 ] = xx [ 67
] * xx [ 27 ] ; xx [ 39 ] = xx [ 67 ] * xx [ 26 ] ; xx [ 48 ] = xx [ 72 ] *
xx [ 33 ] ; xx [ 60 ] = xx [ 35 ] * xx [ 72 ] ; xx [ 136 ] = xx [ 47 ] * ( xx
[ 48 ] * xx [ 38 ] - xx [ 60 ] * xx [ 31 ] ) ; xx [ 137 ] = ( xx [ 48 ] * xx
[ 31 ] + xx [ 60 ] * xx [ 38 ] ) * xx [ 47 ] ; xx [ 138 ] = xx [ 72 ] - ( xx
[ 48 ] * xx [ 33 ] + xx [ 35 ] * xx [ 60 ] ) * xx [ 47 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 136 , xx + 145 ) ; xx [ 38 ] =
xx [ 56 ] * xx [ 28 ] ; xx [ 48 ] = xx [ 55 ] * xx [ 27 ] - xx [ 56 ] * xx [
26 ] ; xx [ 136 ] = xx [ 38 ] ; xx [ 137 ] = - ( xx [ 55 ] * xx [ 28 ] ) ; xx
[ 138 ] = xx [ 48 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 136 , xx +
148 ) ; xx [ 60 ] = xx [ 41 ] * xx [ 33 ] + xx [ 35 ] * xx [ 37 ] ; xx [ 136
] = - xx [ 36 ] ; xx [ 137 ] = - xx [ 34 ] ; xx [ 138 ] = xx [ 60 ] ;
pm_math_Vector3_cross_ra ( xx + 57 , xx + 136 , xx + 33 ) ; xx [ 57 ] = xx [
37 ] + xx [ 47 ] * ( xx [ 33 ] - xx [ 65 ] ) ; xx [ 58 ] = ( xx [ 34 ] - xx [
40 ] ) * xx [ 47 ] - xx [ 41 ] ; xx [ 59 ] = ( xx [ 60 ] * xx [ 31 ] + xx [
35 ] ) * xx [ 47 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 57 , xx +
33 ) ; xx [ 31 ] = xx [ 1 ] * xx [ 435 ] ; xx [ 36 ] = cos ( xx [ 31 ] ) ; xx
[ 40 ] = xx [ 2 ] * xx [ 36 ] ; xx [ 57 ] = sin ( xx [ 31 ] ) ; xx [ 31 ] =
xx [ 5 ] * xx [ 57 ] ; xx [ 58 ] = xx [ 8 ] * xx [ 57 ] ; xx [ 57 ] = xx [ 2
] * xx [ 31 ] + xx [ 16 ] * xx [ 58 ] ; xx [ 59 ] = xx [ 16 ] * xx [ 36 ] ;
xx [ 36 ] = xx [ 16 ] * xx [ 31 ] - xx [ 2 ] * xx [ 58 ] ; xx [ 151 ] = - xx
[ 40 ] ; xx [ 152 ] = - xx [ 57 ] ; xx [ 153 ] = - xx [ 59 ] ; xx [ 154 ] =
xx [ 36 ] ; xx [ 31 ] = xx [ 16 ] * xx [ 437 ] - xx [ 2 ] * xx [ 439 ] ; xx [
58 ] = xx [ 16 ] * xx [ 438 ] + xx [ 2 ] * xx [ 440 ] ; xx [ 60 ] = xx [ 16 ]
* xx [ 439 ] + xx [ 2 ] * xx [ 437 ] ; xx [ 65 ] = xx [ 16 ] * xx [ 440 ] -
xx [ 2 ] * xx [ 438 ] ; xx [ 155 ] = xx [ 31 ] ; xx [ 156 ] = xx [ 58 ] ; xx
[ 157 ] = xx [ 60 ] ; xx [ 158 ] = xx [ 65 ] ; pm_math_Quaternion_compose_ra
( xx + 151 , xx + 155 , xx + 169 ) ; xx [ 136 ] = xx [ 58 ] ; xx [ 137 ] = xx
[ 60 ] ; xx [ 138 ] = xx [ 65 ] ; xx [ 66 ] = xx [ 5 ] * xx [ 65 ] - xx [ 58
] * xx [ 8 ] ; xx [ 72 ] = xx [ 60 ] * xx [ 5 ] ; xx [ 155 ] = xx [ 60 ] * xx
[ 8 ] ; xx [ 156 ] = xx [ 66 ] ; xx [ 157 ] = - xx [ 72 ] ;
pm_math_Vector3_cross_ra ( xx + 136 , xx + 155 , xx + 158 ) ; xx [ 81 ] = xx
[ 112 ] * ( xx [ 159 ] - xx [ 66 ] * xx [ 31 ] ) ; xx [ 66 ] = ( xx [ 8 ] +
xx [ 47 ] * ( xx [ 160 ] + xx [ 72 ] * xx [ 31 ] ) ) * xx [ 46 ] ; xx [ 72 ]
= xx [ 171 ] * xx [ 81 ] + xx [ 172 ] * xx [ 66 ] ; xx [ 82 ] = xx [ 170 ] *
xx [ 81 ] ; xx [ 85 ] = xx [ 170 ] * xx [ 66 ] ; xx [ 155 ] = - xx [ 72 ] ;
xx [ 156 ] = xx [ 82 ] ; xx [ 157 ] = xx [ 85 ] ; pm_math_Vector3_cross_ra (
xx + 170 , xx + 155 , xx + 158 ) ; xx [ 87 ] = xx [ 46 ] * xx [ 65 ] ; xx [
94 ] = xx [ 87 ] * xx [ 31 ] ; xx [ 95 ] = xx [ 60 ] * xx [ 46 ] ; xx [ 104 ]
= ( xx [ 94 ] + xx [ 58 ] * xx [ 95 ] ) * xx [ 47 ] ; xx [ 105 ] = xx [ 60 ]
* xx [ 95 ] ; xx [ 107 ] = xx [ 87 ] * xx [ 65 ] ; xx [ 110 ] = xx [ 10 ] - (
xx [ 105 ] + xx [ 107 ] ) * xx [ 47 ] ; xx [ 111 ] = xx [ 95 ] * xx [ 31 ] ;
xx [ 113 ] = xx [ 47 ] * ( xx [ 58 ] * xx [ 87 ] - xx [ 111 ] ) - xx [ 86 ] ;
xx [ 155 ] = - ( xx [ 8 ] * xx [ 104 ] ) ; xx [ 156 ] = xx [ 8 ] * xx [ 110 ]
- xx [ 113 ] * xx [ 5 ] ; xx [ 157 ] = xx [ 5 ] * xx [ 104 ] ;
pm_math_Quaternion_xform_ra ( xx + 151 , xx + 155 , xx + 162 ) ; xx [ 131 ] =
xx [ 57 ] * xx [ 76 ] ; xx [ 132 ] = xx [ 76 ] * xx [ 36 ] ; xx [ 155 ] = xx
[ 131 ] * xx [ 59 ] + xx [ 132 ] * xx [ 40 ] ; xx [ 156 ] = xx [ 47 ] * xx [
155 ] ; xx [ 157 ] = xx [ 58 ] * xx [ 46 ] ; xx [ 166 ] = xx [ 157 ] * xx [
31 ] ; xx [ 167 ] = xx [ 58 ] * xx [ 157 ] ; xx [ 173 ] = - ( ( xx [ 111 ] +
xx [ 157 ] * xx [ 65 ] ) * xx [ 47 ] ) ; xx [ 174 ] = xx [ 47 ] * ( xx [ 166
] - xx [ 95 ] * xx [ 65 ] ) ; xx [ 175 ] = ( xx [ 167 ] + xx [ 105 ] ) * xx [
47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 151 , xx + 173 , xx +
176 ) ; xx [ 95 ] = xx [ 46 ] * xx [ 171 ] ; xx [ 105 ] = xx [ 46 ] * xx [
170 ] ; xx [ 111 ] = xx [ 46 ] * xx [ 172 ] ; xx [ 173 ] = xx [ 47 ] * ( xx [
60 ] * xx [ 157 ] - xx [ 94 ] ) ; xx [ 174 ] = xx [ 46 ] - ( xx [ 107 ] + xx
[ 167 ] ) * xx [ 47 ] ; xx [ 175 ] = ( xx [ 166 ] + xx [ 60 ] * xx [ 87 ] ) *
xx [ 47 ] ; pm_math_Quaternion_xform_ra ( xx + 151 , xx + 173 , xx + 179 ) ;
xx [ 87 ] = ( xx [ 79 ] * xx [ 11 ] + xx [ 13 ] * xx [ 77 ] ) * xx [ 47 ] ;
xx [ 11 ] = xx [ 97 ] - xx [ 87 ] ; xx [ 13 ] = xx [ 25 ] * xx [ 28 ] ; xx [
94 ] = ( xx [ 132 ] * xx [ 36 ] + xx [ 57 ] * xx [ 131 ] ) * xx [ 47 ] ; xx [
36 ] = xx [ 169 ] * xx [ 105 ] ; xx [ 57 ] = xx [ 170 ] * xx [ 105 ] ; xx [
96 ] = xx [ 79 ] * xx [ 15 ] - xx [ 77 ] * xx [ 12 ] ; xx [ 12 ] = xx [ 96 ]
* xx [ 47 ] ; xx [ 15 ] = xx [ 98 ] + xx [ 12 ] ; xx [ 77 ] = xx [ 131 ] * xx
[ 40 ] - xx [ 132 ] * xx [ 59 ] ; xx [ 40 ] = xx [ 77 ] * xx [ 47 ] ; xx [
173 ] = xx [ 43 ] * xx [ 80 ] ; xx [ 174 ] = - ( xx [ 43 ] * xx [ 91 ] ) ; xx
[ 175 ] = xx [ 92 ] * xx [ 49 ] - xx [ 42 ] * xx [ 80 ] ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 173 , xx + 182 ) ; xx [ 173 ] =
xx [ 80 ] * xx [ 103 ] ; xx [ 174 ] = - ( xx [ 91 ] * xx [ 103 ] ) ; xx [ 175
] = xx [ 109 ] * xx [ 92 ] - xx [ 80 ] * xx [ 106 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 173 , xx + 185 ) ; xx [ 173 ] =
xx [ 80 ] * xx [ 114 ] ; xx [ 174 ] = - ( xx [ 91 ] * xx [ 114 ] ) ; xx [ 175
] = xx [ 91 ] * xx [ 108 ] - xx [ 161 ] * xx [ 115 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 173 , xx + 188 ) ; xx [ 173 ] =
xx [ 80 ] * xx [ 71 ] ; xx [ 174 ] = - ( xx [ 91 ] * xx [ 71 ] ) ; xx [ 175 ]
= xx [ 92 ] * xx [ 78 ] - xx [ 45 ] * xx [ 161 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 173 , xx + 193 ) ; xx [ 59 ] =
xx [ 165 ] * xx [ 27 ] ; xx [ 79 ] = xx [ 165 ] * xx [ 26 ] ; xx [ 92 ] = xx
[ 168 ] * xx [ 27 ] ; xx [ 97 ] = xx [ 168 ] * xx [ 26 ] ; xx [ 98 ] = xx [
91 ] * xx [ 28 ] ; xx [ 107 ] = xx [ 91 ] * xx [ 26 ] + xx [ 80 ] * xx [ 27 ]
; xx [ 173 ] = xx [ 98 ] ; xx [ 174 ] = xx [ 80 ] * xx [ 28 ] ; xx [ 175 ] =
- xx [ 107 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 173 , xx + 196 ) ;
xx [ 131 ] = xx [ 1 ] * xx [ 444 ] ; xx [ 132 ] = cos ( xx [ 131 ] ) ; xx [
157 ] = xx [ 192 ] * xx [ 132 ] ; xx [ 161 ] = sin ( xx [ 131 ] ) ; xx [ 131
] = xx [ 5 ] * xx [ 161 ] ; xx [ 166 ] = xx [ 8 ] * xx [ 161 ] ; xx [ 161 ] =
xx [ 192 ] * xx [ 131 ] - xx [ 200 ] * xx [ 166 ] ; xx [ 167 ] = xx [ 200 ] *
xx [ 132 ] ; xx [ 132 ] = xx [ 192 ] * xx [ 166 ] + xx [ 200 ] * xx [ 131 ] ;
xx [ 199 ] = - xx [ 157 ] ; xx [ 200 ] = xx [ 161 ] ; xx [ 201 ] = - xx [ 167
] ; xx [ 202 ] = - xx [ 132 ] ; xx [ 131 ] = xx [ 2 ] * xx [ 448 ] + xx [ 16
] * xx [ 446 ] ; xx [ 166 ] = xx [ 2 ] * xx [ 449 ] - xx [ 16 ] * xx [ 447 ]
; xx [ 173 ] = - xx [ 166 ] ; xx [ 174 ] = xx [ 2 ] * xx [ 446 ] - xx [ 16 ]
* xx [ 448 ] ; xx [ 175 ] = - xx [ 174 ] ; xx [ 191 ] = xx [ 2 ] * xx [ 447 ]
+ xx [ 16 ] * xx [ 449 ] ; xx [ 203 ] = xx [ 131 ] ; xx [ 204 ] = xx [ 173 ]
; xx [ 205 ] = xx [ 175 ] ; xx [ 206 ] = xx [ 191 ] ;
pm_math_Quaternion_compose_ra ( xx + 199 , xx + 203 , xx + 207 ) ; xx [ 203 ]
= xx [ 173 ] ; xx [ 204 ] = xx [ 175 ] ; xx [ 205 ] = xx [ 191 ] ; xx [ 173 ]
= xx [ 166 ] * xx [ 8 ] - xx [ 5 ] * xx [ 191 ] ; xx [ 175 ] = xx [ 174 ] *
xx [ 5 ] ; xx [ 211 ] = - ( xx [ 174 ] * xx [ 8 ] ) ; xx [ 212 ] = xx [ 173 ]
; xx [ 213 ] = - xx [ 175 ] ; pm_math_Vector3_cross_ra ( xx + 203 , xx + 211
, xx + 214 ) ; xx [ 192 ] = xx [ 112 ] * ( xx [ 215 ] - xx [ 173 ] * xx [ 131
] ) ; xx [ 173 ] = ( xx [ 8 ] + xx [ 47 ] * ( xx [ 216 ] + xx [ 175 ] * xx [
131 ] ) ) * xx [ 46 ] ; xx [ 175 ] = xx [ 209 ] * xx [ 192 ] + xx [ 210 ] *
xx [ 173 ] ; xx [ 206 ] = xx [ 208 ] * xx [ 192 ] ; xx [ 211 ] = xx [ 208 ] *
xx [ 173 ] ; xx [ 212 ] = - xx [ 175 ] ; xx [ 213 ] = xx [ 206 ] ; xx [ 214 ]
= xx [ 211 ] ; pm_math_Vector3_cross_ra ( xx + 208 , xx + 212 , xx + 215 ) ;
xx [ 212 ] = xx [ 46 ] * xx [ 191 ] ; xx [ 213 ] = xx [ 212 ] * xx [ 131 ] ;
xx [ 214 ] = xx [ 174 ] * xx [ 46 ] ; xx [ 218 ] = ( xx [ 213 ] + xx [ 166 ]
* xx [ 214 ] ) * xx [ 47 ] ; xx [ 219 ] = xx [ 174 ] * xx [ 214 ] ; xx [ 220
] = xx [ 212 ] * xx [ 191 ] ; xx [ 221 ] = xx [ 10 ] - ( xx [ 219 ] + xx [
220 ] ) * xx [ 47 ] ; xx [ 222 ] = xx [ 214 ] * xx [ 131 ] ; xx [ 223 ] = xx
[ 86 ] + xx [ 47 ] * ( xx [ 222 ] - xx [ 166 ] * xx [ 212 ] ) ; xx [ 224 ] =
- ( xx [ 8 ] * xx [ 218 ] ) ; xx [ 225 ] = xx [ 8 ] * xx [ 221 ] + xx [ 223 ]
* xx [ 5 ] ; xx [ 226 ] = - ( xx [ 5 ] * xx [ 218 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 199 , xx + 224 , xx + 227 ) ; xx [ 224 ] =
xx [ 161 ] * xx [ 76 ] ; xx [ 225 ] = xx [ 76 ] * xx [ 132 ] ; xx [ 226 ] =
xx [ 224 ] * xx [ 167 ] + xx [ 225 ] * xx [ 157 ] ; xx [ 230 ] = xx [ 47 ] *
xx [ 226 ] ; xx [ 231 ] = xx [ 166 ] * xx [ 46 ] ; xx [ 233 ] = xx [ 231 ] *
xx [ 131 ] ; xx [ 234 ] = xx [ 166 ] * xx [ 231 ] ; xx [ 235 ] = ( xx [ 222 ]
+ xx [ 231 ] * xx [ 191 ] ) * xx [ 47 ] ; xx [ 236 ] = xx [ 47 ] * ( xx [ 214
] * xx [ 191 ] - xx [ 233 ] ) ; xx [ 237 ] = ( xx [ 234 ] + xx [ 219 ] ) * xx
[ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 199 , xx + 235 , xx +
239 ) ; xx [ 214 ] = xx [ 46 ] * xx [ 209 ] ; xx [ 219 ] = xx [ 46 ] * xx [
208 ] ; xx [ 222 ] = xx [ 46 ] * xx [ 210 ] ; xx [ 235 ] = xx [ 47 ] * ( xx [
174 ] * xx [ 231 ] - xx [ 213 ] ) ; xx [ 236 ] = xx [ 46 ] - ( xx [ 220 ] +
xx [ 234 ] ) * xx [ 47 ] ; xx [ 237 ] = - ( ( xx [ 233 ] + xx [ 174 ] * xx [
212 ] ) * xx [ 47 ] ) ; pm_math_Quaternion_xform_ra ( xx + 199 , xx + 235 ,
xx + 245 ) ; xx [ 212 ] = ( xx [ 225 ] * xx [ 132 ] + xx [ 161 ] * xx [ 224 ]
) * xx [ 47 ] ; xx [ 132 ] = xx [ 207 ] * xx [ 219 ] ; xx [ 161 ] = xx [ 208
] * xx [ 219 ] ; xx [ 213 ] = xx [ 225 ] * xx [ 167 ] - xx [ 224 ] * xx [ 157
] ; xx [ 157 ] = xx [ 213 ] * xx [ 47 ] ; xx [ 233 ] = xx [ 43 ] * xx [ 232 ]
; xx [ 234 ] = xx [ 43 ] * xx [ 238 ] ; xx [ 235 ] = - ( xx [ 42 ] * xx [ 232
] + xx [ 242 ] * xx [ 49 ] ) ; pm_math_Quaternion_xform_ra ( xx + 61 , xx +
233 , xx + 248 ) ; xx [ 233 ] = xx [ 232 ] * xx [ 103 ] ; xx [ 234 ] = xx [
238 ] * xx [ 103 ] ; xx [ 235 ] = - ( xx [ 232 ] * xx [ 106 ] + xx [ 109 ] *
xx [ 242 ] ) ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 233 , xx + 251 )
; xx [ 233 ] = xx [ 232 ] * xx [ 114 ] ; xx [ 234 ] = xx [ 238 ] * xx [ 114 ]
; xx [ 235 ] = - ( xx [ 243 ] * xx [ 115 ] + xx [ 238 ] * xx [ 108 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 233 , xx + 254 ) ; xx [ 233 ] =
xx [ 232 ] * xx [ 71 ] ; xx [ 234 ] = xx [ 238 ] * xx [ 71 ] ; xx [ 235 ] = -
( xx [ 45 ] * xx [ 243 ] + xx [ 242 ] * xx [ 78 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 233 , xx + 260 ) ; xx [ 167 ] =
xx [ 244 ] * xx [ 27 ] ; xx [ 220 ] = xx [ 244 ] * xx [ 26 ] ; xx [ 224 ] =
xx [ 259 ] * xx [ 27 ] ; xx [ 225 ] = xx [ 259 ] * xx [ 26 ] ; xx [ 231 ] =
xx [ 238 ] * xx [ 28 ] ; xx [ 233 ] = xx [ 238 ] * xx [ 26 ] - xx [ 232 ] *
xx [ 27 ] ; xx [ 234 ] = - xx [ 231 ] ; xx [ 235 ] = xx [ 232 ] * xx [ 28 ] ;
xx [ 236 ] = xx [ 233 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 234 , xx
+ 263 ) ; xx [ 234 ] = xx [ 1 ] * xx [ 453 ] ; xx [ 235 ] = cos ( xx [ 234 ]
) ; xx [ 236 ] = xx [ 271 ] * xx [ 235 ] ; xx [ 237 ] = sin ( xx [ 234 ] ) ;
xx [ 234 ] = xx [ 5 ] * xx [ 237 ] ; xx [ 242 ] = xx [ 8 ] * xx [ 237 ] ; xx
[ 237 ] = xx [ 271 ] * xx [ 234 ] - xx [ 279 ] * xx [ 242 ] ; xx [ 243 ] = xx
[ 279 ] * xx [ 235 ] ; xx [ 235 ] = xx [ 271 ] * xx [ 242 ] + xx [ 279 ] * xx
[ 234 ] ; xx [ 266 ] = xx [ 236 ] ; xx [ 267 ] = xx [ 237 ] ; xx [ 268 ] = -
xx [ 243 ] ; xx [ 269 ] = xx [ 235 ] ; xx [ 234 ] = xx [ 16 ] * xx [ 455 ] -
xx [ 2 ] * xx [ 457 ] ; xx [ 242 ] = xx [ 16 ] * xx [ 456 ] + xx [ 2 ] * xx [
458 ] ; xx [ 257 ] = xx [ 16 ] * xx [ 457 ] + xx [ 2 ] * xx [ 455 ] ; xx [
258 ] = xx [ 16 ] * xx [ 458 ] - xx [ 2 ] * xx [ 456 ] ; xx [ 270 ] = xx [
234 ] ; xx [ 271 ] = xx [ 242 ] ; xx [ 272 ] = xx [ 257 ] ; xx [ 273 ] = xx [
258 ] ; pm_math_Quaternion_compose_ra ( xx + 266 , xx + 270 , xx + 274 ) ; xx
[ 270 ] = xx [ 242 ] ; xx [ 271 ] = xx [ 257 ] ; xx [ 272 ] = xx [ 258 ] ; xx
[ 273 ] = xx [ 5 ] * xx [ 258 ] - xx [ 242 ] * xx [ 8 ] ; xx [ 278 ] = xx [
257 ] * xx [ 5 ] ; xx [ 279 ] = xx [ 257 ] * xx [ 8 ] ; xx [ 280 ] = xx [ 273
] ; xx [ 281 ] = - xx [ 278 ] ; pm_math_Vector3_cross_ra ( xx + 270 , xx +
279 , xx + 282 ) ; xx [ 279 ] = xx [ 112 ] * ( xx [ 283 ] - xx [ 273 ] * xx [
234 ] ) ; xx [ 273 ] = ( xx [ 8 ] + xx [ 47 ] * ( xx [ 284 ] + xx [ 278 ] *
xx [ 234 ] ) ) * xx [ 46 ] ; xx [ 278 ] = xx [ 276 ] * xx [ 279 ] + xx [ 277
] * xx [ 273 ] ; xx [ 280 ] = xx [ 275 ] * xx [ 279 ] ; xx [ 281 ] = xx [ 275
] * xx [ 273 ] ; xx [ 282 ] = - xx [ 278 ] ; xx [ 283 ] = xx [ 280 ] ; xx [
284 ] = xx [ 281 ] ; pm_math_Vector3_cross_ra ( xx + 275 , xx + 282 , xx +
285 ) ; xx [ 282 ] = xx [ 46 ] * xx [ 258 ] ; xx [ 283 ] = xx [ 282 ] * xx [
234 ] ; xx [ 284 ] = xx [ 257 ] * xx [ 46 ] ; xx [ 288 ] = ( xx [ 283 ] + xx
[ 242 ] * xx [ 284 ] ) * xx [ 47 ] ; xx [ 289 ] = xx [ 257 ] * xx [ 284 ] ;
xx [ 290 ] = xx [ 282 ] * xx [ 258 ] ; xx [ 291 ] = xx [ 10 ] - ( xx [ 289 ]
+ xx [ 290 ] ) * xx [ 47 ] ; xx [ 292 ] = xx [ 284 ] * xx [ 234 ] ; xx [ 293
] = xx [ 47 ] * ( xx [ 242 ] * xx [ 282 ] - xx [ 292 ] ) - xx [ 86 ] ; xx [
294 ] = - ( xx [ 8 ] * xx [ 288 ] ) ; xx [ 295 ] = xx [ 8 ] * xx [ 291 ] - xx
[ 293 ] * xx [ 5 ] ; xx [ 296 ] = xx [ 5 ] * xx [ 288 ] ;
pm_math_Quaternion_xform_ra ( xx + 266 , xx + 294 , xx + 297 ) ; xx [ 294 ] =
xx [ 237 ] * xx [ 76 ] ; xx [ 295 ] = xx [ 76 ] * xx [ 235 ] ; xx [ 296 ] =
xx [ 294 ] * xx [ 243 ] + xx [ 295 ] * xx [ 236 ] ; xx [ 300 ] = xx [ 47 ] *
xx [ 296 ] ; xx [ 301 ] = xx [ 242 ] * xx [ 46 ] ; xx [ 302 ] = xx [ 301 ] *
xx [ 234 ] ; xx [ 303 ] = xx [ 242 ] * xx [ 301 ] ; xx [ 304 ] = - ( ( xx [
292 ] + xx [ 301 ] * xx [ 258 ] ) * xx [ 47 ] ) ; xx [ 305 ] = xx [ 47 ] * (
xx [ 302 ] - xx [ 284 ] * xx [ 258 ] ) ; xx [ 306 ] = ( xx [ 303 ] + xx [ 289
] ) * xx [ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 266 , xx +
304 , xx + 307 ) ; xx [ 284 ] = xx [ 46 ] * xx [ 276 ] ; xx [ 289 ] = xx [ 46
] * xx [ 275 ] ; xx [ 292 ] = xx [ 46 ] * xx [ 277 ] ; xx [ 304 ] = xx [ 47 ]
* ( xx [ 257 ] * xx [ 301 ] - xx [ 283 ] ) ; xx [ 305 ] = xx [ 46 ] - ( xx [
290 ] + xx [ 303 ] ) * xx [ 47 ] ; xx [ 306 ] = ( xx [ 302 ] + xx [ 257 ] *
xx [ 282 ] ) * xx [ 47 ] ; pm_math_Quaternion_xform_ra ( xx + 266 , xx + 304
, xx + 301 ) ; xx [ 282 ] = ( xx [ 295 ] * xx [ 235 ] + xx [ 237 ] * xx [ 294
] ) * xx [ 47 ] ; xx [ 235 ] = xx [ 274 ] * xx [ 289 ] ; xx [ 237 ] = xx [
275 ] * xx [ 289 ] ; xx [ 283 ] = xx [ 294 ] * xx [ 236 ] - xx [ 295 ] * xx [
243 ] ; xx [ 236 ] = xx [ 283 ] * xx [ 47 ] ; xx [ 304 ] = - ( xx [ 43 ] * xx
[ 310 ] ) ; xx [ 305 ] = xx [ 43 ] * xx [ 316 ] ; xx [ 306 ] = xx [ 42 ] * xx
[ 310 ] - xx [ 320 ] * xx [ 49 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx
+ 304 , xx + 311 ) ; xx [ 304 ] = - ( xx [ 310 ] * xx [ 103 ] ) ; xx [ 305 ]
= xx [ 316 ] * xx [ 103 ] ; xx [ 306 ] = xx [ 310 ] * xx [ 106 ] - xx [ 109 ]
* xx [ 320 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 304 , xx + 317 )
; xx [ 304 ] = - ( xx [ 310 ] * xx [ 114 ] ) ; xx [ 305 ] = xx [ 316 ] * xx [
114 ] ; xx [ 306 ] = xx [ 321 ] * xx [ 115 ] - xx [ 316 ] * xx [ 108 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 304 , xx + 323 ) ; xx [ 304 ] =
- ( xx [ 310 ] * xx [ 71 ] ) ; xx [ 305 ] = xx [ 316 ] * xx [ 71 ] ; xx [ 306
] = xx [ 45 ] * xx [ 321 ] - xx [ 320 ] * xx [ 78 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 304 , xx + 326 ) ; xx [ 243 ] =
xx [ 322 ] * xx [ 27 ] ; xx [ 290 ] = xx [ 322 ] * xx [ 26 ] ; xx [ 294 ] =
xx [ 337 ] * xx [ 27 ] ; xx [ 295 ] = xx [ 337 ] * xx [ 26 ] ; xx [ 304 ] =
xx [ 316 ] * xx [ 28 ] ; xx [ 305 ] = xx [ 316 ] * xx [ 26 ] + xx [ 310 ] *
xx [ 27 ] ; xx [ 329 ] = - xx [ 304 ] ; xx [ 330 ] = - ( xx [ 310 ] * xx [ 28
] ) ; xx [ 331 ] = xx [ 305 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 329
, xx + 332 ) ; xx [ 306 ] = xx [ 1 ] * xx [ 417 ] ; xx [ 314 ] = cos ( xx [
306 ] ) ; xx [ 315 ] = xx [ 350 ] * xx [ 314 ] ; xx [ 320 ] = sin ( xx [ 306
] ) ; xx [ 306 ] = xx [ 5 ] * xx [ 320 ] ; xx [ 321 ] = xx [ 8 ] * xx [ 320 ]
; xx [ 320 ] = xx [ 350 ] * xx [ 306 ] + xx [ 358 ] * xx [ 321 ] ; xx [ 329 ]
= xx [ 358 ] * xx [ 314 ] ; xx [ 314 ] = xx [ 358 ] * xx [ 306 ] - xx [ 350 ]
* xx [ 321 ] ; xx [ 338 ] = - xx [ 315 ] ; xx [ 339 ] = - xx [ 320 ] ; xx [
340 ] = - xx [ 329 ] ; xx [ 341 ] = xx [ 314 ] ; xx [ 306 ] = xx [ 16 ] * xx
[ 419 ] - xx [ 2 ] * xx [ 421 ] ; xx [ 321 ] = xx [ 16 ] * xx [ 420 ] + xx [
2 ] * xx [ 422 ] ; xx [ 330 ] = xx [ 16 ] * xx [ 421 ] + xx [ 2 ] * xx [ 419
] ; xx [ 331 ] = xx [ 16 ] * xx [ 422 ] - xx [ 2 ] * xx [ 420 ] ; xx [ 342 ]
= xx [ 306 ] ; xx [ 343 ] = xx [ 321 ] ; xx [ 344 ] = xx [ 330 ] ; xx [ 345 ]
= xx [ 331 ] ; pm_math_Quaternion_compose_ra ( xx + 338 , xx + 342 , xx + 346
) ; xx [ 342 ] = xx [ 321 ] ; xx [ 343 ] = xx [ 330 ] ; xx [ 344 ] = xx [ 331
] ; xx [ 335 ] = xx [ 5 ] * xx [ 331 ] - xx [ 321 ] * xx [ 8 ] ; xx [ 336 ] =
xx [ 330 ] * xx [ 5 ] ; xx [ 350 ] = xx [ 330 ] * xx [ 8 ] ; xx [ 351 ] = xx
[ 335 ] ; xx [ 352 ] = - xx [ 336 ] ; pm_math_Vector3_cross_ra ( xx + 342 ,
xx + 350 , xx + 353 ) ; xx [ 345 ] = xx [ 112 ] * ( xx [ 354 ] - xx [ 335 ] *
xx [ 306 ] ) ; xx [ 335 ] = ( xx [ 8 ] + xx [ 47 ] * ( xx [ 355 ] + xx [ 336
] * xx [ 306 ] ) ) * xx [ 46 ] ; xx [ 336 ] = xx [ 348 ] * xx [ 345 ] + xx [
349 ] * xx [ 335 ] ; xx [ 350 ] = xx [ 347 ] * xx [ 345 ] ; xx [ 351 ] = xx [
347 ] * xx [ 335 ] ; xx [ 352 ] = - xx [ 336 ] ; xx [ 353 ] = xx [ 350 ] ; xx
[ 354 ] = xx [ 351 ] ; pm_math_Vector3_cross_ra ( xx + 347 , xx + 352 , xx +
355 ) ; xx [ 352 ] = xx [ 46 ] * xx [ 331 ] ; xx [ 353 ] = xx [ 352 ] * xx [
306 ] ; xx [ 354 ] = xx [ 330 ] * xx [ 46 ] ; xx [ 358 ] = ( xx [ 353 ] + xx
[ 321 ] * xx [ 354 ] ) * xx [ 47 ] ; xx [ 359 ] = xx [ 330 ] * xx [ 354 ] ;
xx [ 360 ] = xx [ 352 ] * xx [ 331 ] ; xx [ 361 ] = xx [ 10 ] - ( xx [ 359 ]
+ xx [ 360 ] ) * xx [ 47 ] ; xx [ 362 ] = xx [ 354 ] * xx [ 306 ] ; xx [ 363
] = xx [ 47 ] * ( xx [ 321 ] * xx [ 352 ] - xx [ 362 ] ) - xx [ 86 ] ; xx [
364 ] = - ( xx [ 8 ] * xx [ 358 ] ) ; xx [ 365 ] = xx [ 8 ] * xx [ 361 ] - xx
[ 363 ] * xx [ 5 ] ; xx [ 366 ] = xx [ 5 ] * xx [ 358 ] ;
pm_math_Quaternion_xform_ra ( xx + 338 , xx + 364 , xx + 367 ) ; xx [ 364 ] =
xx [ 320 ] * xx [ 76 ] ; xx [ 365 ] = xx [ 76 ] * xx [ 314 ] ; xx [ 366 ] =
xx [ 364 ] * xx [ 329 ] + xx [ 365 ] * xx [ 315 ] ; xx [ 370 ] = xx [ 47 ] *
xx [ 366 ] ; xx [ 371 ] = xx [ 321 ] * xx [ 46 ] ; xx [ 372 ] = xx [ 371 ] *
xx [ 306 ] ; xx [ 373 ] = xx [ 321 ] * xx [ 371 ] ; xx [ 374 ] = - ( ( xx [
362 ] + xx [ 371 ] * xx [ 331 ] ) * xx [ 47 ] ) ; xx [ 375 ] = xx [ 47 ] * (
xx [ 372 ] - xx [ 354 ] * xx [ 331 ] ) ; xx [ 376 ] = ( xx [ 373 ] + xx [ 359
] ) * xx [ 47 ] - xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 338 , xx +
374 , xx + 377 ) ; xx [ 354 ] = xx [ 46 ] * xx [ 348 ] ; xx [ 359 ] = xx [ 46
] * xx [ 347 ] ; xx [ 362 ] = xx [ 46 ] * xx [ 349 ] ; xx [ 374 ] = xx [ 47 ]
* ( xx [ 330 ] * xx [ 371 ] - xx [ 353 ] ) ; xx [ 375 ] = xx [ 46 ] - ( xx [
360 ] + xx [ 373 ] ) * xx [ 47 ] ; xx [ 376 ] = ( xx [ 372 ] + xx [ 330 ] *
xx [ 352 ] ) * xx [ 47 ] ; pm_math_Quaternion_xform_ra ( xx + 338 , xx + 374
, xx + 371 ) ; xx [ 352 ] = ( xx [ 365 ] * xx [ 314 ] + xx [ 320 ] * xx [ 364
] ) * xx [ 47 ] ; xx [ 314 ] = xx [ 346 ] * xx [ 359 ] ; xx [ 320 ] = xx [
347 ] * xx [ 359 ] ; xx [ 353 ] = xx [ 364 ] * xx [ 315 ] - xx [ 365 ] * xx [
329 ] ; xx [ 315 ] = xx [ 353 ] * xx [ 47 ] ; xx [ 374 ] = - ( xx [ 43 ] * xx
[ 390 ] ) ; xx [ 375 ] = - ( xx [ 43 ] * xx [ 396 ] ) ; xx [ 376 ] = xx [ 42
] * xx [ 390 ] + xx [ 400 ] * xx [ 49 ] ; pm_math_Quaternion_xform_ra ( xx +
61 , xx + 374 , xx + 380 ) ; xx [ 61 ] = - ( xx [ 390 ] * xx [ 103 ] ) ; xx [
62 ] = - ( xx [ 396 ] * xx [ 103 ] ) ; xx [ 63 ] = xx [ 390 ] * xx [ 106 ] +
xx [ 109 ] * xx [ 400 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 61 ,
xx + 374 ) ; xx [ 61 ] = - ( xx [ 390 ] * xx [ 114 ] ) ; xx [ 62 ] = - ( xx [
396 ] * xx [ 114 ] ) ; xx [ 63 ] = xx [ 44 ] * xx [ 115 ] + xx [ 396 ] * xx [
108 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 61 , xx + 383 ) ; xx [
61 ] = - ( xx [ 390 ] * xx [ 71 ] ) ; xx [ 62 ] = - ( xx [ 396 ] * xx [ 71 ]
) ; xx [ 63 ] = xx [ 45 ] * xx [ 44 ] + xx [ 400 ] * xx [ 78 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 61 , xx + 42 ) ; xx [ 45 ] = xx
[ 9 ] * xx [ 27 ] ; xx [ 49 ] = xx [ 9 ] * xx [ 26 ] ; xx [ 61 ] = xx [ 50 ]
* xx [ 27 ] ; xx [ 62 ] = xx [ 50 ] * xx [ 26 ] ; xx [ 63 ] = xx [ 396 ] * xx
[ 28 ] ; xx [ 64 ] = xx [ 390 ] * xx [ 27 ] - xx [ 396 ] * xx [ 26 ] ; xx [
386 ] = xx [ 63 ] ; xx [ 387 ] = - ( xx [ 390 ] * xx [ 28 ] ) ; xx [ 388 ] =
xx [ 64 ] ; pm_math_Vector3_cross_ra ( xx + 26 , xx + 386 , xx + 391 ) ; xx [
71 ] = xx [ 1 ] * xx [ 426 ] ; xx [ 1 ] = cos ( xx [ 71 ] ) ; xx [ 78 ] = xx
[ 16 ] * xx [ 1 ] ; xx [ 103 ] = sin ( xx [ 71 ] ) ; xx [ 71 ] = xx [ 5 ] *
xx [ 103 ] ; xx [ 106 ] = xx [ 8 ] * xx [ 103 ] ; xx [ 103 ] = xx [ 16 ] * xx
[ 71 ] - xx [ 2 ] * xx [ 106 ] ; xx [ 108 ] = xx [ 2 ] * xx [ 1 ] ; xx [ 1 ]
= xx [ 16 ] * xx [ 106 ] + xx [ 2 ] * xx [ 71 ] ; xx [ 386 ] = - xx [ 78 ] ;
xx [ 387 ] = xx [ 103 ] ; xx [ 388 ] = - xx [ 108 ] ; xx [ 389 ] = - xx [ 1 ]
; xx [ 71 ] = xx [ 2 ] * xx [ 430 ] + xx [ 16 ] * xx [ 428 ] ; xx [ 106 ] =
xx [ 2 ] * xx [ 431 ] - xx [ 16 ] * xx [ 429 ] ; xx [ 109 ] = - xx [ 106 ] ;
xx [ 114 ] = xx [ 2 ] * xx [ 428 ] - xx [ 16 ] * xx [ 430 ] ; xx [ 115 ] = -
xx [ 114 ] ; xx [ 329 ] = xx [ 2 ] * xx [ 429 ] + xx [ 16 ] * xx [ 431 ] ; xx
[ 397 ] = xx [ 71 ] ; xx [ 398 ] = xx [ 109 ] ; xx [ 399 ] = xx [ 115 ] ; xx
[ 400 ] = xx [ 329 ] ; pm_math_Quaternion_compose_ra ( xx + 386 , xx + 397 ,
xx + 462 ) ; xx [ 397 ] = xx [ 109 ] ; xx [ 398 ] = xx [ 115 ] ; xx [ 399 ] =
xx [ 329 ] ; xx [ 2 ] = xx [ 106 ] * xx [ 8 ] - xx [ 5 ] * xx [ 329 ] ; xx [
16 ] = xx [ 114 ] * xx [ 5 ] ; xx [ 466 ] = - ( xx [ 114 ] * xx [ 8 ] ) ; xx
[ 467 ] = xx [ 2 ] ; xx [ 468 ] = - xx [ 16 ] ; pm_math_Vector3_cross_ra ( xx
+ 397 , xx + 466 , xx + 469 ) ; xx [ 109 ] = xx [ 112 ] * ( xx [ 470 ] - xx [
2 ] * xx [ 71 ] ) ; xx [ 2 ] = ( xx [ 8 ] + xx [ 47 ] * ( xx [ 471 ] + xx [
16 ] * xx [ 71 ] ) ) * xx [ 46 ] ; xx [ 16 ] = xx [ 464 ] * xx [ 109 ] + xx [
465 ] * xx [ 2 ] ; xx [ 112 ] = xx [ 463 ] * xx [ 109 ] ; xx [ 115 ] = xx [
463 ] * xx [ 2 ] ; xx [ 466 ] = - xx [ 16 ] ; xx [ 467 ] = xx [ 112 ] ; xx [
468 ] = xx [ 115 ] ; pm_math_Vector3_cross_ra ( xx + 463 , xx + 466 , xx +
469 ) ; xx [ 360 ] = xx [ 46 ] * xx [ 329 ] ; xx [ 364 ] = xx [ 360 ] * xx [
71 ] ; xx [ 365 ] = xx [ 114 ] * xx [ 46 ] ; xx [ 394 ] = ( xx [ 364 ] + xx [
106 ] * xx [ 365 ] ) * xx [ 47 ] ; xx [ 395 ] = xx [ 114 ] * xx [ 365 ] ; xx
[ 400 ] = xx [ 360 ] * xx [ 329 ] ; xx [ 466 ] = xx [ 10 ] - ( xx [ 395 ] +
xx [ 400 ] ) * xx [ 47 ] ; xx [ 10 ] = xx [ 365 ] * xx [ 71 ] ; xx [ 467 ] =
xx [ 86 ] + xx [ 47 ] * ( xx [ 10 ] - xx [ 106 ] * xx [ 360 ] ) ; xx [ 472 ]
= - ( xx [ 8 ] * xx [ 394 ] ) ; xx [ 473 ] = xx [ 8 ] * xx [ 466 ] + xx [ 467
] * xx [ 5 ] ; xx [ 474 ] = - ( xx [ 5 ] * xx [ 394 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 386 , xx + 472 , xx + 475 ) ; xx [ 86 ] =
xx [ 103 ] * xx [ 76 ] ; xx [ 468 ] = xx [ 76 ] * xx [ 1 ] ; xx [ 472 ] = xx
[ 86 ] * xx [ 108 ] + xx [ 468 ] * xx [ 78 ] ; xx [ 473 ] = xx [ 47 ] * xx [
472 ] ; xx [ 474 ] = xx [ 106 ] * xx [ 46 ] ; xx [ 478 ] = xx [ 474 ] * xx [
71 ] ; xx [ 479 ] = xx [ 106 ] * xx [ 474 ] ; xx [ 480 ] = ( xx [ 10 ] + xx [
474 ] * xx [ 329 ] ) * xx [ 47 ] ; xx [ 481 ] = xx [ 47 ] * ( xx [ 365 ] * xx
[ 329 ] - xx [ 478 ] ) ; xx [ 482 ] = ( xx [ 479 ] + xx [ 395 ] ) * xx [ 47 ]
- xx [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 386 , xx + 480 , xx + 483 )
; xx [ 10 ] = xx [ 46 ] * xx [ 464 ] ; xx [ 365 ] = xx [ 46 ] * xx [ 463 ] ;
xx [ 395 ] = xx [ 46 ] * xx [ 465 ] ; xx [ 480 ] = xx [ 47 ] * ( xx [ 114 ] *
xx [ 474 ] - xx [ 364 ] ) ; xx [ 481 ] = xx [ 46 ] - ( xx [ 400 ] + xx [ 479
] ) * xx [ 47 ] ; xx [ 482 ] = - ( ( xx [ 478 ] + xx [ 114 ] * xx [ 360 ] ) *
xx [ 47 ] ) ; pm_math_Quaternion_xform_ra ( xx + 386 , xx + 480 , xx + 486 )
; xx [ 360 ] = ( xx [ 468 ] * xx [ 1 ] + xx [ 103 ] * xx [ 86 ] ) * xx [ 47 ]
; xx [ 1 ] = xx [ 462 ] * xx [ 365 ] ; xx [ 103 ] = xx [ 463 ] * xx [ 365 ] ;
xx [ 364 ] = xx [ 468 ] * xx [ 108 ] - xx [ 86 ] * xx [ 78 ] ; xx [ 78 ] = xx
[ 364 ] * xx [ 47 ] ; xx [ 489 ] = xx [ 68 ] + xx [ 93 ] ; xx [ 490 ] = xx [
116 ] + xx [ 125 ] ; xx [ 491 ] = xx [ 128 ] + xx [ 133 ] ; xx [ 492 ] = xx [
139 ] + xx [ 122 ] ; xx [ 493 ] = xx [ 142 ] - ( xx [ 25 ] * xx [ 7 ] + xx [
28 ] * xx [ 17 ] ) * xx [ 47 ] ; xx [ 494 ] = ( xx [ 25 ] * xx [ 18 ] + xx [
28 ] * xx [ 39 ] ) * xx [ 47 ] + xx [ 145 ] ; xx [ 495 ] = xx [ 47 ] * ( xx [
148 ] + xx [ 25 ] * xx [ 38 ] ) + xx [ 33 ] - xx [ 55 ] ; xx [ 496 ] = xx [
30 ] ; xx [ 497 ] = xx [ 30 ] ; xx [ 498 ] = xx [ 30 ] ; xx [ 499 ] = xx [ 30
] ; xx [ 500 ] = xx [ 30 ] ; xx [ 501 ] = xx [ 30 ] ; xx [ 502 ] = xx [ 30 ]
; xx [ 503 ] = xx [ 30 ] ; xx [ 504 ] = - ( xx [ 47 ] * ( xx [ 158 ] - xx [
72 ] * xx [ 169 ] ) + xx [ 162 ] + xx [ 156 ] ) ; xx [ 505 ] = xx [ 30 ] ; xx
[ 506 ] = - ( xx [ 176 ] - ( xx [ 169 ] * xx [ 95 ] + xx [ 172 ] * xx [ 105 ]
) * xx [ 47 ] ) ; xx [ 507 ] = - ( xx [ 47 ] * ( xx [ 171 ] * xx [ 105 ] - xx
[ 169 ] * xx [ 111 ] ) + xx [ 179 ] ) ; xx [ 508 ] = xx [ 30 ] ; xx [ 509 ] =
xx [ 30 ] ; xx [ 510 ] = xx [ 30 ] ; xx [ 511 ] = xx [ 30 ] ; xx [ 512 ] = xx
[ 30 ] ; xx [ 513 ] = xx [ 30 ] ; xx [ 514 ] = xx [ 30 ] ; xx [ 515 ] = xx [
30 ] ; xx [ 516 ] = xx [ 69 ] + xx [ 11 ] + xx [ 76 ] ; xx [ 517 ] = xx [ 117
] + xx [ 126 ] ; xx [ 518 ] = xx [ 129 ] + xx [ 134 ] ; xx [ 519 ] = xx [ 140
] + xx [ 123 ] ; xx [ 520 ] = xx [ 47 ] * ( xx [ 25 ] * xx [ 17 ] - xx [ 28 ]
* xx [ 7 ] ) + xx [ 143 ] ; xx [ 521 ] = xx [ 47 ] * ( xx [ 28 ] * xx [ 18 ]
- xx [ 25 ] * xx [ 39 ] ) + xx [ 146 ] ; xx [ 522 ] = ( xx [ 149 ] - xx [ 55
] * xx [ 13 ] ) * xx [ 47 ] + xx [ 34 ] - xx [ 56 ] ; xx [ 523 ] = xx [ 30 ]
; xx [ 524 ] = xx [ 30 ] ; xx [ 525 ] = xx [ 30 ] ; xx [ 526 ] = xx [ 30 ] ;
xx [ 527 ] = xx [ 30 ] ; xx [ 528 ] = xx [ 30 ] ; xx [ 529 ] = xx [ 30 ] ; xx
[ 530 ] = xx [ 30 ] ; xx [ 531 ] = - ( xx [ 66 ] + ( xx [ 169 ] * xx [ 82 ] +
xx [ 159 ] ) * xx [ 47 ] + xx [ 163 ] - xx [ 94 ] + xx [ 76 ] ) ; xx [ 532 ]
= xx [ 30 ] ; xx [ 533 ] = - ( xx [ 47 ] * ( xx [ 36 ] - xx [ 172 ] * xx [ 95
] ) + xx [ 177 ] ) ; xx [ 534 ] = - ( xx [ 180 ] - ( xx [ 172 ] * xx [ 111 ]
+ xx [ 57 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [ 535 ] = xx [ 30 ] ; xx [ 536 ]
= xx [ 30 ] ; xx [ 537 ] = xx [ 30 ] ; xx [ 538 ] = xx [ 30 ] ; xx [ 539 ] =
xx [ 30 ] ; xx [ 540 ] = xx [ 30 ] ; xx [ 541 ] = xx [ 30 ] ; xx [ 542 ] = xx
[ 30 ] ; xx [ 543 ] = xx [ 70 ] + xx [ 15 ] ; xx [ 544 ] = xx [ 118 ] + xx [
127 ] ; xx [ 545 ] = xx [ 130 ] + xx [ 135 ] ; xx [ 546 ] = xx [ 141 ] + xx [
124 ] ; xx [ 547 ] = xx [ 144 ] + ( xx [ 26 ] * xx [ 17 ] + xx [ 27 ] * xx [
7 ] ) * xx [ 47 ] - xx [ 24 ] ; xx [ 548 ] = xx [ 147 ] - ( xx [ 26 ] * xx [
39 ] + xx [ 27 ] * xx [ 18 ] ) * xx [ 47 ] + xx [ 67 ] ; xx [ 549 ] = ( xx [
25 ] * xx [ 48 ] + xx [ 150 ] ) * xx [ 47 ] + xx [ 35 ] ; xx [ 550 ] = xx [
30 ] ; xx [ 551 ] = xx [ 30 ] ; xx [ 552 ] = xx [ 30 ] ; xx [ 553 ] = xx [ 30
] ; xx [ 554 ] = xx [ 30 ] ; xx [ 555 ] = xx [ 30 ] ; xx [ 556 ] = xx [ 30 ]
; xx [ 557 ] = xx [ 30 ] ; xx [ 558 ] = - ( ( xx [ 169 ] * xx [ 85 ] + xx [
160 ] ) * xx [ 47 ] - xx [ 81 ] + xx [ 164 ] + xx [ 40 ] ) ; xx [ 559 ] = xx
[ 30 ] ; xx [ 560 ] = - ( xx [ 178 ] + ( xx [ 57 ] + xx [ 171 ] * xx [ 95 ] )
* xx [ 47 ] - xx [ 46 ] ) ; xx [ 561 ] = - ( ( xx [ 36 ] + xx [ 171 ] * xx [
111 ] ) * xx [ 47 ] + xx [ 181 ] ) ; xx [ 562 ] = xx [ 30 ] ; xx [ 563 ] = xx
[ 30 ] ; xx [ 564 ] = xx [ 30 ] ; xx [ 565 ] = xx [ 30 ] ; xx [ 566 ] = xx [
30 ] ; xx [ 567 ] = xx [ 30 ] ; xx [ 568 ] = xx [ 30 ] ; xx [ 569 ] = xx [ 30
] ; xx [ 570 ] = xx [ 182 ] + xx [ 93 ] ; xx [ 571 ] = xx [ 185 ] + xx [ 125
] ; xx [ 572 ] = xx [ 188 ] + xx [ 133 ] ; xx [ 573 ] = xx [ 193 ] + xx [ 122
] ; xx [ 574 ] = xx [ 142 ] - ( xx [ 25 ] * xx [ 59 ] + xx [ 28 ] * xx [ 79 ]
) * xx [ 47 ] ; xx [ 575 ] = xx [ 145 ] - ( xx [ 25 ] * xx [ 92 ] + xx [ 28 ]
* xx [ 97 ] ) * xx [ 47 ] ; xx [ 576 ] = xx [ 47 ] * ( xx [ 196 ] + xx [ 25 ]
* xx [ 98 ] ) + xx [ 33 ] + xx [ 80 ] ; xx [ 577 ] = xx [ 30 ] ; xx [ 578 ] =
xx [ 30 ] ; xx [ 579 ] = xx [ 30 ] ; xx [ 580 ] = xx [ 30 ] ; xx [ 581 ] = xx
[ 30 ] ; xx [ 582 ] = xx [ 30 ] ; xx [ 583 ] = xx [ 30 ] ; xx [ 584 ] = xx [
30 ] ; xx [ 585 ] = xx [ 30 ] ; xx [ 586 ] = xx [ 30 ] ; xx [ 587 ] = xx [ 30
] ; xx [ 588 ] = xx [ 30 ] ; xx [ 589 ] = - ( xx [ 47 ] * ( xx [ 215 ] - xx [
175 ] * xx [ 207 ] ) + xx [ 227 ] - xx [ 230 ] ) ; xx [ 590 ] = xx [ 30 ] ;
xx [ 591 ] = - ( xx [ 239 ] - ( xx [ 207 ] * xx [ 214 ] + xx [ 210 ] * xx [
219 ] ) * xx [ 47 ] ) ; xx [ 592 ] = - ( xx [ 47 ] * ( xx [ 209 ] * xx [ 219
] - xx [ 207 ] * xx [ 222 ] ) + xx [ 245 ] ) ; xx [ 593 ] = xx [ 30 ] ; xx [
594 ] = xx [ 30 ] ; xx [ 595 ] = xx [ 30 ] ; xx [ 596 ] = xx [ 30 ] ; xx [
597 ] = xx [ 183 ] + xx [ 11 ] + xx [ 76 ] ; xx [ 598 ] = xx [ 186 ] + xx [
126 ] ; xx [ 599 ] = xx [ 189 ] + xx [ 134 ] ; xx [ 600 ] = xx [ 194 ] + xx [
123 ] ; xx [ 601 ] = xx [ 47 ] * ( xx [ 25 ] * xx [ 79 ] - xx [ 28 ] * xx [
59 ] ) + xx [ 143 ] ; xx [ 602 ] = xx [ 47 ] * ( xx [ 25 ] * xx [ 97 ] - xx [
28 ] * xx [ 92 ] ) + xx [ 146 ] ; xx [ 603 ] = ( xx [ 80 ] * xx [ 13 ] + xx [
197 ] ) * xx [ 47 ] + xx [ 34 ] - xx [ 91 ] ; xx [ 604 ] = xx [ 30 ] ; xx [
605 ] = xx [ 30 ] ; xx [ 606 ] = xx [ 30 ] ; xx [ 607 ] = xx [ 30 ] ; xx [
608 ] = xx [ 30 ] ; xx [ 609 ] = xx [ 30 ] ; xx [ 610 ] = xx [ 30 ] ; xx [
611 ] = xx [ 30 ] ; xx [ 612 ] = xx [ 30 ] ; xx [ 613 ] = xx [ 30 ] ; xx [
614 ] = xx [ 30 ] ; xx [ 615 ] = xx [ 30 ] ; xx [ 616 ] = - ( xx [ 173 ] + (
xx [ 207 ] * xx [ 206 ] + xx [ 216 ] ) * xx [ 47 ] + xx [ 228 ] - xx [ 212 ]
+ xx [ 76 ] ) ; xx [ 617 ] = xx [ 30 ] ; xx [ 618 ] = - ( xx [ 47 ] * ( xx [
132 ] - xx [ 210 ] * xx [ 214 ] ) + xx [ 240 ] ) ; xx [ 619 ] = - ( xx [ 246
] - ( xx [ 210 ] * xx [ 222 ] + xx [ 161 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [
620 ] = xx [ 30 ] ; xx [ 621 ] = xx [ 30 ] ; xx [ 622 ] = xx [ 30 ] ; xx [
623 ] = xx [ 30 ] ; xx [ 624 ] = xx [ 184 ] + xx [ 15 ] ; xx [ 625 ] = xx [
187 ] + xx [ 127 ] ; xx [ 626 ] = xx [ 190 ] + xx [ 135 ] ; xx [ 627 ] = xx [
195 ] + xx [ 124 ] ; xx [ 628 ] = xx [ 144 ] + ( xx [ 26 ] * xx [ 79 ] + xx [
27 ] * xx [ 59 ] ) * xx [ 47 ] - xx [ 165 ] ; xx [ 629 ] = xx [ 147 ] + ( xx
[ 26 ] * xx [ 97 ] + xx [ 27 ] * xx [ 92 ] ) * xx [ 47 ] - xx [ 168 ] ; xx [
630 ] = ( xx [ 198 ] - xx [ 25 ] * xx [ 107 ] ) * xx [ 47 ] + xx [ 35 ] ; xx
[ 631 ] = xx [ 30 ] ; xx [ 632 ] = xx [ 30 ] ; xx [ 633 ] = xx [ 30 ] ; xx [
634 ] = xx [ 30 ] ; xx [ 635 ] = xx [ 30 ] ; xx [ 636 ] = xx [ 30 ] ; xx [
637 ] = xx [ 30 ] ; xx [ 638 ] = xx [ 30 ] ; xx [ 639 ] = xx [ 30 ] ; xx [
640 ] = xx [ 30 ] ; xx [ 641 ] = xx [ 30 ] ; xx [ 642 ] = xx [ 30 ] ; xx [
643 ] = - ( ( xx [ 207 ] * xx [ 211 ] + xx [ 217 ] ) * xx [ 47 ] - xx [ 192 ]
+ xx [ 229 ] + xx [ 157 ] ) ; xx [ 644 ] = xx [ 30 ] ; xx [ 645 ] = - ( xx [
241 ] + ( xx [ 161 ] + xx [ 209 ] * xx [ 214 ] ) * xx [ 47 ] - xx [ 46 ] ) ;
xx [ 646 ] = - ( ( xx [ 132 ] + xx [ 209 ] * xx [ 222 ] ) * xx [ 47 ] + xx [
247 ] ) ; xx [ 647 ] = xx [ 30 ] ; xx [ 648 ] = xx [ 30 ] ; xx [ 649 ] = xx [
30 ] ; xx [ 650 ] = xx [ 30 ] ; xx [ 651 ] = xx [ 248 ] + xx [ 93 ] ; xx [
652 ] = xx [ 251 ] + xx [ 125 ] ; xx [ 653 ] = xx [ 254 ] + xx [ 133 ] ; xx [
654 ] = xx [ 260 ] + xx [ 122 ] ; xx [ 655 ] = xx [ 142 ] - ( xx [ 25 ] * xx
[ 167 ] + xx [ 28 ] * xx [ 220 ] ) * xx [ 47 ] ; xx [ 656 ] = xx [ 145 ] - (
xx [ 25 ] * xx [ 224 ] + xx [ 28 ] * xx [ 225 ] ) * xx [ 47 ] ; xx [ 657 ] =
xx [ 47 ] * ( xx [ 263 ] - xx [ 25 ] * xx [ 231 ] ) + xx [ 33 ] + xx [ 232 ]
; xx [ 658 ] = xx [ 30 ] ; xx [ 659 ] = xx [ 30 ] ; xx [ 660 ] = xx [ 30 ] ;
xx [ 661 ] = xx [ 30 ] ; xx [ 662 ] = xx [ 30 ] ; xx [ 663 ] = xx [ 30 ] ; xx
[ 664 ] = xx [ 30 ] ; xx [ 665 ] = xx [ 30 ] ; xx [ 666 ] = xx [ 30 ] ; xx [
667 ] = xx [ 30 ] ; xx [ 668 ] = xx [ 30 ] ; xx [ 669 ] = xx [ 30 ] ; xx [
670 ] = xx [ 30 ] ; xx [ 671 ] = xx [ 30 ] ; xx [ 672 ] = xx [ 30 ] ; xx [
673 ] = xx [ 30 ] ; xx [ 674 ] = - ( xx [ 47 ] * ( xx [ 285 ] - xx [ 278 ] *
xx [ 274 ] ) + xx [ 297 ] - xx [ 300 ] ) ; xx [ 675 ] = xx [ 30 ] ; xx [ 676
] = - ( xx [ 307 ] - ( xx [ 274 ] * xx [ 284 ] + xx [ 277 ] * xx [ 289 ] ) *
xx [ 47 ] ) ; xx [ 677 ] = - ( xx [ 47 ] * ( xx [ 276 ] * xx [ 289 ] - xx [
274 ] * xx [ 292 ] ) + xx [ 301 ] ) ; xx [ 678 ] = xx [ 249 ] + xx [ 11 ] +
xx [ 76 ] ; xx [ 679 ] = xx [ 252 ] + xx [ 126 ] ; xx [ 680 ] = xx [ 255 ] +
xx [ 134 ] ; xx [ 681 ] = xx [ 261 ] + xx [ 123 ] ; xx [ 682 ] = xx [ 47 ] *
( xx [ 25 ] * xx [ 220 ] - xx [ 28 ] * xx [ 167 ] ) + xx [ 143 ] ; xx [ 683 ]
= xx [ 47 ] * ( xx [ 25 ] * xx [ 225 ] - xx [ 28 ] * xx [ 224 ] ) + xx [ 146
] ; xx [ 684 ] = ( xx [ 232 ] * xx [ 13 ] + xx [ 264 ] ) * xx [ 47 ] + xx [
34 ] + xx [ 238 ] ; xx [ 685 ] = xx [ 30 ] ; xx [ 686 ] = xx [ 30 ] ; xx [
687 ] = xx [ 30 ] ; xx [ 688 ] = xx [ 30 ] ; xx [ 689 ] = xx [ 30 ] ; xx [
690 ] = xx [ 30 ] ; xx [ 691 ] = xx [ 30 ] ; xx [ 692 ] = xx [ 30 ] ; xx [
693 ] = xx [ 30 ] ; xx [ 694 ] = xx [ 30 ] ; xx [ 695 ] = xx [ 30 ] ; xx [
696 ] = xx [ 30 ] ; xx [ 697 ] = xx [ 30 ] ; xx [ 698 ] = xx [ 30 ] ; xx [
699 ] = xx [ 30 ] ; xx [ 700 ] = xx [ 30 ] ; xx [ 701 ] = - ( xx [ 273 ] + (
xx [ 274 ] * xx [ 280 ] + xx [ 286 ] ) * xx [ 47 ] + xx [ 298 ] - xx [ 282 ]
+ xx [ 76 ] ) ; xx [ 702 ] = xx [ 30 ] ; xx [ 703 ] = - ( xx [ 47 ] * ( xx [
235 ] - xx [ 277 ] * xx [ 284 ] ) + xx [ 308 ] ) ; xx [ 704 ] = - ( xx [ 302
] - ( xx [ 277 ] * xx [ 292 ] + xx [ 237 ] ) * xx [ 47 ] + xx [ 46 ] ) ; xx [
705 ] = xx [ 250 ] + xx [ 15 ] ; xx [ 706 ] = xx [ 253 ] + xx [ 127 ] ; xx [
707 ] = xx [ 256 ] + xx [ 135 ] ; xx [ 708 ] = xx [ 262 ] + xx [ 124 ] ; xx [
709 ] = xx [ 144 ] + ( xx [ 26 ] * xx [ 220 ] + xx [ 27 ] * xx [ 167 ] ) * xx
[ 47 ] - xx [ 244 ] ; xx [ 710 ] = xx [ 147 ] + ( xx [ 26 ] * xx [ 225 ] + xx
[ 27 ] * xx [ 224 ] ) * xx [ 47 ] - xx [ 259 ] ; xx [ 711 ] = ( xx [ 25 ] *
xx [ 233 ] + xx [ 265 ] ) * xx [ 47 ] + xx [ 35 ] ; xx [ 712 ] = xx [ 30 ] ;
xx [ 713 ] = xx [ 30 ] ; xx [ 714 ] = xx [ 30 ] ; xx [ 715 ] = xx [ 30 ] ; xx
[ 716 ] = xx [ 30 ] ; xx [ 717 ] = xx [ 30 ] ; xx [ 718 ] = xx [ 30 ] ; xx [
719 ] = xx [ 30 ] ; xx [ 720 ] = xx [ 30 ] ; xx [ 721 ] = xx [ 30 ] ; xx [
722 ] = xx [ 30 ] ; xx [ 723 ] = xx [ 30 ] ; xx [ 724 ] = xx [ 30 ] ; xx [
725 ] = xx [ 30 ] ; xx [ 726 ] = xx [ 30 ] ; xx [ 727 ] = xx [ 30 ] ; xx [
728 ] = - ( ( xx [ 274 ] * xx [ 281 ] + xx [ 287 ] ) * xx [ 47 ] - xx [ 279 ]
+ xx [ 299 ] + xx [ 236 ] ) ; xx [ 729 ] = xx [ 30 ] ; xx [ 730 ] = - ( xx [
309 ] + ( xx [ 237 ] + xx [ 276 ] * xx [ 284 ] ) * xx [ 47 ] - xx [ 46 ] ) ;
xx [ 731 ] = - ( ( xx [ 235 ] + xx [ 276 ] * xx [ 292 ] ) * xx [ 47 ] + xx [
303 ] ) ; xx [ 732 ] = xx [ 311 ] + xx [ 93 ] ; xx [ 733 ] = xx [ 317 ] + xx
[ 125 ] ; xx [ 734 ] = xx [ 323 ] + xx [ 133 ] ; xx [ 735 ] = xx [ 326 ] + xx
[ 122 ] ; xx [ 736 ] = ( xx [ 25 ] * xx [ 243 ] + xx [ 28 ] * xx [ 290 ] ) *
xx [ 47 ] + xx [ 142 ] ; xx [ 737 ] = xx [ 145 ] - ( xx [ 25 ] * xx [ 294 ] +
xx [ 28 ] * xx [ 295 ] ) * xx [ 47 ] ; xx [ 738 ] = xx [ 47 ] * ( xx [ 332 ]
- xx [ 25 ] * xx [ 304 ] ) + xx [ 33 ] - xx [ 310 ] ; xx [ 739 ] = - ( xx [
47 ] * ( xx [ 355 ] - xx [ 336 ] * xx [ 346 ] ) + xx [ 367 ] + xx [ 370 ] ) ;
xx [ 740 ] = xx [ 30 ] ; xx [ 741 ] = - ( xx [ 377 ] - ( xx [ 346 ] * xx [
354 ] + xx [ 349 ] * xx [ 359 ] ) * xx [ 47 ] ) ; xx [ 742 ] = - ( xx [ 47 ]
* ( xx [ 348 ] * xx [ 359 ] - xx [ 346 ] * xx [ 362 ] ) + xx [ 371 ] ) ; xx [
743 ] = xx [ 30 ] ; xx [ 744 ] = xx [ 30 ] ; xx [ 745 ] = xx [ 30 ] ; xx [
746 ] = xx [ 30 ] ; xx [ 747 ] = xx [ 30 ] ; xx [ 748 ] = xx [ 30 ] ; xx [
749 ] = xx [ 30 ] ; xx [ 750 ] = xx [ 30 ] ; xx [ 751 ] = xx [ 30 ] ; xx [
752 ] = xx [ 30 ] ; xx [ 753 ] = xx [ 30 ] ; xx [ 754 ] = xx [ 30 ] ; xx [
755 ] = xx [ 30 ] ; xx [ 756 ] = xx [ 30 ] ; xx [ 757 ] = xx [ 30 ] ; xx [
758 ] = xx [ 30 ] ; xx [ 759 ] = xx [ 312 ] + xx [ 11 ] + xx [ 76 ] ; xx [
760 ] = xx [ 318 ] + xx [ 126 ] ; xx [ 761 ] = xx [ 324 ] + xx [ 134 ] ; xx [
762 ] = xx [ 327 ] + xx [ 123 ] ; xx [ 763 ] = xx [ 47 ] * ( xx [ 28 ] * xx [
243 ] - xx [ 25 ] * xx [ 290 ] ) + xx [ 143 ] ; xx [ 764 ] = xx [ 47 ] * ( xx
[ 25 ] * xx [ 295 ] - xx [ 28 ] * xx [ 294 ] ) + xx [ 146 ] ; xx [ 765 ] = (
xx [ 333 ] - xx [ 310 ] * xx [ 13 ] ) * xx [ 47 ] + xx [ 34 ] + xx [ 316 ] ;
xx [ 766 ] = - ( xx [ 335 ] + ( xx [ 346 ] * xx [ 350 ] + xx [ 356 ] ) * xx [
47 ] + xx [ 368 ] - xx [ 352 ] + xx [ 76 ] ) ; xx [ 767 ] = xx [ 30 ] ; xx [
768 ] = - ( xx [ 47 ] * ( xx [ 314 ] - xx [ 349 ] * xx [ 354 ] ) + xx [ 378 ]
) ; xx [ 769 ] = - ( xx [ 372 ] - ( xx [ 349 ] * xx [ 362 ] + xx [ 320 ] ) *
xx [ 47 ] + xx [ 46 ] ) ; xx [ 770 ] = xx [ 30 ] ; xx [ 771 ] = xx [ 30 ] ;
xx [ 772 ] = xx [ 30 ] ; xx [ 773 ] = xx [ 30 ] ; xx [ 774 ] = xx [ 30 ] ; xx
[ 775 ] = xx [ 30 ] ; xx [ 776 ] = xx [ 30 ] ; xx [ 777 ] = xx [ 30 ] ; xx [
778 ] = xx [ 30 ] ; xx [ 779 ] = xx [ 30 ] ; xx [ 780 ] = xx [ 30 ] ; xx [
781 ] = xx [ 30 ] ; xx [ 782 ] = xx [ 30 ] ; xx [ 783 ] = xx [ 30 ] ; xx [
784 ] = xx [ 30 ] ; xx [ 785 ] = xx [ 30 ] ; xx [ 786 ] = xx [ 313 ] + xx [
15 ] ; xx [ 787 ] = xx [ 319 ] + xx [ 127 ] ; xx [ 788 ] = xx [ 325 ] + xx [
135 ] ; xx [ 789 ] = xx [ 328 ] + xx [ 124 ] ; xx [ 790 ] = xx [ 144 ] - ( xx
[ 26 ] * xx [ 290 ] + xx [ 27 ] * xx [ 243 ] ) * xx [ 47 ] + xx [ 322 ] ; xx
[ 791 ] = xx [ 147 ] + ( xx [ 26 ] * xx [ 295 ] + xx [ 27 ] * xx [ 294 ] ) *
xx [ 47 ] - xx [ 337 ] ; xx [ 792 ] = ( xx [ 25 ] * xx [ 305 ] + xx [ 334 ] )
* xx [ 47 ] + xx [ 35 ] ; xx [ 793 ] = - ( ( xx [ 346 ] * xx [ 351 ] + xx [
357 ] ) * xx [ 47 ] - xx [ 345 ] + xx [ 369 ] + xx [ 315 ] ) ; xx [ 794 ] =
xx [ 30 ] ; xx [ 795 ] = - ( xx [ 379 ] + ( xx [ 320 ] + xx [ 348 ] * xx [
354 ] ) * xx [ 47 ] - xx [ 46 ] ) ; xx [ 796 ] = - ( ( xx [ 314 ] + xx [ 348
] * xx [ 362 ] ) * xx [ 47 ] + xx [ 373 ] ) ; xx [ 797 ] = xx [ 30 ] ; xx [
798 ] = xx [ 30 ] ; xx [ 799 ] = xx [ 30 ] ; xx [ 800 ] = xx [ 30 ] ; xx [
801 ] = xx [ 30 ] ; xx [ 802 ] = xx [ 30 ] ; xx [ 803 ] = xx [ 30 ] ; xx [
804 ] = xx [ 30 ] ; xx [ 805 ] = xx [ 30 ] ; xx [ 806 ] = xx [ 30 ] ; xx [
807 ] = xx [ 30 ] ; xx [ 808 ] = xx [ 30 ] ; xx [ 809 ] = xx [ 30 ] ; xx [
810 ] = xx [ 30 ] ; xx [ 811 ] = xx [ 30 ] ; xx [ 812 ] = xx [ 30 ] ; xx [
813 ] = xx [ 380 ] + xx [ 93 ] ; xx [ 814 ] = xx [ 374 ] + xx [ 125 ] ; xx [
815 ] = xx [ 383 ] + xx [ 133 ] ; xx [ 816 ] = xx [ 42 ] + xx [ 122 ] ; xx [
817 ] = ( xx [ 25 ] * xx [ 45 ] + xx [ 28 ] * xx [ 49 ] ) * xx [ 47 ] + xx [
142 ] ; xx [ 818 ] = ( xx [ 25 ] * xx [ 61 ] + xx [ 28 ] * xx [ 62 ] ) * xx [
47 ] + xx [ 145 ] ; xx [ 819 ] = xx [ 47 ] * ( xx [ 391 ] + xx [ 25 ] * xx [
63 ] ) + xx [ 33 ] - xx [ 390 ] ; xx [ 820 ] = xx [ 30 ] ; xx [ 821 ] = xx [
30 ] ; xx [ 822 ] = xx [ 30 ] ; xx [ 823 ] = xx [ 30 ] ; xx [ 824 ] = - ( xx
[ 47 ] * ( xx [ 469 ] - xx [ 16 ] * xx [ 462 ] ) + xx [ 475 ] - xx [ 473 ] )
; xx [ 825 ] = xx [ 30 ] ; xx [ 826 ] = - ( xx [ 483 ] - ( xx [ 462 ] * xx [
10 ] + xx [ 465 ] * xx [ 365 ] ) * xx [ 47 ] ) ; xx [ 827 ] = - ( xx [ 47 ] *
( xx [ 464 ] * xx [ 365 ] - xx [ 462 ] * xx [ 395 ] ) + xx [ 486 ] ) ; xx [
828 ] = xx [ 30 ] ; xx [ 829 ] = xx [ 30 ] ; xx [ 830 ] = xx [ 30 ] ; xx [
831 ] = xx [ 30 ] ; xx [ 832 ] = xx [ 30 ] ; xx [ 833 ] = xx [ 30 ] ; xx [
834 ] = xx [ 30 ] ; xx [ 835 ] = xx [ 30 ] ; xx [ 836 ] = xx [ 30 ] ; xx [
837 ] = xx [ 30 ] ; xx [ 838 ] = xx [ 30 ] ; xx [ 839 ] = xx [ 30 ] ; xx [
840 ] = xx [ 381 ] + xx [ 11 ] + xx [ 76 ] ; xx [ 841 ] = xx [ 375 ] + xx [
126 ] ; xx [ 842 ] = xx [ 384 ] + xx [ 134 ] ; xx [ 843 ] = xx [ 43 ] + xx [
123 ] ; xx [ 844 ] = xx [ 47 ] * ( xx [ 28 ] * xx [ 45 ] - xx [ 25 ] * xx [
49 ] ) + xx [ 143 ] ; xx [ 845 ] = xx [ 47 ] * ( xx [ 28 ] * xx [ 61 ] - xx [
25 ] * xx [ 62 ] ) + xx [ 146 ] ; xx [ 846 ] = ( xx [ 392 ] - xx [ 390 ] * xx
[ 13 ] ) * xx [ 47 ] + xx [ 34 ] - xx [ 396 ] ; xx [ 847 ] = xx [ 30 ] ; xx [
848 ] = xx [ 30 ] ; xx [ 849 ] = xx [ 30 ] ; xx [ 850 ] = xx [ 30 ] ; xx [
851 ] = - ( xx [ 2 ] + ( xx [ 462 ] * xx [ 112 ] + xx [ 470 ] ) * xx [ 47 ] +
xx [ 476 ] - xx [ 360 ] + xx [ 76 ] ) ; xx [ 852 ] = xx [ 30 ] ; xx [ 853 ] =
- ( xx [ 47 ] * ( xx [ 1 ] - xx [ 465 ] * xx [ 10 ] ) + xx [ 484 ] ) ; xx [
854 ] = - ( xx [ 487 ] - ( xx [ 465 ] * xx [ 395 ] + xx [ 103 ] ) * xx [ 47 ]
+ xx [ 46 ] ) ; xx [ 855 ] = xx [ 30 ] ; xx [ 856 ] = xx [ 30 ] ; xx [ 857 ]
= xx [ 30 ] ; xx [ 858 ] = xx [ 30 ] ; xx [ 859 ] = xx [ 30 ] ; xx [ 860 ] =
xx [ 30 ] ; xx [ 861 ] = xx [ 30 ] ; xx [ 862 ] = xx [ 30 ] ; xx [ 863 ] = xx
[ 30 ] ; xx [ 864 ] = xx [ 30 ] ; xx [ 865 ] = xx [ 30 ] ; xx [ 866 ] = xx [
30 ] ; xx [ 867 ] = xx [ 382 ] + xx [ 15 ] ; xx [ 868 ] = xx [ 376 ] + xx [
127 ] ; xx [ 869 ] = xx [ 385 ] + xx [ 135 ] ; xx [ 870 ] = xx [ 44 ] + xx [
124 ] ; xx [ 871 ] = xx [ 144 ] - ( xx [ 26 ] * xx [ 49 ] + xx [ 27 ] * xx [
45 ] ) * xx [ 47 ] + xx [ 9 ] ; xx [ 872 ] = xx [ 147 ] - ( xx [ 26 ] * xx [
62 ] + xx [ 27 ] * xx [ 61 ] ) * xx [ 47 ] + xx [ 50 ] ; xx [ 873 ] = ( xx [
25 ] * xx [ 64 ] + xx [ 393 ] ) * xx [ 47 ] + xx [ 35 ] ; xx [ 874 ] = xx [
30 ] ; xx [ 875 ] = xx [ 30 ] ; xx [ 876 ] = xx [ 30 ] ; xx [ 877 ] = xx [ 30
] ; xx [ 878 ] = - ( ( xx [ 462 ] * xx [ 115 ] + xx [ 471 ] ) * xx [ 47 ] -
xx [ 109 ] + xx [ 477 ] + xx [ 78 ] ) ; xx [ 879 ] = xx [ 30 ] ; xx [ 880 ] =
- ( xx [ 485 ] + ( xx [ 103 ] + xx [ 464 ] * xx [ 10 ] ) * xx [ 47 ] - xx [
46 ] ) ; xx [ 881 ] = - ( ( xx [ 1 ] + xx [ 464 ] * xx [ 395 ] ) * xx [ 47 ]
+ xx [ 488 ] ) ; xx [ 882 ] = xx [ 30 ] ; xx [ 883 ] = xx [ 30 ] ; xx [ 884 ]
= xx [ 30 ] ; xx [ 885 ] = xx [ 30 ] ; xx [ 886 ] = xx [ 30 ] ; xx [ 887 ] =
xx [ 30 ] ; xx [ 888 ] = xx [ 30 ] ; xx [ 889 ] = xx [ 30 ] ; xx [ 890 ] = xx
[ 30 ] ; xx [ 891 ] = xx [ 30 ] ; xx [ 892 ] = xx [ 30 ] ; xx [ 893 ] = xx [
30 ] ; xx [ 1 ] = xx [ 8 ] * xx [ 436 ] ; xx [ 2 ] = xx [ 5 ] * xx [ 436 ] ;
xx [ 7 ] = xx [ 2 ] * xx [ 65 ] - xx [ 58 ] * xx [ 1 ] ; xx [ 9 ] = xx [ 60 ]
* xx [ 2 ] ; xx [ 15 ] = xx [ 60 ] * xx [ 1 ] ; xx [ 16 ] = xx [ 7 ] ; xx [
17 ] = - xx [ 9 ] ; pm_math_Vector3_cross_ra ( xx + 136 , xx + 15 , xx + 33 )
; xx [ 10 ] = ( xx [ 47 ] * ( xx [ 34 ] - xx [ 7 ] * xx [ 31 ] ) + xx [ 442 ]
) * xx [ 46 ] ; xx [ 7 ] = ( xx [ 1 ] + xx [ 47 ] * ( xx [ 35 ] + xx [ 9 ] *
xx [ 31 ] ) + xx [ 443 ] ) * xx [ 46 ] ; xx [ 9 ] = xx [ 171 ] * xx [ 10 ] +
xx [ 172 ] * xx [ 7 ] ; xx [ 11 ] = xx [ 170 ] * xx [ 10 ] ; xx [ 13 ] = xx [
170 ] * xx [ 7 ] ; xx [ 15 ] = - xx [ 9 ] ; xx [ 16 ] = xx [ 11 ] ; xx [ 17 ]
= xx [ 13 ] ; pm_math_Vector3_cross_ra ( xx + 170 , xx + 15 , xx + 33 ) ; xx
[ 15 ] = xx [ 46 ] * xx [ 442 ] ; xx [ 16 ] = xx [ 46 ] * xx [ 443 ] ; xx [
17 ] = xx [ 60 ] * xx [ 15 ] + xx [ 16 ] * xx [ 65 ] ; xx [ 18 ] = xx [ 58 ]
* xx [ 15 ] ; xx [ 24 ] = xx [ 58 ] * xx [ 16 ] ; xx [ 42 ] = - xx [ 17 ] ;
xx [ 43 ] = xx [ 18 ] ; xx [ 44 ] = xx [ 24 ] ; pm_math_Vector3_cross_ra ( xx
+ 136 , xx + 42 , xx + 48 ) ; xx [ 42 ] = ( xx [ 48 ] - xx [ 17 ] * xx [ 31 ]
) * xx [ 47 ] - xx [ 104 ] * xx [ 1 ] ; xx [ 43 ] = xx [ 16 ] + xx [ 47 ] * (
xx [ 49 ] + xx [ 18 ] * xx [ 31 ] ) + xx [ 1 ] * xx [ 110 ] - xx [ 113 ] * xx
[ 2 ] ; xx [ 44 ] = xx [ 47 ] * ( xx [ 50 ] + xx [ 24 ] * xx [ 31 ] ) - xx [
15 ] + xx [ 104 ] * xx [ 2 ] ; pm_math_Quaternion_xform_ra ( xx + 151 , xx +
42 , xx + 15 ) ; xx [ 1 ] = xx [ 8 ] * xx [ 402 ] ; xx [ 2 ] = xx [ 14 ] * xx
[ 1 ] ; xx [ 18 ] = xx [ 5 ] * xx [ 402 ] ; xx [ 24 ] = xx [ 3 ] * xx [ 1 ] -
xx [ 18 ] * xx [ 23 ] ; xx [ 30 ] = xx [ 14 ] * xx [ 18 ] ; xx [ 42 ] = - xx
[ 2 ] ; xx [ 43 ] = xx [ 24 ] ; xx [ 44 ] = - xx [ 30 ] ;
pm_math_Vector3_cross_ra ( xx + 119 , xx + 42 , xx + 48 ) ; xx [ 42 ] = ( xx
[ 2 ] * xx [ 0 ] + xx [ 48 ] ) * xx [ 47 ] - xx [ 18 ] + xx [ 407 ] ; xx [ 43
] = xx [ 47 ] * ( xx [ 49 ] - xx [ 24 ] * xx [ 0 ] ) + xx [ 408 ] ; xx [ 44 ]
= xx [ 1 ] + xx [ 47 ] * ( xx [ 50 ] + xx [ 30 ] * xx [ 0 ] ) + xx [ 409 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 51 , xx + 42 , xx + 48 ) ; xx [ 2 ]
= xx [ 50 ] + xx [ 416 ] ; xx [ 24 ] = xx [ 29 ] * xx [ 414 ] ; xx [ 30 ] =
xx [ 29 ] * xx [ 415 ] ; xx [ 36 ] = xx [ 414 ] - ( xx [ 29 ] * xx [ 24 ] -
xx [ 32 ] * xx [ 30 ] ) * xx [ 47 ] ; xx [ 38 ] = xx [ 48 ] + xx [ 36 ] ; xx
[ 39 ] = xx [ 415 ] - xx [ 47 ] * ( xx [ 32 ] * xx [ 24 ] + xx [ 29 ] * xx [
30 ] ) ; xx [ 24 ] = xx [ 49 ] + xx [ 39 ] ; xx [ 48 ] = - ( xx [ 2 ] * xx [
55 ] ) ; xx [ 49 ] = - ( xx [ 2 ] * xx [ 56 ] ) ; xx [ 50 ] = xx [ 38 ] * xx
[ 55 ] + xx [ 24 ] * xx [ 56 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx +
48 , xx + 61 ) ; xx [ 30 ] = xx [ 46 ] * xx [ 408 ] ; xx [ 45 ] = xx [ 46 ] *
xx [ 409 ] ; xx [ 48 ] = xx [ 14 ] * xx [ 30 ] - xx [ 45 ] * xx [ 23 ] ; xx [
49 ] = xx [ 3 ] * xx [ 30 ] ; xx [ 50 ] = xx [ 3 ] * xx [ 45 ] ; xx [ 66 ] =
xx [ 48 ] ; xx [ 67 ] = - xx [ 49 ] ; xx [ 68 ] = - xx [ 50 ] ;
pm_math_Vector3_cross_ra ( xx + 119 , xx + 66 , xx + 107 ) ; xx [ 66 ] = ( xx
[ 48 ] * xx [ 0 ] + xx [ 107 ] ) * xx [ 47 ] - xx [ 83 ] * xx [ 1 ] ; xx [ 67
] = xx [ 45 ] + xx [ 47 ] * ( xx [ 108 ] - xx [ 49 ] * xx [ 0 ] ) + xx [ 1 ]
* xx [ 88 ] + xx [ 89 ] * xx [ 18 ] ; xx [ 68 ] = xx [ 47 ] * ( xx [ 109 ] -
xx [ 50 ] * xx [ 0 ] ) - xx [ 30 ] - xx [ 83 ] * xx [ 18 ] ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 66 , xx + 48 ) ; xx [ 66 ] = xx
[ 37 ] * xx [ 416 ] ; xx [ 67 ] = - ( xx [ 41 ] * xx [ 416 ] ) ; xx [ 68 ] =
xx [ 39 ] * xx [ 41 ] - xx [ 37 ] * xx [ 36 ] ; pm_math_Quaternion_xform_ra (
xx + 51 , xx + 66 , xx + 107 ) ; pm_math_Vector3_cross_ra ( xx + 42 , xx + 73
, xx + 66 ) ; xx [ 42 ] = xx [ 107 ] + xx [ 66 ] ; xx [ 43 ] = xx [ 108 ] +
xx [ 67 ] ; xx [ 44 ] = xx [ 109 ] + xx [ 68 ] ; pm_math_Quaternion_xform_ra
( xx + 99 , xx + 42 , xx + 66 ) ; xx [ 1 ] = xx [ 47 ] * xx [ 402 ] * xx [ 84
] + xx [ 48 ] + xx [ 66 ] ; xx [ 18 ] = xx [ 76 ] - xx [ 94 ] ; xx [ 30 ] =
xx [ 76 ] - xx [ 87 ] ; xx [ 36 ] = xx [ 402 ] * xx [ 30 ] + xx [ 49 ] + xx [
67 ] ; xx [ 39 ] = xx [ 47 ] * xx [ 96 ] * xx [ 402 ] + xx [ 50 ] + xx [ 68 ]
; xx [ 42 ] = xx [ 8 ] * xx [ 445 ] ; xx [ 43 ] = xx [ 5 ] * xx [ 445 ] ; xx
[ 44 ] = xx [ 166 ] * xx [ 42 ] - xx [ 43 ] * xx [ 191 ] ; xx [ 45 ] = xx [
174 ] * xx [ 43 ] ; xx [ 48 ] = - ( xx [ 174 ] * xx [ 42 ] ) ; xx [ 49 ] = xx
[ 44 ] ; xx [ 50 ] = - xx [ 45 ] ; pm_math_Vector3_cross_ra ( xx + 203 , xx +
48 , xx + 66 ) ; xx [ 48 ] = ( xx [ 47 ] * ( xx [ 67 ] - xx [ 44 ] * xx [ 131
] ) + xx [ 451 ] ) * xx [ 46 ] ; xx [ 44 ] = ( xx [ 42 ] + xx [ 47 ] * ( xx [
68 ] + xx [ 45 ] * xx [ 131 ] ) + xx [ 452 ] ) * xx [ 46 ] ; xx [ 45 ] = xx [
209 ] * xx [ 48 ] + xx [ 210 ] * xx [ 44 ] ; xx [ 49 ] = xx [ 208 ] * xx [ 48
] ; xx [ 50 ] = xx [ 208 ] * xx [ 44 ] ; xx [ 66 ] = - xx [ 45 ] ; xx [ 67 ]
= xx [ 49 ] ; xx [ 68 ] = xx [ 50 ] ; pm_math_Vector3_cross_ra ( xx + 208 ,
xx + 66 , xx + 84 ) ; xx [ 57 ] = xx [ 46 ] * xx [ 451 ] ; xx [ 59 ] = xx [
46 ] * xx [ 452 ] ; xx [ 64 ] = xx [ 174 ] * xx [ 57 ] - xx [ 59 ] * xx [ 191
] ; xx [ 66 ] = xx [ 166 ] * xx [ 57 ] ; xx [ 67 ] = xx [ 166 ] * xx [ 59 ] ;
xx [ 68 ] = xx [ 64 ] ; xx [ 69 ] = - xx [ 66 ] ; xx [ 70 ] = - xx [ 67 ] ;
pm_math_Vector3_cross_ra ( xx + 203 , xx + 68 , xx + 92 ) ; xx [ 68 ] = ( xx
[ 64 ] * xx [ 131 ] + xx [ 92 ] ) * xx [ 47 ] - xx [ 218 ] * xx [ 42 ] ; xx [
69 ] = xx [ 59 ] + xx [ 47 ] * ( xx [ 93 ] - xx [ 66 ] * xx [ 131 ] ) + xx [
42 ] * xx [ 221 ] + xx [ 223 ] * xx [ 43 ] ; xx [ 70 ] = xx [ 47 ] * ( xx [
94 ] - xx [ 67 ] * xx [ 131 ] ) - xx [ 57 ] - xx [ 218 ] * xx [ 43 ] ;
pm_math_Quaternion_xform_ra ( xx + 199 , xx + 68 , xx + 92 ) ; xx [ 66 ] = xx
[ 2 ] * xx [ 80 ] ; xx [ 67 ] = - ( xx [ 2 ] * xx [ 91 ] ) ; xx [ 68 ] = xx [
24 ] * xx [ 91 ] - xx [ 38 ] * xx [ 80 ] ; pm_math_Quaternion_xform_ra ( xx +
25 , xx + 66 , xx + 95 ) ; xx [ 42 ] = xx [ 76 ] - xx [ 212 ] ; xx [ 43 ] =
xx [ 8 ] * xx [ 454 ] ; xx [ 57 ] = xx [ 5 ] * xx [ 454 ] ; xx [ 59 ] = xx [
57 ] * xx [ 258 ] - xx [ 242 ] * xx [ 43 ] ; xx [ 64 ] = xx [ 257 ] * xx [ 57
] ; xx [ 66 ] = xx [ 257 ] * xx [ 43 ] ; xx [ 67 ] = xx [ 59 ] ; xx [ 68 ] =
- xx [ 64 ] ; pm_math_Vector3_cross_ra ( xx + 270 , xx + 66 , xx + 107 ) ; xx
[ 66 ] = ( xx [ 47 ] * ( xx [ 108 ] - xx [ 59 ] * xx [ 234 ] ) + xx [ 460 ] )
* xx [ 46 ] ; xx [ 59 ] = ( xx [ 43 ] + xx [ 47 ] * ( xx [ 109 ] + xx [ 64 ]
* xx [ 234 ] ) + xx [ 461 ] ) * xx [ 46 ] ; xx [ 64 ] = xx [ 276 ] * xx [ 66
] + xx [ 277 ] * xx [ 59 ] ; xx [ 67 ] = xx [ 275 ] * xx [ 66 ] ; xx [ 68 ] =
xx [ 275 ] * xx [ 59 ] ; xx [ 107 ] = - xx [ 64 ] ; xx [ 108 ] = xx [ 67 ] ;
xx [ 109 ] = xx [ 68 ] ; pm_math_Vector3_cross_ra ( xx + 275 , xx + 107 , xx
+ 115 ) ; xx [ 69 ] = xx [ 46 ] * xx [ 460 ] ; xx [ 70 ] = xx [ 46 ] * xx [
461 ] ; xx [ 72 ] = xx [ 257 ] * xx [ 69 ] + xx [ 70 ] * xx [ 258 ] ; xx [ 79
] = xx [ 242 ] * xx [ 69 ] ; xx [ 81 ] = xx [ 242 ] * xx [ 70 ] ; xx [ 107 ]
= - xx [ 72 ] ; xx [ 108 ] = xx [ 79 ] ; xx [ 109 ] = xx [ 81 ] ;
pm_math_Vector3_cross_ra ( xx + 270 , xx + 107 , xx + 122 ) ; xx [ 107 ] = (
xx [ 122 ] - xx [ 72 ] * xx [ 234 ] ) * xx [ 47 ] - xx [ 288 ] * xx [ 43 ] ;
xx [ 108 ] = xx [ 70 ] + xx [ 47 ] * ( xx [ 123 ] + xx [ 79 ] * xx [ 234 ] )
+ xx [ 43 ] * xx [ 291 ] - xx [ 293 ] * xx [ 57 ] ; xx [ 109 ] = xx [ 47 ] *
( xx [ 124 ] + xx [ 81 ] * xx [ 234 ] ) - xx [ 69 ] + xx [ 288 ] * xx [ 57 ]
; pm_math_Quaternion_xform_ra ( xx + 266 , xx + 107 , xx + 122 ) ; xx [ 107 ]
= xx [ 2 ] * xx [ 232 ] ; xx [ 108 ] = xx [ 2 ] * xx [ 238 ] ; xx [ 109 ] = -
( xx [ 38 ] * xx [ 232 ] + xx [ 24 ] * xx [ 238 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 107 , xx + 125 ) ; xx [ 43 ] =
xx [ 76 ] - xx [ 282 ] ; xx [ 57 ] = xx [ 8 ] * xx [ 418 ] ; xx [ 69 ] = xx [
5 ] * xx [ 418 ] ; xx [ 70 ] = xx [ 69 ] * xx [ 331 ] - xx [ 321 ] * xx [ 57
] ; xx [ 72 ] = xx [ 330 ] * xx [ 69 ] ; xx [ 107 ] = xx [ 330 ] * xx [ 57 ]
; xx [ 108 ] = xx [ 70 ] ; xx [ 109 ] = - xx [ 72 ] ;
pm_math_Vector3_cross_ra ( xx + 342 , xx + 107 , xx + 128 ) ; xx [ 79 ] = (
xx [ 47 ] * ( xx [ 129 ] - xx [ 70 ] * xx [ 306 ] ) + xx [ 424 ] ) * xx [ 46
] ; xx [ 70 ] = ( xx [ 57 ] + xx [ 47 ] * ( xx [ 130 ] + xx [ 72 ] * xx [ 306
] ) + xx [ 425 ] ) * xx [ 46 ] ; xx [ 72 ] = xx [ 348 ] * xx [ 79 ] + xx [
349 ] * xx [ 70 ] ; xx [ 81 ] = xx [ 347 ] * xx [ 79 ] ; xx [ 82 ] = xx [ 347
] * xx [ 70 ] ; xx [ 107 ] = - xx [ 72 ] ; xx [ 108 ] = xx [ 81 ] ; xx [ 109
] = xx [ 82 ] ; pm_math_Vector3_cross_ra ( xx + 347 , xx + 107 , xx + 128 ) ;
xx [ 87 ] = xx [ 46 ] * xx [ 424 ] ; xx [ 98 ] = xx [ 46 ] * xx [ 425 ] ; xx
[ 103 ] = xx [ 330 ] * xx [ 87 ] + xx [ 98 ] * xx [ 331 ] ; xx [ 105 ] = xx [
321 ] * xx [ 87 ] ; xx [ 107 ] = xx [ 321 ] * xx [ 98 ] ; xx [ 132 ] = - xx [
103 ] ; xx [ 133 ] = xx [ 105 ] ; xx [ 134 ] = xx [ 107 ] ;
pm_math_Vector3_cross_ra ( xx + 342 , xx + 132 , xx + 139 ) ; xx [ 132 ] = (
xx [ 139 ] - xx [ 103 ] * xx [ 306 ] ) * xx [ 47 ] - xx [ 358 ] * xx [ 57 ] ;
xx [ 133 ] = xx [ 98 ] + xx [ 47 ] * ( xx [ 140 ] + xx [ 105 ] * xx [ 306 ] )
+ xx [ 57 ] * xx [ 361 ] - xx [ 363 ] * xx [ 69 ] ; xx [ 134 ] = xx [ 47 ] *
( xx [ 141 ] + xx [ 107 ] * xx [ 306 ] ) - xx [ 87 ] + xx [ 358 ] * xx [ 69 ]
; pm_math_Quaternion_xform_ra ( xx + 338 , xx + 132 , xx + 107 ) ; xx [ 132 ]
= - ( xx [ 2 ] * xx [ 310 ] ) ; xx [ 133 ] = xx [ 2 ] * xx [ 316 ] ; xx [ 134
] = xx [ 38 ] * xx [ 310 ] - xx [ 24 ] * xx [ 316 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 132 , xx + 139 ) ; xx [ 57 ] =
xx [ 76 ] - xx [ 352 ] ; xx [ 69 ] = xx [ 8 ] * xx [ 427 ] ; xx [ 87 ] = xx [
5 ] * xx [ 427 ] ; xx [ 98 ] = xx [ 106 ] * xx [ 69 ] - xx [ 87 ] * xx [ 329
] ; xx [ 103 ] = xx [ 114 ] * xx [ 87 ] ; xx [ 132 ] = - ( xx [ 114 ] * xx [
69 ] ) ; xx [ 133 ] = xx [ 98 ] ; xx [ 134 ] = - xx [ 103 ] ;
pm_math_Vector3_cross_ra ( xx + 397 , xx + 132 , xx + 142 ) ; xx [ 105 ] = (
xx [ 47 ] * ( xx [ 143 ] - xx [ 98 ] * xx [ 71 ] ) + xx [ 433 ] ) * xx [ 46 ]
; xx [ 98 ] = ( xx [ 69 ] + xx [ 47 ] * ( xx [ 144 ] + xx [ 103 ] * xx [ 71 ]
) + xx [ 434 ] ) * xx [ 46 ] ; xx [ 103 ] = xx [ 464 ] * xx [ 105 ] + xx [
465 ] * xx [ 98 ] ; xx [ 111 ] = xx [ 463 ] * xx [ 105 ] ; xx [ 112 ] = xx [
463 ] * xx [ 98 ] ; xx [ 132 ] = - xx [ 103 ] ; xx [ 133 ] = xx [ 111 ] ; xx
[ 134 ] = xx [ 112 ] ; pm_math_Vector3_cross_ra ( xx + 463 , xx + 132 , xx +
142 ) ; xx [ 118 ] = xx [ 46 ] * xx [ 433 ] ; xx [ 132 ] = xx [ 46 ] * xx [
434 ] ; xx [ 133 ] = xx [ 114 ] * xx [ 118 ] - xx [ 132 ] * xx [ 329 ] ; xx [
134 ] = xx [ 106 ] * xx [ 118 ] ; xx [ 135 ] = xx [ 106 ] * xx [ 132 ] ; xx [
145 ] = xx [ 133 ] ; xx [ 146 ] = - xx [ 134 ] ; xx [ 147 ] = - xx [ 135 ] ;
pm_math_Vector3_cross_ra ( xx + 397 , xx + 145 , xx + 148 ) ; xx [ 145 ] = (
xx [ 133 ] * xx [ 71 ] + xx [ 148 ] ) * xx [ 47 ] - xx [ 394 ] * xx [ 69 ] ;
xx [ 146 ] = xx [ 132 ] + xx [ 47 ] * ( xx [ 149 ] - xx [ 134 ] * xx [ 71 ] )
+ xx [ 69 ] * xx [ 466 ] + xx [ 467 ] * xx [ 87 ] ; xx [ 147 ] = xx [ 47 ] *
( xx [ 150 ] - xx [ 135 ] * xx [ 71 ] ) - xx [ 118 ] - xx [ 394 ] * xx [ 87 ]
; pm_math_Quaternion_xform_ra ( xx + 386 , xx + 145 , xx + 132 ) ; xx [ 145 ]
= - ( xx [ 2 ] * xx [ 390 ] ) ; xx [ 146 ] = - ( xx [ 2 ] * xx [ 396 ] ) ; xx
[ 147 ] = xx [ 38 ] * xx [ 390 ] + xx [ 24 ] * xx [ 396 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 145 , xx + 148 ) ; xx [ 2 ] = xx
[ 76 ] - xx [ 360 ] ; xx [ 175 ] = xx [ 47 ] * ( xx [ 33 ] - xx [ 9 ] * xx [
169 ] ) + xx [ 47 ] * xx [ 436 ] * xx [ 155 ] + xx [ 15 ] - ( xx [ 61 ] + xx
[ 1 ] ) ; xx [ 176 ] = xx [ 7 ] + ( xx [ 169 ] * xx [ 11 ] + xx [ 34 ] ) * xx
[ 47 ] + xx [ 436 ] * xx [ 18 ] + xx [ 16 ] - ( xx [ 62 ] + xx [ 36 ] ) ; xx
[ 177 ] = ( xx [ 169 ] * xx [ 13 ] + xx [ 35 ] ) * xx [ 47 ] - xx [ 10 ] + xx
[ 47 ] * xx [ 77 ] * xx [ 436 ] + xx [ 17 ] - ( xx [ 63 ] + xx [ 39 ] ) ; xx
[ 178 ] = xx [ 47 ] * ( xx [ 84 ] - xx [ 45 ] * xx [ 207 ] ) + xx [ 92 ] - xx
[ 47 ] * xx [ 445 ] * xx [ 226 ] - ( xx [ 95 ] + xx [ 1 ] ) ; xx [ 179 ] = xx
[ 44 ] + ( xx [ 207 ] * xx [ 49 ] + xx [ 85 ] ) * xx [ 47 ] + xx [ 445 ] * xx
[ 42 ] + xx [ 93 ] - ( xx [ 96 ] + xx [ 36 ] ) ; xx [ 180 ] = ( xx [ 207 ] *
xx [ 50 ] + xx [ 86 ] ) * xx [ 47 ] - xx [ 48 ] + xx [ 47 ] * xx [ 213 ] * xx
[ 445 ] + xx [ 94 ] - ( xx [ 97 ] + xx [ 39 ] ) ; xx [ 181 ] = xx [ 47 ] * (
xx [ 115 ] - xx [ 64 ] * xx [ 274 ] ) + xx [ 122 ] - xx [ 47 ] * xx [ 454 ] *
xx [ 296 ] - ( xx [ 125 ] + xx [ 1 ] ) ; xx [ 182 ] = xx [ 59 ] + ( xx [ 274
] * xx [ 67 ] + xx [ 116 ] ) * xx [ 47 ] + xx [ 454 ] * xx [ 43 ] + xx [ 123
] - ( xx [ 126 ] + xx [ 36 ] ) ; xx [ 183 ] = ( xx [ 274 ] * xx [ 68 ] + xx [
117 ] ) * xx [ 47 ] - xx [ 66 ] + xx [ 47 ] * xx [ 283 ] * xx [ 454 ] + xx [
124 ] - ( xx [ 127 ] + xx [ 39 ] ) ; xx [ 184 ] = xx [ 47 ] * ( xx [ 128 ] -
xx [ 72 ] * xx [ 346 ] ) + xx [ 47 ] * xx [ 418 ] * xx [ 366 ] + xx [ 107 ] -
( xx [ 139 ] + xx [ 1 ] ) ; xx [ 185 ] = xx [ 70 ] + ( xx [ 346 ] * xx [ 81 ]
+ xx [ 129 ] ) * xx [ 47 ] + xx [ 418 ] * xx [ 57 ] + xx [ 108 ] - ( xx [ 140
] + xx [ 36 ] ) ; xx [ 186 ] = ( xx [ 346 ] * xx [ 82 ] + xx [ 130 ] ) * xx [
47 ] - xx [ 79 ] + xx [ 47 ] * xx [ 353 ] * xx [ 418 ] + xx [ 109 ] - ( xx [
141 ] + xx [ 39 ] ) ; xx [ 187 ] = xx [ 47 ] * ( xx [ 142 ] - xx [ 103 ] * xx
[ 462 ] ) + xx [ 132 ] - xx [ 47 ] * xx [ 427 ] * xx [ 472 ] - ( xx [ 148 ] +
xx [ 1 ] ) ; xx [ 188 ] = xx [ 98 ] + ( xx [ 462 ] * xx [ 111 ] + xx [ 143 ]
) * xx [ 47 ] + xx [ 427 ] * xx [ 2 ] + xx [ 133 ] - ( xx [ 149 ] + xx [ 36 ]
) ; xx [ 189 ] = ( xx [ 462 ] * xx [ 112 ] + xx [ 144 ] ) * xx [ 47 ] - xx [
105 ] + xx [ 47 ] * xx [ 364 ] * xx [ 427 ] + xx [ 134 ] - ( xx [ 150 ] + xx
[ 39 ] ) ; memcpy ( xx + 921 , xx + 489 , 405 * sizeof ( double ) ) ;
factorAndSolveWide ( 15 , 27 , xx + 921 , xx + 371 , xx + 474 , ii + 0 , xx +
175 , xx [ 4 ] , xx + 894 ) ; xx [ 1 ] = xx [ 402 ] + xx [ 894 ] ; xx [ 4 ] =
xx [ 407 ] + xx [ 895 ] ; xx [ 7 ] = xx [ 408 ] + xx [ 896 ] ; xx [ 9 ] = xx
[ 409 ] + xx [ 897 ] ; xx [ 10 ] = xx [ 414 ] + xx [ 898 ] ; xx [ 11 ] = xx [
415 ] + xx [ 899 ] ; xx [ 13 ] = xx [ 416 ] + xx [ 900 ] ; xx [ 15 ] = xx [
418 ] + xx [ 901 ] ; xx [ 16 ] = xx [ 424 ] + xx [ 903 ] ; xx [ 17 ] = xx [
425 ] + xx [ 904 ] ; xx [ 24 ] = xx [ 427 ] + xx [ 905 ] ; xx [ 33 ] = xx [
433 ] + xx [ 907 ] ; xx [ 34 ] = xx [ 434 ] + xx [ 908 ] ; xx [ 35 ] = xx [
436 ] + xx [ 909 ] ; xx [ 36 ] = xx [ 442 ] + xx [ 911 ] ; xx [ 38 ] = xx [
443 ] + xx [ 912 ] ; xx [ 39 ] = xx [ 445 ] + xx [ 913 ] ; xx [ 44 ] = xx [
451 ] + xx [ 915 ] ; xx [ 45 ] = xx [ 452 ] + xx [ 916 ] ; xx [ 48 ] = xx [
454 ] + xx [ 917 ] ; xx [ 49 ] = xx [ 460 ] + xx [ 919 ] ; xx [ 50 ] = xx [
461 ] + xx [ 920 ] ; xx [ 474 ] = xx [ 401 ] ; xx [ 475 ] = xx [ 1 ] ; xx [
476 ] = xx [ 403 ] ; xx [ 477 ] = xx [ 404 ] ; xx [ 478 ] = xx [ 405 ] ; xx [
479 ] = xx [ 406 ] ; xx [ 480 ] = xx [ 4 ] ; xx [ 481 ] = xx [ 7 ] ; xx [ 482
] = xx [ 9 ] ; xx [ 483 ] = xx [ 410 ] ; xx [ 484 ] = xx [ 411 ] ; xx [ 485 ]
= xx [ 412 ] ; xx [ 486 ] = xx [ 413 ] ; xx [ 487 ] = xx [ 10 ] ; xx [ 488 ]
= xx [ 11 ] ; xx [ 489 ] = xx [ 13 ] ; xx [ 490 ] = xx [ 417 ] ; xx [ 491 ] =
xx [ 15 ] ; xx [ 492 ] = xx [ 419 ] ; xx [ 493 ] = xx [ 420 ] ; xx [ 494 ] =
xx [ 421 ] ; xx [ 495 ] = xx [ 422 ] ; xx [ 496 ] = xx [ 423 ] + xx [ 902 ] ;
xx [ 497 ] = xx [ 16 ] ; xx [ 498 ] = xx [ 17 ] ; xx [ 499 ] = xx [ 426 ] ;
xx [ 500 ] = xx [ 24 ] ; xx [ 501 ] = xx [ 428 ] ; xx [ 502 ] = xx [ 429 ] ;
xx [ 503 ] = xx [ 430 ] ; xx [ 504 ] = xx [ 431 ] ; xx [ 505 ] = xx [ 432 ] +
xx [ 906 ] ; xx [ 506 ] = xx [ 33 ] ; xx [ 507 ] = xx [ 34 ] ; xx [ 508 ] =
xx [ 435 ] ; xx [ 509 ] = xx [ 35 ] ; xx [ 510 ] = xx [ 437 ] ; xx [ 511 ] =
xx [ 438 ] ; xx [ 512 ] = xx [ 439 ] ; xx [ 513 ] = xx [ 440 ] ; xx [ 514 ] =
xx [ 441 ] + xx [ 910 ] ; xx [ 515 ] = xx [ 36 ] ; xx [ 516 ] = xx [ 38 ] ;
xx [ 517 ] = xx [ 444 ] ; xx [ 518 ] = xx [ 39 ] ; xx [ 519 ] = xx [ 446 ] ;
xx [ 520 ] = xx [ 447 ] ; xx [ 521 ] = xx [ 448 ] ; xx [ 522 ] = xx [ 449 ] ;
xx [ 523 ] = xx [ 450 ] + xx [ 914 ] ; xx [ 524 ] = xx [ 44 ] ; xx [ 525 ] =
xx [ 45 ] ; xx [ 526 ] = xx [ 453 ] ; xx [ 527 ] = xx [ 48 ] ; xx [ 528 ] =
xx [ 455 ] ; xx [ 529 ] = xx [ 456 ] ; xx [ 530 ] = xx [ 457 ] ; xx [ 531 ] =
xx [ 458 ] ; xx [ 532 ] = xx [ 459 ] + xx [ 918 ] ; xx [ 533 ] = xx [ 49 ] ;
xx [ 534 ] = xx [ 50 ] ; xx [ 59 ] = xx [ 1 ] * xx [ 8 ] ; xx [ 61 ] = xx [
14 ] * xx [ 59 ] ; xx [ 62 ] = xx [ 1 ] * xx [ 5 ] ; xx [ 63 ] = xx [ 3 ] *
xx [ 59 ] - xx [ 62 ] * xx [ 23 ] ; xx [ 64 ] = xx [ 14 ] * xx [ 62 ] ; xx [
66 ] = - xx [ 61 ] ; xx [ 67 ] = xx [ 63 ] ; xx [ 68 ] = - xx [ 64 ] ;
pm_math_Vector3_cross_ra ( xx + 119 , xx + 66 , xx + 84 ) ; xx [ 66 ] = ( xx
[ 61 ] * xx [ 0 ] + xx [ 84 ] ) * xx [ 47 ] - xx [ 62 ] + xx [ 4 ] ; xx [ 67
] = xx [ 47 ] * ( xx [ 85 ] - xx [ 63 ] * xx [ 0 ] ) + xx [ 7 ] ; xx [ 68 ] =
xx [ 59 ] + xx [ 47 ] * ( xx [ 86 ] + xx [ 64 ] * xx [ 0 ] ) + xx [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 51 , xx + 66 , xx + 84 ) ; xx [ 4 ]
= xx [ 86 ] + xx [ 13 ] ; xx [ 61 ] = xx [ 10 ] * xx [ 29 ] ; xx [ 63 ] = xx
[ 11 ] * xx [ 29 ] ; xx [ 64 ] = xx [ 10 ] - ( xx [ 29 ] * xx [ 61 ] - xx [
32 ] * xx [ 63 ] ) * xx [ 47 ] ; xx [ 10 ] = xx [ 84 ] + xx [ 64 ] ; xx [ 69
] = xx [ 11 ] - xx [ 47 ] * ( xx [ 32 ] * xx [ 61 ] + xx [ 29 ] * xx [ 63 ] )
; xx [ 11 ] = xx [ 85 ] + xx [ 69 ] ; xx [ 84 ] = - ( xx [ 4 ] * xx [ 55 ] )
; xx [ 85 ] = - ( xx [ 4 ] * xx [ 56 ] ) ; xx [ 86 ] = xx [ 10 ] * xx [ 55 ]
+ xx [ 11 ] * xx [ 56 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 84 ,
xx + 92 ) ; xx [ 29 ] = xx [ 7 ] * xx [ 46 ] ; xx [ 7 ] = xx [ 9 ] * xx [ 46
] ; xx [ 9 ] = xx [ 14 ] * xx [ 29 ] - xx [ 7 ] * xx [ 23 ] ; xx [ 14 ] = xx
[ 3 ] * xx [ 29 ] ; xx [ 23 ] = xx [ 3 ] * xx [ 7 ] ; xx [ 84 ] = xx [ 9 ] ;
xx [ 85 ] = - xx [ 14 ] ; xx [ 86 ] = - xx [ 23 ] ; pm_math_Vector3_cross_ra
( xx + 119 , xx + 84 , xx + 95 ) ; xx [ 84 ] = ( xx [ 9 ] * xx [ 0 ] + xx [
95 ] ) * xx [ 47 ] - xx [ 59 ] * xx [ 83 ] ; xx [ 85 ] = xx [ 7 ] + xx [ 47 ]
* ( xx [ 96 ] - xx [ 14 ] * xx [ 0 ] ) + xx [ 59 ] * xx [ 88 ] + xx [ 89 ] *
xx [ 62 ] ; xx [ 86 ] = xx [ 47 ] * ( xx [ 97 ] - xx [ 23 ] * xx [ 0 ] ) - xx
[ 29 ] - xx [ 62 ] * xx [ 83 ] ; pm_math_Quaternion_xform_ra ( xx + 19 , xx +
84 , xx + 61 ) ; xx [ 19 ] = xx [ 13 ] * xx [ 37 ] ; xx [ 20 ] = - ( xx [ 13
] * xx [ 41 ] ) ; xx [ 21 ] = xx [ 69 ] * xx [ 41 ] - xx [ 37 ] * xx [ 64 ] ;
pm_math_Quaternion_xform_ra ( xx + 51 , xx + 19 , xx + 81 ) ;
pm_math_Vector3_cross_ra ( xx + 66 , xx + 73 , xx + 19 ) ; xx [ 51 ] = xx [
81 ] + xx [ 19 ] ; xx [ 52 ] = xx [ 82 ] + xx [ 20 ] ; xx [ 53 ] = xx [ 83 ]
+ xx [ 21 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 51 , xx + 19 ) ;
xx [ 0 ] = xx [ 1 ] * xx [ 90 ] + xx [ 61 ] + xx [ 19 ] ; xx [ 3 ] = xx [ 35
] * xx [ 8 ] ; xx [ 7 ] = xx [ 35 ] * xx [ 5 ] ; xx [ 9 ] = xx [ 7 ] * xx [
65 ] - xx [ 58 ] * xx [ 3 ] ; xx [ 13 ] = xx [ 60 ] * xx [ 7 ] ; xx [ 51 ] =
xx [ 60 ] * xx [ 3 ] ; xx [ 52 ] = xx [ 9 ] ; xx [ 53 ] = - xx [ 13 ] ;
pm_math_Vector3_cross_ra ( xx + 136 , xx + 51 , xx + 54 ) ; xx [ 14 ] = ( xx
[ 47 ] * ( xx [ 55 ] - xx [ 9 ] * xx [ 31 ] ) + xx [ 36 ] ) * xx [ 46 ] ; xx
[ 9 ] = ( xx [ 3 ] + xx [ 47 ] * ( xx [ 56 ] + xx [ 13 ] * xx [ 31 ] ) + xx [
38 ] ) * xx [ 46 ] ; xx [ 13 ] = xx [ 171 ] * xx [ 14 ] + xx [ 172 ] * xx [ 9
] ; xx [ 22 ] = xx [ 170 ] * xx [ 14 ] ; xx [ 23 ] = xx [ 170 ] * xx [ 9 ] ;
xx [ 51 ] = - xx [ 13 ] ; xx [ 52 ] = xx [ 22 ] ; xx [ 53 ] = xx [ 23 ] ;
pm_math_Vector3_cross_ra ( xx + 170 , xx + 51 , xx + 54 ) ; xx [ 29 ] = xx [
36 ] * xx [ 46 ] ; xx [ 32 ] = xx [ 38 ] * xx [ 46 ] ; xx [ 36 ] = xx [ 60 ]
* xx [ 29 ] + xx [ 32 ] * xx [ 65 ] ; xx [ 37 ] = xx [ 58 ] * xx [ 29 ] ; xx
[ 38 ] = xx [ 58 ] * xx [ 32 ] ; xx [ 51 ] = - xx [ 36 ] ; xx [ 52 ] = xx [
37 ] ; xx [ 53 ] = xx [ 38 ] ; pm_math_Vector3_cross_ra ( xx + 136 , xx + 51
, xx + 58 ) ; xx [ 51 ] = ( xx [ 58 ] - xx [ 36 ] * xx [ 31 ] ) * xx [ 47 ] -
xx [ 3 ] * xx [ 104 ] ; xx [ 52 ] = xx [ 32 ] + xx [ 47 ] * ( xx [ 59 ] + xx
[ 37 ] * xx [ 31 ] ) + xx [ 3 ] * xx [ 110 ] - xx [ 113 ] * xx [ 7 ] ; xx [
53 ] = xx [ 47 ] * ( xx [ 60 ] + xx [ 38 ] * xx [ 31 ] ) - xx [ 29 ] + xx [ 7
] * xx [ 104 ] ; pm_math_Quaternion_xform_ra ( xx + 151 , xx + 51 , xx + 36 )
; xx [ 3 ] = xx [ 1 ] * xx [ 30 ] + xx [ 62 ] + xx [ 20 ] ; xx [ 7 ] = xx [ 1
] * xx [ 12 ] + xx [ 63 ] + xx [ 21 ] ; xx [ 19 ] = xx [ 4 ] * xx [ 80 ] ; xx
[ 20 ] = - ( xx [ 4 ] * xx [ 91 ] ) ; xx [ 21 ] = xx [ 11 ] * xx [ 91 ] - xx
[ 10 ] * xx [ 80 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 19 , xx +
29 ) ; xx [ 1 ] = xx [ 39 ] * xx [ 8 ] ; xx [ 12 ] = xx [ 39 ] * xx [ 5 ] ;
xx [ 19 ] = xx [ 166 ] * xx [ 1 ] - xx [ 12 ] * xx [ 191 ] ; xx [ 20 ] = xx [
174 ] * xx [ 12 ] ; xx [ 51 ] = - ( xx [ 174 ] * xx [ 1 ] ) ; xx [ 52 ] = xx
[ 19 ] ; xx [ 53 ] = - xx [ 20 ] ; pm_math_Vector3_cross_ra ( xx + 203 , xx +
51 , xx + 58 ) ; xx [ 21 ] = ( xx [ 47 ] * ( xx [ 59 ] - xx [ 19 ] * xx [ 131
] ) + xx [ 44 ] ) * xx [ 46 ] ; xx [ 19 ] = ( xx [ 1 ] + xx [ 47 ] * ( xx [
60 ] + xx [ 20 ] * xx [ 131 ] ) + xx [ 45 ] ) * xx [ 46 ] ; xx [ 20 ] = xx [
209 ] * xx [ 21 ] + xx [ 210 ] * xx [ 19 ] ; xx [ 32 ] = xx [ 208 ] * xx [ 21
] ; xx [ 41 ] = xx [ 208 ] * xx [ 19 ] ; xx [ 51 ] = - xx [ 20 ] ; xx [ 52 ]
= xx [ 32 ] ; xx [ 53 ] = xx [ 41 ] ; pm_math_Vector3_cross_ra ( xx + 208 ,
xx + 51 , xx + 58 ) ; xx [ 51 ] = xx [ 44 ] * xx [ 46 ] ; xx [ 44 ] = xx [ 45
] * xx [ 46 ] ; xx [ 45 ] = xx [ 174 ] * xx [ 51 ] - xx [ 44 ] * xx [ 191 ] ;
xx [ 52 ] = xx [ 166 ] * xx [ 51 ] ; xx [ 53 ] = xx [ 166 ] * xx [ 44 ] ; xx
[ 61 ] = xx [ 45 ] ; xx [ 62 ] = - xx [ 52 ] ; xx [ 63 ] = - xx [ 53 ] ;
pm_math_Vector3_cross_ra ( xx + 203 , xx + 61 , xx + 64 ) ; xx [ 61 ] = ( xx
[ 45 ] * xx [ 131 ] + xx [ 64 ] ) * xx [ 47 ] - xx [ 1 ] * xx [ 218 ] ; xx [
62 ] = xx [ 44 ] + xx [ 47 ] * ( xx [ 65 ] - xx [ 52 ] * xx [ 131 ] ) + xx [
1 ] * xx [ 221 ] + xx [ 223 ] * xx [ 12 ] ; xx [ 63 ] = xx [ 47 ] * ( xx [ 66
] - xx [ 53 ] * xx [ 131 ] ) - xx [ 51 ] - xx [ 12 ] * xx [ 218 ] ;
pm_math_Quaternion_xform_ra ( xx + 199 , xx + 61 , xx + 51 ) ; xx [ 61 ] = xx
[ 4 ] * xx [ 232 ] ; xx [ 62 ] = xx [ 4 ] * xx [ 238 ] ; xx [ 63 ] = - ( xx [
10 ] * xx [ 232 ] + xx [ 11 ] * xx [ 238 ] ) ; pm_math_Quaternion_xform_ra (
xx + 25 , xx + 61 , xx + 64 ) ; xx [ 1 ] = xx [ 48 ] * xx [ 8 ] ; xx [ 12 ] =
xx [ 48 ] * xx [ 5 ] ; xx [ 44 ] = xx [ 12 ] * xx [ 258 ] - xx [ 242 ] * xx [
1 ] ; xx [ 45 ] = xx [ 257 ] * xx [ 12 ] ; xx [ 61 ] = xx [ 257 ] * xx [ 1 ]
; xx [ 62 ] = xx [ 44 ] ; xx [ 63 ] = - xx [ 45 ] ; pm_math_Vector3_cross_ra
( xx + 270 , xx + 61 , xx + 67 ) ; xx [ 61 ] = ( xx [ 47 ] * ( xx [ 68 ] - xx
[ 44 ] * xx [ 234 ] ) + xx [ 49 ] ) * xx [ 46 ] ; xx [ 44 ] = ( xx [ 1 ] + xx
[ 47 ] * ( xx [ 69 ] + xx [ 45 ] * xx [ 234 ] ) + xx [ 50 ] ) * xx [ 46 ] ;
xx [ 45 ] = xx [ 276 ] * xx [ 61 ] + xx [ 277 ] * xx [ 44 ] ; xx [ 62 ] = xx
[ 275 ] * xx [ 61 ] ; xx [ 63 ] = xx [ 275 ] * xx [ 44 ] ; xx [ 67 ] = - xx [
45 ] ; xx [ 68 ] = xx [ 62 ] ; xx [ 69 ] = xx [ 63 ] ;
pm_math_Vector3_cross_ra ( xx + 275 , xx + 67 , xx + 72 ) ; xx [ 67 ] = xx [
49 ] * xx [ 46 ] ; xx [ 49 ] = xx [ 50 ] * xx [ 46 ] ; xx [ 50 ] = xx [ 257 ]
* xx [ 67 ] + xx [ 49 ] * xx [ 258 ] ; xx [ 68 ] = xx [ 242 ] * xx [ 67 ] ;
xx [ 69 ] = xx [ 242 ] * xx [ 49 ] ; xx [ 75 ] = - xx [ 50 ] ; xx [ 76 ] = xx
[ 68 ] ; xx [ 77 ] = xx [ 69 ] ; pm_math_Vector3_cross_ra ( xx + 270 , xx +
75 , xx + 79 ) ; xx [ 75 ] = ( xx [ 79 ] - xx [ 50 ] * xx [ 234 ] ) * xx [ 47
] - xx [ 1 ] * xx [ 288 ] ; xx [ 76 ] = xx [ 49 ] + xx [ 47 ] * ( xx [ 80 ] +
xx [ 68 ] * xx [ 234 ] ) + xx [ 1 ] * xx [ 291 ] - xx [ 293 ] * xx [ 12 ] ;
xx [ 77 ] = xx [ 47 ] * ( xx [ 81 ] + xx [ 69 ] * xx [ 234 ] ) - xx [ 67 ] +
xx [ 12 ] * xx [ 288 ] ; pm_math_Quaternion_xform_ra ( xx + 266 , xx + 75 ,
xx + 67 ) ; xx [ 75 ] = - ( xx [ 4 ] * xx [ 310 ] ) ; xx [ 76 ] = xx [ 4 ] *
xx [ 316 ] ; xx [ 77 ] = xx [ 10 ] * xx [ 310 ] - xx [ 11 ] * xx [ 316 ] ;
pm_math_Quaternion_xform_ra ( xx + 25 , xx + 75 , xx + 79 ) ; xx [ 1 ] = xx [
15 ] * xx [ 8 ] ; xx [ 12 ] = xx [ 15 ] * xx [ 5 ] ; xx [ 49 ] = xx [ 12 ] *
xx [ 331 ] - xx [ 321 ] * xx [ 1 ] ; xx [ 50 ] = xx [ 330 ] * xx [ 12 ] ; xx
[ 75 ] = xx [ 330 ] * xx [ 1 ] ; xx [ 76 ] = xx [ 49 ] ; xx [ 77 ] = - xx [
50 ] ; pm_math_Vector3_cross_ra ( xx + 342 , xx + 75 , xx + 82 ) ; xx [ 70 ]
= ( xx [ 47 ] * ( xx [ 83 ] - xx [ 49 ] * xx [ 306 ] ) + xx [ 16 ] ) * xx [
46 ] ; xx [ 49 ] = ( xx [ 1 ] + xx [ 47 ] * ( xx [ 84 ] + xx [ 50 ] * xx [
306 ] ) + xx [ 17 ] ) * xx [ 46 ] ; xx [ 50 ] = xx [ 348 ] * xx [ 70 ] + xx [
349 ] * xx [ 49 ] ; xx [ 75 ] = xx [ 347 ] * xx [ 70 ] ; xx [ 76 ] = xx [ 347
] * xx [ 49 ] ; xx [ 82 ] = - xx [ 50 ] ; xx [ 83 ] = xx [ 75 ] ; xx [ 84 ] =
xx [ 76 ] ; pm_math_Vector3_cross_ra ( xx + 347 , xx + 82 , xx + 85 ) ; xx [
77 ] = xx [ 16 ] * xx [ 46 ] ; xx [ 16 ] = xx [ 17 ] * xx [ 46 ] ; xx [ 17 ]
= xx [ 330 ] * xx [ 77 ] + xx [ 16 ] * xx [ 331 ] ; xx [ 82 ] = xx [ 321 ] *
xx [ 77 ] ; xx [ 83 ] = xx [ 321 ] * xx [ 16 ] ; xx [ 88 ] = - xx [ 17 ] ; xx
[ 89 ] = xx [ 82 ] ; xx [ 90 ] = xx [ 83 ] ; pm_math_Vector3_cross_ra ( xx +
342 , xx + 88 , xx + 95 ) ; xx [ 88 ] = ( xx [ 95 ] - xx [ 17 ] * xx [ 306 ]
) * xx [ 47 ] - xx [ 1 ] * xx [ 358 ] ; xx [ 89 ] = xx [ 16 ] + xx [ 47 ] * (
xx [ 96 ] + xx [ 82 ] * xx [ 306 ] ) + xx [ 1 ] * xx [ 361 ] - xx [ 363 ] *
xx [ 12 ] ; xx [ 90 ] = xx [ 47 ] * ( xx [ 97 ] + xx [ 83 ] * xx [ 306 ] ) -
xx [ 77 ] + xx [ 12 ] * xx [ 358 ] ; pm_math_Quaternion_xform_ra ( xx + 338 ,
xx + 88 , xx + 82 ) ; xx [ 88 ] = - ( xx [ 4 ] * xx [ 390 ] ) ; xx [ 89 ] = -
( xx [ 4 ] * xx [ 396 ] ) ; xx [ 90 ] = xx [ 10 ] * xx [ 390 ] + xx [ 11 ] *
xx [ 396 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 88 , xx + 10 ) ; xx
[ 1 ] = xx [ 24 ] * xx [ 8 ] ; xx [ 4 ] = xx [ 24 ] * xx [ 5 ] ; xx [ 5 ] =
xx [ 106 ] * xx [ 1 ] - xx [ 4 ] * xx [ 329 ] ; xx [ 8 ] = xx [ 114 ] * xx [
4 ] ; xx [ 25 ] = - ( xx [ 114 ] * xx [ 1 ] ) ; xx [ 26 ] = xx [ 5 ] ; xx [
27 ] = - xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 397 , xx + 25 , xx + 88 )
; xx [ 16 ] = ( xx [ 47 ] * ( xx [ 89 ] - xx [ 5 ] * xx [ 71 ] ) + xx [ 33 ]
) * xx [ 46 ] ; xx [ 5 ] = ( xx [ 1 ] + xx [ 47 ] * ( xx [ 90 ] + xx [ 8 ] *
xx [ 71 ] ) + xx [ 34 ] ) * xx [ 46 ] ; xx [ 8 ] = xx [ 464 ] * xx [ 16 ] +
xx [ 465 ] * xx [ 5 ] ; xx [ 17 ] = xx [ 463 ] * xx [ 16 ] ; xx [ 25 ] = xx [
463 ] * xx [ 5 ] ; xx [ 26 ] = - xx [ 8 ] ; xx [ 27 ] = xx [ 17 ] ; xx [ 28 ]
= xx [ 25 ] ; pm_math_Vector3_cross_ra ( xx + 463 , xx + 26 , xx + 88 ) ; xx
[ 26 ] = xx [ 33 ] * xx [ 46 ] ; xx [ 27 ] = xx [ 34 ] * xx [ 46 ] ; xx [ 28
] = xx [ 114 ] * xx [ 26 ] - xx [ 27 ] * xx [ 329 ] ; xx [ 33 ] = xx [ 106 ]
* xx [ 26 ] ; xx [ 34 ] = xx [ 106 ] * xx [ 27 ] ; xx [ 95 ] = xx [ 28 ] ; xx
[ 96 ] = - xx [ 33 ] ; xx [ 97 ] = - xx [ 34 ] ; pm_math_Vector3_cross_ra (
xx + 397 , xx + 95 , xx + 98 ) ; xx [ 95 ] = ( xx [ 28 ] * xx [ 71 ] + xx [
98 ] ) * xx [ 47 ] - xx [ 1 ] * xx [ 394 ] ; xx [ 96 ] = xx [ 27 ] + xx [ 47
] * ( xx [ 99 ] - xx [ 33 ] * xx [ 71 ] ) + xx [ 1 ] * xx [ 466 ] + xx [ 467
] * xx [ 4 ] ; xx [ 97 ] = xx [ 47 ] * ( xx [ 100 ] - xx [ 34 ] * xx [ 71 ] )
- xx [ 26 ] - xx [ 4 ] * xx [ 394 ] ; pm_math_Quaternion_xform_ra ( xx + 386
, xx + 95 , xx + 26 ) ; xx [ 95 ] = fabs ( xx [ 92 ] + xx [ 0 ] - ( xx [ 47 ]
* ( xx [ 54 ] - xx [ 13 ] * xx [ 169 ] ) + xx [ 35 ] * xx [ 156 ] + xx [ 36 ]
) ) ; xx [ 96 ] = fabs ( xx [ 93 ] + xx [ 3 ] - ( xx [ 9 ] + ( xx [ 169 ] *
xx [ 22 ] + xx [ 55 ] ) * xx [ 47 ] + xx [ 35 ] * xx [ 18 ] + xx [ 37 ] ) ) ;
xx [ 97 ] = fabs ( xx [ 94 ] + xx [ 7 ] - ( ( xx [ 169 ] * xx [ 23 ] + xx [
56 ] ) * xx [ 47 ] - xx [ 14 ] + xx [ 35 ] * xx [ 40 ] + xx [ 38 ] ) ) ; xx [
98 ] = fabs ( xx [ 29 ] + xx [ 0 ] - ( xx [ 47 ] * ( xx [ 58 ] - xx [ 20 ] *
xx [ 207 ] ) + xx [ 51 ] - xx [ 39 ] * xx [ 230 ] ) ) ; xx [ 99 ] = fabs ( xx
[ 30 ] + xx [ 3 ] - ( xx [ 19 ] + ( xx [ 207 ] * xx [ 32 ] + xx [ 59 ] ) * xx
[ 47 ] + xx [ 39 ] * xx [ 42 ] + xx [ 52 ] ) ) ; xx [ 100 ] = fabs ( xx [ 31
] + xx [ 7 ] - ( ( xx [ 207 ] * xx [ 41 ] + xx [ 60 ] ) * xx [ 47 ] - xx [ 21
] + xx [ 39 ] * xx [ 157 ] + xx [ 53 ] ) ) ; xx [ 101 ] = fabs ( xx [ 64 ] +
xx [ 0 ] - ( xx [ 47 ] * ( xx [ 72 ] - xx [ 45 ] * xx [ 274 ] ) + xx [ 67 ] -
xx [ 48 ] * xx [ 300 ] ) ) ; xx [ 102 ] = fabs ( xx [ 65 ] + xx [ 3 ] - ( xx
[ 44 ] + ( xx [ 274 ] * xx [ 62 ] + xx [ 73 ] ) * xx [ 47 ] + xx [ 48 ] * xx
[ 43 ] + xx [ 68 ] ) ) ; xx [ 103 ] = fabs ( xx [ 66 ] + xx [ 7 ] - ( ( xx [
274 ] * xx [ 63 ] + xx [ 74 ] ) * xx [ 47 ] - xx [ 61 ] + xx [ 48 ] * xx [
236 ] + xx [ 69 ] ) ) ; xx [ 104 ] = fabs ( xx [ 79 ] + xx [ 0 ] - ( xx [ 47
] * ( xx [ 85 ] - xx [ 50 ] * xx [ 346 ] ) + xx [ 15 ] * xx [ 370 ] + xx [ 82
] ) ) ; xx [ 105 ] = fabs ( xx [ 80 ] + xx [ 3 ] - ( xx [ 49 ] + ( xx [ 346 ]
* xx [ 75 ] + xx [ 86 ] ) * xx [ 47 ] + xx [ 15 ] * xx [ 57 ] + xx [ 83 ] ) )
; xx [ 106 ] = fabs ( xx [ 81 ] + xx [ 7 ] - ( ( xx [ 346 ] * xx [ 76 ] + xx
[ 87 ] ) * xx [ 47 ] - xx [ 70 ] + xx [ 15 ] * xx [ 315 ] + xx [ 84 ] ) ) ;
xx [ 107 ] = fabs ( xx [ 10 ] + xx [ 0 ] - ( xx [ 47 ] * ( xx [ 88 ] - xx [ 8
] * xx [ 462 ] ) + xx [ 26 ] - xx [ 24 ] * xx [ 473 ] ) ) ; xx [ 108 ] = fabs
( xx [ 11 ] + xx [ 3 ] - ( xx [ 5 ] + ( xx [ 462 ] * xx [ 17 ] + xx [ 89 ] )
* xx [ 47 ] + xx [ 24 ] * xx [ 2 ] + xx [ 27 ] ) ) ; xx [ 109 ] = fabs ( xx [
12 ] + xx [ 7 ] - ( ( xx [ 462 ] * xx [ 25 ] + xx [ 90 ] ) * xx [ 47 ] - xx [
16 ] + xx [ 24 ] * xx [ 78 ] + xx [ 28 ] ) ) ; ii [ 0 ] = 95 ; { int ll ; for
( ll = 96 ; ll < 110 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] =
ll ; } ii [ 0 ] -= 95 ; xx [ 0 ] = xx [ 95 + ( ii [ 0 ] ) ] ; if ( xx [ 0 ] >
xx [ 6 ] ) { switch ( ii [ 0 ] ) { case 0 : case 1 : case 2 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 10' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 11' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 6 : case 7 : case 8 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 12' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : case 10 : case 11 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 8' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 12 : case 13 : case 14 : { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:constraintViolation" ,
 "'hp_v4/Coupler and platform/Spherical Joint 9' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } state [ 0 ] = xx [ 474 ] ; state [ 1 ] = xx [ 475 ] ;
state [ 2 ] = xx [ 476 ] ; state [ 3 ] = xx [ 477 ] ; state [ 4 ] = xx [ 478
] ; state [ 5 ] = xx [ 479 ] ; state [ 6 ] = xx [ 480 ] ; state [ 7 ] = xx [
481 ] ; state [ 8 ] = xx [ 482 ] ; state [ 9 ] = xx [ 483 ] ; state [ 10 ] =
xx [ 484 ] ; state [ 11 ] = xx [ 485 ] ; state [ 12 ] = xx [ 486 ] ; state [
13 ] = xx [ 487 ] ; state [ 14 ] = xx [ 488 ] ; state [ 15 ] = xx [ 489 ] ;
state [ 16 ] = xx [ 490 ] ; state [ 17 ] = xx [ 491 ] ; state [ 18 ] = xx [
492 ] ; state [ 19 ] = xx [ 493 ] ; state [ 20 ] = xx [ 494 ] ; state [ 21 ]
= xx [ 495 ] ; state [ 22 ] = xx [ 496 ] ; state [ 23 ] = xx [ 497 ] ; state
[ 24 ] = xx [ 498 ] ; state [ 25 ] = xx [ 499 ] ; state [ 26 ] = xx [ 500 ] ;
state [ 27 ] = xx [ 501 ] ; state [ 28 ] = xx [ 502 ] ; state [ 29 ] = xx [
503 ] ; state [ 30 ] = xx [ 504 ] ; state [ 31 ] = xx [ 505 ] ; state [ 32 ]
= xx [ 506 ] ; state [ 33 ] = xx [ 507 ] ; state [ 34 ] = xx [ 508 ] ; state
[ 35 ] = xx [ 509 ] ; state [ 36 ] = xx [ 510 ] ; state [ 37 ] = xx [ 511 ] ;
state [ 38 ] = xx [ 512 ] ; state [ 39 ] = xx [ 513 ] ; state [ 40 ] = xx [
514 ] ; state [ 41 ] = xx [ 515 ] ; state [ 42 ] = xx [ 516 ] ; state [ 43 ]
= xx [ 517 ] ; state [ 44 ] = xx [ 518 ] ; state [ 45 ] = xx [ 519 ] ; state
[ 46 ] = xx [ 520 ] ; state [ 47 ] = xx [ 521 ] ; state [ 48 ] = xx [ 522 ] ;
state [ 49 ] = xx [ 523 ] ; state [ 50 ] = xx [ 524 ] ; state [ 51 ] = xx [
525 ] ; state [ 52 ] = xx [ 526 ] ; state [ 53 ] = xx [ 527 ] ; state [ 54 ]
= xx [ 528 ] ; state [ 55 ] = xx [ 529 ] ; state [ 56 ] = xx [ 530 ] ; state
[ 57 ] = xx [ 531 ] ; state [ 58 ] = xx [ 532 ] ; state [ 59 ] = xx [ 533 ] ;
state [ 60 ] = xx [ 534 ] ; return NULL ; } void
hp_v4_a1692be3_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 144 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0
] = 2.0 ; xx [ 1 ] = 0.5004402260104069 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2
] * state [ 0 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] = xx [ 1 ] * xx [ 4
] ; xx [ 6 ] = 1.016807521344378e-3 ; xx [ 7 ] = sin ( xx [ 3 ] ) ; xx [ 3 ]
= xx [ 6 ] * xx [ 7 ] ; xx [ 8 ] = 0.8657710899485228 ; xx [ 9 ] =
0.9999994830510986 ; xx [ 10 ] = xx [ 9 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 1 ] *
xx [ 3 ] + xx [ 8 ] * xx [ 10 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 4 ] ; xx [ 4 ]
= xx [ 8 ] * xx [ 3 ] - xx [ 1 ] * xx [ 10 ] ; xx [ 12 ] = - xx [ 5 ] ; xx [
13 ] = xx [ 7 ] ; xx [ 14 ] = xx [ 11 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 1 ] =
5.084038263768928e-4 ; xx [ 3 ] = 0.9999998707627665 ; xx [ 8 ] = xx [ 1 ] *
state [ 4 ] + xx [ 3 ] * state [ 2 ] ; xx [ 10 ] = xx [ 1 ] * state [ 5 ] -
xx [ 3 ] * state [ 3 ] ; xx [ 16 ] = xx [ 1 ] * state [ 2 ] - xx [ 3 ] *
state [ 4 ] ; xx [ 17 ] = xx [ 1 ] * state [ 3 ] + xx [ 3 ] * state [ 5 ] ;
xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = - xx [ 10 ] ; xx [ 20 ] = - xx [ 16 ] ; xx
[ 21 ] = xx [ 17 ] ; pm_math_Quaternion_compose_ra ( xx + 12 , xx + 18 , xx +
22 ) ; xx [ 18 ] = 0.1395577324697271 ; xx [ 19 ] = 0.9902139361309295 ; xx [
20 ] = xx [ 18 ] * state [ 12 ] - xx [ 19 ] * state [ 9 ] ; xx [ 21 ] = xx [
18 ] * state [ 11 ] + xx [ 19 ] * state [ 10 ] ; xx [ 26 ] = - xx [ 21 ] ; xx
[ 27 ] = xx [ 19 ] * state [ 11 ] - xx [ 18 ] * state [ 10 ] ; xx [ 28 ] = -
xx [ 27 ] ; xx [ 29 ] = xx [ 18 ] * state [ 9 ] + xx [ 19 ] * state [ 12 ] ;
xx [ 18 ] = - xx [ 29 ] ; xx [ 30 ] = xx [ 20 ] ; xx [ 31 ] = xx [ 26 ] ; xx
[ 32 ] = xx [ 28 ] ; xx [ 33 ] = xx [ 18 ] ; pm_math_Quaternion_compose_ra (
xx + 22 , xx + 30 , xx + 34 ) ; xx [ 19 ] = 5.68852606864536e-4 ; xx [ 30 ] =
xx [ 19 ] * xx [ 37 ] ; xx [ 31 ] = 0.07434110703613682 ; xx [ 32 ] = xx [ 19
] * xx [ 35 ] + xx [ 31 ] * xx [ 36 ] ; xx [ 38 ] = - xx [ 30 ] ; xx [ 39 ] =
- ( xx [ 31 ] * xx [ 37 ] ) ; xx [ 40 ] = xx [ 32 ] ;
pm_math_Vector3_cross_ra ( xx + 35 , xx + 38 , xx + 41 ) ; xx [ 38 ] = xx [
26 ] ; xx [ 39 ] = xx [ 28 ] ; xx [ 40 ] = xx [ 18 ] ; xx [ 18 ] =
0.03530169195229536 ; xx [ 26 ] = xx [ 18 ] * xx [ 29 ] ; xx [ 28 ] =
0.0654271681639358 ; xx [ 33 ] = xx [ 28 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 18
] * xx [ 21 ] - xx [ 27 ] * xx [ 28 ] ; xx [ 44 ] = - xx [ 26 ] ; xx [ 45 ] =
xx [ 33 ] ; xx [ 46 ] = xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx +
44 , xx + 47 ) ; xx [ 38 ] = xx [ 0 ] * ( xx [ 47 ] - xx [ 26 ] * xx [ 20 ] )
+ 0.07457283183606418 ; xx [ 39 ] = ( xx [ 33 ] * xx [ 20 ] + xx [ 48 ] ) *
xx [ 0 ] - xx [ 18 ] ; xx [ 40 ] = ( xx [ 29 ] * xx [ 20 ] + xx [ 49 ] ) * xx
[ 0 ] ; pm_math_Quaternion_xform_ra ( xx + 22 , xx + 38 , xx + 26 ) ; xx [ 18
] = 0.2199463818469452 ; xx [ 20 ] = 0.14 ; xx [ 21 ] = xx [ 16 ] * xx [ 20 ]
; xx [ 22 ] = xx [ 20 ] * xx [ 17 ] ; xx [ 23 ] = 0.04006839315796021 ; xx [
38 ] = xx [ 18 ] - ( xx [ 16 ] * xx [ 21 ] + xx [ 22 ] * xx [ 17 ] ) * xx [ 0
] ; xx [ 39 ] = ( xx [ 22 ] * xx [ 8 ] + xx [ 10 ] * xx [ 21 ] ) * xx [ 0 ] ;
xx [ 40 ] = xx [ 23 ] + xx [ 0 ] * ( xx [ 21 ] * xx [ 8 ] - xx [ 10 ] * xx [
22 ] ) ; pm_math_Quaternion_xform_ra ( xx + 12 , xx + 38 , xx + 44 ) ; xx [
12 ] = xx [ 7 ] ; xx [ 13 ] = xx [ 11 ] ; xx [ 14 ] = xx [ 4 ] ; xx [ 8 ] =
0.03998704855625266 ; xx [ 10 ] = xx [ 8 ] * xx [ 11 ] ; xx [ 15 ] =
5.357679714268354e-5 ; xx [ 16 ] = xx [ 15 ] * xx [ 4 ] + xx [ 7 ] * xx [ 8 ]
; xx [ 4 ] = xx [ 15 ] * xx [ 11 ] ; xx [ 38 ] = xx [ 10 ] ; xx [ 39 ] = - xx
[ 16 ] ; xx [ 40 ] = xx [ 4 ] ; pm_math_Vector3_cross_ra ( xx + 12 , xx + 38
, xx + 47 ) ; xx [ 7 ] = xx [ 26 ] + xx [ 44 ] - ( xx [ 47 ] - xx [ 10 ] * xx
[ 5 ] ) * xx [ 0 ] + 0.07304395785390926 ; xx [ 10 ] = xx [ 2 ] * state [ 34
] ; xx [ 11 ] = cos ( xx [ 10 ] ) ; xx [ 12 ] = xx [ 1 ] * xx [ 11 ] ; xx [
13 ] = sin ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 6 ] * xx [ 13 ] ; xx [ 14 ] = xx
[ 9 ] * xx [ 13 ] ; xx [ 13 ] = xx [ 1 ] * xx [ 10 ] + xx [ 3 ] * xx [ 14 ] ;
xx [ 17 ] = - xx [ 13 ] ; xx [ 21 ] = xx [ 3 ] * xx [ 11 ] ; xx [ 11 ] = - xx
[ 21 ] ; xx [ 22 ] = xx [ 3 ] * xx [ 10 ] - xx [ 1 ] * xx [ 14 ] ; xx [ 50 ]
= - xx [ 12 ] ; xx [ 51 ] = xx [ 17 ] ; xx [ 52 ] = xx [ 11 ] ; xx [ 53 ] =
xx [ 22 ] ; xx [ 10 ] = xx [ 3 ] * state [ 38 ] + xx [ 1 ] * state [ 36 ] ;
xx [ 14 ] = xx [ 10 ] * xx [ 20 ] ; xx [ 24 ] = xx [ 3 ] * state [ 39 ] - xx
[ 1 ] * state [ 37 ] ; xx [ 25 ] = xx [ 20 ] * xx [ 24 ] ; xx [ 29 ] = xx [ 3
] * state [ 36 ] - xx [ 1 ] * state [ 38 ] ; xx [ 33 ] = xx [ 3 ] * state [
37 ] + xx [ 1 ] * state [ 39 ] ; xx [ 38 ] = xx [ 18 ] - ( xx [ 10 ] * xx [
14 ] + xx [ 25 ] * xx [ 24 ] ) * xx [ 0 ] ; xx [ 39 ] = ( xx [ 25 ] * xx [ 29
] + xx [ 33 ] * xx [ 14 ] ) * xx [ 0 ] ; xx [ 40 ] = xx [ 0 ] * ( xx [ 33 ] *
xx [ 25 ] - xx [ 14 ] * xx [ 29 ] ) - xx [ 23 ] ; pm_math_Quaternion_xform_ra
( xx + 50 , xx + 38 , xx + 54 ) ; xx [ 38 ] = xx [ 17 ] ; xx [ 39 ] = xx [ 11
] ; xx [ 40 ] = xx [ 22 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 21 ] ; xx [ 14 ] = xx
[ 15 ] * xx [ 22 ] + xx [ 13 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 15 ] * xx [ 21 ]
; xx [ 57 ] = xx [ 11 ] ; xx [ 58 ] = - xx [ 14 ] ; xx [ 59 ] = - xx [ 13 ] ;
pm_math_Vector3_cross_ra ( xx + 38 , xx + 57 , xx + 60 ) ; xx [ 63 ] = xx [
29 ] ; xx [ 64 ] = xx [ 33 ] ; xx [ 65 ] = xx [ 10 ] ; xx [ 66 ] = xx [ 24 ]
; pm_math_Quaternion_compose_ra ( xx + 50 , xx + 63 , xx + 67 ) ; xx [ 10 ] =
xx [ 20 ] * xx [ 69 ] ; xx [ 17 ] = xx [ 20 ] * xx [ 70 ] ; xx [ 21 ] = xx [
34 ] * xx [ 37 ] ; xx [ 22 ] = xx [ 27 ] + xx [ 45 ] - ( xx [ 5 ] * xx [ 16 ]
+ xx [ 48 ] ) * xx [ 0 ] ; xx [ 16 ] = xx [ 28 ] + xx [ 46 ] - xx [ 0 ] * (
xx [ 49 ] - xx [ 4 ] * xx [ 5 ] ) + 0.03679498374650248 ; xx [ 4 ] =
0.07431243570379253 ; xx [ 5 ] = xx [ 4 ] * xx [ 37 ] ; xx [ 24 ] =
2.141422054707503e-3 ; xx [ 25 ] = xx [ 24 ] * xx [ 36 ] - xx [ 4 ] * xx [ 35
] ; xx [ 26 ] = xx [ 5 ] ; xx [ 27 ] = - ( xx [ 24 ] * xx [ 37 ] ) ; xx [ 28
] = xx [ 25 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx + 26 , xx + 38 ) ; xx
[ 26 ] = 0.4995596447523598 ; xx [ 27 ] = xx [ 2 ] * state [ 43 ] ; xx [ 28 ]
= cos ( xx [ 27 ] ) ; xx [ 29 ] = xx [ 26 ] * xx [ 28 ] ; xx [ 33 ] = sin (
xx [ 27 ] ) ; xx [ 27 ] = xx [ 6 ] * xx [ 33 ] ; xx [ 44 ] =
0.8662794937748998 ; xx [ 45 ] = xx [ 9 ] * xx [ 33 ] ; xx [ 33 ] = xx [ 26 ]
* xx [ 27 ] - xx [ 44 ] * xx [ 45 ] ; xx [ 46 ] = xx [ 44 ] * xx [ 28 ] ; xx
[ 28 ] = - xx [ 46 ] ; xx [ 47 ] = xx [ 26 ] * xx [ 45 ] + xx [ 44 ] * xx [
27 ] ; xx [ 26 ] = - xx [ 47 ] ; xx [ 48 ] = - xx [ 29 ] ; xx [ 49 ] = xx [
33 ] ; xx [ 50 ] = xx [ 28 ] ; xx [ 51 ] = xx [ 26 ] ; xx [ 27 ] = xx [ 1 ] *
state [ 45 ] - xx [ 3 ] * state [ 47 ] ; xx [ 44 ] = xx [ 27 ] * xx [ 20 ] ;
xx [ 45 ] = xx [ 1 ] * state [ 46 ] + xx [ 3 ] * state [ 48 ] ; xx [ 52 ] =
xx [ 20 ] * xx [ 45 ] ; xx [ 53 ] = xx [ 1 ] * state [ 47 ] + xx [ 3 ] *
state [ 45 ] ; xx [ 57 ] = xx [ 1 ] * state [ 48 ] - xx [ 3 ] * state [ 46 ]
; xx [ 63 ] = xx [ 18 ] - ( xx [ 27 ] * xx [ 44 ] + xx [ 52 ] * xx [ 45 ] ) *
xx [ 0 ] ; xx [ 64 ] = ( xx [ 52 ] * xx [ 53 ] + xx [ 57 ] * xx [ 44 ] ) * xx
[ 0 ] ; xx [ 65 ] = xx [ 23 ] + xx [ 0 ] * ( xx [ 44 ] * xx [ 53 ] - xx [ 57
] * xx [ 52 ] ) ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 63 , xx + 71 )
; xx [ 44 ] = xx [ 8 ] * xx [ 46 ] ; xx [ 63 ] = xx [ 33 ] ; xx [ 64 ] = xx [
28 ] ; xx [ 65 ] = xx [ 26 ] ; xx [ 26 ] = xx [ 15 ] * xx [ 47 ] - xx [ 33 ]
* xx [ 8 ] ; xx [ 28 ] = xx [ 15 ] * xx [ 46 ] ; xx [ 74 ] = - xx [ 44 ] ; xx
[ 75 ] = xx [ 26 ] ; xx [ 76 ] = - xx [ 28 ] ; pm_math_Vector3_cross_ra ( xx
+ 63 , xx + 74 , xx + 77 ) ; xx [ 63 ] = xx [ 53 ] ; xx [ 64 ] = - xx [ 57 ]
; xx [ 65 ] = - xx [ 27 ] ; xx [ 66 ] = xx [ 45 ] ;
pm_math_Quaternion_compose_ra ( xx + 48 , xx + 63 , xx + 80 ) ; xx [ 27 ] =
xx [ 20 ] * xx [ 82 ] ; xx [ 33 ] = xx [ 20 ] * xx [ 83 ] ; xx [ 45 ] =
0.03667791270951477 ; xx [ 46 ] = 0.06466571354218477 ; xx [ 47 ] = xx [ 46 ]
* xx [ 37 ] ; xx [ 48 ] = xx [ 46 ] * xx [ 35 ] + xx [ 45 ] * xx [ 36 ] ; xx
[ 49 ] = xx [ 47 ] ; xx [ 50 ] = xx [ 45 ] * xx [ 37 ] ; xx [ 51 ] = - xx [
48 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx + 49 , xx + 57 ) ; xx [ 49 ] =
0.8657710899485229 ; xx [ 50 ] = xx [ 2 ] * state [ 52 ] ; xx [ 51 ] = cos (
xx [ 50 ] ) ; xx [ 52 ] = xx [ 49 ] * xx [ 51 ] ; xx [ 53 ] = sin ( xx [ 50 ]
) ; xx [ 50 ] = xx [ 6 ] * xx [ 53 ] ; xx [ 63 ] = 0.5004402260104068 ; xx [
64 ] = xx [ 9 ] * xx [ 53 ] ; xx [ 53 ] = xx [ 49 ] * xx [ 50 ] - xx [ 63 ] *
xx [ 64 ] ; xx [ 65 ] = xx [ 63 ] * xx [ 51 ] ; xx [ 51 ] = - xx [ 65 ] ; xx
[ 66 ] = xx [ 49 ] * xx [ 64 ] + xx [ 63 ] * xx [ 50 ] ; xx [ 84 ] = xx [ 52
] ; xx [ 85 ] = xx [ 53 ] ; xx [ 86 ] = xx [ 51 ] ; xx [ 87 ] = xx [ 66 ] ;
xx [ 49 ] = xx [ 3 ] * state [ 56 ] + xx [ 1 ] * state [ 54 ] ; xx [ 50 ] =
xx [ 49 ] * xx [ 20 ] ; xx [ 63 ] = xx [ 3 ] * state [ 57 ] - xx [ 1 ] *
state [ 55 ] ; xx [ 64 ] = xx [ 20 ] * xx [ 63 ] ; xx [ 74 ] = xx [ 3 ] *
state [ 54 ] - xx [ 1 ] * state [ 56 ] ; xx [ 75 ] = xx [ 3 ] * state [ 55 ]
+ xx [ 1 ] * state [ 57 ] ; xx [ 88 ] = xx [ 18 ] - ( xx [ 49 ] * xx [ 50 ] +
xx [ 64 ] * xx [ 63 ] ) * xx [ 0 ] ; xx [ 89 ] = ( xx [ 64 ] * xx [ 74 ] + xx
[ 75 ] * xx [ 50 ] ) * xx [ 0 ] ; xx [ 90 ] = xx [ 0 ] * ( xx [ 75 ] * xx [
64 ] - xx [ 50 ] * xx [ 74 ] ) - xx [ 23 ] ; pm_math_Quaternion_xform_ra ( xx
+ 84 , xx + 88 , xx + 91 ) ; xx [ 50 ] = xx [ 8 ] * xx [ 65 ] ; xx [ 88 ] =
xx [ 53 ] ; xx [ 89 ] = xx [ 51 ] ; xx [ 90 ] = xx [ 66 ] ; xx [ 51 ] = xx [
53 ] * xx [ 8 ] - xx [ 15 ] * xx [ 66 ] ; xx [ 53 ] = xx [ 15 ] * xx [ 65 ] ;
xx [ 64 ] = xx [ 50 ] ; xx [ 65 ] = xx [ 51 ] ; xx [ 66 ] = - xx [ 53 ] ;
pm_math_Vector3_cross_ra ( xx + 88 , xx + 64 , xx + 94 ) ; xx [ 97 ] = xx [
74 ] ; xx [ 98 ] = xx [ 75 ] ; xx [ 99 ] = xx [ 49 ] ; xx [ 100 ] = xx [ 63 ]
; pm_math_Quaternion_compose_ra ( xx + 84 , xx + 97 , xx + 63 ) ; xx [ 49 ] =
xx [ 20 ] * xx [ 65 ] ; xx [ 74 ] = xx [ 20 ] * xx [ 66 ] ; xx [ 75 ] =
0.03766319432662211 ; xx [ 76 ] = 0.0640968609353203 ; xx [ 84 ] = xx [ 76 ]
* xx [ 37 ] ; xx [ 85 ] = xx [ 76 ] * xx [ 35 ] - xx [ 75 ] * xx [ 36 ] ; xx
[ 86 ] = - xx [ 84 ] ; xx [ 87 ] = xx [ 75 ] * xx [ 37 ] ; xx [ 88 ] = xx [
85 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx + 86 , xx + 97 ) ; xx [ 86 ] =
0.8662794937748999 ; xx [ 87 ] = xx [ 2 ] * state [ 16 ] ; xx [ 88 ] = cos (
xx [ 87 ] ) ; xx [ 89 ] = xx [ 86 ] * xx [ 88 ] ; xx [ 90 ] = sin ( xx [ 87 ]
) ; xx [ 87 ] = xx [ 6 ] * xx [ 90 ] ; xx [ 100 ] = 0.4995596447523596 ; xx [
101 ] = xx [ 9 ] * xx [ 90 ] ; xx [ 90 ] = xx [ 86 ] * xx [ 87 ] + xx [ 100 ]
* xx [ 101 ] ; xx [ 102 ] = - xx [ 90 ] ; xx [ 103 ] = xx [ 100 ] * xx [ 88 ]
; xx [ 88 ] = - xx [ 103 ] ; xx [ 104 ] = xx [ 100 ] * xx [ 87 ] - xx [ 86 ]
* xx [ 101 ] ; xx [ 105 ] = - xx [ 89 ] ; xx [ 106 ] = xx [ 102 ] ; xx [ 107
] = xx [ 88 ] ; xx [ 108 ] = xx [ 104 ] ; xx [ 86 ] = xx [ 3 ] * state [ 20 ]
+ xx [ 1 ] * state [ 18 ] ; xx [ 87 ] = xx [ 86 ] * xx [ 20 ] ; xx [ 100 ] =
xx [ 3 ] * state [ 21 ] - xx [ 1 ] * state [ 19 ] ; xx [ 101 ] = xx [ 20 ] *
xx [ 100 ] ; xx [ 109 ] = xx [ 3 ] * state [ 18 ] - xx [ 1 ] * state [ 20 ] ;
xx [ 110 ] = xx [ 3 ] * state [ 19 ] + xx [ 1 ] * state [ 21 ] ; xx [ 111 ] =
xx [ 18 ] - ( xx [ 86 ] * xx [ 87 ] + xx [ 101 ] * xx [ 100 ] ) * xx [ 0 ] ;
xx [ 112 ] = ( xx [ 101 ] * xx [ 109 ] + xx [ 110 ] * xx [ 87 ] ) * xx [ 0 ]
; xx [ 113 ] = xx [ 0 ] * ( xx [ 110 ] * xx [ 101 ] - xx [ 87 ] * xx [ 109 ]
) - xx [ 23 ] ; pm_math_Quaternion_xform_ra ( xx + 105 , xx + 111 , xx + 114
) ; xx [ 111 ] = xx [ 102 ] ; xx [ 112 ] = xx [ 88 ] ; xx [ 113 ] = xx [ 104
] ; xx [ 87 ] = xx [ 8 ] * xx [ 103 ] ; xx [ 88 ] = xx [ 15 ] * xx [ 104 ] +
xx [ 90 ] * xx [ 8 ] ; xx [ 90 ] = xx [ 15 ] * xx [ 103 ] ; xx [ 101 ] = xx [
87 ] ; xx [ 102 ] = - xx [ 88 ] ; xx [ 103 ] = - xx [ 90 ] ;
pm_math_Vector3_cross_ra ( xx + 111 , xx + 101 , xx + 117 ) ; xx [ 101 ] = xx
[ 109 ] ; xx [ 102 ] = xx [ 110 ] ; xx [ 103 ] = xx [ 86 ] ; xx [ 104 ] = xx
[ 100 ] ; pm_math_Quaternion_compose_ra ( xx + 105 , xx + 101 , xx + 109 ) ;
xx [ 86 ] = xx [ 20 ] * xx [ 111 ] ; xx [ 100 ] = xx [ 20 ] * xx [ 112 ] ; xx
[ 101 ] = 0.03901074375149718 ; xx [ 102 ] = xx [ 101 ] * xx [ 37 ] ; xx [
103 ] = 0.06328574610922835 ; xx [ 104 ] = xx [ 101 ] * xx [ 35 ] + xx [ 103
] * xx [ 36 ] ; xx [ 105 ] = - xx [ 102 ] ; xx [ 106 ] = - ( xx [ 103 ] * xx
[ 37 ] ) ; xx [ 107 ] = xx [ 104 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx
+ 105 , xx + 120 ) ; xx [ 35 ] = xx [ 2 ] * state [ 25 ] ; xx [ 2 ] = cos (
xx [ 35 ] ) ; xx [ 36 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 37 ] = sin ( xx [ 35 ] )
; xx [ 35 ] = xx [ 6 ] * xx [ 37 ] ; xx [ 6 ] = xx [ 9 ] * xx [ 37 ] ; xx [ 9
] = xx [ 3 ] * xx [ 35 ] - xx [ 1 ] * xx [ 6 ] ; xx [ 37 ] = xx [ 1 ] * xx [
2 ] ; xx [ 2 ] = - xx [ 37 ] ; xx [ 105 ] = xx [ 3 ] * xx [ 6 ] + xx [ 1 ] *
xx [ 35 ] ; xx [ 6 ] = - xx [ 105 ] ; xx [ 123 ] = - xx [ 36 ] ; xx [ 124 ] =
xx [ 9 ] ; xx [ 125 ] = xx [ 2 ] ; xx [ 126 ] = xx [ 6 ] ; xx [ 35 ] = xx [ 1
] * state [ 27 ] - xx [ 3 ] * state [ 29 ] ; xx [ 106 ] = xx [ 35 ] * xx [ 20
] ; xx [ 107 ] = xx [ 1 ] * state [ 28 ] + xx [ 3 ] * state [ 30 ] ; xx [ 108
] = xx [ 20 ] * xx [ 107 ] ; xx [ 113 ] = xx [ 1 ] * state [ 29 ] + xx [ 3 ]
* state [ 27 ] ; xx [ 127 ] = xx [ 1 ] * state [ 30 ] - xx [ 3 ] * state [ 28
] ; xx [ 128 ] = xx [ 18 ] - ( xx [ 35 ] * xx [ 106 ] + xx [ 108 ] * xx [ 107
] ) * xx [ 0 ] ; xx [ 129 ] = ( xx [ 108 ] * xx [ 113 ] + xx [ 127 ] * xx [
106 ] ) * xx [ 0 ] ; xx [ 130 ] = xx [ 23 ] + xx [ 0 ] * ( xx [ 106 ] * xx [
113 ] - xx [ 127 ] * xx [ 108 ] ) ; pm_math_Quaternion_xform_ra ( xx + 123 ,
xx + 128 , xx + 131 ) ; xx [ 1 ] = xx [ 8 ] * xx [ 37 ] ; xx [ 128 ] = xx [ 9
] ; xx [ 129 ] = xx [ 2 ] ; xx [ 130 ] = xx [ 6 ] ; xx [ 2 ] = xx [ 15 ] * xx
[ 105 ] - xx [ 9 ] * xx [ 8 ] ; xx [ 3 ] = xx [ 15 ] * xx [ 37 ] ; xx [ 134 ]
= - xx [ 1 ] ; xx [ 135 ] = xx [ 2 ] ; xx [ 136 ] = - xx [ 3 ] ;
pm_math_Vector3_cross_ra ( xx + 128 , xx + 134 , xx + 137 ) ; xx [ 140 ] = xx
[ 113 ] ; xx [ 141 ] = - xx [ 127 ] ; xx [ 142 ] = - xx [ 35 ] ; xx [ 143 ] =
xx [ 107 ] ; pm_math_Quaternion_compose_ra ( xx + 123 , xx + 140 , xx + 105 )
; xx [ 6 ] = xx [ 20 ] * xx [ 107 ] ; xx [ 8 ] = xx [ 20 ] * xx [ 108 ] ;
error [ 0 ] = xx [ 0 ] * ( xx [ 41 ] - xx [ 34 ] * xx [ 30 ] ) - xx [ 31 ] +
xx [ 7 ] - ( xx [ 54 ] - ( xx [ 60 ] - xx [ 12 ] * xx [ 11 ] ) * xx [ 0 ] - (
xx [ 69 ] * xx [ 10 ] + xx [ 70 ] * xx [ 17 ] ) * xx [ 0 ] ) -
0.1100535767971427 ; error [ 1 ] = xx [ 19 ] + ( xx [ 42 ] - xx [ 31 ] * xx [
21 ] ) * xx [ 0 ] + xx [ 22 ] - ( ( xx [ 67 ] * xx [ 17 ] + xx [ 68 ] * xx [
10 ] ) * xx [ 0 ] + xx [ 55 ] - ( xx [ 12 ] * xx [ 14 ] + xx [ 61 ] ) * xx [
0 ] ) ; error [ 2 ] = ( xx [ 34 ] * xx [ 32 ] + xx [ 43 ] ) * xx [ 0 ] + xx [
16 ] - ( xx [ 0 ] * ( xx [ 68 ] * xx [ 17 ] - xx [ 67 ] * xx [ 10 ] ) + xx [
56 ] - xx [ 0 ] * ( xx [ 62 ] + xx [ 13 ] * xx [ 12 ] ) ) +
0.06161549182219125 ; error [ 3 ] = xx [ 0 ] * ( xx [ 38 ] + xx [ 34 ] * xx [
5 ] ) - xx [ 24 ] + xx [ 7 ] - ( xx [ 71 ] - ( xx [ 44 ] * xx [ 29 ] + xx [
77 ] ) * xx [ 0 ] - ( xx [ 82 ] * xx [ 27 ] + xx [ 83 ] * xx [ 33 ] ) * xx [
0 ] ) - 0.03706319574037606 ; error [ 4 ] = ( xx [ 39 ] - xx [ 24 ] * xx [ 21
] ) * xx [ 0 ] - xx [ 4 ] + xx [ 22 ] - ( ( xx [ 80 ] * xx [ 33 ] + xx [ 81 ]
* xx [ 27 ] ) * xx [ 0 ] + xx [ 72 ] - ( xx [ 78 ] - xx [ 29 ] * xx [ 26 ] )
* xx [ 0 ] ) ; error [ 5 ] = ( xx [ 34 ] * xx [ 25 ] + xx [ 40 ] ) * xx [ 0 ]
+ xx [ 16 ] - ( xx [ 0 ] * ( xx [ 81 ] * xx [ 33 ] - xx [ 80 ] * xx [ 27 ] )
+ xx [ 73 ] - xx [ 0 ] * ( xx [ 79 ] + xx [ 28 ] * xx [ 29 ] ) ) +
0.01516654048056399 ; error [ 6 ] = xx [ 45 ] + xx [ 0 ] * ( xx [ 57 ] + xx [
34 ] * xx [ 47 ] ) + xx [ 7 ] - ( xx [ 91 ] - ( xx [ 50 ] * xx [ 52 ] + xx [
94 ] ) * xx [ 0 ] - ( xx [ 65 ] * xx [ 49 ] + xx [ 66 ] * xx [ 74 ] ) * xx [
0 ] ) - 0.06706319574037613 ; error [ 7 ] = ( xx [ 45 ] * xx [ 21 ] + xx [ 58
] ) * xx [ 0 ] - xx [ 46 ] + xx [ 22 ] - ( ( xx [ 63 ] * xx [ 74 ] + xx [ 64
] * xx [ 49 ] ) * xx [ 0 ] + xx [ 92 ] - ( xx [ 52 ] * xx [ 51 ] + xx [ 95 ]
) * xx [ 0 ] ) ; error [ 8 ] = ( xx [ 59 ] - xx [ 34 ] * xx [ 48 ] ) * xx [ 0
] + xx [ 16 ] - ( xx [ 0 ] * ( xx [ 64 ] * xx [ 74 ] - xx [ 63 ] * xx [ 49 ]
) + xx [ 93 ] - xx [ 0 ] * ( xx [ 96 ] - xx [ 53 ] * xx [ 52 ] ) ) -
0.1167690808590078 ; error [ 9 ] = xx [ 75 ] + xx [ 0 ] * ( xx [ 97 ] - xx [
34 ] * xx [ 84 ] ) + xx [ 7 ] - ( xx [ 114 ] - ( xx [ 117 ] - xx [ 87 ] * xx
[ 89 ] ) * xx [ 0 ] - ( xx [ 111 ] * xx [ 86 ] + xx [ 112 ] * xx [ 100 ] ) *
xx [ 0 ] ) - 0.2430439578539093 ; error [ 10 ] = xx [ 76 ] + ( xx [ 75 ] * xx
[ 21 ] + xx [ 98 ] ) * xx [ 0 ] + xx [ 22 ] - ( ( xx [ 109 ] * xx [ 100 ] +
xx [ 110 ] * xx [ 86 ] ) * xx [ 0 ] + xx [ 115 ] - ( xx [ 89 ] * xx [ 88 ] +
xx [ 118 ] ) * xx [ 0 ] ) ; error [ 11 ] = ( xx [ 34 ] * xx [ 85 ] + xx [ 99
] ) * xx [ 0 ] + xx [ 16 ] - ( xx [ 0 ] * ( xx [ 110 ] * xx [ 100 ] - xx [
109 ] * xx [ 86 ] ) + xx [ 116 ] - xx [ 0 ] * ( xx [ 119 ] + xx [ 90 ] * xx [
89 ] ) ) - 0.06480755663194146 ; error [ 12 ] = xx [ 0 ] * ( xx [ 120 ] - xx
[ 34 ] * xx [ 102 ] ) - xx [ 103 ] + xx [ 7 ] - ( xx [ 131 ] - ( xx [ 1 ] *
xx [ 36 ] + xx [ 137 ] ) * xx [ 0 ] - ( xx [ 107 ] * xx [ 6 ] + xx [ 108 ] *
xx [ 8 ] ) * xx [ 0 ] ) - 0.1700535767971427 ; error [ 13 ] = xx [ 101 ] + (
xx [ 121 ] - xx [ 103 ] * xx [ 21 ] ) * xx [ 0 ] + xx [ 22 ] - ( ( xx [ 105 ]
* xx [ 8 ] + xx [ 106 ] * xx [ 6 ] ) * xx [ 0 ] + xx [ 132 ] - ( xx [ 138 ] -
xx [ 36 ] * xx [ 2 ] ) * xx [ 0 ] ) ; error [ 14 ] = ( xx [ 34 ] * xx [ 104 ]
+ xx [ 122 ] ) * xx [ 0 ] + xx [ 16 ] - ( xx [ 0 ] * ( xx [ 106 ] * xx [ 8 ]
- xx [ 105 ] * xx [ 6 ] ) + xx [ 133 ] - xx [ 0 ] * ( xx [ 139 ] + xx [ 3 ] *
xx [ 36 ] ) ) + 0.1415895889346966 ; } void hp_v4_a1692be3_1_resetModeVector
( const void * mech , int * modeVector ) { ( void ) mech ; ( void )
modeVector ; } boolean_T hp_v4_a1692be3_1_hasJointUpwardModeChange ( const
void * mech , const int * prevModeVector , const int * modeVector ) { ( void
) mech ; ( void ) prevModeVector ; ( void ) modeVector ; return 0 ; }
PmfMessageId hp_v4_a1692be3_1_performJointUpwardModeChange ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags ,
const int * prevModeVector , const int * modeVector , const double * input ,
double * state , void * neDiagMgr0 ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; (
void ) prevModeVector ; ( void ) modeVector ; ( void ) input ; ( void ) state
; ( void ) neDiagMgr ; return NULL ; } void
hp_v4_a1692be3_1_onModeChangedCutJoints ( const void * mech , const int *
prevModeVector , const int * modeVector , double * state ) { ( void ) mech ;
( void ) prevModeVector ; ( void ) modeVector ; ( void ) state ; } void
hp_v4_a1692be3_1_setVariableModeJointsToLocked ( const void * mech , int *
modeVector ) { ( void ) mech ; ( void ) modeVector ; }
