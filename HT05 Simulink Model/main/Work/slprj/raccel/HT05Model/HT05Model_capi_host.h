#ifndef RTW_HEADER_HT05Model_cap_host_h_
#define RTW_HEADER_HT05Model_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "EvPowertrainController_capi_host.h"
#include "DrivetrainEv_capi_host.h"
#include "BattEv_capi_host.h"
#include "MotGenEvDynamic_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 4 ] ; EvPowertrainController_host_DataMapInfo_T child0 ;
DrivetrainEv_host_DataMapInfo_T child1 ; BattEv_host_DataMapInfo_T child2 ;
MotGenEvDynamic_host_DataMapInfo_T child3 ; } HT05Model_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void HT05Model_host_InitializeDataMapInfo ( HT05Model_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
