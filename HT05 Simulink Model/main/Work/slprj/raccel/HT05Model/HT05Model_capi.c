#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HT05Model_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "HT05Model.h"
#include "HT05Model_capi.h"
#include "HT05Model_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Module (PCM)" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Module (PCM)" ) , TARGET_STRING (
"" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 1 } , { 3 , 0 , TARGET_STRING ( "HT05Model/Passenger Car/Drivetrain" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"HT05Model/Visualization/m//s to mph" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 1 } , { 5 , 0 , TARGET_STRING ( "HT05Model/Visualization/rad//s to RPM" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"HT05Model/Visualization/Rate Transition1" ) , TARGET_STRING (
"Battery SOC (%)" ) , 0 , 0 , 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"HT05Model/Visualization/Rate Transition2" ) , TARGET_STRING (
"Motor Speed (RPM)" ) , 0 , 0 , 0 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"HT05Model/Visualization/Rate Transition4" ) , TARGET_STRING (
"Trace Velocity, Target, Actual (mph)" ) , 0 , 0 , 1 , 0 , 2 } , { 9 , 0 ,
TARGET_STRING ( "HT05Model/Visualization/Rate Transition5" ) , TARGET_STRING
( "Motor Torque (Nm)" ) , 0 , 0 , 0 , 0 , 2 } , { 10 , 0 , TARGET_STRING (
"HT05Model/Visualization/Rate Transition6" ) , TARGET_STRING (
"Battery Current (A)" ) , 0 , 0 , 0 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Signal Routing/UnitConversion" ) ,
TARGET_STRING ( "Reference Speed" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 ,
TARGET_STRING (
"HT05Model/Passenger Car/Drivetrain Plant Input/Rate Transition3" ) ,
TARGET_STRING ( "BrkCmd" ) , 0 , 0 , 0 , 0 , 3 } , { 20 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery" ) , TARGET_STRING (
"BattSoc" ) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery" ) , TARGET_STRING ( "" ) , 1
, 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Divide" ) , TARGET_STRING (
"ang vel mot" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Product" ) , TARGET_STRING (
"BattPwr" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery Discharge Dynamics" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor Coupling Dynamics" ) ,
TARGET_STRING ( "MotTrq" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant Input/Rate Transition5" ) ,
TARGET_STRING ( "MotTrqCmd" ) , 0 , 0 , 0 , 0 , 4 } , { 27 , 0 ,
TARGET_STRING ( "HT05Model/Visualization/Performance Calculations/m to 100Km"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m^3 per gal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m^3 to US Gal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Divide" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Divide1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Divide2" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Product" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/US MPG Calc" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Rate Transition3" ) ,
TARGET_STRING ( "US MPG" ) , 0 , 0 , 0 , 0 , 2 } , { 38 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Sqrt" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
"HT05Model/Drive Cycle Source/timing mode/Continuous/Digital Clock" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 40 , 0 , TARGET_STRING (
"HT05Model/Drive Cycle Source/timing mode/Continuous/Add1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"HT05Model/Drive Cycle Source/timing mode/Continuous/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Sum7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 6 } , { 46 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add1"
) , TARGET_STRING ( "u_o(t)" ) , 0 , 0 , 0 , 0 , 1 } , { 51 , 0 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add2"
) , TARGET_STRING ( "y(t+T*)" ) , 0 , 0 , 0 , 0 , 1 } , { 52 , 0 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add4"
) , TARGET_STRING ( "e(t+T*)" ) , 0 , 0 , 0 , 0 , 1 } , { 53 , 0 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 4 } , { 56 , 13 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 57 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/is_active_c6_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c6_autolibsharedcommon" ) , 0 , 1 , 0 , 0 , 3
} , { 58 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_GearSelect"
) , TARGET_STRING ( "is_GearSelect" ) , 0 , 2 , 0 , 0 , 3 } , { 59 , 0 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_active_GearSelect"
) , TARGET_STRING ( "is_active_GearSelect" ) , 0 , 1 , 0 , 0 , 3 } , { 60 , 0
, TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 6 } , { 61 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 65 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 6 } , { 66 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "Decel" ) , 0 , 0 , 0 , 0 , 1 } , { 67 , 0 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 68 , 4 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 69 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 6 } , { 70 , 7 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 71 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 6 } , { 72 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 73 , 4 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 74 , 7 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 75 , TARGET_STRING (
"HT05Model/Environment/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 76 , TARGET_STRING ( "HT05Model/Environment/Constant3" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
"HT05Model/Environment/Constant6" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 78 , TARGET_STRING ( "HT05Model/Visualization/m//s to mph" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
"HT05Model/Visualization/rad//s to RPM" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 80 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "Kpt" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "tau" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "L" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "aR" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "bR" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "cR" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "GearInit" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "tShift" ) , 0 , 0 , 0 } , { 90 , TARGET_STRING (
"HT05Model/Passenger Car/Drivetrain Plant Input/Rate Transition3" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery Discharge Dynamics" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery Discharge Dynamics" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor Coupling Dynamics" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor Coupling Dynamics" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant Input/Rate Transition5" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/s per h" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/w per kw" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m to 100Km" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m to mile" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m^3 per gal" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m^3 to US Gal" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Saturation1" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Saturation1" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING (
"HT05Model/Drive Cycle Source/timing mode/Continuous/repeat" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING (
"HT05Model/Drive Cycle Source/timing mode/Continuous/tFinal" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING (
"HT05Model/Drive Cycle Source/timing mode/Continuous/Hit  Crossing" ) ,
TARGET_STRING ( "HitCrossingOffset" ) , 0 , 0 , 0 } , { 112 , TARGET_STRING (
"HT05Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table" ) ,
TARGET_STRING ( "Table" ) , 0 , 2 , 0 } , { 113 , TARGET_STRING (
"HT05Model/Drive Cycle Source/timing mode/Continuous/1-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 2 , 0 } , { 114 ,
TARGET_STRING ( "HT05Model/Drive Cycle Source/timing mode/Continuous/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 116 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 117 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 120 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 122 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 123 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 124 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 125 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 131 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 133 , 25 ,
TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery Discharge Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 134 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor Coupling Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 135 , 30 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 136 , 31 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 137 , 33 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 138 , - 1 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 4 , 0 , - 1 , 0 } , {
139 , 32 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = {
{ 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & hfe00hbwscw . f53jjpuuxm , &
hfe00hbwscw . hhj0p0jony , & hfe00hbwscw . k2nvq1dfvz , & hfe00hbwscw .
krfdbjpt0e , & hfe00hbwscw . bejosqgptz [ 0 ] , & hfe00hbwscw . hawg1v30vs ,
& hfe00hbwscw . jcnijfpmie , & hfe00hbwscw . awbv4lz2br , & hfe00hbwscw .
k0jcwtesdh [ 0 ] , & hfe00hbwscw . cawpxxfynl , & hfe00hbwscw . kwlhepleti ,
& hfe00hbwscw . lfrzqxjyja , & hfe00hbwscw . o5n5eexjon , & hfe00hbwscw .
e51yutiqek , & hfe00hbwscw . fbfzjqwa5a , & hfe00hbwscw . mkqparta3r , &
hfe00hbwscw . a2zj1koo4k , & hfe00hbwscw . ldaenjp42v , & hfe00hbwscw .
e4yqhpgtcf , & hfe00hbwscw . cvgkryez0y , & hfe00hbwscw . i4av10pedr , &
hfe00hbwscw . k5wjbiecdv , & hfe00hbwscw . kp4tq4fada , & hfe00hbwscw .
o035i4hwxg , & hfe00hbwscw . op2bbilkhu , & hfe00hbwscw . kwter11yih , &
hfe00hbwscw . hs1nxcdsu1 , & hfe00hbwscw . jaqygtbwrp , & hfe00hbwscw .
kpjtu3yzip , & hfe00hbwscw . bki5dqleao , & hfe00hbwscw . egwqx4bk1t , &
hfe00hbwscw . jglg55uozd , & hfe00hbwscw . pue040sedo , & hfe00hbwscw .
fssj4vhwqd , & hfe00hbwscw . egun0lxqwh , & hfe00hbwscw . fqgurvz30p , &
hfe00hbwscw . jtp5gfufnu , & hfe00hbwscw . ajoldyqnvn , & hfe00hbwscw .
juedzmwz13 , & hfe00hbwscw . fkmxmxweyx , & hfe00hbwscw . j3cdx1rby1 , &
hfe00hbwscw . dn2ipr3mo1 , & hfe00hbwscw . kpv1qapnbc , & hfe00hbwscw .
pb4y5y3noy , & hfe00hbwscw . l511ehwbyg , & hfe00hbwscw . lldsxsxwpp , &
hfe00hbwscw . p50dphabzy , & hfe00hbwscw . bekklopwz5 , & hfe00hbwscw .
hfrndgtdvk , & hfe00hbwscw . ewcpkcxybh , & hfe00hbwscw . feadjgjni4 , &
hfe00hbwscw . gdkws0vsws , & hfe00hbwscw . dkyaehby1j , & hfe00hbwscw .
d01a5ocxx2 , & hfe00hbwscw . kmgjdorlmx [ 0 ] , & hfe00hbwscw . asokvlgnxe [
0 ] , & hfe00hbwscw . etuneoeubc , & bcuvylxhefc . dfwyqajqi3 , & bcuvylxhefc
. ln4xezh4u1 , & bcuvylxhefc . hztxj1g4oa , & hfe00hbwscw . bm52wmv1x5 , &
hfe00hbwscw . jnfihtxxde , & hfe00hbwscw . hd0j3gmmyn , & hfe00hbwscw .
gb4x2xlbw3 , & hfe00hbwscw . adqo2rpmqv , & hfe00hbwscw . chtbrnbren , &
hfe00hbwscw . cmthjlvx0t , & hfe00hbwscw . fx1tl3pc5j [ 0 ] , & hfe00hbwscw .
l152uhfy44 , & hfe00hbwscw . b1mzxh50u5 , & hfe00hbwscw . dxi5ejdpzr , &
hfe00hbwscw . lqeerwztoi , & hfe00hbwscw . nmnvokqd32 , & hfe00hbwscw .
l152uhfy44 , & hfe00hbwscw . dxi5ejdpzr , & ihnh5ag1lp . Constant2_Value , &
ihnh5ag1lp . Constant3_Value , & ihnh5ag1lp . Constant6_Value , & ihnh5ag1lp
. mstomph_Gain , & ihnh5ag1lp . radstoRPM_Gain , & ihnh5ag1lp .
LongitudinalDriverModel_m , & ihnh5ag1lp . LongitudinalDriverModel_Kpt , &
ihnh5ag1lp . LongitudinalDriverModel_tau , & ihnh5ag1lp .
LongitudinalDriverModel_L , & ihnh5ag1lp . LongitudinalDriverModel_aR , &
ihnh5ag1lp . LongitudinalDriverModel_bR , & ihnh5ag1lp .
LongitudinalDriverModel_cR , & ihnh5ag1lp . LongitudinalDriverModel_g , &
ihnh5ag1lp . LongitudinalDriverModel_GearInit , & ihnh5ag1lp .
LongitudinalDriverModel_tShift , & ihnh5ag1lp .
RateTransition3_InitialCondition , & ihnh5ag1lp . BatteryDischargeDynamics_A
, & ihnh5ag1lp . BatteryDischargeDynamics_C , & ihnh5ag1lp .
MotorCouplingDynamics_A , & ihnh5ag1lp . MotorCouplingDynamics_C , &
ihnh5ag1lp . RateTransition5_InitialCondition , & ihnh5ag1lp .
USEPAkwhUSgalequivalent_Value , & ihnh5ag1lp . sperh_Value , & ihnh5ag1lp .
wperkw_Value , & ihnh5ag1lp . mto100Km_Gain , & ihnh5ag1lp . mtomile_Gain , &
ihnh5ag1lp . m3pergal_Gain , & ihnh5ag1lp . m3toUSGal_Gain , & ihnh5ag1lp .
Integrator_IC , & ihnh5ag1lp . Integrator1_IC , & ihnh5ag1lp .
Saturation_UpperSat , & ihnh5ag1lp . Saturation_LowerSat , & ihnh5ag1lp .
Saturation1_UpperSat , & ihnh5ag1lp . Saturation1_LowerSat , & ihnh5ag1lp .
repeat_Value , & ihnh5ag1lp . tFinal_Value , & ihnh5ag1lp .
HitCrossing_Offset , & ihnh5ag1lp . uDLookupTable_tableData [ 0 ] , &
ihnh5ag1lp . uDLookupTable_bp01Data [ 0 ] , & ihnh5ag1lp . Switch_Threshold ,
& ihnh5ag1lp . Integrator2_IC , & ihnh5ag1lp . UnitDelay_InitialCondition [ 0
] , & ihnh5ag1lp . SignalHold_IC , & ihnh5ag1lp . Constant_Value_mg0ii2c5jx ,
& ihnh5ag1lp . u1_UpperSat , & ihnh5ag1lp . u1_LowerSat , & ihnh5ag1lp .
Saturation_UpperSat_ejlhkaxvm3 , & ihnh5ag1lp .
Saturation_LowerSat_jq5vbx40o3 , & ihnh5ag1lp . Integrator1_IC_ajivek24xs , &
ihnh5ag1lp . Constant_Value_lfd1si2n0l , & ihnh5ag1lp . u0_UpperSat , &
ihnh5ag1lp . u0_LowerSat , & ihnh5ag1lp . Saturation_UpperSat_n5cfzewtp3 , &
ihnh5ag1lp . Saturation_LowerSat_jdvecoiqp4 , & ihnh5ag1lp .
Constant_Value_fb5mg350bv , & ihnh5ag1lp . Constant1_Value , & ihnh5ag1lp .
Constant_Value , & ihnh5ag1lp . Constant_Value_nhp3htkj21 , & nltnw1e5gkl .
nxcnpybje3 , & nltnw1e5gkl . i4qubohzc1 , & nltnw1e5gkl . a1yytga2i4 , &
nltnw1e5gkl . d2vzwae4a0 , & nltnw1e5gkl . hiwowua33s , & bcuvylxhefc .
cnrnbvpn5m [ 0 ] , & nltnw1e5gkl . fulynuhbhe , } ; static int32_T *
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
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 75 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 58 , rtModelParameters , 0 } , {
rtBlockStates , 7 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 1284232737U
, 3961008968U , 3492614050U , 1102623904U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * HT05Model_GetCAPIStaticMap ( void ) { return
& mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void HT05Model_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( *
rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 4 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HT05Model_host_InitializeDataMapInfo ( HT05Model_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
EvPowertrainController_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"HT05Model/Controllers/Powertrain Control Module (PCM)" ) ; dataMap ->
childMMI [ 1 ] = & ( dataMap -> child1 . mmi ) ;
DrivetrainEv_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
"HT05Model/Passenger Car/Drivetrain" ) ; dataMap -> childMMI [ 2 ] = & (
dataMap -> child2 . mmi ) ; BattEv_host_InitializeDataMapInfo ( & ( dataMap
-> child2 ) , "HT05Model/Passenger Car/Electric Plant/Battery" ) ; dataMap ->
childMMI [ 3 ] = & ( dataMap -> child3 . mmi ) ;
MotGenEvDynamic_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 4 ) ; }
#ifdef __cplusplus
}
#endif
#endif
