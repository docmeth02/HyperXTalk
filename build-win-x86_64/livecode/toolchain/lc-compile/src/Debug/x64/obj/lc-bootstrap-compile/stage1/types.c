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
yyeq_MODULELIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_MODULE((yy)t1[1], (yy)t2[1])
&& yyeq_MODULELIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_MODULELIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("modulelist");
yyFirstArg();
yyPrint_MODULE((yy)t[1]);
yyNextArg();
yyPrint_MODULELIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_MODULELIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MODULELIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_MODULE((yy)t[1], A, &B, Handler);
yybroadcast_MODULELIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_MODULEKIND(t1, t2) yy t1, t2;
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
}
return 0;
}
yyPrint_MODULEKIND(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("import");
yyNoArgs();
break;
case 2: 
yyTerm("module");
yyNoArgs();
break;
case 3: 
yyTerm("library");
yyNoArgs();
break;
case 4: 
yyTerm("widget");
yyNoArgs();
break;
case 5: 
yyTerm("application");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_MODULEKIND(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MODULEKIND, t, In, Out)) {
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
yyeq_MODULE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
&& yyeq_MODULEKIND((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_DEFINITION((yy)t1[4], (yy)t2[4])
;
}
return 0;
}
yyPrint_MODULE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("module");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_MODULEKIND((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_DEFINITION((yy)t[4]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_MODULE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MODULE, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_MODULEKIND((yy)t[2], A, &B, Handler);
yybroadcast_DEFINITION((yy)t[4], B, &A, Handler);
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
&&(strcmp((char *) t1[2], (char *) t2[2]) == 0)
&&(strcmp((char *) t1[3], (char *) t2[3]) == 0)
;
case 3: return (t2[0] == 3)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
&& yyeq_ACCESS((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_TYPE((yy)t1[4], (yy)t2[4])
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
&& yyeq_ACCESS((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_EXPRESSION((yy)t1[4], (yy)t2[4])
;
case 6: return (t2[0] == 6)
&& (t1[1] == t2[1])
&& yyeq_ACCESS((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_TYPE((yy)t1[4], (yy)t2[4])
;
case 7: return (t2[0] == 7)
&& (t1[1] == t2[1])
&& yyeq_ACCESS((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_SIGNATURE((yy)t1[4], (yy)t2[4])
&& yyeq_DEFINITION((yy)t1[5], (yy)t2[5])
&& yyeq_STATEMENT((yy)t1[6], (yy)t2[6])
;
case 8: return (t2[0] == 8)
&& (t1[1] == t2[1])
&& yyeq_ACCESS((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_SIGNATURE((yy)t1[4], (yy)t2[4])
&&(strcmp((char *) t1[5], (char *) t2[5]) == 0)
;
case 9: return (t2[0] == 9)
&& (t1[1] == t2[1])
&& yyeq_ACCESS((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_ID((yy)t1[4], (yy)t2[4])
&& yyeq_OPTIONALID((yy)t1[5], (yy)t2[5])
;
case 10: return (t2[0] == 10)
&& (t1[1] == t2[1])
&& yyeq_ACCESS((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_SIGNATURE((yy)t1[4], (yy)t2[4])
;
case 11: return (t2[0] == 11)
&& (t1[1] == t2[1])
&& yyeq_ACCESS((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_SYNTAXCLASS((yy)t1[4], (yy)t2[4])
&& yyeq_SYNTAXWARNING((yy)t1[5], (yy)t2[5])
&& yyeq_SYNTAX((yy)t1[6], (yy)t2[6])
&& yyeq_SYNTAXMETHODLIST((yy)t1[7], (yy)t2[7])
;
case 12: return (t2[0] == 12)
&& (t1[1] == t2[1])
&& yyeq_DEFINITION((yy)t1[2], (yy)t2[2])
;
case 13: return (t2[0] == 13)
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
yyTerm("metadata");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STRING((yy)t[2]);
yyNextArg();
yyPrint_STRING((yy)t[3]);
yyEndArgs();
break;
case 3: 
yyTerm("import");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 4: 
yyTerm("type");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ACCESS((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_TYPE((yy)t[4]);
yyEndArgs();
break;
case 5: 
yyTerm("constant");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ACCESS((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[4]);
yyEndArgs();
break;
case 6: 
yyTerm("variable");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ACCESS((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_TYPE((yy)t[4]);
yyEndArgs();
break;
case 7: 
yyTerm("handler");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ACCESS((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_SIGNATURE((yy)t[4]);
yyNextArg();
yyPrint_DEFINITION((yy)t[5]);
yyNextArg();
yyPrint_STATEMENT((yy)t[6]);
yyEndArgs();
break;
case 8: 
yyTerm("foreignhandler");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ACCESS((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_SIGNATURE((yy)t[4]);
yyNextArg();
yyPrint_STRING((yy)t[5]);
yyEndArgs();
break;
case 9: 
yyTerm("property");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ACCESS((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_ID((yy)t[4]);
yyNextArg();
yyPrint_OPTIONALID((yy)t[5]);
yyEndArgs();
break;
case 10: 
yyTerm("event");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ACCESS((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_SIGNATURE((yy)t[4]);
yyEndArgs();
break;
case 11: 
yyTerm("syntax");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ACCESS((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_SYNTAXCLASS((yy)t[4]);
yyNextArg();
yyPrint_SYNTAXWARNING((yy)t[5]);
yyNextArg();
yyPrint_SYNTAX((yy)t[6]);
yyNextArg();
yyPrint_SYNTAXMETHODLIST((yy)t[7]);
yyEndArgs();
break;
case 12: 
yyTerm("unsafe");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_DEFINITION((yy)t[2]);
yyEndArgs();
break;
case 13: 
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
*Out = A;
break;
case 4: 
yybroadcast_ACCESS((yy)t[2], A, &B, Handler);
yybroadcast_TYPE((yy)t[4], B, &A, Handler);
*Out = A;
break;
case 5: 
yybroadcast_ACCESS((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[4], B, &A, Handler);
*Out = A;
break;
case 6: 
yybroadcast_ACCESS((yy)t[2], A, &B, Handler);
yybroadcast_TYPE((yy)t[4], B, &A, Handler);
*Out = A;
break;
case 7: 
yybroadcast_ACCESS((yy)t[2], A, &B, Handler);
yybroadcast_SIGNATURE((yy)t[4], B, &A, Handler);
yybroadcast_DEFINITION((yy)t[5], A, &B, Handler);
yybroadcast_STATEMENT((yy)t[6], B, &A, Handler);
*Out = A;
break;
case 8: 
yybroadcast_ACCESS((yy)t[2], A, &B, Handler);
yybroadcast_SIGNATURE((yy)t[4], B, &A, Handler);
*Out = A;
break;
case 9: 
yybroadcast_ACCESS((yy)t[2], A, &B, Handler);
yybroadcast_OPTIONALID((yy)t[5], B, &A, Handler);
*Out = A;
break;
case 10: 
yybroadcast_ACCESS((yy)t[2], A, &B, Handler);
yybroadcast_SIGNATURE((yy)t[4], B, &A, Handler);
*Out = A;
break;
case 11: 
yybroadcast_ACCESS((yy)t[2], A, &B, Handler);
yybroadcast_SYNTAXCLASS((yy)t[4], B, &A, Handler);
yybroadcast_SYNTAXWARNING((yy)t[5], A, &B, Handler);
yybroadcast_SYNTAX((yy)t[6], B, &A, Handler);
yybroadcast_SYNTAXMETHODLIST((yy)t[7], A, &B, Handler);
*Out = B;
break;
case 12: 
yybroadcast_DEFINITION((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 13: 
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
yyeq_ACCESS(t1, t2) yy t1, t2;
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
}
return 0;
}
yyPrint_ACCESS(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("inferred");
yyNoArgs();
break;
case 2: 
yyTerm("public");
yyNoArgs();
break;
case 3: 
yyTerm("protected");
yyNoArgs();
break;
case 4: 
yyTerm("private");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_ACCESS(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_ACCESS, t, In, Out)) {
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
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
&&(strcmp((char *) t1[2], (char *) t2[2]) == 0)
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
&& yyeq_TYPE((yy)t1[2], (yy)t2[2])
;
case 6: return (t2[0] == 6)
&& (t1[1] == t2[1])
&& yyeq_FIELDLIST((yy)t1[2], (yy)t2[2])
;
case 7: return (t2[0] == 7)
&& (t1[1] == t2[1])
&& yyeq_TYPE((yy)t1[2], (yy)t2[2])
&& yyeq_FIELDLIST((yy)t1[3], (yy)t2[3])
;
case 8: return (t2[0] == 8)
&& (t1[1] == t2[1])
&& yyeq_LANGUAGE((yy)t1[2], (yy)t2[2])
&& yyeq_SIGNATURE((yy)t1[3], (yy)t2[3])
;
case 9: return (t2[0] == 9)
&& (t1[1] == t2[1])
;
case 10: return (t2[0] == 10)
&& (t1[1] == t2[1])
;
case 11: return (t2[0] == 11)
&& (t1[1] == t2[1])
;
case 12: return (t2[0] == 12)
&& (t1[1] == t2[1])
;
case 13: return (t2[0] == 13)
&& (t1[1] == t2[1])
;
case 14: return (t2[0] == 14)
&& (t1[1] == t2[1])
;
case 15: return (t2[0] == 15)
&& (t1[1] == t2[1])
;
case 16: return (t2[0] == 16)
&& (t1[1] == t2[1])
&& yyeq_TYPE((yy)t1[2], (yy)t2[2])
;
case 17: return (t2[0] == 17)
;
case 18: return (t2[0] == 18)
;
}
return 0;
}
yyPrint_TYPE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("any");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("undefined");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("named");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 4: 
yyTerm("foreign");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STRING((yy)t[2]);
yyEndArgs();
break;
case 5: 
yyTerm("optional");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_TYPE((yy)t[2]);
yyEndArgs();
break;
case 6: 
yyTerm("record");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_FIELDLIST((yy)t[2]);
yyEndArgs();
break;
case 7: 
yyTerm("enum");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_TYPE((yy)t[2]);
yyNextArg();
yyPrint_FIELDLIST((yy)t[3]);
yyEndArgs();
break;
case 8: 
yyTerm("handler");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_LANGUAGE((yy)t[2]);
yyNextArg();
yyPrint_SIGNATURE((yy)t[3]);
yyEndArgs();
break;
case 9: 
yyTerm("boolean");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 10: 
yyTerm("integer");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 11: 
yyTerm("real");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 12: 
yyTerm("number");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 13: 
yyTerm("string");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 14: 
yyTerm("data");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 15: 
yyTerm("array");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 16: 
yyTerm("list");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_TYPE((yy)t[2]);
yyEndArgs();
break;
case 17: 
yyTerm("unspecified");
yyNoArgs();
break;
case 18: 
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
yybroadcast_TYPE((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 6: 
yybroadcast_FIELDLIST((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 7: 
yybroadcast_TYPE((yy)t[2], A, &B, Handler);
yybroadcast_FIELDLIST((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 8: 
yybroadcast_LANGUAGE((yy)t[2], A, &B, Handler);
yybroadcast_SIGNATURE((yy)t[3], B, &A, Handler);
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
yybroadcast_TYPE((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 17: 
*Out = A;
break;
case 18: 
*Out = A;
break;
}
}
return 0;
}
yyeq_LANGUAGE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_LANGUAGE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("normal");
yyNoArgs();
break;
case 2: 
yyTerm("foreign");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_LANGUAGE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_LANGUAGE, t, In, Out)) {
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
yyeq_FIELDLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_FIELD((yy)t1[1], (yy)t2[1])
&& yyeq_FIELDLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_FIELDLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("fieldlist");
yyFirstArg();
yyPrint_FIELD((yy)t[1]);
yyNextArg();
yyPrint_FIELDLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_FIELDLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_FIELDLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_FIELD((yy)t[1], A, &B, Handler);
yybroadcast_FIELDLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_FIELD(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_TYPE((yy)t1[3], (yy)t2[3])
;
case 3: return (t2[0] == 3)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 4: return (t2[0] == 4)
;
}
return 0;
}
yyPrint_FIELD(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("action");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyEndArgs();
break;
case 2: 
yyTerm("slot");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_TYPE((yy)t[3]);
yyEndArgs();
break;
case 3: 
yyTerm("element");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 4: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_FIELD(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_FIELD, t, In, Out)) {
switch(t[0]) {
case 1: 
*Out = A;
break;
case 2: 
yybroadcast_TYPE((yy)t[3], A, &B, Handler);
*Out = B;
break;
case 3: 
*Out = A;
break;
case 4: 
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
&& yyeq_MODE((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
&& yyeq_TYPE((yy)t1[4], (yy)t2[4])
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
yyPrint_MODE((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyNextArg();
yyPrint_TYPE((yy)t[4]);
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
yybroadcast_MODE((yy)t[2], A, &B, Handler);
yybroadcast_TYPE((yy)t[4], B, &A, Handler);
*Out = A;
break;
}
}
return 0;
}
yyeq_MODE(t1, t2) yy t1, t2;
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
}
return 0;
}
yyPrint_MODE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("uncomputed");
yyNoArgs();
break;
case 2: 
yyTerm("in");
yyNoArgs();
break;
case 3: 
yyTerm("out");
yyNoArgs();
break;
case 4: 
yyTerm("inout");
yyNoArgs();
break;
case 5: 
yyTerm("variadic");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_MODE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_MODE, t, In, Out)) {
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
yyeq_BYTECODE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_BYTECODE((yy)t1[1], (yy)t2[1])
&& yyeq_BYTECODE((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 3: return (t2[0] == 3)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_TYPE((yy)t1[3], (yy)t2[3])
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
&& yyeq_NAME((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSIONLIST((yy)t1[3], (yy)t2[3])
;
case 5: return (t2[0] == 5)
;
}
return 0;
}
yyPrint_BYTECODE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("sequence");
yyFirstArg();
yyPrint_BYTECODE((yy)t[1]);
yyNextArg();
yyPrint_BYTECODE((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("label");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 3: 
yyTerm("register");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_TYPE((yy)t[3]);
yyEndArgs();
break;
case 4: 
yyTerm("opcode");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_NAME((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSIONLIST((yy)t[3]);
yyEndArgs();
break;
case 5: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_BYTECODE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_BYTECODE, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_BYTECODE((yy)t[1], A, &B, Handler);
yybroadcast_BYTECODE((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
case 3: 
yybroadcast_TYPE((yy)t[3], A, &B, Handler);
*Out = B;
break;
case 4: 
yybroadcast_NAME((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSIONLIST((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 5: 
*Out = A;
break;
}
}
return 0;
}
yyeq_STATEMENT(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_STATEMENT((yy)t1[1], (yy)t2[1])
&& yyeq_STATEMENT((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_TYPE((yy)t1[3], (yy)t2[3])
;
case 3: return (t2[0] == 3)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_STATEMENT((yy)t1[3], (yy)t2[3])
&& yyeq_STATEMENT((yy)t1[4], (yy)t2[4])
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
&& yyeq_STATEMENT((yy)t1[2], (yy)t2[2])
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_STATEMENT((yy)t1[3], (yy)t2[3])
;
case 6: return (t2[0] == 6)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_STATEMENT((yy)t1[3], (yy)t2[3])
;
case 7: return (t2[0] == 7)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_STATEMENT((yy)t1[3], (yy)t2[3])
;
case 8: return (t2[0] == 8)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSION((yy)t1[3], (yy)t2[3])
&& yyeq_EXPRESSION((yy)t1[4], (yy)t2[4])
&& yyeq_EXPRESSION((yy)t1[5], (yy)t2[5])
&& yyeq_STATEMENT((yy)t1[6], (yy)t2[6])
;
case 9: return (t2[0] == 9)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSION((yy)t1[3], (yy)t2[3])
&& yyeq_EXPRESSION((yy)t1[4], (yy)t2[4])
&& yyeq_EXPRESSION((yy)t1[5], (yy)t2[5])
&& yyeq_STATEMENT((yy)t1[6], (yy)t2[6])
;
case 10: return (t2[0] == 10)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSION((yy)t1[3], (yy)t2[3])
&& yyeq_STATEMENT((yy)t1[4], (yy)t2[4])
;
case 11: return (t2[0] == 11)
&& (t1[1] == t2[1])
;
case 12: return (t2[0] == 12)
&& (t1[1] == t2[1])
;
case 13: return (t2[0] == 13)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
;
case 14: return (t2[0] == 14)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSION((yy)t1[3], (yy)t2[3])
;
case 15: return (t2[0] == 15)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
;
case 16: return (t2[0] == 16)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSIONLIST((yy)t1[3], (yy)t2[3])
;
case 17: return (t2[0] == 17)
&& (t1[1] == t2[1])
&& yyeq_INVOKELIST((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSIONLIST((yy)t1[3], (yy)t2[3])
;
case 18: return (t2[0] == 18)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
;
case 19: return (t2[0] == 19)
&& (t1[1] == t2[1])
&& yyeq_STATEMENT((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSION((yy)t1[3], (yy)t2[3])
;
case 20: return (t2[0] == 20)
&& (t1[1] == t2[1])
&& yyeq_BYTECODE((yy)t1[2], (yy)t2[2])
;
case 21: return (t2[0] == 21)
&& (t1[1] == t2[1])
&& yyeq_STATEMENT((yy)t1[2], (yy)t2[2])
;
case 22: return (t2[0] == 22)
;
}
return 0;
}
yyPrint_STATEMENT(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("sequence");
yyFirstArg();
yyPrint_STATEMENT((yy)t[1]);
yyNextArg();
yyPrint_STATEMENT((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("variable");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_TYPE((yy)t[3]);
yyEndArgs();
break;
case 3: 
yyTerm("if");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_STATEMENT((yy)t[3]);
yyNextArg();
yyPrint_STATEMENT((yy)t[4]);
yyEndArgs();
break;
case 4: 
yyTerm("repeatforever");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STATEMENT((yy)t[2]);
yyEndArgs();
break;
case 5: 
yyTerm("repeatcounted");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_STATEMENT((yy)t[3]);
yyEndArgs();
break;
case 6: 
yyTerm("repeatwhile");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_STATEMENT((yy)t[3]);
yyEndArgs();
break;
case 7: 
yyTerm("repeatuntil");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_STATEMENT((yy)t[3]);
yyEndArgs();
break;
case 8: 
yyTerm("repeatupto");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[3]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[4]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[5]);
yyNextArg();
yyPrint_STATEMENT((yy)t[6]);
yyEndArgs();
break;
case 9: 
yyTerm("repeatdownto");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[3]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[4]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[5]);
yyNextArg();
yyPrint_STATEMENT((yy)t[6]);
yyEndArgs();
break;
case 10: 
yyTerm("repeatforeach");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[3]);
yyNextArg();
yyPrint_STATEMENT((yy)t[4]);
yyEndArgs();
break;
case 11: 
yyTerm("nextrepeat");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 12: 
yyTerm("exitrepeat");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 13: 
yyTerm("return");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyEndArgs();
break;
case 14: 
yyTerm("put");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[3]);
yyEndArgs();
break;
case 15: 
yyTerm("get");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyEndArgs();
break;
case 16: 
yyTerm("call");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSIONLIST((yy)t[3]);
yyEndArgs();
break;
case 17: 
yyTerm("invoke");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_INVOKELIST((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSIONLIST((yy)t[3]);
yyEndArgs();
break;
case 18: 
yyTerm("throw");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyEndArgs();
break;
case 19: 
yyTerm("postfixinto");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STATEMENT((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[3]);
yyEndArgs();
break;
case 20: 
yyTerm("bytecode");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_BYTECODE((yy)t[2]);
yyEndArgs();
break;
case 21: 
yyTerm("unsafe");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STATEMENT((yy)t[2]);
yyEndArgs();
break;
case 22: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_STATEMENT(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_STATEMENT, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_STATEMENT((yy)t[1], A, &B, Handler);
yybroadcast_STATEMENT((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
yybroadcast_TYPE((yy)t[3], A, &B, Handler);
*Out = B;
break;
case 3: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_STATEMENT((yy)t[3], B, &A, Handler);
yybroadcast_STATEMENT((yy)t[4], A, &B, Handler);
*Out = B;
break;
case 4: 
yybroadcast_STATEMENT((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 5: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_STATEMENT((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 6: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_STATEMENT((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 7: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_STATEMENT((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 8: 
yybroadcast_EXPRESSION((yy)t[3], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[4], B, &A, Handler);
yybroadcast_EXPRESSION((yy)t[5], A, &B, Handler);
yybroadcast_STATEMENT((yy)t[6], B, &A, Handler);
*Out = A;
break;
case 9: 
yybroadcast_EXPRESSION((yy)t[3], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[4], B, &A, Handler);
yybroadcast_EXPRESSION((yy)t[5], A, &B, Handler);
yybroadcast_STATEMENT((yy)t[6], B, &A, Handler);
*Out = A;
break;
case 10: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[3], B, &A, Handler);
yybroadcast_STATEMENT((yy)t[4], A, &B, Handler);
*Out = B;
break;
case 11: 
*Out = A;
break;
case 12: 
*Out = A;
break;
case 13: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 14: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 15: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 16: 
yybroadcast_EXPRESSIONLIST((yy)t[3], A, &B, Handler);
*Out = B;
break;
case 17: 
yybroadcast_INVOKELIST((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSIONLIST((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 18: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 19: 
yybroadcast_STATEMENT((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 20: 
yybroadcast_BYTECODE((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 21: 
yybroadcast_STATEMENT((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 22: 
*Out = A;
break;
}
}
return 0;
}
yyeq_EXPRESSIONLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_EXPRESSION((yy)t1[1], (yy)t2[1])
&& yyeq_EXPRESSIONLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_EXPRESSIONLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("expressionlist");
yyFirstArg();
yyPrint_EXPRESSION((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSIONLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_EXPRESSIONLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_EXPRESSIONLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_EXPRESSION((yy)t[1], A, &B, Handler);
yybroadcast_EXPRESSIONLIST((yy)t[2], B, &A, Handler);
*Out = A;
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
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
&& (t1[2] == t2[2])
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
&& (t1[2] == t2[2])
;
case 6: return (t2[0] == 6)
&& (t1[1] == t2[1])
&& yyeq_DOUBLE((yy)t1[2], (yy)t2[2])
;
case 7: return (t2[0] == 7)
&& (t1[1] == t2[1])
&&(strcmp((char *) t1[2], (char *) t2[2]) == 0)
;
case 8: return (t2[0] == 8)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 9: return (t2[0] == 9)
&& (t1[1] == t2[1])
;
case 10: return (t2[0] == 10)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSION((yy)t1[3], (yy)t2[3])
;
case 11: return (t2[0] == 11)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSION((yy)t1[3], (yy)t2[3])
;
case 12: return (t2[0] == 12)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_TYPE((yy)t1[3], (yy)t2[3])
;
case 13: return (t2[0] == 13)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSIONLIST((yy)t1[2], (yy)t2[2])
;
case 14: return (t2[0] == 14)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSIONLIST((yy)t1[3], (yy)t2[3])
;
case 15: return (t2[0] == 15)
&& (t1[1] == t2[1])
&& yyeq_INVOKELIST((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSIONLIST((yy)t1[3], (yy)t2[3])
;
case 16: return (t2[0] == 16)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSIONLIST((yy)t1[2], (yy)t2[2])
;
case 17: return (t2[0] == 17)
&& (t1[1] == t2[1])
&& yyeq_EXPRESSION((yy)t1[2], (yy)t2[2])
&& yyeq_EXPRESSION((yy)t1[3], (yy)t2[3])
;
case 18: return (t2[0] == 18)
;
}
return 0;
}
yyPrint_EXPRESSION(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("undefined");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("true");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("false");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 4: 
yyTerm("integer");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyEndArgs();
break;
case 5: 
yyTerm("unsignedinteger");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyEndArgs();
break;
case 6: 
yyTerm("real");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_DOUBLE((yy)t[2]);
yyEndArgs();
break;
case 7: 
yyTerm("string");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STRING((yy)t[2]);
yyEndArgs();
break;
case 8: 
yyTerm("slot");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 9: 
yyTerm("result");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 10: 
yyTerm("logicaland");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[3]);
yyEndArgs();
break;
case 11: 
yyTerm("logicalor");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[3]);
yyEndArgs();
break;
case 12: 
yyTerm("as");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_TYPE((yy)t[3]);
yyEndArgs();
break;
case 13: 
yyTerm("list");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSIONLIST((yy)t[2]);
yyEndArgs();
break;
case 14: 
yyTerm("call");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSIONLIST((yy)t[3]);
yyEndArgs();
break;
case 15: 
yyTerm("invoke");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_INVOKELIST((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSIONLIST((yy)t[3]);
yyEndArgs();
break;
case 16: 
yyTerm("array");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSIONLIST((yy)t[2]);
yyEndArgs();
break;
case 17: 
yyTerm("pair");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[2]);
yyNextArg();
yyPrint_EXPRESSION((yy)t[3]);
yyEndArgs();
break;
case 18: 
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
*Out = A;
break;
case 5: 
*Out = A;
break;
case 6: 
yybroadcast_DOUBLE((yy)t[2], A, &B, Handler);
*Out = B;
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
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 11: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 12: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_TYPE((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 13: 
yybroadcast_EXPRESSIONLIST((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 14: 
yybroadcast_EXPRESSIONLIST((yy)t[3], A, &B, Handler);
*Out = B;
break;
case 15: 
yybroadcast_INVOKELIST((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSIONLIST((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 16: 
yybroadcast_EXPRESSIONLIST((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 17: 
yybroadcast_EXPRESSION((yy)t[2], A, &B, Handler);
yybroadcast_EXPRESSION((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 18: 
*Out = A;
break;
}
}
return 0;
}
yyeq_INVOKELIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_INVOKEINFO((yy)t1[1], (yy)t2[1])
&& yyeq_INVOKELIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_INVOKELIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("invokelist");
yyFirstArg();
yyPrint_INVOKEINFO((yy)t[1]);
yyNextArg();
yyPrint_INVOKELIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_INVOKELIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_INVOKELIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_INVOKELIST((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_INVOKESIGNATURE(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_MODE((yy)t1[1], (yy)t2[1])
&& (t1[2] == t2[2])
&& yyeq_INVOKESIGNATURE((yy)t1[3], (yy)t2[3])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_INVOKESIGNATURE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("invokesignature");
yyFirstArg();
yyPrint_MODE((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyNextArg();
yyPrint_INVOKESIGNATURE((yy)t[3]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_INVOKESIGNATURE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_INVOKESIGNATURE, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_MODE((yy)t[1], A, &B, Handler);
yybroadcast_INVOKESIGNATURE((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_SYNTAX(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
&& yyeq_SYNTAX((yy)t1[2], (yy)t2[2])
&& yyeq_SYNTAX((yy)t1[3], (yy)t2[3])
;
case 2: return (t2[0] == 2)
&& (t1[1] == t2[1])
&& yyeq_SYNTAX((yy)t1[2], (yy)t2[2])
&& yyeq_SYNTAX((yy)t1[3], (yy)t2[3])
;
case 3: return (t2[0] == 3)
&& (t1[1] == t2[1])
&& yyeq_SYNTAX((yy)t1[2], (yy)t2[2])
;
case 4: return (t2[0] == 4)
&& (t1[1] == t2[1])
&& yyeq_SYNTAX((yy)t1[2], (yy)t2[2])
&& yyeq_SYNTAX((yy)t1[3], (yy)t2[3])
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
&& yyeq_SYNTAX((yy)t1[2], (yy)t2[2])
;
case 6: return (t2[0] == 6)
&& (t1[1] == t2[1])
&&(strcmp((char *) t1[2], (char *) t2[2]) == 0)
;
case 7: return (t2[0] == 7)
&& (t1[1] == t2[1])
&&(strcmp((char *) t1[2], (char *) t2[2]) == 0)
;
case 8: return (t2[0] == 8)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_ID((yy)t1[3], (yy)t2[3])
;
case 9: return (t2[0] == 9)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 10: return (t2[0] == 10)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_SYNTAXCONSTANT((yy)t1[3], (yy)t2[3])
;
}
return 0;
}
yyPrint_SYNTAX(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("concatenate");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_SYNTAX((yy)t[2]);
yyNextArg();
yyPrint_SYNTAX((yy)t[3]);
yyEndArgs();
break;
case 2: 
yyTerm("alternate");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_SYNTAX((yy)t[2]);
yyNextArg();
yyPrint_SYNTAX((yy)t[3]);
yyEndArgs();
break;
case 3: 
yyTerm("repeat");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_SYNTAX((yy)t[2]);
yyEndArgs();
break;
case 4: 
yyTerm("list");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_SYNTAX((yy)t[2]);
yyNextArg();
yyPrint_SYNTAX((yy)t[3]);
yyEndArgs();
break;
case 5: 
yyTerm("optional");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_SYNTAX((yy)t[2]);
yyEndArgs();
break;
case 6: 
yyTerm("keyword");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STRING((yy)t[2]);
yyEndArgs();
break;
case 7: 
yyTerm("unreservedkeyword");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STRING((yy)t[2]);
yyEndArgs();
break;
case 8: 
yyTerm("markedrule");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_ID((yy)t[3]);
yyEndArgs();
break;
case 9: 
yyTerm("rule");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 10: 
yyTerm("mark");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_SYNTAXCONSTANT((yy)t[3]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_SYNTAX(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAX, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_SYNTAX((yy)t[2], A, &B, Handler);
yybroadcast_SYNTAX((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 2: 
yybroadcast_SYNTAX((yy)t[2], A, &B, Handler);
yybroadcast_SYNTAX((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 3: 
yybroadcast_SYNTAX((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 4: 
yybroadcast_SYNTAX((yy)t[2], A, &B, Handler);
yybroadcast_SYNTAX((yy)t[3], B, &A, Handler);
*Out = A;
break;
case 5: 
yybroadcast_SYNTAX((yy)t[2], A, &B, Handler);
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
yybroadcast_SYNTAXCONSTANT((yy)t[3], A, &B, Handler);
*Out = B;
break;
}
}
return 0;
}
yyeq_SYNTAXWARNING(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&&(strcmp((char *) t1[1], (char *) t2[1]) == 0)
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_SYNTAXWARNING(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("deprecated");
yyFirstArg();
yyPrint_STRING((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXWARNING(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXWARNING, t, In, Out)) {
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
yyeq_SYNTAXCLASS(t1, t2) yy t1, t2;
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
&& yyeq_SYNTAXPRECEDENCE((yy)t1[1], (yy)t2[1])
;
case 6: return (t2[0] == 6)
&& yyeq_SYNTAXPRECEDENCE((yy)t1[1], (yy)t2[1])
;
case 7: return (t2[0] == 7)
&& yyeq_SYNTAXASSOC((yy)t1[1], (yy)t2[1])
&& yyeq_SYNTAXPRECEDENCE((yy)t1[2], (yy)t2[2])
;
case 8: return (t2[0] == 8)
;
case 9: return (t2[0] == 9)
;
}
return 0;
}
yyPrint_SYNTAXCLASS(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("phrase");
yyNoArgs();
break;
case 2: 
yyTerm("statement");
yyNoArgs();
break;
case 3: 
yyTerm("iterator");
yyNoArgs();
break;
case 4: 
yyTerm("expression");
yyNoArgs();
break;
case 5: 
yyTerm("prefix");
yyFirstArg();
yyPrint_SYNTAXPRECEDENCE((yy)t[1]);
yyEndArgs();
break;
case 6: 
yyTerm("postfix");
yyFirstArg();
yyPrint_SYNTAXPRECEDENCE((yy)t[1]);
yyEndArgs();
break;
case 7: 
yyTerm("binary");
yyFirstArg();
yyPrint_SYNTAXASSOC((yy)t[1]);
yyNextArg();
yyPrint_SYNTAXPRECEDENCE((yy)t[2]);
yyEndArgs();
break;
case 8: 
yyTerm("expressionphrase");
yyNoArgs();
break;
case 9: 
yyTerm("expressionlistphrase");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXCLASS(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXCLASS, t, In, Out)) {
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
yybroadcast_SYNTAXPRECEDENCE((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 6: 
yybroadcast_SYNTAXPRECEDENCE((yy)t[1], A, &B, Handler);
*Out = B;
break;
case 7: 
yybroadcast_SYNTAXASSOC((yy)t[1], A, &B, Handler);
yybroadcast_SYNTAXPRECEDENCE((yy)t[2], B, &A, Handler);
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
yyeq_SYNTAXASSOC(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
;
case 3: return (t2[0] == 3)
;
}
return 0;
}
yyPrint_SYNTAXASSOC(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("left");
yyNoArgs();
break;
case 2: 
yyTerm("right");
yyNoArgs();
break;
case 3: 
yyTerm("neutral");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXASSOC(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXASSOC, t, In, Out)) {
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
}
}
return 0;
}
yyeq_SYNTAXCONSTANTLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_SYNTAXCONSTANT((yy)t1[1], (yy)t2[1])
&& yyeq_SYNTAXCONSTANTLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_SYNTAXCONSTANTLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("constantlist");
yyFirstArg();
yyPrint_SYNTAXCONSTANT((yy)t[1]);
yyNextArg();
yyPrint_SYNTAXCONSTANTLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXCONSTANTLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXCONSTANTLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_SYNTAXCONSTANT((yy)t[1], A, &B, Handler);
yybroadcast_SYNTAXCONSTANTLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_SYNTAXCONSTANT(t1, t2) yy t1, t2;
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
&& (t1[2] == t2[2])
;
case 5: return (t2[0] == 5)
&& (t1[1] == t2[1])
&& yyeq_DOUBLE((yy)t1[2], (yy)t2[2])
;
case 6: return (t2[0] == 6)
&& (t1[1] == t2[1])
&&(strcmp((char *) t1[2], (char *) t2[2]) == 0)
;
case 7: return (t2[0] == 7)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
;
case 8: return (t2[0] == 8)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& (t1[3] == t2[3])
;
}
return 0;
}
yyPrint_SYNTAXCONSTANT(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("undefined");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 2: 
yyTerm("true");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("false");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyEndArgs();
break;
case 4: 
yyTerm("integer");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_INT((yy)t[2]);
yyEndArgs();
break;
case 5: 
yyTerm("real");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_DOUBLE((yy)t[2]);
yyEndArgs();
break;
case 6: 
yyTerm("string");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_STRING((yy)t[2]);
yyEndArgs();
break;
case 7: 
yyTerm("variable");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyEndArgs();
break;
case 8: 
yyTerm("indexedvariable");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_INT((yy)t[3]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXCONSTANT(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXCONSTANT, t, In, Out)) {
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
yybroadcast_DOUBLE((yy)t[2], A, &B, Handler);
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
}
}
return 0;
}
yyeq_SYNTAXMETHODLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_SYNTAXMETHOD((yy)t1[1], (yy)t2[1])
&& yyeq_SYNTAXMETHODLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_SYNTAXMETHODLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("methodlist");
yyFirstArg();
yyPrint_SYNTAXMETHOD((yy)t[1]);
yyNextArg();
yyPrint_SYNTAXMETHODLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXMETHODLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXMETHODLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_SYNTAXMETHOD((yy)t[1], A, &B, Handler);
yybroadcast_SYNTAXMETHODLIST((yy)t[2], B, &A, Handler);
*Out = A;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_SYNTAXMETHOD(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
&& yyeq_ID((yy)t1[2], (yy)t2[2])
&& yyeq_SYNTAXCONSTANTLIST((yy)t1[3], (yy)t2[3])
;
}
return 0;
}
yyPrint_SYNTAXMETHOD(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("method");
yyFirstArg();
yyPrint_POS((yy)t[1]);
yyNextArg();
yyPrint_ID((yy)t[2]);
yyNextArg();
yyPrint_SYNTAXCONSTANTLIST((yy)t[3]);
yyEndArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXMETHOD(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXMETHOD, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_SYNTAXCONSTANTLIST((yy)t[3], A, &B, Handler);
*Out = B;
break;
}
}
return 0;
}
yyeq_SYNTAXTERM(t1, t2) yy t1, t2;
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
}
return 0;
}
yyPrint_SYNTAXTERM(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("undefined");
yyNoArgs();
break;
case 2: 
yyTerm("error");
yyNoArgs();
break;
case 3: 
yyTerm("mark");
yyNoArgs();
break;
case 4: 
yyTerm("expression");
yyNoArgs();
break;
case 5: 
yyTerm("keyword");
yyNoArgs();
break;
case 6: 
yyTerm("mixed");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXTERM(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXTERM, t, In, Out)) {
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
}
}
return 0;
}
yyeq_IDLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& yyeq_ID((yy)t1[1], (yy)t2[1])
&& yyeq_IDLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_IDLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("idlist");
yyFirstArg();
yyPrint_ID((yy)t[1]);
yyNextArg();
yyPrint_IDLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_IDLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_IDLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_IDLIST((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 2: 
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
&& yyeq_MODULEINFO((yy)t1[1], (yy)t2[1])
;
case 3: return (t2[0] == 3)
&& yyeq_SYMBOLINFO((yy)t1[1], (yy)t2[1])
;
case 4: return (t2[0] == 4)
&& yyeq_SYNTAXINFO((yy)t1[1], (yy)t2[1])
;
case 5: return (t2[0] == 5)
&& yyeq_SYNTAXMARKINFO((yy)t1[1], (yy)t2[1])
;
case 6: return (t2[0] == 6)
;
case 7: return (t2[0] == 7)
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
yyTerm("module");
yyFirstArg();
yyPrint_MODULEINFO((yy)t[1]);
yyEndArgs();
break;
case 3: 
yyTerm("symbol");
yyFirstArg();
yyPrint_SYMBOLINFO((yy)t[1]);
yyEndArgs();
break;
case 4: 
yyTerm("syntax");
yyFirstArg();
yyPrint_SYNTAXINFO((yy)t[1]);
yyEndArgs();
break;
case 5: 
yyTerm("syntaxmark");
yyFirstArg();
yyPrint_SYNTAXMARKINFO((yy)t[1]);
yyEndArgs();
break;
case 6: 
yyTerm("error");
yyNoArgs();
break;
case 7: 
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
case 6: 
*Out = A;
break;
case 7: 
*Out = A;
break;
}
}
return 0;
}
yyeq_SYNTAXMARKTYPE(t1, t2) yy t1, t2;
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
}
return 0;
}
yyPrint_SYNTAXMARKTYPE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("uncomputed");
yyNoArgs();
break;
case 2: 
yyTerm("undefined");
yyNoArgs();
break;
case 3: 
yyTerm("error");
yyNoArgs();
break;
case 4: 
yyTerm("boolean");
yyNoArgs();
break;
case 5: 
yyTerm("integer");
yyNoArgs();
break;
case 6: 
yyTerm("real");
yyNoArgs();
break;
case 7: 
yyTerm("string");
yyNoArgs();
break;
case 8: 
yyTerm("phrase");
yyNoArgs();
break;
case 9: 
yyTerm("expression");
yyNoArgs();
break;
case 10: 
yyTerm("input");
yyNoArgs();
break;
case 11: 
yyTerm("output");
yyNoArgs();
break;
case 12: 
yyTerm("context");
yyNoArgs();
break;
case 13: 
yyTerm("iterator");
yyNoArgs();
break;
case 14: 
yyTerm("container");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXMARKTYPE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXMARKTYPE, t, In, Out)) {
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
case 10: return (t2[0] == 10)
;
case 11: return (t2[0] == 11)
;
}
return 0;
}
yyPrint_SYMBOLKIND(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("module");
yyNoArgs();
break;
case 2: 
yyTerm("type");
yyNoArgs();
break;
case 3: 
yyTerm("constant");
yyNoArgs();
break;
case 4: 
yyTerm("handler");
yyNoArgs();
break;
case 5: 
yyTerm("property");
yyNoArgs();
break;
case 6: 
yyTerm("event");
yyNoArgs();
break;
case 7: 
yyTerm("variable");
yyNoArgs();
break;
case 8: 
yyTerm("parameter");
yyNoArgs();
break;
case 9: 
yyTerm("local");
yyNoArgs();
break;
case 10: 
yyTerm("context");
yyNoArgs();
break;
case 11: 
yyTerm("label");
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
case 10: 
*Out = A;
break;
case 11: 
*Out = A;
break;
}
}
return 0;
}
yyeq_SYMBOLSAFETY(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_SYMBOLSAFETY(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("safe");
yyNoArgs();
break;
case 2: 
yyTerm("unsafe");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYMBOLSAFETY(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYMBOLSAFETY, t, In, Out)) {
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
yyeq_INTLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&& (t1[1] == t2[1])
&& yyeq_INTLIST((yy)t1[2], (yy)t2[2])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_INTLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("intlist");
yyFirstArg();
yyPrint_INT((yy)t[1]);
yyNextArg();
yyPrint_INTLIST((yy)t[2]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_INTLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_INTLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_INTLIST((yy)t[2], A, &B, Handler);
*Out = B;
break;
case 2: 
*Out = A;
break;
}
}
return 0;
}
yyeq_INVOKEMETHODTYPE(t1, t2) yy t1, t2;
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
}
return 0;
}
yyPrint_INVOKEMETHODTYPE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("execute");
yyNoArgs();
break;
case 2: 
yyTerm("evaluate");
yyNoArgs();
break;
case 3: 
yyTerm("assign");
yyNoArgs();
break;
case 4: 
yyTerm("iterate");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_INVOKEMETHODTYPE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_INVOKEMETHODTYPE, t, In, Out)) {
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
}
}
return 0;
}
yyeq_INVOKEMETHODLIST(t1, t2) yy t1, t2;
{
switch(t1[0]) {
case 1: return (t2[0] == 1)
&&(strcmp((char *) t1[1], (char *) t2[1]) == 0)
&& yyeq_INVOKEMETHODTYPE((yy)t1[2], (yy)t2[2])
&& yyeq_INVOKESIGNATURE((yy)t1[3], (yy)t2[3])
&& yyeq_INVOKEMETHODLIST((yy)t1[4], (yy)t2[4])
;
case 2: return (t2[0] == 2)
;
}
return 0;
}
yyPrint_INVOKEMETHODLIST(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("methodlist");
yyFirstArg();
yyPrint_STRING((yy)t[1]);
yyNextArg();
yyPrint_INVOKEMETHODTYPE((yy)t[2]);
yyNextArg();
yyPrint_INVOKESIGNATURE((yy)t[3]);
yyNextArg();
yyPrint_INVOKEMETHODLIST((yy)t[4]);
yyEndArgs();
break;
case 2: 
yyTerm("nil");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_INVOKEMETHODLIST(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_INVOKEMETHODLIST, t, In, Out)) {
switch(t[0]) {
case 1: 
yybroadcast_INVOKEMETHODTYPE((yy)t[2], A, &B, Handler);
yybroadcast_INVOKESIGNATURE((yy)t[3], B, &A, Handler);
yybroadcast_INVOKEMETHODLIST((yy)t[4], A, &B, Handler);
*Out = B;
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
yyeq_ID(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_ID(t) yy t;
{
yyPrintIndex(t);
return 0;
}
yyeq_MODULEINFO(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_MODULEINFO(t) yy t;
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
yyeq_SYNTAXINFO(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_SYNTAXINFO(t) yy t;
{
yyPrintIndex(t);
return 0;
}
yyeq_SYNTAXMARKINFO(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_SYNTAXMARKINFO(t) yy t;
{
yyPrintIndex(t);
return 0;
}
yyeq_INVOKEINFO(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_INVOKEINFO(t) yy t;
{
yyPrintIndex(t);
return 0;
}
yyeq_TYPEINFO(t1, t2) yy t1, t2;
{
return t1 == t2;
}
yyPrint_TYPEINFO(t) yy t;
{
yyPrintIndex(t);
return 0;
}
yyeq_SYNTAXPRECEDENCE(t1, t2) yy t1, t2;
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
case 18: return (t2[0] == 18)
;
case 19: return (t2[0] == 19)
;
case 20: return (t2[0] == 20)
;
case 21: return (t2[0] == 21)
;
case 22: return (t2[0] == 22)
;
case 23: return (t2[0] == 23)
;
}
return 0;
}
yyPrint_SYNTAXPRECEDENCE(t) yy t;
{
switch(t[0]) {
case 1: 
yyTerm("scoperesolution");
yyNoArgs();
break;
case 2: 
yyTerm("functioncall");
yyNoArgs();
break;
case 3: 
yyTerm("subscript");
yyNoArgs();
break;
case 4: 
yyTerm("property");
yyNoArgs();
break;
case 5: 
yyTerm("subscriptchunk");
yyNoArgs();
break;
case 6: 
yyTerm("conversion");
yyNoArgs();
break;
case 7: 
yyTerm("functionchunk");
yyNoArgs();
break;
case 8: 
yyTerm("modifier");
yyNoArgs();
break;
case 9: 
yyTerm("exponentiation");
yyNoArgs();
break;
case 10: 
yyTerm("multiplication");
yyNoArgs();
break;
case 11: 
yyTerm("addition");
yyNoArgs();
break;
case 12: 
yyTerm("concatenation");
yyNoArgs();
break;
case 13: 
yyTerm("bitwiseshift");
yyNoArgs();
break;
case 14: 
yyTerm("bitwiseand");
yyNoArgs();
break;
case 15: 
yyTerm("bitwisexor");
yyNoArgs();
break;
case 16: 
yyTerm("bitwiseor");
yyNoArgs();
break;
case 17: 
yyTerm("constructor");
yyNoArgs();
break;
case 18: 
yyTerm("comparison");
yyNoArgs();
break;
case 19: 
yyTerm("classification");
yyNoArgs();
break;
case 20: 
yyTerm("logicalnot");
yyNoArgs();
break;
case 21: 
yyTerm("logicaland");
yyNoArgs();
break;
case 22: 
yyTerm("logicalor");
yyNoArgs();
break;
case 23: 
yyTerm("sequence");
yyNoArgs();
break;
}
return 0;
}
yybroadcast_SYNTAXPRECEDENCE(t,In,Out,Handler)
yy t, In, *Out; int (*Handler) ();
{
yy A, B;
A = In;
if (! Handler(yybroadcast_SYNTAXPRECEDENCE, t, In, Out)) {
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
case 18: 
*Out = A;
break;
case 19: 
*Out = A;
break;
case 20: 
*Out = A;
break;
case 21: 
*Out = A;
break;
case 22: 
*Out = A;
break;
case 23: 
*Out = A;
break;
}
}
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
QueryExpressionListLength(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_1_1;
yy yyv_TailCount;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_49_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Tail;
QueryExpressionListLength(yy_1_1, &yy_1_2);
yyv_TailCount = yy_1_2;
yy_0_2_1 = yyv_TailCount;
yy_0_2_2 = ((yy)1);
yy_0_2 = (yy)(((intptr_t)yy_0_2_1)+((intptr_t)yy_0_2_2));
*yyout_1 = yy_0_2;
return;
yyfl_49_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_49_2;
yy_0_2 = ((yy)0);
*yyout_1 = yy_0_2;
return;
yyfl_49_2 : ;
}
yyErr(2,383);
}
