#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#undef min
#pragma clang diagnostic ignored "-Wimplicit-int"
#pragma clang diagnostic ignored "-Wimplicit-function-declaration"
typedef intptr_t * yy;
#define yyu INTPTR_MIN
static yy yynull;
extern yy yyh;
extern yy yyhx;
static void yyErr(n,l)
{
yyAbort(n,"types", l);
}
yyeq_PACKAGE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_DEFINITION((yy)t1[3], (yy)t2[3])
;
}
return 0;
}
yyPrint_PACKAGE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("package");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_DEFINITION((yy)t[3]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_PACKAGE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_PACKAGE, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_DEFINITION((yy)t[3], A, &B, Handler);
*Out = B;
break;
}
}
return 0;
}
yyeq_PACKAGELIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_PACKAGE((yy)t1[1], (yy)t2[1])
&& yyeq_PACKAGELIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_PACKAGELIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("packagelist");
yyFirstArg();
yyPrint_PACKAGE((yy)t[1]);
yyNextArg();
yyPrint_PACKAGELIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_PACKAGELIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_PACKAGELIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_PACKAGE((yy)t[1], A, &B, Handler);
yybroadcast_PACKAGELIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_DEFINITION(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_DEFINITION((yy)t1[1], (yy)t2[1])
&& yyeq_DEFINITION((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 3: return (t2[0] == 3)
&& (t1[1] == t2[1])
&& yyeq_MODIFIER((yy)t1[2], (yy)t2[2])
&& yyeq_TYPE((yy)t1[3], (yy)t2[3])
&& yyeq_DEFINITION((yy)t1[4], (yy)t2[4])
&& yyeq_TYPELIST((yy)t1[5], (yy)t2[5])
&& yyeq_TYPELIST((yy)t1[6], (yy)t2[6])
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
&& yyeq_TYPE((yy)t1[2], (yy)t2[2])
&& yyeq_DEFINITION((yy)t1[3], (yy)t2[3])
&& yyeq_TYPELIST((yy)t1[4], (yy)t2[4])
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
&& yyeq_MODIFIER((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_SIGNATURE((yy)t1[4], (yy)t2[4])
&& yyeq_OPTIONALID((yy)t1[5], (yy)t2[5])
;
case 6: return (t2[0] == 6)
&& (t1[1] == t2[1])
&& yyeq_MODIFIER((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_SIGNATURE((yy)t1[4], (yy)t2[4])
&& yyeq_OPTIONALID((yy)t1[5], (yy)t2[5])
&& yyeq_OPTIONALID((yy)t1[6], (yy)t2[6])
;
case 7: return (t2[0] == 7)
&& (t1[1] == t2[1])
&& yyeq_MODIFIER((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_TYPE((yy)t1[4], (yy)t2[4])
;
case 8: return (t2[0] == 8)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_TYPE((yy)t1[3], (yy)t2[3])
&& yyeq_EXPRESSION((yy)t1[4], (yy)t2[4])
;
case 9: return (t2[0] == 9)
;
}
return 0;
}
yyPrint_DEFINITION(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("sequence");
yyFirstArg();
yyPrint_DEFINITION((yy)t[1]);
yyNextArg();
yyPrint_DEFINITION((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("use");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 3: 
yyTerm("class");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_MODIFIER((yy)t[2]);
yyNextArg();
yyPrint_TYPE((yy)t[3]);
yyNextArg();
yyPrint_DEFINITION((yy)t[4]);
yyNextArg();
yyPrint_TYPELIST((yy)t[5]);
yyNextArg();
yyPrint_TYPELIST((yy)t[6]);
yyEndArgs();
break;
case 4: 
yyTerm("interface");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_TYPE((yy)t[2]);
yyNextArg();
yyPrint_DEFINITION((yy)t[3]);
yyNextArg();
yyPrint_TYPELIST((yy)t[4]);
yyEndArgs();
break;
case 5: 
yyTerm("constructor");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_MODIFIER((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_SIGNATURE((yy)t[4]);
yyNextArg();
yyPrint_OPTIONALID((yy)t[5]);
yyEndArgs();
break;
case 6: 
yyTerm("method");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_MODIFIER((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_SIGNATURE((yy)t[4]);
yyNextArg();
yyPrint_OPTIONALID((yy)t[5]);
yyNextArg();
yyPrint_OPTIONALID((yy)t[6]);
yyEndArgs();
break;
case 7: 
yyTerm("variable");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_MODIFIER((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_TYPE((yy)t[4]);
yyEndArgs();
break;
case 8: 
yyTerm("constant");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_TYPE((yy)t[3]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[4]);
yyEndArgs();
break;
case 9: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_DEFINITION(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_DEFINITION, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_DEFINITION((yy)t[1], A, &B, Handler);
yybroadcast_DEFINITION((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
case 3: 
yybroadcast_MODIFIER((yy)t[2], A, &B, Handler);
yybroadcast_TYPE((yy)t[3], B, &A, Handler);
yybroadcast_DEFINITION((yy)t[4], A, &B, Handler);
yybroadcast_TYPELIST((yy)t[5], B, &A, Handler);
yybroadcast_TYPELIST((yy)t[6], A, &B, Handler);
*Out = B;
break;
case 4: 
yybroadcast_TYPE((yy)t[2], A, &B, Handler);
yybroadcast_DEFINITION((yy)t[3], B, &A, Handler);
yybroadcast_TYPELIST((yy)t[4], A, &B, Handler);
*Out = B;
break;
case 5: 
yybroadcast_MODIFIER((yy)t[2], A, &B, Handler);
yybroadcast_SIGNATURE((yy)t[4], B, &A, Handler);
yybroadcast_OPTIONALID((yy)t[5], A, &B, Handler);
*Out = B;
break;
case 6: 
yybroadcast_MODIFIER((yy)t[2], A, &B, Handler);
yybroadcast_SIGNATURE((yy)t[4], B, &A, Handler);
yybroadcast_OPTIONALID((yy)t[5], A, &B, Handler);
yybroadcast_OPTIONALID((yy)t[6], B, &A, Handler);
*Out = A;
break;
case 7: 
yybroadcast_MODIFIER((yy)t[2], A, &B, Handler);
yybroadcast_TYPE((yy)t[4], B, &A, Handler);
*Out = A;
break;
case 8: 
yybroadcast_TYPE((yy)t[3], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[4], B, &A, Handler);
*Out = A;
break;
case 9: 
*Out = A;
break;
}
}
return 0;
}
yyeq_MODIFIER(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_MODIFIER((yy)t1[1], (yy)t2[1])
&& yyeq_MODIFIER((yy)t1[2], (yy)t2[2])
&& yyeq_MODIFIER((yy)t1[3], (yy)t2[3])
&& yyeq_MODIFIER((yy)t1[4], (yy)t2[4])
&& yyeq_MODIFIER((yy)t1[5], (yy)t2[5])
;
case 2: return (t2[0] == 2)
&& yyeq_MODIFIER((yy)t1[1], (yy)t2[1])
;
case 3: return (t2[0] == 3)
&& yyeq_MODIFIER((yy)t1[1], (yy)t2[1])
&& yyeq_MODIFIER((yy)t1[2], (yy)t2[2])
&& yyeq_MODIFIER((yy)t1[3], (yy)t2[3])
&& yyeq_MODIFIER((yy)t1[4], (yy)t2[4])
&& yyeq_MODIFIER((yy)t1[5], (yy)t2[5])
&& yyeq_MODIFIER((yy)t1[6], (yy)t2[6])
;
case 4: return (t2[0] == 4)
&& yyeq_MODIFIER((yy)t1[1], (yy)t2[1])
&& yyeq_MODIFIER((yy)t1[2], (yy)t2[2])
&& yyeq_MODIFIER((yy)t1[3], (yy)t2[3])
&& yyeq_MODIFIER((yy)t1[4], (yy)t2[4])
;
case 5: return (t2[0] == 5)
&& yyeq_MODIFIER((yy)t1[1], (yy)t2[1])
;
case 6: return (t2[0] == 6)
;
case 7: return (t2[0] == 7)
;
case 8: return (t2[0] == 8)
;
case 9: return (t2[0] == 9)
;
case 10: return (t2[0] == 10)
;
case 11: return (t2[0] == 11)
;
case 12: return (t2[0] == 12)
;
case 13: return (t2[0] == 13)
;
case 14: return (t2[0] == 14)
;
case 15: return (t2[0] == 15)
;
case 16: return (t2[0] == 16)
;
case 17: return (t2[0] == 17)
;
}
return 0;
}
yyPrint_MODIFIER(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("classmodifiers");
yyFirstArg();
yyPrint_MODIFIER((yy)t[1]);
yyNextArg();
yyPrint_MODIFIER((yy)t[2]);
yyNextArg();
yyPrint_MODIFIER((yy)t[3]);
yyNextArg();
yyPrint_MODIFIER((yy)t[4]);
yyNextArg();
yyPrint_MODIFIER((yy)t[5]);
yyEndArgs();
break;
case 2: 
yyTerm("constructormodifiers");
yyFirstArg();
yyPrint_MODIFIER((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("methodmodifiers");
yyFirstArg();
yyPrint_MODIFIER((yy)t[1]);
yyNextArg();
yyPrint_MODIFIER((yy)t[2]);
yyNextArg();
yyPrint_MODIFIER((yy)t[3]);
yyNextArg();
yyPrint_MODIFIER((yy)t[4]);
yyNextArg();
yyPrint_MODIFIER((yy)t[5]);
yyNextArg();
yyPrint_MODIFIER((yy)t[6]);
yyEndArgs();
break;
case 4: 
yyTerm("variablemodifiers");
yyFirstArg();
yyPrint_MODIFIER((yy)t[1]);
yyNextArg();
yyPrint_MODIFIER((yy)t[2]);
yyNextArg();
yyPrint_MODIFIER((yy)t[3]);
yyNextArg();
yyPrint_MODIFIER((yy)t[4]);
yyEndArgs();
break;
case 5: 
yyTerm("interfacemethodmodifiers");
yyFirstArg();
yyPrint_MODIFIER((yy)t[1]);
yyEndArgs();
break;
case 6: 
yyTerm("public");
yyNoArgs();
break;
case 7: 
yyTerm("protected");
yyNoArgs();
break;
case 8: 
yyTerm("synchronized");
yyNoArgs();
break;
case 9: 
yyTerm("native");
yyNoArgs();
break;
case 10: 
yyTerm("strictfp");
yyNoArgs();
break;
case 11: 
yyTerm("abstract");
yyNoArgs();
break;
case 12: 
yyTerm("final");
yyNoArgs();
break;
case 13: 
yyTerm("class");
yyNoArgs();
break;
case 14: 
yyTerm("volatile");
yyNoArgs();
break;
case 15: 
yyTerm("transient");
yyNoArgs();
break;
case 16: 
yyTerm("default");
yyNoArgs();
break;
case 17: 
yyTerm("inferred");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_MODIFIER(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MODIFIER, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_MODIFIER((yy)t[1], A, &B, Handler);
yybroadcast_MODIFIER((yy)t[2], B, &A, Handler);
yybroadcast_MODIFIER((yy)t[3], A, &B, Handler);
yybroadcast_MODIFIER((yy)t[4], B, &A, Handler);
yybroadcast_MODIFIER((yy)t[5], A, &B, Handler);
*Out = B;
break;
case 2: 
yybroadcast_MODIFIER((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 3: 
yybroadcast_MODIFIER((yy)t[1], A, &B, Handler);
yybroadcast_MODIFIER((yy)t[2], B, &A, Handler);
yybroadcast_MODIFIER((yy)t[3], A, &B, Handler);
yybroadcast_MODIFIER((yy)t[4], B, &A, Handler);
yybroadcast_MODIFIER((yy)t[5], A, &B, Handler);
yybroadcast_MODIFIER((yy)t[6], B, &A, Handler);
*Out = A;
break;
case 4: 
yybroadcast_MODIFIER((yy)t[1], A, &B, Handler);
yybroadcast_MODIFIER((yy)t[2], B, &A, Handler);
yybroadcast_MODIFIER((yy)t[3], A, &B, Handler);
yybroadcast_MODIFIER((yy)t[4], B, &A, Handler);
*Out = A;
break;
case 5: 
yybroadcast_MODIFIER((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 6: 
*Out = A;
break;
case 7: 
*Out = A;
break;
case 8: 
*Out = A;
break;
case 9: 
*Out = A;
break;
case 10: 
*Out = A;
break;
case 11: 
*Out = A;
break;
case 12: 
*Out = A;
break;
case 13: 
*Out = A;
break;
case 14: 
*Out = A;
break;
case 15: 
*Out = A;
break;
case 16: 
*Out = A;
break;
case 17: 
*Out = A;
break;
}
}
return 0;
}
yyeq_SIGNATURE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_PARAMETERLIST((yy)t1[1], (yy)t2[1])
&& yyeq_TYPE((yy)t1[2], (yy)t2[2])
;
}
return 0;
}
yyPrint_SIGNATURE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("signature");
yyFirstArg();
yyPrint_PARAMETERLIST((yy)t[1]);
yyNextArg();
yyPrint_TYPE((yy)t[2]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_SIGNATURE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SIGNATURE, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_PARAMETERLIST((yy)t[1], A, &B, Handler);
yybroadcast_TYPE((yy)t[2], B, &A, Handler);
*Out = A;
break;
}
}
return 0;
}
yyeq_TYPE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
;
case 3: return (t2[0] == 3)
&& (t1[1] == t2[1])
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
;
case 6: return (t2[0] == 6)
&& (t1[1] == t2[1])
;
case 7: return (t2[0] == 7)
&& (t1[1] == t2[1])
;
case 8: return (t2[0] == 8)
&& (t1[1] == t2[1])
;
case 9: return (t2[0] == 9)
&& (t1[1] == t2[1])
;
case 10: return (t2[0] == 10)
&& (t1[1] == t2[1])
&& yyeq_TYPE((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
;
case 11: return (t2[0] == 11)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_TYPELIST((yy)t1[3], (yy)t2[3])
;
case 12: return (t2[0] == 12)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_TYPELIST((yy)t1[3], (yy)t2[3])
;
case 13: return (t2[0] == 13)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 14: return (t2[0] == 14)
&& (t1[1] == t2[1])
&& yyeq_BOUNDS((yy)t1[2], (yy)t2[2])
;
case 15: return (t2[0] == 15)
;
}
return 0;
}
yyPrint_TYPE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("byte");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("short");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("int");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 4: 
yyTerm("long");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 5: 
yyTerm("float");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 6: 
yyTerm("double");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 7: 
yyTerm("boolean");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 8: 
yyTerm("char");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 9: 
yyTerm("string");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 10: 
yyTerm("jarray");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_TYPE((yy)t[2]);
yyNextArg();
yyPrint_INT((yy)t[3]);
yyEndArgs();
break;
case 11: 
yyTerm("named");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_TYPELIST((yy)t[3]);
yyEndArgs();
break;
case 12: 
yyTerm("template");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_TYPELIST((yy)t[3]);
yyEndArgs();
break;
case 13: 
yyTerm("placeholder");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 14: 
yyTerm("wildcard");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_BOUNDS((yy)t[2]);
yyEndArgs();
break;
case 15: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_TYPE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_TYPE, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
*Out = A;
break;
case 3: 
*Out = A;
break;
case 4: 
*Out = A;
break;
case 5: 
*Out = A;
break;
case 6: 
*Out = A;
break;
case 7: 
*Out = A;
break;
case 8: 
*Out = A;
break;
case 9: 
*Out = A;
break;
case 10: 
yybroadcast_TYPE((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 11: 
yybroadcast_TYPELIST((yy)t[3], A, &B, Handler);
*Out = B;
break;
case 12: 
yybroadcast_TYPELIST((yy)t[3], A, &B, Handler);
*Out = B;
break;
case 13: 
*Out = A;
break;
case 14: 
yybroadcast_BOUNDS((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 15: 
*Out = A;
break;
}
}
return 0;
}
yyeq_TYPELIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_TYPE((yy)t1[1], (yy)t2[1])
&& yyeq_TYPELIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_TYPELIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("typelist");
yyFirstArg();
yyPrint_TYPE((yy)t[1]);
yyNextArg();
yyPrint_TYPELIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_TYPELIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_TYPELIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_TYPE((yy)t[1], A, &B, Handler);
yybroadcast_TYPELIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_PARAMETERLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_PARAMETER((yy)t1[1], (yy)t2[1])
&& yyeq_PARAMETERLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_PARAMETERLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("parameterlist");
yyFirstArg();
yyPrint_PARAMETER((yy)t[1]);
yyNextArg();
yyPrint_PARAMETERLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_PARAMETERLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_PARAMETERLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_PARAMETER((yy)t[1], A, &B, Handler);
yybroadcast_PARAMETERLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_PARAMETER(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_TYPE((yy)t1[3], (yy)t2[3])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
;
}
return 0;
}
yyPrint_PARAMETER(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("parameter");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_TYPE((yy)t[3]);
yyEndArgs();
break;
case 2: 
yyTerm("variadic");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_PARAMETER(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_PARAMETER, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_TYPE((yy)t[3], A, &B, Handler);
*Out = B;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_EXPRESSION(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
;
case 3: return (t2[0] == 3)
&& (t1[1] == t2[1])
&& (t1[2] == t2[2])
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
&& yyeq_DOUBLE((yy)t1[2], (yy)t2[2])
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
&&(strcmp((char *) t1[2], (char *) t2[2]) == 0)
;
case 6: return (t2[0] == 6)
;
}
return 0;
}
yyPrint_EXPRESSION(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("true");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("false");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("integer");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyEndArgs();
break;
case 4: 
yyTerm("real");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_DOUBLE((yy)t[2]);
yyEndArgs();
break;
case 5: 
yyTerm("string");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STRING((yy)t[2]);
yyEndArgs();
break;
case 6: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_EXPRESSION(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_EXPRESSION, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
*Out = A;
break;
case 3: 
*Out = A;
break;
case 4: 
yybroadcast_DOUBLE((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 5: 
*Out = A;
break;
case 6: 
*Out = A;
break;
}
}
return 0;
}
yyeq_MEANING(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_ID((yy)t1[1], (yy)t2[1])
;
case 2: return (t2[0] == 2)
&& yyeq_PACKAGEINFO((yy)t1[1], (yy)t2[1])
;
case 3: return (t2[0] == 3)
&& yyeq_SYMBOLINFO((yy)t1[1], (yy)t2[1])
;
case 4: return (t2[0] == 4)
;
case 5: return (t2[0] == 5)
;
}
return 0;
}
yyPrint_MEANING(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("definingid");
yyFirstArg();
yyPrint_ID((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("package");
yyFirstArg();
yyPrint_PACKAGEINFO((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("symbol");
yyFirstArg();
yyPrint_SYMBOLINFO((yy)t[1]);
yyEndArgs();
break;
case 4: 
yyTerm("error");
yyNoArgs();
break;
case 5: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_MEANING(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MEANING, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
*Out = A;
break;
case 3: 
*Out = A;
break;
case 4: 
*Out = A;
break;
case 5: 
*Out = A;
break;
}
}
return 0;
}
yyeq_QUALIFIEDNAME(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_NAME((yy)t1[1], (yy)t2[1])
&& yyeq_QUALIFIEDNAME((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
&& yyeq_NAME((yy)t1[1], (yy)t2[1])
&& yyeq_QUALIFIEDNAME((yy)t1[2], (yy)t2[2])
;
case 3: return (t2[0] == 3)
&& yyeq_NAME((yy)t1[1], (yy)t2[1])
;
}
return 0;
}
yyPrint_QUALIFIEDNAME(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("package");
yyFirstArg();
yyPrint_NAME((yy)t[1]);
yyNextArg();
yyPrint_QUALIFIEDNAME((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("qualified");
yyFirstArg();
yyPrint_NAME((yy)t[1]);
yyNextArg();
yyPrint_QUALIFIEDNAME((yy)t[2]);
yyEndArgs();
break;
case 3: 
yyTerm("unqualified");
yyFirstArg();
yyPrint_NAME((yy)t[1]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_QUALIFIEDNAME(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_QUALIFIEDNAME, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_NAME((yy)t[1], A, &B, Handler);
yybroadcast_QUALIFIEDNAME((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
yybroadcast_NAME((yy)t[1], A, &B, Handler);
yybroadcast_QUALIFIEDNAME((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 3: 
yybroadcast_NAME((yy)t[1], A, &B, Handler);
*Out = B;
break;
}
}
return 0;
}
yyeq_OPTIONALID(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_ID((yy)t1[1], (yy)t2[1])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_OPTIONALID(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("id");
yyFirstArg();
yyPrint_ID((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_OPTIONALID(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_OPTIONALID, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_NAMELIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_NAME((yy)t1[1], (yy)t2[1])
&& yyeq_NAMELIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_NAMELIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("namelist");
yyFirstArg();
yyPrint_NAME((yy)t[1]);
yyNextArg();
yyPrint_NAMELIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_NAMELIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_NAMELIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_NAME((yy)t[1], A, &B, Handler);
yybroadcast_NAMELIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_SYMBOLKIND(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
;
case 3: return (t2[0] == 3)
;
case 4: return (t2[0] == 4)
;
case 5: return (t2[0] == 5)
;
case 6: return (t2[0] == 6)
;
case 7: return (t2[0] == 7)
;
case 8: return (t2[0] == 8)
;
case 9: return (t2[0] == 9)
;
}
return 0;
}
yyPrint_SYMBOLKIND(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("package");
yyNoArgs();
break;
case 2: 
yyTerm("constant");
yyNoArgs();
break;
case 3: 
yyTerm("variable");
yyNoArgs();
break;
case 4: 
yyTerm("parameter");
yyNoArgs();
break;
case 5: 
yyTerm("method");
yyNoArgs();
break;
case 6: 
yyTerm("constructor");
yyNoArgs();
break;
case 7: 
yyTerm("class");
yyNoArgs();
break;
case 8: 
yyTerm("interface");
yyNoArgs();
break;
case 9: 
yyTerm("placeholder");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYMBOLKIND(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYMBOLKIND, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
*Out = A;
break;
case 3: 
*Out = A;
break;
case 4: 
*Out = A;
break;
case 5: 
*Out = A;
break;
case 6: 
*Out = A;
break;
case 7: 
*Out = A;
break;
case 8: 
*Out = A;
break;
case 9: 
*Out = A;
break;
}
}
return 0;
}
yyeq_BOUNDS(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
&& yyeq_TYPE((yy)t1[1], (yy)t2[1])
;
case 3: return (t2[0] == 3)
&& yyeq_TYPE((yy)t1[1], (yy)t2[1])
;
}
return 0;
}
yyPrint_BOUNDS(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("unbounded");
yyNoArgs();
break;
case 2: 
yyTerm("upper");
yyFirstArg();
yyPrint_TYPE((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("lower");
yyFirstArg();
yyPrint_TYPE((yy)t[1]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_BOUNDS(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_BOUNDS, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
yybroadcast_TYPE((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 3: 
yybroadcast_TYPE((yy)t[1], A, &B, Handler);
*Out = B;
break;
}
}
return 0;
}
yyeq_PACKAGEINFO(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_PACKAGEINFO(t) yy t;
{
yyPrintIndex(t);
return 0;
}
yyeq_SYMBOLINFO(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_SYMBOLINFO(t) yy t;
{
yyPrintIndex(t);
return 0;
}
yyeq_ID(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_ID(t) yy t;
{
yyPrintIndex(t);
return 0;
}
yyeq_NAME(t1, t2) yy t1, t2;
{
return t1 == t2;
return 0;
}
yyPrint_NAME(t) yy t;
{
yyPrintOpaque(t);
return 0;
}
yybroadcast_NAME(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_NAME, t, In, Out)) {
*Out = In;}
return 0;
}
yyeq_DOUBLE(t1, t2) yy t1, t2;
{
return t1 == t2;
return 0;
}
yyPrint_DOUBLE(t) yy t;
{
yyPrintOpaque(t);
return 0;
}
yybroadcast_DOUBLE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_DOUBLE, t, In, Out)) {
*Out = In;}
return 0;
}
