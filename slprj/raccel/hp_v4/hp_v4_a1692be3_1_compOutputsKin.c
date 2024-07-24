#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "pm_default_allocator.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "hp_v4_a1692be3_1_geometries.h"
PmfMessageId hp_v4_a1692be3_1_compOutputsKin ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 1 ]
; double xx [ 112 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ;
( void ) input ; ( void ) inputDot ; ( void ) inputDdot ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 0.1395577324697271 ; xx [ 1 ]
= 5.084038263768928e-4 ; xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 34 ]
; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] = 1.016807521344378e-3 ; xx [ 6 ] =
sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] =
0.9999998707627665 ; xx [ 8 ] = 0.9999994830510986 ; xx [ 9 ] = xx [ 8 ] * xx
[ 6 ] ; xx [ 10 ] = - ( xx [ 1 ] * xx [ 4 ] ) ; xx [ 11 ] = - ( xx [ 1 ] * xx
[ 3 ] + xx [ 7 ] * xx [ 9 ] ) ; xx [ 12 ] = - ( xx [ 7 ] * xx [ 4 ] ) ; xx [
13 ] = xx [ 7 ] * xx [ 3 ] - xx [ 1 ] * xx [ 9 ] ; xx [ 3 ] = xx [ 7 ] *
state [ 36 ] - xx [ 1 ] * state [ 38 ] ; xx [ 4 ] = xx [ 7 ] * state [ 37 ] +
xx [ 1 ] * state [ 39 ] ; xx [ 6 ] = xx [ 7 ] * state [ 38 ] + xx [ 1 ] *
state [ 36 ] ; xx [ 9 ] = xx [ 7 ] * state [ 39 ] - xx [ 1 ] * state [ 37 ] ;
xx [ 14 ] = xx [ 3 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 6 ] ; xx [ 17
] = xx [ 9 ] ; pm_math_Quaternion_compose_ra ( xx + 10 , xx + 14 , xx + 18 )
; xx [ 10 ] = 0.5004402260104069 ; xx [ 11 ] = xx [ 2 ] * state [ 0 ] ; xx [
12 ] = cos ( xx [ 11 ] ) ; xx [ 13 ] = xx [ 10 ] * xx [ 12 ] ; xx [ 14 ] =
sin ( xx [ 11 ] ) ; xx [ 11 ] = xx [ 5 ] * xx [ 14 ] ; xx [ 15 ] =
0.8657710899485228 ; xx [ 16 ] = xx [ 8 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 10 ]
* xx [ 11 ] + xx [ 15 ] * xx [ 16 ] ; xx [ 17 ] = xx [ 15 ] * xx [ 12 ] ; xx
[ 12 ] = xx [ 15 ] * xx [ 11 ] - xx [ 10 ] * xx [ 16 ] ; xx [ 22 ] = - xx [
13 ] ; xx [ 23 ] = xx [ 14 ] ; xx [ 24 ] = xx [ 17 ] ; xx [ 25 ] = xx [ 12 ]
; xx [ 10 ] = xx [ 1 ] * state [ 4 ] + xx [ 7 ] * state [ 2 ] ; xx [ 11 ] =
xx [ 1 ] * state [ 5 ] - xx [ 7 ] * state [ 3 ] ; xx [ 15 ] = xx [ 1 ] *
state [ 2 ] - xx [ 7 ] * state [ 4 ] ; xx [ 16 ] = xx [ 1 ] * state [ 3 ] +
xx [ 7 ] * state [ 5 ] ; xx [ 26 ] = xx [ 10 ] ; xx [ 27 ] = - xx [ 11 ] ; xx
[ 28 ] = - xx [ 15 ] ; xx [ 29 ] = xx [ 16 ] ; pm_math_Quaternion_compose_ra
( xx + 22 , xx + 26 , xx + 30 ) ; xx [ 26 ] = 0.9902139361309295 ; xx [ 27 ]
= xx [ 0 ] * state [ 12 ] - xx [ 26 ] * state [ 9 ] ; xx [ 28 ] = xx [ 0 ] *
state [ 11 ] + xx [ 26 ] * state [ 10 ] ; xx [ 29 ] = - xx [ 28 ] ; xx [ 34 ]
= xx [ 26 ] * state [ 11 ] - xx [ 0 ] * state [ 10 ] ; xx [ 35 ] = - xx [ 34
] ; xx [ 36 ] = xx [ 0 ] * state [ 9 ] + xx [ 26 ] * state [ 12 ] ; xx [ 37 ]
= - xx [ 36 ] ; xx [ 38 ] = xx [ 27 ] ; xx [ 39 ] = xx [ 29 ] ; xx [ 40 ] =
xx [ 35 ] ; xx [ 41 ] = xx [ 37 ] ; pm_math_Quaternion_compose_ra ( xx + 30 ,
xx + 38 , xx + 42 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 18 , xx +
42 , xx + 38 ) ; xx [ 46 ] = 0.4995596447523598 ; xx [ 47 ] = xx [ 2 ] *
state [ 43 ] ; xx [ 48 ] = cos ( xx [ 47 ] ) ; xx [ 49 ] = sin ( xx [ 47 ] )
; xx [ 47 ] = xx [ 5 ] * xx [ 49 ] ; xx [ 50 ] = 0.8662794937748998 ; xx [ 51
] = xx [ 8 ] * xx [ 49 ] ; xx [ 52 ] = - ( xx [ 46 ] * xx [ 48 ] ) ; xx [ 53
] = xx [ 46 ] * xx [ 47 ] - xx [ 50 ] * xx [ 51 ] ; xx [ 54 ] = - ( xx [ 50 ]
* xx [ 48 ] ) ; xx [ 55 ] = - ( xx [ 46 ] * xx [ 51 ] + xx [ 50 ] * xx [ 47 ]
) ; xx [ 46 ] = xx [ 1 ] * state [ 47 ] + xx [ 7 ] * state [ 45 ] ; xx [ 47 ]
= xx [ 1 ] * state [ 48 ] - xx [ 7 ] * state [ 46 ] ; xx [ 48 ] = xx [ 1 ] *
state [ 45 ] - xx [ 7 ] * state [ 47 ] ; xx [ 49 ] = xx [ 1 ] * state [ 46 ]
+ xx [ 7 ] * state [ 48 ] ; xx [ 56 ] = xx [ 46 ] ; xx [ 57 ] = - xx [ 47 ] ;
xx [ 58 ] = - xx [ 48 ] ; xx [ 59 ] = xx [ 49 ] ;
pm_math_Quaternion_compose_ra ( xx + 52 , xx + 56 , xx + 60 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 60 , xx + 42 , xx + 50 ) ; xx [
54 ] = 0.8657710899485229 ; xx [ 55 ] = xx [ 2 ] * state [ 52 ] ; xx [ 56 ] =
cos ( xx [ 55 ] ) ; xx [ 57 ] = sin ( xx [ 55 ] ) ; xx [ 55 ] = xx [ 5 ] * xx
[ 57 ] ; xx [ 58 ] = 0.5004402260104068 ; xx [ 59 ] = xx [ 8 ] * xx [ 57 ] ;
xx [ 64 ] = xx [ 54 ] * xx [ 56 ] ; xx [ 65 ] = xx [ 54 ] * xx [ 55 ] - xx [
58 ] * xx [ 59 ] ; xx [ 66 ] = - ( xx [ 58 ] * xx [ 56 ] ) ; xx [ 67 ] = xx [
54 ] * xx [ 59 ] + xx [ 58 ] * xx [ 55 ] ; xx [ 54 ] = xx [ 7 ] * state [ 54
] - xx [ 1 ] * state [ 56 ] ; xx [ 55 ] = xx [ 7 ] * state [ 55 ] + xx [ 1 ]
* state [ 57 ] ; xx [ 56 ] = xx [ 7 ] * state [ 56 ] + xx [ 1 ] * state [ 54
] ; xx [ 57 ] = xx [ 7 ] * state [ 57 ] - xx [ 1 ] * state [ 55 ] ;
pm_math_Quaternion_compose_ra ( xx + 64 , xx + 54 , xx + 68 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 68 , xx + 42 , xx + 64 ) ; xx [
58 ] = 0.8662794937748999 ; xx [ 59 ] = xx [ 2 ] * state [ 16 ] ; xx [ 72 ] =
cos ( xx [ 59 ] ) ; xx [ 73 ] = sin ( xx [ 59 ] ) ; xx [ 59 ] = xx [ 5 ] * xx
[ 73 ] ; xx [ 74 ] = 0.4995596447523596 ; xx [ 75 ] = xx [ 8 ] * xx [ 73 ] ;
xx [ 76 ] = - ( xx [ 58 ] * xx [ 72 ] ) ; xx [ 77 ] = - ( xx [ 58 ] * xx [ 59
] + xx [ 74 ] * xx [ 75 ] ) ; xx [ 78 ] = - ( xx [ 74 ] * xx [ 72 ] ) ; xx [
79 ] = xx [ 74 ] * xx [ 59 ] - xx [ 58 ] * xx [ 75 ] ; xx [ 58 ] = xx [ 7 ] *
state [ 18 ] - xx [ 1 ] * state [ 20 ] ; xx [ 59 ] = xx [ 7 ] * state [ 19 ]
+ xx [ 1 ] * state [ 21 ] ; xx [ 72 ] = xx [ 7 ] * state [ 20 ] + xx [ 1 ] *
state [ 18 ] ; xx [ 73 ] = xx [ 7 ] * state [ 21 ] - xx [ 1 ] * state [ 19 ]
; xx [ 80 ] = xx [ 58 ] ; xx [ 81 ] = xx [ 59 ] ; xx [ 82 ] = xx [ 72 ] ; xx
[ 83 ] = xx [ 73 ] ; pm_math_Quaternion_compose_ra ( xx + 76 , xx + 80 , xx +
84 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 84 , xx + 42 , xx + 74 ) ;
xx [ 78 ] = xx [ 2 ] * state [ 25 ] ; xx [ 79 ] = cos ( xx [ 78 ] ) ; xx [ 80
] = sin ( xx [ 78 ] ) ; xx [ 78 ] = xx [ 5 ] * xx [ 80 ] ; xx [ 5 ] = xx [ 8
] * xx [ 80 ] ; xx [ 80 ] = - ( xx [ 7 ] * xx [ 79 ] ) ; xx [ 81 ] = xx [ 7 ]
* xx [ 78 ] - xx [ 1 ] * xx [ 5 ] ; xx [ 82 ] = - ( xx [ 1 ] * xx [ 79 ] ) ;
xx [ 83 ] = - ( xx [ 7 ] * xx [ 5 ] + xx [ 1 ] * xx [ 78 ] ) ; xx [ 5 ] = xx
[ 1 ] * state [ 29 ] + xx [ 7 ] * state [ 27 ] ; xx [ 8 ] = xx [ 1 ] * state
[ 30 ] - xx [ 7 ] * state [ 28 ] ; xx [ 78 ] = xx [ 1 ] * state [ 27 ] - xx [
7 ] * state [ 29 ] ; xx [ 79 ] = xx [ 1 ] * state [ 28 ] + xx [ 7 ] * state [
30 ] ; xx [ 88 ] = xx [ 5 ] ; xx [ 89 ] = - xx [ 8 ] ; xx [ 90 ] = - xx [ 78
] ; xx [ 91 ] = xx [ 79 ] ; pm_math_Quaternion_compose_ra ( xx + 80 , xx + 88
, xx + 92 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 92 , xx + 42 , xx +
80 ) ; xx [ 88 ] = 9.87654321 ; xx [ 89 ] = 1.191387539608064e-17 ; xx [ 90 ]
= 2.0 ; xx [ 91 ] = 7.342337229937591e-19 ; xx [ 96 ] = xx [ 91 ] * xx [ 45 ]
; xx [ 97 ] = xx [ 91 ] * xx [ 43 ] - xx [ 89 ] * xx [ 44 ] ; xx [ 98 ] = -
xx [ 96 ] ; xx [ 99 ] = xx [ 89 ] * xx [ 45 ] ; xx [ 100 ] = xx [ 97 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 98 , xx + 101 ) ; xx [ 98 ] = xx [
29 ] ; xx [ 99 ] = xx [ 35 ] ; xx [ 100 ] = xx [ 37 ] ; xx [ 29 ] =
0.03530169195229536 ; xx [ 35 ] = xx [ 29 ] * xx [ 36 ] ; xx [ 37 ] =
0.0654271681639358 ; xx [ 104 ] = xx [ 37 ] * xx [ 36 ] ; xx [ 105 ] = xx [
29 ] * xx [ 28 ] - xx [ 34 ] * xx [ 37 ] ; xx [ 106 ] = - xx [ 35 ] ; xx [
107 ] = xx [ 104 ] ; xx [ 108 ] = xx [ 105 ] ; pm_math_Vector3_cross_ra ( xx
+ 98 , xx + 106 , xx + 109 ) ; xx [ 98 ] = xx [ 90 ] * ( xx [ 109 ] - xx [ 35
] * xx [ 27 ] ) + 0.07457283183606418 ; xx [ 99 ] = ( xx [ 104 ] * xx [ 27 ]
+ xx [ 110 ] ) * xx [ 90 ] - xx [ 29 ] ; xx [ 100 ] = ( xx [ 105 ] * xx [ 27
] + xx [ 111 ] ) * xx [ 90 ] ; pm_math_Quaternion_xform_ra ( xx + 30 , xx +
98 , xx + 104 ) ; xx [ 29 ] = 0.14 ; xx [ 30 ] = xx [ 15 ] * xx [ 29 ] ; xx [
31 ] = xx [ 29 ] * xx [ 16 ] ; xx [ 98 ] = 0.2199463818469452 - ( xx [ 15 ] *
xx [ 30 ] + xx [ 31 ] * xx [ 16 ] ) * xx [ 90 ] ; xx [ 99 ] = ( xx [ 31 ] *
xx [ 10 ] + xx [ 11 ] * xx [ 30 ] ) * xx [ 90 ] ; xx [ 100 ] =
0.04006839315796021 + xx [ 90 ] * ( xx [ 30 ] * xx [ 10 ] - xx [ 11 ] * xx [
31 ] ) ; pm_math_Quaternion_xform_ra ( xx + 22 , xx + 98 , xx + 29 ) ; xx [
22 ] = xx [ 14 ] ; xx [ 23 ] = xx [ 17 ] ; xx [ 24 ] = xx [ 12 ] ; xx [ 25 ]
= 0.03998704855625266 ; xx [ 32 ] = xx [ 25 ] * xx [ 17 ] ; xx [ 33 ] =
5.357679714268354e-5 ; xx [ 35 ] = xx [ 33 ] * xx [ 12 ] + xx [ 14 ] * xx [
25 ] ; xx [ 12 ] = xx [ 33 ] * xx [ 17 ] ; xx [ 98 ] = xx [ 32 ] ; xx [ 99 ]
= - xx [ 35 ] ; xx [ 100 ] = xx [ 12 ] ; pm_math_Vector3_cross_ra ( xx + 22 ,
xx + 98 , xx + 107 ) ; xx [ 14 ] = xx [ 89 ] + xx [ 90 ] * ( xx [ 101 ] - xx
[ 42 ] * xx [ 96 ] ) + xx [ 104 ] + xx [ 29 ] - ( xx [ 107 ] - xx [ 32 ] * xx
[ 13 ] ) * xx [ 90 ] + 0.07304395785390926 ; xx [ 17 ] = xx [ 91 ] + ( xx [
89 ] * xx [ 42 ] * xx [ 45 ] + xx [ 102 ] ) * xx [ 90 ] + xx [ 105 ] + xx [
30 ] - ( xx [ 13 ] * xx [ 35 ] + xx [ 108 ] ) * xx [ 90 ] ; xx [ 22 ] =
1.275706872409467 - xx [ 17 ] ; xx [ 23 ] = ( xx [ 42 ] * xx [ 97 ] + xx [
103 ] ) * xx [ 90 ] + xx [ 106 ] + xx [ 31 ] - xx [ 90 ] * ( xx [ 109 ] - xx
[ 12 ] * xx [ 13 ] ) + 0.03679498374650248 ; xx [ 12 ] = 1.0 ; xx [ 13 ] = xx
[ 26 ] * xx [ 42 ] + xx [ 0 ] * xx [ 45 ] ; xx [ 24 ] = xx [ 26 ] * xx [ 43 ]
- xx [ 0 ] * xx [ 44 ] ; xx [ 25 ] = xx [ 26 ] * xx [ 44 ] + xx [ 0 ] * xx [
43 ] ; xx [ 29 ] = xx [ 26 ] * xx [ 45 ] - xx [ 0 ] * xx [ 42 ] ; xx [ 30 ] =
xx [ 13 ] ; xx [ 31 ] = xx [ 24 ] ; xx [ 32 ] = xx [ 25 ] ; xx [ 33 ] = xx [
29 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 84 , xx + 30 , xx + 42 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 92 , xx + 30 , xx + 84 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 18 , xx + 30 , xx + 91 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 60 , xx + 30 , xx + 18 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 68 , xx + 30 , xx + 60 ) ; xx [
30 ] = ( xx [ 24 ] * xx [ 29 ] + xx [ 13 ] * xx [ 25 ] ) * xx [ 90 ] ; bb [ 0
] = fabs ( xx [ 30 ] ) > 0.99999999999999 ; xx [ 31 ] = xx [ 29 ] * xx [ 25 ]
; xx [ 32 ] = xx [ 24 ] * xx [ 13 ] ; xx [ 33 ] = xx [ 13 ] * xx [ 13 ] ; xx
[ 35 ] = ( xx [ 33 ] + xx [ 25 ] * xx [ 25 ] ) * xx [ 90 ] - xx [ 12 ] ; xx [
37 ] = ( xx [ 31 ] + xx [ 32 ] ) * xx [ 90 ] ; xx [ 35 ] = ( xx [ 37 ] == 0.0
&& xx [ 35 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 37 ] , xx [ 35 ] ) ; xx [ 37 ] = (
xx [ 33 ] + xx [ 29 ] * xx [ 29 ] ) * xx [ 90 ] - xx [ 12 ] ; xx [ 68 ] = - (
xx [ 90 ] * ( xx [ 31 ] - xx [ 32 ] ) ) ; xx [ 37 ] = ( xx [ 68 ] == 0.0 &&
xx [ 37 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 68 ] , xx [ 37 ] ) ; xx [ 31 ] = bb [
0 ] ? xx [ 2 ] * xx [ 35 ] : xx [ 37 ] ; if ( xx [ 30 ] < 0.0 ) xx [ 2 ] = -
1.0 ; else if ( xx [ 30 ] > 0.0 ) xx [ 2 ] = + 1.0 ; else xx [ 2 ] = 0.0 ; xx
[ 32 ] = fabs ( xx [ 30 ] ) > 1.0 ? atan2 ( xx [ 30 ] , 0.0 ) : asin ( xx [
30 ] ) ; xx [ 30 ] = ( xx [ 33 ] + xx [ 24 ] * xx [ 24 ] ) * xx [ 90 ] - xx [
12 ] ; xx [ 35 ] = - ( xx [ 90 ] * ( xx [ 24 ] * xx [ 25 ] - xx [ 29 ] * xx [
13 ] ) ) ; xx [ 30 ] = ( xx [ 35 ] == 0.0 && xx [ 30 ] == 0.0 ) ? 0.0 : atan2
( xx [ 35 ] , xx [ 30 ] ) ; output [ 0 ] = state [ 2 ] ; output [ 1 ] = state
[ 3 ] ; output [ 2 ] = state [ 4 ] ; output [ 3 ] = state [ 5 ] ; output [ 4
] = - ( xx [ 0 ] * xx [ 41 ] + xx [ 26 ] * xx [ 38 ] ) ; output [ 5 ] = - (
xx [ 26 ] * xx [ 39 ] - xx [ 0 ] * xx [ 40 ] ) ; output [ 6 ] = - ( xx [ 0 ]
* xx [ 39 ] + xx [ 26 ] * xx [ 40 ] ) ; output [ 7 ] = - ( xx [ 26 ] * xx [
41 ] - xx [ 0 ] * xx [ 38 ] ) ; output [ 8 ] = - ( xx [ 0 ] * xx [ 53 ] + xx
[ 26 ] * xx [ 50 ] ) ; output [ 9 ] = - ( xx [ 26 ] * xx [ 51 ] - xx [ 0 ] *
xx [ 52 ] ) ; output [ 10 ] = - ( xx [ 0 ] * xx [ 51 ] + xx [ 26 ] * xx [ 52
] ) ; output [ 11 ] = - ( xx [ 26 ] * xx [ 53 ] - xx [ 0 ] * xx [ 50 ] ) ;
output [ 12 ] = - ( xx [ 0 ] * xx [ 67 ] + xx [ 26 ] * xx [ 64 ] ) ; output [
13 ] = - ( xx [ 26 ] * xx [ 65 ] - xx [ 0 ] * xx [ 66 ] ) ; output [ 14 ] = -
( xx [ 0 ] * xx [ 65 ] + xx [ 26 ] * xx [ 66 ] ) ; output [ 15 ] = - ( xx [
26 ] * xx [ 67 ] - xx [ 0 ] * xx [ 64 ] ) ; output [ 16 ] = state [ 18 ] ;
output [ 17 ] = state [ 19 ] ; output [ 18 ] = state [ 20 ] ; output [ 19 ] =
state [ 21 ] ; output [ 20 ] = state [ 27 ] ; output [ 21 ] = state [ 28 ] ;
output [ 22 ] = state [ 29 ] ; output [ 23 ] = state [ 30 ] ; output [ 24 ] =
state [ 36 ] ; output [ 25 ] = state [ 37 ] ; output [ 26 ] = state [ 38 ] ;
output [ 27 ] = state [ 39 ] ; output [ 28 ] = state [ 45 ] ; output [ 29 ] =
state [ 46 ] ; output [ 30 ] = state [ 47 ] ; output [ 31 ] = state [ 48 ] ;
output [ 32 ] = state [ 54 ] ; output [ 33 ] = state [ 55 ] ; output [ 34 ] =
state [ 56 ] ; output [ 35 ] = state [ 57 ] ; output [ 36 ] = state [ 9 ] ;
output [ 37 ] = state [ 10 ] ; output [ 38 ] = state [ 11 ] ; output [ 39 ] =
state [ 12 ] ; output [ 40 ] = - ( xx [ 0 ] * xx [ 77 ] + xx [ 26 ] * xx [ 74
] ) ; output [ 41 ] = - ( xx [ 26 ] * xx [ 75 ] - xx [ 0 ] * xx [ 76 ] ) ;
output [ 42 ] = - ( xx [ 0 ] * xx [ 75 ] + xx [ 26 ] * xx [ 76 ] ) ; output [
43 ] = - ( xx [ 26 ] * xx [ 77 ] - xx [ 0 ] * xx [ 74 ] ) ; output [ 44 ] = -
( xx [ 0 ] * xx [ 83 ] + xx [ 26 ] * xx [ 80 ] ) ; output [ 45 ] = - ( xx [
26 ] * xx [ 81 ] - xx [ 0 ] * xx [ 82 ] ) ; output [ 46 ] = - ( xx [ 0 ] * xx
[ 81 ] + xx [ 26 ] * xx [ 82 ] ) ; output [ 47 ] = - ( xx [ 26 ] * xx [ 83 ]
- xx [ 0 ] * xx [ 80 ] ) ; output [ 48 ] = state [ 0 ] ; output [ 49 ] =
state [ 1 ] ; output [ 52 ] = state [ 16 ] ; output [ 53 ] = state [ 17 ] ;
output [ 56 ] = state [ 25 ] ; output [ 57 ] = state [ 26 ] ; output [ 60 ] =
state [ 34 ] ; output [ 61 ] = state [ 35 ] ; output [ 64 ] = state [ 43 ] ;
output [ 65 ] = state [ 44 ] ; output [ 68 ] = state [ 52 ] ; output [ 69 ] =
state [ 53 ] ; output [ 72 ] = - ( 8596.034158365463 * ( sqrt ( xx [ 14 ] *
xx [ 14 ] + xx [ 22 ] * xx [ 22 ] + xx [ 23 ] * xx [ 23 ] ) - xx [ 12 ] ) ) ;
output [ 73 ] = xx [ 7 ] * xx [ 10 ] + xx [ 15 ] * xx [ 1 ] ; output [ 74 ] =
xx [ 1 ] * xx [ 16 ] - xx [ 11 ] * xx [ 7 ] ; output [ 75 ] = xx [ 1 ] * xx [
10 ] - xx [ 15 ] * xx [ 7 ] ; output [ 76 ] = xx [ 7 ] * xx [ 16 ] + xx [ 11
] * xx [ 1 ] ; output [ 77 ] = xx [ 7 ] * xx [ 58 ] + xx [ 72 ] * xx [ 1 ] ;
output [ 78 ] = xx [ 59 ] * xx [ 7 ] - xx [ 1 ] * xx [ 73 ] ; output [ 79 ] =
xx [ 72 ] * xx [ 7 ] - xx [ 1 ] * xx [ 58 ] ; output [ 80 ] = xx [ 7 ] * xx [
73 ] + xx [ 59 ] * xx [ 1 ] ; output [ 81 ] = xx [ 7 ] * xx [ 5 ] + xx [ 78 ]
* xx [ 1 ] ; output [ 82 ] = xx [ 1 ] * xx [ 79 ] - xx [ 8 ] * xx [ 7 ] ;
output [ 83 ] = xx [ 1 ] * xx [ 5 ] - xx [ 78 ] * xx [ 7 ] ; output [ 84 ] =
xx [ 7 ] * xx [ 79 ] + xx [ 8 ] * xx [ 1 ] ; output [ 85 ] = xx [ 7 ] * xx [
3 ] + xx [ 6 ] * xx [ 1 ] ; output [ 86 ] = xx [ 4 ] * xx [ 7 ] - xx [ 1 ] *
xx [ 9 ] ; output [ 87 ] = xx [ 6 ] * xx [ 7 ] - xx [ 1 ] * xx [ 3 ] ; output
[ 88 ] = xx [ 7 ] * xx [ 9 ] + xx [ 4 ] * xx [ 1 ] ; output [ 89 ] = xx [ 7 ]
* xx [ 46 ] + xx [ 48 ] * xx [ 1 ] ; output [ 90 ] = xx [ 1 ] * xx [ 49 ] -
xx [ 47 ] * xx [ 7 ] ; output [ 91 ] = xx [ 1 ] * xx [ 46 ] - xx [ 48 ] * xx
[ 7 ] ; output [ 92 ] = xx [ 7 ] * xx [ 49 ] + xx [ 47 ] * xx [ 1 ] ; output
[ 93 ] = xx [ 7 ] * xx [ 54 ] + xx [ 56 ] * xx [ 1 ] ; output [ 94 ] = xx [
55 ] * xx [ 7 ] - xx [ 1 ] * xx [ 57 ] ; output [ 95 ] = xx [ 56 ] * xx [ 7 ]
- xx [ 1 ] * xx [ 54 ] ; output [ 96 ] = xx [ 7 ] * xx [ 57 ] + xx [ 55 ] *
xx [ 1 ] ; output [ 97 ] = xx [ 0 ] * xx [ 36 ] - xx [ 26 ] * xx [ 27 ] ;
output [ 98 ] = xx [ 26 ] * xx [ 28 ] - xx [ 34 ] * xx [ 0 ] ; output [ 99 ]
= xx [ 34 ] * xx [ 26 ] + xx [ 0 ] * xx [ 28 ] ; output [ 100 ] = xx [ 0 ] *
xx [ 27 ] + xx [ 26 ] * xx [ 36 ] ; output [ 101 ] = xx [ 42 ] ; output [ 102
] = xx [ 43 ] ; output [ 103 ] = xx [ 44 ] ; output [ 104 ] = xx [ 45 ] ;
output [ 105 ] = xx [ 84 ] ; output [ 106 ] = xx [ 85 ] ; output [ 107 ] = xx
[ 86 ] ; output [ 108 ] = xx [ 87 ] ; output [ 109 ] = xx [ 91 ] ; output [
110 ] = xx [ 92 ] ; output [ 111 ] = xx [ 93 ] ; output [ 112 ] = xx [ 94 ] ;
output [ 113 ] = xx [ 18 ] ; output [ 114 ] = xx [ 19 ] ; output [ 115 ] = xx
[ 20 ] ; output [ 116 ] = xx [ 21 ] ; output [ 117 ] = xx [ 60 ] ; output [
118 ] = xx [ 61 ] ; output [ 119 ] = xx [ 62 ] ; output [ 120 ] = xx [ 63 ] ;
output [ 121 ] = xx [ 31 ] ; output [ 122 ] = bb [ 0 ] ? 1.570796326794897 *
xx [ 2 ] : xx [ 32 ] ; output [ 123 ] = bb [ 0 ] ? xx [ 2 ] * xx [ 31 ] : xx
[ 30 ] ; output [ 124 ] = xx [ 14 ] ; output [ 125 ] = xx [ 17 ] ; output [
126 ] = xx [ 23 ] ; return NULL ; }
