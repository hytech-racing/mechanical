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
"HT05Model/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0
, 1 } , { 5 , 0 , TARGET_STRING ( "HT05Model/Passenger Car/Drivetrain" ) ,
TARGET_STRING ( "current theta" ) , 3 , 0 , 0 , 0 , 1 } , { 6 , 0 ,
TARGET_STRING ( "HT05Model/Visualization/m//s to mph" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"HT05Model/Visualization/rad//s to RPM" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 8 , 0 , TARGET_STRING ( "HT05Model/Visualization/Integrator" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"HT05Model/Visualization/Rate Transition1" ) , TARGET_STRING (
"Battery SOC (%)" ) , 0 , 0 , 0 , 0 , 2 } , { 10 , 0 , TARGET_STRING (
"HT05Model/Visualization/Rate Transition2" ) , TARGET_STRING (
"Motor Speed (RPM)" ) , 0 , 0 , 0 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"HT05Model/Visualization/Rate Transition4" ) , TARGET_STRING (
"Trace Velocity, Target, Actual (mph)" ) , 0 , 0 , 1 , 0 , 2 } , { 12 , 0 ,
TARGET_STRING ( "HT05Model/Visualization/Rate Transition5" ) , TARGET_STRING
( "Motor Torque (Nm)" ) , 0 , 0 , 0 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"HT05Model/Visualization/Rate Transition6" ) , TARGET_STRING (
"Battery Current (A)" ) , 0 , 0 , 0 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"HT05Model/Controllers/Powertrain Control Input/Rate Transition6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Drivetrain Plant Input/Rate Transition3" ) ,
TARGET_STRING ( "BrkCmd" ) , 0 , 0 , 0 , 0 , 3 } , { 22 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery" ) , TARGET_STRING (
"BattSoc" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery" ) , TARGET_STRING ( "" ) , 1
, 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Divide" ) , TARGET_STRING (
"ang vel mot" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Product" ) , TARGET_STRING (
"BattPwr" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery Discharge Dynamics" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor Coupling Dynamics" ) ,
TARGET_STRING ( "MotTrq" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant Input/Rate Transition5" ) ,
TARGET_STRING ( "MotTrqCmd" ) , 0 , 0 , 0 , 0 , 4 } , { 29 , 0 ,
TARGET_STRING ( "HT05Model/Visualization/Performance Calculations/m to 100Km"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m^3 per gal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m^3 to US Gal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Divide" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Divide1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Divide2" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Product" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 38 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/US MPG Calc" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Rate Transition3" ) ,
TARGET_STRING ( "US MPG" ) , 0 , 0 , 0 , 0 , 2 } , { 40 , 0 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Sqrt" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Timing Mode/Continuous/Digital Clock" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 42 , 0 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Timing Mode/Continuous/Add1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Timing Mode/Continuous/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 4 } , { 47 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Sum7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 6 } , { 49 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add1"
) , TARGET_STRING ( "u_o(t)" ) , 0 , 0 , 0 , 0 , 1 } , { 54 , 0 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add2"
) , TARGET_STRING ( "y(t+T*)" ) , 0 , 0 , 0 , 0 , 1 } , { 55 , 0 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add4"
) , TARGET_STRING ( "e(t+T*)" ) , 0 , 0 , 0 , 0 , 1 } , { 56 , 0 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 4 } , { 59 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 60 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 61 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 64 , 2 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 65 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 66 , 5 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 67 , 0 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 6 } , { 68 , 2 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 69 , 5 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 70 , TARGET_STRING (
"HT05Model/Environment/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 71 , TARGET_STRING ( "HT05Model/Environment/Constant3" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING (
"HT05Model/Environment/Constant6" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 }
, { 73 , TARGET_STRING ( "HT05Model/Visualization/m//s to mph" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"HT05Model/Visualization/rad//s to RPM" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 75 , TARGET_STRING ( "HT05Model/Visualization/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver" ) ,
TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver" ) ,
TARGET_STRING ( "Kpt" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver" ) ,
TARGET_STRING ( "tau" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver" ) ,
TARGET_STRING ( "L" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver" ) ,
TARGET_STRING ( "aR" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver" ) ,
TARGET_STRING ( "bR" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver" ) ,
TARGET_STRING ( "cR" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
"HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver" ) ,
TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"HT05Model/Passenger Car/Drivetrain Plant Input/Rate Transition3" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery Discharge Dynamics" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery Discharge Dynamics" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor Coupling Dynamics" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor Coupling Dynamics" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant Input/Rate Transition5" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 90 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/s per h" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/w per kw" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m to 100Km" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m to mile" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m^3 per gal" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/m^3 to US Gal" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Saturation1" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Saturation1" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Timing Mode/Continuous/repeat" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Timing Mode/Continuous/tFinal" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Timing Mode/Continuous/Hit  Crossing" ) ,
TARGET_STRING ( "HitCrossingOffset" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table" ) ,
TARGET_STRING ( "Table" ) , 0 , 2 , 0 } , { 107 , TARGET_STRING (
"HT05Model/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 2 , 0 } , { 108 ,
TARGET_STRING ( "HT05Model/Drive Cycle Source/Timing Mode/Continuous/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 110 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 3 , 0 } , { 111 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 112 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 116 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 118 ,
TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 120 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 122 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 123 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 124 ,
31 , TARGET_STRING ( "HT05Model/Visualization/Integrator" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0 } , { 125 , 24
, TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Battery Discharge Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 126 , 0 , TARGET_STRING (
"HT05Model/Passenger Car/Electric Plant/Motor Coupling Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 127 , 29 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 128 , 30 , TARGET_STRING (
"HT05Model/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1 , 0
} , { 129 , 34 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 130 , - 1 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 4 , 0 , - 1 , 0 } , {
131 , 33 , TARGET_STRING (
 "HT05Model/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 7 , 2 , 0 , 5 , 6 ,
9 , 0 , 8 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL )
, 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & hfe00hbwscw . f53jjpuuxm , &
hfe00hbwscw . hhj0p0jony , & hfe00hbwscw . k2nvq1dfvz , & hfe00hbwscw .
krfdbjpt0e , & hfe00hbwscw . hnqecwtek3 , & hfe00hbwscw . gz5o4hus3a , &
hfe00hbwscw . bejosqgptz [ 0 ] , & hfe00hbwscw . hawg1v30vs , & hfe00hbwscw .
gslrwelsee [ 0 ] , & hfe00hbwscw . jcnijfpmie , & hfe00hbwscw . awbv4lz2br ,
& hfe00hbwscw . k0jcwtesdh [ 0 ] , & hfe00hbwscw . cawpxxfynl , & hfe00hbwscw
. kwlhepleti , & hfe00hbwscw . lfrzqxjyja , & hfe00hbwscw . o5n5eexjon , &
hfe00hbwscw . e51yutiqek , & hfe00hbwscw . fbfzjqwa5a , & hfe00hbwscw .
mkqparta3r , & hfe00hbwscw . a2zj1koo4k , & hfe00hbwscw . ldaenjp42v , &
hfe00hbwscw . cvgkryez0y , & hfe00hbwscw . i4av10pedr , & hfe00hbwscw .
k5wjbiecdv , & hfe00hbwscw . kp4tq4fada , & hfe00hbwscw . o035i4hwxg , &
hfe00hbwscw . op2bbilkhu , & hfe00hbwscw . kwter11yih , & hfe00hbwscw .
hs1nxcdsu1 , & hfe00hbwscw . jaqygtbwrp , & hfe00hbwscw . kpjtu3yzip , &
hfe00hbwscw . bki5dqleao , & hfe00hbwscw . egwqx4bk1t , & hfe00hbwscw .
jglg55uozd , & hfe00hbwscw . pue040sedo , & hfe00hbwscw . fssj4vhwqd , &
hfe00hbwscw . egun0lxqwh , & hfe00hbwscw . fqgurvz30p , & hfe00hbwscw .
jtp5gfufnu , & hfe00hbwscw . ajoldyqnvn , & hfe00hbwscw . juedzmwz13 , &
hfe00hbwscw . kftazr0hxl , & hfe00hbwscw . ciswg50jx3 , & hfe00hbwscw .
etwgbqvkif , & hfe00hbwscw . kpv1qapnbc , & hfe00hbwscw . pb4y5y3noy , &
hfe00hbwscw . gxpwwcihxi , & hfe00hbwscw . bruwu4miax , & hfe00hbwscw .
j3ea3swoth , & hfe00hbwscw . mddysgelnk , & hfe00hbwscw . hqkezymrab , &
hfe00hbwscw . dptryos4oj , & hfe00hbwscw . l1thberrgp , & hfe00hbwscw .
gsta4lel3i , & hfe00hbwscw . gubzcq5ria , & hfe00hbwscw . dbbyin35a2 , &
hfe00hbwscw . kpzjlc45u3 , & hfe00hbwscw . f4ilyp355v [ 0 ] , & hfe00hbwscw .
h104oeui3c [ 0 ] , & hfe00hbwscw . aq22d4vedt , & hfe00hbwscw . kmcqv24afd ,
& hfe00hbwscw . a5hkkkfjhl , & hfe00hbwscw . nmwnavsv0t , & hfe00hbwscw .
ottghukoth , & hfe00hbwscw . g31xp5tryrk . kifcmajf5q , & hfe00hbwscw .
lr0af5qksa , & hfe00hbwscw . ovj5vn4ci5 . kifcmajf5q , & hfe00hbwscw .
drvm4uwfmo , & hfe00hbwscw . g31xp5tryrk . kifcmajf5q , & hfe00hbwscw .
ovj5vn4ci5 . kifcmajf5q , & ihnh5ag1lp . Constant2_Value , & ihnh5ag1lp .
Constant3_Value , & ihnh5ag1lp . Constant6_Value , & ihnh5ag1lp .
mstomph_Gain , & ihnh5ag1lp . radstoRPM_Gain , & ihnh5ag1lp .
Integrator_IC_c3j2xauzq0 , & ihnh5ag1lp . LongitudinalDriver_m , & ihnh5ag1lp
. LongitudinalDriver_Kpt , & ihnh5ag1lp . LongitudinalDriver_tau , &
ihnh5ag1lp . LongitudinalDriver_L , & ihnh5ag1lp . LongitudinalDriver_aR , &
ihnh5ag1lp . LongitudinalDriver_bR , & ihnh5ag1lp . LongitudinalDriver_cR , &
ihnh5ag1lp . LongitudinalDriver_g , & ihnh5ag1lp .
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
] , & ihnh5ag1lp . SignalHold_IC , & ihnh5ag1lp . Constant_Value , &
ihnh5ag1lp . u1_UpperSat , & ihnh5ag1lp . u1_LowerSat , & ihnh5ag1lp .
Saturation_UpperSat_bmv04wlgug , & ihnh5ag1lp .
Saturation_LowerSat_k4oqasoblp , & ihnh5ag1lp . Integrator1_IC_kyv4sp114t , &
ihnh5ag1lp . SignalHold_IC_i4j3zendoc , & ihnh5ag1lp .
Constant_Value_azk0zfkyc5 , & ihnh5ag1lp . u0_UpperSat , & ihnh5ag1lp .
u0_LowerSat , & ihnh5ag1lp . Saturation_UpperSat_ekydxm2ndj , & ihnh5ag1lp .
Saturation_LowerSat_ijnrsojihl , & nltnw1e5gkl . fwf05bzu3h [ 0 ] , &
nltnw1e5gkl . nxcnpybje3 , & nltnw1e5gkl . i4qubohzc1 , & nltnw1e5gkl .
a1yytga2i4 , & nltnw1e5gkl . d2vzwae4a0 , & nltnw1e5gkl . drev2pqloy , &
bcuvylxhefc . mrofomoj1z [ 0 ] , & nltnw1e5gkl . f5pdutbo4l , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 401 , 1 , 1 , 2 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 , 0.1 , 1.0 ,
5.0E-5 , 0.05 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL )
, ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 3 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 5 , 0 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
3 ] , 1 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 4 ] , ( const void
* ) & rtcapiStoredFloats [ 1 ] , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 5 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 4 ,
0 } , { ( NULL ) , ( NULL ) , 6 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 70 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 54 ,
rtModelParameters , 0 } , { rtBlockStates , 8 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3610673230U , 947650704U , 2779343099U ,
416087025U } , ( NULL ) , 0 , 0 , rt_LoggedStateIdxList } ; const
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
