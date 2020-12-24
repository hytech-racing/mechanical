#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "pwecol01r52" , 14 , 272 } , {
"hmke5fx3tcj" , 15 , 2728 } , { "lobjb0lvrdo" , 16 , 208 } , { "l0vfpqnnodc"
, 17 , 768 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) ,
sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) ,
sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof (
pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
pwecol01r52 ) , sizeof ( hmke5fx3tcj ) , sizeof ( lobjb0lvrdo ) , sizeof (
l0vfpqnnodc ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" ,
"real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" ,
"uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T"
, "timer_uint32_pair_T" , "pwecol01r52" , "hmke5fx3tcj" , "lobjb0lvrdo" ,
"l0vfpqnnodc" } ; static DataTypeTransition rtBTransitions [ ] = { { ( char_T
* ) ( & hfe00hbwscw . dn2ipr3mo1 ) , 0 , 0 , 70 } , { ( char_T * ) ( &
hfe00hbwscw . nmnvokqd32 ) , 8 , 0 , 5 } , { ( char_T * ) ( & bcuvylxhefc .
cnrnbvpn5m [ 0 ] ) , 0 , 0 , 25 } , { ( char_T * ) ( & bcuvylxhefc .
geedj4d40x . LoggedData [ 0 ] ) , 11 , 0 , 8 } , { ( char_T * ) ( &
bcuvylxhefc . itzcefxwhd ) , 6 , 0 , 1 } , { ( char_T * ) ( & bcuvylxhefc .
hrypfmrlkd ) , 7 , 0 , 2 } , { ( char_T * ) ( & bcuvylxhefc . hn5nuy0lbc ) ,
10 , 0 , 2 } , { ( char_T * ) ( & bcuvylxhefc . ep2boc231g ) , 2 , 0 , 18 } ,
{ ( char_T * ) ( & bcuvylxhefc . dfwyqajqi3 ) , 3 , 0 , 2 } , { ( char_T * )
( & bcuvylxhefc . eo2oguksvj ) , 8 , 0 , 2 } , { ( char_T * ) ( & bcuvylxhefc
. iajxel3ezk ) , 15 , 0 , 1 } , { ( char_T * ) ( & bcuvylxhefc . ondfxuidp3 )
, 16 , 0 , 1 } , { ( char_T * ) ( & bcuvylxhefc . enbv0wioc4 ) , 17 , 0 , 1 }
, { ( char_T * ) ( & bcuvylxhefc . alzb1lqr5t ) , 14 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 14U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & ihnh5ag1lp .
LongitudinalDriverModel_GearInit ) , 0 , 0 , 859 } } ; static
DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
