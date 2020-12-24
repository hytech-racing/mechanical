#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EvReferenceApplication_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "EvReferenceApplication.h"
#include "EvReferenceApplication_capi.h"
#include "EvReferenceApplication_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
1 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/m//s to mph" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/rad//s to RPM" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition1" ) , TARGET_STRING (
"Battery SOC (%)" ) , 0 , 0 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition2" ) , TARGET_STRING (
"Motor Speed (RPM)" ) , 0 , 0 , 0 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition4" ) , TARGET_STRING (
"Trace Velocity, Target, Actual (mph)" ) , 0 , 0 , 1 , 0 , 2 } , { 9 , 0 ,
TARGET_STRING ( "EvReferenceApplication/Visualization/Rate Transition5" ) ,
TARGET_STRING ( "Motor Torque (Nm)" ) , 0 , 0 , 0 , 0 , 2 } , { 10 , 0 ,
TARGET_STRING ( "EvReferenceApplication/Visualization/Rate Transition6" ) ,
TARGET_STRING ( "Battery Current (A)" ) , 0 , 0 , 0 , 0 , 2 } , { 11 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"EvReferenceApplication/Controllers/Powertrain Control Input/Rate Transition6"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/Signal Routing/UnitConversion" ) ,
TARGET_STRING ( "Reference Speed" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain Plant Input/Rate Transition3"
) , TARGET_STRING ( "BrkCmd" ) , 0 , 0 , 0 , 0 , 3 } , { 20 , 0 ,
TARGET_STRING ( "EvReferenceApplication/Passenger Car/Electric Plant/Battery"
) , TARGET_STRING ( "BattSoc" ) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 ,
TARGET_STRING ( "EvReferenceApplication/Passenger Car/Electric Plant/Battery"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Product" ) ,
TARGET_STRING ( "BattPwr" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING
(
"EvReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) , TARGET_STRING ( "MotTrq" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant Input/Rate Transition5"
) , TARGET_STRING ( "MotTrqCmd" ) , 0 , 0 , 0 , 0 , 4 } , { 26 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/m to 100Km" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/m^3 per gal" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/m^3 to US Gal"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Integrator" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Integrator1" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Divide1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Divide2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/US MPG Calc" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Rate Transition3"
) , TARGET_STRING ( "US MPG" ) , 0 , 0 , 0 , 0 , 2 } , { 37 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Sqrt" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 38 , 0 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/Digital Clock"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 39 , 0 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/Add1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" )
, TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Sum7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 6 } , { 45 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add1"
) , TARGET_STRING ( "u_o(t)" ) , 0 , 0 , 0 , 0 , 1 } , { 50 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add2"
) , TARGET_STRING ( "y(t+T*)" ) , 0 , 0 , 0 , 0 , 1 } , { 51 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add4"
) , TARGET_STRING ( "e(t+T*)" ) , 0 , 0 , 0 , 0 , 1 } , { 52 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 4 } , { 55 , 13 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 56 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/is_active_c6_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c6_autolibsharedcommon" ) , 0 , 1 , 0 , 0 , 3
} , { 57 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_GearSelect"
) , TARGET_STRING ( "is_GearSelect" ) , 0 , 2 , 0 , 0 , 3 } , { 58 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_active_GearSelect"
) , TARGET_STRING ( "is_active_GearSelect" ) , 0 , 1 , 0 , 0 , 3 } , { 59 , 0
, TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 6 } , { 60 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 61 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 6 } , { 65 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "Decel" ) , 0 , 0 , 0 , 0 , 1 } , { 66 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 67 , 4 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 68 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 6 } , { 69 , 7 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 70 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 6 } , { 71 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 72 , 4 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 73 , 7 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 74 , TARGET_STRING (
"EvReferenceApplication/Environment/Constant2" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 75 , TARGET_STRING (
"EvReferenceApplication/Environment/Constant3" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 76 , TARGET_STRING (
"EvReferenceApplication/Environment/Constant6" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 77 , TARGET_STRING (
"EvReferenceApplication/Visualization/m//s to mph" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"EvReferenceApplication/Visualization/rad//s to RPM" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "Kpt" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "tau" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "L" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "aR" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "bR" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "cR" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "GearInit" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "tShift" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain Plant Input/Rate Transition3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 90 , TARGET_STRING
(
"EvReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant Input/Rate Transition5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING
(
 "EvReferenceApplication/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/s per h" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/w per kw" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/m to 100Km" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/m to mile" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/m^3 per gal" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/m^3 to US Gal"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Integrator" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING
( "EvReferenceApplication/Visualization/Performance Calculations/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 104 ,
TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Saturation" )
, TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Saturation" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Saturation1" )
, TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Saturation1" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/repeat" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/tFinal" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/Hit  Crossing"
) , TARGET_STRING ( "HitCrossingOffset" ) , 0 , 0 , 0 } , { 111 ,
TARGET_STRING (
 "EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "Table" ) , 0 , 2 , 0 } , { 112 , TARGET_STRING (
 "EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 2 , 0 } , { 113 ,
TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/timing mode/Continuous/Switch" ) ,
TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 115 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 116 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 120 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 122 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 123 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 124 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 125 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 131 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 132 , 23 ,
TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Battery Discharge Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 133 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 134 , 28 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Integrator" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 135 , 29 , TARGET_STRING (
"EvReferenceApplication/Visualization/Performance Calculations/Integrator1" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 ,
0 } , { 136 , 31 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 137 , - 1 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 4 , 0 , - 1 , 0 } , {
138 , 30 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = {
{ 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & cuhiq2he3xv . oigt4h5oa0 , &
cuhiq2he3xv . eaez13ma04 , & cuhiq2he3xv . lrkperxqkh , & cuhiq2he3xv .
f32ubspqi4 , & cuhiq2he3xv . m0tb3cmvqc [ 0 ] , & cuhiq2he3xv . fkf3rt5vqk ,
& cuhiq2he3xv . f3xfryzo45 , & cuhiq2he3xv . iqvbtbayt4 , & cuhiq2he3xv .
map0t5ix2o [ 0 ] , & cuhiq2he3xv . g33we1ojyj , & cuhiq2he3xv . lwwxzl5qzf ,
& cuhiq2he3xv . pkdo1hmzxy , & cuhiq2he3xv . ndktxclyhy , & cuhiq2he3xv .
o1kmrtruhq , & cuhiq2he3xv . kun3jdfvr3 , & cuhiq2he3xv . ohau2brkru , &
cuhiq2he3xv . bxvt3tt5d3 , & cuhiq2he3xv . o0nvkut2oz , & cuhiq2he3xv .
cwygjkza2r , & cuhiq2he3xv . ixkrfe1hwl , & cuhiq2he3xv . gt2syxhd4c , &
cuhiq2he3xv . lxuceqt2ja , & cuhiq2he3xv . mfbcndbdnw , & cuhiq2he3xv .
aam4cx4xp2 , & cuhiq2he3xv . bht55s5qq3 , & cuhiq2he3xv . i23fozl0mw , &
cuhiq2he3xv . jznbtj1tyh , & cuhiq2he3xv . glcchrtl4h , & cuhiq2he3xv .
hshnxf4vn0 , & cuhiq2he3xv . iojh51uf0y , & cuhiq2he3xv . eqrqll4gp5 , &
cuhiq2he3xv . cxitkzrhmf , & cuhiq2he3xv . pdyyylm0jj , & cuhiq2he3xv .
hvrssnnlxd , & cuhiq2he3xv . igi0euk0rx , & cuhiq2he3xv . lcipcfvg1x , &
cuhiq2he3xv . p53k4c5eze , & cuhiq2he3xv . jhfdxylvg0 , & cuhiq2he3xv .
ncqjwkf1sm , & cuhiq2he3xv . ft3zshehfj , & cuhiq2he3xv . hjd5omgeuw , &
cuhiq2he3xv . jxekas3gp2 , & cuhiq2he3xv . h5wul2xtfx , & cuhiq2he3xv .
bgyxx3obeb , & cuhiq2he3xv . imnt2v1zkq , & cuhiq2he3xv . klgwp0bl1e , &
cuhiq2he3xv . b0xsyyulsa , & cuhiq2he3xv . ceif11edac , & cuhiq2he3xv .
fvfcqphwub , & cuhiq2he3xv . hyeok2w0lk , & cuhiq2he3xv . jcja03y2ta , &
cuhiq2he3xv . eyxsiaqd30 , & cuhiq2he3xv . mapbxuiz5v , & cuhiq2he3xv .
kj51ocjbc3 [ 0 ] , & cuhiq2he3xv . kyoewhwiba [ 0 ] , & cuhiq2he3xv .
o5bbi4nmva , & giqt2tul5wr . cjbl1xx1vv , & giqt2tul5wr . kn3tgruv1d , &
giqt2tul5wr . o23aklsczm , & cuhiq2he3xv . fjngm2jfcz , & cuhiq2he3xv .
akt4wnhg4a , & cuhiq2he3xv . kmsp0cd1e1 , & cuhiq2he3xv . nxipfqo4ge , &
cuhiq2he3xv . as3zb4xmb3 , & cuhiq2he3xv . by2opoctqb , & cuhiq2he3xv .
dju2bvbvhc , & cuhiq2he3xv . ab4upgrnrw [ 0 ] , & cuhiq2he3xv . bd2ndavyho ,
& cuhiq2he3xv . ide52jc1xl , & cuhiq2he3xv . hdwnkycvte , & cuhiq2he3xv .
h4vbxbl4u1 , & cuhiq2he3xv . l3da1b0tbm , & cuhiq2he3xv . bd2ndavyho , &
cuhiq2he3xv . hdwnkycvte , & konn1m5pjf . Constant2_Value , & konn1m5pjf .
Constant3_Value , & konn1m5pjf . Constant6_Value , & konn1m5pjf .
mstomph_Gain , & konn1m5pjf . radstoRPM_Gain , & konn1m5pjf .
LongitudinalDriverModel_m , & konn1m5pjf . LongitudinalDriverModel_Kpt , &
konn1m5pjf . LongitudinalDriverModel_tau , & konn1m5pjf .
LongitudinalDriverModel_L , & konn1m5pjf . LongitudinalDriverModel_aR , &
konn1m5pjf . LongitudinalDriverModel_bR , & konn1m5pjf .
LongitudinalDriverModel_cR , & konn1m5pjf . LongitudinalDriverModel_g , &
konn1m5pjf . LongitudinalDriverModel_GearInit , & konn1m5pjf .
LongitudinalDriverModel_tShift , & konn1m5pjf .
RateTransition3_InitialCondition , & konn1m5pjf . BatteryDischargeDynamics_A
, & konn1m5pjf . BatteryDischargeDynamics_C , & konn1m5pjf .
MotorCouplingDynamics_A , & konn1m5pjf . MotorCouplingDynamics_C , &
konn1m5pjf . RateTransition5_InitialCondition , & konn1m5pjf .
USEPAkwhUSgalequivalent_Value , & konn1m5pjf . sperh_Value , & konn1m5pjf .
wperkw_Value , & konn1m5pjf . mto100Km_Gain , & konn1m5pjf . mtomile_Gain , &
konn1m5pjf . m3pergal_Gain , & konn1m5pjf . m3toUSGal_Gain , & konn1m5pjf .
Integrator_IC , & konn1m5pjf . Integrator1_IC , & konn1m5pjf .
Saturation_UpperSat , & konn1m5pjf . Saturation_LowerSat , & konn1m5pjf .
Saturation1_UpperSat , & konn1m5pjf . Saturation1_LowerSat , & konn1m5pjf .
repeat_Value , & konn1m5pjf . tFinal_Value , & konn1m5pjf .
HitCrossing_Offset , & konn1m5pjf . uDLookupTable_tableData [ 0 ] , &
konn1m5pjf . uDLookupTable_bp01Data [ 0 ] , & konn1m5pjf . Switch_Threshold ,
& konn1m5pjf . Integrator2_IC , & konn1m5pjf . UnitDelay_InitialCondition [ 0
] , & konn1m5pjf . SignalHold_IC , & konn1m5pjf . Constant_Value_mg0ii2c5jx ,
& konn1m5pjf . u1_UpperSat , & konn1m5pjf . u1_LowerSat , & konn1m5pjf .
Saturation_UpperSat_ejlhkaxvm3 , & konn1m5pjf .
Saturation_LowerSat_jq5vbx40o3 , & konn1m5pjf . Integrator1_IC_ajivek24xs , &
konn1m5pjf . Constant_Value_lfd1si2n0l , & konn1m5pjf . u0_UpperSat , &
konn1m5pjf . u0_LowerSat , & konn1m5pjf . Saturation_UpperSat_n5cfzewtp3 , &
konn1m5pjf . Saturation_LowerSat_jdvecoiqp4 , & konn1m5pjf .
Constant_Value_fb5mg350bv , & konn1m5pjf . Constant1_Value , & konn1m5pjf .
Constant_Value , & konn1m5pjf . Constant_Value_nhp3htkj21 , & i344fcmwfc1 .
g14mueghy3 , & i344fcmwfc1 . deyyyt5ypg , & i344fcmwfc1 . p1updjpzin , &
i344fcmwfc1 . p43idzm3kd , & i344fcmwfc1 . niplvsv1th , & giqt2tul5wr .
l4pn2msb3d [ 0 ] , & i344fcmwfc1 . piwaeu0cyd , } ; static int32_T *
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
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 2474 , 1 , 1 , 2 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 , 0.1 , 1.0 ,
5.0E-5 , 0.5 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL )
, ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 3 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 4 , 0 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
3 ] , 1 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 4 ] , ( const void
* ) & rtcapiStoredFloats [ 1 ] , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 5 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 5 ,
0 } , { ( NULL ) , ( NULL ) , 6 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 74 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 58 , rtModelParameters , 0 } , {
rtBlockStates , 7 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 335141954U
, 1526359446U , 1863528200U , 2630416121U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * EvReferenceApplication_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void EvReferenceApplication_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( * rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 4 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EvReferenceApplication_host_InitializeDataMapInfo (
EvReferenceApplication_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
EvPowertrainController_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"EvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ;
dataMap -> childMMI [ 1 ] = & ( dataMap -> child1 . mmi ) ;
DrivetrainEv_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
"EvReferenceApplication/Passenger Car/Drivetrain" ) ; dataMap -> childMMI [ 2
] = & ( dataMap -> child2 . mmi ) ; BattEv_host_InitializeDataMapInfo ( & (
dataMap -> child2 ) ,
"EvReferenceApplication/Passenger Car/Electric Plant/Battery" ) ; dataMap ->
childMMI [ 3 ] = & ( dataMap -> child3 . mmi ) ;
MotGenEvDynamic_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
"EvReferenceApplication/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 4 ) ; }
#ifdef __cplusplus
}
#endif
#endif
