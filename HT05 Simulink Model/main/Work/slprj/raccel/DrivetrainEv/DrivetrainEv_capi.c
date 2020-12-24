#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DrivetrainEv_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "DrivetrainEv.h"
#include "DrivetrainEv_capi.h"
#include "DrivetrainEv_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 0 , TARGET_STRING ( "DrivetrainEv/Wheels and Brakes/Front Bias" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Rear Bias1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Add" ) , TARGET_STRING ( "Fx" ) , 0 , 0 , 1 ,
0 , 0 } , { 4 , 0 , TARGET_STRING ( "DrivetrainEv/Wheels and Brakes/Add1" ) ,
TARGET_STRING ( "Fx" ) , 0 , 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"DrivetrainEv/Solver Configuration1/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"DrivetrainEv/Solver Configuration1/EVAL_KEY/LTI_OUTPUT_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"DrivetrainEv/Solver Configuration1/EVAL_KEY/LTI_STATE_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/domega_o"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Integrator"
) , TARGET_STRING ( "Spd" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING
(
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Vector Concatenate12"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Vector Concatenate2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Vector Concatenate3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Vector Concatenate4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Vector Concatenate7"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Vector Concatenate9"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 27 , 4 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 28 , 4 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 30 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 31 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Sign convention"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 35 , 14 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 36 , 14 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Basic Magic Tire/Simple Magic Tire"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 38 , 19 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 39 , 19 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Sign convention"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 43 , 1 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Limited Slip Differential"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/2*pi"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 49 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Matrix Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Position"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/U,w"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/q"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/.5.*A.*Pabs.//R.//T"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Crm"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Cs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Cym"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Sum of Elements"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Unary Minus"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 77 , 3 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Vector Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Vector Concatenate2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Vector Concatenate3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Vector Concatenate4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 83 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Reshape1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Reshape2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Selector"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Selector1"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Selector2"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Selector3"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/Unary Minus1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Fx/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Fx/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Fz/Add5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/My/a"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/My/b"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/My/h"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/My/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/My/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/My/Add3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Vector Concatenate2"
) , TARGET_STRING ( "Fsb" ) , 0 , 0 , 0 , 0 , 0 } , { 101 , 0 , TARGET_STRING
(
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Vector Concatenate4"
) , TARGET_STRING ( "Fsk" ) , 0 , 0 , 0 , 0 , 0 } , { 102 , 0 , TARGET_STRING
(
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/[NF,NR]"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Damping - Front"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Ramping - Rear"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Stiffness - Front"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Stiffness - Rear"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Add2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/Add3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 110 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 111 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 112 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 113 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/is_active_c8_autolibshared"
) , TARGET_STRING ( "is_active_c8_autolibshared" ) , 0 , 1 , 1 , 0 , 0 } , {
115 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/is_c8_autolibshared"
) , TARGET_STRING ( "is_c8_autolibshared" ) , 0 , 2 , 1 , 0 , 0 } , { 116 , 0
, TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Friction Model/Ratio of static to kinetic"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 122 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 123 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 124 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 125 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch"
) , TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } , { 126 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/is_active_c8_autolibshared"
) , TARGET_STRING ( "is_active_c8_autolibshared" ) , 0 , 1 , 1 , 0 , 0 } , {
127 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/is_c8_autolibshared"
) , TARGET_STRING ( "is_c8_autolibshared" ) , 0 , 2 , 1 , 0 , 0 } , { 128 , 0
, TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Friction Model/Ratio of static to kinetic"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 131 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 133 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Clutch Response/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 135 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Clutch Response/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 136 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Clutch Response/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 138 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 139 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 140 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 141 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 142 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Sum of Elements"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 143 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Switch"
) , TARGET_STRING ( "diffDir" ) , 0 , 0 , 1 , 0 , 1 } , { 144 , 0 ,
TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/domega_o"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 145 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 146 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Subtract"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 149 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Subtract1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Calculate qdot/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Calculate qdot/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Calculate qdot/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 153 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Gravity/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 154 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Transpose"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 0 } , { 155 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 156 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Transpose1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 0 } , { 157 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 158 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 159 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 160 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } , { 161 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 162 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 163 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 164 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } , { 165 , 7 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 3 } , { 166 , 8 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 3 } , { 167 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 168 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 169 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 170 , 12 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 171 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/div0protect - abs poly/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 172 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 173 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 174 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 175 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked"
) , TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } , { 176 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 177 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 178 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 179 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping"
) , TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } , { 180 , 17 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 3 } , { 181 , 18 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 3 } , { 182 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 183 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 184 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 185 , 22 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 186 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/div0protect - abs poly/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 187 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Coupling Torque/Ideal Wet Clutch Coupling/Abs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 188 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Coupling Torque/Ideal Wet Clutch Coupling/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 189 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Coupling Torque/Ideal Wet Clutch Coupling/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 190 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 1 Efficiency/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 191 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 1 Efficiency/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 192 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 1 Efficiency/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 193 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 2 Efficiency/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 194 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 2 Efficiency/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 195 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 2 Efficiency/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 196 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Drive Efficiency/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 197 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Drive Efficiency/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 198 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Drive Efficiency/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 199 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 200 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 201 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 202 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 203 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 204 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 205 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 206 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 207 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 208 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 209 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 210 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 211 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 212 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 213 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/1//NF"
) , TARGET_STRING ( "Fz" ) , 0 , 0 , 1 , 0 , 0 } , { 214 , 0 , TARGET_STRING
(
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/1//NR"
) , TARGET_STRING ( "Fz" ) , 0 , 0 , 1 , 0 , 0 } , { 215 , 0 , TARGET_STRING
(
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Selector"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 216 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Selector1"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 217 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 218 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 219 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 220 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 221 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 222 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 223 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 224 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 225 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 226 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/transform to body axes/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 227 , 3 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/transform to body axes/Reshape2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 228 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 229 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 230 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 231 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 232 , 9 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked/Unary Minus"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 233 , 6 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/-4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 234 , 6 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/Output Inertia"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 235 , 6 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/Output Damping"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 236 , 6 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/omega wheel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 237 , 6 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/Max Dynamic Friction Torque1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 238 , 6 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/Output Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 239 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 240 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 241 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 242 , 0 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 243 , 19 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked/Unary Minus"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 244 , 16 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/-4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 245 , 16 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/Output Inertia"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 246 , 16 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/Output Damping"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 247 , 16 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/omega wheel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 248 , 16 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/Max Dynamic Friction Torque1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 249 , 16 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/Output Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 250 , 0 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Bus Creation/Power/Kinetic Power/Switch"
) , TARGET_STRING ( "diffDir" ) , 0 , 0 , 1 , 0 , 1 } , { 251 , 0 ,
TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 0 } , { 252 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Norm/Sum of Elements1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 253 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/Norm1/Sum of Elements1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 254 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 255 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Transpose1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 0 } , { 256 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 257 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 258 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 259 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Transpose1"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 0 } , { 260 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 261 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 262 , 2 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 0 } , { 263 , 8 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 3 } , { 264 , 18 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip/Break Apart Detection/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 3 } , { 265 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 266 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 267 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 268 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 269 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 270 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 271 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 272 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 273 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 274 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/transform to Inertial axes1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 275 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 276 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn11"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 277 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn12"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 278 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn13"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 279 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn21"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 280 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn22"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 281 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn23"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 282 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn31"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 283 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn32"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 284 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Fcn33"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 285 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/transform to Inertial axes1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 286 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 287 , 7 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Combinatorial  Logic"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 3 } , { 288 , 7 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction/Output Damping"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 289 , 17 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Combinatorial  Logic"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 3 } , { 290 , 17 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Requisite Friction/Output Damping"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 291 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 0 } , { 292 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 293 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 294 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 295 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 296 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 297 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front/wxR/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 298 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 10 , 0 , 0 } , { 299 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem/i x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 300 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem/j x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 301 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem/k x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 302 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1/i x k"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 303 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1/j x i"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 304 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear/wxR/Subsystem1/k x j"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 305 , TARGET_STRING (
"DrivetrainEv/Rotational Inertia" ) , TARGET_STRING ( "b" ) , 0 , 1 , 0 } , {
306 , TARGET_STRING ( "DrivetrainEv/Vehicle/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 307 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Front Bias" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 308 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Rear Bias1" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 309 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "Ndiff" ) , 0 , 1 , 0 } , { 310 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "Jd" ) , 0 , 1 , 0 } , { 311 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "bd" ) , 0 , 1 , 0 } , { 312 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "Jw1" ) , 0 , 1 , 0 } , { 313 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "bw1" ) , 0 , 1 , 0 } , { 314 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "Jw2" ) , 0 , 1 , 0 } , { 315 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "bw2" ) , 0 , 1 , 0 } , { 316 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "omegaw1o" ) , 0 , 1 , 0 } , { 317 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "omegaw2o" ) , 0 , 1 , 0 } , { 318 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "eta" ) , 0 , 1 , 0 } , { 319 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "Ndisks" ) , 0 , 1 , 0 } , { 320 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "Reff" ) , 0 , 1 , 0 } , { 321 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "Fc" ) , 0 , 1 , 0 } , { 322 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "muc" ) , 0 , 11 , 0 } , { 323 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "dw" ) , 0 , 11 , 0 } , { 324 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential"
) , TARGET_STRING ( "tauC" ) , 0 , 1 , 0 } , { 325 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/FExtConstant" ) ,
TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 326 , TARGET_STRING (
"DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/MExtConstant" ) ,
TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 327 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/FxType" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 328 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/rollType" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 329 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/vertType" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 330 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/FxType" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 331 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/rollType" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 332 , TARGET_STRING (
"DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/vertType" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 333 , TARGET_STRING (
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/div0protect - abs poly"
) , TARGET_STRING ( "thresh" ) , 0 , 1 , 0 } , { 334 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)"
) , TARGET_STRING ( "v_ini" ) , 0 , 1 , 0 } , { 335 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)"
) , TARGET_STRING ( "pos_ini" ) , 0 , 13 , 0 } , { 336 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)"
) , TARGET_STRING ( "g" ) , 0 , 1 , 0 } , { 337 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force"
) , TARGET_STRING ( "beta_w" ) , 0 , 13 , 0 } , { 338 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force"
) , TARGET_STRING ( "Cs" ) , 0 , 13 , 0 } , { 339 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force"
) , TARGET_STRING ( "Cym" ) , 0 , 13 , 0 } , { 340 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force"
) , TARGET_STRING ( "R" ) , 0 , 1 , 0 } , { 341 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Sign convention"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 342 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Sign convention"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 343 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Limited Slip Differential"
) , TARGET_STRING ( "shaftSwitchMask" ) , 0 , 1 , 0 } , { 344 , TARGET_STRING
(
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/2*pi"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 345 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 1 , 0 } , { 346 ,
TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 1 , 0 } , { 347 ,
TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Reset"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 348 , TARGET_STRING (
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 349 ,
TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Matrix Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 350 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "WrappedStateUpperValue" ) , 0 , 1 , 0 } , { 351 ,
TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "WrappedStateLowerValue" ) , 0 , 1 , 0 } , { 352 ,
TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 353 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Crm"
) , TARGET_STRING ( "Table" ) , 0 , 13 , 0 } , { 354 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Crm"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 13 , 0 } , { 355 ,
TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Drag Force/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 356 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/[NF,NR]"
) , TARGET_STRING ( "Gain" ) , 0 , 13 , 0 } , { 357 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/[NF,NR]b"
) , TARGET_STRING ( "Gain" ) , 0 , 13 , 0 } , { 358 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Suspension/[NF,NR]k"
) , TARGET_STRING ( "Gain" ) , 0 , 13 , 0 } , { 359 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 360 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 361 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 362 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 363 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 364 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 365 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 366 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Longitudinal Parameters/Magic Formula Peak Value/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 367 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 368 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 369 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 370 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 371 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 372 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant16"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 373 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 374 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 375 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 376 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 377 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 378 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Rolling Parameters/Simple/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 379 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 380 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 381 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 382 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant13"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 383 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 384 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant15"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 385 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant16"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 386 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant17"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 387 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant18"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 388 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 389 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 390 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant20"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 391 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant21"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 392 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant22"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 393 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant23"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 394 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant24"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 395 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 396 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 397 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 398 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 399 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 400 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant8"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 401 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Vertical DOF/None/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 402 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 403 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 404 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 405 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 406 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 407 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 15 , 0 } , { 408 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 409 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Longitudinal Parameters/Magic Formula Peak Value/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 410 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 411 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 412 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 413 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 414 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 415 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant16"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 416 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 12 , 0 } , { 417 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 418 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 419 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 420 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 421 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Rolling Parameters/Simple/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 422 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 423 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 424 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 425 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant13"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 426 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant14"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 427 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant15"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 428 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant16"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 429 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant17"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 430 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant18"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 431 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant19"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 432 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 433 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant20"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 434 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant21"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 435 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant22"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 436 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant23"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 437 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant24"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 438 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 439 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 440 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 441 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 442 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant7"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 443 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant8"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 444 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Vertical DOF/None/Constant9"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 445 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Clutch Response/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 446 ,
TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 447 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 448 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 449 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/y/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 450 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Determine Force,  Mass & Inertia/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 451 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Transform  to Earth Axes/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 452 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 453 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 454 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 455 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/phi"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 456 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Earth2Body/rotation/psi"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 457 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 458 ,
TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 459 ,
TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Coupling Torque/Ideal Wet Clutch Coupling/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 460 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 1 Efficiency/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 461 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 1 Efficiency/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 462 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 2 Efficiency/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 463 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Axle 2 Efficiency/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 464 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Drive Efficiency/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 465 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Efficiency/Drive Efficiency/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 466 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Reset"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 467 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 468 ,
TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/1//NF"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 469 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Forces/Forces 3DOF/1//NR"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 470 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Front"
) , TARGET_STRING ( "R_T2" ) , 0 , 1 , 0 } , { 471 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Frame Routing/Longitudinal 3DOF/Hard Point Coordinate Transform Rear"
) , TARGET_STRING ( "R_T2" ) , 0 , 1 , 0 } , { 472 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Inertial Frame/Inertial Axes/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 473 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 474 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 475 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 476 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked/locked"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 477 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked/locked1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 478 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Locked/locked2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 479 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/Slipping/-4"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 480 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/yn"
) , TARGET_STRING ( "InitialOutput" ) , 3 , 1 , 0 } , { 481 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 482 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectSlip/yn"
) , TARGET_STRING ( "InitialOutput" ) , 3 , 1 , 0 } , { 483 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Torque Conversion1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 484 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 485 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Brakes/Disk Brake/Disk Brake/Disallow Negative Brake Torque"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 486 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked/locked"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 487 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked/locked1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 488 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Locked/locked2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 489 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/Slipping/-4"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 490 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/yn"
) , TARGET_STRING ( "InitialOutput" ) , 3 , 1 , 0 } , { 491 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 492 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectSlip/yn"
) , TARGET_STRING ( "InitialOutput" ) , 3 , 1 , 0 } , { 493 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Bus Creation/Power/Kinetic Power/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 494 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Bus Creation/Power/Kinetic Power/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 495 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Bus Creation/Power/Kinetic Power/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 496 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Combinatorial  Logic"
) , TARGET_STRING ( "TruthTable" ) , 3 , 16 , 0 } , { 497 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 3 , 1 , 0 } , { 498 ,
TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Combinatorial  Logic"
) , TARGET_STRING ( "TruthTable" ) , 3 , 16 , 0 } , { 499 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/Clutch/Clutch/detectLockup/Friction Mode Logic/Lockup FSM/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 3 , 1 , 0 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 500 , TARGET_STRING ( "Af" ) , 0 , 1 , 0 } , {
501 , TARGET_STRING ( "Cd" ) , 0 , 1 , 0 } , { 502 , TARGET_STRING ( "Cl" ) ,
0 , 1 , 0 } , { 503 , TARGET_STRING ( "Cpm" ) , 0 , 1 , 0 } , { 504 ,
TARGET_STRING ( "FZMAX" ) , 0 , 1 , 0 } , { 505 , TARGET_STRING ( "FZMIN" ) ,
0 , 1 , 0 } , { 506 , TARGET_STRING ( "FsbF" ) , 0 , 11 , 0 } , { 507 ,
TARGET_STRING ( "FsbR" ) , 0 , 11 , 0 } , { 508 , TARGET_STRING ( "FskF" ) ,
0 , 17 , 0 } , { 509 , TARGET_STRING ( "FskR" ) , 0 , 17 , 0 } , { 510 ,
TARGET_STRING ( "Iyy" ) , 0 , 1 , 0 } , { 511 , TARGET_STRING ( "Iyy_Whl" ) ,
0 , 1 , 0 } , { 512 , TARGET_STRING ( "Jmotor" ) , 0 , 1 , 0 } , { 513 ,
TARGET_STRING ( "Lrel" ) , 0 , 1 , 0 } , { 514 , TARGET_STRING ( "Mass" ) , 0
, 1 , 0 } , { 515 , TARGET_STRING ( "Pabs" ) , 0 , 1 , 0 } , { 516 ,
TARGET_STRING ( "Re" ) , 0 , 1 , 0 } , { 517 , TARGET_STRING ( "Rm" ) , 0 , 1
, 0 } , { 518 , TARGET_STRING ( "T" ) , 0 , 1 , 0 } , { 519 , TARGET_STRING (
"UNLOADED_RADIUS" ) , 0 , 1 , 0 } , { 520 , TARGET_STRING ( "VXLOW" ) , 0 , 1
, 0 } , { 521 , TARGET_STRING ( "aMy" ) , 0 , 1 , 0 } , { 522 , TARGET_STRING
( "a_CG" ) , 0 , 1 , 0 } , { 523 , TARGET_STRING ( "alphaMy" ) , 0 , 1 , 0 }
, { 524 , TARGET_STRING ( "b" ) , 0 , 1 , 0 } , { 525 , TARGET_STRING ( "bMy"
) , 0 , 1 , 0 } , { 526 , TARGET_STRING ( "b_CG" ) , 0 , 1 , 0 } , { 527 ,
TARGET_STRING ( "betaMy" ) , 0 , 1 , 0 } , { 528 , TARGET_STRING ( "br" ) , 0
, 1 , 0 } , { 529 , TARGET_STRING ( "cMy" ) , 0 , 1 , 0 } , { 530 ,
TARGET_STRING ( "disk_abore" ) , 0 , 1 , 0 } , { 531 , TARGET_STRING (
"domega_o" ) , 0 , 1 , 0 } , { 532 , TARGET_STRING ( "dzdotsF" ) , 0 , 11 , 0
} , { 533 , TARGET_STRING ( "dzdotsR" ) , 0 , 11 , 0 } , { 534 ,
TARGET_STRING ( "dzsF" ) , 0 , 17 , 0 } , { 535 , TARGET_STRING ( "dzsR" ) ,
0 , 17 , 0 } , { 536 , TARGET_STRING ( "g" ) , 0 , 1 , 0 } , { 537 ,
TARGET_STRING ( "h" ) , 0 , 1 , 0 } , { 538 , TARGET_STRING ( "k" ) , 0 , 1 ,
0 } , { 539 , TARGET_STRING ( "kappamax" ) , 0 , 1 , 0 } , { 540 ,
TARGET_STRING ( "lam_x" ) , 0 , 1 , 0 } , { 541 , TARGET_STRING (
"mu_kinetic" ) , 0 , 1 , 0 } , { 542 , TARGET_STRING ( "mu_static" ) , 0 , 1
, 0 } , { 543 , TARGET_STRING ( "num_pads" ) , 0 , 1 , 0 } , { 544 ,
TARGET_STRING ( "omega_c" ) , 0 , 1 , 0 } , { 545 , TARGET_STRING ( "omega_o"
) , 0 , 1 , 0 } , { 546 , TARGET_STRING ( "omegao" ) , 0 , 1 , 0 } , { 547 ,
TARGET_STRING ( "press" ) , 0 , 1 , 0 } , { 548 , TARGET_STRING ( "q_o" ) , 0
, 1 , 0 } , { 549 , TARGET_STRING ( "theta_o" ) , 0 , 1 , 0 } , { 550 ,
TARGET_STRING ( "theta_o_Veh" ) , 0 , 1 , 0 } , { 551 , TARGET_STRING (
"xdot_o" ) , 0 , 1 , 0 } , { 552 , TARGET_STRING ( "zdot_o" ) , 0 , 1 , 0 } ,
{ 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . napknbkquk [ 0 ] , & rtB .
bxpazjxklu , & rtB . gmna1ac1wl , & rtB . fc2wrfay4e , & rtB . jfgqtvutxu , &
rtB . carktevnct [ 0 ] , & rtB . izyfxqhqcz , & rtB . iwj2aio34h , & rtB .
hr50ll3oqj , & rtB . fw0g4ey4fo , & rtB . pweyi4u1zx , & rtB . nsglwteu5v , &
rtB . gofcinmsl2 , & rtB . kdkxysqm0t , & rtB . ew1reedbnv , & rtB .
emlvbttdyz , & rtB . jxcgxst2is , & rtB . cbr3oyt3lb , & rtB . fti1lk5vjw [ 0
] , & rtB . mpypmsgyi1 [ 0 ] , & rtB . l3uikgbb3b [ 0 ] , & rtB . oorww1wcg3
[ 0 ] , & rtB . gaek01rrr3 [ 0 ] , & rtB . ehplbjsl2s [ 0 ] , & rtB .
fl3w3jvdsi [ 0 ] , & rtB . b4224qf4tv [ 0 ] , & rtB . nkuvi2wir1 [ 0 ] , &
rtB . kkrjlu4uvo . odbylawxnz , & rtB . kkrjlu4uvo . istsrpdzon , & rtB .
pv2oncoizs , & rtB . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . ocvy1l4023
, & rtB . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . jahnvx3kqt , & rtB .
bw244p3q0q , & rtB . jg2roxx5bs , & rtB . m5ku5csxya , & rtB . jlep0zzj4c .
odbylawxnz , & rtB . jlep0zzj4c . istsrpdzon , & rtB . c5ixvkkdja , & rtB .
nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . ocvy1l4023 , & rtB . nt1qt43cpp
[ 0 ] . azxqoevuvc . lkn4jcwpit . jahnvx3kqt , & rtB . hlf1acubd5 , & rtB .
bep5golme5 , & rtB . hmfp21fvok , & rtB . glnjftgoht [ 0 ] , & rtB .
pigob0blb3 [ 0 ] , & rtB . ihgs3schr1 , & rtB . ci1mx445b5 [ 0 ] , & rtB .
bf43kefmfh , & rtB . btryepb3lp , & rtB . asa4c401qh , & rtB . jwoypvyz3y , &
rtB . awg4dtdgtn , & rtB . mywr3gtqt3 , & rtB . iinnocqymd [ 0 ] , & rtB .
aufjnco1bm [ 0 ] , & rtB . kv3osjbizo , & rtB . hbvagjoehw [ 0 ] , & rtB .
kpql35e3jx , & rtB . ek20uulqhd [ 0 ] , & rtB . kjjkugtces [ 0 ] , & rtB .
afh4emj1nn [ 0 ] , & rtB . ogvrkt53m0 [ 0 ] , & rtB . lhlooh5fkc [ 0 ] , &
rtB . hhz4t34e2g [ 0 ] , ( & rtB . lhlooh5fkc [ 0 ] + 3 ) , ( & rtB .
lhlooh5fkc [ 0 ] + 1 ) , ( & rtB . lhlooh5fkc [ 0 ] + 5 ) , & rtB .
hs03wuldth [ 0 ] , & rtB . jc5lgzz344 [ 0 ] , & rtB . b2lhkjzml4 , & rtB .
kfv1jnxdcb [ 0 ] , & rtB . gxnvrkca2h [ 0 ] , ( & rtB . lhlooh5fkc [ 0 ] + 4
) , & rtB . dkru0kjfjp [ 0 ] , & rtB . jiojizdhep , & rtB . cisxqujvum [ 0 ]
, & rtB . c1dlqtm02p [ 0 ] , & rtB . ko2j33jveu [ 0 ] , & rtB . lwno5xammy [
0 ] , & rtB . a443qjuymv [ 0 ] , ( & rtB . lwno5xammy [ 0 ] + 3 ) , ( & rtB .
lwno5xammy [ 0 ] + 6 ) , & rtB . npguaw4amt [ 0 ] , & rtB . hhx0yapiru [ 0 ]
, & rtB . oxzcy2p53x [ 0 ] , & rtB . hq340ksp50 [ 0 ] , & rtB . hngolbfjxs [
0 ] , & rtB . bulmsnibdh [ 0 ] , & rtB . a34vsr4icm [ 0 ] , ( & rtB .
a443qjuymv [ 0 ] + 3 ) , & rtB . lwno5xammy [ 0 ] , & rtB . m5zcbblxpv , &
rtB . dcdu0sstq5 , & rtB . blbatpv3jn , & rtB . kg2fpgf5gs , & rtB .
gt2zfa4a1s , & rtB . d4liyxsdf3 , & rtB . mptksaxj4h , & rtB . in24fxjjbm , &
rtB . obiqeibdxg , & rtB . nairdbyqp1 [ 0 ] , & rtB . arhf0clxqd [ 0 ] , &
rtB . o3id5sdn4p [ 0 ] , & rtB . nairdbyqp1 [ 0 ] , ( & rtB . nairdbyqp1 [ 0
] + 1 ) , & rtB . arhf0clxqd [ 0 ] , ( & rtB . arhf0clxqd [ 0 ] + 1 ) , & rtB
. hythrdl4q2 [ 0 ] , & rtB . otz30dqwqs [ 0 ] , & rtB . i5rrf0mxdx [ 0 ] , &
rtB . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . fqnbs42x2r , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . ocvy1l4023 , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . jahnvx3kqt , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . idh10nqjbu , & rtDW .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . frhewkvqk5 , & rtDW .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . k54dnhlmkd , & rtB . finh0wc4da
, & rtB . l3kqf3ebdp , & rtB . ileilbufb2 , & rtB . n4ylimvkll , & rtB .
adqsh2k4ic , & rtB . omo5i3z4hj , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc .
lkn4jcwpit . fqnbs42x2r , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit
. ocvy1l4023 , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit .
jahnvx3kqt , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . idh10nqjbu
, & rtDW . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . frhewkvqk5 , & rtDW .
nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . k54dnhlmkd , & rtB . nszyb3hol0
, & rtB . ixk3hxcurq , & rtB . earfrwf0hr , & rtB . nlphchuiom , & rtB .
gsvjzha0ac , & rtB . fzgx2tufv1 , & rtB . jcwtpqnasc , & rtB . ogzwtt0uth , &
rtB . ndk4xlqpf1 , & rtB . cx0yxkcry4 [ 0 ] , & rtB . iya5tp4cdn [ 0 ] , &
rtB . bourbfwnuv [ 0 ] , & rtB . num3ib20gq [ 0 ] , & rtB . dtdini0pef , &
rtB . b1jodlhboe , & rtB . iw4ps3gqvq , & rtB . jbv5m1xncl , & rtB .
f12frx44r4 , & rtB . mbn5ixhvjf , & rtB . fjgrzm4gzz , & rtB . aav3ryaivc , &
rtB . ddppy23mxp , & rtB . j4zwcvum4v , & rtB . ksvzqk05tq , & rtB .
lqho4qf5m3 , & rtB . c4paxuk0gc [ 0 ] , & rtB . l5akcup4jj [ 0 ] , & rtB .
byxw4oacat [ 0 ] , & rtB . lkkyw1qsdn [ 3 ] . iny0n31qca [ 0 ] , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . idh10nqjbu , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . fqnbs42x2r , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . ocvy1l4023 , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . jahnvx3kqt , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . fqnbs42x2r , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . ocvy1l4023 , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . idh10nqjbu , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . jahnvx3kqt , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . ejvkch2wis , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . legzb2sclz , & rtB . dmus3c4xmj
, & rtB . cztrdqhftf , & rtB . loxwvwrcia , & rtB . kptpbclfwk , & rtB .
nuqisryxie , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . idh10nqjbu
, & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . fqnbs42x2r , & rtB .
nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . ocvy1l4023 , & rtB . nt1qt43cpp
[ 0 ] . azxqoevuvc . lkn4jcwpit . jahnvx3kqt , & rtB . nt1qt43cpp [ 0 ] .
azxqoevuvc . lkn4jcwpit . fqnbs42x2r , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc
. lkn4jcwpit . ocvy1l4023 , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc .
lkn4jcwpit . idh10nqjbu , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit
. jahnvx3kqt , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit .
ejvkch2wis , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . legzb2sclz
, & rtB . bserwztahf , & rtB . dmdfff1fpp , & rtB . hj2blpaerv , & rtB .
mnna5hwg3f , & rtB . gnacurz3w5 , & rtB . kiay1ycxcl , & rtB . facust4yjk , &
rtB . ky2l1btjfj , & rtB . ao0tmcfamz , & rtB . otfutxs4mr , & rtB .
o3l2toprpn , & rtB . gz1skuswsk , & rtB . mqbrmoxrar , & rtB . bkdlmlnojz , &
rtB . pufuucy0fb , & rtB . hd1scyomug , & rtB . lulkwzk1on , & rtB .
aaxsvkqai0 , & rtB . ia0ojskpxs , & rtB . fnrs5gvhc4 , & rtB . ewjyokkn1d , &
rtB . mtxbvc4f5c , & rtB . ffh4nyfsmr [ 0 ] , ( & rtB . ffh4nyfsmr [ 0 ] + 3
) , ( & rtB . ffh4nyfsmr [ 0 ] + 6 ) , ( & rtB . ffh4nyfsmr [ 0 ] + 1 ) , ( &
rtB . ffh4nyfsmr [ 0 ] + 4 ) , ( & rtB . ffh4nyfsmr [ 0 ] + 7 ) , ( & rtB .
ffh4nyfsmr [ 0 ] + 2 ) , ( & rtB . ffh4nyfsmr [ 0 ] + 5 ) , ( & rtB .
ffh4nyfsmr [ 0 ] + 8 ) , & rtB . f1gv0k550c , & rtB . fc21izfzx4 , & rtB .
o0omv4lhyr [ 0 ] , & rtB . oyc1al4h1w [ 0 ] , & rtB . lkkyw1qsdn [ 3 ] .
iftka2hl45 [ 0 ] , ( & rtB . lkkyw1qsdn [ 3 ] . iftka2hl45 [ 0 ] + 3 ) , ( &
rtB . lkkyw1qsdn [ 3 ] . iftka2hl45 [ 0 ] + 6 ) , ( & rtB . lkkyw1qsdn [ 3 ]
. iftka2hl45 [ 0 ] + 1 ) , ( & rtB . lkkyw1qsdn [ 3 ] . iftka2hl45 [ 0 ] + 4
) , ( & rtB . lkkyw1qsdn [ 3 ] . iftka2hl45 [ 0 ] + 7 ) , ( & rtB .
lkkyw1qsdn [ 3 ] . iftka2hl45 [ 0 ] + 2 ) , ( & rtB . lkkyw1qsdn [ 3 ] .
iftka2hl45 [ 0 ] + 5 ) , ( & rtB . lkkyw1qsdn [ 3 ] . iftka2hl45 [ 0 ] + 8 )
, & rtB . lkkyw1qsdn [ 3 ] . lsxufha4ar [ 0 ] , & rtB . jysmct5dke [ 0 ] , &
rtB . hqvukv2xsp , & rtB . ftuivg3ybn , & rtB . d34xk5ykmh , & rtB .
ax54sddcaw , & rtB . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . idh10nqjbu
, & rtB . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . m4gvzn05xv , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . eqiwbbwx2h , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . lgc5y05bba , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . inrtpw2cx1 , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . m4kwqt0weh , & rtB .
g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . jdin3zvg0f , & rtB . ew44hdju13
, & rtB . knygbp5qud , & rtB . b3mk52fmiw , & rtB . ius1e2jprf , & rtB .
nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . idh10nqjbu , & rtB . nt1qt43cpp
[ 0 ] . azxqoevuvc . lkn4jcwpit . m4gvzn05xv , & rtB . nt1qt43cpp [ 0 ] .
azxqoevuvc . lkn4jcwpit . eqiwbbwx2h , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc
. lkn4jcwpit . lgc5y05bba , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc .
lkn4jcwpit . inrtpw2cx1 , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit
. m4kwqt0weh , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit .
jdin3zvg0f , & rtB . dgob255otz , & rtB . ffh4nyfsmr [ 0 ] , & rtB .
oge4pedyvk , & rtB . ip3nkmhbmh , & rtB . jldjif2bkl [ 0 ] , & rtB .
dvzu21xwhx [ 0 ] , & rtB . msa0c5sdpt [ 0 ] , & rtB . js34n2lyrx [ 0 ] , &
rtB . po32laksrz [ 0 ] , & rtB . kaebigjgd4 [ 0 ] , & rtB . ph0tpe5if5 [ 0 ]
, & rtB . bp5oyyiqlm [ 0 ] , & rtB . lkkyw1qsdn [ 3 ] . iftka2hl45 [ 0 ] , &
rtB . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . legzb2sclz , & rtB .
nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . legzb2sclz , & rtB . f2ueewkbjc
[ 0 ] , ( & rtB . f2ueewkbjc [ 0 ] + 3 ) , ( & rtB . f2ueewkbjc [ 0 ] + 6 ) ,
( & rtB . f2ueewkbjc [ 0 ] + 1 ) , ( & rtB . f2ueewkbjc [ 0 ] + 4 ) , ( & rtB
. f2ueewkbjc [ 0 ] + 7 ) , ( & rtB . f2ueewkbjc [ 0 ] + 2 ) , ( & rtB .
f2ueewkbjc [ 0 ] + 5 ) , ( & rtB . f2ueewkbjc [ 0 ] + 8 ) , & rtB .
nctohqsvwh [ 0 ] , & rtB . hvfsoaq5ld [ 0 ] , & rtB . oipqkobspt [ 0 ] , ( &
rtB . oipqkobspt [ 0 ] + 3 ) , ( & rtB . oipqkobspt [ 0 ] + 6 ) , ( & rtB .
oipqkobspt [ 0 ] + 1 ) , ( & rtB . oipqkobspt [ 0 ] + 4 ) , ( & rtB .
oipqkobspt [ 0 ] + 7 ) , ( & rtB . oipqkobspt [ 0 ] + 2 ) , ( & rtB .
oipqkobspt [ 0 ] + 5 ) , ( & rtB . oipqkobspt [ 0 ] + 8 ) , & rtB .
he340y04vs [ 0 ] , & rtB . me2bqjjbgm [ 0 ] , & rtB . g0qms2rrt2g [ 0 ] .
azxqoevuvc . lkn4jcwpit . ejvkch2wis , & rtB . g0qms2rrt2g [ 0 ] . azxqoevuvc
. lkn4jcwpit . borgqrxodu , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc .
lkn4jcwpit . ejvkch2wis , & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit
. borgqrxodu , & rtB . f2ueewkbjc [ 0 ] , & rtB . lniie22aca , & rtB .
pfxb5cp324 , & rtB . cjf0g1m02r , & rtB . hf22yy5y1q , & rtB . edhzlsgf2y , &
rtB . pgdiss5r2m , & rtB . oipqkobspt [ 0 ] , & rtB . l4kkea5xp2 , & rtB .
audvaxq0d4 , & rtB . ax0lh0rex0 , & rtB . gbtcjmplpx , & rtB . lv1h0u3agv , &
rtB . ey3jisgadc , & rtP . RotationalInertia_b , & rtP . Integrator_IC , &
rtP . FrontBias_Gain , & rtP . RearBias1_Gain , & rtP .
LimitedSlipDifferential_Ndiff , & rtP . LimitedSlipDifferential_Jd , & rtP .
LimitedSlipDifferential_bd , & rtP . LimitedSlipDifferential_Jw1 , & rtP .
LimitedSlipDifferential_bw1 , & rtP . LimitedSlipDifferential_Jw2 , & rtP .
LimitedSlipDifferential_bw2 , & rtP . LimitedSlipDifferential_omegaw1o , &
rtP . LimitedSlipDifferential_omegaw2o , & rtP . LimitedSlipDifferential_eta
, & rtP . LimitedSlipDifferential_Ndisks , & rtP .
LimitedSlipDifferential_Reff , & rtP . LimitedSlipDifferential_Fc , & rtP .
LimitedSlipDifferential_muc [ 0 ] , & rtP . LimitedSlipDifferential_dw [ 0 ]
, & rtP . LimitedSlipDifferential_tauC , & rtP . FExtConstant_Value [ 0 ] , &
rtP . MExtConstant_Value [ 0 ] , & rtP . FxType_Value , & rtP .
rollType_Value , & rtP . vertType_Value , & rtP . FxType_Value_lufvzgmz0j , &
rtP . rollType_Value_d4ppucsvxa , & rtP . vertType_Value_cpqcctvc03 , & rtP .
div0protectabspoly_thresh , & rtP . uDOFBodyAxes_v_ini , & rtP .
uDOFBodyAxes_pos_ini [ 0 ] , & rtP . uDOFBodyAxes_g , & rtP .
DragForce_beta_w [ 0 ] , & rtP . DragForce_Cs [ 0 ] , & rtP . DragForce_Cym [
0 ] , & rtP . DragForce_R , & rtP . Signconvention_Gain , & rtP .
Signconvention_Gain_i5iwgnmbdg , & rtP .
LimitedSlipDifferential_shaftSwitchMask , & rtP . upi_Gain , & rtP .
Integrator_UpperSat , & rtP . Integrator_LowerSat , & rtP .
Reset_Value_ltqw1krttf , & rtP . Memory_InitialCondition_fzolzaguge , & rtP .
MatrixGain_Gain [ 0 ] , & rtP . Theta_WrappedStateUpperValue , & rtP .
Theta_WrappedStateLowerValue , & rtP . Constant4_Value [ 0 ] , & rtP .
Crm_tableData [ 0 ] , & rtP . Crm_bp01Data [ 0 ] , & rtP . Switch_Threshold ,
& rtP . NFNR_Gain [ 0 ] , & rtP . NFNRb_Gain [ 0 ] , & rtP . NFNRk_Gain [ 0 ]
, & rtP . Constant_Value_gwdg5epxbj , & rtP . Constant1_Value_dknu4stzhh , &
rtP . Constant12_Value_proh0kgbum [ 0 ] , & rtP . Constant14_Value [ 0 ] , &
rtP . Constant19_Value [ 0 ] , & rtP . Constant2_Value_cz4ittyvrh [ 0 ] , &
rtP . Constant6_Value , & rtP . Constant7_Value , & rtP .
Constant1_Value_ojyzymfvdf , & rtP . Constant10_Value , & rtP .
Constant11_Value , & rtP . Constant12_Value_p5hf31jr3e [ 0 ] , & rtP .
Constant14_Value_aba3ooix0p [ 0 ] , & rtP . Constant16_Value , & rtP .
Constant19_Value_njgerszt24 [ 0 ] , & rtP . Constant2_Value_lwhwyyeuxk , &
rtP . Constant3_Value , & rtP . Constant5_Value , & rtP .
Constant7_Value_gxccvaxnbj , & rtP . Constant9_Value , & rtP .
Constant1_Value_ct2oikhell , & rtP . Constant10_Value_md0t0tsexk , & rtP .
Constant11_Value_c1g5k2falu , & rtP . Constant13_Value , & rtP .
Constant14_Value_i4532q1mpk , & rtP . Constant15_Value , & rtP .
Constant16_Value_ngoog4lshw , & rtP . Constant17_Value , & rtP .
Constant18_Value , & rtP . Constant19_Value_a0uhprsrne , & rtP .
Constant2_Value_lut4znz5ox , & rtP . Constant20_Value , & rtP .
Constant21_Value , & rtP . Constant22_Value , & rtP . Constant23_Value , &
rtP . Constant24_Value , & rtP . Constant3_Value_hfdzbleowk , & rtP .
Constant4_Value_f1kh5fqc5r , & rtP . Constant5_Value_cbkmzfhmey , & rtP .
Constant6_Value_prvgxkhyqy , & rtP . Constant7_Value_a4zujb3rpa , & rtP .
Constant8_Value , & rtP . Constant9_Value_fyveuupisu , & rtP .
Constant_Value_jtawhtsysr , & rtP . Constant1_Value_fjaudrjhdl , & rtP .
Constant12_Value_ekkzpqixof [ 0 ] , & rtP . Constant14_Value_bybhg4ohya [ 0 ]
, & rtP . Constant19_Value_lqhzgejtie [ 0 ] , & rtP .
Constant2_Value_ahxqsxq3tu [ 0 ] , & rtP . Constant6_Value_kedjcf23fy , & rtP
. Constant7_Value_pixa3rqdjd , & rtP . Constant1_Value_lozhj4hfg4 , & rtP .
Constant10_Value_behsis2gkb , & rtP . Constant11_Value_pauyoxiidd , & rtP .
Constant12_Value_jjodmq5x4f [ 0 ] , & rtP . Constant14_Value_bmmxa54qsf [ 0 ]
, & rtP . Constant16_Value_dfgzubkfqq , & rtP . Constant19_Value_cjkss2p31v [
0 ] , & rtP . Constant2_Value_gi1emdzvsk , & rtP . Constant3_Value_ixz2bdxktj
, & rtP . Constant5_Value_corjlakafh , & rtP . Constant7_Value_iuio0bhswj , &
rtP . Constant9_Value_mqlbfqzvp4 , & rtP . Constant1_Value_dn53nszxpb , & rtP
. Constant10_Value_datoxoevhn , & rtP . Constant11_Value_pizwvw1rzs , & rtP .
Constant13_Value_dwnk2235vn , & rtP . Constant14_Value_i4kwnrkv3h , & rtP .
Constant15_Value_flu5ou3ydx , & rtP . Constant16_Value_mk3andc4xt , & rtP .
Constant17_Value_fjpjpdrunn , & rtP . Constant18_Value_ngbpjrqfcn , & rtP .
Constant19_Value_osodq1xdbo , & rtP . Constant2_Value_lqgwunbbft , & rtP .
Constant20_Value_hnrc5vlofu , & rtP . Constant21_Value_e0lxcbmexj , & rtP .
Constant22_Value_kpbolgth1z , & rtP . Constant23_Value_b0h5b3oyri , & rtP .
Constant24_Value_bf3qpd1yub , & rtP . Constant3_Value_ngurra14in , & rtP .
Constant4_Value_bbzkuzilzq , & rtP . Constant5_Value_i4lm1emseb , & rtP .
Constant6_Value_gemqs5gkeb , & rtP . Constant7_Value_npz0eazso3 , & rtP .
Constant8_Value_fvkoq4lt4g , & rtP . Constant9_Value_dkanzsokxj , & rtP .
Integrator_IC_lewcleyhsc , & rtP . Constant_Value_cwq12cxfny , & rtP .
Constant1_Value_g2bu1bfzgh , & rtP . Gain1_Gain , & rtP .
Switch_Threshold_cg5jpvuvn1 , & rtP . Constant2_Value , & rtP .
Constant_Value , & rtP . Constant1_Value , & rtP . Constant12_Value , & rtP .
Constant2_Value_gowhp30m5w , & rtP . lkkyw1qsdn . phi_Value , & rtP .
lkkyw1qsdn . psi_Value , & rtP . Integrator_IC_cnx1wxjvuo , & rtP .
Integrator_IC_ie22qiuarn , & rtP . Gain_Gain , & rtP .
Constant_Value_nmlkfmyo3q , & rtP . Switch_Threshold_exzp10ezln , & rtP .
Constant_Value_ggkgw5e4ms , & rtP . Switch_Threshold_npanpsygul , & rtP .
Constant_Value_glbkitsq4x , & rtP . Switch_Threshold_fkgz22tddd , & rtP .
Reset_Value , & rtP . Memory_InitialCondition , & rtP . uNF_Gain , & rtP .
uNR_Gain , & rtP . HardPointCoordinateTransformFront_R_T2 , & rtP .
HardPointCoordinateTransformRear_R_T2 , & rtP . Constant_Value_ful2bhsbsr , &
rtP . TorqueConversion1_Gain , & rtP . DisallowNegativeBrakeTorque_UpperSat ,
& rtP . DisallowNegativeBrakeTorque_LowerSat , & rtP . g0qms2rrt2g .
azxqoevuvc . lkn4jcwpit . locked_Value , & rtP . g0qms2rrt2g . azxqoevuvc .
lkn4jcwpit . locked1_Value , & rtP . g0qms2rrt2g . azxqoevuvc . lkn4jcwpit .
locked2_Value , & rtP . g0qms2rrt2g . azxqoevuvc . lkn4jcwpit . u_Gain , &
rtP . g0qms2rrt2g . azxqoevuvc . lkn4jcwpit . yn_Y0_iz3dygeyuh , & rtP .
g0qms2rrt2g . azxqoevuvc . lkn4jcwpit . Constant_Value , & rtP . g0qms2rrt2g
. azxqoevuvc . lkn4jcwpit . yn_Y0 , & rtP . TorqueConversion1_Gain_d5kxwp3ghy
, & rtP . DisallowNegativeBrakeTorque_UpperSat_nolqf4lzdx , & rtP .
DisallowNegativeBrakeTorque_LowerSat_etj13r0dm4 , & rtP . nt1qt43cpp .
azxqoevuvc . lkn4jcwpit . locked_Value , & rtP . nt1qt43cpp . azxqoevuvc .
lkn4jcwpit . locked1_Value , & rtP . nt1qt43cpp . azxqoevuvc . lkn4jcwpit .
locked2_Value , & rtP . nt1qt43cpp . azxqoevuvc . lkn4jcwpit . u_Gain , & rtP
. nt1qt43cpp . azxqoevuvc . lkn4jcwpit . yn_Y0_iz3dygeyuh , & rtP .
nt1qt43cpp . azxqoevuvc . lkn4jcwpit . Constant_Value , & rtP . nt1qt43cpp .
azxqoevuvc . lkn4jcwpit . yn_Y0 , & rtP . Constant_Value_iyvd2nipbn , & rtP .
Constant2_Value_evj0aohnzb , & rtP . Switch_Threshold_ndiyw3awdg , & rtP .
g0qms2rrt2g . azxqoevuvc . lkn4jcwpit . CombinatorialLogic_table [ 0 ] , &
rtP . g0qms2rrt2g . azxqoevuvc . lkn4jcwpit . UnitDelay_InitialCondition , &
rtP . nt1qt43cpp . azxqoevuvc . lkn4jcwpit . CombinatorialLogic_table [ 0 ] ,
& rtP . nt1qt43cpp . azxqoevuvc . lkn4jcwpit . UnitDelay_InitialCondition , &
rtP . Af , & rtP . Cd , & rtP . Cl , & rtP . Cpm , & rtP . FZMAX , & rtP .
FZMIN , & rtP . FsbF [ 0 ] , & rtP . FsbR [ 0 ] , & rtP . FskF [ 0 ] , & rtP
. FskR [ 0 ] , & rtP . Iyy , & rtP . Iyy_Whl , & rtP . Jmotor , & rtP . Lrel
, & rtP . Mass , & rtP . Pabs , & rtP . Re , & rtP . Rm , & rtP . T , & rtP .
UNLOADED_RADIUS , & rtP . VXLOW , & rtP . aMy , & rtP . a_CG , & rtP .
alphaMy , & rtP . b , & rtP . bMy , & rtP . b_CG , & rtP . betaMy , & rtP .
br , & rtP . cMy , & rtP . disk_abore , & rtP . domega_o , & rtP . dzdotsF [
0 ] , & rtP . dzdotsR [ 0 ] , & rtP . dzsF [ 0 ] , & rtP . dzsR [ 0 ] , & rtP
. g , & rtP . h , & rtP . k , & rtP . kappamax , & rtP . lam_x , & rtP .
mu_kinetic , & rtP . mu_static , & rtP . num_pads , & rtP . omega_c , & rtP .
omega_o , & rtP . omegao , & rtP . press , & rtP . q_o , & rtP . theta_o , &
rtP . theta_o_Veh , & rtP . xdot_o , & rtP . zdot_o , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8 , 0 , 0 ,
0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , SS_UINT32
, 0 , 0 , 0 } , { "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T
) , SS_BOOLEAN , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR
, 14 , 2 , 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2
, 0 } , { rtwCAPI_VECTOR , 20 , 2 , 0 } , { rtwCAPI_VECTOR , 22 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 0 } , { rtwCAPI_VECTOR , 26 , 2 , 0 } , {
rtwCAPI_VECTOR , 28 , 2 , 0 } , { rtwCAPI_VECTOR , 30 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 2 , 1 , 1 , 1 , 4 , 1 , 3 , 2 , 3 , 1 ,
6 , 1 , 3 , 4 , 3 , 3 , 9 , 1 , 1 , 7 , 1 , 3 , 1 , 2 , 2 , 2 , 34 , 1 , 8 ,
1 , 1 , 6 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
2 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } , { ( NULL ) , ( NULL ) , - 1 , 0 } } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 305 ,
( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 195 , rtModelParameters
, 53 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 2619392151U
, 320912082U , 503821592U , 3124188914U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * DrivetrainEv_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void DrivetrainEv_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DrivetrainEv_host_InitializeDataMapInfo (
DrivetrainEv_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
