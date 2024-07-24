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
PmfMessageId hp_v4_a1692be3_1_recordLog ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , double * logVector , double * errorResult , NeuDiagnosticManager
* neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; int ii [ 15 ] ; double xx [ 1753 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector
; ( void ) inputDot ; ( void ) inputDdot ; ( void ) neDiagMgr ; xx [ 0 ] =
57.29577951308232 ; xx [ 1 ] = 5.084038263768928e-4 ; xx [ 2 ] =
0.9999998707627665 ; xx [ 3 ] = xx [ 1 ] * state [ 4 ] + xx [ 2 ] * state [ 2
] ; xx [ 4 ] = xx [ 1 ] * state [ 5 ] - xx [ 2 ] * state [ 3 ] ; xx [ 5 ] = -
xx [ 4 ] ; xx [ 6 ] = xx [ 1 ] * state [ 2 ] - xx [ 2 ] * state [ 4 ] ; xx [
7 ] = - xx [ 6 ] ; xx [ 8 ] = xx [ 1 ] * state [ 3 ] + xx [ 2 ] * state [ 5 ]
; xx [ 9 ] = xx [ 3 ] ; xx [ 10 ] = xx [ 5 ] ; xx [ 11 ] = xx [ 7 ] ; xx [ 12
] = xx [ 8 ] ; xx [ 13 ] = 0.9999994830510986 ; xx [ 14 ] = xx [ 13 ] * state
[ 1 ] ; xx [ 15 ] = xx [ 6 ] * xx [ 14 ] ; xx [ 16 ] = xx [ 5 ] ; xx [ 17 ] =
xx [ 7 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 5 ] = 1.016807521344378e-3 ; xx [ 7 ]
= xx [ 5 ] * state [ 1 ] ; xx [ 19 ] = xx [ 4 ] * xx [ 14 ] - xx [ 7 ] * xx [
8 ] ; xx [ 20 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 21 ] = - xx [ 15 ] ; xx [ 22 ] =
xx [ 19 ] ; xx [ 23 ] = - xx [ 20 ] ; pm_math_Vector3_cross_ra ( xx + 16 , xx
+ 21 , xx + 24 ) ; xx [ 21 ] = 2.0 ; xx [ 22 ] = ( xx [ 15 ] * xx [ 3 ] + xx
[ 24 ] ) * xx [ 21 ] - xx [ 7 ] ; xx [ 15 ] = xx [ 22 ] + state [ 6 ] ; xx [
23 ] = xx [ 21 ] * ( xx [ 25 ] - xx [ 19 ] * xx [ 3 ] ) ; xx [ 19 ] = xx [ 23
] + state [ 7 ] ; xx [ 24 ] = xx [ 14 ] + xx [ 21 ] * ( xx [ 26 ] + xx [ 20 ]
* xx [ 3 ] ) ; xx [ 20 ] = xx [ 24 ] + state [ 8 ] ; xx [ 25 ] = xx [ 15 ] ;
xx [ 26 ] = xx [ 19 ] ; xx [ 27 ] = xx [ 20 ] ; xx [ 28 ] =
3.663333333333262e-6 ; xx [ 29 ] = 1.437858333333333e-3 ; xx [ 30 ] = xx [ 15
] * xx [ 28 ] ; xx [ 31 ] = xx [ 19 ] * xx [ 29 ] ; xx [ 32 ] = xx [ 20 ] *
xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 25 , xx + 30 , xx + 33 ) ; xx [
30 ] = 0.1395577324697271 ; xx [ 31 ] = 0.9902139361309295 ; xx [ 32 ] = xx [
30 ] * state [ 12 ] - xx [ 31 ] * state [ 9 ] ; xx [ 36 ] = xx [ 30 ] * state
[ 11 ] + xx [ 31 ] * state [ 10 ] ; xx [ 37 ] = - xx [ 36 ] ; xx [ 38 ] = xx
[ 31 ] * state [ 11 ] - xx [ 30 ] * state [ 10 ] ; xx [ 39 ] = - xx [ 38 ] ;
xx [ 40 ] = xx [ 30 ] * state [ 9 ] + xx [ 31 ] * state [ 12 ] ; xx [ 41 ] =
- xx [ 40 ] ; xx [ 42 ] = xx [ 32 ] ; xx [ 43 ] = xx [ 37 ] ; xx [ 44 ] = xx
[ 39 ] ; xx [ 45 ] = xx [ 41 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 25 , xx + 46 ) ; xx [ 49 ] = xx [ 30 ] * state [ 13 ] ; xx [ 50 ] = xx
[ 30 ] * state [ 14 ] ; xx [ 51 ] = state [ 13 ] - ( xx [ 30 ] * xx [ 49 ] -
xx [ 31 ] * xx [ 50 ] ) * xx [ 21 ] ; xx [ 52 ] = xx [ 46 ] + xx [ 51 ] ; xx
[ 53 ] = state [ 14 ] - xx [ 21 ] * ( xx [ 31 ] * xx [ 49 ] + xx [ 30 ] * xx
[ 50 ] ) ; xx [ 49 ] = xx [ 47 ] + xx [ 53 ] ; xx [ 50 ] = xx [ 48 ] + state
[ 15 ] ; xx [ 54 ] = xx [ 52 ] ; xx [ 55 ] = xx [ 49 ] ; xx [ 56 ] = xx [ 50
] ; xx [ 57 ] = 0.02140755024530636 ; xx [ 58 ] = 0.02140755024530637 ; xx [
59 ] = 0.04248176715727939 ; xx [ 60 ] = xx [ 52 ] * xx [ 57 ] ; xx [ 61 ] =
xx [ 49 ] * xx [ 58 ] ; xx [ 62 ] = xx [ 50 ] * xx [ 59 ] ;
pm_math_Vector3_cross_ra ( xx + 54 , xx + 60 , xx + 63 ) ; xx [ 54 ] =
7.342337229937591e-19 ; xx [ 55 ] = 0.5004402260104069 ; xx [ 56 ] = 0.5 ; xx
[ 60 ] = xx [ 56 ] * state [ 0 ] ; xx [ 61 ] = cos ( xx [ 60 ] ) ; xx [ 62 ]
= xx [ 55 ] * xx [ 61 ] ; xx [ 66 ] = sin ( xx [ 60 ] ) ; xx [ 60 ] = xx [ 5
] * xx [ 66 ] ; xx [ 67 ] = 0.8657710899485228 ; xx [ 68 ] = xx [ 13 ] * xx [
66 ] ; xx [ 66 ] = xx [ 55 ] * xx [ 60 ] + xx [ 67 ] * xx [ 68 ] ; xx [ 69 ]
= xx [ 67 ] * xx [ 61 ] ; xx [ 61 ] = xx [ 67 ] * xx [ 60 ] - xx [ 55 ] * xx
[ 68 ] ; xx [ 70 ] = - xx [ 62 ] ; xx [ 71 ] = xx [ 66 ] ; xx [ 72 ] = xx [
69 ] ; xx [ 73 ] = xx [ 61 ] ; pm_math_Quaternion_compose_ra ( xx + 70 , xx +
9 , xx + 74 ) ; pm_math_Quaternion_compose_ra ( xx + 74 , xx + 42 , xx + 78 )
; xx [ 55 ] = 1.0 ; xx [ 60 ] = 1.191387539608064e-17 ; xx [ 67 ] = xx [ 54 ]
* xx [ 81 ] ; xx [ 68 ] = xx [ 54 ] * xx [ 79 ] - xx [ 60 ] * xx [ 80 ] ; xx
[ 82 ] = - xx [ 67 ] ; xx [ 83 ] = xx [ 60 ] * xx [ 81 ] ; xx [ 84 ] = xx [
68 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx + 82 , xx + 85 ) ; xx [ 82 ] =
0.14 ; xx [ 88 ] = xx [ 37 ] ; xx [ 89 ] = xx [ 39 ] ; xx [ 90 ] = xx [ 41 ]
; xx [ 37 ] = 0.03530169195229536 ; xx [ 39 ] = xx [ 37 ] * xx [ 40 ] ; xx [
41 ] = 0.0654271681639358 ; xx [ 83 ] = xx [ 41 ] * xx [ 40 ] ; xx [ 84 ] =
xx [ 37 ] * xx [ 36 ] - xx [ 38 ] * xx [ 41 ] ; xx [ 91 ] = - xx [ 39 ] ; xx
[ 92 ] = xx [ 83 ] ; xx [ 93 ] = xx [ 84 ] ; pm_math_Vector3_cross_ra ( xx +
88 , xx + 91 , xx + 94 ) ; xx [ 91 ] = xx [ 39 ] * xx [ 32 ] ; xx [ 92 ] = xx
[ 82 ] + xx [ 21 ] * ( xx [ 94 ] - xx [ 91 ] ) - xx [ 41 ] ; xx [ 93 ] = xx [
83 ] * xx [ 32 ] ; xx [ 97 ] = ( xx [ 93 ] + xx [ 95 ] ) * xx [ 21 ] - xx [
37 ] ; xx [ 94 ] = ( xx [ 84 ] * xx [ 32 ] + xx [ 96 ] ) * xx [ 21 ] ; xx [
98 ] = xx [ 92 ] ; xx [ 99 ] = xx [ 97 ] ; xx [ 100 ] = xx [ 94 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 98 , xx + 101 ) ; xx [ 84 ] =
0.07994638184694522 ; xx [ 95 ] = xx [ 6 ] * xx [ 82 ] ; xx [ 96 ] = xx [ 6 ]
* xx [ 95 ] ; xx [ 104 ] = xx [ 82 ] * xx [ 8 ] ; xx [ 105 ] = xx [ 104 ] *
xx [ 8 ] ; xx [ 106 ] = xx [ 84 ] + xx [ 82 ] - ( xx [ 96 ] + xx [ 105 ] ) *
xx [ 21 ] ; xx [ 107 ] = xx [ 104 ] * xx [ 3 ] ; xx [ 108 ] = ( xx [ 107 ] +
xx [ 4 ] * xx [ 95 ] ) * xx [ 21 ] ; xx [ 109 ] = 0.04006839315796021 ; xx [
110 ] = xx [ 95 ] * xx [ 3 ] ; xx [ 111 ] = xx [ 109 ] + xx [ 21 ] * ( xx [
110 ] - xx [ 4 ] * xx [ 104 ] ) ; xx [ 112 ] = xx [ 106 ] ; xx [ 113 ] = xx [
108 ] ; xx [ 114 ] = xx [ 111 ] ; pm_math_Quaternion_xform_ra ( xx + 70 , xx
+ 112 , xx + 115 ) ; xx [ 118 ] = xx [ 66 ] ; xx [ 119 ] = xx [ 69 ] ; xx [
120 ] = xx [ 61 ] ; xx [ 121 ] = 0.03998704855625266 ; xx [ 122 ] = xx [ 121
] * xx [ 69 ] ; xx [ 123 ] = 5.357679714268354e-5 ; xx [ 124 ] = xx [ 123 ] *
xx [ 61 ] + xx [ 66 ] * xx [ 121 ] ; xx [ 121 ] = xx [ 123 ] * xx [ 69 ] ; xx
[ 125 ] = xx [ 122 ] ; xx [ 126 ] = - xx [ 124 ] ; xx [ 127 ] = xx [ 121 ] ;
pm_math_Vector3_cross_ra ( xx + 118 , xx + 125 , xx + 128 ) ; xx [ 123 ] = xx
[ 60 ] + xx [ 21 ] * ( xx [ 85 ] - xx [ 78 ] * xx [ 67 ] ) + xx [ 101 ] + xx
[ 115 ] - ( xx [ 128 ] - xx [ 122 ] * xx [ 62 ] ) * xx [ 21 ] +
0.07304395785390926 ; xx [ 67 ] = xx [ 78 ] * xx [ 81 ] ; xx [ 122 ] =
1.275706872409467 - ( xx [ 54 ] + ( xx [ 60 ] * xx [ 67 ] + xx [ 86 ] ) * xx
[ 21 ] + xx [ 102 ] + xx [ 116 ] - ( xx [ 62 ] * xx [ 124 ] + xx [ 129 ] ) *
xx [ 21 ] ) ; xx [ 85 ] = ( xx [ 78 ] * xx [ 68 ] + xx [ 87 ] ) * xx [ 21 ] +
xx [ 103 ] + xx [ 117 ] - xx [ 21 ] * ( xx [ 130 ] - xx [ 121 ] * xx [ 62 ] )
+ 0.03679498374650248 ; xx [ 68 ] = sqrt ( xx [ 123 ] * xx [ 123 ] + xx [ 122
] * xx [ 122 ] + xx [ 85 ] * xx [ 85 ] ) ; if ( xx [ 68 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'hp_v4/Spring and Damper Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 86 ] = xx [ 55 ] / xx [ 68 ] ; xx [ 87 ] =
8596.034158365463 * ( xx [ 68 ] - xx [ 55 ] ) ; xx [ 101 ] = - ( xx [ 86 ] *
xx [ 123 ] * xx [ 87 ] ) ; xx [ 102 ] = xx [ 86 ] * xx [ 122 ] * xx [ 87 ] ;
xx [ 103 ] = - ( xx [ 86 ] * xx [ 85 ] * xx [ 87 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 78 , xx + 101 , xx + 115 ) ; xx [
101 ] = xx [ 51 ] ; xx [ 102 ] = xx [ 53 ] ; xx [ 103 ] = state [ 15 ] ;
pm_math_Vector3_cross_ra ( xx + 46 , xx + 101 , xx + 121 ) ; xx [ 68 ] = xx [
63 ] - xx [ 54 ] * xx [ 117 ] + xx [ 57 ] * xx [ 121 ] ; xx [ 57 ] =
0.02057366790508303 ; xx [ 85 ] = - 0.2010902691868165 ; xx [ 87 ] = 0.0 ; xx
[ 124 ] = 0.2747863888508914 ; xx [ 125 ] = xx [ 85 ] ; xx [ 126 ] = xx [ 87
] ; xx [ 127 ] = xx [ 85 ] ; xx [ 128 ] = 0.1934133408123828 ; xx [ 129 ] =
xx [ 87 ] ; xx [ 130 ] = xx [ 87 ] ; xx [ 131 ] = xx [ 87 ] ; xx [ 132 ] =
0.3911780194875643 ; xx [ 85 ] = 0.05200961894323344 ; xx [ 133 ] = xx [ 38 ]
* xx [ 85 ] ; xx [ 134 ] = xx [ 85 ] * xx [ 36 ] ; xx [ 135 ] = xx [ 21 ] * (
xx [ 133 ] * xx [ 32 ] - xx [ 134 ] * xx [ 40 ] ) ; xx [ 136 ] = - ( ( xx [
134 ] * xx [ 32 ] + xx [ 133 ] * xx [ 40 ] ) * xx [ 21 ] ) ; xx [ 137 ] = (
xx [ 134 ] * xx [ 36 ] + xx [ 38 ] * xx [ 133 ] ) * xx [ 21 ] - xx [ 85 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 135 , xx + 138 ) ; xx [ 133 ] =
0.01999999999999999 ; xx [ 134 ] = xx [ 133 ] * xx [ 80 ] ; xx [ 135 ] = xx [
133 ] * xx [ 79 ] ; xx [ 136 ] = xx [ 138 ] - ( xx [ 78 ] * xx [ 134 ] + xx [
81 ] * xx [ 135 ] ) * xx [ 21 ] ; pm_math_Quaternion_compose_ra ( xx + 9 , xx
+ 42 , xx + 141 ) ; pm_math_Quaternion_compose_ra ( xx + 70 , xx + 141 , xx +
145 ) ; xx [ 137 ] = xx [ 5 ] * xx [ 144 ] + xx [ 13 ] * xx [ 142 ] ; xx [
149 ] = xx [ 5 ] * xx [ 143 ] ; xx [ 150 ] = xx [ 13 ] * xx [ 143 ] ; xx [
151 ] = - xx [ 137 ] ; xx [ 152 ] = xx [ 149 ] ; pm_math_Vector3_cross_ra (
xx + 142 , xx + 150 , xx + 153 ) ; xx [ 142 ] = xx [ 13 ] + ( xx [ 155 ] - xx
[ 141 ] * xx [ 149 ] ) * xx [ 21 ] ; xx [ 144 ] = 5.68852606864536e-4 ; xx [
149 ] = 0.07434110703613682 ; xx [ 150 ] = xx [ 21 ] * ( xx [ 153 ] - xx [ 13
] * xx [ 141 ] * xx [ 143 ] ) - xx [ 5 ] ; xx [ 143 ] = 0.1486822140722736 ;
xx [ 151 ] = xx [ 154 ] + xx [ 141 ] * xx [ 137 ] ; xx [ 152 ] = - ( xx [ 142
] * xx [ 144 ] ) ; xx [ 153 ] = - ( xx [ 142 ] * xx [ 149 ] ) ; xx [ 154 ] =
xx [ 150 ] * xx [ 144 ] + xx [ 143 ] * xx [ 151 ] ;
pm_math_Quaternion_xform_ra ( xx + 145 , xx + 152 , xx + 155 ) ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 98 , xx + 152 ) ; xx [ 137 ] = xx
[ 153 ] + xx [ 108 ] ; xx [ 158 ] = - ( xx [ 137 ] * xx [ 13 ] ) ; xx [ 159 ]
= ( xx [ 152 ] + xx [ 106 ] ) * xx [ 13 ] + ( xx [ 154 ] + xx [ 111 ] ) * xx
[ 5 ] ; xx [ 160 ] = - ( xx [ 137 ] * xx [ 5 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 70 , xx + 158 , xx + 152 ) ; xx [ 137 ] =
1.291763771785659e-5 ; xx [ 141 ] = xx [ 66 ] * xx [ 137 ] ; xx [ 158 ] = xx
[ 137 ] * xx [ 61 ] ; xx [ 159 ] = xx [ 152 ] + xx [ 21 ] * ( xx [ 141 ] * xx
[ 69 ] + xx [ 158 ] * xx [ 62 ] ) ; xx [ 160 ] = xx [ 155 ] + xx [ 159 ] ; xx
[ 161 ] = 0.07160254037844391 ; xx [ 162 ] = xx [ 161 ] * xx [ 80 ] ; xx [
163 ] = xx [ 161 ] * xx [ 79 ] ; xx [ 164 ] = 0.05312177826491075 ; xx [ 165
] = xx [ 164 ] * xx [ 36 ] ; xx [ 166 ] = xx [ 38 ] * xx [ 164 ] ; xx [ 167 ]
= xx [ 21 ] * ( xx [ 165 ] * xx [ 40 ] - xx [ 166 ] * xx [ 32 ] ) ; xx [ 168
] = ( xx [ 165 ] * xx [ 32 ] + xx [ 166 ] * xx [ 40 ] ) * xx [ 21 ] ; xx [
169 ] = xx [ 164 ] - ( xx [ 165 ] * xx [ 36 ] + xx [ 38 ] * xx [ 166 ] ) * xx
[ 21 ] ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 167 , xx + 170 ) ; xx [
165 ] = ( xx [ 78 ] * xx [ 162 ] + xx [ 81 ] * xx [ 163 ] ) * xx [ 21 ] + xx
[ 170 ] ; xx [ 166 ] = xx [ 149 ] * xx [ 81 ] ; xx [ 167 ] = xx [ 144 ] * xx
[ 80 ] - xx [ 149 ] * xx [ 79 ] ; xx [ 173 ] = xx [ 166 ] ; xx [ 174 ] = - (
xx [ 144 ] * xx [ 81 ] ) ; xx [ 175 ] = xx [ 167 ] ; pm_math_Vector3_cross_ra
( xx + 79 , xx + 173 , xx + 176 ) ; xx [ 168 ] = xx [ 41 ] * xx [ 36 ] + xx [
38 ] * xx [ 37 ] ; xx [ 173 ] = - xx [ 83 ] ; xx [ 174 ] = - xx [ 39 ] ; xx [
175 ] = xx [ 168 ] ; pm_math_Vector3_cross_ra ( xx + 88 , xx + 173 , xx + 179
) ; xx [ 88 ] = xx [ 37 ] + xx [ 21 ] * ( xx [ 179 ] - xx [ 93 ] ) ; xx [ 89
] = ( xx [ 180 ] - xx [ 91 ] ) * xx [ 21 ] - xx [ 41 ] ; xx [ 90 ] = ( xx [
168 ] * xx [ 32 ] + xx [ 181 ] ) * xx [ 21 ] ; pm_math_Quaternion_xform_ra (
xx + 74 , xx + 88 , xx + 173 ) ; xx [ 39 ] = xx [ 21 ] * ( xx [ 176 ] + xx [
78 ] * xx [ 166 ] ) - xx [ 144 ] + xx [ 173 ] ; xx [ 88 ] = xx [ 136 ] ; xx [
89 ] = xx [ 165 ] ; xx [ 90 ] = xx [ 39 ] ; solveSymmetricPosDef ( xx + 124 ,
xx + 88 , 3 , 1 , xx + 179 , xx + 182 ) ; xx [ 83 ] = 5.916704863069737e-3 ;
xx [ 88 ] = 0.02057366790508303 ; xx [ 89 ] = 5.91670486306974e-3 ; xx [ 182
] = xx [ 57 ] * xx [ 179 ] + xx [ 83 ] * xx [ 180 ] ; xx [ 183 ] = xx [ 88 ]
* xx [ 180 ] - xx [ 89 ] * xx [ 179 ] ; xx [ 184 ] = xx [ 59 ] * xx [ 181 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 182 , xx + 185 ) ; xx [ 90 ] =
0.7060338390459073 ; xx [ 91 ] = 1.308543363278716 ; xx [ 93 ] =
1.062435565298215 ; xx [ 166 ] = 1.040192378864669 ; xx [ 182 ] = xx [ 90 ] *
xx [ 181 ] ; xx [ 183 ] = - ( xx [ 91 ] * xx [ 181 ] ) ; xx [ 184 ] = xx [ 93
] * xx [ 180 ] - xx [ 166 ] * xx [ 179 ] ; pm_math_Quaternion_xform_ra ( xx +
42 , xx + 182 , xx + 188 ) ; pm_math_Vector3_cross_ra ( xx + 98 , xx + 188 ,
xx + 182 ) ; xx [ 168 ] = xx [ 185 ] + xx [ 182 ] ; xx [ 169 ] = xx [ 32 ] *
xx [ 32 ] ; xx [ 191 ] = xx [ 36 ] * xx [ 36 ] ; xx [ 192 ] = ( xx [ 169 ] +
xx [ 191 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 193 ] = xx [ 38 ] * xx [ 36 ] ;
xx [ 194 ] = xx [ 40 ] * xx [ 32 ] ; xx [ 195 ] = xx [ 193 ] - xx [ 194 ] ;
xx [ 196 ] = xx [ 21 ] * xx [ 195 ] ; xx [ 197 ] = xx [ 40 ] * xx [ 36 ] ; xx
[ 198 ] = xx [ 38 ] * xx [ 32 ] ; xx [ 199 ] = ( xx [ 197 ] + xx [ 198 ] ) *
xx [ 21 ] ; xx [ 200 ] = ( xx [ 193 ] + xx [ 194 ] ) * xx [ 21 ] ; xx [ 201 ]
= xx [ 38 ] * xx [ 38 ] ; xx [ 202 ] = ( xx [ 169 ] + xx [ 201 ] ) * xx [ 21
] - xx [ 55 ] ; xx [ 203 ] = xx [ 38 ] * xx [ 40 ] ; xx [ 38 ] = xx [ 36 ] *
xx [ 32 ] ; xx [ 32 ] = xx [ 203 ] - xx [ 38 ] ; xx [ 36 ] = xx [ 21 ] * xx [
32 ] ; xx [ 204 ] = xx [ 21 ] * ( xx [ 197 ] - xx [ 198 ] ) ; xx [ 205 ] = (
xx [ 203 ] + xx [ 38 ] ) * xx [ 21 ] ; xx [ 206 ] = xx [ 40 ] * xx [ 40 ] ;
xx [ 40 ] = ( xx [ 169 ] + xx [ 206 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 207 ]
= xx [ 192 ] ; xx [ 208 ] = xx [ 196 ] ; xx [ 209 ] = xx [ 199 ] ; xx [ 210 ]
= xx [ 200 ] ; xx [ 211 ] = xx [ 202 ] ; xx [ 212 ] = xx [ 36 ] ; xx [ 213 ]
= xx [ 204 ] ; xx [ 214 ] = xx [ 205 ] ; xx [ 215 ] = xx [ 40 ] ; xx [ 169 ]
= 4.04381887391831e-3 ; xx [ 216 ] = 7.494700759552345e-3 ; xx [ 217 ] =
0.0138904686947087 ; xx [ 218 ] = 0.03068789919414749 ; xx [ 219 ] = xx [ 169
] * xx [ 192 ] - xx [ 216 ] * xx [ 200 ] ; xx [ 220 ] = xx [ 217 ] * xx [ 200
] - xx [ 216 ] * xx [ 192 ] ; xx [ 221 ] = xx [ 218 ] * xx [ 204 ] ; xx [ 222
] = xx [ 169 ] * xx [ 196 ] - xx [ 216 ] * xx [ 202 ] ; xx [ 223 ] = xx [ 217
] * xx [ 202 ] - xx [ 216 ] * xx [ 196 ] ; xx [ 224 ] = xx [ 218 ] * xx [ 205
] ; xx [ 225 ] = xx [ 169 ] * xx [ 199 ] - xx [ 216 ] * xx [ 36 ] ; xx [ 226
] = xx [ 217 ] * xx [ 36 ] - xx [ 216 ] * xx [ 199 ] ; xx [ 227 ] = xx [ 218
] * xx [ 40 ] ; pm_math_Matrix3x3_compose_ra ( xx + 207 , xx + 219 , xx + 228
) ; xx [ 169 ] = 0.1145502849943536 ; xx [ 216 ] = 0.2123042932242523 ; xx [
217 ] = 0.3632802654702478 ; xx [ 218 ] = 0.1960104400643727 ; xx [ 219 ] =
xx [ 169 ] * xx [ 204 ] ; xx [ 220 ] = - ( xx [ 216 ] * xx [ 204 ] ) ; xx [
221 ] = xx [ 217 ] * xx [ 200 ] - xx [ 218 ] * xx [ 192 ] ; xx [ 222 ] = xx [
169 ] * xx [ 205 ] ; xx [ 223 ] = - ( xx [ 216 ] * xx [ 205 ] ) ; xx [ 224 ]
= xx [ 217 ] * xx [ 202 ] - xx [ 218 ] * xx [ 196 ] ; xx [ 225 ] = xx [ 169 ]
* xx [ 40 ] ; xx [ 226 ] = - ( xx [ 216 ] * xx [ 40 ] ) ; xx [ 227 ] = xx [
217 ] * xx [ 36 ] - xx [ 218 ] * xx [ 199 ] ; pm_math_Matrix3x3_compose_ra (
xx + 207 , xx + 219 , xx + 237 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 237
, xx + 98 , xx + 216 ) ; xx [ 169 ] = 16.74236707292877 ; xx [ 225 ] =
6.037605722238072 ; xx [ 226 ] = 8.810070479618288 ; xx [ 227 ] =
3.244895036451798 ; xx [ 246 ] = xx [ 169 ] * xx [ 192 ] + xx [ 225 ] * xx [
200 ] ; xx [ 247 ] = xx [ 225 ] * xx [ 192 ] + xx [ 226 ] * xx [ 200 ] ; xx [
248 ] = xx [ 227 ] * xx [ 204 ] ; xx [ 249 ] = xx [ 169 ] * xx [ 196 ] + xx [
225 ] * xx [ 202 ] ; xx [ 250 ] = xx [ 225 ] * xx [ 196 ] + xx [ 226 ] * xx [
202 ] ; xx [ 251 ] = xx [ 227 ] * xx [ 205 ] ; xx [ 252 ] = xx [ 169 ] * xx [
199 ] + xx [ 225 ] * xx [ 36 ] ; xx [ 253 ] = xx [ 225 ] * xx [ 199 ] + xx [
226 ] * xx [ 36 ] ; xx [ 254 ] = xx [ 227 ] * xx [ 40 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 207 , xx + 246 , xx + 255 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 255 , xx + 98 , xx + 246 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 246 , xx + 98 , xx + 264 ) ; xx [ 169 ]
= xx [ 28 ] + xx [ 228 ] - xx [ 216 ] - xx [ 216 ] - xx [ 264 ] ; xx [ 225 ]
= xx [ 231 ] - xx [ 219 ] - xx [ 217 ] - xx [ 267 ] ; xx [ 226 ] = xx [ 243 ]
- xx [ 248 ] ; xx [ 227 ] = xx [ 225 ] - xx [ 82 ] * xx [ 226 ] ; xx [ 243 ]
= xx [ 234 ] - xx [ 222 ] - xx [ 218 ] - xx [ 270 ] ; xx [ 248 ] = xx [ 240 ]
- xx [ 247 ] ; xx [ 240 ] = xx [ 243 ] + xx [ 82 ] * xx [ 248 ] ; xx [ 247 ]
= xx [ 29 ] + xx [ 232 ] - xx [ 220 ] - xx [ 220 ] - xx [ 268 ] ; xx [ 273 ]
= xx [ 244 ] - xx [ 251 ] ; xx [ 244 ] = xx [ 247 ] - xx [ 82 ] * xx [ 273 ]
; xx [ 251 ] = 0.2198 ; xx [ 274 ] = xx [ 251 ] + xx [ 263 ] ; xx [ 263 ] =
xx [ 273 ] - xx [ 274 ] * xx [ 82 ] ; xx [ 275 ] = xx [ 235 ] - xx [ 223 ] -
xx [ 221 ] - xx [ 271 ] ; xx [ 276 ] = xx [ 241 ] - xx [ 250 ] ; xx [ 241 ] =
xx [ 275 ] + xx [ 82 ] * xx [ 276 ] ; xx [ 250 ] = xx [ 245 ] - xx [ 254 ] ;
xx [ 245 ] = xx [ 250 ] + xx [ 82 ] * xx [ 260 ] ; xx [ 254 ] = xx [ 241 ] -
xx [ 245 ] * xx [ 82 ] ; xx [ 216 ] = xx [ 29 ] + xx [ 236 ] - xx [ 224 ] -
xx [ 224 ] - xx [ 272 ] ; xx [ 220 ] = xx [ 242 ] - xx [ 253 ] ; xx [ 224 ] =
xx [ 216 ] + xx [ 82 ] * xx [ 220 ] ; xx [ 242 ] = xx [ 251 ] + xx [ 259 ] ;
xx [ 253 ] = xx [ 220 ] + xx [ 242 ] * xx [ 82 ] ; xx [ 277 ] = xx [ 169 ] ;
xx [ 278 ] = xx [ 227 ] ; xx [ 279 ] = xx [ 240 ] ; xx [ 280 ] = xx [ 227 ] ;
xx [ 281 ] = xx [ 244 ] - xx [ 263 ] * xx [ 82 ] ; xx [ 282 ] = xx [ 254 ] ;
xx [ 283 ] = xx [ 240 ] ; xx [ 284 ] = xx [ 254 ] ; xx [ 285 ] = xx [ 224 ] +
xx [ 253 ] * xx [ 82 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 277 , 3 , xx
+ 286 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Coupler and platform/Spherical Joint 1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 254 ] = xx [ 55 ] - ( xx [ 201 ] + xx [ 206 ] ) * xx [
21 ] ; xx [ 259 ] = xx [ 194 ] + xx [ 193 ] ; xx [ 286 ] = - ( xx [ 144 ] *
xx [ 204 ] ) ; xx [ 287 ] = - ( xx [ 149 ] * xx [ 204 ] ) ; xx [ 288 ] = xx [
144 ] * xx [ 254 ] + xx [ 259 ] * xx [ 143 ] ; pm_math_Quaternion_xform_ra (
xx + 78 , xx + 286 , xx + 289 ) ; xx [ 193 ] = xx [ 94 ] * xx [ 8 ] ; xx [
194 ] = xx [ 97 ] * xx [ 6 ] ; xx [ 286 ] = xx [ 193 ] - xx [ 194 ] ; xx [
287 ] = xx [ 97 ] * xx [ 4 ] ; xx [ 288 ] = xx [ 4 ] * xx [ 94 ] ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 286 , xx + 292 ) ; xx [ 295 ] = (
xx [ 3 ] * xx [ 286 ] + xx [ 292 ] ) * xx [ 21 ] ; xx [ 296 ] = ( xx [ 287 ]
* xx [ 3 ] + xx [ 293 ] ) * xx [ 21 ] - xx [ 94 ] ; xx [ 297 ] = xx [ 97 ] +
( xx [ 288 ] * xx [ 3 ] + xx [ 294 ] ) * xx [ 21 ] ;
pm_math_Quaternion_xform_ra ( xx + 70 , xx + 295 , xx + 286 ) ; xx [ 292 ] =
xx [ 289 ] + xx [ 286 ] ; xx [ 293 ] = ( xx [ 38 ] + xx [ 203 ] ) * xx [ 21 ]
; xx [ 38 ] = 1.137705213729072e-3 ; xx [ 203 ] = xx [ 55 ] - ( xx [ 206 ] +
xx [ 191 ] ) * xx [ 21 ] ; xx [ 294 ] = - ( xx [ 144 ] * xx [ 293 ] ) ; xx [
295 ] = - ( xx [ 149 ] * xx [ 293 ] ) ; xx [ 296 ] = xx [ 38 ] * xx [ 195 ] +
xx [ 149 ] * xx [ 203 ] ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 294 ,
xx + 297 ) ; xx [ 206 ] = xx [ 92 ] * xx [ 6 ] ; xx [ 294 ] = xx [ 92 ] * xx
[ 4 ] ; xx [ 295 ] = xx [ 193 ] - xx [ 294 ] ; xx [ 193 ] = xx [ 6 ] * xx [
94 ] ; xx [ 300 ] = xx [ 206 ] ; xx [ 301 ] = xx [ 295 ] ; xx [ 302 ] = xx [
193 ] ; pm_math_Vector3_cross_ra ( xx + 16 , xx + 300 , xx + 303 ) ; xx [ 296
] = xx [ 4 ] * xx [ 82 ] ; xx [ 300 ] = xx [ 296 ] * xx [ 3 ] ; xx [ 301 ] =
xx [ 4 ] * xx [ 296 ] ; xx [ 306 ] = xx [ 94 ] + ( xx [ 206 ] * xx [ 3 ] + xx
[ 303 ] ) * xx [ 21 ] + ( xx [ 110 ] + xx [ 296 ] * xx [ 8 ] ) * xx [ 21 ] ;
xx [ 307 ] = ( xx [ 3 ] * xx [ 295 ] + xx [ 304 ] ) * xx [ 21 ] + xx [ 21 ] *
( xx [ 95 ] * xx [ 8 ] - xx [ 300 ] ) ; xx [ 308 ] = ( xx [ 193 ] * xx [ 3 ]
+ xx [ 305 ] ) * xx [ 21 ] - ( xx [ 92 ] - ( xx [ 301 ] + xx [ 96 ] ) * xx [
21 ] ) - xx [ 82 ] ; pm_math_Quaternion_xform_ra ( xx + 70 , xx + 306 , xx +
94 ) ; xx [ 110 ] = xx [ 297 ] + xx [ 94 ] ; xx [ 193 ] = xx [ 186 ] + xx [
183 ] ; xx [ 206 ] = xx [ 55 ] - ( xx [ 191 ] + xx [ 201 ] ) * xx [ 21 ] ; xx
[ 191 ] = xx [ 198 ] + xx [ 197 ] ; xx [ 302 ] = - ( xx [ 144 ] * xx [ 206 ]
) ; xx [ 303 ] = - ( xx [ 149 ] * xx [ 206 ] ) ; xx [ 304 ] = xx [ 191 ] * xx
[ 38 ] + xx [ 143 ] * xx [ 32 ] ; pm_math_Quaternion_xform_ra ( xx + 78 , xx
+ 302 , xx + 305 ) ; xx [ 38 ] = xx [ 92 ] * xx [ 8 ] ; xx [ 143 ] = xx [ 97
] * xx [ 8 ] ; xx [ 197 ] = xx [ 294 ] + xx [ 194 ] ; xx [ 302 ] = - xx [ 38
] ; xx [ 303 ] = - xx [ 143 ] ; xx [ 304 ] = - xx [ 197 ] ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 302 , xx + 308 ) ; xx [ 302 ] = xx
[ 21 ] * ( xx [ 308 ] - xx [ 38 ] * xx [ 3 ] ) - xx [ 97 ] + xx [ 21 ] * ( xx
[ 6 ] * xx [ 296 ] - xx [ 107 ] ) ; xx [ 303 ] = xx [ 92 ] + xx [ 21 ] * ( xx
[ 309 ] - xx [ 143 ] * xx [ 3 ] ) - ( xx [ 105 ] + xx [ 301 ] ) * xx [ 21 ] +
xx [ 82 ] ; xx [ 304 ] = xx [ 21 ] * ( xx [ 310 ] - xx [ 197 ] * xx [ 3 ] ) -
( xx [ 300 ] + xx [ 6 ] * xx [ 104 ] ) * xx [ 21 ] ;
pm_math_Quaternion_xform_ra ( xx + 70 , xx + 302 , xx + 294 ) ; xx [ 38 ] =
xx [ 305 ] + xx [ 294 ] ; xx [ 92 ] = xx [ 187 ] + xx [ 184 ] ; xx [ 182 ] =
xx [ 292 ] - xx [ 168 ] ; xx [ 183 ] = xx [ 110 ] - ( xx [ 193 ] - xx [ 82 ]
* xx [ 190 ] ) ; xx [ 184 ] = xx [ 38 ] - ( xx [ 92 ] + xx [ 82 ] * xx [ 189
] ) ; solveSymmetricPosDef ( xx + 277 , xx + 182 , 3 , 1 , xx + 185 , xx +
300 ) ; xx [ 97 ] = xx [ 229 ] - xx [ 217 ] - xx [ 219 ] - xx [ 265 ] ; xx [
104 ] = xx [ 230 ] - xx [ 218 ] - xx [ 222 ] - xx [ 266 ] ; xx [ 105 ] = xx [
233 ] - xx [ 221 ] - xx [ 223 ] - xx [ 269 ] ; xx [ 107 ] = xx [ 105 ] - xx [
82 ] * xx [ 250 ] ; xx [ 182 ] = xx [ 168 ] + xx [ 169 ] * xx [ 185 ] + xx [
227 ] * xx [ 186 ] + xx [ 240 ] * xx [ 187 ] ; xx [ 183 ] = xx [ 193 ] + xx [
185 ] * xx [ 97 ] + xx [ 244 ] * xx [ 186 ] + xx [ 241 ] * xx [ 187 ] ; xx [
184 ] = xx [ 92 ] + xx [ 185 ] * xx [ 104 ] + xx [ 107 ] * xx [ 186 ] + xx [
224 ] * xx [ 187 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 182 , xx +
217 ) ; xx [ 92 ] = xx [ 237 ] - xx [ 246 ] ; xx [ 143 ] = xx [ 238 ] - xx [
249 ] ; xx [ 168 ] = xx [ 143 ] - xx [ 82 ] * xx [ 261 ] ; xx [ 182 ] = xx [
239 ] - xx [ 252 ] ; xx [ 183 ] = xx [ 182 ] + xx [ 82 ] * xx [ 258 ] ; xx [
184 ] = xx [ 276 ] - xx [ 82 ] * xx [ 262 ] ; xx [ 221 ] = xx [ 188 ] + xx [
185 ] * xx [ 92 ] + xx [ 168 ] * xx [ 186 ] + xx [ 183 ] * xx [ 187 ] ; xx [
222 ] = xx [ 189 ] + xx [ 185 ] * xx [ 248 ] + xx [ 184 ] * xx [ 186 ] + xx [
253 ] * xx [ 187 ] ; xx [ 223 ] = xx [ 190 ] + xx [ 185 ] * xx [ 226 ] + xx [
263 ] * xx [ 186 ] + xx [ 245 ] * xx [ 187 ] ; pm_math_Quaternion_xform_ra (
xx + 9 , xx + 221 , xx + 188 ) ; pm_math_Vector3_cross_ra ( xx + 112 , xx +
188 , xx + 221 ) ; xx [ 188 ] = 9.854362081682671e-3 ; xx [ 190 ] = xx [ 3 ]
* xx [ 3 ] ; xx [ 193 ] = ( xx [ 190 ] + xx [ 4 ] * xx [ 4 ] ) * xx [ 21 ] -
xx [ 55 ] ; xx [ 194 ] = xx [ 4 ] * xx [ 6 ] ; xx [ 197 ] = xx [ 8 ] * xx [ 3
] ; xx [ 198 ] = ( xx [ 194 ] + xx [ 197 ] ) * xx [ 21 ] ; xx [ 201 ] = xx [
6 ] * xx [ 3 ] ; xx [ 218 ] = xx [ 4 ] * xx [ 8 ] ; xx [ 222 ] = xx [ 21 ] *
( xx [ 201 ] - xx [ 218 ] ) ; xx [ 228 ] = xx [ 21 ] * ( xx [ 194 ] - xx [
197 ] ) ; xx [ 194 ] = ( xx [ 190 ] + xx [ 6 ] * xx [ 6 ] ) * xx [ 21 ] - xx
[ 55 ] ; xx [ 197 ] = xx [ 6 ] * xx [ 8 ] ; xx [ 229 ] = xx [ 4 ] * xx [ 3 ]
; xx [ 230 ] = ( xx [ 197 ] + xx [ 229 ] ) * xx [ 21 ] ; xx [ 231 ] = ( xx [
218 ] + xx [ 201 ] ) * xx [ 21 ] ; xx [ 201 ] = xx [ 21 ] * ( xx [ 229 ] - xx
[ 197 ] ) ; xx [ 197 ] = ( xx [ 190 ] + xx [ 8 ] * xx [ 8 ] ) * xx [ 21 ] -
xx [ 55 ] ; xx [ 264 ] = xx [ 193 ] ; xx [ 265 ] = xx [ 198 ] ; xx [ 266 ] =
xx [ 222 ] ; xx [ 267 ] = xx [ 228 ] ; xx [ 268 ] = xx [ 194 ] ; xx [ 269 ] =
- xx [ 230 ] ; xx [ 270 ] = - xx [ 231 ] ; xx [ 271 ] = xx [ 201 ] ; xx [ 272
] = xx [ 197 ] ; xx [ 308 ] = xx [ 169 ] ; xx [ 309 ] = xx [ 227 ] ; xx [ 310
] = xx [ 240 ] ; xx [ 311 ] = xx [ 97 ] ; xx [ 312 ] = xx [ 244 ] ; xx [ 313
] = xx [ 241 ] ; xx [ 314 ] = xx [ 104 ] ; xx [ 315 ] = xx [ 107 ] ; xx [ 316
] = xx [ 224 ] ; xx [ 317 ] = xx [ 92 ] ; xx [ 318 ] = xx [ 168 ] ; xx [ 319
] = xx [ 183 ] ; xx [ 320 ] = xx [ 248 ] ; xx [ 321 ] = xx [ 184 ] ; xx [ 322
] = xx [ 253 ] ; xx [ 323 ] = xx [ 226 ] ; xx [ 324 ] = xx [ 263 ] ; xx [ 325
] = xx [ 245 ] ; solveSymmetricPosDef ( xx + 277 , xx + 308 , 3 , 6 , xx +
326 , xx + 232 ) ; xx [ 190 ] = xx [ 326 ] * xx [ 97 ] + xx [ 244 ] * xx [
327 ] + xx [ 241 ] * xx [ 328 ] ; xx [ 218 ] = xx [ 326 ] * xx [ 104 ] + xx [
107 ] * xx [ 327 ] + xx [ 224 ] * xx [ 328 ] ; xx [ 229 ] = xx [ 329 ] * xx [
104 ] + xx [ 107 ] * xx [ 330 ] + xx [ 224 ] * xx [ 331 ] ; xx [ 308 ] = xx [
169 ] - ( xx [ 169 ] * xx [ 326 ] + xx [ 227 ] * xx [ 327 ] + xx [ 240 ] * xx
[ 328 ] ) ; xx [ 309 ] = xx [ 97 ] - xx [ 190 ] ; xx [ 310 ] = xx [ 104 ] -
xx [ 218 ] ; xx [ 311 ] = xx [ 225 ] - xx [ 190 ] ; xx [ 312 ] = xx [ 247 ] -
( xx [ 329 ] * xx [ 97 ] + xx [ 244 ] * xx [ 330 ] + xx [ 241 ] * xx [ 331 ]
) ; xx [ 313 ] = xx [ 105 ] - xx [ 229 ] ; xx [ 314 ] = xx [ 243 ] - xx [ 218
] ; xx [ 315 ] = xx [ 275 ] - xx [ 229 ] ; xx [ 316 ] = xx [ 216 ] - ( xx [
332 ] * xx [ 104 ] + xx [ 107 ] * xx [ 333 ] + xx [ 224 ] * xx [ 334 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 308 , xx + 264 , xx + 317 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 264 , xx + 317 , xx + 308 ) ; xx [ 317 ]
= xx [ 92 ] - ( xx [ 169 ] * xx [ 335 ] + xx [ 227 ] * xx [ 336 ] + xx [ 240
] * xx [ 337 ] ) ; xx [ 318 ] = xx [ 143 ] - ( xx [ 335 ] * xx [ 97 ] + xx [
244 ] * xx [ 336 ] + xx [ 241 ] * xx [ 337 ] ) ; xx [ 319 ] = xx [ 182 ] - (
xx [ 335 ] * xx [ 104 ] + xx [ 107 ] * xx [ 336 ] + xx [ 224 ] * xx [ 337 ] )
; xx [ 320 ] = xx [ 248 ] - ( xx [ 169 ] * xx [ 338 ] + xx [ 227 ] * xx [ 339
] + xx [ 240 ] * xx [ 340 ] ) ; xx [ 321 ] = xx [ 276 ] - ( xx [ 338 ] * xx [
97 ] + xx [ 244 ] * xx [ 339 ] + xx [ 241 ] * xx [ 340 ] ) ; xx [ 322 ] = xx
[ 220 ] - ( xx [ 338 ] * xx [ 104 ] + xx [ 107 ] * xx [ 339 ] + xx [ 224 ] *
xx [ 340 ] ) ; xx [ 323 ] = xx [ 226 ] - ( xx [ 169 ] * xx [ 341 ] + xx [ 227
] * xx [ 342 ] + xx [ 240 ] * xx [ 343 ] ) ; xx [ 324 ] = xx [ 273 ] - ( xx [
341 ] * xx [ 97 ] + xx [ 244 ] * xx [ 342 ] + xx [ 241 ] * xx [ 343 ] ) ; xx
[ 325 ] = xx [ 250 ] - ( xx [ 341 ] * xx [ 104 ] + xx [ 107 ] * xx [ 342 ] +
xx [ 224 ] * xx [ 343 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 317
, xx + 264 , xx + 344 ) ; pm_math_Matrix3x3_compose_ra ( xx + 264 , xx + 344
, xx + 317 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 317 , xx + 112 , xx +
344 ) ; xx [ 190 ] = xx [ 335 ] * xx [ 248 ] + xx [ 184 ] * xx [ 336 ] + xx [
253 ] * xx [ 337 ] ; xx [ 218 ] = xx [ 335 ] * xx [ 226 ] + xx [ 263 ] * xx [
336 ] + xx [ 245 ] * xx [ 337 ] ; xx [ 229 ] = xx [ 338 ] * xx [ 226 ] + xx [
263 ] * xx [ 339 ] + xx [ 245 ] * xx [ 340 ] ; xx [ 353 ] = xx [ 255 ] - ( xx
[ 335 ] * xx [ 92 ] + xx [ 168 ] * xx [ 336 ] + xx [ 183 ] * xx [ 337 ] ) +
xx [ 251 ] ; xx [ 354 ] = xx [ 256 ] - xx [ 190 ] ; xx [ 355 ] = xx [ 257 ] -
xx [ 218 ] ; xx [ 356 ] = xx [ 258 ] - xx [ 190 ] ; xx [ 357 ] = xx [ 242 ] -
( xx [ 338 ] * xx [ 248 ] + xx [ 184 ] * xx [ 339 ] + xx [ 253 ] * xx [ 340 ]
) ; xx [ 358 ] = xx [ 260 ] - xx [ 229 ] ; xx [ 359 ] = xx [ 261 ] - xx [ 218
] ; xx [ 360 ] = xx [ 262 ] - xx [ 229 ] ; xx [ 361 ] = xx [ 274 ] - ( xx [
341 ] * xx [ 226 ] + xx [ 263 ] * xx [ 342 ] + xx [ 245 ] * xx [ 343 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 353 , xx + 264 , xx + 362 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 264 , xx + 362 , xx + 353 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 353 , xx + 112 , xx + 362 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 362 , xx + 112 , xx + 371 ) ; xx [ 190 ]
= xx [ 322 ] - xx [ 369 ] ; xx [ 218 ] = 0.1086415963534388 ; xx [ 229 ] = xx
[ 320 ] - xx [ 363 ] ; xx [ 232 ] = 194.4628 ; xx [ 233 ] = xx [ 13 ] * xx [
190 ] - xx [ 5 ] * xx [ 229 ] + ( xx [ 232 ] + xx [ 357 ] ) * xx [ 137 ] ; xx
[ 234 ] = ( ( xx [ 188 ] + xx [ 316 ] - xx [ 352 ] - xx [ 352 ] - xx [ 379 ]
) * xx [ 13 ] - xx [ 5 ] * ( xx [ 310 ] - xx [ 346 ] - xx [ 350 ] - xx [ 373
] ) + xx [ 137 ] * xx [ 190 ] ) * xx [ 13 ] - ( xx [ 13 ] * ( xx [ 314 ] - xx
[ 350 ] - xx [ 346 ] - xx [ 377 ] ) - ( xx [ 218 ] + xx [ 308 ] - xx [ 344 ]
- xx [ 344 ] - xx [ 371 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 229 ] ) * xx [ 5 ]
+ xx [ 233 ] * xx [ 137 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 234 , 1 ,
xx + 190 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 1/Revolute Joint 1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 190 ] = ( xx [ 160 ] - ( ( xx [ 219 ] + xx [ 223 ] ) *
xx [ 13 ] - ( xx [ 217 ] + xx [ 221 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 189 ]
) ) / xx [ 234 ] ; xx [ 235 ] = xx [ 326 ] ; xx [ 236 ] = xx [ 329 ] ; xx [
237 ] = xx [ 332 ] ; xx [ 189 ] = xx [ 13 ] * xx [ 190 ] ; xx [ 217 ] = xx [
6 ] * xx [ 189 ] ; xx [ 219 ] = xx [ 5 ] * xx [ 190 ] ; xx [ 221 ] = xx [ 4 ]
* xx [ 189 ] - xx [ 219 ] * xx [ 8 ] ; xx [ 223 ] = xx [ 6 ] * xx [ 219 ] ;
xx [ 300 ] = - xx [ 217 ] ; xx [ 301 ] = xx [ 221 ] ; xx [ 302 ] = - xx [ 223
] ; pm_math_Vector3_cross_ra ( xx + 16 , xx + 300 , xx + 308 ) ; xx [ 229 ] =
( xx [ 217 ] * xx [ 3 ] + xx [ 308 ] ) * xx [ 21 ] - xx [ 219 ] ; xx [ 217 ]
= xx [ 21 ] * ( xx [ 309 ] - xx [ 221 ] * xx [ 3 ] ) ; xx [ 221 ] = xx [ 189
] + xx [ 21 ] * ( xx [ 310 ] + xx [ 223 ] * xx [ 3 ] ) ; xx [ 300 ] = xx [
229 ] ; xx [ 301 ] = xx [ 217 ] ; xx [ 302 ] = xx [ 221 ] ; xx [ 308 ] = xx [
335 ] ; xx [ 309 ] = xx [ 338 ] ; xx [ 310 ] = xx [ 341 ] ; xx [ 311 ] = - (
xx [ 108 ] * xx [ 189 ] ) ; xx [ 312 ] = xx [ 137 ] * xx [ 190 ] + xx [ 106 ]
* xx [ 189 ] + xx [ 111 ] * xx [ 219 ] ; xx [ 313 ] = - ( xx [ 108 ] * xx [
219 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 311 , xx + 314 )
; xx [ 189 ] = xx [ 185 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 300 )
+ pm_math_Vector3_dot_ra ( xx + 308 , xx + 314 ) ) ; xx [ 311 ] = xx [ 327 ]
; xx [ 312 ] = xx [ 330 ] ; xx [ 313 ] = xx [ 333 ] ; xx [ 320 ] = xx [ 336 ]
; xx [ 321 ] = xx [ 339 ] ; xx [ 322 ] = xx [ 342 ] ; xx [ 185 ] = xx [ 186 ]
- ( pm_math_Vector3_dot_ra ( xx + 311 , xx + 300 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 314 ) ) ; xx [ 344 ] = xx [ 328 ] ; xx [ 345 ] = xx [ 331 ] ;
xx [ 346 ] = xx [ 334 ] ; xx [ 326 ] = xx [ 337 ] ; xx [ 327 ] = xx [ 340 ] ;
xx [ 328 ] = xx [ 343 ] ; xx [ 186 ] = xx [ 187 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 300 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 314 ) ) ;
xx [ 187 ] = 0.6827474916655853 ; xx [ 300 ] = xx [ 229 ] + xx [ 189 ] ; xx [
301 ] = xx [ 217 ] + xx [ 185 ] ; xx [ 302 ] = xx [ 221 ] + xx [ 186 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 42 , xx + 300 , xx + 329 ) ; xx [
217 ] = 0.2394090154551814 ; xx [ 219 ] = 7.883468795952014 ;
pm_math_Vector3_cross_ra ( xx + 300 , xx + 98 , xx + 332 ) ; xx [ 300 ] = xx
[ 314 ] + xx [ 332 ] ; xx [ 301 ] = xx [ 315 ] + xx [ 82 ] * xx [ 186 ] + xx
[ 333 ] ; xx [ 302 ] = xx [ 316 ] - xx [ 82 ] * xx [ 185 ] + xx [ 334 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 42 , xx + 300 , xx + 314 ) ; xx [
221 ] = 0.5606348958752783 ; xx [ 223 ] = 0.4342246641590292 ; xx [ 229 ] =
8.052046714550871 ; xx [ 238 ] = 0.2776218776273524 ; xx [ 239 ] =
4.613989793284428 ; xx [ 246 ] = 8.551439588783646 ; xx [ 249 ] = xx [ 56 ] *
state [ 34 ] ; xx [ 252 ] = cos ( xx [ 249 ] ) ; xx [ 300 ] = xx [ 1 ] * xx [
252 ] ; xx [ 301 ] = sin ( xx [ 249 ] ) ; xx [ 249 ] = xx [ 5 ] * xx [ 301 ]
; xx [ 302 ] = xx [ 13 ] * xx [ 301 ] ; xx [ 301 ] = xx [ 1 ] * xx [ 249 ] +
xx [ 2 ] * xx [ 302 ] ; xx [ 303 ] = - xx [ 301 ] ; xx [ 304 ] = xx [ 2 ] *
xx [ 252 ] ; xx [ 252 ] = - xx [ 304 ] ; xx [ 318 ] = xx [ 2 ] * xx [ 249 ] -
xx [ 1 ] * xx [ 302 ] ; xx [ 332 ] = - xx [ 300 ] ; xx [ 333 ] = xx [ 303 ] ;
xx [ 334 ] = xx [ 252 ] ; xx [ 335 ] = xx [ 318 ] ; xx [ 249 ] = xx [ 2 ] *
state [ 36 ] - xx [ 1 ] * state [ 38 ] ; xx [ 302 ] = xx [ 2 ] * state [ 37 ]
+ xx [ 1 ] * state [ 39 ] ; xx [ 324 ] = xx [ 2 ] * state [ 38 ] + xx [ 1 ] *
state [ 36 ] ; xx [ 336 ] = xx [ 2 ] * state [ 39 ] - xx [ 1 ] * state [ 37 ]
; xx [ 337 ] = xx [ 249 ] ; xx [ 338 ] = xx [ 302 ] ; xx [ 339 ] = xx [ 324 ]
; xx [ 340 ] = xx [ 336 ] ; pm_math_Quaternion_compose_ra ( xx + 332 , xx +
337 , xx + 347 ) ; xx [ 341 ] = 0.28 ; xx [ 351 ] = xx [ 302 ] ; xx [ 352 ] =
xx [ 324 ] ; xx [ 353 ] = xx [ 336 ] ; xx [ 342 ] = xx [ 5 ] * xx [ 336 ] -
xx [ 302 ] * xx [ 13 ] ; xx [ 343 ] = xx [ 324 ] * xx [ 5 ] ; xx [ 365 ] = xx
[ 324 ] * xx [ 13 ] ; xx [ 366 ] = xx [ 342 ] ; xx [ 367 ] = - xx [ 343 ] ;
pm_math_Vector3_cross_ra ( xx + 351 , xx + 365 , xx + 371 ) ; xx [ 355 ] = xx
[ 341 ] * ( xx [ 372 ] - xx [ 342 ] * xx [ 249 ] ) ; xx [ 342 ] = ( xx [ 13 ]
+ xx [ 21 ] * ( xx [ 373 ] + xx [ 343 ] * xx [ 249 ] ) ) * xx [ 82 ] ; xx [
343 ] = xx [ 349 ] * xx [ 355 ] + xx [ 350 ] * xx [ 342 ] ; xx [ 357 ] = xx [
348 ] * xx [ 355 ] ; xx [ 359 ] = xx [ 348 ] * xx [ 342 ] ; xx [ 365 ] = - xx
[ 343 ] ; xx [ 366 ] = xx [ 357 ] ; xx [ 367 ] = xx [ 359 ] ;
pm_math_Vector3_cross_ra ( xx + 348 , xx + 365 , xx + 371 ) ; xx [ 361 ] = xx
[ 82 ] * xx [ 336 ] ; xx [ 363 ] = xx [ 361 ] * xx [ 249 ] ; xx [ 365 ] = xx
[ 324 ] * xx [ 82 ] ; xx [ 366 ] = ( xx [ 363 ] + xx [ 302 ] * xx [ 365 ] ) *
xx [ 21 ] ; xx [ 367 ] = xx [ 324 ] * xx [ 365 ] ; xx [ 369 ] = xx [ 361 ] *
xx [ 336 ] ; xx [ 374 ] = xx [ 84 ] + xx [ 82 ] - ( xx [ 367 ] + xx [ 369 ] )
* xx [ 21 ] ; xx [ 375 ] = xx [ 365 ] * xx [ 249 ] ; xx [ 376 ] = xx [ 21 ] *
( xx [ 302 ] * xx [ 361 ] - xx [ 375 ] ) - xx [ 109 ] ; xx [ 377 ] = - ( xx [
13 ] * xx [ 366 ] ) ; xx [ 378 ] = xx [ 374 ] * xx [ 13 ] - xx [ 376 ] * xx [
5 ] ; xx [ 379 ] = xx [ 5 ] * xx [ 366 ] ; pm_math_Quaternion_xform_ra ( xx +
332 , xx + 377 , xx + 380 ) ; xx [ 377 ] = xx [ 301 ] * xx [ 137 ] ; xx [ 378
] = xx [ 137 ] * xx [ 318 ] ; xx [ 379 ] = xx [ 21 ] * ( xx [ 371 ] - xx [
343 ] * xx [ 347 ] ) + xx [ 380 ] + xx [ 21 ] * ( xx [ 377 ] * xx [ 304 ] +
xx [ 378 ] * xx [ 300 ] ) ; xx [ 343 ] = 0.07580196787243279 ; xx [ 383 ] =
1.913983629327394e-3 ; xx [ 384 ] = xx [ 87 ] ; xx [ 385 ] = xx [ 87 ] ; xx [
386 ] = xx [ 87 ] ; xx [ 387 ] = xx [ 343 ] ; xx [ 388 ] = xx [ 87 ] ; xx [
389 ] = xx [ 87 ] ; xx [ 390 ] = xx [ 87 ] ; xx [ 391 ] = xx [ 343 ] ; xx [
343 ] = xx [ 302 ] * xx [ 82 ] ; xx [ 392 ] = xx [ 343 ] * xx [ 249 ] ; xx [
393 ] = xx [ 302 ] * xx [ 343 ] ; xx [ 394 ] = - ( ( xx [ 375 ] + xx [ 343 ]
* xx [ 336 ] ) * xx [ 21 ] ) ; xx [ 395 ] = xx [ 21 ] * ( xx [ 392 ] - xx [
365 ] * xx [ 336 ] ) ; xx [ 396 ] = ( xx [ 393 ] + xx [ 367 ] ) * xx [ 21 ] -
xx [ 82 ] ; pm_math_Quaternion_xform_ra ( xx + 332 , xx + 394 , xx + 397 ) ;
xx [ 365 ] = xx [ 82 ] * xx [ 349 ] ; xx [ 367 ] = xx [ 82 ] * xx [ 348 ] ;
xx [ 375 ] = xx [ 397 ] - ( xx [ 347 ] * xx [ 365 ] + xx [ 350 ] * xx [ 367 ]
) * xx [ 21 ] ; xx [ 394 ] = xx [ 82 ] * xx [ 350 ] ; xx [ 400 ] = xx [ 21 ]
* ( xx [ 324 ] * xx [ 343 ] - xx [ 363 ] ) ; xx [ 401 ] = xx [ 82 ] - ( xx [
369 ] + xx [ 393 ] ) * xx [ 21 ] ; xx [ 402 ] = ( xx [ 392 ] + xx [ 324 ] *
xx [ 361 ] ) * xx [ 21 ] ; pm_math_Quaternion_xform_ra ( xx + 332 , xx + 400
, xx + 403 ) ; xx [ 343 ] = xx [ 21 ] * ( xx [ 349 ] * xx [ 367 ] - xx [ 347
] * xx [ 394 ] ) + xx [ 403 ] ; xx [ 400 ] = xx [ 87 ] ; xx [ 401 ] = - xx [
375 ] ; xx [ 402 ] = - xx [ 343 ] ; solveSymmetricPosDef ( xx + 383 , xx +
400 , 3 , 1 , xx + 406 , xx + 409 ) ; xx [ 400 ] = xx [ 28 ] * xx [ 406 ] ;
xx [ 401 ] = xx [ 29 ] * xx [ 407 ] ; xx [ 402 ] = xx [ 29 ] * xx [ 408 ] ;
pm_math_Quaternion_xform_ra ( xx + 337 , xx + 400 , xx + 409 ) ; xx [ 400 ] =
xx [ 374 ] ; xx [ 401 ] = xx [ 366 ] ; xx [ 402 ] = xx [ 376 ] ; xx [ 361 ] =
0.030772 ; xx [ 363 ] = xx [ 361 ] * xx [ 407 ] ; xx [ 369 ] = xx [ 361 ] *
xx [ 408 ] ; xx [ 392 ] = xx [ 324 ] * xx [ 363 ] + xx [ 369 ] * xx [ 336 ] ;
xx [ 393 ] = xx [ 302 ] * xx [ 363 ] ; xx [ 395 ] = xx [ 302 ] * xx [ 369 ] ;
xx [ 412 ] = - xx [ 392 ] ; xx [ 413 ] = xx [ 393 ] ; xx [ 414 ] = xx [ 395 ]
; pm_math_Vector3_cross_ra ( xx + 351 , xx + 412 , xx + 415 ) ; xx [ 396 ] =
xx [ 369 ] + ( xx [ 393 ] * xx [ 249 ] + xx [ 416 ] ) * xx [ 21 ] ; xx [ 412
] = xx [ 21 ] * ( xx [ 415 ] - xx [ 392 ] * xx [ 249 ] ) ; xx [ 413 ] = xx [
396 ] ; xx [ 414 ] = xx [ 21 ] * ( xx [ 417 ] + xx [ 395 ] * xx [ 249 ] ) -
xx [ 363 ] ; pm_math_Vector3_cross_ra ( xx + 400 , xx + 412 , xx + 415 ) ; xx
[ 363 ] = 1.078049984061205e-3 ; xx [ 369 ] = xx [ 302 ] * xx [ 324 ] ; xx [
392 ] = xx [ 336 ] * xx [ 249 ] ; xx [ 393 ] = xx [ 21 ] * ( xx [ 369 ] - xx
[ 392 ] ) ; xx [ 395 ] = xx [ 363 ] * xx [ 393 ] ; xx [ 406 ] = xx [ 302 ] *
xx [ 336 ] ; xx [ 410 ] = xx [ 324 ] * xx [ 249 ] ; xx [ 412 ] = ( xx [ 406 ]
+ xx [ 410 ] ) * xx [ 21 ] ; xx [ 413 ] = xx [ 363 ] * xx [ 412 ] ; xx [ 414
] = 7.700357029008605e-3 ; xx [ 416 ] = xx [ 414 ] * xx [ 393 ] ; xx [ 418 ]
= xx [ 414 ] * xx [ 412 ] ; xx [ 419 ] = xx [ 412 ] * xx [ 416 ] - xx [ 418 ]
* xx [ 393 ] ; xx [ 420 ] = xx [ 249 ] * xx [ 249 ] ; xx [ 421 ] = ( xx [ 420
] + xx [ 324 ] * xx [ 324 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 422 ] = xx [ 324
] * xx [ 336 ] ; xx [ 423 ] = xx [ 302 ] * xx [ 249 ] ; xx [ 424 ] = xx [ 21
] * ( xx [ 422 ] - xx [ 423 ] ) ; xx [ 425 ] = ( xx [ 422 ] + xx [ 423 ] ) *
xx [ 21 ] ; xx [ 422 ] = ( xx [ 420 ] + xx [ 336 ] * xx [ 336 ] ) * xx [ 21 ]
- xx [ 55 ] ; xx [ 423 ] = xx [ 425 ] * xx [ 418 ] - xx [ 416 ] * xx [ 422 ]
; xx [ 426 ] = xx [ 414 ] * xx [ 424 ] ; xx [ 427 ] = xx [ 414 ] * xx [ 421 ]
; xx [ 428 ] = xx [ 426 ] * xx [ 393 ] - xx [ 412 ] * xx [ 427 ] ; xx [ 429 ]
= xx [ 425 ] * xx [ 426 ] - xx [ 427 ] * xx [ 422 ] ; xx [ 430 ] = xx [ 414 ]
* xx [ 422 ] ; xx [ 431 ] = xx [ 414 ] * xx [ 425 ] ; xx [ 432 ] = xx [ 430 ]
* xx [ 393 ] - xx [ 412 ] * xx [ 431 ] ; xx [ 433 ] = xx [ 431 ] * xx [ 422 ]
- xx [ 425 ] * xx [ 430 ] ; xx [ 434 ] = - xx [ 419 ] ; xx [ 435 ] = xx [ 418
] * xx [ 421 ] - xx [ 416 ] * xx [ 424 ] ; xx [ 436 ] = xx [ 423 ] ; xx [ 437
] = xx [ 428 ] ; xx [ 438 ] = xx [ 426 ] * xx [ 421 ] - xx [ 427 ] * xx [ 424
] ; xx [ 439 ] = xx [ 429 ] ; xx [ 440 ] = xx [ 432 ] ; xx [ 441 ] = xx [ 430
] * xx [ 421 ] - xx [ 431 ] * xx [ 424 ] ; xx [ 442 ] = - xx [ 433 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 434 , xx + 400 , xx + 443 ) ; xx [ 416
] = ( xx [ 420 ] + xx [ 302 ] * xx [ 302 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [
418 ] = xx [ 369 ] + xx [ 392 ] ; xx [ 369 ] = xx [ 418 ] * xx [ 21 ] ; xx [
392 ] = xx [ 406 ] - xx [ 410 ] ; xx [ 406 ] = xx [ 21 ] * xx [ 392 ] ; xx [
434 ] = xx [ 416 ] ; xx [ 435 ] = xx [ 369 ] ; xx [ 436 ] = xx [ 406 ] ; xx [
437 ] = xx [ 393 ] ; xx [ 438 ] = xx [ 421 ] ; xx [ 439 ] = xx [ 425 ] ; xx [
440 ] = xx [ 412 ] ; xx [ 441 ] = xx [ 424 ] ; xx [ 442 ] = xx [ 422 ] ; xx [
410 ] = 0.05500255020720432 ; xx [ 420 ] = 0.4396 ; xx [ 452 ] = xx [ 251 ] *
xx [ 416 ] ; xx [ 453 ] = xx [ 410 ] * xx [ 393 ] ; xx [ 454 ] = xx [ 410 ] *
xx [ 412 ] ; xx [ 455 ] = xx [ 418 ] * xx [ 420 ] ; xx [ 456 ] = xx [ 410 ] *
xx [ 421 ] ; xx [ 457 ] = xx [ 410 ] * xx [ 424 ] ; xx [ 458 ] = xx [ 420 ] *
xx [ 392 ] ; xx [ 459 ] = xx [ 410 ] * xx [ 425 ] ; xx [ 460 ] = xx [ 410 ] *
xx [ 422 ] ; pm_math_Matrix3x3_compose_ra ( xx + 434 , xx + 452 , xx + 461 )
; pm_math_Matrix3x3_postCross_ra ( xx + 461 , xx + 400 , xx + 452 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 452 , xx + 400 , xx + 469 ) ; xx [ 392 ]
= xx [ 363 ] * xx [ 425 ] ; xx [ 418 ] = xx [ 363 ] * xx [ 422 ] ; xx [ 426 ]
= xx [ 428 ] - xx [ 453 ] ; xx [ 427 ] = xx [ 429 ] - xx [ 459 ] ; xx [ 428 ]
= xx [ 5 ] * xx [ 426 ] + xx [ 13 ] * xx [ 427 ] + ( xx [ 232 ] + xx [ 465 ]
) * xx [ 137 ] ; xx [ 429 ] = ( ( xx [ 218 ] + xx [ 395 ] * xx [ 393 ] + xx [
412 ] * xx [ 413 ] - xx [ 443 ] - xx [ 443 ] - xx [ 469 ] ) * xx [ 5 ] - ( xx
[ 449 ] - ( xx [ 392 ] * xx [ 393 ] + xx [ 412 ] * xx [ 418 ] ) + xx [ 445 ]
+ xx [ 475 ] ) * xx [ 13 ] + xx [ 137 ] * xx [ 426 ] ) * xx [ 5 ] + ( ( xx [
188 ] + xx [ 425 ] * xx [ 392 ] + xx [ 418 ] * xx [ 422 ] - xx [ 451 ] - xx [
451 ] - xx [ 477 ] ) * xx [ 13 ] - ( xx [ 445 ] - ( xx [ 425 ] * xx [ 395 ] +
xx [ 413 ] * xx [ 422 ] ) + xx [ 449 ] + xx [ 471 ] ) * xx [ 5 ] + xx [ 137 ]
* xx [ 427 ] ) * xx [ 13 ] + xx [ 428 ] * xx [ 137 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 429 , 1 , xx + 392 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 4/Revolute Joint 4' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 392 ] = ( ( xx [ 409 ] + xx [ 415 ] ) * xx [ 5 ] + (
xx [ 411 ] + xx [ 417 ] ) * xx [ 13 ] + xx [ 396 ] * xx [ 137 ] + xx [ 379 ]
) / xx [ 429 ] ; xx [ 395 ] = xx [ 5 ] * xx [ 392 ] ; xx [ 396 ] = xx [ 13 ]
* xx [ 392 ] ; xx [ 409 ] = xx [ 395 ] * xx [ 336 ] - xx [ 302 ] * xx [ 396 ]
; xx [ 411 ] = xx [ 324 ] * xx [ 395 ] ; xx [ 443 ] = - ( xx [ 324 ] * xx [
396 ] ) ; xx [ 444 ] = - xx [ 409 ] ; xx [ 445 ] = xx [ 411 ] ;
pm_math_Vector3_cross_ra ( xx + 351 , xx + 443 , xx + 446 ) ; xx [ 413 ] =
0.5004781638508128 ; xx [ 415 ] = 5.35543512910424 ; xx [ 443 ] = xx [ 366 ]
* xx [ 396 ] ; xx [ 444 ] = xx [ 376 ] * xx [ 395 ] - xx [ 374 ] * xx [ 396 ]
- xx [ 137 ] * xx [ 392 ] ; xx [ 445 ] = - ( xx [ 366 ] * xx [ 395 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 337 , xx + 443 , xx + 449 ) ; xx [
395 ] = 0.2502390819254064 ; xx [ 417 ] = xx [ 153 ] - ( xx [ 158 ] * xx [ 61
] + xx [ 66 ] * xx [ 141 ] ) * xx [ 21 ] ; xx [ 418 ] = xx [ 156 ] + xx [ 417
] + xx [ 137 ] ; xx [ 426 ] = xx [ 21 ] * ( xx [ 78 ] * xx [ 135 ] - xx [ 81
] * xx [ 134 ] ) + xx [ 139 ] ; xx [ 427 ] = xx [ 21 ] * ( xx [ 81 ] * xx [
162 ] - xx [ 78 ] * xx [ 163 ] ) + xx [ 171 ] ; xx [ 430 ] = ( xx [ 177 ] -
xx [ 144 ] * xx [ 67 ] ) * xx [ 21 ] - xx [ 149 ] + xx [ 174 ] ; xx [ 443 ] =
xx [ 426 ] ; xx [ 444 ] = xx [ 427 ] ; xx [ 445 ] = xx [ 430 ] ;
solveSymmetricPosDef ( xx + 124 , xx + 443 , 3 , 1 , xx + 455 , xx + 469 ) ;
xx [ 443 ] = xx [ 57 ] * xx [ 455 ] + xx [ 83 ] * xx [ 456 ] ; xx [ 444 ] =
xx [ 88 ] * xx [ 456 ] - xx [ 89 ] * xx [ 455 ] ; xx [ 445 ] = xx [ 59 ] * xx
[ 457 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 443 , xx + 469 ) ; xx
[ 443 ] = xx [ 90 ] * xx [ 457 ] ; xx [ 444 ] = - ( xx [ 91 ] * xx [ 457 ] )
; xx [ 445 ] = xx [ 93 ] * xx [ 456 ] - xx [ 166 ] * xx [ 455 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 443 , xx + 472 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 472 , xx + 443 ) ; xx [ 431 ] = xx
[ 469 ] + xx [ 443 ] ; xx [ 446 ] = xx [ 290 ] + xx [ 287 ] ; xx [ 449 ] = xx
[ 298 ] + xx [ 95 ] ; xx [ 453 ] = xx [ 470 ] + xx [ 444 ] ; xx [ 459 ] = xx
[ 306 ] + xx [ 295 ] ; xx [ 443 ] = xx [ 471 ] + xx [ 445 ] ; xx [ 469 ] = xx
[ 446 ] - xx [ 431 ] ; xx [ 470 ] = xx [ 449 ] - ( xx [ 453 ] - xx [ 82 ] *
xx [ 474 ] ) ; xx [ 471 ] = xx [ 459 ] - ( xx [ 443 ] + xx [ 82 ] * xx [ 473
] ) ; solveSymmetricPosDef ( xx + 277 , xx + 469 , 3 , 1 , xx + 475 , xx +
478 ) ; xx [ 469 ] = xx [ 431 ] + xx [ 169 ] * xx [ 475 ] + xx [ 227 ] * xx [
476 ] + xx [ 240 ] * xx [ 477 ] ; xx [ 470 ] = xx [ 453 ] + xx [ 475 ] * xx [
97 ] + xx [ 244 ] * xx [ 476 ] + xx [ 241 ] * xx [ 477 ] ; xx [ 471 ] = xx [
443 ] + xx [ 475 ] * xx [ 104 ] + xx [ 107 ] * xx [ 476 ] + xx [ 224 ] * xx [
477 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 469 , xx + 443 ) ; xx [
469 ] = xx [ 472 ] + xx [ 475 ] * xx [ 92 ] + xx [ 168 ] * xx [ 476 ] + xx [
183 ] * xx [ 477 ] ; xx [ 470 ] = xx [ 473 ] + xx [ 475 ] * xx [ 248 ] + xx [
184 ] * xx [ 476 ] + xx [ 253 ] * xx [ 477 ] ; xx [ 471 ] = xx [ 474 ] + xx [
475 ] * xx [ 226 ] + xx [ 263 ] * xx [ 476 ] + xx [ 245 ] * xx [ 477 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 469 , xx + 472 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 472 , xx + 469 ) ; xx [ 431 ] = (
xx [ 418 ] - ( ( xx [ 445 ] + xx [ 471 ] ) * xx [ 13 ] - ( xx [ 443 ] + xx [
469 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 473 ] ) ) / xx [ 234 ] ; xx [ 443 ] =
xx [ 13 ] * xx [ 431 ] ; xx [ 444 ] = xx [ 6 ] * xx [ 443 ] ; xx [ 445 ] = xx
[ 5 ] * xx [ 431 ] ; xx [ 453 ] = xx [ 4 ] * xx [ 443 ] - xx [ 445 ] * xx [ 8
] ; xx [ 461 ] = xx [ 6 ] * xx [ 445 ] ; xx [ 469 ] = - xx [ 444 ] ; xx [ 470
] = xx [ 453 ] ; xx [ 471 ] = - xx [ 461 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 469 , xx + 472 ) ; xx [ 463 ] = ( xx [ 444 ] * xx [ 3 ] + xx [ 472
] ) * xx [ 21 ] - xx [ 445 ] ; xx [ 444 ] = xx [ 21 ] * ( xx [ 473 ] - xx [
453 ] * xx [ 3 ] ) ; xx [ 453 ] = xx [ 443 ] + xx [ 21 ] * ( xx [ 474 ] + xx
[ 461 ] * xx [ 3 ] ) ; xx [ 469 ] = xx [ 463 ] ; xx [ 470 ] = xx [ 444 ] ; xx
[ 471 ] = xx [ 453 ] ; xx [ 472 ] = - ( xx [ 108 ] * xx [ 443 ] ) ; xx [ 473
] = xx [ 137 ] * xx [ 431 ] + xx [ 106 ] * xx [ 443 ] + xx [ 111 ] * xx [ 445
] ; xx [ 474 ] = - ( xx [ 108 ] * xx [ 445 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 472 , xx + 478 ) ; xx [
443 ] = xx [ 475 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 469 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 478 ) ) ; xx [ 445 ] = xx [ 476 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 469 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 478 ) ) ; xx [ 461 ] = xx [ 477 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 469 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 478 ) ) ;
xx [ 469 ] = xx [ 463 ] + xx [ 443 ] ; xx [ 470 ] = xx [ 444 ] + xx [ 445 ] ;
xx [ 471 ] = xx [ 453 ] + xx [ 461 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 469 , xx + 472 ) ; pm_math_Vector3_cross_ra ( xx + 469 , xx +
98 , xx + 475 ) ; xx [ 469 ] = xx [ 478 ] + xx [ 475 ] ; xx [ 470 ] = xx [
479 ] + xx [ 82 ] * xx [ 461 ] + xx [ 476 ] ; xx [ 471 ] = xx [ 480 ] - xx [
82 ] * xx [ 445 ] + xx [ 477 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 469 , xx + 475 ) ; xx [ 444 ] = xx [ 455 ] - ( xx [ 187 ] * xx [ 472 ]
+ xx [ 217 ] * xx [ 473 ] - xx [ 219 ] * xx [ 477 ] ) ; xx [ 453 ] = xx [ 456
] - ( xx [ 221 ] * xx [ 472 ] + xx [ 223 ] * xx [ 473 ] + xx [ 229 ] * xx [
477 ] ) ; xx [ 455 ] = xx [ 457 ] - ( xx [ 238 ] * xx [ 474 ] + xx [ 239 ] *
xx [ 475 ] - xx [ 246 ] * xx [ 476 ] ) ; xx [ 456 ] = xx [ 347 ] * xx [ 367 ]
; xx [ 457 ] = xx [ 21 ] * ( xx [ 456 ] - xx [ 350 ] * xx [ 365 ] ) + xx [
398 ] ; xx [ 463 ] = xx [ 348 ] * xx [ 367 ] ; xx [ 367 ] = xx [ 404 ] - ( xx
[ 350 ] * xx [ 394 ] + xx [ 463 ] ) * xx [ 21 ] + xx [ 82 ] ; xx [ 469 ] = xx
[ 87 ] ; xx [ 470 ] = - xx [ 457 ] ; xx [ 471 ] = - xx [ 367 ] ;
solveSymmetricPosDef ( xx + 383 , xx + 469 , 3 , 1 , xx + 472 , xx + 475 ) ;
xx [ 469 ] = xx [ 28 ] * xx [ 472 ] ; xx [ 470 ] = xx [ 29 ] * xx [ 473 ] ;
xx [ 471 ] = xx [ 29 ] * xx [ 474 ] ; pm_math_Quaternion_xform_ra ( xx + 337
, xx + 469 , xx + 475 ) ; xx [ 465 ] = xx [ 361 ] * xx [ 473 ] ; xx [ 467 ] =
xx [ 361 ] * xx [ 474 ] ; xx [ 469 ] = xx [ 324 ] * xx [ 465 ] + xx [ 467 ] *
xx [ 336 ] ; xx [ 470 ] = xx [ 302 ] * xx [ 465 ] ; xx [ 471 ] = xx [ 302 ] *
xx [ 467 ] ; xx [ 478 ] = - xx [ 469 ] ; xx [ 479 ] = xx [ 470 ] ; xx [ 480 ]
= xx [ 471 ] ; pm_math_Vector3_cross_ra ( xx + 351 , xx + 478 , xx + 481 ) ;
xx [ 472 ] = xx [ 467 ] + ( xx [ 470 ] * xx [ 249 ] + xx [ 482 ] ) * xx [ 21
] ; xx [ 478 ] = xx [ 21 ] * ( xx [ 481 ] - xx [ 469 ] * xx [ 249 ] ) ; xx [
479 ] = xx [ 472 ] ; xx [ 480 ] = xx [ 21 ] * ( xx [ 483 ] + xx [ 471 ] * xx
[ 249 ] ) - xx [ 465 ] ; pm_math_Vector3_cross_ra ( xx + 400 , xx + 478 , xx
+ 469 ) ; xx [ 465 ] = xx [ 342 ] + ( xx [ 347 ] * xx [ 357 ] + xx [ 372 ] )
* xx [ 21 ] + xx [ 381 ] - ( xx [ 378 ] * xx [ 318 ] + xx [ 301 ] * xx [ 377
] ) * xx [ 21 ] + xx [ 137 ] ; xx [ 342 ] = ( ( xx [ 475 ] + xx [ 469 ] ) *
xx [ 5 ] + ( xx [ 477 ] + xx [ 471 ] ) * xx [ 13 ] + xx [ 472 ] * xx [ 137 ]
+ xx [ 465 ] ) / xx [ 429 ] ; xx [ 357 ] = xx [ 5 ] * xx [ 342 ] ; xx [ 467 ]
= xx [ 13 ] * xx [ 342 ] ; xx [ 469 ] = xx [ 357 ] * xx [ 336 ] - xx [ 302 ]
* xx [ 467 ] ; xx [ 470 ] = xx [ 324 ] * xx [ 357 ] ; xx [ 475 ] = - ( xx [
324 ] * xx [ 467 ] ) ; xx [ 476 ] = - xx [ 469 ] ; xx [ 477 ] = xx [ 470 ] ;
pm_math_Vector3_cross_ra ( xx + 351 , xx + 475 , xx + 478 ) ; xx [ 475 ] = xx
[ 366 ] * xx [ 467 ] ; xx [ 476 ] = xx [ 376 ] * xx [ 357 ] - xx [ 374 ] * xx
[ 467 ] - xx [ 137 ] * xx [ 342 ] ; xx [ 477 ] = - ( xx [ 366 ] * xx [ 357 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 337 , xx + 475 , xx + 481 ) ;
xx [ 357 ] = xx [ 473 ] - ( ( xx [ 469 ] * xx [ 249 ] + xx [ 479 ] ) * xx [
413 ] - xx [ 415 ] * xx [ 483 ] ) ; xx [ 469 ] = xx [ 474 ] - ( xx [ 395 ] *
( ( xx [ 480 ] - xx [ 470 ] * xx [ 249 ] ) * xx [ 21 ] - xx [ 467 ] ) + xx [
415 ] * xx [ 482 ] ) ; xx [ 467 ] = xx [ 160 ] * xx [ 431 ] + xx [ 292 ] * xx
[ 443 ] + xx [ 110 ] * xx [ 445 ] + xx [ 38 ] * xx [ 461 ] + xx [ 136 ] * xx
[ 444 ] + xx [ 165 ] * xx [ 453 ] + xx [ 39 ] * xx [ 455 ] + xx [ 379 ] * xx
[ 342 ] - xx [ 375 ] * xx [ 357 ] - xx [ 343 ] * xx [ 469 ] ; xx [ 152 ] = xx
[ 154 ] + ( xx [ 158 ] * xx [ 69 ] - xx [ 141 ] * xx [ 62 ] ) * xx [ 21 ] ;
xx [ 141 ] = xx [ 157 ] + xx [ 152 ] ; xx [ 153 ] = ( xx [ 79 ] * xx [ 135 ]
+ xx [ 80 ] * xx [ 134 ] ) * xx [ 21 ] - xx [ 133 ] + xx [ 140 ] ; xx [ 133 ]
= xx [ 161 ] - ( xx [ 79 ] * xx [ 163 ] + xx [ 80 ] * xx [ 162 ] ) * xx [ 21
] + xx [ 172 ] ; xx [ 134 ] = ( xx [ 78 ] * xx [ 167 ] + xx [ 178 ] ) * xx [
21 ] + xx [ 175 ] ; xx [ 154 ] = xx [ 153 ] ; xx [ 155 ] = xx [ 133 ] ; xx [
156 ] = xx [ 134 ] ; solveSymmetricPosDef ( xx + 124 , xx + 154 , 3 , 1 , xx
+ 161 , xx + 176 ) ; xx [ 154 ] = xx [ 57 ] * xx [ 161 ] + xx [ 83 ] * xx [
162 ] ; xx [ 155 ] = xx [ 88 ] * xx [ 162 ] - xx [ 89 ] * xx [ 161 ] ; xx [
156 ] = xx [ 59 ] * xx [ 163 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx +
154 , xx + 176 ) ; xx [ 154 ] = xx [ 90 ] * xx [ 163 ] ; xx [ 155 ] = - ( xx
[ 91 ] * xx [ 163 ] ) ; xx [ 156 ] = xx [ 93 ] * xx [ 162 ] - xx [ 166 ] * xx
[ 161 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 154 , xx + 470 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 470 , xx + 154 ) ; xx [ 135 ] = xx
[ 176 ] + xx [ 154 ] ; xx [ 157 ] = xx [ 291 ] + xx [ 288 ] ; xx [ 158 ] = xx
[ 299 ] + xx [ 96 ] ; xx [ 167 ] = xx [ 177 ] + xx [ 155 ] ; xx [ 289 ] = xx
[ 307 ] + xx [ 296 ] ; xx [ 154 ] = xx [ 178 ] + xx [ 156 ] ; xx [ 176 ] = xx
[ 157 ] - xx [ 135 ] ; xx [ 177 ] = xx [ 158 ] - ( xx [ 167 ] - xx [ 82 ] *
xx [ 472 ] ) ; xx [ 178 ] = xx [ 289 ] - ( xx [ 154 ] + xx [ 82 ] * xx [ 471
] ) ; solveSymmetricPosDef ( xx + 277 , xx + 176 , 3 , 1 , xx + 297 , xx +
305 ) ; xx [ 176 ] = xx [ 135 ] + xx [ 169 ] * xx [ 297 ] + xx [ 227 ] * xx [
298 ] + xx [ 240 ] * xx [ 299 ] ; xx [ 177 ] = xx [ 167 ] + xx [ 297 ] * xx [
97 ] + xx [ 244 ] * xx [ 298 ] + xx [ 241 ] * xx [ 299 ] ; xx [ 178 ] = xx [
154 ] + xx [ 297 ] * xx [ 104 ] + xx [ 107 ] * xx [ 298 ] + xx [ 224 ] * xx [
299 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 176 , xx + 154 ) ; xx [
176 ] = xx [ 470 ] + xx [ 297 ] * xx [ 92 ] + xx [ 168 ] * xx [ 298 ] + xx [
183 ] * xx [ 299 ] ; xx [ 177 ] = xx [ 471 ] + xx [ 297 ] * xx [ 248 ] + xx [
184 ] * xx [ 298 ] + xx [ 253 ] * xx [ 299 ] ; xx [ 178 ] = xx [ 472 ] + xx [
297 ] * xx [ 226 ] + xx [ 263 ] * xx [ 298 ] + xx [ 245 ] * xx [ 299 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 176 , xx + 305 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 305 , xx + 176 ) ; xx [ 135 ] = (
xx [ 141 ] - ( ( xx [ 156 ] + xx [ 178 ] ) * xx [ 13 ] - ( xx [ 154 ] + xx [
176 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 306 ] ) ) / xx [ 234 ] ; xx [ 154 ] =
xx [ 13 ] * xx [ 135 ] ; xx [ 155 ] = xx [ 6 ] * xx [ 154 ] ; xx [ 156 ] = xx
[ 5 ] * xx [ 135 ] ; xx [ 167 ] = xx [ 4 ] * xx [ 154 ] - xx [ 156 ] * xx [ 8
] ; xx [ 176 ] = xx [ 6 ] * xx [ 156 ] ; xx [ 305 ] = - xx [ 155 ] ; xx [ 306
] = xx [ 167 ] ; xx [ 307 ] = - xx [ 176 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 305 , xx + 470 ) ; xx [ 177 ] = ( xx [ 155 ] * xx [ 3 ] + xx [ 470
] ) * xx [ 21 ] - xx [ 156 ] ; xx [ 155 ] = xx [ 21 ] * ( xx [ 471 ] - xx [
167 ] * xx [ 3 ] ) ; xx [ 167 ] = xx [ 154 ] + xx [ 21 ] * ( xx [ 472 ] + xx
[ 176 ] * xx [ 3 ] ) ; xx [ 305 ] = xx [ 177 ] ; xx [ 306 ] = xx [ 155 ] ; xx
[ 307 ] = xx [ 167 ] ; xx [ 470 ] = - ( xx [ 108 ] * xx [ 154 ] ) ; xx [ 471
] = xx [ 137 ] * xx [ 135 ] + xx [ 106 ] * xx [ 154 ] + xx [ 111 ] * xx [ 156
] ; xx [ 472 ] = - ( xx [ 108 ] * xx [ 156 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 470 , xx + 473 ) ; xx [
154 ] = xx [ 297 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 305 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 473 ) ) ; xx [ 156 ] = xx [ 298 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 305 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 473 ) ) ; xx [ 176 ] = xx [ 299 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 305 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 473 ) ) ;
xx [ 297 ] = xx [ 177 ] + xx [ 154 ] ; xx [ 298 ] = xx [ 155 ] + xx [ 156 ] ;
xx [ 299 ] = xx [ 167 ] + xx [ 176 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 297 , xx + 305 ) ; pm_math_Vector3_cross_ra ( xx + 297 , xx +
98 , xx + 470 ) ; xx [ 297 ] = xx [ 473 ] + xx [ 470 ] ; xx [ 298 ] = xx [
474 ] + xx [ 82 ] * xx [ 176 ] + xx [ 471 ] ; xx [ 299 ] = xx [ 475 ] - xx [
82 ] * xx [ 156 ] + xx [ 472 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 297 , xx + 470 ) ; xx [ 155 ] = xx [ 161 ] - ( xx [ 187 ] * xx [ 305 ]
+ xx [ 217 ] * xx [ 306 ] - xx [ 219 ] * xx [ 472 ] ) ; xx [ 161 ] = xx [ 162
] - ( xx [ 221 ] * xx [ 305 ] + xx [ 223 ] * xx [ 306 ] + xx [ 229 ] * xx [
472 ] ) ; xx [ 162 ] = xx [ 163 ] - ( xx [ 238 ] * xx [ 307 ] + xx [ 239 ] *
xx [ 470 ] - xx [ 246 ] * xx [ 471 ] ) ; xx [ 163 ] = xx [ 399 ] + ( xx [ 463
] + xx [ 349 ] * xx [ 365 ] ) * xx [ 21 ] - xx [ 82 ] ; xx [ 167 ] = ( xx [
456 ] + xx [ 349 ] * xx [ 394 ] ) * xx [ 21 ] + xx [ 405 ] ; xx [ 297 ] = xx
[ 87 ] ; xx [ 298 ] = - xx [ 163 ] ; xx [ 299 ] = - xx [ 167 ] ;
solveSymmetricPosDef ( xx + 383 , xx + 297 , 3 , 1 , xx + 305 , xx + 397 ) ;
xx [ 297 ] = xx [ 28 ] * xx [ 305 ] ; xx [ 298 ] = xx [ 29 ] * xx [ 306 ] ;
xx [ 299 ] = xx [ 29 ] * xx [ 307 ] ; pm_math_Quaternion_xform_ra ( xx + 337
, xx + 297 , xx + 397 ) ; xx [ 177 ] = xx [ 361 ] * xx [ 306 ] ; xx [ 178 ] =
xx [ 361 ] * xx [ 307 ] ; xx [ 290 ] = xx [ 324 ] * xx [ 177 ] + xx [ 178 ] *
xx [ 336 ] ; xx [ 291 ] = xx [ 302 ] * xx [ 177 ] ; xx [ 297 ] = xx [ 302 ] *
xx [ 178 ] ; xx [ 403 ] = - xx [ 290 ] ; xx [ 404 ] = xx [ 291 ] ; xx [ 405 ]
= xx [ 297 ] ; pm_math_Vector3_cross_ra ( xx + 351 , xx + 403 , xx + 470 ) ;
xx [ 298 ] = xx [ 178 ] + ( xx [ 291 ] * xx [ 249 ] + xx [ 471 ] ) * xx [ 21
] ; xx [ 403 ] = xx [ 21 ] * ( xx [ 470 ] - xx [ 290 ] * xx [ 249 ] ) ; xx [
404 ] = xx [ 298 ] ; xx [ 405 ] = xx [ 21 ] * ( xx [ 472 ] + xx [ 297 ] * xx
[ 249 ] ) - xx [ 177 ] ; pm_math_Vector3_cross_ra ( xx + 400 , xx + 403 , xx
+ 470 ) ; xx [ 177 ] = ( xx [ 347 ] * xx [ 359 ] + xx [ 373 ] ) * xx [ 21 ] -
xx [ 355 ] + xx [ 382 ] + ( xx [ 377 ] * xx [ 300 ] - xx [ 378 ] * xx [ 304 ]
) * xx [ 21 ] ; xx [ 178 ] = ( ( xx [ 397 ] + xx [ 470 ] ) * xx [ 5 ] + ( xx
[ 399 ] + xx [ 472 ] ) * xx [ 13 ] + xx [ 298 ] * xx [ 137 ] + xx [ 177 ] ) /
xx [ 429 ] ; xx [ 290 ] = xx [ 5 ] * xx [ 178 ] ; xx [ 291 ] = xx [ 13 ] * xx
[ 178 ] ; xx [ 297 ] = xx [ 290 ] * xx [ 336 ] - xx [ 302 ] * xx [ 291 ] ; xx
[ 298 ] = xx [ 324 ] * xx [ 290 ] ; xx [ 371 ] = - ( xx [ 324 ] * xx [ 291 ]
) ; xx [ 372 ] = - xx [ 297 ] ; xx [ 373 ] = xx [ 298 ] ;
pm_math_Vector3_cross_ra ( xx + 351 , xx + 371 , xx + 380 ) ; xx [ 371 ] = xx
[ 366 ] * xx [ 291 ] ; xx [ 372 ] = xx [ 376 ] * xx [ 290 ] - xx [ 374 ] * xx
[ 291 ] - xx [ 137 ] * xx [ 178 ] ; xx [ 373 ] = - ( xx [ 366 ] * xx [ 290 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 337 , xx + 371 , xx + 397 ) ;
xx [ 290 ] = xx [ 306 ] - ( ( xx [ 297 ] * xx [ 249 ] + xx [ 381 ] ) * xx [
413 ] - xx [ 415 ] * xx [ 399 ] ) ; xx [ 297 ] = xx [ 307 ] - ( xx [ 395 ] *
( ( xx [ 382 ] - xx [ 298 ] * xx [ 249 ] ) * xx [ 21 ] - xx [ 291 ] ) + xx [
415 ] * xx [ 398 ] ) ; xx [ 291 ] = xx [ 160 ] * xx [ 135 ] + xx [ 292 ] * xx
[ 154 ] + xx [ 110 ] * xx [ 156 ] + xx [ 38 ] * xx [ 176 ] + xx [ 136 ] * xx
[ 155 ] + xx [ 165 ] * xx [ 161 ] + xx [ 39 ] * xx [ 162 ] + xx [ 379 ] * xx
[ 178 ] - xx [ 375 ] * xx [ 290 ] - xx [ 343 ] * xx [ 297 ] ; xx [ 298 ] =
0.07431243570379253 ; xx [ 299 ] = 2.141422054707503e-3 ; xx [ 305 ] =
4.282844109415006e-3 ; xx [ 371 ] = xx [ 142 ] * xx [ 298 ] ; xx [ 372 ] = -
( xx [ 142 ] * xx [ 299 ] ) ; xx [ 373 ] = xx [ 305 ] * xx [ 151 ] - xx [ 150
] * xx [ 298 ] ; pm_math_Quaternion_xform_ra ( xx + 145 , xx + 371 , xx + 380
) ; xx [ 306 ] = xx [ 380 ] + xx [ 159 ] ; xx [ 307 ] = 0.07200961894323347 ;
xx [ 355 ] = xx [ 307 ] * xx [ 80 ] ; xx [ 359 ] = xx [ 307 ] * xx [ 79 ] ;
xx [ 365 ] = xx [ 138 ] - ( xx [ 78 ] * xx [ 355 ] + xx [ 81 ] * xx [ 359 ] )
* xx [ 21 ] ; xx [ 371 ] = 0.01848076211353309 ; xx [ 372 ] = xx [ 371 ] * xx
[ 80 ] ; xx [ 373 ] = xx [ 371 ] * xx [ 79 ] ; xx [ 377 ] = xx [ 170 ] - ( xx
[ 78 ] * xx [ 372 ] + xx [ 81 ] * xx [ 373 ] ) * xx [ 21 ] ; xx [ 378 ] = xx
[ 299 ] * xx [ 81 ] ; xx [ 394 ] = xx [ 299 ] * xx [ 79 ] + xx [ 298 ] * xx [
80 ] ; xx [ 397 ] = xx [ 378 ] ; xx [ 398 ] = xx [ 298 ] * xx [ 81 ] ; xx [
399 ] = - xx [ 394 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx + 397 , xx +
403 ) ; xx [ 397 ] = xx [ 298 ] + xx [ 21 ] * ( xx [ 403 ] + xx [ 78 ] * xx [
378 ] ) + xx [ 173 ] ; xx [ 470 ] = xx [ 365 ] ; xx [ 471 ] = xx [ 377 ] ; xx
[ 472 ] = xx [ 397 ] ; solveSymmetricPosDef ( xx + 124 , xx + 470 , 3 , 1 ,
xx + 473 , xx + 476 ) ; xx [ 470 ] = xx [ 57 ] * xx [ 473 ] + xx [ 83 ] * xx
[ 474 ] ; xx [ 471 ] = xx [ 88 ] * xx [ 474 ] - xx [ 89 ] * xx [ 473 ] ; xx [
472 ] = xx [ 59 ] * xx [ 475 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx +
470 , xx + 476 ) ; xx [ 470 ] = xx [ 90 ] * xx [ 475 ] ; xx [ 471 ] = - ( xx
[ 91 ] * xx [ 475 ] ) ; xx [ 472 ] = xx [ 93 ] * xx [ 474 ] - xx [ 166 ] * xx
[ 473 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 470 , xx + 479 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 479 , xx + 470 ) ; xx [ 378 ] = xx
[ 476 ] + xx [ 470 ] ; xx [ 482 ] = xx [ 298 ] * xx [ 204 ] ; xx [ 483 ] = -
( xx [ 299 ] * xx [ 204 ] ) ; xx [ 484 ] = xx [ 259 ] * xx [ 305 ] - xx [ 298
] * xx [ 254 ] ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 482 , xx + 485
) ; xx [ 398 ] = xx [ 485 ] + xx [ 286 ] ; xx [ 399 ] = 0.1486248714075851 ;
xx [ 482 ] = xx [ 298 ] * xx [ 293 ] ; xx [ 483 ] = - ( xx [ 299 ] * xx [ 293
] ) ; xx [ 484 ] = xx [ 299 ] * xx [ 203 ] - xx [ 399 ] * xx [ 195 ] ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 482 , xx + 488 ) ; xx [ 456 ] =
xx [ 488 ] + xx [ 94 ] ; xx [ 463 ] = xx [ 477 ] + xx [ 471 ] ; xx [ 482 ] =
xx [ 298 ] * xx [ 206 ] ; xx [ 483 ] = - ( xx [ 299 ] * xx [ 206 ] ) ; xx [
484 ] = xx [ 305 ] * xx [ 32 ] - xx [ 191 ] * xx [ 399 ] ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 482 , xx + 491 ) ; xx [ 305 ] =
xx [ 491 ] + xx [ 294 ] ; xx [ 399 ] = xx [ 478 ] + xx [ 472 ] ; xx [ 470 ] =
xx [ 398 ] - xx [ 378 ] ; xx [ 471 ] = xx [ 456 ] - ( xx [ 463 ] - xx [ 82 ]
* xx [ 481 ] ) ; xx [ 472 ] = xx [ 305 ] - ( xx [ 399 ] + xx [ 82 ] * xx [
480 ] ) ; solveSymmetricPosDef ( xx + 277 , xx + 470 , 3 , 1 , xx + 476 , xx
+ 482 ) ; xx [ 470 ] = xx [ 378 ] + xx [ 169 ] * xx [ 476 ] + xx [ 227 ] * xx
[ 477 ] + xx [ 240 ] * xx [ 478 ] ; xx [ 471 ] = xx [ 463 ] + xx [ 476 ] * xx
[ 97 ] + xx [ 244 ] * xx [ 477 ] + xx [ 241 ] * xx [ 478 ] ; xx [ 472 ] = xx
[ 399 ] + xx [ 476 ] * xx [ 104 ] + xx [ 107 ] * xx [ 477 ] + xx [ 224 ] * xx
[ 478 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 470 , xx + 482 ) ; xx [
470 ] = xx [ 479 ] + xx [ 476 ] * xx [ 92 ] + xx [ 168 ] * xx [ 477 ] + xx [
183 ] * xx [ 478 ] ; xx [ 471 ] = xx [ 480 ] + xx [ 476 ] * xx [ 248 ] + xx [
184 ] * xx [ 477 ] + xx [ 253 ] * xx [ 478 ] ; xx [ 472 ] = xx [ 481 ] + xx [
476 ] * xx [ 226 ] + xx [ 263 ] * xx [ 477 ] + xx [ 245 ] * xx [ 478 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 470 , xx + 479 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 479 , xx + 470 ) ; xx [ 378 ] = (
xx [ 306 ] - ( ( xx [ 484 ] + xx [ 472 ] ) * xx [ 13 ] - ( xx [ 482 ] + xx [
470 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 480 ] ) ) / xx [ 234 ] ; xx [ 399 ] =
xx [ 13 ] * xx [ 378 ] ; xx [ 463 ] = xx [ 6 ] * xx [ 399 ] ; xx [ 470 ] = xx
[ 5 ] * xx [ 378 ] ; xx [ 471 ] = xx [ 4 ] * xx [ 399 ] - xx [ 470 ] * xx [ 8
] ; xx [ 472 ] = xx [ 6 ] * xx [ 470 ] ; xx [ 479 ] = - xx [ 463 ] ; xx [ 480
] = xx [ 471 ] ; xx [ 481 ] = - xx [ 472 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 479 , xx + 482 ) ; xx [ 479 ] = ( xx [ 463 ] * xx [ 3 ] + xx [ 482
] ) * xx [ 21 ] - xx [ 470 ] ; xx [ 463 ] = xx [ 21 ] * ( xx [ 483 ] - xx [
471 ] * xx [ 3 ] ) ; xx [ 471 ] = xx [ 399 ] + xx [ 21 ] * ( xx [ 484 ] + xx
[ 472 ] * xx [ 3 ] ) ; xx [ 480 ] = xx [ 479 ] ; xx [ 481 ] = xx [ 463 ] ; xx
[ 482 ] = xx [ 471 ] ; xx [ 494 ] = - ( xx [ 108 ] * xx [ 399 ] ) ; xx [ 495
] = xx [ 137 ] * xx [ 378 ] + xx [ 106 ] * xx [ 399 ] + xx [ 111 ] * xx [ 470
] ; xx [ 496 ] = - ( xx [ 108 ] * xx [ 470 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 494 , xx + 497 ) ; xx [
399 ] = xx [ 476 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 480 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 497 ) ) ; xx [ 470 ] = xx [ 477 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 480 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 497 ) ) ; xx [ 472 ] = xx [ 478 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 480 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 497 ) ) ;
xx [ 476 ] = xx [ 479 ] + xx [ 399 ] ; xx [ 477 ] = xx [ 463 ] + xx [ 470 ] ;
xx [ 478 ] = xx [ 471 ] + xx [ 472 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 476 , xx + 479 ) ; pm_math_Vector3_cross_ra ( xx + 476 , xx +
98 , xx + 482 ) ; xx [ 476 ] = xx [ 497 ] + xx [ 482 ] ; xx [ 477 ] = xx [
498 ] + xx [ 82 ] * xx [ 472 ] + xx [ 483 ] ; xx [ 478 ] = xx [ 499 ] - xx [
82 ] * xx [ 470 ] + xx [ 484 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 476 , xx + 482 ) ; xx [ 463 ] = xx [ 473 ] - ( xx [ 187 ] * xx [ 479 ]
+ xx [ 217 ] * xx [ 480 ] - xx [ 219 ] * xx [ 484 ] ) ; xx [ 471 ] = xx [ 474
] - ( xx [ 221 ] * xx [ 479 ] + xx [ 223 ] * xx [ 480 ] + xx [ 229 ] * xx [
484 ] ) ; xx [ 473 ] = xx [ 475 ] - ( xx [ 238 ] * xx [ 481 ] + xx [ 239 ] *
xx [ 482 ] - xx [ 246 ] * xx [ 483 ] ) ; xx [ 474 ] = xx [ 160 ] * xx [ 378 ]
+ xx [ 292 ] * xx [ 399 ] + xx [ 110 ] * xx [ 470 ] + xx [ 38 ] * xx [ 472 ]
+ xx [ 136 ] * xx [ 463 ] + xx [ 165 ] * xx [ 471 ] + xx [ 39 ] * xx [ 473 ]
; xx [ 475 ] = xx [ 381 ] + xx [ 417 ] + xx [ 137 ] ; xx [ 476 ] = xx [ 21 ]
* ( xx [ 78 ] * xx [ 359 ] - xx [ 81 ] * xx [ 355 ] ) + xx [ 139 ] ; xx [ 477
] = xx [ 21 ] * ( xx [ 78 ] * xx [ 373 ] - xx [ 81 ] * xx [ 372 ] ) + xx [
171 ] ; xx [ 478 ] = ( xx [ 298 ] * xx [ 67 ] + xx [ 404 ] ) * xx [ 21 ] - xx
[ 299 ] + xx [ 174 ] ; solveSymmetricPosDef ( xx + 124 , xx + 476 , 3 , 1 ,
xx + 479 , xx + 482 ) ; xx [ 482 ] = xx [ 57 ] * xx [ 479 ] + xx [ 83 ] * xx
[ 480 ] ; xx [ 483 ] = xx [ 88 ] * xx [ 480 ] - xx [ 89 ] * xx [ 479 ] ; xx [
484 ] = xx [ 59 ] * xx [ 481 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx +
482 , xx + 494 ) ; xx [ 482 ] = xx [ 90 ] * xx [ 481 ] ; xx [ 483 ] = - ( xx
[ 91 ] * xx [ 481 ] ) ; xx [ 484 ] = xx [ 93 ] * xx [ 480 ] - xx [ 166 ] * xx
[ 479 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 482 , xx + 497 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 497 , xx + 482 ) ; xx [ 500 ] = xx
[ 494 ] + xx [ 482 ] ; xx [ 501 ] = xx [ 486 ] + xx [ 287 ] ; xx [ 502 ] = xx
[ 489 ] + xx [ 95 ] ; xx [ 503 ] = xx [ 495 ] + xx [ 483 ] ; xx [ 504 ] = xx
[ 492 ] + xx [ 295 ] ; xx [ 482 ] = xx [ 496 ] + xx [ 484 ] ; xx [ 494 ] = xx
[ 501 ] - xx [ 500 ] ; xx [ 495 ] = xx [ 502 ] - ( xx [ 503 ] - xx [ 82 ] *
xx [ 499 ] ) ; xx [ 496 ] = xx [ 504 ] - ( xx [ 482 ] + xx [ 82 ] * xx [ 498
] ) ; solveSymmetricPosDef ( xx + 277 , xx + 494 , 3 , 1 , xx + 505 , xx +
508 ) ; xx [ 494 ] = xx [ 500 ] + xx [ 169 ] * xx [ 505 ] + xx [ 227 ] * xx [
506 ] + xx [ 240 ] * xx [ 507 ] ; xx [ 495 ] = xx [ 503 ] + xx [ 505 ] * xx [
97 ] + xx [ 244 ] * xx [ 506 ] + xx [ 241 ] * xx [ 507 ] ; xx [ 496 ] = xx [
482 ] + xx [ 505 ] * xx [ 104 ] + xx [ 107 ] * xx [ 506 ] + xx [ 224 ] * xx [
507 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 494 , xx + 482 ) ; xx [
494 ] = xx [ 497 ] + xx [ 505 ] * xx [ 92 ] + xx [ 168 ] * xx [ 506 ] + xx [
183 ] * xx [ 507 ] ; xx [ 495 ] = xx [ 498 ] + xx [ 505 ] * xx [ 248 ] + xx [
184 ] * xx [ 506 ] + xx [ 253 ] * xx [ 507 ] ; xx [ 496 ] = xx [ 499 ] + xx [
505 ] * xx [ 226 ] + xx [ 263 ] * xx [ 506 ] + xx [ 245 ] * xx [ 507 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 494 , xx + 497 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 497 , xx + 494 ) ; xx [ 483 ] = (
xx [ 475 ] - ( ( xx [ 484 ] + xx [ 496 ] ) * xx [ 13 ] - ( xx [ 482 ] + xx [
494 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 498 ] ) ) / xx [ 234 ] ; xx [ 482 ] =
xx [ 13 ] * xx [ 483 ] ; xx [ 484 ] = xx [ 6 ] * xx [ 482 ] ; xx [ 494 ] = xx
[ 5 ] * xx [ 483 ] ; xx [ 495 ] = xx [ 4 ] * xx [ 482 ] - xx [ 494 ] * xx [ 8
] ; xx [ 496 ] = xx [ 6 ] * xx [ 494 ] ; xx [ 497 ] = - xx [ 484 ] ; xx [ 498
] = xx [ 495 ] ; xx [ 499 ] = - xx [ 496 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 497 , xx + 508 ) ; xx [ 497 ] = ( xx [ 484 ] * xx [ 3 ] + xx [ 508
] ) * xx [ 21 ] - xx [ 494 ] ; xx [ 484 ] = xx [ 21 ] * ( xx [ 509 ] - xx [
495 ] * xx [ 3 ] ) ; xx [ 495 ] = xx [ 482 ] + xx [ 21 ] * ( xx [ 510 ] + xx
[ 496 ] * xx [ 3 ] ) ; xx [ 498 ] = xx [ 497 ] ; xx [ 499 ] = xx [ 484 ] ; xx
[ 500 ] = xx [ 495 ] ; xx [ 508 ] = - ( xx [ 108 ] * xx [ 482 ] ) ; xx [ 509
] = xx [ 137 ] * xx [ 483 ] + xx [ 106 ] * xx [ 482 ] + xx [ 111 ] * xx [ 494
] ; xx [ 510 ] = - ( xx [ 108 ] * xx [ 494 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 508 , xx + 511 ) ; xx [
482 ] = xx [ 505 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 498 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 511 ) ) ; xx [ 494 ] = xx [ 506 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 498 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 511 ) ) ; xx [ 496 ] = xx [ 507 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 498 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 511 ) ) ;
xx [ 498 ] = xx [ 497 ] + xx [ 482 ] ; xx [ 499 ] = xx [ 484 ] + xx [ 494 ] ;
xx [ 500 ] = xx [ 495 ] + xx [ 496 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 498 , xx + 505 ) ; pm_math_Vector3_cross_ra ( xx + 498 , xx +
98 , xx + 508 ) ; xx [ 497 ] = xx [ 511 ] + xx [ 508 ] ; xx [ 498 ] = xx [
512 ] + xx [ 82 ] * xx [ 496 ] + xx [ 509 ] ; xx [ 499 ] = xx [ 513 ] - xx [
82 ] * xx [ 494 ] + xx [ 510 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 497 , xx + 508 ) ; xx [ 484 ] = xx [ 479 ] - ( xx [ 187 ] * xx [ 505 ]
+ xx [ 217 ] * xx [ 506 ] - xx [ 219 ] * xx [ 510 ] ) ; xx [ 479 ] = xx [ 480
] - ( xx [ 221 ] * xx [ 505 ] + xx [ 223 ] * xx [ 506 ] + xx [ 229 ] * xx [
510 ] ) ; xx [ 480 ] = xx [ 481 ] - ( xx [ 238 ] * xx [ 507 ] + xx [ 239 ] *
xx [ 508 ] - xx [ 246 ] * xx [ 509 ] ) ; xx [ 481 ] = xx [ 160 ] * xx [ 483 ]
+ xx [ 292 ] * xx [ 482 ] + xx [ 110 ] * xx [ 494 ] + xx [ 38 ] * xx [ 496 ]
+ xx [ 136 ] * xx [ 484 ] + xx [ 165 ] * xx [ 479 ] + xx [ 39 ] * xx [ 480 ]
; xx [ 380 ] = xx [ 382 ] + xx [ 152 ] ; xx [ 381 ] = ( xx [ 79 ] * xx [ 359
] + xx [ 80 ] * xx [ 355 ] ) * xx [ 21 ] - xx [ 307 ] + xx [ 140 ] ; xx [ 307
] = ( xx [ 79 ] * xx [ 373 ] + xx [ 80 ] * xx [ 372 ] ) * xx [ 21 ] - xx [
371 ] + xx [ 172 ] ; xx [ 355 ] = ( xx [ 405 ] - xx [ 78 ] * xx [ 394 ] ) *
xx [ 21 ] + xx [ 175 ] ; xx [ 371 ] = xx [ 381 ] ; xx [ 372 ] = xx [ 307 ] ;
xx [ 373 ] = xx [ 355 ] ; solveSymmetricPosDef ( xx + 124 , xx + 371 , 3 , 1
, xx + 403 , xx + 497 ) ; xx [ 371 ] = xx [ 57 ] * xx [ 403 ] + xx [ 83 ] *
xx [ 404 ] ; xx [ 372 ] = xx [ 88 ] * xx [ 404 ] - xx [ 89 ] * xx [ 403 ] ;
xx [ 373 ] = xx [ 59 ] * xx [ 405 ] ; pm_math_Quaternion_xform_ra ( xx + 42 ,
xx + 371 , xx + 497 ) ; xx [ 371 ] = xx [ 90 ] * xx [ 405 ] ; xx [ 372 ] = -
( xx [ 91 ] * xx [ 405 ] ) ; xx [ 373 ] = xx [ 93 ] * xx [ 404 ] - xx [ 166 ]
* xx [ 403 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 371 , xx + 505 )
; pm_math_Vector3_cross_ra ( xx + 98 , xx + 505 , xx + 371 ) ; xx [ 359 ] =
xx [ 497 ] + xx [ 371 ] ; xx [ 382 ] = xx [ 487 ] + xx [ 288 ] ; xx [ 394 ] =
xx [ 490 ] + xx [ 96 ] ; xx [ 485 ] = xx [ 498 ] + xx [ 372 ] ; xx [ 486 ] =
xx [ 493 ] + xx [ 296 ] ; xx [ 371 ] = xx [ 499 ] + xx [ 373 ] ; xx [ 487 ] =
xx [ 382 ] - xx [ 359 ] ; xx [ 488 ] = xx [ 394 ] - ( xx [ 485 ] - xx [ 82 ]
* xx [ 507 ] ) ; xx [ 489 ] = xx [ 486 ] - ( xx [ 371 ] + xx [ 82 ] * xx [
506 ] ) ; solveSymmetricPosDef ( xx + 277 , xx + 487 , 3 , 1 , xx + 490 , xx
+ 497 ) ; xx [ 487 ] = xx [ 359 ] + xx [ 169 ] * xx [ 490 ] + xx [ 227 ] * xx
[ 491 ] + xx [ 240 ] * xx [ 492 ] ; xx [ 488 ] = xx [ 485 ] + xx [ 490 ] * xx
[ 97 ] + xx [ 244 ] * xx [ 491 ] + xx [ 241 ] * xx [ 492 ] ; xx [ 489 ] = xx
[ 371 ] + xx [ 490 ] * xx [ 104 ] + xx [ 107 ] * xx [ 491 ] + xx [ 224 ] * xx
[ 492 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 487 , xx + 371 ) ; xx [
487 ] = xx [ 505 ] + xx [ 490 ] * xx [ 92 ] + xx [ 168 ] * xx [ 491 ] + xx [
183 ] * xx [ 492 ] ; xx [ 488 ] = xx [ 506 ] + xx [ 490 ] * xx [ 248 ] + xx [
184 ] * xx [ 491 ] + xx [ 253 ] * xx [ 492 ] ; xx [ 489 ] = xx [ 507 ] + xx [
490 ] * xx [ 226 ] + xx [ 263 ] * xx [ 491 ] + xx [ 245 ] * xx [ 492 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 487 , xx + 497 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 497 , xx + 487 ) ; xx [ 359 ] = (
xx [ 380 ] - ( ( xx [ 373 ] + xx [ 489 ] ) * xx [ 13 ] - ( xx [ 371 ] + xx [
487 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 498 ] ) ) / xx [ 234 ] ; xx [ 371 ] =
xx [ 13 ] * xx [ 359 ] ; xx [ 372 ] = xx [ 6 ] * xx [ 371 ] ; xx [ 373 ] = xx
[ 5 ] * xx [ 359 ] ; xx [ 485 ] = xx [ 4 ] * xx [ 371 ] - xx [ 373 ] * xx [ 8
] ; xx [ 487 ] = xx [ 6 ] * xx [ 373 ] ; xx [ 497 ] = - xx [ 372 ] ; xx [ 498
] = xx [ 485 ] ; xx [ 499 ] = - xx [ 487 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 497 , xx + 505 ) ; xx [ 488 ] = ( xx [ 372 ] * xx [ 3 ] + xx [ 505
] ) * xx [ 21 ] - xx [ 373 ] ; xx [ 372 ] = xx [ 21 ] * ( xx [ 506 ] - xx [
485 ] * xx [ 3 ] ) ; xx [ 485 ] = xx [ 371 ] + xx [ 21 ] * ( xx [ 507 ] + xx
[ 487 ] * xx [ 3 ] ) ; xx [ 497 ] = xx [ 488 ] ; xx [ 498 ] = xx [ 372 ] ; xx
[ 499 ] = xx [ 485 ] ; xx [ 505 ] = - ( xx [ 108 ] * xx [ 371 ] ) ; xx [ 506
] = xx [ 137 ] * xx [ 359 ] + xx [ 106 ] * xx [ 371 ] + xx [ 111 ] * xx [ 373
] ; xx [ 507 ] = - ( xx [ 108 ] * xx [ 373 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 505 , xx + 508 ) ; xx [
371 ] = xx [ 490 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 497 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 508 ) ) ; xx [ 373 ] = xx [ 491 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 497 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 508 ) ) ; xx [ 487 ] = xx [ 492 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 497 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 508 ) ) ;
xx [ 489 ] = xx [ 488 ] + xx [ 371 ] ; xx [ 490 ] = xx [ 372 ] + xx [ 373 ] ;
xx [ 491 ] = xx [ 485 ] + xx [ 487 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 489 , xx + 497 ) ; pm_math_Vector3_cross_ra ( xx + 489 , xx +
98 , xx + 505 ) ; xx [ 488 ] = xx [ 508 ] + xx [ 505 ] ; xx [ 489 ] = xx [
509 ] + xx [ 82 ] * xx [ 487 ] + xx [ 506 ] ; xx [ 490 ] = xx [ 510 ] - xx [
82 ] * xx [ 373 ] + xx [ 507 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 488 , xx + 491 ) ; xx [ 372 ] = xx [ 403 ] - ( xx [ 187 ] * xx [ 497 ]
+ xx [ 217 ] * xx [ 498 ] - xx [ 219 ] * xx [ 493 ] ) ; xx [ 403 ] = xx [ 404
] - ( xx [ 221 ] * xx [ 497 ] + xx [ 223 ] * xx [ 498 ] + xx [ 229 ] * xx [
493 ] ) ; xx [ 404 ] = xx [ 405 ] - ( xx [ 238 ] * xx [ 499 ] + xx [ 239 ] *
xx [ 491 ] - xx [ 246 ] * xx [ 492 ] ) ; xx [ 405 ] = xx [ 160 ] * xx [ 359 ]
+ xx [ 292 ] * xx [ 371 ] + xx [ 110 ] * xx [ 373 ] + xx [ 38 ] * xx [ 487 ]
+ xx [ 136 ] * xx [ 372 ] + xx [ 165 ] * xx [ 403 ] + xx [ 39 ] * xx [ 404 ]
; xx [ 485 ] = 0.06466571354218477 ; xx [ 488 ] = 0.03667791270951477 ; xx [
489 ] = 0.07335582541902955 ; xx [ 490 ] = xx [ 142 ] * xx [ 485 ] ; xx [ 491
] = xx [ 142 ] * xx [ 488 ] ; xx [ 492 ] = - ( xx [ 150 ] * xx [ 485 ] + xx [
489 ] * xx [ 151 ] ) ; pm_math_Quaternion_xform_ra ( xx + 145 , xx + 490 , xx
+ 497 ) ; xx [ 490 ] = xx [ 497 ] + xx [ 159 ] ; xx [ 491 ] =
0.05200961894323338 ; xx [ 492 ] = xx [ 491 ] * xx [ 80 ] ; xx [ 493 ] = xx [
491 ] * xx [ 79 ] ; xx [ 495 ] = xx [ 138 ] - ( xx [ 78 ] * xx [ 492 ] + xx [
81 ] * xx [ 493 ] ) * xx [ 21 ] ; xx [ 500 ] = 0.05312177826491074 ; xx [ 503
] = xx [ 500 ] * xx [ 80 ] ; xx [ 505 ] = xx [ 500 ] * xx [ 79 ] ; xx [ 506 ]
= xx [ 170 ] - ( xx [ 78 ] * xx [ 503 ] + xx [ 81 ] * xx [ 505 ] ) * xx [ 21
] ; xx [ 507 ] = xx [ 488 ] * xx [ 81 ] ; xx [ 508 ] = xx [ 488 ] * xx [ 79 ]
- xx [ 485 ] * xx [ 80 ] ; xx [ 509 ] = - xx [ 507 ] ; xx [ 510 ] = xx [ 485
] * xx [ 81 ] ; xx [ 511 ] = xx [ 508 ] ; pm_math_Vector3_cross_ra ( xx + 79
, xx + 509 , xx + 512 ) ; xx [ 509 ] = xx [ 485 ] + xx [ 21 ] * ( xx [ 512 ]
- xx [ 78 ] * xx [ 507 ] ) + xx [ 173 ] ; xx [ 515 ] = xx [ 495 ] ; xx [ 516
] = xx [ 506 ] ; xx [ 517 ] = xx [ 509 ] ; solveSymmetricPosDef ( xx + 124 ,
xx + 515 , 3 , 1 , xx + 518 , xx + 521 ) ; xx [ 515 ] = xx [ 57 ] * xx [ 518
] + xx [ 83 ] * xx [ 519 ] ; xx [ 516 ] = xx [ 88 ] * xx [ 519 ] - xx [ 89 ]
* xx [ 518 ] ; xx [ 517 ] = xx [ 59 ] * xx [ 520 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 515 , xx + 521 ) ; xx [ 515 ] =
xx [ 90 ] * xx [ 520 ] ; xx [ 516 ] = - ( xx [ 91 ] * xx [ 520 ] ) ; xx [ 517
] = xx [ 93 ] * xx [ 519 ] - xx [ 166 ] * xx [ 518 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 515 , xx + 524 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 524 , xx + 515 ) ; xx [ 507 ] = xx
[ 521 ] + xx [ 515 ] ; xx [ 527 ] = xx [ 485 ] * xx [ 204 ] ; xx [ 528 ] = xx
[ 488 ] * xx [ 204 ] ; xx [ 529 ] = - ( xx [ 485 ] * xx [ 254 ] + xx [ 259 ]
* xx [ 489 ] ) ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 527 , xx + 530
) ; xx [ 510 ] = xx [ 530 ] + xx [ 286 ] ; xx [ 511 ] = 0.1293314270843695 ;
xx [ 527 ] = xx [ 485 ] * xx [ 293 ] ; xx [ 528 ] = xx [ 488 ] * xx [ 293 ] ;
xx [ 529 ] = - ( xx [ 511 ] * xx [ 195 ] + xx [ 488 ] * xx [ 203 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 527 , xx + 533 ) ; xx [ 527 ] =
xx [ 533 ] + xx [ 94 ] ; xx [ 528 ] = xx [ 522 ] + xx [ 516 ] ; xx [ 536 ] =
xx [ 485 ] * xx [ 206 ] ; xx [ 537 ] = xx [ 488 ] * xx [ 206 ] ; xx [ 538 ] =
- ( xx [ 191 ] * xx [ 511 ] + xx [ 489 ] * xx [ 32 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 536 , xx + 539 ) ; xx [ 489 ] =
xx [ 539 ] + xx [ 294 ] ; xx [ 511 ] = xx [ 523 ] + xx [ 517 ] ; xx [ 515 ] =
xx [ 510 ] - xx [ 507 ] ; xx [ 516 ] = xx [ 527 ] - ( xx [ 528 ] - xx [ 82 ]
* xx [ 526 ] ) ; xx [ 517 ] = xx [ 489 ] - ( xx [ 511 ] + xx [ 82 ] * xx [
525 ] ) ; solveSymmetricPosDef ( xx + 277 , xx + 515 , 3 , 1 , xx + 521 , xx
+ 536 ) ; xx [ 515 ] = xx [ 507 ] + xx [ 169 ] * xx [ 521 ] + xx [ 227 ] * xx
[ 522 ] + xx [ 240 ] * xx [ 523 ] ; xx [ 516 ] = xx [ 528 ] + xx [ 521 ] * xx
[ 97 ] + xx [ 244 ] * xx [ 522 ] + xx [ 241 ] * xx [ 523 ] ; xx [ 517 ] = xx
[ 511 ] + xx [ 521 ] * xx [ 104 ] + xx [ 107 ] * xx [ 522 ] + xx [ 224 ] * xx
[ 523 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 515 , xx + 536 ) ; xx [
515 ] = xx [ 524 ] + xx [ 521 ] * xx [ 92 ] + xx [ 168 ] * xx [ 522 ] + xx [
183 ] * xx [ 523 ] ; xx [ 516 ] = xx [ 525 ] + xx [ 521 ] * xx [ 248 ] + xx [
184 ] * xx [ 522 ] + xx [ 253 ] * xx [ 523 ] ; xx [ 517 ] = xx [ 526 ] + xx [
521 ] * xx [ 226 ] + xx [ 263 ] * xx [ 522 ] + xx [ 245 ] * xx [ 523 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 515 , xx + 524 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 524 , xx + 515 ) ; xx [ 507 ] = (
xx [ 490 ] - ( ( xx [ 538 ] + xx [ 517 ] ) * xx [ 13 ] - ( xx [ 536 ] + xx [
515 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 525 ] ) ) / xx [ 234 ] ; xx [ 511 ] =
xx [ 13 ] * xx [ 507 ] ; xx [ 515 ] = xx [ 6 ] * xx [ 511 ] ; xx [ 516 ] = xx
[ 5 ] * xx [ 507 ] ; xx [ 517 ] = xx [ 4 ] * xx [ 511 ] - xx [ 516 ] * xx [ 8
] ; xx [ 524 ] = xx [ 6 ] * xx [ 516 ] ; xx [ 536 ] = - xx [ 515 ] ; xx [ 537
] = xx [ 517 ] ; xx [ 538 ] = - xx [ 524 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 536 , xx + 542 ) ; xx [ 525 ] = ( xx [ 515 ] * xx [ 3 ] + xx [ 542
] ) * xx [ 21 ] - xx [ 516 ] ; xx [ 515 ] = xx [ 21 ] * ( xx [ 543 ] - xx [
517 ] * xx [ 3 ] ) ; xx [ 517 ] = xx [ 511 ] + xx [ 21 ] * ( xx [ 544 ] + xx
[ 524 ] * xx [ 3 ] ) ; xx [ 536 ] = xx [ 525 ] ; xx [ 537 ] = xx [ 515 ] ; xx
[ 538 ] = xx [ 517 ] ; xx [ 542 ] = - ( xx [ 108 ] * xx [ 511 ] ) ; xx [ 543
] = xx [ 137 ] * xx [ 507 ] + xx [ 106 ] * xx [ 511 ] + xx [ 111 ] * xx [ 516
] ; xx [ 544 ] = - ( xx [ 108 ] * xx [ 516 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 542 , xx + 545 ) ; xx [
511 ] = xx [ 521 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 536 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 545 ) ) ; xx [ 516 ] = xx [ 522 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 536 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 545 ) ) ; xx [ 521 ] = xx [ 523 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 536 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 545 ) ) ;
xx [ 522 ] = xx [ 525 ] + xx [ 511 ] ; xx [ 523 ] = xx [ 515 ] + xx [ 516 ] ;
xx [ 524 ] = xx [ 517 ] + xx [ 521 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 522 , xx + 536 ) ; pm_math_Vector3_cross_ra ( xx + 522 , xx +
98 , xx + 542 ) ; xx [ 522 ] = xx [ 545 ] + xx [ 542 ] ; xx [ 523 ] = xx [
546 ] + xx [ 82 ] * xx [ 521 ] + xx [ 543 ] ; xx [ 524 ] = xx [ 547 ] - xx [
82 ] * xx [ 516 ] + xx [ 544 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 522 , xx + 542 ) ; xx [ 515 ] = xx [ 518 ] - ( xx [ 187 ] * xx [ 536 ]
+ xx [ 217 ] * xx [ 537 ] - xx [ 219 ] * xx [ 544 ] ) ; xx [ 517 ] = xx [ 519
] - ( xx [ 221 ] * xx [ 536 ] + xx [ 223 ] * xx [ 537 ] + xx [ 229 ] * xx [
544 ] ) ; xx [ 518 ] = xx [ 520 ] - ( xx [ 238 ] * xx [ 538 ] + xx [ 239 ] *
xx [ 542 ] - xx [ 246 ] * xx [ 543 ] ) ; xx [ 519 ] = xx [ 160 ] * xx [ 507 ]
+ xx [ 292 ] * xx [ 511 ] + xx [ 110 ] * xx [ 516 ] + xx [ 38 ] * xx [ 521 ]
+ xx [ 136 ] * xx [ 515 ] + xx [ 165 ] * xx [ 517 ] + xx [ 39 ] * xx [ 518 ]
; xx [ 520 ] = xx [ 498 ] + xx [ 417 ] + xx [ 137 ] ; xx [ 522 ] = xx [ 21 ]
* ( xx [ 78 ] * xx [ 493 ] - xx [ 81 ] * xx [ 492 ] ) + xx [ 139 ] ; xx [ 523
] = xx [ 21 ] * ( xx [ 78 ] * xx [ 505 ] - xx [ 81 ] * xx [ 503 ] ) + xx [
171 ] ; xx [ 524 ] = xx [ 488 ] + ( xx [ 485 ] * xx [ 67 ] + xx [ 513 ] ) *
xx [ 21 ] + xx [ 174 ] ; solveSymmetricPosDef ( xx + 124 , xx + 522 , 3 , 1 ,
xx + 536 , xx + 542 ) ; xx [ 542 ] = xx [ 57 ] * xx [ 536 ] + xx [ 83 ] * xx
[ 537 ] ; xx [ 543 ] = xx [ 88 ] * xx [ 537 ] - xx [ 89 ] * xx [ 536 ] ; xx [
544 ] = xx [ 59 ] * xx [ 538 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx +
542 , xx + 545 ) ; xx [ 542 ] = xx [ 90 ] * xx [ 538 ] ; xx [ 543 ] = - ( xx
[ 91 ] * xx [ 538 ] ) ; xx [ 544 ] = xx [ 93 ] * xx [ 537 ] - xx [ 166 ] * xx
[ 536 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 542 , xx + 548 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 548 , xx + 542 ) ; xx [ 525 ] = xx
[ 545 ] + xx [ 542 ] ; xx [ 526 ] = xx [ 531 ] + xx [ 287 ] ; xx [ 528 ] = xx
[ 534 ] + xx [ 95 ] ; xx [ 529 ] = xx [ 546 ] + xx [ 543 ] ; xx [ 551 ] = xx
[ 540 ] + xx [ 295 ] ; xx [ 542 ] = xx [ 547 ] + xx [ 544 ] ; xx [ 543 ] = xx
[ 526 ] - xx [ 525 ] ; xx [ 544 ] = xx [ 528 ] - ( xx [ 529 ] - xx [ 82 ] *
xx [ 550 ] ) ; xx [ 545 ] = xx [ 551 ] - ( xx [ 542 ] + xx [ 82 ] * xx [ 549
] ) ; solveSymmetricPosDef ( xx + 277 , xx + 543 , 3 , 1 , xx + 552 , xx +
555 ) ; xx [ 543 ] = xx [ 525 ] + xx [ 169 ] * xx [ 552 ] + xx [ 227 ] * xx [
553 ] + xx [ 240 ] * xx [ 554 ] ; xx [ 544 ] = xx [ 529 ] + xx [ 552 ] * xx [
97 ] + xx [ 244 ] * xx [ 553 ] + xx [ 241 ] * xx [ 554 ] ; xx [ 545 ] = xx [
542 ] + xx [ 552 ] * xx [ 104 ] + xx [ 107 ] * xx [ 553 ] + xx [ 224 ] * xx [
554 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 543 , xx + 555 ) ; xx [
542 ] = xx [ 548 ] + xx [ 552 ] * xx [ 92 ] + xx [ 168 ] * xx [ 553 ] + xx [
183 ] * xx [ 554 ] ; xx [ 543 ] = xx [ 549 ] + xx [ 552 ] * xx [ 248 ] + xx [
184 ] * xx [ 553 ] + xx [ 253 ] * xx [ 554 ] ; xx [ 544 ] = xx [ 550 ] + xx [
552 ] * xx [ 226 ] + xx [ 263 ] * xx [ 553 ] + xx [ 245 ] * xx [ 554 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 542 , xx + 545 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 545 , xx + 542 ) ; xx [ 525 ] = (
xx [ 520 ] - ( ( xx [ 557 ] + xx [ 544 ] ) * xx [ 13 ] - ( xx [ 555 ] + xx [
542 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 546 ] ) ) / xx [ 234 ] ; xx [ 529 ] =
xx [ 13 ] * xx [ 525 ] ; xx [ 542 ] = xx [ 6 ] * xx [ 529 ] ; xx [ 543 ] = xx
[ 5 ] * xx [ 525 ] ; xx [ 544 ] = xx [ 4 ] * xx [ 529 ] - xx [ 543 ] * xx [ 8
] ; xx [ 545 ] = xx [ 6 ] * xx [ 543 ] ; xx [ 546 ] = - xx [ 542 ] ; xx [ 547
] = xx [ 544 ] ; xx [ 548 ] = - xx [ 545 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 546 , xx + 555 ) ; xx [ 546 ] = ( xx [ 542 ] * xx [ 3 ] + xx [ 555
] ) * xx [ 21 ] - xx [ 543 ] ; xx [ 542 ] = xx [ 21 ] * ( xx [ 556 ] - xx [
544 ] * xx [ 3 ] ) ; xx [ 544 ] = xx [ 529 ] + xx [ 21 ] * ( xx [ 557 ] + xx
[ 545 ] * xx [ 3 ] ) ; xx [ 547 ] = xx [ 546 ] ; xx [ 548 ] = xx [ 542 ] ; xx
[ 549 ] = xx [ 544 ] ; xx [ 555 ] = - ( xx [ 108 ] * xx [ 529 ] ) ; xx [ 556
] = xx [ 137 ] * xx [ 525 ] + xx [ 106 ] * xx [ 529 ] + xx [ 111 ] * xx [ 543
] ; xx [ 557 ] = - ( xx [ 108 ] * xx [ 543 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 555 , xx + 558 ) ; xx [
529 ] = xx [ 552 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 547 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 558 ) ) ; xx [ 543 ] = xx [ 553 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 547 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 558 ) ) ; xx [ 545 ] = xx [ 554 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 547 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 558 ) ) ;
xx [ 547 ] = xx [ 546 ] + xx [ 529 ] ; xx [ 548 ] = xx [ 542 ] + xx [ 543 ] ;
xx [ 549 ] = xx [ 544 ] + xx [ 545 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 547 , xx + 552 ) ; pm_math_Vector3_cross_ra ( xx + 547 , xx +
98 , xx + 555 ) ; xx [ 546 ] = xx [ 558 ] + xx [ 555 ] ; xx [ 547 ] = xx [
559 ] + xx [ 82 ] * xx [ 545 ] + xx [ 556 ] ; xx [ 548 ] = xx [ 560 ] - xx [
82 ] * xx [ 543 ] + xx [ 557 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 546 , xx + 555 ) ; xx [ 542 ] = xx [ 536 ] - ( xx [ 187 ] * xx [ 552 ]
+ xx [ 217 ] * xx [ 553 ] - xx [ 219 ] * xx [ 557 ] ) ; xx [ 536 ] = xx [ 537
] - ( xx [ 221 ] * xx [ 552 ] + xx [ 223 ] * xx [ 553 ] + xx [ 229 ] * xx [
557 ] ) ; xx [ 537 ] = xx [ 538 ] - ( xx [ 238 ] * xx [ 554 ] + xx [ 239 ] *
xx [ 555 ] - xx [ 246 ] * xx [ 556 ] ) ; xx [ 538 ] = xx [ 160 ] * xx [ 525 ]
+ xx [ 292 ] * xx [ 529 ] + xx [ 110 ] * xx [ 543 ] + xx [ 38 ] * xx [ 545 ]
+ xx [ 136 ] * xx [ 542 ] + xx [ 165 ] * xx [ 536 ] + xx [ 39 ] * xx [ 537 ]
; xx [ 497 ] = xx [ 499 ] + xx [ 152 ] ; xx [ 498 ] = ( xx [ 79 ] * xx [ 493
] + xx [ 80 ] * xx [ 492 ] ) * xx [ 21 ] - xx [ 491 ] + xx [ 140 ] ; xx [ 491
] = ( xx [ 79 ] * xx [ 505 ] + xx [ 80 ] * xx [ 503 ] ) * xx [ 21 ] - xx [
500 ] + xx [ 172 ] ; xx [ 492 ] = ( xx [ 78 ] * xx [ 508 ] + xx [ 514 ] ) *
xx [ 21 ] + xx [ 175 ] ; xx [ 512 ] = xx [ 498 ] ; xx [ 513 ] = xx [ 491 ] ;
xx [ 514 ] = xx [ 492 ] ; solveSymmetricPosDef ( xx + 124 , xx + 512 , 3 , 1
, xx + 546 , xx + 552 ) ; xx [ 512 ] = xx [ 57 ] * xx [ 546 ] + xx [ 83 ] *
xx [ 547 ] ; xx [ 513 ] = xx [ 88 ] * xx [ 547 ] - xx [ 89 ] * xx [ 546 ] ;
xx [ 514 ] = xx [ 59 ] * xx [ 548 ] ; pm_math_Quaternion_xform_ra ( xx + 42 ,
xx + 512 , xx + 552 ) ; xx [ 512 ] = xx [ 90 ] * xx [ 548 ] ; xx [ 513 ] = -
( xx [ 91 ] * xx [ 548 ] ) ; xx [ 514 ] = xx [ 93 ] * xx [ 547 ] - xx [ 166 ]
* xx [ 546 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 512 , xx + 555 )
; pm_math_Vector3_cross_ra ( xx + 98 , xx + 555 , xx + 512 ) ; xx [ 493 ] =
xx [ 552 ] + xx [ 512 ] ; xx [ 499 ] = xx [ 532 ] + xx [ 288 ] ; xx [ 500 ] =
xx [ 535 ] + xx [ 96 ] ; xx [ 503 ] = xx [ 553 ] + xx [ 513 ] ; xx [ 505 ] =
xx [ 541 ] + xx [ 296 ] ; xx [ 508 ] = xx [ 554 ] + xx [ 514 ] ; xx [ 512 ] =
xx [ 499 ] - xx [ 493 ] ; xx [ 513 ] = xx [ 500 ] - ( xx [ 503 ] - xx [ 82 ]
* xx [ 557 ] ) ; xx [ 514 ] = xx [ 505 ] - ( xx [ 508 ] + xx [ 82 ] * xx [
556 ] ) ; solveSymmetricPosDef ( xx + 277 , xx + 512 , 3 , 1 , xx + 530 , xx
+ 533 ) ; xx [ 512 ] = xx [ 493 ] + xx [ 169 ] * xx [ 530 ] + xx [ 227 ] * xx
[ 531 ] + xx [ 240 ] * xx [ 532 ] ; xx [ 513 ] = xx [ 503 ] + xx [ 530 ] * xx
[ 97 ] + xx [ 244 ] * xx [ 531 ] + xx [ 241 ] * xx [ 532 ] ; xx [ 514 ] = xx
[ 508 ] + xx [ 530 ] * xx [ 104 ] + xx [ 107 ] * xx [ 531 ] + xx [ 224 ] * xx
[ 532 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 512 , xx + 533 ) ; xx [
512 ] = xx [ 555 ] + xx [ 530 ] * xx [ 92 ] + xx [ 168 ] * xx [ 531 ] + xx [
183 ] * xx [ 532 ] ; xx [ 513 ] = xx [ 556 ] + xx [ 530 ] * xx [ 248 ] + xx [
184 ] * xx [ 531 ] + xx [ 253 ] * xx [ 532 ] ; xx [ 514 ] = xx [ 557 ] + xx [
530 ] * xx [ 226 ] + xx [ 263 ] * xx [ 531 ] + xx [ 245 ] * xx [ 532 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 512 , xx + 539 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 539 , xx + 512 ) ; xx [ 493 ] = (
xx [ 497 ] - ( ( xx [ 535 ] + xx [ 514 ] ) * xx [ 13 ] - ( xx [ 533 ] + xx [
512 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 540 ] ) ) / xx [ 234 ] ; xx [ 503 ] =
xx [ 13 ] * xx [ 493 ] ; xx [ 508 ] = xx [ 6 ] * xx [ 503 ] ; xx [ 512 ] = xx
[ 5 ] * xx [ 493 ] ; xx [ 513 ] = xx [ 4 ] * xx [ 503 ] - xx [ 512 ] * xx [ 8
] ; xx [ 514 ] = xx [ 6 ] * xx [ 512 ] ; xx [ 533 ] = - xx [ 508 ] ; xx [ 534
] = xx [ 513 ] ; xx [ 535 ] = - xx [ 514 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 533 , xx + 539 ) ; xx [ 533 ] = ( xx [ 508 ] * xx [ 3 ] + xx [ 539
] ) * xx [ 21 ] - xx [ 512 ] ; xx [ 508 ] = xx [ 21 ] * ( xx [ 540 ] - xx [
513 ] * xx [ 3 ] ) ; xx [ 513 ] = xx [ 503 ] + xx [ 21 ] * ( xx [ 541 ] + xx
[ 514 ] * xx [ 3 ] ) ; xx [ 539 ] = xx [ 533 ] ; xx [ 540 ] = xx [ 508 ] ; xx
[ 541 ] = xx [ 513 ] ; xx [ 552 ] = - ( xx [ 108 ] * xx [ 503 ] ) ; xx [ 553
] = xx [ 137 ] * xx [ 493 ] + xx [ 106 ] * xx [ 503 ] + xx [ 111 ] * xx [ 512
] ; xx [ 554 ] = - ( xx [ 108 ] * xx [ 512 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 552 , xx + 555 ) ; xx [
503 ] = xx [ 530 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 539 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 555 ) ) ; xx [ 512 ] = xx [ 531 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 539 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 555 ) ) ; xx [ 514 ] = xx [ 532 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 539 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 555 ) ) ;
xx [ 530 ] = xx [ 533 ] + xx [ 503 ] ; xx [ 531 ] = xx [ 508 ] + xx [ 512 ] ;
xx [ 532 ] = xx [ 513 ] + xx [ 514 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 530 , xx + 533 ) ; pm_math_Vector3_cross_ra ( xx + 530 , xx +
98 , xx + 539 ) ; xx [ 530 ] = xx [ 555 ] + xx [ 539 ] ; xx [ 531 ] = xx [
556 ] + xx [ 82 ] * xx [ 514 ] + xx [ 540 ] ; xx [ 532 ] = xx [ 557 ] - xx [
82 ] * xx [ 512 ] + xx [ 541 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 530 , xx + 539 ) ; xx [ 508 ] = xx [ 546 ] - ( xx [ 187 ] * xx [ 533 ]
+ xx [ 217 ] * xx [ 534 ] - xx [ 219 ] * xx [ 541 ] ) ; xx [ 513 ] = xx [ 547
] - ( xx [ 221 ] * xx [ 533 ] + xx [ 223 ] * xx [ 534 ] + xx [ 229 ] * xx [
541 ] ) ; xx [ 530 ] = xx [ 548 ] - ( xx [ 238 ] * xx [ 535 ] + xx [ 239 ] *
xx [ 539 ] - xx [ 246 ] * xx [ 540 ] ) ; xx [ 531 ] = xx [ 160 ] * xx [ 493 ]
+ xx [ 292 ] * xx [ 503 ] + xx [ 110 ] * xx [ 512 ] + xx [ 38 ] * xx [ 514 ]
+ xx [ 136 ] * xx [ 508 ] + xx [ 165 ] * xx [ 513 ] + xx [ 39 ] * xx [ 530 ]
; xx [ 532 ] = 0.0640968609353203 ; xx [ 533 ] = 0.03766319432662211 ; xx [
534 ] = 0.07532638865324422 ; xx [ 539 ] = - ( xx [ 142 ] * xx [ 532 ] ) ; xx
[ 540 ] = xx [ 142 ] * xx [ 533 ] ; xx [ 541 ] = xx [ 150 ] * xx [ 532 ] - xx
[ 534 ] * xx [ 151 ] ; pm_math_Quaternion_xform_ra ( xx + 145 , xx + 539 , xx
+ 546 ) ; xx [ 535 ] = xx [ 546 ] + xx [ 159 ] ; xx [ 539 ] =
0.07200961894323345 ; xx [ 540 ] = xx [ 539 ] * xx [ 80 ] ; xx [ 541 ] = xx [
539 ] * xx [ 79 ] ; xx [ 544 ] = ( xx [ 78 ] * xx [ 540 ] + xx [ 81 ] * xx [
541 ] ) * xx [ 21 ] + xx [ 138 ] ; xx [ 549 ] = 0.01848076211353319 ; xx [
550 ] = xx [ 549 ] * xx [ 80 ] ; xx [ 552 ] = xx [ 549 ] * xx [ 79 ] ; xx [
553 ] = xx [ 170 ] - ( xx [ 78 ] * xx [ 550 ] + xx [ 81 ] * xx [ 552 ] ) * xx
[ 21 ] ; xx [ 554 ] = xx [ 533 ] * xx [ 81 ] ; xx [ 555 ] = xx [ 533 ] * xx [
79 ] + xx [ 532 ] * xx [ 80 ] ; xx [ 556 ] = - xx [ 554 ] ; xx [ 557 ] = - (
xx [ 532 ] * xx [ 81 ] ) ; xx [ 558 ] = xx [ 555 ] ; pm_math_Vector3_cross_ra
( xx + 79 , xx + 556 , xx + 559 ) ; xx [ 556 ] = xx [ 21 ] * ( xx [ 559 ] -
xx [ 78 ] * xx [ 554 ] ) - xx [ 532 ] + xx [ 173 ] ; xx [ 562 ] = xx [ 544 ]
; xx [ 563 ] = xx [ 553 ] ; xx [ 564 ] = xx [ 556 ] ; solveSymmetricPosDef (
xx + 124 , xx + 562 , 3 , 1 , xx + 565 , xx + 568 ) ; xx [ 562 ] = xx [ 57 ]
* xx [ 565 ] + xx [ 83 ] * xx [ 566 ] ; xx [ 563 ] = xx [ 88 ] * xx [ 566 ] -
xx [ 89 ] * xx [ 565 ] ; xx [ 564 ] = xx [ 59 ] * xx [ 567 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 562 , xx + 568 ) ; xx [ 562 ] =
xx [ 90 ] * xx [ 567 ] ; xx [ 563 ] = - ( xx [ 91 ] * xx [ 567 ] ) ; xx [ 564
] = xx [ 93 ] * xx [ 566 ] - xx [ 166 ] * xx [ 565 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 562 , xx + 571 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 571 , xx + 562 ) ; xx [ 554 ] = xx
[ 568 ] + xx [ 562 ] ; xx [ 574 ] = - ( xx [ 532 ] * xx [ 204 ] ) ; xx [ 575
] = xx [ 533 ] * xx [ 204 ] ; xx [ 576 ] = xx [ 532 ] * xx [ 254 ] - xx [ 259
] * xx [ 534 ] ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 574 , xx + 577
) ; xx [ 557 ] = xx [ 577 ] + xx [ 286 ] ; xx [ 558 ] = 0.1281937218706406 ;
xx [ 574 ] = - ( xx [ 532 ] * xx [ 293 ] ) ; xx [ 575 ] = xx [ 533 ] * xx [
293 ] ; xx [ 576 ] = xx [ 558 ] * xx [ 195 ] - xx [ 533 ] * xx [ 203 ] ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 574 , xx + 580 ) ; xx [ 574 ] =
xx [ 580 ] + xx [ 94 ] ; xx [ 575 ] = xx [ 569 ] + xx [ 563 ] ; xx [ 583 ] =
- ( xx [ 532 ] * xx [ 206 ] ) ; xx [ 584 ] = xx [ 533 ] * xx [ 206 ] ; xx [
585 ] = xx [ 191 ] * xx [ 558 ] - xx [ 534 ] * xx [ 32 ] ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 583 , xx + 586 ) ; xx [ 534 ] =
xx [ 586 ] + xx [ 294 ] ; xx [ 558 ] = xx [ 570 ] + xx [ 564 ] ; xx [ 562 ] =
xx [ 557 ] - xx [ 554 ] ; xx [ 563 ] = xx [ 574 ] - ( xx [ 575 ] - xx [ 82 ]
* xx [ 573 ] ) ; xx [ 564 ] = xx [ 534 ] - ( xx [ 558 ] + xx [ 82 ] * xx [
572 ] ) ; solveSymmetricPosDef ( xx + 277 , xx + 562 , 3 , 1 , xx + 568 , xx
+ 583 ) ; xx [ 562 ] = xx [ 554 ] + xx [ 169 ] * xx [ 568 ] + xx [ 227 ] * xx
[ 569 ] + xx [ 240 ] * xx [ 570 ] ; xx [ 563 ] = xx [ 575 ] + xx [ 568 ] * xx
[ 97 ] + xx [ 244 ] * xx [ 569 ] + xx [ 241 ] * xx [ 570 ] ; xx [ 564 ] = xx
[ 558 ] + xx [ 568 ] * xx [ 104 ] + xx [ 107 ] * xx [ 569 ] + xx [ 224 ] * xx
[ 570 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 562 , xx + 583 ) ; xx [
562 ] = xx [ 571 ] + xx [ 568 ] * xx [ 92 ] + xx [ 168 ] * xx [ 569 ] + xx [
183 ] * xx [ 570 ] ; xx [ 563 ] = xx [ 572 ] + xx [ 568 ] * xx [ 248 ] + xx [
184 ] * xx [ 569 ] + xx [ 253 ] * xx [ 570 ] ; xx [ 564 ] = xx [ 573 ] + xx [
568 ] * xx [ 226 ] + xx [ 263 ] * xx [ 569 ] + xx [ 245 ] * xx [ 570 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 562 , xx + 571 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 571 , xx + 562 ) ; xx [ 554 ] = (
xx [ 535 ] - ( ( xx [ 585 ] + xx [ 564 ] ) * xx [ 13 ] - ( xx [ 583 ] + xx [
562 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 572 ] ) ) / xx [ 234 ] ; xx [ 558 ] =
xx [ 13 ] * xx [ 554 ] ; xx [ 562 ] = xx [ 6 ] * xx [ 558 ] ; xx [ 563 ] = xx
[ 5 ] * xx [ 554 ] ; xx [ 564 ] = xx [ 4 ] * xx [ 558 ] - xx [ 563 ] * xx [ 8
] ; xx [ 571 ] = xx [ 6 ] * xx [ 563 ] ; xx [ 583 ] = - xx [ 562 ] ; xx [ 584
] = xx [ 564 ] ; xx [ 585 ] = - xx [ 571 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 583 , xx + 589 ) ; xx [ 572 ] = ( xx [ 562 ] * xx [ 3 ] + xx [ 589
] ) * xx [ 21 ] - xx [ 563 ] ; xx [ 562 ] = xx [ 21 ] * ( xx [ 590 ] - xx [
564 ] * xx [ 3 ] ) ; xx [ 564 ] = xx [ 558 ] + xx [ 21 ] * ( xx [ 591 ] + xx
[ 571 ] * xx [ 3 ] ) ; xx [ 583 ] = xx [ 572 ] ; xx [ 584 ] = xx [ 562 ] ; xx
[ 585 ] = xx [ 564 ] ; xx [ 589 ] = - ( xx [ 108 ] * xx [ 558 ] ) ; xx [ 590
] = xx [ 137 ] * xx [ 554 ] + xx [ 106 ] * xx [ 558 ] + xx [ 111 ] * xx [ 563
] ; xx [ 591 ] = - ( xx [ 108 ] * xx [ 563 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 589 , xx + 592 ) ; xx [
558 ] = xx [ 568 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 583 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 592 ) ) ; xx [ 563 ] = xx [ 569 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 583 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 592 ) ) ; xx [ 568 ] = xx [ 570 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 583 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 592 ) ) ;
xx [ 569 ] = xx [ 572 ] + xx [ 558 ] ; xx [ 570 ] = xx [ 562 ] + xx [ 563 ] ;
xx [ 571 ] = xx [ 564 ] + xx [ 568 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 569 , xx + 583 ) ; pm_math_Vector3_cross_ra ( xx + 569 , xx +
98 , xx + 589 ) ; xx [ 569 ] = xx [ 592 ] + xx [ 589 ] ; xx [ 570 ] = xx [
593 ] + xx [ 82 ] * xx [ 568 ] + xx [ 590 ] ; xx [ 571 ] = xx [ 594 ] - xx [
82 ] * xx [ 563 ] + xx [ 591 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 569 , xx + 589 ) ; xx [ 562 ] = xx [ 565 ] - ( xx [ 187 ] * xx [ 583 ]
+ xx [ 217 ] * xx [ 584 ] - xx [ 219 ] * xx [ 591 ] ) ; xx [ 564 ] = xx [ 566
] - ( xx [ 221 ] * xx [ 583 ] + xx [ 223 ] * xx [ 584 ] + xx [ 229 ] * xx [
591 ] ) ; xx [ 565 ] = xx [ 567 ] - ( xx [ 238 ] * xx [ 585 ] + xx [ 239 ] *
xx [ 589 ] - xx [ 246 ] * xx [ 590 ] ) ; xx [ 566 ] = xx [ 160 ] * xx [ 554 ]
+ xx [ 292 ] * xx [ 558 ] + xx [ 110 ] * xx [ 563 ] + xx [ 38 ] * xx [ 568 ]
+ xx [ 136 ] * xx [ 562 ] + xx [ 165 ] * xx [ 564 ] + xx [ 39 ] * xx [ 565 ]
; xx [ 567 ] = xx [ 547 ] + xx [ 417 ] + xx [ 137 ] ; xx [ 569 ] = xx [ 21 ]
* ( xx [ 81 ] * xx [ 540 ] - xx [ 78 ] * xx [ 541 ] ) + xx [ 139 ] ; xx [ 570
] = xx [ 21 ] * ( xx [ 78 ] * xx [ 552 ] - xx [ 81 ] * xx [ 550 ] ) + xx [
171 ] ; xx [ 571 ] = xx [ 533 ] + ( xx [ 560 ] - xx [ 532 ] * xx [ 67 ] ) *
xx [ 21 ] + xx [ 174 ] ; solveSymmetricPosDef ( xx + 124 , xx + 569 , 3 , 1 ,
xx + 583 , xx + 589 ) ; xx [ 589 ] = xx [ 57 ] * xx [ 583 ] + xx [ 83 ] * xx
[ 584 ] ; xx [ 590 ] = xx [ 88 ] * xx [ 584 ] - xx [ 89 ] * xx [ 583 ] ; xx [
591 ] = xx [ 59 ] * xx [ 585 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx +
589 , xx + 592 ) ; xx [ 589 ] = xx [ 90 ] * xx [ 585 ] ; xx [ 590 ] = - ( xx
[ 91 ] * xx [ 585 ] ) ; xx [ 591 ] = xx [ 93 ] * xx [ 584 ] - xx [ 166 ] * xx
[ 583 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 589 , xx + 595 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 595 , xx + 589 ) ; xx [ 572 ] = xx
[ 592 ] + xx [ 589 ] ; xx [ 573 ] = xx [ 578 ] + xx [ 287 ] ; xx [ 575 ] = xx
[ 581 ] + xx [ 95 ] ; xx [ 576 ] = xx [ 593 ] + xx [ 590 ] ; xx [ 598 ] = xx
[ 587 ] + xx [ 295 ] ; xx [ 589 ] = xx [ 594 ] + xx [ 591 ] ; xx [ 590 ] = xx
[ 573 ] - xx [ 572 ] ; xx [ 591 ] = xx [ 575 ] - ( xx [ 576 ] - xx [ 82 ] *
xx [ 597 ] ) ; xx [ 592 ] = xx [ 598 ] - ( xx [ 589 ] + xx [ 82 ] * xx [ 596
] ) ; solveSymmetricPosDef ( xx + 277 , xx + 590 , 3 , 1 , xx + 599 , xx +
602 ) ; xx [ 590 ] = xx [ 572 ] + xx [ 169 ] * xx [ 599 ] + xx [ 227 ] * xx [
600 ] + xx [ 240 ] * xx [ 601 ] ; xx [ 591 ] = xx [ 576 ] + xx [ 599 ] * xx [
97 ] + xx [ 244 ] * xx [ 600 ] + xx [ 241 ] * xx [ 601 ] ; xx [ 592 ] = xx [
589 ] + xx [ 599 ] * xx [ 104 ] + xx [ 107 ] * xx [ 600 ] + xx [ 224 ] * xx [
601 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 590 , xx + 602 ) ; xx [
589 ] = xx [ 595 ] + xx [ 599 ] * xx [ 92 ] + xx [ 168 ] * xx [ 600 ] + xx [
183 ] * xx [ 601 ] ; xx [ 590 ] = xx [ 596 ] + xx [ 599 ] * xx [ 248 ] + xx [
184 ] * xx [ 600 ] + xx [ 253 ] * xx [ 601 ] ; xx [ 591 ] = xx [ 597 ] + xx [
599 ] * xx [ 226 ] + xx [ 263 ] * xx [ 600 ] + xx [ 245 ] * xx [ 601 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 589 , xx + 592 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 592 , xx + 589 ) ; xx [ 572 ] = (
xx [ 567 ] - ( ( xx [ 604 ] + xx [ 591 ] ) * xx [ 13 ] - ( xx [ 602 ] + xx [
589 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 593 ] ) ) / xx [ 234 ] ; xx [ 576 ] =
xx [ 13 ] * xx [ 572 ] ; xx [ 589 ] = xx [ 6 ] * xx [ 576 ] ; xx [ 590 ] = xx
[ 5 ] * xx [ 572 ] ; xx [ 591 ] = xx [ 4 ] * xx [ 576 ] - xx [ 590 ] * xx [ 8
] ; xx [ 592 ] = xx [ 6 ] * xx [ 590 ] ; xx [ 593 ] = - xx [ 589 ] ; xx [ 594
] = xx [ 591 ] ; xx [ 595 ] = - xx [ 592 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 593 , xx + 602 ) ; xx [ 593 ] = ( xx [ 589 ] * xx [ 3 ] + xx [ 602
] ) * xx [ 21 ] - xx [ 590 ] ; xx [ 589 ] = xx [ 21 ] * ( xx [ 603 ] - xx [
591 ] * xx [ 3 ] ) ; xx [ 591 ] = xx [ 576 ] + xx [ 21 ] * ( xx [ 604 ] + xx
[ 592 ] * xx [ 3 ] ) ; xx [ 594 ] = xx [ 593 ] ; xx [ 595 ] = xx [ 589 ] ; xx
[ 596 ] = xx [ 591 ] ; xx [ 602 ] = - ( xx [ 108 ] * xx [ 576 ] ) ; xx [ 603
] = xx [ 137 ] * xx [ 572 ] + xx [ 106 ] * xx [ 576 ] + xx [ 111 ] * xx [ 590
] ; xx [ 604 ] = - ( xx [ 108 ] * xx [ 590 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 602 , xx + 605 ) ; xx [
576 ] = xx [ 599 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 594 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 605 ) ) ; xx [ 590 ] = xx [ 600 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 594 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 605 ) ) ; xx [ 592 ] = xx [ 601 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 594 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 605 ) ) ;
xx [ 594 ] = xx [ 593 ] + xx [ 576 ] ; xx [ 595 ] = xx [ 589 ] + xx [ 590 ] ;
xx [ 596 ] = xx [ 591 ] + xx [ 592 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 594 , xx + 599 ) ; pm_math_Vector3_cross_ra ( xx + 594 , xx +
98 , xx + 602 ) ; xx [ 593 ] = xx [ 605 ] + xx [ 602 ] ; xx [ 594 ] = xx [
606 ] + xx [ 82 ] * xx [ 592 ] + xx [ 603 ] ; xx [ 595 ] = xx [ 607 ] - xx [
82 ] * xx [ 590 ] + xx [ 604 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 593 , xx + 602 ) ; xx [ 589 ] = xx [ 583 ] - ( xx [ 187 ] * xx [ 599 ]
+ xx [ 217 ] * xx [ 600 ] - xx [ 219 ] * xx [ 604 ] ) ; xx [ 583 ] = xx [ 584
] - ( xx [ 221 ] * xx [ 599 ] + xx [ 223 ] * xx [ 600 ] + xx [ 229 ] * xx [
604 ] ) ; xx [ 584 ] = xx [ 585 ] - ( xx [ 238 ] * xx [ 601 ] + xx [ 239 ] *
xx [ 602 ] - xx [ 246 ] * xx [ 603 ] ) ; xx [ 585 ] = xx [ 160 ] * xx [ 572 ]
+ xx [ 292 ] * xx [ 576 ] + xx [ 110 ] * xx [ 590 ] + xx [ 38 ] * xx [ 592 ]
+ xx [ 136 ] * xx [ 589 ] + xx [ 165 ] * xx [ 583 ] + xx [ 39 ] * xx [ 584 ]
; xx [ 546 ] = xx [ 548 ] + xx [ 152 ] ; xx [ 547 ] = xx [ 539 ] - ( xx [ 79
] * xx [ 541 ] + xx [ 80 ] * xx [ 540 ] ) * xx [ 21 ] + xx [ 140 ] ; xx [ 539
] = ( xx [ 79 ] * xx [ 552 ] + xx [ 80 ] * xx [ 550 ] ) * xx [ 21 ] - xx [
549 ] + xx [ 172 ] ; xx [ 540 ] = ( xx [ 78 ] * xx [ 555 ] + xx [ 561 ] ) *
xx [ 21 ] + xx [ 175 ] ; xx [ 548 ] = xx [ 547 ] ; xx [ 549 ] = xx [ 539 ] ;
xx [ 550 ] = xx [ 540 ] ; solveSymmetricPosDef ( xx + 124 , xx + 548 , 3 , 1
, xx + 559 , xx + 593 ) ; xx [ 548 ] = xx [ 57 ] * xx [ 559 ] + xx [ 83 ] *
xx [ 560 ] ; xx [ 549 ] = xx [ 88 ] * xx [ 560 ] - xx [ 89 ] * xx [ 559 ] ;
xx [ 550 ] = xx [ 59 ] * xx [ 561 ] ; pm_math_Quaternion_xform_ra ( xx + 42 ,
xx + 548 , xx + 593 ) ; xx [ 548 ] = xx [ 90 ] * xx [ 561 ] ; xx [ 549 ] = -
( xx [ 91 ] * xx [ 561 ] ) ; xx [ 550 ] = xx [ 93 ] * xx [ 560 ] - xx [ 166 ]
* xx [ 559 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 548 , xx + 599 )
; pm_math_Vector3_cross_ra ( xx + 98 , xx + 599 , xx + 548 ) ; xx [ 541 ] =
xx [ 593 ] + xx [ 548 ] ; xx [ 552 ] = xx [ 579 ] + xx [ 288 ] ; xx [ 555 ] =
xx [ 582 ] + xx [ 96 ] ; xx [ 577 ] = xx [ 594 ] + xx [ 549 ] ; xx [ 578 ] =
xx [ 588 ] + xx [ 296 ] ; xx [ 548 ] = xx [ 595 ] + xx [ 550 ] ; xx [ 579 ] =
xx [ 552 ] - xx [ 541 ] ; xx [ 580 ] = xx [ 555 ] - ( xx [ 577 ] - xx [ 82 ]
* xx [ 601 ] ) ; xx [ 581 ] = xx [ 578 ] - ( xx [ 548 ] + xx [ 82 ] * xx [
600 ] ) ; solveSymmetricPosDef ( xx + 277 , xx + 579 , 3 , 1 , xx + 586 , xx
+ 593 ) ; xx [ 579 ] = xx [ 541 ] + xx [ 169 ] * xx [ 586 ] + xx [ 227 ] * xx
[ 587 ] + xx [ 240 ] * xx [ 588 ] ; xx [ 580 ] = xx [ 577 ] + xx [ 586 ] * xx
[ 97 ] + xx [ 244 ] * xx [ 587 ] + xx [ 241 ] * xx [ 588 ] ; xx [ 581 ] = xx
[ 548 ] + xx [ 586 ] * xx [ 104 ] + xx [ 107 ] * xx [ 587 ] + xx [ 224 ] * xx
[ 588 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 579 , xx + 548 ) ; xx [
579 ] = xx [ 599 ] + xx [ 586 ] * xx [ 92 ] + xx [ 168 ] * xx [ 587 ] + xx [
183 ] * xx [ 588 ] ; xx [ 580 ] = xx [ 600 ] + xx [ 586 ] * xx [ 248 ] + xx [
184 ] * xx [ 587 ] + xx [ 253 ] * xx [ 588 ] ; xx [ 581 ] = xx [ 601 ] + xx [
586 ] * xx [ 226 ] + xx [ 263 ] * xx [ 587 ] + xx [ 245 ] * xx [ 588 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 579 , xx + 593 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 593 , xx + 579 ) ; xx [ 541 ] = (
xx [ 546 ] - ( ( xx [ 550 ] + xx [ 581 ] ) * xx [ 13 ] - ( xx [ 548 ] + xx [
579 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 594 ] ) ) / xx [ 234 ] ; xx [ 548 ] =
xx [ 13 ] * xx [ 541 ] ; xx [ 549 ] = xx [ 6 ] * xx [ 548 ] ; xx [ 550 ] = xx
[ 5 ] * xx [ 541 ] ; xx [ 577 ] = xx [ 4 ] * xx [ 548 ] - xx [ 550 ] * xx [ 8
] ; xx [ 579 ] = xx [ 6 ] * xx [ 550 ] ; xx [ 580 ] = - xx [ 549 ] ; xx [ 581
] = xx [ 577 ] ; xx [ 582 ] = - xx [ 579 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 580 , xx + 593 ) ; xx [ 580 ] = ( xx [ 549 ] * xx [ 3 ] + xx [ 593
] ) * xx [ 21 ] - xx [ 550 ] ; xx [ 549 ] = xx [ 21 ] * ( xx [ 594 ] - xx [
577 ] * xx [ 3 ] ) ; xx [ 577 ] = xx [ 548 ] + xx [ 21 ] * ( xx [ 595 ] + xx
[ 579 ] * xx [ 3 ] ) ; xx [ 593 ] = xx [ 580 ] ; xx [ 594 ] = xx [ 549 ] ; xx
[ 595 ] = xx [ 577 ] ; xx [ 599 ] = - ( xx [ 108 ] * xx [ 548 ] ) ; xx [ 600
] = xx [ 137 ] * xx [ 541 ] + xx [ 106 ] * xx [ 548 ] + xx [ 111 ] * xx [ 550
] ; xx [ 601 ] = - ( xx [ 108 ] * xx [ 550 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 599 , xx + 602 ) ; xx [
548 ] = xx [ 586 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 593 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 602 ) ) ; xx [ 550 ] = xx [ 587 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 593 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 602 ) ) ; xx [ 579 ] = xx [ 588 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 593 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 602 ) ) ;
xx [ 586 ] = xx [ 580 ] + xx [ 548 ] ; xx [ 587 ] = xx [ 549 ] + xx [ 550 ] ;
xx [ 588 ] = xx [ 577 ] + xx [ 579 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 586 , xx + 580 ) ; pm_math_Vector3_cross_ra ( xx + 586 , xx +
98 , xx + 593 ) ; xx [ 586 ] = xx [ 602 ] + xx [ 593 ] ; xx [ 587 ] = xx [
603 ] + xx [ 82 ] * xx [ 579 ] + xx [ 594 ] ; xx [ 588 ] = xx [ 604 ] - xx [
82 ] * xx [ 550 ] + xx [ 595 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 586 , xx + 593 ) ; xx [ 549 ] = xx [ 559 ] - ( xx [ 187 ] * xx [ 580 ]
+ xx [ 217 ] * xx [ 581 ] - xx [ 219 ] * xx [ 595 ] ) ; xx [ 559 ] = xx [ 560
] - ( xx [ 221 ] * xx [ 580 ] + xx [ 223 ] * xx [ 581 ] + xx [ 229 ] * xx [
595 ] ) ; xx [ 560 ] = xx [ 561 ] - ( xx [ 238 ] * xx [ 582 ] + xx [ 239 ] *
xx [ 593 ] - xx [ 246 ] * xx [ 594 ] ) ; xx [ 561 ] = xx [ 160 ] * xx [ 541 ]
+ xx [ 292 ] * xx [ 548 ] + xx [ 110 ] * xx [ 550 ] + xx [ 38 ] * xx [ 579 ]
+ xx [ 136 ] * xx [ 549 ] + xx [ 165 ] * xx [ 559 ] + xx [ 39 ] * xx [ 560 ]
; xx [ 577 ] = 0.03901074375149718 ; xx [ 580 ] = 0.06328574610922835 ; xx [
581 ] = 0.1265714922184567 ; xx [ 586 ] = - ( xx [ 142 ] * xx [ 577 ] ) ; xx
[ 587 ] = - ( xx [ 142 ] * xx [ 580 ] ) ; xx [ 588 ] = xx [ 150 ] * xx [ 577
] + xx [ 581 ] * xx [ 151 ] ; pm_math_Quaternion_xform_ra ( xx + 145 , xx +
586 , xx + 593 ) ; xx [ 142 ] = xx [ 593 ] + xx [ 159 ] ; xx [ 145 ] =
0.02000000000000002 ; xx [ 146 ] = xx [ 145 ] * xx [ 80 ] ; xx [ 147 ] = xx [
145 ] * xx [ 79 ] ; xx [ 148 ] = ( xx [ 78 ] * xx [ 146 ] + xx [ 81 ] * xx [
147 ] ) * xx [ 21 ] + xx [ 138 ] ; xx [ 138 ] = 0.07160254037844389 ; xx [
150 ] = xx [ 138 ] * xx [ 80 ] ; xx [ 151 ] = xx [ 138 ] * xx [ 79 ] ; xx [
159 ] = ( xx [ 78 ] * xx [ 150 ] + xx [ 81 ] * xx [ 151 ] ) * xx [ 21 ] + xx
[ 170 ] ; xx [ 170 ] = xx [ 580 ] * xx [ 81 ] ; xx [ 582 ] = xx [ 577 ] * xx
[ 80 ] - xx [ 580 ] * xx [ 79 ] ; xx [ 586 ] = xx [ 170 ] ; xx [ 587 ] = - (
xx [ 577 ] * xx [ 81 ] ) ; xx [ 588 ] = xx [ 582 ] ; pm_math_Vector3_cross_ra
( xx + 79 , xx + 586 , xx + 599 ) ; xx [ 586 ] = xx [ 21 ] * ( xx [ 599 ] +
xx [ 78 ] * xx [ 170 ] ) - xx [ 577 ] + xx [ 173 ] ; xx [ 602 ] = xx [ 148 ]
; xx [ 603 ] = xx [ 159 ] ; xx [ 604 ] = xx [ 586 ] ; solveSymmetricPosDef (
xx + 124 , xx + 602 , 3 , 1 , xx + 605 , xx + 608 ) ; xx [ 602 ] = xx [ 57 ]
* xx [ 605 ] + xx [ 83 ] * xx [ 606 ] ; xx [ 603 ] = xx [ 88 ] * xx [ 606 ] -
xx [ 89 ] * xx [ 605 ] ; xx [ 604 ] = xx [ 59 ] * xx [ 607 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 602 , xx + 608 ) ; xx [ 602 ] =
xx [ 90 ] * xx [ 607 ] ; xx [ 603 ] = - ( xx [ 91 ] * xx [ 607 ] ) ; xx [ 604
] = xx [ 93 ] * xx [ 606 ] - xx [ 166 ] * xx [ 605 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 602 , xx + 611 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 611 , xx + 602 ) ; xx [ 170 ] = xx
[ 608 ] + xx [ 602 ] ; xx [ 614 ] = - ( xx [ 577 ] * xx [ 204 ] ) ; xx [ 615
] = - ( xx [ 580 ] * xx [ 204 ] ) ; xx [ 616 ] = xx [ 577 ] * xx [ 254 ] + xx
[ 259 ] * xx [ 581 ] ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 614 , xx
+ 617 ) ; xx [ 173 ] = xx [ 617 ] + xx [ 286 ] ; xx [ 254 ] =
0.07802148750299437 ; xx [ 614 ] = - ( xx [ 577 ] * xx [ 293 ] ) ; xx [ 615 ]
= - ( xx [ 580 ] * xx [ 293 ] ) ; xx [ 616 ] = xx [ 254 ] * xx [ 195 ] + xx [
580 ] * xx [ 203 ] ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 614 , xx +
620 ) ; xx [ 195 ] = xx [ 620 ] + xx [ 94 ] ; xx [ 94 ] = xx [ 609 ] + xx [
603 ] ; xx [ 614 ] = - ( xx [ 577 ] * xx [ 206 ] ) ; xx [ 615 ] = - ( xx [
580 ] * xx [ 206 ] ) ; xx [ 616 ] = xx [ 191 ] * xx [ 254 ] + xx [ 581 ] * xx
[ 32 ] ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 614 , xx + 623 ) ; xx [
32 ] = xx [ 623 ] + xx [ 294 ] ; xx [ 191 ] = xx [ 610 ] + xx [ 604 ] ; xx [
602 ] = xx [ 173 ] - xx [ 170 ] ; xx [ 603 ] = xx [ 195 ] - ( xx [ 94 ] - xx
[ 82 ] * xx [ 613 ] ) ; xx [ 604 ] = xx [ 32 ] - ( xx [ 191 ] + xx [ 82 ] *
xx [ 612 ] ) ; solveSymmetricPosDef ( xx + 277 , xx + 602 , 3 , 1 , xx + 608
, xx + 614 ) ; xx [ 602 ] = xx [ 170 ] + xx [ 169 ] * xx [ 608 ] + xx [ 227 ]
* xx [ 609 ] + xx [ 240 ] * xx [ 610 ] ; xx [ 603 ] = xx [ 94 ] + xx [ 608 ]
* xx [ 97 ] + xx [ 244 ] * xx [ 609 ] + xx [ 241 ] * xx [ 610 ] ; xx [ 604 ]
= xx [ 191 ] + xx [ 608 ] * xx [ 104 ] + xx [ 107 ] * xx [ 609 ] + xx [ 224 ]
* xx [ 610 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 602 , xx + 614 ) ;
xx [ 602 ] = xx [ 611 ] + xx [ 608 ] * xx [ 92 ] + xx [ 168 ] * xx [ 609 ] +
xx [ 183 ] * xx [ 610 ] ; xx [ 603 ] = xx [ 612 ] + xx [ 608 ] * xx [ 248 ] +
xx [ 184 ] * xx [ 609 ] + xx [ 253 ] * xx [ 610 ] ; xx [ 604 ] = xx [ 613 ] +
xx [ 608 ] * xx [ 226 ] + xx [ 263 ] * xx [ 609 ] + xx [ 245 ] * xx [ 610 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 602 , xx + 611 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 611 , xx + 602 ) ; xx [ 94 ] = (
xx [ 142 ] - ( ( xx [ 616 ] + xx [ 604 ] ) * xx [ 13 ] - ( xx [ 614 ] + xx [
602 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 612 ] ) ) / xx [ 234 ] ; xx [ 170 ] =
xx [ 13 ] * xx [ 94 ] ; xx [ 191 ] = xx [ 6 ] * xx [ 170 ] ; xx [ 203 ] = xx
[ 5 ] * xx [ 94 ] ; xx [ 206 ] = xx [ 4 ] * xx [ 170 ] - xx [ 203 ] * xx [ 8
] ; xx [ 254 ] = xx [ 6 ] * xx [ 203 ] ; xx [ 602 ] = - xx [ 191 ] ; xx [ 603
] = xx [ 206 ] ; xx [ 604 ] = - xx [ 254 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 602 , xx + 611 ) ; xx [ 259 ] = ( xx [ 191 ] * xx [ 3 ] + xx [ 611
] ) * xx [ 21 ] - xx [ 203 ] ; xx [ 191 ] = xx [ 21 ] * ( xx [ 612 ] - xx [
206 ] * xx [ 3 ] ) ; xx [ 206 ] = xx [ 170 ] + xx [ 21 ] * ( xx [ 613 ] + xx
[ 254 ] * xx [ 3 ] ) ; xx [ 602 ] = xx [ 259 ] ; xx [ 603 ] = xx [ 191 ] ; xx
[ 604 ] = xx [ 206 ] ; xx [ 611 ] = - ( xx [ 108 ] * xx [ 170 ] ) ; xx [ 612
] = xx [ 137 ] * xx [ 94 ] + xx [ 106 ] * xx [ 170 ] + xx [ 111 ] * xx [ 203
] ; xx [ 613 ] = - ( xx [ 108 ] * xx [ 203 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 611 , xx + 614 ) ; xx [
170 ] = xx [ 608 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 602 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 614 ) ) ; xx [ 203 ] = xx [ 609 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 602 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 614 ) ) ; xx [ 254 ] = xx [ 610 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 602 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 614 ) ) ;
xx [ 602 ] = xx [ 259 ] + xx [ 170 ] ; xx [ 603 ] = xx [ 191 ] + xx [ 203 ] ;
xx [ 604 ] = xx [ 206 ] + xx [ 254 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 602 , xx + 608 ) ; pm_math_Vector3_cross_ra ( xx + 602 , xx +
98 , xx + 611 ) ; xx [ 602 ] = xx [ 614 ] + xx [ 611 ] ; xx [ 603 ] = xx [
615 ] + xx [ 82 ] * xx [ 254 ] + xx [ 612 ] ; xx [ 604 ] = xx [ 616 ] - xx [
82 ] * xx [ 203 ] + xx [ 613 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 602 , xx + 611 ) ; xx [ 191 ] = xx [ 605 ] - ( xx [ 187 ] * xx [ 608 ]
+ xx [ 217 ] * xx [ 609 ] - xx [ 219 ] * xx [ 613 ] ) ; xx [ 206 ] = xx [ 606
] - ( xx [ 221 ] * xx [ 608 ] + xx [ 223 ] * xx [ 609 ] + xx [ 229 ] * xx [
613 ] ) ; xx [ 259 ] = xx [ 607 ] - ( xx [ 238 ] * xx [ 610 ] + xx [ 239 ] *
xx [ 611 ] - xx [ 246 ] * xx [ 612 ] ) ; xx [ 286 ] = xx [ 160 ] * xx [ 94 ]
+ xx [ 292 ] * xx [ 170 ] + xx [ 110 ] * xx [ 203 ] + xx [ 38 ] * xx [ 254 ]
+ xx [ 136 ] * xx [ 191 ] + xx [ 165 ] * xx [ 206 ] + xx [ 39 ] * xx [ 259 ]
; xx [ 293 ] = xx [ 594 ] + xx [ 417 ] + xx [ 137 ] ; xx [ 294 ] = xx [ 21 ]
* ( xx [ 81 ] * xx [ 146 ] - xx [ 78 ] * xx [ 147 ] ) + xx [ 139 ] ; xx [ 139
] = xx [ 21 ] * ( xx [ 81 ] * xx [ 150 ] - xx [ 78 ] * xx [ 151 ] ) + xx [
171 ] ; xx [ 171 ] = ( xx [ 600 ] - xx [ 577 ] * xx [ 67 ] ) * xx [ 21 ] - xx
[ 580 ] + xx [ 174 ] ; xx [ 602 ] = xx [ 294 ] ; xx [ 603 ] = xx [ 139 ] ; xx
[ 604 ] = xx [ 171 ] ; solveSymmetricPosDef ( xx + 124 , xx + 602 , 3 , 1 ,
xx + 605 , xx + 608 ) ; xx [ 602 ] = xx [ 57 ] * xx [ 605 ] + xx [ 83 ] * xx
[ 606 ] ; xx [ 603 ] = xx [ 88 ] * xx [ 606 ] - xx [ 89 ] * xx [ 605 ] ; xx [
604 ] = xx [ 59 ] * xx [ 607 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx +
602 , xx + 608 ) ; xx [ 602 ] = xx [ 90 ] * xx [ 607 ] ; xx [ 603 ] = - ( xx
[ 91 ] * xx [ 607 ] ) ; xx [ 604 ] = xx [ 93 ] * xx [ 606 ] - xx [ 166 ] * xx
[ 605 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 602 , xx + 611 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 611 , xx + 602 ) ; xx [ 174 ] = xx
[ 608 ] + xx [ 602 ] ; xx [ 417 ] = xx [ 618 ] + xx [ 287 ] ; xx [ 287 ] = xx
[ 621 ] + xx [ 95 ] ; xx [ 95 ] = xx [ 609 ] + xx [ 603 ] ; xx [ 581 ] = xx [
624 ] + xx [ 295 ] ; xx [ 295 ] = xx [ 610 ] + xx [ 604 ] ; xx [ 602 ] = xx [
417 ] - xx [ 174 ] ; xx [ 603 ] = xx [ 287 ] - ( xx [ 95 ] - xx [ 82 ] * xx [
613 ] ) ; xx [ 604 ] = xx [ 581 ] - ( xx [ 295 ] + xx [ 82 ] * xx [ 612 ] ) ;
solveSymmetricPosDef ( xx + 277 , xx + 602 , 3 , 1 , xx + 608 , xx + 614 ) ;
xx [ 602 ] = xx [ 174 ] + xx [ 169 ] * xx [ 608 ] + xx [ 227 ] * xx [ 609 ] +
xx [ 240 ] * xx [ 610 ] ; xx [ 603 ] = xx [ 95 ] + xx [ 608 ] * xx [ 97 ] +
xx [ 244 ] * xx [ 609 ] + xx [ 241 ] * xx [ 610 ] ; xx [ 604 ] = xx [ 295 ] +
xx [ 608 ] * xx [ 104 ] + xx [ 107 ] * xx [ 609 ] + xx [ 224 ] * xx [ 610 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 602 , xx + 614 ) ; xx [ 602 ] =
xx [ 611 ] + xx [ 608 ] * xx [ 92 ] + xx [ 168 ] * xx [ 609 ] + xx [ 183 ] *
xx [ 610 ] ; xx [ 603 ] = xx [ 612 ] + xx [ 608 ] * xx [ 248 ] + xx [ 184 ] *
xx [ 609 ] + xx [ 253 ] * xx [ 610 ] ; xx [ 604 ] = xx [ 613 ] + xx [ 608 ] *
xx [ 226 ] + xx [ 263 ] * xx [ 609 ] + xx [ 245 ] * xx [ 610 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 602 , xx + 611 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 611 , xx + 602 ) ; xx [ 95 ] = (
xx [ 293 ] - ( ( xx [ 616 ] + xx [ 604 ] ) * xx [ 13 ] - ( xx [ 614 ] + xx [
602 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 612 ] ) ) / xx [ 234 ] ; xx [ 174 ] =
xx [ 13 ] * xx [ 95 ] ; xx [ 295 ] = xx [ 6 ] * xx [ 174 ] ; xx [ 587 ] = xx
[ 5 ] * xx [ 95 ] ; xx [ 588 ] = xx [ 4 ] * xx [ 174 ] - xx [ 587 ] * xx [ 8
] ; xx [ 591 ] = xx [ 6 ] * xx [ 587 ] ; xx [ 602 ] = - xx [ 295 ] ; xx [ 603
] = xx [ 588 ] ; xx [ 604 ] = - xx [ 591 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 602 , xx + 611 ) ; xx [ 596 ] = ( xx [ 295 ] * xx [ 3 ] + xx [ 611
] ) * xx [ 21 ] - xx [ 587 ] ; xx [ 295 ] = xx [ 21 ] * ( xx [ 612 ] - xx [
588 ] * xx [ 3 ] ) ; xx [ 588 ] = xx [ 174 ] + xx [ 21 ] * ( xx [ 613 ] + xx
[ 591 ] * xx [ 3 ] ) ; xx [ 602 ] = xx [ 596 ] ; xx [ 603 ] = xx [ 295 ] ; xx
[ 604 ] = xx [ 588 ] ; xx [ 611 ] = - ( xx [ 108 ] * xx [ 174 ] ) ; xx [ 612
] = xx [ 137 ] * xx [ 95 ] + xx [ 106 ] * xx [ 174 ] + xx [ 111 ] * xx [ 587
] ; xx [ 613 ] = - ( xx [ 108 ] * xx [ 587 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 611 , xx + 614 ) ; xx [
174 ] = xx [ 608 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 602 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 614 ) ) ; xx [ 587 ] = xx [ 609 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 602 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 614 ) ) ; xx [ 591 ] = xx [ 610 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 602 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 614 ) ) ;
xx [ 602 ] = xx [ 596 ] + xx [ 174 ] ; xx [ 603 ] = xx [ 295 ] + xx [ 587 ] ;
xx [ 604 ] = xx [ 588 ] + xx [ 591 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 602 , xx + 608 ) ; pm_math_Vector3_cross_ra ( xx + 602 , xx +
98 , xx + 611 ) ; xx [ 602 ] = xx [ 614 ] + xx [ 611 ] ; xx [ 603 ] = xx [
615 ] + xx [ 82 ] * xx [ 591 ] + xx [ 612 ] ; xx [ 604 ] = xx [ 616 ] - xx [
82 ] * xx [ 587 ] + xx [ 613 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 602 , xx + 611 ) ; xx [ 295 ] = xx [ 605 ] - ( xx [ 187 ] * xx [ 608 ]
+ xx [ 217 ] * xx [ 609 ] - xx [ 219 ] * xx [ 613 ] ) ; xx [ 588 ] = xx [ 606
] - ( xx [ 221 ] * xx [ 608 ] + xx [ 223 ] * xx [ 609 ] + xx [ 229 ] * xx [
613 ] ) ; xx [ 596 ] = xx [ 607 ] - ( xx [ 238 ] * xx [ 610 ] + xx [ 239 ] *
xx [ 611 ] - xx [ 246 ] * xx [ 612 ] ) ; xx [ 597 ] = xx [ 160 ] * xx [ 95 ]
+ xx [ 292 ] * xx [ 174 ] + xx [ 110 ] * xx [ 587 ] + xx [ 38 ] * xx [ 591 ]
+ xx [ 136 ] * xx [ 295 ] + xx [ 165 ] * xx [ 588 ] + xx [ 39 ] * xx [ 596 ]
; xx [ 593 ] = xx [ 595 ] + xx [ 152 ] ; xx [ 152 ] = xx [ 145 ] - ( xx [ 79
] * xx [ 147 ] + xx [ 80 ] * xx [ 146 ] ) * xx [ 21 ] + xx [ 140 ] ; xx [ 140
] = xx [ 138 ] - ( xx [ 79 ] * xx [ 151 ] + xx [ 80 ] * xx [ 150 ] ) * xx [
21 ] + xx [ 172 ] ; xx [ 138 ] = ( xx [ 78 ] * xx [ 582 ] + xx [ 601 ] ) * xx
[ 21 ] + xx [ 175 ] ; xx [ 145 ] = xx [ 152 ] ; xx [ 146 ] = xx [ 140 ] ; xx
[ 147 ] = xx [ 138 ] ; solveSymmetricPosDef ( xx + 124 , xx + 145 , 3 , 1 ,
xx + 599 , xx + 602 ) ; xx [ 145 ] = xx [ 57 ] * xx [ 599 ] + xx [ 83 ] * xx
[ 600 ] ; xx [ 146 ] = xx [ 88 ] * xx [ 600 ] - xx [ 89 ] * xx [ 599 ] ; xx [
147 ] = xx [ 59 ] * xx [ 601 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx +
145 , xx + 602 ) ; xx [ 145 ] = xx [ 90 ] * xx [ 601 ] ; xx [ 146 ] = - ( xx
[ 91 ] * xx [ 601 ] ) ; xx [ 147 ] = xx [ 93 ] * xx [ 600 ] - xx [ 166 ] * xx
[ 599 ] ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 145 , xx + 605 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 605 , xx + 145 ) ; xx [ 150 ] = xx
[ 602 ] + xx [ 145 ] ; xx [ 151 ] = xx [ 619 ] + xx [ 288 ] ; xx [ 172 ] = xx
[ 622 ] + xx [ 96 ] ; xx [ 96 ] = xx [ 603 ] + xx [ 146 ] ; xx [ 175 ] = xx [
625 ] + xx [ 296 ] ; xx [ 145 ] = xx [ 604 ] + xx [ 147 ] ; xx [ 602 ] = xx [
151 ] - xx [ 150 ] ; xx [ 603 ] = xx [ 172 ] - ( xx [ 96 ] - xx [ 82 ] * xx [
607 ] ) ; xx [ 604 ] = xx [ 175 ] - ( xx [ 145 ] + xx [ 82 ] * xx [ 606 ] ) ;
solveSymmetricPosDef ( xx + 277 , xx + 602 , 3 , 1 , xx + 608 , xx + 611 ) ;
xx [ 602 ] = xx [ 150 ] + xx [ 169 ] * xx [ 608 ] + xx [ 227 ] * xx [ 609 ] +
xx [ 240 ] * xx [ 610 ] ; xx [ 603 ] = xx [ 96 ] + xx [ 608 ] * xx [ 97 ] +
xx [ 244 ] * xx [ 609 ] + xx [ 241 ] * xx [ 610 ] ; xx [ 604 ] = xx [ 145 ] +
xx [ 608 ] * xx [ 104 ] + xx [ 107 ] * xx [ 609 ] + xx [ 224 ] * xx [ 610 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 602 , xx + 145 ) ; xx [ 602 ] =
xx [ 605 ] + xx [ 608 ] * xx [ 92 ] + xx [ 168 ] * xx [ 609 ] + xx [ 183 ] *
xx [ 610 ] ; xx [ 603 ] = xx [ 606 ] + xx [ 608 ] * xx [ 248 ] + xx [ 184 ] *
xx [ 609 ] + xx [ 253 ] * xx [ 610 ] ; xx [ 604 ] = xx [ 607 ] + xx [ 608 ] *
xx [ 226 ] + xx [ 263 ] * xx [ 609 ] + xx [ 245 ] * xx [ 610 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 602 , xx + 605 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 605 , xx + 602 ) ; xx [ 96 ] = (
xx [ 593 ] - ( ( xx [ 147 ] + xx [ 604 ] ) * xx [ 13 ] - ( xx [ 145 ] + xx [
602 ] ) * xx [ 5 ] + xx [ 137 ] * xx [ 606 ] ) ) / xx [ 234 ] ; xx [ 145 ] =
xx [ 13 ] * xx [ 96 ] ; xx [ 146 ] = xx [ 6 ] * xx [ 145 ] ; xx [ 147 ] = xx
[ 5 ] * xx [ 96 ] ; xx [ 150 ] = xx [ 4 ] * xx [ 145 ] - xx [ 147 ] * xx [ 8
] ; xx [ 288 ] = xx [ 6 ] * xx [ 147 ] ; xx [ 602 ] = - xx [ 146 ] ; xx [ 603
] = xx [ 150 ] ; xx [ 604 ] = - xx [ 288 ] ; pm_math_Vector3_cross_ra ( xx +
16 , xx + 602 , xx + 605 ) ; xx [ 296 ] = ( xx [ 146 ] * xx [ 3 ] + xx [ 605
] ) * xx [ 21 ] - xx [ 147 ] ; xx [ 146 ] = xx [ 21 ] * ( xx [ 606 ] - xx [
150 ] * xx [ 3 ] ) ; xx [ 150 ] = xx [ 145 ] + xx [ 21 ] * ( xx [ 607 ] + xx
[ 288 ] * xx [ 3 ] ) ; xx [ 602 ] = xx [ 296 ] ; xx [ 603 ] = xx [ 146 ] ; xx
[ 604 ] = xx [ 150 ] ; xx [ 605 ] = - ( xx [ 108 ] * xx [ 145 ] ) ; xx [ 606
] = xx [ 137 ] * xx [ 96 ] + xx [ 106 ] * xx [ 145 ] + xx [ 111 ] * xx [ 147
] ; xx [ 607 ] = - ( xx [ 108 ] * xx [ 147 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 605 , xx + 611 ) ; xx [
145 ] = xx [ 608 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 602 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 611 ) ) ; xx [ 147 ] = xx [ 609 ] -
( pm_math_Vector3_dot_ra ( xx + 311 , xx + 602 ) + pm_math_Vector3_dot_ra (
xx + 320 , xx + 611 ) ) ; xx [ 288 ] = xx [ 610 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 602 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 611 ) ) ;
xx [ 602 ] = xx [ 296 ] + xx [ 145 ] ; xx [ 603 ] = xx [ 146 ] + xx [ 147 ] ;
xx [ 604 ] = xx [ 150 ] + xx [ 288 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 602 , xx + 605 ) ; pm_math_Vector3_cross_ra ( xx + 602 , xx +
98 , xx + 608 ) ; xx [ 602 ] = xx [ 611 ] + xx [ 608 ] ; xx [ 603 ] = xx [
612 ] + xx [ 82 ] * xx [ 288 ] + xx [ 609 ] ; xx [ 604 ] = xx [ 613 ] - xx [
82 ] * xx [ 147 ] + xx [ 610 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42
, xx + 602 , xx + 608 ) ; xx [ 146 ] = xx [ 599 ] - ( xx [ 187 ] * xx [ 605 ]
+ xx [ 217 ] * xx [ 606 ] - xx [ 219 ] * xx [ 610 ] ) ; xx [ 150 ] = xx [ 600
] - ( xx [ 221 ] * xx [ 605 ] + xx [ 223 ] * xx [ 606 ] + xx [ 229 ] * xx [
610 ] ) ; xx [ 296 ] = xx [ 601 ] - ( xx [ 238 ] * xx [ 607 ] + xx [ 239 ] *
xx [ 608 ] - xx [ 246 ] * xx [ 609 ] ) ; xx [ 582 ] = xx [ 160 ] * xx [ 96 ]
+ xx [ 292 ] * xx [ 145 ] + xx [ 110 ] * xx [ 147 ] + xx [ 38 ] * xx [ 288 ]
+ xx [ 136 ] * xx [ 146 ] + xx [ 165 ] * xx [ 150 ] + xx [ 39 ] * xx [ 296 ]
; xx [ 594 ] = xx [ 418 ] * xx [ 135 ] + xx [ 446 ] * xx [ 154 ] + xx [ 449 ]
* xx [ 156 ] + xx [ 459 ] * xx [ 176 ] + xx [ 426 ] * xx [ 155 ] + xx [ 427 ]
* xx [ 161 ] + xx [ 430 ] * xx [ 162 ] + xx [ 465 ] * xx [ 178 ] - xx [ 457 ]
* xx [ 290 ] - xx [ 367 ] * xx [ 297 ] ; xx [ 595 ] = xx [ 418 ] * xx [ 378 ]
+ xx [ 446 ] * xx [ 399 ] + xx [ 449 ] * xx [ 470 ] + xx [ 459 ] * xx [ 472 ]
+ xx [ 426 ] * xx [ 463 ] + xx [ 427 ] * xx [ 471 ] + xx [ 430 ] * xx [ 473 ]
; xx [ 599 ] = xx [ 418 ] * xx [ 483 ] + xx [ 446 ] * xx [ 482 ] + xx [ 449 ]
* xx [ 494 ] + xx [ 459 ] * xx [ 496 ] + xx [ 426 ] * xx [ 484 ] + xx [ 427 ]
* xx [ 479 ] + xx [ 430 ] * xx [ 480 ] ; xx [ 600 ] = xx [ 418 ] * xx [ 359 ]
+ xx [ 446 ] * xx [ 371 ] + xx [ 449 ] * xx [ 373 ] + xx [ 459 ] * xx [ 487 ]
+ xx [ 426 ] * xx [ 372 ] + xx [ 427 ] * xx [ 403 ] + xx [ 430 ] * xx [ 404 ]
; xx [ 601 ] = xx [ 418 ] * xx [ 507 ] + xx [ 446 ] * xx [ 511 ] + xx [ 449 ]
* xx [ 516 ] + xx [ 459 ] * xx [ 521 ] + xx [ 426 ] * xx [ 515 ] + xx [ 427 ]
* xx [ 517 ] + xx [ 430 ] * xx [ 518 ] ; xx [ 602 ] = xx [ 418 ] * xx [ 525 ]
+ xx [ 446 ] * xx [ 529 ] + xx [ 449 ] * xx [ 543 ] + xx [ 459 ] * xx [ 545 ]
+ xx [ 426 ] * xx [ 542 ] + xx [ 427 ] * xx [ 536 ] + xx [ 430 ] * xx [ 537 ]
; xx [ 603 ] = xx [ 418 ] * xx [ 493 ] + xx [ 446 ] * xx [ 503 ] + xx [ 449 ]
* xx [ 512 ] + xx [ 459 ] * xx [ 514 ] + xx [ 426 ] * xx [ 508 ] + xx [ 427 ]
* xx [ 513 ] + xx [ 430 ] * xx [ 530 ] ; xx [ 604 ] = xx [ 418 ] * xx [ 554 ]
+ xx [ 446 ] * xx [ 558 ] + xx [ 449 ] * xx [ 563 ] + xx [ 459 ] * xx [ 568 ]
+ xx [ 426 ] * xx [ 562 ] + xx [ 427 ] * xx [ 564 ] + xx [ 430 ] * xx [ 565 ]
; xx [ 605 ] = xx [ 418 ] * xx [ 572 ] + xx [ 446 ] * xx [ 576 ] + xx [ 449 ]
* xx [ 590 ] + xx [ 459 ] * xx [ 592 ] + xx [ 426 ] * xx [ 589 ] + xx [ 427 ]
* xx [ 583 ] + xx [ 430 ] * xx [ 584 ] ; xx [ 606 ] = xx [ 418 ] * xx [ 541 ]
+ xx [ 446 ] * xx [ 548 ] + xx [ 449 ] * xx [ 550 ] + xx [ 459 ] * xx [ 579 ]
+ xx [ 426 ] * xx [ 549 ] + xx [ 427 ] * xx [ 559 ] + xx [ 430 ] * xx [ 560 ]
; xx [ 607 ] = xx [ 418 ] * xx [ 94 ] + xx [ 446 ] * xx [ 170 ] + xx [ 449 ]
* xx [ 203 ] + xx [ 459 ] * xx [ 254 ] + xx [ 426 ] * xx [ 191 ] + xx [ 427 ]
* xx [ 206 ] + xx [ 430 ] * xx [ 259 ] ; xx [ 608 ] = xx [ 418 ] * xx [ 95 ]
+ xx [ 446 ] * xx [ 174 ] + xx [ 449 ] * xx [ 587 ] + xx [ 459 ] * xx [ 591 ]
+ xx [ 426 ] * xx [ 295 ] + xx [ 427 ] * xx [ 588 ] + xx [ 430 ] * xx [ 596 ]
; xx [ 609 ] = xx [ 418 ] * xx [ 96 ] + xx [ 446 ] * xx [ 145 ] + xx [ 449 ]
* xx [ 147 ] + xx [ 459 ] * xx [ 288 ] + xx [ 426 ] * xx [ 146 ] + xx [ 427 ]
* xx [ 150 ] + xx [ 430 ] * xx [ 296 ] ; xx [ 610 ] = xx [ 141 ] * xx [ 378 ]
+ xx [ 157 ] * xx [ 399 ] + xx [ 158 ] * xx [ 470 ] + xx [ 289 ] * xx [ 472 ]
+ xx [ 153 ] * xx [ 463 ] + xx [ 133 ] * xx [ 471 ] + xx [ 134 ] * xx [ 473 ]
; xx [ 611 ] = xx [ 141 ] * xx [ 483 ] + xx [ 157 ] * xx [ 482 ] + xx [ 158 ]
* xx [ 494 ] + xx [ 289 ] * xx [ 496 ] + xx [ 153 ] * xx [ 484 ] + xx [ 133 ]
* xx [ 479 ] + xx [ 134 ] * xx [ 480 ] ; xx [ 612 ] = xx [ 141 ] * xx [ 359 ]
+ xx [ 157 ] * xx [ 371 ] + xx [ 158 ] * xx [ 373 ] + xx [ 289 ] * xx [ 487 ]
+ xx [ 153 ] * xx [ 372 ] + xx [ 133 ] * xx [ 403 ] + xx [ 134 ] * xx [ 404 ]
; xx [ 613 ] = xx [ 141 ] * xx [ 507 ] + xx [ 157 ] * xx [ 511 ] + xx [ 158 ]
* xx [ 516 ] + xx [ 289 ] * xx [ 521 ] + xx [ 153 ] * xx [ 515 ] + xx [ 133 ]
* xx [ 517 ] + xx [ 134 ] * xx [ 518 ] ; xx [ 614 ] = xx [ 141 ] * xx [ 525 ]
+ xx [ 157 ] * xx [ 529 ] + xx [ 158 ] * xx [ 543 ] + xx [ 289 ] * xx [ 545 ]
+ xx [ 153 ] * xx [ 542 ] + xx [ 133 ] * xx [ 536 ] + xx [ 134 ] * xx [ 537 ]
; xx [ 615 ] = xx [ 141 ] * xx [ 493 ] + xx [ 157 ] * xx [ 503 ] + xx [ 158 ]
* xx [ 512 ] + xx [ 289 ] * xx [ 514 ] + xx [ 153 ] * xx [ 508 ] + xx [ 133 ]
* xx [ 513 ] + xx [ 134 ] * xx [ 530 ] ; xx [ 616 ] = xx [ 141 ] * xx [ 554 ]
+ xx [ 157 ] * xx [ 558 ] + xx [ 158 ] * xx [ 563 ] + xx [ 289 ] * xx [ 568 ]
+ xx [ 153 ] * xx [ 562 ] + xx [ 133 ] * xx [ 564 ] + xx [ 134 ] * xx [ 565 ]
; xx [ 617 ] = xx [ 141 ] * xx [ 572 ] + xx [ 157 ] * xx [ 576 ] + xx [ 158 ]
* xx [ 590 ] + xx [ 289 ] * xx [ 592 ] + xx [ 153 ] * xx [ 589 ] + xx [ 133 ]
* xx [ 583 ] + xx [ 134 ] * xx [ 584 ] ; xx [ 618 ] = xx [ 141 ] * xx [ 541 ]
+ xx [ 157 ] * xx [ 548 ] + xx [ 158 ] * xx [ 550 ] + xx [ 289 ] * xx [ 579 ]
+ xx [ 153 ] * xx [ 549 ] + xx [ 133 ] * xx [ 559 ] + xx [ 134 ] * xx [ 560 ]
; xx [ 619 ] = xx [ 141 ] * xx [ 94 ] + xx [ 157 ] * xx [ 170 ] + xx [ 158 ]
* xx [ 203 ] + xx [ 289 ] * xx [ 254 ] + xx [ 153 ] * xx [ 191 ] + xx [ 133 ]
* xx [ 206 ] + xx [ 134 ] * xx [ 259 ] ; xx [ 620 ] = xx [ 141 ] * xx [ 95 ]
+ xx [ 157 ] * xx [ 174 ] + xx [ 158 ] * xx [ 587 ] + xx [ 289 ] * xx [ 591 ]
+ xx [ 153 ] * xx [ 295 ] + xx [ 133 ] * xx [ 588 ] + xx [ 134 ] * xx [ 596 ]
; xx [ 621 ] = xx [ 141 ] * xx [ 96 ] + xx [ 157 ] * xx [ 145 ] + xx [ 158 ]
* xx [ 147 ] + xx [ 289 ] * xx [ 288 ] + xx [ 153 ] * xx [ 146 ] + xx [ 133 ]
* xx [ 150 ] + xx [ 134 ] * xx [ 296 ] ; xx [ 622 ] = 0.4995596447523598 ; xx
[ 623 ] = xx [ 56 ] * state [ 43 ] ; xx [ 624 ] = cos ( xx [ 623 ] ) ; xx [
625 ] = xx [ 622 ] * xx [ 624 ] ; xx [ 626 ] = sin ( xx [ 623 ] ) ; xx [ 623
] = xx [ 5 ] * xx [ 626 ] ; xx [ 627 ] = 0.8662794937748998 ; xx [ 628 ] = xx
[ 13 ] * xx [ 626 ] ; xx [ 626 ] = xx [ 622 ] * xx [ 623 ] - xx [ 627 ] * xx
[ 628 ] ; xx [ 629 ] = xx [ 627 ] * xx [ 624 ] ; xx [ 624 ] = - xx [ 629 ] ;
xx [ 630 ] = xx [ 622 ] * xx [ 628 ] + xx [ 627 ] * xx [ 623 ] ; xx [ 622 ] =
- xx [ 630 ] ; xx [ 631 ] = - xx [ 625 ] ; xx [ 632 ] = xx [ 626 ] ; xx [ 633
] = xx [ 624 ] ; xx [ 634 ] = xx [ 622 ] ; xx [ 623 ] = xx [ 1 ] * state [ 47
] + xx [ 2 ] * state [ 45 ] ; xx [ 627 ] = xx [ 1 ] * state [ 48 ] - xx [ 2 ]
* state [ 46 ] ; xx [ 628 ] = - xx [ 627 ] ; xx [ 635 ] = xx [ 1 ] * state [
45 ] - xx [ 2 ] * state [ 47 ] ; xx [ 636 ] = - xx [ 635 ] ; xx [ 637 ] = xx
[ 1 ] * state [ 46 ] + xx [ 2 ] * state [ 48 ] ; xx [ 638 ] = xx [ 623 ] ; xx
[ 639 ] = xx [ 628 ] ; xx [ 640 ] = xx [ 636 ] ; xx [ 641 ] = xx [ 637 ] ;
pm_math_Quaternion_compose_ra ( xx + 631 , xx + 638 , xx + 642 ) ; xx [ 646 ]
= xx [ 628 ] ; xx [ 647 ] = xx [ 636 ] ; xx [ 648 ] = xx [ 637 ] ; xx [ 628 ]
= xx [ 627 ] * xx [ 13 ] - xx [ 5 ] * xx [ 637 ] ; xx [ 636 ] = xx [ 635 ] *
xx [ 5 ] ; xx [ 649 ] = - ( xx [ 635 ] * xx [ 13 ] ) ; xx [ 650 ] = xx [ 628
] ; xx [ 651 ] = - xx [ 636 ] ; pm_math_Vector3_cross_ra ( xx + 646 , xx +
649 , xx + 652 ) ; xx [ 649 ] = xx [ 341 ] * ( xx [ 653 ] - xx [ 628 ] * xx [
623 ] ) ; xx [ 628 ] = ( xx [ 13 ] + xx [ 21 ] * ( xx [ 654 ] + xx [ 636 ] *
xx [ 623 ] ) ) * xx [ 82 ] ; xx [ 636 ] = xx [ 644 ] * xx [ 649 ] + xx [ 645
] * xx [ 628 ] ; xx [ 650 ] = xx [ 643 ] * xx [ 649 ] ; xx [ 651 ] = xx [ 643
] * xx [ 628 ] ; xx [ 652 ] = - xx [ 636 ] ; xx [ 653 ] = xx [ 650 ] ; xx [
654 ] = xx [ 651 ] ; pm_math_Vector3_cross_ra ( xx + 643 , xx + 652 , xx +
655 ) ; xx [ 652 ] = xx [ 82 ] * xx [ 637 ] ; xx [ 653 ] = xx [ 652 ] * xx [
623 ] ; xx [ 654 ] = xx [ 635 ] * xx [ 82 ] ; xx [ 658 ] = ( xx [ 653 ] + xx
[ 627 ] * xx [ 654 ] ) * xx [ 21 ] ; xx [ 659 ] = xx [ 635 ] * xx [ 654 ] ;
xx [ 660 ] = xx [ 652 ] * xx [ 637 ] ; xx [ 661 ] = xx [ 84 ] + xx [ 82 ] - (
xx [ 659 ] + xx [ 660 ] ) * xx [ 21 ] ; xx [ 662 ] = xx [ 654 ] * xx [ 623 ]
; xx [ 663 ] = xx [ 109 ] + xx [ 21 ] * ( xx [ 662 ] - xx [ 627 ] * xx [ 652
] ) ; xx [ 664 ] = - ( xx [ 13 ] * xx [ 658 ] ) ; xx [ 665 ] = xx [ 661 ] *
xx [ 13 ] + xx [ 663 ] * xx [ 5 ] ; xx [ 666 ] = - ( xx [ 5 ] * xx [ 658 ] )
; pm_math_Quaternion_xform_ra ( xx + 631 , xx + 664 , xx + 667 ) ; xx [ 664 ]
= xx [ 626 ] * xx [ 137 ] ; xx [ 665 ] = xx [ 137 ] * xx [ 630 ] ; xx [ 666 ]
= xx [ 21 ] * ( xx [ 655 ] - xx [ 636 ] * xx [ 642 ] ) + xx [ 667 ] - xx [ 21
] * ( xx [ 664 ] * xx [ 629 ] + xx [ 665 ] * xx [ 625 ] ) ; xx [ 636 ] = xx [
627 ] * xx [ 82 ] ; xx [ 670 ] = xx [ 636 ] * xx [ 623 ] ; xx [ 671 ] = xx [
627 ] * xx [ 636 ] ; xx [ 672 ] = ( xx [ 662 ] + xx [ 636 ] * xx [ 637 ] ) *
xx [ 21 ] ; xx [ 673 ] = xx [ 21 ] * ( xx [ 654 ] * xx [ 637 ] - xx [ 670 ] )
; xx [ 674 ] = ( xx [ 671 ] + xx [ 659 ] ) * xx [ 21 ] - xx [ 82 ] ;
pm_math_Quaternion_xform_ra ( xx + 631 , xx + 672 , xx + 675 ) ; xx [ 654 ] =
xx [ 82 ] * xx [ 644 ] ; xx [ 659 ] = xx [ 82 ] * xx [ 643 ] ; xx [ 662 ] =
xx [ 675 ] - ( xx [ 642 ] * xx [ 654 ] + xx [ 645 ] * xx [ 659 ] ) * xx [ 21
] ; xx [ 672 ] = xx [ 82 ] * xx [ 645 ] ; xx [ 678 ] = xx [ 21 ] * ( xx [ 635
] * xx [ 636 ] - xx [ 653 ] ) ; xx [ 679 ] = xx [ 82 ] - ( xx [ 660 ] + xx [
671 ] ) * xx [ 21 ] ; xx [ 680 ] = - ( ( xx [ 670 ] + xx [ 635 ] * xx [ 652 ]
) * xx [ 21 ] ) ; pm_math_Quaternion_xform_ra ( xx + 631 , xx + 678 , xx +
681 ) ; xx [ 636 ] = xx [ 21 ] * ( xx [ 644 ] * xx [ 659 ] - xx [ 642 ] * xx
[ 672 ] ) + xx [ 681 ] ; xx [ 678 ] = xx [ 87 ] ; xx [ 679 ] = - xx [ 662 ] ;
xx [ 680 ] = - xx [ 636 ] ; solveSymmetricPosDef ( xx + 383 , xx + 678 , 3 ,
1 , xx + 684 , xx + 687 ) ; xx [ 678 ] = xx [ 28 ] * xx [ 684 ] ; xx [ 679 ]
= xx [ 29 ] * xx [ 685 ] ; xx [ 680 ] = xx [ 29 ] * xx [ 686 ] ;
pm_math_Quaternion_xform_ra ( xx + 638 , xx + 678 , xx + 687 ) ; xx [ 678 ] =
xx [ 661 ] ; xx [ 679 ] = xx [ 658 ] ; xx [ 680 ] = xx [ 663 ] ; xx [ 652 ] =
xx [ 361 ] * xx [ 686 ] ; xx [ 653 ] = xx [ 361 ] * xx [ 685 ] ; xx [ 660 ] =
xx [ 652 ] * xx [ 637 ] - xx [ 635 ] * xx [ 653 ] ; xx [ 670 ] = xx [ 627 ] *
xx [ 653 ] ; xx [ 671 ] = xx [ 627 ] * xx [ 652 ] ; xx [ 690 ] = - xx [ 660 ]
; xx [ 691 ] = - xx [ 670 ] ; xx [ 692 ] = - xx [ 671 ] ;
pm_math_Vector3_cross_ra ( xx + 646 , xx + 690 , xx + 693 ) ; xx [ 673 ] = xx
[ 652 ] + ( xx [ 694 ] - xx [ 670 ] * xx [ 623 ] ) * xx [ 21 ] ; xx [ 690 ] =
xx [ 21 ] * ( xx [ 693 ] - xx [ 660 ] * xx [ 623 ] ) ; xx [ 691 ] = xx [ 673
] ; xx [ 692 ] = xx [ 21 ] * ( xx [ 695 ] - xx [ 671 ] * xx [ 623 ] ) - xx [
653 ] ; pm_math_Vector3_cross_ra ( xx + 678 , xx + 690 , xx + 693 ) ; xx [
652 ] = xx [ 635 ] * xx [ 637 ] ; xx [ 653 ] = xx [ 627 ] * xx [ 623 ] ; xx [
660 ] = ( xx [ 652 ] + xx [ 653 ] ) * xx [ 21 ] ; xx [ 670 ] = xx [ 363 ] *
xx [ 660 ] ; xx [ 671 ] = xx [ 623 ] * xx [ 623 ] ; xx [ 674 ] = ( xx [ 671 ]
+ xx [ 637 ] * xx [ 637 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 684 ] = xx [ 363 ]
* xx [ 674 ] ; xx [ 688 ] = xx [ 627 ] * xx [ 637 ] ; xx [ 690 ] = xx [ 635 ]
* xx [ 623 ] ; xx [ 691 ] = ( xx [ 688 ] + xx [ 690 ] ) * xx [ 21 ] ; xx [
692 ] = xx [ 414 ] * xx [ 691 ] ; xx [ 694 ] = xx [ 627 ] * xx [ 635 ] ; xx [
696 ] = xx [ 637 ] * xx [ 623 ] ; xx [ 697 ] = xx [ 21 ] * ( xx [ 694 ] - xx
[ 696 ] ) ; xx [ 698 ] = xx [ 414 ] * xx [ 697 ] ; xx [ 699 ] = xx [ 692 ] *
xx [ 697 ] - xx [ 691 ] * xx [ 698 ] ; xx [ 700 ] = xx [ 21 ] * ( xx [ 653 ]
- xx [ 652 ] ) ; xx [ 652 ] = ( xx [ 671 ] + xx [ 635 ] * xx [ 635 ] ) * xx [
21 ] - xx [ 55 ] ; xx [ 653 ] = xx [ 660 ] * xx [ 692 ] - xx [ 698 ] * xx [
674 ] ; xx [ 701 ] = xx [ 414 ] * xx [ 700 ] ; xx [ 702 ] = xx [ 414 ] * xx [
652 ] ; xx [ 703 ] = xx [ 701 ] * xx [ 697 ] + xx [ 691 ] * xx [ 702 ] ; xx [
704 ] = xx [ 702 ] * xx [ 674 ] + xx [ 660 ] * xx [ 701 ] ; xx [ 705 ] = xx [
414 ] * xx [ 674 ] ; xx [ 706 ] = xx [ 414 ] * xx [ 660 ] ; xx [ 707 ] = xx [
705 ] * xx [ 697 ] - xx [ 691 ] * xx [ 706 ] ; xx [ 708 ] = xx [ 660 ] * xx [
705 ] - xx [ 706 ] * xx [ 674 ] ; xx [ 709 ] = - xx [ 699 ] ; xx [ 710 ] = -
( xx [ 698 ] * xx [ 700 ] + xx [ 692 ] * xx [ 652 ] ) ; xx [ 711 ] = xx [ 653
] ; xx [ 712 ] = xx [ 703 ] ; xx [ 713 ] = xx [ 701 ] * xx [ 652 ] - xx [ 702
] * xx [ 700 ] ; xx [ 714 ] = - xx [ 704 ] ; xx [ 715 ] = xx [ 707 ] ; xx [
716 ] = xx [ 705 ] * xx [ 652 ] + xx [ 706 ] * xx [ 700 ] ; xx [ 717 ] = - xx
[ 708 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 709 , xx + 678 , xx + 718 ) ;
xx [ 692 ] = ( xx [ 671 ] + xx [ 627 ] * xx [ 627 ] ) * xx [ 21 ] - xx [ 55 ]
; xx [ 671 ] = xx [ 694 ] + xx [ 696 ] ; xx [ 694 ] = xx [ 671 ] * xx [ 21 ]
; xx [ 696 ] = xx [ 690 ] - xx [ 688 ] ; xx [ 688 ] = xx [ 21 ] * xx [ 696 ]
; xx [ 709 ] = xx [ 692 ] ; xx [ 710 ] = xx [ 694 ] ; xx [ 711 ] = xx [ 688 ]
; xx [ 712 ] = xx [ 697 ] ; xx [ 713 ] = xx [ 652 ] ; xx [ 714 ] = - xx [ 660
] ; xx [ 715 ] = - xx [ 691 ] ; xx [ 716 ] = xx [ 700 ] ; xx [ 717 ] = xx [
674 ] ; xx [ 727 ] = xx [ 251 ] * xx [ 692 ] ; xx [ 728 ] = xx [ 410 ] * xx [
697 ] ; xx [ 729 ] = - ( xx [ 410 ] * xx [ 691 ] ) ; xx [ 730 ] = xx [ 671 ]
* xx [ 420 ] ; xx [ 731 ] = xx [ 410 ] * xx [ 652 ] ; xx [ 732 ] = xx [ 410 ]
* xx [ 700 ] ; xx [ 733 ] = xx [ 420 ] * xx [ 696 ] ; xx [ 734 ] = - ( xx [
410 ] * xx [ 660 ] ) ; xx [ 735 ] = xx [ 410 ] * xx [ 674 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 709 , xx + 727 , xx + 736 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 736 , xx + 678 , xx + 727 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 727 , xx + 678 , xx + 744 ) ; xx [ 671 ]
= xx [ 363 ] * xx [ 697 ] ; xx [ 690 ] = xx [ 363 ] * xx [ 691 ] ; xx [ 696 ]
= xx [ 704 ] + xx [ 734 ] ; xx [ 698 ] = xx [ 703 ] - xx [ 728 ] ; xx [ 701 ]
= ( xx [ 232 ] + xx [ 740 ] ) * xx [ 137 ] - ( xx [ 5 ] * xx [ 698 ] + xx [
13 ] * xx [ 696 ] ) ; xx [ 702 ] = ( ( xx [ 188 ] + xx [ 660 ] * xx [ 670 ] +
xx [ 684 ] * xx [ 674 ] - xx [ 726 ] - xx [ 726 ] - xx [ 752 ] ) * xx [ 13 ]
+ ( xx [ 660 ] * xx [ 671 ] + xx [ 690 ] * xx [ 674 ] + xx [ 720 ] + xx [ 724
] + xx [ 746 ] ) * xx [ 5 ] - xx [ 137 ] * xx [ 696 ] ) * xx [ 13 ] - ( xx [
137 ] * xx [ 698 ] - ( ( xx [ 218 ] + xx [ 671 ] * xx [ 697 ] + xx [ 691 ] *
xx [ 690 ] - xx [ 718 ] - xx [ 718 ] - xx [ 744 ] ) * xx [ 5 ] + ( xx [ 670 ]
* xx [ 697 ] + xx [ 691 ] * xx [ 684 ] + xx [ 724 ] + xx [ 720 ] + xx [ 750 ]
) * xx [ 13 ] ) ) * xx [ 5 ] + xx [ 701 ] * xx [ 137 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 702 , 1 , xx + 670 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 5/Revolute Joint 5' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 670 ] = ( ( xx [ 689 ] + xx [ 695 ] ) * xx [ 13 ] - (
xx [ 687 ] + xx [ 693 ] ) * xx [ 5 ] + xx [ 673 ] * xx [ 137 ] + xx [ 666 ] )
/ xx [ 702 ] ; xx [ 671 ] = xx [ 13 ] * xx [ 670 ] ; xx [ 673 ] = xx [ 5 ] *
xx [ 670 ] ; xx [ 684 ] = xx [ 627 ] * xx [ 671 ] - xx [ 673 ] * xx [ 637 ] ;
xx [ 687 ] = xx [ 635 ] * xx [ 673 ] ; xx [ 703 ] = xx [ 635 ] * xx [ 671 ] ;
xx [ 704 ] = - xx [ 684 ] ; xx [ 705 ] = xx [ 687 ] ;
pm_math_Vector3_cross_ra ( xx + 646 , xx + 703 , xx + 718 ) ; xx [ 703 ] = xx
[ 658 ] * xx [ 671 ] ; xx [ 704 ] = - ( xx [ 663 ] * xx [ 673 ] + xx [ 661 ]
* xx [ 671 ] + xx [ 137 ] * xx [ 670 ] ) ; xx [ 705 ] = xx [ 658 ] * xx [ 673
] ; pm_math_Quaternion_inverseXform_ra ( xx + 638 , xx + 703 , xx + 721 ) ;
xx [ 673 ] = xx [ 642 ] * xx [ 659 ] ; xx [ 689 ] = xx [ 21 ] * ( xx [ 673 ]
- xx [ 645 ] * xx [ 654 ] ) + xx [ 676 ] ; xx [ 690 ] = xx [ 643 ] * xx [ 659
] ; xx [ 659 ] = xx [ 682 ] - ( xx [ 645 ] * xx [ 672 ] + xx [ 690 ] ) * xx [
21 ] + xx [ 82 ] ; xx [ 703 ] = xx [ 87 ] ; xx [ 704 ] = - xx [ 689 ] ; xx [
705 ] = - xx [ 659 ] ; solveSymmetricPosDef ( xx + 383 , xx + 703 , 3 , 1 ,
xx + 724 , xx + 730 ) ; xx [ 703 ] = xx [ 28 ] * xx [ 724 ] ; xx [ 704 ] = xx
[ 29 ] * xx [ 725 ] ; xx [ 705 ] = xx [ 29 ] * xx [ 726 ] ;
pm_math_Quaternion_xform_ra ( xx + 638 , xx + 703 , xx + 730 ) ; xx [ 693 ] =
xx [ 361 ] * xx [ 726 ] ; xx [ 695 ] = xx [ 361 ] * xx [ 725 ] ; xx [ 696 ] =
xx [ 693 ] * xx [ 637 ] - xx [ 635 ] * xx [ 695 ] ; xx [ 698 ] = xx [ 627 ] *
xx [ 695 ] ; xx [ 703 ] = xx [ 627 ] * xx [ 693 ] ; xx [ 704 ] = - xx [ 696 ]
; xx [ 705 ] = - xx [ 698 ] ; xx [ 706 ] = - xx [ 703 ] ;
pm_math_Vector3_cross_ra ( xx + 646 , xx + 704 , xx + 744 ) ; xx [ 704 ] = xx
[ 693 ] + ( xx [ 745 ] - xx [ 698 ] * xx [ 623 ] ) * xx [ 21 ] ; xx [ 747 ] =
xx [ 21 ] * ( xx [ 744 ] - xx [ 696 ] * xx [ 623 ] ) ; xx [ 748 ] = xx [ 704
] ; xx [ 749 ] = xx [ 21 ] * ( xx [ 746 ] - xx [ 703 ] * xx [ 623 ] ) - xx [
695 ] ; pm_math_Vector3_cross_ra ( xx + 678 , xx + 747 , xx + 744 ) ; xx [
693 ] = xx [ 628 ] + ( xx [ 642 ] * xx [ 650 ] + xx [ 656 ] ) * xx [ 21 ] +
xx [ 668 ] - ( xx [ 665 ] * xx [ 630 ] + xx [ 626 ] * xx [ 664 ] ) * xx [ 21
] + xx [ 137 ] ; xx [ 628 ] = ( ( xx [ 732 ] + xx [ 746 ] ) * xx [ 13 ] - (
xx [ 730 ] + xx [ 744 ] ) * xx [ 5 ] + xx [ 704 ] * xx [ 137 ] + xx [ 693 ] )
/ xx [ 702 ] ; xx [ 650 ] = xx [ 13 ] * xx [ 628 ] ; xx [ 695 ] = xx [ 5 ] *
xx [ 628 ] ; xx [ 696 ] = xx [ 627 ] * xx [ 650 ] - xx [ 695 ] * xx [ 637 ] ;
xx [ 698 ] = xx [ 635 ] * xx [ 695 ] ; xx [ 703 ] = xx [ 635 ] * xx [ 650 ] ;
xx [ 704 ] = - xx [ 696 ] ; xx [ 705 ] = xx [ 698 ] ;
pm_math_Vector3_cross_ra ( xx + 646 , xx + 703 , xx + 730 ) ; xx [ 703 ] = xx
[ 658 ] * xx [ 650 ] ; xx [ 704 ] = - ( xx [ 663 ] * xx [ 695 ] + xx [ 661 ]
* xx [ 650 ] + xx [ 137 ] * xx [ 628 ] ) ; xx [ 705 ] = xx [ 658 ] * xx [ 695
] ; pm_math_Quaternion_inverseXform_ra ( xx + 638 , xx + 703 , xx + 744 ) ;
xx [ 695 ] = xx [ 725 ] - ( ( xx [ 696 ] * xx [ 623 ] + xx [ 731 ] ) * xx [
413 ] - xx [ 415 ] * xx [ 746 ] ) ; xx [ 696 ] = xx [ 726 ] - ( xx [ 395 ] *
( ( xx [ 732 ] - xx [ 698 ] * xx [ 623 ] ) * xx [ 21 ] - xx [ 650 ] ) + xx [
415 ] * xx [ 745 ] ) ; xx [ 650 ] = xx [ 306 ] * xx [ 483 ] + xx [ 398 ] * xx
[ 482 ] + xx [ 456 ] * xx [ 494 ] + xx [ 305 ] * xx [ 496 ] + xx [ 365 ] * xx
[ 484 ] + xx [ 377 ] * xx [ 479 ] + xx [ 397 ] * xx [ 480 ] + xx [ 666 ] * xx
[ 628 ] - xx [ 662 ] * xx [ 695 ] - xx [ 636 ] * xx [ 696 ] ; xx [ 675 ] = xx
[ 677 ] + ( xx [ 690 ] + xx [ 644 ] * xx [ 654 ] ) * xx [ 21 ] - xx [ 82 ] ;
xx [ 654 ] = ( xx [ 673 ] + xx [ 644 ] * xx [ 672 ] ) * xx [ 21 ] + xx [ 683
] ; xx [ 681 ] = xx [ 87 ] ; xx [ 682 ] = - xx [ 675 ] ; xx [ 683 ] = - xx [
654 ] ; solveSymmetricPosDef ( xx + 383 , xx + 681 , 3 , 1 , xx + 703 , xx +
724 ) ; xx [ 681 ] = xx [ 28 ] * xx [ 703 ] ; xx [ 682 ] = xx [ 29 ] * xx [
704 ] ; xx [ 683 ] = xx [ 29 ] * xx [ 705 ] ; pm_math_Quaternion_xform_ra (
xx + 638 , xx + 681 , xx + 724 ) ; xx [ 672 ] = xx [ 361 ] * xx [ 705 ] ; xx
[ 673 ] = xx [ 361 ] * xx [ 704 ] ; xx [ 676 ] = xx [ 672 ] * xx [ 637 ] - xx
[ 635 ] * xx [ 673 ] ; xx [ 677 ] = xx [ 627 ] * xx [ 673 ] ; xx [ 681 ] = xx
[ 627 ] * xx [ 672 ] ; xx [ 730 ] = - xx [ 676 ] ; xx [ 731 ] = - xx [ 677 ]
; xx [ 732 ] = - xx [ 681 ] ; pm_math_Vector3_cross_ra ( xx + 646 , xx + 730
, xx + 744 ) ; xx [ 682 ] = xx [ 672 ] + ( xx [ 745 ] - xx [ 677 ] * xx [ 623
] ) * xx [ 21 ] ; xx [ 730 ] = xx [ 21 ] * ( xx [ 744 ] - xx [ 676 ] * xx [
623 ] ) ; xx [ 731 ] = xx [ 682 ] ; xx [ 732 ] = xx [ 21 ] * ( xx [ 746 ] -
xx [ 681 ] * xx [ 623 ] ) - xx [ 673 ] ; pm_math_Vector3_cross_ra ( xx + 678
, xx + 730 , xx + 744 ) ; xx [ 655 ] = ( xx [ 642 ] * xx [ 651 ] + xx [ 657 ]
) * xx [ 21 ] - xx [ 649 ] + xx [ 669 ] + ( xx [ 665 ] * xx [ 629 ] - xx [
664 ] * xx [ 625 ] ) * xx [ 21 ] ; xx [ 649 ] = ( ( xx [ 726 ] + xx [ 746 ] )
* xx [ 13 ] - ( xx [ 724 ] + xx [ 744 ] ) * xx [ 5 ] + xx [ 682 ] * xx [ 137
] + xx [ 655 ] ) / xx [ 702 ] ; xx [ 651 ] = xx [ 13 ] * xx [ 649 ] ; xx [
656 ] = xx [ 5 ] * xx [ 649 ] ; xx [ 657 ] = xx [ 627 ] * xx [ 651 ] - xx [
656 ] * xx [ 637 ] ; xx [ 664 ] = xx [ 635 ] * xx [ 656 ] ; xx [ 667 ] = xx [
635 ] * xx [ 651 ] ; xx [ 668 ] = - xx [ 657 ] ; xx [ 669 ] = xx [ 664 ] ;
pm_math_Vector3_cross_ra ( xx + 646 , xx + 667 , xx + 681 ) ; xx [ 667 ] = xx
[ 658 ] * xx [ 651 ] ; xx [ 668 ] = - ( xx [ 663 ] * xx [ 656 ] + xx [ 661 ]
* xx [ 651 ] + xx [ 137 ] * xx [ 649 ] ) ; xx [ 669 ] = xx [ 658 ] * xx [ 656
] ; pm_math_Quaternion_inverseXform_ra ( xx + 638 , xx + 667 , xx + 724 ) ;
xx [ 656 ] = xx [ 704 ] - ( ( xx [ 657 ] * xx [ 623 ] + xx [ 682 ] ) * xx [
413 ] - xx [ 415 ] * xx [ 726 ] ) ; xx [ 657 ] = xx [ 705 ] - ( xx [ 395 ] *
( ( xx [ 683 ] - xx [ 664 ] * xx [ 623 ] ) * xx [ 21 ] - xx [ 651 ] ) + xx [
415 ] * xx [ 725 ] ) ; xx [ 651 ] = xx [ 306 ] * xx [ 359 ] + xx [ 398 ] * xx
[ 371 ] + xx [ 456 ] * xx [ 373 ] + xx [ 305 ] * xx [ 487 ] + xx [ 365 ] * xx
[ 372 ] + xx [ 377 ] * xx [ 403 ] + xx [ 397 ] * xx [ 404 ] + xx [ 666 ] * xx
[ 649 ] - xx [ 662 ] * xx [ 656 ] - xx [ 636 ] * xx [ 657 ] ; xx [ 664 ] = xx
[ 306 ] * xx [ 507 ] + xx [ 398 ] * xx [ 511 ] + xx [ 456 ] * xx [ 516 ] + xx
[ 305 ] * xx [ 521 ] + xx [ 365 ] * xx [ 515 ] + xx [ 377 ] * xx [ 517 ] + xx
[ 397 ] * xx [ 518 ] ; xx [ 665 ] = xx [ 306 ] * xx [ 525 ] + xx [ 398 ] * xx
[ 529 ] + xx [ 456 ] * xx [ 543 ] + xx [ 305 ] * xx [ 545 ] + xx [ 365 ] * xx
[ 542 ] + xx [ 377 ] * xx [ 536 ] + xx [ 397 ] * xx [ 537 ] ; xx [ 667 ] = xx
[ 306 ] * xx [ 493 ] + xx [ 398 ] * xx [ 503 ] + xx [ 456 ] * xx [ 512 ] + xx
[ 305 ] * xx [ 514 ] + xx [ 365 ] * xx [ 508 ] + xx [ 377 ] * xx [ 513 ] + xx
[ 397 ] * xx [ 530 ] ; xx [ 668 ] = xx [ 306 ] * xx [ 554 ] + xx [ 398 ] * xx
[ 558 ] + xx [ 456 ] * xx [ 563 ] + xx [ 305 ] * xx [ 568 ] + xx [ 365 ] * xx
[ 562 ] + xx [ 377 ] * xx [ 564 ] + xx [ 397 ] * xx [ 565 ] ; xx [ 669 ] = xx
[ 306 ] * xx [ 572 ] + xx [ 398 ] * xx [ 576 ] + xx [ 456 ] * xx [ 590 ] + xx
[ 305 ] * xx [ 592 ] + xx [ 365 ] * xx [ 589 ] + xx [ 377 ] * xx [ 583 ] + xx
[ 397 ] * xx [ 584 ] ; xx [ 672 ] = xx [ 306 ] * xx [ 541 ] + xx [ 398 ] * xx
[ 548 ] + xx [ 456 ] * xx [ 550 ] + xx [ 305 ] * xx [ 579 ] + xx [ 365 ] * xx
[ 549 ] + xx [ 377 ] * xx [ 559 ] + xx [ 397 ] * xx [ 560 ] ; xx [ 673 ] = xx
[ 306 ] * xx [ 94 ] + xx [ 398 ] * xx [ 170 ] + xx [ 456 ] * xx [ 203 ] + xx
[ 305 ] * xx [ 254 ] + xx [ 365 ] * xx [ 191 ] + xx [ 377 ] * xx [ 206 ] + xx
[ 397 ] * xx [ 259 ] ; xx [ 676 ] = xx [ 306 ] * xx [ 95 ] + xx [ 398 ] * xx
[ 174 ] + xx [ 456 ] * xx [ 587 ] + xx [ 305 ] * xx [ 591 ] + xx [ 365 ] * xx
[ 295 ] + xx [ 377 ] * xx [ 588 ] + xx [ 397 ] * xx [ 596 ] ; xx [ 677 ] = xx
[ 306 ] * xx [ 96 ] + xx [ 398 ] * xx [ 145 ] + xx [ 456 ] * xx [ 147 ] + xx
[ 305 ] * xx [ 288 ] + xx [ 365 ] * xx [ 146 ] + xx [ 377 ] * xx [ 150 ] + xx
[ 397 ] * xx [ 296 ] ; xx [ 681 ] = xx [ 475 ] * xx [ 359 ] + xx [ 501 ] * xx
[ 371 ] + xx [ 502 ] * xx [ 373 ] + xx [ 504 ] * xx [ 487 ] + xx [ 476 ] * xx
[ 372 ] + xx [ 477 ] * xx [ 403 ] + xx [ 478 ] * xx [ 404 ] + xx [ 693 ] * xx
[ 649 ] - xx [ 689 ] * xx [ 656 ] - xx [ 659 ] * xx [ 657 ] ; xx [ 682 ] = xx
[ 475 ] * xx [ 507 ] + xx [ 501 ] * xx [ 511 ] + xx [ 502 ] * xx [ 516 ] + xx
[ 504 ] * xx [ 521 ] + xx [ 476 ] * xx [ 515 ] + xx [ 477 ] * xx [ 517 ] + xx
[ 478 ] * xx [ 518 ] ; xx [ 683 ] = xx [ 475 ] * xx [ 525 ] + xx [ 501 ] * xx
[ 529 ] + xx [ 502 ] * xx [ 543 ] + xx [ 504 ] * xx [ 545 ] + xx [ 476 ] * xx
[ 542 ] + xx [ 477 ] * xx [ 536 ] + xx [ 478 ] * xx [ 537 ] ; xx [ 690 ] = xx
[ 475 ] * xx [ 493 ] + xx [ 501 ] * xx [ 503 ] + xx [ 502 ] * xx [ 512 ] + xx
[ 504 ] * xx [ 514 ] + xx [ 476 ] * xx [ 508 ] + xx [ 477 ] * xx [ 513 ] + xx
[ 478 ] * xx [ 530 ] ; xx [ 698 ] = xx [ 475 ] * xx [ 554 ] + xx [ 501 ] * xx
[ 558 ] + xx [ 502 ] * xx [ 563 ] + xx [ 504 ] * xx [ 568 ] + xx [ 476 ] * xx
[ 562 ] + xx [ 477 ] * xx [ 564 ] + xx [ 478 ] * xx [ 565 ] ; xx [ 703 ] = xx
[ 475 ] * xx [ 572 ] + xx [ 501 ] * xx [ 576 ] + xx [ 502 ] * xx [ 590 ] + xx
[ 504 ] * xx [ 592 ] + xx [ 476 ] * xx [ 589 ] + xx [ 477 ] * xx [ 583 ] + xx
[ 478 ] * xx [ 584 ] ; xx [ 704 ] = xx [ 475 ] * xx [ 541 ] + xx [ 501 ] * xx
[ 548 ] + xx [ 502 ] * xx [ 550 ] + xx [ 504 ] * xx [ 579 ] + xx [ 476 ] * xx
[ 549 ] + xx [ 477 ] * xx [ 559 ] + xx [ 478 ] * xx [ 560 ] ; xx [ 705 ] = xx
[ 475 ] * xx [ 94 ] + xx [ 501 ] * xx [ 170 ] + xx [ 502 ] * xx [ 203 ] + xx
[ 504 ] * xx [ 254 ] + xx [ 476 ] * xx [ 191 ] + xx [ 477 ] * xx [ 206 ] + xx
[ 478 ] * xx [ 259 ] ; xx [ 706 ] = xx [ 475 ] * xx [ 95 ] + xx [ 501 ] * xx
[ 174 ] + xx [ 502 ] * xx [ 587 ] + xx [ 504 ] * xx [ 591 ] + xx [ 476 ] * xx
[ 295 ] + xx [ 477 ] * xx [ 588 ] + xx [ 478 ] * xx [ 596 ] ; xx [ 718 ] = xx
[ 475 ] * xx [ 96 ] + xx [ 501 ] * xx [ 145 ] + xx [ 502 ] * xx [ 147 ] + xx
[ 504 ] * xx [ 288 ] + xx [ 476 ] * xx [ 146 ] + xx [ 477 ] * xx [ 150 ] + xx
[ 478 ] * xx [ 296 ] ; xx [ 721 ] = xx [ 380 ] * xx [ 507 ] + xx [ 382 ] * xx
[ 511 ] + xx [ 394 ] * xx [ 516 ] + xx [ 486 ] * xx [ 521 ] + xx [ 381 ] * xx
[ 515 ] + xx [ 307 ] * xx [ 517 ] + xx [ 355 ] * xx [ 518 ] ; xx [ 724 ] = xx
[ 380 ] * xx [ 525 ] + xx [ 382 ] * xx [ 529 ] + xx [ 394 ] * xx [ 543 ] + xx
[ 486 ] * xx [ 545 ] + xx [ 381 ] * xx [ 542 ] + xx [ 307 ] * xx [ 536 ] + xx
[ 355 ] * xx [ 537 ] ; xx [ 725 ] = xx [ 380 ] * xx [ 493 ] + xx [ 382 ] * xx
[ 503 ] + xx [ 394 ] * xx [ 512 ] + xx [ 486 ] * xx [ 514 ] + xx [ 381 ] * xx
[ 508 ] + xx [ 307 ] * xx [ 513 ] + xx [ 355 ] * xx [ 530 ] ; xx [ 726 ] = xx
[ 380 ] * xx [ 554 ] + xx [ 382 ] * xx [ 558 ] + xx [ 394 ] * xx [ 563 ] + xx
[ 486 ] * xx [ 568 ] + xx [ 381 ] * xx [ 562 ] + xx [ 307 ] * xx [ 564 ] + xx
[ 355 ] * xx [ 565 ] ; xx [ 728 ] = xx [ 380 ] * xx [ 572 ] + xx [ 382 ] * xx
[ 576 ] + xx [ 394 ] * xx [ 590 ] + xx [ 486 ] * xx [ 592 ] + xx [ 381 ] * xx
[ 589 ] + xx [ 307 ] * xx [ 583 ] + xx [ 355 ] * xx [ 584 ] ; xx [ 730 ] = xx
[ 380 ] * xx [ 541 ] + xx [ 382 ] * xx [ 548 ] + xx [ 394 ] * xx [ 550 ] + xx
[ 486 ] * xx [ 579 ] + xx [ 381 ] * xx [ 549 ] + xx [ 307 ] * xx [ 559 ] + xx
[ 355 ] * xx [ 560 ] ; xx [ 731 ] = xx [ 380 ] * xx [ 94 ] + xx [ 382 ] * xx
[ 170 ] + xx [ 394 ] * xx [ 203 ] + xx [ 486 ] * xx [ 254 ] + xx [ 381 ] * xx
[ 191 ] + xx [ 307 ] * xx [ 206 ] + xx [ 355 ] * xx [ 259 ] ; xx [ 732 ] = xx
[ 380 ] * xx [ 95 ] + xx [ 382 ] * xx [ 174 ] + xx [ 394 ] * xx [ 587 ] + xx
[ 486 ] * xx [ 591 ] + xx [ 381 ] * xx [ 295 ] + xx [ 307 ] * xx [ 588 ] + xx
[ 355 ] * xx [ 596 ] ; xx [ 734 ] = xx [ 380 ] * xx [ 96 ] + xx [ 382 ] * xx
[ 145 ] + xx [ 394 ] * xx [ 147 ] + xx [ 486 ] * xx [ 288 ] + xx [ 381 ] * xx
[ 146 ] + xx [ 307 ] * xx [ 150 ] + xx [ 355 ] * xx [ 296 ] ; xx [ 736 ] =
0.8657710899485229 ; xx [ 738 ] = xx [ 56 ] * state [ 52 ] ; xx [ 740 ] = cos
( xx [ 738 ] ) ; xx [ 742 ] = xx [ 736 ] * xx [ 740 ] ; xx [ 744 ] = sin ( xx
[ 738 ] ) ; xx [ 738 ] = xx [ 5 ] * xx [ 744 ] ; xx [ 745 ] =
0.5004402260104068 ; xx [ 746 ] = xx [ 13 ] * xx [ 744 ] ; xx [ 744 ] = xx [
736 ] * xx [ 738 ] - xx [ 745 ] * xx [ 746 ] ; xx [ 747 ] = xx [ 745 ] * xx [
740 ] ; xx [ 740 ] = - xx [ 747 ] ; xx [ 748 ] = xx [ 736 ] * xx [ 746 ] + xx
[ 745 ] * xx [ 738 ] ; xx [ 749 ] = xx [ 742 ] ; xx [ 750 ] = xx [ 744 ] ; xx
[ 751 ] = xx [ 740 ] ; xx [ 752 ] = xx [ 748 ] ; xx [ 736 ] = xx [ 2 ] *
state [ 54 ] - xx [ 1 ] * state [ 56 ] ; xx [ 738 ] = xx [ 2 ] * state [ 55 ]
+ xx [ 1 ] * state [ 57 ] ; xx [ 745 ] = xx [ 2 ] * state [ 56 ] + xx [ 1 ] *
state [ 54 ] ; xx [ 746 ] = xx [ 2 ] * state [ 57 ] - xx [ 1 ] * state [ 55 ]
; xx [ 753 ] = xx [ 736 ] ; xx [ 754 ] = xx [ 738 ] ; xx [ 755 ] = xx [ 745 ]
; xx [ 756 ] = xx [ 746 ] ; pm_math_Quaternion_compose_ra ( xx + 749 , xx +
753 , xx + 757 ) ; xx [ 761 ] = xx [ 738 ] ; xx [ 762 ] = xx [ 745 ] ; xx [
763 ] = xx [ 746 ] ; xx [ 764 ] = xx [ 5 ] * xx [ 746 ] - xx [ 738 ] * xx [
13 ] ; xx [ 765 ] = xx [ 745 ] * xx [ 5 ] ; xx [ 766 ] = xx [ 745 ] * xx [ 13
] ; xx [ 767 ] = xx [ 764 ] ; xx [ 768 ] = - xx [ 765 ] ;
pm_math_Vector3_cross_ra ( xx + 761 , xx + 766 , xx + 769 ) ; xx [ 766 ] = xx
[ 341 ] * ( xx [ 770 ] - xx [ 764 ] * xx [ 736 ] ) ; xx [ 764 ] = ( xx [ 13 ]
+ xx [ 21 ] * ( xx [ 771 ] + xx [ 765 ] * xx [ 736 ] ) ) * xx [ 82 ] ; xx [
765 ] = xx [ 759 ] * xx [ 766 ] + xx [ 760 ] * xx [ 764 ] ; xx [ 767 ] = xx [
758 ] * xx [ 766 ] ; xx [ 768 ] = xx [ 758 ] * xx [ 764 ] ; xx [ 769 ] = - xx
[ 765 ] ; xx [ 770 ] = xx [ 767 ] ; xx [ 771 ] = xx [ 768 ] ;
pm_math_Vector3_cross_ra ( xx + 758 , xx + 769 , xx + 772 ) ; xx [ 769 ] = xx
[ 82 ] * xx [ 746 ] ; xx [ 770 ] = xx [ 769 ] * xx [ 736 ] ; xx [ 771 ] = xx
[ 745 ] * xx [ 82 ] ; xx [ 775 ] = ( xx [ 770 ] + xx [ 738 ] * xx [ 771 ] ) *
xx [ 21 ] ; xx [ 776 ] = xx [ 745 ] * xx [ 771 ] ; xx [ 777 ] = xx [ 769 ] *
xx [ 746 ] ; xx [ 778 ] = xx [ 84 ] + xx [ 82 ] - ( xx [ 776 ] + xx [ 777 ] )
* xx [ 21 ] ; xx [ 779 ] = xx [ 771 ] * xx [ 736 ] ; xx [ 780 ] = xx [ 21 ] *
( xx [ 738 ] * xx [ 769 ] - xx [ 779 ] ) - xx [ 109 ] ; xx [ 781 ] = - ( xx [
13 ] * xx [ 775 ] ) ; xx [ 782 ] = xx [ 778 ] * xx [ 13 ] - xx [ 780 ] * xx [
5 ] ; xx [ 783 ] = xx [ 5 ] * xx [ 775 ] ; pm_math_Quaternion_xform_ra ( xx +
749 , xx + 781 , xx + 784 ) ; xx [ 781 ] = xx [ 744 ] * xx [ 137 ] ; xx [ 782
] = xx [ 137 ] * xx [ 748 ] ; xx [ 783 ] = xx [ 21 ] * ( xx [ 772 ] - xx [
765 ] * xx [ 757 ] ) + xx [ 784 ] - xx [ 21 ] * ( xx [ 781 ] * xx [ 747 ] +
xx [ 782 ] * xx [ 742 ] ) ; xx [ 765 ] = xx [ 738 ] * xx [ 82 ] ; xx [ 787 ]
= xx [ 765 ] * xx [ 736 ] ; xx [ 788 ] = xx [ 738 ] * xx [ 765 ] ; xx [ 789 ]
= - ( ( xx [ 779 ] + xx [ 765 ] * xx [ 746 ] ) * xx [ 21 ] ) ; xx [ 790 ] =
xx [ 21 ] * ( xx [ 787 ] - xx [ 771 ] * xx [ 746 ] ) ; xx [ 791 ] = ( xx [
788 ] + xx [ 776 ] ) * xx [ 21 ] - xx [ 82 ] ; pm_math_Quaternion_xform_ra (
xx + 749 , xx + 789 , xx + 792 ) ; xx [ 771 ] = xx [ 82 ] * xx [ 759 ] ; xx [
776 ] = xx [ 82 ] * xx [ 758 ] ; xx [ 779 ] = xx [ 792 ] - ( xx [ 757 ] * xx
[ 771 ] + xx [ 760 ] * xx [ 776 ] ) * xx [ 21 ] ; xx [ 789 ] = xx [ 82 ] * xx
[ 760 ] ; xx [ 795 ] = xx [ 21 ] * ( xx [ 745 ] * xx [ 765 ] - xx [ 770 ] ) ;
xx [ 796 ] = xx [ 82 ] - ( xx [ 777 ] + xx [ 788 ] ) * xx [ 21 ] ; xx [ 797 ]
= ( xx [ 787 ] + xx [ 745 ] * xx [ 769 ] ) * xx [ 21 ] ;
pm_math_Quaternion_xform_ra ( xx + 749 , xx + 795 , xx + 798 ) ; xx [ 765 ] =
xx [ 21 ] * ( xx [ 759 ] * xx [ 776 ] - xx [ 757 ] * xx [ 789 ] ) + xx [ 798
] ; xx [ 795 ] = xx [ 87 ] ; xx [ 796 ] = - xx [ 779 ] ; xx [ 797 ] = - xx [
765 ] ; solveSymmetricPosDef ( xx + 383 , xx + 795 , 3 , 1 , xx + 801 , xx +
804 ) ; xx [ 795 ] = xx [ 28 ] * xx [ 801 ] ; xx [ 796 ] = xx [ 29 ] * xx [
802 ] ; xx [ 797 ] = xx [ 29 ] * xx [ 803 ] ; pm_math_Quaternion_xform_ra (
xx + 753 , xx + 795 , xx + 804 ) ; xx [ 795 ] = xx [ 778 ] ; xx [ 796 ] = xx
[ 775 ] ; xx [ 797 ] = xx [ 780 ] ; xx [ 769 ] = xx [ 361 ] * xx [ 802 ] ; xx
[ 770 ] = xx [ 361 ] * xx [ 803 ] ; xx [ 777 ] = xx [ 745 ] * xx [ 769 ] + xx
[ 770 ] * xx [ 746 ] ; xx [ 787 ] = xx [ 738 ] * xx [ 769 ] ; xx [ 788 ] = xx
[ 738 ] * xx [ 770 ] ; xx [ 807 ] = - xx [ 777 ] ; xx [ 808 ] = xx [ 787 ] ;
xx [ 809 ] = xx [ 788 ] ; pm_math_Vector3_cross_ra ( xx + 761 , xx + 807 , xx
+ 810 ) ; xx [ 790 ] = xx [ 770 ] + ( xx [ 787 ] * xx [ 736 ] + xx [ 811 ] )
* xx [ 21 ] ; xx [ 807 ] = xx [ 21 ] * ( xx [ 810 ] - xx [ 777 ] * xx [ 736 ]
) ; xx [ 808 ] = xx [ 790 ] ; xx [ 809 ] = xx [ 21 ] * ( xx [ 812 ] + xx [
788 ] * xx [ 736 ] ) - xx [ 769 ] ; pm_math_Vector3_cross_ra ( xx + 795 , xx
+ 807 , xx + 810 ) ; xx [ 769 ] = xx [ 738 ] * xx [ 745 ] ; xx [ 770 ] = xx [
746 ] * xx [ 736 ] ; xx [ 777 ] = xx [ 21 ] * ( xx [ 769 ] - xx [ 770 ] ) ;
xx [ 787 ] = xx [ 363 ] * xx [ 777 ] ; xx [ 788 ] = xx [ 738 ] * xx [ 746 ] ;
xx [ 791 ] = xx [ 745 ] * xx [ 736 ] ; xx [ 801 ] = ( xx [ 788 ] + xx [ 791 ]
) * xx [ 21 ] ; xx [ 805 ] = xx [ 363 ] * xx [ 801 ] ; xx [ 807 ] = xx [ 414
] * xx [ 777 ] ; xx [ 808 ] = xx [ 414 ] * xx [ 801 ] ; xx [ 809 ] = xx [ 801
] * xx [ 807 ] - xx [ 808 ] * xx [ 777 ] ; xx [ 811 ] = xx [ 736 ] * xx [ 736
] ; xx [ 813 ] = ( xx [ 811 ] + xx [ 745 ] * xx [ 745 ] ) * xx [ 21 ] - xx [
55 ] ; xx [ 814 ] = xx [ 745 ] * xx [ 746 ] ; xx [ 815 ] = xx [ 738 ] * xx [
736 ] ; xx [ 816 ] = xx [ 21 ] * ( xx [ 814 ] - xx [ 815 ] ) ; xx [ 817 ] = (
xx [ 814 ] + xx [ 815 ] ) * xx [ 21 ] ; xx [ 814 ] = ( xx [ 811 ] + xx [ 746
] * xx [ 746 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 815 ] = xx [ 817 ] * xx [ 808
] - xx [ 807 ] * xx [ 814 ] ; xx [ 818 ] = xx [ 414 ] * xx [ 816 ] ; xx [ 819
] = xx [ 414 ] * xx [ 813 ] ; xx [ 820 ] = xx [ 818 ] * xx [ 777 ] - xx [ 801
] * xx [ 819 ] ; xx [ 821 ] = xx [ 817 ] * xx [ 818 ] - xx [ 819 ] * xx [ 814
] ; xx [ 822 ] = xx [ 414 ] * xx [ 814 ] ; xx [ 823 ] = xx [ 414 ] * xx [ 817
] ; xx [ 824 ] = xx [ 822 ] * xx [ 777 ] - xx [ 801 ] * xx [ 823 ] ; xx [ 825
] = xx [ 823 ] * xx [ 814 ] - xx [ 817 ] * xx [ 822 ] ; xx [ 826 ] = - xx [
809 ] ; xx [ 827 ] = xx [ 808 ] * xx [ 813 ] - xx [ 807 ] * xx [ 816 ] ; xx [
828 ] = xx [ 815 ] ; xx [ 829 ] = xx [ 820 ] ; xx [ 830 ] = xx [ 818 ] * xx [
813 ] - xx [ 819 ] * xx [ 816 ] ; xx [ 831 ] = xx [ 821 ] ; xx [ 832 ] = xx [
824 ] ; xx [ 833 ] = xx [ 822 ] * xx [ 813 ] - xx [ 823 ] * xx [ 816 ] ; xx [
834 ] = - xx [ 825 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 826 , xx + 795 ,
xx + 835 ) ; xx [ 807 ] = ( xx [ 811 ] + xx [ 738 ] * xx [ 738 ] ) * xx [ 21
] - xx [ 55 ] ; xx [ 808 ] = xx [ 769 ] + xx [ 770 ] ; xx [ 769 ] = xx [ 808
] * xx [ 21 ] ; xx [ 770 ] = xx [ 788 ] - xx [ 791 ] ; xx [ 788 ] = xx [ 21 ]
* xx [ 770 ] ; xx [ 826 ] = xx [ 807 ] ; xx [ 827 ] = xx [ 769 ] ; xx [ 828 ]
= xx [ 788 ] ; xx [ 829 ] = xx [ 777 ] ; xx [ 830 ] = xx [ 813 ] ; xx [ 831 ]
= xx [ 817 ] ; xx [ 832 ] = xx [ 801 ] ; xx [ 833 ] = xx [ 816 ] ; xx [ 834 ]
= xx [ 814 ] ; xx [ 844 ] = xx [ 251 ] * xx [ 807 ] ; xx [ 845 ] = xx [ 410 ]
* xx [ 777 ] ; xx [ 846 ] = xx [ 410 ] * xx [ 801 ] ; xx [ 847 ] = xx [ 808 ]
* xx [ 420 ] ; xx [ 848 ] = xx [ 410 ] * xx [ 813 ] ; xx [ 849 ] = xx [ 410 ]
* xx [ 816 ] ; xx [ 850 ] = xx [ 420 ] * xx [ 770 ] ; xx [ 851 ] = xx [ 410 ]
* xx [ 817 ] ; xx [ 852 ] = xx [ 410 ] * xx [ 814 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 826 , xx + 844 , xx + 853 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 853 , xx + 795 , xx + 844 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 844 , xx + 795 , xx + 861 ) ; xx [ 770 ]
= xx [ 363 ] * xx [ 817 ] ; xx [ 791 ] = xx [ 363 ] * xx [ 814 ] ; xx [ 808 ]
= xx [ 820 ] - xx [ 845 ] ; xx [ 811 ] = xx [ 821 ] - xx [ 851 ] ; xx [ 818 ]
= xx [ 5 ] * xx [ 808 ] + xx [ 13 ] * xx [ 811 ] + ( xx [ 232 ] + xx [ 857 ]
) * xx [ 137 ] ; xx [ 819 ] = ( ( xx [ 218 ] + xx [ 787 ] * xx [ 777 ] + xx [
801 ] * xx [ 805 ] - xx [ 835 ] - xx [ 835 ] - xx [ 861 ] ) * xx [ 5 ] - ( xx
[ 841 ] - ( xx [ 770 ] * xx [ 777 ] + xx [ 801 ] * xx [ 791 ] ) + xx [ 837 ]
+ xx [ 867 ] ) * xx [ 13 ] + xx [ 137 ] * xx [ 808 ] ) * xx [ 5 ] + ( ( xx [
188 ] + xx [ 817 ] * xx [ 770 ] + xx [ 791 ] * xx [ 814 ] - xx [ 843 ] - xx [
843 ] - xx [ 869 ] ) * xx [ 13 ] - ( xx [ 837 ] - ( xx [ 817 ] * xx [ 787 ] +
xx [ 805 ] * xx [ 814 ] ) + xx [ 841 ] + xx [ 863 ] ) * xx [ 5 ] + xx [ 137 ]
* xx [ 811 ] ) * xx [ 13 ] + xx [ 818 ] * xx [ 137 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 819 , 1 , xx + 770 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 6/Revolute Joint 6' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 770 ] = ( ( xx [ 804 ] + xx [ 810 ] ) * xx [ 5 ] + (
xx [ 806 ] + xx [ 812 ] ) * xx [ 13 ] + xx [ 790 ] * xx [ 137 ] + xx [ 783 ]
) / xx [ 819 ] ; xx [ 787 ] = xx [ 5 ] * xx [ 770 ] ; xx [ 790 ] = xx [ 13 ]
* xx [ 770 ] ; xx [ 791 ] = xx [ 787 ] * xx [ 746 ] - xx [ 738 ] * xx [ 790 ]
; xx [ 804 ] = xx [ 745 ] * xx [ 787 ] ; xx [ 810 ] = - ( xx [ 745 ] * xx [
790 ] ) ; xx [ 811 ] = - xx [ 791 ] ; xx [ 812 ] = xx [ 804 ] ;
pm_math_Vector3_cross_ra ( xx + 761 , xx + 810 , xx + 820 ) ; xx [ 810 ] = xx
[ 775 ] * xx [ 790 ] ; xx [ 811 ] = xx [ 780 ] * xx [ 787 ] - xx [ 778 ] * xx
[ 790 ] - xx [ 137 ] * xx [ 770 ] ; xx [ 812 ] = - ( xx [ 775 ] * xx [ 787 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 753 , xx + 810 , xx + 835 ) ;
xx [ 787 ] = xx [ 757 ] * xx [ 776 ] ; xx [ 805 ] = xx [ 21 ] * ( xx [ 787 ]
- xx [ 760 ] * xx [ 771 ] ) + xx [ 793 ] ; xx [ 806 ] = xx [ 758 ] * xx [ 776
] ; xx [ 776 ] = xx [ 799 ] - ( xx [ 760 ] * xx [ 789 ] + xx [ 806 ] ) * xx [
21 ] + xx [ 82 ] ; xx [ 810 ] = xx [ 87 ] ; xx [ 811 ] = - xx [ 805 ] ; xx [
812 ] = - xx [ 776 ] ; solveSymmetricPosDef ( xx + 383 , xx + 810 , 3 , 1 ,
xx + 838 , xx + 841 ) ; xx [ 810 ] = xx [ 28 ] * xx [ 838 ] ; xx [ 811 ] = xx
[ 29 ] * xx [ 839 ] ; xx [ 812 ] = xx [ 29 ] * xx [ 840 ] ;
pm_math_Quaternion_xform_ra ( xx + 753 , xx + 810 , xx + 841 ) ; xx [ 808 ] =
xx [ 361 ] * xx [ 839 ] ; xx [ 810 ] = xx [ 361 ] * xx [ 840 ] ; xx [ 811 ] =
xx [ 745 ] * xx [ 808 ] + xx [ 810 ] * xx [ 746 ] ; xx [ 812 ] = xx [ 738 ] *
xx [ 808 ] ; xx [ 820 ] = xx [ 738 ] * xx [ 810 ] ; xx [ 847 ] = - xx [ 811 ]
; xx [ 848 ] = xx [ 812 ] ; xx [ 849 ] = xx [ 820 ] ;
pm_math_Vector3_cross_ra ( xx + 761 , xx + 847 , xx + 861 ) ; xx [ 823 ] = xx
[ 810 ] + ( xx [ 812 ] * xx [ 736 ] + xx [ 862 ] ) * xx [ 21 ] ; xx [ 847 ] =
xx [ 21 ] * ( xx [ 861 ] - xx [ 811 ] * xx [ 736 ] ) ; xx [ 848 ] = xx [ 823
] ; xx [ 849 ] = xx [ 21 ] * ( xx [ 863 ] + xx [ 820 ] * xx [ 736 ] ) - xx [
808 ] ; pm_math_Vector3_cross_ra ( xx + 795 , xx + 847 , xx + 810 ) ; xx [
808 ] = xx [ 764 ] + ( xx [ 757 ] * xx [ 767 ] + xx [ 773 ] ) * xx [ 21 ] +
xx [ 785 ] - ( xx [ 782 ] * xx [ 748 ] + xx [ 744 ] * xx [ 781 ] ) * xx [ 21
] + xx [ 137 ] ; xx [ 764 ] = ( ( xx [ 841 ] + xx [ 810 ] ) * xx [ 5 ] + ( xx
[ 843 ] + xx [ 812 ] ) * xx [ 13 ] + xx [ 823 ] * xx [ 137 ] + xx [ 808 ] ) /
xx [ 819 ] ; xx [ 767 ] = xx [ 5 ] * xx [ 764 ] ; xx [ 810 ] = xx [ 13 ] * xx
[ 764 ] ; xx [ 811 ] = xx [ 767 ] * xx [ 746 ] - xx [ 738 ] * xx [ 810 ] ; xx
[ 812 ] = xx [ 745 ] * xx [ 767 ] ; xx [ 841 ] = - ( xx [ 745 ] * xx [ 810 ]
) ; xx [ 842 ] = - xx [ 811 ] ; xx [ 843 ] = xx [ 812 ] ;
pm_math_Vector3_cross_ra ( xx + 761 , xx + 841 , xx + 847 ) ; xx [ 841 ] = xx
[ 775 ] * xx [ 810 ] ; xx [ 842 ] = xx [ 780 ] * xx [ 767 ] - xx [ 778 ] * xx
[ 810 ] - xx [ 137 ] * xx [ 764 ] ; xx [ 843 ] = - ( xx [ 775 ] * xx [ 767 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 753 , xx + 841 , xx + 861 ) ;
xx [ 767 ] = xx [ 839 ] - ( ( xx [ 811 ] * xx [ 736 ] + xx [ 848 ] ) * xx [
413 ] - xx [ 415 ] * xx [ 863 ] ) ; xx [ 811 ] = xx [ 840 ] - ( xx [ 395 ] *
( ( xx [ 849 ] - xx [ 812 ] * xx [ 736 ] ) * xx [ 21 ] - xx [ 810 ] ) + xx [
415 ] * xx [ 862 ] ) ; xx [ 810 ] = xx [ 490 ] * xx [ 525 ] + xx [ 510 ] * xx
[ 529 ] + xx [ 527 ] * xx [ 543 ] + xx [ 489 ] * xx [ 545 ] + xx [ 495 ] * xx
[ 542 ] + xx [ 506 ] * xx [ 536 ] + xx [ 509 ] * xx [ 537 ] + xx [ 783 ] * xx
[ 764 ] - xx [ 779 ] * xx [ 767 ] - xx [ 765 ] * xx [ 811 ] ; xx [ 792 ] = xx
[ 794 ] + ( xx [ 806 ] + xx [ 759 ] * xx [ 771 ] ) * xx [ 21 ] - xx [ 82 ] ;
xx [ 771 ] = ( xx [ 787 ] + xx [ 759 ] * xx [ 789 ] ) * xx [ 21 ] + xx [ 800
] ; xx [ 798 ] = xx [ 87 ] ; xx [ 799 ] = - xx [ 792 ] ; xx [ 800 ] = - xx [
771 ] ; solveSymmetricPosDef ( xx + 383 , xx + 798 , 3 , 1 , xx + 838 , xx +
841 ) ; xx [ 798 ] = xx [ 28 ] * xx [ 838 ] ; xx [ 799 ] = xx [ 29 ] * xx [
839 ] ; xx [ 800 ] = xx [ 29 ] * xx [ 840 ] ; pm_math_Quaternion_xform_ra (
xx + 753 , xx + 798 , xx + 841 ) ; xx [ 787 ] = xx [ 361 ] * xx [ 839 ] ; xx
[ 789 ] = xx [ 361 ] * xx [ 840 ] ; xx [ 793 ] = xx [ 745 ] * xx [ 787 ] + xx
[ 789 ] * xx [ 746 ] ; xx [ 794 ] = xx [ 738 ] * xx [ 787 ] ; xx [ 798 ] = xx
[ 738 ] * xx [ 789 ] ; xx [ 847 ] = - xx [ 793 ] ; xx [ 848 ] = xx [ 794 ] ;
xx [ 849 ] = xx [ 798 ] ; pm_math_Vector3_cross_ra ( xx + 761 , xx + 847 , xx
+ 861 ) ; xx [ 799 ] = xx [ 789 ] + ( xx [ 794 ] * xx [ 736 ] + xx [ 862 ] )
* xx [ 21 ] ; xx [ 847 ] = xx [ 21 ] * ( xx [ 861 ] - xx [ 793 ] * xx [ 736 ]
) ; xx [ 848 ] = xx [ 799 ] ; xx [ 849 ] = xx [ 21 ] * ( xx [ 863 ] + xx [
798 ] * xx [ 736 ] ) - xx [ 787 ] ; pm_math_Vector3_cross_ra ( xx + 795 , xx
+ 847 , xx + 861 ) ; xx [ 772 ] = ( xx [ 757 ] * xx [ 768 ] + xx [ 774 ] ) *
xx [ 21 ] - xx [ 766 ] + xx [ 786 ] + ( xx [ 781 ] * xx [ 742 ] - xx [ 782 ]
* xx [ 747 ] ) * xx [ 21 ] ; xx [ 766 ] = ( ( xx [ 841 ] + xx [ 861 ] ) * xx
[ 5 ] + ( xx [ 843 ] + xx [ 863 ] ) * xx [ 13 ] + xx [ 799 ] * xx [ 137 ] +
xx [ 772 ] ) / xx [ 819 ] ; xx [ 768 ] = xx [ 5 ] * xx [ 766 ] ; xx [ 773 ] =
xx [ 13 ] * xx [ 766 ] ; xx [ 774 ] = xx [ 768 ] * xx [ 746 ] - xx [ 738 ] *
xx [ 773 ] ; xx [ 781 ] = xx [ 745 ] * xx [ 768 ] ; xx [ 784 ] = - ( xx [ 745
] * xx [ 773 ] ) ; xx [ 785 ] = - xx [ 774 ] ; xx [ 786 ] = xx [ 781 ] ;
pm_math_Vector3_cross_ra ( xx + 761 , xx + 784 , xx + 798 ) ; xx [ 784 ] = xx
[ 775 ] * xx [ 773 ] ; xx [ 785 ] = xx [ 780 ] * xx [ 768 ] - xx [ 778 ] * xx
[ 773 ] - xx [ 137 ] * xx [ 766 ] ; xx [ 786 ] = - ( xx [ 775 ] * xx [ 768 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 753 , xx + 784 , xx + 841 ) ;
xx [ 768 ] = xx [ 839 ] - ( ( xx [ 774 ] * xx [ 736 ] + xx [ 799 ] ) * xx [
413 ] - xx [ 415 ] * xx [ 843 ] ) ; xx [ 774 ] = xx [ 840 ] - ( xx [ 395 ] *
( ( xx [ 800 ] - xx [ 781 ] * xx [ 736 ] ) * xx [ 21 ] - xx [ 773 ] ) + xx [
415 ] * xx [ 842 ] ) ; xx [ 773 ] = xx [ 490 ] * xx [ 493 ] + xx [ 510 ] * xx
[ 503 ] + xx [ 527 ] * xx [ 512 ] + xx [ 489 ] * xx [ 514 ] + xx [ 495 ] * xx
[ 508 ] + xx [ 506 ] * xx [ 513 ] + xx [ 509 ] * xx [ 530 ] + xx [ 783 ] * xx
[ 766 ] - xx [ 779 ] * xx [ 768 ] - xx [ 765 ] * xx [ 774 ] ; xx [ 781 ] = xx
[ 490 ] * xx [ 554 ] + xx [ 510 ] * xx [ 558 ] + xx [ 527 ] * xx [ 563 ] + xx
[ 489 ] * xx [ 568 ] + xx [ 495 ] * xx [ 562 ] + xx [ 506 ] * xx [ 564 ] + xx
[ 509 ] * xx [ 565 ] ; xx [ 782 ] = xx [ 490 ] * xx [ 572 ] + xx [ 510 ] * xx
[ 576 ] + xx [ 527 ] * xx [ 590 ] + xx [ 489 ] * xx [ 592 ] + xx [ 495 ] * xx
[ 589 ] + xx [ 506 ] * xx [ 583 ] + xx [ 509 ] * xx [ 584 ] ; xx [ 784 ] = xx
[ 490 ] * xx [ 541 ] + xx [ 510 ] * xx [ 548 ] + xx [ 527 ] * xx [ 550 ] + xx
[ 489 ] * xx [ 579 ] + xx [ 495 ] * xx [ 549 ] + xx [ 506 ] * xx [ 559 ] + xx
[ 509 ] * xx [ 560 ] ; xx [ 785 ] = xx [ 490 ] * xx [ 94 ] + xx [ 510 ] * xx
[ 170 ] + xx [ 527 ] * xx [ 203 ] + xx [ 489 ] * xx [ 254 ] + xx [ 495 ] * xx
[ 191 ] + xx [ 506 ] * xx [ 206 ] + xx [ 509 ] * xx [ 259 ] ; xx [ 786 ] = xx
[ 490 ] * xx [ 95 ] + xx [ 510 ] * xx [ 174 ] + xx [ 527 ] * xx [ 587 ] + xx
[ 489 ] * xx [ 591 ] + xx [ 495 ] * xx [ 295 ] + xx [ 506 ] * xx [ 588 ] + xx
[ 509 ] * xx [ 596 ] ; xx [ 787 ] = xx [ 490 ] * xx [ 96 ] + xx [ 510 ] * xx
[ 145 ] + xx [ 527 ] * xx [ 147 ] + xx [ 489 ] * xx [ 288 ] + xx [ 495 ] * xx
[ 146 ] + xx [ 506 ] * xx [ 150 ] + xx [ 509 ] * xx [ 296 ] ; xx [ 789 ] = xx
[ 520 ] * xx [ 493 ] + xx [ 526 ] * xx [ 503 ] + xx [ 528 ] * xx [ 512 ] + xx
[ 551 ] * xx [ 514 ] + xx [ 522 ] * xx [ 508 ] + xx [ 523 ] * xx [ 513 ] + xx
[ 524 ] * xx [ 530 ] + xx [ 808 ] * xx [ 766 ] - xx [ 805 ] * xx [ 768 ] - xx
[ 776 ] * xx [ 774 ] ; xx [ 793 ] = xx [ 520 ] * xx [ 554 ] + xx [ 526 ] * xx
[ 558 ] + xx [ 528 ] * xx [ 563 ] + xx [ 551 ] * xx [ 568 ] + xx [ 522 ] * xx
[ 562 ] + xx [ 523 ] * xx [ 564 ] + xx [ 524 ] * xx [ 565 ] ; xx [ 794 ] = xx
[ 520 ] * xx [ 572 ] + xx [ 526 ] * xx [ 576 ] + xx [ 528 ] * xx [ 590 ] + xx
[ 551 ] * xx [ 592 ] + xx [ 522 ] * xx [ 589 ] + xx [ 523 ] * xx [ 583 ] + xx
[ 524 ] * xx [ 584 ] ; xx [ 798 ] = xx [ 520 ] * xx [ 541 ] + xx [ 526 ] * xx
[ 548 ] + xx [ 528 ] * xx [ 550 ] + xx [ 551 ] * xx [ 579 ] + xx [ 522 ] * xx
[ 549 ] + xx [ 523 ] * xx [ 559 ] + xx [ 524 ] * xx [ 560 ] ; xx [ 799 ] = xx
[ 520 ] * xx [ 94 ] + xx [ 526 ] * xx [ 170 ] + xx [ 528 ] * xx [ 203 ] + xx
[ 551 ] * xx [ 254 ] + xx [ 522 ] * xx [ 191 ] + xx [ 523 ] * xx [ 206 ] + xx
[ 524 ] * xx [ 259 ] ; xx [ 800 ] = xx [ 520 ] * xx [ 95 ] + xx [ 526 ] * xx
[ 174 ] + xx [ 528 ] * xx [ 587 ] + xx [ 551 ] * xx [ 591 ] + xx [ 522 ] * xx
[ 295 ] + xx [ 523 ] * xx [ 588 ] + xx [ 524 ] * xx [ 596 ] ; xx [ 806 ] = xx
[ 520 ] * xx [ 96 ] + xx [ 526 ] * xx [ 145 ] + xx [ 528 ] * xx [ 147 ] + xx
[ 551 ] * xx [ 288 ] + xx [ 522 ] * xx [ 146 ] + xx [ 523 ] * xx [ 150 ] + xx
[ 524 ] * xx [ 296 ] ; xx [ 812 ] = xx [ 497 ] * xx [ 554 ] + xx [ 499 ] * xx
[ 558 ] + xx [ 500 ] * xx [ 563 ] + xx [ 505 ] * xx [ 568 ] + xx [ 498 ] * xx
[ 562 ] + xx [ 491 ] * xx [ 564 ] + xx [ 492 ] * xx [ 565 ] ; xx [ 820 ] = xx
[ 497 ] * xx [ 572 ] + xx [ 499 ] * xx [ 576 ] + xx [ 500 ] * xx [ 590 ] + xx
[ 505 ] * xx [ 592 ] + xx [ 498 ] * xx [ 589 ] + xx [ 491 ] * xx [ 583 ] + xx
[ 492 ] * xx [ 584 ] ; xx [ 823 ] = xx [ 497 ] * xx [ 541 ] + xx [ 499 ] * xx
[ 548 ] + xx [ 500 ] * xx [ 550 ] + xx [ 505 ] * xx [ 579 ] + xx [ 498 ] * xx
[ 549 ] + xx [ 491 ] * xx [ 559 ] + xx [ 492 ] * xx [ 560 ] ; xx [ 835 ] = xx
[ 497 ] * xx [ 94 ] + xx [ 499 ] * xx [ 170 ] + xx [ 500 ] * xx [ 203 ] + xx
[ 505 ] * xx [ 254 ] + xx [ 498 ] * xx [ 191 ] + xx [ 491 ] * xx [ 206 ] + xx
[ 492 ] * xx [ 259 ] ; xx [ 838 ] = xx [ 497 ] * xx [ 95 ] + xx [ 499 ] * xx
[ 174 ] + xx [ 500 ] * xx [ 587 ] + xx [ 505 ] * xx [ 591 ] + xx [ 498 ] * xx
[ 295 ] + xx [ 491 ] * xx [ 588 ] + xx [ 492 ] * xx [ 596 ] ; xx [ 839 ] = xx
[ 497 ] * xx [ 96 ] + xx [ 499 ] * xx [ 145 ] + xx [ 500 ] * xx [ 147 ] + xx
[ 505 ] * xx [ 288 ] + xx [ 498 ] * xx [ 146 ] + xx [ 491 ] * xx [ 150 ] + xx
[ 492 ] * xx [ 296 ] ; xx [ 840 ] = 0.8662794937748999 ; xx [ 841 ] = xx [ 56
] * state [ 16 ] ; xx [ 842 ] = cos ( xx [ 841 ] ) ; xx [ 843 ] = xx [ 840 ]
* xx [ 842 ] ; xx [ 845 ] = sin ( xx [ 841 ] ) ; xx [ 841 ] = xx [ 5 ] * xx [
845 ] ; xx [ 847 ] = 0.4995596447523596 ; xx [ 848 ] = xx [ 13 ] * xx [ 845 ]
; xx [ 845 ] = xx [ 840 ] * xx [ 841 ] + xx [ 847 ] * xx [ 848 ] ; xx [ 849 ]
= - xx [ 845 ] ; xx [ 851 ] = xx [ 847 ] * xx [ 842 ] ; xx [ 842 ] = - xx [
851 ] ; xx [ 853 ] = xx [ 847 ] * xx [ 841 ] - xx [ 840 ] * xx [ 848 ] ; xx [
861 ] = - xx [ 843 ] ; xx [ 862 ] = xx [ 849 ] ; xx [ 863 ] = xx [ 842 ] ; xx
[ 864 ] = xx [ 853 ] ; xx [ 840 ] = xx [ 2 ] * state [ 18 ] - xx [ 1 ] *
state [ 20 ] ; xx [ 841 ] = xx [ 2 ] * state [ 19 ] + xx [ 1 ] * state [ 21 ]
; xx [ 847 ] = xx [ 2 ] * state [ 20 ] + xx [ 1 ] * state [ 18 ] ; xx [ 848 ]
= xx [ 2 ] * state [ 21 ] - xx [ 1 ] * state [ 19 ] ; xx [ 865 ] = xx [ 840 ]
; xx [ 866 ] = xx [ 841 ] ; xx [ 867 ] = xx [ 847 ] ; xx [ 868 ] = xx [ 848 ]
; pm_math_Quaternion_compose_ra ( xx + 861 , xx + 865 , xx + 869 ) ; xx [ 873
] = xx [ 841 ] ; xx [ 874 ] = xx [ 847 ] ; xx [ 875 ] = xx [ 848 ] ; xx [ 855
] = xx [ 5 ] * xx [ 848 ] - xx [ 841 ] * xx [ 13 ] ; xx [ 857 ] = xx [ 847 ]
* xx [ 5 ] ; xx [ 876 ] = xx [ 847 ] * xx [ 13 ] ; xx [ 877 ] = xx [ 855 ] ;
xx [ 878 ] = - xx [ 857 ] ; pm_math_Vector3_cross_ra ( xx + 873 , xx + 876 ,
xx + 879 ) ; xx [ 859 ] = xx [ 341 ] * ( xx [ 880 ] - xx [ 855 ] * xx [ 840 ]
) ; xx [ 855 ] = ( xx [ 13 ] + xx [ 21 ] * ( xx [ 881 ] + xx [ 857 ] * xx [
840 ] ) ) * xx [ 82 ] ; xx [ 857 ] = xx [ 871 ] * xx [ 859 ] + xx [ 872 ] *
xx [ 855 ] ; xx [ 876 ] = xx [ 870 ] * xx [ 859 ] ; xx [ 877 ] = xx [ 870 ] *
xx [ 855 ] ; xx [ 878 ] = - xx [ 857 ] ; xx [ 879 ] = xx [ 876 ] ; xx [ 880 ]
= xx [ 877 ] ; pm_math_Vector3_cross_ra ( xx + 870 , xx + 878 , xx + 881 ) ;
xx [ 878 ] = xx [ 82 ] * xx [ 848 ] ; xx [ 879 ] = xx [ 878 ] * xx [ 840 ] ;
xx [ 880 ] = xx [ 847 ] * xx [ 82 ] ; xx [ 884 ] = ( xx [ 879 ] + xx [ 841 ]
* xx [ 880 ] ) * xx [ 21 ] ; xx [ 885 ] = xx [ 847 ] * xx [ 880 ] ; xx [ 886
] = xx [ 878 ] * xx [ 848 ] ; xx [ 887 ] = xx [ 84 ] + xx [ 82 ] - ( xx [ 885
] + xx [ 886 ] ) * xx [ 21 ] ; xx [ 888 ] = xx [ 880 ] * xx [ 840 ] ; xx [
889 ] = xx [ 21 ] * ( xx [ 841 ] * xx [ 878 ] - xx [ 888 ] ) - xx [ 109 ] ;
xx [ 890 ] = - ( xx [ 13 ] * xx [ 884 ] ) ; xx [ 891 ] = xx [ 887 ] * xx [ 13
] - xx [ 889 ] * xx [ 5 ] ; xx [ 892 ] = xx [ 5 ] * xx [ 884 ] ;
pm_math_Quaternion_xform_ra ( xx + 861 , xx + 890 , xx + 893 ) ; xx [ 890 ] =
xx [ 845 ] * xx [ 137 ] ; xx [ 891 ] = xx [ 137 ] * xx [ 853 ] ; xx [ 892 ] =
xx [ 21 ] * ( xx [ 881 ] - xx [ 857 ] * xx [ 869 ] ) + xx [ 893 ] + xx [ 21 ]
* ( xx [ 890 ] * xx [ 851 ] + xx [ 891 ] * xx [ 843 ] ) ; xx [ 857 ] = xx [
841 ] * xx [ 82 ] ; xx [ 896 ] = xx [ 857 ] * xx [ 840 ] ; xx [ 897 ] = xx [
841 ] * xx [ 857 ] ; xx [ 898 ] = - ( ( xx [ 888 ] + xx [ 857 ] * xx [ 848 ]
) * xx [ 21 ] ) ; xx [ 899 ] = xx [ 21 ] * ( xx [ 896 ] - xx [ 880 ] * xx [
848 ] ) ; xx [ 900 ] = ( xx [ 897 ] + xx [ 885 ] ) * xx [ 21 ] - xx [ 82 ] ;
pm_math_Quaternion_xform_ra ( xx + 861 , xx + 898 , xx + 901 ) ; xx [ 880 ] =
xx [ 82 ] * xx [ 871 ] ; xx [ 885 ] = xx [ 82 ] * xx [ 870 ] ; xx [ 888 ] =
xx [ 901 ] - ( xx [ 869 ] * xx [ 880 ] + xx [ 872 ] * xx [ 885 ] ) * xx [ 21
] ; xx [ 898 ] = xx [ 82 ] * xx [ 872 ] ; xx [ 904 ] = xx [ 21 ] * ( xx [ 847
] * xx [ 857 ] - xx [ 879 ] ) ; xx [ 905 ] = xx [ 82 ] - ( xx [ 886 ] + xx [
897 ] ) * xx [ 21 ] ; xx [ 906 ] = ( xx [ 896 ] + xx [ 847 ] * xx [ 878 ] ) *
xx [ 21 ] ; pm_math_Quaternion_xform_ra ( xx + 861 , xx + 904 , xx + 907 ) ;
xx [ 857 ] = xx [ 21 ] * ( xx [ 871 ] * xx [ 885 ] - xx [ 869 ] * xx [ 898 ]
) + xx [ 907 ] ; xx [ 904 ] = xx [ 87 ] ; xx [ 905 ] = - xx [ 888 ] ; xx [
906 ] = - xx [ 857 ] ; solveSymmetricPosDef ( xx + 383 , xx + 904 , 3 , 1 ,
xx + 910 , xx + 913 ) ; xx [ 904 ] = xx [ 28 ] * xx [ 910 ] ; xx [ 905 ] = xx
[ 29 ] * xx [ 911 ] ; xx [ 906 ] = xx [ 29 ] * xx [ 912 ] ;
pm_math_Quaternion_xform_ra ( xx + 865 , xx + 904 , xx + 913 ) ; xx [ 904 ] =
xx [ 887 ] ; xx [ 905 ] = xx [ 884 ] ; xx [ 906 ] = xx [ 889 ] ; xx [ 878 ] =
xx [ 361 ] * xx [ 911 ] ; xx [ 879 ] = xx [ 361 ] * xx [ 912 ] ; xx [ 886 ] =
xx [ 847 ] * xx [ 878 ] + xx [ 879 ] * xx [ 848 ] ; xx [ 896 ] = xx [ 841 ] *
xx [ 878 ] ; xx [ 897 ] = xx [ 841 ] * xx [ 879 ] ; xx [ 916 ] = - xx [ 886 ]
; xx [ 917 ] = xx [ 896 ] ; xx [ 918 ] = xx [ 897 ] ;
pm_math_Vector3_cross_ra ( xx + 873 , xx + 916 , xx + 919 ) ; xx [ 899 ] = xx
[ 879 ] + ( xx [ 896 ] * xx [ 840 ] + xx [ 920 ] ) * xx [ 21 ] ; xx [ 916 ] =
xx [ 21 ] * ( xx [ 919 ] - xx [ 886 ] * xx [ 840 ] ) ; xx [ 917 ] = xx [ 899
] ; xx [ 918 ] = xx [ 21 ] * ( xx [ 921 ] + xx [ 897 ] * xx [ 840 ] ) - xx [
878 ] ; pm_math_Vector3_cross_ra ( xx + 904 , xx + 916 , xx + 919 ) ; xx [
878 ] = xx [ 841 ] * xx [ 847 ] ; xx [ 879 ] = xx [ 848 ] * xx [ 840 ] ; xx [
886 ] = xx [ 21 ] * ( xx [ 878 ] - xx [ 879 ] ) ; xx [ 896 ] = xx [ 363 ] *
xx [ 886 ] ; xx [ 897 ] = xx [ 841 ] * xx [ 848 ] ; xx [ 900 ] = xx [ 847 ] *
xx [ 840 ] ; xx [ 910 ] = ( xx [ 897 ] + xx [ 900 ] ) * xx [ 21 ] ; xx [ 914
] = xx [ 363 ] * xx [ 910 ] ; xx [ 916 ] = xx [ 414 ] * xx [ 886 ] ; xx [ 917
] = xx [ 414 ] * xx [ 910 ] ; xx [ 918 ] = xx [ 910 ] * xx [ 916 ] - xx [ 917
] * xx [ 886 ] ; xx [ 920 ] = xx [ 840 ] * xx [ 840 ] ; xx [ 922 ] = ( xx [
920 ] + xx [ 847 ] * xx [ 847 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 923 ] = xx [
847 ] * xx [ 848 ] ; xx [ 924 ] = xx [ 841 ] * xx [ 840 ] ; xx [ 925 ] = xx [
21 ] * ( xx [ 923 ] - xx [ 924 ] ) ; xx [ 926 ] = ( xx [ 923 ] + xx [ 924 ] )
* xx [ 21 ] ; xx [ 923 ] = ( xx [ 920 ] + xx [ 848 ] * xx [ 848 ] ) * xx [ 21
] - xx [ 55 ] ; xx [ 924 ] = xx [ 926 ] * xx [ 917 ] - xx [ 916 ] * xx [ 923
] ; xx [ 927 ] = xx [ 414 ] * xx [ 925 ] ; xx [ 928 ] = xx [ 414 ] * xx [ 922
] ; xx [ 929 ] = xx [ 927 ] * xx [ 886 ] - xx [ 910 ] * xx [ 928 ] ; xx [ 930
] = xx [ 926 ] * xx [ 927 ] - xx [ 928 ] * xx [ 923 ] ; xx [ 931 ] = xx [ 414
] * xx [ 923 ] ; xx [ 932 ] = xx [ 414 ] * xx [ 926 ] ; xx [ 933 ] = xx [ 931
] * xx [ 886 ] - xx [ 910 ] * xx [ 932 ] ; xx [ 934 ] = xx [ 932 ] * xx [ 923
] - xx [ 926 ] * xx [ 931 ] ; xx [ 935 ] = - xx [ 918 ] ; xx [ 936 ] = xx [
917 ] * xx [ 922 ] - xx [ 916 ] * xx [ 925 ] ; xx [ 937 ] = xx [ 924 ] ; xx [
938 ] = xx [ 929 ] ; xx [ 939 ] = xx [ 927 ] * xx [ 922 ] - xx [ 928 ] * xx [
925 ] ; xx [ 940 ] = xx [ 930 ] ; xx [ 941 ] = xx [ 933 ] ; xx [ 942 ] = xx [
931 ] * xx [ 922 ] - xx [ 932 ] * xx [ 925 ] ; xx [ 943 ] = - xx [ 934 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 935 , xx + 904 , xx + 944 ) ; xx [ 916
] = ( xx [ 920 ] + xx [ 841 ] * xx [ 841 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [
917 ] = xx [ 878 ] + xx [ 879 ] ; xx [ 878 ] = xx [ 917 ] * xx [ 21 ] ; xx [
879 ] = xx [ 897 ] - xx [ 900 ] ; xx [ 897 ] = xx [ 21 ] * xx [ 879 ] ; xx [
935 ] = xx [ 916 ] ; xx [ 936 ] = xx [ 878 ] ; xx [ 937 ] = xx [ 897 ] ; xx [
938 ] = xx [ 886 ] ; xx [ 939 ] = xx [ 922 ] ; xx [ 940 ] = xx [ 926 ] ; xx [
941 ] = xx [ 910 ] ; xx [ 942 ] = xx [ 925 ] ; xx [ 943 ] = xx [ 923 ] ; xx [
953 ] = xx [ 251 ] * xx [ 916 ] ; xx [ 954 ] = xx [ 410 ] * xx [ 886 ] ; xx [
955 ] = xx [ 410 ] * xx [ 910 ] ; xx [ 956 ] = xx [ 917 ] * xx [ 420 ] ; xx [
957 ] = xx [ 410 ] * xx [ 922 ] ; xx [ 958 ] = xx [ 410 ] * xx [ 925 ] ; xx [
959 ] = xx [ 420 ] * xx [ 879 ] ; xx [ 960 ] = xx [ 410 ] * xx [ 926 ] ; xx [
961 ] = xx [ 410 ] * xx [ 923 ] ; pm_math_Matrix3x3_compose_ra ( xx + 935 ,
xx + 953 , xx + 962 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 962 , xx + 904
, xx + 953 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 953 , xx + 904 , xx + 970
) ; xx [ 879 ] = xx [ 363 ] * xx [ 926 ] ; xx [ 900 ] = xx [ 363 ] * xx [ 923
] ; xx [ 917 ] = xx [ 929 ] - xx [ 954 ] ; xx [ 920 ] = xx [ 930 ] - xx [ 960
] ; xx [ 927 ] = xx [ 5 ] * xx [ 917 ] + xx [ 13 ] * xx [ 920 ] + ( xx [ 232
] + xx [ 966 ] ) * xx [ 137 ] ; xx [ 928 ] = ( ( xx [ 218 ] + xx [ 896 ] * xx
[ 886 ] + xx [ 910 ] * xx [ 914 ] - xx [ 944 ] - xx [ 944 ] - xx [ 970 ] ) *
xx [ 5 ] - ( xx [ 950 ] - ( xx [ 879 ] * xx [ 886 ] + xx [ 910 ] * xx [ 900 ]
) + xx [ 946 ] + xx [ 976 ] ) * xx [ 13 ] + xx [ 137 ] * xx [ 917 ] ) * xx [
5 ] + ( ( xx [ 188 ] + xx [ 926 ] * xx [ 879 ] + xx [ 900 ] * xx [ 923 ] - xx
[ 952 ] - xx [ 952 ] - xx [ 978 ] ) * xx [ 13 ] - ( xx [ 946 ] - ( xx [ 926 ]
* xx [ 896 ] + xx [ 914 ] * xx [ 923 ] ) + xx [ 950 ] + xx [ 972 ] ) * xx [ 5
] + xx [ 137 ] * xx [ 920 ] ) * xx [ 13 ] + xx [ 927 ] * xx [ 137 ] ; ii [ 0
] = factorSymmetricPosDef ( xx + 928 , 1 , xx + 879 ) ; if ( ii [ 0 ] != 0 )
{ return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 2/Revolute Joint 2' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 879 ] = ( ( xx [ 913 ] + xx [ 919 ] ) * xx [ 5 ] + (
xx [ 915 ] + xx [ 921 ] ) * xx [ 13 ] + xx [ 899 ] * xx [ 137 ] + xx [ 892 ]
) / xx [ 928 ] ; xx [ 896 ] = xx [ 5 ] * xx [ 879 ] ; xx [ 899 ] = xx [ 13 ]
* xx [ 879 ] ; xx [ 900 ] = xx [ 896 ] * xx [ 848 ] - xx [ 841 ] * xx [ 899 ]
; xx [ 913 ] = xx [ 847 ] * xx [ 896 ] ; xx [ 919 ] = - ( xx [ 847 ] * xx [
899 ] ) ; xx [ 920 ] = - xx [ 900 ] ; xx [ 921 ] = xx [ 913 ] ;
pm_math_Vector3_cross_ra ( xx + 873 , xx + 919 , xx + 929 ) ; xx [ 919 ] = xx
[ 884 ] * xx [ 899 ] ; xx [ 920 ] = xx [ 889 ] * xx [ 896 ] - xx [ 887 ] * xx
[ 899 ] - xx [ 137 ] * xx [ 879 ] ; xx [ 921 ] = - ( xx [ 884 ] * xx [ 896 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 865 , xx + 919 , xx + 944 ) ;
xx [ 896 ] = xx [ 869 ] * xx [ 885 ] ; xx [ 914 ] = xx [ 21 ] * ( xx [ 896 ]
- xx [ 872 ] * xx [ 880 ] ) + xx [ 902 ] ; xx [ 915 ] = xx [ 870 ] * xx [ 885
] ; xx [ 885 ] = xx [ 908 ] - ( xx [ 872 ] * xx [ 898 ] + xx [ 915 ] ) * xx [
21 ] + xx [ 82 ] ; xx [ 919 ] = xx [ 87 ] ; xx [ 920 ] = - xx [ 914 ] ; xx [
921 ] = - xx [ 885 ] ; solveSymmetricPosDef ( xx + 383 , xx + 919 , 3 , 1 ,
xx + 947 , xx + 950 ) ; xx [ 919 ] = xx [ 28 ] * xx [ 947 ] ; xx [ 920 ] = xx
[ 29 ] * xx [ 948 ] ; xx [ 921 ] = xx [ 29 ] * xx [ 949 ] ;
pm_math_Quaternion_xform_ra ( xx + 865 , xx + 919 , xx + 950 ) ; xx [ 917 ] =
xx [ 361 ] * xx [ 948 ] ; xx [ 919 ] = xx [ 361 ] * xx [ 949 ] ; xx [ 920 ] =
xx [ 847 ] * xx [ 917 ] + xx [ 919 ] * xx [ 848 ] ; xx [ 921 ] = xx [ 841 ] *
xx [ 917 ] ; xx [ 929 ] = xx [ 841 ] * xx [ 919 ] ; xx [ 956 ] = - xx [ 920 ]
; xx [ 957 ] = xx [ 921 ] ; xx [ 958 ] = xx [ 929 ] ;
pm_math_Vector3_cross_ra ( xx + 873 , xx + 956 , xx + 970 ) ; xx [ 932 ] = xx
[ 919 ] + ( xx [ 921 ] * xx [ 840 ] + xx [ 971 ] ) * xx [ 21 ] ; xx [ 956 ] =
xx [ 21 ] * ( xx [ 970 ] - xx [ 920 ] * xx [ 840 ] ) ; xx [ 957 ] = xx [ 932
] ; xx [ 958 ] = xx [ 21 ] * ( xx [ 972 ] + xx [ 929 ] * xx [ 840 ] ) - xx [
917 ] ; pm_math_Vector3_cross_ra ( xx + 904 , xx + 956 , xx + 919 ) ; xx [
917 ] = xx [ 855 ] + ( xx [ 869 ] * xx [ 876 ] + xx [ 882 ] ) * xx [ 21 ] +
xx [ 894 ] - ( xx [ 891 ] * xx [ 853 ] + xx [ 845 ] * xx [ 890 ] ) * xx [ 21
] + xx [ 137 ] ; xx [ 855 ] = ( ( xx [ 950 ] + xx [ 919 ] ) * xx [ 5 ] + ( xx
[ 952 ] + xx [ 921 ] ) * xx [ 13 ] + xx [ 932 ] * xx [ 137 ] + xx [ 917 ] ) /
xx [ 928 ] ; xx [ 876 ] = xx [ 5 ] * xx [ 855 ] ; xx [ 919 ] = xx [ 13 ] * xx
[ 855 ] ; xx [ 920 ] = xx [ 876 ] * xx [ 848 ] - xx [ 841 ] * xx [ 919 ] ; xx
[ 921 ] = xx [ 847 ] * xx [ 876 ] ; xx [ 950 ] = - ( xx [ 847 ] * xx [ 919 ]
) ; xx [ 951 ] = - xx [ 920 ] ; xx [ 952 ] = xx [ 921 ] ;
pm_math_Vector3_cross_ra ( xx + 873 , xx + 950 , xx + 956 ) ; xx [ 950 ] = xx
[ 884 ] * xx [ 919 ] ; xx [ 951 ] = xx [ 889 ] * xx [ 876 ] - xx [ 887 ] * xx
[ 919 ] - xx [ 137 ] * xx [ 855 ] ; xx [ 952 ] = - ( xx [ 884 ] * xx [ 876 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 865 , xx + 950 , xx + 970 ) ;
xx [ 876 ] = xx [ 948 ] - ( ( xx [ 920 ] * xx [ 840 ] + xx [ 957 ] ) * xx [
413 ] - xx [ 415 ] * xx [ 972 ] ) ; xx [ 920 ] = xx [ 949 ] - ( xx [ 395 ] *
( ( xx [ 958 ] - xx [ 921 ] * xx [ 840 ] ) * xx [ 21 ] - xx [ 919 ] ) + xx [
415 ] * xx [ 971 ] ) ; xx [ 919 ] = xx [ 535 ] * xx [ 572 ] + xx [ 557 ] * xx
[ 576 ] + xx [ 574 ] * xx [ 590 ] + xx [ 534 ] * xx [ 592 ] + xx [ 544 ] * xx
[ 589 ] + xx [ 553 ] * xx [ 583 ] + xx [ 556 ] * xx [ 584 ] + xx [ 892 ] * xx
[ 855 ] - xx [ 888 ] * xx [ 876 ] - xx [ 857 ] * xx [ 920 ] ; xx [ 901 ] = xx
[ 903 ] + ( xx [ 915 ] + xx [ 871 ] * xx [ 880 ] ) * xx [ 21 ] - xx [ 82 ] ;
xx [ 880 ] = ( xx [ 896 ] + xx [ 871 ] * xx [ 898 ] ) * xx [ 21 ] + xx [ 909
] ; xx [ 907 ] = xx [ 87 ] ; xx [ 908 ] = - xx [ 901 ] ; xx [ 909 ] = - xx [
880 ] ; solveSymmetricPosDef ( xx + 383 , xx + 907 , 3 , 1 , xx + 947 , xx +
950 ) ; xx [ 907 ] = xx [ 28 ] * xx [ 947 ] ; xx [ 908 ] = xx [ 29 ] * xx [
948 ] ; xx [ 909 ] = xx [ 29 ] * xx [ 949 ] ; pm_math_Quaternion_xform_ra (
xx + 865 , xx + 907 , xx + 950 ) ; xx [ 896 ] = xx [ 361 ] * xx [ 948 ] ; xx
[ 898 ] = xx [ 361 ] * xx [ 949 ] ; xx [ 902 ] = xx [ 847 ] * xx [ 896 ] + xx
[ 898 ] * xx [ 848 ] ; xx [ 903 ] = xx [ 841 ] * xx [ 896 ] ; xx [ 907 ] = xx
[ 841 ] * xx [ 898 ] ; xx [ 956 ] = - xx [ 902 ] ; xx [ 957 ] = xx [ 903 ] ;
xx [ 958 ] = xx [ 907 ] ; pm_math_Vector3_cross_ra ( xx + 873 , xx + 956 , xx
+ 970 ) ; xx [ 908 ] = xx [ 898 ] + ( xx [ 903 ] * xx [ 840 ] + xx [ 971 ] )
* xx [ 21 ] ; xx [ 956 ] = xx [ 21 ] * ( xx [ 970 ] - xx [ 902 ] * xx [ 840 ]
) ; xx [ 957 ] = xx [ 908 ] ; xx [ 958 ] = xx [ 21 ] * ( xx [ 972 ] + xx [
907 ] * xx [ 840 ] ) - xx [ 896 ] ; pm_math_Vector3_cross_ra ( xx + 904 , xx
+ 956 , xx + 970 ) ; xx [ 881 ] = ( xx [ 869 ] * xx [ 877 ] + xx [ 883 ] ) *
xx [ 21 ] - xx [ 859 ] + xx [ 895 ] + ( xx [ 890 ] * xx [ 843 ] - xx [ 891 ]
* xx [ 851 ] ) * xx [ 21 ] ; xx [ 859 ] = ( ( xx [ 950 ] + xx [ 970 ] ) * xx
[ 5 ] + ( xx [ 952 ] + xx [ 972 ] ) * xx [ 13 ] + xx [ 908 ] * xx [ 137 ] +
xx [ 881 ] ) / xx [ 928 ] ; xx [ 877 ] = xx [ 5 ] * xx [ 859 ] ; xx [ 882 ] =
xx [ 13 ] * xx [ 859 ] ; xx [ 883 ] = xx [ 877 ] * xx [ 848 ] - xx [ 841 ] *
xx [ 882 ] ; xx [ 890 ] = xx [ 847 ] * xx [ 877 ] ; xx [ 893 ] = - ( xx [ 847
] * xx [ 882 ] ) ; xx [ 894 ] = - xx [ 883 ] ; xx [ 895 ] = xx [ 890 ] ;
pm_math_Vector3_cross_ra ( xx + 873 , xx + 893 , xx + 907 ) ; xx [ 893 ] = xx
[ 884 ] * xx [ 882 ] ; xx [ 894 ] = xx [ 889 ] * xx [ 877 ] - xx [ 887 ] * xx
[ 882 ] - xx [ 137 ] * xx [ 859 ] ; xx [ 895 ] = - ( xx [ 884 ] * xx [ 877 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 865 , xx + 893 , xx + 950 ) ;
xx [ 877 ] = xx [ 948 ] - ( ( xx [ 883 ] * xx [ 840 ] + xx [ 908 ] ) * xx [
413 ] - xx [ 415 ] * xx [ 952 ] ) ; xx [ 883 ] = xx [ 949 ] - ( xx [ 395 ] *
( ( xx [ 909 ] - xx [ 890 ] * xx [ 840 ] ) * xx [ 21 ] - xx [ 882 ] ) + xx [
415 ] * xx [ 951 ] ) ; xx [ 882 ] = xx [ 535 ] * xx [ 541 ] + xx [ 557 ] * xx
[ 548 ] + xx [ 574 ] * xx [ 550 ] + xx [ 534 ] * xx [ 579 ] + xx [ 544 ] * xx
[ 549 ] + xx [ 553 ] * xx [ 559 ] + xx [ 556 ] * xx [ 560 ] + xx [ 892 ] * xx
[ 859 ] - xx [ 888 ] * xx [ 877 ] - xx [ 857 ] * xx [ 883 ] ; xx [ 890 ] = xx
[ 535 ] * xx [ 94 ] + xx [ 557 ] * xx [ 170 ] + xx [ 574 ] * xx [ 203 ] + xx
[ 534 ] * xx [ 254 ] + xx [ 544 ] * xx [ 191 ] + xx [ 553 ] * xx [ 206 ] + xx
[ 556 ] * xx [ 259 ] ; xx [ 891 ] = xx [ 535 ] * xx [ 95 ] + xx [ 557 ] * xx
[ 174 ] + xx [ 574 ] * xx [ 587 ] + xx [ 534 ] * xx [ 591 ] + xx [ 544 ] * xx
[ 295 ] + xx [ 553 ] * xx [ 588 ] + xx [ 556 ] * xx [ 596 ] ; xx [ 893 ] = xx
[ 535 ] * xx [ 96 ] + xx [ 557 ] * xx [ 145 ] + xx [ 574 ] * xx [ 147 ] + xx
[ 534 ] * xx [ 288 ] + xx [ 544 ] * xx [ 146 ] + xx [ 553 ] * xx [ 150 ] + xx
[ 556 ] * xx [ 296 ] ; xx [ 894 ] = xx [ 567 ] * xx [ 541 ] + xx [ 573 ] * xx
[ 548 ] + xx [ 575 ] * xx [ 550 ] + xx [ 598 ] * xx [ 579 ] + xx [ 569 ] * xx
[ 549 ] + xx [ 570 ] * xx [ 559 ] + xx [ 571 ] * xx [ 560 ] + xx [ 917 ] * xx
[ 859 ] - xx [ 914 ] * xx [ 877 ] - xx [ 885 ] * xx [ 883 ] ; xx [ 895 ] = xx
[ 567 ] * xx [ 94 ] + xx [ 573 ] * xx [ 170 ] + xx [ 575 ] * xx [ 203 ] + xx
[ 598 ] * xx [ 254 ] + xx [ 569 ] * xx [ 191 ] + xx [ 570 ] * xx [ 206 ] + xx
[ 571 ] * xx [ 259 ] ; xx [ 896 ] = xx [ 567 ] * xx [ 95 ] + xx [ 573 ] * xx
[ 174 ] + xx [ 575 ] * xx [ 587 ] + xx [ 598 ] * xx [ 591 ] + xx [ 569 ] * xx
[ 295 ] + xx [ 570 ] * xx [ 588 ] + xx [ 571 ] * xx [ 596 ] ; xx [ 898 ] = xx
[ 567 ] * xx [ 96 ] + xx [ 573 ] * xx [ 145 ] + xx [ 575 ] * xx [ 147 ] + xx
[ 598 ] * xx [ 288 ] + xx [ 569 ] * xx [ 146 ] + xx [ 570 ] * xx [ 150 ] + xx
[ 571 ] * xx [ 296 ] ; xx [ 902 ] = xx [ 546 ] * xx [ 94 ] + xx [ 552 ] * xx
[ 170 ] + xx [ 555 ] * xx [ 203 ] + xx [ 578 ] * xx [ 254 ] + xx [ 547 ] * xx
[ 191 ] + xx [ 539 ] * xx [ 206 ] + xx [ 540 ] * xx [ 259 ] ; xx [ 903 ] = xx
[ 546 ] * xx [ 95 ] + xx [ 552 ] * xx [ 174 ] + xx [ 555 ] * xx [ 587 ] + xx
[ 578 ] * xx [ 591 ] + xx [ 547 ] * xx [ 295 ] + xx [ 539 ] * xx [ 588 ] + xx
[ 540 ] * xx [ 596 ] ; xx [ 907 ] = xx [ 546 ] * xx [ 96 ] + xx [ 552 ] * xx
[ 145 ] + xx [ 555 ] * xx [ 147 ] + xx [ 578 ] * xx [ 288 ] + xx [ 547 ] * xx
[ 146 ] + xx [ 539 ] * xx [ 150 ] + xx [ 540 ] * xx [ 296 ] ; xx [ 908 ] = xx
[ 56 ] * state [ 25 ] ; xx [ 56 ] = cos ( xx [ 908 ] ) ; xx [ 909 ] = xx [ 2
] * xx [ 56 ] ; xx [ 915 ] = sin ( xx [ 908 ] ) ; xx [ 908 ] = xx [ 5 ] * xx
[ 915 ] ; xx [ 921 ] = xx [ 13 ] * xx [ 915 ] ; xx [ 915 ] = xx [ 2 ] * xx [
908 ] - xx [ 1 ] * xx [ 921 ] ; xx [ 929 ] = xx [ 1 ] * xx [ 56 ] ; xx [ 56 ]
= - xx [ 929 ] ; xx [ 932 ] = xx [ 2 ] * xx [ 921 ] + xx [ 1 ] * xx [ 908 ] ;
xx [ 908 ] = - xx [ 932 ] ; xx [ 947 ] = - xx [ 909 ] ; xx [ 948 ] = xx [ 915
] ; xx [ 949 ] = xx [ 56 ] ; xx [ 950 ] = xx [ 908 ] ; xx [ 921 ] = xx [ 1 ]
* state [ 29 ] + xx [ 2 ] * state [ 27 ] ; xx [ 944 ] = xx [ 1 ] * state [ 30
] - xx [ 2 ] * state [ 28 ] ; xx [ 951 ] = - xx [ 944 ] ; xx [ 952 ] = xx [ 1
] * state [ 27 ] - xx [ 2 ] * state [ 29 ] ; xx [ 954 ] = - xx [ 952 ] ; xx [
956 ] = xx [ 1 ] * state [ 28 ] + xx [ 2 ] * state [ 30 ] ; xx [ 970 ] = xx [
921 ] ; xx [ 971 ] = xx [ 951 ] ; xx [ 972 ] = xx [ 954 ] ; xx [ 973 ] = xx [
956 ] ; pm_math_Quaternion_compose_ra ( xx + 947 , xx + 970 , xx + 974 ) ; xx
[ 978 ] = xx [ 951 ] ; xx [ 979 ] = xx [ 954 ] ; xx [ 980 ] = xx [ 956 ] ; xx
[ 1 ] = xx [ 944 ] * xx [ 13 ] - xx [ 5 ] * xx [ 956 ] ; xx [ 2 ] = xx [ 952
] * xx [ 5 ] ; xx [ 981 ] = - ( xx [ 952 ] * xx [ 13 ] ) ; xx [ 982 ] = xx [
1 ] ; xx [ 983 ] = - xx [ 2 ] ; pm_math_Vector3_cross_ra ( xx + 978 , xx +
981 , xx + 984 ) ; xx [ 951 ] = xx [ 341 ] * ( xx [ 985 ] - xx [ 1 ] * xx [
921 ] ) ; xx [ 1 ] = ( xx [ 13 ] + xx [ 21 ] * ( xx [ 986 ] + xx [ 2 ] * xx [
921 ] ) ) * xx [ 82 ] ; xx [ 2 ] = xx [ 976 ] * xx [ 951 ] + xx [ 977 ] * xx
[ 1 ] ; xx [ 341 ] = xx [ 975 ] * xx [ 951 ] ; xx [ 954 ] = xx [ 975 ] * xx [
1 ] ; xx [ 981 ] = - xx [ 2 ] ; xx [ 982 ] = xx [ 341 ] ; xx [ 983 ] = xx [
954 ] ; pm_math_Vector3_cross_ra ( xx + 975 , xx + 981 , xx + 984 ) ; xx [
957 ] = xx [ 82 ] * xx [ 956 ] ; xx [ 958 ] = xx [ 957 ] * xx [ 921 ] ; xx [
960 ] = xx [ 952 ] * xx [ 82 ] ; xx [ 962 ] = ( xx [ 958 ] + xx [ 944 ] * xx
[ 960 ] ) * xx [ 21 ] ; xx [ 964 ] = xx [ 952 ] * xx [ 960 ] ; xx [ 966 ] =
xx [ 957 ] * xx [ 956 ] ; xx [ 968 ] = xx [ 84 ] + xx [ 82 ] - ( xx [ 964 ] +
xx [ 966 ] ) * xx [ 21 ] ; xx [ 84 ] = xx [ 960 ] * xx [ 921 ] ; xx [ 981 ] =
xx [ 109 ] + xx [ 21 ] * ( xx [ 84 ] - xx [ 944 ] * xx [ 957 ] ) ; xx [ 987 ]
= - ( xx [ 13 ] * xx [ 962 ] ) ; xx [ 988 ] = xx [ 968 ] * xx [ 13 ] + xx [
981 ] * xx [ 5 ] ; xx [ 989 ] = - ( xx [ 5 ] * xx [ 962 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 947 , xx + 987 , xx + 990 ) ; xx [ 109 ] =
xx [ 915 ] * xx [ 137 ] ; xx [ 982 ] = xx [ 137 ] * xx [ 932 ] ; xx [ 983 ] =
xx [ 21 ] * ( xx [ 984 ] - xx [ 2 ] * xx [ 974 ] ) + xx [ 990 ] - xx [ 21 ] *
( xx [ 109 ] * xx [ 929 ] + xx [ 982 ] * xx [ 909 ] ) ; xx [ 2 ] = xx [ 944 ]
* xx [ 82 ] ; xx [ 987 ] = xx [ 2 ] * xx [ 921 ] ; xx [ 988 ] = xx [ 944 ] *
xx [ 2 ] ; xx [ 993 ] = ( xx [ 84 ] + xx [ 2 ] * xx [ 956 ] ) * xx [ 21 ] ;
xx [ 994 ] = xx [ 21 ] * ( xx [ 960 ] * xx [ 956 ] - xx [ 987 ] ) ; xx [ 995
] = ( xx [ 988 ] + xx [ 964 ] ) * xx [ 21 ] - xx [ 82 ] ;
pm_math_Quaternion_xform_ra ( xx + 947 , xx + 993 , xx + 996 ) ; xx [ 84 ] =
xx [ 82 ] * xx [ 976 ] ; xx [ 960 ] = xx [ 82 ] * xx [ 975 ] ; xx [ 964 ] =
xx [ 996 ] - ( xx [ 974 ] * xx [ 84 ] + xx [ 977 ] * xx [ 960 ] ) * xx [ 21 ]
; xx [ 989 ] = xx [ 82 ] * xx [ 977 ] ; xx [ 993 ] = xx [ 21 ] * ( xx [ 952 ]
* xx [ 2 ] - xx [ 958 ] ) ; xx [ 994 ] = xx [ 82 ] - ( xx [ 966 ] + xx [ 988
] ) * xx [ 21 ] ; xx [ 995 ] = - ( ( xx [ 987 ] + xx [ 952 ] * xx [ 957 ] ) *
xx [ 21 ] ) ; pm_math_Quaternion_xform_ra ( xx + 947 , xx + 993 , xx + 999 )
; xx [ 2 ] = xx [ 21 ] * ( xx [ 976 ] * xx [ 960 ] - xx [ 974 ] * xx [ 989 ]
) + xx [ 999 ] ; xx [ 993 ] = xx [ 87 ] ; xx [ 994 ] = - xx [ 964 ] ; xx [
995 ] = - xx [ 2 ] ; solveSymmetricPosDef ( xx + 383 , xx + 993 , 3 , 1 , xx
+ 1002 , xx + 1005 ) ; xx [ 993 ] = xx [ 28 ] * xx [ 1002 ] ; xx [ 994 ] = xx
[ 29 ] * xx [ 1003 ] ; xx [ 995 ] = xx [ 29 ] * xx [ 1004 ] ;
pm_math_Quaternion_xform_ra ( xx + 970 , xx + 993 , xx + 1005 ) ; xx [ 993 ]
= xx [ 968 ] ; xx [ 994 ] = xx [ 962 ] ; xx [ 995 ] = xx [ 981 ] ; xx [ 957 ]
= xx [ 361 ] * xx [ 1004 ] ; xx [ 958 ] = xx [ 361 ] * xx [ 1003 ] ; xx [ 966
] = xx [ 957 ] * xx [ 956 ] - xx [ 952 ] * xx [ 958 ] ; xx [ 987 ] = xx [ 944
] * xx [ 958 ] ; xx [ 988 ] = xx [ 944 ] * xx [ 957 ] ; xx [ 1008 ] = - xx [
966 ] ; xx [ 1009 ] = - xx [ 987 ] ; xx [ 1010 ] = - xx [ 988 ] ;
pm_math_Vector3_cross_ra ( xx + 978 , xx + 1008 , xx + 1011 ) ; xx [ 1002 ] =
xx [ 957 ] + ( xx [ 1012 ] - xx [ 987 ] * xx [ 921 ] ) * xx [ 21 ] ; xx [
1008 ] = xx [ 21 ] * ( xx [ 1011 ] - xx [ 966 ] * xx [ 921 ] ) ; xx [ 1009 ]
= xx [ 1002 ] ; xx [ 1010 ] = xx [ 21 ] * ( xx [ 1013 ] - xx [ 988 ] * xx [
921 ] ) - xx [ 958 ] ; pm_math_Vector3_cross_ra ( xx + 993 , xx + 1008 , xx +
1011 ) ; xx [ 957 ] = xx [ 952 ] * xx [ 956 ] ; xx [ 958 ] = xx [ 944 ] * xx
[ 921 ] ; xx [ 966 ] = ( xx [ 957 ] + xx [ 958 ] ) * xx [ 21 ] ; xx [ 987 ] =
xx [ 363 ] * xx [ 966 ] ; xx [ 988 ] = xx [ 921 ] * xx [ 921 ] ; xx [ 1006 ]
= ( xx [ 988 ] + xx [ 956 ] * xx [ 956 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [
1008 ] = xx [ 363 ] * xx [ 1006 ] ; xx [ 1009 ] = xx [ 944 ] * xx [ 956 ] ;
xx [ 1010 ] = xx [ 952 ] * xx [ 921 ] ; xx [ 1012 ] = ( xx [ 1009 ] + xx [
1010 ] ) * xx [ 21 ] ; xx [ 1014 ] = xx [ 414 ] * xx [ 1012 ] ; xx [ 1015 ] =
xx [ 944 ] * xx [ 952 ] ; xx [ 1016 ] = xx [ 956 ] * xx [ 921 ] ; xx [ 1017 ]
= xx [ 21 ] * ( xx [ 1015 ] - xx [ 1016 ] ) ; xx [ 1018 ] = xx [ 414 ] * xx [
1017 ] ; xx [ 1019 ] = xx [ 1014 ] * xx [ 1017 ] - xx [ 1012 ] * xx [ 1018 ]
; xx [ 1020 ] = xx [ 21 ] * ( xx [ 958 ] - xx [ 957 ] ) ; xx [ 957 ] = ( xx [
988 ] + xx [ 952 ] * xx [ 952 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 958 ] = xx [
966 ] * xx [ 1014 ] - xx [ 1018 ] * xx [ 1006 ] ; xx [ 1021 ] = xx [ 414 ] *
xx [ 1020 ] ; xx [ 1022 ] = xx [ 414 ] * xx [ 957 ] ; xx [ 1023 ] = xx [ 1021
] * xx [ 1017 ] + xx [ 1012 ] * xx [ 1022 ] ; xx [ 1024 ] = xx [ 1022 ] * xx
[ 1006 ] + xx [ 966 ] * xx [ 1021 ] ; xx [ 1025 ] = xx [ 414 ] * xx [ 1006 ]
; xx [ 1026 ] = xx [ 414 ] * xx [ 966 ] ; xx [ 414 ] = xx [ 1025 ] * xx [
1017 ] - xx [ 1012 ] * xx [ 1026 ] ; xx [ 1027 ] = xx [ 966 ] * xx [ 1025 ] -
xx [ 1026 ] * xx [ 1006 ] ; xx [ 1028 ] = - xx [ 1019 ] ; xx [ 1029 ] = - (
xx [ 1018 ] * xx [ 1020 ] + xx [ 1014 ] * xx [ 957 ] ) ; xx [ 1030 ] = xx [
958 ] ; xx [ 1031 ] = xx [ 1023 ] ; xx [ 1032 ] = xx [ 1021 ] * xx [ 957 ] -
xx [ 1022 ] * xx [ 1020 ] ; xx [ 1033 ] = - xx [ 1024 ] ; xx [ 1034 ] = xx [
414 ] ; xx [ 1035 ] = xx [ 1025 ] * xx [ 957 ] + xx [ 1026 ] * xx [ 1020 ] ;
xx [ 1036 ] = - xx [ 1027 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 1028 , xx
+ 993 , xx + 1037 ) ; xx [ 1014 ] = ( xx [ 988 ] + xx [ 944 ] * xx [ 944 ] )
* xx [ 21 ] - xx [ 55 ] ; xx [ 988 ] = xx [ 1015 ] + xx [ 1016 ] ; xx [ 1015
] = xx [ 988 ] * xx [ 21 ] ; xx [ 1016 ] = xx [ 1010 ] - xx [ 1009 ] ; xx [
1009 ] = xx [ 21 ] * xx [ 1016 ] ; xx [ 1028 ] = xx [ 1014 ] ; xx [ 1029 ] =
xx [ 1015 ] ; xx [ 1030 ] = xx [ 1009 ] ; xx [ 1031 ] = xx [ 1017 ] ; xx [
1032 ] = xx [ 957 ] ; xx [ 1033 ] = - xx [ 966 ] ; xx [ 1034 ] = - xx [ 1012
] ; xx [ 1035 ] = xx [ 1020 ] ; xx [ 1036 ] = xx [ 1006 ] ; xx [ 1046 ] = xx
[ 251 ] * xx [ 1014 ] ; xx [ 1047 ] = xx [ 410 ] * xx [ 1017 ] ; xx [ 1048 ]
= - ( xx [ 410 ] * xx [ 1012 ] ) ; xx [ 1049 ] = xx [ 988 ] * xx [ 420 ] ; xx
[ 1050 ] = xx [ 410 ] * xx [ 957 ] ; xx [ 1051 ] = xx [ 410 ] * xx [ 1020 ] ;
xx [ 1052 ] = xx [ 420 ] * xx [ 1016 ] ; xx [ 1053 ] = - ( xx [ 410 ] * xx [
966 ] ) ; xx [ 1054 ] = xx [ 410 ] * xx [ 1006 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 1028 , xx + 1046 , xx + 1055 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 1055 , xx + 993 , xx + 1046 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 1046 , xx + 993 , xx + 1063 ) ; xx [ 410
] = xx [ 363 ] * xx [ 1017 ] ; xx [ 420 ] = xx [ 363 ] * xx [ 1012 ] ; xx [
363 ] = xx [ 1024 ] + xx [ 1053 ] ; xx [ 988 ] = xx [ 1023 ] - xx [ 1047 ] ;
xx [ 1010 ] = ( xx [ 232 ] + xx [ 1059 ] ) * xx [ 137 ] - ( xx [ 5 ] * xx [
988 ] + xx [ 13 ] * xx [ 363 ] ) ; xx [ 232 ] = ( ( xx [ 188 ] + xx [ 966 ] *
xx [ 987 ] + xx [ 1008 ] * xx [ 1006 ] - xx [ 1045 ] - xx [ 1045 ] - xx [
1071 ] ) * xx [ 13 ] + ( xx [ 966 ] * xx [ 410 ] + xx [ 420 ] * xx [ 1006 ] +
xx [ 1039 ] + xx [ 1043 ] + xx [ 1065 ] ) * xx [ 5 ] - xx [ 137 ] * xx [ 363
] ) * xx [ 13 ] - ( xx [ 137 ] * xx [ 988 ] - ( ( xx [ 218 ] + xx [ 410 ] *
xx [ 1017 ] + xx [ 1012 ] * xx [ 420 ] - xx [ 1037 ] - xx [ 1037 ] - xx [
1063 ] ) * xx [ 5 ] + ( xx [ 987 ] * xx [ 1017 ] + xx [ 1012 ] * xx [ 1008 ]
+ xx [ 1043 ] + xx [ 1039 ] + xx [ 1069 ] ) * xx [ 13 ] ) ) * xx [ 5 ] + xx [
1010 ] * xx [ 137 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 232 , 1 , xx +
188 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'hp_v4/Servo 3/Revolute Joint 3' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 188 ] = ( ( xx [ 1007 ] + xx [ 1013 ] ) * xx [ 13 ] -
( xx [ 1005 ] + xx [ 1011 ] ) * xx [ 5 ] + xx [ 1002 ] * xx [ 137 ] + xx [
983 ] ) / xx [ 232 ] ; xx [ 218 ] = xx [ 13 ] * xx [ 188 ] ; xx [ 363 ] = xx
[ 5 ] * xx [ 188 ] ; xx [ 410 ] = xx [ 944 ] * xx [ 218 ] - xx [ 363 ] * xx [
956 ] ; xx [ 420 ] = xx [ 952 ] * xx [ 363 ] ; xx [ 1021 ] = xx [ 952 ] * xx
[ 218 ] ; xx [ 1022 ] = - xx [ 410 ] ; xx [ 1023 ] = xx [ 420 ] ;
pm_math_Vector3_cross_ra ( xx + 978 , xx + 1021 , xx + 1024 ) ; xx [ 1021 ] =
xx [ 962 ] * xx [ 218 ] ; xx [ 1022 ] = - ( xx [ 981 ] * xx [ 363 ] + xx [
968 ] * xx [ 218 ] + xx [ 137 ] * xx [ 188 ] ) ; xx [ 1023 ] = xx [ 962 ] *
xx [ 363 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 970 , xx + 1021 , xx +
1037 ) ; xx [ 363 ] = xx [ 974 ] * xx [ 960 ] ; xx [ 987 ] = xx [ 21 ] * ( xx
[ 363 ] - xx [ 977 ] * xx [ 84 ] ) + xx [ 997 ] ; xx [ 988 ] = xx [ 975 ] *
xx [ 960 ] ; xx [ 960 ] = xx [ 1000 ] - ( xx [ 977 ] * xx [ 989 ] + xx [ 988
] ) * xx [ 21 ] + xx [ 82 ] ; xx [ 1021 ] = xx [ 87 ] ; xx [ 1022 ] = - xx [
987 ] ; xx [ 1023 ] = - xx [ 960 ] ; solveSymmetricPosDef ( xx + 383 , xx +
1021 , 3 , 1 , xx + 1040 , xx + 1043 ) ; xx [ 1021 ] = xx [ 28 ] * xx [ 1040
] ; xx [ 1022 ] = xx [ 29 ] * xx [ 1041 ] ; xx [ 1023 ] = xx [ 29 ] * xx [
1042 ] ; pm_math_Quaternion_xform_ra ( xx + 970 , xx + 1021 , xx + 1043 ) ;
xx [ 1002 ] = xx [ 361 ] * xx [ 1042 ] ; xx [ 1005 ] = xx [ 361 ] * xx [ 1041
] ; xx [ 1007 ] = xx [ 1002 ] * xx [ 956 ] - xx [ 952 ] * xx [ 1005 ] ; xx [
1008 ] = xx [ 944 ] * xx [ 1005 ] ; xx [ 1011 ] = xx [ 944 ] * xx [ 1002 ] ;
xx [ 1021 ] = - xx [ 1007 ] ; xx [ 1022 ] = - xx [ 1008 ] ; xx [ 1023 ] = -
xx [ 1011 ] ; pm_math_Vector3_cross_ra ( xx + 978 , xx + 1021 , xx + 1049 ) ;
xx [ 1013 ] = xx [ 1002 ] + ( xx [ 1050 ] - xx [ 1008 ] * xx [ 921 ] ) * xx [
21 ] ; xx [ 1021 ] = xx [ 21 ] * ( xx [ 1049 ] - xx [ 1007 ] * xx [ 921 ] ) ;
xx [ 1022 ] = xx [ 1013 ] ; xx [ 1023 ] = xx [ 21 ] * ( xx [ 1051 ] - xx [
1011 ] * xx [ 921 ] ) - xx [ 1005 ] ; pm_math_Vector3_cross_ra ( xx + 993 ,
xx + 1021 , xx + 1049 ) ; xx [ 1002 ] = xx [ 1 ] + ( xx [ 974 ] * xx [ 341 ]
+ xx [ 985 ] ) * xx [ 21 ] + xx [ 991 ] - ( xx [ 982 ] * xx [ 932 ] + xx [
915 ] * xx [ 109 ] ) * xx [ 21 ] + xx [ 137 ] ; xx [ 1 ] = ( ( xx [ 1045 ] +
xx [ 1051 ] ) * xx [ 13 ] - ( xx [ 1043 ] + xx [ 1049 ] ) * xx [ 5 ] + xx [
1013 ] * xx [ 137 ] + xx [ 1002 ] ) / xx [ 232 ] ; xx [ 341 ] = xx [ 13 ] *
xx [ 1 ] ; xx [ 1005 ] = xx [ 5 ] * xx [ 1 ] ; xx [ 1007 ] = xx [ 944 ] * xx
[ 341 ] - xx [ 1005 ] * xx [ 956 ] ; xx [ 1008 ] = xx [ 952 ] * xx [ 1005 ] ;
xx [ 1021 ] = xx [ 952 ] * xx [ 341 ] ; xx [ 1022 ] = - xx [ 1007 ] ; xx [
1023 ] = xx [ 1008 ] ; pm_math_Vector3_cross_ra ( xx + 978 , xx + 1021 , xx +
1043 ) ; xx [ 1021 ] = xx [ 962 ] * xx [ 341 ] ; xx [ 1022 ] = - ( xx [ 981 ]
* xx [ 1005 ] + xx [ 968 ] * xx [ 341 ] + xx [ 137 ] * xx [ 1 ] ) ; xx [ 1023
] = xx [ 962 ] * xx [ 1005 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 970
, xx + 1021 , xx + 1049 ) ; xx [ 1005 ] = xx [ 1041 ] - ( ( xx [ 1007 ] * xx
[ 921 ] + xx [ 1044 ] ) * xx [ 413 ] - xx [ 415 ] * xx [ 1051 ] ) ; xx [ 1007
] = xx [ 1042 ] - ( xx [ 395 ] * ( ( xx [ 1045 ] - xx [ 1008 ] * xx [ 921 ] )
* xx [ 21 ] - xx [ 341 ] ) + xx [ 415 ] * xx [ 1050 ] ) ; xx [ 341 ] = xx [
142 ] * xx [ 95 ] + xx [ 173 ] * xx [ 174 ] + xx [ 195 ] * xx [ 587 ] + xx [
32 ] * xx [ 591 ] + xx [ 148 ] * xx [ 295 ] + xx [ 159 ] * xx [ 588 ] + xx [
586 ] * xx [ 596 ] + xx [ 983 ] * xx [ 1 ] - xx [ 964 ] * xx [ 1005 ] - xx [
2 ] * xx [ 1007 ] ; xx [ 996 ] = xx [ 998 ] + ( xx [ 988 ] + xx [ 976 ] * xx
[ 84 ] ) * xx [ 21 ] - xx [ 82 ] ; xx [ 84 ] = ( xx [ 363 ] + xx [ 976 ] * xx
[ 989 ] ) * xx [ 21 ] + xx [ 1001 ] ; xx [ 997 ] = xx [ 87 ] ; xx [ 998 ] = -
xx [ 996 ] ; xx [ 999 ] = - xx [ 84 ] ; solveSymmetricPosDef ( xx + 383 , xx
+ 997 , 3 , 1 , xx + 1021 , xx + 1040 ) ; xx [ 997 ] = xx [ 28 ] * xx [ 1021
] ; xx [ 998 ] = xx [ 29 ] * xx [ 1022 ] ; xx [ 999 ] = xx [ 29 ] * xx [ 1023
] ; pm_math_Quaternion_xform_ra ( xx + 970 , xx + 997 , xx + 1040 ) ; xx [ 87
] = xx [ 361 ] * xx [ 1023 ] ; xx [ 363 ] = xx [ 361 ] * xx [ 1022 ] ; xx [
988 ] = xx [ 87 ] * xx [ 956 ] - xx [ 952 ] * xx [ 363 ] ; xx [ 989 ] = xx [
944 ] * xx [ 363 ] ; xx [ 997 ] = xx [ 944 ] * xx [ 87 ] ; xx [ 998 ] = - xx
[ 988 ] ; xx [ 999 ] = - xx [ 989 ] ; xx [ 1000 ] = - xx [ 997 ] ;
pm_math_Vector3_cross_ra ( xx + 978 , xx + 998 , xx + 1043 ) ; xx [ 998 ] =
xx [ 87 ] + ( xx [ 1044 ] - xx [ 989 ] * xx [ 921 ] ) * xx [ 21 ] ; xx [ 999
] = xx [ 21 ] * ( xx [ 1043 ] - xx [ 988 ] * xx [ 921 ] ) ; xx [ 1000 ] = xx
[ 998 ] ; xx [ 1001 ] = xx [ 21 ] * ( xx [ 1045 ] - xx [ 997 ] * xx [ 921 ] )
- xx [ 363 ] ; pm_math_Vector3_cross_ra ( xx + 993 , xx + 999 , xx + 1043 ) ;
xx [ 87 ] = ( xx [ 974 ] * xx [ 954 ] + xx [ 986 ] ) * xx [ 21 ] - xx [ 951 ]
+ xx [ 992 ] + ( xx [ 982 ] * xx [ 929 ] - xx [ 109 ] * xx [ 909 ] ) * xx [
21 ] ; xx [ 109 ] = ( ( xx [ 1042 ] + xx [ 1045 ] ) * xx [ 13 ] - ( xx [ 1040
] + xx [ 1043 ] ) * xx [ 5 ] + xx [ 998 ] * xx [ 137 ] + xx [ 87 ] ) / xx [
232 ] ; xx [ 363 ] = xx [ 13 ] * xx [ 109 ] ; xx [ 951 ] = xx [ 5 ] * xx [
109 ] ; xx [ 954 ] = xx [ 944 ] * xx [ 363 ] - xx [ 951 ] * xx [ 956 ] ; xx [
982 ] = xx [ 952 ] * xx [ 951 ] ; xx [ 984 ] = xx [ 952 ] * xx [ 363 ] ; xx [
985 ] = - xx [ 954 ] ; xx [ 986 ] = xx [ 982 ] ; pm_math_Vector3_cross_ra (
xx + 978 , xx + 984 , xx + 988 ) ; xx [ 984 ] = xx [ 962 ] * xx [ 363 ] ; xx
[ 985 ] = - ( xx [ 981 ] * xx [ 951 ] + xx [ 968 ] * xx [ 363 ] + xx [ 137 ]
* xx [ 109 ] ) ; xx [ 986 ] = xx [ 962 ] * xx [ 951 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 970 , xx + 984 , xx + 997 ) ; xx [
951 ] = xx [ 1022 ] - ( ( xx [ 954 ] * xx [ 921 ] + xx [ 989 ] ) * xx [ 413 ]
- xx [ 415 ] * xx [ 999 ] ) ; xx [ 954 ] = xx [ 1023 ] - ( xx [ 395 ] * ( (
xx [ 990 ] - xx [ 982 ] * xx [ 921 ] ) * xx [ 21 ] - xx [ 363 ] ) + xx [ 415
] * xx [ 998 ] ) ; xx [ 363 ] = xx [ 142 ] * xx [ 96 ] + xx [ 173 ] * xx [
145 ] + xx [ 195 ] * xx [ 147 ] + xx [ 32 ] * xx [ 288 ] + xx [ 148 ] * xx [
146 ] + xx [ 159 ] * xx [ 150 ] + xx [ 586 ] * xx [ 296 ] + xx [ 983 ] * xx [
109 ] - xx [ 964 ] * xx [ 951 ] - xx [ 2 ] * xx [ 954 ] ; xx [ 982 ] = xx [
293 ] * xx [ 96 ] + xx [ 417 ] * xx [ 145 ] + xx [ 287 ] * xx [ 147 ] + xx [
581 ] * xx [ 288 ] + xx [ 294 ] * xx [ 146 ] + xx [ 139 ] * xx [ 150 ] + xx [
171 ] * xx [ 296 ] + xx [ 1002 ] * xx [ 109 ] - xx [ 987 ] * xx [ 951 ] - xx
[ 960 ] * xx [ 954 ] ; xx [ 1063 ] = xx [ 160 ] * xx [ 190 ] + xx [ 292 ] *
xx [ 189 ] + xx [ 110 ] * xx [ 185 ] + xx [ 38 ] * xx [ 186 ] + xx [ 136 ] *
( xx [ 179 ] - ( xx [ 187 ] * xx [ 329 ] + xx [ 217 ] * xx [ 330 ] - xx [ 219
] * xx [ 316 ] ) ) + xx [ 165 ] * ( xx [ 180 ] - ( xx [ 221 ] * xx [ 329 ] +
xx [ 223 ] * xx [ 330 ] + xx [ 229 ] * xx [ 316 ] ) ) + xx [ 39 ] * ( xx [
181 ] - ( xx [ 238 ] * xx [ 331 ] + xx [ 239 ] * xx [ 314 ] - xx [ 246 ] * xx
[ 315 ] ) ) + xx [ 379 ] * xx [ 392 ] - xx [ 375 ] * ( xx [ 407 ] - ( ( xx [
409 ] * xx [ 249 ] + xx [ 447 ] ) * xx [ 413 ] - xx [ 415 ] * xx [ 451 ] ) )
- xx [ 343 ] * ( xx [ 408 ] - ( xx [ 395 ] * ( ( xx [ 448 ] - xx [ 411 ] * xx
[ 249 ] ) * xx [ 21 ] - xx [ 396 ] ) + xx [ 415 ] * xx [ 450 ] ) ) ; xx [
1064 ] = xx [ 467 ] ; xx [ 1065 ] = xx [ 291 ] ; xx [ 1066 ] = xx [ 474 ] ;
xx [ 1067 ] = xx [ 481 ] ; xx [ 1068 ] = xx [ 405 ] ; xx [ 1069 ] = xx [ 519
] ; xx [ 1070 ] = xx [ 538 ] ; xx [ 1071 ] = xx [ 531 ] ; xx [ 1072 ] = xx [
566 ] ; xx [ 1073 ] = xx [ 585 ] ; xx [ 1074 ] = xx [ 561 ] ; xx [ 1075 ] =
xx [ 286 ] ; xx [ 1076 ] = xx [ 597 ] ; xx [ 1077 ] = xx [ 582 ] ; xx [ 1078
] = xx [ 467 ] ; xx [ 1079 ] = xx [ 418 ] * xx [ 431 ] + xx [ 446 ] * xx [
443 ] + xx [ 449 ] * xx [ 445 ] + xx [ 459 ] * xx [ 461 ] + xx [ 426 ] * xx [
444 ] + xx [ 427 ] * xx [ 453 ] + xx [ 430 ] * xx [ 455 ] + xx [ 465 ] * xx [
342 ] - xx [ 457 ] * xx [ 357 ] - xx [ 367 ] * xx [ 469 ] ; xx [ 1080 ] = xx
[ 594 ] ; xx [ 1081 ] = xx [ 595 ] ; xx [ 1082 ] = xx [ 599 ] ; xx [ 1083 ] =
xx [ 600 ] ; xx [ 1084 ] = xx [ 601 ] ; xx [ 1085 ] = xx [ 602 ] ; xx [ 1086
] = xx [ 603 ] ; xx [ 1087 ] = xx [ 604 ] ; xx [ 1088 ] = xx [ 605 ] ; xx [
1089 ] = xx [ 606 ] ; xx [ 1090 ] = xx [ 607 ] ; xx [ 1091 ] = xx [ 608 ] ;
xx [ 1092 ] = xx [ 609 ] ; xx [ 1093 ] = xx [ 291 ] ; xx [ 1094 ] = xx [ 594
] ; xx [ 1095 ] = xx [ 141 ] * xx [ 135 ] + xx [ 157 ] * xx [ 154 ] + xx [
158 ] * xx [ 156 ] + xx [ 289 ] * xx [ 176 ] + xx [ 153 ] * xx [ 155 ] + xx [
133 ] * xx [ 161 ] + xx [ 134 ] * xx [ 162 ] + xx [ 177 ] * xx [ 178 ] - xx [
163 ] * xx [ 290 ] - xx [ 167 ] * xx [ 297 ] ; xx [ 1096 ] = xx [ 610 ] ; xx
[ 1097 ] = xx [ 611 ] ; xx [ 1098 ] = xx [ 612 ] ; xx [ 1099 ] = xx [ 613 ] ;
xx [ 1100 ] = xx [ 614 ] ; xx [ 1101 ] = xx [ 615 ] ; xx [ 1102 ] = xx [ 616
] ; xx [ 1103 ] = xx [ 617 ] ; xx [ 1104 ] = xx [ 618 ] ; xx [ 1105 ] = xx [
619 ] ; xx [ 1106 ] = xx [ 620 ] ; xx [ 1107 ] = xx [ 621 ] ; xx [ 1108 ] =
xx [ 474 ] ; xx [ 1109 ] = xx [ 595 ] ; xx [ 1110 ] = xx [ 610 ] ; xx [ 1111
] = xx [ 306 ] * xx [ 378 ] + xx [ 398 ] * xx [ 399 ] + xx [ 456 ] * xx [ 470
] + xx [ 305 ] * xx [ 472 ] + xx [ 365 ] * xx [ 463 ] + xx [ 377 ] * xx [ 471
] + xx [ 397 ] * xx [ 473 ] + xx [ 666 ] * xx [ 670 ] - xx [ 662 ] * ( xx [
685 ] - ( ( xx [ 684 ] * xx [ 623 ] + xx [ 719 ] ) * xx [ 413 ] - xx [ 415 ]
* xx [ 723 ] ) ) - xx [ 636 ] * ( xx [ 686 ] - ( xx [ 395 ] * ( ( xx [ 720 ]
- xx [ 687 ] * xx [ 623 ] ) * xx [ 21 ] - xx [ 671 ] ) + xx [ 415 ] * xx [
722 ] ) ) ; xx [ 1112 ] = xx [ 650 ] ; xx [ 1113 ] = xx [ 651 ] ; xx [ 1114 ]
= xx [ 664 ] ; xx [ 1115 ] = xx [ 665 ] ; xx [ 1116 ] = xx [ 667 ] ; xx [
1117 ] = xx [ 668 ] ; xx [ 1118 ] = xx [ 669 ] ; xx [ 1119 ] = xx [ 672 ] ;
xx [ 1120 ] = xx [ 673 ] ; xx [ 1121 ] = xx [ 676 ] ; xx [ 1122 ] = xx [ 677
] ; xx [ 1123 ] = xx [ 481 ] ; xx [ 1124 ] = xx [ 599 ] ; xx [ 1125 ] = xx [
611 ] ; xx [ 1126 ] = xx [ 650 ] ; xx [ 1127 ] = xx [ 475 ] * xx [ 483 ] + xx
[ 501 ] * xx [ 482 ] + xx [ 502 ] * xx [ 494 ] + xx [ 504 ] * xx [ 496 ] + xx
[ 476 ] * xx [ 484 ] + xx [ 477 ] * xx [ 479 ] + xx [ 478 ] * xx [ 480 ] + xx
[ 693 ] * xx [ 628 ] - xx [ 689 ] * xx [ 695 ] - xx [ 659 ] * xx [ 696 ] ; xx
[ 1128 ] = xx [ 681 ] ; xx [ 1129 ] = xx [ 682 ] ; xx [ 1130 ] = xx [ 683 ] ;
xx [ 1131 ] = xx [ 690 ] ; xx [ 1132 ] = xx [ 698 ] ; xx [ 1133 ] = xx [ 703
] ; xx [ 1134 ] = xx [ 704 ] ; xx [ 1135 ] = xx [ 705 ] ; xx [ 1136 ] = xx [
706 ] ; xx [ 1137 ] = xx [ 718 ] ; xx [ 1138 ] = xx [ 405 ] ; xx [ 1139 ] =
xx [ 600 ] ; xx [ 1140 ] = xx [ 612 ] ; xx [ 1141 ] = xx [ 651 ] ; xx [ 1142
] = xx [ 681 ] ; xx [ 1143 ] = xx [ 380 ] * xx [ 359 ] + xx [ 382 ] * xx [
371 ] + xx [ 394 ] * xx [ 373 ] + xx [ 486 ] * xx [ 487 ] + xx [ 381 ] * xx [
372 ] + xx [ 307 ] * xx [ 403 ] + xx [ 355 ] * xx [ 404 ] + xx [ 655 ] * xx [
649 ] - xx [ 675 ] * xx [ 656 ] - xx [ 654 ] * xx [ 657 ] ; xx [ 1144 ] = xx
[ 721 ] ; xx [ 1145 ] = xx [ 724 ] ; xx [ 1146 ] = xx [ 725 ] ; xx [ 1147 ] =
xx [ 726 ] ; xx [ 1148 ] = xx [ 728 ] ; xx [ 1149 ] = xx [ 730 ] ; xx [ 1150
] = xx [ 731 ] ; xx [ 1151 ] = xx [ 732 ] ; xx [ 1152 ] = xx [ 734 ] ; xx [
1153 ] = xx [ 519 ] ; xx [ 1154 ] = xx [ 601 ] ; xx [ 1155 ] = xx [ 613 ] ;
xx [ 1156 ] = xx [ 664 ] ; xx [ 1157 ] = xx [ 682 ] ; xx [ 1158 ] = xx [ 721
] ; xx [ 1159 ] = xx [ 490 ] * xx [ 507 ] + xx [ 510 ] * xx [ 511 ] + xx [
527 ] * xx [ 516 ] + xx [ 489 ] * xx [ 521 ] + xx [ 495 ] * xx [ 515 ] + xx [
506 ] * xx [ 517 ] + xx [ 509 ] * xx [ 518 ] + xx [ 783 ] * xx [ 770 ] - xx [
779 ] * ( xx [ 802 ] - ( ( xx [ 791 ] * xx [ 736 ] + xx [ 821 ] ) * xx [ 413
] - xx [ 415 ] * xx [ 837 ] ) ) - xx [ 765 ] * ( xx [ 803 ] - ( xx [ 395 ] *
( ( xx [ 822 ] - xx [ 804 ] * xx [ 736 ] ) * xx [ 21 ] - xx [ 790 ] ) + xx [
415 ] * xx [ 836 ] ) ) ; xx [ 1160 ] = xx [ 810 ] ; xx [ 1161 ] = xx [ 773 ]
; xx [ 1162 ] = xx [ 781 ] ; xx [ 1163 ] = xx [ 782 ] ; xx [ 1164 ] = xx [
784 ] ; xx [ 1165 ] = xx [ 785 ] ; xx [ 1166 ] = xx [ 786 ] ; xx [ 1167 ] =
xx [ 787 ] ; xx [ 1168 ] = xx [ 538 ] ; xx [ 1169 ] = xx [ 602 ] ; xx [ 1170
] = xx [ 614 ] ; xx [ 1171 ] = xx [ 665 ] ; xx [ 1172 ] = xx [ 683 ] ; xx [
1173 ] = xx [ 724 ] ; xx [ 1174 ] = xx [ 810 ] ; xx [ 1175 ] = xx [ 520 ] *
xx [ 525 ] + xx [ 526 ] * xx [ 529 ] + xx [ 528 ] * xx [ 543 ] + xx [ 551 ] *
xx [ 545 ] + xx [ 522 ] * xx [ 542 ] + xx [ 523 ] * xx [ 536 ] + xx [ 524 ] *
xx [ 537 ] + xx [ 808 ] * xx [ 764 ] - xx [ 805 ] * xx [ 767 ] - xx [ 776 ] *
xx [ 811 ] ; xx [ 1176 ] = xx [ 789 ] ; xx [ 1177 ] = xx [ 793 ] ; xx [ 1178
] = xx [ 794 ] ; xx [ 1179 ] = xx [ 798 ] ; xx [ 1180 ] = xx [ 799 ] ; xx [
1181 ] = xx [ 800 ] ; xx [ 1182 ] = xx [ 806 ] ; xx [ 1183 ] = xx [ 531 ] ;
xx [ 1184 ] = xx [ 603 ] ; xx [ 1185 ] = xx [ 615 ] ; xx [ 1186 ] = xx [ 667
] ; xx [ 1187 ] = xx [ 690 ] ; xx [ 1188 ] = xx [ 725 ] ; xx [ 1189 ] = xx [
773 ] ; xx [ 1190 ] = xx [ 789 ] ; xx [ 1191 ] = xx [ 497 ] * xx [ 493 ] + xx
[ 499 ] * xx [ 503 ] + xx [ 500 ] * xx [ 512 ] + xx [ 505 ] * xx [ 514 ] + xx
[ 498 ] * xx [ 508 ] + xx [ 491 ] * xx [ 513 ] + xx [ 492 ] * xx [ 530 ] + xx
[ 772 ] * xx [ 766 ] - xx [ 792 ] * xx [ 768 ] - xx [ 771 ] * xx [ 774 ] ; xx
[ 1192 ] = xx [ 812 ] ; xx [ 1193 ] = xx [ 820 ] ; xx [ 1194 ] = xx [ 823 ] ;
xx [ 1195 ] = xx [ 835 ] ; xx [ 1196 ] = xx [ 838 ] ; xx [ 1197 ] = xx [ 839
] ; xx [ 1198 ] = xx [ 566 ] ; xx [ 1199 ] = xx [ 604 ] ; xx [ 1200 ] = xx [
616 ] ; xx [ 1201 ] = xx [ 668 ] ; xx [ 1202 ] = xx [ 698 ] ; xx [ 1203 ] =
xx [ 726 ] ; xx [ 1204 ] = xx [ 781 ] ; xx [ 1205 ] = xx [ 793 ] ; xx [ 1206
] = xx [ 812 ] ; xx [ 1207 ] = xx [ 535 ] * xx [ 554 ] + xx [ 557 ] * xx [
558 ] + xx [ 574 ] * xx [ 563 ] + xx [ 534 ] * xx [ 568 ] + xx [ 544 ] * xx [
562 ] + xx [ 553 ] * xx [ 564 ] + xx [ 556 ] * xx [ 565 ] + xx [ 892 ] * xx [
879 ] - xx [ 888 ] * ( xx [ 911 ] - ( ( xx [ 900 ] * xx [ 840 ] + xx [ 930 ]
) * xx [ 413 ] - xx [ 415 ] * xx [ 946 ] ) ) - xx [ 857 ] * ( xx [ 912 ] - (
xx [ 395 ] * ( ( xx [ 931 ] - xx [ 913 ] * xx [ 840 ] ) * xx [ 21 ] - xx [
899 ] ) + xx [ 415 ] * xx [ 945 ] ) ) ; xx [ 1208 ] = xx [ 919 ] ; xx [ 1209
] = xx [ 882 ] ; xx [ 1210 ] = xx [ 890 ] ; xx [ 1211 ] = xx [ 891 ] ; xx [
1212 ] = xx [ 893 ] ; xx [ 1213 ] = xx [ 585 ] ; xx [ 1214 ] = xx [ 605 ] ;
xx [ 1215 ] = xx [ 617 ] ; xx [ 1216 ] = xx [ 669 ] ; xx [ 1217 ] = xx [ 703
] ; xx [ 1218 ] = xx [ 728 ] ; xx [ 1219 ] = xx [ 782 ] ; xx [ 1220 ] = xx [
794 ] ; xx [ 1221 ] = xx [ 820 ] ; xx [ 1222 ] = xx [ 919 ] ; xx [ 1223 ] =
xx [ 567 ] * xx [ 572 ] + xx [ 573 ] * xx [ 576 ] + xx [ 575 ] * xx [ 590 ] +
xx [ 598 ] * xx [ 592 ] + xx [ 569 ] * xx [ 589 ] + xx [ 570 ] * xx [ 583 ] +
xx [ 571 ] * xx [ 584 ] + xx [ 917 ] * xx [ 855 ] - xx [ 914 ] * xx [ 876 ] -
xx [ 885 ] * xx [ 920 ] ; xx [ 1224 ] = xx [ 894 ] ; xx [ 1225 ] = xx [ 895 ]
; xx [ 1226 ] = xx [ 896 ] ; xx [ 1227 ] = xx [ 898 ] ; xx [ 1228 ] = xx [
561 ] ; xx [ 1229 ] = xx [ 606 ] ; xx [ 1230 ] = xx [ 618 ] ; xx [ 1231 ] =
xx [ 672 ] ; xx [ 1232 ] = xx [ 704 ] ; xx [ 1233 ] = xx [ 730 ] ; xx [ 1234
] = xx [ 784 ] ; xx [ 1235 ] = xx [ 798 ] ; xx [ 1236 ] = xx [ 823 ] ; xx [
1237 ] = xx [ 882 ] ; xx [ 1238 ] = xx [ 894 ] ; xx [ 1239 ] = xx [ 546 ] *
xx [ 541 ] + xx [ 552 ] * xx [ 548 ] + xx [ 555 ] * xx [ 550 ] + xx [ 578 ] *
xx [ 579 ] + xx [ 547 ] * xx [ 549 ] + xx [ 539 ] * xx [ 559 ] + xx [ 540 ] *
xx [ 560 ] + xx [ 881 ] * xx [ 859 ] - xx [ 901 ] * xx [ 877 ] - xx [ 880 ] *
xx [ 883 ] ; xx [ 1240 ] = xx [ 902 ] ; xx [ 1241 ] = xx [ 903 ] ; xx [ 1242
] = xx [ 907 ] ; xx [ 1243 ] = xx [ 286 ] ; xx [ 1244 ] = xx [ 607 ] ; xx [
1245 ] = xx [ 619 ] ; xx [ 1246 ] = xx [ 673 ] ; xx [ 1247 ] = xx [ 705 ] ;
xx [ 1248 ] = xx [ 731 ] ; xx [ 1249 ] = xx [ 785 ] ; xx [ 1250 ] = xx [ 799
] ; xx [ 1251 ] = xx [ 835 ] ; xx [ 1252 ] = xx [ 890 ] ; xx [ 1253 ] = xx [
895 ] ; xx [ 1254 ] = xx [ 902 ] ; xx [ 1255 ] = xx [ 142 ] * xx [ 94 ] + xx
[ 173 ] * xx [ 170 ] + xx [ 195 ] * xx [ 203 ] + xx [ 32 ] * xx [ 254 ] + xx
[ 148 ] * xx [ 191 ] + xx [ 159 ] * xx [ 206 ] + xx [ 586 ] * xx [ 259 ] + xx
[ 983 ] * xx [ 188 ] - xx [ 964 ] * ( xx [ 1003 ] - ( ( xx [ 410 ] * xx [ 921
] + xx [ 1025 ] ) * xx [ 413 ] - xx [ 415 ] * xx [ 1039 ] ) ) - xx [ 2 ] * (
xx [ 1004 ] - ( xx [ 395 ] * ( ( xx [ 1026 ] - xx [ 420 ] * xx [ 921 ] ) * xx
[ 21 ] - xx [ 218 ] ) + xx [ 415 ] * xx [ 1038 ] ) ) ; xx [ 1256 ] = xx [ 341
] ; xx [ 1257 ] = xx [ 363 ] ; xx [ 1258 ] = xx [ 597 ] ; xx [ 1259 ] = xx [
608 ] ; xx [ 1260 ] = xx [ 620 ] ; xx [ 1261 ] = xx [ 676 ] ; xx [ 1262 ] =
xx [ 706 ] ; xx [ 1263 ] = xx [ 732 ] ; xx [ 1264 ] = xx [ 786 ] ; xx [ 1265
] = xx [ 800 ] ; xx [ 1266 ] = xx [ 838 ] ; xx [ 1267 ] = xx [ 891 ] ; xx [
1268 ] = xx [ 896 ] ; xx [ 1269 ] = xx [ 903 ] ; xx [ 1270 ] = xx [ 341 ] ;
xx [ 1271 ] = xx [ 293 ] * xx [ 95 ] + xx [ 417 ] * xx [ 174 ] + xx [ 287 ] *
xx [ 587 ] + xx [ 581 ] * xx [ 591 ] + xx [ 294 ] * xx [ 295 ] + xx [ 139 ] *
xx [ 588 ] + xx [ 171 ] * xx [ 596 ] + xx [ 1002 ] * xx [ 1 ] - xx [ 987 ] *
xx [ 1005 ] - xx [ 960 ] * xx [ 1007 ] ; xx [ 1272 ] = xx [ 982 ] ; xx [ 1273
] = xx [ 582 ] ; xx [ 1274 ] = xx [ 609 ] ; xx [ 1275 ] = xx [ 621 ] ; xx [
1276 ] = xx [ 677 ] ; xx [ 1277 ] = xx [ 718 ] ; xx [ 1278 ] = xx [ 734 ] ;
xx [ 1279 ] = xx [ 787 ] ; xx [ 1280 ] = xx [ 806 ] ; xx [ 1281 ] = xx [ 839
] ; xx [ 1282 ] = xx [ 893 ] ; xx [ 1283 ] = xx [ 898 ] ; xx [ 1284 ] = xx [
907 ] ; xx [ 1285 ] = xx [ 363 ] ; xx [ 1286 ] = xx [ 982 ] ; xx [ 1287 ] =
xx [ 593 ] * xx [ 96 ] + xx [ 151 ] * xx [ 145 ] + xx [ 172 ] * xx [ 147 ] +
xx [ 175 ] * xx [ 288 ] + xx [ 152 ] * xx [ 146 ] + xx [ 140 ] * xx [ 150 ] +
xx [ 138 ] * xx [ 296 ] + xx [ 87 ] * xx [ 109 ] - xx [ 996 ] * xx [ 951 ] -
xx [ 84 ] * xx [ 954 ] ; xx [ 1 ] = xx [ 5 ] * state [ 35 ] ; xx [ 94 ] = xx
[ 13 ] * state [ 35 ] ; xx [ 95 ] = xx [ 324 ] * xx [ 94 ] ; xx [ 96 ] = xx [
1 ] * xx [ 336 ] - xx [ 302 ] * xx [ 94 ] ; xx [ 109 ] = xx [ 324 ] * xx [ 1
] ; xx [ 145 ] = xx [ 95 ] ; xx [ 146 ] = xx [ 96 ] ; xx [ 147 ] = - xx [ 109
] ; pm_math_Vector3_cross_ra ( xx + 351 , xx + 145 , xx + 154 ) ; xx [ 135 ]
= xx [ 1 ] + ( xx [ 154 ] - xx [ 95 ] * xx [ 249 ] ) * xx [ 21 ] ; xx [ 95 ]
= xx [ 135 ] + state [ 40 ] ; xx [ 145 ] = xx [ 21 ] * ( xx [ 155 ] - xx [ 96
] * xx [ 249 ] ) ; xx [ 96 ] = xx [ 145 ] + state [ 41 ] ; xx [ 146 ] = xx [
94 ] + xx [ 21 ] * ( xx [ 156 ] + xx [ 109 ] * xx [ 249 ] ) ; xx [ 109 ] = xx
[ 146 ] + state [ 42 ] ; xx [ 154 ] = xx [ 95 ] ; xx [ 155 ] = xx [ 96 ] ; xx
[ 156 ] = xx [ 109 ] ; xx [ 178 ] = xx [ 95 ] * xx [ 28 ] ; xx [ 179 ] = xx [
96 ] * xx [ 29 ] ; xx [ 180 ] = xx [ 109 ] * xx [ 29 ] ;
pm_math_Vector3_cross_ra ( xx + 154 , xx + 178 , xx + 188 ) ; xx [ 178 ] = xx
[ 135 ] ; xx [ 179 ] = xx [ 145 ] ; xx [ 180 ] = xx [ 146 ] ; xx [ 295 ] =
state [ 40 ] ; xx [ 296 ] = state [ 41 ] ; xx [ 297 ] = state [ 42 ] ;
pm_math_Vector3_cross_ra ( xx + 178 , xx + 295 , xx + 314 ) ; xx [ 147 ] = xx
[ 188 ] + xx [ 28 ] * xx [ 314 ] ; xx [ 150 ] = - xx [ 147 ] ; xx [ 161 ] =
xx [ 189 ] + xx [ 29 ] * xx [ 315 ] ; xx [ 162 ] = xx [ 135 ] + xx [ 95 ] ;
xx [ 95 ] = xx [ 82 ] * state [ 42 ] ; xx [ 135 ] = xx [ 374 ] * xx [ 94 ] -
xx [ 376 ] * xx [ 1 ] ; xx [ 329 ] = - ( xx [ 94 ] * xx [ 135 ] ) ; xx [ 330
] = - ( xx [ 94 ] * xx [ 366 ] * xx [ 94 ] + xx [ 1 ] * xx [ 366 ] * xx [ 1 ]
) ; xx [ 331 ] = xx [ 1 ] * xx [ 135 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 337 , xx + 329 , xx + 371 ) ; xx [ 135 ] = ( xx [ 162 ] * xx [ 95 ] + xx
[ 373 ] ) * xx [ 251 ] ; xx [ 170 ] = xx [ 161 ] - xx [ 82 ] * xx [ 135 ] ;
xx [ 174 ] = xx [ 190 ] + xx [ 29 ] * xx [ 316 ] ; xx [ 176 ] = xx [ 82 ] *
state [ 41 ] ; xx [ 181 ] = ( xx [ 162 ] * xx [ 176 ] + xx [ 372 ] ) * xx [
251 ] ; xx [ 162 ] = xx [ 174 ] + xx [ 82 ] * xx [ 181 ] ; xx [ 188 ] = xx [
150 ] ; xx [ 189 ] = - xx [ 170 ] ; xx [ 190 ] = - xx [ 162 ] ;
solveSymmetricPosDef ( xx + 383 , xx + 188 , 3 , 1 , xx + 329 , xx + 403 ) ;
xx [ 188 ] = xx [ 147 ] + xx [ 28 ] * xx [ 329 ] ; xx [ 189 ] = xx [ 161 ] +
xx [ 29 ] * xx [ 330 ] ; xx [ 190 ] = xx [ 174 ] + xx [ 29 ] * xx [ 331 ] ;
pm_math_Quaternion_xform_ra ( xx + 337 , xx + 188 , xx + 403 ) ; xx [ 185 ] =
xx [ 251 ] * ( xx [ 371 ] - ( ( xx [ 145 ] + xx [ 96 ] ) * xx [ 176 ] + ( xx
[ 146 ] + xx [ 109 ] ) * xx [ 95 ] ) ) ; xx [ 188 ] = xx [ 185 ] ; xx [ 189 ]
= xx [ 181 ] + xx [ 361 ] * xx [ 331 ] ; xx [ 190 ] = xx [ 135 ] - xx [ 361 ]
* xx [ 330 ] ; pm_math_Quaternion_xform_ra ( xx + 337 , xx + 188 , xx + 371 )
; pm_math_Vector3_cross_ra ( xx + 400 , xx + 371 , xx + 188 ) ; xx [ 96 ] =
xx [ 419 ] + xx [ 452 ] ; xx [ 109 ] = xx [ 137 ] * state [ 35 ] ; xx [ 145 ]
= xx [ 109 ] * xx [ 94 ] ; xx [ 146 ] = xx [ 109 ] * xx [ 1 ] ; xx [ 109 ] =
xx [ 432 ] - xx [ 454 ] ; xx [ 186 ] = xx [ 96 ] * xx [ 145 ] + xx [ 146 ] *
xx [ 109 ] ; xx [ 189 ] = xx [ 423 ] - xx [ 458 ] ; xx [ 191 ] = xx [ 433 ] +
xx [ 460 ] ; xx [ 203 ] = xx [ 145 ] * xx [ 189 ] + xx [ 191 ] * xx [ 146 ] ;
xx [ 206 ] = xx [ 468 ] * xx [ 146 ] - xx [ 462 ] * xx [ 145 ] ; xx [ 407 ] =
( xx [ 13 ] * xx [ 189 ] - xx [ 96 ] * xx [ 5 ] + xx [ 137 ] * xx [ 464 ] ) /
xx [ 429 ] ; xx [ 408 ] = xx [ 428 ] / xx [ 429 ] ; xx [ 409 ] = ( xx [ 5 ] *
xx [ 109 ] - xx [ 191 ] * xx [ 13 ] + xx [ 137 ] * xx [ 466 ] ) / xx [ 429 ]
; xx [ 96 ] = 9.806649999999999 ; xx [ 109 ] = xx [ 301 ] * xx [ 96 ] ; xx [
189 ] = xx [ 96 ] * xx [ 318 ] ; xx [ 191 ] = ( xx [ 109 ] * xx [ 304 ] - xx
[ 300 ] * xx [ 189 ] ) * xx [ 21 ] ; xx [ 218 ] = ( xx [ 189 ] * xx [ 318 ] +
xx [ 301 ] * xx [ 109 ] ) * xx [ 21 ] ; xx [ 254 ] = xx [ 21 ] * ( xx [ 304 ]
* xx [ 189 ] + xx [ 109 ] * xx [ 300 ] ) ; xx [ 431 ] = xx [ 191 ] ; xx [ 432
] = xx [ 96 ] - xx [ 218 ] ; xx [ 433 ] = - xx [ 254 ] ; xx [ 109 ] =
pm_math_Vector3_dot_ra ( xx + 407 , xx + 431 ) ; xx [ 189 ] = ( input [ 3 ] -
( ( xx [ 403 ] + xx [ 188 ] + xx [ 186 ] ) * xx [ 5 ] + xx [ 13 ] * ( xx [
405 ] + xx [ 190 ] - xx [ 203 ] ) + ( xx [ 372 ] + xx [ 206 ] ) * xx [ 137 ]
) ) / xx [ 429 ] - xx [ 109 ] ; xx [ 188 ] = xx [ 66 ] * xx [ 61 ] ; xx [ 190
] = xx [ 62 ] * xx [ 69 ] ; xx [ 259 ] = ( xx [ 188 ] - xx [ 190 ] ) * xx [
21 ] ; xx [ 286 ] = xx [ 62 ] * xx [ 62 ] ; xx [ 288 ] = ( xx [ 286 ] + xx [
66 ] * xx [ 66 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 290 ] = xx [ 259 ] * xx [ 7
] + xx [ 14 ] * xx [ 288 ] ; xx [ 291 ] = xx [ 69 ] * xx [ 61 ] ; xx [ 329 ]
= xx [ 66 ] * xx [ 62 ] ; xx [ 341 ] = xx [ 21 ] * ( xx [ 291 ] + xx [ 329 ]
) ; xx [ 342 ] = xx [ 66 ] * xx [ 69 ] ; xx [ 357 ] = xx [ 62 ] * xx [ 61 ] ;
xx [ 359 ] = ( xx [ 342 ] - xx [ 357 ] ) * xx [ 21 ] ; xx [ 363 ] = xx [ 7 ]
* xx [ 341 ] + xx [ 359 ] * xx [ 14 ] ; xx [ 371 ] = ( xx [ 286 ] + xx [ 61 ]
* xx [ 61 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 372 ] = xx [ 21 ] * ( xx [ 188 ]
+ xx [ 190 ] ) ; xx [ 188 ] = xx [ 7 ] * xx [ 371 ] + xx [ 14 ] * xx [ 372 ]
; xx [ 190 ] = xx [ 21 ] * ( xx [ 342 ] + xx [ 357 ] ) ; xx [ 342 ] = ( xx [
286 ] + xx [ 69 ] * xx [ 69 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 286 ] = ( xx [
291 ] - xx [ 329 ] ) * xx [ 21 ] ; xx [ 466 ] = - ( xx [ 14 ] * xx [ 290 ] )
; xx [ 467 ] = - ( xx [ 14 ] * xx [ 363 ] ) ; xx [ 468 ] = - ( xx [ 14 ] * xx
[ 188 ] ) ; xx [ 469 ] = - ( xx [ 14 ] * xx [ 14 ] * xx [ 190 ] + xx [ 7 ] *
xx [ 7 ] * xx [ 190 ] ) ; xx [ 470 ] = - ( xx [ 14 ] * xx [ 14 ] * xx [ 342 ]
+ xx [ 7 ] * xx [ 7 ] * xx [ 342 ] ) ; xx [ 471 ] = - ( xx [ 14 ] * xx [ 286
] * xx [ 14 ] + xx [ 7 ] * xx [ 286 ] * xx [ 7 ] ) ; xx [ 472 ] = - ( xx [ 7
] * xx [ 290 ] ) ; xx [ 473 ] = - ( xx [ 7 ] * xx [ 363 ] ) ; xx [ 474 ] = -
( xx [ 7 ] * xx [ 188 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 466 , xx +
264 , xx + 511 ) ; xx [ 264 ] = xx [ 288 ] ; xx [ 265 ] = xx [ 359 ] ; xx [
266 ] = xx [ 372 ] ; xx [ 267 ] = xx [ 190 ] ; xx [ 268 ] = xx [ 342 ] ; xx [
269 ] = xx [ 286 ] ; xx [ 270 ] = xx [ 259 ] ; xx [ 271 ] = xx [ 341 ] ; xx [
272 ] = xx [ 371 ] ; xx [ 188 ] = xx [ 193 ] * state [ 8 ] + xx [ 231 ] *
state [ 6 ] ; xx [ 190 ] = xx [ 193 ] * state [ 7 ] - xx [ 228 ] * state [ 6
] ; xx [ 193 ] = xx [ 188 ] * state [ 8 ] + xx [ 190 ] * state [ 7 ] ; xx [
259 ] = xx [ 201 ] * state [ 6 ] - xx [ 198 ] * state [ 8 ] ; xx [ 286 ] = xx
[ 198 ] * state [ 7 ] - xx [ 194 ] * state [ 6 ] ; xx [ 198 ] = xx [ 259 ] *
state [ 8 ] - xx [ 286 ] * state [ 7 ] ; xx [ 288 ] = xx [ 197 ] * state [ 6
] - xx [ 222 ] * state [ 8 ] ; xx [ 290 ] = xx [ 222 ] * state [ 7 ] + xx [
230 ] * state [ 6 ] ; xx [ 222 ] = xx [ 288 ] * state [ 8 ] - xx [ 290 ] *
state [ 7 ] ; xx [ 291 ] = xx [ 228 ] * state [ 8 ] + xx [ 231 ] * state [ 7
] ; xx [ 228 ] = xx [ 194 ] * state [ 8 ] - xx [ 201 ] * state [ 7 ] ; xx [
194 ] = xx [ 230 ] * state [ 8 ] + xx [ 197 ] * state [ 7 ] ; xx [ 558 ] = -
xx [ 193 ] ; xx [ 559 ] = xx [ 198 ] ; xx [ 560 ] = xx [ 222 ] ; xx [ 561 ] =
xx [ 190 ] * state [ 6 ] - xx [ 291 ] * state [ 8 ] ; xx [ 562 ] = xx [ 286 ]
* state [ 6 ] - xx [ 228 ] * state [ 8 ] ; xx [ 563 ] = xx [ 194 ] * state [
8 ] + xx [ 290 ] * state [ 6 ] ; xx [ 564 ] = xx [ 291 ] * state [ 7 ] + xx [
188 ] * state [ 6 ] ; xx [ 565 ] = xx [ 228 ] * state [ 7 ] - xx [ 259 ] *
state [ 6 ] ; xx [ 566 ] = - ( xx [ 194 ] * state [ 7 ] + xx [ 288 ] * state
[ 6 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 264 , xx + 558 , xx + 599 ) ;
xx [ 188 ] = xx [ 74 ] * xx [ 74 ] ; xx [ 190 ] = xx [ 75 ] * xx [ 76 ] ; xx
[ 194 ] = xx [ 74 ] * xx [ 77 ] ; xx [ 197 ] = xx [ 75 ] * xx [ 77 ] ; xx [
201 ] = xx [ 74 ] * xx [ 76 ] ; xx [ 228 ] = xx [ 76 ] * xx [ 77 ] ; xx [ 230
] = xx [ 74 ] * xx [ 75 ] ; xx [ 264 ] = ( xx [ 188 ] + xx [ 75 ] * xx [ 75 ]
) * xx [ 21 ] - xx [ 55 ] ; xx [ 265 ] = ( xx [ 190 ] + xx [ 194 ] ) * xx [
21 ] ; xx [ 266 ] = xx [ 21 ] * ( xx [ 197 ] - xx [ 201 ] ) ; xx [ 267 ] = xx
[ 21 ] * ( xx [ 190 ] - xx [ 194 ] ) ; xx [ 268 ] = ( xx [ 188 ] + xx [ 76 ]
* xx [ 76 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 269 ] = ( xx [ 228 ] + xx [ 230
] ) * xx [ 21 ] ; xx [ 270 ] = ( xx [ 197 ] + xx [ 201 ] ) * xx [ 21 ] ; xx [
271 ] = xx [ 21 ] * ( xx [ 228 ] - xx [ 230 ] ) ; xx [ 272 ] = ( xx [ 188 ] +
xx [ 77 ] * xx [ 77 ] ) * xx [ 21 ] - xx [ 55 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 264 , xx + 22 , xx + 558 ) ; xx [ 371 ]
= state [ 6 ] ; xx [ 372 ] = state [ 7 ] ; xx [ 373 ] = state [ 8 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 558 , xx + 371 , xx + 608 ) ; xx [ 558
] = xx [ 511 ] + xx [ 599 ] + xx [ 21 ] * xx [ 608 ] ; xx [ 559 ] = xx [ 512
] + xx [ 600 ] + xx [ 21 ] * xx [ 609 ] ; xx [ 560 ] = xx [ 513 ] + xx [ 601
] + xx [ 21 ] * xx [ 610 ] ; xx [ 561 ] = xx [ 514 ] + xx [ 602 ] + xx [ 21 ]
* xx [ 611 ] ; xx [ 562 ] = xx [ 515 ] + xx [ 603 ] + xx [ 21 ] * xx [ 612 ]
; xx [ 563 ] = xx [ 516 ] + xx [ 604 ] + xx [ 21 ] * xx [ 613 ] ; xx [ 564 ]
= xx [ 517 ] + xx [ 605 ] + xx [ 21 ] * xx [ 614 ] ; xx [ 565 ] = xx [ 518 ]
+ xx [ 606 ] + xx [ 21 ] * xx [ 615 ] ; xx [ 566 ] = xx [ 519 ] + xx [ 607 ]
+ xx [ 21 ] * xx [ 616 ] ; pm_math_Matrix3x3_compose_ra ( xx + 558 , xx + 207
, xx + 511 ) ; xx [ 188 ] = xx [ 204 ] * xx [ 51 ] - xx [ 192 ] * state [ 15
] ; xx [ 190 ] = xx [ 53 ] * xx [ 192 ] - xx [ 200 ] * xx [ 51 ] ; xx [ 192 ]
= xx [ 188 ] * state [ 15 ] - xx [ 190 ] * xx [ 53 ] ; xx [ 194 ] = xx [ 196
] * state [ 15 ] - xx [ 205 ] * xx [ 51 ] ; xx [ 197 ] = xx [ 53 ] * xx [ 196
] - xx [ 202 ] * xx [ 51 ] ; xx [ 196 ] = xx [ 194 ] * state [ 15 ] + xx [ 53
] * xx [ 197 ] ; xx [ 201 ] = xx [ 40 ] * xx [ 51 ] - xx [ 199 ] * state [ 15
] ; xx [ 207 ] = xx [ 53 ] * xx [ 199 ] - xx [ 36 ] * xx [ 51 ] ; xx [ 199 ]
= xx [ 201 ] * state [ 15 ] - xx [ 53 ] * xx [ 207 ] ; xx [ 208 ] = xx [ 53 ]
* xx [ 204 ] - xx [ 200 ] * state [ 15 ] ; xx [ 200 ] = xx [ 208 ] * state [
15 ] + xx [ 190 ] * xx [ 51 ] ; xx [ 190 ] = xx [ 202 ] * state [ 15 ] - xx [
53 ] * xx [ 205 ] ; xx [ 202 ] = xx [ 197 ] * xx [ 51 ] - xx [ 190 ] * state
[ 15 ] ; xx [ 197 ] = xx [ 36 ] * state [ 15 ] - xx [ 53 ] * xx [ 40 ] ; xx [
36 ] = xx [ 207 ] * xx [ 51 ] - xx [ 197 ] * state [ 15 ] ; xx [ 599 ] = xx [
192 ] ; xx [ 600 ] = - xx [ 196 ] ; xx [ 601 ] = xx [ 199 ] ; xx [ 602 ] = xx
[ 200 ] ; xx [ 603 ] = xx [ 202 ] ; xx [ 604 ] = xx [ 36 ] ; xx [ 605 ] = - (
xx [ 208 ] * xx [ 53 ] + xx [ 188 ] * xx [ 51 ] ) ; xx [ 606 ] = xx [ 190 ] *
xx [ 53 ] + xx [ 194 ] * xx [ 51 ] ; xx [ 607 ] = xx [ 53 ] * xx [ 197 ] - xx
[ 201 ] * xx [ 51 ] ; pm_math_Matrix3x3_compose_ra ( xx + 264 , xx + 599 , xx
+ 207 ) ; xx [ 40 ] = xx [ 78 ] * xx [ 78 ] ; xx [ 188 ] = xx [ 79 ] * xx [
80 ] ; xx [ 190 ] = xx [ 79 ] * xx [ 81 ] ; xx [ 194 ] = xx [ 78 ] * xx [ 80
] ; xx [ 197 ] = xx [ 80 ] * xx [ 81 ] ; xx [ 201 ] = xx [ 78 ] * xx [ 79 ] ;
xx [ 264 ] = ( xx [ 40 ] + xx [ 79 ] * xx [ 79 ] ) * xx [ 21 ] - xx [ 55 ] ;
xx [ 265 ] = ( xx [ 188 ] + xx [ 67 ] ) * xx [ 21 ] ; xx [ 266 ] = xx [ 21 ]
* ( xx [ 190 ] - xx [ 194 ] ) ; xx [ 267 ] = xx [ 21 ] * ( xx [ 188 ] - xx [
67 ] ) ; xx [ 268 ] = ( xx [ 40 ] + xx [ 80 ] * xx [ 80 ] ) * xx [ 21 ] - xx
[ 55 ] ; xx [ 269 ] = ( xx [ 197 ] + xx [ 201 ] ) * xx [ 21 ] ; xx [ 270 ] =
( xx [ 190 ] + xx [ 194 ] ) * xx [ 21 ] ; xx [ 271 ] = xx [ 21 ] * ( xx [ 197
] - xx [ 201 ] ) ; xx [ 272 ] = ( xx [ 40 ] + xx [ 81 ] * xx [ 81 ] ) * xx [
21 ] - xx [ 55 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 264 , xx + 46 , xx +
599 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 599 , xx + 101 , xx + 264 ) ;
xx [ 40 ] = xx [ 514 ] + xx [ 210 ] + xx [ 21 ] * xx [ 267 ] ; xx [ 67 ] = xx
[ 511 ] + xx [ 207 ] + xx [ 21 ] * xx [ 264 ] ; pm_math_Matrix3x3_xform_ra (
xx + 558 , xx + 98 , xx + 101 ) ; pm_math_Matrix3x3_xform_ra ( xx + 466 , xx
+ 112 , xx + 403 ) ; xx [ 188 ] = 1.31347511895184e-8 ; xx [ 190 ] = xx [ 188
] * xx [ 69 ] ; xx [ 194 ] = 1.291763104009796e-5 ; xx [ 197 ] = xx [ 66 ] *
xx [ 188 ] - xx [ 194 ] * xx [ 61 ] ; xx [ 201 ] = xx [ 194 ] * xx [ 69 ] ;
xx [ 407 ] = - xx [ 190 ] ; xx [ 408 ] = xx [ 197 ] ; xx [ 409 ] = xx [ 201 ]
; pm_math_Vector3_cross_ra ( xx + 118 , xx + 407 , xx + 431 ) ; xx [ 118 ] =
state [ 1 ] * state [ 1 ] ; xx [ 407 ] = - ( xx [ 193 ] * xx [ 82 ] ) ; xx [
408 ] = xx [ 82 ] * xx [ 198 ] ; xx [ 409 ] = xx [ 82 ] * xx [ 222 ] ;
pm_math_Quaternion_xform_ra ( xx + 70 , xx + 407 , xx + 443 ) ; xx [ 119 ] =
xx [ 82 ] * state [ 8 ] ; xx [ 120 ] = xx [ 82 ] * state [ 7 ] ; xx [ 193 ] =
xx [ 6 ] * xx [ 120 ] - xx [ 119 ] * xx [ 8 ] ; xx [ 198 ] = xx [ 4 ] * xx [
120 ] ; xx [ 204 ] = xx [ 4 ] * xx [ 119 ] ; xx [ 407 ] = xx [ 193 ] ; xx [
408 ] = - xx [ 198 ] ; xx [ 409 ] = - xx [ 204 ] ; pm_math_Vector3_cross_ra (
xx + 16 , xx + 407 , xx + 450 ) ; xx [ 205 ] = xx [ 119 ] + xx [ 21 ] * ( xx
[ 451 ] - xx [ 198 ] * xx [ 3 ] ) ; xx [ 407 ] = - ( xx [ 205 ] * xx [ 14 ] )
; xx [ 408 ] = ( xx [ 193 ] * xx [ 3 ] + xx [ 450 ] ) * xx [ 21 ] * xx [ 14 ]
+ xx [ 7 ] * ( xx [ 21 ] * ( xx [ 452 ] - xx [ 204 ] * xx [ 3 ] ) - xx [ 120
] ) ; xx [ 409 ] = - ( xx [ 205 ] * xx [ 7 ] ) ; pm_math_Quaternion_xform_ra
( xx + 70 , xx + 407 , xx + 450 ) ; xx [ 70 ] = - ( xx [ 41 ] * xx [ 192 ] +
xx [ 200 ] * xx [ 37 ] ) ; xx [ 71 ] = xx [ 196 ] * xx [ 41 ] - xx [ 37 ] *
xx [ 202 ] ; xx [ 72 ] = - ( xx [ 41 ] * xx [ 199 ] + xx [ 37 ] * xx [ 36 ] )
; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 70 , xx + 198 ) ; xx [ 70 ] =
xx [ 37 ] * state [ 15 ] ; xx [ 71 ] = - ( xx [ 41 ] * state [ 15 ] ) ; xx [
72 ] = xx [ 53 ] * xx [ 41 ] - xx [ 37 ] * xx [ 51 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 70 , xx + 407 ) ;
pm_math_Vector3_cross_ra ( xx + 25 , xx + 407 , xx + 453 ) ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 453 , xx + 407 ) ; xx [ 36 ] =
xx [ 101 ] + xx [ 403 ] + ( ( xx [ 190 ] * xx [ 62 ] + xx [ 431 ] ) * xx [ 21
] - xx [ 194 ] ) * xx [ 118 ] + xx [ 443 ] + xx [ 21 ] * xx [ 450 ] + xx [
198 ] + xx [ 21 ] * xx [ 407 ] ; xx [ 51 ] = xx [ 300 ] * xx [ 304 ] ; xx [
53 ] = xx [ 301 ] * xx [ 318 ] ; xx [ 73 ] = ( xx [ 51 ] - xx [ 53 ] ) * xx [
21 ] ; xx [ 74 ] = xx [ 300 ] * xx [ 300 ] ; xx [ 75 ] = ( xx [ 74 ] + xx [
301 ] * xx [ 301 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 76 ] = xx [ 73 ] * xx [ 1
] - xx [ 94 ] * xx [ 75 ] ; xx [ 77 ] = xx [ 304 ] * xx [ 318 ] ; xx [ 190 ]
= xx [ 301 ] * xx [ 300 ] ; xx [ 192 ] = xx [ 21 ] * ( xx [ 77 ] + xx [ 190 ]
) ; xx [ 193 ] = xx [ 301 ] * xx [ 304 ] ; xx [ 196 ] = xx [ 300 ] * xx [ 318
] ; xx [ 202 ] = ( xx [ 193 ] - xx [ 196 ] ) * xx [ 21 ] ; xx [ 204 ] = xx [
1 ] * xx [ 192 ] + xx [ 202 ] * xx [ 94 ] ; xx [ 205 ] = ( xx [ 74 ] + xx [
318 ] * xx [ 318 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 222 ] = xx [ 21 ] * ( xx
[ 53 ] + xx [ 51 ] ) ; xx [ 51 ] = xx [ 1 ] * xx [ 205 ] + xx [ 94 ] * xx [
222 ] ; xx [ 53 ] = xx [ 21 ] * ( xx [ 193 ] + xx [ 196 ] ) ; xx [ 193 ] = (
xx [ 74 ] + xx [ 304 ] * xx [ 304 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 74 ] = (
xx [ 190 ] - xx [ 77 ] ) * xx [ 21 ] ; xx [ 466 ] = xx [ 94 ] * xx [ 76 ] ;
xx [ 467 ] = - ( xx [ 94 ] * xx [ 204 ] ) ; xx [ 468 ] = xx [ 94 ] * xx [ 51
] ; xx [ 469 ] = - ( xx [ 94 ] * xx [ 94 ] * xx [ 53 ] + xx [ 1 ] * xx [ 1 ]
* xx [ 53 ] ) ; xx [ 470 ] = - ( xx [ 94 ] * xx [ 94 ] * xx [ 193 ] + xx [ 1
] * xx [ 1 ] * xx [ 193 ] ) ; xx [ 471 ] = - ( xx [ 94 ] * xx [ 74 ] * xx [
94 ] + xx [ 1 ] * xx [ 74 ] * xx [ 1 ] ) ; xx [ 472 ] = - ( xx [ 1 ] * xx [
76 ] ) ; xx [ 473 ] = xx [ 1 ] * xx [ 204 ] ; xx [ 474 ] = - ( xx [ 1 ] * xx
[ 51 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 466 , xx + 434 , xx + 558 ) ;
xx [ 434 ] = xx [ 75 ] ; xx [ 435 ] = xx [ 202 ] ; xx [ 436 ] = - xx [ 222 ]
; xx [ 437 ] = xx [ 53 ] ; xx [ 438 ] = xx [ 193 ] ; xx [ 439 ] = xx [ 74 ] ;
xx [ 440 ] = xx [ 73 ] ; xx [ 441 ] = - xx [ 192 ] ; xx [ 442 ] = xx [ 205 ]
; xx [ 51 ] = xx [ 416 ] * state [ 42 ] - xx [ 412 ] * state [ 40 ] ; xx [ 53
] = xx [ 416 ] * state [ 41 ] - xx [ 393 ] * state [ 40 ] ; xx [ 73 ] = xx [
51 ] * state [ 42 ] + xx [ 53 ] * state [ 41 ] ; xx [ 74 ] = xx [ 424 ] *
state [ 40 ] - xx [ 369 ] * state [ 42 ] ; xx [ 75 ] = xx [ 369 ] * state [
41 ] - xx [ 421 ] * state [ 40 ] ; xx [ 76 ] = xx [ 74 ] * state [ 42 ] - xx
[ 75 ] * state [ 41 ] ; xx [ 77 ] = xx [ 422 ] * state [ 40 ] - xx [ 406 ] *
state [ 42 ] ; xx [ 190 ] = xx [ 406 ] * state [ 41 ] - xx [ 425 ] * state [
40 ] ; xx [ 192 ] = xx [ 77 ] * state [ 42 ] - xx [ 190 ] * state [ 41 ] ; xx
[ 193 ] = xx [ 393 ] * state [ 42 ] - xx [ 412 ] * state [ 41 ] ; xx [ 196 ]
= xx [ 421 ] * state [ 42 ] - xx [ 424 ] * state [ 41 ] ; xx [ 202 ] = xx [
422 ] * state [ 41 ] - xx [ 425 ] * state [ 42 ] ; xx [ 599 ] = - xx [ 73 ] ;
xx [ 600 ] = xx [ 76 ] ; xx [ 601 ] = xx [ 192 ] ; xx [ 602 ] = xx [ 53 ] *
state [ 40 ] - xx [ 193 ] * state [ 42 ] ; xx [ 603 ] = xx [ 75 ] * state [
40 ] - xx [ 196 ] * state [ 42 ] ; xx [ 604 ] = xx [ 202 ] * state [ 42 ] +
xx [ 190 ] * state [ 40 ] ; xx [ 605 ] = xx [ 193 ] * state [ 41 ] + xx [ 51
] * state [ 40 ] ; xx [ 606 ] = xx [ 196 ] * state [ 41 ] - xx [ 74 ] * state
[ 40 ] ; xx [ 607 ] = - ( xx [ 202 ] * state [ 41 ] + xx [ 77 ] * state [ 40
] ) ; pm_math_Matrix3x3_compose_ra ( xx + 434 , xx + 599 , xx + 608 ) ; xx [
51 ] = xx [ 347 ] * xx [ 347 ] ; xx [ 53 ] = xx [ 348 ] * xx [ 349 ] ; xx [
74 ] = xx [ 347 ] * xx [ 350 ] ; xx [ 75 ] = xx [ 348 ] * xx [ 350 ] ; xx [
77 ] = xx [ 347 ] * xx [ 349 ] ; xx [ 190 ] = xx [ 349 ] * xx [ 350 ] ; xx [
193 ] = xx [ 347 ] * xx [ 348 ] ; xx [ 434 ] = ( xx [ 51 ] + xx [ 348 ] * xx
[ 348 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 435 ] = ( xx [ 53 ] + xx [ 74 ] ) *
xx [ 21 ] ; xx [ 436 ] = xx [ 21 ] * ( xx [ 75 ] - xx [ 77 ] ) ; xx [ 437 ] =
xx [ 21 ] * ( xx [ 53 ] - xx [ 74 ] ) ; xx [ 438 ] = ( xx [ 51 ] + xx [ 349 ]
* xx [ 349 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 439 ] = ( xx [ 190 ] + xx [ 193
] ) * xx [ 21 ] ; xx [ 440 ] = ( xx [ 75 ] + xx [ 77 ] ) * xx [ 21 ] ; xx [
441 ] = xx [ 21 ] * ( xx [ 190 ] - xx [ 193 ] ) ; xx [ 442 ] = ( xx [ 51 ] +
xx [ 350 ] * xx [ 350 ] ) * xx [ 21 ] - xx [ 55 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 434 , xx + 178 , xx + 599 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 599 , xx + 295 , xx + 434 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 466 , xx + 400 , xx + 178 ) ; xx [ 51 ] =
xx [ 188 ] * xx [ 304 ] ; xx [ 295 ] = xx [ 303 ] ; xx [ 296 ] = xx [ 252 ] ;
xx [ 297 ] = xx [ 318 ] ; xx [ 53 ] = xx [ 301 ] * xx [ 188 ] - xx [ 194 ] *
xx [ 318 ] ; xx [ 74 ] = xx [ 194 ] * xx [ 304 ] ; xx [ 410 ] = - xx [ 51 ] ;
xx [ 411 ] = xx [ 53 ] ; xx [ 412 ] = - xx [ 74 ] ; pm_math_Vector3_cross_ra
( xx + 295 , xx + 410 , xx + 419 ) ; xx [ 75 ] = state [ 35 ] * state [ 35 ]
; xx [ 295 ] = - ( xx [ 73 ] * xx [ 82 ] ) ; xx [ 296 ] = xx [ 82 ] * xx [ 76
] ; xx [ 297 ] = xx [ 82 ] * xx [ 192 ] ; pm_math_Quaternion_xform_ra ( xx +
332 , xx + 295 , xx + 410 ) ; xx [ 73 ] = xx [ 324 ] * xx [ 176 ] + xx [ 95 ]
* xx [ 336 ] ; xx [ 76 ] = xx [ 302 ] * xx [ 176 ] ; xx [ 77 ] = xx [ 302 ] *
xx [ 95 ] ; xx [ 295 ] = - xx [ 73 ] ; xx [ 296 ] = xx [ 76 ] ; xx [ 297 ] =
xx [ 77 ] ; pm_math_Vector3_cross_ra ( xx + 351 , xx + 295 , xx + 422 ) ; xx
[ 190 ] = xx [ 95 ] + xx [ 21 ] * ( xx [ 423 ] + xx [ 76 ] * xx [ 249 ] ) ;
xx [ 295 ] = - ( xx [ 190 ] * xx [ 94 ] ) ; xx [ 296 ] = ( xx [ 422 ] - xx [
73 ] * xx [ 249 ] ) * xx [ 21 ] * xx [ 94 ] - xx [ 1 ] * ( xx [ 21 ] * ( xx [
424 ] + xx [ 77 ] * xx [ 249 ] ) - xx [ 176 ] ) ; xx [ 297 ] = xx [ 190 ] *
xx [ 1 ] ; pm_math_Quaternion_xform_ra ( xx + 332 , xx + 295 , xx + 422 ) ;
xx [ 1 ] = 0.9610472786158162 ; xx [ 73 ] = xx [ 64 ] + xx [ 60 ] * xx [ 117
] + xx [ 58 ] * xx [ 122 ] ; xx [ 58 ] = 0.2763840231727114 ; xx [ 295 ] = xx
[ 46 ] + xx [ 52 ] ; xx [ 296 ] = xx [ 47 ] + xx [ 49 ] ; xx [ 297 ] = xx [
48 ] + xx [ 50 ] ; pm_math_Vector3_cross_ra ( xx + 295 , xx + 70 , xx + 46 )
; pm_math_Vector3_cross_ra ( xx + 25 , xx + 98 , xx + 70 ) ;
pm_math_Vector3_cross_ra ( xx + 25 , xx + 70 , xx + 295 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 42 , xx + 295 , xx + 25 ) ; xx [ 70
] = 20.0 ; xx [ 71 ] = ( xx [ 48 ] + xx [ 27 ] ) * xx [ 70 ] - xx [ 117 ] ;
xx [ 72 ] = xx [ 68 ] * xx [ 1 ] - xx [ 73 ] * xx [ 58 ] - xx [ 85 ] * xx [
71 ] ; xx [ 76 ] = xx [ 68 ] * xx [ 58 ] + xx [ 73 ] * xx [ 1 ] + xx [ 164 ]
* xx [ 71 ] ; xx [ 63 ] = xx [ 65 ] - ( xx [ 60 ] * xx [ 116 ] - xx [ 54 ] *
xx [ 115 ] ) + xx [ 59 ] * xx [ 123 ] ; xx [ 54 ] = ( xx [ 46 ] + xx [ 25 ] )
* xx [ 70 ] - xx [ 115 ] ; xx [ 25 ] = ( xx [ 47 ] + xx [ 26 ] ) * xx [ 70 ]
- xx [ 116 ] ; xx [ 26 ] = xx [ 63 ] + xx [ 37 ] * xx [ 54 ] - xx [ 41 ] * xx
[ 25 ] ; xx [ 46 ] = - xx [ 72 ] ; xx [ 47 ] = - xx [ 76 ] ; xx [ 48 ] = - xx
[ 26 ] ; solveSymmetricPosDef ( xx + 124 , xx + 46 , 3 , 1 , xx + 115 , xx +
295 ) ; xx [ 46 ] = xx [ 68 ] + xx [ 57 ] * xx [ 115 ] + xx [ 83 ] * xx [ 116
] ; xx [ 47 ] = xx [ 73 ] - xx [ 89 ] * xx [ 115 ] + xx [ 88 ] * xx [ 116 ] ;
xx [ 48 ] = xx [ 63 ] + xx [ 59 ] * xx [ 117 ] ; pm_math_Quaternion_xform_ra
( xx + 42 , xx + 46 , xx + 295 ) ; xx [ 46 ] = xx [ 54 ] + xx [ 90 ] * xx [
117 ] ; xx [ 47 ] = xx [ 25 ] - xx [ 91 ] * xx [ 117 ] ; xx [ 48 ] = xx [ 71
] - xx [ 166 ] * xx [ 115 ] + xx [ 93 ] * xx [ 116 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 46 , xx + 332 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 332 , xx + 46 ) ; xx [ 466 ] = xx [
169 ] ; xx [ 467 ] = xx [ 97 ] ; xx [ 468 ] = xx [ 104 ] ; xx [ 469 ] = xx [
225 ] ; xx [ 470 ] = xx [ 247 ] ; xx [ 471 ] = xx [ 105 ] ; xx [ 472 ] = xx [
243 ] ; xx [ 473 ] = xx [ 275 ] ; xx [ 474 ] = xx [ 216 ] ;
pm_math_Vector3_cross_ra ( xx + 22 , xx + 371 , xx + 453 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 466 , xx + 453 , xx + 371 ) ; xx [ 466 ] =
xx [ 92 ] ; xx [ 467 ] = xx [ 143 ] ; xx [ 468 ] = xx [ 182 ] ; xx [ 469 ] =
xx [ 248 ] ; xx [ 470 ] = xx [ 276 ] ; xx [ 471 ] = xx [ 220 ] ; xx [ 472 ] =
xx [ 226 ] ; xx [ 473 ] = xx [ 273 ] ; xx [ 474 ] = xx [ 250 ] ; xx [ 27 ] =
xx [ 106 ] * xx [ 14 ] + xx [ 111 ] * xx [ 7 ] ; xx [ 460 ] = - ( xx [ 14 ] *
xx [ 27 ] ) ; xx [ 461 ] = - ( xx [ 14 ] * xx [ 108 ] * xx [ 14 ] + xx [ 7 ]
* xx [ 108 ] * xx [ 7 ] ) ; xx [ 462 ] = - ( xx [ 7 ] * xx [ 27 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 460 , xx + 479 ) ; xx [ 27
] = xx [ 479 ] - ( ( xx [ 23 ] + xx [ 19 ] ) * xx [ 120 ] + ( xx [ 24 ] + xx
[ 20 ] ) * xx [ 119 ] ) ; xx [ 19 ] = xx [ 22 ] + xx [ 15 ] ; xx [ 15 ] = xx
[ 19 ] * xx [ 120 ] + xx [ 480 ] ; xx [ 20 ] = xx [ 19 ] * xx [ 119 ] + xx [
481 ] ; xx [ 22 ] = xx [ 27 ] ; xx [ 23 ] = xx [ 15 ] ; xx [ 24 ] = xx [ 20 ]
; pm_math_Matrix3x3_xform_ra ( xx + 466 , xx + 22 , xx + 460 ) ; xx [ 19 ] =
xx [ 371 ] + xx [ 460 ] ; xx [ 37 ] = xx [ 33 ] + xx [ 295 ] + xx [ 46 ] + xx
[ 19 ] ; xx [ 41 ] = xx [ 372 ] + xx [ 461 ] ; xx [ 60 ] = xx [ 34 ] + xx [
296 ] + xx [ 47 ] + xx [ 41 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
466 , xx + 453 , xx + 479 ) ; xx [ 466 ] = xx [ 251 ] + xx [ 255 ] ; xx [ 467
] = xx [ 256 ] ; xx [ 468 ] = xx [ 257 ] ; xx [ 469 ] = xx [ 258 ] ; xx [ 470
] = xx [ 242 ] ; xx [ 471 ] = xx [ 260 ] ; xx [ 472 ] = xx [ 261 ] ; xx [ 473
] = xx [ 262 ] ; xx [ 474 ] = xx [ 274 ] ; pm_math_Matrix3x3_xform_ra ( xx +
466 , xx + 22 , xx + 255 ) ; xx [ 22 ] = xx [ 481 ] + xx [ 257 ] ; xx [ 23 ]
= xx [ 334 ] + xx [ 22 ] ; xx [ 24 ] = xx [ 373 ] + xx [ 462 ] ; xx [ 46 ] =
xx [ 35 ] + xx [ 297 ] + xx [ 48 ] + xx [ 24 ] ; xx [ 47 ] = xx [ 480 ] + xx
[ 256 ] ; xx [ 48 ] = xx [ 333 ] + xx [ 47 ] ; xx [ 258 ] = - xx [ 37 ] ; xx
[ 259 ] = - ( xx [ 60 ] - xx [ 23 ] * xx [ 82 ] ) ; xx [ 260 ] = - ( xx [ 46
] + xx [ 48 ] * xx [ 82 ] ) ; solveSymmetricPosDef ( xx + 277 , xx + 258 , 3
, 1 , xx + 273 , xx + 295 ) ; xx [ 258 ] = xx [ 37 ] + xx [ 169 ] * xx [ 273
] + xx [ 227 ] * xx [ 274 ] + xx [ 240 ] * xx [ 275 ] ; xx [ 259 ] = xx [ 60
] + xx [ 273 ] * xx [ 97 ] + xx [ 244 ] * xx [ 274 ] + xx [ 241 ] * xx [ 275
] ; xx [ 260 ] = xx [ 46 ] + xx [ 273 ] * xx [ 104 ] + xx [ 107 ] * xx [ 274
] + xx [ 224 ] * xx [ 275 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 258
, xx + 295 ) ; xx [ 37 ] = xx [ 479 ] + xx [ 255 ] ; xx [ 255 ] = xx [ 332 ]
+ xx [ 37 ] + xx [ 273 ] * xx [ 92 ] + xx [ 168 ] * xx [ 274 ] + xx [ 183 ] *
xx [ 275 ] ; xx [ 256 ] = xx [ 48 ] + xx [ 273 ] * xx [ 248 ] + xx [ 184 ] *
xx [ 274 ] + xx [ 253 ] * xx [ 275 ] ; xx [ 257 ] = xx [ 23 ] + xx [ 273 ] *
xx [ 226 ] + xx [ 263 ] * xx [ 274 ] + xx [ 245 ] * xx [ 275 ] ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 255 , xx + 258 ) ;
pm_math_Vector3_cross_ra ( xx + 112 , xx + 258 , xx + 255 ) ; xx [ 23 ] = xx
[ 137 ] * state [ 1 ] ; xx [ 46 ] = xx [ 23 ] * xx [ 7 ] ; xx [ 7 ] = xx [
325 ] - xx [ 370 ] ; xx [ 48 ] = xx [ 23 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 319
] - xx [ 368 ] ; xx [ 23 ] = xx [ 46 ] * xx [ 7 ] + xx [ 48 ] * xx [ 14 ] ;
xx [ 60 ] = xx [ 323 ] - xx [ 364 ] ; xx [ 64 ] = xx [ 317 ] - xx [ 362 ] ;
xx [ 65 ] = xx [ 46 ] * xx [ 60 ] + xx [ 48 ] * xx [ 64 ] ; xx [ 70 ] = xx [
360 ] * xx [ 46 ] + xx [ 354 ] * xx [ 48 ] ; xx [ 260 ] = ( xx [ 13 ] * xx [
14 ] - xx [ 5 ] * xx [ 64 ] + xx [ 137 ] * xx [ 356 ] ) / xx [ 234 ] ; xx [
261 ] = xx [ 233 ] / xx [ 234 ] ; xx [ 262 ] = ( xx [ 13 ] * xx [ 7 ] - xx [
5 ] * xx [ 60 ] + xx [ 137 ] * xx [ 358 ] ) / xx [ 234 ] ; xx [ 7 ] = xx [ 66
] * xx [ 96 ] ; xx [ 14 ] = xx [ 96 ] * xx [ 61 ] ; xx [ 60 ] = ( xx [ 7 ] *
xx [ 69 ] - xx [ 62 ] * xx [ 14 ] ) * xx [ 21 ] ; xx [ 64 ] = ( xx [ 14 ] *
xx [ 61 ] + xx [ 66 ] * xx [ 7 ] ) * xx [ 21 ] ; xx [ 61 ] = xx [ 21 ] * ( xx
[ 69 ] * xx [ 14 ] + xx [ 7 ] * xx [ 62 ] ) ; xx [ 317 ] = xx [ 60 ] ; xx [
318 ] = xx [ 96 ] - xx [ 64 ] ; xx [ 319 ] = xx [ 61 ] ; xx [ 7 ] =
pm_math_Vector3_dot_ra ( xx + 260 , xx + 317 ) ; xx [ 14 ] = ( input [ 0 ] -
( ( xx [ 297 ] + xx [ 257 ] - xx [ 23 ] ) * xx [ 13 ] - ( xx [ 295 ] + xx [
255 ] - xx [ 65 ] ) * xx [ 5 ] + ( xx [ 259 ] - xx [ 70 ] ) * xx [ 137 ] ) )
/ xx [ 234 ] - xx [ 7 ] ; xx [ 66 ] = xx [ 13 ] * xx [ 14 ] ; xx [ 69 ] = xx
[ 6 ] * xx [ 66 ] ; xx [ 77 ] = xx [ 5 ] * xx [ 14 ] ; xx [ 85 ] = xx [ 4 ] *
xx [ 66 ] - xx [ 77 ] * xx [ 8 ] ; xx [ 94 ] = xx [ 6 ] * xx [ 77 ] ; xx [
255 ] = - xx [ 69 ] ; xx [ 256 ] = xx [ 85 ] ; xx [ 257 ] = - xx [ 94 ] ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 255 , xx + 258 ) ; xx [ 95 ] = ( xx
[ 69 ] * xx [ 3 ] + xx [ 258 ] ) * xx [ 21 ] - xx [ 77 ] ; xx [ 69 ] = xx [
21 ] * ( xx [ 259 ] - xx [ 85 ] * xx [ 3 ] ) ; xx [ 85 ] = xx [ 66 ] + xx [
21 ] * ( xx [ 260 ] + xx [ 94 ] * xx [ 3 ] ) ; xx [ 255 ] = xx [ 95 ] ; xx [
256 ] = xx [ 69 ] ; xx [ 257 ] = xx [ 85 ] ; xx [ 94 ] = xx [ 60 ] - xx [ 48
] ; xx [ 48 ] = xx [ 61 ] - xx [ 46 ] ; xx [ 258 ] = xx [ 94 ] - xx [ 108 ] *
xx [ 66 ] ; xx [ 259 ] = xx [ 137 ] * xx [ 14 ] - xx [ 64 ] + xx [ 106 ] * xx
[ 66 ] + xx [ 111 ] * xx [ 77 ] + xx [ 96 ] ; xx [ 260 ] = xx [ 48 ] - xx [
108 ] * xx [ 77 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 258 ,
xx + 295 ) ; xx [ 46 ] = xx [ 273 ] - ( pm_math_Vector3_dot_ra ( xx + 235 ,
xx + 255 ) + pm_math_Vector3_dot_ra ( xx + 308 , xx + 295 ) ) ; xx [ 60 ] =
xx [ 274 ] - ( pm_math_Vector3_dot_ra ( xx + 311 , xx + 255 ) +
pm_math_Vector3_dot_ra ( xx + 320 , xx + 295 ) ) ; xx [ 61 ] = xx [ 275 ] - (
pm_math_Vector3_dot_ra ( xx + 344 , xx + 255 ) + pm_math_Vector3_dot_ra ( xx
+ 326 , xx + 295 ) ) ; xx [ 255 ] = xx [ 95 ] + xx [ 46 ] + xx [ 453 ] ; xx [
256 ] = xx [ 69 ] + xx [ 60 ] + xx [ 454 ] ; xx [ 257 ] = xx [ 85 ] + xx [ 61
] + xx [ 455 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42 , xx + 255 , xx
+ 258 ) ; pm_math_Vector3_cross_ra ( xx + 255 , xx + 98 , xx + 273 ) ; xx [
255 ] = xx [ 295 ] + xx [ 27 ] + xx [ 273 ] ; xx [ 256 ] = xx [ 296 ] + xx [
82 ] * xx [ 61 ] + xx [ 15 ] + xx [ 274 ] ; xx [ 257 ] = xx [ 297 ] - xx [ 82
] * xx [ 60 ] + xx [ 20 ] + xx [ 275 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 42 , xx + 255 , xx + 273 ) ; xx [ 66 ] = xx [ 115 ] - ( xx [ 187 ] * xx
[ 258 ] + xx [ 217 ] * xx [ 259 ] - xx [ 219 ] * xx [ 275 ] ) ; xx [ 69 ] =
xx [ 116 ] - ( xx [ 221 ] * xx [ 258 ] + xx [ 223 ] * xx [ 259 ] + xx [ 229 ]
* xx [ 275 ] ) ; xx [ 77 ] = xx [ 117 ] - ( xx [ 238 ] * xx [ 260 ] + xx [
239 ] * xx [ 273 ] - xx [ 246 ] * xx [ 274 ] ) ; xx [ 85 ] = xx [ 13 ] * xx [
189 ] ; xx [ 95 ] = xx [ 5 ] * xx [ 189 ] ; xx [ 105 ] = xx [ 95 ] * xx [ 336
] - xx [ 302 ] * xx [ 85 ] ; xx [ 115 ] = xx [ 324 ] * xx [ 95 ] ; xx [ 255 ]
= xx [ 324 ] * xx [ 85 ] ; xx [ 256 ] = xx [ 105 ] ; xx [ 257 ] = - xx [ 115
] ; pm_math_Vector3_cross_ra ( xx + 351 , xx + 255 , xx + 258 ) ; xx [ 116 ]
= xx [ 191 ] - xx [ 145 ] ; xx [ 117 ] = xx [ 146 ] - xx [ 254 ] ; xx [ 190 ]
= xx [ 116 ] - xx [ 366 ] * xx [ 85 ] ; xx [ 191 ] = xx [ 137 ] * xx [ 189 ]
- xx [ 218 ] + xx [ 374 ] * xx [ 85 ] - xx [ 376 ] * xx [ 95 ] + xx [ 96 ] ;
xx [ 192 ] = xx [ 117 ] + xx [ 366 ] * xx [ 95 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 337 , xx + 190 , xx + 254 ) ; xx [
95 ] = xx [ 330 ] - ( xx [ 413 ] * ( xx [ 259 ] - xx [ 105 ] * xx [ 249 ] ) -
xx [ 415 ] * xx [ 256 ] ) ; xx [ 105 ] = xx [ 331 ] - ( ( xx [ 85 ] + xx [ 21
] * ( xx [ 260 ] + xx [ 115 ] * xx [ 249 ] ) ) * xx [ 395 ] + xx [ 415 ] * xx
[ 255 ] ) ; xx [ 85 ] = xx [ 515 ] + xx [ 211 ] + xx [ 21 ] * xx [ 268 ] ; xx
[ 115 ] = xx [ 512 ] + xx [ 208 ] + xx [ 21 ] * xx [ 265 ] ; xx [ 119 ] = xx
[ 102 ] + xx [ 404 ] + ( xx [ 432 ] - xx [ 62 ] * xx [ 197 ] ) * xx [ 21 ] *
xx [ 118 ] + xx [ 444 ] + xx [ 21 ] * xx [ 451 ] + xx [ 199 ] + xx [ 21 ] *
xx [ 408 ] ; xx [ 120 ] = xx [ 516 ] + xx [ 212 ] + xx [ 21 ] * xx [ 269 ] ;
xx [ 143 ] = xx [ 513 ] + xx [ 209 ] + xx [ 21 ] * xx [ 266 ] ; xx [ 101 ] =
xx [ 103 ] + xx [ 405 ] + ( xx [ 21 ] * ( xx [ 433 ] - xx [ 201 ] * xx [ 62 ]
) - xx [ 188 ] ) * xx [ 118 ] + xx [ 445 ] + xx [ 21 ] * xx [ 452 ] + xx [
200 ] + xx [ 21 ] * xx [ 409 ] ; xx [ 62 ] = xx [ 13 ] * state [ 44 ] ; xx [
102 ] = xx [ 635 ] * xx [ 62 ] ; xx [ 103 ] = xx [ 5 ] * state [ 44 ] ; xx [
118 ] = xx [ 627 ] * xx [ 62 ] - xx [ 103 ] * xx [ 637 ] ; xx [ 145 ] = xx [
635 ] * xx [ 103 ] ; xx [ 190 ] = - xx [ 102 ] ; xx [ 191 ] = xx [ 118 ] ; xx
[ 192 ] = - xx [ 145 ] ; pm_math_Vector3_cross_ra ( xx + 646 , xx + 190 , xx
+ 196 ) ; xx [ 146 ] = ( xx [ 102 ] * xx [ 623 ] + xx [ 196 ] ) * xx [ 21 ] -
xx [ 103 ] ; xx [ 102 ] = xx [ 146 ] + state [ 49 ] ; xx [ 164 ] = xx [ 21 ]
* ( xx [ 197 ] - xx [ 118 ] * xx [ 623 ] ) ; xx [ 118 ] = xx [ 164 ] + state
[ 50 ] ; xx [ 176 ] = xx [ 62 ] + xx [ 21 ] * ( xx [ 198 ] + xx [ 145 ] * xx
[ 623 ] ) ; xx [ 145 ] = xx [ 176 ] + state [ 51 ] ; xx [ 190 ] = xx [ 102 ]
; xx [ 191 ] = xx [ 118 ] ; xx [ 192 ] = xx [ 145 ] ; xx [ 196 ] = xx [ 102 ]
* xx [ 28 ] ; xx [ 197 ] = xx [ 118 ] * xx [ 29 ] ; xx [ 198 ] = xx [ 145 ] *
xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 190 , xx + 196 , xx + 199 ) ; xx
[ 196 ] = xx [ 146 ] ; xx [ 197 ] = xx [ 164 ] ; xx [ 198 ] = xx [ 176 ] ; xx
[ 207 ] = state [ 49 ] ; xx [ 208 ] = state [ 50 ] ; xx [ 209 ] = state [ 51
] ; pm_math_Vector3_cross_ra ( xx + 196 , xx + 207 , xx + 210 ) ; xx [ 182 ]
= xx [ 199 ] + xx [ 28 ] * xx [ 210 ] ; xx [ 193 ] = - xx [ 182 ] ; xx [ 202
] = xx [ 200 ] + xx [ 29 ] * xx [ 211 ] ; xx [ 204 ] = xx [ 146 ] + xx [ 102
] ; xx [ 102 ] = xx [ 82 ] * state [ 51 ] ; xx [ 146 ] = xx [ 661 ] * xx [ 62
] + xx [ 663 ] * xx [ 103 ] ; xx [ 213 ] = - ( xx [ 62 ] * xx [ 146 ] ) ; xx
[ 214 ] = - ( xx [ 62 ] * xx [ 658 ] * xx [ 62 ] + xx [ 103 ] * xx [ 658 ] *
xx [ 103 ] ) ; xx [ 215 ] = - ( xx [ 103 ] * xx [ 146 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 638 , xx + 213 , xx + 254 ) ; xx [
146 ] = ( xx [ 204 ] * xx [ 102 ] + xx [ 256 ] ) * xx [ 251 ] ; xx [ 205 ] =
xx [ 202 ] - xx [ 82 ] * xx [ 146 ] ; xx [ 199 ] = xx [ 201 ] + xx [ 29 ] *
xx [ 212 ] ; xx [ 200 ] = xx [ 82 ] * state [ 50 ] ; xx [ 201 ] = ( xx [ 204
] * xx [ 200 ] + xx [ 255 ] ) * xx [ 251 ] ; xx [ 204 ] = xx [ 199 ] + xx [
82 ] * xx [ 201 ] ; xx [ 213 ] = xx [ 193 ] ; xx [ 214 ] = - xx [ 205 ] ; xx
[ 215 ] = - xx [ 204 ] ; solveSymmetricPosDef ( xx + 383 , xx + 213 , 3 , 1 ,
xx + 257 , xx + 260 ) ; xx [ 213 ] = xx [ 182 ] + xx [ 28 ] * xx [ 257 ] ; xx
[ 214 ] = xx [ 202 ] + xx [ 29 ] * xx [ 258 ] ; xx [ 215 ] = xx [ 199 ] + xx
[ 29 ] * xx [ 259 ] ; pm_math_Quaternion_xform_ra ( xx + 638 , xx + 213 , xx
+ 260 ) ; xx [ 213 ] = xx [ 251 ] * ( xx [ 254 ] - ( ( xx [ 164 ] + xx [ 118
] ) * xx [ 200 ] + ( xx [ 176 ] + xx [ 145 ] ) * xx [ 102 ] ) ) ; xx [ 214 ]
= xx [ 213 ] ; xx [ 215 ] = xx [ 201 ] + xx [ 361 ] * xx [ 259 ] ; xx [ 216 ]
= xx [ 146 ] - xx [ 361 ] * xx [ 258 ] ; pm_math_Quaternion_xform_ra ( xx +
638 , xx + 214 , xx + 254 ) ; pm_math_Vector3_cross_ra ( xx + 678 , xx + 254
, xx + 214 ) ; xx [ 118 ] = xx [ 137 ] * state [ 44 ] ; xx [ 145 ] = xx [ 118
] * xx [ 62 ] ; xx [ 164 ] = xx [ 653 ] - xx [ 733 ] ; xx [ 176 ] = xx [ 708
] + xx [ 735 ] ; xx [ 220 ] = xx [ 118 ] * xx [ 103 ] ; xx [ 118 ] = xx [ 145
] * xx [ 164 ] - xx [ 176 ] * xx [ 220 ] ; xx [ 215 ] = xx [ 699 ] + xx [ 727
] ; xx [ 222 ] = xx [ 707 ] - xx [ 729 ] ; xx [ 225 ] = xx [ 215 ] * xx [ 145
] - xx [ 220 ] * xx [ 222 ] ; xx [ 228 ] = xx [ 743 ] * xx [ 220 ] + xx [ 737
] * xx [ 145 ] ; xx [ 264 ] = ( xx [ 13 ] * xx [ 164 ] + xx [ 215 ] * xx [ 5
] + xx [ 137 ] * xx [ 739 ] ) / xx [ 702 ] ; xx [ 265 ] = xx [ 701 ] / xx [
702 ] ; xx [ 266 ] = ( xx [ 137 ] * xx [ 741 ] - ( xx [ 5 ] * xx [ 222 ] + xx
[ 176 ] * xx [ 13 ] ) ) / xx [ 702 ] ; xx [ 164 ] = xx [ 96 ] * xx [ 630 ] ;
xx [ 176 ] = xx [ 626 ] * xx [ 96 ] ; xx [ 215 ] = ( xx [ 625 ] * xx [ 164 ]
- xx [ 176 ] * xx [ 629 ] ) * xx [ 21 ] ; xx [ 222 ] = ( xx [ 164 ] * xx [
630 ] + xx [ 626 ] * xx [ 176 ] ) * xx [ 21 ] ; xx [ 230 ] = xx [ 21 ] * ( xx
[ 629 ] * xx [ 164 ] + xx [ 176 ] * xx [ 625 ] ) ; xx [ 267 ] = xx [ 215 ] ;
xx [ 268 ] = xx [ 96 ] - xx [ 222 ] ; xx [ 269 ] = xx [ 230 ] ; xx [ 164 ] =
pm_math_Vector3_dot_ra ( xx + 264 , xx + 267 ) ; xx [ 176 ] = ( input [ 4 ] -
( xx [ 13 ] * ( xx [ 262 ] + xx [ 216 ] - xx [ 118 ] ) - ( xx [ 260 ] + xx [
214 ] + xx [ 225 ] ) * xx [ 5 ] + ( xx [ 255 ] - xx [ 228 ] ) * xx [ 137 ] )
) / xx [ 702 ] - xx [ 164 ] ; xx [ 214 ] = xx [ 625 ] * xx [ 629 ] ; xx [ 216
] = xx [ 626 ] * xx [ 630 ] ; xx [ 231 ] = ( xx [ 214 ] - xx [ 216 ] ) * xx [
21 ] ; xx [ 233 ] = xx [ 625 ] * xx [ 625 ] ; xx [ 242 ] = ( xx [ 233 ] + xx
[ 626 ] * xx [ 626 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 243 ] = xx [ 231 ] * xx
[ 103 ] + xx [ 62 ] * xx [ 242 ] ; xx [ 247 ] = xx [ 629 ] * xx [ 630 ] ; xx
[ 250 ] = xx [ 626 ] * xx [ 625 ] ; xx [ 252 ] = xx [ 21 ] * ( xx [ 247 ] +
xx [ 250 ] ) ; xx [ 254 ] = xx [ 625 ] * xx [ 630 ] ; xx [ 255 ] = xx [ 626 ]
* xx [ 629 ] ; xx [ 256 ] = ( xx [ 254 ] - xx [ 255 ] ) * xx [ 21 ] ; xx [
257 ] = xx [ 103 ] * xx [ 252 ] + xx [ 256 ] * xx [ 62 ] ; xx [ 260 ] = xx [
21 ] * ( xx [ 216 ] + xx [ 214 ] ) ; xx [ 214 ] = ( xx [ 233 ] + xx [ 630 ] *
xx [ 630 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 216 ] = xx [ 62 ] * xx [ 260 ] -
xx [ 103 ] * xx [ 214 ] ; xx [ 261 ] = xx [ 21 ] * ( xx [ 255 ] + xx [ 254 ]
) ; xx [ 254 ] = ( xx [ 233 ] + xx [ 629 ] * xx [ 629 ] ) * xx [ 21 ] - xx [
55 ] ; xx [ 233 ] = ( xx [ 247 ] - xx [ 250 ] ) * xx [ 21 ] ; xx [ 264 ] = -
( xx [ 62 ] * xx [ 243 ] ) ; xx [ 265 ] = - ( xx [ 62 ] * xx [ 257 ] ) ; xx [
266 ] = xx [ 62 ] * xx [ 216 ] ; xx [ 267 ] = xx [ 62 ] * xx [ 62 ] * xx [
261 ] + xx [ 103 ] * xx [ 103 ] * xx [ 261 ] ; xx [ 268 ] = - ( xx [ 62 ] *
xx [ 62 ] * xx [ 254 ] + xx [ 103 ] * xx [ 103 ] * xx [ 254 ] ) ; xx [ 269 ]
= - ( xx [ 62 ] * xx [ 233 ] * xx [ 62 ] + xx [ 103 ] * xx [ 233 ] * xx [ 103
] ) ; xx [ 270 ] = - ( xx [ 103 ] * xx [ 243 ] ) ; xx [ 271 ] = - ( xx [ 103
] * xx [ 257 ] ) ; xx [ 272 ] = xx [ 103 ] * xx [ 216 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 264 , xx + 709 , xx + 437 ) ; xx [ 466 ]
= xx [ 242 ] ; xx [ 467 ] = xx [ 256 ] ; xx [ 468 ] = - xx [ 260 ] ; xx [ 469
] = - xx [ 261 ] ; xx [ 470 ] = xx [ 254 ] ; xx [ 471 ] = xx [ 233 ] ; xx [
472 ] = xx [ 231 ] ; xx [ 473 ] = xx [ 252 ] ; xx [ 474 ] = xx [ 214 ] ; xx [
214 ] = xx [ 692 ] * state [ 51 ] + xx [ 691 ] * state [ 49 ] ; xx [ 216 ] =
xx [ 692 ] * state [ 50 ] - xx [ 697 ] * state [ 49 ] ; xx [ 231 ] = xx [ 214
] * state [ 51 ] + xx [ 216 ] * state [ 50 ] ; xx [ 233 ] = xx [ 700 ] *
state [ 49 ] - xx [ 694 ] * state [ 51 ] ; xx [ 242 ] = xx [ 694 ] * state [
50 ] - xx [ 652 ] * state [ 49 ] ; xx [ 243 ] = xx [ 233 ] * state [ 51 ] -
xx [ 242 ] * state [ 50 ] ; xx [ 247 ] = xx [ 674 ] * state [ 49 ] - xx [ 688
] * state [ 51 ] ; xx [ 250 ] = xx [ 688 ] * state [ 50 ] + xx [ 660 ] *
state [ 49 ] ; xx [ 252 ] = xx [ 247 ] * state [ 51 ] - xx [ 250 ] * state [
50 ] ; xx [ 254 ] = xx [ 697 ] * state [ 51 ] + xx [ 691 ] * state [ 50 ] ;
xx [ 255 ] = xx [ 652 ] * state [ 51 ] - xx [ 700 ] * state [ 50 ] ; xx [ 256
] = xx [ 660 ] * state [ 51 ] + xx [ 674 ] * state [ 50 ] ; xx [ 511 ] = - xx
[ 231 ] ; xx [ 512 ] = xx [ 243 ] ; xx [ 513 ] = xx [ 252 ] ; xx [ 514 ] = xx
[ 216 ] * state [ 49 ] - xx [ 254 ] * state [ 51 ] ; xx [ 515 ] = xx [ 242 ]
* state [ 49 ] - xx [ 255 ] * state [ 51 ] ; xx [ 516 ] = xx [ 256 ] * state
[ 51 ] + xx [ 250 ] * state [ 49 ] ; xx [ 517 ] = xx [ 254 ] * state [ 50 ] +
xx [ 214 ] * state [ 49 ] ; xx [ 518 ] = xx [ 255 ] * state [ 50 ] - xx [ 233
] * state [ 49 ] ; xx [ 519 ] = - ( xx [ 256 ] * state [ 50 ] + xx [ 247 ] *
state [ 49 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 466 , xx + 511 , xx +
599 ) ; xx [ 214 ] = xx [ 642 ] * xx [ 642 ] ; xx [ 216 ] = xx [ 643 ] * xx [
644 ] ; xx [ 233 ] = xx [ 642 ] * xx [ 645 ] ; xx [ 242 ] = xx [ 643 ] * xx [
645 ] ; xx [ 247 ] = xx [ 642 ] * xx [ 644 ] ; xx [ 250 ] = xx [ 644 ] * xx [
645 ] ; xx [ 254 ] = xx [ 642 ] * xx [ 643 ] ; xx [ 466 ] = ( xx [ 214 ] + xx
[ 643 ] * xx [ 643 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 467 ] = ( xx [ 216 ] +
xx [ 233 ] ) * xx [ 21 ] ; xx [ 468 ] = xx [ 21 ] * ( xx [ 242 ] - xx [ 247 ]
) ; xx [ 469 ] = xx [ 21 ] * ( xx [ 216 ] - xx [ 233 ] ) ; xx [ 470 ] = ( xx
[ 214 ] + xx [ 644 ] * xx [ 644 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 471 ] = (
xx [ 250 ] + xx [ 254 ] ) * xx [ 21 ] ; xx [ 472 ] = ( xx [ 242 ] + xx [ 247
] ) * xx [ 21 ] ; xx [ 473 ] = xx [ 21 ] * ( xx [ 250 ] - xx [ 254 ] ) ; xx [
474 ] = ( xx [ 214 ] + xx [ 645 ] * xx [ 645 ] ) * xx [ 21 ] - xx [ 55 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 466 , xx + 196 , xx + 511 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 511 , xx + 207 , xx + 466 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 264 , xx + 678 , xx + 196 ) ; xx [ 207 ] =
xx [ 626 ] ; xx [ 208 ] = xx [ 624 ] ; xx [ 209 ] = xx [ 622 ] ; xx [ 214 ] =
xx [ 188 ] * xx [ 629 ] ; xx [ 216 ] = xx [ 194 ] * xx [ 630 ] + xx [ 626 ] *
xx [ 188 ] ; xx [ 233 ] = xx [ 194 ] * xx [ 629 ] ; xx [ 254 ] = xx [ 214 ] ;
xx [ 255 ] = xx [ 216 ] ; xx [ 256 ] = - xx [ 233 ] ;
pm_math_Vector3_cross_ra ( xx + 207 , xx + 254 , xx + 260 ) ; xx [ 207 ] =
state [ 44 ] * state [ 44 ] ; xx [ 254 ] = - ( xx [ 231 ] * xx [ 82 ] ) ; xx
[ 255 ] = xx [ 82 ] * xx [ 243 ] ; xx [ 256 ] = xx [ 82 ] * xx [ 252 ] ;
pm_math_Quaternion_xform_ra ( xx + 631 , xx + 254 , xx + 264 ) ; xx [ 208 ] =
xx [ 635 ] * xx [ 200 ] - xx [ 102 ] * xx [ 637 ] ; xx [ 209 ] = xx [ 627 ] *
xx [ 200 ] ; xx [ 231 ] = xx [ 627 ] * xx [ 102 ] ; xx [ 254 ] = xx [ 208 ] ;
xx [ 255 ] = - xx [ 209 ] ; xx [ 256 ] = - xx [ 231 ] ;
pm_math_Vector3_cross_ra ( xx + 646 , xx + 254 , xx + 267 ) ; xx [ 242 ] = xx
[ 102 ] + xx [ 21 ] * ( xx [ 268 ] - xx [ 209 ] * xx [ 623 ] ) ; xx [ 254 ] =
- ( xx [ 242 ] * xx [ 62 ] ) ; xx [ 255 ] = ( xx [ 208 ] * xx [ 623 ] + xx [
267 ] ) * xx [ 21 ] * xx [ 62 ] + xx [ 103 ] * ( xx [ 21 ] * ( xx [ 269 ] -
xx [ 231 ] * xx [ 623 ] ) - xx [ 200 ] ) ; xx [ 256 ] = - ( xx [ 242 ] * xx [
103 ] ) ; pm_math_Quaternion_xform_ra ( xx + 631 , xx + 254 , xx + 267 ) ; xx
[ 62 ] = xx [ 13 ] * xx [ 176 ] ; xx [ 102 ] = xx [ 5 ] * xx [ 176 ] ; xx [
103 ] = xx [ 627 ] * xx [ 62 ] - xx [ 102 ] * xx [ 637 ] ; xx [ 200 ] = xx [
635 ] * xx [ 102 ] ; xx [ 254 ] = - ( xx [ 635 ] * xx [ 62 ] ) ; xx [ 255 ] =
xx [ 103 ] ; xx [ 256 ] = - xx [ 200 ] ; pm_math_Vector3_cross_ra ( xx + 646
, xx + 254 , xx + 270 ) ; xx [ 208 ] = xx [ 215 ] - xx [ 145 ] ; xx [ 145 ] =
xx [ 230 ] - xx [ 220 ] ; xx [ 254 ] = xx [ 208 ] - xx [ 658 ] * xx [ 62 ] ;
xx [ 255 ] = xx [ 137 ] * xx [ 176 ] - xx [ 222 ] + xx [ 661 ] * xx [ 62 ] +
xx [ 663 ] * xx [ 102 ] + xx [ 96 ] ; xx [ 256 ] = xx [ 145 ] - xx [ 658 ] *
xx [ 102 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 638 , xx + 254 , xx +
273 ) ; xx [ 102 ] = xx [ 258 ] - ( xx [ 413 ] * ( xx [ 271 ] - xx [ 103 ] *
xx [ 623 ] ) - xx [ 415 ] * xx [ 275 ] ) ; xx [ 103 ] = xx [ 259 ] - ( ( xx [
62 ] + xx [ 21 ] * ( xx [ 272 ] + xx [ 200 ] * xx [ 623 ] ) ) * xx [ 395 ] +
xx [ 415 ] * xx [ 274 ] ) ; xx [ 62 ] = xx [ 5 ] * state [ 53 ] ; xx [ 200 ]
= xx [ 13 ] * state [ 53 ] ; xx [ 209 ] = xx [ 745 ] * xx [ 200 ] ; xx [ 215
] = xx [ 62 ] * xx [ 746 ] - xx [ 738 ] * xx [ 200 ] ; xx [ 220 ] = xx [ 745
] * xx [ 62 ] ; xx [ 254 ] = xx [ 209 ] ; xx [ 255 ] = xx [ 215 ] ; xx [ 256
] = - xx [ 220 ] ; pm_math_Vector3_cross_ra ( xx + 761 , xx + 254 , xx + 257
) ; xx [ 230 ] = xx [ 62 ] + ( xx [ 257 ] - xx [ 209 ] * xx [ 736 ] ) * xx [
21 ] ; xx [ 209 ] = xx [ 230 ] + state [ 58 ] ; xx [ 231 ] = xx [ 21 ] * ( xx
[ 258 ] - xx [ 215 ] * xx [ 736 ] ) ; xx [ 215 ] = xx [ 231 ] + state [ 59 ]
; xx [ 242 ] = xx [ 200 ] + xx [ 21 ] * ( xx [ 259 ] + xx [ 220 ] * xx [ 736
] ) ; xx [ 220 ] = xx [ 242 ] + state [ 60 ] ; xx [ 254 ] = xx [ 209 ] ; xx [
255 ] = xx [ 215 ] ; xx [ 256 ] = xx [ 220 ] ; xx [ 257 ] = xx [ 209 ] * xx [
28 ] ; xx [ 258 ] = xx [ 215 ] * xx [ 29 ] ; xx [ 259 ] = xx [ 220 ] * xx [
29 ] ; pm_math_Vector3_cross_ra ( xx + 254 , xx + 257 , xx + 270 ) ; xx [ 257
] = xx [ 230 ] ; xx [ 258 ] = xx [ 231 ] ; xx [ 259 ] = xx [ 242 ] ; xx [ 273
] = state [ 58 ] ; xx [ 274 ] = state [ 59 ] ; xx [ 275 ] = state [ 60 ] ;
pm_math_Vector3_cross_ra ( xx + 257 , xx + 273 , xx + 295 ) ; xx [ 243 ] = xx
[ 270 ] + xx [ 28 ] * xx [ 295 ] ; xx [ 247 ] = - xx [ 243 ] ; xx [ 250 ] =
xx [ 271 ] + xx [ 29 ] * xx [ 296 ] ; xx [ 252 ] = xx [ 230 ] + xx [ 209 ] ;
xx [ 209 ] = xx [ 82 ] * state [ 60 ] ; xx [ 230 ] = xx [ 778 ] * xx [ 200 ]
- xx [ 780 ] * xx [ 62 ] ; xx [ 317 ] = - ( xx [ 200 ] * xx [ 230 ] ) ; xx [
318 ] = - ( xx [ 200 ] * xx [ 775 ] * xx [ 200 ] + xx [ 62 ] * xx [ 775 ] *
xx [ 62 ] ) ; xx [ 319 ] = xx [ 62 ] * xx [ 230 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 753 , xx + 317 , xx + 329 ) ; xx [
230 ] = ( xx [ 252 ] * xx [ 209 ] + xx [ 331 ] ) * xx [ 251 ] ; xx [ 276 ] =
xx [ 250 ] - xx [ 82 ] * xx [ 230 ] ; xx [ 270 ] = xx [ 272 ] + xx [ 29 ] *
xx [ 297 ] ; xx [ 271 ] = xx [ 82 ] * state [ 59 ] ; xx [ 272 ] = ( xx [ 252
] * xx [ 271 ] + xx [ 330 ] ) * xx [ 251 ] ; xx [ 252 ] = xx [ 270 ] + xx [
82 ] * xx [ 272 ] ; xx [ 317 ] = xx [ 247 ] ; xx [ 318 ] = - xx [ 276 ] ; xx
[ 319 ] = - xx [ 252 ] ; solveSymmetricPosDef ( xx + 383 , xx + 317 , 3 , 1 ,
xx + 332 , xx + 356 ) ; xx [ 317 ] = xx [ 243 ] + xx [ 28 ] * xx [ 332 ] ; xx
[ 318 ] = xx [ 250 ] + xx [ 29 ] * xx [ 333 ] ; xx [ 319 ] = xx [ 270 ] + xx
[ 29 ] * xx [ 334 ] ; pm_math_Quaternion_xform_ra ( xx + 753 , xx + 317 , xx
+ 356 ) ; xx [ 286 ] = xx [ 251 ] * ( xx [ 329 ] - ( ( xx [ 231 ] + xx [ 215
] ) * xx [ 271 ] + ( xx [ 242 ] + xx [ 220 ] ) * xx [ 209 ] ) ) ; xx [ 317 ]
= xx [ 286 ] ; xx [ 318 ] = xx [ 272 ] + xx [ 361 ] * xx [ 334 ] ; xx [ 319 ]
= xx [ 230 ] - xx [ 361 ] * xx [ 333 ] ; pm_math_Quaternion_xform_ra ( xx +
753 , xx + 317 , xx + 329 ) ; pm_math_Vector3_cross_ra ( xx + 795 , xx + 329
, xx + 317 ) ; xx [ 215 ] = xx [ 809 ] + xx [ 844 ] ; xx [ 220 ] = xx [ 137 ]
* state [ 53 ] ; xx [ 231 ] = xx [ 220 ] * xx [ 200 ] ; xx [ 242 ] = xx [ 220
] * xx [ 62 ] ; xx [ 220 ] = xx [ 824 ] - xx [ 846 ] ; xx [ 288 ] = xx [ 215
] * xx [ 231 ] + xx [ 242 ] * xx [ 220 ] ; xx [ 290 ] = xx [ 815 ] - xx [ 850
] ; xx [ 291 ] = xx [ 825 ] + xx [ 852 ] ; xx [ 301 ] = xx [ 231 ] * xx [ 290
] + xx [ 291 ] * xx [ 242 ] ; xx [ 303 ] = xx [ 860 ] * xx [ 242 ] - xx [ 854
] * xx [ 231 ] ; xx [ 362 ] = ( xx [ 13 ] * xx [ 290 ] - xx [ 215 ] * xx [ 5
] + xx [ 137 ] * xx [ 856 ] ) / xx [ 819 ] ; xx [ 363 ] = xx [ 818 ] / xx [
819 ] ; xx [ 364 ] = ( xx [ 5 ] * xx [ 220 ] - xx [ 291 ] * xx [ 13 ] + xx [
137 ] * xx [ 858 ] ) / xx [ 819 ] ; xx [ 215 ] = xx [ 96 ] * xx [ 748 ] ; xx
[ 220 ] = xx [ 744 ] * xx [ 96 ] ; xx [ 290 ] = ( xx [ 742 ] * xx [ 215 ] -
xx [ 220 ] * xx [ 747 ] ) * xx [ 21 ] ; xx [ 291 ] = ( xx [ 215 ] * xx [ 748
] + xx [ 744 ] * xx [ 220 ] ) * xx [ 21 ] ; xx [ 304 ] = xx [ 21 ] * ( xx [
747 ] * xx [ 215 ] + xx [ 220 ] * xx [ 742 ] ) ; xx [ 368 ] = xx [ 290 ] ; xx
[ 369 ] = xx [ 96 ] - xx [ 291 ] ; xx [ 370 ] = - xx [ 304 ] ; xx [ 215 ] =
pm_math_Vector3_dot_ra ( xx + 362 , xx + 368 ) ; xx [ 220 ] = ( input [ 5 ] -
( ( xx [ 356 ] + xx [ 317 ] + xx [ 288 ] ) * xx [ 5 ] + xx [ 13 ] * ( xx [
358 ] + xx [ 319 ] - xx [ 301 ] ) + ( xx [ 330 ] + xx [ 303 ] ) * xx [ 137 ]
) ) / xx [ 819 ] - xx [ 215 ] ; xx [ 317 ] = xx [ 744 ] * xx [ 748 ] ; xx [
318 ] = xx [ 747 ] * xx [ 742 ] ; xx [ 319 ] = ( xx [ 317 ] - xx [ 318 ] ) *
xx [ 21 ] ; xx [ 323 ] = xx [ 742 ] * xx [ 742 ] ; xx [ 325 ] = ( xx [ 323 ]
+ xx [ 744 ] * xx [ 744 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 329 ] = xx [ 319 ]
* xx [ 62 ] - xx [ 200 ] * xx [ 325 ] ; xx [ 330 ] = xx [ 747 ] * xx [ 748 ]
; xx [ 331 ] = xx [ 744 ] * xx [ 742 ] ; xx [ 332 ] = xx [ 21 ] * ( xx [ 330
] + xx [ 331 ] ) ; xx [ 335 ] = xx [ 742 ] * xx [ 748 ] ; xx [ 341 ] = xx [
744 ] * xx [ 747 ] ; xx [ 342 ] = ( xx [ 335 ] - xx [ 341 ] ) * xx [ 21 ] ;
xx [ 354 ] = xx [ 62 ] * xx [ 332 ] + xx [ 342 ] * xx [ 200 ] ; xx [ 356 ] =
( xx [ 323 ] + xx [ 748 ] * xx [ 748 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 357 ]
= xx [ 21 ] * ( xx [ 317 ] + xx [ 318 ] ) ; xx [ 317 ] = xx [ 62 ] * xx [ 356
] - xx [ 200 ] * xx [ 357 ] ; xx [ 318 ] = xx [ 21 ] * ( xx [ 341 ] + xx [
335 ] ) ; xx [ 335 ] = ( xx [ 323 ] + xx [ 747 ] * xx [ 747 ] ) * xx [ 21 ] -
xx [ 55 ] ; xx [ 323 ] = ( xx [ 331 ] - xx [ 330 ] ) * xx [ 21 ] ; xx [ 511 ]
= xx [ 200 ] * xx [ 329 ] ; xx [ 512 ] = - ( xx [ 200 ] * xx [ 354 ] ) ; xx [
513 ] = xx [ 200 ] * xx [ 317 ] ; xx [ 514 ] = xx [ 200 ] * xx [ 200 ] * xx [
318 ] + xx [ 62 ] * xx [ 62 ] * xx [ 318 ] ; xx [ 515 ] = - ( xx [ 200 ] * xx
[ 200 ] * xx [ 335 ] + xx [ 62 ] * xx [ 62 ] * xx [ 335 ] ) ; xx [ 516 ] = -
( xx [ 200 ] * xx [ 323 ] * xx [ 200 ] + xx [ 62 ] * xx [ 323 ] * xx [ 62 ] )
; xx [ 517 ] = - ( xx [ 62 ] * xx [ 329 ] ) ; xx [ 518 ] = xx [ 62 ] * xx [
354 ] ; xx [ 519 ] = - ( xx [ 62 ] * xx [ 317 ] ) ;
pm_math_Matrix3x3_compose_ra ( xx + 511 , xx + 826 , xx + 611 ) ; xx [ 703 ]
= xx [ 325 ] ; xx [ 704 ] = xx [ 342 ] ; xx [ 705 ] = xx [ 357 ] ; xx [ 706 ]
= - xx [ 318 ] ; xx [ 707 ] = xx [ 335 ] ; xx [ 708 ] = xx [ 323 ] ; xx [ 709
] = xx [ 319 ] ; xx [ 710 ] = - xx [ 332 ] ; xx [ 711 ] = xx [ 356 ] ; xx [
317 ] = xx [ 807 ] * state [ 60 ] - xx [ 801 ] * state [ 58 ] ; xx [ 318 ] =
xx [ 807 ] * state [ 59 ] - xx [ 777 ] * state [ 58 ] ; xx [ 319 ] = xx [ 317
] * state [ 60 ] + xx [ 318 ] * state [ 59 ] ; xx [ 323 ] = xx [ 816 ] *
state [ 58 ] - xx [ 769 ] * state [ 60 ] ; xx [ 325 ] = xx [ 769 ] * state [
59 ] - xx [ 813 ] * state [ 58 ] ; xx [ 329 ] = xx [ 323 ] * state [ 60 ] -
xx [ 325 ] * state [ 59 ] ; xx [ 330 ] = xx [ 814 ] * state [ 58 ] - xx [ 788
] * state [ 60 ] ; xx [ 331 ] = xx [ 788 ] * state [ 59 ] - xx [ 817 ] *
state [ 58 ] ; xx [ 332 ] = xx [ 330 ] * state [ 60 ] - xx [ 331 ] * state [
59 ] ; xx [ 335 ] = xx [ 777 ] * state [ 60 ] - xx [ 801 ] * state [ 59 ] ;
xx [ 341 ] = xx [ 813 ] * state [ 60 ] - xx [ 816 ] * state [ 59 ] ; xx [ 342
] = xx [ 814 ] * state [ 59 ] - xx [ 817 ] * state [ 60 ] ; xx [ 712 ] = - xx
[ 319 ] ; xx [ 713 ] = xx [ 329 ] ; xx [ 714 ] = xx [ 332 ] ; xx [ 715 ] = xx
[ 318 ] * state [ 58 ] - xx [ 335 ] * state [ 60 ] ; xx [ 716 ] = xx [ 325 ]
* state [ 58 ] - xx [ 341 ] * state [ 60 ] ; xx [ 717 ] = xx [ 342 ] * state
[ 60 ] + xx [ 331 ] * state [ 58 ] ; xx [ 718 ] = xx [ 335 ] * state [ 59 ] +
xx [ 317 ] * state [ 58 ] ; xx [ 719 ] = xx [ 341 ] * state [ 59 ] - xx [ 323
] * state [ 58 ] ; xx [ 720 ] = - ( xx [ 342 ] * state [ 59 ] + xx [ 330 ] *
state [ 58 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 703 , xx + 712 , xx +
721 ) ; xx [ 317 ] = xx [ 757 ] * xx [ 757 ] ; xx [ 318 ] = xx [ 758 ] * xx [
759 ] ; xx [ 323 ] = xx [ 757 ] * xx [ 760 ] ; xx [ 325 ] = xx [ 758 ] * xx [
760 ] ; xx [ 330 ] = xx [ 757 ] * xx [ 759 ] ; xx [ 331 ] = xx [ 759 ] * xx [
760 ] ; xx [ 335 ] = xx [ 757 ] * xx [ 758 ] ; xx [ 703 ] = ( xx [ 317 ] + xx
[ 758 ] * xx [ 758 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 704 ] = ( xx [ 318 ] +
xx [ 323 ] ) * xx [ 21 ] ; xx [ 705 ] = xx [ 21 ] * ( xx [ 325 ] - xx [ 330 ]
) ; xx [ 706 ] = xx [ 21 ] * ( xx [ 318 ] - xx [ 323 ] ) ; xx [ 707 ] = ( xx
[ 317 ] + xx [ 759 ] * xx [ 759 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 708 ] = (
xx [ 331 ] + xx [ 335 ] ) * xx [ 21 ] ; xx [ 709 ] = ( xx [ 325 ] + xx [ 330
] ) * xx [ 21 ] ; xx [ 710 ] = xx [ 21 ] * ( xx [ 331 ] - xx [ 335 ] ) ; xx [
711 ] = ( xx [ 317 ] + xx [ 760 ] * xx [ 760 ] ) * xx [ 21 ] - xx [ 55 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 703 , xx + 257 , xx + 712 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 712 , xx + 273 , xx + 703 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 511 , xx + 795 , xx + 257 ) ; xx [ 273 ] =
xx [ 744 ] ; xx [ 274 ] = xx [ 740 ] ; xx [ 275 ] = xx [ 748 ] ; xx [ 317 ] =
xx [ 188 ] * xx [ 747 ] ; xx [ 318 ] = xx [ 194 ] * xx [ 748 ] + xx [ 744 ] *
xx [ 188 ] ; xx [ 323 ] = xx [ 194 ] * xx [ 747 ] ; xx [ 356 ] = - xx [ 317 ]
; xx [ 357 ] = - xx [ 318 ] ; xx [ 358 ] = - xx [ 323 ] ;
pm_math_Vector3_cross_ra ( xx + 273 , xx + 356 , xx + 362 ) ; xx [ 273 ] =
state [ 53 ] * state [ 53 ] ; xx [ 356 ] = - ( xx [ 319 ] * xx [ 82 ] ) ; xx
[ 357 ] = xx [ 82 ] * xx [ 329 ] ; xx [ 358 ] = xx [ 82 ] * xx [ 332 ] ;
pm_math_Quaternion_xform_ra ( xx + 749 , xx + 356 , xx + 329 ) ; xx [ 274 ] =
xx [ 745 ] * xx [ 271 ] + xx [ 209 ] * xx [ 746 ] ; xx [ 275 ] = xx [ 738 ] *
xx [ 271 ] ; xx [ 319 ] = xx [ 738 ] * xx [ 209 ] ; xx [ 356 ] = - xx [ 274 ]
; xx [ 357 ] = xx [ 275 ] ; xx [ 358 ] = xx [ 319 ] ;
pm_math_Vector3_cross_ra ( xx + 761 , xx + 356 , xx + 368 ) ; xx [ 325 ] = xx
[ 209 ] + xx [ 21 ] * ( xx [ 369 ] + xx [ 275 ] * xx [ 736 ] ) ; xx [ 356 ] =
- ( xx [ 325 ] * xx [ 200 ] ) ; xx [ 357 ] = ( xx [ 368 ] - xx [ 274 ] * xx [
736 ] ) * xx [ 21 ] * xx [ 200 ] - xx [ 62 ] * ( xx [ 21 ] * ( xx [ 370 ] +
xx [ 319 ] * xx [ 736 ] ) - xx [ 271 ] ) ; xx [ 358 ] = xx [ 325 ] * xx [ 62
] ; pm_math_Quaternion_xform_ra ( xx + 749 , xx + 356 , xx + 368 ) ; xx [ 62
] = xx [ 13 ] * xx [ 220 ] ; xx [ 200 ] = xx [ 5 ] * xx [ 220 ] ; xx [ 209 ]
= xx [ 200 ] * xx [ 746 ] - xx [ 738 ] * xx [ 62 ] ; xx [ 271 ] = xx [ 745 ]
* xx [ 200 ] ; xx [ 356 ] = xx [ 745 ] * xx [ 62 ] ; xx [ 357 ] = xx [ 209 ]
; xx [ 358 ] = - xx [ 271 ] ; pm_math_Vector3_cross_ra ( xx + 761 , xx + 356
, xx + 371 ) ; xx [ 274 ] = xx [ 290 ] - xx [ 231 ] ; xx [ 231 ] = xx [ 242 ]
- xx [ 304 ] ; xx [ 356 ] = xx [ 274 ] - xx [ 775 ] * xx [ 62 ] ; xx [ 357 ]
= xx [ 137 ] * xx [ 220 ] - xx [ 291 ] + xx [ 778 ] * xx [ 62 ] - xx [ 780 ]
* xx [ 200 ] + xx [ 96 ] ; xx [ 358 ] = xx [ 231 ] + xx [ 775 ] * xx [ 200 ]
; pm_math_Quaternion_inverseXform_ra ( xx + 753 , xx + 356 , xx + 403 ) ; xx
[ 200 ] = xx [ 333 ] - ( xx [ 413 ] * ( xx [ 372 ] - xx [ 209 ] * xx [ 736 ]
) - xx [ 415 ] * xx [ 405 ] ) ; xx [ 209 ] = xx [ 334 ] - ( ( xx [ 62 ] + xx
[ 21 ] * ( xx [ 373 ] + xx [ 271 ] * xx [ 736 ] ) ) * xx [ 395 ] + xx [ 415 ]
* xx [ 404 ] ) ; xx [ 62 ] = xx [ 5 ] * state [ 17 ] ; xx [ 242 ] = xx [ 13 ]
* state [ 17 ] ; xx [ 271 ] = xx [ 847 ] * xx [ 242 ] ; xx [ 275 ] = xx [ 62
] * xx [ 848 ] - xx [ 841 ] * xx [ 242 ] ; xx [ 290 ] = xx [ 847 ] * xx [ 62
] ; xx [ 332 ] = xx [ 271 ] ; xx [ 333 ] = xx [ 275 ] ; xx [ 334 ] = - xx [
290 ] ; pm_math_Vector3_cross_ra ( xx + 873 , xx + 332 , xx + 356 ) ; xx [
304 ] = xx [ 62 ] + ( xx [ 356 ] - xx [ 271 ] * xx [ 840 ] ) * xx [ 21 ] ; xx
[ 271 ] = xx [ 304 ] + state [ 22 ] ; xx [ 319 ] = xx [ 21 ] * ( xx [ 357 ] -
xx [ 275 ] * xx [ 840 ] ) ; xx [ 275 ] = xx [ 319 ] + state [ 23 ] ; xx [ 325
] = xx [ 242 ] + xx [ 21 ] * ( xx [ 358 ] + xx [ 290 ] * xx [ 840 ] ) ; xx [
290 ] = xx [ 325 ] + state [ 24 ] ; xx [ 332 ] = xx [ 271 ] ; xx [ 333 ] = xx
[ 275 ] ; xx [ 334 ] = xx [ 290 ] ; xx [ 356 ] = xx [ 271 ] * xx [ 28 ] ; xx
[ 357 ] = xx [ 275 ] * xx [ 29 ] ; xx [ 358 ] = xx [ 290 ] * xx [ 29 ] ;
pm_math_Vector3_cross_ra ( xx + 332 , xx + 356 , xx + 371 ) ; xx [ 356 ] = xx
[ 304 ] ; xx [ 357 ] = xx [ 319 ] ; xx [ 358 ] = xx [ 325 ] ; xx [ 403 ] =
state [ 22 ] ; xx [ 404 ] = state [ 23 ] ; xx [ 405 ] = state [ 24 ] ;
pm_math_Vector3_cross_ra ( xx + 356 , xx + 403 , xx + 406 ) ; xx [ 335 ] = xx
[ 371 ] + xx [ 28 ] * xx [ 406 ] ; xx [ 341 ] = - xx [ 335 ] ; xx [ 342 ] =
xx [ 372 ] + xx [ 29 ] * xx [ 407 ] ; xx [ 354 ] = xx [ 304 ] + xx [ 271 ] ;
xx [ 271 ] = xx [ 82 ] * state [ 24 ] ; xx [ 304 ] = xx [ 887 ] * xx [ 242 ]
- xx [ 889 ] * xx [ 62 ] ; xx [ 431 ] = - ( xx [ 242 ] * xx [ 304 ] ) ; xx [
432 ] = - ( xx [ 242 ] * xx [ 884 ] * xx [ 242 ] + xx [ 62 ] * xx [ 884 ] *
xx [ 62 ] ) ; xx [ 433 ] = xx [ 62 ] * xx [ 304 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 865 , xx + 431 , xx + 440 ) ; xx [
304 ] = ( xx [ 354 ] * xx [ 271 ] + xx [ 442 ] ) * xx [ 251 ] ; xx [ 359 ] =
xx [ 342 ] - xx [ 82 ] * xx [ 304 ] ; xx [ 360 ] = xx [ 373 ] + xx [ 29 ] *
xx [ 408 ] ; xx [ 371 ] = xx [ 82 ] * state [ 23 ] ; xx [ 372 ] = ( xx [ 354
] * xx [ 371 ] + xx [ 441 ] ) * xx [ 251 ] ; xx [ 354 ] = xx [ 360 ] + xx [
82 ] * xx [ 372 ] ; xx [ 431 ] = xx [ 341 ] ; xx [ 432 ] = - xx [ 359 ] ; xx
[ 433 ] = - xx [ 354 ] ; solveSymmetricPosDef ( xx + 383 , xx + 431 , 3 , 1 ,
xx + 443 , xx + 450 ) ; xx [ 431 ] = xx [ 335 ] + xx [ 28 ] * xx [ 443 ] ; xx
[ 432 ] = xx [ 342 ] + xx [ 29 ] * xx [ 444 ] ; xx [ 433 ] = xx [ 360 ] + xx
[ 29 ] * xx [ 445 ] ; pm_math_Quaternion_xform_ra ( xx + 865 , xx + 431 , xx
+ 450 ) ; xx [ 373 ] = xx [ 251 ] * ( xx [ 440 ] - ( ( xx [ 319 ] + xx [ 275
] ) * xx [ 371 ] + ( xx [ 325 ] + xx [ 290 ] ) * xx [ 271 ] ) ) ; xx [ 431 ]
= xx [ 373 ] ; xx [ 432 ] = xx [ 372 ] + xx [ 361 ] * xx [ 445 ] ; xx [ 433 ]
= xx [ 304 ] - xx [ 361 ] * xx [ 444 ] ; pm_math_Quaternion_xform_ra ( xx +
865 , xx + 431 , xx + 440 ) ; pm_math_Vector3_cross_ra ( xx + 904 , xx + 440
, xx + 431 ) ; xx [ 275 ] = xx [ 918 ] + xx [ 953 ] ; xx [ 290 ] = xx [ 137 ]
* state [ 17 ] ; xx [ 319 ] = xx [ 290 ] * xx [ 242 ] ; xx [ 325 ] = xx [ 290
] * xx [ 62 ] ; xx [ 290 ] = xx [ 933 ] - xx [ 955 ] ; xx [ 378 ] = xx [ 275
] * xx [ 319 ] + xx [ 325 ] * xx [ 290 ] ; xx [ 392 ] = xx [ 924 ] - xx [ 959
] ; xx [ 393 ] = xx [ 934 ] + xx [ 961 ] ; xx [ 396 ] = xx [ 319 ] * xx [ 392
] + xx [ 393 ] * xx [ 325 ] ; xx [ 399 ] = xx [ 969 ] * xx [ 325 ] - xx [ 963
] * xx [ 319 ] ; xx [ 460 ] = ( xx [ 13 ] * xx [ 392 ] - xx [ 275 ] * xx [ 5
] + xx [ 137 ] * xx [ 965 ] ) / xx [ 928 ] ; xx [ 461 ] = xx [ 927 ] / xx [
928 ] ; xx [ 462 ] = ( xx [ 5 ] * xx [ 290 ] - xx [ 393 ] * xx [ 13 ] + xx [
137 ] * xx [ 967 ] ) / xx [ 928 ] ; xx [ 275 ] = xx [ 845 ] * xx [ 96 ] ; xx
[ 290 ] = xx [ 96 ] * xx [ 853 ] ; xx [ 392 ] = ( xx [ 275 ] * xx [ 851 ] -
xx [ 843 ] * xx [ 290 ] ) * xx [ 21 ] ; xx [ 393 ] = ( xx [ 290 ] * xx [ 853
] + xx [ 845 ] * xx [ 275 ] ) * xx [ 21 ] ; xx [ 409 ] = xx [ 21 ] * ( xx [
851 ] * xx [ 290 ] + xx [ 275 ] * xx [ 843 ] ) ; xx [ 469 ] = xx [ 392 ] ; xx
[ 470 ] = xx [ 96 ] - xx [ 393 ] ; xx [ 471 ] = - xx [ 409 ] ; xx [ 275 ] =
pm_math_Vector3_dot_ra ( xx + 460 , xx + 469 ) ; xx [ 290 ] = ( input [ 1 ] -
( ( xx [ 450 ] + xx [ 431 ] + xx [ 378 ] ) * xx [ 5 ] + xx [ 13 ] * ( xx [
452 ] + xx [ 433 ] - xx [ 396 ] ) + ( xx [ 441 ] + xx [ 399 ] ) * xx [ 137 ]
) ) / xx [ 928 ] - xx [ 275 ] ; xx [ 416 ] = xx [ 851 ] * xx [ 843 ] ; xx [
425 ] = xx [ 845 ] * xx [ 853 ] ; xx [ 428 ] = ( xx [ 416 ] - xx [ 425 ] ) *
xx [ 21 ] ; xx [ 431 ] = xx [ 843 ] * xx [ 843 ] ; xx [ 432 ] = ( xx [ 431 ]
+ xx [ 845 ] * xx [ 845 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 433 ] = xx [ 428 ]
* xx [ 62 ] - xx [ 242 ] * xx [ 432 ] ; xx [ 440 ] = xx [ 851 ] * xx [ 853 ]
; xx [ 441 ] = xx [ 845 ] * xx [ 843 ] ; xx [ 442 ] = xx [ 21 ] * ( xx [ 440
] + xx [ 441 ] ) ; xx [ 443 ] = xx [ 845 ] * xx [ 851 ] ; xx [ 447 ] = xx [
843 ] * xx [ 853 ] ; xx [ 448 ] = ( xx [ 443 ] - xx [ 447 ] ) * xx [ 21 ] ;
xx [ 450 ] = xx [ 62 ] * xx [ 442 ] + xx [ 448 ] * xx [ 242 ] ; xx [ 451 ] =
( xx [ 431 ] + xx [ 853 ] * xx [ 853 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 452 ]
= xx [ 21 ] * ( xx [ 425 ] + xx [ 416 ] ) ; xx [ 416 ] = xx [ 62 ] * xx [ 451
] + xx [ 242 ] * xx [ 452 ] ; xx [ 425 ] = xx [ 21 ] * ( xx [ 443 ] + xx [
447 ] ) ; xx [ 443 ] = ( xx [ 431 ] + xx [ 851 ] * xx [ 851 ] ) * xx [ 21 ] -
xx [ 55 ] ; xx [ 431 ] = ( xx [ 441 ] - xx [ 440 ] ) * xx [ 21 ] ; xx [ 511 ]
= xx [ 242 ] * xx [ 433 ] ; xx [ 512 ] = - ( xx [ 242 ] * xx [ 450 ] ) ; xx [
513 ] = xx [ 242 ] * xx [ 416 ] ; xx [ 514 ] = - ( xx [ 242 ] * xx [ 242 ] *
xx [ 425 ] + xx [ 62 ] * xx [ 62 ] * xx [ 425 ] ) ; xx [ 515 ] = - ( xx [ 242
] * xx [ 242 ] * xx [ 443 ] + xx [ 62 ] * xx [ 62 ] * xx [ 443 ] ) ; xx [ 516
] = - ( xx [ 242 ] * xx [ 431 ] * xx [ 242 ] + xx [ 62 ] * xx [ 431 ] * xx [
62 ] ) ; xx [ 517 ] = - ( xx [ 62 ] * xx [ 433 ] ) ; xx [ 518 ] = xx [ 62 ] *
xx [ 450 ] ; xx [ 519 ] = - ( xx [ 62 ] * xx [ 416 ] ) ;
pm_math_Matrix3x3_compose_ra ( xx + 511 , xx + 935 , xx + 614 ) ; xx [ 706 ]
= xx [ 432 ] ; xx [ 707 ] = xx [ 448 ] ; xx [ 708 ] = - xx [ 452 ] ; xx [ 709
] = xx [ 425 ] ; xx [ 710 ] = xx [ 443 ] ; xx [ 711 ] = xx [ 431 ] ; xx [ 712
] = xx [ 428 ] ; xx [ 713 ] = - xx [ 442 ] ; xx [ 714 ] = xx [ 451 ] ; xx [
416 ] = xx [ 916 ] * state [ 24 ] - xx [ 910 ] * state [ 22 ] ; xx [ 425 ] =
xx [ 916 ] * state [ 23 ] - xx [ 886 ] * state [ 22 ] ; xx [ 428 ] = xx [ 416
] * state [ 24 ] + xx [ 425 ] * state [ 23 ] ; xx [ 431 ] = xx [ 925 ] *
state [ 22 ] - xx [ 878 ] * state [ 24 ] ; xx [ 432 ] = xx [ 878 ] * state [
23 ] - xx [ 922 ] * state [ 22 ] ; xx [ 433 ] = xx [ 431 ] * state [ 24 ] -
xx [ 432 ] * state [ 23 ] ; xx [ 440 ] = xx [ 923 ] * state [ 22 ] - xx [ 897
] * state [ 24 ] ; xx [ 441 ] = xx [ 897 ] * state [ 23 ] - xx [ 926 ] *
state [ 22 ] ; xx [ 442 ] = xx [ 440 ] * state [ 24 ] - xx [ 441 ] * state [
23 ] ; xx [ 443 ] = xx [ 886 ] * state [ 24 ] - xx [ 910 ] * state [ 23 ] ;
xx [ 447 ] = xx [ 922 ] * state [ 24 ] - xx [ 925 ] * state [ 23 ] ; xx [ 448
] = xx [ 923 ] * state [ 23 ] - xx [ 926 ] * state [ 24 ] ; xx [ 724 ] = - xx
[ 428 ] ; xx [ 725 ] = xx [ 433 ] ; xx [ 726 ] = xx [ 442 ] ; xx [ 727 ] = xx
[ 425 ] * state [ 22 ] - xx [ 443 ] * state [ 24 ] ; xx [ 728 ] = xx [ 432 ]
* state [ 22 ] - xx [ 447 ] * state [ 24 ] ; xx [ 729 ] = xx [ 448 ] * state
[ 24 ] + xx [ 441 ] * state [ 22 ] ; xx [ 730 ] = xx [ 443 ] * state [ 23 ] +
xx [ 416 ] * state [ 22 ] ; xx [ 731 ] = xx [ 447 ] * state [ 23 ] - xx [ 431
] * state [ 22 ] ; xx [ 732 ] = - ( xx [ 448 ] * state [ 23 ] + xx [ 440 ] *
state [ 22 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 706 , xx + 724 , xx +
809 ) ; xx [ 416 ] = xx [ 869 ] * xx [ 869 ] ; xx [ 425 ] = xx [ 870 ] * xx [
871 ] ; xx [ 431 ] = xx [ 869 ] * xx [ 872 ] ; xx [ 432 ] = xx [ 870 ] * xx [
872 ] ; xx [ 440 ] = xx [ 869 ] * xx [ 871 ] ; xx [ 441 ] = xx [ 871 ] * xx [
872 ] ; xx [ 443 ] = xx [ 869 ] * xx [ 870 ] ; xx [ 706 ] = ( xx [ 416 ] + xx
[ 870 ] * xx [ 870 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 707 ] = ( xx [ 425 ] +
xx [ 431 ] ) * xx [ 21 ] ; xx [ 708 ] = xx [ 21 ] * ( xx [ 432 ] - xx [ 440 ]
) ; xx [ 709 ] = xx [ 21 ] * ( xx [ 425 ] - xx [ 431 ] ) ; xx [ 710 ] = ( xx
[ 416 ] + xx [ 871 ] * xx [ 871 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 711 ] = (
xx [ 441 ] + xx [ 443 ] ) * xx [ 21 ] ; xx [ 712 ] = ( xx [ 432 ] + xx [ 440
] ) * xx [ 21 ] ; xx [ 713 ] = xx [ 21 ] * ( xx [ 441 ] - xx [ 443 ] ) ; xx [
714 ] = ( xx [ 416 ] + xx [ 872 ] * xx [ 872 ] ) * xx [ 21 ] - xx [ 55 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 706 , xx + 356 , xx + 724 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 724 , xx + 403 , xx + 706 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 511 , xx + 904 , xx + 356 ) ; xx [ 403 ] =
xx [ 188 ] * xx [ 851 ] ; xx [ 450 ] = xx [ 849 ] ; xx [ 451 ] = xx [ 842 ] ;
xx [ 452 ] = xx [ 853 ] ; xx [ 404 ] = xx [ 845 ] * xx [ 188 ] - xx [ 194 ] *
xx [ 853 ] ; xx [ 405 ] = xx [ 194 ] * xx [ 851 ] ; xx [ 460 ] = - xx [ 403 ]
; xx [ 461 ] = xx [ 404 ] ; xx [ 462 ] = - xx [ 405 ] ;
pm_math_Vector3_cross_ra ( xx + 450 , xx + 460 , xx + 469 ) ; xx [ 416 ] =
state [ 17 ] * state [ 17 ] ; xx [ 450 ] = - ( xx [ 428 ] * xx [ 82 ] ) ; xx
[ 451 ] = xx [ 82 ] * xx [ 433 ] ; xx [ 452 ] = xx [ 82 ] * xx [ 442 ] ;
pm_math_Quaternion_xform_ra ( xx + 861 , xx + 450 , xx + 431 ) ; xx [ 425 ] =
xx [ 847 ] * xx [ 371 ] + xx [ 271 ] * xx [ 848 ] ; xx [ 428 ] = xx [ 841 ] *
xx [ 371 ] ; xx [ 440 ] = xx [ 841 ] * xx [ 271 ] ; xx [ 441 ] = - xx [ 425 ]
; xx [ 442 ] = xx [ 428 ] ; xx [ 443 ] = xx [ 440 ] ;
pm_math_Vector3_cross_ra ( xx + 873 , xx + 441 , xx + 450 ) ; xx [ 441 ] = xx
[ 271 ] + xx [ 21 ] * ( xx [ 451 ] + xx [ 428 ] * xx [ 840 ] ) ; xx [ 460 ] =
- ( xx [ 441 ] * xx [ 242 ] ) ; xx [ 461 ] = ( xx [ 450 ] - xx [ 425 ] * xx [
840 ] ) * xx [ 21 ] * xx [ 242 ] - xx [ 62 ] * ( xx [ 21 ] * ( xx [ 452 ] +
xx [ 440 ] * xx [ 840 ] ) - xx [ 371 ] ) ; xx [ 462 ] = xx [ 441 ] * xx [ 62
] ; pm_math_Quaternion_xform_ra ( xx + 861 , xx + 460 , xx + 440 ) ; xx [ 62
] = xx [ 13 ] * xx [ 290 ] ; xx [ 242 ] = xx [ 5 ] * xx [ 290 ] ; xx [ 271 ]
= xx [ 242 ] * xx [ 848 ] - xx [ 841 ] * xx [ 62 ] ; xx [ 371 ] = xx [ 847 ]
* xx [ 242 ] ; xx [ 450 ] = xx [ 847 ] * xx [ 62 ] ; xx [ 451 ] = xx [ 271 ]
; xx [ 452 ] = - xx [ 371 ] ; pm_math_Vector3_cross_ra ( xx + 873 , xx + 450
, xx + 460 ) ; xx [ 425 ] = xx [ 392 ] - xx [ 319 ] ; xx [ 319 ] = xx [ 325 ]
- xx [ 409 ] ; xx [ 450 ] = xx [ 425 ] - xx [ 884 ] * xx [ 62 ] ; xx [ 451 ]
= xx [ 137 ] * xx [ 290 ] - xx [ 393 ] + xx [ 887 ] * xx [ 62 ] - xx [ 889 ]
* xx [ 242 ] + xx [ 96 ] ; xx [ 452 ] = xx [ 319 ] + xx [ 884 ] * xx [ 242 ]
; pm_math_Quaternion_inverseXform_ra ( xx + 865 , xx + 450 , xx + 472 ) ; xx
[ 242 ] = xx [ 444 ] - ( xx [ 413 ] * ( xx [ 461 ] - xx [ 271 ] * xx [ 840 ]
) - xx [ 415 ] * xx [ 474 ] ) ; xx [ 271 ] = xx [ 445 ] - ( ( xx [ 62 ] + xx
[ 21 ] * ( xx [ 462 ] + xx [ 371 ] * xx [ 840 ] ) ) * xx [ 395 ] + xx [ 415 ]
* xx [ 473 ] ) ; xx [ 62 ] = xx [ 13 ] * state [ 26 ] ; xx [ 325 ] = xx [ 952
] * xx [ 62 ] ; xx [ 371 ] = xx [ 5 ] * state [ 26 ] ; xx [ 392 ] = xx [ 944
] * xx [ 62 ] - xx [ 371 ] * xx [ 956 ] ; xx [ 409 ] = xx [ 952 ] * xx [ 371
] ; xx [ 443 ] = - xx [ 325 ] ; xx [ 444 ] = xx [ 392 ] ; xx [ 445 ] = - xx [
409 ] ; pm_math_Vector3_cross_ra ( xx + 978 , xx + 443 , xx + 450 ) ; xx [
428 ] = ( xx [ 325 ] * xx [ 921 ] + xx [ 450 ] ) * xx [ 21 ] - xx [ 371 ] ;
xx [ 325 ] = xx [ 428 ] + state [ 31 ] ; xx [ 443 ] = xx [ 21 ] * ( xx [ 451
] - xx [ 392 ] * xx [ 921 ] ) ; xx [ 392 ] = xx [ 443 ] + state [ 32 ] ; xx [
444 ] = xx [ 62 ] + xx [ 21 ] * ( xx [ 452 ] + xx [ 409 ] * xx [ 921 ] ) ; xx
[ 409 ] = xx [ 444 ] + state [ 33 ] ; xx [ 450 ] = xx [ 325 ] ; xx [ 451 ] =
xx [ 392 ] ; xx [ 452 ] = xx [ 409 ] ; xx [ 460 ] = xx [ 325 ] * xx [ 28 ] ;
xx [ 461 ] = xx [ 392 ] * xx [ 29 ] ; xx [ 462 ] = xx [ 409 ] * xx [ 29 ] ;
pm_math_Vector3_cross_ra ( xx + 450 , xx + 460 , xx + 472 ) ; xx [ 460 ] = xx
[ 428 ] ; xx [ 461 ] = xx [ 443 ] ; xx [ 462 ] = xx [ 444 ] ; xx [ 479 ] =
state [ 31 ] ; xx [ 480 ] = state [ 32 ] ; xx [ 481 ] = state [ 33 ] ;
pm_math_Vector3_cross_ra ( xx + 460 , xx + 479 , xx + 482 ) ; xx [ 445 ] = xx
[ 472 ] + xx [ 28 ] * xx [ 482 ] ; xx [ 447 ] = - xx [ 445 ] ; xx [ 448 ] =
xx [ 473 ] + xx [ 29 ] * xx [ 483 ] ; xx [ 458 ] = xx [ 428 ] + xx [ 325 ] ;
xx [ 325 ] = xx [ 82 ] * state [ 33 ] ; xx [ 428 ] = xx [ 968 ] * xx [ 62 ] +
xx [ 981 ] * xx [ 371 ] ; xx [ 511 ] = - ( xx [ 62 ] * xx [ 428 ] ) ; xx [
512 ] = - ( xx [ 62 ] * xx [ 962 ] * xx [ 62 ] + xx [ 371 ] * xx [ 962 ] * xx
[ 371 ] ) ; xx [ 513 ] = - ( xx [ 371 ] * xx [ 428 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 970 , xx + 511 , xx + 514 ) ; xx [
428 ] = ( xx [ 458 ] * xx [ 325 ] + xx [ 516 ] ) * xx [ 251 ] ; xx [ 463 ] =
xx [ 448 ] - xx [ 82 ] * xx [ 428 ] ; xx [ 464 ] = xx [ 474 ] + xx [ 29 ] *
xx [ 484 ] ; xx [ 472 ] = xx [ 82 ] * state [ 32 ] ; xx [ 473 ] = ( xx [ 458
] * xx [ 472 ] + xx [ 515 ] ) * xx [ 251 ] ; xx [ 458 ] = xx [ 464 ] + xx [
82 ] * xx [ 473 ] ; xx [ 511 ] = xx [ 447 ] ; xx [ 512 ] = - xx [ 463 ] ; xx
[ 513 ] = - xx [ 458 ] ; solveSymmetricPosDef ( xx + 383 , xx + 511 , 3 , 1 ,
xx + 517 , xx + 529 ) ; xx [ 511 ] = xx [ 445 ] + xx [ 28 ] * xx [ 517 ] ; xx
[ 512 ] = xx [ 448 ] + xx [ 29 ] * xx [ 518 ] ; xx [ 513 ] = xx [ 464 ] + xx
[ 29 ] * xx [ 519 ] ; pm_math_Quaternion_xform_ra ( xx + 970 , xx + 511 , xx
+ 529 ) ; xx [ 474 ] = xx [ 251 ] * ( xx [ 514 ] - ( ( xx [ 443 ] + xx [ 392
] ) * xx [ 472 ] + ( xx [ 444 ] + xx [ 409 ] ) * xx [ 325 ] ) ) ; xx [ 511 ]
= xx [ 474 ] ; xx [ 512 ] = xx [ 473 ] + xx [ 361 ] * xx [ 519 ] ; xx [ 513 ]
= xx [ 428 ] - xx [ 361 ] * xx [ 518 ] ; pm_math_Quaternion_xform_ra ( xx +
970 , xx + 511 , xx + 514 ) ; pm_math_Vector3_cross_ra ( xx + 993 , xx + 514
, xx + 511 ) ; xx [ 251 ] = xx [ 137 ] * state [ 26 ] ; xx [ 392 ] = xx [ 251
] * xx [ 62 ] ; xx [ 409 ] = xx [ 958 ] - xx [ 1052 ] ; xx [ 443 ] = xx [
1027 ] + xx [ 1054 ] ; xx [ 444 ] = xx [ 251 ] * xx [ 371 ] ; xx [ 251 ] = xx
[ 392 ] * xx [ 409 ] - xx [ 443 ] * xx [ 444 ] ; xx [ 487 ] = xx [ 1019 ] +
xx [ 1046 ] ; xx [ 493 ] = xx [ 414 ] - xx [ 1048 ] ; xx [ 414 ] = xx [ 487 ]
* xx [ 392 ] - xx [ 444 ] * xx [ 493 ] ; xx [ 494 ] = xx [ 1062 ] * xx [ 444
] + xx [ 1056 ] * xx [ 392 ] ; xx [ 536 ] = ( xx [ 13 ] * xx [ 409 ] + xx [
487 ] * xx [ 5 ] + xx [ 137 ] * xx [ 1058 ] ) / xx [ 232 ] ; xx [ 537 ] = xx
[ 1010 ] / xx [ 232 ] ; xx [ 538 ] = ( xx [ 137 ] * xx [ 1060 ] - ( xx [ 5 ]
* xx [ 493 ] + xx [ 443 ] * xx [ 13 ] ) ) / xx [ 232 ] ; xx [ 409 ] = xx [ 96
] * xx [ 932 ] ; xx [ 443 ] = xx [ 915 ] * xx [ 96 ] ; xx [ 487 ] = ( xx [
909 ] * xx [ 409 ] - xx [ 443 ] * xx [ 929 ] ) * xx [ 21 ] ; xx [ 493 ] = (
xx [ 409 ] * xx [ 932 ] + xx [ 915 ] * xx [ 443 ] ) * xx [ 21 ] ; xx [ 496 ]
= xx [ 21 ] * ( xx [ 929 ] * xx [ 409 ] + xx [ 443 ] * xx [ 909 ] ) ; xx [
541 ] = xx [ 487 ] ; xx [ 542 ] = xx [ 96 ] - xx [ 493 ] ; xx [ 543 ] = xx [
496 ] ; xx [ 409 ] = pm_math_Vector3_dot_ra ( xx + 536 , xx + 541 ) ; xx [
443 ] = ( input [ 2 ] - ( xx [ 13 ] * ( xx [ 531 ] + xx [ 513 ] - xx [ 251 ]
) - ( xx [ 529 ] + xx [ 511 ] + xx [ 414 ] ) * xx [ 5 ] + ( xx [ 515 ] - xx [
494 ] ) * xx [ 137 ] ) ) / xx [ 232 ] - xx [ 409 ] ; xx [ 503 ] = xx [ 929 ]
* xx [ 909 ] ; xx [ 507 ] = xx [ 915 ] * xx [ 932 ] ; xx [ 508 ] = ( xx [ 503
] - xx [ 507 ] ) * xx [ 21 ] ; xx [ 511 ] = xx [ 909 ] * xx [ 909 ] ; xx [
512 ] = ( xx [ 511 ] + xx [ 915 ] * xx [ 915 ] ) * xx [ 21 ] - xx [ 55 ] ; xx
[ 513 ] = xx [ 508 ] * xx [ 371 ] + xx [ 62 ] * xx [ 512 ] ; xx [ 514 ] = xx
[ 929 ] * xx [ 932 ] ; xx [ 515 ] = xx [ 915 ] * xx [ 909 ] ; xx [ 516 ] = xx
[ 21 ] * ( xx [ 514 ] + xx [ 515 ] ) ; xx [ 517 ] = xx [ 909 ] * xx [ 932 ] ;
xx [ 521 ] = xx [ 915 ] * xx [ 929 ] ; xx [ 525 ] = ( xx [ 517 ] - xx [ 521 ]
) * xx [ 21 ] ; xx [ 529 ] = xx [ 371 ] * xx [ 516 ] + xx [ 525 ] * xx [ 62 ]
; xx [ 530 ] = xx [ 21 ] * ( xx [ 507 ] + xx [ 503 ] ) ; xx [ 503 ] = ( xx [
511 ] + xx [ 932 ] * xx [ 932 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 507 ] = xx [
62 ] * xx [ 530 ] - xx [ 371 ] * xx [ 503 ] ; xx [ 531 ] = xx [ 21 ] * ( xx [
521 ] + xx [ 517 ] ) ; xx [ 517 ] = ( xx [ 511 ] + xx [ 929 ] * xx [ 929 ] )
* xx [ 21 ] - xx [ 55 ] ; xx [ 511 ] = ( xx [ 514 ] - xx [ 515 ] ) * xx [ 21
] ; xx [ 709 ] = - ( xx [ 62 ] * xx [ 513 ] ) ; xx [ 710 ] = - ( xx [ 62 ] *
xx [ 529 ] ) ; xx [ 711 ] = xx [ 62 ] * xx [ 507 ] ; xx [ 712 ] = xx [ 62 ] *
xx [ 62 ] * xx [ 531 ] + xx [ 371 ] * xx [ 371 ] * xx [ 531 ] ; xx [ 713 ] =
- ( xx [ 62 ] * xx [ 62 ] * xx [ 517 ] + xx [ 371 ] * xx [ 371 ] * xx [ 517 ]
) ; xx [ 714 ] = - ( xx [ 62 ] * xx [ 511 ] * xx [ 62 ] + xx [ 371 ] * xx [
511 ] * xx [ 371 ] ) ; xx [ 715 ] = - ( xx [ 371 ] * xx [ 513 ] ) ; xx [ 716
] = - ( xx [ 371 ] * xx [ 529 ] ) ; xx [ 717 ] = xx [ 371 ] * xx [ 507 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 709 , xx + 1028 , xx + 724 ) ; xx [ 820 ]
= xx [ 512 ] ; xx [ 821 ] = xx [ 525 ] ; xx [ 822 ] = - xx [ 530 ] ; xx [ 823
] = - xx [ 531 ] ; xx [ 824 ] = xx [ 517 ] ; xx [ 825 ] = xx [ 511 ] ; xx [
826 ] = xx [ 508 ] ; xx [ 827 ] = xx [ 516 ] ; xx [ 828 ] = xx [ 503 ] ; xx [
503 ] = xx [ 1014 ] * state [ 33 ] + xx [ 1012 ] * state [ 31 ] ; xx [ 507 ]
= xx [ 1014 ] * state [ 32 ] - xx [ 1017 ] * state [ 31 ] ; xx [ 508 ] = xx [
503 ] * state [ 33 ] + xx [ 507 ] * state [ 32 ] ; xx [ 511 ] = xx [ 1020 ] *
state [ 31 ] - xx [ 1015 ] * state [ 33 ] ; xx [ 512 ] = xx [ 1015 ] * state
[ 32 ] - xx [ 957 ] * state [ 31 ] ; xx [ 513 ] = xx [ 511 ] * state [ 33 ] -
xx [ 512 ] * state [ 32 ] ; xx [ 514 ] = xx [ 1006 ] * state [ 31 ] - xx [
1009 ] * state [ 33 ] ; xx [ 515 ] = xx [ 1009 ] * state [ 32 ] + xx [ 966 ]
* state [ 31 ] ; xx [ 516 ] = xx [ 514 ] * state [ 33 ] - xx [ 515 ] * state
[ 32 ] ; xx [ 517 ] = xx [ 1017 ] * state [ 33 ] + xx [ 1012 ] * state [ 32 ]
; xx [ 521 ] = xx [ 957 ] * state [ 33 ] - xx [ 1020 ] * state [ 32 ] ; xx [
525 ] = xx [ 966 ] * state [ 33 ] + xx [ 1006 ] * state [ 32 ] ; xx [ 829 ] =
- xx [ 508 ] ; xx [ 830 ] = xx [ 513 ] ; xx [ 831 ] = xx [ 516 ] ; xx [ 832 ]
= xx [ 507 ] * state [ 31 ] - xx [ 517 ] * state [ 33 ] ; xx [ 833 ] = xx [
512 ] * state [ 31 ] - xx [ 521 ] * state [ 33 ] ; xx [ 834 ] = xx [ 525 ] *
state [ 33 ] + xx [ 515 ] * state [ 31 ] ; xx [ 835 ] = xx [ 517 ] * state [
32 ] + xx [ 503 ] * state [ 31 ] ; xx [ 836 ] = xx [ 521 ] * state [ 32 ] -
xx [ 511 ] * state [ 31 ] ; xx [ 837 ] = - ( xx [ 525 ] * state [ 32 ] + xx [
514 ] * state [ 31 ] ) ; pm_math_Matrix3x3_compose_ra ( xx + 820 , xx + 829 ,
xx + 933 ) ; xx [ 503 ] = xx [ 974 ] * xx [ 974 ] ; xx [ 507 ] = xx [ 975 ] *
xx [ 976 ] ; xx [ 511 ] = xx [ 974 ] * xx [ 977 ] ; xx [ 512 ] = xx [ 975 ] *
xx [ 977 ] ; xx [ 514 ] = xx [ 974 ] * xx [ 976 ] ; xx [ 515 ] = xx [ 976 ] *
xx [ 977 ] ; xx [ 517 ] = xx [ 974 ] * xx [ 975 ] ; xx [ 820 ] = ( xx [ 503 ]
+ xx [ 975 ] * xx [ 975 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 821 ] = ( xx [ 507
] + xx [ 511 ] ) * xx [ 21 ] ; xx [ 822 ] = xx [ 21 ] * ( xx [ 512 ] - xx [
514 ] ) ; xx [ 823 ] = xx [ 21 ] * ( xx [ 507 ] - xx [ 511 ] ) ; xx [ 824 ] =
( xx [ 503 ] + xx [ 976 ] * xx [ 976 ] ) * xx [ 21 ] - xx [ 55 ] ; xx [ 825 ]
= ( xx [ 515 ] + xx [ 517 ] ) * xx [ 21 ] ; xx [ 826 ] = ( xx [ 512 ] + xx [
514 ] ) * xx [ 21 ] ; xx [ 827 ] = xx [ 21 ] * ( xx [ 515 ] - xx [ 517 ] ) ;
xx [ 828 ] = ( xx [ 503 ] + xx [ 977 ] * xx [ 977 ] ) * xx [ 21 ] - xx [ 55 ]
; pm_math_Matrix3x3_postCross_ra ( xx + 820 , xx + 460 , xx + 829 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 829 , xx + 479 , xx + 820 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 709 , xx + 993 , xx + 460 ) ; xx [ 479 ] =
xx [ 915 ] ; xx [ 480 ] = xx [ 56 ] ; xx [ 481 ] = xx [ 908 ] ; xx [ 55 ] =
xx [ 188 ] * xx [ 929 ] ; xx [ 56 ] = xx [ 194 ] * xx [ 932 ] + xx [ 915 ] *
xx [ 188 ] ; xx [ 503 ] = xx [ 194 ] * xx [ 929 ] ; xx [ 529 ] = xx [ 55 ] ;
xx [ 530 ] = xx [ 56 ] ; xx [ 531 ] = - xx [ 503 ] ; pm_math_Vector3_cross_ra
( xx + 479 , xx + 529 , xx + 536 ) ; xx [ 479 ] = state [ 26 ] * state [ 26 ]
; xx [ 529 ] = - ( xx [ 508 ] * xx [ 82 ] ) ; xx [ 530 ] = xx [ 82 ] * xx [
513 ] ; xx [ 531 ] = xx [ 82 ] * xx [ 516 ] ; pm_math_Quaternion_xform_ra (
xx + 947 , xx + 529 , xx + 511 ) ; xx [ 480 ] = xx [ 952 ] * xx [ 472 ] - xx
[ 325 ] * xx [ 956 ] ; xx [ 481 ] = xx [ 944 ] * xx [ 472 ] ; xx [ 507 ] = xx
[ 944 ] * xx [ 325 ] ; xx [ 514 ] = xx [ 480 ] ; xx [ 515 ] = - xx [ 481 ] ;
xx [ 516 ] = - xx [ 507 ] ; pm_math_Vector3_cross_ra ( xx + 978 , xx + 514 ,
xx + 529 ) ; xx [ 508 ] = xx [ 325 ] + xx [ 21 ] * ( xx [ 530 ] - xx [ 481 ]
* xx [ 921 ] ) ; xx [ 514 ] = - ( xx [ 508 ] * xx [ 62 ] ) ; xx [ 515 ] = (
xx [ 480 ] * xx [ 921 ] + xx [ 529 ] ) * xx [ 21 ] * xx [ 62 ] + xx [ 371 ] *
( xx [ 21 ] * ( xx [ 531 ] - xx [ 507 ] * xx [ 921 ] ) - xx [ 472 ] ) ; xx [
516 ] = - ( xx [ 508 ] * xx [ 371 ] ) ; pm_math_Quaternion_xform_ra ( xx +
947 , xx + 514 , xx + 529 ) ; xx [ 62 ] = xx [ 13 ] * xx [ 443 ] ; xx [ 325 ]
= xx [ 5 ] * xx [ 443 ] ; xx [ 371 ] = xx [ 944 ] * xx [ 62 ] - xx [ 325 ] *
xx [ 956 ] ; xx [ 472 ] = xx [ 952 ] * xx [ 325 ] ; xx [ 514 ] = - ( xx [ 952
] * xx [ 62 ] ) ; xx [ 515 ] = xx [ 371 ] ; xx [ 516 ] = - xx [ 472 ] ;
pm_math_Vector3_cross_ra ( xx + 978 , xx + 514 , xx + 541 ) ; xx [ 480 ] = xx
[ 487 ] - xx [ 392 ] ; xx [ 392 ] = xx [ 496 ] - xx [ 444 ] ; xx [ 514 ] = xx
[ 480 ] - xx [ 962 ] * xx [ 62 ] ; xx [ 515 ] = xx [ 137 ] * xx [ 443 ] - xx
[ 493 ] + xx [ 968 ] * xx [ 62 ] + xx [ 981 ] * xx [ 325 ] + xx [ 96 ] ; xx [
516 ] = xx [ 392 ] - xx [ 962 ] * xx [ 325 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 970 , xx + 514 , xx + 548 ) ; xx [
325 ] = xx [ 518 ] - ( xx [ 413 ] * ( xx [ 542 ] - xx [ 371 ] * xx [ 921 ] )
- xx [ 415 ] * xx [ 550 ] ) ; xx [ 371 ] = xx [ 519 ] - ( ( xx [ 62 ] + xx [
21 ] * ( xx [ 543 ] + xx [ 472 ] * xx [ 921 ] ) ) * xx [ 395 ] + xx [ 415 ] *
xx [ 549 ] ) ; xx [ 823 ] = xx [ 379 ] * xx [ 189 ] - ( xx [ 40 ] * xx [ 144
] - xx [ 67 ] * xx [ 149 ] + xx [ 36 ] - ( ( xx [ 558 ] + xx [ 608 ] + xx [
21 ] * xx [ 434 ] ) * xx [ 82 ] + xx [ 178 ] + ( ( xx [ 51 ] * xx [ 300 ] +
xx [ 419 ] ) * xx [ 21 ] - xx [ 194 ] ) * xx [ 75 ] + xx [ 410 ] + xx [ 21 ]
* xx [ 422 ] ) + xx [ 160 ] * xx [ 14 ] + xx [ 292 ] * xx [ 46 ] + xx [ 110 ]
* xx [ 60 ] + xx [ 38 ] * xx [ 61 ] + xx [ 136 ] * xx [ 66 ] + xx [ 165 ] *
xx [ 69 ] + xx [ 39 ] * xx [ 77 ] ) + xx [ 375 ] * xx [ 95 ] + xx [ 343 ] *
xx [ 105 ] ; xx [ 824 ] = xx [ 465 ] * xx [ 189 ] - ( xx [ 85 ] * xx [ 144 ]
- xx [ 115 ] * xx [ 149 ] + xx [ 119 ] - ( ( xx [ 559 ] + xx [ 609 ] + xx [
21 ] * xx [ 435 ] ) * xx [ 82 ] + xx [ 179 ] + ( xx [ 420 ] - xx [ 300 ] * xx
[ 53 ] ) * xx [ 21 ] * xx [ 75 ] + xx [ 411 ] + xx [ 21 ] * xx [ 423 ] ) + xx
[ 418 ] * xx [ 14 ] + xx [ 446 ] * xx [ 46 ] + xx [ 449 ] * xx [ 60 ] + xx [
459 ] * xx [ 61 ] + xx [ 426 ] * xx [ 66 ] + xx [ 427 ] * xx [ 69 ] + xx [
430 ] * xx [ 77 ] ) + xx [ 457 ] * xx [ 95 ] + xx [ 367 ] * xx [ 105 ] ; xx [
825 ] = xx [ 177 ] * xx [ 189 ] - ( xx [ 120 ] * xx [ 144 ] - xx [ 143 ] * xx
[ 149 ] + xx [ 101 ] - ( ( xx [ 560 ] + xx [ 610 ] + xx [ 21 ] * xx [ 436 ] )
* xx [ 82 ] + xx [ 180 ] + ( xx [ 188 ] + xx [ 21 ] * ( xx [ 421 ] + xx [ 74
] * xx [ 300 ] ) ) * xx [ 75 ] + xx [ 412 ] + xx [ 21 ] * xx [ 424 ] ) + xx [
141 ] * xx [ 14 ] + xx [ 157 ] * xx [ 46 ] + xx [ 158 ] * xx [ 60 ] + xx [
289 ] * xx [ 61 ] + xx [ 153 ] * xx [ 66 ] + xx [ 133 ] * xx [ 69 ] + xx [
134 ] * xx [ 77 ] ) + xx [ 163 ] * xx [ 95 ] + xx [ 167 ] * xx [ 105 ] ; xx [
826 ] = xx [ 666 ] * xx [ 176 ] - ( xx [ 36 ] - ( xx [ 67 ] * xx [ 299 ] + xx
[ 40 ] * xx [ 298 ] ) - ( ( xx [ 437 ] + xx [ 599 ] + xx [ 21 ] * xx [ 466 ]
) * xx [ 82 ] + xx [ 196 ] + ( ( xx [ 260 ] - xx [ 214 ] * xx [ 625 ] ) * xx
[ 21 ] - xx [ 194 ] ) * xx [ 207 ] + xx [ 264 ] + xx [ 21 ] * xx [ 267 ] ) +
xx [ 306 ] * xx [ 14 ] + xx [ 398 ] * xx [ 46 ] + xx [ 456 ] * xx [ 60 ] + xx
[ 305 ] * xx [ 61 ] + xx [ 365 ] * xx [ 66 ] + xx [ 377 ] * xx [ 69 ] + xx [
397 ] * xx [ 77 ] ) + xx [ 662 ] * xx [ 102 ] + xx [ 636 ] * xx [ 103 ] ; xx
[ 827 ] = xx [ 693 ] * xx [ 176 ] - ( xx [ 119 ] - ( xx [ 115 ] * xx [ 299 ]
+ xx [ 85 ] * xx [ 298 ] ) - ( ( xx [ 438 ] + xx [ 600 ] + xx [ 21 ] * xx [
467 ] ) * xx [ 82 ] + xx [ 197 ] + ( xx [ 261 ] - xx [ 625 ] * xx [ 216 ] ) *
xx [ 21 ] * xx [ 207 ] + xx [ 265 ] + xx [ 21 ] * xx [ 268 ] ) + xx [ 475 ] *
xx [ 14 ] + xx [ 501 ] * xx [ 46 ] + xx [ 502 ] * xx [ 60 ] + xx [ 504 ] * xx
[ 61 ] + xx [ 476 ] * xx [ 66 ] + xx [ 477 ] * xx [ 69 ] + xx [ 478 ] * xx [
77 ] ) + xx [ 689 ] * xx [ 102 ] + xx [ 659 ] * xx [ 103 ] ; xx [ 828 ] = xx
[ 655 ] * xx [ 176 ] - ( xx [ 101 ] - ( xx [ 143 ] * xx [ 299 ] + xx [ 120 ]
* xx [ 298 ] ) - ( ( xx [ 439 ] + xx [ 601 ] + xx [ 21 ] * xx [ 468 ] ) * xx
[ 82 ] + xx [ 198 ] + ( xx [ 21 ] * ( xx [ 262 ] + xx [ 233 ] * xx [ 625 ] )
- xx [ 188 ] ) * xx [ 207 ] + xx [ 266 ] + xx [ 21 ] * xx [ 269 ] ) + xx [
380 ] * xx [ 14 ] + xx [ 382 ] * xx [ 46 ] + xx [ 394 ] * xx [ 60 ] + xx [
486 ] * xx [ 61 ] + xx [ 381 ] * xx [ 66 ] + xx [ 307 ] * xx [ 69 ] + xx [
355 ] * xx [ 77 ] ) + xx [ 675 ] * xx [ 102 ] + xx [ 654 ] * xx [ 103 ] ; xx
[ 829 ] = xx [ 783 ] * xx [ 220 ] - ( xx [ 67 ] * xx [ 488 ] - xx [ 40 ] * xx
[ 485 ] + xx [ 36 ] - ( ( xx [ 611 ] + xx [ 721 ] + xx [ 21 ] * xx [ 703 ] )
* xx [ 82 ] + xx [ 257 ] + ( ( xx [ 362 ] - xx [ 317 ] * xx [ 742 ] ) * xx [
21 ] - xx [ 194 ] ) * xx [ 273 ] + xx [ 329 ] + xx [ 21 ] * xx [ 368 ] ) + xx
[ 490 ] * xx [ 14 ] + xx [ 510 ] * xx [ 46 ] + xx [ 527 ] * xx [ 60 ] + xx [
489 ] * xx [ 61 ] + xx [ 495 ] * xx [ 66 ] + xx [ 506 ] * xx [ 69 ] + xx [
509 ] * xx [ 77 ] ) + xx [ 779 ] * xx [ 200 ] + xx [ 765 ] * xx [ 209 ] ; xx
[ 830 ] = xx [ 808 ] * xx [ 220 ] - ( xx [ 115 ] * xx [ 488 ] - xx [ 85 ] *
xx [ 485 ] + xx [ 119 ] - ( ( xx [ 612 ] + xx [ 722 ] + xx [ 21 ] * xx [ 704
] ) * xx [ 82 ] + xx [ 258 ] + ( xx [ 363 ] - xx [ 742 ] * xx [ 318 ] ) * xx
[ 21 ] * xx [ 273 ] + xx [ 330 ] + xx [ 21 ] * xx [ 369 ] ) + xx [ 520 ] * xx
[ 14 ] + xx [ 526 ] * xx [ 46 ] + xx [ 528 ] * xx [ 60 ] + xx [ 551 ] * xx [
61 ] + xx [ 522 ] * xx [ 66 ] + xx [ 523 ] * xx [ 69 ] + xx [ 524 ] * xx [ 77
] ) + xx [ 805 ] * xx [ 200 ] + xx [ 776 ] * xx [ 209 ] ; xx [ 831 ] = xx [
772 ] * xx [ 220 ] - ( xx [ 143 ] * xx [ 488 ] - xx [ 120 ] * xx [ 485 ] + xx
[ 101 ] - ( ( xx [ 613 ] + xx [ 723 ] + xx [ 21 ] * xx [ 705 ] ) * xx [ 82 ]
+ xx [ 259 ] + ( xx [ 188 ] + xx [ 21 ] * ( xx [ 364 ] - xx [ 323 ] * xx [
742 ] ) ) * xx [ 273 ] + xx [ 331 ] + xx [ 21 ] * xx [ 370 ] ) + xx [ 497 ] *
xx [ 14 ] + xx [ 499 ] * xx [ 46 ] + xx [ 500 ] * xx [ 60 ] + xx [ 505 ] * xx
[ 61 ] + xx [ 498 ] * xx [ 66 ] + xx [ 491 ] * xx [ 69 ] + xx [ 492 ] * xx [
77 ] ) + xx [ 792 ] * xx [ 200 ] + xx [ 771 ] * xx [ 209 ] ; xx [ 832 ] = xx
[ 892 ] * xx [ 290 ] - ( xx [ 67 ] * xx [ 533 ] + xx [ 40 ] * xx [ 532 ] + xx
[ 36 ] - ( ( xx [ 614 ] + xx [ 809 ] + xx [ 21 ] * xx [ 706 ] ) * xx [ 82 ] +
xx [ 356 ] + ( ( xx [ 403 ] * xx [ 843 ] + xx [ 469 ] ) * xx [ 21 ] - xx [
194 ] ) * xx [ 416 ] + xx [ 431 ] + xx [ 21 ] * xx [ 440 ] ) + xx [ 535 ] *
xx [ 14 ] + xx [ 557 ] * xx [ 46 ] + xx [ 574 ] * xx [ 60 ] + xx [ 534 ] * xx
[ 61 ] + xx [ 544 ] * xx [ 66 ] + xx [ 553 ] * xx [ 69 ] + xx [ 556 ] * xx [
77 ] ) + xx [ 888 ] * xx [ 242 ] + xx [ 857 ] * xx [ 271 ] ; xx [ 833 ] = xx
[ 917 ] * xx [ 290 ] - ( xx [ 115 ] * xx [ 533 ] + xx [ 85 ] * xx [ 532 ] +
xx [ 119 ] - ( ( xx [ 615 ] + xx [ 810 ] + xx [ 21 ] * xx [ 707 ] ) * xx [ 82
] + xx [ 357 ] + ( xx [ 470 ] - xx [ 843 ] * xx [ 404 ] ) * xx [ 21 ] * xx [
416 ] + xx [ 432 ] + xx [ 21 ] * xx [ 441 ] ) + xx [ 567 ] * xx [ 14 ] + xx [
573 ] * xx [ 46 ] + xx [ 575 ] * xx [ 60 ] + xx [ 598 ] * xx [ 61 ] + xx [
569 ] * xx [ 66 ] + xx [ 570 ] * xx [ 69 ] + xx [ 571 ] * xx [ 77 ] ) + xx [
914 ] * xx [ 242 ] + xx [ 885 ] * xx [ 271 ] ; xx [ 834 ] = xx [ 881 ] * xx [
290 ] - ( xx [ 143 ] * xx [ 533 ] + xx [ 120 ] * xx [ 532 ] + xx [ 101 ] - (
( xx [ 616 ] + xx [ 811 ] + xx [ 21 ] * xx [ 708 ] ) * xx [ 82 ] + xx [ 358 ]
+ ( xx [ 188 ] + xx [ 21 ] * ( xx [ 471 ] + xx [ 405 ] * xx [ 843 ] ) ) * xx
[ 416 ] + xx [ 433 ] + xx [ 21 ] * xx [ 442 ] ) + xx [ 546 ] * xx [ 14 ] + xx
[ 552 ] * xx [ 46 ] + xx [ 555 ] * xx [ 60 ] + xx [ 578 ] * xx [ 61 ] + xx [
547 ] * xx [ 66 ] + xx [ 539 ] * xx [ 69 ] + xx [ 540 ] * xx [ 77 ] ) + xx [
901 ] * xx [ 242 ] + xx [ 880 ] * xx [ 271 ] ; xx [ 835 ] = xx [ 983 ] * xx [
443 ] - ( xx [ 40 ] * xx [ 577 ] - xx [ 67 ] * xx [ 580 ] + xx [ 36 ] - ( (
xx [ 724 ] + xx [ 933 ] + xx [ 21 ] * xx [ 820 ] ) * xx [ 82 ] + xx [ 460 ] +
( ( xx [ 536 ] - xx [ 55 ] * xx [ 909 ] ) * xx [ 21 ] - xx [ 194 ] ) * xx [
479 ] + xx [ 511 ] + xx [ 21 ] * xx [ 529 ] ) + xx [ 142 ] * xx [ 14 ] + xx [
173 ] * xx [ 46 ] + xx [ 195 ] * xx [ 60 ] + xx [ 32 ] * xx [ 61 ] + xx [ 148
] * xx [ 66 ] + xx [ 159 ] * xx [ 69 ] + xx [ 586 ] * xx [ 77 ] ) + xx [ 964
] * xx [ 325 ] + xx [ 2 ] * xx [ 371 ] ; xx [ 836 ] = xx [ 1002 ] * xx [ 443
] - ( xx [ 85 ] * xx [ 577 ] - xx [ 115 ] * xx [ 580 ] + xx [ 119 ] - ( ( xx
[ 725 ] + xx [ 934 ] + xx [ 21 ] * xx [ 821 ] ) * xx [ 82 ] + xx [ 461 ] + (
xx [ 537 ] - xx [ 909 ] * xx [ 56 ] ) * xx [ 21 ] * xx [ 479 ] + xx [ 512 ] +
xx [ 21 ] * xx [ 530 ] ) + xx [ 293 ] * xx [ 14 ] + xx [ 417 ] * xx [ 46 ] +
xx [ 287 ] * xx [ 60 ] + xx [ 581 ] * xx [ 61 ] + xx [ 294 ] * xx [ 66 ] + xx
[ 139 ] * xx [ 69 ] + xx [ 171 ] * xx [ 77 ] ) + xx [ 987 ] * xx [ 325 ] + xx
[ 960 ] * xx [ 371 ] ; xx [ 837 ] = xx [ 87 ] * xx [ 443 ] - ( xx [ 120 ] *
xx [ 577 ] - xx [ 143 ] * xx [ 580 ] + xx [ 101 ] - ( ( xx [ 726 ] + xx [ 935
] + xx [ 21 ] * xx [ 822 ] ) * xx [ 82 ] + xx [ 462 ] + ( xx [ 21 ] * ( xx [
538 ] + xx [ 503 ] * xx [ 909 ] ) - xx [ 188 ] ) * xx [ 479 ] + xx [ 513 ] +
xx [ 21 ] * xx [ 531 ] ) + xx [ 593 ] * xx [ 14 ] + xx [ 151 ] * xx [ 46 ] +
xx [ 172 ] * xx [ 60 ] + xx [ 175 ] * xx [ 61 ] + xx [ 152 ] * xx [ 66 ] + xx
[ 140 ] * xx [ 69 ] + xx [ 138 ] * xx [ 77 ] ) + xx [ 996 ] * xx [ 325 ] + xx
[ 84 ] * xx [ 371 ] ; memcpy ( xx + 1288 , xx + 1063 , 225 * sizeof ( double
) ) ; factorAndSolveSymmetric ( xx + 1288 , 15 , xx + 703 , ii + 0 , xx + 823
, xx + 599 , xx + 1513 ) ; xx [ 60 ] = xx [ 136 ] * xx [ 599 ] + xx [ 426 ] *
xx [ 600 ] + xx [ 153 ] * xx [ 601 ] + xx [ 365 ] * xx [ 602 ] + xx [ 476 ] *
xx [ 603 ] + xx [ 381 ] * xx [ 604 ] + xx [ 495 ] * xx [ 605 ] + xx [ 522 ] *
xx [ 606 ] + xx [ 498 ] * xx [ 607 ] + xx [ 544 ] * xx [ 608 ] + xx [ 569 ] *
xx [ 609 ] + xx [ 547 ] * xx [ 610 ] + xx [ 148 ] * xx [ 611 ] + xx [ 294 ] *
xx [ 612 ] + xx [ 152 ] * xx [ 613 ] - xx [ 72 ] ; xx [ 61 ] = xx [ 165 ] *
xx [ 599 ] + xx [ 427 ] * xx [ 600 ] + xx [ 133 ] * xx [ 601 ] + xx [ 377 ] *
xx [ 602 ] + xx [ 477 ] * xx [ 603 ] + xx [ 307 ] * xx [ 604 ] + xx [ 506 ] *
xx [ 605 ] + xx [ 523 ] * xx [ 606 ] + xx [ 491 ] * xx [ 607 ] + xx [ 553 ] *
xx [ 608 ] + xx [ 570 ] * xx [ 609 ] + xx [ 539 ] * xx [ 610 ] + xx [ 159 ] *
xx [ 611 ] + xx [ 139 ] * xx [ 612 ] + xx [ 140 ] * xx [ 613 ] - xx [ 76 ] ;
xx [ 62 ] = xx [ 39 ] * xx [ 599 ] + xx [ 430 ] * xx [ 600 ] + xx [ 134 ] *
xx [ 601 ] + xx [ 397 ] * xx [ 602 ] + xx [ 478 ] * xx [ 603 ] + xx [ 355 ] *
xx [ 604 ] + xx [ 509 ] * xx [ 605 ] + xx [ 524 ] * xx [ 606 ] + xx [ 492 ] *
xx [ 607 ] + xx [ 556 ] * xx [ 608 ] + xx [ 571 ] * xx [ 609 ] + xx [ 540 ] *
xx [ 610 ] + xx [ 586 ] * xx [ 611 ] + xx [ 171 ] * xx [ 612 ] + xx [ 138 ] *
xx [ 613 ] - xx [ 26 ] ; solveSymmetricPosDef ( xx + 124 , xx + 60 , 3 , 1 ,
xx + 74 , xx + 101 ) ; xx [ 60 ] = xx [ 68 ] + xx [ 57 ] * xx [ 74 ] + xx [
83 ] * xx [ 75 ] ; xx [ 61 ] = xx [ 73 ] - xx [ 89 ] * xx [ 74 ] + xx [ 88 ]
* xx [ 75 ] ; xx [ 62 ] = xx [ 63 ] + xx [ 59 ] * xx [ 76 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 60 , xx + 55 ) ; xx [ 59 ] = xx
[ 54 ] + xx [ 90 ] * xx [ 76 ] ; xx [ 60 ] = xx [ 25 ] - xx [ 91 ] * xx [ 76
] ; xx [ 61 ] = xx [ 71 ] - xx [ 166 ] * xx [ 74 ] + xx [ 93 ] * xx [ 75 ] ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 59 , xx + 66 ) ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 66 , xx + 59 ) ; xx [ 14 ] = xx [
33 ] + xx [ 55 ] + xx [ 59 ] + xx [ 19 ] ; xx [ 19 ] = xx [ 34 ] + xx [ 56 ]
+ xx [ 60 ] + xx [ 41 ] ; xx [ 25 ] = xx [ 68 ] + xx [ 22 ] ; xx [ 22 ] = xx
[ 35 ] + xx [ 57 ] + xx [ 61 ] + xx [ 24 ] ; xx [ 24 ] = xx [ 67 ] + xx [ 47
] ; xx [ 33 ] = xx [ 292 ] * xx [ 599 ] + xx [ 446 ] * xx [ 600 ] + xx [ 157
] * xx [ 601 ] + xx [ 398 ] * xx [ 602 ] + xx [ 501 ] * xx [ 603 ] + xx [ 382
] * xx [ 604 ] + xx [ 510 ] * xx [ 605 ] + xx [ 526 ] * xx [ 606 ] + xx [ 499
] * xx [ 607 ] + xx [ 557 ] * xx [ 608 ] + xx [ 573 ] * xx [ 609 ] + xx [ 552
] * xx [ 610 ] + xx [ 173 ] * xx [ 611 ] + xx [ 417 ] * xx [ 612 ] + xx [ 151
] * xx [ 613 ] - xx [ 14 ] ; xx [ 34 ] = xx [ 110 ] * xx [ 599 ] + xx [ 449 ]
* xx [ 600 ] + xx [ 158 ] * xx [ 601 ] + xx [ 456 ] * xx [ 602 ] + xx [ 502 ]
* xx [ 603 ] + xx [ 394 ] * xx [ 604 ] + xx [ 527 ] * xx [ 605 ] + xx [ 528 ]
* xx [ 606 ] + xx [ 500 ] * xx [ 607 ] + xx [ 574 ] * xx [ 608 ] + xx [ 575 ]
* xx [ 609 ] + xx [ 555 ] * xx [ 610 ] + xx [ 195 ] * xx [ 611 ] + xx [ 287 ]
* xx [ 612 ] + xx [ 172 ] * xx [ 613 ] - ( xx [ 19 ] - xx [ 25 ] * xx [ 82 ]
) ; xx [ 35 ] = xx [ 38 ] * xx [ 599 ] + xx [ 459 ] * xx [ 600 ] + xx [ 289 ]
* xx [ 601 ] + xx [ 305 ] * xx [ 602 ] + xx [ 504 ] * xx [ 603 ] + xx [ 486 ]
* xx [ 604 ] + xx [ 489 ] * xx [ 605 ] + xx [ 551 ] * xx [ 606 ] + xx [ 505 ]
* xx [ 607 ] + xx [ 534 ] * xx [ 608 ] + xx [ 598 ] * xx [ 609 ] + xx [ 578 ]
* xx [ 610 ] + xx [ 32 ] * xx [ 611 ] + xx [ 581 ] * xx [ 612 ] + xx [ 175 ]
* xx [ 613 ] - ( xx [ 22 ] + xx [ 24 ] * xx [ 82 ] ) ; solveSymmetricPosDef (
xx + 277 , xx + 33 , 3 , 1 , xx + 38 , xx + 53 ) ; xx [ 32 ] = xx [ 14 ] + xx
[ 169 ] * xx [ 38 ] + xx [ 227 ] * xx [ 39 ] + xx [ 240 ] * xx [ 40 ] ; xx [
33 ] = xx [ 19 ] + xx [ 38 ] * xx [ 97 ] + xx [ 244 ] * xx [ 39 ] + xx [ 241
] * xx [ 40 ] ; xx [ 34 ] = xx [ 22 ] + xx [ 38 ] * xx [ 104 ] + xx [ 107 ] *
xx [ 39 ] + xx [ 224 ] * xx [ 40 ] ; pm_math_Quaternion_xform_ra ( xx + 9 ,
xx + 32 , xx + 53 ) ; xx [ 32 ] = xx [ 66 ] + xx [ 37 ] + xx [ 38 ] * xx [ 92
] + xx [ 168 ] * xx [ 39 ] + xx [ 183 ] * xx [ 40 ] ; xx [ 33 ] = xx [ 24 ] +
xx [ 38 ] * xx [ 248 ] + xx [ 184 ] * xx [ 39 ] + xx [ 253 ] * xx [ 40 ] ; xx
[ 34 ] = xx [ 25 ] + xx [ 38 ] * xx [ 226 ] + xx [ 263 ] * xx [ 39 ] + xx [
245 ] * xx [ 40 ] ; pm_math_Quaternion_xform_ra ( xx + 9 , xx + 32 , xx + 24
) ; pm_math_Vector3_cross_ra ( xx + 112 , xx + 24 , xx + 32 ) ; xx [ 14 ] = (
input [ 0 ] - ( ( xx [ 55 ] + xx [ 34 ] - xx [ 23 ] ) * xx [ 13 ] - ( xx [ 53
] + xx [ 32 ] - xx [ 65 ] ) * xx [ 5 ] + ( xx [ 25 ] - xx [ 70 ] ) * xx [ 137
] ) + xx [ 160 ] * xx [ 599 ] + xx [ 418 ] * xx [ 600 ] + xx [ 141 ] * xx [
601 ] + xx [ 306 ] * xx [ 602 ] + xx [ 475 ] * xx [ 603 ] + xx [ 380 ] * xx [
604 ] + xx [ 490 ] * xx [ 605 ] + xx [ 520 ] * xx [ 606 ] + xx [ 497 ] * xx [
607 ] + xx [ 535 ] * xx [ 608 ] + xx [ 567 ] * xx [ 609 ] + xx [ 546 ] * xx [
610 ] + xx [ 142 ] * xx [ 611 ] + xx [ 293 ] * xx [ 612 ] + xx [ 593 ] * xx [
613 ] ) / xx [ 234 ] - xx [ 7 ] ; xx [ 7 ] = xx [ 13 ] * xx [ 14 ] ; xx [ 19
] = xx [ 6 ] * xx [ 7 ] ; xx [ 22 ] = xx [ 5 ] * xx [ 14 ] ; xx [ 23 ] = xx [
4 ] * xx [ 7 ] - xx [ 22 ] * xx [ 8 ] ; xx [ 4 ] = xx [ 6 ] * xx [ 22 ] ; xx
[ 24 ] = - xx [ 19 ] ; xx [ 25 ] = xx [ 23 ] ; xx [ 26 ] = - xx [ 4 ] ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 24 , xx + 32 ) ; xx [ 6 ] = ( xx [
19 ] * xx [ 3 ] + xx [ 32 ] ) * xx [ 21 ] - xx [ 22 ] ; xx [ 8 ] = xx [ 21 ]
* ( xx [ 33 ] - xx [ 23 ] * xx [ 3 ] ) ; xx [ 16 ] = xx [ 7 ] + xx [ 21 ] * (
xx [ 34 ] + xx [ 4 ] * xx [ 3 ] ) ; xx [ 17 ] = xx [ 6 ] ; xx [ 18 ] = xx [ 8
] ; xx [ 19 ] = xx [ 16 ] ; xx [ 23 ] = xx [ 94 ] - xx [ 108 ] * xx [ 7 ] ;
xx [ 24 ] = xx [ 137 ] * xx [ 14 ] - xx [ 64 ] + xx [ 106 ] * xx [ 7 ] + xx [
111 ] * xx [ 22 ] + xx [ 96 ] ; xx [ 25 ] = xx [ 48 ] - xx [ 108 ] * xx [ 22
] ; pm_math_Quaternion_inverseXform_ra ( xx + 9 , xx + 23 , xx + 32 ) ; xx [
3 ] = xx [ 38 ] - ( pm_math_Vector3_dot_ra ( xx + 235 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 308 , xx + 32 ) ) ; xx [ 4 ] = xx [ 39 ] - (
pm_math_Vector3_dot_ra ( xx + 311 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx +
320 , xx + 32 ) ) ; xx [ 7 ] = xx [ 40 ] - ( pm_math_Vector3_dot_ra ( xx +
344 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx + 326 , xx + 32 ) ) ; xx [ 9 ]
= xx [ 6 ] + xx [ 3 ] + xx [ 453 ] ; xx [ 10 ] = xx [ 8 ] + xx [ 4 ] + xx [
454 ] ; xx [ 11 ] = xx [ 16 ] + xx [ 7 ] + xx [ 455 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 42 , xx + 9 , xx + 16 ) ;
pm_math_Vector3_cross_ra ( xx + 9 , xx + 98 , xx + 22 ) ; xx [ 8 ] = xx [ 32
] + xx [ 27 ] + xx [ 22 ] ; xx [ 9 ] = xx [ 33 ] + xx [ 82 ] * xx [ 7 ] + xx
[ 15 ] + xx [ 23 ] ; xx [ 10 ] = xx [ 34 ] - xx [ 82 ] * xx [ 4 ] + xx [ 20 ]
+ xx [ 24 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 42 , xx + 8 , xx + 22
) ; xx [ 6 ] = xx [ 74 ] - ( xx [ 187 ] * xx [ 16 ] + xx [ 217 ] * xx [ 17 ]
- xx [ 219 ] * xx [ 24 ] ) ; xx [ 8 ] = xx [ 75 ] - ( xx [ 221 ] * xx [ 16 ]
+ xx [ 223 ] * xx [ 17 ] + xx [ 229 ] * xx [ 24 ] ) ; xx [ 9 ] = xx [ 76 ] -
( xx [ 238 ] * xx [ 18 ] + xx [ 239 ] * xx [ 22 ] - xx [ 246 ] * xx [ 23 ] )
; xx [ 10 ] = xx [ 341 ] ; xx [ 11 ] = - ( xx [ 359 ] + xx [ 888 ] * xx [ 608
] + xx [ 914 ] * xx [ 609 ] + xx [ 901 ] * xx [ 610 ] ) ; xx [ 12 ] = - ( xx
[ 354 ] + xx [ 857 ] * xx [ 608 ] + xx [ 885 ] * xx [ 609 ] + xx [ 880 ] * xx
[ 610 ] ) ; solveSymmetricPosDef ( xx + 383 , xx + 10 , 3 , 1 , xx + 22 , xx
+ 25 ) ; xx [ 10 ] = xx [ 335 ] + xx [ 28 ] * xx [ 22 ] ; xx [ 11 ] = xx [
342 ] + xx [ 29 ] * xx [ 23 ] ; xx [ 12 ] = xx [ 360 ] + xx [ 29 ] * xx [ 24
] ; pm_math_Quaternion_xform_ra ( xx + 865 , xx + 10 , xx + 25 ) ; xx [ 10 ]
= xx [ 373 ] ; xx [ 11 ] = xx [ 372 ] + xx [ 361 ] * xx [ 24 ] ; xx [ 12 ] =
xx [ 304 ] - xx [ 361 ] * xx [ 23 ] ; pm_math_Quaternion_xform_ra ( xx + 865
, xx + 10 , xx + 32 ) ; pm_math_Vector3_cross_ra ( xx + 904 , xx + 32 , xx +
10 ) ; xx [ 11 ] = ( input [ 1 ] - ( ( xx [ 25 ] + xx [ 10 ] + xx [ 378 ] ) *
xx [ 5 ] + xx [ 13 ] * ( xx [ 27 ] + xx [ 12 ] - xx [ 396 ] ) + ( xx [ 33 ] +
xx [ 399 ] ) * xx [ 137 ] ) - ( xx [ 892 ] * xx [ 608 ] + xx [ 917 ] * xx [
609 ] + xx [ 881 ] * xx [ 610 ] ) ) / xx [ 928 ] - xx [ 275 ] ; xx [ 10 ] =
xx [ 5 ] * xx [ 11 ] ; xx [ 12 ] = xx [ 13 ] * xx [ 11 ] ; xx [ 15 ] = xx [
847 ] * xx [ 12 ] ; xx [ 19 ] = xx [ 10 ] * xx [ 848 ] - xx [ 841 ] * xx [ 12
] ; xx [ 20 ] = xx [ 847 ] * xx [ 10 ] ; xx [ 25 ] = xx [ 15 ] ; xx [ 26 ] =
xx [ 19 ] ; xx [ 27 ] = - xx [ 20 ] ; pm_math_Vector3_cross_ra ( xx + 873 ,
xx + 25 , xx + 32 ) ; xx [ 25 ] = xx [ 10 ] + ( xx [ 32 ] - xx [ 15 ] * xx [
840 ] ) * xx [ 21 ] ; xx [ 15 ] = xx [ 22 ] - xx [ 25 ] ; xx [ 22 ] = xx [ 21
] * ( xx [ 33 ] - xx [ 19 ] * xx [ 840 ] ) ; xx [ 35 ] = xx [ 425 ] - xx [
884 ] * xx [ 12 ] ; xx [ 36 ] = xx [ 137 ] * xx [ 11 ] - xx [ 393 ] + xx [
887 ] * xx [ 12 ] - xx [ 889 ] * xx [ 10 ] + xx [ 96 ] ; xx [ 37 ] = xx [ 319
] + xx [ 884 ] * xx [ 10 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 865 ,
xx + 35 , xx + 38 ) ; xx [ 10 ] = xx [ 23 ] - ( xx [ 395 ] * xx [ 22 ] - xx [
415 ] * xx [ 40 ] ) ; xx [ 19 ] = xx [ 12 ] + xx [ 21 ] * ( xx [ 34 ] + xx [
20 ] * xx [ 840 ] ) ; xx [ 12 ] = xx [ 24 ] - ( xx [ 19 ] * xx [ 395 ] + xx [
415 ] * xx [ 39 ] ) ; xx [ 32 ] = xx [ 447 ] ; xx [ 33 ] = - ( xx [ 463 ] +
xx [ 964 ] * xx [ 611 ] + xx [ 987 ] * xx [ 612 ] + xx [ 996 ] * xx [ 613 ] )
; xx [ 34 ] = - ( xx [ 458 ] + xx [ 2 ] * xx [ 611 ] + xx [ 960 ] * xx [ 612
] + xx [ 84 ] * xx [ 613 ] ) ; solveSymmetricPosDef ( xx + 383 , xx + 32 , 3
, 1 , xx + 35 , xx + 38 ) ; xx [ 32 ] = xx [ 445 ] + xx [ 28 ] * xx [ 35 ] ;
xx [ 33 ] = xx [ 448 ] + xx [ 29 ] * xx [ 36 ] ; xx [ 34 ] = xx [ 464 ] + xx
[ 29 ] * xx [ 37 ] ; pm_math_Quaternion_xform_ra ( xx + 970 , xx + 32 , xx +
38 ) ; xx [ 32 ] = xx [ 474 ] ; xx [ 33 ] = xx [ 473 ] + xx [ 361 ] * xx [ 37
] ; xx [ 34 ] = xx [ 428 ] - xx [ 361 ] * xx [ 36 ] ;
pm_math_Quaternion_xform_ra ( xx + 970 , xx + 32 , xx + 41 ) ;
pm_math_Vector3_cross_ra ( xx + 993 , xx + 41 , xx + 32 ) ; xx [ 2 ] = (
input [ 2 ] - ( xx [ 13 ] * ( xx [ 40 ] + xx [ 34 ] - xx [ 251 ] ) - ( xx [
38 ] + xx [ 32 ] + xx [ 414 ] ) * xx [ 5 ] + ( xx [ 42 ] - xx [ 494 ] ) * xx
[ 137 ] ) - ( xx [ 983 ] * xx [ 611 ] + xx [ 1002 ] * xx [ 612 ] + xx [ 87 ]
* xx [ 613 ] ) ) / xx [ 232 ] - xx [ 409 ] ; xx [ 20 ] = xx [ 13 ] * xx [ 2 ]
; xx [ 23 ] = xx [ 952 ] * xx [ 20 ] ; xx [ 24 ] = xx [ 5 ] * xx [ 2 ] ; xx [
26 ] = xx [ 944 ] * xx [ 20 ] - xx [ 24 ] * xx [ 956 ] ; xx [ 27 ] = xx [ 952
] * xx [ 24 ] ; xx [ 32 ] = - xx [ 23 ] ; xx [ 33 ] = xx [ 26 ] ; xx [ 34 ] =
- xx [ 27 ] ; pm_math_Vector3_cross_ra ( xx + 978 , xx + 32 , xx + 38 ) ; xx
[ 32 ] = ( xx [ 23 ] * xx [ 921 ] + xx [ 38 ] ) * xx [ 21 ] - xx [ 24 ] ; xx
[ 23 ] = xx [ 35 ] - xx [ 32 ] ; xx [ 33 ] = xx [ 21 ] * ( xx [ 39 ] - xx [
26 ] * xx [ 921 ] ) ; xx [ 41 ] = xx [ 480 ] - xx [ 962 ] * xx [ 20 ] ; xx [
42 ] = xx [ 137 ] * xx [ 2 ] - xx [ 493 ] + xx [ 968 ] * xx [ 20 ] + xx [ 981
] * xx [ 24 ] + xx [ 96 ] ; xx [ 43 ] = xx [ 392 ] - xx [ 962 ] * xx [ 24 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 970 , xx + 41 , xx + 44 ) ; xx [ 24
] = xx [ 36 ] - ( xx [ 395 ] * xx [ 33 ] - xx [ 415 ] * xx [ 46 ] ) ; xx [ 26
] = xx [ 20 ] + xx [ 21 ] * ( xx [ 40 ] + xx [ 27 ] * xx [ 921 ] ) ; xx [ 20
] = xx [ 37 ] - ( xx [ 26 ] * xx [ 395 ] + xx [ 415 ] * xx [ 45 ] ) ; xx [ 34
] = xx [ 150 ] ; xx [ 35 ] = - ( xx [ 170 ] + xx [ 375 ] * xx [ 599 ] + xx [
457 ] * xx [ 600 ] + xx [ 163 ] * xx [ 601 ] ) ; xx [ 36 ] = - ( xx [ 162 ] +
xx [ 343 ] * xx [ 599 ] + xx [ 367 ] * xx [ 600 ] + xx [ 167 ] * xx [ 601 ] )
; solveSymmetricPosDef ( xx + 383 , xx + 34 , 3 , 1 , xx + 37 , xx + 40 ) ;
xx [ 34 ] = xx [ 147 ] + xx [ 28 ] * xx [ 37 ] ; xx [ 35 ] = xx [ 161 ] + xx
[ 29 ] * xx [ 38 ] ; xx [ 36 ] = xx [ 174 ] + xx [ 29 ] * xx [ 39 ] ;
pm_math_Quaternion_xform_ra ( xx + 337 , xx + 34 , xx + 40 ) ; xx [ 34 ] = xx
[ 185 ] ; xx [ 35 ] = xx [ 181 ] + xx [ 361 ] * xx [ 39 ] ; xx [ 36 ] = xx [
135 ] - xx [ 361 ] * xx [ 38 ] ; pm_math_Quaternion_xform_ra ( xx + 337 , xx
+ 34 , xx + 43 ) ; pm_math_Vector3_cross_ra ( xx + 400 , xx + 43 , xx + 34 )
; xx [ 27 ] = ( input [ 3 ] - ( ( xx [ 40 ] + xx [ 34 ] + xx [ 186 ] ) * xx [
5 ] + xx [ 13 ] * ( xx [ 42 ] + xx [ 36 ] - xx [ 203 ] ) + ( xx [ 44 ] + xx [
206 ] ) * xx [ 137 ] ) - ( xx [ 379 ] * xx [ 599 ] + xx [ 465 ] * xx [ 600 ]
+ xx [ 177 ] * xx [ 601 ] ) ) / xx [ 429 ] - xx [ 109 ] ; xx [ 34 ] = xx [ 5
] * xx [ 27 ] ; xx [ 35 ] = xx [ 13 ] * xx [ 27 ] ; xx [ 36 ] = xx [ 324 ] *
xx [ 35 ] ; xx [ 40 ] = xx [ 34 ] * xx [ 336 ] - xx [ 302 ] * xx [ 35 ] ; xx
[ 41 ] = xx [ 324 ] * xx [ 34 ] ; xx [ 42 ] = xx [ 36 ] ; xx [ 43 ] = xx [ 40
] ; xx [ 44 ] = - xx [ 41 ] ; pm_math_Vector3_cross_ra ( xx + 351 , xx + 42 ,
xx + 45 ) ; xx [ 42 ] = xx [ 34 ] + ( xx [ 45 ] - xx [ 36 ] * xx [ 249 ] ) *
xx [ 21 ] ; xx [ 36 ] = xx [ 37 ] - xx [ 42 ] ; xx [ 37 ] = xx [ 21 ] * ( xx
[ 46 ] - xx [ 40 ] * xx [ 249 ] ) ; xx [ 53 ] = xx [ 116 ] - xx [ 366 ] * xx
[ 35 ] ; xx [ 54 ] = xx [ 137 ] * xx [ 27 ] - xx [ 218 ] + xx [ 374 ] * xx [
35 ] - xx [ 376 ] * xx [ 34 ] + xx [ 96 ] ; xx [ 55 ] = xx [ 117 ] + xx [ 366
] * xx [ 34 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 337 , xx + 53 , xx
+ 59 ) ; xx [ 34 ] = xx [ 38 ] - ( xx [ 395 ] * xx [ 37 ] - xx [ 415 ] * xx [
61 ] ) ; xx [ 38 ] = xx [ 35 ] + xx [ 21 ] * ( xx [ 47 ] + xx [ 41 ] * xx [
249 ] ) ; xx [ 35 ] = xx [ 39 ] - ( xx [ 38 ] * xx [ 395 ] + xx [ 415 ] * xx
[ 60 ] ) ; xx [ 39 ] = xx [ 193 ] ; xx [ 40 ] = - ( xx [ 205 ] + xx [ 662 ] *
xx [ 602 ] + xx [ 689 ] * xx [ 603 ] + xx [ 675 ] * xx [ 604 ] ) ; xx [ 41 ]
= - ( xx [ 204 ] + xx [ 636 ] * xx [ 602 ] + xx [ 659 ] * xx [ 603 ] + xx [
654 ] * xx [ 604 ] ) ; solveSymmetricPosDef ( xx + 383 , xx + 39 , 3 , 1 , xx
+ 43 , xx + 46 ) ; xx [ 39 ] = xx [ 182 ] + xx [ 28 ] * xx [ 43 ] ; xx [ 40 ]
= xx [ 202 ] + xx [ 29 ] * xx [ 44 ] ; xx [ 41 ] = xx [ 199 ] + xx [ 29 ] *
xx [ 45 ] ; pm_math_Quaternion_xform_ra ( xx + 638 , xx + 39 , xx + 46 ) ; xx
[ 39 ] = xx [ 213 ] ; xx [ 40 ] = xx [ 201 ] + xx [ 361 ] * xx [ 45 ] ; xx [
41 ] = xx [ 146 ] - xx [ 361 ] * xx [ 44 ] ; pm_math_Quaternion_xform_ra ( xx
+ 638 , xx + 39 , xx + 53 ) ; pm_math_Vector3_cross_ra ( xx + 678 , xx + 53 ,
xx + 39 ) ; xx [ 40 ] = ( input [ 4 ] - ( xx [ 13 ] * ( xx [ 48 ] + xx [ 41 ]
- xx [ 118 ] ) - ( xx [ 46 ] + xx [ 39 ] + xx [ 225 ] ) * xx [ 5 ] + ( xx [
54 ] - xx [ 228 ] ) * xx [ 137 ] ) - ( xx [ 666 ] * xx [ 602 ] + xx [ 693 ] *
xx [ 603 ] + xx [ 655 ] * xx [ 604 ] ) ) / xx [ 702 ] - xx [ 164 ] ; xx [ 39
] = xx [ 13 ] * xx [ 40 ] ; xx [ 41 ] = xx [ 635 ] * xx [ 39 ] ; xx [ 46 ] =
xx [ 5 ] * xx [ 40 ] ; xx [ 47 ] = xx [ 627 ] * xx [ 39 ] - xx [ 46 ] * xx [
637 ] ; xx [ 48 ] = xx [ 635 ] * xx [ 46 ] ; xx [ 53 ] = - xx [ 41 ] ; xx [
54 ] = xx [ 47 ] ; xx [ 55 ] = - xx [ 48 ] ; pm_math_Vector3_cross_ra ( xx +
646 , xx + 53 , xx + 59 ) ; xx [ 51 ] = ( xx [ 41 ] * xx [ 623 ] + xx [ 59 ]
) * xx [ 21 ] - xx [ 46 ] ; xx [ 41 ] = xx [ 43 ] - xx [ 51 ] ; xx [ 43 ] =
xx [ 21 ] * ( xx [ 60 ] - xx [ 47 ] * xx [ 623 ] ) ; xx [ 53 ] = xx [ 208 ] -
xx [ 658 ] * xx [ 39 ] ; xx [ 54 ] = xx [ 137 ] * xx [ 40 ] - xx [ 222 ] + xx
[ 661 ] * xx [ 39 ] + xx [ 663 ] * xx [ 46 ] + xx [ 96 ] ; xx [ 55 ] = xx [
145 ] - xx [ 658 ] * xx [ 46 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
638 , xx + 53 , xx + 62 ) ; xx [ 46 ] = xx [ 44 ] - ( xx [ 395 ] * xx [ 43 ]
- xx [ 415 ] * xx [ 64 ] ) ; xx [ 44 ] = xx [ 39 ] + xx [ 21 ] * ( xx [ 61 ]
+ xx [ 48 ] * xx [ 623 ] ) ; xx [ 39 ] = xx [ 45 ] - ( xx [ 44 ] * xx [ 395 ]
+ xx [ 415 ] * xx [ 63 ] ) ; xx [ 53 ] = xx [ 247 ] ; xx [ 54 ] = - ( xx [
276 ] + xx [ 779 ] * xx [ 605 ] + xx [ 805 ] * xx [ 606 ] + xx [ 792 ] * xx [
607 ] ) ; xx [ 55 ] = - ( xx [ 252 ] + xx [ 765 ] * xx [ 605 ] + xx [ 776 ] *
xx [ 606 ] + xx [ 771 ] * xx [ 607 ] ) ; solveSymmetricPosDef ( xx + 383 , xx
+ 53 , 3 , 1 , xx + 59 , xx + 62 ) ; xx [ 53 ] = xx [ 243 ] + xx [ 28 ] * xx
[ 59 ] ; xx [ 54 ] = xx [ 250 ] + xx [ 29 ] * xx [ 60 ] ; xx [ 55 ] = xx [
270 ] + xx [ 29 ] * xx [ 61 ] ; pm_math_Quaternion_xform_ra ( xx + 753 , xx +
53 , xx + 62 ) ; xx [ 53 ] = xx [ 286 ] ; xx [ 54 ] = xx [ 272 ] + xx [ 361 ]
* xx [ 61 ] ; xx [ 55 ] = xx [ 230 ] - xx [ 361 ] * xx [ 60 ] ;
pm_math_Quaternion_xform_ra ( xx + 753 , xx + 53 , xx + 65 ) ;
pm_math_Vector3_cross_ra ( xx + 795 , xx + 65 , xx + 53 ) ; xx [ 28 ] = (
input [ 5 ] - ( ( xx [ 62 ] + xx [ 53 ] + xx [ 288 ] ) * xx [ 5 ] + xx [ 13 ]
* ( xx [ 64 ] + xx [ 55 ] - xx [ 301 ] ) + ( xx [ 66 ] + xx [ 303 ] ) * xx [
137 ] ) - ( xx [ 783 ] * xx [ 605 ] + xx [ 808 ] * xx [ 606 ] + xx [ 772 ] *
xx [ 607 ] ) ) / xx [ 819 ] - xx [ 215 ] ; xx [ 29 ] = xx [ 5 ] * xx [ 28 ] ;
xx [ 5 ] = xx [ 13 ] * xx [ 28 ] ; xx [ 13 ] = xx [ 745 ] * xx [ 5 ] ; xx [
45 ] = xx [ 29 ] * xx [ 746 ] - xx [ 738 ] * xx [ 5 ] ; xx [ 47 ] = xx [ 745
] * xx [ 29 ] ; xx [ 53 ] = xx [ 13 ] ; xx [ 54 ] = xx [ 45 ] ; xx [ 55 ] = -
xx [ 47 ] ; pm_math_Vector3_cross_ra ( xx + 761 , xx + 53 , xx + 62 ) ; xx [
48 ] = xx [ 29 ] + ( xx [ 62 ] - xx [ 13 ] * xx [ 736 ] ) * xx [ 21 ] ; xx [
13 ] = xx [ 59 ] - xx [ 48 ] ; xx [ 53 ] = xx [ 21 ] * ( xx [ 63 ] - xx [ 45
] * xx [ 736 ] ) ; xx [ 54 ] = xx [ 274 ] - xx [ 775 ] * xx [ 5 ] ; xx [ 55 ]
= xx [ 137 ] * xx [ 28 ] - xx [ 291 ] + xx [ 778 ] * xx [ 5 ] - xx [ 780 ] *
xx [ 29 ] + xx [ 96 ] ; xx [ 56 ] = xx [ 231 ] + xx [ 775 ] * xx [ 29 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 753 , xx + 54 , xx + 65 ) ; xx [ 29
] = xx [ 60 ] - ( xx [ 395 ] * xx [ 53 ] - xx [ 415 ] * xx [ 67 ] ) ; xx [ 45
] = xx [ 5 ] + xx [ 21 ] * ( xx [ 64 ] + xx [ 47 ] * xx [ 736 ] ) ; xx [ 5 ]
= xx [ 61 ] - ( xx [ 45 ] * xx [ 395 ] + xx [ 415 ] * xx [ 66 ] ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 347 , xx + 78 , xx + 54 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 54 , xx + 154 , xx + 59 ) ; xx [ 47
] = xx [ 52 ] - xx [ 59 ] ; xx [ 62 ] = xx [ 49 ] - xx [ 60 ] ; xx [ 63 ] =
xx [ 30 ] * xx [ 62 ] ; xx [ 64 ] = xx [ 30 ] * xx [ 47 ] ; xx [ 65 ] = xx [
50 ] - xx [ 61 ] ; xx [ 66 ] = xx [ 16 ] + xx [ 1 ] * xx [ 6 ] + xx [ 58 ] *
xx [ 8 ] + xx [ 121 ] ; xx [ 67 ] = xx [ 42 ] + xx [ 36 ] + xx [ 314 ] ; xx [
68 ] = xx [ 37 ] + xx [ 34 ] + xx [ 315 ] ; xx [ 69 ] = xx [ 38 ] + xx [ 35 ]
+ xx [ 316 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 54 , xx + 67 , xx +
70 ) ; xx [ 67 ] = xx [ 47 ] ; xx [ 68 ] = xx [ 62 ] ; xx [ 69 ] = xx [ 65 ]
; pm_math_Vector3_cross_ra ( xx + 59 , xx + 67 , xx + 73 ) ; xx [ 16 ] = xx [
66 ] - ( xx [ 70 ] + xx [ 73 ] ) ; xx [ 37 ] = xx [ 17 ] - xx [ 58 ] * xx [ 6
] + xx [ 1 ] * xx [ 8 ] + xx [ 122 ] ; xx [ 1 ] = xx [ 37 ] - ( xx [ 71 ] +
xx [ 74 ] ) ; xx [ 17 ] = xx [ 30 ] * xx [ 1 ] ; xx [ 38 ] = xx [ 30 ] * xx [
16 ] ; xx [ 42 ] = xx [ 18 ] + xx [ 9 ] + xx [ 123 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 642 , xx + 78 , xx + 58 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 58 , xx + 190 , xx + 67 ) ; xx [ 18
] = xx [ 52 ] - xx [ 67 ] ; xx [ 70 ] = xx [ 49 ] - xx [ 68 ] ; xx [ 71 ] =
xx [ 30 ] * xx [ 70 ] ; xx [ 73 ] = xx [ 30 ] * xx [ 18 ] ; xx [ 74 ] = xx [
50 ] - xx [ 69 ] ; xx [ 82 ] = xx [ 51 ] + xx [ 41 ] + xx [ 210 ] ; xx [ 83 ]
= xx [ 43 ] + xx [ 46 ] + xx [ 211 ] ; xx [ 84 ] = xx [ 44 ] + xx [ 39 ] + xx
[ 212 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 58 , xx + 82 , xx + 87 )
; xx [ 82 ] = xx [ 18 ] ; xx [ 83 ] = xx [ 70 ] ; xx [ 84 ] = xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 82 , xx + 90 ) ; xx [ 43 ] = xx [
66 ] - ( xx [ 87 ] + xx [ 90 ] ) ; xx [ 44 ] = xx [ 37 ] - ( xx [ 88 ] + xx [
91 ] ) ; xx [ 51 ] = xx [ 30 ] * xx [ 44 ] ; xx [ 67 ] = xx [ 30 ] * xx [ 43
] ; pm_math_Quaternion_inverseCompose_ra ( xx + 757 , xx + 78 , xx + 82 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 82 , xx + 254 , xx + 93 ) ; xx [ 68
] = xx [ 52 ] - xx [ 93 ] ; xx [ 69 ] = xx [ 49 ] - xx [ 94 ] ; xx [ 76 ] =
xx [ 30 ] * xx [ 69 ] ; xx [ 77 ] = xx [ 30 ] * xx [ 68 ] ; xx [ 87 ] = xx [
50 ] - xx [ 95 ] ; xx [ 96 ] = xx [ 48 ] + xx [ 13 ] + xx [ 295 ] ; xx [ 97 ]
= xx [ 53 ] + xx [ 29 ] + xx [ 296 ] ; xx [ 98 ] = xx [ 45 ] + xx [ 5 ] + xx
[ 297 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 82 , xx + 96 , xx + 99 )
; xx [ 96 ] = xx [ 68 ] ; xx [ 97 ] = xx [ 69 ] ; xx [ 98 ] = xx [ 87 ] ;
pm_math_Vector3_cross_ra ( xx + 93 , xx + 96 , xx + 102 ) ; xx [ 45 ] = xx [
66 ] - ( xx [ 99 ] + xx [ 102 ] ) ; xx [ 48 ] = xx [ 37 ] - ( xx [ 100 ] + xx
[ 103 ] ) ; xx [ 53 ] = xx [ 30 ] * xx [ 48 ] ; xx [ 88 ] = xx [ 30 ] * xx [
45 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 869 , xx + 78 , xx + 93 )
; pm_math_Quaternion_inverseXform_ra ( xx + 93 , xx + 332 , xx + 97 ) ; xx [
90 ] = xx [ 52 ] - xx [ 97 ] ; xx [ 91 ] = xx [ 49 ] - xx [ 98 ] ; xx [ 100 ]
= xx [ 30 ] * xx [ 91 ] ; xx [ 102 ] = xx [ 30 ] * xx [ 90 ] ; xx [ 103 ] =
xx [ 50 ] - xx [ 99 ] ; xx [ 105 ] = xx [ 25 ] + xx [ 15 ] + xx [ 406 ] ; xx
[ 106 ] = xx [ 22 ] + xx [ 10 ] + xx [ 407 ] ; xx [ 107 ] = xx [ 19 ] + xx [
12 ] + xx [ 408 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 93 , xx + 105 ,
xx + 108 ) ; xx [ 105 ] = xx [ 90 ] ; xx [ 106 ] = xx [ 91 ] ; xx [ 107 ] =
xx [ 103 ] ; pm_math_Vector3_cross_ra ( xx + 97 , xx + 105 , xx + 111 ) ; xx
[ 19 ] = xx [ 66 ] - ( xx [ 108 ] + xx [ 111 ] ) ; xx [ 22 ] = xx [ 37 ] - (
xx [ 109 ] + xx [ 112 ] ) ; xx [ 25 ] = xx [ 30 ] * xx [ 22 ] ; xx [ 97 ] =
xx [ 30 ] * xx [ 19 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 974 , xx
+ 78 , xx + 105 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 105 , xx + 450
, xx + 78 ) ; xx [ 81 ] = xx [ 52 ] - xx [ 78 ] ; xx [ 52 ] = xx [ 49 ] - xx
[ 79 ] ; xx [ 49 ] = xx [ 30 ] * xx [ 52 ] ; xx [ 98 ] = xx [ 30 ] * xx [ 81
] ; xx [ 99 ] = xx [ 50 ] - xx [ 80 ] ; xx [ 114 ] = xx [ 32 ] + xx [ 23 ] +
xx [ 482 ] ; xx [ 115 ] = xx [ 33 ] + xx [ 24 ] + xx [ 483 ] ; xx [ 116 ] =
xx [ 26 ] + xx [ 20 ] + xx [ 484 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 105 , xx + 114 , xx + 117 ) ; xx [ 114 ] = xx [ 81 ] ; xx [ 115 ] = xx [ 52
] ; xx [ 116 ] = xx [ 99 ] ; pm_math_Vector3_cross_ra ( xx + 78 , xx + 114 ,
xx + 120 ) ; xx [ 26 ] = xx [ 66 ] - ( xx [ 117 ] + xx [ 120 ] ) ; xx [ 32 ]
= xx [ 37 ] - ( xx [ 118 ] + xx [ 121 ] ) ; xx [ 33 ] = xx [ 30 ] * xx [ 32 ]
; xx [ 37 ] = xx [ 30 ] * xx [ 26 ] ; logVector [ 0 ] = xx [ 0 ] * state [ 0
] ; logVector [ 1 ] = xx [ 0 ] * state [ 1 ] ; logVector [ 2 ] = state [ 2 ]
; logVector [ 3 ] = state [ 3 ] ; logVector [ 4 ] = state [ 4 ] ; logVector [
5 ] = state [ 5 ] ; logVector [ 6 ] = xx [ 0 ] * state [ 6 ] ; logVector [ 7
] = xx [ 0 ] * state [ 7 ] ; logVector [ 8 ] = xx [ 0 ] * state [ 8 ] ;
logVector [ 9 ] = state [ 9 ] ; logVector [ 10 ] = state [ 10 ] ; logVector [
11 ] = state [ 11 ] ; logVector [ 12 ] = state [ 12 ] ; logVector [ 13 ] = xx
[ 0 ] * state [ 13 ] ; logVector [ 14 ] = xx [ 0 ] * state [ 14 ] ; logVector
[ 15 ] = xx [ 0 ] * state [ 15 ] ; logVector [ 16 ] = xx [ 0 ] * state [ 16 ]
; logVector [ 17 ] = xx [ 0 ] * state [ 17 ] ; logVector [ 18 ] = state [ 18
] ; logVector [ 19 ] = state [ 19 ] ; logVector [ 20 ] = state [ 20 ] ;
logVector [ 21 ] = state [ 21 ] ; logVector [ 22 ] = xx [ 0 ] * state [ 22 ]
; logVector [ 23 ] = xx [ 0 ] * state [ 23 ] ; logVector [ 24 ] = xx [ 0 ] *
state [ 24 ] ; logVector [ 25 ] = xx [ 0 ] * state [ 25 ] ; logVector [ 26 ]
= xx [ 0 ] * state [ 26 ] ; logVector [ 27 ] = state [ 27 ] ; logVector [ 28
] = state [ 28 ] ; logVector [ 29 ] = state [ 29 ] ; logVector [ 30 ] = state
[ 30 ] ; logVector [ 31 ] = xx [ 0 ] * state [ 31 ] ; logVector [ 32 ] = xx [
0 ] * state [ 32 ] ; logVector [ 33 ] = xx [ 0 ] * state [ 33 ] ; logVector [
34 ] = xx [ 0 ] * state [ 34 ] ; logVector [ 35 ] = xx [ 0 ] * state [ 35 ] ;
logVector [ 36 ] = state [ 36 ] ; logVector [ 37 ] = state [ 37 ] ; logVector
[ 38 ] = state [ 38 ] ; logVector [ 39 ] = state [ 39 ] ; logVector [ 40 ] =
xx [ 0 ] * state [ 40 ] ; logVector [ 41 ] = xx [ 0 ] * state [ 41 ] ;
logVector [ 42 ] = xx [ 0 ] * state [ 42 ] ; logVector [ 43 ] = xx [ 0 ] *
state [ 43 ] ; logVector [ 44 ] = xx [ 0 ] * state [ 44 ] ; logVector [ 45 ]
= state [ 45 ] ; logVector [ 46 ] = state [ 46 ] ; logVector [ 47 ] = state [
47 ] ; logVector [ 48 ] = state [ 48 ] ; logVector [ 49 ] = xx [ 0 ] * state
[ 49 ] ; logVector [ 50 ] = xx [ 0 ] * state [ 50 ] ; logVector [ 51 ] = xx [
0 ] * state [ 51 ] ; logVector [ 52 ] = xx [ 0 ] * state [ 52 ] ; logVector [
53 ] = xx [ 0 ] * state [ 53 ] ; logVector [ 54 ] = state [ 54 ] ; logVector
[ 55 ] = state [ 55 ] ; logVector [ 56 ] = state [ 56 ] ; logVector [ 57 ] =
state [ 57 ] ; logVector [ 58 ] = xx [ 0 ] * state [ 58 ] ; logVector [ 59 ]
= xx [ 0 ] * state [ 59 ] ; logVector [ 60 ] = xx [ 0 ] * state [ 60 ] ;
logVector [ 61 ] = xx [ 0 ] * xx [ 14 ] ; logVector [ 62 ] = xx [ 0 ] * xx [
3 ] ; logVector [ 63 ] = xx [ 0 ] * xx [ 4 ] ; logVector [ 64 ] = xx [ 0 ] *
xx [ 7 ] ; logVector [ 65 ] = xx [ 0 ] * xx [ 6 ] ; logVector [ 66 ] = xx [ 0
] * xx [ 8 ] ; logVector [ 67 ] = xx [ 0 ] * xx [ 9 ] ; logVector [ 68 ] = xx
[ 0 ] * xx [ 11 ] ; logVector [ 69 ] = xx [ 0 ] * xx [ 15 ] ; logVector [ 70
] = xx [ 0 ] * xx [ 10 ] ; logVector [ 71 ] = xx [ 0 ] * xx [ 12 ] ;
logVector [ 72 ] = xx [ 0 ] * xx [ 2 ] ; logVector [ 73 ] = xx [ 0 ] * xx [
23 ] ; logVector [ 74 ] = xx [ 0 ] * xx [ 24 ] ; logVector [ 75 ] = xx [ 0 ]
* xx [ 20 ] ; logVector [ 76 ] = xx [ 0 ] * xx [ 27 ] ; logVector [ 77 ] = xx
[ 0 ] * xx [ 36 ] ; logVector [ 78 ] = xx [ 0 ] * xx [ 34 ] ; logVector [ 79
] = xx [ 0 ] * xx [ 35 ] ; logVector [ 80 ] = xx [ 0 ] * xx [ 40 ] ;
logVector [ 81 ] = xx [ 0 ] * xx [ 41 ] ; logVector [ 82 ] = xx [ 0 ] * xx [
46 ] ; logVector [ 83 ] = xx [ 0 ] * xx [ 39 ] ; logVector [ 84 ] = xx [ 0 ]
* xx [ 28 ] ; logVector [ 85 ] = xx [ 0 ] * xx [ 13 ] ; logVector [ 86 ] = xx
[ 0 ] * xx [ 29 ] ; logVector [ 87 ] = xx [ 0 ] * xx [ 5 ] ; logVector [ 88 ]
= - ( xx [ 30 ] * xx [ 57 ] + xx [ 31 ] * xx [ 54 ] ) ; logVector [ 89 ] = -
( xx [ 31 ] * xx [ 55 ] - xx [ 30 ] * xx [ 56 ] ) ; logVector [ 90 ] = - ( xx
[ 30 ] * xx [ 55 ] + xx [ 31 ] * xx [ 56 ] ) ; logVector [ 91 ] = - ( xx [ 31
] * xx [ 57 ] - xx [ 30 ] * xx [ 54 ] ) ; logVector [ 92 ] = xx [ 0 ] * ( xx
[ 47 ] - ( xx [ 31 ] * xx [ 63 ] + xx [ 30 ] * xx [ 64 ] ) * xx [ 21 ] ) ;
logVector [ 93 ] = ( xx [ 62 ] + xx [ 21 ] * ( xx [ 31 ] * xx [ 64 ] - xx [
30 ] * xx [ 63 ] ) ) * xx [ 0 ] ; logVector [ 94 ] = xx [ 0 ] * xx [ 65 ] ;
logVector [ 95 ] = xx [ 0 ] * ( xx [ 16 ] - ( xx [ 31 ] * xx [ 17 ] + xx [ 30
] * xx [ 38 ] ) * xx [ 21 ] ) ; logVector [ 96 ] = ( xx [ 1 ] + xx [ 21 ] * (
xx [ 31 ] * xx [ 38 ] - xx [ 30 ] * xx [ 17 ] ) ) * xx [ 0 ] ; logVector [ 97
] = xx [ 0 ] * ( xx [ 42 ] - ( xx [ 72 ] + xx [ 75 ] ) ) ; logVector [ 98 ] =
- ( xx [ 30 ] * xx [ 61 ] + xx [ 31 ] * xx [ 58 ] ) ; logVector [ 99 ] = - (
xx [ 31 ] * xx [ 59 ] - xx [ 30 ] * xx [ 60 ] ) ; logVector [ 100 ] = - ( xx
[ 30 ] * xx [ 59 ] + xx [ 31 ] * xx [ 60 ] ) ; logVector [ 101 ] = - ( xx [
31 ] * xx [ 61 ] - xx [ 30 ] * xx [ 58 ] ) ; logVector [ 102 ] = xx [ 0 ] * (
xx [ 18 ] - ( xx [ 31 ] * xx [ 71 ] + xx [ 30 ] * xx [ 73 ] ) * xx [ 21 ] ) ;
logVector [ 103 ] = ( xx [ 70 ] + xx [ 21 ] * ( xx [ 31 ] * xx [ 73 ] - xx [
30 ] * xx [ 71 ] ) ) * xx [ 0 ] ; logVector [ 104 ] = xx [ 0 ] * xx [ 74 ] ;
logVector [ 105 ] = xx [ 0 ] * ( xx [ 43 ] - ( xx [ 31 ] * xx [ 51 ] + xx [
30 ] * xx [ 67 ] ) * xx [ 21 ] ) ; logVector [ 106 ] = ( xx [ 44 ] + xx [ 21
] * ( xx [ 31 ] * xx [ 67 ] - xx [ 30 ] * xx [ 51 ] ) ) * xx [ 0 ] ;
logVector [ 107 ] = xx [ 0 ] * ( xx [ 42 ] - ( xx [ 89 ] + xx [ 92 ] ) ) ;
logVector [ 108 ] = - ( xx [ 30 ] * xx [ 85 ] + xx [ 31 ] * xx [ 82 ] ) ;
logVector [ 109 ] = - ( xx [ 31 ] * xx [ 83 ] - xx [ 30 ] * xx [ 84 ] ) ;
logVector [ 110 ] = - ( xx [ 30 ] * xx [ 83 ] + xx [ 31 ] * xx [ 84 ] ) ;
logVector [ 111 ] = - ( xx [ 31 ] * xx [ 85 ] - xx [ 30 ] * xx [ 82 ] ) ;
logVector [ 112 ] = xx [ 0 ] * ( xx [ 68 ] - ( xx [ 31 ] * xx [ 76 ] + xx [
30 ] * xx [ 77 ] ) * xx [ 21 ] ) ; logVector [ 113 ] = ( xx [ 69 ] + xx [ 21
] * ( xx [ 31 ] * xx [ 77 ] - xx [ 30 ] * xx [ 76 ] ) ) * xx [ 0 ] ;
logVector [ 114 ] = xx [ 0 ] * xx [ 87 ] ; logVector [ 115 ] = xx [ 0 ] * (
xx [ 45 ] - ( xx [ 31 ] * xx [ 53 ] + xx [ 30 ] * xx [ 88 ] ) * xx [ 21 ] ) ;
logVector [ 116 ] = ( xx [ 48 ] + xx [ 21 ] * ( xx [ 31 ] * xx [ 88 ] - xx [
30 ] * xx [ 53 ] ) ) * xx [ 0 ] ; logVector [ 117 ] = xx [ 0 ] * ( xx [ 42 ]
- ( xx [ 101 ] + xx [ 104 ] ) ) ; logVector [ 118 ] = - ( xx [ 30 ] * xx [ 96
] + xx [ 31 ] * xx [ 93 ] ) ; logVector [ 119 ] = - ( xx [ 31 ] * xx [ 94 ] -
xx [ 30 ] * xx [ 95 ] ) ; logVector [ 120 ] = - ( xx [ 30 ] * xx [ 94 ] + xx
[ 31 ] * xx [ 95 ] ) ; logVector [ 121 ] = - ( xx [ 31 ] * xx [ 96 ] - xx [
30 ] * xx [ 93 ] ) ; logVector [ 122 ] = xx [ 0 ] * ( xx [ 90 ] - ( xx [ 31 ]
* xx [ 100 ] + xx [ 30 ] * xx [ 102 ] ) * xx [ 21 ] ) ; logVector [ 123 ] = (
xx [ 91 ] + xx [ 21 ] * ( xx [ 31 ] * xx [ 102 ] - xx [ 30 ] * xx [ 100 ] ) )
* xx [ 0 ] ; logVector [ 124 ] = xx [ 0 ] * xx [ 103 ] ; logVector [ 125 ] =
xx [ 0 ] * ( xx [ 19 ] - ( xx [ 31 ] * xx [ 25 ] + xx [ 30 ] * xx [ 97 ] ) *
xx [ 21 ] ) ; logVector [ 126 ] = ( xx [ 22 ] + xx [ 21 ] * ( xx [ 31 ] * xx
[ 97 ] - xx [ 30 ] * xx [ 25 ] ) ) * xx [ 0 ] ; logVector [ 127 ] = xx [ 0 ]
* ( xx [ 42 ] - ( xx [ 110 ] + xx [ 113 ] ) ) ; logVector [ 128 ] = - ( xx [
30 ] * xx [ 108 ] + xx [ 31 ] * xx [ 105 ] ) ; logVector [ 129 ] = - ( xx [
31 ] * xx [ 106 ] - xx [ 30 ] * xx [ 107 ] ) ; logVector [ 130 ] = - ( xx [
30 ] * xx [ 106 ] + xx [ 31 ] * xx [ 107 ] ) ; logVector [ 131 ] = - ( xx [
31 ] * xx [ 108 ] - xx [ 30 ] * xx [ 105 ] ) ; logVector [ 132 ] = xx [ 0 ] *
( xx [ 81 ] - ( xx [ 31 ] * xx [ 49 ] + xx [ 30 ] * xx [ 98 ] ) * xx [ 21 ] )
; logVector [ 133 ] = ( xx [ 52 ] + xx [ 21 ] * ( xx [ 31 ] * xx [ 98 ] - xx
[ 30 ] * xx [ 49 ] ) ) * xx [ 0 ] ; logVector [ 134 ] = xx [ 0 ] * xx [ 99 ]
; logVector [ 135 ] = xx [ 0 ] * ( xx [ 26 ] - ( xx [ 31 ] * xx [ 33 ] + xx [
30 ] * xx [ 37 ] ) * xx [ 21 ] ) ; logVector [ 136 ] = ( xx [ 32 ] + xx [ 21
] * ( xx [ 31 ] * xx [ 37 ] - xx [ 30 ] * xx [ 33 ] ) ) * xx [ 0 ] ;
logVector [ 137 ] = xx [ 0 ] * ( xx [ 42 ] - ( xx [ 119 ] + xx [ 122 ] ) ) ;
errorResult [ 0 ] = xx [ 86 ] + xx [ 86 ] ; return NULL ; }
