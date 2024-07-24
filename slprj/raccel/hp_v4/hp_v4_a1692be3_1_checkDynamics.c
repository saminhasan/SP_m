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
PmfMessageId hp_v4_a1692be3_1_checkDynamics ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const double *
input , const double * inputDot , const double * inputDdot , const double *
discreteState , const int * modeVector , double * errorResult ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 42 ] ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) input ; ( void ) inputDot ; ( void
) inputDdot ; ( void ) discreteState ; ( void ) modeVector ; ( void )
neDiagMgr ; xx [ 0 ] = 2.0 ; xx [ 1 ] = 0.5004402260104069 ; xx [ 2 ] = 0.5 *
state [ 0 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = xx [ 1 ] * xx [ 3 ] ;
xx [ 5 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = 1.016807521344378e-3 * xx [ 5 ] ; xx
[ 6 ] = 0.8657710899485228 ; xx [ 7 ] = 0.9999994830510986 * xx [ 5 ] ; xx [
5 ] = xx [ 1 ] * xx [ 2 ] + xx [ 6 ] * xx [ 7 ] ; xx [ 8 ] = xx [ 6 ] * xx [
3 ] ; xx [ 3 ] = xx [ 6 ] * xx [ 2 ] - xx [ 1 ] * xx [ 7 ] ; xx [ 9 ] = - xx
[ 4 ] ; xx [ 10 ] = xx [ 5 ] ; xx [ 11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 3 ] ;
xx [ 1 ] = 5.084038263768928e-4 ; xx [ 2 ] = 0.9999998707627665 ; xx [ 6 ] =
xx [ 1 ] * state [ 4 ] + xx [ 2 ] * state [ 2 ] ; xx [ 7 ] = xx [ 1 ] * state
[ 5 ] - xx [ 2 ] * state [ 3 ] ; xx [ 13 ] = xx [ 1 ] * state [ 2 ] - xx [ 2
] * state [ 4 ] ; xx [ 14 ] = xx [ 1 ] * state [ 3 ] + xx [ 2 ] * state [ 5 ]
; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = - xx [ 7 ] ; xx [ 17 ] = - xx [ 13 ] ;
xx [ 18 ] = xx [ 14 ] ; pm_math_Quaternion_compose_ra ( xx + 9 , xx + 15 , xx
+ 19 ) ; xx [ 1 ] = 0.1395577324697271 ; xx [ 2 ] = 0.9902139361309295 ; xx [
15 ] = xx [ 1 ] * state [ 12 ] - xx [ 2 ] * state [ 9 ] ; xx [ 16 ] = xx [ 1
] * state [ 11 ] + xx [ 2 ] * state [ 10 ] ; xx [ 17 ] = - xx [ 16 ] ; xx [
18 ] = xx [ 2 ] * state [ 11 ] - xx [ 1 ] * state [ 10 ] ; xx [ 23 ] = - xx [
18 ] ; xx [ 24 ] = xx [ 1 ] * state [ 9 ] + xx [ 2 ] * state [ 12 ] ; xx [ 1
] = - xx [ 24 ] ; xx [ 25 ] = xx [ 15 ] ; xx [ 26 ] = xx [ 17 ] ; xx [ 27 ] =
xx [ 23 ] ; xx [ 28 ] = xx [ 1 ] ; pm_math_Quaternion_compose_ra ( xx + 19 ,
xx + 25 , xx + 29 ) ; xx [ 2 ] = 7.342337229937591e-19 ; xx [ 25 ] = xx [ 2 ]
* xx [ 32 ] ; xx [ 26 ] = 1.191387539608064e-17 ; xx [ 27 ] = xx [ 2 ] * xx [
30 ] - xx [ 26 ] * xx [ 31 ] ; xx [ 33 ] = - xx [ 25 ] ; xx [ 34 ] = xx [ 26
] * xx [ 32 ] ; xx [ 35 ] = xx [ 27 ] ; pm_math_Vector3_cross_ra ( xx + 30 ,
xx + 33 , xx + 36 ) ; xx [ 33 ] = xx [ 17 ] ; xx [ 34 ] = xx [ 23 ] ; xx [ 35
] = xx [ 1 ] ; xx [ 1 ] = 0.03530169195229536 ; xx [ 2 ] = xx [ 1 ] * xx [ 24
] ; xx [ 17 ] = 0.0654271681639358 ; xx [ 23 ] = xx [ 17 ] * xx [ 24 ] ; xx [
24 ] = xx [ 1 ] * xx [ 16 ] - xx [ 18 ] * xx [ 17 ] ; xx [ 16 ] = - xx [ 2 ]
; xx [ 17 ] = xx [ 23 ] ; xx [ 18 ] = xx [ 24 ] ; pm_math_Vector3_cross_ra (
xx + 33 , xx + 16 , xx + 39 ) ; xx [ 16 ] = xx [ 0 ] * ( xx [ 39 ] - xx [ 2 ]
* xx [ 15 ] ) + 0.07457283183606418 ; xx [ 17 ] = ( xx [ 23 ] * xx [ 15 ] +
xx [ 40 ] ) * xx [ 0 ] - xx [ 1 ] ; xx [ 18 ] = ( xx [ 24 ] * xx [ 15 ] + xx
[ 41 ] ) * xx [ 0 ] ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 16 , xx +
33 ) ; xx [ 1 ] = 0.14 ; xx [ 2 ] = xx [ 13 ] * xx [ 1 ] ; xx [ 15 ] = xx [ 1
] * xx [ 14 ] ; xx [ 16 ] = 0.2199463818469452 - ( xx [ 13 ] * xx [ 2 ] + xx
[ 15 ] * xx [ 14 ] ) * xx [ 0 ] ; xx [ 17 ] = ( xx [ 15 ] * xx [ 6 ] + xx [ 7
] * xx [ 2 ] ) * xx [ 0 ] ; xx [ 18 ] = 0.04006839315796021 + xx [ 0 ] * ( xx
[ 2 ] * xx [ 6 ] - xx [ 7 ] * xx [ 15 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 9 , xx + 16 , xx + 13 ) ; xx [ 9 ] = xx [ 5 ] ; xx [ 10 ] = xx [ 8 ] ; xx [
11 ] = xx [ 3 ] ; xx [ 1 ] = 0.03998704855625266 ; xx [ 2 ] = xx [ 1 ] * xx [
8 ] ; xx [ 6 ] = 5.357679714268354e-5 ; xx [ 7 ] = xx [ 6 ] * xx [ 3 ] + xx [
5 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 6 ] * xx [ 8 ] ; xx [ 16 ] = xx [ 2 ] ; xx [
17 ] = - xx [ 7 ] ; xx [ 18 ] = xx [ 1 ] ; pm_math_Vector3_cross_ra ( xx + 9
, xx + 16 , xx + 19 ) ; xx [ 3 ] = xx [ 0 ] * ( xx [ 36 ] - xx [ 29 ] * xx [
25 ] ) + xx [ 33 ] + xx [ 13 ] - ( xx [ 19 ] - xx [ 2 ] * xx [ 4 ] ) * xx [ 0
] + 0.07304395785390927 ; xx [ 2 ] = 1.275706872409467 - ( ( xx [ 26 ] * xx [
29 ] * xx [ 32 ] + xx [ 37 ] ) * xx [ 0 ] + xx [ 34 ] + xx [ 14 ] - ( xx [ 4
] * xx [ 7 ] + xx [ 20 ] ) * xx [ 0 ] ) ; xx [ 5 ] = ( xx [ 29 ] * xx [ 27 ]
+ xx [ 38 ] ) * xx [ 0 ] + xx [ 35 ] + xx [ 15 ] - xx [ 0 ] * ( xx [ 21 ] -
xx [ 1 ] * xx [ 4 ] ) + 0.03679498374650248 ; xx [ 0 ] = sqrt ( xx [ 3 ] * xx
[ 3 ] + xx [ 2 ] * xx [ 2 ] + xx [ 5 ] * xx [ 5 ] ) ; if ( xx [ 0 ] == 0.0 )
{ return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'hp_v4/Spring and Damper Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 0 ] = 1.0 / xx [ 0 ] ; errorResult [ 0 ] = xx [ 0 ] ;
return NULL ; }
