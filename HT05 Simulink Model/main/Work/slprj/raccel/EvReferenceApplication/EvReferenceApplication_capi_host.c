#include "EvReferenceApplication_capi_host.h"
static EvReferenceApplication_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        EvReferenceApplication_host_InitializeDataMapInfo(&(root), "EvReferenceApplication");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
