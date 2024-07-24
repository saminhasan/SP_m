#ifndef hp_v4_private_h_
#define hp_v4_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "rtsplntypes.h"
#include "hp_v4_types.h"
#include "hp_v4.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)     (((v1)==(v2))?((double)(v1)):    (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?     muDoubleScalarFloor((v) + 0.5) :     muDoubleScalarCeil((v) - 0.5) )
#endif
real_T look_SplNBinXZcd ( uint32_T numDims , const real_T * u , const
rt_LUTSplineWork * const SWork ) ; void rt_Spline2Derivd ( const real_T * x ,
const real_T * y , uint32_T n , real_T * u , real_T * y2 ) ; real_T
intrp_NSplcd ( uint32_T numDims , const rt_LUTSplineWork * const splWork ,
uint32_T extrapMethod ) ; extern uint32_T plook_binx ( real_T u , const
real_T bp [ ] , uint32_T maxIndex , real_T * fraction ) ; extern uint32_T
binsearch_u32d ( real_T u , const real_T bp [ ] , uint32_T startIndex ,
uint32_T maxIndex ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
