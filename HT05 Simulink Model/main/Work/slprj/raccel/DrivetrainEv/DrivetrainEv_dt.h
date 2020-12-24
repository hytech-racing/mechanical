#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } } ; static uint_T rtDataTypeSizes [ ] = {
sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof (
uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T
) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" } ; static DataTypeTransition rtBTransitions [ ] = { {
( char_T * ) ( & rtB . bvvs4fnpae [ 0 ] ) , 0 , 0 , 400 } , { ( char_T * ) (
& rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . amlomrh5pe ) , 0 , 0 ,
15 } , { ( char_T * ) ( & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit .
ejvkch2wis ) , 8 , 0 , 2 } , { ( char_T * ) ( & rtB . jlep0zzj4c . a4qhmksov4
[ 0 ] ) , 0 , 0 , 47 } , { ( char_T * ) ( & rtB . g0qms2rrt2g [ 0 ] .
azxqoevuvc . lkn4jcwpit . amlomrh5pe ) , 0 , 0 , 15 } , { ( char_T * ) ( &
rtB . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . ejvkch2wis ) , 8 , 0 , 2
} , { ( char_T * ) ( & rtB . kkrjlu4uvo . a4qhmksov4 [ 0 ] ) , 0 , 0 , 47 } ,
{ ( char_T * ) ( & rtB . lkkyw1qsdn [ 3 ] . hg0uepzdlr [ 0 ] ) , 0 , 0 , 24 }
, { ( char_T * ) ( & rtDW . l5oro1zbdt [ 0 ] ) , 0 , 0 , 5 } , { ( char_T * )
( & rtDW . kd2ov54egg . AQHandles ) , 11 , 0 , 3 } , { ( char_T * ) ( & rtDW
. mika2fhpql ) , 10 , 0 , 4 } , { ( char_T * ) ( & rtDW . oecqsnuhib ) , 2 ,
0 , 3 } , { ( char_T * ) ( & rtDW . nt1qt43cpp [ 0 ] . azxqoevuvc .
lkn4jcwpit . dwlnal5cpf ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtDW .
nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . feltoykxxu ) , 11 , 0 , 2 } , {
( char_T * ) ( & rtDW . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit .
kncpfxn0zs ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW . nt1qt43cpp [ 0 ] .
azxqoevuvc . lkn4jcwpit . k54dnhlmkd ) , 7 , 0 , 1 } , { ( char_T * ) ( &
rtDW . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . dhmxzbxrdi ) , 8 , 0 , 1
} , { ( char_T * ) ( & rtDW . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit .
lypwhpzhjk ) , 2 , 0 , 6 } , { ( char_T * ) ( & rtDW . nt1qt43cpp [ 0 ] .
azxqoevuvc . lkn4jcwpit . frhewkvqk5 ) , 3 , 0 , 1 } , { ( char_T * ) ( &
rtDW . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . molk5qdn4x ) , 8 , 0 , 1
} , { ( char_T * ) ( & rtDW . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit .
dwlnal5cpf ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtDW . g0qms2rrt2g [ 0 ] .
azxqoevuvc . lkn4jcwpit . feltoykxxu ) , 11 , 0 , 2 } , { ( char_T * ) ( &
rtDW . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . kncpfxn0zs ) , 6 , 0 , 1
} , { ( char_T * ) ( & rtDW . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit .
k54dnhlmkd ) , 7 , 0 , 1 } , { ( char_T * ) ( & rtDW . g0qms2rrt2g [ 0 ] .
azxqoevuvc . lkn4jcwpit . dhmxzbxrdi ) , 8 , 0 , 1 } , { ( char_T * ) ( &
rtDW . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . lypwhpzhjk ) , 2 , 0 , 6
} , { ( char_T * ) ( & rtDW . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit .
frhewkvqk5 ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW . g0qms2rrt2g [ 0 ] .
azxqoevuvc . lkn4jcwpit . molk5qdn4x ) , 8 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 28U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP . Af ) , 0 ,
0 , 416 } , { ( char_T * ) ( & rtP . nt1qt43cpp . azxqoevuvc . lkn4jcwpit .
Constant_Value ) , 0 , 0 , 5 } , { ( char_T * ) ( & rtP . nt1qt43cpp .
azxqoevuvc . lkn4jcwpit . yn_Y0 ) , 8 , 0 , 11 } , { ( char_T * ) ( & rtP .
g0qms2rrt2g . azxqoevuvc . lkn4jcwpit . Constant_Value ) , 0 , 0 , 5 } , { (
char_T * ) ( & rtP . g0qms2rrt2g . azxqoevuvc . lkn4jcwpit . yn_Y0 ) , 8 , 0
, 11 } , { ( char_T * ) ( & rtP . lkkyw1qsdn . phi_Value ) , 0 , 0 , 2 } } ;
static DataTypeTransitionTable rtPTransTable = { 6U , rtPTransitions } ;
