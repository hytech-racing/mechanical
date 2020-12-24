/*********************************************************************************************************************
 ** File: ne_ds.h
 ** Abstract:
 **     Network Engine standard header.
 ** 
 ** Copyright 2007-2012 The MathWorks, Inc.
 *********************************************************************************************************************/


#ifndef __ne_ds_h__
#define __ne_ds_h__

#include "ne_std.h"
#include "_ne_ds.h"

#define ne_eq_input_get_fundata(_idx)   ((FunData *) ( ((_NeDynamicSystem *)( ds ))->mFunData[_idx] )) 
#define ne_get_fundata_in_ds(_idx)      (&(_ds)->mFunData[_idx]) 
#define ne_get_fundata_in_ds_2(_idx)    ((_ds)->mFunData[_idx]) 
#define ne_eq_set_element(_a, _idx, _c) ((_a)[_idx] = (_c))
#define ne_custom_eqn_get_methods(_idx) (((_NeDynamicSystem *)ds)->mRtlData[_idx].mMethods)
#define ne_custom_eqn_get_data(_idx)    (((_NeDynamicSystem *)ds)->mRtlData[_idx].mData)

#endif /* __ne_ds_h__ */
/* [EOF] ne_ds.h */
