#include "hp_v4_capi_host.h"
static hp_v4_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        hp_v4_host_InitializeDataMapInfo(&(root), "hp_v4");
    }
    return &root.mmi;
}

extern "C" {
rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
}
