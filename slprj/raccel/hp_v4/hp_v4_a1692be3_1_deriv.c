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
PmfMessageId hp_v4_a1692be3_1_compDerivs ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
int ii [ 15 ] ; double xx [ 1750 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) modeVector ; ( void ) inputDot ; ( void )
inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
5.084038263768928e-4 ; xx [ 1 ] = 0.9999998707627665 ; xx [ 2 ] = xx [ 0 ] *
state [ 4 ] + xx [ 1 ] * state [ 2 ] ; xx [ 3 ] = xx [ 0 ] * state [ 5 ] - xx
[ 1 ] * state [ 3 ] ; xx [ 4 ] = - xx [ 3 ] ; xx [ 5 ] = xx [ 0 ] * state [ 2
] - xx [ 1 ] * state [ 4 ] ; xx [ 6 ] = - xx [ 5 ] ; xx [ 7 ] = xx [ 0 ] *
state [ 3 ] + xx [ 1 ] * state [ 5 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [
4 ] ; xx [ 10 ] = xx [ 6 ] ; xx [ 11 ] = xx [ 7 ] ; xx [ 12 ] =
0.9999994830510986 ; xx [ 13 ] = xx [ 12 ] * state [ 1 ] ; xx [ 14 ] = xx [ 5
] * xx [ 13 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 6 ] ; xx [ 17 ] = xx
[ 7 ] ; xx [ 4 ] = 1.016807521344378e-3 ; xx [ 6 ] = xx [ 4 ] * state [ 1 ] ;
xx [ 18 ] = xx [ 3 ] * xx [ 13 ] - xx [ 6 ] * xx [ 7 ] ; xx [ 19 ] = xx [ 5 ]
* xx [ 6 ] ; xx [ 20 ] = - xx [ 14 ] ; xx [ 21 ] = xx [ 18 ] ; xx [ 22 ] = -
xx [ 19 ] ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 20 , xx + 23 ) ; xx [
20 ] = 2.0 ; xx [ 21 ] = ( xx [ 14 ] * xx [ 2 ] + xx [ 23 ] ) * xx [ 20 ] -
xx [ 6 ] ; xx [ 14 ] = xx [ 21 ] + state [ 6 ] ; xx [ 22 ] = xx [ 20 ] * ( xx
[ 24 ] - xx [ 18 ] * xx [ 2 ] ) ; xx [ 18 ] = xx [ 22 ] + state [ 7 ] ; xx [
23 ] = xx [ 13 ] + xx [ 20 ] * ( xx [ 25 ] + xx [ 19 ] * xx [ 2 ] ) ; xx [ 19
] = xx [ 23 ] + state [ 8 ] ; xx [ 24 ] = xx [ 14 ] ; xx [ 25 ] = xx [ 18 ] ;
xx [ 26 ] = xx [ 19 ] ; xx [ 27 ] = 3.663333333333262e-6 ; xx [ 28 ] =
1.437858333333333e-3 ; xx [ 29 ] = xx [ 14 ] * xx [ 27 ] ; xx [ 30 ] = xx [
18 ] * xx [ 28 ] ; xx [ 31 ] = xx [ 19 ] * xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 24 , xx + 29 , xx + 32 ) ; xx [ 29 ] =
0.1395577324697271 ; xx [ 30 ] = 0.9902139361309295 ; xx [ 31 ] = xx [ 29 ] *
state [ 12 ] - xx [ 30 ] * state [ 9 ] ; xx [ 35 ] = xx [ 29 ] * state [ 11 ]
+ xx [ 30 ] * state [ 10 ] ; xx [ 36 ] = - xx [ 35 ] ; xx [ 37 ] = xx [ 30 ]
* state [ 11 ] - xx [ 29 ] * state [ 10 ] ; xx [ 38 ] = - xx [ 37 ] ; xx [ 39
] = xx [ 29 ] * state [ 9 ] + xx [ 30 ] * state [ 12 ] ; xx [ 40 ] = - xx [
39 ] ; xx [ 41 ] = xx [ 31 ] ; xx [ 42 ] = xx [ 36 ] ; xx [ 43 ] = xx [ 38 ]
; xx [ 44 ] = xx [ 40 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx +
24 , xx + 45 ) ; xx [ 48 ] = xx [ 29 ] * state [ 13 ] ; xx [ 49 ] = xx [ 29 ]
* state [ 14 ] ; xx [ 50 ] = state [ 13 ] - ( xx [ 29 ] * xx [ 48 ] - xx [ 30
] * xx [ 49 ] ) * xx [ 20 ] ; xx [ 51 ] = xx [ 45 ] + xx [ 50 ] ; xx [ 52 ] =
state [ 14 ] - xx [ 20 ] * ( xx [ 30 ] * xx [ 48 ] + xx [ 29 ] * xx [ 49 ] )
; xx [ 29 ] = xx [ 46 ] + xx [ 52 ] ; xx [ 30 ] = xx [ 47 ] + state [ 15 ] ;
xx [ 53 ] = xx [ 51 ] ; xx [ 54 ] = xx [ 29 ] ; xx [ 55 ] = xx [ 30 ] ; xx [
48 ] = 0.02140755024530636 ; xx [ 49 ] = 0.02140755024530637 ; xx [ 56 ] =
0.04248176715727939 ; xx [ 57 ] = xx [ 51 ] * xx [ 48 ] ; xx [ 58 ] = xx [ 29
] * xx [ 49 ] ; xx [ 59 ] = xx [ 30 ] * xx [ 56 ] ; pm_math_Vector3_cross_ra
( xx + 53 , xx + 57 , xx + 60 ) ; xx [ 53 ] = 7.342337229937591e-19 ; xx [ 54
] = 0.5004402260104069 ; xx [ 55 ] = 0.5 ; xx [ 57 ] = xx [ 55 ] * state [ 0
] ; xx [ 58 ] = cos ( xx [ 57 ] ) ; xx [ 59 ] = xx [ 54 ] * xx [ 58 ] ; xx [
63 ] = sin ( xx [ 57 ] ) ; xx [ 57 ] = xx [ 4 ] * xx [ 63 ] ; xx [ 64 ] =
0.8657710899485228 ; xx [ 65 ] = xx [ 12 ] * xx [ 63 ] ; xx [ 63 ] = xx [ 54
] * xx [ 57 ] + xx [ 64 ] * xx [ 65 ] ; xx [ 66 ] = xx [ 64 ] * xx [ 58 ] ;
xx [ 58 ] = xx [ 64 ] * xx [ 57 ] - xx [ 54 ] * xx [ 65 ] ; xx [ 67 ] = - xx
[ 59 ] ; xx [ 68 ] = xx [ 63 ] ; xx [ 69 ] = xx [ 66 ] ; xx [ 70 ] = xx [ 58
] ; pm_math_Quaternion_compose_ra ( xx + 67 , xx + 8 , xx + 71 ) ;
pm_math_Quaternion_compose_ra ( xx + 71 , xx + 41 , xx + 75 ) ; xx [ 54 ] =
1.0 ; xx [ 57 ] = 1.191387539608064e-17 ; xx [ 64 ] = xx [ 53 ] * xx [ 78 ] ;
xx [ 65 ] = xx [ 53 ] * xx [ 76 ] - xx [ 57 ] * xx [ 77 ] ; xx [ 79 ] = - xx
[ 64 ] ; xx [ 80 ] = xx [ 57 ] * xx [ 78 ] ; xx [ 81 ] = xx [ 65 ] ;
pm_math_Vector3_cross_ra ( xx + 76 , xx + 79 , xx + 82 ) ; xx [ 79 ] = 0.14 ;
xx [ 85 ] = xx [ 36 ] ; xx [ 86 ] = xx [ 38 ] ; xx [ 87 ] = xx [ 40 ] ; xx [
36 ] = 0.03530169195229536 ; xx [ 38 ] = xx [ 36 ] * xx [ 39 ] ; xx [ 40 ] =
0.0654271681639358 ; xx [ 80 ] = xx [ 40 ] * xx [ 39 ] ; xx [ 81 ] = xx [ 36
] * xx [ 35 ] - xx [ 37 ] * xx [ 40 ] ; xx [ 88 ] = - xx [ 38 ] ; xx [ 89 ] =
xx [ 80 ] ; xx [ 90 ] = xx [ 81 ] ; pm_math_Vector3_cross_ra ( xx + 85 , xx +
88 , xx + 91 ) ; xx [ 88 ] = xx [ 38 ] * xx [ 31 ] ; xx [ 89 ] = xx [ 79 ] +
xx [ 20 ] * ( xx [ 91 ] - xx [ 88 ] ) - xx [ 40 ] ; xx [ 90 ] = xx [ 80 ] *
xx [ 31 ] ; xx [ 94 ] = ( xx [ 90 ] + xx [ 92 ] ) * xx [ 20 ] - xx [ 36 ] ;
xx [ 91 ] = ( xx [ 81 ] * xx [ 31 ] + xx [ 93 ] ) * xx [ 20 ] ; xx [ 95 ] =
xx [ 89 ] ; xx [ 96 ] = xx [ 94 ] ; xx [ 97 ] = xx [ 91 ] ;
pm_math_Quaternion_xform_ra ( xx + 71 , xx + 95 , xx + 98 ) ; xx [ 81 ] =
0.07994638184694522 ; xx [ 92 ] = xx [ 5 ] * xx [ 79 ] ; xx [ 93 ] = xx [ 5 ]
* xx [ 92 ] ; xx [ 101 ] = xx [ 79 ] * xx [ 7 ] ; xx [ 102 ] = xx [ 101 ] *
xx [ 7 ] ; xx [ 103 ] = xx [ 81 ] + xx [ 79 ] - ( xx [ 93 ] + xx [ 102 ] ) *
xx [ 20 ] ; xx [ 104 ] = xx [ 101 ] * xx [ 2 ] ; xx [ 105 ] = ( xx [ 104 ] +
xx [ 3 ] * xx [ 92 ] ) * xx [ 20 ] ; xx [ 106 ] = 0.04006839315796021 ; xx [
107 ] = xx [ 92 ] * xx [ 2 ] ; xx [ 108 ] = xx [ 106 ] + xx [ 20 ] * ( xx [
107 ] - xx [ 3 ] * xx [ 101 ] ) ; xx [ 109 ] = xx [ 103 ] ; xx [ 110 ] = xx [
105 ] ; xx [ 111 ] = xx [ 108 ] ; pm_math_Quaternion_xform_ra ( xx + 67 , xx
+ 109 , xx + 112 ) ; xx [ 115 ] = xx [ 63 ] ; xx [ 116 ] = xx [ 66 ] ; xx [
117 ] = xx [ 58 ] ; xx [ 118 ] = 0.03998704855625266 ; xx [ 119 ] = xx [ 118
] * xx [ 66 ] ; xx [ 120 ] = 5.357679714268354e-5 ; xx [ 121 ] = xx [ 120 ] *
xx [ 58 ] + xx [ 63 ] * xx [ 118 ] ; xx [ 118 ] = xx [ 120 ] * xx [ 66 ] ; xx
[ 122 ] = xx [ 119 ] ; xx [ 123 ] = - xx [ 121 ] ; xx [ 124 ] = xx [ 118 ] ;
pm_math_Vector3_cross_ra ( xx + 115 , xx + 122 , xx + 125 ) ; xx [ 120 ] = xx
[ 57 ] + xx [ 20 ] * ( xx [ 82 ] - xx [ 75 ] * xx [ 64 ] ) + xx [ 98 ] + xx [
112 ] - ( xx [ 125 ] - xx [ 119 ] * xx [ 59 ] ) * xx [ 20 ] +
0.07304395785390926 ; xx [ 64 ] = xx [ 75 ] * xx [ 78 ] ; xx [ 119 ] =
1.275706872409467 - ( xx [ 53 ] + ( xx [ 57 ] * xx [ 64 ] + xx [ 83 ] ) * xx
[ 20 ] + xx [ 99 ] + xx [ 113 ] - ( xx [ 59 ] * xx [ 121 ] + xx [ 126 ] ) *
xx [ 20 ] ) ; xx [ 82 ] = ( xx [ 75 ] * xx [ 65 ] + xx [ 84 ] ) * xx [ 20 ] +
xx [ 100 ] + xx [ 114 ] - xx [ 20 ] * ( xx [ 127 ] - xx [ 118 ] * xx [ 59 ] )
+ 0.03679498374650248 ; xx [ 65 ] = sqrt ( xx [ 120 ] * xx [ 120 ] + xx [ 119
] * xx [ 119 ] + xx [ 82 ] * xx [ 82 ] ) ; if ( xx [ 65 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'hp_v4/Spring and Damper Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 83 ] = xx [ 54 ] / xx [ 65 ] ; xx [ 84 ] =
8596.034158365463 * ( xx [ 65 ] - xx [ 54 ] ) ; xx [ 98 ] = - ( xx [ 83 ] *
xx [ 120 ] * xx [ 84 ] ) ; xx [ 99 ] = xx [ 83 ] * xx [ 119 ] * xx [ 84 ] ;
xx [ 100 ] = - ( xx [ 83 ] * xx [ 82 ] * xx [ 84 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 75 , xx + 98 , xx + 112 ) ; xx [ 98
] = xx [ 50 ] ; xx [ 99 ] = xx [ 52 ] ; xx [ 100 ] = state [ 15 ] ;
pm_math_Vector3_cross_ra ( xx + 45 , xx + 98 , xx + 118 ) ; xx [ 65 ] = xx [
60 ] - xx [ 53 ] * xx [ 114 ] + xx [ 48 ] * xx [ 118 ] ; xx [ 48 ] =
0.02057366790508303 ; xx [ 82 ] = - 0.2010902691868165 ; xx [ 84 ] = 0.0 ; xx
[ 121 ] = 0.2747863888508914 ; xx [ 122 ] = xx [ 82 ] ; xx [ 123 ] = xx [ 84
] ; xx [ 124 ] = xx [ 82 ] ; xx [ 125 ] = 0.1934133408123828 ; xx [ 126 ] =
xx [ 84 ] ; xx [ 127 ] = xx [ 84 ] ; xx [ 128 ] = xx [ 84 ] ; xx [ 129 ] =
0.3911780194875643 ; xx [ 82 ] = 0.05200961894323344 ; xx [ 130 ] = xx [ 37 ]
* xx [ 82 ] ; xx [ 131 ] = xx [ 82 ] * xx [ 35 ] ; xx [ 132 ] = xx [ 20 ] * (
xx [ 130 ] * xx [ 31 ] - xx [ 131 ] * xx [ 39 ] ) ; xx [ 133 ] = - ( ( xx [
131 ] * xx [ 31 ] + xx [ 130 ] * xx [ 39 ] ) * xx [ 20 ] ) ; xx [ 134 ] = (
xx [ 131 ] * xx [ 35 ] + xx [ 37 ] * xx [ 130 ] ) * xx [ 20 ] - xx [ 82 ] ;
pm_math_Quaternion_xform_ra ( xx + 71 , xx + 132 , xx + 135 ) ; xx [ 130 ] =
0.01999999999999999 ; xx [ 131 ] = xx [ 130 ] * xx [ 77 ] ; xx [ 132 ] = xx [
130 ] * xx [ 76 ] ; xx [ 133 ] = xx [ 135 ] - ( xx [ 75 ] * xx [ 131 ] + xx [
78 ] * xx [ 132 ] ) * xx [ 20 ] ; pm_math_Quaternion_compose_ra ( xx + 8 , xx
+ 41 , xx + 138 ) ; pm_math_Quaternion_compose_ra ( xx + 67 , xx + 138 , xx +
142 ) ; xx [ 134 ] = xx [ 4 ] * xx [ 141 ] + xx [ 12 ] * xx [ 139 ] ; xx [
146 ] = xx [ 4 ] * xx [ 140 ] ; xx [ 147 ] = xx [ 12 ] * xx [ 140 ] ; xx [
148 ] = - xx [ 134 ] ; xx [ 149 ] = xx [ 146 ] ; pm_math_Vector3_cross_ra (
xx + 139 , xx + 147 , xx + 150 ) ; xx [ 139 ] = xx [ 12 ] + ( xx [ 152 ] - xx
[ 138 ] * xx [ 146 ] ) * xx [ 20 ] ; xx [ 141 ] = 5.68852606864536e-4 ; xx [
146 ] = 0.07434110703613682 ; xx [ 147 ] = xx [ 20 ] * ( xx [ 150 ] - xx [ 12
] * xx [ 138 ] * xx [ 140 ] ) - xx [ 4 ] ; xx [ 140 ] = 0.1486822140722736 ;
xx [ 148 ] = xx [ 151 ] + xx [ 138 ] * xx [ 134 ] ; xx [ 149 ] = - ( xx [ 139
] * xx [ 141 ] ) ; xx [ 150 ] = - ( xx [ 139 ] * xx [ 146 ] ) ; xx [ 151 ] =
xx [ 147 ] * xx [ 141 ] + xx [ 140 ] * xx [ 148 ] ;
pm_math_Quaternion_xform_ra ( xx + 142 , xx + 149 , xx + 152 ) ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 95 , xx + 149 ) ; xx [ 134 ] = xx
[ 150 ] + xx [ 105 ] ; xx [ 155 ] = - ( xx [ 134 ] * xx [ 12 ] ) ; xx [ 156 ]
= ( xx [ 149 ] + xx [ 103 ] ) * xx [ 12 ] + ( xx [ 151 ] + xx [ 108 ] ) * xx
[ 4 ] ; xx [ 157 ] = - ( xx [ 134 ] * xx [ 4 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 67 , xx + 155 , xx + 149 ) ; xx [ 134 ] =
1.291763771785659e-5 ; xx [ 138 ] = xx [ 63 ] * xx [ 134 ] ; xx [ 155 ] = xx
[ 134 ] * xx [ 58 ] ; xx [ 156 ] = xx [ 149 ] + xx [ 20 ] * ( xx [ 138 ] * xx
[ 66 ] + xx [ 155 ] * xx [ 59 ] ) ; xx [ 157 ] = xx [ 152 ] + xx [ 156 ] ; xx
[ 158 ] = 0.07160254037844391 ; xx [ 159 ] = xx [ 158 ] * xx [ 77 ] ; xx [
160 ] = xx [ 158 ] * xx [ 76 ] ; xx [ 161 ] = 0.05312177826491075 ; xx [ 162
] = xx [ 161 ] * xx [ 35 ] ; xx [ 163 ] = xx [ 37 ] * xx [ 161 ] ; xx [ 164 ]
= xx [ 20 ] * ( xx [ 162 ] * xx [ 39 ] - xx [ 163 ] * xx [ 31 ] ) ; xx [ 165
] = ( xx [ 162 ] * xx [ 31 ] + xx [ 163 ] * xx [ 39 ] ) * xx [ 20 ] ; xx [
166 ] = xx [ 161 ] - ( xx [ 162 ] * xx [ 35 ] + xx [ 37 ] * xx [ 163 ] ) * xx
[ 20 ] ; pm_math_Quaternion_xform_ra ( xx + 71 , xx + 164 , xx + 167 ) ; xx [
162 ] = ( xx [ 75 ] * xx [ 159 ] + xx [ 78 ] * xx [ 160 ] ) * xx [ 20 ] + xx
[ 167 ] ; xx [ 163 ] = xx [ 146 ] * xx [ 78 ] ; xx [ 164 ] = xx [ 141 ] * xx
[ 77 ] - xx [ 146 ] * xx [ 76 ] ; xx [ 170 ] = xx [ 163 ] ; xx [ 171 ] = - (
xx [ 141 ] * xx [ 78 ] ) ; xx [ 172 ] = xx [ 164 ] ; pm_math_Vector3_cross_ra
( xx + 76 , xx + 170 , xx + 173 ) ; xx [ 165 ] = xx [ 40 ] * xx [ 35 ] + xx [
37 ] * xx [ 36 ] ; xx [ 170 ] = - xx [ 80 ] ; xx [ 171 ] = - xx [ 38 ] ; xx [
172 ] = xx [ 165 ] ; pm_math_Vector3_cross_ra ( xx + 85 , xx + 170 , xx + 176
) ; xx [ 85 ] = xx [ 36 ] + xx [ 20 ] * ( xx [ 176 ] - xx [ 90 ] ) ; xx [ 86
] = ( xx [ 177 ] - xx [ 88 ] ) * xx [ 20 ] - xx [ 40 ] ; xx [ 87 ] = ( xx [
165 ] * xx [ 31 ] + xx [ 178 ] ) * xx [ 20 ] ; pm_math_Quaternion_xform_ra (
xx + 71 , xx + 85 , xx + 170 ) ; xx [ 38 ] = xx [ 20 ] * ( xx [ 173 ] + xx [
75 ] * xx [ 163 ] ) - xx [ 141 ] + xx [ 170 ] ; xx [ 85 ] = xx [ 133 ] ; xx [
86 ] = xx [ 162 ] ; xx [ 87 ] = xx [ 38 ] ; solveSymmetricPosDef ( xx + 121 ,
xx + 85 , 3 , 1 , xx + 176 , xx + 179 ) ; xx [ 80 ] = 5.916704863069737e-3 ;
xx [ 85 ] = 0.02057366790508303 ; xx [ 86 ] = 5.91670486306974e-3 ; xx [ 179
] = xx [ 48 ] * xx [ 176 ] + xx [ 80 ] * xx [ 177 ] ; xx [ 180 ] = xx [ 85 ]
* xx [ 177 ] - xx [ 86 ] * xx [ 176 ] ; xx [ 181 ] = xx [ 56 ] * xx [ 178 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 179 , xx + 182 ) ; xx [ 87 ] =
0.7060338390459073 ; xx [ 88 ] = 1.308543363278716 ; xx [ 90 ] =
1.062435565298215 ; xx [ 163 ] = 1.040192378864669 ; xx [ 179 ] = xx [ 87 ] *
xx [ 178 ] ; xx [ 180 ] = - ( xx [ 88 ] * xx [ 178 ] ) ; xx [ 181 ] = xx [ 90
] * xx [ 177 ] - xx [ 163 ] * xx [ 176 ] ; pm_math_Quaternion_xform_ra ( xx +
41 , xx + 179 , xx + 185 ) ; pm_math_Vector3_cross_ra ( xx + 95 , xx + 185 ,
xx + 179 ) ; xx [ 165 ] = xx [ 182 ] + xx [ 179 ] ; xx [ 166 ] = xx [ 31 ] *
xx [ 31 ] ; xx [ 188 ] = xx [ 35 ] * xx [ 35 ] ; xx [ 189 ] = ( xx [ 166 ] +
xx [ 188 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 190 ] = xx [ 37 ] * xx [ 35 ] ;
xx [ 191 ] = xx [ 39 ] * xx [ 31 ] ; xx [ 192 ] = xx [ 190 ] - xx [ 191 ] ;
xx [ 193 ] = xx [ 20 ] * xx [ 192 ] ; xx [ 194 ] = xx [ 39 ] * xx [ 35 ] ; xx
[ 195 ] = xx [ 37 ] * xx [ 31 ] ; xx [ 196 ] = ( xx [ 194 ] + xx [ 195 ] ) *
xx [ 20 ] ; xx [ 197 ] = ( xx [ 190 ] + xx [ 191 ] ) * xx [ 20 ] ; xx [ 198 ]
= xx [ 37 ] * xx [ 37 ] ; xx [ 199 ] = ( xx [ 166 ] + xx [ 198 ] ) * xx [ 20
] - xx [ 54 ] ; xx [ 200 ] = xx [ 37 ] * xx [ 39 ] ; xx [ 37 ] = xx [ 35 ] *
xx [ 31 ] ; xx [ 31 ] = xx [ 200 ] - xx [ 37 ] ; xx [ 35 ] = xx [ 20 ] * xx [
31 ] ; xx [ 201 ] = xx [ 20 ] * ( xx [ 194 ] - xx [ 195 ] ) ; xx [ 202 ] = (
xx [ 200 ] + xx [ 37 ] ) * xx [ 20 ] ; xx [ 203 ] = xx [ 39 ] * xx [ 39 ] ;
xx [ 39 ] = ( xx [ 166 ] + xx [ 203 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 204 ]
= xx [ 189 ] ; xx [ 205 ] = xx [ 193 ] ; xx [ 206 ] = xx [ 196 ] ; xx [ 207 ]
= xx [ 197 ] ; xx [ 208 ] = xx [ 199 ] ; xx [ 209 ] = xx [ 35 ] ; xx [ 210 ]
= xx [ 201 ] ; xx [ 211 ] = xx [ 202 ] ; xx [ 212 ] = xx [ 39 ] ; xx [ 166 ]
= 4.04381887391831e-3 ; xx [ 213 ] = 7.494700759552345e-3 ; xx [ 214 ] =
0.0138904686947087 ; xx [ 215 ] = 0.03068789919414749 ; xx [ 216 ] = xx [ 166
] * xx [ 189 ] - xx [ 213 ] * xx [ 197 ] ; xx [ 217 ] = xx [ 214 ] * xx [ 197
] - xx [ 213 ] * xx [ 189 ] ; xx [ 218 ] = xx [ 215 ] * xx [ 201 ] ; xx [ 219
] = xx [ 166 ] * xx [ 193 ] - xx [ 213 ] * xx [ 199 ] ; xx [ 220 ] = xx [ 214
] * xx [ 199 ] - xx [ 213 ] * xx [ 193 ] ; xx [ 221 ] = xx [ 215 ] * xx [ 202
] ; xx [ 222 ] = xx [ 166 ] * xx [ 196 ] - xx [ 213 ] * xx [ 35 ] ; xx [ 223
] = xx [ 214 ] * xx [ 35 ] - xx [ 213 ] * xx [ 196 ] ; xx [ 224 ] = xx [ 215
] * xx [ 39 ] ; pm_math_Matrix3x3_compose_ra ( xx + 204 , xx + 216 , xx + 225
) ; xx [ 166 ] = 0.1145502849943536 ; xx [ 213 ] = 0.2123042932242523 ; xx [
214 ] = 0.3632802654702478 ; xx [ 215 ] = 0.1960104400643727 ; xx [ 216 ] =
xx [ 166 ] * xx [ 201 ] ; xx [ 217 ] = - ( xx [ 213 ] * xx [ 201 ] ) ; xx [
218 ] = xx [ 214 ] * xx [ 197 ] - xx [ 215 ] * xx [ 189 ] ; xx [ 219 ] = xx [
166 ] * xx [ 202 ] ; xx [ 220 ] = - ( xx [ 213 ] * xx [ 202 ] ) ; xx [ 221 ]
= xx [ 214 ] * xx [ 199 ] - xx [ 215 ] * xx [ 193 ] ; xx [ 222 ] = xx [ 166 ]
* xx [ 39 ] ; xx [ 223 ] = - ( xx [ 213 ] * xx [ 39 ] ) ; xx [ 224 ] = xx [
214 ] * xx [ 35 ] - xx [ 215 ] * xx [ 196 ] ; pm_math_Matrix3x3_compose_ra (
xx + 204 , xx + 216 , xx + 234 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 234
, xx + 95 , xx + 213 ) ; xx [ 166 ] = 16.74236707292877 ; xx [ 222 ] =
6.037605722238072 ; xx [ 223 ] = 8.810070479618288 ; xx [ 224 ] =
3.244895036451798 ; xx [ 243 ] = xx [ 166 ] * xx [ 189 ] + xx [ 222 ] * xx [
197 ] ; xx [ 244 ] = xx [ 222 ] * xx [ 189 ] + xx [ 223 ] * xx [ 197 ] ; xx [
245 ] = xx [ 224 ] * xx [ 201 ] ; xx [ 246 ] = xx [ 166 ] * xx [ 193 ] + xx [
222 ] * xx [ 199 ] ; xx [ 247 ] = xx [ 222 ] * xx [ 193 ] + xx [ 223 ] * xx [
199 ] ; xx [ 248 ] = xx [ 224 ] * xx [ 202 ] ; xx [ 249 ] = xx [ 166 ] * xx [
196 ] + xx [ 222 ] * xx [ 35 ] ; xx [ 250 ] = xx [ 222 ] * xx [ 196 ] + xx [
223 ] * xx [ 35 ] ; xx [ 251 ] = xx [ 224 ] * xx [ 39 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 204 , xx + 243 , xx + 252 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 252 , xx + 95 , xx + 243 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 243 , xx + 95 , xx + 261 ) ; xx [ 166 ]
= xx [ 27 ] + xx [ 225 ] - xx [ 213 ] - xx [ 213 ] - xx [ 261 ] ; xx [ 222 ]
= xx [ 228 ] - xx [ 216 ] - xx [ 214 ] - xx [ 264 ] ; xx [ 223 ] = xx [ 240 ]
- xx [ 245 ] ; xx [ 224 ] = xx [ 222 ] - xx [ 79 ] * xx [ 223 ] ; xx [ 240 ]
= xx [ 231 ] - xx [ 219 ] - xx [ 215 ] - xx [ 267 ] ; xx [ 245 ] = xx [ 237 ]
- xx [ 244 ] ; xx [ 237 ] = xx [ 240 ] + xx [ 79 ] * xx [ 245 ] ; xx [ 244 ]
= xx [ 28 ] + xx [ 229 ] - xx [ 217 ] - xx [ 217 ] - xx [ 265 ] ; xx [ 270 ]
= xx [ 241 ] - xx [ 248 ] ; xx [ 241 ] = xx [ 244 ] - xx [ 79 ] * xx [ 270 ]
; xx [ 248 ] = 0.2198 ; xx [ 271 ] = xx [ 248 ] + xx [ 260 ] ; xx [ 260 ] =
xx [ 270 ] - xx [ 271 ] * xx [ 79 ] ; xx [ 272 ] = xx [ 232 ] - xx [ 220 ] -
xx [ 218 ] - xx [ 268 ] ; xx [ 273 ] = xx [ 238 ] - xx [ 247 ] ; xx [ 238 ] =
xx [ 272 ] + xx [ 79 ] * xx [ 273 ] ; xx [ 247 ] = xx [ 242 ] - xx [ 251 ] ;
xx [ 242 ] = xx [ 247 ] + xx [ 79 ] * xx [ 257 ] ; xx [ 251 ] = xx [ 238 ] -
xx [ 242 ] * xx [ 79 ] ; xx [ 213 ] = xx [ 28 ] + xx [ 233 ] - xx [ 221 ] -
xx [ 221 ] - xx [ 269 ] ; xx [ 217 ] = xx [ 239 ] - xx [ 250 ] ; xx [ 221 ] =
xx [ 213 ] + xx [ 79 ] * xx [ 217 ] ; xx [ 239 ] = xx [ 248 ] + xx [ 256 ] ;
xx [ 250 ] = xx [ 217 ] + xx [ 239 ] * xx [ 79 ] ; xx [ 274 ] = xx [ 166 ] ;
xx [ 275 ] = xx [ 224 ] ; xx [ 276 ] = xx [ 237 ] ; xx [ 277 ] = xx [ 224 ] ;
xx [ 278 ] = xx [ 241 ] - xx [ 260 ] * xx [ 79 ] ; xx [ 279 ] = xx [ 251 ] ;
xx [ 280 ] = xx [ 237 ] ; xx [ 281 ] = xx [ 251 ] ; xx [ 282 ] = xx [ 221 ] +
xx [ 250 ] * xx [ 79 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 274 , 3 , xx
+ 283 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Coupler and platform/Spherical Joint 1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 251 ] = xx [ 54 ] - ( xx [ 198 ] + xx [ 203 ] ) * xx [
20 ] ; xx [ 256 ] = xx [ 191 ] + xx [ 190 ] ; xx [ 283 ] = - ( xx [ 141 ] *
xx [ 201 ] ) ; xx [ 284 ] = - ( xx [ 146 ] * xx [ 201 ] ) ; xx [ 285 ] = xx [
141 ] * xx [ 251 ] + xx [ 256 ] * xx [ 140 ] ; pm_math_Quaternion_xform_ra (
xx + 75 , xx + 283 , xx + 286 ) ; xx [ 190 ] = xx [ 91 ] * xx [ 7 ] ; xx [
191 ] = xx [ 94 ] * xx [ 5 ] ; xx [ 283 ] = xx [ 190 ] - xx [ 191 ] ; xx [
284 ] = xx [ 94 ] * xx [ 3 ] ; xx [ 285 ] = xx [ 3 ] * xx [ 91 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 283 , xx + 289 ) ; xx [ 292 ] = (
xx [ 2 ] * xx [ 283 ] + xx [ 289 ] ) * xx [ 20 ] ; xx [ 293 ] = ( xx [ 284 ]
* xx [ 2 ] + xx [ 290 ] ) * xx [ 20 ] - xx [ 91 ] ; xx [ 294 ] = xx [ 94 ] +
( xx [ 285 ] * xx [ 2 ] + xx [ 291 ] ) * xx [ 20 ] ;
pm_math_Quaternion_xform_ra ( xx + 67 , xx + 292 , xx + 283 ) ; xx [ 289 ] =
xx [ 286 ] + xx [ 283 ] ; xx [ 290 ] = ( xx [ 37 ] + xx [ 200 ] ) * xx [ 20 ]
; xx [ 37 ] = 1.137705213729072e-3 ; xx [ 200 ] = xx [ 54 ] - ( xx [ 203 ] +
xx [ 188 ] ) * xx [ 20 ] ; xx [ 291 ] = - ( xx [ 141 ] * xx [ 290 ] ) ; xx [
292 ] = - ( xx [ 146 ] * xx [ 290 ] ) ; xx [ 293 ] = xx [ 37 ] * xx [ 192 ] +
xx [ 146 ] * xx [ 200 ] ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 291 ,
xx + 294 ) ; xx [ 203 ] = xx [ 89 ] * xx [ 5 ] ; xx [ 291 ] = xx [ 89 ] * xx
[ 3 ] ; xx [ 292 ] = xx [ 190 ] - xx [ 291 ] ; xx [ 190 ] = xx [ 5 ] * xx [
91 ] ; xx [ 297 ] = xx [ 203 ] ; xx [ 298 ] = xx [ 292 ] ; xx [ 299 ] = xx [
190 ] ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 297 , xx + 300 ) ; xx [ 293
] = xx [ 3 ] * xx [ 79 ] ; xx [ 297 ] = xx [ 293 ] * xx [ 2 ] ; xx [ 298 ] =
xx [ 3 ] * xx [ 293 ] ; xx [ 303 ] = xx [ 91 ] + ( xx [ 203 ] * xx [ 2 ] + xx
[ 300 ] ) * xx [ 20 ] + ( xx [ 107 ] + xx [ 293 ] * xx [ 7 ] ) * xx [ 20 ] ;
xx [ 304 ] = ( xx [ 2 ] * xx [ 292 ] + xx [ 301 ] ) * xx [ 20 ] + xx [ 20 ] *
( xx [ 92 ] * xx [ 7 ] - xx [ 297 ] ) ; xx [ 305 ] = ( xx [ 190 ] * xx [ 2 ]
+ xx [ 302 ] ) * xx [ 20 ] - ( xx [ 89 ] - ( xx [ 298 ] + xx [ 93 ] ) * xx [
20 ] ) - xx [ 79 ] ; pm_math_Quaternion_xform_ra ( xx + 67 , xx + 303 , xx +
91 ) ; xx [ 107 ] = xx [ 294 ] + xx [ 91 ] ; xx [ 190 ] = xx [ 183 ] + xx [
180 ] ; xx [ 203 ] = xx [ 54 ] - ( xx [ 188 ] + xx [ 198 ] ) * xx [ 20 ] ; xx
[ 188 ] = xx [ 195 ] + xx [ 194 ] ; xx [ 299 ] = - ( xx [ 141 ] * xx [ 203 ]
) ; xx [ 300 ] = - ( xx [ 146 ] * xx [ 203 ] ) ; xx [ 301 ] = xx [ 188 ] * xx
[ 37 ] + xx [ 140 ] * xx [ 31 ] ; pm_math_Quaternion_xform_ra ( xx + 75 , xx
+ 299 , xx + 302 ) ; xx [ 37 ] = xx [ 89 ] * xx [ 7 ] ; xx [ 140 ] = xx [ 94
] * xx [ 7 ] ; xx [ 194 ] = xx [ 291 ] + xx [ 191 ] ; xx [ 299 ] = - xx [ 37
] ; xx [ 300 ] = - xx [ 140 ] ; xx [ 301 ] = - xx [ 194 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 299 , xx + 305 ) ; xx [ 299 ] = xx
[ 20 ] * ( xx [ 305 ] - xx [ 37 ] * xx [ 2 ] ) - xx [ 94 ] + xx [ 20 ] * ( xx
[ 5 ] * xx [ 293 ] - xx [ 104 ] ) ; xx [ 300 ] = xx [ 89 ] + xx [ 20 ] * ( xx
[ 306 ] - xx [ 140 ] * xx [ 2 ] ) - ( xx [ 102 ] + xx [ 298 ] ) * xx [ 20 ] +
xx [ 79 ] ; xx [ 301 ] = xx [ 20 ] * ( xx [ 307 ] - xx [ 194 ] * xx [ 2 ] ) -
( xx [ 297 ] + xx [ 5 ] * xx [ 101 ] ) * xx [ 20 ] ;
pm_math_Quaternion_xform_ra ( xx + 67 , xx + 299 , xx + 291 ) ; xx [ 37 ] =
xx [ 302 ] + xx [ 291 ] ; xx [ 89 ] = xx [ 184 ] + xx [ 181 ] ; xx [ 179 ] =
xx [ 289 ] - xx [ 165 ] ; xx [ 180 ] = xx [ 107 ] - ( xx [ 190 ] - xx [ 79 ]
* xx [ 187 ] ) ; xx [ 181 ] = xx [ 37 ] - ( xx [ 89 ] + xx [ 79 ] * xx [ 186
] ) ; solveSymmetricPosDef ( xx + 274 , xx + 179 , 3 , 1 , xx + 182 , xx +
297 ) ; xx [ 94 ] = xx [ 226 ] - xx [ 214 ] - xx [ 216 ] - xx [ 262 ] ; xx [
101 ] = xx [ 227 ] - xx [ 215 ] - xx [ 219 ] - xx [ 263 ] ; xx [ 102 ] = xx [
230 ] - xx [ 218 ] - xx [ 220 ] - xx [ 266 ] ; xx [ 104 ] = xx [ 102 ] - xx [
79 ] * xx [ 247 ] ; xx [ 179 ] = xx [ 165 ] + xx [ 166 ] * xx [ 182 ] + xx [
224 ] * xx [ 183 ] + xx [ 237 ] * xx [ 184 ] ; xx [ 180 ] = xx [ 190 ] + xx [
182 ] * xx [ 94 ] + xx [ 241 ] * xx [ 183 ] + xx [ 238 ] * xx [ 184 ] ; xx [
181 ] = xx [ 89 ] + xx [ 182 ] * xx [ 101 ] + xx [ 104 ] * xx [ 183 ] + xx [
221 ] * xx [ 184 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 179 , xx +
214 ) ; xx [ 89 ] = xx [ 234 ] - xx [ 243 ] ; xx [ 140 ] = xx [ 235 ] - xx [
246 ] ; xx [ 165 ] = xx [ 140 ] - xx [ 79 ] * xx [ 258 ] ; xx [ 179 ] = xx [
236 ] - xx [ 249 ] ; xx [ 180 ] = xx [ 179 ] + xx [ 79 ] * xx [ 255 ] ; xx [
181 ] = xx [ 273 ] - xx [ 79 ] * xx [ 259 ] ; xx [ 218 ] = xx [ 185 ] + xx [
182 ] * xx [ 89 ] + xx [ 165 ] * xx [ 183 ] + xx [ 180 ] * xx [ 184 ] ; xx [
219 ] = xx [ 186 ] + xx [ 182 ] * xx [ 245 ] + xx [ 181 ] * xx [ 183 ] + xx [
250 ] * xx [ 184 ] ; xx [ 220 ] = xx [ 187 ] + xx [ 182 ] * xx [ 223 ] + xx [
260 ] * xx [ 183 ] + xx [ 242 ] * xx [ 184 ] ; pm_math_Quaternion_xform_ra (
xx + 8 , xx + 218 , xx + 185 ) ; pm_math_Vector3_cross_ra ( xx + 109 , xx +
185 , xx + 218 ) ; xx [ 185 ] = 9.854362081682671e-3 ; xx [ 187 ] = xx [ 2 ]
* xx [ 2 ] ; xx [ 190 ] = ( xx [ 187 ] + xx [ 3 ] * xx [ 3 ] ) * xx [ 20 ] -
xx [ 54 ] ; xx [ 191 ] = xx [ 3 ] * xx [ 5 ] ; xx [ 194 ] = xx [ 7 ] * xx [ 2
] ; xx [ 195 ] = ( xx [ 191 ] + xx [ 194 ] ) * xx [ 20 ] ; xx [ 198 ] = xx [
5 ] * xx [ 2 ] ; xx [ 215 ] = xx [ 3 ] * xx [ 7 ] ; xx [ 219 ] = xx [ 20 ] *
( xx [ 198 ] - xx [ 215 ] ) ; xx [ 225 ] = xx [ 20 ] * ( xx [ 191 ] - xx [
194 ] ) ; xx [ 191 ] = ( xx [ 187 ] + xx [ 5 ] * xx [ 5 ] ) * xx [ 20 ] - xx
[ 54 ] ; xx [ 194 ] = xx [ 5 ] * xx [ 7 ] ; xx [ 226 ] = xx [ 3 ] * xx [ 2 ]
; xx [ 227 ] = ( xx [ 194 ] + xx [ 226 ] ) * xx [ 20 ] ; xx [ 228 ] = ( xx [
215 ] + xx [ 198 ] ) * xx [ 20 ] ; xx [ 198 ] = xx [ 20 ] * ( xx [ 226 ] - xx
[ 194 ] ) ; xx [ 194 ] = ( xx [ 187 ] + xx [ 7 ] * xx [ 7 ] ) * xx [ 20 ] -
xx [ 54 ] ; xx [ 261 ] = xx [ 190 ] ; xx [ 262 ] = xx [ 195 ] ; xx [ 263 ] =
xx [ 219 ] ; xx [ 264 ] = xx [ 225 ] ; xx [ 265 ] = xx [ 191 ] ; xx [ 266 ] =
- xx [ 227 ] ; xx [ 267 ] = - xx [ 228 ] ; xx [ 268 ] = xx [ 198 ] ; xx [ 269
] = xx [ 194 ] ; xx [ 305 ] = xx [ 166 ] ; xx [ 306 ] = xx [ 224 ] ; xx [ 307
] = xx [ 237 ] ; xx [ 308 ] = xx [ 94 ] ; xx [ 309 ] = xx [ 241 ] ; xx [ 310
] = xx [ 238 ] ; xx [ 311 ] = xx [ 101 ] ; xx [ 312 ] = xx [ 104 ] ; xx [ 313
] = xx [ 221 ] ; xx [ 314 ] = xx [ 89 ] ; xx [ 315 ] = xx [ 165 ] ; xx [ 316
] = xx [ 180 ] ; xx [ 317 ] = xx [ 245 ] ; xx [ 318 ] = xx [ 181 ] ; xx [ 319
] = xx [ 250 ] ; xx [ 320 ] = xx [ 223 ] ; xx [ 321 ] = xx [ 260 ] ; xx [ 322
] = xx [ 242 ] ; solveSymmetricPosDef ( xx + 274 , xx + 305 , 3 , 6 , xx +
323 , xx + 229 ) ; xx [ 187 ] = xx [ 323 ] * xx [ 94 ] + xx [ 241 ] * xx [
324 ] + xx [ 238 ] * xx [ 325 ] ; xx [ 215 ] = xx [ 323 ] * xx [ 101 ] + xx [
104 ] * xx [ 324 ] + xx [ 221 ] * xx [ 325 ] ; xx [ 226 ] = xx [ 326 ] * xx [
101 ] + xx [ 104 ] * xx [ 327 ] + xx [ 221 ] * xx [ 328 ] ; xx [ 305 ] = xx [
166 ] - ( xx [ 166 ] * xx [ 323 ] + xx [ 224 ] * xx [ 324 ] + xx [ 237 ] * xx
[ 325 ] ) ; xx [ 306 ] = xx [ 94 ] - xx [ 187 ] ; xx [ 307 ] = xx [ 101 ] -
xx [ 215 ] ; xx [ 308 ] = xx [ 222 ] - xx [ 187 ] ; xx [ 309 ] = xx [ 244 ] -
( xx [ 326 ] * xx [ 94 ] + xx [ 241 ] * xx [ 327 ] + xx [ 238 ] * xx [ 328 ]
) ; xx [ 310 ] = xx [ 102 ] - xx [ 226 ] ; xx [ 311 ] = xx [ 240 ] - xx [ 215
] ; xx [ 312 ] = xx [ 272 ] - xx [ 226 ] ; xx [ 313 ] = xx [ 213 ] - ( xx [
329 ] * xx [ 101 ] + xx [ 104 ] * xx [ 330 ] + xx [ 221 ] * xx [ 331 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 305 , xx + 261 , xx + 314 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 261 , xx + 314 , xx + 305 ) ; xx [ 314 ]
= xx [ 89 ] - ( xx [ 166 ] * xx [ 332 ] + xx [ 224 ] * xx [ 333 ] + xx [ 237
] * xx [ 334 ] ) ; xx [ 315 ] = xx [ 140 ] - ( xx [ 332 ] * xx [ 94 ] + xx [
241 ] * xx [ 333 ] + xx [ 238 ] * xx [ 334 ] ) ; xx [ 316 ] = xx [ 179 ] - (
xx [ 332 ] * xx [ 101 ] + xx [ 104 ] * xx [ 333 ] + xx [ 221 ] * xx [ 334 ] )
; xx [ 317 ] = xx [ 245 ] - ( xx [ 166 ] * xx [ 335 ] + xx [ 224 ] * xx [ 336
] + xx [ 237 ] * xx [ 337 ] ) ; xx [ 318 ] = xx [ 273 ] - ( xx [ 335 ] * xx [
94 ] + xx [ 241 ] * xx [ 336 ] + xx [ 238 ] * xx [ 337 ] ) ; xx [ 319 ] = xx
[ 217 ] - ( xx [ 335 ] * xx [ 101 ] + xx [ 104 ] * xx [ 336 ] + xx [ 221 ] *
xx [ 337 ] ) ; xx [ 320 ] = xx [ 223 ] - ( xx [ 166 ] * xx [ 338 ] + xx [ 224
] * xx [ 339 ] + xx [ 237 ] * xx [ 340 ] ) ; xx [ 321 ] = xx [ 270 ] - ( xx [
338 ] * xx [ 94 ] + xx [ 241 ] * xx [ 339 ] + xx [ 238 ] * xx [ 340 ] ) ; xx
[ 322 ] = xx [ 247 ] - ( xx [ 338 ] * xx [ 101 ] + xx [ 104 ] * xx [ 339 ] +
xx [ 221 ] * xx [ 340 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 314
, xx + 261 , xx + 341 ) ; pm_math_Matrix3x3_compose_ra ( xx + 261 , xx + 341
, xx + 314 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 314 , xx + 109 , xx +
341 ) ; xx [ 187 ] = xx [ 332 ] * xx [ 245 ] + xx [ 181 ] * xx [ 333 ] + xx [
250 ] * xx [ 334 ] ; xx [ 215 ] = xx [ 332 ] * xx [ 223 ] + xx [ 260 ] * xx [
333 ] + xx [ 242 ] * xx [ 334 ] ; xx [ 226 ] = xx [ 335 ] * xx [ 223 ] + xx [
260 ] * xx [ 336 ] + xx [ 242 ] * xx [ 337 ] ; xx [ 350 ] = xx [ 252 ] - ( xx
[ 332 ] * xx [ 89 ] + xx [ 165 ] * xx [ 333 ] + xx [ 180 ] * xx [ 334 ] ) +
xx [ 248 ] ; xx [ 351 ] = xx [ 253 ] - xx [ 187 ] ; xx [ 352 ] = xx [ 254 ] -
xx [ 215 ] ; xx [ 353 ] = xx [ 255 ] - xx [ 187 ] ; xx [ 354 ] = xx [ 239 ] -
( xx [ 335 ] * xx [ 245 ] + xx [ 181 ] * xx [ 336 ] + xx [ 250 ] * xx [ 337 ]
) ; xx [ 355 ] = xx [ 257 ] - xx [ 226 ] ; xx [ 356 ] = xx [ 258 ] - xx [ 215
] ; xx [ 357 ] = xx [ 259 ] - xx [ 226 ] ; xx [ 358 ] = xx [ 271 ] - ( xx [
338 ] * xx [ 223 ] + xx [ 260 ] * xx [ 339 ] + xx [ 242 ] * xx [ 340 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 350 , xx + 261 , xx + 359 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 261 , xx + 359 , xx + 350 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 350 , xx + 109 , xx + 359 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 359 , xx + 109 , xx + 368 ) ; xx [ 187 ]
= xx [ 319 ] - xx [ 366 ] ; xx [ 215 ] = 0.1086415963534388 ; xx [ 226 ] = xx
[ 317 ] - xx [ 360 ] ; xx [ 229 ] = 194.4628 ; xx [ 230 ] = xx [ 12 ] * xx [
187 ] - xx [ 4 ] * xx [ 226 ] + ( xx [ 229 ] + xx [ 354 ] ) * xx [ 134 ] ; xx
[ 231 ] = ( ( xx [ 185 ] + xx [ 313 ] - xx [ 349 ] - xx [ 349 ] - xx [ 376 ]
) * xx [ 12 ] - xx [ 4 ] * ( xx [ 307 ] - xx [ 343 ] - xx [ 347 ] - xx [ 370
] ) + xx [ 134 ] * xx [ 187 ] ) * xx [ 12 ] - ( xx [ 12 ] * ( xx [ 311 ] - xx
[ 347 ] - xx [ 343 ] - xx [ 374 ] ) - ( xx [ 215 ] + xx [ 305 ] - xx [ 341 ]
- xx [ 341 ] - xx [ 368 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 226 ] ) * xx [ 4 ]
+ xx [ 230 ] * xx [ 134 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 231 , 1 ,
xx + 187 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 1/Revolute Joint 1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 187 ] = ( xx [ 157 ] - ( ( xx [ 216 ] + xx [ 220 ] ) *
xx [ 12 ] - ( xx [ 214 ] + xx [ 218 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 186 ]
) ) / xx [ 231 ] ; xx [ 232 ] = xx [ 323 ] ; xx [ 233 ] = xx [ 326 ] ; xx [
234 ] = xx [ 329 ] ; xx [ 186 ] = xx [ 12 ] * xx [ 187 ] ; xx [ 214 ] = xx [
5 ] * xx [ 186 ] ; xx [ 216 ] = xx [ 4 ] * xx [ 187 ] ; xx [ 218 ] = xx [ 3 ]
* xx [ 186 ] - xx [ 216 ] * xx [ 7 ] ; xx [ 220 ] = xx [ 5 ] * xx [ 216 ] ;
xx [ 297 ] = - xx [ 214 ] ; xx [ 298 ] = xx [ 218 ] ; xx [ 299 ] = - xx [ 220
] ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 297 , xx + 305 ) ; xx [ 226 ] =
( xx [ 214 ] * xx [ 2 ] + xx [ 305 ] ) * xx [ 20 ] - xx [ 216 ] ; xx [ 214 ]
= xx [ 20 ] * ( xx [ 306 ] - xx [ 218 ] * xx [ 2 ] ) ; xx [ 218 ] = xx [ 186
] + xx [ 20 ] * ( xx [ 307 ] + xx [ 220 ] * xx [ 2 ] ) ; xx [ 297 ] = xx [
226 ] ; xx [ 298 ] = xx [ 214 ] ; xx [ 299 ] = xx [ 218 ] ; xx [ 305 ] = xx [
332 ] ; xx [ 306 ] = xx [ 335 ] ; xx [ 307 ] = xx [ 338 ] ; xx [ 308 ] = - (
xx [ 105 ] * xx [ 186 ] ) ; xx [ 309 ] = xx [ 134 ] * xx [ 187 ] + xx [ 103 ]
* xx [ 186 ] + xx [ 108 ] * xx [ 216 ] ; xx [ 310 ] = - ( xx [ 105 ] * xx [
216 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 308 , xx + 311 )
; xx [ 186 ] = xx [ 182 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 297 )
+ pm_math_Vector3_dot_ra ( xx + 305 , xx + 311 ) ) ; xx [ 308 ] = xx [ 324 ]
; xx [ 309 ] = xx [ 327 ] ; xx [ 310 ] = xx [ 330 ] ; xx [ 317 ] = xx [ 333 ]
; xx [ 318 ] = xx [ 336 ] ; xx [ 319 ] = xx [ 339 ] ; xx [ 182 ] = xx [ 183 ]
- ( pm_math_Vector3_dot_ra ( xx + 308 , xx + 297 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 311 ) ) ; xx [ 341 ] = xx [ 325 ] ; xx [ 342 ] = xx [ 328 ] ;
xx [ 343 ] = xx [ 331 ] ; xx [ 323 ] = xx [ 334 ] ; xx [ 324 ] = xx [ 337 ] ;
xx [ 325 ] = xx [ 340 ] ; xx [ 183 ] = xx [ 184 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 297 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 311 ) ) ;
xx [ 184 ] = 0.6827474916655853 ; xx [ 297 ] = xx [ 226 ] + xx [ 186 ] ; xx [
298 ] = xx [ 214 ] + xx [ 182 ] ; xx [ 299 ] = xx [ 218 ] + xx [ 183 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 297 , xx + 326 ) ; xx [
214 ] = 0.2394090154551814 ; xx [ 216 ] = 7.883468795952014 ;
pm_math_Vector3_cross_ra ( xx + 297 , xx + 95 , xx + 329 ) ; xx [ 297 ] = xx
[ 311 ] + xx [ 329 ] ; xx [ 298 ] = xx [ 312 ] + xx [ 79 ] * xx [ 183 ] + xx
[ 330 ] ; xx [ 299 ] = xx [ 313 ] - xx [ 79 ] * xx [ 182 ] + xx [ 331 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 297 , xx + 311 ) ; xx [
218 ] = 0.5606348958752783 ; xx [ 220 ] = 0.4342246641590292 ; xx [ 226 ] =
8.052046714550871 ; xx [ 235 ] = 0.2776218776273524 ; xx [ 236 ] =
4.613989793284428 ; xx [ 243 ] = 8.551439588783646 ; xx [ 246 ] = xx [ 55 ] *
state [ 34 ] ; xx [ 249 ] = cos ( xx [ 246 ] ) ; xx [ 297 ] = xx [ 0 ] * xx [
249 ] ; xx [ 298 ] = sin ( xx [ 246 ] ) ; xx [ 246 ] = xx [ 4 ] * xx [ 298 ]
; xx [ 299 ] = xx [ 12 ] * xx [ 298 ] ; xx [ 298 ] = xx [ 0 ] * xx [ 246 ] +
xx [ 1 ] * xx [ 299 ] ; xx [ 300 ] = - xx [ 298 ] ; xx [ 301 ] = xx [ 1 ] *
xx [ 249 ] ; xx [ 249 ] = - xx [ 301 ] ; xx [ 315 ] = xx [ 1 ] * xx [ 246 ] -
xx [ 0 ] * xx [ 299 ] ; xx [ 329 ] = - xx [ 297 ] ; xx [ 330 ] = xx [ 300 ] ;
xx [ 331 ] = xx [ 249 ] ; xx [ 332 ] = xx [ 315 ] ; xx [ 246 ] = xx [ 1 ] *
state [ 36 ] - xx [ 0 ] * state [ 38 ] ; xx [ 299 ] = xx [ 1 ] * state [ 37 ]
+ xx [ 0 ] * state [ 39 ] ; xx [ 321 ] = xx [ 1 ] * state [ 38 ] + xx [ 0 ] *
state [ 36 ] ; xx [ 333 ] = xx [ 1 ] * state [ 39 ] - xx [ 0 ] * state [ 37 ]
; xx [ 334 ] = xx [ 246 ] ; xx [ 335 ] = xx [ 299 ] ; xx [ 336 ] = xx [ 321 ]
; xx [ 337 ] = xx [ 333 ] ; pm_math_Quaternion_compose_ra ( xx + 329 , xx +
334 , xx + 344 ) ; xx [ 338 ] = 0.28 ; xx [ 348 ] = xx [ 299 ] ; xx [ 349 ] =
xx [ 321 ] ; xx [ 350 ] = xx [ 333 ] ; xx [ 339 ] = xx [ 4 ] * xx [ 333 ] -
xx [ 299 ] * xx [ 12 ] ; xx [ 340 ] = xx [ 321 ] * xx [ 4 ] ; xx [ 362 ] = xx
[ 321 ] * xx [ 12 ] ; xx [ 363 ] = xx [ 339 ] ; xx [ 364 ] = - xx [ 340 ] ;
pm_math_Vector3_cross_ra ( xx + 348 , xx + 362 , xx + 368 ) ; xx [ 352 ] = xx
[ 338 ] * ( xx [ 369 ] - xx [ 339 ] * xx [ 246 ] ) ; xx [ 339 ] = ( xx [ 12 ]
+ xx [ 20 ] * ( xx [ 370 ] + xx [ 340 ] * xx [ 246 ] ) ) * xx [ 79 ] ; xx [
340 ] = xx [ 346 ] * xx [ 352 ] + xx [ 347 ] * xx [ 339 ] ; xx [ 354 ] = xx [
345 ] * xx [ 352 ] ; xx [ 356 ] = xx [ 345 ] * xx [ 339 ] ; xx [ 362 ] = - xx
[ 340 ] ; xx [ 363 ] = xx [ 354 ] ; xx [ 364 ] = xx [ 356 ] ;
pm_math_Vector3_cross_ra ( xx + 345 , xx + 362 , xx + 368 ) ; xx [ 358 ] = xx
[ 79 ] * xx [ 333 ] ; xx [ 360 ] = xx [ 358 ] * xx [ 246 ] ; xx [ 362 ] = xx
[ 321 ] * xx [ 79 ] ; xx [ 363 ] = ( xx [ 360 ] + xx [ 299 ] * xx [ 362 ] ) *
xx [ 20 ] ; xx [ 364 ] = xx [ 321 ] * xx [ 362 ] ; xx [ 366 ] = xx [ 358 ] *
xx [ 333 ] ; xx [ 371 ] = xx [ 81 ] + xx [ 79 ] - ( xx [ 364 ] + xx [ 366 ] )
* xx [ 20 ] ; xx [ 372 ] = xx [ 362 ] * xx [ 246 ] ; xx [ 373 ] = xx [ 20 ] *
( xx [ 299 ] * xx [ 358 ] - xx [ 372 ] ) - xx [ 106 ] ; xx [ 374 ] = - ( xx [
12 ] * xx [ 363 ] ) ; xx [ 375 ] = xx [ 371 ] * xx [ 12 ] - xx [ 373 ] * xx [
4 ] ; xx [ 376 ] = xx [ 4 ] * xx [ 363 ] ; pm_math_Quaternion_xform_ra ( xx +
329 , xx + 374 , xx + 377 ) ; xx [ 374 ] = xx [ 298 ] * xx [ 134 ] ; xx [ 375
] = xx [ 134 ] * xx [ 315 ] ; xx [ 376 ] = xx [ 20 ] * ( xx [ 368 ] - xx [
340 ] * xx [ 344 ] ) + xx [ 377 ] + xx [ 20 ] * ( xx [ 374 ] * xx [ 301 ] +
xx [ 375 ] * xx [ 297 ] ) ; xx [ 340 ] = 0.07580196787243279 ; xx [ 380 ] =
1.913983629327394e-3 ; xx [ 381 ] = xx [ 84 ] ; xx [ 382 ] = xx [ 84 ] ; xx [
383 ] = xx [ 84 ] ; xx [ 384 ] = xx [ 340 ] ; xx [ 385 ] = xx [ 84 ] ; xx [
386 ] = xx [ 84 ] ; xx [ 387 ] = xx [ 84 ] ; xx [ 388 ] = xx [ 340 ] ; xx [
340 ] = xx [ 299 ] * xx [ 79 ] ; xx [ 389 ] = xx [ 340 ] * xx [ 246 ] ; xx [
390 ] = xx [ 299 ] * xx [ 340 ] ; xx [ 391 ] = - ( ( xx [ 372 ] + xx [ 340 ]
* xx [ 333 ] ) * xx [ 20 ] ) ; xx [ 392 ] = xx [ 20 ] * ( xx [ 389 ] - xx [
362 ] * xx [ 333 ] ) ; xx [ 393 ] = ( xx [ 390 ] + xx [ 364 ] ) * xx [ 20 ] -
xx [ 79 ] ; pm_math_Quaternion_xform_ra ( xx + 329 , xx + 391 , xx + 394 ) ;
xx [ 362 ] = xx [ 79 ] * xx [ 346 ] ; xx [ 364 ] = xx [ 79 ] * xx [ 345 ] ;
xx [ 372 ] = xx [ 394 ] - ( xx [ 344 ] * xx [ 362 ] + xx [ 347 ] * xx [ 364 ]
) * xx [ 20 ] ; xx [ 391 ] = xx [ 79 ] * xx [ 347 ] ; xx [ 397 ] = xx [ 20 ]
* ( xx [ 321 ] * xx [ 340 ] - xx [ 360 ] ) ; xx [ 398 ] = xx [ 79 ] - ( xx [
366 ] + xx [ 390 ] ) * xx [ 20 ] ; xx [ 399 ] = ( xx [ 389 ] + xx [ 321 ] *
xx [ 358 ] ) * xx [ 20 ] ; pm_math_Quaternion_xform_ra ( xx + 329 , xx + 397
, xx + 400 ) ; xx [ 340 ] = xx [ 20 ] * ( xx [ 346 ] * xx [ 364 ] - xx [ 344
] * xx [ 391 ] ) + xx [ 400 ] ; xx [ 397 ] = xx [ 84 ] ; xx [ 398 ] = - xx [
372 ] ; xx [ 399 ] = - xx [ 340 ] ; solveSymmetricPosDef ( xx + 380 , xx +
397 , 3 , 1 , xx + 403 , xx + 406 ) ; xx [ 397 ] = xx [ 27 ] * xx [ 403 ] ;
xx [ 398 ] = xx [ 28 ] * xx [ 404 ] ; xx [ 399 ] = xx [ 28 ] * xx [ 405 ] ;
pm_math_Quaternion_xform_ra ( xx + 334 , xx + 397 , xx + 406 ) ; xx [ 397 ] =
xx [ 371 ] ; xx [ 398 ] = xx [ 363 ] ; xx [ 399 ] = xx [ 373 ] ; xx [ 358 ] =
0.030772 ; xx [ 360 ] = xx [ 358 ] * xx [ 404 ] ; xx [ 366 ] = xx [ 358 ] *
xx [ 405 ] ; xx [ 389 ] = xx [ 321 ] * xx [ 360 ] + xx [ 366 ] * xx [ 333 ] ;
xx [ 390 ] = xx [ 299 ] * xx [ 360 ] ; xx [ 392 ] = xx [ 299 ] * xx [ 366 ] ;
xx [ 409 ] = - xx [ 389 ] ; xx [ 410 ] = xx [ 390 ] ; xx [ 411 ] = xx [ 392 ]
; pm_math_Vector3_cross_ra ( xx + 348 , xx + 409 , xx + 412 ) ; xx [ 393 ] =
xx [ 366 ] + ( xx [ 390 ] * xx [ 246 ] + xx [ 413 ] ) * xx [ 20 ] ; xx [ 409
] = xx [ 20 ] * ( xx [ 412 ] - xx [ 389 ] * xx [ 246 ] ) ; xx [ 410 ] = xx [
393 ] ; xx [ 411 ] = xx [ 20 ] * ( xx [ 414 ] + xx [ 392 ] * xx [ 246 ] ) -
xx [ 360 ] ; pm_math_Vector3_cross_ra ( xx + 397 , xx + 409 , xx + 412 ) ; xx
[ 360 ] = 1.078049984061205e-3 ; xx [ 366 ] = xx [ 299 ] * xx [ 321 ] ; xx [
389 ] = xx [ 333 ] * xx [ 246 ] ; xx [ 390 ] = xx [ 20 ] * ( xx [ 366 ] - xx
[ 389 ] ) ; xx [ 392 ] = xx [ 360 ] * xx [ 390 ] ; xx [ 403 ] = xx [ 299 ] *
xx [ 333 ] ; xx [ 407 ] = xx [ 321 ] * xx [ 246 ] ; xx [ 409 ] = ( xx [ 403 ]
+ xx [ 407 ] ) * xx [ 20 ] ; xx [ 410 ] = xx [ 360 ] * xx [ 409 ] ; xx [ 411
] = 7.700357029008605e-3 ; xx [ 413 ] = xx [ 411 ] * xx [ 390 ] ; xx [ 415 ]
= xx [ 411 ] * xx [ 409 ] ; xx [ 416 ] = xx [ 409 ] * xx [ 413 ] - xx [ 415 ]
* xx [ 390 ] ; xx [ 417 ] = xx [ 246 ] * xx [ 246 ] ; xx [ 418 ] = ( xx [ 417
] + xx [ 321 ] * xx [ 321 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 419 ] = xx [ 321
] * xx [ 333 ] ; xx [ 420 ] = xx [ 299 ] * xx [ 246 ] ; xx [ 421 ] = xx [ 20
] * ( xx [ 419 ] - xx [ 420 ] ) ; xx [ 422 ] = ( xx [ 419 ] + xx [ 420 ] ) *
xx [ 20 ] ; xx [ 419 ] = ( xx [ 417 ] + xx [ 333 ] * xx [ 333 ] ) * xx [ 20 ]
- xx [ 54 ] ; xx [ 420 ] = xx [ 422 ] * xx [ 415 ] - xx [ 413 ] * xx [ 419 ]
; xx [ 423 ] = xx [ 411 ] * xx [ 421 ] ; xx [ 424 ] = xx [ 411 ] * xx [ 418 ]
; xx [ 425 ] = xx [ 423 ] * xx [ 390 ] - xx [ 409 ] * xx [ 424 ] ; xx [ 426 ]
= xx [ 422 ] * xx [ 423 ] - xx [ 424 ] * xx [ 419 ] ; xx [ 427 ] = xx [ 411 ]
* xx [ 419 ] ; xx [ 428 ] = xx [ 411 ] * xx [ 422 ] ; xx [ 429 ] = xx [ 427 ]
* xx [ 390 ] - xx [ 409 ] * xx [ 428 ] ; xx [ 430 ] = xx [ 428 ] * xx [ 419 ]
- xx [ 422 ] * xx [ 427 ] ; xx [ 431 ] = - xx [ 416 ] ; xx [ 432 ] = xx [ 415
] * xx [ 418 ] - xx [ 413 ] * xx [ 421 ] ; xx [ 433 ] = xx [ 420 ] ; xx [ 434
] = xx [ 425 ] ; xx [ 435 ] = xx [ 423 ] * xx [ 418 ] - xx [ 424 ] * xx [ 421
] ; xx [ 436 ] = xx [ 426 ] ; xx [ 437 ] = xx [ 429 ] ; xx [ 438 ] = xx [ 427
] * xx [ 418 ] - xx [ 428 ] * xx [ 421 ] ; xx [ 439 ] = - xx [ 430 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 431 , xx + 397 , xx + 440 ) ; xx [ 413
] = ( xx [ 417 ] + xx [ 299 ] * xx [ 299 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [
415 ] = xx [ 366 ] + xx [ 389 ] ; xx [ 366 ] = xx [ 415 ] * xx [ 20 ] ; xx [
389 ] = xx [ 403 ] - xx [ 407 ] ; xx [ 403 ] = xx [ 20 ] * xx [ 389 ] ; xx [
431 ] = xx [ 413 ] ; xx [ 432 ] = xx [ 366 ] ; xx [ 433 ] = xx [ 403 ] ; xx [
434 ] = xx [ 390 ] ; xx [ 435 ] = xx [ 418 ] ; xx [ 436 ] = xx [ 422 ] ; xx [
437 ] = xx [ 409 ] ; xx [ 438 ] = xx [ 421 ] ; xx [ 439 ] = xx [ 419 ] ; xx [
407 ] = 0.05500255020720432 ; xx [ 417 ] = 0.4396 ; xx [ 449 ] = xx [ 248 ] *
xx [ 413 ] ; xx [ 450 ] = xx [ 407 ] * xx [ 390 ] ; xx [ 451 ] = xx [ 407 ] *
xx [ 409 ] ; xx [ 452 ] = xx [ 415 ] * xx [ 417 ] ; xx [ 453 ] = xx [ 407 ] *
xx [ 418 ] ; xx [ 454 ] = xx [ 407 ] * xx [ 421 ] ; xx [ 455 ] = xx [ 417 ] *
xx [ 389 ] ; xx [ 456 ] = xx [ 407 ] * xx [ 422 ] ; xx [ 457 ] = xx [ 407 ] *
xx [ 419 ] ; pm_math_Matrix3x3_compose_ra ( xx + 431 , xx + 449 , xx + 458 )
; pm_math_Matrix3x3_postCross_ra ( xx + 458 , xx + 397 , xx + 449 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 449 , xx + 397 , xx + 466 ) ; xx [ 389 ]
= xx [ 360 ] * xx [ 422 ] ; xx [ 415 ] = xx [ 360 ] * xx [ 419 ] ; xx [ 423 ]
= xx [ 425 ] - xx [ 450 ] ; xx [ 424 ] = xx [ 426 ] - xx [ 456 ] ; xx [ 425 ]
= xx [ 4 ] * xx [ 423 ] + xx [ 12 ] * xx [ 424 ] + ( xx [ 229 ] + xx [ 462 ]
) * xx [ 134 ] ; xx [ 426 ] = ( ( xx [ 215 ] + xx [ 392 ] * xx [ 390 ] + xx [
409 ] * xx [ 410 ] - xx [ 440 ] - xx [ 440 ] - xx [ 466 ] ) * xx [ 4 ] - ( xx
[ 446 ] - ( xx [ 389 ] * xx [ 390 ] + xx [ 409 ] * xx [ 415 ] ) + xx [ 442 ]
+ xx [ 472 ] ) * xx [ 12 ] + xx [ 134 ] * xx [ 423 ] ) * xx [ 4 ] + ( ( xx [
185 ] + xx [ 422 ] * xx [ 389 ] + xx [ 415 ] * xx [ 419 ] - xx [ 448 ] - xx [
448 ] - xx [ 474 ] ) * xx [ 12 ] - ( xx [ 442 ] - ( xx [ 422 ] * xx [ 392 ] +
xx [ 410 ] * xx [ 419 ] ) + xx [ 446 ] + xx [ 468 ] ) * xx [ 4 ] + xx [ 134 ]
* xx [ 424 ] ) * xx [ 12 ] + xx [ 425 ] * xx [ 134 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 426 , 1 , xx + 389 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 4/Revolute Joint 4' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 389 ] = ( ( xx [ 406 ] + xx [ 412 ] ) * xx [ 4 ] + (
xx [ 408 ] + xx [ 414 ] ) * xx [ 12 ] + xx [ 393 ] * xx [ 134 ] + xx [ 376 ]
) / xx [ 426 ] ; xx [ 392 ] = xx [ 4 ] * xx [ 389 ] ; xx [ 393 ] = xx [ 12 ]
* xx [ 389 ] ; xx [ 406 ] = xx [ 392 ] * xx [ 333 ] - xx [ 299 ] * xx [ 393 ]
; xx [ 408 ] = xx [ 321 ] * xx [ 392 ] ; xx [ 440 ] = - ( xx [ 321 ] * xx [
393 ] ) ; xx [ 441 ] = - xx [ 406 ] ; xx [ 442 ] = xx [ 408 ] ;
pm_math_Vector3_cross_ra ( xx + 348 , xx + 440 , xx + 443 ) ; xx [ 410 ] =
0.5004781638508128 ; xx [ 412 ] = 5.35543512910424 ; xx [ 440 ] = xx [ 363 ]
* xx [ 393 ] ; xx [ 441 ] = xx [ 373 ] * xx [ 392 ] - xx [ 371 ] * xx [ 393 ]
- xx [ 134 ] * xx [ 389 ] ; xx [ 442 ] = - ( xx [ 363 ] * xx [ 392 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 334 , xx + 440 , xx + 446 ) ; xx [
392 ] = 0.2502390819254064 ; xx [ 414 ] = xx [ 150 ] - ( xx [ 155 ] * xx [ 58
] + xx [ 63 ] * xx [ 138 ] ) * xx [ 20 ] ; xx [ 415 ] = xx [ 153 ] + xx [ 414
] + xx [ 134 ] ; xx [ 423 ] = xx [ 20 ] * ( xx [ 75 ] * xx [ 132 ] - xx [ 78
] * xx [ 131 ] ) + xx [ 136 ] ; xx [ 424 ] = xx [ 20 ] * ( xx [ 78 ] * xx [
159 ] - xx [ 75 ] * xx [ 160 ] ) + xx [ 168 ] ; xx [ 427 ] = ( xx [ 174 ] -
xx [ 141 ] * xx [ 64 ] ) * xx [ 20 ] - xx [ 146 ] + xx [ 171 ] ; xx [ 440 ] =
xx [ 423 ] ; xx [ 441 ] = xx [ 424 ] ; xx [ 442 ] = xx [ 427 ] ;
solveSymmetricPosDef ( xx + 121 , xx + 440 , 3 , 1 , xx + 452 , xx + 466 ) ;
xx [ 440 ] = xx [ 48 ] * xx [ 452 ] + xx [ 80 ] * xx [ 453 ] ; xx [ 441 ] =
xx [ 85 ] * xx [ 453 ] - xx [ 86 ] * xx [ 452 ] ; xx [ 442 ] = xx [ 56 ] * xx
[ 454 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 440 , xx + 466 ) ; xx
[ 440 ] = xx [ 87 ] * xx [ 454 ] ; xx [ 441 ] = - ( xx [ 88 ] * xx [ 454 ] )
; xx [ 442 ] = xx [ 90 ] * xx [ 453 ] - xx [ 163 ] * xx [ 452 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 440 , xx + 469 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 469 , xx + 440 ) ; xx [ 428 ] = xx
[ 466 ] + xx [ 440 ] ; xx [ 443 ] = xx [ 287 ] + xx [ 284 ] ; xx [ 446 ] = xx
[ 295 ] + xx [ 92 ] ; xx [ 450 ] = xx [ 467 ] + xx [ 441 ] ; xx [ 456 ] = xx
[ 303 ] + xx [ 292 ] ; xx [ 440 ] = xx [ 468 ] + xx [ 442 ] ; xx [ 466 ] = xx
[ 443 ] - xx [ 428 ] ; xx [ 467 ] = xx [ 446 ] - ( xx [ 450 ] - xx [ 79 ] *
xx [ 471 ] ) ; xx [ 468 ] = xx [ 456 ] - ( xx [ 440 ] + xx [ 79 ] * xx [ 470
] ) ; solveSymmetricPosDef ( xx + 274 , xx + 466 , 3 , 1 , xx + 472 , xx +
475 ) ; xx [ 466 ] = xx [ 428 ] + xx [ 166 ] * xx [ 472 ] + xx [ 224 ] * xx [
473 ] + xx [ 237 ] * xx [ 474 ] ; xx [ 467 ] = xx [ 450 ] + xx [ 472 ] * xx [
94 ] + xx [ 241 ] * xx [ 473 ] + xx [ 238 ] * xx [ 474 ] ; xx [ 468 ] = xx [
440 ] + xx [ 472 ] * xx [ 101 ] + xx [ 104 ] * xx [ 473 ] + xx [ 221 ] * xx [
474 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 466 , xx + 440 ) ; xx [
466 ] = xx [ 469 ] + xx [ 472 ] * xx [ 89 ] + xx [ 165 ] * xx [ 473 ] + xx [
180 ] * xx [ 474 ] ; xx [ 467 ] = xx [ 470 ] + xx [ 472 ] * xx [ 245 ] + xx [
181 ] * xx [ 473 ] + xx [ 250 ] * xx [ 474 ] ; xx [ 468 ] = xx [ 471 ] + xx [
472 ] * xx [ 223 ] + xx [ 260 ] * xx [ 473 ] + xx [ 242 ] * xx [ 474 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 466 , xx + 469 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 469 , xx + 466 ) ; xx [ 428 ] = (
xx [ 415 ] - ( ( xx [ 442 ] + xx [ 468 ] ) * xx [ 12 ] - ( xx [ 440 ] + xx [
466 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 470 ] ) ) / xx [ 231 ] ; xx [ 440 ] =
xx [ 12 ] * xx [ 428 ] ; xx [ 441 ] = xx [ 5 ] * xx [ 440 ] ; xx [ 442 ] = xx
[ 4 ] * xx [ 428 ] ; xx [ 450 ] = xx [ 3 ] * xx [ 440 ] - xx [ 442 ] * xx [ 7
] ; xx [ 458 ] = xx [ 5 ] * xx [ 442 ] ; xx [ 466 ] = - xx [ 441 ] ; xx [ 467
] = xx [ 450 ] ; xx [ 468 ] = - xx [ 458 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 466 , xx + 469 ) ; xx [ 460 ] = ( xx [ 441 ] * xx [ 2 ] + xx [ 469
] ) * xx [ 20 ] - xx [ 442 ] ; xx [ 441 ] = xx [ 20 ] * ( xx [ 470 ] - xx [
450 ] * xx [ 2 ] ) ; xx [ 450 ] = xx [ 440 ] + xx [ 20 ] * ( xx [ 471 ] + xx
[ 458 ] * xx [ 2 ] ) ; xx [ 466 ] = xx [ 460 ] ; xx [ 467 ] = xx [ 441 ] ; xx
[ 468 ] = xx [ 450 ] ; xx [ 469 ] = - ( xx [ 105 ] * xx [ 440 ] ) ; xx [ 470
] = xx [ 134 ] * xx [ 428 ] + xx [ 103 ] * xx [ 440 ] + xx [ 108 ] * xx [ 442
] ; xx [ 471 ] = - ( xx [ 105 ] * xx [ 442 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 469 , xx + 475 ) ; xx [
440 ] = xx [ 472 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 466 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 475 ) ) ; xx [ 442 ] = xx [ 473 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 466 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 475 ) ) ; xx [ 458 ] = xx [ 474 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 466 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 475 ) ) ;
xx [ 466 ] = xx [ 460 ] + xx [ 440 ] ; xx [ 467 ] = xx [ 441 ] + xx [ 442 ] ;
xx [ 468 ] = xx [ 450 ] + xx [ 458 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 466 , xx + 469 ) ; pm_math_Vector3_cross_ra ( xx + 466 , xx +
95 , xx + 472 ) ; xx [ 466 ] = xx [ 475 ] + xx [ 472 ] ; xx [ 467 ] = xx [
476 ] + xx [ 79 ] * xx [ 458 ] + xx [ 473 ] ; xx [ 468 ] = xx [ 477 ] - xx [
79 ] * xx [ 442 ] + xx [ 474 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 466 , xx + 472 ) ; xx [ 441 ] = xx [ 452 ] - ( xx [ 184 ] * xx [ 469 ]
+ xx [ 214 ] * xx [ 470 ] - xx [ 216 ] * xx [ 474 ] ) ; xx [ 450 ] = xx [ 453
] - ( xx [ 218 ] * xx [ 469 ] + xx [ 220 ] * xx [ 470 ] + xx [ 226 ] * xx [
474 ] ) ; xx [ 452 ] = xx [ 454 ] - ( xx [ 235 ] * xx [ 471 ] + xx [ 236 ] *
xx [ 472 ] - xx [ 243 ] * xx [ 473 ] ) ; xx [ 453 ] = xx [ 344 ] * xx [ 364 ]
; xx [ 454 ] = xx [ 20 ] * ( xx [ 453 ] - xx [ 347 ] * xx [ 362 ] ) + xx [
395 ] ; xx [ 460 ] = xx [ 345 ] * xx [ 364 ] ; xx [ 364 ] = xx [ 401 ] - ( xx
[ 347 ] * xx [ 391 ] + xx [ 460 ] ) * xx [ 20 ] + xx [ 79 ] ; xx [ 466 ] = xx
[ 84 ] ; xx [ 467 ] = - xx [ 454 ] ; xx [ 468 ] = - xx [ 364 ] ;
solveSymmetricPosDef ( xx + 380 , xx + 466 , 3 , 1 , xx + 469 , xx + 472 ) ;
xx [ 466 ] = xx [ 27 ] * xx [ 469 ] ; xx [ 467 ] = xx [ 28 ] * xx [ 470 ] ;
xx [ 468 ] = xx [ 28 ] * xx [ 471 ] ; pm_math_Quaternion_xform_ra ( xx + 334
, xx + 466 , xx + 472 ) ; xx [ 462 ] = xx [ 358 ] * xx [ 470 ] ; xx [ 464 ] =
xx [ 358 ] * xx [ 471 ] ; xx [ 466 ] = xx [ 321 ] * xx [ 462 ] + xx [ 464 ] *
xx [ 333 ] ; xx [ 467 ] = xx [ 299 ] * xx [ 462 ] ; xx [ 468 ] = xx [ 299 ] *
xx [ 464 ] ; xx [ 475 ] = - xx [ 466 ] ; xx [ 476 ] = xx [ 467 ] ; xx [ 477 ]
= xx [ 468 ] ; pm_math_Vector3_cross_ra ( xx + 348 , xx + 475 , xx + 478 ) ;
xx [ 469 ] = xx [ 464 ] + ( xx [ 467 ] * xx [ 246 ] + xx [ 479 ] ) * xx [ 20
] ; xx [ 475 ] = xx [ 20 ] * ( xx [ 478 ] - xx [ 466 ] * xx [ 246 ] ) ; xx [
476 ] = xx [ 469 ] ; xx [ 477 ] = xx [ 20 ] * ( xx [ 480 ] + xx [ 468 ] * xx
[ 246 ] ) - xx [ 462 ] ; pm_math_Vector3_cross_ra ( xx + 397 , xx + 475 , xx
+ 466 ) ; xx [ 462 ] = xx [ 339 ] + ( xx [ 344 ] * xx [ 354 ] + xx [ 369 ] )
* xx [ 20 ] + xx [ 378 ] - ( xx [ 375 ] * xx [ 315 ] + xx [ 298 ] * xx [ 374
] ) * xx [ 20 ] + xx [ 134 ] ; xx [ 339 ] = ( ( xx [ 472 ] + xx [ 466 ] ) *
xx [ 4 ] + ( xx [ 474 ] + xx [ 468 ] ) * xx [ 12 ] + xx [ 469 ] * xx [ 134 ]
+ xx [ 462 ] ) / xx [ 426 ] ; xx [ 354 ] = xx [ 4 ] * xx [ 339 ] ; xx [ 464 ]
= xx [ 12 ] * xx [ 339 ] ; xx [ 466 ] = xx [ 354 ] * xx [ 333 ] - xx [ 299 ]
* xx [ 464 ] ; xx [ 467 ] = xx [ 321 ] * xx [ 354 ] ; xx [ 472 ] = - ( xx [
321 ] * xx [ 464 ] ) ; xx [ 473 ] = - xx [ 466 ] ; xx [ 474 ] = xx [ 467 ] ;
pm_math_Vector3_cross_ra ( xx + 348 , xx + 472 , xx + 475 ) ; xx [ 472 ] = xx
[ 363 ] * xx [ 464 ] ; xx [ 473 ] = xx [ 373 ] * xx [ 354 ] - xx [ 371 ] * xx
[ 464 ] - xx [ 134 ] * xx [ 339 ] ; xx [ 474 ] = - ( xx [ 363 ] * xx [ 354 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 334 , xx + 472 , xx + 478 ) ;
xx [ 354 ] = xx [ 470 ] - ( ( xx [ 466 ] * xx [ 246 ] + xx [ 476 ] ) * xx [
410 ] - xx [ 412 ] * xx [ 480 ] ) ; xx [ 466 ] = xx [ 471 ] - ( xx [ 392 ] *
( ( xx [ 477 ] - xx [ 467 ] * xx [ 246 ] ) * xx [ 20 ] - xx [ 464 ] ) + xx [
412 ] * xx [ 479 ] ) ; xx [ 464 ] = xx [ 157 ] * xx [ 428 ] + xx [ 289 ] * xx
[ 440 ] + xx [ 107 ] * xx [ 442 ] + xx [ 37 ] * xx [ 458 ] + xx [ 133 ] * xx
[ 441 ] + xx [ 162 ] * xx [ 450 ] + xx [ 38 ] * xx [ 452 ] + xx [ 376 ] * xx
[ 339 ] - xx [ 372 ] * xx [ 354 ] - xx [ 340 ] * xx [ 466 ] ; xx [ 149 ] = xx
[ 151 ] + ( xx [ 155 ] * xx [ 66 ] - xx [ 138 ] * xx [ 59 ] ) * xx [ 20 ] ;
xx [ 138 ] = xx [ 154 ] + xx [ 149 ] ; xx [ 150 ] = ( xx [ 76 ] * xx [ 132 ]
+ xx [ 77 ] * xx [ 131 ] ) * xx [ 20 ] - xx [ 130 ] + xx [ 137 ] ; xx [ 130 ]
= xx [ 158 ] - ( xx [ 76 ] * xx [ 160 ] + xx [ 77 ] * xx [ 159 ] ) * xx [ 20
] + xx [ 169 ] ; xx [ 131 ] = ( xx [ 75 ] * xx [ 164 ] + xx [ 175 ] ) * xx [
20 ] + xx [ 172 ] ; xx [ 151 ] = xx [ 150 ] ; xx [ 152 ] = xx [ 130 ] ; xx [
153 ] = xx [ 131 ] ; solveSymmetricPosDef ( xx + 121 , xx + 151 , 3 , 1 , xx
+ 158 , xx + 173 ) ; xx [ 151 ] = xx [ 48 ] * xx [ 158 ] + xx [ 80 ] * xx [
159 ] ; xx [ 152 ] = xx [ 85 ] * xx [ 159 ] - xx [ 86 ] * xx [ 158 ] ; xx [
153 ] = xx [ 56 ] * xx [ 160 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
151 , xx + 173 ) ; xx [ 151 ] = xx [ 87 ] * xx [ 160 ] ; xx [ 152 ] = - ( xx
[ 88 ] * xx [ 160 ] ) ; xx [ 153 ] = xx [ 90 ] * xx [ 159 ] - xx [ 163 ] * xx
[ 158 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 151 , xx + 467 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 467 , xx + 151 ) ; xx [ 132 ] = xx
[ 173 ] + xx [ 151 ] ; xx [ 154 ] = xx [ 288 ] + xx [ 285 ] ; xx [ 155 ] = xx
[ 296 ] + xx [ 93 ] ; xx [ 164 ] = xx [ 174 ] + xx [ 152 ] ; xx [ 286 ] = xx
[ 304 ] + xx [ 293 ] ; xx [ 151 ] = xx [ 175 ] + xx [ 153 ] ; xx [ 173 ] = xx
[ 154 ] - xx [ 132 ] ; xx [ 174 ] = xx [ 155 ] - ( xx [ 164 ] - xx [ 79 ] *
xx [ 469 ] ) ; xx [ 175 ] = xx [ 286 ] - ( xx [ 151 ] + xx [ 79 ] * xx [ 468
] ) ; solveSymmetricPosDef ( xx + 274 , xx + 173 , 3 , 1 , xx + 294 , xx +
302 ) ; xx [ 173 ] = xx [ 132 ] + xx [ 166 ] * xx [ 294 ] + xx [ 224 ] * xx [
295 ] + xx [ 237 ] * xx [ 296 ] ; xx [ 174 ] = xx [ 164 ] + xx [ 294 ] * xx [
94 ] + xx [ 241 ] * xx [ 295 ] + xx [ 238 ] * xx [ 296 ] ; xx [ 175 ] = xx [
151 ] + xx [ 294 ] * xx [ 101 ] + xx [ 104 ] * xx [ 295 ] + xx [ 221 ] * xx [
296 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 173 , xx + 151 ) ; xx [
173 ] = xx [ 467 ] + xx [ 294 ] * xx [ 89 ] + xx [ 165 ] * xx [ 295 ] + xx [
180 ] * xx [ 296 ] ; xx [ 174 ] = xx [ 468 ] + xx [ 294 ] * xx [ 245 ] + xx [
181 ] * xx [ 295 ] + xx [ 250 ] * xx [ 296 ] ; xx [ 175 ] = xx [ 469 ] + xx [
294 ] * xx [ 223 ] + xx [ 260 ] * xx [ 295 ] + xx [ 242 ] * xx [ 296 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 173 , xx + 302 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 302 , xx + 173 ) ; xx [ 132 ] = (
xx [ 138 ] - ( ( xx [ 153 ] + xx [ 175 ] ) * xx [ 12 ] - ( xx [ 151 ] + xx [
173 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 303 ] ) ) / xx [ 231 ] ; xx [ 151 ] =
xx [ 12 ] * xx [ 132 ] ; xx [ 152 ] = xx [ 5 ] * xx [ 151 ] ; xx [ 153 ] = xx
[ 4 ] * xx [ 132 ] ; xx [ 164 ] = xx [ 3 ] * xx [ 151 ] - xx [ 153 ] * xx [ 7
] ; xx [ 173 ] = xx [ 5 ] * xx [ 153 ] ; xx [ 302 ] = - xx [ 152 ] ; xx [ 303
] = xx [ 164 ] ; xx [ 304 ] = - xx [ 173 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 302 , xx + 467 ) ; xx [ 174 ] = ( xx [ 152 ] * xx [ 2 ] + xx [ 467
] ) * xx [ 20 ] - xx [ 153 ] ; xx [ 152 ] = xx [ 20 ] * ( xx [ 468 ] - xx [
164 ] * xx [ 2 ] ) ; xx [ 164 ] = xx [ 151 ] + xx [ 20 ] * ( xx [ 469 ] + xx
[ 173 ] * xx [ 2 ] ) ; xx [ 302 ] = xx [ 174 ] ; xx [ 303 ] = xx [ 152 ] ; xx
[ 304 ] = xx [ 164 ] ; xx [ 467 ] = - ( xx [ 105 ] * xx [ 151 ] ) ; xx [ 468
] = xx [ 134 ] * xx [ 132 ] + xx [ 103 ] * xx [ 151 ] + xx [ 108 ] * xx [ 153
] ; xx [ 469 ] = - ( xx [ 105 ] * xx [ 153 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 467 , xx + 470 ) ; xx [
151 ] = xx [ 294 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 302 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 470 ) ) ; xx [ 153 ] = xx [ 295 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 302 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 470 ) ) ; xx [ 173 ] = xx [ 296 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 302 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 470 ) ) ;
xx [ 294 ] = xx [ 174 ] + xx [ 151 ] ; xx [ 295 ] = xx [ 152 ] + xx [ 153 ] ;
xx [ 296 ] = xx [ 164 ] + xx [ 173 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 294 , xx + 302 ) ; pm_math_Vector3_cross_ra ( xx + 294 , xx +
95 , xx + 467 ) ; xx [ 294 ] = xx [ 470 ] + xx [ 467 ] ; xx [ 295 ] = xx [
471 ] + xx [ 79 ] * xx [ 173 ] + xx [ 468 ] ; xx [ 296 ] = xx [ 472 ] - xx [
79 ] * xx [ 153 ] + xx [ 469 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 294 , xx + 467 ) ; xx [ 152 ] = xx [ 158 ] - ( xx [ 184 ] * xx [ 302 ]
+ xx [ 214 ] * xx [ 303 ] - xx [ 216 ] * xx [ 469 ] ) ; xx [ 158 ] = xx [ 159
] - ( xx [ 218 ] * xx [ 302 ] + xx [ 220 ] * xx [ 303 ] + xx [ 226 ] * xx [
469 ] ) ; xx [ 159 ] = xx [ 160 ] - ( xx [ 235 ] * xx [ 304 ] + xx [ 236 ] *
xx [ 467 ] - xx [ 243 ] * xx [ 468 ] ) ; xx [ 160 ] = xx [ 396 ] + ( xx [ 460
] + xx [ 346 ] * xx [ 362 ] ) * xx [ 20 ] - xx [ 79 ] ; xx [ 164 ] = ( xx [
453 ] + xx [ 346 ] * xx [ 391 ] ) * xx [ 20 ] + xx [ 402 ] ; xx [ 294 ] = xx
[ 84 ] ; xx [ 295 ] = - xx [ 160 ] ; xx [ 296 ] = - xx [ 164 ] ;
solveSymmetricPosDef ( xx + 380 , xx + 294 , 3 , 1 , xx + 302 , xx + 394 ) ;
xx [ 294 ] = xx [ 27 ] * xx [ 302 ] ; xx [ 295 ] = xx [ 28 ] * xx [ 303 ] ;
xx [ 296 ] = xx [ 28 ] * xx [ 304 ] ; pm_math_Quaternion_xform_ra ( xx + 334
, xx + 294 , xx + 394 ) ; xx [ 174 ] = xx [ 358 ] * xx [ 303 ] ; xx [ 175 ] =
xx [ 358 ] * xx [ 304 ] ; xx [ 287 ] = xx [ 321 ] * xx [ 174 ] + xx [ 175 ] *
xx [ 333 ] ; xx [ 288 ] = xx [ 299 ] * xx [ 174 ] ; xx [ 294 ] = xx [ 299 ] *
xx [ 175 ] ; xx [ 400 ] = - xx [ 287 ] ; xx [ 401 ] = xx [ 288 ] ; xx [ 402 ]
= xx [ 294 ] ; pm_math_Vector3_cross_ra ( xx + 348 , xx + 400 , xx + 467 ) ;
xx [ 295 ] = xx [ 175 ] + ( xx [ 288 ] * xx [ 246 ] + xx [ 468 ] ) * xx [ 20
] ; xx [ 400 ] = xx [ 20 ] * ( xx [ 467 ] - xx [ 287 ] * xx [ 246 ] ) ; xx [
401 ] = xx [ 295 ] ; xx [ 402 ] = xx [ 20 ] * ( xx [ 469 ] + xx [ 294 ] * xx
[ 246 ] ) - xx [ 174 ] ; pm_math_Vector3_cross_ra ( xx + 397 , xx + 400 , xx
+ 467 ) ; xx [ 174 ] = ( xx [ 344 ] * xx [ 356 ] + xx [ 370 ] ) * xx [ 20 ] -
xx [ 352 ] + xx [ 379 ] + ( xx [ 374 ] * xx [ 297 ] - xx [ 375 ] * xx [ 301 ]
) * xx [ 20 ] ; xx [ 175 ] = ( ( xx [ 394 ] + xx [ 467 ] ) * xx [ 4 ] + ( xx
[ 396 ] + xx [ 469 ] ) * xx [ 12 ] + xx [ 295 ] * xx [ 134 ] + xx [ 174 ] ) /
xx [ 426 ] ; xx [ 287 ] = xx [ 4 ] * xx [ 175 ] ; xx [ 288 ] = xx [ 12 ] * xx
[ 175 ] ; xx [ 294 ] = xx [ 287 ] * xx [ 333 ] - xx [ 299 ] * xx [ 288 ] ; xx
[ 295 ] = xx [ 321 ] * xx [ 287 ] ; xx [ 368 ] = - ( xx [ 321 ] * xx [ 288 ]
) ; xx [ 369 ] = - xx [ 294 ] ; xx [ 370 ] = xx [ 295 ] ;
pm_math_Vector3_cross_ra ( xx + 348 , xx + 368 , xx + 377 ) ; xx [ 368 ] = xx
[ 363 ] * xx [ 288 ] ; xx [ 369 ] = xx [ 373 ] * xx [ 287 ] - xx [ 371 ] * xx
[ 288 ] - xx [ 134 ] * xx [ 175 ] ; xx [ 370 ] = - ( xx [ 363 ] * xx [ 287 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 334 , xx + 368 , xx + 394 ) ;
xx [ 287 ] = xx [ 303 ] - ( ( xx [ 294 ] * xx [ 246 ] + xx [ 378 ] ) * xx [
410 ] - xx [ 412 ] * xx [ 396 ] ) ; xx [ 294 ] = xx [ 304 ] - ( xx [ 392 ] *
( ( xx [ 379 ] - xx [ 295 ] * xx [ 246 ] ) * xx [ 20 ] - xx [ 288 ] ) + xx [
412 ] * xx [ 395 ] ) ; xx [ 288 ] = xx [ 157 ] * xx [ 132 ] + xx [ 289 ] * xx
[ 151 ] + xx [ 107 ] * xx [ 153 ] + xx [ 37 ] * xx [ 173 ] + xx [ 133 ] * xx
[ 152 ] + xx [ 162 ] * xx [ 158 ] + xx [ 38 ] * xx [ 159 ] + xx [ 376 ] * xx
[ 175 ] - xx [ 372 ] * xx [ 287 ] - xx [ 340 ] * xx [ 294 ] ; xx [ 295 ] =
0.07431243570379253 ; xx [ 296 ] = 2.141422054707503e-3 ; xx [ 302 ] =
4.282844109415006e-3 ; xx [ 368 ] = xx [ 139 ] * xx [ 295 ] ; xx [ 369 ] = -
( xx [ 139 ] * xx [ 296 ] ) ; xx [ 370 ] = xx [ 302 ] * xx [ 148 ] - xx [ 147
] * xx [ 295 ] ; pm_math_Quaternion_xform_ra ( xx + 142 , xx + 368 , xx + 377
) ; xx [ 303 ] = xx [ 377 ] + xx [ 156 ] ; xx [ 304 ] = 0.07200961894323347 ;
xx [ 352 ] = xx [ 304 ] * xx [ 77 ] ; xx [ 356 ] = xx [ 304 ] * xx [ 76 ] ;
xx [ 362 ] = xx [ 135 ] - ( xx [ 75 ] * xx [ 352 ] + xx [ 78 ] * xx [ 356 ] )
* xx [ 20 ] ; xx [ 368 ] = 0.01848076211353309 ; xx [ 369 ] = xx [ 368 ] * xx
[ 77 ] ; xx [ 370 ] = xx [ 368 ] * xx [ 76 ] ; xx [ 374 ] = xx [ 167 ] - ( xx
[ 75 ] * xx [ 369 ] + xx [ 78 ] * xx [ 370 ] ) * xx [ 20 ] ; xx [ 375 ] = xx
[ 296 ] * xx [ 78 ] ; xx [ 391 ] = xx [ 296 ] * xx [ 76 ] + xx [ 295 ] * xx [
77 ] ; xx [ 394 ] = xx [ 375 ] ; xx [ 395 ] = xx [ 295 ] * xx [ 78 ] ; xx [
396 ] = - xx [ 391 ] ; pm_math_Vector3_cross_ra ( xx + 76 , xx + 394 , xx +
400 ) ; xx [ 394 ] = xx [ 295 ] + xx [ 20 ] * ( xx [ 400 ] + xx [ 75 ] * xx [
375 ] ) + xx [ 170 ] ; xx [ 467 ] = xx [ 362 ] ; xx [ 468 ] = xx [ 374 ] ; xx
[ 469 ] = xx [ 394 ] ; solveSymmetricPosDef ( xx + 121 , xx + 467 , 3 , 1 ,
xx + 470 , xx + 473 ) ; xx [ 467 ] = xx [ 48 ] * xx [ 470 ] + xx [ 80 ] * xx
[ 471 ] ; xx [ 468 ] = xx [ 85 ] * xx [ 471 ] - xx [ 86 ] * xx [ 470 ] ; xx [
469 ] = xx [ 56 ] * xx [ 472 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
467 , xx + 473 ) ; xx [ 467 ] = xx [ 87 ] * xx [ 472 ] ; xx [ 468 ] = - ( xx
[ 88 ] * xx [ 472 ] ) ; xx [ 469 ] = xx [ 90 ] * xx [ 471 ] - xx [ 163 ] * xx
[ 470 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 467 , xx + 476 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 476 , xx + 467 ) ; xx [ 375 ] = xx
[ 473 ] + xx [ 467 ] ; xx [ 479 ] = xx [ 295 ] * xx [ 201 ] ; xx [ 480 ] = -
( xx [ 296 ] * xx [ 201 ] ) ; xx [ 481 ] = xx [ 256 ] * xx [ 302 ] - xx [ 295
] * xx [ 251 ] ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 479 , xx + 482
) ; xx [ 395 ] = xx [ 482 ] + xx [ 283 ] ; xx [ 396 ] = 0.1486248714075851 ;
xx [ 479 ] = xx [ 295 ] * xx [ 290 ] ; xx [ 480 ] = - ( xx [ 296 ] * xx [ 290
] ) ; xx [ 481 ] = xx [ 296 ] * xx [ 200 ] - xx [ 396 ] * xx [ 192 ] ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 479 , xx + 485 ) ; xx [ 453 ] =
xx [ 485 ] + xx [ 91 ] ; xx [ 460 ] = xx [ 474 ] + xx [ 468 ] ; xx [ 479 ] =
xx [ 295 ] * xx [ 203 ] ; xx [ 480 ] = - ( xx [ 296 ] * xx [ 203 ] ) ; xx [
481 ] = xx [ 302 ] * xx [ 31 ] - xx [ 188 ] * xx [ 396 ] ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 479 , xx + 488 ) ; xx [ 302 ] =
xx [ 488 ] + xx [ 291 ] ; xx [ 396 ] = xx [ 475 ] + xx [ 469 ] ; xx [ 467 ] =
xx [ 395 ] - xx [ 375 ] ; xx [ 468 ] = xx [ 453 ] - ( xx [ 460 ] - xx [ 79 ]
* xx [ 478 ] ) ; xx [ 469 ] = xx [ 302 ] - ( xx [ 396 ] + xx [ 79 ] * xx [
477 ] ) ; solveSymmetricPosDef ( xx + 274 , xx + 467 , 3 , 1 , xx + 473 , xx
+ 479 ) ; xx [ 467 ] = xx [ 375 ] + xx [ 166 ] * xx [ 473 ] + xx [ 224 ] * xx
[ 474 ] + xx [ 237 ] * xx [ 475 ] ; xx [ 468 ] = xx [ 460 ] + xx [ 473 ] * xx
[ 94 ] + xx [ 241 ] * xx [ 474 ] + xx [ 238 ] * xx [ 475 ] ; xx [ 469 ] = xx
[ 396 ] + xx [ 473 ] * xx [ 101 ] + xx [ 104 ] * xx [ 474 ] + xx [ 221 ] * xx
[ 475 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 467 , xx + 479 ) ; xx [
467 ] = xx [ 476 ] + xx [ 473 ] * xx [ 89 ] + xx [ 165 ] * xx [ 474 ] + xx [
180 ] * xx [ 475 ] ; xx [ 468 ] = xx [ 477 ] + xx [ 473 ] * xx [ 245 ] + xx [
181 ] * xx [ 474 ] + xx [ 250 ] * xx [ 475 ] ; xx [ 469 ] = xx [ 478 ] + xx [
473 ] * xx [ 223 ] + xx [ 260 ] * xx [ 474 ] + xx [ 242 ] * xx [ 475 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 467 , xx + 476 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 476 , xx + 467 ) ; xx [ 375 ] = (
xx [ 303 ] - ( ( xx [ 481 ] + xx [ 469 ] ) * xx [ 12 ] - ( xx [ 479 ] + xx [
467 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 477 ] ) ) / xx [ 231 ] ; xx [ 396 ] =
xx [ 12 ] * xx [ 375 ] ; xx [ 460 ] = xx [ 5 ] * xx [ 396 ] ; xx [ 467 ] = xx
[ 4 ] * xx [ 375 ] ; xx [ 468 ] = xx [ 3 ] * xx [ 396 ] - xx [ 467 ] * xx [ 7
] ; xx [ 469 ] = xx [ 5 ] * xx [ 467 ] ; xx [ 476 ] = - xx [ 460 ] ; xx [ 477
] = xx [ 468 ] ; xx [ 478 ] = - xx [ 469 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 476 , xx + 479 ) ; xx [ 476 ] = ( xx [ 460 ] * xx [ 2 ] + xx [ 479
] ) * xx [ 20 ] - xx [ 467 ] ; xx [ 460 ] = xx [ 20 ] * ( xx [ 480 ] - xx [
468 ] * xx [ 2 ] ) ; xx [ 468 ] = xx [ 396 ] + xx [ 20 ] * ( xx [ 481 ] + xx
[ 469 ] * xx [ 2 ] ) ; xx [ 477 ] = xx [ 476 ] ; xx [ 478 ] = xx [ 460 ] ; xx
[ 479 ] = xx [ 468 ] ; xx [ 491 ] = - ( xx [ 105 ] * xx [ 396 ] ) ; xx [ 492
] = xx [ 134 ] * xx [ 375 ] + xx [ 103 ] * xx [ 396 ] + xx [ 108 ] * xx [ 467
] ; xx [ 493 ] = - ( xx [ 105 ] * xx [ 467 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 491 , xx + 494 ) ; xx [
396 ] = xx [ 473 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 477 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 494 ) ) ; xx [ 467 ] = xx [ 474 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 477 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 494 ) ) ; xx [ 469 ] = xx [ 475 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 477 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 494 ) ) ;
xx [ 473 ] = xx [ 476 ] + xx [ 396 ] ; xx [ 474 ] = xx [ 460 ] + xx [ 467 ] ;
xx [ 475 ] = xx [ 468 ] + xx [ 469 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 473 , xx + 476 ) ; pm_math_Vector3_cross_ra ( xx + 473 , xx +
95 , xx + 479 ) ; xx [ 473 ] = xx [ 494 ] + xx [ 479 ] ; xx [ 474 ] = xx [
495 ] + xx [ 79 ] * xx [ 469 ] + xx [ 480 ] ; xx [ 475 ] = xx [ 496 ] - xx [
79 ] * xx [ 467 ] + xx [ 481 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 473 , xx + 479 ) ; xx [ 460 ] = xx [ 470 ] - ( xx [ 184 ] * xx [ 476 ]
+ xx [ 214 ] * xx [ 477 ] - xx [ 216 ] * xx [ 481 ] ) ; xx [ 468 ] = xx [ 471
] - ( xx [ 218 ] * xx [ 476 ] + xx [ 220 ] * xx [ 477 ] + xx [ 226 ] * xx [
481 ] ) ; xx [ 470 ] = xx [ 472 ] - ( xx [ 235 ] * xx [ 478 ] + xx [ 236 ] *
xx [ 479 ] - xx [ 243 ] * xx [ 480 ] ) ; xx [ 471 ] = xx [ 157 ] * xx [ 375 ]
+ xx [ 289 ] * xx [ 396 ] + xx [ 107 ] * xx [ 467 ] + xx [ 37 ] * xx [ 469 ]
+ xx [ 133 ] * xx [ 460 ] + xx [ 162 ] * xx [ 468 ] + xx [ 38 ] * xx [ 470 ]
; xx [ 472 ] = xx [ 378 ] + xx [ 414 ] + xx [ 134 ] ; xx [ 473 ] = xx [ 20 ]
* ( xx [ 75 ] * xx [ 356 ] - xx [ 78 ] * xx [ 352 ] ) + xx [ 136 ] ; xx [ 474
] = xx [ 20 ] * ( xx [ 75 ] * xx [ 370 ] - xx [ 78 ] * xx [ 369 ] ) + xx [
168 ] ; xx [ 475 ] = ( xx [ 295 ] * xx [ 64 ] + xx [ 401 ] ) * xx [ 20 ] - xx
[ 296 ] + xx [ 171 ] ; solveSymmetricPosDef ( xx + 121 , xx + 473 , 3 , 1 ,
xx + 476 , xx + 479 ) ; xx [ 479 ] = xx [ 48 ] * xx [ 476 ] + xx [ 80 ] * xx
[ 477 ] ; xx [ 480 ] = xx [ 85 ] * xx [ 477 ] - xx [ 86 ] * xx [ 476 ] ; xx [
481 ] = xx [ 56 ] * xx [ 478 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
479 , xx + 491 ) ; xx [ 479 ] = xx [ 87 ] * xx [ 478 ] ; xx [ 480 ] = - ( xx
[ 88 ] * xx [ 478 ] ) ; xx [ 481 ] = xx [ 90 ] * xx [ 477 ] - xx [ 163 ] * xx
[ 476 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 479 , xx + 494 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 494 , xx + 479 ) ; xx [ 497 ] = xx
[ 491 ] + xx [ 479 ] ; xx [ 498 ] = xx [ 483 ] + xx [ 284 ] ; xx [ 499 ] = xx
[ 486 ] + xx [ 92 ] ; xx [ 500 ] = xx [ 492 ] + xx [ 480 ] ; xx [ 501 ] = xx
[ 489 ] + xx [ 292 ] ; xx [ 479 ] = xx [ 493 ] + xx [ 481 ] ; xx [ 491 ] = xx
[ 498 ] - xx [ 497 ] ; xx [ 492 ] = xx [ 499 ] - ( xx [ 500 ] - xx [ 79 ] *
xx [ 496 ] ) ; xx [ 493 ] = xx [ 501 ] - ( xx [ 479 ] + xx [ 79 ] * xx [ 495
] ) ; solveSymmetricPosDef ( xx + 274 , xx + 491 , 3 , 1 , xx + 502 , xx +
505 ) ; xx [ 491 ] = xx [ 497 ] + xx [ 166 ] * xx [ 502 ] + xx [ 224 ] * xx [
503 ] + xx [ 237 ] * xx [ 504 ] ; xx [ 492 ] = xx [ 500 ] + xx [ 502 ] * xx [
94 ] + xx [ 241 ] * xx [ 503 ] + xx [ 238 ] * xx [ 504 ] ; xx [ 493 ] = xx [
479 ] + xx [ 502 ] * xx [ 101 ] + xx [ 104 ] * xx [ 503 ] + xx [ 221 ] * xx [
504 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 491 , xx + 479 ) ; xx [
491 ] = xx [ 494 ] + xx [ 502 ] * xx [ 89 ] + xx [ 165 ] * xx [ 503 ] + xx [
180 ] * xx [ 504 ] ; xx [ 492 ] = xx [ 495 ] + xx [ 502 ] * xx [ 245 ] + xx [
181 ] * xx [ 503 ] + xx [ 250 ] * xx [ 504 ] ; xx [ 493 ] = xx [ 496 ] + xx [
502 ] * xx [ 223 ] + xx [ 260 ] * xx [ 503 ] + xx [ 242 ] * xx [ 504 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 491 , xx + 494 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 494 , xx + 491 ) ; xx [ 480 ] = (
xx [ 472 ] - ( ( xx [ 481 ] + xx [ 493 ] ) * xx [ 12 ] - ( xx [ 479 ] + xx [
491 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 495 ] ) ) / xx [ 231 ] ; xx [ 479 ] =
xx [ 12 ] * xx [ 480 ] ; xx [ 481 ] = xx [ 5 ] * xx [ 479 ] ; xx [ 491 ] = xx
[ 4 ] * xx [ 480 ] ; xx [ 492 ] = xx [ 3 ] * xx [ 479 ] - xx [ 491 ] * xx [ 7
] ; xx [ 493 ] = xx [ 5 ] * xx [ 491 ] ; xx [ 494 ] = - xx [ 481 ] ; xx [ 495
] = xx [ 492 ] ; xx [ 496 ] = - xx [ 493 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 494 , xx + 505 ) ; xx [ 494 ] = ( xx [ 481 ] * xx [ 2 ] + xx [ 505
] ) * xx [ 20 ] - xx [ 491 ] ; xx [ 481 ] = xx [ 20 ] * ( xx [ 506 ] - xx [
492 ] * xx [ 2 ] ) ; xx [ 492 ] = xx [ 479 ] + xx [ 20 ] * ( xx [ 507 ] + xx
[ 493 ] * xx [ 2 ] ) ; xx [ 495 ] = xx [ 494 ] ; xx [ 496 ] = xx [ 481 ] ; xx
[ 497 ] = xx [ 492 ] ; xx [ 505 ] = - ( xx [ 105 ] * xx [ 479 ] ) ; xx [ 506
] = xx [ 134 ] * xx [ 480 ] + xx [ 103 ] * xx [ 479 ] + xx [ 108 ] * xx [ 491
] ; xx [ 507 ] = - ( xx [ 105 ] * xx [ 491 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 505 , xx + 508 ) ; xx [
479 ] = xx [ 502 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 495 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 508 ) ) ; xx [ 491 ] = xx [ 503 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 495 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 508 ) ) ; xx [ 493 ] = xx [ 504 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 495 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 508 ) ) ;
xx [ 495 ] = xx [ 494 ] + xx [ 479 ] ; xx [ 496 ] = xx [ 481 ] + xx [ 491 ] ;
xx [ 497 ] = xx [ 492 ] + xx [ 493 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 495 , xx + 502 ) ; pm_math_Vector3_cross_ra ( xx + 495 , xx +
95 , xx + 505 ) ; xx [ 494 ] = xx [ 508 ] + xx [ 505 ] ; xx [ 495 ] = xx [
509 ] + xx [ 79 ] * xx [ 493 ] + xx [ 506 ] ; xx [ 496 ] = xx [ 510 ] - xx [
79 ] * xx [ 491 ] + xx [ 507 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 494 , xx + 505 ) ; xx [ 481 ] = xx [ 476 ] - ( xx [ 184 ] * xx [ 502 ]
+ xx [ 214 ] * xx [ 503 ] - xx [ 216 ] * xx [ 507 ] ) ; xx [ 476 ] = xx [ 477
] - ( xx [ 218 ] * xx [ 502 ] + xx [ 220 ] * xx [ 503 ] + xx [ 226 ] * xx [
507 ] ) ; xx [ 477 ] = xx [ 478 ] - ( xx [ 235 ] * xx [ 504 ] + xx [ 236 ] *
xx [ 505 ] - xx [ 243 ] * xx [ 506 ] ) ; xx [ 478 ] = xx [ 157 ] * xx [ 480 ]
+ xx [ 289 ] * xx [ 479 ] + xx [ 107 ] * xx [ 491 ] + xx [ 37 ] * xx [ 493 ]
+ xx [ 133 ] * xx [ 481 ] + xx [ 162 ] * xx [ 476 ] + xx [ 38 ] * xx [ 477 ]
; xx [ 377 ] = xx [ 379 ] + xx [ 149 ] ; xx [ 378 ] = ( xx [ 76 ] * xx [ 356
] + xx [ 77 ] * xx [ 352 ] ) * xx [ 20 ] - xx [ 304 ] + xx [ 137 ] ; xx [ 304
] = ( xx [ 76 ] * xx [ 370 ] + xx [ 77 ] * xx [ 369 ] ) * xx [ 20 ] - xx [
368 ] + xx [ 169 ] ; xx [ 352 ] = ( xx [ 402 ] - xx [ 75 ] * xx [ 391 ] ) *
xx [ 20 ] + xx [ 172 ] ; xx [ 368 ] = xx [ 378 ] ; xx [ 369 ] = xx [ 304 ] ;
xx [ 370 ] = xx [ 352 ] ; solveSymmetricPosDef ( xx + 121 , xx + 368 , 3 , 1
, xx + 400 , xx + 494 ) ; xx [ 368 ] = xx [ 48 ] * xx [ 400 ] + xx [ 80 ] *
xx [ 401 ] ; xx [ 369 ] = xx [ 85 ] * xx [ 401 ] - xx [ 86 ] * xx [ 400 ] ;
xx [ 370 ] = xx [ 56 ] * xx [ 402 ] ; pm_math_Quaternion_xform_ra ( xx + 41 ,
xx + 368 , xx + 494 ) ; xx [ 368 ] = xx [ 87 ] * xx [ 402 ] ; xx [ 369 ] = -
( xx [ 88 ] * xx [ 402 ] ) ; xx [ 370 ] = xx [ 90 ] * xx [ 401 ] - xx [ 163 ]
* xx [ 400 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 368 , xx + 502 )
; pm_math_Vector3_cross_ra ( xx + 95 , xx + 502 , xx + 368 ) ; xx [ 356 ] =
xx [ 494 ] + xx [ 368 ] ; xx [ 379 ] = xx [ 484 ] + xx [ 285 ] ; xx [ 391 ] =
xx [ 487 ] + xx [ 93 ] ; xx [ 482 ] = xx [ 495 ] + xx [ 369 ] ; xx [ 483 ] =
xx [ 490 ] + xx [ 293 ] ; xx [ 368 ] = xx [ 496 ] + xx [ 370 ] ; xx [ 484 ] =
xx [ 379 ] - xx [ 356 ] ; xx [ 485 ] = xx [ 391 ] - ( xx [ 482 ] - xx [ 79 ]
* xx [ 504 ] ) ; xx [ 486 ] = xx [ 483 ] - ( xx [ 368 ] + xx [ 79 ] * xx [
503 ] ) ; solveSymmetricPosDef ( xx + 274 , xx + 484 , 3 , 1 , xx + 487 , xx
+ 494 ) ; xx [ 484 ] = xx [ 356 ] + xx [ 166 ] * xx [ 487 ] + xx [ 224 ] * xx
[ 488 ] + xx [ 237 ] * xx [ 489 ] ; xx [ 485 ] = xx [ 482 ] + xx [ 487 ] * xx
[ 94 ] + xx [ 241 ] * xx [ 488 ] + xx [ 238 ] * xx [ 489 ] ; xx [ 486 ] = xx
[ 368 ] + xx [ 487 ] * xx [ 101 ] + xx [ 104 ] * xx [ 488 ] + xx [ 221 ] * xx
[ 489 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 484 , xx + 368 ) ; xx [
484 ] = xx [ 502 ] + xx [ 487 ] * xx [ 89 ] + xx [ 165 ] * xx [ 488 ] + xx [
180 ] * xx [ 489 ] ; xx [ 485 ] = xx [ 503 ] + xx [ 487 ] * xx [ 245 ] + xx [
181 ] * xx [ 488 ] + xx [ 250 ] * xx [ 489 ] ; xx [ 486 ] = xx [ 504 ] + xx [
487 ] * xx [ 223 ] + xx [ 260 ] * xx [ 488 ] + xx [ 242 ] * xx [ 489 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 484 , xx + 494 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 494 , xx + 484 ) ; xx [ 356 ] = (
xx [ 377 ] - ( ( xx [ 370 ] + xx [ 486 ] ) * xx [ 12 ] - ( xx [ 368 ] + xx [
484 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 495 ] ) ) / xx [ 231 ] ; xx [ 368 ] =
xx [ 12 ] * xx [ 356 ] ; xx [ 369 ] = xx [ 5 ] * xx [ 368 ] ; xx [ 370 ] = xx
[ 4 ] * xx [ 356 ] ; xx [ 482 ] = xx [ 3 ] * xx [ 368 ] - xx [ 370 ] * xx [ 7
] ; xx [ 484 ] = xx [ 5 ] * xx [ 370 ] ; xx [ 494 ] = - xx [ 369 ] ; xx [ 495
] = xx [ 482 ] ; xx [ 496 ] = - xx [ 484 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 494 , xx + 502 ) ; xx [ 485 ] = ( xx [ 369 ] * xx [ 2 ] + xx [ 502
] ) * xx [ 20 ] - xx [ 370 ] ; xx [ 369 ] = xx [ 20 ] * ( xx [ 503 ] - xx [
482 ] * xx [ 2 ] ) ; xx [ 482 ] = xx [ 368 ] + xx [ 20 ] * ( xx [ 504 ] + xx
[ 484 ] * xx [ 2 ] ) ; xx [ 494 ] = xx [ 485 ] ; xx [ 495 ] = xx [ 369 ] ; xx
[ 496 ] = xx [ 482 ] ; xx [ 502 ] = - ( xx [ 105 ] * xx [ 368 ] ) ; xx [ 503
] = xx [ 134 ] * xx [ 356 ] + xx [ 103 ] * xx [ 368 ] + xx [ 108 ] * xx [ 370
] ; xx [ 504 ] = - ( xx [ 105 ] * xx [ 370 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 502 , xx + 505 ) ; xx [
368 ] = xx [ 487 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 494 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 505 ) ) ; xx [ 370 ] = xx [ 488 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 494 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 505 ) ) ; xx [ 484 ] = xx [ 489 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 494 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 505 ) ) ;
xx [ 486 ] = xx [ 485 ] + xx [ 368 ] ; xx [ 487 ] = xx [ 369 ] + xx [ 370 ] ;
xx [ 488 ] = xx [ 482 ] + xx [ 484 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 486 , xx + 494 ) ; pm_math_Vector3_cross_ra ( xx + 486 , xx +
95 , xx + 502 ) ; xx [ 485 ] = xx [ 505 ] + xx [ 502 ] ; xx [ 486 ] = xx [
506 ] + xx [ 79 ] * xx [ 484 ] + xx [ 503 ] ; xx [ 487 ] = xx [ 507 ] - xx [
79 ] * xx [ 370 ] + xx [ 504 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 485 , xx + 488 ) ; xx [ 369 ] = xx [ 400 ] - ( xx [ 184 ] * xx [ 494 ]
+ xx [ 214 ] * xx [ 495 ] - xx [ 216 ] * xx [ 490 ] ) ; xx [ 400 ] = xx [ 401
] - ( xx [ 218 ] * xx [ 494 ] + xx [ 220 ] * xx [ 495 ] + xx [ 226 ] * xx [
490 ] ) ; xx [ 401 ] = xx [ 402 ] - ( xx [ 235 ] * xx [ 496 ] + xx [ 236 ] *
xx [ 488 ] - xx [ 243 ] * xx [ 489 ] ) ; xx [ 402 ] = xx [ 157 ] * xx [ 356 ]
+ xx [ 289 ] * xx [ 368 ] + xx [ 107 ] * xx [ 370 ] + xx [ 37 ] * xx [ 484 ]
+ xx [ 133 ] * xx [ 369 ] + xx [ 162 ] * xx [ 400 ] + xx [ 38 ] * xx [ 401 ]
; xx [ 482 ] = 0.06466571354218477 ; xx [ 485 ] = 0.03667791270951477 ; xx [
486 ] = 0.07335582541902955 ; xx [ 487 ] = xx [ 139 ] * xx [ 482 ] ; xx [ 488
] = xx [ 139 ] * xx [ 485 ] ; xx [ 489 ] = - ( xx [ 147 ] * xx [ 482 ] + xx [
486 ] * xx [ 148 ] ) ; pm_math_Quaternion_xform_ra ( xx + 142 , xx + 487 , xx
+ 494 ) ; xx [ 487 ] = xx [ 494 ] + xx [ 156 ] ; xx [ 488 ] =
0.05200961894323338 ; xx [ 489 ] = xx [ 488 ] * xx [ 77 ] ; xx [ 490 ] = xx [
488 ] * xx [ 76 ] ; xx [ 492 ] = xx [ 135 ] - ( xx [ 75 ] * xx [ 489 ] + xx [
78 ] * xx [ 490 ] ) * xx [ 20 ] ; xx [ 497 ] = 0.05312177826491074 ; xx [ 500
] = xx [ 497 ] * xx [ 77 ] ; xx [ 502 ] = xx [ 497 ] * xx [ 76 ] ; xx [ 503 ]
= xx [ 167 ] - ( xx [ 75 ] * xx [ 500 ] + xx [ 78 ] * xx [ 502 ] ) * xx [ 20
] ; xx [ 504 ] = xx [ 485 ] * xx [ 78 ] ; xx [ 505 ] = xx [ 485 ] * xx [ 76 ]
- xx [ 482 ] * xx [ 77 ] ; xx [ 506 ] = - xx [ 504 ] ; xx [ 507 ] = xx [ 482
] * xx [ 78 ] ; xx [ 508 ] = xx [ 505 ] ; pm_math_Vector3_cross_ra ( xx + 76
, xx + 506 , xx + 509 ) ; xx [ 506 ] = xx [ 482 ] + xx [ 20 ] * ( xx [ 509 ]
- xx [ 75 ] * xx [ 504 ] ) + xx [ 170 ] ; xx [ 512 ] = xx [ 492 ] ; xx [ 513
] = xx [ 503 ] ; xx [ 514 ] = xx [ 506 ] ; solveSymmetricPosDef ( xx + 121 ,
xx + 512 , 3 , 1 , xx + 515 , xx + 518 ) ; xx [ 512 ] = xx [ 48 ] * xx [ 515
] + xx [ 80 ] * xx [ 516 ] ; xx [ 513 ] = xx [ 85 ] * xx [ 516 ] - xx [ 86 ]
* xx [ 515 ] ; xx [ 514 ] = xx [ 56 ] * xx [ 517 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 512 , xx + 518 ) ; xx [ 512 ] =
xx [ 87 ] * xx [ 517 ] ; xx [ 513 ] = - ( xx [ 88 ] * xx [ 517 ] ) ; xx [ 514
] = xx [ 90 ] * xx [ 516 ] - xx [ 163 ] * xx [ 515 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 512 , xx + 521 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 521 , xx + 512 ) ; xx [ 504 ] = xx
[ 518 ] + xx [ 512 ] ; xx [ 524 ] = xx [ 482 ] * xx [ 201 ] ; xx [ 525 ] = xx
[ 485 ] * xx [ 201 ] ; xx [ 526 ] = - ( xx [ 482 ] * xx [ 251 ] + xx [ 256 ]
* xx [ 486 ] ) ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 524 , xx + 527
) ; xx [ 507 ] = xx [ 527 ] + xx [ 283 ] ; xx [ 508 ] = 0.1293314270843695 ;
xx [ 524 ] = xx [ 482 ] * xx [ 290 ] ; xx [ 525 ] = xx [ 485 ] * xx [ 290 ] ;
xx [ 526 ] = - ( xx [ 508 ] * xx [ 192 ] + xx [ 485 ] * xx [ 200 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 524 , xx + 530 ) ; xx [ 524 ] =
xx [ 530 ] + xx [ 91 ] ; xx [ 525 ] = xx [ 519 ] + xx [ 513 ] ; xx [ 533 ] =
xx [ 482 ] * xx [ 203 ] ; xx [ 534 ] = xx [ 485 ] * xx [ 203 ] ; xx [ 535 ] =
- ( xx [ 188 ] * xx [ 508 ] + xx [ 486 ] * xx [ 31 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 533 , xx + 536 ) ; xx [ 486 ] =
xx [ 536 ] + xx [ 291 ] ; xx [ 508 ] = xx [ 520 ] + xx [ 514 ] ; xx [ 512 ] =
xx [ 507 ] - xx [ 504 ] ; xx [ 513 ] = xx [ 524 ] - ( xx [ 525 ] - xx [ 79 ]
* xx [ 523 ] ) ; xx [ 514 ] = xx [ 486 ] - ( xx [ 508 ] + xx [ 79 ] * xx [
522 ] ) ; solveSymmetricPosDef ( xx + 274 , xx + 512 , 3 , 1 , xx + 518 , xx
+ 533 ) ; xx [ 512 ] = xx [ 504 ] + xx [ 166 ] * xx [ 518 ] + xx [ 224 ] * xx
[ 519 ] + xx [ 237 ] * xx [ 520 ] ; xx [ 513 ] = xx [ 525 ] + xx [ 518 ] * xx
[ 94 ] + xx [ 241 ] * xx [ 519 ] + xx [ 238 ] * xx [ 520 ] ; xx [ 514 ] = xx
[ 508 ] + xx [ 518 ] * xx [ 101 ] + xx [ 104 ] * xx [ 519 ] + xx [ 221 ] * xx
[ 520 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 512 , xx + 533 ) ; xx [
512 ] = xx [ 521 ] + xx [ 518 ] * xx [ 89 ] + xx [ 165 ] * xx [ 519 ] + xx [
180 ] * xx [ 520 ] ; xx [ 513 ] = xx [ 522 ] + xx [ 518 ] * xx [ 245 ] + xx [
181 ] * xx [ 519 ] + xx [ 250 ] * xx [ 520 ] ; xx [ 514 ] = xx [ 523 ] + xx [
518 ] * xx [ 223 ] + xx [ 260 ] * xx [ 519 ] + xx [ 242 ] * xx [ 520 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 512 , xx + 521 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 521 , xx + 512 ) ; xx [ 504 ] = (
xx [ 487 ] - ( ( xx [ 535 ] + xx [ 514 ] ) * xx [ 12 ] - ( xx [ 533 ] + xx [
512 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 522 ] ) ) / xx [ 231 ] ; xx [ 508 ] =
xx [ 12 ] * xx [ 504 ] ; xx [ 512 ] = xx [ 5 ] * xx [ 508 ] ; xx [ 513 ] = xx
[ 4 ] * xx [ 504 ] ; xx [ 514 ] = xx [ 3 ] * xx [ 508 ] - xx [ 513 ] * xx [ 7
] ; xx [ 521 ] = xx [ 5 ] * xx [ 513 ] ; xx [ 533 ] = - xx [ 512 ] ; xx [ 534
] = xx [ 514 ] ; xx [ 535 ] = - xx [ 521 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 533 , xx + 539 ) ; xx [ 522 ] = ( xx [ 512 ] * xx [ 2 ] + xx [ 539
] ) * xx [ 20 ] - xx [ 513 ] ; xx [ 512 ] = xx [ 20 ] * ( xx [ 540 ] - xx [
514 ] * xx [ 2 ] ) ; xx [ 514 ] = xx [ 508 ] + xx [ 20 ] * ( xx [ 541 ] + xx
[ 521 ] * xx [ 2 ] ) ; xx [ 533 ] = xx [ 522 ] ; xx [ 534 ] = xx [ 512 ] ; xx
[ 535 ] = xx [ 514 ] ; xx [ 539 ] = - ( xx [ 105 ] * xx [ 508 ] ) ; xx [ 540
] = xx [ 134 ] * xx [ 504 ] + xx [ 103 ] * xx [ 508 ] + xx [ 108 ] * xx [ 513
] ; xx [ 541 ] = - ( xx [ 105 ] * xx [ 513 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 539 , xx + 542 ) ; xx [
508 ] = xx [ 518 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 533 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 542 ) ) ; xx [ 513 ] = xx [ 519 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 533 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 542 ) ) ; xx [ 518 ] = xx [ 520 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 533 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 542 ) ) ;
xx [ 519 ] = xx [ 522 ] + xx [ 508 ] ; xx [ 520 ] = xx [ 512 ] + xx [ 513 ] ;
xx [ 521 ] = xx [ 514 ] + xx [ 518 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 519 , xx + 533 ) ; pm_math_Vector3_cross_ra ( xx + 519 , xx +
95 , xx + 539 ) ; xx [ 519 ] = xx [ 542 ] + xx [ 539 ] ; xx [ 520 ] = xx [
543 ] + xx [ 79 ] * xx [ 518 ] + xx [ 540 ] ; xx [ 521 ] = xx [ 544 ] - xx [
79 ] * xx [ 513 ] + xx [ 541 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 519 , xx + 539 ) ; xx [ 512 ] = xx [ 515 ] - ( xx [ 184 ] * xx [ 533 ]
+ xx [ 214 ] * xx [ 534 ] - xx [ 216 ] * xx [ 541 ] ) ; xx [ 514 ] = xx [ 516
] - ( xx [ 218 ] * xx [ 533 ] + xx [ 220 ] * xx [ 534 ] + xx [ 226 ] * xx [
541 ] ) ; xx [ 515 ] = xx [ 517 ] - ( xx [ 235 ] * xx [ 535 ] + xx [ 236 ] *
xx [ 539 ] - xx [ 243 ] * xx [ 540 ] ) ; xx [ 516 ] = xx [ 157 ] * xx [ 504 ]
+ xx [ 289 ] * xx [ 508 ] + xx [ 107 ] * xx [ 513 ] + xx [ 37 ] * xx [ 518 ]
+ xx [ 133 ] * xx [ 512 ] + xx [ 162 ] * xx [ 514 ] + xx [ 38 ] * xx [ 515 ]
; xx [ 517 ] = xx [ 495 ] + xx [ 414 ] + xx [ 134 ] ; xx [ 519 ] = xx [ 20 ]
* ( xx [ 75 ] * xx [ 490 ] - xx [ 78 ] * xx [ 489 ] ) + xx [ 136 ] ; xx [ 520
] = xx [ 20 ] * ( xx [ 75 ] * xx [ 502 ] - xx [ 78 ] * xx [ 500 ] ) + xx [
168 ] ; xx [ 521 ] = xx [ 485 ] + ( xx [ 482 ] * xx [ 64 ] + xx [ 510 ] ) *
xx [ 20 ] + xx [ 171 ] ; solveSymmetricPosDef ( xx + 121 , xx + 519 , 3 , 1 ,
xx + 533 , xx + 539 ) ; xx [ 539 ] = xx [ 48 ] * xx [ 533 ] + xx [ 80 ] * xx
[ 534 ] ; xx [ 540 ] = xx [ 85 ] * xx [ 534 ] - xx [ 86 ] * xx [ 533 ] ; xx [
541 ] = xx [ 56 ] * xx [ 535 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
539 , xx + 542 ) ; xx [ 539 ] = xx [ 87 ] * xx [ 535 ] ; xx [ 540 ] = - ( xx
[ 88 ] * xx [ 535 ] ) ; xx [ 541 ] = xx [ 90 ] * xx [ 534 ] - xx [ 163 ] * xx
[ 533 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 539 , xx + 545 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 545 , xx + 539 ) ; xx [ 522 ] = xx
[ 542 ] + xx [ 539 ] ; xx [ 523 ] = xx [ 528 ] + xx [ 284 ] ; xx [ 525 ] = xx
[ 531 ] + xx [ 92 ] ; xx [ 526 ] = xx [ 543 ] + xx [ 540 ] ; xx [ 548 ] = xx
[ 537 ] + xx [ 292 ] ; xx [ 539 ] = xx [ 544 ] + xx [ 541 ] ; xx [ 540 ] = xx
[ 523 ] - xx [ 522 ] ; xx [ 541 ] = xx [ 525 ] - ( xx [ 526 ] - xx [ 79 ] *
xx [ 547 ] ) ; xx [ 542 ] = xx [ 548 ] - ( xx [ 539 ] + xx [ 79 ] * xx [ 546
] ) ; solveSymmetricPosDef ( xx + 274 , xx + 540 , 3 , 1 , xx + 549 , xx +
552 ) ; xx [ 540 ] = xx [ 522 ] + xx [ 166 ] * xx [ 549 ] + xx [ 224 ] * xx [
550 ] + xx [ 237 ] * xx [ 551 ] ; xx [ 541 ] = xx [ 526 ] + xx [ 549 ] * xx [
94 ] + xx [ 241 ] * xx [ 550 ] + xx [ 238 ] * xx [ 551 ] ; xx [ 542 ] = xx [
539 ] + xx [ 549 ] * xx [ 101 ] + xx [ 104 ] * xx [ 550 ] + xx [ 221 ] * xx [
551 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 540 , xx + 552 ) ; xx [
539 ] = xx [ 545 ] + xx [ 549 ] * xx [ 89 ] + xx [ 165 ] * xx [ 550 ] + xx [
180 ] * xx [ 551 ] ; xx [ 540 ] = xx [ 546 ] + xx [ 549 ] * xx [ 245 ] + xx [
181 ] * xx [ 550 ] + xx [ 250 ] * xx [ 551 ] ; xx [ 541 ] = xx [ 547 ] + xx [
549 ] * xx [ 223 ] + xx [ 260 ] * xx [ 550 ] + xx [ 242 ] * xx [ 551 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 539 , xx + 542 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 542 , xx + 539 ) ; xx [ 522 ] = (
xx [ 517 ] - ( ( xx [ 554 ] + xx [ 541 ] ) * xx [ 12 ] - ( xx [ 552 ] + xx [
539 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 543 ] ) ) / xx [ 231 ] ; xx [ 526 ] =
xx [ 12 ] * xx [ 522 ] ; xx [ 539 ] = xx [ 5 ] * xx [ 526 ] ; xx [ 540 ] = xx
[ 4 ] * xx [ 522 ] ; xx [ 541 ] = xx [ 3 ] * xx [ 526 ] - xx [ 540 ] * xx [ 7
] ; xx [ 542 ] = xx [ 5 ] * xx [ 540 ] ; xx [ 543 ] = - xx [ 539 ] ; xx [ 544
] = xx [ 541 ] ; xx [ 545 ] = - xx [ 542 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 543 , xx + 552 ) ; xx [ 543 ] = ( xx [ 539 ] * xx [ 2 ] + xx [ 552
] ) * xx [ 20 ] - xx [ 540 ] ; xx [ 539 ] = xx [ 20 ] * ( xx [ 553 ] - xx [
541 ] * xx [ 2 ] ) ; xx [ 541 ] = xx [ 526 ] + xx [ 20 ] * ( xx [ 554 ] + xx
[ 542 ] * xx [ 2 ] ) ; xx [ 544 ] = xx [ 543 ] ; xx [ 545 ] = xx [ 539 ] ; xx
[ 546 ] = xx [ 541 ] ; xx [ 552 ] = - ( xx [ 105 ] * xx [ 526 ] ) ; xx [ 553
] = xx [ 134 ] * xx [ 522 ] + xx [ 103 ] * xx [ 526 ] + xx [ 108 ] * xx [ 540
] ; xx [ 554 ] = - ( xx [ 105 ] * xx [ 540 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 552 , xx + 555 ) ; xx [
526 ] = xx [ 549 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 544 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 555 ) ) ; xx [ 540 ] = xx [ 550 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 544 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 555 ) ) ; xx [ 542 ] = xx [ 551 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 544 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 555 ) ) ;
xx [ 544 ] = xx [ 543 ] + xx [ 526 ] ; xx [ 545 ] = xx [ 539 ] + xx [ 540 ] ;
xx [ 546 ] = xx [ 541 ] + xx [ 542 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 544 , xx + 549 ) ; pm_math_Vector3_cross_ra ( xx + 544 , xx +
95 , xx + 552 ) ; xx [ 543 ] = xx [ 555 ] + xx [ 552 ] ; xx [ 544 ] = xx [
556 ] + xx [ 79 ] * xx [ 542 ] + xx [ 553 ] ; xx [ 545 ] = xx [ 557 ] - xx [
79 ] * xx [ 540 ] + xx [ 554 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 543 , xx + 552 ) ; xx [ 539 ] = xx [ 533 ] - ( xx [ 184 ] * xx [ 549 ]
+ xx [ 214 ] * xx [ 550 ] - xx [ 216 ] * xx [ 554 ] ) ; xx [ 533 ] = xx [ 534
] - ( xx [ 218 ] * xx [ 549 ] + xx [ 220 ] * xx [ 550 ] + xx [ 226 ] * xx [
554 ] ) ; xx [ 534 ] = xx [ 535 ] - ( xx [ 235 ] * xx [ 551 ] + xx [ 236 ] *
xx [ 552 ] - xx [ 243 ] * xx [ 553 ] ) ; xx [ 535 ] = xx [ 157 ] * xx [ 522 ]
+ xx [ 289 ] * xx [ 526 ] + xx [ 107 ] * xx [ 540 ] + xx [ 37 ] * xx [ 542 ]
+ xx [ 133 ] * xx [ 539 ] + xx [ 162 ] * xx [ 533 ] + xx [ 38 ] * xx [ 534 ]
; xx [ 494 ] = xx [ 496 ] + xx [ 149 ] ; xx [ 495 ] = ( xx [ 76 ] * xx [ 490
] + xx [ 77 ] * xx [ 489 ] ) * xx [ 20 ] - xx [ 488 ] + xx [ 137 ] ; xx [ 488
] = ( xx [ 76 ] * xx [ 502 ] + xx [ 77 ] * xx [ 500 ] ) * xx [ 20 ] - xx [
497 ] + xx [ 169 ] ; xx [ 489 ] = ( xx [ 75 ] * xx [ 505 ] + xx [ 511 ] ) *
xx [ 20 ] + xx [ 172 ] ; xx [ 509 ] = xx [ 495 ] ; xx [ 510 ] = xx [ 488 ] ;
xx [ 511 ] = xx [ 489 ] ; solveSymmetricPosDef ( xx + 121 , xx + 509 , 3 , 1
, xx + 543 , xx + 549 ) ; xx [ 509 ] = xx [ 48 ] * xx [ 543 ] + xx [ 80 ] *
xx [ 544 ] ; xx [ 510 ] = xx [ 85 ] * xx [ 544 ] - xx [ 86 ] * xx [ 543 ] ;
xx [ 511 ] = xx [ 56 ] * xx [ 545 ] ; pm_math_Quaternion_xform_ra ( xx + 41 ,
xx + 509 , xx + 549 ) ; xx [ 509 ] = xx [ 87 ] * xx [ 545 ] ; xx [ 510 ] = -
( xx [ 88 ] * xx [ 545 ] ) ; xx [ 511 ] = xx [ 90 ] * xx [ 544 ] - xx [ 163 ]
* xx [ 543 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 509 , xx + 552 )
; pm_math_Vector3_cross_ra ( xx + 95 , xx + 552 , xx + 509 ) ; xx [ 490 ] =
xx [ 549 ] + xx [ 509 ] ; xx [ 496 ] = xx [ 529 ] + xx [ 285 ] ; xx [ 497 ] =
xx [ 532 ] + xx [ 93 ] ; xx [ 500 ] = xx [ 550 ] + xx [ 510 ] ; xx [ 502 ] =
xx [ 538 ] + xx [ 293 ] ; xx [ 505 ] = xx [ 551 ] + xx [ 511 ] ; xx [ 509 ] =
xx [ 496 ] - xx [ 490 ] ; xx [ 510 ] = xx [ 497 ] - ( xx [ 500 ] - xx [ 79 ]
* xx [ 554 ] ) ; xx [ 511 ] = xx [ 502 ] - ( xx [ 505 ] + xx [ 79 ] * xx [
553 ] ) ; solveSymmetricPosDef ( xx + 274 , xx + 509 , 3 , 1 , xx + 527 , xx
+ 530 ) ; xx [ 509 ] = xx [ 490 ] + xx [ 166 ] * xx [ 527 ] + xx [ 224 ] * xx
[ 528 ] + xx [ 237 ] * xx [ 529 ] ; xx [ 510 ] = xx [ 500 ] + xx [ 527 ] * xx
[ 94 ] + xx [ 241 ] * xx [ 528 ] + xx [ 238 ] * xx [ 529 ] ; xx [ 511 ] = xx
[ 505 ] + xx [ 527 ] * xx [ 101 ] + xx [ 104 ] * xx [ 528 ] + xx [ 221 ] * xx
[ 529 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 509 , xx + 530 ) ; xx [
509 ] = xx [ 552 ] + xx [ 527 ] * xx [ 89 ] + xx [ 165 ] * xx [ 528 ] + xx [
180 ] * xx [ 529 ] ; xx [ 510 ] = xx [ 553 ] + xx [ 527 ] * xx [ 245 ] + xx [
181 ] * xx [ 528 ] + xx [ 250 ] * xx [ 529 ] ; xx [ 511 ] = xx [ 554 ] + xx [
527 ] * xx [ 223 ] + xx [ 260 ] * xx [ 528 ] + xx [ 242 ] * xx [ 529 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 509 , xx + 536 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 536 , xx + 509 ) ; xx [ 490 ] = (
xx [ 494 ] - ( ( xx [ 532 ] + xx [ 511 ] ) * xx [ 12 ] - ( xx [ 530 ] + xx [
509 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 537 ] ) ) / xx [ 231 ] ; xx [ 500 ] =
xx [ 12 ] * xx [ 490 ] ; xx [ 505 ] = xx [ 5 ] * xx [ 500 ] ; xx [ 509 ] = xx
[ 4 ] * xx [ 490 ] ; xx [ 510 ] = xx [ 3 ] * xx [ 500 ] - xx [ 509 ] * xx [ 7
] ; xx [ 511 ] = xx [ 5 ] * xx [ 509 ] ; xx [ 530 ] = - xx [ 505 ] ; xx [ 531
] = xx [ 510 ] ; xx [ 532 ] = - xx [ 511 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 530 , xx + 536 ) ; xx [ 530 ] = ( xx [ 505 ] * xx [ 2 ] + xx [ 536
] ) * xx [ 20 ] - xx [ 509 ] ; xx [ 505 ] = xx [ 20 ] * ( xx [ 537 ] - xx [
510 ] * xx [ 2 ] ) ; xx [ 510 ] = xx [ 500 ] + xx [ 20 ] * ( xx [ 538 ] + xx
[ 511 ] * xx [ 2 ] ) ; xx [ 536 ] = xx [ 530 ] ; xx [ 537 ] = xx [ 505 ] ; xx
[ 538 ] = xx [ 510 ] ; xx [ 549 ] = - ( xx [ 105 ] * xx [ 500 ] ) ; xx [ 550
] = xx [ 134 ] * xx [ 490 ] + xx [ 103 ] * xx [ 500 ] + xx [ 108 ] * xx [ 509
] ; xx [ 551 ] = - ( xx [ 105 ] * xx [ 509 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 549 , xx + 552 ) ; xx [
500 ] = xx [ 527 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 536 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 552 ) ) ; xx [ 509 ] = xx [ 528 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 536 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 552 ) ) ; xx [ 511 ] = xx [ 529 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 536 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 552 ) ) ;
xx [ 527 ] = xx [ 530 ] + xx [ 500 ] ; xx [ 528 ] = xx [ 505 ] + xx [ 509 ] ;
xx [ 529 ] = xx [ 510 ] + xx [ 511 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 527 , xx + 530 ) ; pm_math_Vector3_cross_ra ( xx + 527 , xx +
95 , xx + 536 ) ; xx [ 527 ] = xx [ 552 ] + xx [ 536 ] ; xx [ 528 ] = xx [
553 ] + xx [ 79 ] * xx [ 511 ] + xx [ 537 ] ; xx [ 529 ] = xx [ 554 ] - xx [
79 ] * xx [ 509 ] + xx [ 538 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 527 , xx + 536 ) ; xx [ 505 ] = xx [ 543 ] - ( xx [ 184 ] * xx [ 530 ]
+ xx [ 214 ] * xx [ 531 ] - xx [ 216 ] * xx [ 538 ] ) ; xx [ 510 ] = xx [ 544
] - ( xx [ 218 ] * xx [ 530 ] + xx [ 220 ] * xx [ 531 ] + xx [ 226 ] * xx [
538 ] ) ; xx [ 527 ] = xx [ 545 ] - ( xx [ 235 ] * xx [ 532 ] + xx [ 236 ] *
xx [ 536 ] - xx [ 243 ] * xx [ 537 ] ) ; xx [ 528 ] = xx [ 157 ] * xx [ 490 ]
+ xx [ 289 ] * xx [ 500 ] + xx [ 107 ] * xx [ 509 ] + xx [ 37 ] * xx [ 511 ]
+ xx [ 133 ] * xx [ 505 ] + xx [ 162 ] * xx [ 510 ] + xx [ 38 ] * xx [ 527 ]
; xx [ 529 ] = 0.0640968609353203 ; xx [ 530 ] = 0.03766319432662211 ; xx [
531 ] = 0.07532638865324422 ; xx [ 536 ] = - ( xx [ 139 ] * xx [ 529 ] ) ; xx
[ 537 ] = xx [ 139 ] * xx [ 530 ] ; xx [ 538 ] = xx [ 147 ] * xx [ 529 ] - xx
[ 531 ] * xx [ 148 ] ; pm_math_Quaternion_xform_ra ( xx + 142 , xx + 536 , xx
+ 543 ) ; xx [ 532 ] = xx [ 543 ] + xx [ 156 ] ; xx [ 536 ] =
0.07200961894323345 ; xx [ 537 ] = xx [ 536 ] * xx [ 77 ] ; xx [ 538 ] = xx [
536 ] * xx [ 76 ] ; xx [ 541 ] = ( xx [ 75 ] * xx [ 537 ] + xx [ 78 ] * xx [
538 ] ) * xx [ 20 ] + xx [ 135 ] ; xx [ 546 ] = 0.01848076211353319 ; xx [
547 ] = xx [ 546 ] * xx [ 77 ] ; xx [ 549 ] = xx [ 546 ] * xx [ 76 ] ; xx [
550 ] = xx [ 167 ] - ( xx [ 75 ] * xx [ 547 ] + xx [ 78 ] * xx [ 549 ] ) * xx
[ 20 ] ; xx [ 551 ] = xx [ 530 ] * xx [ 78 ] ; xx [ 552 ] = xx [ 530 ] * xx [
76 ] + xx [ 529 ] * xx [ 77 ] ; xx [ 553 ] = - xx [ 551 ] ; xx [ 554 ] = - (
xx [ 529 ] * xx [ 78 ] ) ; xx [ 555 ] = xx [ 552 ] ; pm_math_Vector3_cross_ra
( xx + 76 , xx + 553 , xx + 556 ) ; xx [ 553 ] = xx [ 20 ] * ( xx [ 556 ] -
xx [ 75 ] * xx [ 551 ] ) - xx [ 529 ] + xx [ 170 ] ; xx [ 559 ] = xx [ 541 ]
; xx [ 560 ] = xx [ 550 ] ; xx [ 561 ] = xx [ 553 ] ; solveSymmetricPosDef (
xx + 121 , xx + 559 , 3 , 1 , xx + 562 , xx + 565 ) ; xx [ 559 ] = xx [ 48 ]
* xx [ 562 ] + xx [ 80 ] * xx [ 563 ] ; xx [ 560 ] = xx [ 85 ] * xx [ 563 ] -
xx [ 86 ] * xx [ 562 ] ; xx [ 561 ] = xx [ 56 ] * xx [ 564 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 559 , xx + 565 ) ; xx [ 559 ] =
xx [ 87 ] * xx [ 564 ] ; xx [ 560 ] = - ( xx [ 88 ] * xx [ 564 ] ) ; xx [ 561
] = xx [ 90 ] * xx [ 563 ] - xx [ 163 ] * xx [ 562 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 559 , xx + 568 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 568 , xx + 559 ) ; xx [ 551 ] = xx
[ 565 ] + xx [ 559 ] ; xx [ 571 ] = - ( xx [ 529 ] * xx [ 201 ] ) ; xx [ 572
] = xx [ 530 ] * xx [ 201 ] ; xx [ 573 ] = xx [ 529 ] * xx [ 251 ] - xx [ 256
] * xx [ 531 ] ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 571 , xx + 574
) ; xx [ 554 ] = xx [ 574 ] + xx [ 283 ] ; xx [ 555 ] = 0.1281937218706406 ;
xx [ 571 ] = - ( xx [ 529 ] * xx [ 290 ] ) ; xx [ 572 ] = xx [ 530 ] * xx [
290 ] ; xx [ 573 ] = xx [ 555 ] * xx [ 192 ] - xx [ 530 ] * xx [ 200 ] ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 571 , xx + 577 ) ; xx [ 571 ] =
xx [ 577 ] + xx [ 91 ] ; xx [ 572 ] = xx [ 566 ] + xx [ 560 ] ; xx [ 580 ] =
- ( xx [ 529 ] * xx [ 203 ] ) ; xx [ 581 ] = xx [ 530 ] * xx [ 203 ] ; xx [
582 ] = xx [ 188 ] * xx [ 555 ] - xx [ 531 ] * xx [ 31 ] ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 580 , xx + 583 ) ; xx [ 531 ] =
xx [ 583 ] + xx [ 291 ] ; xx [ 555 ] = xx [ 567 ] + xx [ 561 ] ; xx [ 559 ] =
xx [ 554 ] - xx [ 551 ] ; xx [ 560 ] = xx [ 571 ] - ( xx [ 572 ] - xx [ 79 ]
* xx [ 570 ] ) ; xx [ 561 ] = xx [ 531 ] - ( xx [ 555 ] + xx [ 79 ] * xx [
569 ] ) ; solveSymmetricPosDef ( xx + 274 , xx + 559 , 3 , 1 , xx + 565 , xx
+ 580 ) ; xx [ 559 ] = xx [ 551 ] + xx [ 166 ] * xx [ 565 ] + xx [ 224 ] * xx
[ 566 ] + xx [ 237 ] * xx [ 567 ] ; xx [ 560 ] = xx [ 572 ] + xx [ 565 ] * xx
[ 94 ] + xx [ 241 ] * xx [ 566 ] + xx [ 238 ] * xx [ 567 ] ; xx [ 561 ] = xx
[ 555 ] + xx [ 565 ] * xx [ 101 ] + xx [ 104 ] * xx [ 566 ] + xx [ 221 ] * xx
[ 567 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 559 , xx + 580 ) ; xx [
559 ] = xx [ 568 ] + xx [ 565 ] * xx [ 89 ] + xx [ 165 ] * xx [ 566 ] + xx [
180 ] * xx [ 567 ] ; xx [ 560 ] = xx [ 569 ] + xx [ 565 ] * xx [ 245 ] + xx [
181 ] * xx [ 566 ] + xx [ 250 ] * xx [ 567 ] ; xx [ 561 ] = xx [ 570 ] + xx [
565 ] * xx [ 223 ] + xx [ 260 ] * xx [ 566 ] + xx [ 242 ] * xx [ 567 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 559 , xx + 568 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 568 , xx + 559 ) ; xx [ 551 ] = (
xx [ 532 ] - ( ( xx [ 582 ] + xx [ 561 ] ) * xx [ 12 ] - ( xx [ 580 ] + xx [
559 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 569 ] ) ) / xx [ 231 ] ; xx [ 555 ] =
xx [ 12 ] * xx [ 551 ] ; xx [ 559 ] = xx [ 5 ] * xx [ 555 ] ; xx [ 560 ] = xx
[ 4 ] * xx [ 551 ] ; xx [ 561 ] = xx [ 3 ] * xx [ 555 ] - xx [ 560 ] * xx [ 7
] ; xx [ 568 ] = xx [ 5 ] * xx [ 560 ] ; xx [ 580 ] = - xx [ 559 ] ; xx [ 581
] = xx [ 561 ] ; xx [ 582 ] = - xx [ 568 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 580 , xx + 586 ) ; xx [ 569 ] = ( xx [ 559 ] * xx [ 2 ] + xx [ 586
] ) * xx [ 20 ] - xx [ 560 ] ; xx [ 559 ] = xx [ 20 ] * ( xx [ 587 ] - xx [
561 ] * xx [ 2 ] ) ; xx [ 561 ] = xx [ 555 ] + xx [ 20 ] * ( xx [ 588 ] + xx
[ 568 ] * xx [ 2 ] ) ; xx [ 580 ] = xx [ 569 ] ; xx [ 581 ] = xx [ 559 ] ; xx
[ 582 ] = xx [ 561 ] ; xx [ 586 ] = - ( xx [ 105 ] * xx [ 555 ] ) ; xx [ 587
] = xx [ 134 ] * xx [ 551 ] + xx [ 103 ] * xx [ 555 ] + xx [ 108 ] * xx [ 560
] ; xx [ 588 ] = - ( xx [ 105 ] * xx [ 560 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 586 , xx + 589 ) ; xx [
555 ] = xx [ 565 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 580 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 589 ) ) ; xx [ 560 ] = xx [ 566 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 580 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 589 ) ) ; xx [ 565 ] = xx [ 567 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 580 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 589 ) ) ;
xx [ 566 ] = xx [ 569 ] + xx [ 555 ] ; xx [ 567 ] = xx [ 559 ] + xx [ 560 ] ;
xx [ 568 ] = xx [ 561 ] + xx [ 565 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 566 , xx + 580 ) ; pm_math_Vector3_cross_ra ( xx + 566 , xx +
95 , xx + 586 ) ; xx [ 566 ] = xx [ 589 ] + xx [ 586 ] ; xx [ 567 ] = xx [
590 ] + xx [ 79 ] * xx [ 565 ] + xx [ 587 ] ; xx [ 568 ] = xx [ 591 ] - xx [
79 ] * xx [ 560 ] + xx [ 588 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 566 , xx + 586 ) ; xx [ 559 ] = xx [ 562 ] - ( xx [ 184 ] * xx [ 580 ]
+ xx [ 214 ] * xx [ 581 ] - xx [ 216 ] * xx [ 588 ] ) ; xx [ 561 ] = xx [ 563
] - ( xx [ 218 ] * xx [ 580 ] + xx [ 220 ] * xx [ 581 ] + xx [ 226 ] * xx [
588 ] ) ; xx [ 562 ] = xx [ 564 ] - ( xx [ 235 ] * xx [ 582 ] + xx [ 236 ] *
xx [ 586 ] - xx [ 243 ] * xx [ 587 ] ) ; xx [ 563 ] = xx [ 157 ] * xx [ 551 ]
+ xx [ 289 ] * xx [ 555 ] + xx [ 107 ] * xx [ 560 ] + xx [ 37 ] * xx [ 565 ]
+ xx [ 133 ] * xx [ 559 ] + xx [ 162 ] * xx [ 561 ] + xx [ 38 ] * xx [ 562 ]
; xx [ 564 ] = xx [ 544 ] + xx [ 414 ] + xx [ 134 ] ; xx [ 566 ] = xx [ 20 ]
* ( xx [ 78 ] * xx [ 537 ] - xx [ 75 ] * xx [ 538 ] ) + xx [ 136 ] ; xx [ 567
] = xx [ 20 ] * ( xx [ 75 ] * xx [ 549 ] - xx [ 78 ] * xx [ 547 ] ) + xx [
168 ] ; xx [ 568 ] = xx [ 530 ] + ( xx [ 557 ] - xx [ 529 ] * xx [ 64 ] ) *
xx [ 20 ] + xx [ 171 ] ; solveSymmetricPosDef ( xx + 121 , xx + 566 , 3 , 1 ,
xx + 580 , xx + 586 ) ; xx [ 586 ] = xx [ 48 ] * xx [ 580 ] + xx [ 80 ] * xx
[ 581 ] ; xx [ 587 ] = xx [ 85 ] * xx [ 581 ] - xx [ 86 ] * xx [ 580 ] ; xx [
588 ] = xx [ 56 ] * xx [ 582 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
586 , xx + 589 ) ; xx [ 586 ] = xx [ 87 ] * xx [ 582 ] ; xx [ 587 ] = - ( xx
[ 88 ] * xx [ 582 ] ) ; xx [ 588 ] = xx [ 90 ] * xx [ 581 ] - xx [ 163 ] * xx
[ 580 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 586 , xx + 592 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 592 , xx + 586 ) ; xx [ 569 ] = xx
[ 589 ] + xx [ 586 ] ; xx [ 570 ] = xx [ 575 ] + xx [ 284 ] ; xx [ 572 ] = xx
[ 578 ] + xx [ 92 ] ; xx [ 573 ] = xx [ 590 ] + xx [ 587 ] ; xx [ 595 ] = xx
[ 584 ] + xx [ 292 ] ; xx [ 586 ] = xx [ 591 ] + xx [ 588 ] ; xx [ 587 ] = xx
[ 570 ] - xx [ 569 ] ; xx [ 588 ] = xx [ 572 ] - ( xx [ 573 ] - xx [ 79 ] *
xx [ 594 ] ) ; xx [ 589 ] = xx [ 595 ] - ( xx [ 586 ] + xx [ 79 ] * xx [ 593
] ) ; solveSymmetricPosDef ( xx + 274 , xx + 587 , 3 , 1 , xx + 596 , xx +
599 ) ; xx [ 587 ] = xx [ 569 ] + xx [ 166 ] * xx [ 596 ] + xx [ 224 ] * xx [
597 ] + xx [ 237 ] * xx [ 598 ] ; xx [ 588 ] = xx [ 573 ] + xx [ 596 ] * xx [
94 ] + xx [ 241 ] * xx [ 597 ] + xx [ 238 ] * xx [ 598 ] ; xx [ 589 ] = xx [
586 ] + xx [ 596 ] * xx [ 101 ] + xx [ 104 ] * xx [ 597 ] + xx [ 221 ] * xx [
598 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 587 , xx + 599 ) ; xx [
586 ] = xx [ 592 ] + xx [ 596 ] * xx [ 89 ] + xx [ 165 ] * xx [ 597 ] + xx [
180 ] * xx [ 598 ] ; xx [ 587 ] = xx [ 593 ] + xx [ 596 ] * xx [ 245 ] + xx [
181 ] * xx [ 597 ] + xx [ 250 ] * xx [ 598 ] ; xx [ 588 ] = xx [ 594 ] + xx [
596 ] * xx [ 223 ] + xx [ 260 ] * xx [ 597 ] + xx [ 242 ] * xx [ 598 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 586 , xx + 589 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 589 , xx + 586 ) ; xx [ 569 ] = (
xx [ 564 ] - ( ( xx [ 601 ] + xx [ 588 ] ) * xx [ 12 ] - ( xx [ 599 ] + xx [
586 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 590 ] ) ) / xx [ 231 ] ; xx [ 573 ] =
xx [ 12 ] * xx [ 569 ] ; xx [ 586 ] = xx [ 5 ] * xx [ 573 ] ; xx [ 587 ] = xx
[ 4 ] * xx [ 569 ] ; xx [ 588 ] = xx [ 3 ] * xx [ 573 ] - xx [ 587 ] * xx [ 7
] ; xx [ 589 ] = xx [ 5 ] * xx [ 587 ] ; xx [ 590 ] = - xx [ 586 ] ; xx [ 591
] = xx [ 588 ] ; xx [ 592 ] = - xx [ 589 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 590 , xx + 599 ) ; xx [ 590 ] = ( xx [ 586 ] * xx [ 2 ] + xx [ 599
] ) * xx [ 20 ] - xx [ 587 ] ; xx [ 586 ] = xx [ 20 ] * ( xx [ 600 ] - xx [
588 ] * xx [ 2 ] ) ; xx [ 588 ] = xx [ 573 ] + xx [ 20 ] * ( xx [ 601 ] + xx
[ 589 ] * xx [ 2 ] ) ; xx [ 591 ] = xx [ 590 ] ; xx [ 592 ] = xx [ 586 ] ; xx
[ 593 ] = xx [ 588 ] ; xx [ 599 ] = - ( xx [ 105 ] * xx [ 573 ] ) ; xx [ 600
] = xx [ 134 ] * xx [ 569 ] + xx [ 103 ] * xx [ 573 ] + xx [ 108 ] * xx [ 587
] ; xx [ 601 ] = - ( xx [ 105 ] * xx [ 587 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 599 , xx + 602 ) ; xx [
573 ] = xx [ 596 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 591 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 602 ) ) ; xx [ 587 ] = xx [ 597 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 591 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 602 ) ) ; xx [ 589 ] = xx [ 598 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 591 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 602 ) ) ;
xx [ 591 ] = xx [ 590 ] + xx [ 573 ] ; xx [ 592 ] = xx [ 586 ] + xx [ 587 ] ;
xx [ 593 ] = xx [ 588 ] + xx [ 589 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 591 , xx + 596 ) ; pm_math_Vector3_cross_ra ( xx + 591 , xx +
95 , xx + 599 ) ; xx [ 590 ] = xx [ 602 ] + xx [ 599 ] ; xx [ 591 ] = xx [
603 ] + xx [ 79 ] * xx [ 589 ] + xx [ 600 ] ; xx [ 592 ] = xx [ 604 ] - xx [
79 ] * xx [ 587 ] + xx [ 601 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 590 , xx + 599 ) ; xx [ 586 ] = xx [ 580 ] - ( xx [ 184 ] * xx [ 596 ]
+ xx [ 214 ] * xx [ 597 ] - xx [ 216 ] * xx [ 601 ] ) ; xx [ 580 ] = xx [ 581
] - ( xx [ 218 ] * xx [ 596 ] + xx [ 220 ] * xx [ 597 ] + xx [ 226 ] * xx [
601 ] ) ; xx [ 581 ] = xx [ 582 ] - ( xx [ 235 ] * xx [ 598 ] + xx [ 236 ] *
xx [ 599 ] - xx [ 243 ] * xx [ 600 ] ) ; xx [ 582 ] = xx [ 157 ] * xx [ 569 ]
+ xx [ 289 ] * xx [ 573 ] + xx [ 107 ] * xx [ 587 ] + xx [ 37 ] * xx [ 589 ]
+ xx [ 133 ] * xx [ 586 ] + xx [ 162 ] * xx [ 580 ] + xx [ 38 ] * xx [ 581 ]
; xx [ 543 ] = xx [ 545 ] + xx [ 149 ] ; xx [ 544 ] = xx [ 536 ] - ( xx [ 76
] * xx [ 538 ] + xx [ 77 ] * xx [ 537 ] ) * xx [ 20 ] + xx [ 137 ] ; xx [ 536
] = ( xx [ 76 ] * xx [ 549 ] + xx [ 77 ] * xx [ 547 ] ) * xx [ 20 ] - xx [
546 ] + xx [ 169 ] ; xx [ 537 ] = ( xx [ 75 ] * xx [ 552 ] + xx [ 558 ] ) *
xx [ 20 ] + xx [ 172 ] ; xx [ 545 ] = xx [ 544 ] ; xx [ 546 ] = xx [ 536 ] ;
xx [ 547 ] = xx [ 537 ] ; solveSymmetricPosDef ( xx + 121 , xx + 545 , 3 , 1
, xx + 556 , xx + 590 ) ; xx [ 545 ] = xx [ 48 ] * xx [ 556 ] + xx [ 80 ] *
xx [ 557 ] ; xx [ 546 ] = xx [ 85 ] * xx [ 557 ] - xx [ 86 ] * xx [ 556 ] ;
xx [ 547 ] = xx [ 56 ] * xx [ 558 ] ; pm_math_Quaternion_xform_ra ( xx + 41 ,
xx + 545 , xx + 590 ) ; xx [ 545 ] = xx [ 87 ] * xx [ 558 ] ; xx [ 546 ] = -
( xx [ 88 ] * xx [ 558 ] ) ; xx [ 547 ] = xx [ 90 ] * xx [ 557 ] - xx [ 163 ]
* xx [ 556 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 545 , xx + 596 )
; pm_math_Vector3_cross_ra ( xx + 95 , xx + 596 , xx + 545 ) ; xx [ 538 ] =
xx [ 590 ] + xx [ 545 ] ; xx [ 549 ] = xx [ 576 ] + xx [ 285 ] ; xx [ 552 ] =
xx [ 579 ] + xx [ 93 ] ; xx [ 574 ] = xx [ 591 ] + xx [ 546 ] ; xx [ 575 ] =
xx [ 585 ] + xx [ 293 ] ; xx [ 545 ] = xx [ 592 ] + xx [ 547 ] ; xx [ 576 ] =
xx [ 549 ] - xx [ 538 ] ; xx [ 577 ] = xx [ 552 ] - ( xx [ 574 ] - xx [ 79 ]
* xx [ 598 ] ) ; xx [ 578 ] = xx [ 575 ] - ( xx [ 545 ] + xx [ 79 ] * xx [
597 ] ) ; solveSymmetricPosDef ( xx + 274 , xx + 576 , 3 , 1 , xx + 583 , xx
+ 590 ) ; xx [ 576 ] = xx [ 538 ] + xx [ 166 ] * xx [ 583 ] + xx [ 224 ] * xx
[ 584 ] + xx [ 237 ] * xx [ 585 ] ; xx [ 577 ] = xx [ 574 ] + xx [ 583 ] * xx
[ 94 ] + xx [ 241 ] * xx [ 584 ] + xx [ 238 ] * xx [ 585 ] ; xx [ 578 ] = xx
[ 545 ] + xx [ 583 ] * xx [ 101 ] + xx [ 104 ] * xx [ 584 ] + xx [ 221 ] * xx
[ 585 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 576 , xx + 545 ) ; xx [
576 ] = xx [ 596 ] + xx [ 583 ] * xx [ 89 ] + xx [ 165 ] * xx [ 584 ] + xx [
180 ] * xx [ 585 ] ; xx [ 577 ] = xx [ 597 ] + xx [ 583 ] * xx [ 245 ] + xx [
181 ] * xx [ 584 ] + xx [ 250 ] * xx [ 585 ] ; xx [ 578 ] = xx [ 598 ] + xx [
583 ] * xx [ 223 ] + xx [ 260 ] * xx [ 584 ] + xx [ 242 ] * xx [ 585 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 576 , xx + 590 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 590 , xx + 576 ) ; xx [ 538 ] = (
xx [ 543 ] - ( ( xx [ 547 ] + xx [ 578 ] ) * xx [ 12 ] - ( xx [ 545 ] + xx [
576 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 591 ] ) ) / xx [ 231 ] ; xx [ 545 ] =
xx [ 12 ] * xx [ 538 ] ; xx [ 546 ] = xx [ 5 ] * xx [ 545 ] ; xx [ 547 ] = xx
[ 4 ] * xx [ 538 ] ; xx [ 574 ] = xx [ 3 ] * xx [ 545 ] - xx [ 547 ] * xx [ 7
] ; xx [ 576 ] = xx [ 5 ] * xx [ 547 ] ; xx [ 577 ] = - xx [ 546 ] ; xx [ 578
] = xx [ 574 ] ; xx [ 579 ] = - xx [ 576 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 577 , xx + 590 ) ; xx [ 577 ] = ( xx [ 546 ] * xx [ 2 ] + xx [ 590
] ) * xx [ 20 ] - xx [ 547 ] ; xx [ 546 ] = xx [ 20 ] * ( xx [ 591 ] - xx [
574 ] * xx [ 2 ] ) ; xx [ 574 ] = xx [ 545 ] + xx [ 20 ] * ( xx [ 592 ] + xx
[ 576 ] * xx [ 2 ] ) ; xx [ 590 ] = xx [ 577 ] ; xx [ 591 ] = xx [ 546 ] ; xx
[ 592 ] = xx [ 574 ] ; xx [ 596 ] = - ( xx [ 105 ] * xx [ 545 ] ) ; xx [ 597
] = xx [ 134 ] * xx [ 538 ] + xx [ 103 ] * xx [ 545 ] + xx [ 108 ] * xx [ 547
] ; xx [ 598 ] = - ( xx [ 105 ] * xx [ 547 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 596 , xx + 599 ) ; xx [
545 ] = xx [ 583 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 590 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 599 ) ) ; xx [ 547 ] = xx [ 584 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 590 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 599 ) ) ; xx [ 576 ] = xx [ 585 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 590 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 599 ) ) ;
xx [ 583 ] = xx [ 577 ] + xx [ 545 ] ; xx [ 584 ] = xx [ 546 ] + xx [ 547 ] ;
xx [ 585 ] = xx [ 574 ] + xx [ 576 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 583 , xx + 577 ) ; pm_math_Vector3_cross_ra ( xx + 583 , xx +
95 , xx + 590 ) ; xx [ 583 ] = xx [ 599 ] + xx [ 590 ] ; xx [ 584 ] = xx [
600 ] + xx [ 79 ] * xx [ 576 ] + xx [ 591 ] ; xx [ 585 ] = xx [ 601 ] - xx [
79 ] * xx [ 547 ] + xx [ 592 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 583 , xx + 590 ) ; xx [ 546 ] = xx [ 556 ] - ( xx [ 184 ] * xx [ 577 ]
+ xx [ 214 ] * xx [ 578 ] - xx [ 216 ] * xx [ 592 ] ) ; xx [ 556 ] = xx [ 557
] - ( xx [ 218 ] * xx [ 577 ] + xx [ 220 ] * xx [ 578 ] + xx [ 226 ] * xx [
592 ] ) ; xx [ 557 ] = xx [ 558 ] - ( xx [ 235 ] * xx [ 579 ] + xx [ 236 ] *
xx [ 590 ] - xx [ 243 ] * xx [ 591 ] ) ; xx [ 558 ] = xx [ 157 ] * xx [ 538 ]
+ xx [ 289 ] * xx [ 545 ] + xx [ 107 ] * xx [ 547 ] + xx [ 37 ] * xx [ 576 ]
+ xx [ 133 ] * xx [ 546 ] + xx [ 162 ] * xx [ 556 ] + xx [ 38 ] * xx [ 557 ]
; xx [ 574 ] = 0.03901074375149718 ; xx [ 577 ] = 0.06328574610922835 ; xx [
578 ] = 0.1265714922184567 ; xx [ 583 ] = - ( xx [ 139 ] * xx [ 574 ] ) ; xx
[ 584 ] = - ( xx [ 139 ] * xx [ 577 ] ) ; xx [ 585 ] = xx [ 147 ] * xx [ 574
] + xx [ 578 ] * xx [ 148 ] ; pm_math_Quaternion_xform_ra ( xx + 142 , xx +
583 , xx + 590 ) ; xx [ 139 ] = xx [ 590 ] + xx [ 156 ] ; xx [ 142 ] =
0.02000000000000002 ; xx [ 143 ] = xx [ 142 ] * xx [ 77 ] ; xx [ 144 ] = xx [
142 ] * xx [ 76 ] ; xx [ 145 ] = ( xx [ 75 ] * xx [ 143 ] + xx [ 78 ] * xx [
144 ] ) * xx [ 20 ] + xx [ 135 ] ; xx [ 135 ] = 0.07160254037844389 ; xx [
147 ] = xx [ 135 ] * xx [ 77 ] ; xx [ 148 ] = xx [ 135 ] * xx [ 76 ] ; xx [
156 ] = ( xx [ 75 ] * xx [ 147 ] + xx [ 78 ] * xx [ 148 ] ) * xx [ 20 ] + xx
[ 167 ] ; xx [ 167 ] = xx [ 577 ] * xx [ 78 ] ; xx [ 579 ] = xx [ 574 ] * xx
[ 77 ] - xx [ 577 ] * xx [ 76 ] ; xx [ 583 ] = xx [ 167 ] ; xx [ 584 ] = - (
xx [ 574 ] * xx [ 78 ] ) ; xx [ 585 ] = xx [ 579 ] ; pm_math_Vector3_cross_ra
( xx + 76 , xx + 583 , xx + 596 ) ; xx [ 583 ] = xx [ 20 ] * ( xx [ 596 ] +
xx [ 75 ] * xx [ 167 ] ) - xx [ 574 ] + xx [ 170 ] ; xx [ 599 ] = xx [ 145 ]
; xx [ 600 ] = xx [ 156 ] ; xx [ 601 ] = xx [ 583 ] ; solveSymmetricPosDef (
xx + 121 , xx + 599 , 3 , 1 , xx + 602 , xx + 605 ) ; xx [ 599 ] = xx [ 48 ]
* xx [ 602 ] + xx [ 80 ] * xx [ 603 ] ; xx [ 600 ] = xx [ 85 ] * xx [ 603 ] -
xx [ 86 ] * xx [ 602 ] ; xx [ 601 ] = xx [ 56 ] * xx [ 604 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 599 , xx + 605 ) ; xx [ 599 ] =
xx [ 87 ] * xx [ 604 ] ; xx [ 600 ] = - ( xx [ 88 ] * xx [ 604 ] ) ; xx [ 601
] = xx [ 90 ] * xx [ 603 ] - xx [ 163 ] * xx [ 602 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 599 , xx + 608 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 608 , xx + 599 ) ; xx [ 167 ] = xx
[ 605 ] + xx [ 599 ] ; xx [ 611 ] = - ( xx [ 574 ] * xx [ 201 ] ) ; xx [ 612
] = - ( xx [ 577 ] * xx [ 201 ] ) ; xx [ 613 ] = xx [ 574 ] * xx [ 251 ] + xx
[ 256 ] * xx [ 578 ] ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 611 , xx
+ 614 ) ; xx [ 170 ] = xx [ 614 ] + xx [ 283 ] ; xx [ 251 ] =
0.07802148750299437 ; xx [ 611 ] = - ( xx [ 574 ] * xx [ 290 ] ) ; xx [ 612 ]
= - ( xx [ 577 ] * xx [ 290 ] ) ; xx [ 613 ] = xx [ 251 ] * xx [ 192 ] + xx [
577 ] * xx [ 200 ] ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 611 , xx +
617 ) ; xx [ 192 ] = xx [ 617 ] + xx [ 91 ] ; xx [ 91 ] = xx [ 606 ] + xx [
600 ] ; xx [ 611 ] = - ( xx [ 574 ] * xx [ 203 ] ) ; xx [ 612 ] = - ( xx [
577 ] * xx [ 203 ] ) ; xx [ 613 ] = xx [ 188 ] * xx [ 251 ] + xx [ 578 ] * xx
[ 31 ] ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 611 , xx + 620 ) ; xx [
31 ] = xx [ 620 ] + xx [ 291 ] ; xx [ 188 ] = xx [ 607 ] + xx [ 601 ] ; xx [
599 ] = xx [ 170 ] - xx [ 167 ] ; xx [ 600 ] = xx [ 192 ] - ( xx [ 91 ] - xx
[ 79 ] * xx [ 610 ] ) ; xx [ 601 ] = xx [ 31 ] - ( xx [ 188 ] + xx [ 79 ] *
xx [ 609 ] ) ; solveSymmetricPosDef ( xx + 274 , xx + 599 , 3 , 1 , xx + 605
, xx + 611 ) ; xx [ 599 ] = xx [ 167 ] + xx [ 166 ] * xx [ 605 ] + xx [ 224 ]
* xx [ 606 ] + xx [ 237 ] * xx [ 607 ] ; xx [ 600 ] = xx [ 91 ] + xx [ 605 ]
* xx [ 94 ] + xx [ 241 ] * xx [ 606 ] + xx [ 238 ] * xx [ 607 ] ; xx [ 601 ]
= xx [ 188 ] + xx [ 605 ] * xx [ 101 ] + xx [ 104 ] * xx [ 606 ] + xx [ 221 ]
* xx [ 607 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 599 , xx + 611 ) ;
xx [ 599 ] = xx [ 608 ] + xx [ 605 ] * xx [ 89 ] + xx [ 165 ] * xx [ 606 ] +
xx [ 180 ] * xx [ 607 ] ; xx [ 600 ] = xx [ 609 ] + xx [ 605 ] * xx [ 245 ] +
xx [ 181 ] * xx [ 606 ] + xx [ 250 ] * xx [ 607 ] ; xx [ 601 ] = xx [ 610 ] +
xx [ 605 ] * xx [ 223 ] + xx [ 260 ] * xx [ 606 ] + xx [ 242 ] * xx [ 607 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 599 , xx + 608 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 608 , xx + 599 ) ; xx [ 91 ] = (
xx [ 139 ] - ( ( xx [ 613 ] + xx [ 601 ] ) * xx [ 12 ] - ( xx [ 611 ] + xx [
599 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 609 ] ) ) / xx [ 231 ] ; xx [ 167 ] =
xx [ 12 ] * xx [ 91 ] ; xx [ 188 ] = xx [ 5 ] * xx [ 167 ] ; xx [ 200 ] = xx
[ 4 ] * xx [ 91 ] ; xx [ 203 ] = xx [ 3 ] * xx [ 167 ] - xx [ 200 ] * xx [ 7
] ; xx [ 251 ] = xx [ 5 ] * xx [ 200 ] ; xx [ 599 ] = - xx [ 188 ] ; xx [ 600
] = xx [ 203 ] ; xx [ 601 ] = - xx [ 251 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 599 , xx + 608 ) ; xx [ 256 ] = ( xx [ 188 ] * xx [ 2 ] + xx [ 608
] ) * xx [ 20 ] - xx [ 200 ] ; xx [ 188 ] = xx [ 20 ] * ( xx [ 609 ] - xx [
203 ] * xx [ 2 ] ) ; xx [ 203 ] = xx [ 167 ] + xx [ 20 ] * ( xx [ 610 ] + xx
[ 251 ] * xx [ 2 ] ) ; xx [ 599 ] = xx [ 256 ] ; xx [ 600 ] = xx [ 188 ] ; xx
[ 601 ] = xx [ 203 ] ; xx [ 608 ] = - ( xx [ 105 ] * xx [ 167 ] ) ; xx [ 609
] = xx [ 134 ] * xx [ 91 ] + xx [ 103 ] * xx [ 167 ] + xx [ 108 ] * xx [ 200
] ; xx [ 610 ] = - ( xx [ 105 ] * xx [ 200 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 608 , xx + 611 ) ; xx [
167 ] = xx [ 605 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 599 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 611 ) ) ; xx [ 200 ] = xx [ 606 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 599 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 611 ) ) ; xx [ 251 ] = xx [ 607 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 599 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 611 ) ) ;
xx [ 599 ] = xx [ 256 ] + xx [ 167 ] ; xx [ 600 ] = xx [ 188 ] + xx [ 200 ] ;
xx [ 601 ] = xx [ 203 ] + xx [ 251 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 599 , xx + 605 ) ; pm_math_Vector3_cross_ra ( xx + 599 , xx +
95 , xx + 608 ) ; xx [ 599 ] = xx [ 611 ] + xx [ 608 ] ; xx [ 600 ] = xx [
612 ] + xx [ 79 ] * xx [ 251 ] + xx [ 609 ] ; xx [ 601 ] = xx [ 613 ] - xx [
79 ] * xx [ 200 ] + xx [ 610 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 599 , xx + 608 ) ; xx [ 188 ] = xx [ 602 ] - ( xx [ 184 ] * xx [ 605 ]
+ xx [ 214 ] * xx [ 606 ] - xx [ 216 ] * xx [ 610 ] ) ; xx [ 203 ] = xx [ 603
] - ( xx [ 218 ] * xx [ 605 ] + xx [ 220 ] * xx [ 606 ] + xx [ 226 ] * xx [
610 ] ) ; xx [ 256 ] = xx [ 604 ] - ( xx [ 235 ] * xx [ 607 ] + xx [ 236 ] *
xx [ 608 ] - xx [ 243 ] * xx [ 609 ] ) ; xx [ 283 ] = xx [ 157 ] * xx [ 91 ]
+ xx [ 289 ] * xx [ 167 ] + xx [ 107 ] * xx [ 200 ] + xx [ 37 ] * xx [ 251 ]
+ xx [ 133 ] * xx [ 188 ] + xx [ 162 ] * xx [ 203 ] + xx [ 38 ] * xx [ 256 ]
; xx [ 290 ] = xx [ 591 ] + xx [ 414 ] + xx [ 134 ] ; xx [ 291 ] = xx [ 20 ]
* ( xx [ 78 ] * xx [ 143 ] - xx [ 75 ] * xx [ 144 ] ) + xx [ 136 ] ; xx [ 136
] = xx [ 20 ] * ( xx [ 78 ] * xx [ 147 ] - xx [ 75 ] * xx [ 148 ] ) + xx [
168 ] ; xx [ 168 ] = ( xx [ 597 ] - xx [ 574 ] * xx [ 64 ] ) * xx [ 20 ] - xx
[ 577 ] + xx [ 171 ] ; xx [ 599 ] = xx [ 291 ] ; xx [ 600 ] = xx [ 136 ] ; xx
[ 601 ] = xx [ 168 ] ; solveSymmetricPosDef ( xx + 121 , xx + 599 , 3 , 1 ,
xx + 602 , xx + 605 ) ; xx [ 599 ] = xx [ 48 ] * xx [ 602 ] + xx [ 80 ] * xx
[ 603 ] ; xx [ 600 ] = xx [ 85 ] * xx [ 603 ] - xx [ 86 ] * xx [ 602 ] ; xx [
601 ] = xx [ 56 ] * xx [ 604 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
599 , xx + 605 ) ; xx [ 599 ] = xx [ 87 ] * xx [ 604 ] ; xx [ 600 ] = - ( xx
[ 88 ] * xx [ 604 ] ) ; xx [ 601 ] = xx [ 90 ] * xx [ 603 ] - xx [ 163 ] * xx
[ 602 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 599 , xx + 608 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 608 , xx + 599 ) ; xx [ 171 ] = xx
[ 605 ] + xx [ 599 ] ; xx [ 414 ] = xx [ 615 ] + xx [ 284 ] ; xx [ 284 ] = xx
[ 618 ] + xx [ 92 ] ; xx [ 92 ] = xx [ 606 ] + xx [ 600 ] ; xx [ 578 ] = xx [
621 ] + xx [ 292 ] ; xx [ 292 ] = xx [ 607 ] + xx [ 601 ] ; xx [ 599 ] = xx [
414 ] - xx [ 171 ] ; xx [ 600 ] = xx [ 284 ] - ( xx [ 92 ] - xx [ 79 ] * xx [
610 ] ) ; xx [ 601 ] = xx [ 578 ] - ( xx [ 292 ] + xx [ 79 ] * xx [ 609 ] ) ;
solveSymmetricPosDef ( xx + 274 , xx + 599 , 3 , 1 , xx + 605 , xx + 611 ) ;
xx [ 599 ] = xx [ 171 ] + xx [ 166 ] * xx [ 605 ] + xx [ 224 ] * xx [ 606 ] +
xx [ 237 ] * xx [ 607 ] ; xx [ 600 ] = xx [ 92 ] + xx [ 605 ] * xx [ 94 ] +
xx [ 241 ] * xx [ 606 ] + xx [ 238 ] * xx [ 607 ] ; xx [ 601 ] = xx [ 292 ] +
xx [ 605 ] * xx [ 101 ] + xx [ 104 ] * xx [ 606 ] + xx [ 221 ] * xx [ 607 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 599 , xx + 611 ) ; xx [ 599 ] =
xx [ 608 ] + xx [ 605 ] * xx [ 89 ] + xx [ 165 ] * xx [ 606 ] + xx [ 180 ] *
xx [ 607 ] ; xx [ 600 ] = xx [ 609 ] + xx [ 605 ] * xx [ 245 ] + xx [ 181 ] *
xx [ 606 ] + xx [ 250 ] * xx [ 607 ] ; xx [ 601 ] = xx [ 610 ] + xx [ 605 ] *
xx [ 223 ] + xx [ 260 ] * xx [ 606 ] + xx [ 242 ] * xx [ 607 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 599 , xx + 608 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 608 , xx + 599 ) ; xx [ 92 ] = (
xx [ 290 ] - ( ( xx [ 613 ] + xx [ 601 ] ) * xx [ 12 ] - ( xx [ 611 ] + xx [
599 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 609 ] ) ) / xx [ 231 ] ; xx [ 171 ] =
xx [ 12 ] * xx [ 92 ] ; xx [ 292 ] = xx [ 5 ] * xx [ 171 ] ; xx [ 584 ] = xx
[ 4 ] * xx [ 92 ] ; xx [ 585 ] = xx [ 3 ] * xx [ 171 ] - xx [ 584 ] * xx [ 7
] ; xx [ 588 ] = xx [ 5 ] * xx [ 584 ] ; xx [ 599 ] = - xx [ 292 ] ; xx [ 600
] = xx [ 585 ] ; xx [ 601 ] = - xx [ 588 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 599 , xx + 608 ) ; xx [ 593 ] = ( xx [ 292 ] * xx [ 2 ] + xx [ 608
] ) * xx [ 20 ] - xx [ 584 ] ; xx [ 292 ] = xx [ 20 ] * ( xx [ 609 ] - xx [
585 ] * xx [ 2 ] ) ; xx [ 585 ] = xx [ 171 ] + xx [ 20 ] * ( xx [ 610 ] + xx
[ 588 ] * xx [ 2 ] ) ; xx [ 599 ] = xx [ 593 ] ; xx [ 600 ] = xx [ 292 ] ; xx
[ 601 ] = xx [ 585 ] ; xx [ 608 ] = - ( xx [ 105 ] * xx [ 171 ] ) ; xx [ 609
] = xx [ 134 ] * xx [ 92 ] + xx [ 103 ] * xx [ 171 ] + xx [ 108 ] * xx [ 584
] ; xx [ 610 ] = - ( xx [ 105 ] * xx [ 584 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 608 , xx + 611 ) ; xx [
171 ] = xx [ 605 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 599 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 611 ) ) ; xx [ 584 ] = xx [ 606 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 599 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 611 ) ) ; xx [ 588 ] = xx [ 607 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 599 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 611 ) ) ;
xx [ 599 ] = xx [ 593 ] + xx [ 171 ] ; xx [ 600 ] = xx [ 292 ] + xx [ 584 ] ;
xx [ 601 ] = xx [ 585 ] + xx [ 588 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 599 , xx + 605 ) ; pm_math_Vector3_cross_ra ( xx + 599 , xx +
95 , xx + 608 ) ; xx [ 599 ] = xx [ 611 ] + xx [ 608 ] ; xx [ 600 ] = xx [
612 ] + xx [ 79 ] * xx [ 588 ] + xx [ 609 ] ; xx [ 601 ] = xx [ 613 ] - xx [
79 ] * xx [ 584 ] + xx [ 610 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 599 , xx + 608 ) ; xx [ 292 ] = xx [ 602 ] - ( xx [ 184 ] * xx [ 605 ]
+ xx [ 214 ] * xx [ 606 ] - xx [ 216 ] * xx [ 610 ] ) ; xx [ 585 ] = xx [ 603
] - ( xx [ 218 ] * xx [ 605 ] + xx [ 220 ] * xx [ 606 ] + xx [ 226 ] * xx [
610 ] ) ; xx [ 593 ] = xx [ 604 ] - ( xx [ 235 ] * xx [ 607 ] + xx [ 236 ] *
xx [ 608 ] - xx [ 243 ] * xx [ 609 ] ) ; xx [ 594 ] = xx [ 157 ] * xx [ 92 ]
+ xx [ 289 ] * xx [ 171 ] + xx [ 107 ] * xx [ 584 ] + xx [ 37 ] * xx [ 588 ]
+ xx [ 133 ] * xx [ 292 ] + xx [ 162 ] * xx [ 585 ] + xx [ 38 ] * xx [ 593 ]
; xx [ 590 ] = xx [ 592 ] + xx [ 149 ] ; xx [ 149 ] = xx [ 142 ] - ( xx [ 76
] * xx [ 144 ] + xx [ 77 ] * xx [ 143 ] ) * xx [ 20 ] + xx [ 137 ] ; xx [ 137
] = xx [ 135 ] - ( xx [ 76 ] * xx [ 148 ] + xx [ 77 ] * xx [ 147 ] ) * xx [
20 ] + xx [ 169 ] ; xx [ 135 ] = ( xx [ 75 ] * xx [ 579 ] + xx [ 598 ] ) * xx
[ 20 ] + xx [ 172 ] ; xx [ 142 ] = xx [ 149 ] ; xx [ 143 ] = xx [ 137 ] ; xx
[ 144 ] = xx [ 135 ] ; solveSymmetricPosDef ( xx + 121 , xx + 142 , 3 , 1 ,
xx + 596 , xx + 599 ) ; xx [ 142 ] = xx [ 48 ] * xx [ 596 ] + xx [ 80 ] * xx
[ 597 ] ; xx [ 143 ] = xx [ 85 ] * xx [ 597 ] - xx [ 86 ] * xx [ 596 ] ; xx [
144 ] = xx [ 56 ] * xx [ 598 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
142 , xx + 599 ) ; xx [ 142 ] = xx [ 87 ] * xx [ 598 ] ; xx [ 143 ] = - ( xx
[ 88 ] * xx [ 598 ] ) ; xx [ 144 ] = xx [ 90 ] * xx [ 597 ] - xx [ 163 ] * xx
[ 596 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx + 142 , xx + 602 ) ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 602 , xx + 142 ) ; xx [ 147 ] = xx
[ 599 ] + xx [ 142 ] ; xx [ 148 ] = xx [ 616 ] + xx [ 285 ] ; xx [ 169 ] = xx
[ 619 ] + xx [ 93 ] ; xx [ 93 ] = xx [ 600 ] + xx [ 143 ] ; xx [ 172 ] = xx [
622 ] + xx [ 293 ] ; xx [ 142 ] = xx [ 601 ] + xx [ 144 ] ; xx [ 599 ] = xx [
148 ] - xx [ 147 ] ; xx [ 600 ] = xx [ 169 ] - ( xx [ 93 ] - xx [ 79 ] * xx [
604 ] ) ; xx [ 601 ] = xx [ 172 ] - ( xx [ 142 ] + xx [ 79 ] * xx [ 603 ] ) ;
solveSymmetricPosDef ( xx + 274 , xx + 599 , 3 , 1 , xx + 605 , xx + 608 ) ;
xx [ 599 ] = xx [ 147 ] + xx [ 166 ] * xx [ 605 ] + xx [ 224 ] * xx [ 606 ] +
xx [ 237 ] * xx [ 607 ] ; xx [ 600 ] = xx [ 93 ] + xx [ 605 ] * xx [ 94 ] +
xx [ 241 ] * xx [ 606 ] + xx [ 238 ] * xx [ 607 ] ; xx [ 601 ] = xx [ 142 ] +
xx [ 605 ] * xx [ 101 ] + xx [ 104 ] * xx [ 606 ] + xx [ 221 ] * xx [ 607 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 599 , xx + 142 ) ; xx [ 599 ] =
xx [ 602 ] + xx [ 605 ] * xx [ 89 ] + xx [ 165 ] * xx [ 606 ] + xx [ 180 ] *
xx [ 607 ] ; xx [ 600 ] = xx [ 603 ] + xx [ 605 ] * xx [ 245 ] + xx [ 181 ] *
xx [ 606 ] + xx [ 250 ] * xx [ 607 ] ; xx [ 601 ] = xx [ 604 ] + xx [ 605 ] *
xx [ 223 ] + xx [ 260 ] * xx [ 606 ] + xx [ 242 ] * xx [ 607 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 599 , xx + 602 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 602 , xx + 599 ) ; xx [ 93 ] = (
xx [ 590 ] - ( ( xx [ 144 ] + xx [ 601 ] ) * xx [ 12 ] - ( xx [ 142 ] + xx [
599 ] ) * xx [ 4 ] + xx [ 134 ] * xx [ 603 ] ) ) / xx [ 231 ] ; xx [ 142 ] =
xx [ 12 ] * xx [ 93 ] ; xx [ 143 ] = xx [ 5 ] * xx [ 142 ] ; xx [ 144 ] = xx
[ 4 ] * xx [ 93 ] ; xx [ 147 ] = xx [ 3 ] * xx [ 142 ] - xx [ 144 ] * xx [ 7
] ; xx [ 285 ] = xx [ 5 ] * xx [ 144 ] ; xx [ 599 ] = - xx [ 143 ] ; xx [ 600
] = xx [ 147 ] ; xx [ 601 ] = - xx [ 285 ] ; pm_math_Vector3_cross_ra ( xx +
15 , xx + 599 , xx + 602 ) ; xx [ 293 ] = ( xx [ 143 ] * xx [ 2 ] + xx [ 602
] ) * xx [ 20 ] - xx [ 144 ] ; xx [ 143 ] = xx [ 20 ] * ( xx [ 603 ] - xx [
147 ] * xx [ 2 ] ) ; xx [ 147 ] = xx [ 142 ] + xx [ 20 ] * ( xx [ 604 ] + xx
[ 285 ] * xx [ 2 ] ) ; xx [ 599 ] = xx [ 293 ] ; xx [ 600 ] = xx [ 143 ] ; xx
[ 601 ] = xx [ 147 ] ; xx [ 602 ] = - ( xx [ 105 ] * xx [ 142 ] ) ; xx [ 603
] = xx [ 134 ] * xx [ 93 ] + xx [ 103 ] * xx [ 142 ] + xx [ 108 ] * xx [ 144
] ; xx [ 604 ] = - ( xx [ 105 ] * xx [ 144 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 602 , xx + 608 ) ; xx [
142 ] = xx [ 605 ] - ( pm_math_Vector3_dot_ra ( xx + 232 , xx + 599 ) +
pm_math_Vector3_dot_ra ( xx + 305 , xx + 608 ) ) ; xx [ 144 ] = xx [ 606 ] -
( pm_math_Vector3_dot_ra ( xx + 308 , xx + 599 ) + pm_math_Vector3_dot_ra (
xx + 317 , xx + 608 ) ) ; xx [ 285 ] = xx [ 607 ] - ( pm_math_Vector3_dot_ra
( xx + 341 , xx + 599 ) + pm_math_Vector3_dot_ra ( xx + 323 , xx + 608 ) ) ;
xx [ 599 ] = xx [ 293 ] + xx [ 142 ] ; xx [ 600 ] = xx [ 143 ] + xx [ 144 ] ;
xx [ 601 ] = xx [ 147 ] + xx [ 285 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 599 , xx + 602 ) ; pm_math_Vector3_cross_ra ( xx + 599 , xx +
95 , xx + 605 ) ; xx [ 599 ] = xx [ 608 ] + xx [ 605 ] ; xx [ 600 ] = xx [
609 ] + xx [ 79 ] * xx [ 285 ] + xx [ 606 ] ; xx [ 601 ] = xx [ 610 ] - xx [
79 ] * xx [ 144 ] + xx [ 607 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41
, xx + 599 , xx + 605 ) ; xx [ 143 ] = xx [ 596 ] - ( xx [ 184 ] * xx [ 602 ]
+ xx [ 214 ] * xx [ 603 ] - xx [ 216 ] * xx [ 607 ] ) ; xx [ 147 ] = xx [ 597
] - ( xx [ 218 ] * xx [ 602 ] + xx [ 220 ] * xx [ 603 ] + xx [ 226 ] * xx [
607 ] ) ; xx [ 293 ] = xx [ 598 ] - ( xx [ 235 ] * xx [ 604 ] + xx [ 236 ] *
xx [ 605 ] - xx [ 243 ] * xx [ 606 ] ) ; xx [ 579 ] = xx [ 157 ] * xx [ 93 ]
+ xx [ 289 ] * xx [ 142 ] + xx [ 107 ] * xx [ 144 ] + xx [ 37 ] * xx [ 285 ]
+ xx [ 133 ] * xx [ 143 ] + xx [ 162 ] * xx [ 147 ] + xx [ 38 ] * xx [ 293 ]
; xx [ 591 ] = xx [ 415 ] * xx [ 132 ] + xx [ 443 ] * xx [ 151 ] + xx [ 446 ]
* xx [ 153 ] + xx [ 456 ] * xx [ 173 ] + xx [ 423 ] * xx [ 152 ] + xx [ 424 ]
* xx [ 158 ] + xx [ 427 ] * xx [ 159 ] + xx [ 462 ] * xx [ 175 ] - xx [ 454 ]
* xx [ 287 ] - xx [ 364 ] * xx [ 294 ] ; xx [ 592 ] = xx [ 415 ] * xx [ 375 ]
+ xx [ 443 ] * xx [ 396 ] + xx [ 446 ] * xx [ 467 ] + xx [ 456 ] * xx [ 469 ]
+ xx [ 423 ] * xx [ 460 ] + xx [ 424 ] * xx [ 468 ] + xx [ 427 ] * xx [ 470 ]
; xx [ 596 ] = xx [ 415 ] * xx [ 480 ] + xx [ 443 ] * xx [ 479 ] + xx [ 446 ]
* xx [ 491 ] + xx [ 456 ] * xx [ 493 ] + xx [ 423 ] * xx [ 481 ] + xx [ 424 ]
* xx [ 476 ] + xx [ 427 ] * xx [ 477 ] ; xx [ 597 ] = xx [ 415 ] * xx [ 356 ]
+ xx [ 443 ] * xx [ 368 ] + xx [ 446 ] * xx [ 370 ] + xx [ 456 ] * xx [ 484 ]
+ xx [ 423 ] * xx [ 369 ] + xx [ 424 ] * xx [ 400 ] + xx [ 427 ] * xx [ 401 ]
; xx [ 598 ] = xx [ 415 ] * xx [ 504 ] + xx [ 443 ] * xx [ 508 ] + xx [ 446 ]
* xx [ 513 ] + xx [ 456 ] * xx [ 518 ] + xx [ 423 ] * xx [ 512 ] + xx [ 424 ]
* xx [ 514 ] + xx [ 427 ] * xx [ 515 ] ; xx [ 599 ] = xx [ 415 ] * xx [ 522 ]
+ xx [ 443 ] * xx [ 526 ] + xx [ 446 ] * xx [ 540 ] + xx [ 456 ] * xx [ 542 ]
+ xx [ 423 ] * xx [ 539 ] + xx [ 424 ] * xx [ 533 ] + xx [ 427 ] * xx [ 534 ]
; xx [ 600 ] = xx [ 415 ] * xx [ 490 ] + xx [ 443 ] * xx [ 500 ] + xx [ 446 ]
* xx [ 509 ] + xx [ 456 ] * xx [ 511 ] + xx [ 423 ] * xx [ 505 ] + xx [ 424 ]
* xx [ 510 ] + xx [ 427 ] * xx [ 527 ] ; xx [ 601 ] = xx [ 415 ] * xx [ 551 ]
+ xx [ 443 ] * xx [ 555 ] + xx [ 446 ] * xx [ 560 ] + xx [ 456 ] * xx [ 565 ]
+ xx [ 423 ] * xx [ 559 ] + xx [ 424 ] * xx [ 561 ] + xx [ 427 ] * xx [ 562 ]
; xx [ 602 ] = xx [ 415 ] * xx [ 569 ] + xx [ 443 ] * xx [ 573 ] + xx [ 446 ]
* xx [ 587 ] + xx [ 456 ] * xx [ 589 ] + xx [ 423 ] * xx [ 586 ] + xx [ 424 ]
* xx [ 580 ] + xx [ 427 ] * xx [ 581 ] ; xx [ 603 ] = xx [ 415 ] * xx [ 538 ]
+ xx [ 443 ] * xx [ 545 ] + xx [ 446 ] * xx [ 547 ] + xx [ 456 ] * xx [ 576 ]
+ xx [ 423 ] * xx [ 546 ] + xx [ 424 ] * xx [ 556 ] + xx [ 427 ] * xx [ 557 ]
; xx [ 604 ] = xx [ 415 ] * xx [ 91 ] + xx [ 443 ] * xx [ 167 ] + xx [ 446 ]
* xx [ 200 ] + xx [ 456 ] * xx [ 251 ] + xx [ 423 ] * xx [ 188 ] + xx [ 424 ]
* xx [ 203 ] + xx [ 427 ] * xx [ 256 ] ; xx [ 605 ] = xx [ 415 ] * xx [ 92 ]
+ xx [ 443 ] * xx [ 171 ] + xx [ 446 ] * xx [ 584 ] + xx [ 456 ] * xx [ 588 ]
+ xx [ 423 ] * xx [ 292 ] + xx [ 424 ] * xx [ 585 ] + xx [ 427 ] * xx [ 593 ]
; xx [ 606 ] = xx [ 415 ] * xx [ 93 ] + xx [ 443 ] * xx [ 142 ] + xx [ 446 ]
* xx [ 144 ] + xx [ 456 ] * xx [ 285 ] + xx [ 423 ] * xx [ 143 ] + xx [ 424 ]
* xx [ 147 ] + xx [ 427 ] * xx [ 293 ] ; xx [ 607 ] = xx [ 138 ] * xx [ 375 ]
+ xx [ 154 ] * xx [ 396 ] + xx [ 155 ] * xx [ 467 ] + xx [ 286 ] * xx [ 469 ]
+ xx [ 150 ] * xx [ 460 ] + xx [ 130 ] * xx [ 468 ] + xx [ 131 ] * xx [ 470 ]
; xx [ 608 ] = xx [ 138 ] * xx [ 480 ] + xx [ 154 ] * xx [ 479 ] + xx [ 155 ]
* xx [ 491 ] + xx [ 286 ] * xx [ 493 ] + xx [ 150 ] * xx [ 481 ] + xx [ 130 ]
* xx [ 476 ] + xx [ 131 ] * xx [ 477 ] ; xx [ 609 ] = xx [ 138 ] * xx [ 356 ]
+ xx [ 154 ] * xx [ 368 ] + xx [ 155 ] * xx [ 370 ] + xx [ 286 ] * xx [ 484 ]
+ xx [ 150 ] * xx [ 369 ] + xx [ 130 ] * xx [ 400 ] + xx [ 131 ] * xx [ 401 ]
; xx [ 610 ] = xx [ 138 ] * xx [ 504 ] + xx [ 154 ] * xx [ 508 ] + xx [ 155 ]
* xx [ 513 ] + xx [ 286 ] * xx [ 518 ] + xx [ 150 ] * xx [ 512 ] + xx [ 130 ]
* xx [ 514 ] + xx [ 131 ] * xx [ 515 ] ; xx [ 611 ] = xx [ 138 ] * xx [ 522 ]
+ xx [ 154 ] * xx [ 526 ] + xx [ 155 ] * xx [ 540 ] + xx [ 286 ] * xx [ 542 ]
+ xx [ 150 ] * xx [ 539 ] + xx [ 130 ] * xx [ 533 ] + xx [ 131 ] * xx [ 534 ]
; xx [ 612 ] = xx [ 138 ] * xx [ 490 ] + xx [ 154 ] * xx [ 500 ] + xx [ 155 ]
* xx [ 509 ] + xx [ 286 ] * xx [ 511 ] + xx [ 150 ] * xx [ 505 ] + xx [ 130 ]
* xx [ 510 ] + xx [ 131 ] * xx [ 527 ] ; xx [ 613 ] = xx [ 138 ] * xx [ 551 ]
+ xx [ 154 ] * xx [ 555 ] + xx [ 155 ] * xx [ 560 ] + xx [ 286 ] * xx [ 565 ]
+ xx [ 150 ] * xx [ 559 ] + xx [ 130 ] * xx [ 561 ] + xx [ 131 ] * xx [ 562 ]
; xx [ 614 ] = xx [ 138 ] * xx [ 569 ] + xx [ 154 ] * xx [ 573 ] + xx [ 155 ]
* xx [ 587 ] + xx [ 286 ] * xx [ 589 ] + xx [ 150 ] * xx [ 586 ] + xx [ 130 ]
* xx [ 580 ] + xx [ 131 ] * xx [ 581 ] ; xx [ 615 ] = xx [ 138 ] * xx [ 538 ]
+ xx [ 154 ] * xx [ 545 ] + xx [ 155 ] * xx [ 547 ] + xx [ 286 ] * xx [ 576 ]
+ xx [ 150 ] * xx [ 546 ] + xx [ 130 ] * xx [ 556 ] + xx [ 131 ] * xx [ 557 ]
; xx [ 616 ] = xx [ 138 ] * xx [ 91 ] + xx [ 154 ] * xx [ 167 ] + xx [ 155 ]
* xx [ 200 ] + xx [ 286 ] * xx [ 251 ] + xx [ 150 ] * xx [ 188 ] + xx [ 130 ]
* xx [ 203 ] + xx [ 131 ] * xx [ 256 ] ; xx [ 617 ] = xx [ 138 ] * xx [ 92 ]
+ xx [ 154 ] * xx [ 171 ] + xx [ 155 ] * xx [ 584 ] + xx [ 286 ] * xx [ 588 ]
+ xx [ 150 ] * xx [ 292 ] + xx [ 130 ] * xx [ 585 ] + xx [ 131 ] * xx [ 593 ]
; xx [ 618 ] = xx [ 138 ] * xx [ 93 ] + xx [ 154 ] * xx [ 142 ] + xx [ 155 ]
* xx [ 144 ] + xx [ 286 ] * xx [ 285 ] + xx [ 150 ] * xx [ 143 ] + xx [ 130 ]
* xx [ 147 ] + xx [ 131 ] * xx [ 293 ] ; xx [ 619 ] = 0.4995596447523598 ; xx
[ 620 ] = xx [ 55 ] * state [ 43 ] ; xx [ 621 ] = cos ( xx [ 620 ] ) ; xx [
622 ] = xx [ 619 ] * xx [ 621 ] ; xx [ 623 ] = sin ( xx [ 620 ] ) ; xx [ 620
] = xx [ 4 ] * xx [ 623 ] ; xx [ 624 ] = 0.8662794937748998 ; xx [ 625 ] = xx
[ 12 ] * xx [ 623 ] ; xx [ 623 ] = xx [ 619 ] * xx [ 620 ] - xx [ 624 ] * xx
[ 625 ] ; xx [ 626 ] = xx [ 624 ] * xx [ 621 ] ; xx [ 621 ] = - xx [ 626 ] ;
xx [ 627 ] = xx [ 619 ] * xx [ 625 ] + xx [ 624 ] * xx [ 620 ] ; xx [ 619 ] =
- xx [ 627 ] ; xx [ 628 ] = - xx [ 622 ] ; xx [ 629 ] = xx [ 623 ] ; xx [ 630
] = xx [ 621 ] ; xx [ 631 ] = xx [ 619 ] ; xx [ 620 ] = xx [ 0 ] * state [ 47
] + xx [ 1 ] * state [ 45 ] ; xx [ 624 ] = xx [ 0 ] * state [ 48 ] - xx [ 1 ]
* state [ 46 ] ; xx [ 625 ] = - xx [ 624 ] ; xx [ 632 ] = xx [ 0 ] * state [
45 ] - xx [ 1 ] * state [ 47 ] ; xx [ 633 ] = - xx [ 632 ] ; xx [ 634 ] = xx
[ 0 ] * state [ 46 ] + xx [ 1 ] * state [ 48 ] ; xx [ 635 ] = xx [ 620 ] ; xx
[ 636 ] = xx [ 625 ] ; xx [ 637 ] = xx [ 633 ] ; xx [ 638 ] = xx [ 634 ] ;
pm_math_Quaternion_compose_ra ( xx + 628 , xx + 635 , xx + 639 ) ; xx [ 643 ]
= xx [ 625 ] ; xx [ 644 ] = xx [ 633 ] ; xx [ 645 ] = xx [ 634 ] ; xx [ 625 ]
= xx [ 624 ] * xx [ 12 ] - xx [ 4 ] * xx [ 634 ] ; xx [ 633 ] = xx [ 632 ] *
xx [ 4 ] ; xx [ 646 ] = - ( xx [ 632 ] * xx [ 12 ] ) ; xx [ 647 ] = xx [ 625
] ; xx [ 648 ] = - xx [ 633 ] ; pm_math_Vector3_cross_ra ( xx + 643 , xx +
646 , xx + 649 ) ; xx [ 646 ] = xx [ 338 ] * ( xx [ 650 ] - xx [ 625 ] * xx [
620 ] ) ; xx [ 625 ] = ( xx [ 12 ] + xx [ 20 ] * ( xx [ 651 ] + xx [ 633 ] *
xx [ 620 ] ) ) * xx [ 79 ] ; xx [ 633 ] = xx [ 641 ] * xx [ 646 ] + xx [ 642
] * xx [ 625 ] ; xx [ 647 ] = xx [ 640 ] * xx [ 646 ] ; xx [ 648 ] = xx [ 640
] * xx [ 625 ] ; xx [ 649 ] = - xx [ 633 ] ; xx [ 650 ] = xx [ 647 ] ; xx [
651 ] = xx [ 648 ] ; pm_math_Vector3_cross_ra ( xx + 640 , xx + 649 , xx +
652 ) ; xx [ 649 ] = xx [ 79 ] * xx [ 634 ] ; xx [ 650 ] = xx [ 649 ] * xx [
620 ] ; xx [ 651 ] = xx [ 632 ] * xx [ 79 ] ; xx [ 655 ] = ( xx [ 650 ] + xx
[ 624 ] * xx [ 651 ] ) * xx [ 20 ] ; xx [ 656 ] = xx [ 632 ] * xx [ 651 ] ;
xx [ 657 ] = xx [ 649 ] * xx [ 634 ] ; xx [ 658 ] = xx [ 81 ] + xx [ 79 ] - (
xx [ 656 ] + xx [ 657 ] ) * xx [ 20 ] ; xx [ 659 ] = xx [ 651 ] * xx [ 620 ]
; xx [ 660 ] = xx [ 106 ] + xx [ 20 ] * ( xx [ 659 ] - xx [ 624 ] * xx [ 649
] ) ; xx [ 661 ] = - ( xx [ 12 ] * xx [ 655 ] ) ; xx [ 662 ] = xx [ 658 ] *
xx [ 12 ] + xx [ 660 ] * xx [ 4 ] ; xx [ 663 ] = - ( xx [ 4 ] * xx [ 655 ] )
; pm_math_Quaternion_xform_ra ( xx + 628 , xx + 661 , xx + 664 ) ; xx [ 661 ]
= xx [ 623 ] * xx [ 134 ] ; xx [ 662 ] = xx [ 134 ] * xx [ 627 ] ; xx [ 663 ]
= xx [ 20 ] * ( xx [ 652 ] - xx [ 633 ] * xx [ 639 ] ) + xx [ 664 ] - xx [ 20
] * ( xx [ 661 ] * xx [ 626 ] + xx [ 662 ] * xx [ 622 ] ) ; xx [ 633 ] = xx [
624 ] * xx [ 79 ] ; xx [ 667 ] = xx [ 633 ] * xx [ 620 ] ; xx [ 668 ] = xx [
624 ] * xx [ 633 ] ; xx [ 669 ] = ( xx [ 659 ] + xx [ 633 ] * xx [ 634 ] ) *
xx [ 20 ] ; xx [ 670 ] = xx [ 20 ] * ( xx [ 651 ] * xx [ 634 ] - xx [ 667 ] )
; xx [ 671 ] = ( xx [ 668 ] + xx [ 656 ] ) * xx [ 20 ] - xx [ 79 ] ;
pm_math_Quaternion_xform_ra ( xx + 628 , xx + 669 , xx + 672 ) ; xx [ 651 ] =
xx [ 79 ] * xx [ 641 ] ; xx [ 656 ] = xx [ 79 ] * xx [ 640 ] ; xx [ 659 ] =
xx [ 672 ] - ( xx [ 639 ] * xx [ 651 ] + xx [ 642 ] * xx [ 656 ] ) * xx [ 20
] ; xx [ 669 ] = xx [ 79 ] * xx [ 642 ] ; xx [ 675 ] = xx [ 20 ] * ( xx [ 632
] * xx [ 633 ] - xx [ 650 ] ) ; xx [ 676 ] = xx [ 79 ] - ( xx [ 657 ] + xx [
668 ] ) * xx [ 20 ] ; xx [ 677 ] = - ( ( xx [ 667 ] + xx [ 632 ] * xx [ 649 ]
) * xx [ 20 ] ) ; pm_math_Quaternion_xform_ra ( xx + 628 , xx + 675 , xx +
678 ) ; xx [ 633 ] = xx [ 20 ] * ( xx [ 641 ] * xx [ 656 ] - xx [ 639 ] * xx
[ 669 ] ) + xx [ 678 ] ; xx [ 675 ] = xx [ 84 ] ; xx [ 676 ] = - xx [ 659 ] ;
xx [ 677 ] = - xx [ 633 ] ; solveSymmetricPosDef ( xx + 380 , xx + 675 , 3 ,
1 , xx + 681 , xx + 684 ) ; xx [ 675 ] = xx [ 27 ] * xx [ 681 ] ; xx [ 676 ]
= xx [ 28 ] * xx [ 682 ] ; xx [ 677 ] = xx [ 28 ] * xx [ 683 ] ;
pm_math_Quaternion_xform_ra ( xx + 635 , xx + 675 , xx + 684 ) ; xx [ 675 ] =
xx [ 658 ] ; xx [ 676 ] = xx [ 655 ] ; xx [ 677 ] = xx [ 660 ] ; xx [ 649 ] =
xx [ 358 ] * xx [ 683 ] ; xx [ 650 ] = xx [ 358 ] * xx [ 682 ] ; xx [ 657 ] =
xx [ 649 ] * xx [ 634 ] - xx [ 632 ] * xx [ 650 ] ; xx [ 667 ] = xx [ 624 ] *
xx [ 650 ] ; xx [ 668 ] = xx [ 624 ] * xx [ 649 ] ; xx [ 687 ] = - xx [ 657 ]
; xx [ 688 ] = - xx [ 667 ] ; xx [ 689 ] = - xx [ 668 ] ;
pm_math_Vector3_cross_ra ( xx + 643 , xx + 687 , xx + 690 ) ; xx [ 670 ] = xx
[ 649 ] + ( xx [ 691 ] - xx [ 667 ] * xx [ 620 ] ) * xx [ 20 ] ; xx [ 687 ] =
xx [ 20 ] * ( xx [ 690 ] - xx [ 657 ] * xx [ 620 ] ) ; xx [ 688 ] = xx [ 670
] ; xx [ 689 ] = xx [ 20 ] * ( xx [ 692 ] - xx [ 668 ] * xx [ 620 ] ) - xx [
650 ] ; pm_math_Vector3_cross_ra ( xx + 675 , xx + 687 , xx + 690 ) ; xx [
649 ] = xx [ 632 ] * xx [ 634 ] ; xx [ 650 ] = xx [ 624 ] * xx [ 620 ] ; xx [
657 ] = ( xx [ 649 ] + xx [ 650 ] ) * xx [ 20 ] ; xx [ 667 ] = xx [ 360 ] *
xx [ 657 ] ; xx [ 668 ] = xx [ 620 ] * xx [ 620 ] ; xx [ 671 ] = ( xx [ 668 ]
+ xx [ 634 ] * xx [ 634 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 681 ] = xx [ 360 ]
* xx [ 671 ] ; xx [ 685 ] = xx [ 624 ] * xx [ 634 ] ; xx [ 687 ] = xx [ 632 ]
* xx [ 620 ] ; xx [ 688 ] = ( xx [ 685 ] + xx [ 687 ] ) * xx [ 20 ] ; xx [
689 ] = xx [ 411 ] * xx [ 688 ] ; xx [ 691 ] = xx [ 624 ] * xx [ 632 ] ; xx [
693 ] = xx [ 634 ] * xx [ 620 ] ; xx [ 694 ] = xx [ 20 ] * ( xx [ 691 ] - xx
[ 693 ] ) ; xx [ 695 ] = xx [ 411 ] * xx [ 694 ] ; xx [ 696 ] = xx [ 689 ] *
xx [ 694 ] - xx [ 688 ] * xx [ 695 ] ; xx [ 697 ] = xx [ 20 ] * ( xx [ 650 ]
- xx [ 649 ] ) ; xx [ 649 ] = ( xx [ 668 ] + xx [ 632 ] * xx [ 632 ] ) * xx [
20 ] - xx [ 54 ] ; xx [ 650 ] = xx [ 657 ] * xx [ 689 ] - xx [ 695 ] * xx [
671 ] ; xx [ 698 ] = xx [ 411 ] * xx [ 697 ] ; xx [ 699 ] = xx [ 411 ] * xx [
649 ] ; xx [ 700 ] = xx [ 698 ] * xx [ 694 ] + xx [ 688 ] * xx [ 699 ] ; xx [
701 ] = xx [ 699 ] * xx [ 671 ] + xx [ 657 ] * xx [ 698 ] ; xx [ 702 ] = xx [
411 ] * xx [ 671 ] ; xx [ 703 ] = xx [ 411 ] * xx [ 657 ] ; xx [ 704 ] = xx [
702 ] * xx [ 694 ] - xx [ 688 ] * xx [ 703 ] ; xx [ 705 ] = xx [ 657 ] * xx [
702 ] - xx [ 703 ] * xx [ 671 ] ; xx [ 706 ] = - xx [ 696 ] ; xx [ 707 ] = -
( xx [ 695 ] * xx [ 697 ] + xx [ 689 ] * xx [ 649 ] ) ; xx [ 708 ] = xx [ 650
] ; xx [ 709 ] = xx [ 700 ] ; xx [ 710 ] = xx [ 698 ] * xx [ 649 ] - xx [ 699
] * xx [ 697 ] ; xx [ 711 ] = - xx [ 701 ] ; xx [ 712 ] = xx [ 704 ] ; xx [
713 ] = xx [ 702 ] * xx [ 649 ] + xx [ 703 ] * xx [ 697 ] ; xx [ 714 ] = - xx
[ 705 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 706 , xx + 675 , xx + 715 ) ;
xx [ 689 ] = ( xx [ 668 ] + xx [ 624 ] * xx [ 624 ] ) * xx [ 20 ] - xx [ 54 ]
; xx [ 668 ] = xx [ 691 ] + xx [ 693 ] ; xx [ 691 ] = xx [ 668 ] * xx [ 20 ]
; xx [ 693 ] = xx [ 687 ] - xx [ 685 ] ; xx [ 685 ] = xx [ 20 ] * xx [ 693 ]
; xx [ 706 ] = xx [ 689 ] ; xx [ 707 ] = xx [ 691 ] ; xx [ 708 ] = xx [ 685 ]
; xx [ 709 ] = xx [ 694 ] ; xx [ 710 ] = xx [ 649 ] ; xx [ 711 ] = - xx [ 657
] ; xx [ 712 ] = - xx [ 688 ] ; xx [ 713 ] = xx [ 697 ] ; xx [ 714 ] = xx [
671 ] ; xx [ 724 ] = xx [ 248 ] * xx [ 689 ] ; xx [ 725 ] = xx [ 407 ] * xx [
694 ] ; xx [ 726 ] = - ( xx [ 407 ] * xx [ 688 ] ) ; xx [ 727 ] = xx [ 668 ]
* xx [ 417 ] ; xx [ 728 ] = xx [ 407 ] * xx [ 649 ] ; xx [ 729 ] = xx [ 407 ]
* xx [ 697 ] ; xx [ 730 ] = xx [ 417 ] * xx [ 693 ] ; xx [ 731 ] = - ( xx [
407 ] * xx [ 657 ] ) ; xx [ 732 ] = xx [ 407 ] * xx [ 671 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 706 , xx + 724 , xx + 733 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 733 , xx + 675 , xx + 724 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 724 , xx + 675 , xx + 741 ) ; xx [ 668 ]
= xx [ 360 ] * xx [ 694 ] ; xx [ 687 ] = xx [ 360 ] * xx [ 688 ] ; xx [ 693 ]
= xx [ 701 ] + xx [ 731 ] ; xx [ 695 ] = xx [ 700 ] - xx [ 725 ] ; xx [ 698 ]
= ( xx [ 229 ] + xx [ 737 ] ) * xx [ 134 ] - ( xx [ 4 ] * xx [ 695 ] + xx [
12 ] * xx [ 693 ] ) ; xx [ 699 ] = ( ( xx [ 185 ] + xx [ 657 ] * xx [ 667 ] +
xx [ 681 ] * xx [ 671 ] - xx [ 723 ] - xx [ 723 ] - xx [ 749 ] ) * xx [ 12 ]
+ ( xx [ 657 ] * xx [ 668 ] + xx [ 687 ] * xx [ 671 ] + xx [ 717 ] + xx [ 721
] + xx [ 743 ] ) * xx [ 4 ] - xx [ 134 ] * xx [ 693 ] ) * xx [ 12 ] - ( xx [
134 ] * xx [ 695 ] - ( ( xx [ 215 ] + xx [ 668 ] * xx [ 694 ] + xx [ 688 ] *
xx [ 687 ] - xx [ 715 ] - xx [ 715 ] - xx [ 741 ] ) * xx [ 4 ] + ( xx [ 667 ]
* xx [ 694 ] + xx [ 688 ] * xx [ 681 ] + xx [ 721 ] + xx [ 717 ] + xx [ 747 ]
) * xx [ 12 ] ) ) * xx [ 4 ] + xx [ 698 ] * xx [ 134 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 699 , 1 , xx + 667 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 5/Revolute Joint 5' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 667 ] = ( ( xx [ 686 ] + xx [ 692 ] ) * xx [ 12 ] - (
xx [ 684 ] + xx [ 690 ] ) * xx [ 4 ] + xx [ 670 ] * xx [ 134 ] + xx [ 663 ] )
/ xx [ 699 ] ; xx [ 668 ] = xx [ 12 ] * xx [ 667 ] ; xx [ 670 ] = xx [ 4 ] *
xx [ 667 ] ; xx [ 681 ] = xx [ 624 ] * xx [ 668 ] - xx [ 670 ] * xx [ 634 ] ;
xx [ 684 ] = xx [ 632 ] * xx [ 670 ] ; xx [ 700 ] = xx [ 632 ] * xx [ 668 ] ;
xx [ 701 ] = - xx [ 681 ] ; xx [ 702 ] = xx [ 684 ] ;
pm_math_Vector3_cross_ra ( xx + 643 , xx + 700 , xx + 715 ) ; xx [ 700 ] = xx
[ 655 ] * xx [ 668 ] ; xx [ 701 ] = - ( xx [ 660 ] * xx [ 670 ] + xx [ 658 ]
* xx [ 668 ] + xx [ 134 ] * xx [ 667 ] ) ; xx [ 702 ] = xx [ 655 ] * xx [ 670
] ; pm_math_Quaternion_inverseXform_ra ( xx + 635 , xx + 700 , xx + 718 ) ;
xx [ 670 ] = xx [ 639 ] * xx [ 656 ] ; xx [ 686 ] = xx [ 20 ] * ( xx [ 670 ]
- xx [ 642 ] * xx [ 651 ] ) + xx [ 673 ] ; xx [ 687 ] = xx [ 640 ] * xx [ 656
] ; xx [ 656 ] = xx [ 679 ] - ( xx [ 642 ] * xx [ 669 ] + xx [ 687 ] ) * xx [
20 ] + xx [ 79 ] ; xx [ 700 ] = xx [ 84 ] ; xx [ 701 ] = - xx [ 686 ] ; xx [
702 ] = - xx [ 656 ] ; solveSymmetricPosDef ( xx + 380 , xx + 700 , 3 , 1 ,
xx + 721 , xx + 727 ) ; xx [ 700 ] = xx [ 27 ] * xx [ 721 ] ; xx [ 701 ] = xx
[ 28 ] * xx [ 722 ] ; xx [ 702 ] = xx [ 28 ] * xx [ 723 ] ;
pm_math_Quaternion_xform_ra ( xx + 635 , xx + 700 , xx + 727 ) ; xx [ 690 ] =
xx [ 358 ] * xx [ 723 ] ; xx [ 692 ] = xx [ 358 ] * xx [ 722 ] ; xx [ 693 ] =
xx [ 690 ] * xx [ 634 ] - xx [ 632 ] * xx [ 692 ] ; xx [ 695 ] = xx [ 624 ] *
xx [ 692 ] ; xx [ 700 ] = xx [ 624 ] * xx [ 690 ] ; xx [ 701 ] = - xx [ 693 ]
; xx [ 702 ] = - xx [ 695 ] ; xx [ 703 ] = - xx [ 700 ] ;
pm_math_Vector3_cross_ra ( xx + 643 , xx + 701 , xx + 741 ) ; xx [ 701 ] = xx
[ 690 ] + ( xx [ 742 ] - xx [ 695 ] * xx [ 620 ] ) * xx [ 20 ] ; xx [ 744 ] =
xx [ 20 ] * ( xx [ 741 ] - xx [ 693 ] * xx [ 620 ] ) ; xx [ 745 ] = xx [ 701
] ; xx [ 746 ] = xx [ 20 ] * ( xx [ 743 ] - xx [ 700 ] * xx [ 620 ] ) - xx [
692 ] ; pm_math_Vector3_cross_ra ( xx + 675 , xx + 744 , xx + 741 ) ; xx [
690 ] = xx [ 625 ] + ( xx [ 639 ] * xx [ 647 ] + xx [ 653 ] ) * xx [ 20 ] +
xx [ 665 ] - ( xx [ 662 ] * xx [ 627 ] + xx [ 623 ] * xx [ 661 ] ) * xx [ 20
] + xx [ 134 ] ; xx [ 625 ] = ( ( xx [ 729 ] + xx [ 743 ] ) * xx [ 12 ] - (
xx [ 727 ] + xx [ 741 ] ) * xx [ 4 ] + xx [ 701 ] * xx [ 134 ] + xx [ 690 ] )
/ xx [ 699 ] ; xx [ 647 ] = xx [ 12 ] * xx [ 625 ] ; xx [ 692 ] = xx [ 4 ] *
xx [ 625 ] ; xx [ 693 ] = xx [ 624 ] * xx [ 647 ] - xx [ 692 ] * xx [ 634 ] ;
xx [ 695 ] = xx [ 632 ] * xx [ 692 ] ; xx [ 700 ] = xx [ 632 ] * xx [ 647 ] ;
xx [ 701 ] = - xx [ 693 ] ; xx [ 702 ] = xx [ 695 ] ;
pm_math_Vector3_cross_ra ( xx + 643 , xx + 700 , xx + 727 ) ; xx [ 700 ] = xx
[ 655 ] * xx [ 647 ] ; xx [ 701 ] = - ( xx [ 660 ] * xx [ 692 ] + xx [ 658 ]
* xx [ 647 ] + xx [ 134 ] * xx [ 625 ] ) ; xx [ 702 ] = xx [ 655 ] * xx [ 692
] ; pm_math_Quaternion_inverseXform_ra ( xx + 635 , xx + 700 , xx + 741 ) ;
xx [ 692 ] = xx [ 722 ] - ( ( xx [ 693 ] * xx [ 620 ] + xx [ 728 ] ) * xx [
410 ] - xx [ 412 ] * xx [ 743 ] ) ; xx [ 693 ] = xx [ 723 ] - ( xx [ 392 ] *
( ( xx [ 729 ] - xx [ 695 ] * xx [ 620 ] ) * xx [ 20 ] - xx [ 647 ] ) + xx [
412 ] * xx [ 742 ] ) ; xx [ 647 ] = xx [ 303 ] * xx [ 480 ] + xx [ 395 ] * xx
[ 479 ] + xx [ 453 ] * xx [ 491 ] + xx [ 302 ] * xx [ 493 ] + xx [ 362 ] * xx
[ 481 ] + xx [ 374 ] * xx [ 476 ] + xx [ 394 ] * xx [ 477 ] + xx [ 663 ] * xx
[ 625 ] - xx [ 659 ] * xx [ 692 ] - xx [ 633 ] * xx [ 693 ] ; xx [ 672 ] = xx
[ 674 ] + ( xx [ 687 ] + xx [ 641 ] * xx [ 651 ] ) * xx [ 20 ] - xx [ 79 ] ;
xx [ 651 ] = ( xx [ 670 ] + xx [ 641 ] * xx [ 669 ] ) * xx [ 20 ] + xx [ 680
] ; xx [ 678 ] = xx [ 84 ] ; xx [ 679 ] = - xx [ 672 ] ; xx [ 680 ] = - xx [
651 ] ; solveSymmetricPosDef ( xx + 380 , xx + 678 , 3 , 1 , xx + 700 , xx +
721 ) ; xx [ 678 ] = xx [ 27 ] * xx [ 700 ] ; xx [ 679 ] = xx [ 28 ] * xx [
701 ] ; xx [ 680 ] = xx [ 28 ] * xx [ 702 ] ; pm_math_Quaternion_xform_ra (
xx + 635 , xx + 678 , xx + 721 ) ; xx [ 669 ] = xx [ 358 ] * xx [ 702 ] ; xx
[ 670 ] = xx [ 358 ] * xx [ 701 ] ; xx [ 673 ] = xx [ 669 ] * xx [ 634 ] - xx
[ 632 ] * xx [ 670 ] ; xx [ 674 ] = xx [ 624 ] * xx [ 670 ] ; xx [ 678 ] = xx
[ 624 ] * xx [ 669 ] ; xx [ 727 ] = - xx [ 673 ] ; xx [ 728 ] = - xx [ 674 ]
; xx [ 729 ] = - xx [ 678 ] ; pm_math_Vector3_cross_ra ( xx + 643 , xx + 727
, xx + 741 ) ; xx [ 679 ] = xx [ 669 ] + ( xx [ 742 ] - xx [ 674 ] * xx [ 620
] ) * xx [ 20 ] ; xx [ 727 ] = xx [ 20 ] * ( xx [ 741 ] - xx [ 673 ] * xx [
620 ] ) ; xx [ 728 ] = xx [ 679 ] ; xx [ 729 ] = xx [ 20 ] * ( xx [ 743 ] -
xx [ 678 ] * xx [ 620 ] ) - xx [ 670 ] ; pm_math_Vector3_cross_ra ( xx + 675
, xx + 727 , xx + 741 ) ; xx [ 652 ] = ( xx [ 639 ] * xx [ 648 ] + xx [ 654 ]
) * xx [ 20 ] - xx [ 646 ] + xx [ 666 ] + ( xx [ 662 ] * xx [ 626 ] - xx [
661 ] * xx [ 622 ] ) * xx [ 20 ] ; xx [ 646 ] = ( ( xx [ 723 ] + xx [ 743 ] )
* xx [ 12 ] - ( xx [ 721 ] + xx [ 741 ] ) * xx [ 4 ] + xx [ 679 ] * xx [ 134
] + xx [ 652 ] ) / xx [ 699 ] ; xx [ 648 ] = xx [ 12 ] * xx [ 646 ] ; xx [
653 ] = xx [ 4 ] * xx [ 646 ] ; xx [ 654 ] = xx [ 624 ] * xx [ 648 ] - xx [
653 ] * xx [ 634 ] ; xx [ 661 ] = xx [ 632 ] * xx [ 653 ] ; xx [ 664 ] = xx [
632 ] * xx [ 648 ] ; xx [ 665 ] = - xx [ 654 ] ; xx [ 666 ] = xx [ 661 ] ;
pm_math_Vector3_cross_ra ( xx + 643 , xx + 664 , xx + 678 ) ; xx [ 664 ] = xx
[ 655 ] * xx [ 648 ] ; xx [ 665 ] = - ( xx [ 660 ] * xx [ 653 ] + xx [ 658 ]
* xx [ 648 ] + xx [ 134 ] * xx [ 646 ] ) ; xx [ 666 ] = xx [ 655 ] * xx [ 653
] ; pm_math_Quaternion_inverseXform_ra ( xx + 635 , xx + 664 , xx + 721 ) ;
xx [ 653 ] = xx [ 701 ] - ( ( xx [ 654 ] * xx [ 620 ] + xx [ 679 ] ) * xx [
410 ] - xx [ 412 ] * xx [ 723 ] ) ; xx [ 654 ] = xx [ 702 ] - ( xx [ 392 ] *
( ( xx [ 680 ] - xx [ 661 ] * xx [ 620 ] ) * xx [ 20 ] - xx [ 648 ] ) + xx [
412 ] * xx [ 722 ] ) ; xx [ 648 ] = xx [ 303 ] * xx [ 356 ] + xx [ 395 ] * xx
[ 368 ] + xx [ 453 ] * xx [ 370 ] + xx [ 302 ] * xx [ 484 ] + xx [ 362 ] * xx
[ 369 ] + xx [ 374 ] * xx [ 400 ] + xx [ 394 ] * xx [ 401 ] + xx [ 663 ] * xx
[ 646 ] - xx [ 659 ] * xx [ 653 ] - xx [ 633 ] * xx [ 654 ] ; xx [ 661 ] = xx
[ 303 ] * xx [ 504 ] + xx [ 395 ] * xx [ 508 ] + xx [ 453 ] * xx [ 513 ] + xx
[ 302 ] * xx [ 518 ] + xx [ 362 ] * xx [ 512 ] + xx [ 374 ] * xx [ 514 ] + xx
[ 394 ] * xx [ 515 ] ; xx [ 662 ] = xx [ 303 ] * xx [ 522 ] + xx [ 395 ] * xx
[ 526 ] + xx [ 453 ] * xx [ 540 ] + xx [ 302 ] * xx [ 542 ] + xx [ 362 ] * xx
[ 539 ] + xx [ 374 ] * xx [ 533 ] + xx [ 394 ] * xx [ 534 ] ; xx [ 664 ] = xx
[ 303 ] * xx [ 490 ] + xx [ 395 ] * xx [ 500 ] + xx [ 453 ] * xx [ 509 ] + xx
[ 302 ] * xx [ 511 ] + xx [ 362 ] * xx [ 505 ] + xx [ 374 ] * xx [ 510 ] + xx
[ 394 ] * xx [ 527 ] ; xx [ 665 ] = xx [ 303 ] * xx [ 551 ] + xx [ 395 ] * xx
[ 555 ] + xx [ 453 ] * xx [ 560 ] + xx [ 302 ] * xx [ 565 ] + xx [ 362 ] * xx
[ 559 ] + xx [ 374 ] * xx [ 561 ] + xx [ 394 ] * xx [ 562 ] ; xx [ 666 ] = xx
[ 303 ] * xx [ 569 ] + xx [ 395 ] * xx [ 573 ] + xx [ 453 ] * xx [ 587 ] + xx
[ 302 ] * xx [ 589 ] + xx [ 362 ] * xx [ 586 ] + xx [ 374 ] * xx [ 580 ] + xx
[ 394 ] * xx [ 581 ] ; xx [ 669 ] = xx [ 303 ] * xx [ 538 ] + xx [ 395 ] * xx
[ 545 ] + xx [ 453 ] * xx [ 547 ] + xx [ 302 ] * xx [ 576 ] + xx [ 362 ] * xx
[ 546 ] + xx [ 374 ] * xx [ 556 ] + xx [ 394 ] * xx [ 557 ] ; xx [ 670 ] = xx
[ 303 ] * xx [ 91 ] + xx [ 395 ] * xx [ 167 ] + xx [ 453 ] * xx [ 200 ] + xx
[ 302 ] * xx [ 251 ] + xx [ 362 ] * xx [ 188 ] + xx [ 374 ] * xx [ 203 ] + xx
[ 394 ] * xx [ 256 ] ; xx [ 673 ] = xx [ 303 ] * xx [ 92 ] + xx [ 395 ] * xx
[ 171 ] + xx [ 453 ] * xx [ 584 ] + xx [ 302 ] * xx [ 588 ] + xx [ 362 ] * xx
[ 292 ] + xx [ 374 ] * xx [ 585 ] + xx [ 394 ] * xx [ 593 ] ; xx [ 674 ] = xx
[ 303 ] * xx [ 93 ] + xx [ 395 ] * xx [ 142 ] + xx [ 453 ] * xx [ 144 ] + xx
[ 302 ] * xx [ 285 ] + xx [ 362 ] * xx [ 143 ] + xx [ 374 ] * xx [ 147 ] + xx
[ 394 ] * xx [ 293 ] ; xx [ 678 ] = xx [ 472 ] * xx [ 356 ] + xx [ 498 ] * xx
[ 368 ] + xx [ 499 ] * xx [ 370 ] + xx [ 501 ] * xx [ 484 ] + xx [ 473 ] * xx
[ 369 ] + xx [ 474 ] * xx [ 400 ] + xx [ 475 ] * xx [ 401 ] + xx [ 690 ] * xx
[ 646 ] - xx [ 686 ] * xx [ 653 ] - xx [ 656 ] * xx [ 654 ] ; xx [ 679 ] = xx
[ 472 ] * xx [ 504 ] + xx [ 498 ] * xx [ 508 ] + xx [ 499 ] * xx [ 513 ] + xx
[ 501 ] * xx [ 518 ] + xx [ 473 ] * xx [ 512 ] + xx [ 474 ] * xx [ 514 ] + xx
[ 475 ] * xx [ 515 ] ; xx [ 680 ] = xx [ 472 ] * xx [ 522 ] + xx [ 498 ] * xx
[ 526 ] + xx [ 499 ] * xx [ 540 ] + xx [ 501 ] * xx [ 542 ] + xx [ 473 ] * xx
[ 539 ] + xx [ 474 ] * xx [ 533 ] + xx [ 475 ] * xx [ 534 ] ; xx [ 687 ] = xx
[ 472 ] * xx [ 490 ] + xx [ 498 ] * xx [ 500 ] + xx [ 499 ] * xx [ 509 ] + xx
[ 501 ] * xx [ 511 ] + xx [ 473 ] * xx [ 505 ] + xx [ 474 ] * xx [ 510 ] + xx
[ 475 ] * xx [ 527 ] ; xx [ 695 ] = xx [ 472 ] * xx [ 551 ] + xx [ 498 ] * xx
[ 555 ] + xx [ 499 ] * xx [ 560 ] + xx [ 501 ] * xx [ 565 ] + xx [ 473 ] * xx
[ 559 ] + xx [ 474 ] * xx [ 561 ] + xx [ 475 ] * xx [ 562 ] ; xx [ 700 ] = xx
[ 472 ] * xx [ 569 ] + xx [ 498 ] * xx [ 573 ] + xx [ 499 ] * xx [ 587 ] + xx
[ 501 ] * xx [ 589 ] + xx [ 473 ] * xx [ 586 ] + xx [ 474 ] * xx [ 580 ] + xx
[ 475 ] * xx [ 581 ] ; xx [ 701 ] = xx [ 472 ] * xx [ 538 ] + xx [ 498 ] * xx
[ 545 ] + xx [ 499 ] * xx [ 547 ] + xx [ 501 ] * xx [ 576 ] + xx [ 473 ] * xx
[ 546 ] + xx [ 474 ] * xx [ 556 ] + xx [ 475 ] * xx [ 557 ] ; xx [ 702 ] = xx
[ 472 ] * xx [ 91 ] + xx [ 498 ] * xx [ 167 ] + xx [ 499 ] * xx [ 200 ] + xx
[ 501 ] * xx [ 251 ] + xx [ 473 ] * xx [ 188 ] + xx [ 474 ] * xx [ 203 ] + xx
[ 475 ] * xx [ 256 ] ; xx [ 703 ] = xx [ 472 ] * xx [ 92 ] + xx [ 498 ] * xx
[ 171 ] + xx [ 499 ] * xx [ 584 ] + xx [ 501 ] * xx [ 588 ] + xx [ 473 ] * xx
[ 292 ] + xx [ 474 ] * xx [ 585 ] + xx [ 475 ] * xx [ 593 ] ; xx [ 715 ] = xx
[ 472 ] * xx [ 93 ] + xx [ 498 ] * xx [ 142 ] + xx [ 499 ] * xx [ 144 ] + xx
[ 501 ] * xx [ 285 ] + xx [ 473 ] * xx [ 143 ] + xx [ 474 ] * xx [ 147 ] + xx
[ 475 ] * xx [ 293 ] ; xx [ 718 ] = xx [ 377 ] * xx [ 504 ] + xx [ 379 ] * xx
[ 508 ] + xx [ 391 ] * xx [ 513 ] + xx [ 483 ] * xx [ 518 ] + xx [ 378 ] * xx
[ 512 ] + xx [ 304 ] * xx [ 514 ] + xx [ 352 ] * xx [ 515 ] ; xx [ 721 ] = xx
[ 377 ] * xx [ 522 ] + xx [ 379 ] * xx [ 526 ] + xx [ 391 ] * xx [ 540 ] + xx
[ 483 ] * xx [ 542 ] + xx [ 378 ] * xx [ 539 ] + xx [ 304 ] * xx [ 533 ] + xx
[ 352 ] * xx [ 534 ] ; xx [ 722 ] = xx [ 377 ] * xx [ 490 ] + xx [ 379 ] * xx
[ 500 ] + xx [ 391 ] * xx [ 509 ] + xx [ 483 ] * xx [ 511 ] + xx [ 378 ] * xx
[ 505 ] + xx [ 304 ] * xx [ 510 ] + xx [ 352 ] * xx [ 527 ] ; xx [ 723 ] = xx
[ 377 ] * xx [ 551 ] + xx [ 379 ] * xx [ 555 ] + xx [ 391 ] * xx [ 560 ] + xx
[ 483 ] * xx [ 565 ] + xx [ 378 ] * xx [ 559 ] + xx [ 304 ] * xx [ 561 ] + xx
[ 352 ] * xx [ 562 ] ; xx [ 725 ] = xx [ 377 ] * xx [ 569 ] + xx [ 379 ] * xx
[ 573 ] + xx [ 391 ] * xx [ 587 ] + xx [ 483 ] * xx [ 589 ] + xx [ 378 ] * xx
[ 586 ] + xx [ 304 ] * xx [ 580 ] + xx [ 352 ] * xx [ 581 ] ; xx [ 727 ] = xx
[ 377 ] * xx [ 538 ] + xx [ 379 ] * xx [ 545 ] + xx [ 391 ] * xx [ 547 ] + xx
[ 483 ] * xx [ 576 ] + xx [ 378 ] * xx [ 546 ] + xx [ 304 ] * xx [ 556 ] + xx
[ 352 ] * xx [ 557 ] ; xx [ 728 ] = xx [ 377 ] * xx [ 91 ] + xx [ 379 ] * xx
[ 167 ] + xx [ 391 ] * xx [ 200 ] + xx [ 483 ] * xx [ 251 ] + xx [ 378 ] * xx
[ 188 ] + xx [ 304 ] * xx [ 203 ] + xx [ 352 ] * xx [ 256 ] ; xx [ 729 ] = xx
[ 377 ] * xx [ 92 ] + xx [ 379 ] * xx [ 171 ] + xx [ 391 ] * xx [ 584 ] + xx
[ 483 ] * xx [ 588 ] + xx [ 378 ] * xx [ 292 ] + xx [ 304 ] * xx [ 585 ] + xx
[ 352 ] * xx [ 593 ] ; xx [ 731 ] = xx [ 377 ] * xx [ 93 ] + xx [ 379 ] * xx
[ 142 ] + xx [ 391 ] * xx [ 144 ] + xx [ 483 ] * xx [ 285 ] + xx [ 378 ] * xx
[ 143 ] + xx [ 304 ] * xx [ 147 ] + xx [ 352 ] * xx [ 293 ] ; xx [ 733 ] =
0.8657710899485229 ; xx [ 735 ] = xx [ 55 ] * state [ 52 ] ; xx [ 737 ] = cos
( xx [ 735 ] ) ; xx [ 739 ] = xx [ 733 ] * xx [ 737 ] ; xx [ 741 ] = sin ( xx
[ 735 ] ) ; xx [ 735 ] = xx [ 4 ] * xx [ 741 ] ; xx [ 742 ] =
0.5004402260104068 ; xx [ 743 ] = xx [ 12 ] * xx [ 741 ] ; xx [ 741 ] = xx [
733 ] * xx [ 735 ] - xx [ 742 ] * xx [ 743 ] ; xx [ 744 ] = xx [ 742 ] * xx [
737 ] ; xx [ 737 ] = - xx [ 744 ] ; xx [ 745 ] = xx [ 733 ] * xx [ 743 ] + xx
[ 742 ] * xx [ 735 ] ; xx [ 746 ] = xx [ 739 ] ; xx [ 747 ] = xx [ 741 ] ; xx
[ 748 ] = xx [ 737 ] ; xx [ 749 ] = xx [ 745 ] ; xx [ 733 ] = xx [ 1 ] *
state [ 54 ] - xx [ 0 ] * state [ 56 ] ; xx [ 735 ] = xx [ 1 ] * state [ 55 ]
+ xx [ 0 ] * state [ 57 ] ; xx [ 742 ] = xx [ 1 ] * state [ 56 ] + xx [ 0 ] *
state [ 54 ] ; xx [ 743 ] = xx [ 1 ] * state [ 57 ] - xx [ 0 ] * state [ 55 ]
; xx [ 750 ] = xx [ 733 ] ; xx [ 751 ] = xx [ 735 ] ; xx [ 752 ] = xx [ 742 ]
; xx [ 753 ] = xx [ 743 ] ; pm_math_Quaternion_compose_ra ( xx + 746 , xx +
750 , xx + 754 ) ; xx [ 758 ] = xx [ 735 ] ; xx [ 759 ] = xx [ 742 ] ; xx [
760 ] = xx [ 743 ] ; xx [ 761 ] = xx [ 4 ] * xx [ 743 ] - xx [ 735 ] * xx [
12 ] ; xx [ 762 ] = xx [ 742 ] * xx [ 4 ] ; xx [ 763 ] = xx [ 742 ] * xx [ 12
] ; xx [ 764 ] = xx [ 761 ] ; xx [ 765 ] = - xx [ 762 ] ;
pm_math_Vector3_cross_ra ( xx + 758 , xx + 763 , xx + 766 ) ; xx [ 763 ] = xx
[ 338 ] * ( xx [ 767 ] - xx [ 761 ] * xx [ 733 ] ) ; xx [ 761 ] = ( xx [ 12 ]
+ xx [ 20 ] * ( xx [ 768 ] + xx [ 762 ] * xx [ 733 ] ) ) * xx [ 79 ] ; xx [
762 ] = xx [ 756 ] * xx [ 763 ] + xx [ 757 ] * xx [ 761 ] ; xx [ 764 ] = xx [
755 ] * xx [ 763 ] ; xx [ 765 ] = xx [ 755 ] * xx [ 761 ] ; xx [ 766 ] = - xx
[ 762 ] ; xx [ 767 ] = xx [ 764 ] ; xx [ 768 ] = xx [ 765 ] ;
pm_math_Vector3_cross_ra ( xx + 755 , xx + 766 , xx + 769 ) ; xx [ 766 ] = xx
[ 79 ] * xx [ 743 ] ; xx [ 767 ] = xx [ 766 ] * xx [ 733 ] ; xx [ 768 ] = xx
[ 742 ] * xx [ 79 ] ; xx [ 772 ] = ( xx [ 767 ] + xx [ 735 ] * xx [ 768 ] ) *
xx [ 20 ] ; xx [ 773 ] = xx [ 742 ] * xx [ 768 ] ; xx [ 774 ] = xx [ 766 ] *
xx [ 743 ] ; xx [ 775 ] = xx [ 81 ] + xx [ 79 ] - ( xx [ 773 ] + xx [ 774 ] )
* xx [ 20 ] ; xx [ 776 ] = xx [ 768 ] * xx [ 733 ] ; xx [ 777 ] = xx [ 20 ] *
( xx [ 735 ] * xx [ 766 ] - xx [ 776 ] ) - xx [ 106 ] ; xx [ 778 ] = - ( xx [
12 ] * xx [ 772 ] ) ; xx [ 779 ] = xx [ 775 ] * xx [ 12 ] - xx [ 777 ] * xx [
4 ] ; xx [ 780 ] = xx [ 4 ] * xx [ 772 ] ; pm_math_Quaternion_xform_ra ( xx +
746 , xx + 778 , xx + 781 ) ; xx [ 778 ] = xx [ 741 ] * xx [ 134 ] ; xx [ 779
] = xx [ 134 ] * xx [ 745 ] ; xx [ 780 ] = xx [ 20 ] * ( xx [ 769 ] - xx [
762 ] * xx [ 754 ] ) + xx [ 781 ] - xx [ 20 ] * ( xx [ 778 ] * xx [ 744 ] +
xx [ 779 ] * xx [ 739 ] ) ; xx [ 762 ] = xx [ 735 ] * xx [ 79 ] ; xx [ 784 ]
= xx [ 762 ] * xx [ 733 ] ; xx [ 785 ] = xx [ 735 ] * xx [ 762 ] ; xx [ 786 ]
= - ( ( xx [ 776 ] + xx [ 762 ] * xx [ 743 ] ) * xx [ 20 ] ) ; xx [ 787 ] =
xx [ 20 ] * ( xx [ 784 ] - xx [ 768 ] * xx [ 743 ] ) ; xx [ 788 ] = ( xx [
785 ] + xx [ 773 ] ) * xx [ 20 ] - xx [ 79 ] ; pm_math_Quaternion_xform_ra (
xx + 746 , xx + 786 , xx + 789 ) ; xx [ 768 ] = xx [ 79 ] * xx [ 756 ] ; xx [
773 ] = xx [ 79 ] * xx [ 755 ] ; xx [ 776 ] = xx [ 789 ] - ( xx [ 754 ] * xx
[ 768 ] + xx [ 757 ] * xx [ 773 ] ) * xx [ 20 ] ; xx [ 786 ] = xx [ 79 ] * xx
[ 757 ] ; xx [ 792 ] = xx [ 20 ] * ( xx [ 742 ] * xx [ 762 ] - xx [ 767 ] ) ;
xx [ 793 ] = xx [ 79 ] - ( xx [ 774 ] + xx [ 785 ] ) * xx [ 20 ] ; xx [ 794 ]
= ( xx [ 784 ] + xx [ 742 ] * xx [ 766 ] ) * xx [ 20 ] ;
pm_math_Quaternion_xform_ra ( xx + 746 , xx + 792 , xx + 795 ) ; xx [ 762 ] =
xx [ 20 ] * ( xx [ 756 ] * xx [ 773 ] - xx [ 754 ] * xx [ 786 ] ) + xx [ 795
] ; xx [ 792 ] = xx [ 84 ] ; xx [ 793 ] = - xx [ 776 ] ; xx [ 794 ] = - xx [
762 ] ; solveSymmetricPosDef ( xx + 380 , xx + 792 , 3 , 1 , xx + 798 , xx +
801 ) ; xx [ 792 ] = xx [ 27 ] * xx [ 798 ] ; xx [ 793 ] = xx [ 28 ] * xx [
799 ] ; xx [ 794 ] = xx [ 28 ] * xx [ 800 ] ; pm_math_Quaternion_xform_ra (
xx + 750 , xx + 792 , xx + 801 ) ; xx [ 792 ] = xx [ 775 ] ; xx [ 793 ] = xx
[ 772 ] ; xx [ 794 ] = xx [ 777 ] ; xx [ 766 ] = xx [ 358 ] * xx [ 799 ] ; xx
[ 767 ] = xx [ 358 ] * xx [ 800 ] ; xx [ 774 ] = xx [ 742 ] * xx [ 766 ] + xx
[ 767 ] * xx [ 743 ] ; xx [ 784 ] = xx [ 735 ] * xx [ 766 ] ; xx [ 785 ] = xx
[ 735 ] * xx [ 767 ] ; xx [ 804 ] = - xx [ 774 ] ; xx [ 805 ] = xx [ 784 ] ;
xx [ 806 ] = xx [ 785 ] ; pm_math_Vector3_cross_ra ( xx + 758 , xx + 804 , xx
+ 807 ) ; xx [ 787 ] = xx [ 767 ] + ( xx [ 784 ] * xx [ 733 ] + xx [ 808 ] )
* xx [ 20 ] ; xx [ 804 ] = xx [ 20 ] * ( xx [ 807 ] - xx [ 774 ] * xx [ 733 ]
) ; xx [ 805 ] = xx [ 787 ] ; xx [ 806 ] = xx [ 20 ] * ( xx [ 809 ] + xx [
785 ] * xx [ 733 ] ) - xx [ 766 ] ; pm_math_Vector3_cross_ra ( xx + 792 , xx
+ 804 , xx + 807 ) ; xx [ 766 ] = xx [ 735 ] * xx [ 742 ] ; xx [ 767 ] = xx [
743 ] * xx [ 733 ] ; xx [ 774 ] = xx [ 20 ] * ( xx [ 766 ] - xx [ 767 ] ) ;
xx [ 784 ] = xx [ 360 ] * xx [ 774 ] ; xx [ 785 ] = xx [ 735 ] * xx [ 743 ] ;
xx [ 788 ] = xx [ 742 ] * xx [ 733 ] ; xx [ 798 ] = ( xx [ 785 ] + xx [ 788 ]
) * xx [ 20 ] ; xx [ 802 ] = xx [ 360 ] * xx [ 798 ] ; xx [ 804 ] = xx [ 411
] * xx [ 774 ] ; xx [ 805 ] = xx [ 411 ] * xx [ 798 ] ; xx [ 806 ] = xx [ 798
] * xx [ 804 ] - xx [ 805 ] * xx [ 774 ] ; xx [ 808 ] = xx [ 733 ] * xx [ 733
] ; xx [ 810 ] = ( xx [ 808 ] + xx [ 742 ] * xx [ 742 ] ) * xx [ 20 ] - xx [
54 ] ; xx [ 811 ] = xx [ 742 ] * xx [ 743 ] ; xx [ 812 ] = xx [ 735 ] * xx [
733 ] ; xx [ 813 ] = xx [ 20 ] * ( xx [ 811 ] - xx [ 812 ] ) ; xx [ 814 ] = (
xx [ 811 ] + xx [ 812 ] ) * xx [ 20 ] ; xx [ 811 ] = ( xx [ 808 ] + xx [ 743
] * xx [ 743 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 812 ] = xx [ 814 ] * xx [ 805
] - xx [ 804 ] * xx [ 811 ] ; xx [ 815 ] = xx [ 411 ] * xx [ 813 ] ; xx [ 816
] = xx [ 411 ] * xx [ 810 ] ; xx [ 817 ] = xx [ 815 ] * xx [ 774 ] - xx [ 798
] * xx [ 816 ] ; xx [ 818 ] = xx [ 814 ] * xx [ 815 ] - xx [ 816 ] * xx [ 811
] ; xx [ 819 ] = xx [ 411 ] * xx [ 811 ] ; xx [ 820 ] = xx [ 411 ] * xx [ 814
] ; xx [ 821 ] = xx [ 819 ] * xx [ 774 ] - xx [ 798 ] * xx [ 820 ] ; xx [ 822
] = xx [ 820 ] * xx [ 811 ] - xx [ 814 ] * xx [ 819 ] ; xx [ 823 ] = - xx [
806 ] ; xx [ 824 ] = xx [ 805 ] * xx [ 810 ] - xx [ 804 ] * xx [ 813 ] ; xx [
825 ] = xx [ 812 ] ; xx [ 826 ] = xx [ 817 ] ; xx [ 827 ] = xx [ 815 ] * xx [
810 ] - xx [ 816 ] * xx [ 813 ] ; xx [ 828 ] = xx [ 818 ] ; xx [ 829 ] = xx [
821 ] ; xx [ 830 ] = xx [ 819 ] * xx [ 810 ] - xx [ 820 ] * xx [ 813 ] ; xx [
831 ] = - xx [ 822 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 823 , xx + 792 ,
xx + 832 ) ; xx [ 804 ] = ( xx [ 808 ] + xx [ 735 ] * xx [ 735 ] ) * xx [ 20
] - xx [ 54 ] ; xx [ 805 ] = xx [ 766 ] + xx [ 767 ] ; xx [ 766 ] = xx [ 805
] * xx [ 20 ] ; xx [ 767 ] = xx [ 785 ] - xx [ 788 ] ; xx [ 785 ] = xx [ 20 ]
* xx [ 767 ] ; xx [ 823 ] = xx [ 804 ] ; xx [ 824 ] = xx [ 766 ] ; xx [ 825 ]
= xx [ 785 ] ; xx [ 826 ] = xx [ 774 ] ; xx [ 827 ] = xx [ 810 ] ; xx [ 828 ]
= xx [ 814 ] ; xx [ 829 ] = xx [ 798 ] ; xx [ 830 ] = xx [ 813 ] ; xx [ 831 ]
= xx [ 811 ] ; xx [ 841 ] = xx [ 248 ] * xx [ 804 ] ; xx [ 842 ] = xx [ 407 ]
* xx [ 774 ] ; xx [ 843 ] = xx [ 407 ] * xx [ 798 ] ; xx [ 844 ] = xx [ 805 ]
* xx [ 417 ] ; xx [ 845 ] = xx [ 407 ] * xx [ 810 ] ; xx [ 846 ] = xx [ 407 ]
* xx [ 813 ] ; xx [ 847 ] = xx [ 417 ] * xx [ 767 ] ; xx [ 848 ] = xx [ 407 ]
* xx [ 814 ] ; xx [ 849 ] = xx [ 407 ] * xx [ 811 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 823 , xx + 841 , xx + 850 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 850 , xx + 792 , xx + 841 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 841 , xx + 792 , xx + 858 ) ; xx [ 767 ]
= xx [ 360 ] * xx [ 814 ] ; xx [ 788 ] = xx [ 360 ] * xx [ 811 ] ; xx [ 805 ]
= xx [ 817 ] - xx [ 842 ] ; xx [ 808 ] = xx [ 818 ] - xx [ 848 ] ; xx [ 815 ]
= xx [ 4 ] * xx [ 805 ] + xx [ 12 ] * xx [ 808 ] + ( xx [ 229 ] + xx [ 854 ]
) * xx [ 134 ] ; xx [ 816 ] = ( ( xx [ 215 ] + xx [ 784 ] * xx [ 774 ] + xx [
798 ] * xx [ 802 ] - xx [ 832 ] - xx [ 832 ] - xx [ 858 ] ) * xx [ 4 ] - ( xx
[ 838 ] - ( xx [ 767 ] * xx [ 774 ] + xx [ 798 ] * xx [ 788 ] ) + xx [ 834 ]
+ xx [ 864 ] ) * xx [ 12 ] + xx [ 134 ] * xx [ 805 ] ) * xx [ 4 ] + ( ( xx [
185 ] + xx [ 814 ] * xx [ 767 ] + xx [ 788 ] * xx [ 811 ] - xx [ 840 ] - xx [
840 ] - xx [ 866 ] ) * xx [ 12 ] - ( xx [ 834 ] - ( xx [ 814 ] * xx [ 784 ] +
xx [ 802 ] * xx [ 811 ] ) + xx [ 838 ] + xx [ 860 ] ) * xx [ 4 ] + xx [ 134 ]
* xx [ 808 ] ) * xx [ 12 ] + xx [ 815 ] * xx [ 134 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 816 , 1 , xx + 767 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 6/Revolute Joint 6' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 767 ] = ( ( xx [ 801 ] + xx [ 807 ] ) * xx [ 4 ] + (
xx [ 803 ] + xx [ 809 ] ) * xx [ 12 ] + xx [ 787 ] * xx [ 134 ] + xx [ 780 ]
) / xx [ 816 ] ; xx [ 784 ] = xx [ 4 ] * xx [ 767 ] ; xx [ 787 ] = xx [ 12 ]
* xx [ 767 ] ; xx [ 788 ] = xx [ 784 ] * xx [ 743 ] - xx [ 735 ] * xx [ 787 ]
; xx [ 801 ] = xx [ 742 ] * xx [ 784 ] ; xx [ 807 ] = - ( xx [ 742 ] * xx [
787 ] ) ; xx [ 808 ] = - xx [ 788 ] ; xx [ 809 ] = xx [ 801 ] ;
pm_math_Vector3_cross_ra ( xx + 758 , xx + 807 , xx + 817 ) ; xx [ 807 ] = xx
[ 772 ] * xx [ 787 ] ; xx [ 808 ] = xx [ 777 ] * xx [ 784 ] - xx [ 775 ] * xx
[ 787 ] - xx [ 134 ] * xx [ 767 ] ; xx [ 809 ] = - ( xx [ 772 ] * xx [ 784 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 750 , xx + 807 , xx + 832 ) ;
xx [ 784 ] = xx [ 754 ] * xx [ 773 ] ; xx [ 802 ] = xx [ 20 ] * ( xx [ 784 ]
- xx [ 757 ] * xx [ 768 ] ) + xx [ 790 ] ; xx [ 803 ] = xx [ 755 ] * xx [ 773
] ; xx [ 773 ] = xx [ 796 ] - ( xx [ 757 ] * xx [ 786 ] + xx [ 803 ] ) * xx [
20 ] + xx [ 79 ] ; xx [ 807 ] = xx [ 84 ] ; xx [ 808 ] = - xx [ 802 ] ; xx [
809 ] = - xx [ 773 ] ; solveSymmetricPosDef ( xx + 380 , xx + 807 , 3 , 1 ,
xx + 835 , xx + 838 ) ; xx [ 807 ] = xx [ 27 ] * xx [ 835 ] ; xx [ 808 ] = xx
[ 28 ] * xx [ 836 ] ; xx [ 809 ] = xx [ 28 ] * xx [ 837 ] ;
pm_math_Quaternion_xform_ra ( xx + 750 , xx + 807 , xx + 838 ) ; xx [ 805 ] =
xx [ 358 ] * xx [ 836 ] ; xx [ 807 ] = xx [ 358 ] * xx [ 837 ] ; xx [ 808 ] =
xx [ 742 ] * xx [ 805 ] + xx [ 807 ] * xx [ 743 ] ; xx [ 809 ] = xx [ 735 ] *
xx [ 805 ] ; xx [ 817 ] = xx [ 735 ] * xx [ 807 ] ; xx [ 844 ] = - xx [ 808 ]
; xx [ 845 ] = xx [ 809 ] ; xx [ 846 ] = xx [ 817 ] ;
pm_math_Vector3_cross_ra ( xx + 758 , xx + 844 , xx + 858 ) ; xx [ 820 ] = xx
[ 807 ] + ( xx [ 809 ] * xx [ 733 ] + xx [ 859 ] ) * xx [ 20 ] ; xx [ 844 ] =
xx [ 20 ] * ( xx [ 858 ] - xx [ 808 ] * xx [ 733 ] ) ; xx [ 845 ] = xx [ 820
] ; xx [ 846 ] = xx [ 20 ] * ( xx [ 860 ] + xx [ 817 ] * xx [ 733 ] ) - xx [
805 ] ; pm_math_Vector3_cross_ra ( xx + 792 , xx + 844 , xx + 807 ) ; xx [
805 ] = xx [ 761 ] + ( xx [ 754 ] * xx [ 764 ] + xx [ 770 ] ) * xx [ 20 ] +
xx [ 782 ] - ( xx [ 779 ] * xx [ 745 ] + xx [ 741 ] * xx [ 778 ] ) * xx [ 20
] + xx [ 134 ] ; xx [ 761 ] = ( ( xx [ 838 ] + xx [ 807 ] ) * xx [ 4 ] + ( xx
[ 840 ] + xx [ 809 ] ) * xx [ 12 ] + xx [ 820 ] * xx [ 134 ] + xx [ 805 ] ) /
xx [ 816 ] ; xx [ 764 ] = xx [ 4 ] * xx [ 761 ] ; xx [ 807 ] = xx [ 12 ] * xx
[ 761 ] ; xx [ 808 ] = xx [ 764 ] * xx [ 743 ] - xx [ 735 ] * xx [ 807 ] ; xx
[ 809 ] = xx [ 742 ] * xx [ 764 ] ; xx [ 838 ] = - ( xx [ 742 ] * xx [ 807 ]
) ; xx [ 839 ] = - xx [ 808 ] ; xx [ 840 ] = xx [ 809 ] ;
pm_math_Vector3_cross_ra ( xx + 758 , xx + 838 , xx + 844 ) ; xx [ 838 ] = xx
[ 772 ] * xx [ 807 ] ; xx [ 839 ] = xx [ 777 ] * xx [ 764 ] - xx [ 775 ] * xx
[ 807 ] - xx [ 134 ] * xx [ 761 ] ; xx [ 840 ] = - ( xx [ 772 ] * xx [ 764 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 750 , xx + 838 , xx + 858 ) ;
xx [ 764 ] = xx [ 836 ] - ( ( xx [ 808 ] * xx [ 733 ] + xx [ 845 ] ) * xx [
410 ] - xx [ 412 ] * xx [ 860 ] ) ; xx [ 808 ] = xx [ 837 ] - ( xx [ 392 ] *
( ( xx [ 846 ] - xx [ 809 ] * xx [ 733 ] ) * xx [ 20 ] - xx [ 807 ] ) + xx [
412 ] * xx [ 859 ] ) ; xx [ 807 ] = xx [ 487 ] * xx [ 522 ] + xx [ 507 ] * xx
[ 526 ] + xx [ 524 ] * xx [ 540 ] + xx [ 486 ] * xx [ 542 ] + xx [ 492 ] * xx
[ 539 ] + xx [ 503 ] * xx [ 533 ] + xx [ 506 ] * xx [ 534 ] + xx [ 780 ] * xx
[ 761 ] - xx [ 776 ] * xx [ 764 ] - xx [ 762 ] * xx [ 808 ] ; xx [ 789 ] = xx
[ 791 ] + ( xx [ 803 ] + xx [ 756 ] * xx [ 768 ] ) * xx [ 20 ] - xx [ 79 ] ;
xx [ 768 ] = ( xx [ 784 ] + xx [ 756 ] * xx [ 786 ] ) * xx [ 20 ] + xx [ 797
] ; xx [ 795 ] = xx [ 84 ] ; xx [ 796 ] = - xx [ 789 ] ; xx [ 797 ] = - xx [
768 ] ; solveSymmetricPosDef ( xx + 380 , xx + 795 , 3 , 1 , xx + 835 , xx +
838 ) ; xx [ 795 ] = xx [ 27 ] * xx [ 835 ] ; xx [ 796 ] = xx [ 28 ] * xx [
836 ] ; xx [ 797 ] = xx [ 28 ] * xx [ 837 ] ; pm_math_Quaternion_xform_ra (
xx + 750 , xx + 795 , xx + 838 ) ; xx [ 784 ] = xx [ 358 ] * xx [ 836 ] ; xx
[ 786 ] = xx [ 358 ] * xx [ 837 ] ; xx [ 790 ] = xx [ 742 ] * xx [ 784 ] + xx
[ 786 ] * xx [ 743 ] ; xx [ 791 ] = xx [ 735 ] * xx [ 784 ] ; xx [ 795 ] = xx
[ 735 ] * xx [ 786 ] ; xx [ 844 ] = - xx [ 790 ] ; xx [ 845 ] = xx [ 791 ] ;
xx [ 846 ] = xx [ 795 ] ; pm_math_Vector3_cross_ra ( xx + 758 , xx + 844 , xx
+ 858 ) ; xx [ 796 ] = xx [ 786 ] + ( xx [ 791 ] * xx [ 733 ] + xx [ 859 ] )
* xx [ 20 ] ; xx [ 844 ] = xx [ 20 ] * ( xx [ 858 ] - xx [ 790 ] * xx [ 733 ]
) ; xx [ 845 ] = xx [ 796 ] ; xx [ 846 ] = xx [ 20 ] * ( xx [ 860 ] + xx [
795 ] * xx [ 733 ] ) - xx [ 784 ] ; pm_math_Vector3_cross_ra ( xx + 792 , xx
+ 844 , xx + 858 ) ; xx [ 769 ] = ( xx [ 754 ] * xx [ 765 ] + xx [ 771 ] ) *
xx [ 20 ] - xx [ 763 ] + xx [ 783 ] + ( xx [ 778 ] * xx [ 739 ] - xx [ 779 ]
* xx [ 744 ] ) * xx [ 20 ] ; xx [ 763 ] = ( ( xx [ 838 ] + xx [ 858 ] ) * xx
[ 4 ] + ( xx [ 840 ] + xx [ 860 ] ) * xx [ 12 ] + xx [ 796 ] * xx [ 134 ] +
xx [ 769 ] ) / xx [ 816 ] ; xx [ 765 ] = xx [ 4 ] * xx [ 763 ] ; xx [ 770 ] =
xx [ 12 ] * xx [ 763 ] ; xx [ 771 ] = xx [ 765 ] * xx [ 743 ] - xx [ 735 ] *
xx [ 770 ] ; xx [ 778 ] = xx [ 742 ] * xx [ 765 ] ; xx [ 781 ] = - ( xx [ 742
] * xx [ 770 ] ) ; xx [ 782 ] = - xx [ 771 ] ; xx [ 783 ] = xx [ 778 ] ;
pm_math_Vector3_cross_ra ( xx + 758 , xx + 781 , xx + 795 ) ; xx [ 781 ] = xx
[ 772 ] * xx [ 770 ] ; xx [ 782 ] = xx [ 777 ] * xx [ 765 ] - xx [ 775 ] * xx
[ 770 ] - xx [ 134 ] * xx [ 763 ] ; xx [ 783 ] = - ( xx [ 772 ] * xx [ 765 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 750 , xx + 781 , xx + 838 ) ;
xx [ 765 ] = xx [ 836 ] - ( ( xx [ 771 ] * xx [ 733 ] + xx [ 796 ] ) * xx [
410 ] - xx [ 412 ] * xx [ 840 ] ) ; xx [ 771 ] = xx [ 837 ] - ( xx [ 392 ] *
( ( xx [ 797 ] - xx [ 778 ] * xx [ 733 ] ) * xx [ 20 ] - xx [ 770 ] ) + xx [
412 ] * xx [ 839 ] ) ; xx [ 770 ] = xx [ 487 ] * xx [ 490 ] + xx [ 507 ] * xx
[ 500 ] + xx [ 524 ] * xx [ 509 ] + xx [ 486 ] * xx [ 511 ] + xx [ 492 ] * xx
[ 505 ] + xx [ 503 ] * xx [ 510 ] + xx [ 506 ] * xx [ 527 ] + xx [ 780 ] * xx
[ 763 ] - xx [ 776 ] * xx [ 765 ] - xx [ 762 ] * xx [ 771 ] ; xx [ 778 ] = xx
[ 487 ] * xx [ 551 ] + xx [ 507 ] * xx [ 555 ] + xx [ 524 ] * xx [ 560 ] + xx
[ 486 ] * xx [ 565 ] + xx [ 492 ] * xx [ 559 ] + xx [ 503 ] * xx [ 561 ] + xx
[ 506 ] * xx [ 562 ] ; xx [ 779 ] = xx [ 487 ] * xx [ 569 ] + xx [ 507 ] * xx
[ 573 ] + xx [ 524 ] * xx [ 587 ] + xx [ 486 ] * xx [ 589 ] + xx [ 492 ] * xx
[ 586 ] + xx [ 503 ] * xx [ 580 ] + xx [ 506 ] * xx [ 581 ] ; xx [ 781 ] = xx
[ 487 ] * xx [ 538 ] + xx [ 507 ] * xx [ 545 ] + xx [ 524 ] * xx [ 547 ] + xx
[ 486 ] * xx [ 576 ] + xx [ 492 ] * xx [ 546 ] + xx [ 503 ] * xx [ 556 ] + xx
[ 506 ] * xx [ 557 ] ; xx [ 782 ] = xx [ 487 ] * xx [ 91 ] + xx [ 507 ] * xx
[ 167 ] + xx [ 524 ] * xx [ 200 ] + xx [ 486 ] * xx [ 251 ] + xx [ 492 ] * xx
[ 188 ] + xx [ 503 ] * xx [ 203 ] + xx [ 506 ] * xx [ 256 ] ; xx [ 783 ] = xx
[ 487 ] * xx [ 92 ] + xx [ 507 ] * xx [ 171 ] + xx [ 524 ] * xx [ 584 ] + xx
[ 486 ] * xx [ 588 ] + xx [ 492 ] * xx [ 292 ] + xx [ 503 ] * xx [ 585 ] + xx
[ 506 ] * xx [ 593 ] ; xx [ 784 ] = xx [ 487 ] * xx [ 93 ] + xx [ 507 ] * xx
[ 142 ] + xx [ 524 ] * xx [ 144 ] + xx [ 486 ] * xx [ 285 ] + xx [ 492 ] * xx
[ 143 ] + xx [ 503 ] * xx [ 147 ] + xx [ 506 ] * xx [ 293 ] ; xx [ 786 ] = xx
[ 517 ] * xx [ 490 ] + xx [ 523 ] * xx [ 500 ] + xx [ 525 ] * xx [ 509 ] + xx
[ 548 ] * xx [ 511 ] + xx [ 519 ] * xx [ 505 ] + xx [ 520 ] * xx [ 510 ] + xx
[ 521 ] * xx [ 527 ] + xx [ 805 ] * xx [ 763 ] - xx [ 802 ] * xx [ 765 ] - xx
[ 773 ] * xx [ 771 ] ; xx [ 790 ] = xx [ 517 ] * xx [ 551 ] + xx [ 523 ] * xx
[ 555 ] + xx [ 525 ] * xx [ 560 ] + xx [ 548 ] * xx [ 565 ] + xx [ 519 ] * xx
[ 559 ] + xx [ 520 ] * xx [ 561 ] + xx [ 521 ] * xx [ 562 ] ; xx [ 791 ] = xx
[ 517 ] * xx [ 569 ] + xx [ 523 ] * xx [ 573 ] + xx [ 525 ] * xx [ 587 ] + xx
[ 548 ] * xx [ 589 ] + xx [ 519 ] * xx [ 586 ] + xx [ 520 ] * xx [ 580 ] + xx
[ 521 ] * xx [ 581 ] ; xx [ 795 ] = xx [ 517 ] * xx [ 538 ] + xx [ 523 ] * xx
[ 545 ] + xx [ 525 ] * xx [ 547 ] + xx [ 548 ] * xx [ 576 ] + xx [ 519 ] * xx
[ 546 ] + xx [ 520 ] * xx [ 556 ] + xx [ 521 ] * xx [ 557 ] ; xx [ 796 ] = xx
[ 517 ] * xx [ 91 ] + xx [ 523 ] * xx [ 167 ] + xx [ 525 ] * xx [ 200 ] + xx
[ 548 ] * xx [ 251 ] + xx [ 519 ] * xx [ 188 ] + xx [ 520 ] * xx [ 203 ] + xx
[ 521 ] * xx [ 256 ] ; xx [ 797 ] = xx [ 517 ] * xx [ 92 ] + xx [ 523 ] * xx
[ 171 ] + xx [ 525 ] * xx [ 584 ] + xx [ 548 ] * xx [ 588 ] + xx [ 519 ] * xx
[ 292 ] + xx [ 520 ] * xx [ 585 ] + xx [ 521 ] * xx [ 593 ] ; xx [ 803 ] = xx
[ 517 ] * xx [ 93 ] + xx [ 523 ] * xx [ 142 ] + xx [ 525 ] * xx [ 144 ] + xx
[ 548 ] * xx [ 285 ] + xx [ 519 ] * xx [ 143 ] + xx [ 520 ] * xx [ 147 ] + xx
[ 521 ] * xx [ 293 ] ; xx [ 809 ] = xx [ 494 ] * xx [ 551 ] + xx [ 496 ] * xx
[ 555 ] + xx [ 497 ] * xx [ 560 ] + xx [ 502 ] * xx [ 565 ] + xx [ 495 ] * xx
[ 559 ] + xx [ 488 ] * xx [ 561 ] + xx [ 489 ] * xx [ 562 ] ; xx [ 817 ] = xx
[ 494 ] * xx [ 569 ] + xx [ 496 ] * xx [ 573 ] + xx [ 497 ] * xx [ 587 ] + xx
[ 502 ] * xx [ 589 ] + xx [ 495 ] * xx [ 586 ] + xx [ 488 ] * xx [ 580 ] + xx
[ 489 ] * xx [ 581 ] ; xx [ 820 ] = xx [ 494 ] * xx [ 538 ] + xx [ 496 ] * xx
[ 545 ] + xx [ 497 ] * xx [ 547 ] + xx [ 502 ] * xx [ 576 ] + xx [ 495 ] * xx
[ 546 ] + xx [ 488 ] * xx [ 556 ] + xx [ 489 ] * xx [ 557 ] ; xx [ 832 ] = xx
[ 494 ] * xx [ 91 ] + xx [ 496 ] * xx [ 167 ] + xx [ 497 ] * xx [ 200 ] + xx
[ 502 ] * xx [ 251 ] + xx [ 495 ] * xx [ 188 ] + xx [ 488 ] * xx [ 203 ] + xx
[ 489 ] * xx [ 256 ] ; xx [ 835 ] = xx [ 494 ] * xx [ 92 ] + xx [ 496 ] * xx
[ 171 ] + xx [ 497 ] * xx [ 584 ] + xx [ 502 ] * xx [ 588 ] + xx [ 495 ] * xx
[ 292 ] + xx [ 488 ] * xx [ 585 ] + xx [ 489 ] * xx [ 593 ] ; xx [ 836 ] = xx
[ 494 ] * xx [ 93 ] + xx [ 496 ] * xx [ 142 ] + xx [ 497 ] * xx [ 144 ] + xx
[ 502 ] * xx [ 285 ] + xx [ 495 ] * xx [ 143 ] + xx [ 488 ] * xx [ 147 ] + xx
[ 489 ] * xx [ 293 ] ; xx [ 837 ] = 0.8662794937748999 ; xx [ 838 ] = xx [ 55
] * state [ 16 ] ; xx [ 839 ] = cos ( xx [ 838 ] ) ; xx [ 840 ] = xx [ 837 ]
* xx [ 839 ] ; xx [ 842 ] = sin ( xx [ 838 ] ) ; xx [ 838 ] = xx [ 4 ] * xx [
842 ] ; xx [ 844 ] = 0.4995596447523596 ; xx [ 845 ] = xx [ 12 ] * xx [ 842 ]
; xx [ 842 ] = xx [ 837 ] * xx [ 838 ] + xx [ 844 ] * xx [ 845 ] ; xx [ 846 ]
= - xx [ 842 ] ; xx [ 848 ] = xx [ 844 ] * xx [ 839 ] ; xx [ 839 ] = - xx [
848 ] ; xx [ 850 ] = xx [ 844 ] * xx [ 838 ] - xx [ 837 ] * xx [ 845 ] ; xx [
858 ] = - xx [ 840 ] ; xx [ 859 ] = xx [ 846 ] ; xx [ 860 ] = xx [ 839 ] ; xx
[ 861 ] = xx [ 850 ] ; xx [ 837 ] = xx [ 1 ] * state [ 18 ] - xx [ 0 ] *
state [ 20 ] ; xx [ 838 ] = xx [ 1 ] * state [ 19 ] + xx [ 0 ] * state [ 21 ]
; xx [ 844 ] = xx [ 1 ] * state [ 20 ] + xx [ 0 ] * state [ 18 ] ; xx [ 845 ]
= xx [ 1 ] * state [ 21 ] - xx [ 0 ] * state [ 19 ] ; xx [ 862 ] = xx [ 837 ]
; xx [ 863 ] = xx [ 838 ] ; xx [ 864 ] = xx [ 844 ] ; xx [ 865 ] = xx [ 845 ]
; pm_math_Quaternion_compose_ra ( xx + 858 , xx + 862 , xx + 866 ) ; xx [ 870
] = xx [ 838 ] ; xx [ 871 ] = xx [ 844 ] ; xx [ 872 ] = xx [ 845 ] ; xx [ 852
] = xx [ 4 ] * xx [ 845 ] - xx [ 838 ] * xx [ 12 ] ; xx [ 854 ] = xx [ 844 ]
* xx [ 4 ] ; xx [ 873 ] = xx [ 844 ] * xx [ 12 ] ; xx [ 874 ] = xx [ 852 ] ;
xx [ 875 ] = - xx [ 854 ] ; pm_math_Vector3_cross_ra ( xx + 870 , xx + 873 ,
xx + 876 ) ; xx [ 856 ] = xx [ 338 ] * ( xx [ 877 ] - xx [ 852 ] * xx [ 837 ]
) ; xx [ 852 ] = ( xx [ 12 ] + xx [ 20 ] * ( xx [ 878 ] + xx [ 854 ] * xx [
837 ] ) ) * xx [ 79 ] ; xx [ 854 ] = xx [ 868 ] * xx [ 856 ] + xx [ 869 ] *
xx [ 852 ] ; xx [ 873 ] = xx [ 867 ] * xx [ 856 ] ; xx [ 874 ] = xx [ 867 ] *
xx [ 852 ] ; xx [ 875 ] = - xx [ 854 ] ; xx [ 876 ] = xx [ 873 ] ; xx [ 877 ]
= xx [ 874 ] ; pm_math_Vector3_cross_ra ( xx + 867 , xx + 875 , xx + 878 ) ;
xx [ 875 ] = xx [ 79 ] * xx [ 845 ] ; xx [ 876 ] = xx [ 875 ] * xx [ 837 ] ;
xx [ 877 ] = xx [ 844 ] * xx [ 79 ] ; xx [ 881 ] = ( xx [ 876 ] + xx [ 838 ]
* xx [ 877 ] ) * xx [ 20 ] ; xx [ 882 ] = xx [ 844 ] * xx [ 877 ] ; xx [ 883
] = xx [ 875 ] * xx [ 845 ] ; xx [ 884 ] = xx [ 81 ] + xx [ 79 ] - ( xx [ 882
] + xx [ 883 ] ) * xx [ 20 ] ; xx [ 885 ] = xx [ 877 ] * xx [ 837 ] ; xx [
886 ] = xx [ 20 ] * ( xx [ 838 ] * xx [ 875 ] - xx [ 885 ] ) - xx [ 106 ] ;
xx [ 887 ] = - ( xx [ 12 ] * xx [ 881 ] ) ; xx [ 888 ] = xx [ 884 ] * xx [ 12
] - xx [ 886 ] * xx [ 4 ] ; xx [ 889 ] = xx [ 4 ] * xx [ 881 ] ;
pm_math_Quaternion_xform_ra ( xx + 858 , xx + 887 , xx + 890 ) ; xx [ 887 ] =
xx [ 842 ] * xx [ 134 ] ; xx [ 888 ] = xx [ 134 ] * xx [ 850 ] ; xx [ 889 ] =
xx [ 20 ] * ( xx [ 878 ] - xx [ 854 ] * xx [ 866 ] ) + xx [ 890 ] + xx [ 20 ]
* ( xx [ 887 ] * xx [ 848 ] + xx [ 888 ] * xx [ 840 ] ) ; xx [ 854 ] = xx [
838 ] * xx [ 79 ] ; xx [ 893 ] = xx [ 854 ] * xx [ 837 ] ; xx [ 894 ] = xx [
838 ] * xx [ 854 ] ; xx [ 895 ] = - ( ( xx [ 885 ] + xx [ 854 ] * xx [ 845 ]
) * xx [ 20 ] ) ; xx [ 896 ] = xx [ 20 ] * ( xx [ 893 ] - xx [ 877 ] * xx [
845 ] ) ; xx [ 897 ] = ( xx [ 894 ] + xx [ 882 ] ) * xx [ 20 ] - xx [ 79 ] ;
pm_math_Quaternion_xform_ra ( xx + 858 , xx + 895 , xx + 898 ) ; xx [ 877 ] =
xx [ 79 ] * xx [ 868 ] ; xx [ 882 ] = xx [ 79 ] * xx [ 867 ] ; xx [ 885 ] =
xx [ 898 ] - ( xx [ 866 ] * xx [ 877 ] + xx [ 869 ] * xx [ 882 ] ) * xx [ 20
] ; xx [ 895 ] = xx [ 79 ] * xx [ 869 ] ; xx [ 901 ] = xx [ 20 ] * ( xx [ 844
] * xx [ 854 ] - xx [ 876 ] ) ; xx [ 902 ] = xx [ 79 ] - ( xx [ 883 ] + xx [
894 ] ) * xx [ 20 ] ; xx [ 903 ] = ( xx [ 893 ] + xx [ 844 ] * xx [ 875 ] ) *
xx [ 20 ] ; pm_math_Quaternion_xform_ra ( xx + 858 , xx + 901 , xx + 904 ) ;
xx [ 854 ] = xx [ 20 ] * ( xx [ 868 ] * xx [ 882 ] - xx [ 866 ] * xx [ 895 ]
) + xx [ 904 ] ; xx [ 901 ] = xx [ 84 ] ; xx [ 902 ] = - xx [ 885 ] ; xx [
903 ] = - xx [ 854 ] ; solveSymmetricPosDef ( xx + 380 , xx + 901 , 3 , 1 ,
xx + 907 , xx + 910 ) ; xx [ 901 ] = xx [ 27 ] * xx [ 907 ] ; xx [ 902 ] = xx
[ 28 ] * xx [ 908 ] ; xx [ 903 ] = xx [ 28 ] * xx [ 909 ] ;
pm_math_Quaternion_xform_ra ( xx + 862 , xx + 901 , xx + 910 ) ; xx [ 901 ] =
xx [ 884 ] ; xx [ 902 ] = xx [ 881 ] ; xx [ 903 ] = xx [ 886 ] ; xx [ 875 ] =
xx [ 358 ] * xx [ 908 ] ; xx [ 876 ] = xx [ 358 ] * xx [ 909 ] ; xx [ 883 ] =
xx [ 844 ] * xx [ 875 ] + xx [ 876 ] * xx [ 845 ] ; xx [ 893 ] = xx [ 838 ] *
xx [ 875 ] ; xx [ 894 ] = xx [ 838 ] * xx [ 876 ] ; xx [ 913 ] = - xx [ 883 ]
; xx [ 914 ] = xx [ 893 ] ; xx [ 915 ] = xx [ 894 ] ;
pm_math_Vector3_cross_ra ( xx + 870 , xx + 913 , xx + 916 ) ; xx [ 896 ] = xx
[ 876 ] + ( xx [ 893 ] * xx [ 837 ] + xx [ 917 ] ) * xx [ 20 ] ; xx [ 913 ] =
xx [ 20 ] * ( xx [ 916 ] - xx [ 883 ] * xx [ 837 ] ) ; xx [ 914 ] = xx [ 896
] ; xx [ 915 ] = xx [ 20 ] * ( xx [ 918 ] + xx [ 894 ] * xx [ 837 ] ) - xx [
875 ] ; pm_math_Vector3_cross_ra ( xx + 901 , xx + 913 , xx + 916 ) ; xx [
875 ] = xx [ 838 ] * xx [ 844 ] ; xx [ 876 ] = xx [ 845 ] * xx [ 837 ] ; xx [
883 ] = xx [ 20 ] * ( xx [ 875 ] - xx [ 876 ] ) ; xx [ 893 ] = xx [ 360 ] *
xx [ 883 ] ; xx [ 894 ] = xx [ 838 ] * xx [ 845 ] ; xx [ 897 ] = xx [ 844 ] *
xx [ 837 ] ; xx [ 907 ] = ( xx [ 894 ] + xx [ 897 ] ) * xx [ 20 ] ; xx [ 911
] = xx [ 360 ] * xx [ 907 ] ; xx [ 913 ] = xx [ 411 ] * xx [ 883 ] ; xx [ 914
] = xx [ 411 ] * xx [ 907 ] ; xx [ 915 ] = xx [ 907 ] * xx [ 913 ] - xx [ 914
] * xx [ 883 ] ; xx [ 917 ] = xx [ 837 ] * xx [ 837 ] ; xx [ 919 ] = ( xx [
917 ] + xx [ 844 ] * xx [ 844 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 920 ] = xx [
844 ] * xx [ 845 ] ; xx [ 921 ] = xx [ 838 ] * xx [ 837 ] ; xx [ 922 ] = xx [
20 ] * ( xx [ 920 ] - xx [ 921 ] ) ; xx [ 923 ] = ( xx [ 920 ] + xx [ 921 ] )
* xx [ 20 ] ; xx [ 920 ] = ( xx [ 917 ] + xx [ 845 ] * xx [ 845 ] ) * xx [ 20
] - xx [ 54 ] ; xx [ 921 ] = xx [ 923 ] * xx [ 914 ] - xx [ 913 ] * xx [ 920
] ; xx [ 924 ] = xx [ 411 ] * xx [ 922 ] ; xx [ 925 ] = xx [ 411 ] * xx [ 919
] ; xx [ 926 ] = xx [ 924 ] * xx [ 883 ] - xx [ 907 ] * xx [ 925 ] ; xx [ 927
] = xx [ 923 ] * xx [ 924 ] - xx [ 925 ] * xx [ 920 ] ; xx [ 928 ] = xx [ 411
] * xx [ 920 ] ; xx [ 929 ] = xx [ 411 ] * xx [ 923 ] ; xx [ 930 ] = xx [ 928
] * xx [ 883 ] - xx [ 907 ] * xx [ 929 ] ; xx [ 931 ] = xx [ 929 ] * xx [ 920
] - xx [ 923 ] * xx [ 928 ] ; xx [ 932 ] = - xx [ 915 ] ; xx [ 933 ] = xx [
914 ] * xx [ 919 ] - xx [ 913 ] * xx [ 922 ] ; xx [ 934 ] = xx [ 921 ] ; xx [
935 ] = xx [ 926 ] ; xx [ 936 ] = xx [ 924 ] * xx [ 919 ] - xx [ 925 ] * xx [
922 ] ; xx [ 937 ] = xx [ 927 ] ; xx [ 938 ] = xx [ 930 ] ; xx [ 939 ] = xx [
928 ] * xx [ 919 ] - xx [ 929 ] * xx [ 922 ] ; xx [ 940 ] = - xx [ 931 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 932 , xx + 901 , xx + 941 ) ; xx [ 913
] = ( xx [ 917 ] + xx [ 838 ] * xx [ 838 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [
914 ] = xx [ 875 ] + xx [ 876 ] ; xx [ 875 ] = xx [ 914 ] * xx [ 20 ] ; xx [
876 ] = xx [ 894 ] - xx [ 897 ] ; xx [ 894 ] = xx [ 20 ] * xx [ 876 ] ; xx [
932 ] = xx [ 913 ] ; xx [ 933 ] = xx [ 875 ] ; xx [ 934 ] = xx [ 894 ] ; xx [
935 ] = xx [ 883 ] ; xx [ 936 ] = xx [ 919 ] ; xx [ 937 ] = xx [ 923 ] ; xx [
938 ] = xx [ 907 ] ; xx [ 939 ] = xx [ 922 ] ; xx [ 940 ] = xx [ 920 ] ; xx [
950 ] = xx [ 248 ] * xx [ 913 ] ; xx [ 951 ] = xx [ 407 ] * xx [ 883 ] ; xx [
952 ] = xx [ 407 ] * xx [ 907 ] ; xx [ 953 ] = xx [ 914 ] * xx [ 417 ] ; xx [
954 ] = xx [ 407 ] * xx [ 919 ] ; xx [ 955 ] = xx [ 407 ] * xx [ 922 ] ; xx [
956 ] = xx [ 417 ] * xx [ 876 ] ; xx [ 957 ] = xx [ 407 ] * xx [ 923 ] ; xx [
958 ] = xx [ 407 ] * xx [ 920 ] ; pm_math_Matrix3x3_compose_ra ( xx + 932 ,
xx + 950 , xx + 959 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 959 , xx + 901
, xx + 950 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 950 , xx + 901 , xx + 967
) ; xx [ 876 ] = xx [ 360 ] * xx [ 923 ] ; xx [ 897 ] = xx [ 360 ] * xx [ 920
] ; xx [ 914 ] = xx [ 926 ] - xx [ 951 ] ; xx [ 917 ] = xx [ 927 ] - xx [ 957
] ; xx [ 924 ] = xx [ 4 ] * xx [ 914 ] + xx [ 12 ] * xx [ 917 ] + ( xx [ 229
] + xx [ 963 ] ) * xx [ 134 ] ; xx [ 925 ] = ( ( xx [ 215 ] + xx [ 893 ] * xx
[ 883 ] + xx [ 907 ] * xx [ 911 ] - xx [ 941 ] - xx [ 941 ] - xx [ 967 ] ) *
xx [ 4 ] - ( xx [ 947 ] - ( xx [ 876 ] * xx [ 883 ] + xx [ 907 ] * xx [ 897 ]
) + xx [ 943 ] + xx [ 973 ] ) * xx [ 12 ] + xx [ 134 ] * xx [ 914 ] ) * xx [
4 ] + ( ( xx [ 185 ] + xx [ 923 ] * xx [ 876 ] + xx [ 897 ] * xx [ 920 ] - xx
[ 949 ] - xx [ 949 ] - xx [ 975 ] ) * xx [ 12 ] - ( xx [ 943 ] - ( xx [ 923 ]
* xx [ 893 ] + xx [ 911 ] * xx [ 920 ] ) + xx [ 947 ] + xx [ 969 ] ) * xx [ 4
] + xx [ 134 ] * xx [ 917 ] ) * xx [ 12 ] + xx [ 924 ] * xx [ 134 ] ; ii [ 0
] = factorSymmetricPosDef ( xx + 925 , 1 , xx + 876 ) ; if ( ii [ 0 ] != 0 )
{ return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 2/Revolute Joint 2' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 876 ] = ( ( xx [ 910 ] + xx [ 916 ] ) * xx [ 4 ] + (
xx [ 912 ] + xx [ 918 ] ) * xx [ 12 ] + xx [ 896 ] * xx [ 134 ] + xx [ 889 ]
) / xx [ 925 ] ; xx [ 893 ] = xx [ 4 ] * xx [ 876 ] ; xx [ 896 ] = xx [ 12 ]
* xx [ 876 ] ; xx [ 897 ] = xx [ 893 ] * xx [ 845 ] - xx [ 838 ] * xx [ 896 ]
; xx [ 910 ] = xx [ 844 ] * xx [ 893 ] ; xx [ 916 ] = - ( xx [ 844 ] * xx [
896 ] ) ; xx [ 917 ] = - xx [ 897 ] ; xx [ 918 ] = xx [ 910 ] ;
pm_math_Vector3_cross_ra ( xx + 870 , xx + 916 , xx + 926 ) ; xx [ 916 ] = xx
[ 881 ] * xx [ 896 ] ; xx [ 917 ] = xx [ 886 ] * xx [ 893 ] - xx [ 884 ] * xx
[ 896 ] - xx [ 134 ] * xx [ 876 ] ; xx [ 918 ] = - ( xx [ 881 ] * xx [ 893 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 862 , xx + 916 , xx + 941 ) ;
xx [ 893 ] = xx [ 866 ] * xx [ 882 ] ; xx [ 911 ] = xx [ 20 ] * ( xx [ 893 ]
- xx [ 869 ] * xx [ 877 ] ) + xx [ 899 ] ; xx [ 912 ] = xx [ 867 ] * xx [ 882
] ; xx [ 882 ] = xx [ 905 ] - ( xx [ 869 ] * xx [ 895 ] + xx [ 912 ] ) * xx [
20 ] + xx [ 79 ] ; xx [ 916 ] = xx [ 84 ] ; xx [ 917 ] = - xx [ 911 ] ; xx [
918 ] = - xx [ 882 ] ; solveSymmetricPosDef ( xx + 380 , xx + 916 , 3 , 1 ,
xx + 944 , xx + 947 ) ; xx [ 916 ] = xx [ 27 ] * xx [ 944 ] ; xx [ 917 ] = xx
[ 28 ] * xx [ 945 ] ; xx [ 918 ] = xx [ 28 ] * xx [ 946 ] ;
pm_math_Quaternion_xform_ra ( xx + 862 , xx + 916 , xx + 947 ) ; xx [ 914 ] =
xx [ 358 ] * xx [ 945 ] ; xx [ 916 ] = xx [ 358 ] * xx [ 946 ] ; xx [ 917 ] =
xx [ 844 ] * xx [ 914 ] + xx [ 916 ] * xx [ 845 ] ; xx [ 918 ] = xx [ 838 ] *
xx [ 914 ] ; xx [ 926 ] = xx [ 838 ] * xx [ 916 ] ; xx [ 953 ] = - xx [ 917 ]
; xx [ 954 ] = xx [ 918 ] ; xx [ 955 ] = xx [ 926 ] ;
pm_math_Vector3_cross_ra ( xx + 870 , xx + 953 , xx + 967 ) ; xx [ 929 ] = xx
[ 916 ] + ( xx [ 918 ] * xx [ 837 ] + xx [ 968 ] ) * xx [ 20 ] ; xx [ 953 ] =
xx [ 20 ] * ( xx [ 967 ] - xx [ 917 ] * xx [ 837 ] ) ; xx [ 954 ] = xx [ 929
] ; xx [ 955 ] = xx [ 20 ] * ( xx [ 969 ] + xx [ 926 ] * xx [ 837 ] ) - xx [
914 ] ; pm_math_Vector3_cross_ra ( xx + 901 , xx + 953 , xx + 916 ) ; xx [
914 ] = xx [ 852 ] + ( xx [ 866 ] * xx [ 873 ] + xx [ 879 ] ) * xx [ 20 ] +
xx [ 891 ] - ( xx [ 888 ] * xx [ 850 ] + xx [ 842 ] * xx [ 887 ] ) * xx [ 20
] + xx [ 134 ] ; xx [ 852 ] = ( ( xx [ 947 ] + xx [ 916 ] ) * xx [ 4 ] + ( xx
[ 949 ] + xx [ 918 ] ) * xx [ 12 ] + xx [ 929 ] * xx [ 134 ] + xx [ 914 ] ) /
xx [ 925 ] ; xx [ 873 ] = xx [ 4 ] * xx [ 852 ] ; xx [ 916 ] = xx [ 12 ] * xx
[ 852 ] ; xx [ 917 ] = xx [ 873 ] * xx [ 845 ] - xx [ 838 ] * xx [ 916 ] ; xx
[ 918 ] = xx [ 844 ] * xx [ 873 ] ; xx [ 947 ] = - ( xx [ 844 ] * xx [ 916 ]
) ; xx [ 948 ] = - xx [ 917 ] ; xx [ 949 ] = xx [ 918 ] ;
pm_math_Vector3_cross_ra ( xx + 870 , xx + 947 , xx + 953 ) ; xx [ 947 ] = xx
[ 881 ] * xx [ 916 ] ; xx [ 948 ] = xx [ 886 ] * xx [ 873 ] - xx [ 884 ] * xx
[ 916 ] - xx [ 134 ] * xx [ 852 ] ; xx [ 949 ] = - ( xx [ 881 ] * xx [ 873 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 862 , xx + 947 , xx + 967 ) ;
xx [ 873 ] = xx [ 945 ] - ( ( xx [ 917 ] * xx [ 837 ] + xx [ 954 ] ) * xx [
410 ] - xx [ 412 ] * xx [ 969 ] ) ; xx [ 917 ] = xx [ 946 ] - ( xx [ 392 ] *
( ( xx [ 955 ] - xx [ 918 ] * xx [ 837 ] ) * xx [ 20 ] - xx [ 916 ] ) + xx [
412 ] * xx [ 968 ] ) ; xx [ 916 ] = xx [ 532 ] * xx [ 569 ] + xx [ 554 ] * xx
[ 573 ] + xx [ 571 ] * xx [ 587 ] + xx [ 531 ] * xx [ 589 ] + xx [ 541 ] * xx
[ 586 ] + xx [ 550 ] * xx [ 580 ] + xx [ 553 ] * xx [ 581 ] + xx [ 889 ] * xx
[ 852 ] - xx [ 885 ] * xx [ 873 ] - xx [ 854 ] * xx [ 917 ] ; xx [ 898 ] = xx
[ 900 ] + ( xx [ 912 ] + xx [ 868 ] * xx [ 877 ] ) * xx [ 20 ] - xx [ 79 ] ;
xx [ 877 ] = ( xx [ 893 ] + xx [ 868 ] * xx [ 895 ] ) * xx [ 20 ] + xx [ 906
] ; xx [ 904 ] = xx [ 84 ] ; xx [ 905 ] = - xx [ 898 ] ; xx [ 906 ] = - xx [
877 ] ; solveSymmetricPosDef ( xx + 380 , xx + 904 , 3 , 1 , xx + 944 , xx +
947 ) ; xx [ 904 ] = xx [ 27 ] * xx [ 944 ] ; xx [ 905 ] = xx [ 28 ] * xx [
945 ] ; xx [ 906 ] = xx [ 28 ] * xx [ 946 ] ; pm_math_Quaternion_xform_ra (
xx + 862 , xx + 904 , xx + 947 ) ; xx [ 893 ] = xx [ 358 ] * xx [ 945 ] ; xx
[ 895 ] = xx [ 358 ] * xx [ 946 ] ; xx [ 899 ] = xx [ 844 ] * xx [ 893 ] + xx
[ 895 ] * xx [ 845 ] ; xx [ 900 ] = xx [ 838 ] * xx [ 893 ] ; xx [ 904 ] = xx
[ 838 ] * xx [ 895 ] ; xx [ 953 ] = - xx [ 899 ] ; xx [ 954 ] = xx [ 900 ] ;
xx [ 955 ] = xx [ 904 ] ; pm_math_Vector3_cross_ra ( xx + 870 , xx + 953 , xx
+ 967 ) ; xx [ 905 ] = xx [ 895 ] + ( xx [ 900 ] * xx [ 837 ] + xx [ 968 ] )
* xx [ 20 ] ; xx [ 953 ] = xx [ 20 ] * ( xx [ 967 ] - xx [ 899 ] * xx [ 837 ]
) ; xx [ 954 ] = xx [ 905 ] ; xx [ 955 ] = xx [ 20 ] * ( xx [ 969 ] + xx [
904 ] * xx [ 837 ] ) - xx [ 893 ] ; pm_math_Vector3_cross_ra ( xx + 901 , xx
+ 953 , xx + 967 ) ; xx [ 878 ] = ( xx [ 866 ] * xx [ 874 ] + xx [ 880 ] ) *
xx [ 20 ] - xx [ 856 ] + xx [ 892 ] + ( xx [ 887 ] * xx [ 840 ] - xx [ 888 ]
* xx [ 848 ] ) * xx [ 20 ] ; xx [ 856 ] = ( ( xx [ 947 ] + xx [ 967 ] ) * xx
[ 4 ] + ( xx [ 949 ] + xx [ 969 ] ) * xx [ 12 ] + xx [ 905 ] * xx [ 134 ] +
xx [ 878 ] ) / xx [ 925 ] ; xx [ 874 ] = xx [ 4 ] * xx [ 856 ] ; xx [ 879 ] =
xx [ 12 ] * xx [ 856 ] ; xx [ 880 ] = xx [ 874 ] * xx [ 845 ] - xx [ 838 ] *
xx [ 879 ] ; xx [ 887 ] = xx [ 844 ] * xx [ 874 ] ; xx [ 890 ] = - ( xx [ 844
] * xx [ 879 ] ) ; xx [ 891 ] = - xx [ 880 ] ; xx [ 892 ] = xx [ 887 ] ;
pm_math_Vector3_cross_ra ( xx + 870 , xx + 890 , xx + 904 ) ; xx [ 890 ] = xx
[ 881 ] * xx [ 879 ] ; xx [ 891 ] = xx [ 886 ] * xx [ 874 ] - xx [ 884 ] * xx
[ 879 ] - xx [ 134 ] * xx [ 856 ] ; xx [ 892 ] = - ( xx [ 881 ] * xx [ 874 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 862 , xx + 890 , xx + 947 ) ;
xx [ 874 ] = xx [ 945 ] - ( ( xx [ 880 ] * xx [ 837 ] + xx [ 905 ] ) * xx [
410 ] - xx [ 412 ] * xx [ 949 ] ) ; xx [ 880 ] = xx [ 946 ] - ( xx [ 392 ] *
( ( xx [ 906 ] - xx [ 887 ] * xx [ 837 ] ) * xx [ 20 ] - xx [ 879 ] ) + xx [
412 ] * xx [ 948 ] ) ; xx [ 879 ] = xx [ 532 ] * xx [ 538 ] + xx [ 554 ] * xx
[ 545 ] + xx [ 571 ] * xx [ 547 ] + xx [ 531 ] * xx [ 576 ] + xx [ 541 ] * xx
[ 546 ] + xx [ 550 ] * xx [ 556 ] + xx [ 553 ] * xx [ 557 ] + xx [ 889 ] * xx
[ 856 ] - xx [ 885 ] * xx [ 874 ] - xx [ 854 ] * xx [ 880 ] ; xx [ 887 ] = xx
[ 532 ] * xx [ 91 ] + xx [ 554 ] * xx [ 167 ] + xx [ 571 ] * xx [ 200 ] + xx
[ 531 ] * xx [ 251 ] + xx [ 541 ] * xx [ 188 ] + xx [ 550 ] * xx [ 203 ] + xx
[ 553 ] * xx [ 256 ] ; xx [ 888 ] = xx [ 532 ] * xx [ 92 ] + xx [ 554 ] * xx
[ 171 ] + xx [ 571 ] * xx [ 584 ] + xx [ 531 ] * xx [ 588 ] + xx [ 541 ] * xx
[ 292 ] + xx [ 550 ] * xx [ 585 ] + xx [ 553 ] * xx [ 593 ] ; xx [ 890 ] = xx
[ 532 ] * xx [ 93 ] + xx [ 554 ] * xx [ 142 ] + xx [ 571 ] * xx [ 144 ] + xx
[ 531 ] * xx [ 285 ] + xx [ 541 ] * xx [ 143 ] + xx [ 550 ] * xx [ 147 ] + xx
[ 553 ] * xx [ 293 ] ; xx [ 891 ] = xx [ 564 ] * xx [ 538 ] + xx [ 570 ] * xx
[ 545 ] + xx [ 572 ] * xx [ 547 ] + xx [ 595 ] * xx [ 576 ] + xx [ 566 ] * xx
[ 546 ] + xx [ 567 ] * xx [ 556 ] + xx [ 568 ] * xx [ 557 ] + xx [ 914 ] * xx
[ 856 ] - xx [ 911 ] * xx [ 874 ] - xx [ 882 ] * xx [ 880 ] ; xx [ 892 ] = xx
[ 564 ] * xx [ 91 ] + xx [ 570 ] * xx [ 167 ] + xx [ 572 ] * xx [ 200 ] + xx
[ 595 ] * xx [ 251 ] + xx [ 566 ] * xx [ 188 ] + xx [ 567 ] * xx [ 203 ] + xx
[ 568 ] * xx [ 256 ] ; xx [ 893 ] = xx [ 564 ] * xx [ 92 ] + xx [ 570 ] * xx
[ 171 ] + xx [ 572 ] * xx [ 584 ] + xx [ 595 ] * xx [ 588 ] + xx [ 566 ] * xx
[ 292 ] + xx [ 567 ] * xx [ 585 ] + xx [ 568 ] * xx [ 593 ] ; xx [ 895 ] = xx
[ 564 ] * xx [ 93 ] + xx [ 570 ] * xx [ 142 ] + xx [ 572 ] * xx [ 144 ] + xx
[ 595 ] * xx [ 285 ] + xx [ 566 ] * xx [ 143 ] + xx [ 567 ] * xx [ 147 ] + xx
[ 568 ] * xx [ 293 ] ; xx [ 899 ] = xx [ 543 ] * xx [ 91 ] + xx [ 549 ] * xx
[ 167 ] + xx [ 552 ] * xx [ 200 ] + xx [ 575 ] * xx [ 251 ] + xx [ 544 ] * xx
[ 188 ] + xx [ 536 ] * xx [ 203 ] + xx [ 537 ] * xx [ 256 ] ; xx [ 900 ] = xx
[ 543 ] * xx [ 92 ] + xx [ 549 ] * xx [ 171 ] + xx [ 552 ] * xx [ 584 ] + xx
[ 575 ] * xx [ 588 ] + xx [ 544 ] * xx [ 292 ] + xx [ 536 ] * xx [ 585 ] + xx
[ 537 ] * xx [ 593 ] ; xx [ 904 ] = xx [ 543 ] * xx [ 93 ] + xx [ 549 ] * xx
[ 142 ] + xx [ 552 ] * xx [ 144 ] + xx [ 575 ] * xx [ 285 ] + xx [ 544 ] * xx
[ 143 ] + xx [ 536 ] * xx [ 147 ] + xx [ 537 ] * xx [ 293 ] ; xx [ 905 ] = xx
[ 55 ] * state [ 25 ] ; xx [ 55 ] = cos ( xx [ 905 ] ) ; xx [ 906 ] = xx [ 1
] * xx [ 55 ] ; xx [ 912 ] = sin ( xx [ 905 ] ) ; xx [ 905 ] = xx [ 4 ] * xx
[ 912 ] ; xx [ 918 ] = xx [ 12 ] * xx [ 912 ] ; xx [ 912 ] = xx [ 1 ] * xx [
905 ] - xx [ 0 ] * xx [ 918 ] ; xx [ 926 ] = xx [ 0 ] * xx [ 55 ] ; xx [ 55 ]
= - xx [ 926 ] ; xx [ 929 ] = xx [ 1 ] * xx [ 918 ] + xx [ 0 ] * xx [ 905 ] ;
xx [ 905 ] = - xx [ 929 ] ; xx [ 944 ] = - xx [ 906 ] ; xx [ 945 ] = xx [ 912
] ; xx [ 946 ] = xx [ 55 ] ; xx [ 947 ] = xx [ 905 ] ; xx [ 918 ] = xx [ 0 ]
* state [ 29 ] + xx [ 1 ] * state [ 27 ] ; xx [ 941 ] = xx [ 0 ] * state [ 30
] - xx [ 1 ] * state [ 28 ] ; xx [ 948 ] = - xx [ 941 ] ; xx [ 949 ] = xx [ 0
] * state [ 27 ] - xx [ 1 ] * state [ 29 ] ; xx [ 951 ] = - xx [ 949 ] ; xx [
953 ] = xx [ 0 ] * state [ 28 ] + xx [ 1 ] * state [ 30 ] ; xx [ 967 ] = xx [
918 ] ; xx [ 968 ] = xx [ 948 ] ; xx [ 969 ] = xx [ 951 ] ; xx [ 970 ] = xx [
953 ] ; pm_math_Quaternion_compose_ra ( xx + 944 , xx + 967 , xx + 971 ) ; xx
[ 975 ] = xx [ 948 ] ; xx [ 976 ] = xx [ 951 ] ; xx [ 977 ] = xx [ 953 ] ; xx
[ 0 ] = xx [ 941 ] * xx [ 12 ] - xx [ 4 ] * xx [ 953 ] ; xx [ 1 ] = xx [ 949
] * xx [ 4 ] ; xx [ 978 ] = - ( xx [ 949 ] * xx [ 12 ] ) ; xx [ 979 ] = xx [
0 ] ; xx [ 980 ] = - xx [ 1 ] ; pm_math_Vector3_cross_ra ( xx + 975 , xx +
978 , xx + 981 ) ; xx [ 948 ] = xx [ 338 ] * ( xx [ 982 ] - xx [ 0 ] * xx [
918 ] ) ; xx [ 0 ] = ( xx [ 12 ] + xx [ 20 ] * ( xx [ 983 ] + xx [ 1 ] * xx [
918 ] ) ) * xx [ 79 ] ; xx [ 1 ] = xx [ 973 ] * xx [ 948 ] + xx [ 974 ] * xx
[ 0 ] ; xx [ 338 ] = xx [ 972 ] * xx [ 948 ] ; xx [ 951 ] = xx [ 972 ] * xx [
0 ] ; xx [ 978 ] = - xx [ 1 ] ; xx [ 979 ] = xx [ 338 ] ; xx [ 980 ] = xx [
951 ] ; pm_math_Vector3_cross_ra ( xx + 972 , xx + 978 , xx + 981 ) ; xx [
954 ] = xx [ 79 ] * xx [ 953 ] ; xx [ 955 ] = xx [ 954 ] * xx [ 918 ] ; xx [
957 ] = xx [ 949 ] * xx [ 79 ] ; xx [ 959 ] = ( xx [ 955 ] + xx [ 941 ] * xx
[ 957 ] ) * xx [ 20 ] ; xx [ 961 ] = xx [ 949 ] * xx [ 957 ] ; xx [ 963 ] =
xx [ 954 ] * xx [ 953 ] ; xx [ 965 ] = xx [ 81 ] + xx [ 79 ] - ( xx [ 961 ] +
xx [ 963 ] ) * xx [ 20 ] ; xx [ 81 ] = xx [ 957 ] * xx [ 918 ] ; xx [ 978 ] =
xx [ 106 ] + xx [ 20 ] * ( xx [ 81 ] - xx [ 941 ] * xx [ 954 ] ) ; xx [ 984 ]
= - ( xx [ 12 ] * xx [ 959 ] ) ; xx [ 985 ] = xx [ 965 ] * xx [ 12 ] + xx [
978 ] * xx [ 4 ] ; xx [ 986 ] = - ( xx [ 4 ] * xx [ 959 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 944 , xx + 984 , xx + 987 ) ; xx [ 106 ] =
xx [ 912 ] * xx [ 134 ] ; xx [ 979 ] = xx [ 134 ] * xx [ 929 ] ; xx [ 980 ] =
xx [ 20 ] * ( xx [ 981 ] - xx [ 1 ] * xx [ 971 ] ) + xx [ 987 ] - xx [ 20 ] *
( xx [ 106 ] * xx [ 926 ] + xx [ 979 ] * xx [ 906 ] ) ; xx [ 1 ] = xx [ 941 ]
* xx [ 79 ] ; xx [ 984 ] = xx [ 1 ] * xx [ 918 ] ; xx [ 985 ] = xx [ 941 ] *
xx [ 1 ] ; xx [ 990 ] = ( xx [ 81 ] + xx [ 1 ] * xx [ 953 ] ) * xx [ 20 ] ;
xx [ 991 ] = xx [ 20 ] * ( xx [ 957 ] * xx [ 953 ] - xx [ 984 ] ) ; xx [ 992
] = ( xx [ 985 ] + xx [ 961 ] ) * xx [ 20 ] - xx [ 79 ] ;
pm_math_Quaternion_xform_ra ( xx + 944 , xx + 990 , xx + 993 ) ; xx [ 81 ] =
xx [ 79 ] * xx [ 973 ] ; xx [ 957 ] = xx [ 79 ] * xx [ 972 ] ; xx [ 961 ] =
xx [ 993 ] - ( xx [ 971 ] * xx [ 81 ] + xx [ 974 ] * xx [ 957 ] ) * xx [ 20 ]
; xx [ 986 ] = xx [ 79 ] * xx [ 974 ] ; xx [ 990 ] = xx [ 20 ] * ( xx [ 949 ]
* xx [ 1 ] - xx [ 955 ] ) ; xx [ 991 ] = xx [ 79 ] - ( xx [ 963 ] + xx [ 985
] ) * xx [ 20 ] ; xx [ 992 ] = - ( ( xx [ 984 ] + xx [ 949 ] * xx [ 954 ] ) *
xx [ 20 ] ) ; pm_math_Quaternion_xform_ra ( xx + 944 , xx + 990 , xx + 996 )
; xx [ 1 ] = xx [ 20 ] * ( xx [ 973 ] * xx [ 957 ] - xx [ 971 ] * xx [ 986 ]
) + xx [ 996 ] ; xx [ 990 ] = xx [ 84 ] ; xx [ 991 ] = - xx [ 961 ] ; xx [
992 ] = - xx [ 1 ] ; solveSymmetricPosDef ( xx + 380 , xx + 990 , 3 , 1 , xx
+ 999 , xx + 1002 ) ; xx [ 990 ] = xx [ 27 ] * xx [ 999 ] ; xx [ 991 ] = xx [
28 ] * xx [ 1000 ] ; xx [ 992 ] = xx [ 28 ] * xx [ 1001 ] ;
pm_math_Quaternion_xform_ra ( xx + 967 , xx + 990 , xx + 1002 ) ; xx [ 990 ]
= xx [ 965 ] ; xx [ 991 ] = xx [ 959 ] ; xx [ 992 ] = xx [ 978 ] ; xx [ 954 ]
= xx [ 358 ] * xx [ 1001 ] ; xx [ 955 ] = xx [ 358 ] * xx [ 1000 ] ; xx [ 963
] = xx [ 954 ] * xx [ 953 ] - xx [ 949 ] * xx [ 955 ] ; xx [ 984 ] = xx [ 941
] * xx [ 955 ] ; xx [ 985 ] = xx [ 941 ] * xx [ 954 ] ; xx [ 1005 ] = - xx [
963 ] ; xx [ 1006 ] = - xx [ 984 ] ; xx [ 1007 ] = - xx [ 985 ] ;
pm_math_Vector3_cross_ra ( xx + 975 , xx + 1005 , xx + 1008 ) ; xx [ 999 ] =
xx [ 954 ] + ( xx [ 1009 ] - xx [ 984 ] * xx [ 918 ] ) * xx [ 20 ] ; xx [
1005 ] = xx [ 20 ] * ( xx [ 1008 ] - xx [ 963 ] * xx [ 918 ] ) ; xx [ 1006 ]
= xx [ 999 ] ; xx [ 1007 ] = xx [ 20 ] * ( xx [ 1010 ] - xx [ 985 ] * xx [
918 ] ) - xx [ 955 ] ; pm_math_Vector3_cross_ra ( xx + 990 , xx + 1005 , xx +
1008 ) ; xx [ 954 ] = xx [ 949 ] * xx [ 953 ] ; xx [ 955 ] = xx [ 941 ] * xx
[ 918 ] ; xx [ 963 ] = ( xx [ 954 ] + xx [ 955 ] ) * xx [ 20 ] ; xx [ 984 ] =
xx [ 360 ] * xx [ 963 ] ; xx [ 985 ] = xx [ 918 ] * xx [ 918 ] ; xx [ 1003 ]
= ( xx [ 985 ] + xx [ 953 ] * xx [ 953 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [
1005 ] = xx [ 360 ] * xx [ 1003 ] ; xx [ 1006 ] = xx [ 941 ] * xx [ 953 ] ;
xx [ 1007 ] = xx [ 949 ] * xx [ 918 ] ; xx [ 1009 ] = ( xx [ 1006 ] + xx [
1007 ] ) * xx [ 20 ] ; xx [ 1011 ] = xx [ 411 ] * xx [ 1009 ] ; xx [ 1012 ] =
xx [ 941 ] * xx [ 949 ] ; xx [ 1013 ] = xx [ 953 ] * xx [ 918 ] ; xx [ 1014 ]
= xx [ 20 ] * ( xx [ 1012 ] - xx [ 1013 ] ) ; xx [ 1015 ] = xx [ 411 ] * xx [
1014 ] ; xx [ 1016 ] = xx [ 1011 ] * xx [ 1014 ] - xx [ 1009 ] * xx [ 1015 ]
; xx [ 1017 ] = xx [ 20 ] * ( xx [ 955 ] - xx [ 954 ] ) ; xx [ 954 ] = ( xx [
985 ] + xx [ 949 ] * xx [ 949 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 955 ] = xx [
963 ] * xx [ 1011 ] - xx [ 1015 ] * xx [ 1003 ] ; xx [ 1018 ] = xx [ 411 ] *
xx [ 1017 ] ; xx [ 1019 ] = xx [ 411 ] * xx [ 954 ] ; xx [ 1020 ] = xx [ 1018
] * xx [ 1014 ] + xx [ 1009 ] * xx [ 1019 ] ; xx [ 1021 ] = xx [ 1019 ] * xx
[ 1003 ] + xx [ 963 ] * xx [ 1018 ] ; xx [ 1022 ] = xx [ 411 ] * xx [ 1003 ]
; xx [ 1023 ] = xx [ 411 ] * xx [ 963 ] ; xx [ 411 ] = xx [ 1022 ] * xx [
1014 ] - xx [ 1009 ] * xx [ 1023 ] ; xx [ 1024 ] = xx [ 963 ] * xx [ 1022 ] -
xx [ 1023 ] * xx [ 1003 ] ; xx [ 1025 ] = - xx [ 1016 ] ; xx [ 1026 ] = - (
xx [ 1015 ] * xx [ 1017 ] + xx [ 1011 ] * xx [ 954 ] ) ; xx [ 1027 ] = xx [
955 ] ; xx [ 1028 ] = xx [ 1020 ] ; xx [ 1029 ] = xx [ 1018 ] * xx [ 954 ] -
xx [ 1019 ] * xx [ 1017 ] ; xx [ 1030 ] = - xx [ 1021 ] ; xx [ 1031 ] = xx [
411 ] ; xx [ 1032 ] = xx [ 1022 ] * xx [ 954 ] + xx [ 1023 ] * xx [ 1017 ] ;
xx [ 1033 ] = - xx [ 1024 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 1025 , xx
+ 990 , xx + 1034 ) ; xx [ 1011 ] = ( xx [ 985 ] + xx [ 941 ] * xx [ 941 ] )
* xx [ 20 ] - xx [ 54 ] ; xx [ 985 ] = xx [ 1012 ] + xx [ 1013 ] ; xx [ 1012
] = xx [ 985 ] * xx [ 20 ] ; xx [ 1013 ] = xx [ 1007 ] - xx [ 1006 ] ; xx [
1006 ] = xx [ 20 ] * xx [ 1013 ] ; xx [ 1025 ] = xx [ 1011 ] ; xx [ 1026 ] =
xx [ 1012 ] ; xx [ 1027 ] = xx [ 1006 ] ; xx [ 1028 ] = xx [ 1014 ] ; xx [
1029 ] = xx [ 954 ] ; xx [ 1030 ] = - xx [ 963 ] ; xx [ 1031 ] = - xx [ 1009
] ; xx [ 1032 ] = xx [ 1017 ] ; xx [ 1033 ] = xx [ 1003 ] ; xx [ 1043 ] = xx
[ 248 ] * xx [ 1011 ] ; xx [ 1044 ] = xx [ 407 ] * xx [ 1014 ] ; xx [ 1045 ]
= - ( xx [ 407 ] * xx [ 1009 ] ) ; xx [ 1046 ] = xx [ 985 ] * xx [ 417 ] ; xx
[ 1047 ] = xx [ 407 ] * xx [ 954 ] ; xx [ 1048 ] = xx [ 407 ] * xx [ 1017 ] ;
xx [ 1049 ] = xx [ 417 ] * xx [ 1013 ] ; xx [ 1050 ] = - ( xx [ 407 ] * xx [
963 ] ) ; xx [ 1051 ] = xx [ 407 ] * xx [ 1003 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 1025 , xx + 1043 , xx + 1052 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 1052 , xx + 990 , xx + 1043 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 1043 , xx + 990 , xx + 1060 ) ; xx [ 407
] = xx [ 360 ] * xx [ 1014 ] ; xx [ 417 ] = xx [ 360 ] * xx [ 1009 ] ; xx [
360 ] = xx [ 1021 ] + xx [ 1050 ] ; xx [ 985 ] = xx [ 1020 ] - xx [ 1044 ] ;
xx [ 1007 ] = ( xx [ 229 ] + xx [ 1056 ] ) * xx [ 134 ] - ( xx [ 4 ] * xx [
985 ] + xx [ 12 ] * xx [ 360 ] ) ; xx [ 229 ] = ( ( xx [ 185 ] + xx [ 963 ] *
xx [ 984 ] + xx [ 1005 ] * xx [ 1003 ] - xx [ 1042 ] - xx [ 1042 ] - xx [
1068 ] ) * xx [ 12 ] + ( xx [ 963 ] * xx [ 407 ] + xx [ 417 ] * xx [ 1003 ] +
xx [ 1036 ] + xx [ 1040 ] + xx [ 1062 ] ) * xx [ 4 ] - xx [ 134 ] * xx [ 360
] ) * xx [ 12 ] - ( xx [ 134 ] * xx [ 985 ] - ( ( xx [ 215 ] + xx [ 407 ] *
xx [ 1014 ] + xx [ 1009 ] * xx [ 417 ] - xx [ 1034 ] - xx [ 1034 ] - xx [
1060 ] ) * xx [ 4 ] + ( xx [ 984 ] * xx [ 1014 ] + xx [ 1009 ] * xx [ 1005 ]
+ xx [ 1040 ] + xx [ 1036 ] + xx [ 1066 ] ) * xx [ 12 ] ) ) * xx [ 4 ] + xx [
1007 ] * xx [ 134 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 229 , 1 , xx +
185 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 3/Revolute Joint 3' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 185 ] = ( ( xx [ 1004 ] + xx [ 1010 ] ) * xx [ 12 ] -
( xx [ 1002 ] + xx [ 1008 ] ) * xx [ 4 ] + xx [ 999 ] * xx [ 134 ] + xx [ 980
] ) / xx [ 229 ] ; xx [ 215 ] = xx [ 12 ] * xx [ 185 ] ; xx [ 360 ] = xx [ 4
] * xx [ 185 ] ; xx [ 407 ] = xx [ 941 ] * xx [ 215 ] - xx [ 360 ] * xx [ 953
] ; xx [ 417 ] = xx [ 949 ] * xx [ 360 ] ; xx [ 1018 ] = xx [ 949 ] * xx [
215 ] ; xx [ 1019 ] = - xx [ 407 ] ; xx [ 1020 ] = xx [ 417 ] ;
pm_math_Vector3_cross_ra ( xx + 975 , xx + 1018 , xx + 1021 ) ; xx [ 1018 ] =
xx [ 959 ] * xx [ 215 ] ; xx [ 1019 ] = - ( xx [ 978 ] * xx [ 360 ] + xx [
965 ] * xx [ 215 ] + xx [ 134 ] * xx [ 185 ] ) ; xx [ 1020 ] = xx [ 959 ] *
xx [ 360 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 967 , xx + 1018 , xx +
1034 ) ; xx [ 360 ] = xx [ 971 ] * xx [ 957 ] ; xx [ 984 ] = xx [ 20 ] * ( xx
[ 360 ] - xx [ 974 ] * xx [ 81 ] ) + xx [ 994 ] ; xx [ 985 ] = xx [ 972 ] *
xx [ 957 ] ; xx [ 957 ] = xx [ 997 ] - ( xx [ 974 ] * xx [ 986 ] + xx [ 985 ]
) * xx [ 20 ] + xx [ 79 ] ; xx [ 1018 ] = xx [ 84 ] ; xx [ 1019 ] = - xx [
984 ] ; xx [ 1020 ] = - xx [ 957 ] ; solveSymmetricPosDef ( xx + 380 , xx +
1018 , 3 , 1 , xx + 1037 , xx + 1040 ) ; xx [ 1018 ] = xx [ 27 ] * xx [ 1037
] ; xx [ 1019 ] = xx [ 28 ] * xx [ 1038 ] ; xx [ 1020 ] = xx [ 28 ] * xx [
1039 ] ; pm_math_Quaternion_xform_ra ( xx + 967 , xx + 1018 , xx + 1040 ) ;
xx [ 999 ] = xx [ 358 ] * xx [ 1039 ] ; xx [ 1002 ] = xx [ 358 ] * xx [ 1038
] ; xx [ 1004 ] = xx [ 999 ] * xx [ 953 ] - xx [ 949 ] * xx [ 1002 ] ; xx [
1005 ] = xx [ 941 ] * xx [ 1002 ] ; xx [ 1008 ] = xx [ 941 ] * xx [ 999 ] ;
xx [ 1018 ] = - xx [ 1004 ] ; xx [ 1019 ] = - xx [ 1005 ] ; xx [ 1020 ] = -
xx [ 1008 ] ; pm_math_Vector3_cross_ra ( xx + 975 , xx + 1018 , xx + 1046 ) ;
xx [ 1010 ] = xx [ 999 ] + ( xx [ 1047 ] - xx [ 1005 ] * xx [ 918 ] ) * xx [
20 ] ; xx [ 1018 ] = xx [ 20 ] * ( xx [ 1046 ] - xx [ 1004 ] * xx [ 918 ] ) ;
xx [ 1019 ] = xx [ 1010 ] ; xx [ 1020 ] = xx [ 20 ] * ( xx [ 1048 ] - xx [
1008 ] * xx [ 918 ] ) - xx [ 1002 ] ; pm_math_Vector3_cross_ra ( xx + 990 ,
xx + 1018 , xx + 1046 ) ; xx [ 999 ] = xx [ 0 ] + ( xx [ 971 ] * xx [ 338 ] +
xx [ 982 ] ) * xx [ 20 ] + xx [ 988 ] - ( xx [ 979 ] * xx [ 929 ] + xx [ 912
] * xx [ 106 ] ) * xx [ 20 ] + xx [ 134 ] ; xx [ 0 ] = ( ( xx [ 1042 ] + xx [
1048 ] ) * xx [ 12 ] - ( xx [ 1040 ] + xx [ 1046 ] ) * xx [ 4 ] + xx [ 1010 ]
* xx [ 134 ] + xx [ 999 ] ) / xx [ 229 ] ; xx [ 338 ] = xx [ 12 ] * xx [ 0 ]
; xx [ 1002 ] = xx [ 4 ] * xx [ 0 ] ; xx [ 1004 ] = xx [ 941 ] * xx [ 338 ] -
xx [ 1002 ] * xx [ 953 ] ; xx [ 1005 ] = xx [ 949 ] * xx [ 1002 ] ; xx [ 1018
] = xx [ 949 ] * xx [ 338 ] ; xx [ 1019 ] = - xx [ 1004 ] ; xx [ 1020 ] = xx
[ 1005 ] ; pm_math_Vector3_cross_ra ( xx + 975 , xx + 1018 , xx + 1040 ) ; xx
[ 1018 ] = xx [ 959 ] * xx [ 338 ] ; xx [ 1019 ] = - ( xx [ 978 ] * xx [ 1002
] + xx [ 965 ] * xx [ 338 ] + xx [ 134 ] * xx [ 0 ] ) ; xx [ 1020 ] = xx [
959 ] * xx [ 1002 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 967 , xx +
1018 , xx + 1046 ) ; xx [ 1002 ] = xx [ 1038 ] - ( ( xx [ 1004 ] * xx [ 918 ]
+ xx [ 1041 ] ) * xx [ 410 ] - xx [ 412 ] * xx [ 1048 ] ) ; xx [ 1004 ] = xx
[ 1039 ] - ( xx [ 392 ] * ( ( xx [ 1042 ] - xx [ 1005 ] * xx [ 918 ] ) * xx [
20 ] - xx [ 338 ] ) + xx [ 412 ] * xx [ 1047 ] ) ; xx [ 338 ] = xx [ 139 ] *
xx [ 92 ] + xx [ 170 ] * xx [ 171 ] + xx [ 192 ] * xx [ 584 ] + xx [ 31 ] *
xx [ 588 ] + xx [ 145 ] * xx [ 292 ] + xx [ 156 ] * xx [ 585 ] + xx [ 583 ] *
xx [ 593 ] + xx [ 980 ] * xx [ 0 ] - xx [ 961 ] * xx [ 1002 ] - xx [ 1 ] * xx
[ 1004 ] ; xx [ 993 ] = xx [ 995 ] + ( xx [ 985 ] + xx [ 973 ] * xx [ 81 ] )
* xx [ 20 ] - xx [ 79 ] ; xx [ 81 ] = ( xx [ 360 ] + xx [ 973 ] * xx [ 986 ]
) * xx [ 20 ] + xx [ 998 ] ; xx [ 994 ] = xx [ 84 ] ; xx [ 995 ] = - xx [ 993
] ; xx [ 996 ] = - xx [ 81 ] ; solveSymmetricPosDef ( xx + 380 , xx + 994 , 3
, 1 , xx + 1018 , xx + 1037 ) ; xx [ 994 ] = xx [ 27 ] * xx [ 1018 ] ; xx [
995 ] = xx [ 28 ] * xx [ 1019 ] ; xx [ 996 ] = xx [ 28 ] * xx [ 1020 ] ;
pm_math_Quaternion_xform_ra ( xx + 967 , xx + 994 , xx + 1037 ) ; xx [ 84 ] =
xx [ 358 ] * xx [ 1020 ] ; xx [ 360 ] = xx [ 358 ] * xx [ 1019 ] ; xx [ 985 ]
= xx [ 84 ] * xx [ 953 ] - xx [ 949 ] * xx [ 360 ] ; xx [ 986 ] = xx [ 941 ]
* xx [ 360 ] ; xx [ 994 ] = xx [ 941 ] * xx [ 84 ] ; xx [ 995 ] = - xx [ 985
] ; xx [ 996 ] = - xx [ 986 ] ; xx [ 997 ] = - xx [ 994 ] ;
pm_math_Vector3_cross_ra ( xx + 975 , xx + 995 , xx + 1040 ) ; xx [ 995 ] =
xx [ 84 ] + ( xx [ 1041 ] - xx [ 986 ] * xx [ 918 ] ) * xx [ 20 ] ; xx [ 996
] = xx [ 20 ] * ( xx [ 1040 ] - xx [ 985 ] * xx [ 918 ] ) ; xx [ 997 ] = xx [
995 ] ; xx [ 998 ] = xx [ 20 ] * ( xx [ 1042 ] - xx [ 994 ] * xx [ 918 ] ) -
xx [ 360 ] ; pm_math_Vector3_cross_ra ( xx + 990 , xx + 996 , xx + 1040 ) ;
xx [ 84 ] = ( xx [ 971 ] * xx [ 951 ] + xx [ 983 ] ) * xx [ 20 ] - xx [ 948 ]
+ xx [ 989 ] + ( xx [ 979 ] * xx [ 926 ] - xx [ 106 ] * xx [ 906 ] ) * xx [
20 ] ; xx [ 106 ] = ( ( xx [ 1039 ] + xx [ 1042 ] ) * xx [ 12 ] - ( xx [ 1037
] + xx [ 1040 ] ) * xx [ 4 ] + xx [ 995 ] * xx [ 134 ] + xx [ 84 ] ) / xx [
229 ] ; xx [ 360 ] = xx [ 12 ] * xx [ 106 ] ; xx [ 948 ] = xx [ 4 ] * xx [
106 ] ; xx [ 951 ] = xx [ 941 ] * xx [ 360 ] - xx [ 948 ] * xx [ 953 ] ; xx [
979 ] = xx [ 949 ] * xx [ 948 ] ; xx [ 981 ] = xx [ 949 ] * xx [ 360 ] ; xx [
982 ] = - xx [ 951 ] ; xx [ 983 ] = xx [ 979 ] ; pm_math_Vector3_cross_ra (
xx + 975 , xx + 981 , xx + 985 ) ; xx [ 981 ] = xx [ 959 ] * xx [ 360 ] ; xx
[ 982 ] = - ( xx [ 978 ] * xx [ 948 ] + xx [ 965 ] * xx [ 360 ] + xx [ 134 ]
* xx [ 106 ] ) ; xx [ 983 ] = xx [ 959 ] * xx [ 948 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 967 , xx + 981 , xx + 994 ) ; xx [
948 ] = xx [ 1019 ] - ( ( xx [ 951 ] * xx [ 918 ] + xx [ 986 ] ) * xx [ 410 ]
- xx [ 412 ] * xx [ 996 ] ) ; xx [ 951 ] = xx [ 1020 ] - ( xx [ 392 ] * ( (
xx [ 987 ] - xx [ 979 ] * xx [ 918 ] ) * xx [ 20 ] - xx [ 360 ] ) + xx [ 412
] * xx [ 995 ] ) ; xx [ 360 ] = xx [ 139 ] * xx [ 93 ] + xx [ 170 ] * xx [
142 ] + xx [ 192 ] * xx [ 144 ] + xx [ 31 ] * xx [ 285 ] + xx [ 145 ] * xx [
143 ] + xx [ 156 ] * xx [ 147 ] + xx [ 583 ] * xx [ 293 ] + xx [ 980 ] * xx [
106 ] - xx [ 961 ] * xx [ 948 ] - xx [ 1 ] * xx [ 951 ] ; xx [ 979 ] = xx [
290 ] * xx [ 93 ] + xx [ 414 ] * xx [ 142 ] + xx [ 284 ] * xx [ 144 ] + xx [
578 ] * xx [ 285 ] + xx [ 291 ] * xx [ 143 ] + xx [ 136 ] * xx [ 147 ] + xx [
168 ] * xx [ 293 ] + xx [ 999 ] * xx [ 106 ] - xx [ 984 ] * xx [ 948 ] - xx [
957 ] * xx [ 951 ] ; xx [ 1060 ] = xx [ 157 ] * xx [ 187 ] + xx [ 289 ] * xx
[ 186 ] + xx [ 107 ] * xx [ 182 ] + xx [ 37 ] * xx [ 183 ] + xx [ 133 ] * (
xx [ 176 ] - ( xx [ 184 ] * xx [ 326 ] + xx [ 214 ] * xx [ 327 ] - xx [ 216 ]
* xx [ 313 ] ) ) + xx [ 162 ] * ( xx [ 177 ] - ( xx [ 218 ] * xx [ 326 ] + xx
[ 220 ] * xx [ 327 ] + xx [ 226 ] * xx [ 313 ] ) ) + xx [ 38 ] * ( xx [ 178 ]
- ( xx [ 235 ] * xx [ 328 ] + xx [ 236 ] * xx [ 311 ] - xx [ 243 ] * xx [ 312
] ) ) + xx [ 376 ] * xx [ 389 ] - xx [ 372 ] * ( xx [ 404 ] - ( ( xx [ 406 ]
* xx [ 246 ] + xx [ 444 ] ) * xx [ 410 ] - xx [ 412 ] * xx [ 448 ] ) ) - xx [
340 ] * ( xx [ 405 ] - ( xx [ 392 ] * ( ( xx [ 445 ] - xx [ 408 ] * xx [ 246
] ) * xx [ 20 ] - xx [ 393 ] ) + xx [ 412 ] * xx [ 447 ] ) ) ; xx [ 1061 ] =
xx [ 464 ] ; xx [ 1062 ] = xx [ 288 ] ; xx [ 1063 ] = xx [ 471 ] ; xx [ 1064
] = xx [ 478 ] ; xx [ 1065 ] = xx [ 402 ] ; xx [ 1066 ] = xx [ 516 ] ; xx [
1067 ] = xx [ 535 ] ; xx [ 1068 ] = xx [ 528 ] ; xx [ 1069 ] = xx [ 563 ] ;
xx [ 1070 ] = xx [ 582 ] ; xx [ 1071 ] = xx [ 558 ] ; xx [ 1072 ] = xx [ 283
] ; xx [ 1073 ] = xx [ 594 ] ; xx [ 1074 ] = xx [ 579 ] ; xx [ 1075 ] = xx [
464 ] ; xx [ 1076 ] = xx [ 415 ] * xx [ 428 ] + xx [ 443 ] * xx [ 440 ] + xx
[ 446 ] * xx [ 442 ] + xx [ 456 ] * xx [ 458 ] + xx [ 423 ] * xx [ 441 ] + xx
[ 424 ] * xx [ 450 ] + xx [ 427 ] * xx [ 452 ] + xx [ 462 ] * xx [ 339 ] - xx
[ 454 ] * xx [ 354 ] - xx [ 364 ] * xx [ 466 ] ; xx [ 1077 ] = xx [ 591 ] ;
xx [ 1078 ] = xx [ 592 ] ; xx [ 1079 ] = xx [ 596 ] ; xx [ 1080 ] = xx [ 597
] ; xx [ 1081 ] = xx [ 598 ] ; xx [ 1082 ] = xx [ 599 ] ; xx [ 1083 ] = xx [
600 ] ; xx [ 1084 ] = xx [ 601 ] ; xx [ 1085 ] = xx [ 602 ] ; xx [ 1086 ] =
xx [ 603 ] ; xx [ 1087 ] = xx [ 604 ] ; xx [ 1088 ] = xx [ 605 ] ; xx [ 1089
] = xx [ 606 ] ; xx [ 1090 ] = xx [ 288 ] ; xx [ 1091 ] = xx [ 591 ] ; xx [
1092 ] = xx [ 138 ] * xx [ 132 ] + xx [ 154 ] * xx [ 151 ] + xx [ 155 ] * xx
[ 153 ] + xx [ 286 ] * xx [ 173 ] + xx [ 150 ] * xx [ 152 ] + xx [ 130 ] * xx
[ 158 ] + xx [ 131 ] * xx [ 159 ] + xx [ 174 ] * xx [ 175 ] - xx [ 160 ] * xx
[ 287 ] - xx [ 164 ] * xx [ 294 ] ; xx [ 1093 ] = xx [ 607 ] ; xx [ 1094 ] =
xx [ 608 ] ; xx [ 1095 ] = xx [ 609 ] ; xx [ 1096 ] = xx [ 610 ] ; xx [ 1097
] = xx [ 611 ] ; xx [ 1098 ] = xx [ 612 ] ; xx [ 1099 ] = xx [ 613 ] ; xx [
1100 ] = xx [ 614 ] ; xx [ 1101 ] = xx [ 615 ] ; xx [ 1102 ] = xx [ 616 ] ;
xx [ 1103 ] = xx [ 617 ] ; xx [ 1104 ] = xx [ 618 ] ; xx [ 1105 ] = xx [ 471
] ; xx [ 1106 ] = xx [ 592 ] ; xx [ 1107 ] = xx [ 607 ] ; xx [ 1108 ] = xx [
303 ] * xx [ 375 ] + xx [ 395 ] * xx [ 396 ] + xx [ 453 ] * xx [ 467 ] + xx [
302 ] * xx [ 469 ] + xx [ 362 ] * xx [ 460 ] + xx [ 374 ] * xx [ 468 ] + xx [
394 ] * xx [ 470 ] + xx [ 663 ] * xx [ 667 ] - xx [ 659 ] * ( xx [ 682 ] - (
( xx [ 681 ] * xx [ 620 ] + xx [ 716 ] ) * xx [ 410 ] - xx [ 412 ] * xx [ 720
] ) ) - xx [ 633 ] * ( xx [ 683 ] - ( xx [ 392 ] * ( ( xx [ 717 ] - xx [ 684
] * xx [ 620 ] ) * xx [ 20 ] - xx [ 668 ] ) + xx [ 412 ] * xx [ 719 ] ) ) ;
xx [ 1109 ] = xx [ 647 ] ; xx [ 1110 ] = xx [ 648 ] ; xx [ 1111 ] = xx [ 661
] ; xx [ 1112 ] = xx [ 662 ] ; xx [ 1113 ] = xx [ 664 ] ; xx [ 1114 ] = xx [
665 ] ; xx [ 1115 ] = xx [ 666 ] ; xx [ 1116 ] = xx [ 669 ] ; xx [ 1117 ] =
xx [ 670 ] ; xx [ 1118 ] = xx [ 673 ] ; xx [ 1119 ] = xx [ 674 ] ; xx [ 1120
] = xx [ 478 ] ; xx [ 1121 ] = xx [ 596 ] ; xx [ 1122 ] = xx [ 608 ] ; xx [
1123 ] = xx [ 647 ] ; xx [ 1124 ] = xx [ 472 ] * xx [ 480 ] + xx [ 498 ] * xx
[ 479 ] + xx [ 499 ] * xx [ 491 ] + xx [ 501 ] * xx [ 493 ] + xx [ 473 ] * xx
[ 481 ] + xx [ 474 ] * xx [ 476 ] + xx [ 475 ] * xx [ 477 ] + xx [ 690 ] * xx
[ 625 ] - xx [ 686 ] * xx [ 692 ] - xx [ 656 ] * xx [ 693 ] ; xx [ 1125 ] =
xx [ 678 ] ; xx [ 1126 ] = xx [ 679 ] ; xx [ 1127 ] = xx [ 680 ] ; xx [ 1128
] = xx [ 687 ] ; xx [ 1129 ] = xx [ 695 ] ; xx [ 1130 ] = xx [ 700 ] ; xx [
1131 ] = xx [ 701 ] ; xx [ 1132 ] = xx [ 702 ] ; xx [ 1133 ] = xx [ 703 ] ;
xx [ 1134 ] = xx [ 715 ] ; xx [ 1135 ] = xx [ 402 ] ; xx [ 1136 ] = xx [ 597
] ; xx [ 1137 ] = xx [ 609 ] ; xx [ 1138 ] = xx [ 648 ] ; xx [ 1139 ] = xx [
678 ] ; xx [ 1140 ] = xx [ 377 ] * xx [ 356 ] + xx [ 379 ] * xx [ 368 ] + xx
[ 391 ] * xx [ 370 ] + xx [ 483 ] * xx [ 484 ] + xx [ 378 ] * xx [ 369 ] + xx
[ 304 ] * xx [ 400 ] + xx [ 352 ] * xx [ 401 ] + xx [ 652 ] * xx [ 646 ] - xx
[ 672 ] * xx [ 653 ] - xx [ 651 ] * xx [ 654 ] ; xx [ 1141 ] = xx [ 718 ] ;
xx [ 1142 ] = xx [ 721 ] ; xx [ 1143 ] = xx [ 722 ] ; xx [ 1144 ] = xx [ 723
] ; xx [ 1145 ] = xx [ 725 ] ; xx [ 1146 ] = xx [ 727 ] ; xx [ 1147 ] = xx [
728 ] ; xx [ 1148 ] = xx [ 729 ] ; xx [ 1149 ] = xx [ 731 ] ; xx [ 1150 ] =
xx [ 516 ] ; xx [ 1151 ] = xx [ 598 ] ; xx [ 1152 ] = xx [ 610 ] ; xx [ 1153
] = xx [ 661 ] ; xx [ 1154 ] = xx [ 679 ] ; xx [ 1155 ] = xx [ 718 ] ; xx [
1156 ] = xx [ 487 ] * xx [ 504 ] + xx [ 507 ] * xx [ 508 ] + xx [ 524 ] * xx
[ 513 ] + xx [ 486 ] * xx [ 518 ] + xx [ 492 ] * xx [ 512 ] + xx [ 503 ] * xx
[ 514 ] + xx [ 506 ] * xx [ 515 ] + xx [ 780 ] * xx [ 767 ] - xx [ 776 ] * (
xx [ 799 ] - ( ( xx [ 788 ] * xx [ 733 ] + xx [ 818 ] ) * xx [ 410 ] - xx [
412 ] * xx [ 834 ] ) ) - xx [ 762 ] * ( xx [ 800 ] - ( xx [ 392 ] * ( ( xx [
819 ] - xx [ 801 ] * xx [ 733 ] ) * xx [ 20 ] - xx [ 787 ] ) + xx [ 412 ] *
xx [ 833 ] ) ) ; xx [ 1157 ] = xx [ 807 ] ; xx [ 1158 ] = xx [ 770 ] ; xx [
1159 ] = xx [ 778 ] ; xx [ 1160 ] = xx [ 779 ] ; xx [ 1161 ] = xx [ 781 ] ;
xx [ 1162 ] = xx [ 782 ] ; xx [ 1163 ] = xx [ 783 ] ; xx [ 1164 ] = xx [ 784
] ; xx [ 1165 ] = xx [ 535 ] ; xx [ 1166 ] = xx [ 599 ] ; xx [ 1167 ] = xx [
611 ] ; xx [ 1168 ] = xx [ 662 ] ; xx [ 1169 ] = xx [ 680 ] ; xx [ 1170 ] =
xx [ 721 ] ; xx [ 1171 ] = xx [ 807 ] ; xx [ 1172 ] = xx [ 517 ] * xx [ 522 ]
+ xx [ 523 ] * xx [ 526 ] + xx [ 525 ] * xx [ 540 ] + xx [ 548 ] * xx [ 542 ]
+ xx [ 519 ] * xx [ 539 ] + xx [ 520 ] * xx [ 533 ] + xx [ 521 ] * xx [ 534 ]
+ xx [ 805 ] * xx [ 761 ] - xx [ 802 ] * xx [ 764 ] - xx [ 773 ] * xx [ 808 ]
; xx [ 1173 ] = xx [ 786 ] ; xx [ 1174 ] = xx [ 790 ] ; xx [ 1175 ] = xx [
791 ] ; xx [ 1176 ] = xx [ 795 ] ; xx [ 1177 ] = xx [ 796 ] ; xx [ 1178 ] =
xx [ 797 ] ; xx [ 1179 ] = xx [ 803 ] ; xx [ 1180 ] = xx [ 528 ] ; xx [ 1181
] = xx [ 600 ] ; xx [ 1182 ] = xx [ 612 ] ; xx [ 1183 ] = xx [ 664 ] ; xx [
1184 ] = xx [ 687 ] ; xx [ 1185 ] = xx [ 722 ] ; xx [ 1186 ] = xx [ 770 ] ;
xx [ 1187 ] = xx [ 786 ] ; xx [ 1188 ] = xx [ 494 ] * xx [ 490 ] + xx [ 496 ]
* xx [ 500 ] + xx [ 497 ] * xx [ 509 ] + xx [ 502 ] * xx [ 511 ] + xx [ 495 ]
* xx [ 505 ] + xx [ 488 ] * xx [ 510 ] + xx [ 489 ] * xx [ 527 ] + xx [ 769 ]
* xx [ 763 ] - xx [ 789 ] * xx [ 765 ] - xx [ 768 ] * xx [ 771 ] ; xx [ 1189
] = xx [ 809 ] ; xx [ 1190 ] = xx [ 817 ] ; xx [ 1191 ] = xx [ 820 ] ; xx [
1192 ] = xx [ 832 ] ; xx [ 1193 ] = xx [ 835 ] ; xx [ 1194 ] = xx [ 836 ] ;
xx [ 1195 ] = xx [ 563 ] ; xx [ 1196 ] = xx [ 601 ] ; xx [ 1197 ] = xx [ 613
] ; xx [ 1198 ] = xx [ 665 ] ; xx [ 1199 ] = xx [ 695 ] ; xx [ 1200 ] = xx [
723 ] ; xx [ 1201 ] = xx [ 778 ] ; xx [ 1202 ] = xx [ 790 ] ; xx [ 1203 ] =
xx [ 809 ] ; xx [ 1204 ] = xx [ 532 ] * xx [ 551 ] + xx [ 554 ] * xx [ 555 ]
+ xx [ 571 ] * xx [ 560 ] + xx [ 531 ] * xx [ 565 ] + xx [ 541 ] * xx [ 559 ]
+ xx [ 550 ] * xx [ 561 ] + xx [ 553 ] * xx [ 562 ] + xx [ 889 ] * xx [ 876 ]
- xx [ 885 ] * ( xx [ 908 ] - ( ( xx [ 897 ] * xx [ 837 ] + xx [ 927 ] ) * xx
[ 410 ] - xx [ 412 ] * xx [ 943 ] ) ) - xx [ 854 ] * ( xx [ 909 ] - ( xx [
392 ] * ( ( xx [ 928 ] - xx [ 910 ] * xx [ 837 ] ) * xx [ 20 ] - xx [ 896 ] )
+ xx [ 412 ] * xx [ 942 ] ) ) ; xx [ 1205 ] = xx [ 916 ] ; xx [ 1206 ] = xx [
879 ] ; xx [ 1207 ] = xx [ 887 ] ; xx [ 1208 ] = xx [ 888 ] ; xx [ 1209 ] =
xx [ 890 ] ; xx [ 1210 ] = xx [ 582 ] ; xx [ 1211 ] = xx [ 602 ] ; xx [ 1212
] = xx [ 614 ] ; xx [ 1213 ] = xx [ 666 ] ; xx [ 1214 ] = xx [ 700 ] ; xx [
1215 ] = xx [ 725 ] ; xx [ 1216 ] = xx [ 779 ] ; xx [ 1217 ] = xx [ 791 ] ;
xx [ 1218 ] = xx [ 817 ] ; xx [ 1219 ] = xx [ 916 ] ; xx [ 1220 ] = xx [ 564
] * xx [ 569 ] + xx [ 570 ] * xx [ 573 ] + xx [ 572 ] * xx [ 587 ] + xx [ 595
] * xx [ 589 ] + xx [ 566 ] * xx [ 586 ] + xx [ 567 ] * xx [ 580 ] + xx [ 568
] * xx [ 581 ] + xx [ 914 ] * xx [ 852 ] - xx [ 911 ] * xx [ 873 ] - xx [ 882
] * xx [ 917 ] ; xx [ 1221 ] = xx [ 891 ] ; xx [ 1222 ] = xx [ 892 ] ; xx [
1223 ] = xx [ 893 ] ; xx [ 1224 ] = xx [ 895 ] ; xx [ 1225 ] = xx [ 558 ] ;
xx [ 1226 ] = xx [ 603 ] ; xx [ 1227 ] = xx [ 615 ] ; xx [ 1228 ] = xx [ 669
] ; xx [ 1229 ] = xx [ 701 ] ; xx [ 1230 ] = xx [ 727 ] ; xx [ 1231 ] = xx [
781 ] ; xx [ 1232 ] = xx [ 795 ] ; xx [ 1233 ] = xx [ 820 ] ; xx [ 1234 ] =
xx [ 879 ] ; xx [ 1235 ] = xx [ 891 ] ; xx [ 1236 ] = xx [ 543 ] * xx [ 538 ]
+ xx [ 549 ] * xx [ 545 ] + xx [ 552 ] * xx [ 547 ] + xx [ 575 ] * xx [ 576 ]
+ xx [ 544 ] * xx [ 546 ] + xx [ 536 ] * xx [ 556 ] + xx [ 537 ] * xx [ 557 ]
+ xx [ 878 ] * xx [ 856 ] - xx [ 898 ] * xx [ 874 ] - xx [ 877 ] * xx [ 880 ]
; xx [ 1237 ] = xx [ 899 ] ; xx [ 1238 ] = xx [ 900 ] ; xx [ 1239 ] = xx [
904 ] ; xx [ 1240 ] = xx [ 283 ] ; xx [ 1241 ] = xx [ 604 ] ; xx [ 1242 ] =
xx [ 616 ] ; xx [ 1243 ] = xx [ 670 ] ; xx [ 1244 ] = xx [ 702 ] ; xx [ 1245
] = xx [ 728 ] ; xx [ 1246 ] = xx [ 782 ] ; xx [ 1247 ] = xx [ 796 ] ; xx [
1248 ] = xx [ 832 ] ; xx [ 1249 ] = xx [ 887 ] ; xx [ 1250 ] = xx [ 892 ] ;
xx [ 1251 ] = xx [ 899 ] ; xx [ 1252 ] = xx [ 139 ] * xx [ 91 ] + xx [ 170 ]
* xx [ 167 ] + xx [ 192 ] * xx [ 200 ] + xx [ 31 ] * xx [ 251 ] + xx [ 145 ]
* xx [ 188 ] + xx [ 156 ] * xx [ 203 ] + xx [ 583 ] * xx [ 256 ] + xx [ 980 ]
* xx [ 185 ] - xx [ 961 ] * ( xx [ 1000 ] - ( ( xx [ 407 ] * xx [ 918 ] + xx
[ 1022 ] ) * xx [ 410 ] - xx [ 412 ] * xx [ 1036 ] ) ) - xx [ 1 ] * ( xx [
1001 ] - ( xx [ 392 ] * ( ( xx [ 1023 ] - xx [ 417 ] * xx [ 918 ] ) * xx [ 20
] - xx [ 215 ] ) + xx [ 412 ] * xx [ 1035 ] ) ) ; xx [ 1253 ] = xx [ 338 ] ;
xx [ 1254 ] = xx [ 360 ] ; xx [ 1255 ] = xx [ 594 ] ; xx [ 1256 ] = xx [ 605
] ; xx [ 1257 ] = xx [ 617 ] ; xx [ 1258 ] = xx [ 673 ] ; xx [ 1259 ] = xx [
703 ] ; xx [ 1260 ] = xx [ 729 ] ; xx [ 1261 ] = xx [ 783 ] ; xx [ 1262 ] =
xx [ 797 ] ; xx [ 1263 ] = xx [ 835 ] ; xx [ 1264 ] = xx [ 888 ] ; xx [ 1265
] = xx [ 893 ] ; xx [ 1266 ] = xx [ 900 ] ; xx [ 1267 ] = xx [ 338 ] ; xx [
1268 ] = xx [ 290 ] * xx [ 92 ] + xx [ 414 ] * xx [ 171 ] + xx [ 284 ] * xx [
584 ] + xx [ 578 ] * xx [ 588 ] + xx [ 291 ] * xx [ 292 ] + xx [ 136 ] * xx [
585 ] + xx [ 168 ] * xx [ 593 ] + xx [ 999 ] * xx [ 0 ] - xx [ 984 ] * xx [
1002 ] - xx [ 957 ] * xx [ 1004 ] ; xx [ 1269 ] = xx [ 979 ] ; xx [ 1270 ] =
xx [ 579 ] ; xx [ 1271 ] = xx [ 606 ] ; xx [ 1272 ] = xx [ 618 ] ; xx [ 1273
] = xx [ 674 ] ; xx [ 1274 ] = xx [ 715 ] ; xx [ 1275 ] = xx [ 731 ] ; xx [
1276 ] = xx [ 784 ] ; xx [ 1277 ] = xx [ 803 ] ; xx [ 1278 ] = xx [ 836 ] ;
xx [ 1279 ] = xx [ 890 ] ; xx [ 1280 ] = xx [ 895 ] ; xx [ 1281 ] = xx [ 904
] ; xx [ 1282 ] = xx [ 360 ] ; xx [ 1283 ] = xx [ 979 ] ; xx [ 1284 ] = xx [
590 ] * xx [ 93 ] + xx [ 148 ] * xx [ 142 ] + xx [ 169 ] * xx [ 144 ] + xx [
172 ] * xx [ 285 ] + xx [ 149 ] * xx [ 143 ] + xx [ 137 ] * xx [ 147 ] + xx [
135 ] * xx [ 293 ] + xx [ 84 ] * xx [ 106 ] - xx [ 993 ] * xx [ 948 ] - xx [
81 ] * xx [ 951 ] ; xx [ 0 ] = xx [ 4 ] * state [ 35 ] ; xx [ 91 ] = xx [ 12
] * state [ 35 ] ; xx [ 92 ] = xx [ 321 ] * xx [ 91 ] ; xx [ 93 ] = xx [ 0 ]
* xx [ 333 ] - xx [ 299 ] * xx [ 91 ] ; xx [ 106 ] = xx [ 321 ] * xx [ 0 ] ;
xx [ 142 ] = xx [ 92 ] ; xx [ 143 ] = xx [ 93 ] ; xx [ 144 ] = - xx [ 106 ] ;
pm_math_Vector3_cross_ra ( xx + 348 , xx + 142 , xx + 151 ) ; xx [ 132 ] = xx
[ 0 ] + ( xx [ 151 ] - xx [ 92 ] * xx [ 246 ] ) * xx [ 20 ] ; xx [ 92 ] = xx
[ 132 ] + state [ 40 ] ; xx [ 142 ] = xx [ 20 ] * ( xx [ 152 ] - xx [ 93 ] *
xx [ 246 ] ) ; xx [ 93 ] = xx [ 142 ] + state [ 41 ] ; xx [ 143 ] = xx [ 91 ]
+ xx [ 20 ] * ( xx [ 153 ] + xx [ 106 ] * xx [ 246 ] ) ; xx [ 106 ] = xx [
143 ] + state [ 42 ] ; xx [ 151 ] = xx [ 92 ] ; xx [ 152 ] = xx [ 93 ] ; xx [
153 ] = xx [ 106 ] ; xx [ 175 ] = xx [ 92 ] * xx [ 27 ] ; xx [ 176 ] = xx [
93 ] * xx [ 28 ] ; xx [ 177 ] = xx [ 106 ] * xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 151 , xx + 175 , xx + 185 ) ; xx [ 151 ] = xx
[ 132 ] ; xx [ 152 ] = xx [ 142 ] ; xx [ 153 ] = xx [ 143 ] ; xx [ 175 ] =
state [ 40 ] ; xx [ 176 ] = state [ 41 ] ; xx [ 177 ] = state [ 42 ] ;
pm_math_Vector3_cross_ra ( xx + 151 , xx + 175 , xx + 292 ) ; xx [ 144 ] = xx
[ 185 ] + xx [ 27 ] * xx [ 292 ] ; xx [ 147 ] = - xx [ 144 ] ; xx [ 158 ] =
xx [ 186 ] + xx [ 28 ] * xx [ 293 ] ; xx [ 159 ] = xx [ 132 ] + xx [ 92 ] ;
xx [ 92 ] = xx [ 79 ] * state [ 42 ] ; xx [ 132 ] = xx [ 371 ] * xx [ 91 ] -
xx [ 373 ] * xx [ 0 ] ; xx [ 311 ] = - ( xx [ 91 ] * xx [ 132 ] ) ; xx [ 312
] = - ( xx [ 91 ] * xx [ 363 ] * xx [ 91 ] + xx [ 0 ] * xx [ 363 ] * xx [ 0 ]
) ; xx [ 313 ] = xx [ 0 ] * xx [ 132 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 334 , xx + 311 , xx + 326 ) ; xx [ 132 ] = ( xx [ 159 ] * xx [ 92 ] + xx
[ 328 ] ) * xx [ 248 ] ; xx [ 167 ] = xx [ 158 ] - xx [ 79 ] * xx [ 132 ] ;
xx [ 171 ] = xx [ 187 ] + xx [ 28 ] * xx [ 294 ] ; xx [ 173 ] = xx [ 79 ] *
state [ 41 ] ; xx [ 178 ] = ( xx [ 159 ] * xx [ 173 ] + xx [ 327 ] ) * xx [
248 ] ; xx [ 159 ] = xx [ 171 ] + xx [ 79 ] * xx [ 178 ] ; xx [ 185 ] = xx [
147 ] ; xx [ 186 ] = - xx [ 167 ] ; xx [ 187 ] = - xx [ 159 ] ;
solveSymmetricPosDef ( xx + 380 , xx + 185 , 3 , 1 , xx + 292 , xx + 311 ) ;
xx [ 185 ] = xx [ 144 ] + xx [ 27 ] * xx [ 292 ] ; xx [ 186 ] = xx [ 158 ] +
xx [ 28 ] * xx [ 293 ] ; xx [ 187 ] = xx [ 171 ] + xx [ 28 ] * xx [ 294 ] ;
pm_math_Quaternion_xform_ra ( xx + 334 , xx + 185 , xx + 311 ) ; xx [ 182 ] =
xx [ 248 ] * ( xx [ 326 ] - ( ( xx [ 142 ] + xx [ 93 ] ) * xx [ 173 ] + ( xx
[ 143 ] + xx [ 106 ] ) * xx [ 92 ] ) ) ; xx [ 185 ] = xx [ 182 ] ; xx [ 186 ]
= xx [ 178 ] + xx [ 358 ] * xx [ 294 ] ; xx [ 187 ] = xx [ 132 ] - xx [ 358 ]
* xx [ 293 ] ; pm_math_Quaternion_xform_ra ( xx + 334 , xx + 185 , xx + 326 )
; pm_math_Vector3_cross_ra ( xx + 397 , xx + 326 , xx + 185 ) ; xx [ 93 ] =
xx [ 416 ] + xx [ 449 ] ; xx [ 106 ] = xx [ 134 ] * state [ 35 ] ; xx [ 142 ]
= xx [ 106 ] * xx [ 91 ] ; xx [ 143 ] = xx [ 106 ] * xx [ 0 ] ; xx [ 106 ] =
xx [ 429 ] - xx [ 451 ] ; xx [ 183 ] = xx [ 93 ] * xx [ 142 ] + xx [ 143 ] *
xx [ 106 ] ; xx [ 186 ] = xx [ 420 ] - xx [ 455 ] ; xx [ 188 ] = xx [ 430 ] +
xx [ 457 ] ; xx [ 200 ] = xx [ 142 ] * xx [ 186 ] + xx [ 188 ] * xx [ 143 ] ;
xx [ 203 ] = xx [ 465 ] * xx [ 143 ] - xx [ 459 ] * xx [ 142 ] ; xx [ 368 ] =
( xx [ 12 ] * xx [ 186 ] - xx [ 93 ] * xx [ 4 ] + xx [ 134 ] * xx [ 461 ] ) /
xx [ 426 ] ; xx [ 369 ] = xx [ 425 ] / xx [ 426 ] ; xx [ 370 ] = ( xx [ 4 ] *
xx [ 106 ] - xx [ 188 ] * xx [ 12 ] + xx [ 134 ] * xx [ 463 ] ) / xx [ 426 ]
; xx [ 93 ] = 9.806649999999999 ; xx [ 106 ] = xx [ 298 ] * xx [ 93 ] ; xx [
186 ] = xx [ 93 ] * xx [ 315 ] ; xx [ 188 ] = ( xx [ 106 ] * xx [ 301 ] - xx
[ 297 ] * xx [ 186 ] ) * xx [ 20 ] ; xx [ 215 ] = ( xx [ 186 ] * xx [ 315 ] +
xx [ 298 ] * xx [ 106 ] ) * xx [ 20 ] ; xx [ 251 ] = xx [ 20 ] * ( xx [ 301 ]
* xx [ 186 ] + xx [ 106 ] * xx [ 297 ] ) ; xx [ 400 ] = xx [ 188 ] ; xx [ 401
] = xx [ 93 ] - xx [ 215 ] ; xx [ 402 ] = - xx [ 251 ] ; xx [ 106 ] =
pm_math_Vector3_dot_ra ( xx + 368 , xx + 400 ) ; xx [ 186 ] = ( input [ 3 ] -
( ( xx [ 311 ] + xx [ 185 ] + xx [ 183 ] ) * xx [ 4 ] + xx [ 12 ] * ( xx [
313 ] + xx [ 187 ] - xx [ 200 ] ) + ( xx [ 327 ] + xx [ 203 ] ) * xx [ 134 ]
) ) / xx [ 426 ] - xx [ 106 ] ; xx [ 185 ] = xx [ 63 ] * xx [ 58 ] ; xx [ 187
] = xx [ 59 ] * xx [ 66 ] ; xx [ 256 ] = ( xx [ 185 ] - xx [ 187 ] ) * xx [
20 ] ; xx [ 283 ] = xx [ 59 ] * xx [ 59 ] ; xx [ 285 ] = ( xx [ 283 ] + xx [
63 ] * xx [ 63 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 287 ] = xx [ 256 ] * xx [ 6
] + xx [ 13 ] * xx [ 285 ] ; xx [ 288 ] = xx [ 66 ] * xx [ 58 ] ; xx [ 292 ]
= xx [ 63 ] * xx [ 59 ] ; xx [ 311 ] = xx [ 20 ] * ( xx [ 288 ] + xx [ 292 ]
) ; xx [ 312 ] = xx [ 63 ] * xx [ 66 ] ; xx [ 313 ] = xx [ 59 ] * xx [ 58 ] ;
xx [ 326 ] = ( xx [ 312 ] - xx [ 313 ] ) * xx [ 20 ] ; xx [ 327 ] = xx [ 6 ]
* xx [ 311 ] + xx [ 326 ] * xx [ 13 ] ; xx [ 328 ] = ( xx [ 283 ] + xx [ 58 ]
* xx [ 58 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 338 ] = xx [ 20 ] * ( xx [ 185 ]
+ xx [ 187 ] ) ; xx [ 185 ] = xx [ 6 ] * xx [ 328 ] + xx [ 13 ] * xx [ 338 ]
; xx [ 187 ] = xx [ 20 ] * ( xx [ 312 ] + xx [ 313 ] ) ; xx [ 312 ] = ( xx [
283 ] + xx [ 66 ] * xx [ 66 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 283 ] = ( xx [
288 ] - xx [ 292 ] ) * xx [ 20 ] ; xx [ 463 ] = - ( xx [ 13 ] * xx [ 287 ] )
; xx [ 464 ] = - ( xx [ 13 ] * xx [ 327 ] ) ; xx [ 465 ] = - ( xx [ 13 ] * xx
[ 185 ] ) ; xx [ 466 ] = - ( xx [ 13 ] * xx [ 13 ] * xx [ 187 ] + xx [ 6 ] *
xx [ 6 ] * xx [ 187 ] ) ; xx [ 467 ] = - ( xx [ 13 ] * xx [ 13 ] * xx [ 312 ]
+ xx [ 6 ] * xx [ 6 ] * xx [ 312 ] ) ; xx [ 468 ] = - ( xx [ 13 ] * xx [ 283
] * xx [ 13 ] + xx [ 6 ] * xx [ 283 ] * xx [ 6 ] ) ; xx [ 469 ] = - ( xx [ 6
] * xx [ 287 ] ) ; xx [ 470 ] = - ( xx [ 6 ] * xx [ 327 ] ) ; xx [ 471 ] = -
( xx [ 6 ] * xx [ 185 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 463 , xx +
261 , xx + 508 ) ; xx [ 261 ] = xx [ 285 ] ; xx [ 262 ] = xx [ 326 ] ; xx [
263 ] = xx [ 338 ] ; xx [ 264 ] = xx [ 187 ] ; xx [ 265 ] = xx [ 312 ] ; xx [
266 ] = xx [ 283 ] ; xx [ 267 ] = xx [ 256 ] ; xx [ 268 ] = xx [ 311 ] ; xx [
269 ] = xx [ 328 ] ; xx [ 185 ] = xx [ 190 ] * state [ 8 ] + xx [ 228 ] *
state [ 6 ] ; xx [ 187 ] = xx [ 190 ] * state [ 7 ] - xx [ 225 ] * state [ 6
] ; xx [ 190 ] = xx [ 185 ] * state [ 8 ] + xx [ 187 ] * state [ 7 ] ; xx [
256 ] = xx [ 198 ] * state [ 6 ] - xx [ 195 ] * state [ 8 ] ; xx [ 283 ] = xx
[ 195 ] * state [ 7 ] - xx [ 191 ] * state [ 6 ] ; xx [ 195 ] = xx [ 256 ] *
state [ 8 ] - xx [ 283 ] * state [ 7 ] ; xx [ 285 ] = xx [ 194 ] * state [ 6
] - xx [ 219 ] * state [ 8 ] ; xx [ 287 ] = xx [ 219 ] * state [ 7 ] + xx [
227 ] * state [ 6 ] ; xx [ 219 ] = xx [ 285 ] * state [ 8 ] - xx [ 287 ] *
state [ 7 ] ; xx [ 288 ] = xx [ 225 ] * state [ 8 ] + xx [ 228 ] * state [ 7
] ; xx [ 225 ] = xx [ 191 ] * state [ 8 ] - xx [ 198 ] * state [ 7 ] ; xx [
191 ] = xx [ 227 ] * state [ 8 ] + xx [ 194 ] * state [ 7 ] ; xx [ 555 ] = -
xx [ 190 ] ; xx [ 556 ] = xx [ 195 ] ; xx [ 557 ] = xx [ 219 ] ; xx [ 558 ] =
xx [ 187 ] * state [ 6 ] - xx [ 288 ] * state [ 8 ] ; xx [ 559 ] = xx [ 283 ]
* state [ 6 ] - xx [ 225 ] * state [ 8 ] ; xx [ 560 ] = xx [ 191 ] * state [
8 ] + xx [ 287 ] * state [ 6 ] ; xx [ 561 ] = xx [ 288 ] * state [ 7 ] + xx [
185 ] * state [ 6 ] ; xx [ 562 ] = xx [ 225 ] * state [ 7 ] - xx [ 256 ] *
state [ 6 ] ; xx [ 563 ] = - ( xx [ 191 ] * state [ 7 ] + xx [ 285 ] * state
[ 6 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 261 , xx + 555 , xx + 596 ) ;
xx [ 185 ] = xx [ 71 ] * xx [ 71 ] ; xx [ 187 ] = xx [ 72 ] * xx [ 73 ] ; xx
[ 191 ] = xx [ 71 ] * xx [ 74 ] ; xx [ 194 ] = xx [ 72 ] * xx [ 74 ] ; xx [
198 ] = xx [ 71 ] * xx [ 73 ] ; xx [ 225 ] = xx [ 73 ] * xx [ 74 ] ; xx [ 227
] = xx [ 71 ] * xx [ 72 ] ; xx [ 261 ] = ( xx [ 185 ] + xx [ 72 ] * xx [ 72 ]
) * xx [ 20 ] - xx [ 54 ] ; xx [ 262 ] = ( xx [ 187 ] + xx [ 191 ] ) * xx [
20 ] ; xx [ 263 ] = xx [ 20 ] * ( xx [ 194 ] - xx [ 198 ] ) ; xx [ 264 ] = xx
[ 20 ] * ( xx [ 187 ] - xx [ 191 ] ) ; xx [ 265 ] = ( xx [ 185 ] + xx [ 73 ]
* xx [ 73 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 266 ] = ( xx [ 225 ] + xx [ 227
] ) * xx [ 20 ] ; xx [ 267 ] = ( xx [ 194 ] + xx [ 198 ] ) * xx [ 20 ] ; xx [
268 ] = xx [ 20 ] * ( xx [ 225 ] - xx [ 227 ] ) ; xx [ 269 ] = ( xx [ 185 ] +
xx [ 74 ] * xx [ 74 ] ) * xx [ 20 ] - xx [ 54 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 261 , xx + 21 , xx + 555 ) ; xx [ 311 ]
= state [ 6 ] ; xx [ 312 ] = state [ 7 ] ; xx [ 313 ] = state [ 8 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 555 , xx + 311 , xx + 605 ) ; xx [ 555
] = xx [ 508 ] + xx [ 596 ] + xx [ 20 ] * xx [ 605 ] ; xx [ 556 ] = xx [ 509
] + xx [ 597 ] + xx [ 20 ] * xx [ 606 ] ; xx [ 557 ] = xx [ 510 ] + xx [ 598
] + xx [ 20 ] * xx [ 607 ] ; xx [ 558 ] = xx [ 511 ] + xx [ 599 ] + xx [ 20 ]
* xx [ 608 ] ; xx [ 559 ] = xx [ 512 ] + xx [ 600 ] + xx [ 20 ] * xx [ 609 ]
; xx [ 560 ] = xx [ 513 ] + xx [ 601 ] + xx [ 20 ] * xx [ 610 ] ; xx [ 561 ]
= xx [ 514 ] + xx [ 602 ] + xx [ 20 ] * xx [ 611 ] ; xx [ 562 ] = xx [ 515 ]
+ xx [ 603 ] + xx [ 20 ] * xx [ 612 ] ; xx [ 563 ] = xx [ 516 ] + xx [ 604 ]
+ xx [ 20 ] * xx [ 613 ] ; pm_math_Matrix3x3_compose_ra ( xx + 555 , xx + 204
, xx + 508 ) ; xx [ 185 ] = xx [ 201 ] * xx [ 50 ] - xx [ 189 ] * state [ 15
] ; xx [ 187 ] = xx [ 52 ] * xx [ 189 ] - xx [ 197 ] * xx [ 50 ] ; xx [ 189 ]
= xx [ 185 ] * state [ 15 ] - xx [ 187 ] * xx [ 52 ] ; xx [ 191 ] = xx [ 193
] * state [ 15 ] - xx [ 202 ] * xx [ 50 ] ; xx [ 194 ] = xx [ 52 ] * xx [ 193
] - xx [ 199 ] * xx [ 50 ] ; xx [ 193 ] = xx [ 191 ] * state [ 15 ] + xx [ 52
] * xx [ 194 ] ; xx [ 198 ] = xx [ 39 ] * xx [ 50 ] - xx [ 196 ] * state [ 15
] ; xx [ 204 ] = xx [ 52 ] * xx [ 196 ] - xx [ 35 ] * xx [ 50 ] ; xx [ 196 ]
= xx [ 198 ] * state [ 15 ] - xx [ 52 ] * xx [ 204 ] ; xx [ 205 ] = xx [ 52 ]
* xx [ 201 ] - xx [ 197 ] * state [ 15 ] ; xx [ 197 ] = xx [ 205 ] * state [
15 ] + xx [ 187 ] * xx [ 50 ] ; xx [ 187 ] = xx [ 199 ] * state [ 15 ] - xx [
52 ] * xx [ 202 ] ; xx [ 199 ] = xx [ 194 ] * xx [ 50 ] - xx [ 187 ] * state
[ 15 ] ; xx [ 194 ] = xx [ 35 ] * state [ 15 ] - xx [ 52 ] * xx [ 39 ] ; xx [
35 ] = xx [ 204 ] * xx [ 50 ] - xx [ 194 ] * state [ 15 ] ; xx [ 596 ] = xx [
189 ] ; xx [ 597 ] = - xx [ 193 ] ; xx [ 598 ] = xx [ 196 ] ; xx [ 599 ] = xx
[ 197 ] ; xx [ 600 ] = xx [ 199 ] ; xx [ 601 ] = xx [ 35 ] ; xx [ 602 ] = - (
xx [ 205 ] * xx [ 52 ] + xx [ 185 ] * xx [ 50 ] ) ; xx [ 603 ] = xx [ 187 ] *
xx [ 52 ] + xx [ 191 ] * xx [ 50 ] ; xx [ 604 ] = xx [ 52 ] * xx [ 194 ] - xx
[ 198 ] * xx [ 50 ] ; pm_math_Matrix3x3_compose_ra ( xx + 261 , xx + 596 , xx
+ 204 ) ; xx [ 39 ] = xx [ 75 ] * xx [ 75 ] ; xx [ 185 ] = xx [ 76 ] * xx [
77 ] ; xx [ 187 ] = xx [ 76 ] * xx [ 78 ] ; xx [ 191 ] = xx [ 75 ] * xx [ 77
] ; xx [ 194 ] = xx [ 77 ] * xx [ 78 ] ; xx [ 198 ] = xx [ 75 ] * xx [ 76 ] ;
xx [ 261 ] = ( xx [ 39 ] + xx [ 76 ] * xx [ 76 ] ) * xx [ 20 ] - xx [ 54 ] ;
xx [ 262 ] = ( xx [ 185 ] + xx [ 64 ] ) * xx [ 20 ] ; xx [ 263 ] = xx [ 20 ]
* ( xx [ 187 ] - xx [ 191 ] ) ; xx [ 264 ] = xx [ 20 ] * ( xx [ 185 ] - xx [
64 ] ) ; xx [ 265 ] = ( xx [ 39 ] + xx [ 77 ] * xx [ 77 ] ) * xx [ 20 ] - xx
[ 54 ] ; xx [ 266 ] = ( xx [ 194 ] + xx [ 198 ] ) * xx [ 20 ] ; xx [ 267 ] =
( xx [ 187 ] + xx [ 191 ] ) * xx [ 20 ] ; xx [ 268 ] = xx [ 20 ] * ( xx [ 194
] - xx [ 198 ] ) ; xx [ 269 ] = ( xx [ 39 ] + xx [ 78 ] * xx [ 78 ] ) * xx [
20 ] - xx [ 54 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 261 , xx + 45 , xx +
596 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 596 , xx + 98 , xx + 261 ) ; xx
[ 39 ] = xx [ 511 ] + xx [ 207 ] + xx [ 20 ] * xx [ 264 ] ; xx [ 64 ] = xx [
508 ] + xx [ 204 ] + xx [ 20 ] * xx [ 261 ] ; pm_math_Matrix3x3_xform_ra ( xx
+ 555 , xx + 95 , xx + 75 ) ; pm_math_Matrix3x3_xform_ra ( xx + 463 , xx +
109 , xx + 98 ) ; xx [ 78 ] = 1.31347511895184e-8 ; xx [ 185 ] = xx [ 78 ] *
xx [ 66 ] ; xx [ 187 ] = 1.291763104009796e-5 ; xx [ 191 ] = xx [ 63 ] * xx [
78 ] - xx [ 187 ] * xx [ 58 ] ; xx [ 194 ] = xx [ 187 ] * xx [ 66 ] ; xx [
326 ] = - xx [ 185 ] ; xx [ 327 ] = xx [ 191 ] ; xx [ 328 ] = xx [ 194 ] ;
pm_math_Vector3_cross_ra ( xx + 115 , xx + 326 , xx + 368 ) ; xx [ 115 ] =
state [ 1 ] * state [ 1 ] ; xx [ 326 ] = - ( xx [ 190 ] * xx [ 79 ] ) ; xx [
327 ] = xx [ 79 ] * xx [ 195 ] ; xx [ 328 ] = xx [ 79 ] * xx [ 219 ] ;
pm_math_Quaternion_xform_ra ( xx + 67 , xx + 326 , xx + 400 ) ; xx [ 116 ] =
xx [ 79 ] * state [ 8 ] ; xx [ 117 ] = xx [ 79 ] * state [ 7 ] ; xx [ 190 ] =
xx [ 5 ] * xx [ 117 ] - xx [ 116 ] * xx [ 7 ] ; xx [ 195 ] = xx [ 3 ] * xx [
117 ] ; xx [ 198 ] = xx [ 3 ] * xx [ 116 ] ; xx [ 326 ] = xx [ 190 ] ; xx [
327 ] = - xx [ 195 ] ; xx [ 328 ] = - xx [ 198 ] ; pm_math_Vector3_cross_ra (
xx + 15 , xx + 326 , xx + 404 ) ; xx [ 201 ] = xx [ 116 ] + xx [ 20 ] * ( xx
[ 405 ] - xx [ 195 ] * xx [ 2 ] ) ; xx [ 326 ] = - ( xx [ 201 ] * xx [ 13 ] )
; xx [ 327 ] = ( xx [ 190 ] * xx [ 2 ] + xx [ 404 ] ) * xx [ 20 ] * xx [ 13 ]
+ xx [ 6 ] * ( xx [ 20 ] * ( xx [ 406 ] - xx [ 198 ] * xx [ 2 ] ) - xx [ 117
] ) ; xx [ 328 ] = - ( xx [ 201 ] * xx [ 6 ] ) ; pm_math_Quaternion_xform_ra
( xx + 67 , xx + 326 , xx + 404 ) ; xx [ 67 ] = - ( xx [ 40 ] * xx [ 189 ] +
xx [ 197 ] * xx [ 36 ] ) ; xx [ 68 ] = xx [ 193 ] * xx [ 40 ] - xx [ 36 ] *
xx [ 199 ] ; xx [ 69 ] = - ( xx [ 40 ] * xx [ 196 ] + xx [ 36 ] * xx [ 35 ] )
; pm_math_Quaternion_xform_ra ( xx + 71 , xx + 67 , xx + 195 ) ; xx [ 67 ] =
xx [ 36 ] * state [ 15 ] ; xx [ 68 ] = - ( xx [ 40 ] * state [ 15 ] ) ; xx [
69 ] = xx [ 52 ] * xx [ 40 ] - xx [ 36 ] * xx [ 50 ] ;
pm_math_Quaternion_xform_ra ( xx + 41 , xx + 67 , xx + 326 ) ;
pm_math_Vector3_cross_ra ( xx + 24 , xx + 326 , xx + 428 ) ;
pm_math_Quaternion_xform_ra ( xx + 71 , xx + 428 , xx + 326 ) ; xx [ 35 ] =
xx [ 75 ] + xx [ 98 ] + ( ( xx [ 185 ] * xx [ 59 ] + xx [ 368 ] ) * xx [ 20 ]
- xx [ 187 ] ) * xx [ 115 ] + xx [ 400 ] + xx [ 20 ] * xx [ 404 ] + xx [ 195
] + xx [ 20 ] * xx [ 326 ] ; xx [ 50 ] = xx [ 297 ] * xx [ 301 ] ; xx [ 52 ]
= xx [ 298 ] * xx [ 315 ] ; xx [ 70 ] = ( xx [ 50 ] - xx [ 52 ] ) * xx [ 20 ]
; xx [ 71 ] = xx [ 297 ] * xx [ 297 ] ; xx [ 72 ] = ( xx [ 71 ] + xx [ 298 ]
* xx [ 298 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 73 ] = xx [ 70 ] * xx [ 0 ] -
xx [ 91 ] * xx [ 72 ] ; xx [ 74 ] = xx [ 301 ] * xx [ 315 ] ; xx [ 185 ] = xx
[ 298 ] * xx [ 297 ] ; xx [ 189 ] = xx [ 20 ] * ( xx [ 74 ] + xx [ 185 ] ) ;
xx [ 190 ] = xx [ 298 ] * xx [ 301 ] ; xx [ 193 ] = xx [ 297 ] * xx [ 315 ] ;
xx [ 198 ] = ( xx [ 190 ] - xx [ 193 ] ) * xx [ 20 ] ; xx [ 199 ] = xx [ 0 ]
* xx [ 189 ] + xx [ 198 ] * xx [ 91 ] ; xx [ 201 ] = ( xx [ 71 ] + xx [ 315 ]
* xx [ 315 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 202 ] = xx [ 20 ] * ( xx [ 52 ]
+ xx [ 50 ] ) ; xx [ 50 ] = xx [ 0 ] * xx [ 201 ] + xx [ 91 ] * xx [ 202 ] ;
xx [ 52 ] = xx [ 20 ] * ( xx [ 190 ] + xx [ 193 ] ) ; xx [ 190 ] = ( xx [ 71
] + xx [ 301 ] * xx [ 301 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 71 ] = ( xx [
185 ] - xx [ 74 ] ) * xx [ 20 ] ; xx [ 463 ] = xx [ 91 ] * xx [ 73 ] ; xx [
464 ] = - ( xx [ 91 ] * xx [ 199 ] ) ; xx [ 465 ] = xx [ 91 ] * xx [ 50 ] ;
xx [ 466 ] = - ( xx [ 91 ] * xx [ 91 ] * xx [ 52 ] + xx [ 0 ] * xx [ 0 ] * xx
[ 52 ] ) ; xx [ 467 ] = - ( xx [ 91 ] * xx [ 91 ] * xx [ 190 ] + xx [ 0 ] *
xx [ 0 ] * xx [ 190 ] ) ; xx [ 468 ] = - ( xx [ 91 ] * xx [ 71 ] * xx [ 91 ]
+ xx [ 0 ] * xx [ 71 ] * xx [ 0 ] ) ; xx [ 469 ] = - ( xx [ 0 ] * xx [ 73 ] )
; xx [ 470 ] = xx [ 0 ] * xx [ 199 ] ; xx [ 471 ] = - ( xx [ 0 ] * xx [ 50 ]
) ; pm_math_Matrix3x3_compose_ra ( xx + 463 , xx + 431 , xx + 555 ) ; xx [
428 ] = xx [ 72 ] ; xx [ 429 ] = xx [ 198 ] ; xx [ 430 ] = - xx [ 202 ] ; xx
[ 431 ] = xx [ 52 ] ; xx [ 432 ] = xx [ 190 ] ; xx [ 433 ] = xx [ 71 ] ; xx [
434 ] = xx [ 70 ] ; xx [ 435 ] = - xx [ 189 ] ; xx [ 436 ] = xx [ 201 ] ; xx
[ 50 ] = xx [ 413 ] * state [ 42 ] - xx [ 409 ] * state [ 40 ] ; xx [ 52 ] =
xx [ 413 ] * state [ 41 ] - xx [ 390 ] * state [ 40 ] ; xx [ 70 ] = xx [ 50 ]
* state [ 42 ] + xx [ 52 ] * state [ 41 ] ; xx [ 71 ] = xx [ 421 ] * state [
40 ] - xx [ 366 ] * state [ 42 ] ; xx [ 72 ] = xx [ 366 ] * state [ 41 ] - xx
[ 418 ] * state [ 40 ] ; xx [ 73 ] = xx [ 71 ] * state [ 42 ] - xx [ 72 ] *
state [ 41 ] ; xx [ 74 ] = xx [ 419 ] * state [ 40 ] - xx [ 403 ] * state [
42 ] ; xx [ 185 ] = xx [ 403 ] * state [ 41 ] - xx [ 422 ] * state [ 40 ] ;
xx [ 189 ] = xx [ 74 ] * state [ 42 ] - xx [ 185 ] * state [ 41 ] ; xx [ 190
] = xx [ 390 ] * state [ 42 ] - xx [ 409 ] * state [ 41 ] ; xx [ 193 ] = xx [
418 ] * state [ 42 ] - xx [ 421 ] * state [ 41 ] ; xx [ 198 ] = xx [ 419 ] *
state [ 41 ] - xx [ 422 ] * state [ 42 ] ; xx [ 596 ] = - xx [ 70 ] ; xx [
597 ] = xx [ 73 ] ; xx [ 598 ] = xx [ 189 ] ; xx [ 599 ] = xx [ 52 ] * state
[ 40 ] - xx [ 190 ] * state [ 42 ] ; xx [ 600 ] = xx [ 72 ] * state [ 40 ] -
xx [ 193 ] * state [ 42 ] ; xx [ 601 ] = xx [ 198 ] * state [ 42 ] + xx [ 185
] * state [ 40 ] ; xx [ 602 ] = xx [ 190 ] * state [ 41 ] + xx [ 50 ] * state
[ 40 ] ; xx [ 603 ] = xx [ 193 ] * state [ 41 ] - xx [ 71 ] * state [ 40 ] ;
xx [ 604 ] = - ( xx [ 198 ] * state [ 41 ] + xx [ 74 ] * state [ 40 ] ) ;
pm_math_Matrix3x3_compose_ra ( xx + 428 , xx + 596 , xx + 605 ) ; xx [ 50 ] =
xx [ 344 ] * xx [ 344 ] ; xx [ 52 ] = xx [ 345 ] * xx [ 346 ] ; xx [ 71 ] =
xx [ 344 ] * xx [ 347 ] ; xx [ 72 ] = xx [ 345 ] * xx [ 347 ] ; xx [ 74 ] =
xx [ 344 ] * xx [ 346 ] ; xx [ 185 ] = xx [ 346 ] * xx [ 347 ] ; xx [ 190 ] =
xx [ 344 ] * xx [ 345 ] ; xx [ 428 ] = ( xx [ 50 ] + xx [ 345 ] * xx [ 345 ]
) * xx [ 20 ] - xx [ 54 ] ; xx [ 429 ] = ( xx [ 52 ] + xx [ 71 ] ) * xx [ 20
] ; xx [ 430 ] = xx [ 20 ] * ( xx [ 72 ] - xx [ 74 ] ) ; xx [ 431 ] = xx [ 20
] * ( xx [ 52 ] - xx [ 71 ] ) ; xx [ 432 ] = ( xx [ 50 ] + xx [ 346 ] * xx [
346 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 433 ] = ( xx [ 185 ] + xx [ 190 ] ) *
xx [ 20 ] ; xx [ 434 ] = ( xx [ 72 ] + xx [ 74 ] ) * xx [ 20 ] ; xx [ 435 ] =
xx [ 20 ] * ( xx [ 185 ] - xx [ 190 ] ) ; xx [ 436 ] = ( xx [ 50 ] + xx [ 347
] * xx [ 347 ] ) * xx [ 20 ] - xx [ 54 ] ; pm_math_Matrix3x3_postCross_ra (
xx + 428 , xx + 151 , xx + 596 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 596
, xx + 175 , xx + 428 ) ; pm_math_Matrix3x3_xform_ra ( xx + 463 , xx + 397 ,
xx + 151 ) ; xx [ 50 ] = xx [ 78 ] * xx [ 301 ] ; xx [ 344 ] = xx [ 300 ] ;
xx [ 345 ] = xx [ 249 ] ; xx [ 346 ] = xx [ 315 ] ; xx [ 52 ] = xx [ 298 ] *
xx [ 78 ] - xx [ 187 ] * xx [ 315 ] ; xx [ 71 ] = xx [ 187 ] * xx [ 301 ] ;
xx [ 407 ] = - xx [ 50 ] ; xx [ 408 ] = xx [ 52 ] ; xx [ 409 ] = - xx [ 71 ]
; pm_math_Vector3_cross_ra ( xx + 344 , xx + 407 , xx + 416 ) ; xx [ 72 ] =
state [ 35 ] * state [ 35 ] ; xx [ 344 ] = - ( xx [ 70 ] * xx [ 79 ] ) ; xx [
345 ] = xx [ 79 ] * xx [ 73 ] ; xx [ 346 ] = xx [ 79 ] * xx [ 189 ] ;
pm_math_Quaternion_xform_ra ( xx + 329 , xx + 344 , xx + 407 ) ; xx [ 70 ] =
xx [ 321 ] * xx [ 173 ] + xx [ 92 ] * xx [ 333 ] ; xx [ 73 ] = xx [ 299 ] *
xx [ 173 ] ; xx [ 74 ] = xx [ 299 ] * xx [ 92 ] ; xx [ 344 ] = - xx [ 70 ] ;
xx [ 345 ] = xx [ 73 ] ; xx [ 346 ] = xx [ 74 ] ; pm_math_Vector3_cross_ra (
xx + 348 , xx + 344 , xx + 419 ) ; xx [ 185 ] = xx [ 92 ] + xx [ 20 ] * ( xx
[ 420 ] + xx [ 73 ] * xx [ 246 ] ) ; xx [ 344 ] = - ( xx [ 185 ] * xx [ 91 ]
) ; xx [ 345 ] = ( xx [ 419 ] - xx [ 70 ] * xx [ 246 ] ) * xx [ 20 ] * xx [
91 ] - xx [ 0 ] * ( xx [ 20 ] * ( xx [ 421 ] + xx [ 74 ] * xx [ 246 ] ) - xx
[ 173 ] ) ; xx [ 346 ] = xx [ 185 ] * xx [ 0 ] ; pm_math_Quaternion_xform_ra
( xx + 329 , xx + 344 , xx + 419 ) ; xx [ 0 ] = 0.9610472786158162 ; xx [ 70
] = xx [ 61 ] + xx [ 57 ] * xx [ 114 ] + xx [ 49 ] * xx [ 119 ] ; xx [ 49 ] =
0.2763840231727114 ; xx [ 329 ] = xx [ 45 ] + xx [ 51 ] ; xx [ 330 ] = xx [
46 ] + xx [ 29 ] ; xx [ 331 ] = xx [ 47 ] + xx [ 30 ] ;
pm_math_Vector3_cross_ra ( xx + 329 , xx + 67 , xx + 45 ) ;
pm_math_Vector3_cross_ra ( xx + 24 , xx + 95 , xx + 67 ) ;
pm_math_Vector3_cross_ra ( xx + 24 , xx + 67 , xx + 329 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 329 , xx + 24 ) ; xx [ 29
] = 20.0 ; xx [ 30 ] = ( xx [ 47 ] + xx [ 26 ] ) * xx [ 29 ] - xx [ 114 ] ;
xx [ 51 ] = xx [ 65 ] * xx [ 0 ] - xx [ 70 ] * xx [ 49 ] - xx [ 82 ] * xx [
30 ] ; xx [ 67 ] = xx [ 65 ] * xx [ 49 ] + xx [ 70 ] * xx [ 0 ] + xx [ 161 ]
* xx [ 30 ] ; xx [ 0 ] = xx [ 62 ] - ( xx [ 57 ] * xx [ 113 ] - xx [ 53 ] *
xx [ 112 ] ) + xx [ 56 ] * xx [ 120 ] ; xx [ 49 ] = ( xx [ 45 ] + xx [ 24 ] )
* xx [ 29 ] - xx [ 112 ] ; xx [ 24 ] = ( xx [ 46 ] + xx [ 25 ] ) * xx [ 29 ]
- xx [ 113 ] ; xx [ 25 ] = xx [ 0 ] + xx [ 36 ] * xx [ 49 ] - xx [ 40 ] * xx
[ 24 ] ; xx [ 45 ] = - xx [ 51 ] ; xx [ 46 ] = - xx [ 67 ] ; xx [ 47 ] = - xx
[ 25 ] ; solveSymmetricPosDef ( xx + 121 , xx + 45 , 3 , 1 , xx + 60 , xx +
112 ) ; xx [ 45 ] = xx [ 65 ] + xx [ 48 ] * xx [ 60 ] + xx [ 80 ] * xx [ 61 ]
; xx [ 46 ] = xx [ 70 ] - xx [ 86 ] * xx [ 60 ] + xx [ 85 ] * xx [ 61 ] ; xx
[ 47 ] = xx [ 0 ] + xx [ 56 ] * xx [ 62 ] ; pm_math_Quaternion_xform_ra ( xx
+ 41 , xx + 45 , xx + 112 ) ; xx [ 45 ] = xx [ 49 ] + xx [ 87 ] * xx [ 62 ] ;
xx [ 46 ] = xx [ 24 ] - xx [ 88 ] * xx [ 62 ] ; xx [ 47 ] = xx [ 30 ] - xx [
163 ] * xx [ 60 ] + xx [ 90 ] * xx [ 61 ] ; pm_math_Quaternion_xform_ra ( xx
+ 41 , xx + 45 , xx + 118 ) ; pm_math_Vector3_cross_ra ( xx + 95 , xx + 118 ,
xx + 45 ) ; xx [ 463 ] = xx [ 166 ] ; xx [ 464 ] = xx [ 94 ] ; xx [ 465 ] =
xx [ 101 ] ; xx [ 466 ] = xx [ 222 ] ; xx [ 467 ] = xx [ 244 ] ; xx [ 468 ] =
xx [ 102 ] ; xx [ 469 ] = xx [ 240 ] ; xx [ 470 ] = xx [ 272 ] ; xx [ 471 ] =
xx [ 213 ] ; pm_math_Vector3_cross_ra ( xx + 21 , xx + 311 , xx + 329 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 463 , xx + 329 , xx + 344 ) ; xx [ 463 ] =
xx [ 89 ] ; xx [ 464 ] = xx [ 140 ] ; xx [ 465 ] = xx [ 179 ] ; xx [ 466 ] =
xx [ 245 ] ; xx [ 467 ] = xx [ 273 ] ; xx [ 468 ] = xx [ 217 ] ; xx [ 469 ] =
xx [ 223 ] ; xx [ 470 ] = xx [ 270 ] ; xx [ 471 ] = xx [ 247 ] ; xx [ 26 ] =
xx [ 103 ] * xx [ 13 ] + xx [ 108 ] * xx [ 6 ] ; xx [ 437 ] = - ( xx [ 13 ] *
xx [ 26 ] ) ; xx [ 438 ] = - ( xx [ 13 ] * xx [ 105 ] * xx [ 13 ] + xx [ 6 ]
* xx [ 105 ] * xx [ 6 ] ) ; xx [ 439 ] = - ( xx [ 6 ] * xx [ 26 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 437 , xx + 440 ) ; xx [ 26
] = xx [ 440 ] - ( ( xx [ 22 ] + xx [ 18 ] ) * xx [ 117 ] + ( xx [ 23 ] + xx
[ 19 ] ) * xx [ 116 ] ) ; xx [ 18 ] = xx [ 21 ] + xx [ 14 ] ; xx [ 14 ] = xx
[ 18 ] * xx [ 117 ] + xx [ 441 ] ; xx [ 19 ] = xx [ 18 ] * xx [ 116 ] + xx [
442 ] ; xx [ 21 ] = xx [ 26 ] ; xx [ 22 ] = xx [ 14 ] ; xx [ 23 ] = xx [ 19 ]
; pm_math_Matrix3x3_xform_ra ( xx + 463 , xx + 21 , xx + 437 ) ; xx [ 18 ] =
xx [ 344 ] + xx [ 437 ] ; xx [ 29 ] = xx [ 32 ] + xx [ 112 ] + xx [ 45 ] + xx
[ 18 ] ; xx [ 36 ] = xx [ 345 ] + xx [ 438 ] ; xx [ 40 ] = xx [ 33 ] + xx [
113 ] + xx [ 46 ] + xx [ 36 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
463 , xx + 329 , xx + 440 ) ; xx [ 463 ] = xx [ 248 ] + xx [ 252 ] ; xx [ 464
] = xx [ 253 ] ; xx [ 465 ] = xx [ 254 ] ; xx [ 466 ] = xx [ 255 ] ; xx [ 467
] = xx [ 239 ] ; xx [ 468 ] = xx [ 257 ] ; xx [ 469 ] = xx [ 258 ] ; xx [ 470
] = xx [ 259 ] ; xx [ 471 ] = xx [ 271 ] ; pm_math_Matrix3x3_xform_ra ( xx +
463 , xx + 21 , xx + 252 ) ; xx [ 21 ] = xx [ 442 ] + xx [ 254 ] ; xx [ 22 ]
= xx [ 120 ] + xx [ 21 ] ; xx [ 23 ] = xx [ 346 ] + xx [ 439 ] ; xx [ 45 ] =
xx [ 34 ] + xx [ 114 ] + xx [ 47 ] + xx [ 23 ] ; xx [ 46 ] = xx [ 441 ] + xx
[ 253 ] ; xx [ 47 ] = xx [ 119 ] + xx [ 46 ] ; xx [ 112 ] = - xx [ 29 ] ; xx
[ 113 ] = - ( xx [ 40 ] - xx [ 22 ] * xx [ 79 ] ) ; xx [ 114 ] = - ( xx [ 45
] + xx [ 47 ] * xx [ 79 ] ) ; solveSymmetricPosDef ( xx + 274 , xx + 112 , 3
, 1 , xx + 255 , xx + 270 ) ; xx [ 112 ] = xx [ 29 ] + xx [ 166 ] * xx [ 255
] + xx [ 224 ] * xx [ 256 ] + xx [ 237 ] * xx [ 257 ] ; xx [ 113 ] = xx [ 40
] + xx [ 255 ] * xx [ 94 ] + xx [ 241 ] * xx [ 256 ] + xx [ 238 ] * xx [ 257
] ; xx [ 114 ] = xx [ 45 ] + xx [ 255 ] * xx [ 101 ] + xx [ 104 ] * xx [ 256
] + xx [ 221 ] * xx [ 257 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 112
, xx + 270 ) ; xx [ 29 ] = xx [ 440 ] + xx [ 252 ] ; xx [ 112 ] = xx [ 118 ]
+ xx [ 29 ] + xx [ 255 ] * xx [ 89 ] + xx [ 165 ] * xx [ 256 ] + xx [ 180 ] *
xx [ 257 ] ; xx [ 113 ] = xx [ 47 ] + xx [ 255 ] * xx [ 245 ] + xx [ 181 ] *
xx [ 256 ] + xx [ 250 ] * xx [ 257 ] ; xx [ 114 ] = xx [ 22 ] + xx [ 255 ] *
xx [ 223 ] + xx [ 260 ] * xx [ 256 ] + xx [ 242 ] * xx [ 257 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 112 , xx + 116 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 116 , xx + 112 ) ; xx [ 22 ] = xx
[ 134 ] * state [ 1 ] ; xx [ 40 ] = xx [ 22 ] * xx [ 6 ] ; xx [ 6 ] = xx [
322 ] - xx [ 367 ] ; xx [ 45 ] = xx [ 22 ] * xx [ 13 ] ; xx [ 13 ] = xx [ 316
] - xx [ 365 ] ; xx [ 22 ] = xx [ 40 ] * xx [ 6 ] + xx [ 45 ] * xx [ 13 ] ;
xx [ 47 ] = xx [ 320 ] - xx [ 361 ] ; xx [ 53 ] = xx [ 314 ] - xx [ 359 ] ;
xx [ 57 ] = xx [ 40 ] * xx [ 47 ] + xx [ 45 ] * xx [ 53 ] ; xx [ 68 ] = xx [
357 ] * xx [ 40 ] + xx [ 351 ] * xx [ 45 ] ; xx [ 118 ] = ( xx [ 12 ] * xx [
13 ] - xx [ 4 ] * xx [ 53 ] + xx [ 134 ] * xx [ 353 ] ) / xx [ 231 ] ; xx [
119 ] = xx [ 230 ] / xx [ 231 ] ; xx [ 120 ] = ( xx [ 12 ] * xx [ 6 ] - xx [
4 ] * xx [ 47 ] + xx [ 134 ] * xx [ 355 ] ) / xx [ 231 ] ; xx [ 6 ] = xx [ 63
] * xx [ 93 ] ; xx [ 13 ] = xx [ 93 ] * xx [ 58 ] ; xx [ 47 ] = ( xx [ 6 ] *
xx [ 66 ] - xx [ 59 ] * xx [ 13 ] ) * xx [ 20 ] ; xx [ 53 ] = ( xx [ 13 ] *
xx [ 58 ] + xx [ 63 ] * xx [ 6 ] ) * xx [ 20 ] ; xx [ 58 ] = xx [ 20 ] * ( xx
[ 66 ] * xx [ 13 ] + xx [ 6 ] * xx [ 59 ] ) ; xx [ 252 ] = xx [ 47 ] ; xx [
253 ] = xx [ 93 ] - xx [ 53 ] ; xx [ 254 ] = xx [ 58 ] ; xx [ 6 ] =
pm_math_Vector3_dot_ra ( xx + 118 , xx + 252 ) ; xx [ 13 ] = ( input [ 0 ] -
( ( xx [ 272 ] + xx [ 114 ] - xx [ 22 ] ) * xx [ 12 ] - ( xx [ 270 ] + xx [
112 ] - xx [ 57 ] ) * xx [ 4 ] + ( xx [ 117 ] - xx [ 68 ] ) * xx [ 134 ] ) )
/ xx [ 231 ] - xx [ 6 ] ; xx [ 63 ] = xx [ 12 ] * xx [ 13 ] ; xx [ 66 ] = xx
[ 5 ] * xx [ 63 ] ; xx [ 69 ] = xx [ 4 ] * xx [ 13 ] ; xx [ 73 ] = xx [ 3 ] *
xx [ 63 ] - xx [ 69 ] * xx [ 7 ] ; xx [ 74 ] = xx [ 5 ] * xx [ 69 ] ; xx [
112 ] = - xx [ 66 ] ; xx [ 113 ] = xx [ 73 ] ; xx [ 114 ] = - xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 112 , xx + 116 ) ; xx [ 82 ] = ( xx
[ 66 ] * xx [ 2 ] + xx [ 116 ] ) * xx [ 20 ] - xx [ 69 ] ; xx [ 66 ] = xx [
20 ] * ( xx [ 117 ] - xx [ 73 ] * xx [ 2 ] ) ; xx [ 73 ] = xx [ 63 ] + xx [
20 ] * ( xx [ 118 ] + xx [ 74 ] * xx [ 2 ] ) ; xx [ 112 ] = xx [ 82 ] ; xx [
113 ] = xx [ 66 ] ; xx [ 114 ] = xx [ 73 ] ; xx [ 74 ] = xx [ 47 ] - xx [ 45
] ; xx [ 45 ] = xx [ 58 ] - xx [ 40 ] ; xx [ 116 ] = xx [ 74 ] - xx [ 105 ] *
xx [ 63 ] ; xx [ 117 ] = xx [ 134 ] * xx [ 13 ] - xx [ 53 ] + xx [ 103 ] * xx
[ 63 ] + xx [ 108 ] * xx [ 69 ] + xx [ 93 ] ; xx [ 118 ] = xx [ 45 ] - xx [
105 ] * xx [ 69 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 116 ,
xx + 252 ) ; xx [ 40 ] = xx [ 255 ] - ( pm_math_Vector3_dot_ra ( xx + 232 ,
xx + 112 ) + pm_math_Vector3_dot_ra ( xx + 305 , xx + 252 ) ) ; xx [ 47 ] =
xx [ 256 ] - ( pm_math_Vector3_dot_ra ( xx + 308 , xx + 112 ) +
pm_math_Vector3_dot_ra ( xx + 317 , xx + 252 ) ) ; xx [ 58 ] = xx [ 257 ] - (
pm_math_Vector3_dot_ra ( xx + 341 , xx + 112 ) + pm_math_Vector3_dot_ra ( xx
+ 323 , xx + 252 ) ) ; xx [ 112 ] = xx [ 82 ] + xx [ 40 ] + xx [ 329 ] ; xx [
113 ] = xx [ 66 ] + xx [ 47 ] + xx [ 330 ] ; xx [ 114 ] = xx [ 73 ] + xx [ 58
] + xx [ 331 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 112 , xx
+ 116 ) ; pm_math_Vector3_cross_ra ( xx + 112 , xx + 95 , xx + 255 ) ; xx [
112 ] = xx [ 252 ] + xx [ 26 ] + xx [ 255 ] ; xx [ 113 ] = xx [ 253 ] + xx [
79 ] * xx [ 58 ] + xx [ 14 ] + xx [ 256 ] ; xx [ 114 ] = xx [ 254 ] - xx [ 79
] * xx [ 47 ] + xx [ 19 ] + xx [ 257 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 112 , xx + 252 ) ; xx [ 63 ] = xx [ 60 ] - ( xx [ 184 ] * xx [
116 ] + xx [ 214 ] * xx [ 117 ] - xx [ 216 ] * xx [ 254 ] ) ; xx [ 60 ] = xx
[ 61 ] - ( xx [ 218 ] * xx [ 116 ] + xx [ 220 ] * xx [ 117 ] + xx [ 226 ] *
xx [ 254 ] ) ; xx [ 61 ] = xx [ 62 ] - ( xx [ 235 ] * xx [ 118 ] + xx [ 236 ]
* xx [ 252 ] - xx [ 243 ] * xx [ 253 ] ) ; xx [ 62 ] = xx [ 12 ] * xx [ 186 ]
; xx [ 66 ] = xx [ 4 ] * xx [ 186 ] ; xx [ 69 ] = xx [ 66 ] * xx [ 333 ] - xx
[ 299 ] * xx [ 62 ] ; xx [ 73 ] = xx [ 321 ] * xx [ 66 ] ; xx [ 112 ] = xx [
321 ] * xx [ 62 ] ; xx [ 113 ] = xx [ 69 ] ; xx [ 114 ] = - xx [ 73 ] ;
pm_math_Vector3_cross_ra ( xx + 348 , xx + 112 , xx + 116 ) ; xx [ 82 ] = xx
[ 188 ] - xx [ 142 ] ; xx [ 91 ] = xx [ 143 ] - xx [ 251 ] ; xx [ 112 ] = xx
[ 82 ] - xx [ 363 ] * xx [ 62 ] ; xx [ 113 ] = xx [ 134 ] * xx [ 186 ] - xx [
215 ] + xx [ 371 ] * xx [ 62 ] - xx [ 373 ] * xx [ 66 ] + xx [ 93 ] ; xx [
114 ] = xx [ 91 ] + xx [ 363 ] * xx [ 66 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 334 , xx + 112 , xx + 188 ) ; xx [
66 ] = xx [ 293 ] - ( xx [ 410 ] * ( xx [ 117 ] - xx [ 69 ] * xx [ 246 ] ) -
xx [ 412 ] * xx [ 190 ] ) ; xx [ 69 ] = xx [ 294 ] - ( ( xx [ 62 ] + xx [ 20
] * ( xx [ 118 ] + xx [ 73 ] * xx [ 246 ] ) ) * xx [ 392 ] + xx [ 412 ] * xx
[ 189 ] ) ; xx [ 62 ] = xx [ 512 ] + xx [ 208 ] + xx [ 20 ] * xx [ 265 ] ; xx
[ 73 ] = xx [ 509 ] + xx [ 205 ] + xx [ 20 ] * xx [ 262 ] ; xx [ 92 ] = xx [
76 ] + xx [ 99 ] + ( xx [ 369 ] - xx [ 59 ] * xx [ 191 ] ) * xx [ 20 ] * xx [
115 ] + xx [ 401 ] + xx [ 20 ] * xx [ 405 ] + xx [ 196 ] + xx [ 20 ] * xx [
327 ] ; xx [ 102 ] = xx [ 513 ] + xx [ 209 ] + xx [ 20 ] * xx [ 266 ] ; xx [
112 ] = xx [ 510 ] + xx [ 206 ] + xx [ 20 ] * xx [ 263 ] ; xx [ 75 ] = xx [
77 ] + xx [ 100 ] + ( xx [ 20 ] * ( xx [ 370 ] - xx [ 194 ] * xx [ 59 ] ) -
xx [ 78 ] ) * xx [ 115 ] + xx [ 402 ] + xx [ 20 ] * xx [ 406 ] + xx [ 197 ] +
xx [ 20 ] * xx [ 328 ] ; xx [ 59 ] = xx [ 12 ] * state [ 44 ] ; xx [ 76 ] =
xx [ 632 ] * xx [ 59 ] ; xx [ 77 ] = xx [ 4 ] * state [ 44 ] ; xx [ 98 ] = xx
[ 624 ] * xx [ 59 ] - xx [ 77 ] * xx [ 634 ] ; xx [ 99 ] = xx [ 632 ] * xx [
77 ] ; xx [ 113 ] = - xx [ 76 ] ; xx [ 114 ] = xx [ 98 ] ; xx [ 115 ] = - xx
[ 99 ] ; pm_math_Vector3_cross_ra ( xx + 643 , xx + 113 , xx + 116 ) ; xx [
100 ] = ( xx [ 76 ] * xx [ 620 ] + xx [ 116 ] ) * xx [ 20 ] - xx [ 77 ] ; xx
[ 76 ] = xx [ 100 ] + state [ 49 ] ; xx [ 113 ] = xx [ 20 ] * ( xx [ 117 ] -
xx [ 98 ] * xx [ 620 ] ) ; xx [ 98 ] = xx [ 113 ] + state [ 50 ] ; xx [ 114 ]
= xx [ 59 ] + xx [ 20 ] * ( xx [ 118 ] + xx [ 99 ] * xx [ 620 ] ) ; xx [ 99 ]
= xx [ 114 ] + state [ 51 ] ; xx [ 115 ] = xx [ 76 ] ; xx [ 116 ] = xx [ 98 ]
; xx [ 117 ] = xx [ 99 ] ; xx [ 118 ] = xx [ 76 ] * xx [ 27 ] ; xx [ 119 ] =
xx [ 98 ] * xx [ 28 ] ; xx [ 120 ] = xx [ 99 ] * xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 115 , xx + 118 , xx + 188 ) ; xx [ 115 ] = xx
[ 100 ] ; xx [ 116 ] = xx [ 113 ] ; xx [ 117 ] = xx [ 114 ] ; xx [ 118 ] =
state [ 49 ] ; xx [ 119 ] = state [ 50 ] ; xx [ 120 ] = state [ 51 ] ;
pm_math_Vector3_cross_ra ( xx + 115 , xx + 118 , xx + 193 ) ; xx [ 140 ] = xx
[ 188 ] + xx [ 27 ] * xx [ 193 ] ; xx [ 142 ] = - xx [ 140 ] ; xx [ 143 ] =
xx [ 189 ] + xx [ 28 ] * xx [ 194 ] ; xx [ 161 ] = xx [ 100 ] + xx [ 76 ] ;
xx [ 76 ] = xx [ 79 ] * state [ 51 ] ; xx [ 100 ] = xx [ 658 ] * xx [ 59 ] +
xx [ 660 ] * xx [ 77 ] ; xx [ 196 ] = - ( xx [ 59 ] * xx [ 100 ] ) ; xx [ 197
] = - ( xx [ 59 ] * xx [ 655 ] * xx [ 59 ] + xx [ 77 ] * xx [ 655 ] * xx [ 77
] ) ; xx [ 198 ] = - ( xx [ 77 ] * xx [ 100 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 635 , xx + 196 , xx + 204 ) ; xx [
100 ] = ( xx [ 161 ] * xx [ 76 ] + xx [ 206 ] ) * xx [ 248 ] ; xx [ 173 ] =
xx [ 143 ] - xx [ 79 ] * xx [ 100 ] ; xx [ 179 ] = xx [ 190 ] + xx [ 28 ] *
xx [ 195 ] ; xx [ 185 ] = xx [ 79 ] * state [ 50 ] ; xx [ 188 ] = ( xx [ 161
] * xx [ 185 ] + xx [ 205 ] ) * xx [ 248 ] ; xx [ 161 ] = xx [ 179 ] + xx [
79 ] * xx [ 188 ] ; xx [ 189 ] = xx [ 142 ] ; xx [ 190 ] = - xx [ 173 ] ; xx
[ 191 ] = - xx [ 161 ] ; solveSymmetricPosDef ( xx + 380 , xx + 189 , 3 , 1 ,
xx + 193 , xx + 196 ) ; xx [ 189 ] = xx [ 140 ] + xx [ 27 ] * xx [ 193 ] ; xx
[ 190 ] = xx [ 143 ] + xx [ 28 ] * xx [ 194 ] ; xx [ 191 ] = xx [ 179 ] + xx
[ 28 ] * xx [ 195 ] ; pm_math_Quaternion_xform_ra ( xx + 635 , xx + 189 , xx
+ 196 ) ; xx [ 189 ] = xx [ 248 ] * ( xx [ 204 ] - ( ( xx [ 113 ] + xx [ 98 ]
) * xx [ 185 ] + ( xx [ 114 ] + xx [ 99 ] ) * xx [ 76 ] ) ) ; xx [ 204 ] = xx
[ 189 ] ; xx [ 205 ] = xx [ 188 ] + xx [ 358 ] * xx [ 195 ] ; xx [ 206 ] = xx
[ 100 ] - xx [ 358 ] * xx [ 194 ] ; pm_math_Quaternion_xform_ra ( xx + 635 ,
xx + 204 , xx + 207 ) ; pm_math_Vector3_cross_ra ( xx + 675 , xx + 207 , xx +
204 ) ; xx [ 98 ] = xx [ 134 ] * state [ 44 ] ; xx [ 99 ] = xx [ 98 ] * xx [
59 ] ; xx [ 113 ] = xx [ 650 ] - xx [ 730 ] ; xx [ 114 ] = xx [ 705 ] + xx [
732 ] ; xx [ 190 ] = xx [ 98 ] * xx [ 77 ] ; xx [ 98 ] = xx [ 99 ] * xx [ 113
] - xx [ 114 ] * xx [ 190 ] ; xx [ 191 ] = xx [ 696 ] + xx [ 724 ] ; xx [ 193
] = xx [ 704 ] - xx [ 726 ] ; xx [ 197 ] = xx [ 191 ] * xx [ 99 ] - xx [ 190
] * xx [ 193 ] ; xx [ 199 ] = xx [ 740 ] * xx [ 190 ] + xx [ 734 ] * xx [ 99
] ; xx [ 209 ] = ( xx [ 12 ] * xx [ 113 ] + xx [ 191 ] * xx [ 4 ] + xx [ 134
] * xx [ 736 ] ) / xx [ 699 ] ; xx [ 210 ] = xx [ 698 ] / xx [ 699 ] ; xx [
211 ] = ( xx [ 134 ] * xx [ 738 ] - ( xx [ 4 ] * xx [ 193 ] + xx [ 114 ] * xx
[ 12 ] ) ) / xx [ 699 ] ; xx [ 113 ] = xx [ 93 ] * xx [ 627 ] ; xx [ 114 ] =
xx [ 623 ] * xx [ 93 ] ; xx [ 191 ] = ( xx [ 622 ] * xx [ 113 ] - xx [ 114 ]
* xx [ 626 ] ) * xx [ 20 ] ; xx [ 193 ] = ( xx [ 113 ] * xx [ 627 ] + xx [
623 ] * xx [ 114 ] ) * xx [ 20 ] ; xx [ 201 ] = xx [ 20 ] * ( xx [ 626 ] * xx
[ 113 ] + xx [ 114 ] * xx [ 622 ] ) ; xx [ 251 ] = xx [ 191 ] ; xx [ 252 ] =
xx [ 93 ] - xx [ 193 ] ; xx [ 253 ] = xx [ 201 ] ; xx [ 113 ] =
pm_math_Vector3_dot_ra ( xx + 209 , xx + 251 ) ; xx [ 114 ] = ( input [ 4 ] -
( xx [ 12 ] * ( xx [ 198 ] + xx [ 206 ] - xx [ 98 ] ) - ( xx [ 196 ] + xx [
204 ] + xx [ 197 ] ) * xx [ 4 ] + ( xx [ 208 ] - xx [ 199 ] ) * xx [ 134 ] )
) / xx [ 699 ] - xx [ 113 ] ; xx [ 196 ] = xx [ 622 ] * xx [ 626 ] ; xx [ 198
] = xx [ 623 ] * xx [ 627 ] ; xx [ 202 ] = ( xx [ 196 ] - xx [ 198 ] ) * xx [
20 ] ; xx [ 204 ] = xx [ 622 ] * xx [ 622 ] ; xx [ 205 ] = ( xx [ 204 ] + xx
[ 623 ] * xx [ 623 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 206 ] = xx [ 202 ] * xx
[ 77 ] + xx [ 59 ] * xx [ 205 ] ; xx [ 207 ] = xx [ 626 ] * xx [ 627 ] ; xx [
208 ] = xx [ 623 ] * xx [ 622 ] ; xx [ 209 ] = xx [ 20 ] * ( xx [ 207 ] + xx
[ 208 ] ) ; xx [ 210 ] = xx [ 622 ] * xx [ 627 ] ; xx [ 211 ] = xx [ 623 ] *
xx [ 626 ] ; xx [ 212 ] = ( xx [ 210 ] - xx [ 211 ] ) * xx [ 20 ] ; xx [ 213
] = xx [ 77 ] * xx [ 209 ] + xx [ 212 ] * xx [ 59 ] ; xx [ 217 ] = xx [ 20 ]
* ( xx [ 198 ] + xx [ 196 ] ) ; xx [ 196 ] = ( xx [ 204 ] + xx [ 627 ] * xx [
627 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 198 ] = xx [ 59 ] * xx [ 217 ] - xx [
77 ] * xx [ 196 ] ; xx [ 219 ] = xx [ 20 ] * ( xx [ 211 ] + xx [ 210 ] ) ; xx
[ 210 ] = ( xx [ 204 ] + xx [ 626 ] * xx [ 626 ] ) * xx [ 20 ] - xx [ 54 ] ;
xx [ 204 ] = ( xx [ 207 ] - xx [ 208 ] ) * xx [ 20 ] ; xx [ 251 ] = - ( xx [
59 ] * xx [ 206 ] ) ; xx [ 252 ] = - ( xx [ 59 ] * xx [ 213 ] ) ; xx [ 253 ]
= xx [ 59 ] * xx [ 198 ] ; xx [ 254 ] = xx [ 59 ] * xx [ 59 ] * xx [ 219 ] +
xx [ 77 ] * xx [ 77 ] * xx [ 219 ] ; xx [ 255 ] = - ( xx [ 59 ] * xx [ 59 ] *
xx [ 210 ] + xx [ 77 ] * xx [ 77 ] * xx [ 210 ] ) ; xx [ 256 ] = - ( xx [ 59
] * xx [ 204 ] * xx [ 59 ] + xx [ 77 ] * xx [ 204 ] * xx [ 77 ] ) ; xx [ 257
] = - ( xx [ 77 ] * xx [ 206 ] ) ; xx [ 258 ] = - ( xx [ 77 ] * xx [ 213 ] )
; xx [ 259 ] = xx [ 77 ] * xx [ 198 ] ; pm_math_Matrix3x3_compose_ra ( xx +
251 , xx + 706 , xx + 261 ) ; xx [ 431 ] = xx [ 205 ] ; xx [ 432 ] = xx [ 212
] ; xx [ 433 ] = - xx [ 217 ] ; xx [ 434 ] = - xx [ 219 ] ; xx [ 435 ] = xx [
210 ] ; xx [ 436 ] = xx [ 204 ] ; xx [ 437 ] = xx [ 202 ] ; xx [ 438 ] = xx [
209 ] ; xx [ 439 ] = xx [ 196 ] ; xx [ 196 ] = xx [ 689 ] * state [ 51 ] + xx
[ 688 ] * state [ 49 ] ; xx [ 198 ] = xx [ 689 ] * state [ 50 ] - xx [ 694 ]
* state [ 49 ] ; xx [ 202 ] = xx [ 196 ] * state [ 51 ] + xx [ 198 ] * state
[ 50 ] ; xx [ 204 ] = xx [ 697 ] * state [ 49 ] - xx [ 691 ] * state [ 51 ] ;
xx [ 205 ] = xx [ 691 ] * state [ 50 ] - xx [ 649 ] * state [ 49 ] ; xx [ 206
] = xx [ 204 ] * state [ 51 ] - xx [ 205 ] * state [ 50 ] ; xx [ 207 ] = xx [
671 ] * state [ 49 ] - xx [ 685 ] * state [ 51 ] ; xx [ 208 ] = xx [ 685 ] *
state [ 50 ] + xx [ 657 ] * state [ 49 ] ; xx [ 209 ] = xx [ 207 ] * state [
51 ] - xx [ 208 ] * state [ 50 ] ; xx [ 210 ] = xx [ 694 ] * state [ 51 ] +
xx [ 688 ] * state [ 50 ] ; xx [ 211 ] = xx [ 649 ] * state [ 51 ] - xx [ 697
] * state [ 50 ] ; xx [ 212 ] = xx [ 657 ] * state [ 51 ] + xx [ 671 ] *
state [ 50 ] ; xx [ 463 ] = - xx [ 202 ] ; xx [ 464 ] = xx [ 206 ] ; xx [ 465
] = xx [ 209 ] ; xx [ 466 ] = xx [ 198 ] * state [ 49 ] - xx [ 210 ] * state
[ 51 ] ; xx [ 467 ] = xx [ 205 ] * state [ 49 ] - xx [ 211 ] * state [ 51 ] ;
xx [ 468 ] = xx [ 212 ] * state [ 51 ] + xx [ 208 ] * state [ 49 ] ; xx [ 469
] = xx [ 210 ] * state [ 50 ] + xx [ 196 ] * state [ 49 ] ; xx [ 470 ] = xx [
211 ] * state [ 50 ] - xx [ 204 ] * state [ 49 ] ; xx [ 471 ] = - ( xx [ 212
] * state [ 50 ] + xx [ 207 ] * state [ 49 ] ) ; pm_math_Matrix3x3_compose_ra
( xx + 431 , xx + 463 , xx + 508 ) ; xx [ 196 ] = xx [ 639 ] * xx [ 639 ] ;
xx [ 198 ] = xx [ 640 ] * xx [ 641 ] ; xx [ 204 ] = xx [ 639 ] * xx [ 642 ] ;
xx [ 205 ] = xx [ 640 ] * xx [ 642 ] ; xx [ 207 ] = xx [ 639 ] * xx [ 641 ] ;
xx [ 208 ] = xx [ 641 ] * xx [ 642 ] ; xx [ 210 ] = xx [ 639 ] * xx [ 640 ] ;
xx [ 431 ] = ( xx [ 196 ] + xx [ 640 ] * xx [ 640 ] ) * xx [ 20 ] - xx [ 54 ]
; xx [ 432 ] = ( xx [ 198 ] + xx [ 204 ] ) * xx [ 20 ] ; xx [ 433 ] = xx [ 20
] * ( xx [ 205 ] - xx [ 207 ] ) ; xx [ 434 ] = xx [ 20 ] * ( xx [ 198 ] - xx
[ 204 ] ) ; xx [ 435 ] = ( xx [ 196 ] + xx [ 641 ] * xx [ 641 ] ) * xx [ 20 ]
- xx [ 54 ] ; xx [ 436 ] = ( xx [ 208 ] + xx [ 210 ] ) * xx [ 20 ] ; xx [ 437
] = ( xx [ 205 ] + xx [ 207 ] ) * xx [ 20 ] ; xx [ 438 ] = xx [ 20 ] * ( xx [
208 ] - xx [ 210 ] ) ; xx [ 439 ] = ( xx [ 196 ] + xx [ 642 ] * xx [ 642 ] )
* xx [ 20 ] - xx [ 54 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 431 , xx +
115 , xx + 463 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 463 , xx + 118 , xx
+ 431 ) ; pm_math_Matrix3x3_xform_ra ( xx + 251 , xx + 675 , xx + 115 ) ; xx
[ 210 ] = xx [ 623 ] ; xx [ 211 ] = xx [ 621 ] ; xx [ 212 ] = xx [ 619 ] ; xx
[ 196 ] = xx [ 78 ] * xx [ 626 ] ; xx [ 198 ] = xx [ 187 ] * xx [ 627 ] + xx
[ 623 ] * xx [ 78 ] ; xx [ 204 ] = xx [ 187 ] * xx [ 626 ] ; xx [ 251 ] = xx
[ 196 ] ; xx [ 252 ] = xx [ 198 ] ; xx [ 253 ] = - xx [ 204 ] ;
pm_math_Vector3_cross_ra ( xx + 210 , xx + 251 , xx + 254 ) ; xx [ 205 ] =
state [ 44 ] * state [ 44 ] ; xx [ 210 ] = - ( xx [ 202 ] * xx [ 79 ] ) ; xx
[ 211 ] = xx [ 79 ] * xx [ 206 ] ; xx [ 212 ] = xx [ 79 ] * xx [ 209 ] ;
pm_math_Quaternion_xform_ra ( xx + 628 , xx + 210 , xx + 206 ) ; xx [ 202 ] =
xx [ 632 ] * xx [ 185 ] - xx [ 76 ] * xx [ 634 ] ; xx [ 209 ] = xx [ 624 ] *
xx [ 185 ] ; xx [ 210 ] = xx [ 624 ] * xx [ 76 ] ; xx [ 211 ] = xx [ 202 ] ;
xx [ 212 ] = - xx [ 209 ] ; xx [ 213 ] = - xx [ 210 ] ;
pm_math_Vector3_cross_ra ( xx + 643 , xx + 211 , xx + 251 ) ; xx [ 211 ] = xx
[ 76 ] + xx [ 20 ] * ( xx [ 252 ] - xx [ 209 ] * xx [ 620 ] ) ; xx [ 257 ] =
- ( xx [ 211 ] * xx [ 59 ] ) ; xx [ 258 ] = ( xx [ 202 ] * xx [ 620 ] + xx [
251 ] ) * xx [ 20 ] * xx [ 59 ] + xx [ 77 ] * ( xx [ 20 ] * ( xx [ 253 ] - xx
[ 210 ] * xx [ 620 ] ) - xx [ 185 ] ) ; xx [ 259 ] = - ( xx [ 211 ] * xx [ 77
] ) ; pm_math_Quaternion_xform_ra ( xx + 628 , xx + 257 , xx + 209 ) ; xx [
59 ] = xx [ 12 ] * xx [ 114 ] ; xx [ 76 ] = xx [ 4 ] * xx [ 114 ] ; xx [ 77 ]
= xx [ 624 ] * xx [ 59 ] - xx [ 76 ] * xx [ 634 ] ; xx [ 185 ] = xx [ 632 ] *
xx [ 76 ] ; xx [ 251 ] = - ( xx [ 632 ] * xx [ 59 ] ) ; xx [ 252 ] = xx [ 77
] ; xx [ 253 ] = - xx [ 185 ] ; pm_math_Vector3_cross_ra ( xx + 643 , xx +
251 , xx + 257 ) ; xx [ 202 ] = xx [ 191 ] - xx [ 99 ] ; xx [ 99 ] = xx [ 201
] - xx [ 190 ] ; xx [ 251 ] = xx [ 202 ] - xx [ 655 ] * xx [ 59 ] ; xx [ 252
] = xx [ 134 ] * xx [ 114 ] - xx [ 193 ] + xx [ 658 ] * xx [ 59 ] + xx [ 660
] * xx [ 76 ] + xx [ 93 ] ; xx [ 253 ] = xx [ 99 ] - xx [ 655 ] * xx [ 76 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 635 , xx + 251 , xx + 270 ) ; xx [
76 ] = xx [ 194 ] - ( xx [ 410 ] * ( xx [ 258 ] - xx [ 77 ] * xx [ 620 ] ) -
xx [ 412 ] * xx [ 272 ] ) ; xx [ 77 ] = xx [ 195 ] - ( ( xx [ 59 ] + xx [ 20
] * ( xx [ 259 ] + xx [ 185 ] * xx [ 620 ] ) ) * xx [ 392 ] + xx [ 412 ] * xx
[ 271 ] ) ; xx [ 59 ] = xx [ 4 ] * state [ 53 ] ; xx [ 185 ] = xx [ 12 ] *
state [ 53 ] ; xx [ 190 ] = xx [ 742 ] * xx [ 185 ] ; xx [ 191 ] = xx [ 59 ]
* xx [ 743 ] - xx [ 735 ] * xx [ 185 ] ; xx [ 194 ] = xx [ 742 ] * xx [ 59 ]
; xx [ 251 ] = xx [ 190 ] ; xx [ 252 ] = xx [ 191 ] ; xx [ 253 ] = - xx [ 194
] ; pm_math_Vector3_cross_ra ( xx + 758 , xx + 251 , xx + 257 ) ; xx [ 195 ]
= xx [ 59 ] + ( xx [ 257 ] - xx [ 190 ] * xx [ 733 ] ) * xx [ 20 ] ; xx [ 190
] = xx [ 195 ] + state [ 58 ] ; xx [ 201 ] = xx [ 20 ] * ( xx [ 258 ] - xx [
191 ] * xx [ 733 ] ) ; xx [ 191 ] = xx [ 201 ] + state [ 59 ] ; xx [ 212 ] =
xx [ 185 ] + xx [ 20 ] * ( xx [ 259 ] + xx [ 194 ] * xx [ 733 ] ) ; xx [ 194
] = xx [ 212 ] + state [ 60 ] ; xx [ 251 ] = xx [ 190 ] ; xx [ 252 ] = xx [
191 ] ; xx [ 253 ] = xx [ 194 ] ; xx [ 257 ] = xx [ 190 ] * xx [ 27 ] ; xx [
258 ] = xx [ 191 ] * xx [ 28 ] ; xx [ 259 ] = xx [ 194 ] * xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 251 , xx + 257 , xx + 264 ) ; xx [ 251 ] = xx
[ 195 ] ; xx [ 252 ] = xx [ 201 ] ; xx [ 253 ] = xx [ 212 ] ; xx [ 257 ] =
state [ 58 ] ; xx [ 258 ] = state [ 59 ] ; xx [ 259 ] = state [ 60 ] ;
pm_math_Vector3_cross_ra ( xx + 251 , xx + 257 , xx + 267 ) ; xx [ 213 ] = xx
[ 264 ] + xx [ 27 ] * xx [ 267 ] ; xx [ 217 ] = - xx [ 213 ] ; xx [ 219 ] =
xx [ 265 ] + xx [ 28 ] * xx [ 268 ] ; xx [ 222 ] = xx [ 195 ] + xx [ 190 ] ;
xx [ 190 ] = xx [ 79 ] * state [ 60 ] ; xx [ 195 ] = xx [ 775 ] * xx [ 185 ]
- xx [ 777 ] * xx [ 59 ] ; xx [ 270 ] = - ( xx [ 185 ] * xx [ 195 ] ) ; xx [
271 ] = - ( xx [ 185 ] * xx [ 772 ] * xx [ 185 ] + xx [ 59 ] * xx [ 772 ] *
xx [ 59 ] ) ; xx [ 272 ] = xx [ 59 ] * xx [ 195 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 750 , xx + 270 , xx + 292 ) ; xx [
195 ] = ( xx [ 222 ] * xx [ 190 ] + xx [ 294 ] ) * xx [ 248 ] ; xx [ 225 ] =
xx [ 219 ] - xx [ 79 ] * xx [ 195 ] ; xx [ 227 ] = xx [ 266 ] + xx [ 28 ] *
xx [ 269 ] ; xx [ 228 ] = xx [ 79 ] * state [ 59 ] ; xx [ 230 ] = ( xx [ 222
] * xx [ 228 ] + xx [ 293 ] ) * xx [ 248 ] ; xx [ 222 ] = xx [ 227 ] + xx [
79 ] * xx [ 230 ] ; xx [ 264 ] = xx [ 217 ] ; xx [ 265 ] = - xx [ 225 ] ; xx
[ 266 ] = - xx [ 222 ] ; solveSymmetricPosDef ( xx + 380 , xx + 264 , 3 , 1 ,
xx + 267 , xx + 270 ) ; xx [ 264 ] = xx [ 213 ] + xx [ 27 ] * xx [ 267 ] ; xx
[ 265 ] = xx [ 219 ] + xx [ 28 ] * xx [ 268 ] ; xx [ 266 ] = xx [ 227 ] + xx
[ 28 ] * xx [ 269 ] ; pm_math_Quaternion_xform_ra ( xx + 750 , xx + 264 , xx
+ 270 ) ; xx [ 239 ] = xx [ 248 ] * ( xx [ 292 ] - ( ( xx [ 201 ] + xx [ 191
] ) * xx [ 228 ] + ( xx [ 212 ] + xx [ 194 ] ) * xx [ 190 ] ) ) ; xx [ 264 ]
= xx [ 239 ] ; xx [ 265 ] = xx [ 230 ] + xx [ 358 ] * xx [ 269 ] ; xx [ 266 ]
= xx [ 195 ] - xx [ 358 ] * xx [ 268 ] ; pm_math_Quaternion_xform_ra ( xx +
750 , xx + 264 , xx + 292 ) ; pm_math_Vector3_cross_ra ( xx + 792 , xx + 292
, xx + 264 ) ; xx [ 191 ] = xx [ 806 ] + xx [ 841 ] ; xx [ 194 ] = xx [ 134 ]
* state [ 53 ] ; xx [ 201 ] = xx [ 194 ] * xx [ 185 ] ; xx [ 212 ] = xx [ 194
] * xx [ 59 ] ; xx [ 194 ] = xx [ 821 ] - xx [ 843 ] ; xx [ 240 ] = xx [ 191
] * xx [ 201 ] + xx [ 212 ] * xx [ 194 ] ; xx [ 244 ] = xx [ 812 ] - xx [ 847
] ; xx [ 247 ] = xx [ 822 ] + xx [ 849 ] ; xx [ 249 ] = xx [ 201 ] * xx [ 244
] + xx [ 247 ] * xx [ 212 ] ; xx [ 265 ] = xx [ 857 ] * xx [ 212 ] - xx [ 851
] * xx [ 201 ] ; xx [ 314 ] = ( xx [ 12 ] * xx [ 244 ] - xx [ 191 ] * xx [ 4
] + xx [ 134 ] * xx [ 853 ] ) / xx [ 816 ] ; xx [ 315 ] = xx [ 815 ] / xx [
816 ] ; xx [ 316 ] = ( xx [ 4 ] * xx [ 194 ] - xx [ 247 ] * xx [ 12 ] + xx [
134 ] * xx [ 855 ] ) / xx [ 816 ] ; xx [ 191 ] = xx [ 93 ] * xx [ 745 ] ; xx
[ 194 ] = xx [ 741 ] * xx [ 93 ] ; xx [ 244 ] = ( xx [ 739 ] * xx [ 191 ] -
xx [ 194 ] * xx [ 744 ] ) * xx [ 20 ] ; xx [ 247 ] = ( xx [ 191 ] * xx [ 745
] + xx [ 741 ] * xx [ 194 ] ) * xx [ 20 ] ; xx [ 267 ] = xx [ 20 ] * ( xx [
744 ] * xx [ 191 ] + xx [ 194 ] * xx [ 739 ] ) ; xx [ 326 ] = xx [ 244 ] ; xx
[ 327 ] = xx [ 93 ] - xx [ 247 ] ; xx [ 328 ] = - xx [ 267 ] ; xx [ 191 ] =
pm_math_Vector3_dot_ra ( xx + 314 , xx + 326 ) ; xx [ 194 ] = ( input [ 5 ] -
( ( xx [ 270 ] + xx [ 264 ] + xx [ 240 ] ) * xx [ 4 ] + xx [ 12 ] * ( xx [
272 ] + xx [ 266 ] - xx [ 249 ] ) + ( xx [ 293 ] + xx [ 265 ] ) * xx [ 134 ]
) ) / xx [ 816 ] - xx [ 191 ] ; xx [ 264 ] = xx [ 741 ] * xx [ 745 ] ; xx [
266 ] = xx [ 744 ] * xx [ 739 ] ; xx [ 270 ] = ( xx [ 264 ] - xx [ 266 ] ) *
xx [ 20 ] ; xx [ 271 ] = xx [ 739 ] * xx [ 739 ] ; xx [ 272 ] = ( xx [ 271 ]
+ xx [ 741 ] * xx [ 741 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 273 ] = xx [ 270 ]
* xx [ 59 ] - xx [ 185 ] * xx [ 272 ] ; xx [ 283 ] = xx [ 744 ] * xx [ 745 ]
; xx [ 285 ] = xx [ 741 ] * xx [ 739 ] ; xx [ 287 ] = xx [ 20 ] * ( xx [ 283
] + xx [ 285 ] ) ; xx [ 288 ] = xx [ 739 ] * xx [ 745 ] ; xx [ 292 ] = xx [
741 ] * xx [ 744 ] ; xx [ 293 ] = ( xx [ 288 ] - xx [ 292 ] ) * xx [ 20 ] ;
xx [ 294 ] = xx [ 59 ] * xx [ 287 ] + xx [ 293 ] * xx [ 185 ] ; xx [ 298 ] =
( xx [ 271 ] + xx [ 745 ] * xx [ 745 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 300 ]
= xx [ 20 ] * ( xx [ 264 ] + xx [ 266 ] ) ; xx [ 264 ] = xx [ 59 ] * xx [ 298
] - xx [ 185 ] * xx [ 300 ] ; xx [ 266 ] = xx [ 20 ] * ( xx [ 292 ] + xx [
288 ] ) ; xx [ 288 ] = ( xx [ 271 ] + xx [ 744 ] * xx [ 744 ] ) * xx [ 20 ] -
xx [ 54 ] ; xx [ 271 ] = ( xx [ 285 ] - xx [ 283 ] ) * xx [ 20 ] ; xx [ 434 ]
= xx [ 185 ] * xx [ 273 ] ; xx [ 435 ] = - ( xx [ 185 ] * xx [ 294 ] ) ; xx [
436 ] = xx [ 185 ] * xx [ 264 ] ; xx [ 437 ] = xx [ 185 ] * xx [ 185 ] * xx [
266 ] + xx [ 59 ] * xx [ 59 ] * xx [ 266 ] ; xx [ 438 ] = - ( xx [ 185 ] * xx
[ 185 ] * xx [ 288 ] + xx [ 59 ] * xx [ 59 ] * xx [ 288 ] ) ; xx [ 439 ] = -
( xx [ 185 ] * xx [ 271 ] * xx [ 185 ] + xx [ 59 ] * xx [ 271 ] * xx [ 59 ] )
; xx [ 440 ] = - ( xx [ 59 ] * xx [ 273 ] ) ; xx [ 441 ] = xx [ 59 ] * xx [
294 ] ; xx [ 442 ] = - ( xx [ 59 ] * xx [ 264 ] ) ;
pm_math_Matrix3x3_compose_ra ( xx + 434 , xx + 823 , xx + 463 ) ; xx [ 596 ]
= xx [ 272 ] ; xx [ 597 ] = xx [ 293 ] ; xx [ 598 ] = xx [ 300 ] ; xx [ 599 ]
= - xx [ 266 ] ; xx [ 600 ] = xx [ 288 ] ; xx [ 601 ] = xx [ 271 ] ; xx [ 602
] = xx [ 270 ] ; xx [ 603 ] = - xx [ 287 ] ; xx [ 604 ] = xx [ 298 ] ; xx [
264 ] = xx [ 804 ] * state [ 60 ] - xx [ 798 ] * state [ 58 ] ; xx [ 266 ] =
xx [ 804 ] * state [ 59 ] - xx [ 774 ] * state [ 58 ] ; xx [ 270 ] = xx [ 264
] * state [ 60 ] + xx [ 266 ] * state [ 59 ] ; xx [ 271 ] = xx [ 813 ] *
state [ 58 ] - xx [ 766 ] * state [ 60 ] ; xx [ 272 ] = xx [ 766 ] * state [
59 ] - xx [ 810 ] * state [ 58 ] ; xx [ 273 ] = xx [ 271 ] * state [ 60 ] -
xx [ 272 ] * state [ 59 ] ; xx [ 283 ] = xx [ 811 ] * state [ 58 ] - xx [ 785
] * state [ 60 ] ; xx [ 285 ] = xx [ 785 ] * state [ 59 ] - xx [ 814 ] *
state [ 58 ] ; xx [ 287 ] = xx [ 283 ] * state [ 60 ] - xx [ 285 ] * state [
59 ] ; xx [ 288 ] = xx [ 774 ] * state [ 60 ] - xx [ 798 ] * state [ 59 ] ;
xx [ 292 ] = xx [ 810 ] * state [ 60 ] - xx [ 813 ] * state [ 59 ] ; xx [ 293
] = xx [ 811 ] * state [ 59 ] - xx [ 814 ] * state [ 60 ] ; xx [ 608 ] = - xx
[ 270 ] ; xx [ 609 ] = xx [ 273 ] ; xx [ 610 ] = xx [ 287 ] ; xx [ 611 ] = xx
[ 266 ] * state [ 58 ] - xx [ 288 ] * state [ 60 ] ; xx [ 612 ] = xx [ 272 ]
* state [ 58 ] - xx [ 292 ] * state [ 60 ] ; xx [ 613 ] = xx [ 293 ] * state
[ 60 ] + xx [ 285 ] * state [ 58 ] ; xx [ 614 ] = xx [ 288 ] * state [ 59 ] +
xx [ 264 ] * state [ 58 ] ; xx [ 615 ] = xx [ 292 ] * state [ 59 ] - xx [ 271
] * state [ 58 ] ; xx [ 616 ] = - ( xx [ 293 ] * state [ 59 ] + xx [ 283 ] *
state [ 58 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 596 , xx + 608 , xx +
700 ) ; xx [ 264 ] = xx [ 754 ] * xx [ 754 ] ; xx [ 266 ] = xx [ 755 ] * xx [
756 ] ; xx [ 271 ] = xx [ 754 ] * xx [ 757 ] ; xx [ 272 ] = xx [ 755 ] * xx [
757 ] ; xx [ 283 ] = xx [ 754 ] * xx [ 756 ] ; xx [ 285 ] = xx [ 756 ] * xx [
757 ] ; xx [ 288 ] = xx [ 754 ] * xx [ 755 ] ; xx [ 596 ] = ( xx [ 264 ] + xx
[ 755 ] * xx [ 755 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 597 ] = ( xx [ 266 ] +
xx [ 271 ] ) * xx [ 20 ] ; xx [ 598 ] = xx [ 20 ] * ( xx [ 272 ] - xx [ 283 ]
) ; xx [ 599 ] = xx [ 20 ] * ( xx [ 266 ] - xx [ 271 ] ) ; xx [ 600 ] = ( xx
[ 264 ] + xx [ 756 ] * xx [ 756 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 601 ] = (
xx [ 285 ] + xx [ 288 ] ) * xx [ 20 ] ; xx [ 602 ] = ( xx [ 272 ] + xx [ 283
] ) * xx [ 20 ] ; xx [ 603 ] = xx [ 20 ] * ( xx [ 285 ] - xx [ 288 ] ) ; xx [
604 ] = ( xx [ 264 ] + xx [ 757 ] * xx [ 757 ] ) * xx [ 20 ] - xx [ 54 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 596 , xx + 251 , xx + 608 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 608 , xx + 257 , xx + 596 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 434 , xx + 792 , xx + 251 ) ; xx [ 292 ] =
xx [ 741 ] ; xx [ 293 ] = xx [ 737 ] ; xx [ 294 ] = xx [ 745 ] ; xx [ 264 ] =
xx [ 78 ] * xx [ 744 ] ; xx [ 266 ] = xx [ 187 ] * xx [ 745 ] + xx [ 741 ] *
xx [ 78 ] ; xx [ 271 ] = xx [ 187 ] * xx [ 744 ] ; xx [ 314 ] = - xx [ 264 ]
; xx [ 315 ] = - xx [ 266 ] ; xx [ 316 ] = - xx [ 271 ] ;
pm_math_Vector3_cross_ra ( xx + 292 , xx + 314 , xx + 326 ) ; xx [ 272 ] =
state [ 53 ] * state [ 53 ] ; xx [ 292 ] = - ( xx [ 270 ] * xx [ 79 ] ) ; xx
[ 293 ] = xx [ 79 ] * xx [ 273 ] ; xx [ 294 ] = xx [ 79 ] * xx [ 287 ] ;
pm_math_Quaternion_xform_ra ( xx + 746 , xx + 292 , xx + 314 ) ; xx [ 270 ] =
xx [ 742 ] * xx [ 228 ] + xx [ 190 ] * xx [ 743 ] ; xx [ 273 ] = xx [ 735 ] *
xx [ 228 ] ; xx [ 283 ] = xx [ 735 ] * xx [ 190 ] ; xx [ 292 ] = - xx [ 270 ]
; xx [ 293 ] = xx [ 273 ] ; xx [ 294 ] = xx [ 283 ] ;
pm_math_Vector3_cross_ra ( xx + 758 , xx + 292 , xx + 344 ) ; xx [ 285 ] = xx
[ 190 ] + xx [ 20 ] * ( xx [ 345 ] + xx [ 273 ] * xx [ 733 ] ) ; xx [ 292 ] =
- ( xx [ 285 ] * xx [ 185 ] ) ; xx [ 293 ] = ( xx [ 344 ] - xx [ 270 ] * xx [
733 ] ) * xx [ 20 ] * xx [ 185 ] - xx [ 59 ] * ( xx [ 20 ] * ( xx [ 346 ] +
xx [ 283 ] * xx [ 733 ] ) - xx [ 228 ] ) ; xx [ 294 ] = xx [ 285 ] * xx [ 59
] ; pm_math_Quaternion_xform_ra ( xx + 746 , xx + 292 , xx + 344 ) ; xx [ 59
] = xx [ 12 ] * xx [ 194 ] ; xx [ 185 ] = xx [ 4 ] * xx [ 194 ] ; xx [ 190 ]
= xx [ 185 ] * xx [ 743 ] - xx [ 735 ] * xx [ 59 ] ; xx [ 228 ] = xx [ 742 ]
* xx [ 185 ] ; xx [ 292 ] = xx [ 742 ] * xx [ 59 ] ; xx [ 293 ] = xx [ 190 ]
; xx [ 294 ] = - xx [ 228 ] ; pm_math_Vector3_cross_ra ( xx + 758 , xx + 292
, xx + 353 ) ; xx [ 270 ] = xx [ 244 ] - xx [ 201 ] ; xx [ 201 ] = xx [ 212 ]
- xx [ 267 ] ; xx [ 292 ] = xx [ 270 ] - xx [ 772 ] * xx [ 59 ] ; xx [ 293 ]
= xx [ 134 ] * xx [ 194 ] - xx [ 247 ] + xx [ 775 ] * xx [ 59 ] - xx [ 777 ]
* xx [ 185 ] + xx [ 93 ] ; xx [ 294 ] = xx [ 201 ] + xx [ 772 ] * xx [ 185 ]
; pm_math_Quaternion_inverseXform_ra ( xx + 750 , xx + 292 , xx + 359 ) ; xx
[ 185 ] = xx [ 268 ] - ( xx [ 410 ] * ( xx [ 354 ] - xx [ 190 ] * xx [ 733 ]
) - xx [ 412 ] * xx [ 361 ] ) ; xx [ 190 ] = xx [ 269 ] - ( ( xx [ 59 ] + xx
[ 20 ] * ( xx [ 355 ] + xx [ 228 ] * xx [ 733 ] ) ) * xx [ 392 ] + xx [ 412 ]
* xx [ 360 ] ) ; xx [ 59 ] = xx [ 4 ] * state [ 17 ] ; xx [ 212 ] = xx [ 12 ]
* state [ 17 ] ; xx [ 228 ] = xx [ 844 ] * xx [ 212 ] ; xx [ 244 ] = xx [ 59
] * xx [ 845 ] - xx [ 838 ] * xx [ 212 ] ; xx [ 267 ] = xx [ 844 ] * xx [ 59
] ; xx [ 292 ] = xx [ 228 ] ; xx [ 293 ] = xx [ 244 ] ; xx [ 294 ] = - xx [
267 ] ; pm_math_Vector3_cross_ra ( xx + 870 , xx + 292 , xx + 353 ) ; xx [
268 ] = xx [ 59 ] + ( xx [ 353 ] - xx [ 228 ] * xx [ 837 ] ) * xx [ 20 ] ; xx
[ 228 ] = xx [ 268 ] + state [ 22 ] ; xx [ 269 ] = xx [ 20 ] * ( xx [ 354 ] -
xx [ 244 ] * xx [ 837 ] ) ; xx [ 244 ] = xx [ 269 ] + state [ 23 ] ; xx [ 273
] = xx [ 212 ] + xx [ 20 ] * ( xx [ 355 ] + xx [ 267 ] * xx [ 837 ] ) ; xx [
267 ] = xx [ 273 ] + state [ 24 ] ; xx [ 292 ] = xx [ 228 ] ; xx [ 293 ] = xx
[ 244 ] ; xx [ 294 ] = xx [ 267 ] ; xx [ 353 ] = xx [ 228 ] * xx [ 27 ] ; xx
[ 354 ] = xx [ 244 ] * xx [ 28 ] ; xx [ 355 ] = xx [ 267 ] * xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 292 , xx + 353 , xx + 359 ) ; xx [ 292 ] = xx
[ 268 ] ; xx [ 293 ] = xx [ 269 ] ; xx [ 294 ] = xx [ 273 ] ; xx [ 353 ] =
state [ 22 ] ; xx [ 354 ] = state [ 23 ] ; xx [ 355 ] = state [ 24 ] ;
pm_math_Vector3_cross_ra ( xx + 292 , xx + 353 , xx + 365 ) ; xx [ 283 ] = xx
[ 359 ] + xx [ 27 ] * xx [ 365 ] ; xx [ 285 ] = - xx [ 283 ] ; xx [ 287 ] =
xx [ 360 ] + xx [ 28 ] * xx [ 366 ] ; xx [ 288 ] = xx [ 268 ] + xx [ 228 ] ;
xx [ 228 ] = xx [ 79 ] * state [ 24 ] ; xx [ 268 ] = xx [ 884 ] * xx [ 212 ]
- xx [ 886 ] * xx [ 59 ] ; xx [ 368 ] = - ( xx [ 212 ] * xx [ 268 ] ) ; xx [
369 ] = - ( xx [ 212 ] * xx [ 881 ] * xx [ 212 ] + xx [ 59 ] * xx [ 881 ] *
xx [ 59 ] ) ; xx [ 370 ] = xx [ 59 ] * xx [ 268 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 862 , xx + 368 , xx + 400 ) ; xx [
268 ] = ( xx [ 288 ] * xx [ 228 ] + xx [ 402 ] ) * xx [ 248 ] ; xx [ 298 ] =
xx [ 287 ] - xx [ 79 ] * xx [ 268 ] ; xx [ 300 ] = xx [ 361 ] + xx [ 28 ] *
xx [ 367 ] ; xx [ 301 ] = xx [ 79 ] * state [ 23 ] ; xx [ 320 ] = ( xx [ 288
] * xx [ 301 ] + xx [ 401 ] ) * xx [ 248 ] ; xx [ 288 ] = xx [ 300 ] + xx [
79 ] * xx [ 320 ] ; xx [ 359 ] = xx [ 285 ] ; xx [ 360 ] = - xx [ 298 ] ; xx
[ 361 ] = - xx [ 288 ] ; solveSymmetricPosDef ( xx + 380 , xx + 359 , 3 , 1 ,
xx + 365 , xx + 368 ) ; xx [ 359 ] = xx [ 283 ] + xx [ 27 ] * xx [ 365 ] ; xx
[ 360 ] = xx [ 287 ] + xx [ 28 ] * xx [ 366 ] ; xx [ 361 ] = xx [ 300 ] + xx
[ 28 ] * xx [ 367 ] ; pm_math_Quaternion_xform_ra ( xx + 862 , xx + 359 , xx
+ 368 ) ; xx [ 322 ] = xx [ 248 ] * ( xx [ 400 ] - ( ( xx [ 269 ] + xx [ 244
] ) * xx [ 301 ] + ( xx [ 273 ] + xx [ 267 ] ) * xx [ 228 ] ) ) ; xx [ 359 ]
= xx [ 322 ] ; xx [ 360 ] = xx [ 320 ] + xx [ 358 ] * xx [ 367 ] ; xx [ 361 ]
= xx [ 268 ] - xx [ 358 ] * xx [ 366 ] ; pm_math_Quaternion_xform_ra ( xx +
862 , xx + 359 , xx + 400 ) ; pm_math_Vector3_cross_ra ( xx + 901 , xx + 400
, xx + 359 ) ; xx [ 244 ] = xx [ 915 ] + xx [ 950 ] ; xx [ 267 ] = xx [ 134 ]
* state [ 17 ] ; xx [ 269 ] = xx [ 267 ] * xx [ 212 ] ; xx [ 273 ] = xx [ 267
] * xx [ 59 ] ; xx [ 267 ] = xx [ 930 ] - xx [ 952 ] ; xx [ 332 ] = xx [ 244
] * xx [ 269 ] + xx [ 273 ] * xx [ 267 ] ; xx [ 338 ] = xx [ 921 ] - xx [ 956
] ; xx [ 339 ] = xx [ 931 ] + xx [ 958 ] ; xx [ 347 ] = xx [ 269 ] * xx [ 338
] + xx [ 339 ] * xx [ 273 ] ; xx [ 351 ] = xx [ 966 ] * xx [ 273 ] - xx [ 960
] * xx [ 269 ] ; xx [ 402 ] = ( xx [ 12 ] * xx [ 338 ] - xx [ 244 ] * xx [ 4
] + xx [ 134 ] * xx [ 962 ] ) / xx [ 925 ] ; xx [ 403 ] = xx [ 924 ] / xx [
925 ] ; xx [ 404 ] = ( xx [ 4 ] * xx [ 267 ] - xx [ 339 ] * xx [ 12 ] + xx [
134 ] * xx [ 964 ] ) / xx [ 925 ] ; xx [ 244 ] = xx [ 842 ] * xx [ 93 ] ; xx
[ 267 ] = xx [ 93 ] * xx [ 850 ] ; xx [ 338 ] = ( xx [ 244 ] * xx [ 848 ] -
xx [ 840 ] * xx [ 267 ] ) * xx [ 20 ] ; xx [ 339 ] = ( xx [ 267 ] * xx [ 850
] + xx [ 842 ] * xx [ 244 ] ) * xx [ 20 ] ; xx [ 356 ] = xx [ 20 ] * ( xx [
848 ] * xx [ 267 ] + xx [ 244 ] * xx [ 840 ] ) ; xx [ 434 ] = xx [ 338 ] ; xx
[ 435 ] = xx [ 93 ] - xx [ 339 ] ; xx [ 436 ] = - xx [ 356 ] ; xx [ 244 ] =
pm_math_Vector3_dot_ra ( xx + 402 , xx + 434 ) ; xx [ 267 ] = ( input [ 1 ] -
( ( xx [ 368 ] + xx [ 359 ] + xx [ 332 ] ) * xx [ 4 ] + xx [ 12 ] * ( xx [
370 ] + xx [ 361 ] - xx [ 347 ] ) + ( xx [ 401 ] + xx [ 351 ] ) * xx [ 134 ]
) ) / xx [ 925 ] - xx [ 244 ] ; xx [ 357 ] = xx [ 848 ] * xx [ 840 ] ; xx [
359 ] = xx [ 842 ] * xx [ 850 ] ; xx [ 360 ] = ( xx [ 357 ] - xx [ 359 ] ) *
xx [ 20 ] ; xx [ 361 ] = xx [ 840 ] * xx [ 840 ] ; xx [ 365 ] = ( xx [ 361 ]
+ xx [ 842 ] * xx [ 842 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 368 ] = xx [ 360 ]
* xx [ 59 ] - xx [ 212 ] * xx [ 365 ] ; xx [ 369 ] = xx [ 848 ] * xx [ 850 ]
; xx [ 370 ] = xx [ 842 ] * xx [ 840 ] ; xx [ 375 ] = xx [ 20 ] * ( xx [ 369
] + xx [ 370 ] ) ; xx [ 389 ] = xx [ 842 ] * xx [ 848 ] ; xx [ 390 ] = xx [
840 ] * xx [ 850 ] ; xx [ 393 ] = ( xx [ 389 ] - xx [ 390 ] ) * xx [ 20 ] ;
xx [ 396 ] = xx [ 59 ] * xx [ 375 ] + xx [ 393 ] * xx [ 212 ] ; xx [ 400 ] =
( xx [ 361 ] + xx [ 850 ] * xx [ 850 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 401 ]
= xx [ 20 ] * ( xx [ 359 ] + xx [ 357 ] ) ; xx [ 357 ] = xx [ 59 ] * xx [ 400
] + xx [ 212 ] * xx [ 401 ] ; xx [ 359 ] = xx [ 20 ] * ( xx [ 389 ] + xx [
390 ] ) ; xx [ 389 ] = ( xx [ 361 ] + xx [ 848 ] * xx [ 848 ] ) * xx [ 20 ] -
xx [ 54 ] ; xx [ 361 ] = ( xx [ 370 ] - xx [ 369 ] ) * xx [ 20 ] ; xx [ 434 ]
= xx [ 212 ] * xx [ 368 ] ; xx [ 435 ] = - ( xx [ 212 ] * xx [ 396 ] ) ; xx [
436 ] = xx [ 212 ] * xx [ 357 ] ; xx [ 437 ] = - ( xx [ 212 ] * xx [ 212 ] *
xx [ 359 ] + xx [ 59 ] * xx [ 59 ] * xx [ 359 ] ) ; xx [ 438 ] = - ( xx [ 212
] * xx [ 212 ] * xx [ 389 ] + xx [ 59 ] * xx [ 59 ] * xx [ 389 ] ) ; xx [ 439
] = - ( xx [ 212 ] * xx [ 361 ] * xx [ 212 ] + xx [ 59 ] * xx [ 361 ] * xx [
59 ] ) ; xx [ 440 ] = - ( xx [ 59 ] * xx [ 368 ] ) ; xx [ 441 ] = xx [ 59 ] *
xx [ 396 ] ; xx [ 442 ] = - ( xx [ 59 ] * xx [ 357 ] ) ;
pm_math_Matrix3x3_compose_ra ( xx + 434 , xx + 932 , xx + 608 ) ; xx [ 703 ]
= xx [ 365 ] ; xx [ 704 ] = xx [ 393 ] ; xx [ 705 ] = - xx [ 401 ] ; xx [ 706
] = xx [ 359 ] ; xx [ 707 ] = xx [ 389 ] ; xx [ 708 ] = xx [ 361 ] ; xx [ 709
] = xx [ 360 ] ; xx [ 710 ] = - xx [ 375 ] ; xx [ 711 ] = xx [ 400 ] ; xx [
357 ] = xx [ 913 ] * state [ 24 ] - xx [ 907 ] * state [ 22 ] ; xx [ 359 ] =
xx [ 913 ] * state [ 23 ] - xx [ 883 ] * state [ 22 ] ; xx [ 360 ] = xx [ 357
] * state [ 24 ] + xx [ 359 ] * state [ 23 ] ; xx [ 361 ] = xx [ 922 ] *
state [ 22 ] - xx [ 875 ] * state [ 24 ] ; xx [ 365 ] = xx [ 875 ] * state [
23 ] - xx [ 919 ] * state [ 22 ] ; xx [ 368 ] = xx [ 361 ] * state [ 24 ] -
xx [ 365 ] * state [ 23 ] ; xx [ 369 ] = xx [ 920 ] * state [ 22 ] - xx [ 894
] * state [ 24 ] ; xx [ 370 ] = xx [ 894 ] * state [ 23 ] - xx [ 923 ] *
state [ 22 ] ; xx [ 375 ] = xx [ 369 ] * state [ 24 ] - xx [ 370 ] * state [
23 ] ; xx [ 389 ] = xx [ 883 ] * state [ 24 ] - xx [ 907 ] * state [ 23 ] ;
xx [ 390 ] = xx [ 919 ] * state [ 24 ] - xx [ 922 ] * state [ 23 ] ; xx [ 393
] = xx [ 920 ] * state [ 23 ] - xx [ 923 ] * state [ 24 ] ; xx [ 712 ] = - xx
[ 360 ] ; xx [ 713 ] = xx [ 368 ] ; xx [ 714 ] = xx [ 375 ] ; xx [ 715 ] = xx
[ 359 ] * state [ 22 ] - xx [ 389 ] * state [ 24 ] ; xx [ 716 ] = xx [ 365 ]
* state [ 22 ] - xx [ 390 ] * state [ 24 ] ; xx [ 717 ] = xx [ 393 ] * state
[ 24 ] + xx [ 370 ] * state [ 22 ] ; xx [ 718 ] = xx [ 389 ] * state [ 23 ] +
xx [ 357 ] * state [ 22 ] ; xx [ 719 ] = xx [ 390 ] * state [ 23 ] - xx [ 361
] * state [ 22 ] ; xx [ 720 ] = - ( xx [ 393 ] * state [ 23 ] + xx [ 369 ] *
state [ 22 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 703 , xx + 712 , xx +
721 ) ; xx [ 357 ] = xx [ 866 ] * xx [ 866 ] ; xx [ 359 ] = xx [ 867 ] * xx [
868 ] ; xx [ 361 ] = xx [ 866 ] * xx [ 869 ] ; xx [ 365 ] = xx [ 867 ] * xx [
869 ] ; xx [ 369 ] = xx [ 866 ] * xx [ 868 ] ; xx [ 370 ] = xx [ 868 ] * xx [
869 ] ; xx [ 389 ] = xx [ 866 ] * xx [ 867 ] ; xx [ 703 ] = ( xx [ 357 ] + xx
[ 867 ] * xx [ 867 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 704 ] = ( xx [ 359 ] +
xx [ 361 ] ) * xx [ 20 ] ; xx [ 705 ] = xx [ 20 ] * ( xx [ 365 ] - xx [ 369 ]
) ; xx [ 706 ] = xx [ 20 ] * ( xx [ 359 ] - xx [ 361 ] ) ; xx [ 707 ] = ( xx
[ 357 ] + xx [ 868 ] * xx [ 868 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 708 ] = (
xx [ 370 ] + xx [ 389 ] ) * xx [ 20 ] ; xx [ 709 ] = ( xx [ 365 ] + xx [ 369
] ) * xx [ 20 ] ; xx [ 710 ] = xx [ 20 ] * ( xx [ 370 ] - xx [ 389 ] ) ; xx [
711 ] = ( xx [ 357 ] + xx [ 869 ] * xx [ 869 ] ) * xx [ 20 ] - xx [ 54 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 703 , xx + 292 , xx + 712 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 712 , xx + 353 , xx + 703 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 434 , xx + 901 , xx + 292 ) ; xx [ 357 ] =
xx [ 78 ] * xx [ 848 ] ; xx [ 400 ] = xx [ 846 ] ; xx [ 401 ] = xx [ 839 ] ;
xx [ 402 ] = xx [ 850 ] ; xx [ 359 ] = xx [ 842 ] * xx [ 78 ] - xx [ 187 ] *
xx [ 850 ] ; xx [ 361 ] = xx [ 187 ] * xx [ 848 ] ; xx [ 403 ] = - xx [ 357 ]
; xx [ 404 ] = xx [ 359 ] ; xx [ 405 ] = - xx [ 361 ] ;
pm_math_Vector3_cross_ra ( xx + 400 , xx + 403 , xx + 434 ) ; xx [ 365 ] =
state [ 17 ] * state [ 17 ] ; xx [ 400 ] = - ( xx [ 360 ] * xx [ 79 ] ) ; xx
[ 401 ] = xx [ 79 ] * xx [ 368 ] ; xx [ 402 ] = xx [ 79 ] * xx [ 375 ] ;
pm_math_Quaternion_xform_ra ( xx + 858 , xx + 400 , xx + 368 ) ; xx [ 360 ] =
xx [ 844 ] * xx [ 301 ] + xx [ 228 ] * xx [ 845 ] ; xx [ 375 ] = xx [ 838 ] *
xx [ 301 ] ; xx [ 389 ] = xx [ 838 ] * xx [ 228 ] ; xx [ 400 ] = - xx [ 360 ]
; xx [ 401 ] = xx [ 375 ] ; xx [ 402 ] = xx [ 389 ] ;
pm_math_Vector3_cross_ra ( xx + 870 , xx + 400 , xx + 403 ) ; xx [ 390 ] = xx
[ 228 ] + xx [ 20 ] * ( xx [ 404 ] + xx [ 375 ] * xx [ 837 ] ) ; xx [ 400 ] =
- ( xx [ 390 ] * xx [ 212 ] ) ; xx [ 401 ] = ( xx [ 403 ] - xx [ 360 ] * xx [
837 ] ) * xx [ 20 ] * xx [ 212 ] - xx [ 59 ] * ( xx [ 20 ] * ( xx [ 405 ] +
xx [ 389 ] * xx [ 837 ] ) - xx [ 301 ] ) ; xx [ 402 ] = xx [ 390 ] * xx [ 59
] ; pm_math_Quaternion_xform_ra ( xx + 858 , xx + 400 , xx + 403 ) ; xx [ 59
] = xx [ 12 ] * xx [ 267 ] ; xx [ 212 ] = xx [ 4 ] * xx [ 267 ] ; xx [ 228 ]
= xx [ 212 ] * xx [ 845 ] - xx [ 838 ] * xx [ 59 ] ; xx [ 301 ] = xx [ 844 ]
* xx [ 212 ] ; xx [ 400 ] = xx [ 844 ] * xx [ 59 ] ; xx [ 401 ] = xx [ 228 ]
; xx [ 402 ] = - xx [ 301 ] ; pm_math_Vector3_cross_ra ( xx + 870 , xx + 400
, xx + 437 ) ; xx [ 360 ] = xx [ 338 ] - xx [ 269 ] ; xx [ 269 ] = xx [ 273 ]
- xx [ 356 ] ; xx [ 400 ] = xx [ 360 ] - xx [ 881 ] * xx [ 59 ] ; xx [ 401 ]
= xx [ 134 ] * xx [ 267 ] - xx [ 339 ] + xx [ 884 ] * xx [ 59 ] - xx [ 886 ]
* xx [ 212 ] + xx [ 93 ] ; xx [ 402 ] = xx [ 269 ] + xx [ 881 ] * xx [ 212 ]
; pm_math_Quaternion_inverseXform_ra ( xx + 862 , xx + 400 , xx + 440 ) ; xx
[ 212 ] = xx [ 366 ] - ( xx [ 410 ] * ( xx [ 438 ] - xx [ 228 ] * xx [ 837 ]
) - xx [ 412 ] * xx [ 442 ] ) ; xx [ 228 ] = xx [ 367 ] - ( ( xx [ 59 ] + xx
[ 20 ] * ( xx [ 439 ] + xx [ 301 ] * xx [ 837 ] ) ) * xx [ 392 ] + xx [ 412 ]
* xx [ 441 ] ) ; xx [ 59 ] = xx [ 12 ] * state [ 26 ] ; xx [ 273 ] = xx [ 949
] * xx [ 59 ] ; xx [ 301 ] = xx [ 4 ] * state [ 26 ] ; xx [ 338 ] = xx [ 941
] * xx [ 59 ] - xx [ 301 ] * xx [ 953 ] ; xx [ 356 ] = xx [ 949 ] * xx [ 301
] ; xx [ 400 ] = - xx [ 273 ] ; xx [ 401 ] = xx [ 338 ] ; xx [ 402 ] = - xx [
356 ] ; pm_math_Vector3_cross_ra ( xx + 975 , xx + 400 , xx + 437 ) ; xx [
366 ] = ( xx [ 273 ] * xx [ 918 ] + xx [ 437 ] ) * xx [ 20 ] - xx [ 301 ] ;
xx [ 273 ] = xx [ 366 ] + state [ 31 ] ; xx [ 367 ] = xx [ 20 ] * ( xx [ 438
] - xx [ 338 ] * xx [ 918 ] ) ; xx [ 338 ] = xx [ 367 ] + state [ 32 ] ; xx [
375 ] = xx [ 59 ] + xx [ 20 ] * ( xx [ 439 ] + xx [ 356 ] * xx [ 918 ] ) ; xx
[ 356 ] = xx [ 375 ] + state [ 33 ] ; xx [ 400 ] = xx [ 273 ] ; xx [ 401 ] =
xx [ 338 ] ; xx [ 402 ] = xx [ 356 ] ; xx [ 437 ] = xx [ 273 ] * xx [ 27 ] ;
xx [ 438 ] = xx [ 338 ] * xx [ 28 ] ; xx [ 439 ] = xx [ 356 ] * xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 400 , xx + 437 , xx + 440 ) ; xx [ 400 ] = xx
[ 366 ] ; xx [ 401 ] = xx [ 367 ] ; xx [ 402 ] = xx [ 375 ] ; xx [ 437 ] =
state [ 31 ] ; xx [ 438 ] = state [ 32 ] ; xx [ 439 ] = state [ 33 ] ;
pm_math_Vector3_cross_ra ( xx + 400 , xx + 437 , xx + 447 ) ; xx [ 389 ] = xx
[ 440 ] + xx [ 27 ] * xx [ 447 ] ; xx [ 390 ] = - xx [ 389 ] ; xx [ 393 ] =
xx [ 441 ] + xx [ 28 ] * xx [ 448 ] ; xx [ 396 ] = xx [ 366 ] + xx [ 273 ] ;
xx [ 273 ] = xx [ 79 ] * state [ 33 ] ; xx [ 366 ] = xx [ 965 ] * xx [ 59 ] +
xx [ 978 ] * xx [ 301 ] ; xx [ 450 ] = - ( xx [ 59 ] * xx [ 366 ] ) ; xx [
451 ] = - ( xx [ 59 ] * xx [ 959 ] * xx [ 59 ] + xx [ 301 ] * xx [ 959 ] * xx
[ 301 ] ) ; xx [ 452 ] = - ( xx [ 301 ] * xx [ 366 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 967 , xx + 450 , xx + 457 ) ; xx [
366 ] = ( xx [ 396 ] * xx [ 273 ] + xx [ 459 ] ) * xx [ 248 ] ; xx [ 406 ] =
xx [ 393 ] - xx [ 79 ] * xx [ 366 ] ; xx [ 413 ] = xx [ 442 ] + xx [ 28 ] *
xx [ 449 ] ; xx [ 422 ] = xx [ 79 ] * state [ 32 ] ; xx [ 425 ] = ( xx [ 396
] * xx [ 422 ] + xx [ 458 ] ) * xx [ 248 ] ; xx [ 396 ] = xx [ 413 ] + xx [
79 ] * xx [ 425 ] ; xx [ 440 ] = xx [ 390 ] ; xx [ 441 ] = - xx [ 406 ] ; xx
[ 442 ] = - xx [ 396 ] ; solveSymmetricPosDef ( xx + 380 , xx + 440 , 3 , 1 ,
xx + 447 , xx + 450 ) ; xx [ 440 ] = xx [ 389 ] + xx [ 27 ] * xx [ 447 ] ; xx
[ 441 ] = xx [ 393 ] + xx [ 28 ] * xx [ 448 ] ; xx [ 442 ] = xx [ 413 ] + xx
[ 28 ] * xx [ 449 ] ; pm_math_Quaternion_xform_ra ( xx + 967 , xx + 440 , xx
+ 450 ) ; xx [ 440 ] = xx [ 248 ] * ( xx [ 457 ] - ( ( xx [ 367 ] + xx [ 338
] ) * xx [ 422 ] + ( xx [ 375 ] + xx [ 356 ] ) * xx [ 273 ] ) ) ; xx [ 457 ]
= xx [ 440 ] ; xx [ 458 ] = xx [ 425 ] + xx [ 358 ] * xx [ 449 ] ; xx [ 459 ]
= xx [ 366 ] - xx [ 358 ] * xx [ 448 ] ; pm_math_Quaternion_xform_ra ( xx +
967 , xx + 457 , xx + 466 ) ; pm_math_Vector3_cross_ra ( xx + 990 , xx + 466
, xx + 457 ) ; xx [ 248 ] = xx [ 134 ] * state [ 26 ] ; xx [ 338 ] = xx [ 248
] * xx [ 59 ] ; xx [ 356 ] = xx [ 955 ] - xx [ 1049 ] ; xx [ 367 ] = xx [
1024 ] + xx [ 1051 ] ; xx [ 375 ] = xx [ 248 ] * xx [ 301 ] ; xx [ 248 ] = xx
[ 338 ] * xx [ 356 ] - xx [ 367 ] * xx [ 375 ] ; xx [ 441 ] = xx [ 1016 ] +
xx [ 1043 ] ; xx [ 442 ] = xx [ 411 ] - xx [ 1045 ] ; xx [ 411 ] = xx [ 441 ]
* xx [ 338 ] - xx [ 375 ] * xx [ 442 ] ; xx [ 444 ] = xx [ 1059 ] * xx [ 375
] + xx [ 1053 ] * xx [ 338 ] ; xx [ 468 ] = ( xx [ 12 ] * xx [ 356 ] + xx [
441 ] * xx [ 4 ] + xx [ 134 ] * xx [ 1055 ] ) / xx [ 229 ] ; xx [ 469 ] = xx
[ 1007 ] / xx [ 229 ] ; xx [ 470 ] = ( xx [ 134 ] * xx [ 1057 ] - ( xx [ 4 ]
* xx [ 442 ] + xx [ 367 ] * xx [ 12 ] ) ) / xx [ 229 ] ; xx [ 356 ] = xx [ 93
] * xx [ 929 ] ; xx [ 367 ] = xx [ 912 ] * xx [ 93 ] ; xx [ 441 ] = ( xx [
906 ] * xx [ 356 ] - xx [ 367 ] * xx [ 926 ] ) * xx [ 20 ] ; xx [ 442 ] = (
xx [ 356 ] * xx [ 929 ] + xx [ 912 ] * xx [ 367 ] ) * xx [ 20 ] ; xx [ 445 ]
= xx [ 20 ] * ( xx [ 926 ] * xx [ 356 ] + xx [ 367 ] * xx [ 906 ] ) ; xx [
476 ] = xx [ 441 ] ; xx [ 477 ] = xx [ 93 ] - xx [ 442 ] ; xx [ 478 ] = xx [
445 ] ; xx [ 356 ] = pm_math_Vector3_dot_ra ( xx + 468 , xx + 476 ) ; xx [
367 ] = ( input [ 2 ] - ( xx [ 12 ] * ( xx [ 452 ] + xx [ 459 ] - xx [ 248 ]
) - ( xx [ 450 ] + xx [ 457 ] + xx [ 411 ] ) * xx [ 4 ] + ( xx [ 467 ] - xx [
444 ] ) * xx [ 134 ] ) ) / xx [ 229 ] - xx [ 356 ] ; xx [ 447 ] = xx [ 926 ]
* xx [ 906 ] ; xx [ 450 ] = xx [ 912 ] * xx [ 929 ] ; xx [ 451 ] = ( xx [ 447
] - xx [ 450 ] ) * xx [ 20 ] ; xx [ 452 ] = xx [ 906 ] * xx [ 906 ] ; xx [
455 ] = ( xx [ 452 ] + xx [ 912 ] * xx [ 912 ] ) * xx [ 20 ] - xx [ 54 ] ; xx
[ 457 ] = xx [ 451 ] * xx [ 301 ] + xx [ 59 ] * xx [ 455 ] ; xx [ 458 ] = xx
[ 926 ] * xx [ 929 ] ; xx [ 459 ] = xx [ 912 ] * xx [ 906 ] ; xx [ 460 ] = xx
[ 20 ] * ( xx [ 458 ] + xx [ 459 ] ) ; xx [ 461 ] = xx [ 906 ] * xx [ 929 ] ;
xx [ 466 ] = xx [ 912 ] * xx [ 926 ] ; xx [ 467 ] = ( xx [ 461 ] - xx [ 466 ]
) * xx [ 20 ] ; xx [ 468 ] = xx [ 301 ] * xx [ 460 ] + xx [ 467 ] * xx [ 59 ]
; xx [ 469 ] = xx [ 20 ] * ( xx [ 450 ] + xx [ 447 ] ) ; xx [ 447 ] = ( xx [
452 ] + xx [ 929 ] * xx [ 929 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 450 ] = xx [
59 ] * xx [ 469 ] - xx [ 301 ] * xx [ 447 ] ; xx [ 470 ] = xx [ 20 ] * ( xx [
466 ] + xx [ 461 ] ) ; xx [ 461 ] = ( xx [ 452 ] + xx [ 926 ] * xx [ 926 ] )
* xx [ 20 ] - xx [ 54 ] ; xx [ 452 ] = ( xx [ 458 ] - xx [ 459 ] ) * xx [ 20
] ; xx [ 611 ] = - ( xx [ 59 ] * xx [ 457 ] ) ; xx [ 612 ] = - ( xx [ 59 ] *
xx [ 468 ] ) ; xx [ 613 ] = xx [ 59 ] * xx [ 450 ] ; xx [ 614 ] = xx [ 59 ] *
xx [ 59 ] * xx [ 470 ] + xx [ 301 ] * xx [ 301 ] * xx [ 470 ] ; xx [ 615 ] =
- ( xx [ 59 ] * xx [ 59 ] * xx [ 461 ] + xx [ 301 ] * xx [ 301 ] * xx [ 461 ]
) ; xx [ 616 ] = - ( xx [ 59 ] * xx [ 452 ] * xx [ 59 ] + xx [ 301 ] * xx [
452 ] * xx [ 301 ] ) ; xx [ 617 ] = - ( xx [ 301 ] * xx [ 457 ] ) ; xx [ 618
] = - ( xx [ 301 ] * xx [ 468 ] ) ; xx [ 619 ] = xx [ 301 ] * xx [ 450 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 611 , xx + 1025 , xx + 706 ) ; xx [ 724 ]
= xx [ 455 ] ; xx [ 725 ] = xx [ 467 ] ; xx [ 726 ] = - xx [ 469 ] ; xx [ 727
] = - xx [ 470 ] ; xx [ 728 ] = xx [ 461 ] ; xx [ 729 ] = xx [ 452 ] ; xx [
730 ] = xx [ 451 ] ; xx [ 731 ] = xx [ 460 ] ; xx [ 732 ] = xx [ 447 ] ; xx [
447 ] = xx [ 1011 ] * state [ 33 ] + xx [ 1009 ] * state [ 31 ] ; xx [ 450 ]
= xx [ 1011 ] * state [ 32 ] - xx [ 1014 ] * state [ 31 ] ; xx [ 451 ] = xx [
447 ] * state [ 33 ] + xx [ 450 ] * state [ 32 ] ; xx [ 452 ] = xx [ 1017 ] *
state [ 31 ] - xx [ 1012 ] * state [ 33 ] ; xx [ 455 ] = xx [ 1012 ] * state
[ 32 ] - xx [ 954 ] * state [ 31 ] ; xx [ 457 ] = xx [ 452 ] * state [ 33 ] -
xx [ 455 ] * state [ 32 ] ; xx [ 458 ] = xx [ 1003 ] * state [ 31 ] - xx [
1006 ] * state [ 33 ] ; xx [ 459 ] = xx [ 1006 ] * state [ 32 ] + xx [ 963 ]
* state [ 31 ] ; xx [ 460 ] = xx [ 458 ] * state [ 33 ] - xx [ 459 ] * state
[ 32 ] ; xx [ 461 ] = xx [ 1014 ] * state [ 33 ] + xx [ 1009 ] * state [ 32 ]
; xx [ 466 ] = xx [ 954 ] * state [ 33 ] - xx [ 1017 ] * state [ 32 ] ; xx [
467 ] = xx [ 963 ] * state [ 33 ] + xx [ 1003 ] * state [ 32 ] ; xx [ 806 ] =
- xx [ 451 ] ; xx [ 807 ] = xx [ 457 ] ; xx [ 808 ] = xx [ 460 ] ; xx [ 809 ]
= xx [ 450 ] * state [ 31 ] - xx [ 461 ] * state [ 33 ] ; xx [ 810 ] = xx [
455 ] * state [ 31 ] - xx [ 466 ] * state [ 33 ] ; xx [ 811 ] = xx [ 467 ] *
state [ 33 ] + xx [ 459 ] * state [ 31 ] ; xx [ 812 ] = xx [ 461 ] * state [
32 ] + xx [ 447 ] * state [ 31 ] ; xx [ 813 ] = xx [ 466 ] * state [ 32 ] -
xx [ 452 ] * state [ 31 ] ; xx [ 814 ] = - ( xx [ 467 ] * state [ 32 ] + xx [
458 ] * state [ 31 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 724 , xx + 806 ,
xx + 817 ) ; xx [ 447 ] = xx [ 971 ] * xx [ 971 ] ; xx [ 450 ] = xx [ 972 ] *
xx [ 973 ] ; xx [ 452 ] = xx [ 971 ] * xx [ 974 ] ; xx [ 455 ] = xx [ 972 ] *
xx [ 974 ] ; xx [ 458 ] = xx [ 971 ] * xx [ 973 ] ; xx [ 459 ] = xx [ 973 ] *
xx [ 974 ] ; xx [ 461 ] = xx [ 971 ] * xx [ 972 ] ; xx [ 724 ] = ( xx [ 447 ]
+ xx [ 972 ] * xx [ 972 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 725 ] = ( xx [ 450
] + xx [ 452 ] ) * xx [ 20 ] ; xx [ 726 ] = xx [ 20 ] * ( xx [ 455 ] - xx [
458 ] ) ; xx [ 727 ] = xx [ 20 ] * ( xx [ 450 ] - xx [ 452 ] ) ; xx [ 728 ] =
( xx [ 447 ] + xx [ 973 ] * xx [ 973 ] ) * xx [ 20 ] - xx [ 54 ] ; xx [ 729 ]
= ( xx [ 459 ] + xx [ 461 ] ) * xx [ 20 ] ; xx [ 730 ] = ( xx [ 455 ] + xx [
458 ] ) * xx [ 20 ] ; xx [ 731 ] = xx [ 20 ] * ( xx [ 459 ] - xx [ 461 ] ) ;
xx [ 732 ] = ( xx [ 447 ] + xx [ 974 ] * xx [ 974 ] ) * xx [ 20 ] - xx [ 54 ]
; pm_math_Matrix3x3_postCross_ra ( xx + 724 , xx + 400 , xx + 806 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 806 , xx + 437 , xx + 724 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 611 , xx + 990 , xx + 400 ) ; xx [ 466 ] =
xx [ 912 ] ; xx [ 467 ] = xx [ 55 ] ; xx [ 468 ] = xx [ 905 ] ; xx [ 54 ] =
xx [ 78 ] * xx [ 926 ] ; xx [ 55 ] = xx [ 187 ] * xx [ 929 ] + xx [ 912 ] *
xx [ 78 ] ; xx [ 447 ] = xx [ 187 ] * xx [ 926 ] ; xx [ 469 ] = xx [ 54 ] ;
xx [ 470 ] = xx [ 55 ] ; xx [ 471 ] = - xx [ 447 ] ; pm_math_Vector3_cross_ra
( xx + 466 , xx + 469 , xx + 476 ) ; xx [ 450 ] = state [ 26 ] * state [ 26 ]
; xx [ 466 ] = - ( xx [ 451 ] * xx [ 79 ] ) ; xx [ 467 ] = xx [ 79 ] * xx [
457 ] ; xx [ 468 ] = xx [ 79 ] * xx [ 460 ] ; pm_math_Quaternion_xform_ra (
xx + 944 , xx + 466 , xx + 457 ) ; xx [ 451 ] = xx [ 949 ] * xx [ 422 ] - xx
[ 273 ] * xx [ 953 ] ; xx [ 452 ] = xx [ 941 ] * xx [ 422 ] ; xx [ 455 ] = xx
[ 941 ] * xx [ 273 ] ; xx [ 466 ] = xx [ 451 ] ; xx [ 467 ] = - xx [ 452 ] ;
xx [ 468 ] = - xx [ 455 ] ; pm_math_Vector3_cross_ra ( xx + 975 , xx + 466 ,
xx + 469 ) ; xx [ 460 ] = xx [ 273 ] + xx [ 20 ] * ( xx [ 470 ] - xx [ 452 ]
* xx [ 918 ] ) ; xx [ 466 ] = - ( xx [ 460 ] * xx [ 59 ] ) ; xx [ 467 ] = (
xx [ 451 ] * xx [ 918 ] + xx [ 469 ] ) * xx [ 20 ] * xx [ 59 ] + xx [ 301 ] *
( xx [ 20 ] * ( xx [ 471 ] - xx [ 455 ] * xx [ 918 ] ) - xx [ 422 ] ) ; xx [
468 ] = - ( xx [ 460 ] * xx [ 301 ] ) ; pm_math_Quaternion_xform_ra ( xx +
944 , xx + 466 , xx + 469 ) ; xx [ 59 ] = xx [ 12 ] * xx [ 367 ] ; xx [ 273 ]
= xx [ 4 ] * xx [ 367 ] ; xx [ 301 ] = xx [ 941 ] * xx [ 59 ] - xx [ 273 ] *
xx [ 953 ] ; xx [ 422 ] = xx [ 949 ] * xx [ 273 ] ; xx [ 466 ] = - ( xx [ 949
] * xx [ 59 ] ) ; xx [ 467 ] = xx [ 301 ] ; xx [ 468 ] = - xx [ 422 ] ;
pm_math_Vector3_cross_ra ( xx + 975 , xx + 466 , xx + 479 ) ; xx [ 451 ] = xx
[ 441 ] - xx [ 338 ] ; xx [ 338 ] = xx [ 445 ] - xx [ 375 ] ; xx [ 466 ] = xx
[ 451 ] - xx [ 959 ] * xx [ 59 ] ; xx [ 467 ] = xx [ 134 ] * xx [ 367 ] - xx
[ 442 ] + xx [ 965 ] * xx [ 59 ] + xx [ 978 ] * xx [ 273 ] + xx [ 93 ] ; xx [
468 ] = xx [ 338 ] - xx [ 959 ] * xx [ 273 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 967 , xx + 466 , xx + 511 ) ; xx [
273 ] = xx [ 448 ] - ( xx [ 410 ] * ( xx [ 480 ] - xx [ 301 ] * xx [ 918 ] )
- xx [ 412 ] * xx [ 513 ] ) ; xx [ 301 ] = xx [ 449 ] - ( ( xx [ 59 ] + xx [
20 ] * ( xx [ 481 ] + xx [ 422 ] * xx [ 918 ] ) ) * xx [ 392 ] + xx [ 412 ] *
xx [ 512 ] ) ; xx [ 820 ] = xx [ 376 ] * xx [ 186 ] - ( xx [ 39 ] * xx [ 141
] - xx [ 64 ] * xx [ 146 ] + xx [ 35 ] - ( ( xx [ 555 ] + xx [ 605 ] + xx [
20 ] * xx [ 428 ] ) * xx [ 79 ] + xx [ 151 ] + ( ( xx [ 50 ] * xx [ 297 ] +
xx [ 416 ] ) * xx [ 20 ] - xx [ 187 ] ) * xx [ 72 ] + xx [ 407 ] + xx [ 20 ]
* xx [ 419 ] ) + xx [ 157 ] * xx [ 13 ] + xx [ 289 ] * xx [ 40 ] + xx [ 107 ]
* xx [ 47 ] + xx [ 37 ] * xx [ 58 ] + xx [ 133 ] * xx [ 63 ] + xx [ 162 ] *
xx [ 60 ] + xx [ 38 ] * xx [ 61 ] ) + xx [ 372 ] * xx [ 66 ] + xx [ 340 ] *
xx [ 69 ] ; xx [ 821 ] = xx [ 462 ] * xx [ 186 ] - ( xx [ 62 ] * xx [ 141 ] -
xx [ 73 ] * xx [ 146 ] + xx [ 92 ] - ( ( xx [ 556 ] + xx [ 606 ] + xx [ 20 ]
* xx [ 429 ] ) * xx [ 79 ] + xx [ 152 ] + ( xx [ 417 ] - xx [ 297 ] * xx [ 52
] ) * xx [ 20 ] * xx [ 72 ] + xx [ 408 ] + xx [ 20 ] * xx [ 420 ] ) + xx [
415 ] * xx [ 13 ] + xx [ 443 ] * xx [ 40 ] + xx [ 446 ] * xx [ 47 ] + xx [
456 ] * xx [ 58 ] + xx [ 423 ] * xx [ 63 ] + xx [ 424 ] * xx [ 60 ] + xx [
427 ] * xx [ 61 ] ) + xx [ 454 ] * xx [ 66 ] + xx [ 364 ] * xx [ 69 ] ; xx [
822 ] = xx [ 174 ] * xx [ 186 ] - ( xx [ 102 ] * xx [ 141 ] - xx [ 112 ] * xx
[ 146 ] + xx [ 75 ] - ( ( xx [ 557 ] + xx [ 607 ] + xx [ 20 ] * xx [ 430 ] )
* xx [ 79 ] + xx [ 153 ] + ( xx [ 78 ] + xx [ 20 ] * ( xx [ 418 ] + xx [ 71 ]
* xx [ 297 ] ) ) * xx [ 72 ] + xx [ 409 ] + xx [ 20 ] * xx [ 421 ] ) + xx [
138 ] * xx [ 13 ] + xx [ 154 ] * xx [ 40 ] + xx [ 155 ] * xx [ 47 ] + xx [
286 ] * xx [ 58 ] + xx [ 150 ] * xx [ 63 ] + xx [ 130 ] * xx [ 60 ] + xx [
131 ] * xx [ 61 ] ) + xx [ 160 ] * xx [ 66 ] + xx [ 164 ] * xx [ 69 ] ; xx [
823 ] = xx [ 663 ] * xx [ 114 ] - ( xx [ 35 ] - ( xx [ 64 ] * xx [ 296 ] + xx
[ 39 ] * xx [ 295 ] ) - ( ( xx [ 261 ] + xx [ 508 ] + xx [ 20 ] * xx [ 431 ]
) * xx [ 79 ] + xx [ 115 ] + ( ( xx [ 254 ] - xx [ 196 ] * xx [ 622 ] ) * xx
[ 20 ] - xx [ 187 ] ) * xx [ 205 ] + xx [ 206 ] + xx [ 20 ] * xx [ 209 ] ) +
xx [ 303 ] * xx [ 13 ] + xx [ 395 ] * xx [ 40 ] + xx [ 453 ] * xx [ 47 ] + xx
[ 302 ] * xx [ 58 ] + xx [ 362 ] * xx [ 63 ] + xx [ 374 ] * xx [ 60 ] + xx [
394 ] * xx [ 61 ] ) + xx [ 659 ] * xx [ 76 ] + xx [ 633 ] * xx [ 77 ] ; xx [
824 ] = xx [ 690 ] * xx [ 114 ] - ( xx [ 92 ] - ( xx [ 73 ] * xx [ 296 ] + xx
[ 62 ] * xx [ 295 ] ) - ( ( xx [ 262 ] + xx [ 509 ] + xx [ 20 ] * xx [ 432 ]
) * xx [ 79 ] + xx [ 116 ] + ( xx [ 255 ] - xx [ 622 ] * xx [ 198 ] ) * xx [
20 ] * xx [ 205 ] + xx [ 207 ] + xx [ 20 ] * xx [ 210 ] ) + xx [ 472 ] * xx [
13 ] + xx [ 498 ] * xx [ 40 ] + xx [ 499 ] * xx [ 47 ] + xx [ 501 ] * xx [ 58
] + xx [ 473 ] * xx [ 63 ] + xx [ 474 ] * xx [ 60 ] + xx [ 475 ] * xx [ 61 ]
) + xx [ 686 ] * xx [ 76 ] + xx [ 656 ] * xx [ 77 ] ; xx [ 825 ] = xx [ 652 ]
* xx [ 114 ] - ( xx [ 75 ] - ( xx [ 112 ] * xx [ 296 ] + xx [ 102 ] * xx [
295 ] ) - ( ( xx [ 263 ] + xx [ 510 ] + xx [ 20 ] * xx [ 433 ] ) * xx [ 79 ]
+ xx [ 117 ] + ( xx [ 20 ] * ( xx [ 256 ] + xx [ 204 ] * xx [ 622 ] ) - xx [
78 ] ) * xx [ 205 ] + xx [ 208 ] + xx [ 20 ] * xx [ 211 ] ) + xx [ 377 ] * xx
[ 13 ] + xx [ 379 ] * xx [ 40 ] + xx [ 391 ] * xx [ 47 ] + xx [ 483 ] * xx [
58 ] + xx [ 378 ] * xx [ 63 ] + xx [ 304 ] * xx [ 60 ] + xx [ 352 ] * xx [ 61
] ) + xx [ 672 ] * xx [ 76 ] + xx [ 651 ] * xx [ 77 ] ; xx [ 826 ] = xx [ 780
] * xx [ 194 ] - ( xx [ 64 ] * xx [ 485 ] - xx [ 39 ] * xx [ 482 ] + xx [ 35
] - ( ( xx [ 463 ] + xx [ 700 ] + xx [ 20 ] * xx [ 596 ] ) * xx [ 79 ] + xx [
251 ] + ( ( xx [ 326 ] - xx [ 264 ] * xx [ 739 ] ) * xx [ 20 ] - xx [ 187 ] )
* xx [ 272 ] + xx [ 314 ] + xx [ 20 ] * xx [ 344 ] ) + xx [ 487 ] * xx [ 13 ]
+ xx [ 507 ] * xx [ 40 ] + xx [ 524 ] * xx [ 47 ] + xx [ 486 ] * xx [ 58 ] +
xx [ 492 ] * xx [ 63 ] + xx [ 503 ] * xx [ 60 ] + xx [ 506 ] * xx [ 61 ] ) +
xx [ 776 ] * xx [ 185 ] + xx [ 762 ] * xx [ 190 ] ; xx [ 827 ] = xx [ 805 ] *
xx [ 194 ] - ( xx [ 73 ] * xx [ 485 ] - xx [ 62 ] * xx [ 482 ] + xx [ 92 ] -
( ( xx [ 464 ] + xx [ 701 ] + xx [ 20 ] * xx [ 597 ] ) * xx [ 79 ] + xx [ 252
] + ( xx [ 327 ] - xx [ 739 ] * xx [ 266 ] ) * xx [ 20 ] * xx [ 272 ] + xx [
315 ] + xx [ 20 ] * xx [ 345 ] ) + xx [ 517 ] * xx [ 13 ] + xx [ 523 ] * xx [
40 ] + xx [ 525 ] * xx [ 47 ] + xx [ 548 ] * xx [ 58 ] + xx [ 519 ] * xx [ 63
] + xx [ 520 ] * xx [ 60 ] + xx [ 521 ] * xx [ 61 ] ) + xx [ 802 ] * xx [ 185
] + xx [ 773 ] * xx [ 190 ] ; xx [ 828 ] = xx [ 769 ] * xx [ 194 ] - ( xx [
112 ] * xx [ 485 ] - xx [ 102 ] * xx [ 482 ] + xx [ 75 ] - ( ( xx [ 465 ] +
xx [ 702 ] + xx [ 20 ] * xx [ 598 ] ) * xx [ 79 ] + xx [ 253 ] + ( xx [ 78 ]
+ xx [ 20 ] * ( xx [ 328 ] - xx [ 271 ] * xx [ 739 ] ) ) * xx [ 272 ] + xx [
316 ] + xx [ 20 ] * xx [ 346 ] ) + xx [ 494 ] * xx [ 13 ] + xx [ 496 ] * xx [
40 ] + xx [ 497 ] * xx [ 47 ] + xx [ 502 ] * xx [ 58 ] + xx [ 495 ] * xx [ 63
] + xx [ 488 ] * xx [ 60 ] + xx [ 489 ] * xx [ 61 ] ) + xx [ 789 ] * xx [ 185
] + xx [ 768 ] * xx [ 190 ] ; xx [ 829 ] = xx [ 889 ] * xx [ 267 ] - ( xx [
64 ] * xx [ 530 ] + xx [ 39 ] * xx [ 529 ] + xx [ 35 ] - ( ( xx [ 608 ] + xx
[ 721 ] + xx [ 20 ] * xx [ 703 ] ) * xx [ 79 ] + xx [ 292 ] + ( ( xx [ 357 ]
* xx [ 840 ] + xx [ 434 ] ) * xx [ 20 ] - xx [ 187 ] ) * xx [ 365 ] + xx [
368 ] + xx [ 20 ] * xx [ 403 ] ) + xx [ 532 ] * xx [ 13 ] + xx [ 554 ] * xx [
40 ] + xx [ 571 ] * xx [ 47 ] + xx [ 531 ] * xx [ 58 ] + xx [ 541 ] * xx [ 63
] + xx [ 550 ] * xx [ 60 ] + xx [ 553 ] * xx [ 61 ] ) + xx [ 885 ] * xx [ 212
] + xx [ 854 ] * xx [ 228 ] ; xx [ 830 ] = xx [ 914 ] * xx [ 267 ] - ( xx [
73 ] * xx [ 530 ] + xx [ 62 ] * xx [ 529 ] + xx [ 92 ] - ( ( xx [ 609 ] + xx
[ 722 ] + xx [ 20 ] * xx [ 704 ] ) * xx [ 79 ] + xx [ 293 ] + ( xx [ 435 ] -
xx [ 840 ] * xx [ 359 ] ) * xx [ 20 ] * xx [ 365 ] + xx [ 369 ] + xx [ 20 ] *
xx [ 404 ] ) + xx [ 564 ] * xx [ 13 ] + xx [ 570 ] * xx [ 40 ] + xx [ 572 ] *
xx [ 47 ] + xx [ 595 ] * xx [ 58 ] + xx [ 566 ] * xx [ 63 ] + xx [ 567 ] * xx
[ 60 ] + xx [ 568 ] * xx [ 61 ] ) + xx [ 911 ] * xx [ 212 ] + xx [ 882 ] * xx
[ 228 ] ; xx [ 831 ] = xx [ 878 ] * xx [ 267 ] - ( xx [ 112 ] * xx [ 530 ] +
xx [ 102 ] * xx [ 529 ] + xx [ 75 ] - ( ( xx [ 610 ] + xx [ 723 ] + xx [ 20 ]
* xx [ 705 ] ) * xx [ 79 ] + xx [ 294 ] + ( xx [ 78 ] + xx [ 20 ] * ( xx [
436 ] + xx [ 361 ] * xx [ 840 ] ) ) * xx [ 365 ] + xx [ 370 ] + xx [ 20 ] *
xx [ 405 ] ) + xx [ 543 ] * xx [ 13 ] + xx [ 549 ] * xx [ 40 ] + xx [ 552 ] *
xx [ 47 ] + xx [ 575 ] * xx [ 58 ] + xx [ 544 ] * xx [ 63 ] + xx [ 536 ] * xx
[ 60 ] + xx [ 537 ] * xx [ 61 ] ) + xx [ 898 ] * xx [ 212 ] + xx [ 877 ] * xx
[ 228 ] ; xx [ 832 ] = xx [ 980 ] * xx [ 367 ] - ( xx [ 39 ] * xx [ 574 ] -
xx [ 64 ] * xx [ 577 ] + xx [ 35 ] - ( ( xx [ 706 ] + xx [ 817 ] + xx [ 20 ]
* xx [ 724 ] ) * xx [ 79 ] + xx [ 400 ] + ( ( xx [ 476 ] - xx [ 54 ] * xx [
906 ] ) * xx [ 20 ] - xx [ 187 ] ) * xx [ 450 ] + xx [ 457 ] + xx [ 20 ] * xx
[ 469 ] ) + xx [ 139 ] * xx [ 13 ] + xx [ 170 ] * xx [ 40 ] + xx [ 192 ] * xx
[ 47 ] + xx [ 31 ] * xx [ 58 ] + xx [ 145 ] * xx [ 63 ] + xx [ 156 ] * xx [
60 ] + xx [ 583 ] * xx [ 61 ] ) + xx [ 961 ] * xx [ 273 ] + xx [ 1 ] * xx [
301 ] ; xx [ 833 ] = xx [ 999 ] * xx [ 367 ] - ( xx [ 62 ] * xx [ 574 ] - xx
[ 73 ] * xx [ 577 ] + xx [ 92 ] - ( ( xx [ 707 ] + xx [ 818 ] + xx [ 20 ] *
xx [ 725 ] ) * xx [ 79 ] + xx [ 401 ] + ( xx [ 477 ] - xx [ 906 ] * xx [ 55 ]
) * xx [ 20 ] * xx [ 450 ] + xx [ 458 ] + xx [ 20 ] * xx [ 470 ] ) + xx [ 290
] * xx [ 13 ] + xx [ 414 ] * xx [ 40 ] + xx [ 284 ] * xx [ 47 ] + xx [ 578 ]
* xx [ 58 ] + xx [ 291 ] * xx [ 63 ] + xx [ 136 ] * xx [ 60 ] + xx [ 168 ] *
xx [ 61 ] ) + xx [ 984 ] * xx [ 273 ] + xx [ 957 ] * xx [ 301 ] ; xx [ 834 ]
= xx [ 84 ] * xx [ 367 ] - ( xx [ 102 ] * xx [ 574 ] - xx [ 112 ] * xx [ 577
] + xx [ 75 ] - ( ( xx [ 708 ] + xx [ 819 ] + xx [ 20 ] * xx [ 726 ] ) * xx [
79 ] + xx [ 402 ] + ( xx [ 20 ] * ( xx [ 478 ] + xx [ 447 ] * xx [ 906 ] ) -
xx [ 78 ] ) * xx [ 450 ] + xx [ 459 ] + xx [ 20 ] * xx [ 471 ] ) + xx [ 590 ]
* xx [ 13 ] + xx [ 148 ] * xx [ 40 ] + xx [ 169 ] * xx [ 47 ] + xx [ 172 ] *
xx [ 58 ] + xx [ 149 ] * xx [ 63 ] + xx [ 137 ] * xx [ 60 ] + xx [ 135 ] * xx
[ 61 ] ) + xx [ 993 ] * xx [ 273 ] + xx [ 81 ] * xx [ 301 ] ; memcpy ( xx +
1285 , xx + 1060 , 225 * sizeof ( double ) ) ; factorAndSolveSymmetric ( xx +
1285 , 15 , xx + 700 , ii + 0 , xx + 820 , xx + 596 , xx + 1510 ) ; xx [ 58 ]
= xx [ 133 ] * xx [ 596 ] + xx [ 423 ] * xx [ 597 ] + xx [ 150 ] * xx [ 598 ]
+ xx [ 362 ] * xx [ 599 ] + xx [ 473 ] * xx [ 600 ] + xx [ 378 ] * xx [ 601 ]
+ xx [ 492 ] * xx [ 602 ] + xx [ 519 ] * xx [ 603 ] + xx [ 495 ] * xx [ 604 ]
+ xx [ 541 ] * xx [ 605 ] + xx [ 566 ] * xx [ 606 ] + xx [ 544 ] * xx [ 607 ]
+ xx [ 145 ] * xx [ 608 ] + xx [ 291 ] * xx [ 609 ] + xx [ 149 ] * xx [ 610 ]
- xx [ 51 ] ; xx [ 59 ] = xx [ 162 ] * xx [ 596 ] + xx [ 424 ] * xx [ 597 ] +
xx [ 130 ] * xx [ 598 ] + xx [ 374 ] * xx [ 599 ] + xx [ 474 ] * xx [ 600 ] +
xx [ 304 ] * xx [ 601 ] + xx [ 503 ] * xx [ 602 ] + xx [ 520 ] * xx [ 603 ] +
xx [ 488 ] * xx [ 604 ] + xx [ 550 ] * xx [ 605 ] + xx [ 567 ] * xx [ 606 ] +
xx [ 536 ] * xx [ 607 ] + xx [ 156 ] * xx [ 608 ] + xx [ 136 ] * xx [ 609 ] +
xx [ 137 ] * xx [ 610 ] - xx [ 67 ] ; xx [ 60 ] = xx [ 38 ] * xx [ 596 ] + xx
[ 427 ] * xx [ 597 ] + xx [ 131 ] * xx [ 598 ] + xx [ 394 ] * xx [ 599 ] + xx
[ 475 ] * xx [ 600 ] + xx [ 352 ] * xx [ 601 ] + xx [ 506 ] * xx [ 602 ] + xx
[ 521 ] * xx [ 603 ] + xx [ 489 ] * xx [ 604 ] + xx [ 553 ] * xx [ 605 ] + xx
[ 568 ] * xx [ 606 ] + xx [ 537 ] * xx [ 607 ] + xx [ 583 ] * xx [ 608 ] + xx
[ 168 ] * xx [ 609 ] + xx [ 135 ] * xx [ 610 ] - xx [ 25 ] ;
solveSymmetricPosDef ( xx + 121 , xx + 58 , 3 , 1 , xx + 38 , xx + 50 ) ; xx
[ 50 ] = xx [ 65 ] + xx [ 48 ] * xx [ 38 ] + xx [ 80 ] * xx [ 39 ] ; xx [ 51
] = xx [ 70 ] - xx [ 86 ] * xx [ 38 ] + xx [ 85 ] * xx [ 39 ] ; xx [ 52 ] =
xx [ 0 ] + xx [ 56 ] * xx [ 40 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx
+ 50 , xx + 54 ) ; xx [ 50 ] = xx [ 49 ] + xx [ 87 ] * xx [ 40 ] ; xx [ 51 ]
= xx [ 24 ] - xx [ 88 ] * xx [ 40 ] ; xx [ 52 ] = xx [ 30 ] - xx [ 163 ] * xx
[ 38 ] + xx [ 90 ] * xx [ 39 ] ; pm_math_Quaternion_xform_ra ( xx + 41 , xx +
50 , xx + 47 ) ; pm_math_Vector3_cross_ra ( xx + 95 , xx + 47 , xx + 50 ) ;
xx [ 0 ] = xx [ 32 ] + xx [ 54 ] + xx [ 50 ] + xx [ 18 ] ; xx [ 13 ] = xx [
33 ] + xx [ 55 ] + xx [ 51 ] + xx [ 36 ] ; xx [ 18 ] = xx [ 49 ] + xx [ 21 ]
; xx [ 21 ] = xx [ 34 ] + xx [ 56 ] + xx [ 52 ] + xx [ 23 ] ; xx [ 23 ] = xx
[ 48 ] + xx [ 46 ] ; xx [ 32 ] = xx [ 289 ] * xx [ 596 ] + xx [ 443 ] * xx [
597 ] + xx [ 154 ] * xx [ 598 ] + xx [ 395 ] * xx [ 599 ] + xx [ 498 ] * xx [
600 ] + xx [ 379 ] * xx [ 601 ] + xx [ 507 ] * xx [ 602 ] + xx [ 523 ] * xx [
603 ] + xx [ 496 ] * xx [ 604 ] + xx [ 554 ] * xx [ 605 ] + xx [ 570 ] * xx [
606 ] + xx [ 549 ] * xx [ 607 ] + xx [ 170 ] * xx [ 608 ] + xx [ 414 ] * xx [
609 ] + xx [ 148 ] * xx [ 610 ] - xx [ 0 ] ; xx [ 33 ] = xx [ 107 ] * xx [
596 ] + xx [ 446 ] * xx [ 597 ] + xx [ 155 ] * xx [ 598 ] + xx [ 453 ] * xx [
599 ] + xx [ 499 ] * xx [ 600 ] + xx [ 391 ] * xx [ 601 ] + xx [ 524 ] * xx [
602 ] + xx [ 525 ] * xx [ 603 ] + xx [ 497 ] * xx [ 604 ] + xx [ 571 ] * xx [
605 ] + xx [ 572 ] * xx [ 606 ] + xx [ 552 ] * xx [ 607 ] + xx [ 192 ] * xx [
608 ] + xx [ 284 ] * xx [ 609 ] + xx [ 169 ] * xx [ 610 ] - ( xx [ 13 ] - xx
[ 18 ] * xx [ 79 ] ) ; xx [ 34 ] = xx [ 37 ] * xx [ 596 ] + xx [ 456 ] * xx [
597 ] + xx [ 286 ] * xx [ 598 ] + xx [ 302 ] * xx [ 599 ] + xx [ 501 ] * xx [
600 ] + xx [ 483 ] * xx [ 601 ] + xx [ 486 ] * xx [ 602 ] + xx [ 548 ] * xx [
603 ] + xx [ 502 ] * xx [ 604 ] + xx [ 531 ] * xx [ 605 ] + xx [ 595 ] * xx [
606 ] + xx [ 575 ] * xx [ 607 ] + xx [ 31 ] * xx [ 608 ] + xx [ 578 ] * xx [
609 ] + xx [ 172 ] * xx [ 610 ] - ( xx [ 21 ] + xx [ 23 ] * xx [ 79 ] ) ;
solveSymmetricPosDef ( xx + 274 , xx + 32 , 3 , 1 , xx + 35 , xx + 48 ) ; xx
[ 30 ] = xx [ 0 ] + xx [ 166 ] * xx [ 35 ] + xx [ 224 ] * xx [ 36 ] + xx [
237 ] * xx [ 37 ] ; xx [ 31 ] = xx [ 13 ] + xx [ 35 ] * xx [ 94 ] + xx [ 241
] * xx [ 36 ] + xx [ 238 ] * xx [ 37 ] ; xx [ 32 ] = xx [ 21 ] + xx [ 35 ] *
xx [ 101 ] + xx [ 104 ] * xx [ 36 ] + xx [ 221 ] * xx [ 37 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 30 , xx + 48 ) ; xx [ 30 ] = xx [
47 ] + xx [ 29 ] + xx [ 35 ] * xx [ 89 ] + xx [ 165 ] * xx [ 36 ] + xx [ 180
] * xx [ 37 ] ; xx [ 31 ] = xx [ 23 ] + xx [ 35 ] * xx [ 245 ] + xx [ 181 ] *
xx [ 36 ] + xx [ 250 ] * xx [ 37 ] ; xx [ 32 ] = xx [ 18 ] + xx [ 35 ] * xx [
223 ] + xx [ 260 ] * xx [ 36 ] + xx [ 242 ] * xx [ 37 ] ;
pm_math_Quaternion_xform_ra ( xx + 8 , xx + 30 , xx + 23 ) ;
pm_math_Vector3_cross_ra ( xx + 109 , xx + 23 , xx + 29 ) ; xx [ 0 ] = (
input [ 0 ] - ( ( xx [ 50 ] + xx [ 31 ] - xx [ 22 ] ) * xx [ 12 ] - ( xx [ 48
] + xx [ 29 ] - xx [ 57 ] ) * xx [ 4 ] + ( xx [ 24 ] - xx [ 68 ] ) * xx [ 134
] ) + xx [ 157 ] * xx [ 596 ] + xx [ 415 ] * xx [ 597 ] + xx [ 138 ] * xx [
598 ] + xx [ 303 ] * xx [ 599 ] + xx [ 472 ] * xx [ 600 ] + xx [ 377 ] * xx [
601 ] + xx [ 487 ] * xx [ 602 ] + xx [ 517 ] * xx [ 603 ] + xx [ 494 ] * xx [
604 ] + xx [ 532 ] * xx [ 605 ] + xx [ 564 ] * xx [ 606 ] + xx [ 543 ] * xx [
607 ] + xx [ 139 ] * xx [ 608 ] + xx [ 290 ] * xx [ 609 ] + xx [ 590 ] * xx [
610 ] ) / xx [ 231 ] - xx [ 6 ] ; xx [ 21 ] = state [ 2 ] ; xx [ 22 ] = state
[ 3 ] ; xx [ 23 ] = state [ 4 ] ; xx [ 24 ] = state [ 5 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 21 , xx + 311 , xx + 29 ) ; xx [ 6 ] =
xx [ 12 ] * xx [ 0 ] ; xx [ 13 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 18 ] = xx [ 4 ]
* xx [ 0 ] ; xx [ 21 ] = xx [ 3 ] * xx [ 6 ] - xx [ 18 ] * xx [ 7 ] ; xx [ 3
] = xx [ 5 ] * xx [ 18 ] ; xx [ 22 ] = - xx [ 13 ] ; xx [ 23 ] = xx [ 21 ] ;
xx [ 24 ] = - xx [ 3 ] ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 22 , xx +
46 ) ; xx [ 5 ] = ( xx [ 13 ] * xx [ 2 ] + xx [ 46 ] ) * xx [ 20 ] - xx [ 18
] ; xx [ 7 ] = xx [ 20 ] * ( xx [ 47 ] - xx [ 21 ] * xx [ 2 ] ) ; xx [ 13 ] =
xx [ 6 ] + xx [ 20 ] * ( xx [ 48 ] + xx [ 3 ] * xx [ 2 ] ) ; xx [ 15 ] = xx [
5 ] ; xx [ 16 ] = xx [ 7 ] ; xx [ 17 ] = xx [ 13 ] ; xx [ 21 ] = xx [ 74 ] -
xx [ 105 ] * xx [ 6 ] ; xx [ 22 ] = xx [ 134 ] * xx [ 0 ] - xx [ 53 ] + xx [
103 ] * xx [ 6 ] + xx [ 108 ] * xx [ 18 ] + xx [ 93 ] ; xx [ 23 ] = xx [ 45 ]
- xx [ 105 ] * xx [ 18 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx +
21 , xx + 45 ) ; xx [ 2 ] = xx [ 35 ] - ( pm_math_Vector3_dot_ra ( xx + 232 ,
xx + 15 ) + pm_math_Vector3_dot_ra ( xx + 305 , xx + 45 ) ) ; xx [ 3 ] = xx [
36 ] - ( pm_math_Vector3_dot_ra ( xx + 308 , xx + 15 ) +
pm_math_Vector3_dot_ra ( xx + 317 , xx + 45 ) ) ; xx [ 6 ] = xx [ 37 ] - (
pm_math_Vector3_dot_ra ( xx + 341 , xx + 15 ) + pm_math_Vector3_dot_ra ( xx +
323 , xx + 45 ) ) ; xx [ 8 ] = state [ 9 ] ; xx [ 9 ] = state [ 10 ] ; xx [
10 ] = state [ 11 ] ; xx [ 11 ] = state [ 12 ] ; xx [ 15 ] = state [ 13 ] ;
xx [ 16 ] = state [ 14 ] ; xx [ 17 ] = state [ 15 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 15 , xx + 21 ) ; xx [ 8 ] =
xx [ 5 ] + xx [ 2 ] + xx [ 329 ] ; xx [ 9 ] = xx [ 7 ] + xx [ 3 ] + xx [ 330
] ; xx [ 10 ] = xx [ 13 ] + xx [ 6 ] + xx [ 331 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 8 , xx + 15 ) ;
pm_math_Vector3_cross_ra ( xx + 8 , xx + 95 , xx + 33 ) ; xx [ 7 ] = xx [ 45
] + xx [ 26 ] + xx [ 33 ] ; xx [ 8 ] = xx [ 46 ] + xx [ 79 ] * xx [ 6 ] + xx
[ 14 ] + xx [ 34 ] ; xx [ 9 ] = xx [ 47 ] - xx [ 79 ] * xx [ 3 ] + xx [ 19 ]
+ xx [ 35 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 7 , xx + 33
) ; xx [ 7 ] = xx [ 285 ] ; xx [ 8 ] = - ( xx [ 298 ] + xx [ 885 ] * xx [ 605
] + xx [ 911 ] * xx [ 606 ] + xx [ 898 ] * xx [ 607 ] ) ; xx [ 9 ] = - ( xx [
288 ] + xx [ 854 ] * xx [ 605 ] + xx [ 882 ] * xx [ 606 ] + xx [ 877 ] * xx [
607 ] ) ; solveSymmetricPosDef ( xx + 380 , xx + 7 , 3 , 1 , xx + 41 , xx +
44 ) ; xx [ 7 ] = xx [ 283 ] + xx [ 27 ] * xx [ 41 ] ; xx [ 8 ] = xx [ 287 ]
+ xx [ 28 ] * xx [ 42 ] ; xx [ 9 ] = xx [ 300 ] + xx [ 28 ] * xx [ 43 ] ;
pm_math_Quaternion_xform_ra ( xx + 862 , xx + 7 , xx + 44 ) ; xx [ 7 ] = xx [
322 ] ; xx [ 8 ] = xx [ 320 ] + xx [ 358 ] * xx [ 43 ] ; xx [ 9 ] = xx [ 268
] - xx [ 358 ] * xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 862 , xx + 7
, xx + 47 ) ; pm_math_Vector3_cross_ra ( xx + 901 , xx + 47 , xx + 7 ) ; xx [
5 ] = ( input [ 1 ] - ( ( xx [ 44 ] + xx [ 7 ] + xx [ 332 ] ) * xx [ 4 ] + xx
[ 12 ] * ( xx [ 46 ] + xx [ 9 ] - xx [ 347 ] ) + ( xx [ 48 ] + xx [ 351 ] ) *
xx [ 134 ] ) - ( xx [ 889 ] * xx [ 605 ] + xx [ 914 ] * xx [ 606 ] + xx [ 878
] * xx [ 607 ] ) ) / xx [ 925 ] - xx [ 244 ] ; xx [ 7 ] = state [ 18 ] ; xx [
8 ] = state [ 19 ] ; xx [ 9 ] = state [ 20 ] ; xx [ 10 ] = state [ 21 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 7 , xx + 353 , xx + 44 ) ; xx [ 7 ] =
xx [ 4 ] * xx [ 5 ] ; xx [ 8 ] = xx [ 12 ] * xx [ 5 ] ; xx [ 9 ] = xx [ 844 ]
* xx [ 8 ] ; xx [ 10 ] = xx [ 7 ] * xx [ 845 ] - xx [ 838 ] * xx [ 8 ] ; xx [
11 ] = xx [ 844 ] * xx [ 7 ] ; xx [ 48 ] = xx [ 9 ] ; xx [ 49 ] = xx [ 10 ] ;
xx [ 50 ] = - xx [ 11 ] ; pm_math_Vector3_cross_ra ( xx + 870 , xx + 48 , xx
+ 51 ) ; xx [ 48 ] = xx [ 360 ] - xx [ 881 ] * xx [ 8 ] ; xx [ 49 ] = xx [
134 ] * xx [ 5 ] - xx [ 339 ] + xx [ 884 ] * xx [ 8 ] - xx [ 886 ] * xx [ 7 ]
+ xx [ 93 ] ; xx [ 50 ] = xx [ 269 ] + xx [ 881 ] * xx [ 7 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 862 , xx + 48 , xx + 54 ) ; xx [ 48
] = xx [ 390 ] ; xx [ 49 ] = - ( xx [ 406 ] + xx [ 961 ] * xx [ 608 ] + xx [
984 ] * xx [ 609 ] + xx [ 993 ] * xx [ 610 ] ) ; xx [ 50 ] = - ( xx [ 396 ] +
xx [ 1 ] * xx [ 608 ] + xx [ 957 ] * xx [ 609 ] + xx [ 81 ] * xx [ 610 ] ) ;
solveSymmetricPosDef ( xx + 380 , xx + 48 , 3 , 1 , xx + 57 , xx + 60 ) ; xx
[ 48 ] = xx [ 389 ] + xx [ 27 ] * xx [ 57 ] ; xx [ 49 ] = xx [ 393 ] + xx [
28 ] * xx [ 58 ] ; xx [ 50 ] = xx [ 413 ] + xx [ 28 ] * xx [ 59 ] ;
pm_math_Quaternion_xform_ra ( xx + 967 , xx + 48 , xx + 60 ) ; xx [ 48 ] = xx
[ 440 ] ; xx [ 49 ] = xx [ 425 ] + xx [ 358 ] * xx [ 59 ] ; xx [ 50 ] = xx [
366 ] - xx [ 358 ] * xx [ 58 ] ; pm_math_Quaternion_xform_ra ( xx + 967 , xx
+ 48 , xx + 63 ) ; pm_math_Vector3_cross_ra ( xx + 990 , xx + 63 , xx + 48 )
; xx [ 1 ] = ( input [ 2 ] - ( xx [ 12 ] * ( xx [ 62 ] + xx [ 50 ] - xx [ 248
] ) - ( xx [ 60 ] + xx [ 48 ] + xx [ 411 ] ) * xx [ 4 ] + ( xx [ 64 ] - xx [
444 ] ) * xx [ 134 ] ) - ( xx [ 980 ] * xx [ 608 ] + xx [ 999 ] * xx [ 609 ]
+ xx [ 84 ] * xx [ 610 ] ) ) / xx [ 229 ] - xx [ 356 ] ; xx [ 60 ] = state [
27 ] ; xx [ 61 ] = state [ 28 ] ; xx [ 62 ] = state [ 29 ] ; xx [ 63 ] =
state [ 30 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 60 , xx + 437 , xx + 64
) ; xx [ 13 ] = xx [ 12 ] * xx [ 1 ] ; xx [ 14 ] = xx [ 949 ] * xx [ 13 ] ;
xx [ 18 ] = xx [ 4 ] * xx [ 1 ] ; xx [ 19 ] = xx [ 941 ] * xx [ 13 ] - xx [
18 ] * xx [ 953 ] ; xx [ 25 ] = xx [ 949 ] * xx [ 18 ] ; xx [ 48 ] = - xx [
14 ] ; xx [ 49 ] = xx [ 19 ] ; xx [ 50 ] = - xx [ 25 ] ;
pm_math_Vector3_cross_ra ( xx + 975 , xx + 48 , xx + 60 ) ; xx [ 48 ] = xx [
451 ] - xx [ 959 ] * xx [ 13 ] ; xx [ 49 ] = xx [ 134 ] * xx [ 1 ] - xx [ 442
] + xx [ 965 ] * xx [ 13 ] + xx [ 978 ] * xx [ 18 ] + xx [ 93 ] ; xx [ 50 ] =
xx [ 338 ] - xx [ 959 ] * xx [ 18 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 967 , xx + 48 , xx + 68 ) ; xx [ 48 ] = xx [ 147 ] ; xx [ 49 ] = - ( xx [
167 ] + xx [ 372 ] * xx [ 596 ] + xx [ 454 ] * xx [ 597 ] + xx [ 160 ] * xx [
598 ] ) ; xx [ 50 ] = - ( xx [ 159 ] + xx [ 340 ] * xx [ 596 ] + xx [ 364 ] *
xx [ 597 ] + xx [ 164 ] * xx [ 598 ] ) ; solveSymmetricPosDef ( xx + 380 , xx
+ 48 , 3 , 1 , xx + 71 , xx + 74 ) ; xx [ 48 ] = xx [ 144 ] + xx [ 27 ] * xx
[ 71 ] ; xx [ 49 ] = xx [ 158 ] + xx [ 28 ] * xx [ 72 ] ; xx [ 50 ] = xx [
171 ] + xx [ 28 ] * xx [ 73 ] ; pm_math_Quaternion_xform_ra ( xx + 334 , xx +
48 , xx + 74 ) ; xx [ 48 ] = xx [ 182 ] ; xx [ 49 ] = xx [ 178 ] + xx [ 358 ]
* xx [ 73 ] ; xx [ 50 ] = xx [ 132 ] - xx [ 358 ] * xx [ 72 ] ;
pm_math_Quaternion_xform_ra ( xx + 334 , xx + 48 , xx + 77 ) ;
pm_math_Vector3_cross_ra ( xx + 397 , xx + 77 , xx + 48 ) ; xx [ 26 ] = (
input [ 3 ] - ( ( xx [ 74 ] + xx [ 48 ] + xx [ 183 ] ) * xx [ 4 ] + xx [ 12 ]
* ( xx [ 76 ] + xx [ 50 ] - xx [ 200 ] ) + ( xx [ 78 ] + xx [ 203 ] ) * xx [
134 ] ) - ( xx [ 376 ] * xx [ 596 ] + xx [ 462 ] * xx [ 597 ] + xx [ 174 ] *
xx [ 598 ] ) ) / xx [ 426 ] - xx [ 106 ] ; xx [ 74 ] = state [ 36 ] ; xx [ 75
] = state [ 37 ] ; xx [ 76 ] = state [ 38 ] ; xx [ 77 ] = state [ 39 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 74 , xx + 175 , xx + 78 ) ; xx [ 36 ]
= xx [ 4 ] * xx [ 26 ] ; xx [ 37 ] = xx [ 12 ] * xx [ 26 ] ; xx [ 48 ] = xx [
321 ] * xx [ 37 ] ; xx [ 49 ] = xx [ 36 ] * xx [ 333 ] - xx [ 299 ] * xx [ 37
] ; xx [ 50 ] = xx [ 321 ] * xx [ 36 ] ; xx [ 74 ] = xx [ 48 ] ; xx [ 75 ] =
xx [ 49 ] ; xx [ 76 ] = - xx [ 50 ] ; pm_math_Vector3_cross_ra ( xx + 348 ,
xx + 74 , xx + 84 ) ; xx [ 74 ] = xx [ 82 ] - xx [ 363 ] * xx [ 37 ] ; xx [
75 ] = xx [ 134 ] * xx [ 26 ] - xx [ 215 ] + xx [ 371 ] * xx [ 37 ] - xx [
373 ] * xx [ 36 ] + xx [ 93 ] ; xx [ 76 ] = xx [ 91 ] + xx [ 363 ] * xx [ 36
] ; pm_math_Quaternion_inverseXform_ra ( xx + 334 , xx + 74 , xx + 87 ) ; xx
[ 74 ] = xx [ 142 ] ; xx [ 75 ] = - ( xx [ 173 ] + xx [ 659 ] * xx [ 599 ] +
xx [ 686 ] * xx [ 600 ] + xx [ 672 ] * xx [ 601 ] ) ; xx [ 76 ] = - ( xx [
161 ] + xx [ 633 ] * xx [ 599 ] + xx [ 656 ] * xx [ 600 ] + xx [ 651 ] * xx [
601 ] ) ; solveSymmetricPosDef ( xx + 380 , xx + 74 , 3 , 1 , xx + 90 , xx +
94 ) ; xx [ 74 ] = xx [ 140 ] + xx [ 27 ] * xx [ 90 ] ; xx [ 75 ] = xx [ 143
] + xx [ 28 ] * xx [ 91 ] ; xx [ 76 ] = xx [ 179 ] + xx [ 28 ] * xx [ 92 ] ;
pm_math_Quaternion_xform_ra ( xx + 635 , xx + 74 , xx + 94 ) ; xx [ 74 ] = xx
[ 189 ] ; xx [ 75 ] = xx [ 188 ] + xx [ 358 ] * xx [ 92 ] ; xx [ 76 ] = xx [
100 ] - xx [ 358 ] * xx [ 91 ] ; pm_math_Quaternion_xform_ra ( xx + 635 , xx
+ 74 , xx + 100 ) ; pm_math_Vector3_cross_ra ( xx + 675 , xx + 100 , xx + 74
) ; xx [ 54 ] = ( input [ 4 ] - ( xx [ 12 ] * ( xx [ 96 ] + xx [ 76 ] - xx [
98 ] ) - ( xx [ 94 ] + xx [ 74 ] + xx [ 197 ] ) * xx [ 4 ] + ( xx [ 101 ] -
xx [ 199 ] ) * xx [ 134 ] ) - ( xx [ 663 ] * xx [ 599 ] + xx [ 690 ] * xx [
600 ] + xx [ 652 ] * xx [ 601 ] ) ) / xx [ 699 ] - xx [ 113 ] ; xx [ 74 ] =
state [ 45 ] ; xx [ 75 ] = state [ 46 ] ; xx [ 76 ] = state [ 47 ] ; xx [ 77
] = state [ 48 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 74 , xx + 118 , xx
+ 94 ) ; xx [ 63 ] = xx [ 12 ] * xx [ 54 ] ; xx [ 68 ] = xx [ 632 ] * xx [ 63
] ; xx [ 74 ] = xx [ 4 ] * xx [ 54 ] ; xx [ 75 ] = xx [ 624 ] * xx [ 63 ] -
xx [ 74 ] * xx [ 634 ] ; xx [ 76 ] = xx [ 632 ] * xx [ 74 ] ; xx [ 100 ] = -
xx [ 68 ] ; xx [ 101 ] = xx [ 75 ] ; xx [ 102 ] = - xx [ 76 ] ;
pm_math_Vector3_cross_ra ( xx + 643 , xx + 100 , xx + 103 ) ; xx [ 100 ] = xx
[ 202 ] - xx [ 655 ] * xx [ 63 ] ; xx [ 101 ] = xx [ 134 ] * xx [ 54 ] - xx [
193 ] + xx [ 658 ] * xx [ 63 ] + xx [ 660 ] * xx [ 74 ] + xx [ 93 ] ; xx [
102 ] = xx [ 99 ] - xx [ 655 ] * xx [ 74 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 635 , xx + 100 , xx + 106 ) ; xx [
98 ] = xx [ 217 ] ; xx [ 99 ] = - ( xx [ 225 ] + xx [ 776 ] * xx [ 602 ] + xx
[ 802 ] * xx [ 603 ] + xx [ 789 ] * xx [ 604 ] ) ; xx [ 100 ] = - ( xx [ 222
] + xx [ 762 ] * xx [ 602 ] + xx [ 773 ] * xx [ 603 ] + xx [ 768 ] * xx [ 604
] ) ; solveSymmetricPosDef ( xx + 380 , xx + 98 , 3 , 1 , xx + 109 , xx + 112
) ; xx [ 98 ] = xx [ 213 ] + xx [ 27 ] * xx [ 109 ] ; xx [ 99 ] = xx [ 219 ]
+ xx [ 28 ] * xx [ 110 ] ; xx [ 100 ] = xx [ 227 ] + xx [ 28 ] * xx [ 111 ] ;
pm_math_Quaternion_xform_ra ( xx + 750 , xx + 98 , xx + 112 ) ; xx [ 98 ] =
xx [ 239 ] ; xx [ 99 ] = xx [ 230 ] + xx [ 358 ] * xx [ 111 ] ; xx [ 100 ] =
xx [ 195 ] - xx [ 358 ] * xx [ 110 ] ; pm_math_Quaternion_xform_ra ( xx + 750
, xx + 98 , xx + 115 ) ; pm_math_Vector3_cross_ra ( xx + 792 , xx + 115 , xx
+ 98 ) ; xx [ 27 ] = ( input [ 5 ] - ( ( xx [ 112 ] + xx [ 98 ] + xx [ 240 ]
) * xx [ 4 ] + xx [ 12 ] * ( xx [ 114 ] + xx [ 100 ] - xx [ 249 ] ) + ( xx [
116 ] + xx [ 265 ] ) * xx [ 134 ] ) - ( xx [ 780 ] * xx [ 602 ] + xx [ 805 ]
* xx [ 603 ] + xx [ 769 ] * xx [ 604 ] ) ) / xx [ 816 ] - xx [ 191 ] ; xx [
98 ] = state [ 54 ] ; xx [ 99 ] = state [ 55 ] ; xx [ 100 ] = state [ 56 ] ;
xx [ 101 ] = state [ 57 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 98 , xx +
257 , xx + 112 ) ; xx [ 28 ] = xx [ 4 ] * xx [ 27 ] ; xx [ 4 ] = xx [ 12 ] *
xx [ 27 ] ; xx [ 12 ] = xx [ 742 ] * xx [ 4 ] ; xx [ 77 ] = xx [ 28 ] * xx [
743 ] - xx [ 735 ] * xx [ 4 ] ; xx [ 82 ] = xx [ 742 ] * xx [ 28 ] ; xx [ 98
] = xx [ 12 ] ; xx [ 99 ] = xx [ 77 ] ; xx [ 100 ] = - xx [ 82 ] ;
pm_math_Vector3_cross_ra ( xx + 758 , xx + 98 , xx + 116 ) ; xx [ 98 ] = xx [
270 ] - xx [ 772 ] * xx [ 4 ] ; xx [ 99 ] = xx [ 134 ] * xx [ 27 ] - xx [ 247
] + xx [ 775 ] * xx [ 4 ] - xx [ 777 ] * xx [ 28 ] + xx [ 93 ] ; xx [ 100 ] =
xx [ 201 ] + xx [ 772 ] * xx [ 28 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 750 , xx + 98 , xx + 119 ) ; deriv [ 0 ] = state [ 1 ] ; deriv [ 1 ] = xx [
0 ] ; deriv [ 2 ] = xx [ 29 ] ; deriv [ 3 ] = xx [ 30 ] ; deriv [ 4 ] = xx [
31 ] ; deriv [ 5 ] = xx [ 32 ] ; deriv [ 6 ] = xx [ 2 ] ; deriv [ 7 ] = xx [
3 ] ; deriv [ 8 ] = xx [ 6 ] ; deriv [ 9 ] = xx [ 21 ] ; deriv [ 10 ] = xx [
22 ] ; deriv [ 11 ] = xx [ 23 ] ; deriv [ 12 ] = xx [ 24 ] ; deriv [ 13 ] =
xx [ 38 ] - ( xx [ 184 ] * xx [ 15 ] + xx [ 214 ] * xx [ 16 ] - xx [ 216 ] *
xx [ 35 ] ) ; deriv [ 14 ] = xx [ 39 ] - ( xx [ 218 ] * xx [ 15 ] + xx [ 220
] * xx [ 16 ] + xx [ 226 ] * xx [ 35 ] ) ; deriv [ 15 ] = xx [ 40 ] - ( xx [
235 ] * xx [ 17 ] + xx [ 236 ] * xx [ 33 ] - xx [ 243 ] * xx [ 34 ] ) ; deriv
[ 16 ] = state [ 17 ] ; deriv [ 17 ] = xx [ 5 ] ; deriv [ 18 ] = xx [ 44 ] ;
deriv [ 19 ] = xx [ 45 ] ; deriv [ 20 ] = xx [ 46 ] ; deriv [ 21 ] = xx [ 47
] ; deriv [ 22 ] = xx [ 41 ] - ( xx [ 7 ] + ( xx [ 51 ] - xx [ 9 ] * xx [ 837
] ) * xx [ 20 ] ) ; deriv [ 23 ] = xx [ 42 ] - ( xx [ 410 ] * ( xx [ 52 ] -
xx [ 10 ] * xx [ 837 ] ) - xx [ 412 ] * xx [ 56 ] ) ; deriv [ 24 ] = xx [ 43
] - ( ( xx [ 8 ] + xx [ 20 ] * ( xx [ 53 ] + xx [ 11 ] * xx [ 837 ] ) ) * xx
[ 392 ] + xx [ 412 ] * xx [ 55 ] ) ; deriv [ 25 ] = state [ 26 ] ; deriv [ 26
] = xx [ 1 ] ; deriv [ 27 ] = xx [ 64 ] ; deriv [ 28 ] = xx [ 65 ] ; deriv [
29 ] = xx [ 66 ] ; deriv [ 30 ] = xx [ 67 ] ; deriv [ 31 ] = xx [ 57 ] - ( (
xx [ 14 ] * xx [ 918 ] + xx [ 60 ] ) * xx [ 20 ] - xx [ 18 ] ) ; deriv [ 32 ]
= xx [ 58 ] - ( xx [ 410 ] * ( xx [ 61 ] - xx [ 19 ] * xx [ 918 ] ) - xx [
412 ] * xx [ 70 ] ) ; deriv [ 33 ] = xx [ 59 ] - ( ( xx [ 13 ] + xx [ 20 ] *
( xx [ 62 ] + xx [ 25 ] * xx [ 918 ] ) ) * xx [ 392 ] + xx [ 412 ] * xx [ 69
] ) ; deriv [ 34 ] = state [ 35 ] ; deriv [ 35 ] = xx [ 26 ] ; deriv [ 36 ] =
xx [ 78 ] ; deriv [ 37 ] = xx [ 79 ] ; deriv [ 38 ] = xx [ 80 ] ; deriv [ 39
] = xx [ 81 ] ; deriv [ 40 ] = xx [ 71 ] - ( xx [ 36 ] + ( xx [ 84 ] - xx [
48 ] * xx [ 246 ] ) * xx [ 20 ] ) ; deriv [ 41 ] = xx [ 72 ] - ( xx [ 410 ] *
( xx [ 85 ] - xx [ 49 ] * xx [ 246 ] ) - xx [ 412 ] * xx [ 89 ] ) ; deriv [
42 ] = xx [ 73 ] - ( ( xx [ 37 ] + xx [ 20 ] * ( xx [ 86 ] + xx [ 50 ] * xx [
246 ] ) ) * xx [ 392 ] + xx [ 412 ] * xx [ 88 ] ) ; deriv [ 43 ] = state [ 44
] ; deriv [ 44 ] = xx [ 54 ] ; deriv [ 45 ] = xx [ 94 ] ; deriv [ 46 ] = xx [
95 ] ; deriv [ 47 ] = xx [ 96 ] ; deriv [ 48 ] = xx [ 97 ] ; deriv [ 49 ] =
xx [ 90 ] - ( ( xx [ 68 ] * xx [ 620 ] + xx [ 103 ] ) * xx [ 20 ] - xx [ 74 ]
) ; deriv [ 50 ] = xx [ 91 ] - ( xx [ 410 ] * ( xx [ 104 ] - xx [ 75 ] * xx [
620 ] ) - xx [ 412 ] * xx [ 108 ] ) ; deriv [ 51 ] = xx [ 92 ] - ( ( xx [ 63
] + xx [ 20 ] * ( xx [ 105 ] + xx [ 76 ] * xx [ 620 ] ) ) * xx [ 392 ] + xx [
412 ] * xx [ 107 ] ) ; deriv [ 52 ] = state [ 53 ] ; deriv [ 53 ] = xx [ 27 ]
; deriv [ 54 ] = xx [ 112 ] ; deriv [ 55 ] = xx [ 113 ] ; deriv [ 56 ] = xx [
114 ] ; deriv [ 57 ] = xx [ 115 ] ; deriv [ 58 ] = xx [ 109 ] - ( xx [ 28 ] +
( xx [ 116 ] - xx [ 12 ] * xx [ 733 ] ) * xx [ 20 ] ) ; deriv [ 59 ] = xx [
110 ] - ( xx [ 410 ] * ( xx [ 117 ] - xx [ 77 ] * xx [ 733 ] ) - xx [ 412 ] *
xx [ 121 ] ) ; deriv [ 60 ] = xx [ 111 ] - ( ( xx [ 4 ] + xx [ 20 ] * ( xx [
118 ] + xx [ 82 ] * xx [ 733 ] ) ) * xx [ 392 ] + xx [ 412 ] * xx [ 120 ] ) ;
errorResult [ 0 ] = xx [ 83 ] + xx [ 83 ] ; return NULL ; } PmfMessageId
hp_v4_a1692be3_1_numJacPerturbLoBounds ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * bounds , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ;
( void ) state ; ( void ) modeVector ; ( void ) input ; ( void ) inputDot ; (
void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] =
xx [ 0 ] ; bounds [ 3 ] = xx [ 0 ] ; bounds [ 4 ] = xx [ 0 ] ; bounds [ 5 ] =
xx [ 0 ] ; bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] =
xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ; bounds [ 10 ] = xx [ 0 ] ; bounds [ 11 ]
= xx [ 0 ] ; bounds [ 12 ] = xx [ 0 ] ; bounds [ 13 ] = xx [ 0 ] ; bounds [
14 ] = xx [ 0 ] ; bounds [ 15 ] = xx [ 0 ] ; bounds [ 16 ] = xx [ 0 ] ;
bounds [ 17 ] = xx [ 0 ] ; bounds [ 18 ] = xx [ 0 ] ; bounds [ 19 ] = xx [ 0
] ; bounds [ 20 ] = xx [ 0 ] ; bounds [ 21 ] = xx [ 0 ] ; bounds [ 22 ] = xx
[ 0 ] ; bounds [ 23 ] = xx [ 0 ] ; bounds [ 24 ] = xx [ 0 ] ; bounds [ 25 ] =
xx [ 0 ] ; bounds [ 26 ] = xx [ 0 ] ; bounds [ 27 ] = xx [ 0 ] ; bounds [ 28
] = xx [ 0 ] ; bounds [ 29 ] = xx [ 0 ] ; bounds [ 30 ] = xx [ 0 ] ; bounds [
31 ] = xx [ 0 ] ; bounds [ 32 ] = xx [ 0 ] ; bounds [ 33 ] = xx [ 0 ] ;
bounds [ 34 ] = xx [ 0 ] ; bounds [ 35 ] = xx [ 0 ] ; bounds [ 36 ] = xx [ 0
] ; bounds [ 37 ] = xx [ 0 ] ; bounds [ 38 ] = xx [ 0 ] ; bounds [ 39 ] = xx
[ 0 ] ; bounds [ 40 ] = xx [ 0 ] ; bounds [ 41 ] = xx [ 0 ] ; bounds [ 42 ] =
xx [ 0 ] ; bounds [ 43 ] = xx [ 0 ] ; bounds [ 44 ] = xx [ 0 ] ; bounds [ 45
] = xx [ 0 ] ; bounds [ 46 ] = xx [ 0 ] ; bounds [ 47 ] = xx [ 0 ] ; bounds [
48 ] = xx [ 0 ] ; bounds [ 49 ] = xx [ 0 ] ; bounds [ 50 ] = xx [ 0 ] ;
bounds [ 51 ] = xx [ 0 ] ; bounds [ 52 ] = xx [ 0 ] ; bounds [ 53 ] = xx [ 0
] ; bounds [ 54 ] = xx [ 0 ] ; bounds [ 55 ] = xx [ 0 ] ; bounds [ 56 ] = xx
[ 0 ] ; bounds [ 57 ] = xx [ 0 ] ; bounds [ 58 ] = xx [ 0 ] ; bounds [ 59 ] =
xx [ 0 ] ; bounds [ 60 ] = xx [ 0 ] ; errorResult [ 0 ] = 0.0 ; return NULL ;
} PmfMessageId hp_v4_a1692be3_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 3 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = + pmf_get_inf ( ) ; xx [ 2 ] = 0.1 ;
bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [ 1 ] ; bounds [ 2 ] = xx [ 2 ] ;
bounds [ 3 ] = xx [ 2 ] ; bounds [ 4 ] = xx [ 2 ] ; bounds [ 5 ] = xx [ 2 ] ;
bounds [ 6 ] = xx [ 1 ] ; bounds [ 7 ] = xx [ 1 ] ; bounds [ 8 ] = xx [ 1 ] ;
bounds [ 9 ] = xx [ 2 ] ; bounds [ 10 ] = xx [ 2 ] ; bounds [ 11 ] = xx [ 2 ]
; bounds [ 12 ] = xx [ 2 ] ; bounds [ 13 ] = xx [ 1 ] ; bounds [ 14 ] = xx [
1 ] ; bounds [ 15 ] = xx [ 1 ] ; bounds [ 16 ] = xx [ 0 ] ; bounds [ 17 ] =
xx [ 1 ] ; bounds [ 18 ] = xx [ 2 ] ; bounds [ 19 ] = xx [ 2 ] ; bounds [ 20
] = xx [ 2 ] ; bounds [ 21 ] = xx [ 2 ] ; bounds [ 22 ] = xx [ 1 ] ; bounds [
23 ] = xx [ 1 ] ; bounds [ 24 ] = xx [ 1 ] ; bounds [ 25 ] = xx [ 0 ] ;
bounds [ 26 ] = xx [ 1 ] ; bounds [ 27 ] = xx [ 2 ] ; bounds [ 28 ] = xx [ 2
] ; bounds [ 29 ] = xx [ 2 ] ; bounds [ 30 ] = xx [ 2 ] ; bounds [ 31 ] = xx
[ 1 ] ; bounds [ 32 ] = xx [ 1 ] ; bounds [ 33 ] = xx [ 1 ] ; bounds [ 34 ] =
xx [ 0 ] ; bounds [ 35 ] = xx [ 1 ] ; bounds [ 36 ] = xx [ 2 ] ; bounds [ 37
] = xx [ 2 ] ; bounds [ 38 ] = xx [ 2 ] ; bounds [ 39 ] = xx [ 2 ] ; bounds [
40 ] = xx [ 1 ] ; bounds [ 41 ] = xx [ 1 ] ; bounds [ 42 ] = xx [ 1 ] ;
bounds [ 43 ] = xx [ 0 ] ; bounds [ 44 ] = xx [ 1 ] ; bounds [ 45 ] = xx [ 2
] ; bounds [ 46 ] = xx [ 2 ] ; bounds [ 47 ] = xx [ 2 ] ; bounds [ 48 ] = xx
[ 2 ] ; bounds [ 49 ] = xx [ 1 ] ; bounds [ 50 ] = xx [ 1 ] ; bounds [ 51 ] =
xx [ 1 ] ; bounds [ 52 ] = xx [ 0 ] ; bounds [ 53 ] = xx [ 1 ] ; bounds [ 54
] = xx [ 2 ] ; bounds [ 55 ] = xx [ 2 ] ; bounds [ 56 ] = xx [ 2 ] ; bounds [
57 ] = xx [ 2 ] ; bounds [ 58 ] = xx [ 1 ] ; bounds [ 59 ] = xx [ 1 ] ;
bounds [ 60 ] = xx [ 1 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
