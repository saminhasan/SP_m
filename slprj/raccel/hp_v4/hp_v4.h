#ifndef hp_v4_h_
#define hp_v4_h_
#include <cmath>
#include <stdlib.h>
#include <cstdio>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "hp_v4_a1692be3_1_gateway.h"
#include "hp_v4_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include "rtsplntypes.h"
extern "C" {
#include "rtGetNaN.h"
}
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
extern "C" {
#include "rtGetInf.h"
}
#define MODEL_NAME hp_v4
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (35) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (79)   
#elif NCSTATES != 79
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T hhzq3ogi50 ; real_T gn1n1fxih5 [ 6 ] ; real_T
ba3ozliipq [ 61 ] ; real_T h4hnjuf4ok [ 115 ] ; real_T gpwpvx52su ; real_T
dp5bxc123k ; real_T dscxlqeplg ; real_T i5bhabdhl2 ; real_T ovgjo1k5mz [ 4 ]
; real_T j3zzcipv1r ; real_T fayoqg13fo ; real_T adsurmfp2a ; real_T
pubnjkrbwr ; real_T mtn15vznzx [ 4 ] ; real_T fihfkiqrmx ; real_T l1jg00snd3
; real_T buortkjwm2 ; real_T b30ue11hhm ; real_T pkw51cykqx [ 4 ] ; real_T
orf45wfkfm ; real_T ptoa4qnrig ; real_T ckmycfifmz ; real_T c5pwxc5wo5 ;
real_T nyu1nqmmee [ 4 ] ; real_T ox5zppqi1h ; real_T fws3etbeh2 ; real_T
d2o1c2v3x2 ; real_T lartlnyq5x ; real_T hjqo1tqvvs [ 4 ] ; real_T piuvoczjcx
; real_T payh5vdrtp ; real_T n5qbqiye51 ; real_T d5hwduhu53 ; real_T
pj4l423n1b [ 4 ] ; real_T mllhy1xoml ; } B ; typedef struct { real_T
dhwnkpcnxt ; real_T hdt2cnju50 ; real_T iiko3sw2xx ; real_T denmfeoj33 ;
real_T dqyjqqu5qg ; real_T oiygwdxnsf ; real_T ogx3yrgm3u ; real_T b021cdni5x
; real_T joh1nzqmvf ; real_T ixypknoxn3 ; real_T ivnrdooirg ; real_T
o3oqp2eeb5 ; real_T fu0do4t3as ; real_T majfgt41ui ; real_T pz5d0moowf ;
real_T obcozvopvv ; real_T ikqokrktqt [ 40001 ] ; real_T p3apf3xypr [ 40001 ]
; real_T h1tshsgvlr ; real_T gz313zzwv0 ; real_T exnfkomltd ; real_T
ba1o4znci0 ; real_T ksxmibc2fy [ 40001 ] ; real_T mc1j2ro0sq [ 40001 ] ;
real_T ixdsgzcw4h ; real_T lx0xtcqd2q ; real_T ipeo2lwiiv ; real_T o3qizeoydg
; real_T mwdjyjhmsi [ 40001 ] ; real_T bdtltpway1 [ 40001 ] ; real_T
jjqxg4jfpn ; real_T l1qqxacxgl ; real_T jzblxaem0z ; real_T e2rz24nt3a ;
real_T m0aqu4oy1c [ 40001 ] ; real_T fy35y14duc [ 40001 ] ; real_T dpggk1ar0d
; real_T dw2eh4vk53 ; real_T gvnceosiwa ; real_T mlyws0ulw1 ; real_T
aapx2mrkrz [ 40001 ] ; real_T opiw53bhx4 [ 40001 ] ; real_T o20gezqes2 ;
real_T ifwz1fktid ; real_T ejgjdw1cxq ; real_T gemftv1sxb ; real_T fuya4qod4r
[ 40001 ] ; real_T f4r5toieaz [ 40001 ] ; real_T luyus4t4io ; real_T
b2synjeilb ; real_T pbzaaqmd2w ; real_T dukinnnx0c ; real_T iflczmob3f ;
real_T cdhabo5zsb ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } cvejppxdpv ; void * inkr1e5adu ; void * bqog2u2pjc [ 6 ] ;
void * n0ljlet1z3 [ 9 ] ; void * hcyxs4w4z1 ; void * na3foxxgyq [ 6 ] ; void
* encdw23bwv [ 9 ] ; void * fbacpiic1n ; void * cr3v5nlzet [ 6 ] ; void *
dk0oub0bmr [ 9 ] ; void * ble400lud2 ; void * fpf3xnlo1i [ 6 ] ; void *
cqsk2n0hyd [ 9 ] ; void * fksomzwttx ; void * dw2xvocr35 [ 6 ] ; void *
atdas2blb1 [ 9 ] ; void * ivgyezlk4b ; void * p0yqk3t1ml [ 6 ] ; void *
fk0tbksf1y [ 9 ] ; struct { void * LoggedData ; } jlclbgcbdb ; void *
fzn2dadk4e ; void * gj141fpmf0 ; void * iaunsf4jhe ; void * njnbn2auk0 ; void
* i4vh1y54up ; void * kks2bzqouh ; void * ilo32t4j3n ; void * ioe5pmekjs ;
void * nfjplay2v2 ; void * ppbghzatxg ; void * dywywnpwvp ; void * dxe20odrog
; void * eunmtunrhm ; void * nkmxjtnacf ; void * aq4d2zjxa1 ; struct { void *
AQHandles ; } jchrmxk4qx ; struct { void * LoggedData [ 3 ] ; } j50uiyayzn ;
struct { void * LoggedData ; } lfqvzabtco ; struct { void * AQHandles ; }
i4o5kapmqk ; void * msszk5pvfk ; void * cjbu3tctay ; void * loonxv2vam ;
struct { void * AQHandles ; } ihlaycufuy ; struct { void * AQHandles ; }
ihlaycufuy3 ; int32_T m2oxmlar1f ; uint32_T hgx5cayjie ; uint32_T k4hpgnvelg
; uint32_T odyd01dqxa ; uint32_T frc3nwwngy ; uint32_T p4lw0xvjkj ; uint32_T
mjohstu43y ; struct { int_T PrevIndex ; } fs5pe54qqo ; int_T lh1550hwj0 ;
int_T kl2nhb3awd ; int_T etecsxhwe2 ; uint8_T cssxtmycgo ; uint8_T hesh10yaxb
; uint8_T pio0zawnt1 ; uint8_T nnel3hccnf ; uint8_T eq31iilrw4 ; uint8_T
ng00scgd4k ; uint8_T ejp5wltkrt ; uint8_T luj1mf0fur ; uint8_T omi41as3l2 ;
uint8_T emnnr3112x ; uint8_T cdgp4gsp3h ; uint8_T ofsupcghmu ; boolean_T
jx0wvnooqh ; boolean_T aycgjk4b45 ; boolean_T opcdwztal3 ; boolean_T
o5uvukdfkz ; } DW ; typedef struct { real_T faps05mlpl [ 61 ] ; real_T
ac4vk3qjis ; real_T ptpwazju4o [ 2 ] ; real_T p1ph2wabhc ; real_T lfij1kvlny
[ 2 ] ; real_T gvc3a5sbir ; real_T nn31jtzhnb [ 2 ] ; real_T dphv0wm5ij ;
real_T o1k2rcoak1 [ 2 ] ; real_T i4ge0rdrtz ; real_T oqct3dohkn [ 2 ] ;
real_T ds23b5mlzt ; real_T fy55cqpr3y [ 2 ] ; } X ; typedef struct { real_T
faps05mlpl [ 61 ] ; real_T ac4vk3qjis ; real_T ptpwazju4o [ 2 ] ; real_T
p1ph2wabhc ; real_T lfij1kvlny [ 2 ] ; real_T gvc3a5sbir ; real_T nn31jtzhnb
[ 2 ] ; real_T dphv0wm5ij ; real_T o1k2rcoak1 [ 2 ] ; real_T i4ge0rdrtz ;
real_T oqct3dohkn [ 2 ] ; real_T ds23b5mlzt ; real_T fy55cqpr3y [ 2 ] ; }
XDot ; typedef struct { boolean_T faps05mlpl [ 61 ] ; boolean_T ac4vk3qjis ;
boolean_T ptpwazju4o [ 2 ] ; boolean_T p1ph2wabhc ; boolean_T lfij1kvlny [ 2
] ; boolean_T gvc3a5sbir ; boolean_T nn31jtzhnb [ 2 ] ; boolean_T dphv0wm5ij
; boolean_T o1k2rcoak1 [ 2 ] ; boolean_T i4ge0rdrtz ; boolean_T oqct3dohkn [
2 ] ; boolean_T ds23b5mlzt ; boolean_T fy55cqpr3y [ 2 ] ; } XDis ; typedef
struct { real_T faps05mlpl [ 61 ] ; real_T ac4vk3qjis ; real_T ptpwazju4o [ 2
] ; real_T p1ph2wabhc ; real_T lfij1kvlny [ 2 ] ; real_T gvc3a5sbir ; real_T
nn31jtzhnb [ 2 ] ; real_T dphv0wm5ij ; real_T o1k2rcoak1 [ 2 ] ; real_T
i4ge0rdrtz ; real_T oqct3dohkn [ 2 ] ; real_T ds23b5mlzt ; real_T fy55cqpr3y
[ 2 ] ; } CStateAbsTol ; typedef struct { real_T faps05mlpl [ 61 ] ; real_T
ac4vk3qjis ; real_T ptpwazju4o [ 2 ] ; real_T p1ph2wabhc ; real_T lfij1kvlny
[ 2 ] ; real_T gvc3a5sbir ; real_T nn31jtzhnb [ 2 ] ; real_T dphv0wm5ij ;
real_T o1k2rcoak1 [ 2 ] ; real_T i4ge0rdrtz ; real_T oqct3dohkn [ 2 ] ;
real_T ds23b5mlzt ; real_T fy55cqpr3y [ 2 ] ; } CXPtMin ; typedef struct {
real_T faps05mlpl [ 61 ] ; real_T ac4vk3qjis ; real_T ptpwazju4o [ 2 ] ;
real_T p1ph2wabhc ; real_T lfij1kvlny [ 2 ] ; real_T gvc3a5sbir ; real_T
nn31jtzhnb [ 2 ] ; real_T dphv0wm5ij ; real_T o1k2rcoak1 [ 2 ] ; real_T
i4ge0rdrtz ; real_T oqct3dohkn [ 2 ] ; real_T ds23b5mlzt ; real_T fy55cqpr3y
[ 2 ] ; } CXPtMax ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T P ; real_T tf ; real_T MotorAngles_Time0 [
40001 ] ; real_T MotorAngles_Data0 [ 240006 ] ; real_T
uDLookupTable_tableData [ 40001 ] ; real_T uDLookupTable_bp01Data [ 40001 ] ;
real_T uDLookupTable1_tableData [ 40001 ] ; real_T uDLookupTable1_bp01Data [
40001 ] ; real_T uDLookupTable2_tableData [ 40001 ] ; real_T
uDLookupTable2_bp01Data [ 40001 ] ; real_T uDLookupTable3_tableData [ 40001 ]
; real_T uDLookupTable3_bp01Data [ 40001 ] ; real_T uDLookupTable4_tableData
[ 40001 ] ; real_T uDLookupTable4_bp01Data [ 40001 ] ; real_T
uDLookupTable5_tableData [ 40001 ] ; real_T uDLookupTable5_bp01Data [ 40001 ]
; real_T Differentiator_A ; real_T Differentiator_C ; real_T Differentiator_D
; real_T Differentiator_A_opdpomj0oy ; real_T Differentiator_C_nlo0afvsm0 ;
real_T Differentiator_D_ilujgvwoqy ; real_T Differentiator_A_ny15flnyyl ;
real_T Differentiator_C_dih140nhs2 ; real_T Differentiator_D_akfaxsdhsp ;
real_T Differentiator_A_ngyitj1gem ; real_T Differentiator_C_mvzrzdbpid ;
real_T Differentiator_D_lmu5sgqwp5 ; real_T Differentiator_A_ks03awdndf ;
real_T Differentiator_C_htp4rrhqlx ; real_T Differentiator_D_id3tz2qugi ;
real_T Differentiator_A_nkg2t2gpet ; real_T Differentiator_C_ofqvx1s2jg ;
real_T Differentiator_D_dhqehaoneg ; uint32_T uDLookupTable_maxIndex ;
uint32_T uDLookupTable_dimSizes ; uint32_T uDLookupTable_numYWorkElts [ 2 ] ;
uint32_T uDLookupTable1_maxIndex ; uint32_T uDLookupTable1_dimSizes ;
uint32_T uDLookupTable1_numYWorkElts [ 2 ] ; uint32_T uDLookupTable2_maxIndex
; uint32_T uDLookupTable2_dimSizes ; uint32_T uDLookupTable2_numYWorkElts [ 2
] ; uint32_T uDLookupTable3_maxIndex ; uint32_T uDLookupTable3_dimSizes ;
uint32_T uDLookupTable3_numYWorkElts [ 2 ] ; uint32_T uDLookupTable4_maxIndex
; uint32_T uDLookupTable4_dimSizes ; uint32_T uDLookupTable4_numYWorkElts [ 2
] ; uint32_T uDLookupTable5_maxIndex ; uint32_T uDLookupTable5_dimSizes ;
uint32_T uDLookupTable5_numYWorkElts [ 2 ] ; } ;
#ifdef __cplusplus
extern "C" {
#endif
extern const char_T * RT_MEMORY_ALLOCATION_ERROR ;
#ifdef __cplusplus
}
#endif
extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern mxArray
* mr_hp_v4_GetDWork ( ) ; extern void mr_hp_v4_SetDWork ( const mxArray *
ssDW ) ; extern mxArray * mr_hp_v4_GetSimStateDisallowedBlocks ( ) ;
#ifdef __cplusplus 
extern "C" {
#endif
#ifdef __cplusplus 
}
#endif
#ifdef __cplusplus 
extern "C" {
#endif
#ifdef __cplusplus 
}
#endif
extern const rtwCAPI_ModelMappingStaticInfo * hp_v4_GetCAPIStaticMap ( void )
;
#ifdef __cplusplus
extern "C" {
#endif
extern SimStruct * const rtS ;
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#ifdef __cplusplus
}
#endif
#endif
