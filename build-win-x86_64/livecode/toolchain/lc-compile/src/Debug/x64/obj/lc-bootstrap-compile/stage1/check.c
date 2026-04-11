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
yyAbort(n,"check", l);
}
yy yyglov_IgnoredModulesList = (yy) yyu;
Check(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_6_2;
yy yy_7_1;
yy yy_8_1;
yy yy_9_1;
yy_0_1 = yyin_1;
yyv_Module = yy_0_1;
yy_1_1 = yyv_Module;
{
extern CheckBindings();
yybroadcast_MODULE(yy_1_1, 0, &yynull, CheckBindings);
}
yy_2_1 = yyv_Module;
{
extern CheckInvokes();
yybroadcast_MODULE(yy_2_1, 0, &yynull, CheckInvokes);
}
yy_3_1 = yyv_Module;
{
extern CheckDeclaredTypes();
yybroadcast_MODULE(yy_3_1, 0, &yynull, CheckDeclaredTypes);
}
yy_4_1 = yyv_Module;
{
extern CheckSyntaxDefinitions();
yybroadcast_MODULE(yy_4_1, 0, &yynull, CheckSyntaxDefinitions);
}
yy_5_1 = yyv_Module;
{
extern CheckIdentifiers();
yybroadcast_MODULE(yy_5_1, 0, &yynull, CheckIdentifiers);
}
yy_6_1 = yyv_Module;
yy_6_2 = ((yy)0);
{
extern CheckRepeats();
yybroadcast_MODULE(yy_6_1, yy_6_2, &yynull, CheckRepeats);
}
yy_7_1 = yyv_Module;
{
extern CheckLiterals();
yybroadcast_MODULE(yy_7_1, 0, &yynull, CheckLiterals);
}
yy_8_1 = yyv_Module;
CheckSafety(yy_8_1);
yy_9_1 = yyv_Module;
{
extern CheckVariadic();
yybroadcast_MODULE(yy_9_1, 0, &yynull, CheckVariadic);
}
return;
}
}
int CheckBindings(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_DEFINITION();
extern yybroadcast_TYPE();
extern yybroadcast_FIELD();
extern yybroadcast_STATEMENT();
extern yybroadcast_BYTECODE();
extern yybroadcast_EXPRESSION();
extern yybroadcast_SYNTAX();
extern yybroadcast_SYNTAXMETHOD();
extern yybroadcast_SYNTAXCONSTANT();
/*=== Sweep DEFINITION ===*/
if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Value;
yy yy_0_1_4;
yy yy_1_1_1_1;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_2_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Value = yy_0_1_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Value;
if (! IsExpressionSimpleConstant(yy_1_1_1_1)) goto yyfl_2_10001_1_1;
goto yysl_2_10001_1;
yyfl_2_10001_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_ConstantsMustBeSimple(yy_1_2_1_1);
goto yysl_2_10001_1;
yysl_2_10001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_10001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Getter;
yy yy_0_1_4;
yy yyv_OptionalSetter;
yy yy_0_1_5;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yyv_Setter;
yy yy_2_1_1_2_1;
yy yy_2_1_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_2_10002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Position = yy_0_1_1;
yyv_Getter = yy_0_1_4;
yyv_OptionalSetter = yy_0_1_5;
yy_1_1 = yyv_Getter;
CheckBindingIsVariableOrGetHandlerId(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_OptionalSetter;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 1) goto yyfl_2_10002_2_1;
yy_2_1_1_2_1 = ((yy)yy_2_1_1_2[1]);
yyv_Setter = yy_2_1_1_2_1;
yy_2_1_2_1 = yyv_Setter;
CheckBindingIsVariableOrSetHandlerId(yy_2_1_2_1);
goto yysl_2_10002_2;
yyfl_2_10002_2_1 : ;
goto yysl_2_10002_2;
yysl_2_10002_2 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_10002 : ;
}
return 0;
}
/*===*/
/*=== Sweep TYPE ===*/
else if (yytp == (intptr_t) yybroadcast_TYPE) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_2_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
CheckBindingIsTypeId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_2_20001 : ;
}
return 0;
}
/*===*/
/*=== Sweep FIELD ===*/
else if (yytp == (intptr_t) yybroadcast_FIELD) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Handler;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_2_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Handler = yy_0_1_3;
yy_1_1 = yyv_Handler;
CheckBindingIsHandlerId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_2_30001 : ;
}
return 0;
}
/*===*/
/*=== Sweep STATEMENT ===*/
else if (yytp == (intptr_t) yybroadcast_STATEMENT) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Slot;
yy yy_0_1_2;
yy yyv_Start;
yy yy_0_1_3;
yy yyv_Finish;
yy yy_0_1_4;
yy yyv_Step;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_2_40001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Slot = yy_0_1_2;
yyv_Start = yy_0_1_3;
yyv_Finish = yy_0_1_4;
yyv_Step = yy_0_1_5;
yyv_Body = yy_0_1_6;
yy_1_1 = yyv_Slot;
CheckBindingIsVariableId(yy_1_1);
yy_2_1 = yyv_Start;
{
extern CheckBindings();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckBindings);
}
yy_3_1 = yyv_Finish;
{
extern CheckBindings();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, CheckBindings);
}
yy_4_1 = yyv_Step;
{
extern CheckBindings();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, CheckBindings);
}
yy_5_1 = yyv_Body;
{
extern CheckBindings();
yybroadcast_STATEMENT(yy_5_1, 0, &yynull, CheckBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_40001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Slot;
yy yy_0_1_2;
yy yyv_Start;
yy yy_0_1_3;
yy yyv_Finish;
yy yy_0_1_4;
yy yyv_Step;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_2_40002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Slot = yy_0_1_2;
yyv_Start = yy_0_1_3;
yyv_Finish = yy_0_1_4;
yyv_Step = yy_0_1_5;
yyv_Body = yy_0_1_6;
yy_1_1 = yyv_Slot;
CheckBindingIsVariableId(yy_1_1);
yy_2_1 = yyv_Start;
{
extern CheckBindings();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckBindings);
}
yy_3_1 = yyv_Finish;
{
extern CheckBindings();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, CheckBindings);
}
yy_4_1 = yyv_Step;
{
extern CheckBindings();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, CheckBindings);
}
yy_5_1 = yyv_Body;
{
extern CheckBindings();
yybroadcast_STATEMENT(yy_5_1, 0, &yynull, CheckBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_40002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Iterator;
yy yy_0_1_2;
yy yyv_Container;
yy yy_0_1_3;
yy yyv_Body;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_2_40003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Iterator = yy_0_1_2;
yyv_Container = yy_0_1_3;
yyv_Body = yy_0_1_4;
yy_1_1 = yyv_Iterator;
{
extern CheckBindings();
yybroadcast_EXPRESSION(yy_1_1, 0, &yynull, CheckBindings);
}
yy_2_1 = yyv_Container;
{
extern CheckBindings();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckBindings);
}
yy_3_1 = yyv_Body;
{
extern CheckBindings();
yybroadcast_STATEMENT(yy_3_1, 0, &yynull, CheckBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_40003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Handler;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 16) goto yyfl_2_40004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = yyv_Handler;
CheckBindingIsCallableVariableOrHandlerId(yy_1_1);
yy_2_1 = yyv_Arguments;
{
extern CheckBindings();
yybroadcast_EXPRESSIONLIST(yy_2_1, 0, &yynull, CheckBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_40004 : ;
}
return 0;
}
/*===*/
/*=== Sweep BYTECODE ===*/
else if (yytp == (intptr_t) yybroadcast_BYTECODE) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Opcode;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_2_50001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Opcode = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = yyv_Position;
yy_1_2 = yyv_Opcode;
yy_1_3 = yyv_Arguments;
CheckOpcode(yy_1_1, yy_1_2, yy_1_3);
*yyout_1 = yyin_2;
return 1;
yyfl_2_50001 : ;
}
return 0;
}
/*===*/
/*=== Sweep EXPRESSION ===*/
else if (yytp == (intptr_t) yybroadcast_EXPRESSION) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_2_60001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
CheckBindingIsConstantOrVariableOrHandlerId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_2_60001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Handler;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_2_60002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = yyv_Handler;
CheckBindingIsCallableVariableOrHandlerId(yy_1_1);
yy_2_1 = yyv_Arguments;
{
extern CheckBindings();
yybroadcast_EXPRESSIONLIST(yy_2_1, 0, &yynull, CheckBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_60002 : ;
}
return 0;
}
/*===*/
/*=== Sweep SYNTAX ===*/
else if (yytp == (intptr_t) yybroadcast_SYNTAX) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Variable;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_2_70001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Variable = yy_0_1_2;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
CheckBindingIsSyntaxRuleOfExpressionType(yy_1_1);
yy_2_1 = yyv_Variable;
CheckBindingIsSyntaxMark(yy_2_1);
*yyout_1 = yyin_2;
return 1;
yyfl_2_70001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_2_70002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
CheckBindingIsSyntaxRuleOfExpressionType(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_2_70002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Variable;
yy yy_0_1_2;
yy yyv_Value;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_2_70003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Variable = yy_0_1_2;
yyv_Value = yy_0_1_3;
yy_1_1 = yyv_Variable;
CheckBindingIsSyntaxMark(yy_1_1);
yy_2_1 = yyv_Variable;
yy_2_2 = yyv_Value;
CheckBindingIsConstantSyntaxValue(yy_2_1, yy_2_2);
*yyout_1 = yyin_2;
return 1;
yyfl_2_70003 : ;
}
return 0;
}
/*===*/
/*=== Sweep SYNTAXMETHOD ===*/
else if (yytp == (intptr_t) yybroadcast_SYNTAXMETHOD) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_2_80001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = yyv_Name;
CheckBindingIsHandlerId(yy_1_1);
yy_2_1 = yyv_Arguments;
{
extern CheckBindings();
yybroadcast_SYNTAXCONSTANTLIST(yy_2_1, 0, &yynull, CheckBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_80001 : ;
}
return 0;
}
/*===*/
/*=== Sweep SYNTAXCONSTANT ===*/
else if (yytp == (intptr_t) yybroadcast_SYNTAXCONSTANT) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_2_90001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
CheckBindingIsSyntaxMarkUse(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_2_90001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_2_90002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
CheckBindingIsSyntaxMarkUse(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_2_90002 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
int CheckBindingsOfConstantExpression(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_EXPRESSION();
/*=== Sweep EXPRESSION ===*/
if (yytp == (intptr_t) yybroadcast_EXPRESSION) {
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 18) goto yyfl_3_10001;
*yyout_1 = yyin_2;
return 1;
yyfl_3_10001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
CheckBindingIsTypeId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_4_1;
return;
yyfl_4_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_4_2;
if (yy_1_2[0] != 2) goto yyfl_4_2;
return;
yyfl_4_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,195);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToAType(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_4_3 : ;
}
yyErr(2,184);
}
CheckBindingIsHandlerId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_5_1;
return;
yyfl_5_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_5_2;
if (yy_1_2[0] != 4) goto yyfl_5_2;
return;
yyfl_5_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,211);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToAHandler(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_5_3 : ;
}
yyErr(2,200);
}
CheckBindingIsVariableId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_6_1;
return;
yyfl_6_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_6_2;
if (yy_1_2[0] != 7) goto yyfl_6_2;
return;
yyfl_6_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_6_3;
if (yy_1_2[0] != 8) goto yyfl_6_3;
return;
yyfl_6_3 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_6_4;
if (yy_1_2[0] != 9) goto yyfl_6_4;
return;
yyfl_6_4 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_6_5;
if (yy_1_2[0] != 10) goto yyfl_6_5;
return;
yyfl_6_5 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,236);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToAVariable(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_6_6 : ;
}
yyErr(2,216);
}
CheckBindingIsVariableOrHandlerId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_7_1;
return;
yyfl_7_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_7_2;
if (yy_1_2[0] != 7) goto yyfl_7_2;
return;
yyfl_7_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_7_3;
if (yy_1_2[0] != 8) goto yyfl_7_3;
return;
yyfl_7_3 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_7_4;
if (yy_1_2[0] != 9) goto yyfl_7_4;
return;
yyfl_7_4 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_7_5;
if (yy_1_2[0] != 10) goto yyfl_7_5;
return;
yyfl_7_5 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_7_6;
if (yy_1_2[0] != 4) goto yyfl_7_6;
return;
yyfl_7_6 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,264);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToAVariableOrHandler(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_7_7 : ;
}
yyErr(2,241);
}
CheckBindingIsConstantOrVariableOrHandlerId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_8_1;
return;
yyfl_8_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_8_2;
if (yy_1_2[0] != 3) goto yyfl_8_2;
return;
yyfl_8_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_8_3;
if (yy_1_2[0] != 7) goto yyfl_8_3;
return;
yyfl_8_3 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_8_4;
if (yy_1_2[0] != 8) goto yyfl_8_4;
return;
yyfl_8_4 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_8_5;
if (yy_1_2[0] != 9) goto yyfl_8_5;
return;
yyfl_8_5 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_8_6;
if (yy_1_2[0] != 10) goto yyfl_8_6;
return;
yyfl_8_6 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_8_7;
if (yy_1_2[0] != 4) goto yyfl_8_7;
return;
yyfl_8_7 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,295);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToAConstantOrVariableOrHandler(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_8_8 : ;
}
yyErr(2,269);
}
FullyResolveType(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_2;
yy yy_0_2;
yy yy_1_1;
yy yyv_Base;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_9_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Type = yy_0_1_2;
yy_1_1 = yyv_Type;
FullyResolveType(yy_1_1, &yy_1_2);
yyv_Base = yy_1_2;
yy_0_2 = yyv_Base;
*yyout_1 = yy_0_2;
return;
yyfl_9_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_2;
yy yy_1_1;
yy yyv_Named;
yy yy_1_2;
yy yyv_Type;
yy yy_2;
yy yy_3_1;
yy yyv_Base;
yy yy_3_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_9_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_9_2;
yyv_Named = yy_1_2;
yy_2 = (yy) yyv_Named[7];
if (yy_2 == (yy) yyu) yyErr(1,307);
yyv_Type = yy_2;
yy_3_1 = yyv_Type;
FullyResolveType(yy_3_1, &yy_3_2);
yyv_Base = yy_3_2;
yy_0_2 = yyv_Base;
*yyout_1 = yy_0_2;
return;
yyfl_9_2 : ;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yyv_Type = yy_0_1;
yy_0_2 = yyv_Type;
*yyout_1 = yy_0_2;
return;
yyfl_9_3 : ;
}
yyErr(2,300);
}
CheckBindingIsCallableVariableOrHandlerId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1_1_1;
yy yyv_Info;
yy yy_2_1_1_2;
yy yyv_Kind;
yy yy_2_1_2;
yy yy_2_1_3_1;
yy yy_2_1_3_2;
yy yyv_Type;
yy yy_2_1_4;
yy yy_2_1_5_1;
yy yyv_BaseType;
yy yy_2_1_5_2;
yy yy_2_1_6_1_1_1;
yy yy_2_1_6_1_1_2;
yy yy_2_1_6_1_1_2_1;
yy yy_2_1_6_1_1_2_2;
yy yyv_Signature;
yy yy_2_1_6_1_1_2_3;
yy yyv_Position;
yy yy_2_1_6_2_1;
yy yy_2_1_6_2_2_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
CheckBindingIsVariableOrHandlerId(yy_1_1);
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_1_1_1 = yyv_Id;
if (! QuerySymbolId(yy_2_1_1_1, &yy_2_1_1_2)) goto yyfl_10_1_2_1;
yyv_Info = yy_2_1_1_2;
yy_2_1_2 = (yy) yyv_Info[6];
if (yy_2_1_2 == (yy) yyu) yyErr(1,318);
yyv_Kind = yy_2_1_2;
yy_2_1_3_1 = yyv_Kind;
yy_2_1_3_2 = yyb + 0;
yy_2_1_3_2[0] = 4;
if (yyeq_SYMBOLKIND(yy_2_1_3_1, yy_2_1_3_2)) goto yyfl_10_1_2_1;
yy_2_1_4 = (yy) yyv_Info[7];
if (yy_2_1_4 == (yy) yyu) yyErr(1,321);
yyv_Type = yy_2_1_4;
yy_2_1_5_1 = yyv_Type;
FullyResolveType(yy_2_1_5_1, &yy_2_1_5_2);
yyv_BaseType = yy_2_1_5_2;
{
yy yysb = yyb;
yy_2_1_6_1_1_1 = yyv_BaseType;
yy_2_1_6_1_1_2 = yy_2_1_6_1_1_1;
if (yy_2_1_6_1_1_2[0] != 8) goto yyfl_10_1_2_1_6_1;
yy_2_1_6_1_1_2_1 = ((yy)yy_2_1_6_1_1_2[1]);
yy_2_1_6_1_1_2_2 = ((yy)yy_2_1_6_1_1_2[2]);
yy_2_1_6_1_1_2_3 = ((yy)yy_2_1_6_1_1_2[3]);
yyv_Signature = yy_2_1_6_1_1_2_3;
goto yysl_10_1_2_1_6;
yyfl_10_1_2_1_6_1 : ;
yy_2_1_6_2_1 = (yy) yyv_Id[1];
if (yy_2_1_6_2_1 == (yy) yyu) yyErr(1,326);
yyv_Position = yy_2_1_6_2_1;
yy_2_1_6_2_2_1 = yyv_Position;
Error_NonHandlerTypeVariablesCannotBeCalled(yy_2_1_6_2_2_1);
goto yysl_10_1_2_1_6;
yysl_10_1_2_1_6 : ;
yyb = yysb;
}
goto yysl_10_1_2;
yyfl_10_1_2_1 : ;
goto yysl_10_1_2;
yysl_10_1_2 : ;
yyb = yysb;
}
return;
}
}
CheckBindingIsVariableOrGetHandlerId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yy_2;
yy yy_3;
yy yy_3_1;
yy yy_3_2;
yy yyv_Signature;
yy yy_3_3;
yy yy_4_1_1_1;
yy yy_4_1_1_2;
yy yy_4_1_1_2_1;
yy yyv_ReturnType;
yy yy_4_1_1_2_2;
yy yy_4_1_2_1_1_1;
yy yy_4_1_2_1_1_2;
yy yy_4_1_2_1_1_2_1;
yy yy_4_1_2_1_2_1;
yy yyv_Name;
yy yy_4_1_2_1_2_2;
yy yyv_Position;
yy yy_4_1_2_1_3;
yy yy_4_1_2_1_4_1;
yy yy_4_1_2_1_4_2;
yy yy_4_2_1_1;
yy yy_4_2_1_2;
yy yy_4_2_2;
yy yy_4_2_3_1;
yy yy_4_2_3_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_11_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[6];
if (yy_2 == (yy) yyu) yyErr(1,335);
if (yy_2[0] != 4) goto yyfl_11_1;
yy_3 = (yy) yyv_Info[7];
if (yy_3 == (yy) yyu) yyErr(1,336);
if (yy_3[0] != 8) goto yyfl_11_1;
yy_3_1 = ((yy)yy_3[1]);
yy_3_2 = ((yy)yy_3[2]);
yy_3_3 = ((yy)yy_3[3]);
yyv_Signature = yy_3_3;
{
yy yysb = yyb;
yy_4_1_1_1 = yyv_Signature;
yy_4_1_1_2 = yy_4_1_1_1;
if (yy_4_1_1_2[0] != 1) goto yyfl_11_1_4_1;
yy_4_1_1_2_1 = ((yy)yy_4_1_1_2[1]);
yy_4_1_1_2_2 = ((yy)yy_4_1_1_2[2]);
if (yy_4_1_1_2_1[0] != 2) goto yyfl_11_1_4_1;
yyv_ReturnType = yy_4_1_1_2_2;
{
yy yysb = yyb;
yy_4_1_2_1_1_1 = yyv_ReturnType;
yy_4_1_2_1_1_2 = yy_4_1_2_1_1_1;
if (yy_4_1_2_1_1_2[0] != 2) goto yyfl_11_1_4_1_2_1;
yy_4_1_2_1_1_2_1 = ((yy)yy_4_1_2_1_1_2[1]);
yy_4_1_2_1_2_1 = yyv_Id;
GetQualifiedName(yy_4_1_2_1_2_1, &yy_4_1_2_1_2_2);
yyv_Name = yy_4_1_2_1_2_2;
yy_4_1_2_1_3 = (yy) yyv_Id[1];
if (yy_4_1_2_1_3 == (yy) yyu) yyErr(1,342);
yyv_Position = yy_4_1_2_1_3;
yy_4_1_2_1_4_1 = yyv_Position;
yy_4_1_2_1_4_2 = yyv_Name;
Error_HandlerNotSuitableForPropertyGetter(yy_4_1_2_1_4_1, yy_4_1_2_1_4_2);
goto yysl_11_1_4_1_2;
yyfl_11_1_4_1_2_1 : ;
goto yysl_11_1_4_1_2;
yysl_11_1_4_1_2 : ;
yyb = yysb;
}
goto yysl_11_1_4;
yyfl_11_1_4_1 : ;
yy_4_2_1_1 = yyv_Id;
GetQualifiedName(yy_4_2_1_1, &yy_4_2_1_2);
yyv_Name = yy_4_2_1_2;
yy_4_2_2 = (yy) yyv_Id[1];
if (yy_4_2_2 == (yy) yyu) yyErr(1,349);
yyv_Position = yy_4_2_2;
yy_4_2_3_1 = yyv_Position;
yy_4_2_3_2 = yyv_Name;
Error_HandlerNotSuitableForPropertyGetter(yy_4_2_3_1, yy_4_2_3_2);
goto yysl_11_1_4;
yysl_11_1_4 : ;
yyb = yysb;
}
return;
yyfl_11_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
CheckBindingIsVariableOrHandlerId(yy_1_1);
return;
yyfl_11_2 : ;
}
yyErr(2,331);
}
CheckBindingIsVariableOrSetHandlerId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yy_2;
yy yy_3;
yy yy_3_1;
yy yy_3_2;
yy yyv_Signature;
yy yy_3_3;
yy yy_4_1_1_1;
yy yy_4_1_1_2;
yy yy_4_1_1_2_1;
yy yy_4_1_1_2_1_1;
yy yy_4_1_1_2_1_1_1;
yy yy_4_1_1_2_1_1_2;
yy yy_4_1_1_2_1_1_3;
yy yy_4_1_1_2_1_1_4;
yy yy_4_1_1_2_1_2;
yy yy_4_1_1_2_2;
yy yy_4_2_1_1;
yy yyv_Name;
yy yy_4_2_1_2;
yy yyv_Position;
yy yy_4_2_2;
yy yy_4_2_3_1;
yy yy_4_2_3_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_12_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[6];
if (yy_2 == (yy) yyu) yyErr(1,360);
if (yy_2[0] != 4) goto yyfl_12_1;
yy_3 = (yy) yyv_Info[7];
if (yy_3 == (yy) yyu) yyErr(1,361);
if (yy_3[0] != 8) goto yyfl_12_1;
yy_3_1 = ((yy)yy_3[1]);
yy_3_2 = ((yy)yy_3[2]);
yy_3_3 = ((yy)yy_3[3]);
yyv_Signature = yy_3_3;
{
yy yysb = yyb;
yy_4_1_1_1 = yyv_Signature;
yy_4_1_1_2 = yy_4_1_1_1;
if (yy_4_1_1_2[0] != 1) goto yyfl_12_1_4_1;
yy_4_1_1_2_1 = ((yy)yy_4_1_1_2[1]);
yy_4_1_1_2_2 = ((yy)yy_4_1_1_2[2]);
if (yy_4_1_1_2_1[0] != 1) goto yyfl_12_1_4_1;
yy_4_1_1_2_1_1 = ((yy)yy_4_1_1_2_1[1]);
yy_4_1_1_2_1_2 = ((yy)yy_4_1_1_2_1[2]);
if (yy_4_1_1_2_1_1[0] != 1) goto yyfl_12_1_4_1;
yy_4_1_1_2_1_1_1 = ((yy)yy_4_1_1_2_1_1[1]);
yy_4_1_1_2_1_1_2 = ((yy)yy_4_1_1_2_1_1[2]);
yy_4_1_1_2_1_1_3 = ((yy)yy_4_1_1_2_1_1[3]);
yy_4_1_1_2_1_1_4 = ((yy)yy_4_1_1_2_1_1[4]);
if (yy_4_1_1_2_1_1_2[0] != 2) goto yyfl_12_1_4_1;
if (yy_4_1_1_2_1_2[0] != 2) goto yyfl_12_1_4_1;
goto yysl_12_1_4;
yyfl_12_1_4_1 : ;
yy_4_2_1_1 = yyv_Id;
GetQualifiedName(yy_4_2_1_1, &yy_4_2_1_2);
yyv_Name = yy_4_2_1_2;
yy_4_2_2 = (yy) yyv_Id[1];
if (yy_4_2_2 == (yy) yyu) yyErr(1,366);
yyv_Position = yy_4_2_2;
yy_4_2_3_1 = yyv_Position;
yy_4_2_3_2 = yyv_Name;
Error_HandlerNotSuitableForPropertySetter(yy_4_2_3_1, yy_4_2_3_2);
goto yysl_12_1_4;
yysl_12_1_4 : ;
yyb = yysb;
}
return;
yyfl_12_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
CheckBindingIsVariableOrHandlerId(yy_1_1);
return;
yyfl_12_2 : ;
}
yyErr(2,356);
}
CheckBindingIsSyntaxRuleOfExpressionType(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_13_1;
return;
yyfl_13_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryClassOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_13_2;
if (yy_1_2[0] != 8) goto yyfl_13_2;
return;
yyfl_13_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryClassOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_13_3;
if (yy_1_2[0] != 9) goto yyfl_13_3;
return;
yyfl_13_3 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryClassOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_13_4;
if (yy_1_2[0] != 1) goto yyfl_13_4;
return;
yyfl_13_4 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy yyv_Name;
yy yy_2;
yy yyv_Position;
yy yy_3;
yy yy_4_1;
yy yy_4_2;
yy yy_5;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
if (! QueryClassOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_13_5;
yy_2 = (yy) yyv_Id[2];
if (yy_2 == (yy) yyu) yyErr(1,390);
yyv_Name = yy_2;
yy_3 = (yy) yyv_Id[1];
if (yy_3 == (yy) yyu) yyErr(1,391);
yyv_Position = yy_3;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Name;
Error_NotBoundToAPhrase(yy_4_1, yy_4_2);
yy_5 = yyb + 0;
yy_5[0] = 6;
yyv_Id[3] = (intptr_t) yy_5;
return;
yyfl_13_5 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,397);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,398);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToASyntaxRule(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_13_6 : ;
}
yyErr(2,373);
}
CheckBindingIsSyntaxMark(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_14_1;
return;
yyfl_14_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryTypeOfSyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_14_2;
return;
yyfl_14_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,412);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,413);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToASyntaxMark(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_14_3 : ;
}
yyErr(2,403);
}
CheckBindingIsConstantSyntaxValue(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 1) goto yyfl_15_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
return;
yyfl_15_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 2) goto yyfl_15_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
return;
yyfl_15_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 3) goto yyfl_15_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
return;
yyfl_15_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 4) goto yyfl_15_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return;
yyfl_15_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 5) goto yyfl_15_5;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return;
yyfl_15_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 6) goto yyfl_15_6;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return;
yyfl_15_6 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yyv_Name;
yy yy_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,433);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,434);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToAConstantSyntaxValue(yy_3_1, yy_3_2);
return;
yyfl_15_7 : ;
}
yyErr(2,418);
}
CheckBindingIsSyntaxMarkUse(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_16_1;
return;
yyfl_16_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QueryTypeOfSyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_16_2;
return;
yyfl_16_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,446);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,447);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_NotBoundToASyntaxMark(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_16_3 : ;
}
yyErr(2,437);
}
int IsExpressionSimpleConstant(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_17_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_17_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_17_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_17_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_17_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_17_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_17_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_17_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_17_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_17_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_17_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_17_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_17_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_17_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_List;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_17_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_List = yy_0_1_2;
yy_1_1 = yyv_List;
if (! IsExpressionListSimpleConstant(yy_1_1)) goto yyfl_17_8;
return 1;
yyfl_17_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Pairs;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 16) goto yyfl_17_9;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Pairs = yy_0_1_2;
yy_1_1 = yyv_Pairs;
if (! IsExpressionListSimpleConstant(yy_1_1)) goto yyfl_17_9;
return 1;
yyfl_17_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Key;
yy yy_0_1_2;
yy yyv_Value;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 17) goto yyfl_17_10;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Key = yy_0_1_2;
yyv_Value = yy_0_1_3;
yy_1_1 = yyv_Key;
if (! IsExpressionSimpleConstant(yy_1_1)) goto yyfl_17_10;
yy_2_1 = yyv_Value;
if (! IsExpressionSimpleConstant(yy_2_1)) goto yyfl_17_10;
return 1;
yyfl_17_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Info;
yy yy_0_1_2_1;
yy yy_0_1_2_2;
yy yy_0_1_3;
yy yyv_Operand;
yy yy_0_1_3_1;
yy yy_0_1_3_2;
yy yyv_SyntaxName;
yy yy_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_2_1_1;
yy yy_2_2_1_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_1_2_1;
yy yy_3_1_1_2_2;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_2_1_2_1;
yy yyv_UIntValue;
yy yy_3_2_1_2_2;
yy yy_3_2_2_1_1_1;
yy yy_3_2_2_1_1_2;
yy yy_3_2_2_2_1_1;
yy yy_3_3_1_1;
yy yy_3_3_1_2;
yy yy_3_3_1_2_1;
yy yy_3_3_1_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_17_11;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
if (yy_0_1_2[0] != 1) goto yyfl_17_11;
yy_0_1_2_1 = ((yy)yy_0_1_2[1]);
yy_0_1_2_2 = ((yy)yy_0_1_2[2]);
yyv_Info = yy_0_1_2_1;
if (yy_0_1_2_2[0] != 2) goto yyfl_17_11;
if (yy_0_1_3[0] != 1) goto yyfl_17_11;
yy_0_1_3_1 = ((yy)yy_0_1_3[1]);
yy_0_1_3_2 = ((yy)yy_0_1_3[2]);
yyv_Operand = yy_0_1_3_1;
if (yy_0_1_3_2[0] != 2) goto yyfl_17_11;
yy_1 = (yy) yyv_Info[3];
if (yy_1 == (yy) yyu) yyErr(1,479);
yyv_SyntaxName = yy_1;
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_SyntaxName;
yy_2_1_1_2 = ((yy)"PlusUnaryOperator");
if (strcmp((char *) yy_2_1_1_1, (char *) yy_2_1_1_2)  !=  0) goto yyfl_17_11_2_1;
goto yysl_17_11_2;
yyfl_17_11_2_1 : ;
yy_2_2_1_1 = yyv_SyntaxName;
yy_2_2_1_2 = ((yy)"MinusUnaryOperator");
if (strcmp((char *) yy_2_2_1_1, (char *) yy_2_2_1_2)  !=  0) goto yyfl_17_11_2_2;
goto yysl_17_11_2;
yyfl_17_11_2_2 : ;
goto yyfl_17_11;
yysl_17_11_2 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Operand;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 4) goto yyfl_17_11_3_1;
yy_3_1_1_2_1 = ((yy)yy_3_1_1_2[1]);
yy_3_1_1_2_2 = ((yy)yy_3_1_1_2[2]);
goto yysl_17_11_3;
yyfl_17_11_3_1 : ;
yy_3_2_1_1 = yyv_Operand;
yy_3_2_1_2 = yy_3_2_1_1;
if (yy_3_2_1_2[0] != 5) goto yyfl_17_11_3_2;
yy_3_2_1_2_1 = ((yy)yy_3_2_1_2[1]);
yy_3_2_1_2_2 = ((yy)yy_3_2_1_2[2]);
yyv_UIntValue = yy_3_2_1_2_2;
{
yy yysb = yyb;
yy_3_2_2_1_1_1 = yyv_UIntValue;
yy_3_2_2_1_1_2 = ((yy)0);
if ((intptr_t)yy_3_2_2_1_1_1 < (intptr_t)yy_3_2_2_1_1_2) goto yyfl_17_11_3_2_2_1;
goto yysl_17_11_3_2_2;
yyfl_17_11_3_2_2_1 : ;
yy_3_2_2_2_1_1 = yyv_Position;
Error_IntegerLiteralOutOfRange(yy_3_2_2_2_1_1);
goto yysl_17_11_3_2_2;
yysl_17_11_3_2_2 : ;
yyb = yysb;
}
goto yysl_17_11_3;
yyfl_17_11_3_2 : ;
yy_3_3_1_1 = yyv_Operand;
yy_3_3_1_2 = yy_3_3_1_1;
if (yy_3_3_1_2[0] != 6) goto yyfl_17_11_3_3;
yy_3_3_1_2_1 = ((yy)yy_3_3_1_2[1]);
yy_3_3_1_2_2 = ((yy)yy_3_3_1_2[2]);
goto yysl_17_11_3;
yyfl_17_11_3_3 : ;
goto yyfl_17_11;
yysl_17_11_3 : ;
yyb = yysb;
}
return 1;
yyfl_17_11 : ;
}
return 0;
}
int IsExpressionListSimpleConstant(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_18_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
if (! IsExpressionSimpleConstant(yy_1_1)) goto yyfl_18_1;
yy_2_1 = yyv_Tail;
if (! IsExpressionListSimpleConstant(yy_2_1)) goto yyfl_18_1;
return 1;
yyfl_18_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_18_2;
return 1;
yyfl_18_2 : ;
}
return 0;
}
int CheckSyntaxDefinitions(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_DEFINITION();
/*=== Sweep DEFINITION ===*/
if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Class;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Syntax;
yy yy_0_1_6;
yy yyv_Methods;
yy yy_0_1_7;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy yy_7_2;
yy yy_8_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_19_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yy_0_1_7 = ((yy)yy_0_1[7]);
yyv_Position = yy_0_1_1;
yyv_Class = yy_0_1_4;
yyv_Syntax = yy_0_1_6;
yyv_Methods = yy_0_1_7;
PushEmptySet();
yy_2_1 = yyv_Syntax;
CheckSyntaxMarkDefinitions(yy_2_1);
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Class;
yy_3_3 = yyv_Syntax;
CheckSyntaxStructure(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = yyv_Syntax;
CheckSyntaxRepetitions(yy_4_1);
yy_5_1 = yyv_Syntax;
CheckSyntaxOptionals(yy_5_1);
yy_6_1 = yyv_Syntax;
CheckSyntaxMarks(yy_6_1);
yy_7_1 = yyv_Class;
yy_7_2 = yyv_Methods;
CheckSyntaxMethods(yy_7_1, yy_7_2);
yy_8_1 = yyv_Syntax;
{
extern CheckSyntaxKeywords();
yybroadcast_SYNTAX(yy_8_1, 0, &yynull, CheckSyntaxKeywords);
}
*yyout_1 = yyin_2;
return 1;
yyfl_19_10001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
CheckSyntaxMarkDefinitions(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_20_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxMarkDefinitions(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxMarkDefinitions(yy_2_1);
return;
yyfl_20_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_2_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_20_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
DuplicateSet();
yy_2_1 = yyv_Left;
CheckSyntaxMarkDefinitions(yy_2_1);
ExchangeSet();
yy_4_1 = yyv_Right;
CheckSyntaxMarkDefinitions(yy_4_1);
UnionSet();
return;
yyfl_20_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_20_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Element = yy_0_1_2;
yy_1_1 = yyv_Element;
CheckSyntaxMarkDefinitions(yy_1_1);
return;
yyfl_20_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yyv_Delimiter;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_20_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Element = yy_0_1_2;
yyv_Delimiter = yy_0_1_3;
yy_1_1 = yyv_Element;
CheckSyntaxMarkDefinitions(yy_1_1);
return;
yyfl_20_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Operand;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_20_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Operand = yy_0_1_2;
yy_1_1 = yyv_Operand;
CheckSyntaxMarkDefinitions(yy_1_1);
return;
yyfl_20_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Variable;
yy yy_0_1_2;
yy yyv_Rule;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yyv_Type;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_20_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Variable = yy_0_1_2;
yyv_Rule = yy_0_1_3;
yy_1_1 = yyv_Variable;
CheckSyntaxMarkVariableNotDefined(yy_1_1);
yy_2_1 = yyv_Rule;
ComputeSyntaxRuleType(yy_2_1, &yy_2_2);
yyv_Type = yy_2_2;
yy_3_1 = yyv_Variable;
yy_3_2 = yyv_Type;
CheckSyntaxMarkVariableType(yy_3_1, yy_3_2);
return;
yyfl_20_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Variable;
yy yy_0_1_2;
yy yyv_Constant;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yyv_Type;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_20_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Variable = yy_0_1_2;
yyv_Constant = yy_0_1_3;
yy_1_1 = yyv_Variable;
CheckSyntaxMarkVariableNotDefined(yy_1_1);
yy_2_1 = yyv_Constant;
ComputeSyntaxArgumentType(yy_2_1, &yy_2_2);
yyv_Type = yy_2_2;
yy_3_1 = yyv_Variable;
yy_3_2 = yyv_Type;
CheckSyntaxMarkVariableType(yy_3_1, yy_3_2);
return;
yyfl_20_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_20_8 : ;
}
yyErr(2,567);
}
CheckSyntaxMarkVariableNotDefined(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Variable;
yy yy_0_1;
yy yy_1;
yy yyv_Info;
yy yy_1_1;
yy yyv_Index;
yy yy_2;
yy yy_3_1_1_1;
yy yyv_Position;
yy yy_3_1_2;
yy yyv_Name;
yy yy_3_1_3;
yy yy_3_1_4_1;
yy yy_3_1_4_2;
yy yy_3_2_1_1;
yy_0_1 = yyin_1;
yyv_Variable = yy_0_1;
yy_1 = (yy) yyv_Variable[3];
if (yy_1 == (yy) yyu) yyErr(1,605);
if (yy_1[0] != 5) goto yyfl_21_1;
yy_1_1 = ((yy)yy_1[1]);
yyv_Info = yy_1_1;
yy_2 = (yy) yyv_Info[1];
if (yy_2 == (yy) yyu) yyErr(1,606);
yyv_Index = yy_2;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Index;
if (! IsIndexInSet(yy_3_1_1_1)) goto yyfl_21_1_3_1;
yy_3_1_2 = (yy) yyv_Variable[1];
if (yy_3_1_2 == (yy) yyu) yyErr(1,609);
yyv_Position = yy_3_1_2;
yy_3_1_3 = (yy) yyv_Variable[2];
if (yy_3_1_3 == (yy) yyu) yyErr(1,610);
yyv_Name = yy_3_1_3;
yy_3_1_4_1 = yyv_Position;
yy_3_1_4_2 = yyv_Name;
Error_SyntaxMarkVariableAlreadyDefined(yy_3_1_4_1, yy_3_1_4_2);
goto yysl_21_1_3;
yyfl_21_1_3_1 : ;
yy_3_2_1_1 = yyv_Index;
IncludeIndexInSet(yy_3_2_1_1);
goto yysl_21_1_3;
yysl_21_1_3 : ;
yyb = yysb;
}
return;
yyfl_21_1 : ;
}
{
yy yyb;
yy yyv_Variable;
yy yy_0_1;
yy yy_1;
yy_0_1 = yyin_1;
yyv_Variable = yy_0_1;
yy_1 = (yy) yyv_Variable[3];
if (yy_1 == (yy) yyu) yyErr(1,617);
if (yy_1[0] != 6) goto yyfl_21_2;
return;
yyfl_21_2 : ;
}
yyErr(2,602);
}
CheckSyntaxMarkVariableType(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Variable;
yy yy_0_1;
yy yyv_Type;
yy yy_0_2;
yy yy_1;
yy yyv_Info;
yy yy_1_1;
yy yyv_MarkType;
yy yy_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_2;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_3_1_1;
yy yy_3_3_1_2;
yy yy_3_3_2_1;
yy yy_3_3_2_2;
yy yy_3_4_1_1;
yy yy_3_4_1_2;
yy yy_3_4_2_1;
yy yy_3_4_2_2;
yy yy_3_5_1_1;
yy yy_3_5_1_2;
yy yyv_Position;
yy yy_3_6_1;
yy yyv_Name;
yy yy_3_6_2;
yy yy_3_6_3_1;
yy yy_3_6_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Variable = yy_0_1;
yyv_Type = yy_0_2;
yy_1 = (yy) yyv_Variable[3];
if (yy_1 == (yy) yyu) yyErr(1,622);
if (yy_1[0] != 5) goto yyfl_22_1;
yy_1_1 = ((yy)yy_1[1]);
yyv_Info = yy_1_1;
yy_2 = (yy) yyv_Info[4];
if (yy_2 == (yy) yyu) yyErr(1,623);
yyv_MarkType = yy_2;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_MarkType;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 1) goto yyfl_22_1_3_1;
yy_3_1_2 = yyv_Type;
yyv_Info[4] = (intptr_t) yy_3_1_2;
goto yysl_22_1_3;
yyfl_22_1_3_1 : ;
yy_3_2_1_1 = yyv_MarkType;
yy_3_2_1_2 = yyv_Type;
if (! yyeq_SYNTAXMARKTYPE(yy_3_2_1_1, yy_3_2_1_2)) goto yyfl_22_1_3_2;
goto yysl_22_1_3;
yyfl_22_1_3_2 : ;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_3_3_1_1 = yyv_MarkType;
yy_3_3_1_2 = yyb + 0;
yy_3_3_1_2[0] = 8;
if (! yyeq_SYNTAXMARKTYPE(yy_3_3_1_1, yy_3_3_1_2)) goto yyfl_22_1_3_3;
yy_3_3_2_1 = yyv_Type;
yy_3_3_2_2 = yyb + 1;
yy_3_3_2_2[0] = 9;
if (! yyeq_SYNTAXMARKTYPE(yy_3_3_2_1, yy_3_3_2_2)) goto yyfl_22_1_3_3;
goto yysl_22_1_3;
yyfl_22_1_3_3 : ;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_3_4_1_1 = yyv_MarkType;
yy_3_4_1_2 = yyb + 0;
yy_3_4_1_2[0] = 9;
if (! yyeq_SYNTAXMARKTYPE(yy_3_4_1_1, yy_3_4_1_2)) goto yyfl_22_1_3_4;
yy_3_4_2_1 = yyv_Type;
yy_3_4_2_2 = yyb + 1;
yy_3_4_2_2[0] = 8;
if (! yyeq_SYNTAXMARKTYPE(yy_3_4_2_1, yy_3_4_2_2)) goto yyfl_22_1_3_4;
goto yysl_22_1_3;
yyfl_22_1_3_4 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_3_5_1_1 = yyv_Type;
yy_3_5_1_2 = yyb + 0;
yy_3_5_1_2[0] = 3;
if (! yyeq_SYNTAXMARKTYPE(yy_3_5_1_1, yy_3_5_1_2)) goto yyfl_22_1_3_5;
goto yysl_22_1_3;
yyfl_22_1_3_5 : ;
yy_3_6_1 = (yy) yyv_Variable[1];
if (yy_3_6_1 == (yy) yyu) yyErr(1,640);
yyv_Position = yy_3_6_1;
yy_3_6_2 = (yy) yyv_Variable[2];
if (yy_3_6_2 == (yy) yyu) yyErr(1,641);
yyv_Name = yy_3_6_2;
yy_3_6_3_1 = yyv_Position;
yy_3_6_3_2 = yyv_Name;
Error_SyntaxMarkVariableAlreadyDefinedWithDifferentType(yy_3_6_3_1, yy_3_6_3_2);
goto yysl_22_1_3;
yysl_22_1_3 : ;
yyb = yysb;
}
return;
yyfl_22_1 : ;
}
yyErr(2,619);
}
ComputeSyntaxRuleType(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 6) goto yyfl_23_1;
yy_0_2 = yyb + 0;
yy_0_2[0] = 3;
*yyout_1 = yy_0_2;
return;
yyfl_23_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
if (! QueryClassOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_23_2;
if (yy_1_2[0] != 8) goto yyfl_23_2;
yy_0_2 = yyb + 0;
yy_0_2[0] = 9;
*yyout_1 = yy_0_2;
return;
yyfl_23_2 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
if (! QueryClassOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_23_3;
if (yy_1_2[0] != 9) goto yyfl_23_3;
yy_0_2 = yyb + 0;
yy_0_2[0] = 9;
*yyout_1 = yy_0_2;
return;
yyfl_23_3 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
if (! QueryClassOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_23_4;
if (yy_1_2[0] != 1) goto yyfl_23_4;
yy_0_2 = yyb + 0;
yy_0_2[0] = 8;
*yyout_1 = yy_0_2;
return;
yyfl_23_4 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = ((yy)"Referenced syntax rule bound to non-expression");
Fatal_InternalInconsistency(yy_1_1);
yy_0_2 = yyb + 0;
yy_0_2[0] = 3;
*yyout_1 = yy_0_2;
return;
yyfl_23_5 : ;
}
yyErr(2,645);
}
ComputeSyntaxArgumentType(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_24_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 2;
*yyout_1 = yy_0_2;
return;
yyfl_24_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_24_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 4;
*yyout_1 = yy_0_2;
return;
yyfl_24_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_24_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 4;
*yyout_1 = yy_0_2;
return;
yyfl_24_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_24_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 5;
*yyout_1 = yy_0_2;
return;
yyfl_24_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_24_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 6;
*yyout_1 = yy_0_2;
return;
yyfl_24_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_24_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 7;
*yyout_1 = yy_0_2;
return;
yyfl_24_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_0_2;
yy yy_1_1;
yy yyv_Type;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_24_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
if (! QueryTypeOfSyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_24_7;
yyv_Type = yy_1_2;
yy_0_2 = yyv_Type;
*yyout_1 = yy_0_2;
return;
yyfl_24_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_1_1;
yy yyv_Type;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_24_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
if (! QueryTypeOfSyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_24_8;
yyv_Type = yy_1_2;
yy_0_2 = yyv_Type;
*yyout_1 = yy_0_2;
return;
yyfl_24_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 3;
*yyout_1 = yy_0_2;
return;
yyfl_24_9 : ;
}
yyErr(2,662);
}
CheckSyntaxStructure(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Class;
yy yy_0_2;
yy yyv_Syntax;
yy yy_0_3;
yy yy_1_1;
yy yyv_Prefix;
yy yy_1_2;
yy yyv_Suffix;
yy yy_1_3;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Class = yy_0_2;
yyv_Syntax = yy_0_3;
yy_1_1 = yyv_Syntax;
ComputeSyntaxPrefixAndSuffix(yy_1_1, &yy_1_2, &yy_1_3);
yyv_Prefix = yy_1_2;
yyv_Suffix = yy_1_3;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_Class;
yy_2_3 = yyv_Prefix;
CheckPrefixOfSyntaxStructure(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Class;
yy_3_3 = yyv_Suffix;
CheckSuffixOfSyntaxStructure(yy_3_1, yy_3_2, yy_3_3);
return;
}
}
CheckPrefixOfSyntaxStructure(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_3[0] != 2) goto yyfl_26_1;
return;
yyfl_26_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Term;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 4) goto yyfl_26_2;
yyv_Term = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Term;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_26_2_1_1;
yy_1_1_2_1 = yyv_Position;
Error_ExpressionSyntaxCannotStartWithExpression(yy_1_1_2_1);
goto yysl_26_2_1;
yyfl_26_2_1_1 : ;
goto yysl_26_2_1;
yysl_26_2_1 : ;
yyb = yysb;
}
return;
yyfl_26_2 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Term;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 5) goto yyfl_26_3;
yyv_Term = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Term;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_26_3_1_1;
yy_1_1_2_1 = yyv_Position;
Error_PrefixSyntaxCannotStartWithExpression(yy_1_1_2_1);
goto yysl_26_3_1;
yyfl_26_3_1_1 : ;
goto yysl_26_3_1;
yysl_26_3_1 : ;
yyb = yysb;
}
return;
yyfl_26_3 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Term;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 6) goto yyfl_26_4;
yyv_Term = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Term;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_26_4_1_1;
goto yysl_26_4_1;
yyfl_26_4_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_PostfixSyntaxMustStartWithExpression(yy_1_2_1_1);
goto yysl_26_4_1;
yysl_26_4_1 : ;
yyb = yysb;
}
return;
yyfl_26_4 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Term;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 7) goto yyfl_26_5;
yyv_Term = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Term;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_26_5_1_1;
goto yysl_26_5_1;
yyfl_26_5_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_BinarySyntaxMustStartWithExpression(yy_1_2_1_1);
goto yysl_26_5_1;
yysl_26_5_1 : ;
yyb = yysb;
}
return;
yyfl_26_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
return;
yyfl_26_6 : ;
}
yyErr(2,694);
}
CheckSuffixOfSyntaxStructure(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_3[0] != 2) goto yyfl_27_1;
return;
yyfl_27_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Term;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 4) goto yyfl_27_2;
yyv_Term = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Term;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_27_2_1_1;
yy_1_1_2_1 = yyv_Position;
Error_ExpressionSyntaxCannotFinishWithExpression(yy_1_1_2_1);
goto yysl_27_2_1;
yyfl_27_2_1_1 : ;
goto yysl_27_2_1;
yysl_27_2_1 : ;
yyb = yysb;
}
return;
yyfl_27_2 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Term;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 5) goto yyfl_27_3;
yyv_Term = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Term;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_27_3_1_1;
goto yysl_27_3_1;
yyfl_27_3_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_PrefixSyntaxMustFinishWithExpression(yy_1_2_1_1);
goto yysl_27_3_1;
yysl_27_3_1 : ;
yyb = yysb;
}
return;
yyfl_27_3 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Term;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 6) goto yyfl_27_4;
yyv_Term = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Term;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_27_4_1_1;
yy_1_1_2_1 = yyv_Position;
Error_PostfixSyntaxCannotFinishWithExpression(yy_1_1_2_1);
goto yysl_27_4_1;
yyfl_27_4_1_1 : ;
goto yysl_27_4_1;
yysl_27_4_1 : ;
yyb = yysb;
}
return;
yyfl_27_4 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Term;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 7) goto yyfl_27_5;
yyv_Term = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Term;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_27_5_1_1;
goto yysl_27_5_1;
yyfl_27_5_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_BinarySyntaxMustFinishWithExpression(yy_1_2_1_1);
goto yysl_27_5_1;
yysl_27_5_1 : ;
yyb = yysb;
}
return;
yyfl_27_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
return;
yyfl_27_6 : ;
}
yyErr(2,728);
}
CheckSyntaxRepetitions(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_28_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxRepetitions(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxRepetitions(yy_2_1);
return;
yyfl_28_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_28_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxRepetitions(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxRepetitions(yy_2_1);
return;
yyfl_28_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_28_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Element = yy_0_1_2;
yy_1_1 = yyv_Element;
CheckSyntaxRepetitions(yy_1_1);
return;
yyfl_28_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yyv_Delimiter;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1_1_1;
yy yy_3_1_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_28_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Element = yy_0_1_2;
yyv_Delimiter = yy_0_1_3;
yy_1_1 = yyv_Element;
CheckSyntaxRepetitions(yy_1_1);
yy_2_1 = yyv_Delimiter;
CheckSyntaxOnlyKeywordsInDelimiter(yy_2_1);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Element;
if (! SyntaxIsNullable(yy_3_1_1_1)) goto yyfl_28_4_3_1;
yy_3_1_2_1 = yyv_Position;
Error_ElementSyntaxCannotBeNullable(yy_3_1_2_1);
goto yysl_28_4_3;
yyfl_28_4_3_1 : ;
goto yysl_28_4_3;
yysl_28_4_3 : ;
yyb = yysb;
}
return;
yyfl_28_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Operand;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_28_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Operand = yy_0_1_2;
yy_1_1 = yyv_Operand;
CheckSyntaxRepetitions(yy_1_1);
return;
yyfl_28_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_28_6 : ;
}
yyErr(2,764);
}
CheckSyntaxOnlyKeywordsInDelimiter(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_29_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxOnlyKeywordsInDelimiter(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxOnlyKeywordsInDelimiter(yy_2_1);
return;
yyfl_29_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_29_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxOnlyKeywordsInDelimiter(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxOnlyKeywordsInDelimiter(yy_2_1);
return;
yyfl_29_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Operand;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_29_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Operand = yy_0_1_2;
yy_1_1 = yyv_Operand;
CheckSyntaxOnlyKeywordsInDelimiter(yy_1_1);
return;
yyfl_29_3 : ;
}
{
yy yyb;
yy yyv_Syntax;
yy yy_0_1;
yy yyv_Position;
yy yy_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Syntax = yy_0_1;
yy_1 = (yy) yyv_Syntax[1];
if (yy_1 == (yy) yyu) yyErr(1,805);
yyv_Position = yy_1;
yy_2_1 = yyv_Position;
Error_OnlyKeywordsAllowedInDelimiterSyntax(yy_2_1);
return;
yyfl_29_4 : ;
}
yyErr(2,791);
}
CheckSyntaxOptionals(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_30_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxOptionals(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxOptionals(yy_2_1);
return;
yyfl_30_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_30_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxOptionals(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxOptionals(yy_2_1);
return;
yyfl_30_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_30_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Element = yy_0_1_2;
yy_1_1 = yyv_Element;
CheckSyntaxOptionals(yy_1_1);
return;
yyfl_30_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yyv_Delimiter;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_30_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Element = yy_0_1_2;
yyv_Delimiter = yy_0_1_3;
yy_1_1 = yyv_Element;
CheckSyntaxOptionals(yy_1_1);
yy_2_1 = yyv_Delimiter;
CheckSyntaxOptionals(yy_2_1);
return;
yyfl_30_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Operand;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_Prefix;
yy yy_1_2;
yy yyv_Suffix;
yy yy_1_3;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_2_1_2_2;
yy yy_2_1_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_30_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Operand = yy_0_1_2;
yy_1_1 = yyv_Operand;
ComputeSyntaxPrefixAndSuffix(yy_1_1, &yy_1_2, &yy_1_3);
yyv_Prefix = yy_1_2;
yyv_Suffix = yy_1_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_1_1_1 = yyv_Prefix;
yy_2_1_1_2 = yyv_Suffix;
if (! yyeq_SYNTAXTERM(yy_2_1_1_1, yy_2_1_1_2)) goto yyfl_30_5_2_1;
yy_2_1_2_1 = yyv_Prefix;
yy_2_1_2_2 = yyb + 0;
yy_2_1_2_2[0] = 3;
if (! yyeq_SYNTAXTERM(yy_2_1_2_1, yy_2_1_2_2)) goto yyfl_30_5_2_1;
yy_2_1_3_1 = yyv_Position;
Error_OptionalSyntaxCannotContainOnlyMarks(yy_2_1_3_1);
goto yysl_30_5_2;
yyfl_30_5_2_1 : ;
goto yysl_30_5_2;
yysl_30_5_2 : ;
yyb = yysb;
}
return;
yyfl_30_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_30_6 : ;
}
yyErr(2,810);
}
CheckSyntaxMarks(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_31_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxMarks(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxMarks(yy_2_1);
return;
yyfl_31_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_31_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckSyntaxMarks(yy_1_1);
yy_2_1 = yyv_Right;
CheckSyntaxMarks(yy_2_1);
return;
yyfl_31_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_31_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Element = yy_0_1_2;
yy_1_1 = yyv_Element;
CheckSyntaxMarks(yy_1_1);
return;
yyfl_31_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yyv_Delimiter;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_31_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Element = yy_0_1_2;
yyv_Delimiter = yy_0_1_3;
yy_1_1 = yyv_Element;
CheckSyntaxMarks(yy_1_1);
yy_2_1 = yyv_Delimiter;
CheckSyntaxMarks(yy_2_1);
return;
yyfl_31_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Operand;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_31_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Operand = yy_0_1_2;
yy_1_1 = yyv_Operand;
CheckSyntaxMarks(yy_1_1);
return;
yyfl_31_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Variable;
yy yy_0_1_2;
yy yyv_Value;
yy yy_0_1_3;
yy yy_1_1_1_1_1_1;
yy yy_1_1_1_1_1_2;
yy yy_1_1_1_1_1_2_1;
yy yy_1_1_1_1_1_2_2;
yy yy_1_1_1_2_1_1;
yy yy_1_1_1_2_1_2;
yy yy_1_1_1_2_1_2_1;
yy yy_1_1_1_2_1_2_2;
yy yy_1_1_1_2_1_2_3;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_31_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Variable = yy_0_1_2;
yyv_Value = yy_0_1_3;
{
yy yysb = yyb;
{
yy yysb = yyb;
yy_1_1_1_1_1_1 = yyv_Value;
yy_1_1_1_1_1_2 = yy_1_1_1_1_1_1;
if (yy_1_1_1_1_1_2[0] != 7) goto yyfl_31_6_1_1_1_1;
yy_1_1_1_1_1_2_1 = ((yy)yy_1_1_1_1_1_2[1]);
yy_1_1_1_1_1_2_2 = ((yy)yy_1_1_1_1_1_2[2]);
goto yysl_31_6_1_1_1;
yyfl_31_6_1_1_1_1 : ;
yy_1_1_1_2_1_1 = yyv_Value;
yy_1_1_1_2_1_2 = yy_1_1_1_2_1_1;
if (yy_1_1_1_2_1_2[0] != 8) goto yyfl_31_6_1_1_1_2;
yy_1_1_1_2_1_2_1 = ((yy)yy_1_1_1_2_1_2[1]);
yy_1_1_1_2_1_2_2 = ((yy)yy_1_1_1_2_1_2[2]);
yy_1_1_1_2_1_2_3 = ((yy)yy_1_1_1_2_1_2[3]);
goto yysl_31_6_1_1_1;
yyfl_31_6_1_1_1_2 : ;
goto yyfl_31_6_1_1;
yysl_31_6_1_1_1 : ;
yyb = yysb;
}
yy_1_1_2_1 = yyv_Position;
Error_SyntaxMarksMustBeConstant(yy_1_1_2_1);
goto yysl_31_6_1;
yyfl_31_6_1_1 : ;
goto yysl_31_6_1;
yysl_31_6_1 : ;
yyb = yysb;
}
return;
yyfl_31_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_31_7 : ;
}
yyErr(2,840);
}
CheckSyntaxMethods(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Class;
yy yy_0_1;
yy yy_0_2;
yy yyv_Head;
yy yy_0_2_1;
yy yyv_Tail;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Class = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_32_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Head = yy_0_2_1;
yyv_Tail = yy_0_2_2;
yy_1_1 = yyv_Class;
yy_1_2 = yyv_Head;
CheckSyntaxMethod(yy_1_1, yy_1_2);
yy_2_1 = yyv_Class;
yy_2_2 = yyv_Tail;
CheckSyntaxMethods(yy_2_1, yy_2_2);
return;
yyfl_32_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 2) goto yyfl_32_2;
return;
yyfl_32_2 : ;
}
yyErr(2,875);
}
CheckSyntaxMethod(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Class;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Name;
yy yy_0_2_2;
yy yyv_Arguments;
yy yy_0_2_3;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yy_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yyv_Parameters;
yy yy_2_3_1;
yy yyv_ReturnType;
yy yy_2_3_2;
yy yyv_Access;
yy yy_3;
yy yy_4_1_1_1;
yy yy_4_1_1_2;
yy yy_4_1_2_1;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_6_1;
yy yy_6_2;
yy yy_6_3;
yy yy_7_1_1_1;
yy yy_7_1_2_1;
yy yy_7_1_2_2;
yy yy_7_2_1_1;
yy yy_7_2_1_2;
yy yy_8_1;
yy yy_8_2;
yy yy_8_3;
yy yy_8_4;
yy yy_8_5;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Class = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_33_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yyv_Position = yy_0_2_1;
yyv_Name = yy_0_2_2;
yyv_Arguments = yy_0_2_3;
yy_1_1 = yyv_Name;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_33_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[7];
if (yy_2 == (yy) yyu) yyErr(1,888);
if (yy_2[0] != 8) goto yyfl_33_1;
yy_2_1 = ((yy)yy_2[1]);
yy_2_2 = ((yy)yy_2[2]);
yy_2_3 = ((yy)yy_2[3]);
if (yy_2_3[0] != 1) goto yyfl_33_1;
yy_2_3_1 = ((yy)yy_2_3[1]);
yy_2_3_2 = ((yy)yy_2_3[2]);
yyv_Parameters = yy_2_3_1;
yyv_ReturnType = yy_2_3_2;
yy_3 = (yy) yyv_Info[4];
if (yy_3 == (yy) yyu) yyErr(1,889);
yyv_Access = yy_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_4_1_1_1 = yyv_Access;
yy_4_1_1_2 = yyb + 0;
yy_4_1_1_2[0] = 2;
if (yyeq_ACCESS(yy_4_1_1_1, yy_4_1_1_2)) goto yyfl_33_1_4_1;
yy_4_1_2_1 = yyv_Position;
Error_HandlersBoundToSyntaxMustBePublic(yy_4_1_2_1);
goto yysl_33_1_4;
yyfl_33_1_4_1 : ;
goto yysl_33_1_4;
yysl_33_1_4 : ;
yyb = yysb;
}
yy_5_1 = yyv_Position;
yy_5_2 = yyv_Class;
yy_5_3 = yyv_ReturnType;
CheckSyntaxMethodReturnType(yy_5_1, yy_5_2, yy_5_3);
yy_6_1 = yyv_Position;
yy_6_2 = yyv_Parameters;
yy_6_3 = yyv_Arguments;
CheckSyntaxMethodArguments(yy_6_1, yy_6_2, yy_6_3);
{
yy yysb = yyb;
yy_7_1_1_1 = yyv_Arguments;
if (! IsLValueSyntaxMethodBinding(yy_7_1_1_1)) goto yyfl_33_1_7_1;
yy_7_1_2_1 = yyv_Parameters;
yy_7_1_2_2 = yyv_Arguments;
ComputeLModeOfSyntaxMethodArguments(yy_7_1_2_1, yy_7_1_2_2);
goto yysl_33_1_7;
yyfl_33_1_7_1 : ;
yy_7_2_1_1 = yyv_Parameters;
yy_7_2_1_2 = yyv_Arguments;
ComputeRModeOfSyntaxMethodArguments(yy_7_2_1_1, yy_7_2_1_2);
goto yysl_33_1_7;
yysl_33_1_7 : ;
yyb = yysb;
}
yy_8_1 = yyv_Position;
yy_8_2 = yyv_Class;
yy_8_3 = yyv_Parameters;
yy_8_4 = yyv_ReturnType;
yy_8_5 = yyv_Arguments;
CheckSyntaxMethodCanBeBound(yy_8_1, yy_8_2, yy_8_3, yy_8_4, yy_8_5);
return;
yyfl_33_1 : ;
}
{
yy yyb;
yy yyv_Class;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Name;
yy yy_0_2_2;
yy yyv_Arguments;
yy yy_0_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Class = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_33_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yyv_Position = yy_0_2_1;
yyv_Name = yy_0_2_2;
yyv_Arguments = yy_0_2_3;
return;
yyfl_33_2 : ;
}
yyErr(2,884);
}
CheckSyntaxMethodCanBeBound(yyin_1, yyin_2, yyin_3, yyin_4, yyin_5)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy yyin_5;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Parameters;
yy yy_0_3;
yy yyv_ReturnType;
yy yy_0_4;
yy yyv_Arguments;
yy yy_0_5;
yy yy_1_1_1_1;
yy yy_1_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_1_3;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_34_1;
yyv_Parameters = yy_0_3;
yyv_ReturnType = yy_0_4;
yyv_Arguments = yy_0_5;
{
yy yysb = yyb;
yy_1_1_1_1_1 = ((yy)1);
yy_1_1_1_1 = (yy)(-((intptr_t)yy_1_1_1_1_1));
yy_1_1_1_2 = yyv_Parameters;
yy_1_1_1_3 = yyv_Arguments;
if (! CheckEquivalentSyntaxMethodArguments(yy_1_1_1_1, yy_1_1_1_2, yy_1_1_1_3)) goto yyfl_34_1_1_1;
goto yysl_34_1_1;
yyfl_34_1_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_SyntaxMethodArgumentsMustMatch(yy_1_2_1_1);
goto yysl_34_1_1;
yysl_34_1_1 : ;
yyb = yysb;
}
return;
yyfl_34_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Parameters;
yy yy_0_3;
yy yyv_ReturnType;
yy yy_0_4;
yy yyv_Arguments;
yy yy_0_5;
yy yy_1_1_1_1;
yy yy_1_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_1_3;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_34_2;
yyv_Parameters = yy_0_3;
yyv_ReturnType = yy_0_4;
yyv_Arguments = yy_0_5;
{
yy yysb = yyb;
yy_1_1_1_1_1 = ((yy)1);
yy_1_1_1_1 = (yy)(-((intptr_t)yy_1_1_1_1_1));
yy_1_1_1_2 = yyv_Parameters;
yy_1_1_1_3 = yyv_Arguments;
if (! CheckEquivalentSyntaxMethodArguments(yy_1_1_1_1, yy_1_1_1_2, yy_1_1_1_3)) goto yyfl_34_2_1_1;
goto yysl_34_2_1;
yyfl_34_2_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_SyntaxMethodArgumentsMustMatch(yy_1_2_1_1);
goto yysl_34_2_1;
yysl_34_2_1 : ;
yyb = yysb;
}
return;
yyfl_34_2 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Class;
yy yy_0_2;
yy yyv_Parameters;
yy yy_0_3;
yy yyv_ReturnType;
yy yy_0_4;
yy yyv_Arguments;
yy yy_0_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_2_1;
yy yy_1_3_1_1;
yy yy_1_3_1_2;
yy yy_1_3_1_2_1;
yy yy_1_4_1_1;
yy yy_1_4_1_2;
yy yy_1_4_1_2_1;
yy yy_1_4_1_2_2;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1_1_1;
yy yy_2_1_2_1_1_1_1;
yy yy_2_1_2_1_1_2;
yy yy_2_1_2_1_1_3;
yy yy_2_1_2_2_1_1;
yy yy_2_2_1_1;
yy yy_2_2_1_2;
yy yy_2_2_2_1_1_1;
yy yy_2_2_2_1_1_1_1;
yy yy_2_2_2_1_1_2;
yy yy_2_2_2_1_1_3;
yy yy_2_2_2_2_1_1;
yy yy_2_3_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Position = yy_0_1;
yyv_Class = yy_0_2;
yyv_Parameters = yy_0_3;
yyv_ReturnType = yy_0_4;
yyv_Arguments = yy_0_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Class;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_34_3_1_1;
goto yysl_34_3_1;
yyfl_34_3_1_1 : ;
yy_1_2_1_1 = yyv_Class;
yy_1_2_1_2 = yy_1_2_1_1;
if (yy_1_2_1_2[0] != 5) goto yyfl_34_3_1_2;
yy_1_2_1_2_1 = ((yy)yy_1_2_1_2[1]);
goto yysl_34_3_1;
yyfl_34_3_1_2 : ;
yy_1_3_1_1 = yyv_Class;
yy_1_3_1_2 = yy_1_3_1_1;
if (yy_1_3_1_2[0] != 6) goto yyfl_34_3_1_3;
yy_1_3_1_2_1 = ((yy)yy_1_3_1_2[1]);
goto yysl_34_3_1;
yyfl_34_3_1_3 : ;
yy_1_4_1_1 = yyv_Class;
yy_1_4_1_2 = yy_1_4_1_1;
if (yy_1_4_1_2[0] != 7) goto yyfl_34_3_1_4;
yy_1_4_1_2_1 = ((yy)yy_1_4_1_2[1]);
yy_1_4_1_2_2 = ((yy)yy_1_4_1_2[2]);
goto yysl_34_3_1;
yyfl_34_3_1_4 : ;
goto yyfl_34_3;
yysl_34_3_1 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_1_1_1 = yyv_Arguments;
yy_2_1_1_2 = yyb + 0;
yy_2_1_1_2[0] = 10;
if (! IsFirstArgumentOfClass(yy_2_1_1_1, yy_2_1_1_2)) goto yyfl_34_3_2_1;
{
yy yysb = yyb;
yy_2_1_2_1_1_1_1 = ((yy)1);
yy_2_1_2_1_1_1 = (yy)(-((intptr_t)yy_2_1_2_1_1_1_1));
yy_2_1_2_1_1_2 = yyv_Parameters;
yy_2_1_2_1_1_3 = yyv_Arguments;
if (! CheckEquivalentSyntaxMethodArguments(yy_2_1_2_1_1_1, yy_2_1_2_1_1_2, yy_2_1_2_1_1_3)) goto yyfl_34_3_2_1_2_1;
goto yysl_34_3_2_1_2;
yyfl_34_3_2_1_2_1 : ;
yy_2_1_2_2_1_1 = yyv_Position;
Error_LSyntaxMethodArgumentsDontConform(yy_2_1_2_2_1_1);
goto yysl_34_3_2_1_2;
yysl_34_3_2_1_2 : ;
yyb = yysb;
}
goto yysl_34_3_2;
yyfl_34_3_2_1 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_2_1_1 = yyv_Arguments;
yy_2_2_1_2 = yyb + 0;
yy_2_2_1_2[0] = 11;
if (! IsLastArgumentOfClass(yy_2_2_1_1, yy_2_2_1_2)) goto yyfl_34_3_2_2;
{
yy yysb = yyb;
yy_2_2_2_1_1_1_1 = ((yy)1);
yy_2_2_2_1_1_1 = (yy)(-((intptr_t)yy_2_2_2_1_1_1_1));
yy_2_2_2_1_1_2 = yyv_Parameters;
yy_2_2_2_1_1_3 = yyv_Arguments;
if (! CheckEquivalentSyntaxMethodArguments(yy_2_2_2_1_1_1, yy_2_2_2_1_1_2, yy_2_2_2_1_1_3)) goto yyfl_34_3_2_2_2_1;
goto yysl_34_3_2_2_2;
yyfl_34_3_2_2_2_1 : ;
yy_2_2_2_2_1_1 = yyv_Position;
Error_RSyntaxMethodArgumentsDontConform(yy_2_2_2_2_1_1);
goto yysl_34_3_2_2_2;
yysl_34_3_2_2_2 : ;
yyb = yysb;
}
goto yysl_34_3_2;
yyfl_34_3_2_2 : ;
yy_2_3_1_1 = yyv_Position;
Error_ExpressionSyntaxMethodArgumentsDontConform(yy_2_3_1_1);
goto yysl_34_3_2;
yysl_34_3_2 : ;
yyb = yysb;
}
return;
yyfl_34_3 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Parameters;
yy yy_0_3;
yy yyv_ReturnType;
yy yy_0_4;
yy yyv_Arguments;
yy yy_0_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_3_1;
yy yy_1_1_3_1_1;
yy yy_1_1_3_2;
yy yy_1_1_3_3;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_34_4;
yyv_Parameters = yy_0_3;
yyv_ReturnType = yy_0_4;
yyv_Arguments = yy_0_5;
{
yy yysb = yyb;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Arguments;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 13;
if (! IsFirstArgumentOfClass(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_34_4_1_1;
yy_1_1_2_1 = yyv_Arguments;
yy_1_1_2_2 = yyb + 1;
yy_1_1_2_2[0] = 14;
if (! IsLastArgumentOfClass(yy_1_1_2_1, yy_1_1_2_2)) goto yyfl_34_4_1_1;
yy_1_1_3_1_1 = ((yy)1);
yy_1_1_3_1 = (yy)(-((intptr_t)yy_1_1_3_1_1));
yy_1_1_3_2 = yyv_Parameters;
yy_1_1_3_3 = yyv_Arguments;
if (! CheckEquivalentSyntaxMethodArguments(yy_1_1_3_1, yy_1_1_3_2, yy_1_1_3_3)) goto yyfl_34_4_1_1;
goto yysl_34_4_1;
yyfl_34_4_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_IterateSyntaxMethodArgumentsDontConform(yy_1_2_1_1);
goto yysl_34_4_1;
yysl_34_4_1 : ;
yyb = yysb;
}
return;
yyfl_34_4 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Class;
yy yy_0_2;
yy yyv_Parameters;
yy yy_0_3;
yy yyv_ReturnType;
yy yy_0_4;
yy yyv_Arguments;
yy yy_0_5;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Position = yy_0_1;
yyv_Class = yy_0_2;
yyv_Parameters = yy_0_3;
yyv_ReturnType = yy_0_4;
yyv_Arguments = yy_0_5;
yy_1_1 = yyv_Class;
yyPrint_SYNTAXCLASS(yy_1_1);
yyEndPrint();
yy_2_1 = ((yy)0);
yy_2_2 = ((yy)1);
if ((intptr_t)yy_2_1 != (intptr_t)yy_2_2) goto yyfl_34_5;
return;
yyfl_34_5 : ;
}
yyErr(2,907);
}
int IsFirstArgumentOfClass(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yyv_Id;
yy yy_0_1_1_2;
yy yyv_Tail;
yy yy_0_1_2;
yy yyv_WantedClass;
yy yy_0_2;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yyv_Class;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_35_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 7) goto yyfl_35_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yyv_Id = yy_0_1_1_2;
yyv_Tail = yy_0_1_2;
yyv_WantedClass = yy_0_2;
yy_1_1 = yyv_Id;
if (! QuerySyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_35_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[4];
if (yy_2 == (yy) yyu) yyErr(1,969);
yyv_Class = yy_2;
yy_3_1 = yyv_Class;
yy_3_2 = yyv_WantedClass;
if (! yyeq_SYNTAXMARKTYPE(yy_3_1, yy_3_2)) goto yyfl_35_1;
return 1;
yyfl_35_1 : ;
}
return 0;
}
int IsLastArgumentOfClass(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yyv_Id;
yy yy_0_1_1_2;
yy yy_0_1_2;
yy yyv_WantedClass;
yy yy_0_2;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yyv_Class;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_36_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 7) goto yyfl_36_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yyv_Id = yy_0_1_1_2;
if (yy_0_1_2[0] != 2) goto yyfl_36_1;
yyv_WantedClass = yy_0_2;
yy_1_1 = yyv_Id;
if (! QuerySyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_36_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[4];
if (yy_2 == (yy) yyu) yyErr(1,976);
yyv_Class = yy_2;
yy_3_1 = yyv_Class;
yy_3_2 = yyv_WantedClass;
if (! yyeq_SYNTAXMARKTYPE(yy_3_1, yy_3_2)) goto yyfl_36_1;
return 1;
yyfl_36_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yyv_Class;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_36_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yyv_Class = yy_0_2;
yy_1_1 = yyv_Tail;
yy_1_2 = yyv_Class;
if (! IsLastArgumentOfClass(yy_1_1, yy_1_2)) goto yyfl_36_2;
return 1;
yyfl_36_2 : ;
}
return 0;
}
int CheckEquivalentSyntaxMethodArguments(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Index;
yy yy_0_1;
yy yy_0_2;
yy yyv_ParamHead;
yy yy_0_2_1;
yy yyv_ParamTail;
yy yy_0_2_2;
yy yy_0_3;
yy yy_0_3_1;
yy yy_0_3_1_1;
yy yyv_Id;
yy yy_0_3_1_2;
yy yyv_ArgTail;
yy yy_0_3_2;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yy_2_1_1_1_1;
yy yy_2_1_1_2_1;
yy yy_2_1_1_3_1;
yy yy_2_1_1_4_1;
yy yy_2_1_2_1;
yy yyv_VarIndex;
yy yy_2_1_2_2;
yy yy_2_2_1;
yy yy_2_2_2_1;
yy yy_2_2_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Index = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_37_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_ParamHead = yy_0_2_1;
yyv_ParamTail = yy_0_2_2;
if (yy_0_3[0] != 1) goto yyfl_37_1;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
if (yy_0_3_1[0] != 7) goto yyfl_37_1;
yy_0_3_1_1 = ((yy)yy_0_3_1[1]);
yy_0_3_1_2 = ((yy)yy_0_3_1[2]);
yyv_Id = yy_0_3_1_2;
yyv_ArgTail = yy_0_3_2;
yy_1_1 = yyv_Id;
if (! QuerySyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_37_1;
yyv_Info = yy_1_2;
{
yy yysb = yyb;
{
yy yysb = yyb;
yy_2_1_1_1_1 = (yy) yyv_Info[4];
if (yy_2_1_1_1_1 == (yy) yyu) yyErr(1,990);
if (yy_2_1_1_1_1[0] != 10) goto yyfl_37_1_2_1_1_1;
goto yysl_37_1_2_1_1;
yyfl_37_1_2_1_1_1 : ;
yy_2_1_1_2_1 = (yy) yyv_Info[4];
if (yy_2_1_1_2_1 == (yy) yyu) yyErr(1,992);
if (yy_2_1_1_2_1[0] != 11) goto yyfl_37_1_2_1_1_2;
goto yysl_37_1_2_1_1;
yyfl_37_1_2_1_1_2 : ;
yy_2_1_1_3_1 = (yy) yyv_Info[4];
if (yy_2_1_1_3_1 == (yy) yyu) yyErr(1,994);
if (yy_2_1_1_3_1[0] != 13) goto yyfl_37_1_2_1_1_3;
goto yysl_37_1_2_1_1;
yyfl_37_1_2_1_1_3 : ;
yy_2_1_1_4_1 = (yy) yyv_Info[4];
if (yy_2_1_1_4_1 == (yy) yyu) yyErr(1,996);
if (yy_2_1_1_4_1[0] != 14) goto yyfl_37_1_2_1_1_4;
goto yysl_37_1_2_1_1;
yyfl_37_1_2_1_1_4 : ;
goto yyfl_37_1_2_1;
yysl_37_1_2_1_1 : ;
yyb = yysb;
}
yy_2_1_2_1 = yyv_Index;
yy_2_1_2_2 = yy_2_1_2_1;
yyv_VarIndex = yy_2_1_2_2;
goto yysl_37_1_2;
yyfl_37_1_2_1 : ;
yy_2_2_1 = (yy) yyv_Info[1];
if (yy_2_2_1 == (yy) yyu) yyErr(1,1000);
yyv_VarIndex = yy_2_2_1;
yy_2_2_2_1 = yyv_VarIndex;
yy_2_2_2_2 = yyv_Index;
if ((intptr_t)yy_2_2_2_1 <= (intptr_t)yy_2_2_2_2) goto yyfl_37_1_2_2;
goto yysl_37_1_2;
yyfl_37_1_2_2 : ;
goto yyfl_37_1;
yysl_37_1_2 : ;
yyb = yysb;
}
yy_3_1 = yyv_VarIndex;
yy_3_2 = yyv_ParamTail;
yy_3_3 = yyv_ArgTail;
if (! CheckEquivalentSyntaxMethodArguments(yy_3_1, yy_3_2, yy_3_3)) goto yyfl_37_1;
return 1;
yyfl_37_1 : ;
}
{
yy yyb;
yy yyv_Index;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Index = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_37_2;
if (yy_0_3[0] != 2) goto yyfl_37_2;
return 1;
yyfl_37_2 : ;
}
return 0;
}
int IsLValueSyntaxMethodBinding(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yyv_Name;
yy yy_0_1_1_2;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yy_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_38_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 7) goto yyfl_38_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yyv_Name = yy_0_1_1_2;
yy_1_1 = yyv_Name;
if (! QuerySyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_38_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[4];
if (yy_2 == (yy) yyu) yyErr(1,1013);
if (yy_2[0] != 10) goto yyfl_38_1;
return 1;
yyfl_38_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Rest;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_38_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Rest = yy_0_1_2;
yy_1_1 = yyv_Rest;
if (! IsLValueSyntaxMethodBinding(yy_1_1)) goto yyfl_38_2;
return 1;
yyfl_38_2 : ;
}
return 0;
}
CheckSyntaxMethodReturnType(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Type;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_1_2_1;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_2_1;
yy yyv_Id;
yy yy_1_2_1_2_2;
yy yy_1_2_2_1;
yy yyv_Name;
yy yy_1_2_2_2;
yy yy_1_2_3_1;
yy yy_1_2_3_2;
yy yy_1_3_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_39_1;
yyv_Type = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Type;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 9) goto yyfl_39_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
goto yysl_39_1_1;
yyfl_39_1_1_1 : ;
yy_1_2_1_1 = yyv_Type;
yy_1_2_1_2 = yy_1_2_1_1;
if (yy_1_2_1_2[0] != 3) goto yyfl_39_1_1_2;
yy_1_2_1_2_1 = ((yy)yy_1_2_1_2[1]);
yy_1_2_1_2_2 = ((yy)yy_1_2_1_2[2]);
yyv_Id = yy_1_2_1_2_2;
yy_1_2_2_1 = yyv_Id;
GetQualifiedName(yy_1_2_2_1, &yy_1_2_2_2);
yyv_Name = yy_1_2_2_2;
yy_1_2_3_1 = yyv_Name;
yy_1_2_3_2 = ((yy)"CBool");
if (! IsNameEqualToString(yy_1_2_3_1, yy_1_2_3_2)) goto yyfl_39_1_1_2;
goto yysl_39_1_1;
yyfl_39_1_1_2 : ;
yy_1_3_1_1 = yyv_Position;
Error_IterateSyntaxMethodMustReturnBoolean(yy_1_3_1_1);
goto yysl_39_1_1;
yysl_39_1_1 : ;
yyb = yysb;
}
return;
yyfl_39_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_39_2;
return;
yyfl_39_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy yy_0_3_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_3[0] != 2) goto yyfl_39_3;
yy_0_3_1 = ((yy)yy_0_3[1]);
return;
yyfl_39_3 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yy_1_1 = yyv_Position;
Error_HandlersBoundToSyntaxMustNotReturnAValue(yy_1_1);
return;
yyfl_39_4 : ;
}
yyErr(2,1018);
}
CheckSyntaxMethodArguments(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_2[0] != 2) goto yyfl_40_1;
if (yy_0_3[0] != 2) goto yyfl_40_1;
return;
yyfl_40_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_40_2;
yy_1_1 = yyv_Position;
Error_TooManyArgumentsPassedToHandler(yy_1_1);
return;
yyfl_40_2 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_3[0] != 2) goto yyfl_40_3;
yy_1_1 = yyv_Position;
Error_TooFewArgumentsPassedToHandler(yy_1_1);
return;
yyfl_40_3 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Param;
yy yy_0_2_1;
yy yyv_ParamRest;
yy yy_0_2_2;
yy yy_0_3;
yy yyv_Arg;
yy yy_0_3_1;
yy yyv_ArgRest;
yy yy_0_3_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_40_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Param = yy_0_2_1;
yyv_ParamRest = yy_0_2_2;
if (yy_0_3[0] != 1) goto yyfl_40_4;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
yyv_Arg = yy_0_3_1;
yyv_ArgRest = yy_0_3_2;
yy_1_1 = yyv_Position;
yy_1_2 = yyv_Param;
yy_1_3 = yyv_Arg;
CheckSyntaxMethodArgument(yy_1_1, yy_1_2, yy_1_3);
yy_2_1 = yyv_Position;
yy_2_2 = yyv_ParamRest;
yy_2_3 = yyv_ArgRest;
CheckSyntaxMethodArguments(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_40_4 : ;
}
yyErr(2,1046);
}
CheckSyntaxMethodArgument(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Mode;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yyv_Argument;
yy yy_0_3;
yy yy_1_1;
yy yyv_ArgType;
yy yy_1_2;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_2[0] != 1) goto yyfl_41_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Mode = yy_0_2_2;
yyv_Name = yy_0_2_3;
yyv_Argument = yy_0_3;
yy_1_1 = yyv_Argument;
ComputeSyntaxArgumentType(yy_1_1, &yy_1_2);
yyv_ArgType = yy_1_2;
yy_2 = (yy) yyv_Argument[1];
if (yy_2 == (yy) yyu) yyErr(1,1065);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_ArgType;
yy_3_3 = yyv_Mode;
CheckSyntaxMethodArgumentMode(yy_3_1, yy_3_2, yy_3_3);
return;
yyfl_41_1 : ;
}
yyErr(2,1061);
}
CheckSyntaxMethodArgumentMode(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_42_1;
yyv_Mode = yy_0_3;
return;
yyfl_42_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 9) goto yyfl_42_2;
yyv_Mode = yy_0_3;
return;
yyfl_42_2 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Type;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_3_1_1;
yy yy_1_3_1_2;
yy yy_1_4_1_1;
yy yy_1_4_1_2;
yy yy_1_5_1_1;
yy yy_1_5_1_2;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Type = yy_0_2;
yyv_Mode = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Type;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 2) goto yyfl_42_3_1_1;
goto yysl_42_3_1;
yyfl_42_3_1_1 : ;
yy_1_2_1_1 = yyv_Type;
yy_1_2_1_2 = yy_1_2_1_1;
if (yy_1_2_1_2[0] != 4) goto yyfl_42_3_1_2;
goto yysl_42_3_1;
yyfl_42_3_1_2 : ;
yy_1_3_1_1 = yyv_Type;
yy_1_3_1_2 = yy_1_3_1_1;
if (yy_1_3_1_2[0] != 5) goto yyfl_42_3_1_3;
goto yysl_42_3_1;
yyfl_42_3_1_3 : ;
yy_1_4_1_1 = yyv_Type;
yy_1_4_1_2 = yy_1_4_1_1;
if (yy_1_4_1_2[0] != 6) goto yyfl_42_3_1_4;
goto yysl_42_3_1;
yyfl_42_3_1_4 : ;
yy_1_5_1_1 = yyv_Type;
yy_1_5_1_2 = yy_1_5_1_1;
if (yy_1_5_1_2[0] != 7) goto yyfl_42_3_1_5;
goto yysl_42_3_1;
yyfl_42_3_1_5 : ;
goto yyfl_42_3;
yysl_42_3_1 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_1_1_1 = yyv_Mode;
yy_2_1_1_2 = yyb + 0;
yy_2_1_1_2[0] = 2;
if (yyeq_MODE(yy_2_1_1_1, yy_2_1_1_2)) goto yyfl_42_3_2_1;
yy_2_1_2_1 = yyv_Position;
Error_ConstantSyntaxArgumentMustBindToInParameter(yy_2_1_2_1);
goto yysl_42_3_2;
yyfl_42_3_2_1 : ;
goto yysl_42_3_2;
yysl_42_3_2 : ;
yyb = yysb;
}
return;
yyfl_42_3 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 12) goto yyfl_42_4;
yyv_Mode = yy_0_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Mode;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 2;
if (yyeq_MODE(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_42_4_1_1;
yy_1_1_2_1 = yyv_Position;
Error_ContextSyntaxArgumentMustBindToInParameter(yy_1_1_2_1);
goto yysl_42_4_1;
yyfl_42_4_1_1 : ;
goto yysl_42_4_1;
yysl_42_4_1 : ;
yyb = yysb;
}
return;
yyfl_42_4 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 10) goto yyfl_42_5;
yyv_Mode = yy_0_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Mode;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 2;
if (yyeq_MODE(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_42_5_1_1;
yy_1_1_2_1 = yyv_Position;
Error_InputSyntaxArgumentMustBindToInParameter(yy_1_1_2_1);
goto yysl_42_5_1;
yyfl_42_5_1_1 : ;
goto yysl_42_5_1;
yysl_42_5_1 : ;
yyb = yysb;
}
return;
yyfl_42_5 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 11) goto yyfl_42_6;
yyv_Mode = yy_0_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Mode;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 3;
if (yyeq_MODE(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_42_6_1_1;
yy_1_1_2_1 = yyv_Position;
Error_OutputSyntaxArgumentMustBindToOutParameter(yy_1_1_2_1);
goto yysl_42_6_1;
yyfl_42_6_1_1 : ;
goto yysl_42_6_1;
yysl_42_6_1 : ;
yyb = yysb;
}
return;
yyfl_42_6 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 13) goto yyfl_42_7;
yyv_Mode = yy_0_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Mode;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 4;
if (yyeq_MODE(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_42_7_1_1;
yy_1_1_2_1 = yyv_Position;
Error_IteratorSyntaxArgumentMustBindToInOutParameter(yy_1_1_2_1);
goto yysl_42_7_1;
yyfl_42_7_1_1 : ;
goto yysl_42_7_1;
yysl_42_7_1 : ;
yyb = yysb;
}
return;
yyfl_42_7 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 14) goto yyfl_42_8;
yyv_Mode = yy_0_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Mode;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 2;
if (yyeq_MODE(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_42_8_1_1;
yy_1_1_2_1 = yyv_Position;
Error_ContainerSyntaxArgumentMustBindToInParameter(yy_1_1_2_1);
goto yysl_42_8_1;
yyfl_42_8_1_1 : ;
goto yysl_42_8_1;
yysl_42_8_1 : ;
yyb = yysb;
}
return;
yyfl_42_8 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 8) goto yyfl_42_9;
yyv_Mode = yy_0_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Mode;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 2;
if (yyeq_MODE(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_42_9_1_1;
yy_1_1_2_1 = yyv_Position;
Error_PhraseBoundMarkSyntaxArgumentMustBindToInParameter(yy_1_1_2_1);
goto yysl_42_9_1;
yyfl_42_9_1_1 : ;
goto yysl_42_9_1;
yysl_42_9_1 : ;
yyb = yysb;
}
return;
yyfl_42_9 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Type;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_3;
yy yy_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Type = yy_0_2;
yyv_Mode = yy_0_3;
yy_1_1 = yyv_Type;
yyPrint_SYNTAXMARKTYPE(yy_1_1);
yyEndPrint();
return;
yyfl_42_10 : ;
}
yyErr(2,1068);
}
int CheckSyntaxKeywords(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_SYNTAX();
/*=== Sweep SYNTAX ===*/
if (yytp == (intptr_t) yybroadcast_SYNTAX) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_43_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Value = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Value;
if (! IsStringSuitableForKeyword(yy_1_1_1_1)) goto yyfl_43_10001_1_1;
goto yysl_43_10001_1;
yyfl_43_10001_1_1 : ;
yy_1_2_1_1 = yyv_Position;
yy_1_2_1_2 = yyv_Value;
Error_UnsuitableStringForKeyword(yy_1_2_1_1, yy_1_2_1_2);
goto yysl_43_10001_1;
yysl_43_10001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_10001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_43_10002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Value = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Value;
if (! IsStringSuitableForKeyword(yy_1_1_1_1)) goto yyfl_43_10002_1_1;
goto yysl_43_10002_1;
yyfl_43_10002_1_1 : ;
yy_1_2_1_1 = yyv_Position;
yy_1_2_1_2 = yyv_Value;
Error_UnsuitableStringForKeyword(yy_1_2_1_1, yy_1_2_1_2);
goto yysl_43_10002_1;
yysl_43_10002_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_10002 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
ComputeLModeOfSyntaxMethodArguments(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yyv_Mode;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_1_4;
yy yyv_ParamRest;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_Arg;
yy yy_0_2_1;
yy yyv_ArgRest;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_44_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_44_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Mode = yy_0_1_1_2;
yyv_ParamRest = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_44_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Arg = yy_0_2_1;
yyv_ArgRest = yy_0_2_2;
yy_1_1 = yyv_Arg;
yy_1_2 = yyv_Mode;
ComputeSyntaxMethodArgumentLMode(yy_1_1, yy_1_2);
yy_2_1 = yyv_ParamRest;
yy_2_2 = yyv_ArgRest;
ComputeLModeOfSyntaxMethodArguments(yy_2_1, yy_2_2);
return;
yyfl_44_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
return;
yyfl_44_2 : ;
}
yyErr(2,1152);
}
ComputeRModeOfSyntaxMethodArguments(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yyv_Mode;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_1_4;
yy yyv_ParamRest;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_Arg;
yy yy_0_2_1;
yy yyv_ArgRest;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_45_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_45_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Mode = yy_0_1_1_2;
yyv_ParamRest = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_45_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Arg = yy_0_2_1;
yyv_ArgRest = yy_0_2_2;
yy_1_1 = yyv_Arg;
yy_1_2 = yyv_Mode;
ComputeSyntaxMethodArgumentRMode(yy_1_1, yy_1_2);
yy_2_1 = yyv_ParamRest;
yy_2_2 = yyv_ArgRest;
ComputeRModeOfSyntaxMethodArguments(yy_2_1, yy_2_2);
return;
yyfl_45_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
return;
yyfl_45_2 : ;
}
yyErr(2,1161);
}
ComputeSyntaxMethodArgumentRMode(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Mode;
yy yy_0_2;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yy_2;
yy yyv_CurrentMode;
yy yy_3;
yy yy_4_1_1_1;
yy yy_4_1_1_2;
yy yy_4_2_1_1;
yy yy_4_2_1_2;
yy yy_4_2_2;
yy yy_4_3_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 7) goto yyfl_46_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
yyv_Mode = yy_0_2;
yy_1_1 = yyv_Id;
if (! QuerySyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_46_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[4];
if (yy_2 == (yy) yyu) yyErr(1,1175);
if (yy_2[0] != 9) goto yyfl_46_1;
yy_3 = (yy) yyv_Info[2];
if (yy_3 == (yy) yyu) yyErr(1,1176);
yyv_CurrentMode = yy_3;
{
yy yysb = yyb;
yy_4_1_1_1 = yyv_CurrentMode;
yy_4_1_1_2 = yyv_Mode;
if (! yyeq_MODE(yy_4_1_1_1, yy_4_1_1_2)) goto yyfl_46_1_4_1;
goto yysl_46_1_4;
yyfl_46_1_4_1 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_4_2_1_1 = yyv_CurrentMode;
yy_4_2_1_2 = yyb + 0;
yy_4_2_1_2[0] = 1;
if (! yyeq_MODE(yy_4_2_1_1, yy_4_2_1_2)) goto yyfl_46_1_4_2;
yy_4_2_2 = yyv_Mode;
yyv_Info[2] = (intptr_t) yy_4_2_2;
goto yysl_46_1_4;
yyfl_46_1_4_2 : ;
yy_4_3_1_1 = yyv_Position;
Error_VariableSyntaxArgumentMustBindToConsistentMode(yy_4_3_1_1);
goto yysl_46_1_4;
yysl_46_1_4 : ;
yyb = yysb;
}
return;
yyfl_46_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
return;
yyfl_46_2 : ;
}
yyErr(2,1171);
}
ComputeSyntaxMethodArgumentLMode(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Mode;
yy yy_0_2;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yy_2;
yy yyv_CurrentMode;
yy yy_3;
yy yy_4_1_1_1;
yy yy_4_1_1_2;
yy yy_4_2_1_1;
yy yy_4_2_1_2;
yy yy_4_2_2;
yy yy_4_3_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 7) goto yyfl_47_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
yyv_Mode = yy_0_2;
yy_1_1 = yyv_Id;
if (! QuerySyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_47_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[4];
if (yy_2 == (yy) yyu) yyErr(1,1193);
if (yy_2[0] != 9) goto yyfl_47_1;
yy_3 = (yy) yyv_Info[3];
if (yy_3 == (yy) yyu) yyErr(1,1194);
yyv_CurrentMode = yy_3;
{
yy yysb = yyb;
yy_4_1_1_1 = yyv_CurrentMode;
yy_4_1_1_2 = yyv_Mode;
if (! yyeq_MODE(yy_4_1_1_1, yy_4_1_1_2)) goto yyfl_47_1_4_1;
goto yysl_47_1_4;
yyfl_47_1_4_1 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_4_2_1_1 = yyv_CurrentMode;
yy_4_2_1_2 = yyb + 0;
yy_4_2_1_2[0] = 1;
if (! yyeq_MODE(yy_4_2_1_1, yy_4_2_1_2)) goto yyfl_47_1_4_2;
yy_4_2_2 = yyv_Mode;
yyv_Info[3] = (intptr_t) yy_4_2_2;
goto yysl_47_1_4;
yyfl_47_1_4_2 : ;
yy_4_3_1_1 = yyv_Position;
Error_VariableSyntaxArgumentMustBindToConsistentMode(yy_4_3_1_1);
goto yysl_47_1_4;
yysl_47_1_4 : ;
yyb = yysb;
}
return;
yyfl_47_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
return;
yyfl_47_2 : ;
}
yyErr(2,1189);
}
ComputeSyntaxPrefixAndSuffix(yyin_1, yyout_1, yyout_2)
yy yyin_1;
yy *yyout_1;
yy *yyout_2;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yyv_LeftPrefix;
yy yy_1_2;
yy yyv_LeftSuffix;
yy yy_1_3;
yy yy_2_1;
yy yyv_RightPrefix;
yy yy_2_2;
yy yyv_RightSuffix;
yy yy_2_3;
yy yy_3_1_1_1;
yy yy_3_1_2_1;
yy yy_3_1_2_2;
yy yyv_Prefix;
yy yy_3_1_2_3;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_4_1_1_1;
yy yy_4_1_2_1;
yy yy_4_1_2_2;
yy yyv_Suffix;
yy yy_4_1_2_3;
yy yy_4_2_1_1;
yy yy_4_2_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_48_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
ComputeSyntaxPrefixAndSuffix(yy_1_1, &yy_1_2, &yy_1_3);
yyv_LeftPrefix = yy_1_2;
yyv_LeftSuffix = yy_1_3;
yy_2_1 = yyv_Right;
ComputeSyntaxPrefixAndSuffix(yy_2_1, &yy_2_2, &yy_2_3);
yyv_RightPrefix = yy_2_2;
yyv_RightSuffix = yy_2_3;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Left;
if (! SyntaxIsNullable(yy_3_1_1_1)) goto yyfl_48_1_3_1;
yy_3_1_2_1 = yyv_LeftPrefix;
yy_3_1_2_2 = yyv_RightPrefix;
UnionSyntaxTerm(yy_3_1_2_1, yy_3_1_2_2, &yy_3_1_2_3);
yyv_Prefix = yy_3_1_2_3;
goto yysl_48_1_3;
yyfl_48_1_3_1 : ;
yy_3_2_1_1 = yyv_LeftPrefix;
yy_3_2_1_2 = yy_3_2_1_1;
yyv_Prefix = yy_3_2_1_2;
goto yysl_48_1_3;
yysl_48_1_3 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_4_1_1_1 = yyv_Right;
if (! SyntaxIsNullable(yy_4_1_1_1)) goto yyfl_48_1_4_1;
yy_4_1_2_1 = yyv_LeftSuffix;
yy_4_1_2_2 = yyv_RightSuffix;
UnionSyntaxTerm(yy_4_1_2_1, yy_4_1_2_2, &yy_4_1_2_3);
yyv_Suffix = yy_4_1_2_3;
goto yysl_48_1_4;
yyfl_48_1_4_1 : ;
yy_4_2_1_1 = yyv_RightSuffix;
yy_4_2_1_2 = yy_4_2_1_1;
yyv_Suffix = yy_4_2_1_2;
goto yysl_48_1_4;
yysl_48_1_4 : ;
yyb = yysb;
}
yy_0_2 = yyv_Prefix;
yy_0_3 = yyv_Suffix;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yyv_LeftPrefix;
yy yy_1_2;
yy yyv_LeftSuffix;
yy yy_1_3;
yy yy_2_1;
yy yyv_RightPrefix;
yy yy_2_2;
yy yyv_RightSuffix;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yyv_Prefix;
yy yy_3_3;
yy yy_4_1;
yy yy_4_2;
yy yyv_Suffix;
yy yy_4_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_48_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
ComputeSyntaxPrefixAndSuffix(yy_1_1, &yy_1_2, &yy_1_3);
yyv_LeftPrefix = yy_1_2;
yyv_LeftSuffix = yy_1_3;
yy_2_1 = yyv_Right;
ComputeSyntaxPrefixAndSuffix(yy_2_1, &yy_2_2, &yy_2_3);
yyv_RightPrefix = yy_2_2;
yyv_RightSuffix = yy_2_3;
yy_3_1 = yyv_LeftPrefix;
yy_3_2 = yyv_RightPrefix;
UnionSyntaxTerm(yy_3_1, yy_3_2, &yy_3_3);
yyv_Prefix = yy_3_3;
yy_4_1 = yyv_LeftSuffix;
yy_4_2 = yyv_RightSuffix;
UnionSyntaxTerm(yy_4_1, yy_4_2, &yy_4_3);
yyv_Suffix = yy_4_3;
yy_0_2 = yyv_Prefix;
yy_0_3 = yyv_Suffix;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yyv_Prefix;
yy yy_1_2;
yy yyv_Suffix;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_48_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Element = yy_0_1_2;
yy_1_1 = yyv_Element;
ComputeSyntaxPrefixAndSuffix(yy_1_1, &yy_1_2, &yy_1_3);
yyv_Prefix = yy_1_2;
yyv_Suffix = yy_1_3;
yy_0_2 = yyv_Prefix;
yy_0_3 = yyv_Suffix;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yyv_Prefix;
yy yy_1_2;
yy yyv_Suffix;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_48_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Element = yy_0_1_2;
yy_1_1 = yyv_Element;
ComputeSyntaxPrefixAndSuffix(yy_1_1, &yy_1_2, &yy_1_3);
yyv_Prefix = yy_1_2;
yyv_Suffix = yy_1_3;
yy_0_2 = yyv_Prefix;
yy_0_3 = yyv_Suffix;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yyv_Prefix;
yy yy_1_2;
yy yyv_Suffix;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_48_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Element = yy_0_1_2;
yy_1_1 = yyv_Element;
ComputeSyntaxPrefixAndSuffix(yy_1_1, &yy_1_2, &yy_1_3);
yyv_Prefix = yy_1_2;
yyv_Suffix = yy_1_3;
yy_0_2 = yyv_Prefix;
yy_0_3 = yyv_Suffix;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yyv_Prefix;
yy yy_1_2;
yy yyv_Suffix;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_48_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
ComputeSyntaxPrefixAndSuffixOfRule(yy_1_1, &yy_1_2, &yy_1_3);
yyv_Prefix = yy_1_2;
yyv_Suffix = yy_1_3;
yy_0_2 = yyv_Prefix;
yy_0_3 = yyv_Suffix;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yyv_Prefix;
yy yy_1_2;
yy yyv_Suffix;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_48_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
ComputeSyntaxPrefixAndSuffixOfRule(yy_1_1, &yy_1_2, &yy_1_3);
yyv_Prefix = yy_1_2;
yyv_Suffix = yy_1_3;
yy_0_2 = yyv_Prefix;
yy_0_3 = yyv_Suffix;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_48_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 3;
yy_0_3 = yyb + 1;
yy_0_3[0] = 3;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 5;
yy_0_3 = yyb + 1;
yy_0_3[0] = 5;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_48_9 : ;
}
yyErr(2,1207);
}
ComputeSyntaxPrefixAndSuffixOfRule(yyin_1, yyout_1, yyout_2)
yy yyin_1;
yy *yyout_1;
yy *yyout_2;
{
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yy_2_1_1;
yy yyv_Syntax;
yy yy_2_1_2;
yy yy_2_1_3_1;
yy yyv_Prefix;
yy yy_2_1_3_2;
yy yyv_Suffix;
yy yy_2_1_3_3;
yy yy_2_1_4;
yy yy_2_1_5;
yy yy_2_2_1;
yy yy_2_2_2;
yy_0_1 = yyin_1;
yyv_Name = yy_0_1;
yy_1_1 = yyv_Name;
if (! QuerySyntaxId(yy_1_1, &yy_1_2)) goto yyfl_49_1;
yyv_Info = yy_1_2;
{
yy yysb = yyb;
yy_2_1_1 = (yy) yyv_Info[6];
if (yy_2_1_1 == (yy) yyu) yyErr(1,1257);
if (yy_2_1_1[0] != 1) goto yyfl_49_1_2_1;
yy_2_1_2 = (yy) yyv_Info[4];
if (yy_2_1_2 == (yy) yyu) yyErr(1,1258);
yyv_Syntax = yy_2_1_2;
yy_2_1_3_1 = yyv_Syntax;
ComputeSyntaxPrefixAndSuffix(yy_2_1_3_1, &yy_2_1_3_2, &yy_2_1_3_3);
yyv_Prefix = yy_2_1_3_2;
yyv_Suffix = yy_2_1_3_3;
yy_2_1_4 = yyv_Prefix;
yyv_Info[6] = (intptr_t) yy_2_1_4;
yy_2_1_5 = yyv_Suffix;
yyv_Info[7] = (intptr_t) yy_2_1_5;
goto yysl_49_1_2;
yyfl_49_1_2_1 : ;
yy_2_2_1 = (yy) yyv_Info[6];
if (yy_2_2_1 == (yy) yyu) yyErr(1,1263);
yyv_Prefix = yy_2_2_1;
yy_2_2_2 = (yy) yyv_Info[7];
if (yy_2_2_2 == (yy) yyu) yyErr(1,1264);
yyv_Suffix = yy_2_2_2;
goto yysl_49_1_2;
yysl_49_1_2 : ;
yyb = yysb;
}
yy_0_2 = yyv_Prefix;
yy_0_3 = yyv_Suffix;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_49_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2 = yyb + 0;
yy_0_2[0] = 2;
yy_0_3 = yyb + 1;
yy_0_3[0] = 2;
*yyout_1 = yy_0_2;
*yyout_2 = yy_0_3;
return;
yyfl_49_2 : ;
}
yyErr(2,1252);
}
UnionSyntaxTerm(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_50_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_3 = yyb + 0;
yy_0_3[0] = 2;
*yyout_1 = yy_0_3;
return;
yyfl_50_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 2) goto yyfl_50_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_3 = yyb + 0;
yy_0_3[0] = 2;
*yyout_1 = yy_0_3;
return;
yyfl_50_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Right;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 3) goto yyfl_50_3;
yyv_Right = yy_0_2;
yy_0_3 = yyv_Right;
*yyout_1 = yy_0_3;
return;
yyfl_50_3 : ;
}
{
yy yyb;
yy yyv_Left;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Left = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_50_4;
yy_0_3 = yyv_Left;
*yyout_1 = yy_0_3;
return;
yyfl_50_4 : ;
}
{
yy yyb;
yy yyv_Left;
yy yy_0_1;
yy yyv_Right;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Left = yy_0_1;
yyv_Right = yy_0_2;
yy_1_1 = yyv_Left;
yy_1_2 = yyv_Right;
if (! yyeq_SYNTAXTERM(yy_1_1, yy_1_2)) goto yyfl_50_5;
yy_0_3 = yyv_Left;
*yyout_1 = yy_0_3;
return;
yyfl_50_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_3 = yyb + 0;
yy_0_3[0] = 6;
*yyout_1 = yy_0_3;
return;
yyfl_50_6 : ;
}
yyErr(2,1270);
}
int SyntaxIsNullable(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_51_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
if (! SyntaxIsNullable(yy_1_1)) goto yyfl_51_1;
yy_2_1 = yyv_Right;
if (! SyntaxIsNullable(yy_2_1)) goto yyfl_51_1;
return 1;
yyfl_51_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_51_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Left;
if (! SyntaxIsNullable(yy_1_1_1_1)) goto yyfl_51_2_1_1;
goto yysl_51_2_1;
yyfl_51_2_1_1 : ;
yy_1_2_1_1 = yyv_Right;
if (! SyntaxIsNullable(yy_1_2_1_1)) goto yyfl_51_2_1_2;
goto yysl_51_2_1;
yyfl_51_2_1_2 : ;
goto yyfl_51_2;
yysl_51_2_1 : ;
yyb = yysb;
}
return 1;
yyfl_51_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Operand;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_51_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Operand = yy_0_1_2;
return 1;
yyfl_51_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_Syntax;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_51_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
if (! QuerySyntaxOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_51_4;
yyv_Syntax = yy_1_2;
yy_2_1 = yyv_Syntax;
if (! SyntaxIsNullable(yy_2_1)) goto yyfl_51_4;
return 1;
yyfl_51_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_Syntax;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_51_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
if (! QuerySyntaxOfSyntaxId(yy_1_1, &yy_1_2)) goto yyfl_51_5;
yyv_Syntax = yy_1_2;
yy_2_1 = yyv_Syntax;
if (! SyntaxIsNullable(yy_2_1)) goto yyfl_51_5;
return 1;
yyfl_51_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_51_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
return 1;
yyfl_51_6 : ;
}
return 0;
}
int CheckInvokes(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_MODULE();
extern yybroadcast_STATEMENT();
extern yybroadcast_EXPRESSION();
/*=== Sweep MODULE ===*/
if (yytp == (intptr_t) yybroadcast_MODULE) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Kind;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Definitions;
yy yy_0_1_4;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1_1_1;
yy yy_1_1_2_1_2_1;
yy yyv_WidgetModuleName;
yy yy_1_1_2_1_2_2;
yy yy_1_1_2_1_3;
yy yy_1_1_2_1_3_1;
yy yy_1_1_2_1_3_2;
yy yy_1_1_2_2_1_1;
yy yy_1_1_2_2_1_2;
yy yy_1_1_2_2_2_1;
yy yyv_CanvasModuleName;
yy yy_1_1_2_2_2_2;
yy yy_1_1_2_2_3;
yy yy_1_1_2_2_3_1;
yy yy_1_1_2_2_3_2;
yy yy_1_1_2_2_3_2_1;
yy yy_1_1_2_2_3_2_2;
yy yy_1_2_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_54_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Kind = yy_0_1_2;
yyv_Name = yy_0_1_3;
yyv_Definitions = yy_0_1_4;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Kind;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 4;
if (yyeq_MODULEKIND(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_54_10001_1_1;
{
yy yysb = yyb;
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yy_1_1_2_1_1_1 = yyv_Definitions;
if (! ImportContainsCanvas(yy_1_1_2_1_1_1)) goto yyfl_54_10001_1_1_2_1;
yy_1_1_2_1_2_1 = ((yy)"com.livecode.widget");
MakeNameLiteral(yy_1_1_2_1_2_1, &yy_1_1_2_1_2_2);
yyv_WidgetModuleName = yy_1_1_2_1_2_2;
yy_1_1_2_1_3_1 = yyv_WidgetModuleName;
yy_1_1_2_1_3_2 = yyb + 3;
yy_1_1_2_1_3_2[0] = 2;
yy_1_1_2_1_3 = yyb + 0;
yy_1_1_2_1_3[0] = 1;
yy_1_1_2_1_3[1] = ((intptr_t)yy_1_1_2_1_3_1);
yy_1_1_2_1_3[2] = ((intptr_t)yy_1_1_2_1_3_2);
yyglov_IgnoredModulesList = yy_1_1_2_1_3;
goto yysl_54_10001_1_1_2;
yyfl_54_10001_1_1_2_1 : ;
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yy_1_1_2_2_1_1 = ((yy)"com.livecode.widget");
MakeNameLiteral(yy_1_1_2_2_1_1, &yy_1_1_2_2_1_2);
yyv_WidgetModuleName = yy_1_1_2_2_1_2;
yy_1_1_2_2_2_1 = ((yy)"com.livecode.canvas");
MakeNameLiteral(yy_1_1_2_2_2_1, &yy_1_1_2_2_2_2);
yyv_CanvasModuleName = yy_1_1_2_2_2_2;
yy_1_1_2_2_3_1 = yyv_CanvasModuleName;
yy_1_1_2_2_3_2_1 = yyv_WidgetModuleName;
yy_1_1_2_2_3_2_2 = yyb + 6;
yy_1_1_2_2_3_2_2[0] = 2;
yy_1_1_2_2_3_2 = yyb + 3;
yy_1_1_2_2_3_2[0] = 1;
yy_1_1_2_2_3_2[1] = ((intptr_t)yy_1_1_2_2_3_2_1);
yy_1_1_2_2_3_2[2] = ((intptr_t)yy_1_1_2_2_3_2_2);
yy_1_1_2_2_3 = yyb + 0;
yy_1_1_2_2_3[0] = 1;
yy_1_1_2_2_3[1] = ((intptr_t)yy_1_1_2_2_3_1);
yy_1_1_2_2_3[2] = ((intptr_t)yy_1_1_2_2_3_2);
yyglov_IgnoredModulesList = yy_1_1_2_2_3;
goto yysl_54_10001_1_1_2;
yysl_54_10001_1_1_2 : ;
yyb = yysb;
}
goto yysl_54_10001_1;
yyfl_54_10001_1_1 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_2_1 = yyb + 0;
yy_1_2_1[0] = 2;
yyglov_IgnoredModulesList = yy_1_2_1;
goto yysl_54_10001_1;
yysl_54_10001_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Definitions;
{
extern CheckInvokes();
yybroadcast_DEFINITION(yy_2_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_10001 : ;
}
return 0;
}
/*===*/
/*=== Sweep STATEMENT ===*/
else if (yytp == (intptr_t) yybroadcast_STATEMENT) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Handler;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_Parameters;
yy yy_1_1_1_2_1;
yy yyv_ReturnType;
yy yy_1_1_1_2_2;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_2_3;
yy yy_1_1_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 16) goto yyfl_54_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Handler;
if (! QueryHandlerIdSignature(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_54_20001_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_54_20001_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yyv_Parameters = yy_1_1_1_2_1;
yyv_ReturnType = yy_1_1_1_2_2;
yy_1_1_2_1 = yyv_Position;
yy_1_1_2_2 = yyv_Parameters;
yy_1_1_2_3 = yyv_Arguments;
CheckCallArguments(yy_1_1_2_1, yy_1_1_2_2, yy_1_1_2_3);
yy_1_1_3_1 = yyv_Arguments;
{
extern CheckInvokes();
yybroadcast_EXPRESSIONLIST(yy_1_1_3_1, 0, &yynull, CheckInvokes);
}
goto yysl_54_20001_1;
yyfl_54_20001_1_1 : ;
goto yysl_54_20001_1;
yysl_54_20001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Info;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yy_1_1_2_1_1_1;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_1_3;
yy yyv_Signature;
yy yy_1_1_2_1_1_4;
yy yy_1_1_2_1_2_1;
yy yy_1_1_2_1_2_2;
yy yy_1_1_2_1_2_3;
yy yy_1_1_2_2_1_1;
yy yy_1_1_3_1;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 17) goto yyfl_54_20002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Info = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Info;
if (! IsInvokeAllowed(yy_1_1_1_1)) goto yyfl_54_20002_1_1;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_2_1_1_1 = yyb + 0;
yy_1_1_2_1_1_1[0] = 1;
yy_1_1_2_1_1_2 = yyv_Info;
yy_1_1_2_1_1_3 = yyv_Arguments;
if (! ComputeInvokeSignature(yy_1_1_2_1_1_1, yy_1_1_2_1_1_2, yy_1_1_2_1_1_3, &yy_1_1_2_1_1_4)) goto yyfl_54_20002_1_1_2_1;
yyv_Signature = yy_1_1_2_1_1_4;
yy_1_1_2_1_2_1 = yyv_Position;
yy_1_1_2_1_2_2 = yyv_Signature;
yy_1_1_2_1_2_3 = yyv_Arguments;
CheckInvokeArguments(yy_1_1_2_1_2_1, yy_1_1_2_1_2_2, yy_1_1_2_1_2_3);
goto yysl_54_20002_1_1_2;
yyfl_54_20002_1_1_2_1 : ;
yy_1_1_2_2_1_1 = ((yy)"No execute method for statement syntax");
Fatal_InternalInconsistency(yy_1_1_2_2_1_1);
goto yysl_54_20002_1_1_2;
yysl_54_20002_1_1_2 : ;
yyb = yysb;
}
yy_1_1_3_1 = yyv_Arguments;
{
extern CheckInvokes();
yybroadcast_EXPRESSIONLIST(yy_1_1_3_1, 0, &yynull, CheckInvokes);
}
goto yysl_54_20002_1;
yyfl_54_20002_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_SyntaxNotAllowedInThisContext(yy_1_2_1_1);
goto yysl_54_20002_1;
yysl_54_20002_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Source;
yy yy_0_1_2;
yy yyv_Target;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_54_20003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Source = yy_0_1_2;
yyv_Target = yy_0_1_3;
yy_1_1 = yyv_Source;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Target;
CheckExpressionIsAssignable(yy_2_1);
yy_3_1 = yyv_Source;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, CheckInvokes);
}
yy_4_1 = yyv_Target;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Count;
yy yy_0_1_2;
yy yyv_Body;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_54_20004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Count = yy_0_1_2;
yyv_Body = yy_0_1_3;
yy_1_1 = yyv_Count;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Count;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckInvokes);
}
yy_3_1 = yyv_Body;
{
extern CheckInvokes();
yybroadcast_STATEMENT(yy_3_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20004 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Condition;
yy yy_0_1_2;
yy yyv_Body;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_54_20005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Condition = yy_0_1_2;
yyv_Body = yy_0_1_3;
yy_1_1 = yyv_Condition;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Condition;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckInvokes);
}
yy_3_1 = yyv_Body;
{
extern CheckInvokes();
yybroadcast_STATEMENT(yy_3_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20005 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Condition;
yy yy_0_1_2;
yy yyv_Body;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_54_20006;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Condition = yy_0_1_2;
yyv_Body = yy_0_1_3;
yy_1_1 = yyv_Condition;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Condition;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckInvokes);
}
yy_3_1 = yyv_Body;
{
extern CheckInvokes();
yybroadcast_STATEMENT(yy_3_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20006 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Slot;
yy yy_0_1_2;
yy yyv_Start;
yy yy_0_1_3;
yy yyv_Finish;
yy yy_0_1_4;
yy yyv_Step;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_54_20007;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Position = yy_0_1_1;
yyv_Slot = yy_0_1_2;
yyv_Start = yy_0_1_3;
yyv_Finish = yy_0_1_4;
yyv_Step = yy_0_1_5;
yyv_Body = yy_0_1_6;
yy_1_1 = yyv_Start;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Finish;
CheckExpressionIsEvaluatable(yy_2_1);
yy_3_1 = yyv_Step;
CheckExpressionIsEvaluatable(yy_3_1);
yy_4_1 = yyv_Start;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, CheckInvokes);
}
yy_5_1 = yyv_Finish;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_5_1, 0, &yynull, CheckInvokes);
}
yy_6_1 = yyv_Step;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_6_1, 0, &yynull, CheckInvokes);
}
yy_7_1 = yyv_Body;
{
extern CheckInvokes();
yybroadcast_STATEMENT(yy_7_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20007 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Slot;
yy yy_0_1_2;
yy yyv_Start;
yy yy_0_1_3;
yy yyv_Finish;
yy yy_0_1_4;
yy yyv_Step;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_54_20008;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Position = yy_0_1_1;
yyv_Slot = yy_0_1_2;
yyv_Start = yy_0_1_3;
yyv_Finish = yy_0_1_4;
yyv_Step = yy_0_1_5;
yyv_Body = yy_0_1_6;
yy_1_1 = yyv_Start;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Finish;
CheckExpressionIsEvaluatable(yy_2_1);
yy_3_1 = yyv_Step;
CheckExpressionIsEvaluatable(yy_3_1);
yy_4_1 = yyv_Start;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, CheckInvokes);
}
yy_5_1 = yyv_Finish;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_5_1, 0, &yynull, CheckInvokes);
}
yy_6_1 = yyv_Step;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_6_1, 0, &yynull, CheckInvokes);
}
yy_7_1 = yyv_Body;
{
extern CheckInvokes();
yybroadcast_STATEMENT(yy_7_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20008 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_IteratorPosition;
yy yy_0_1_2_1;
yy yyv_IteratorInvoke;
yy yy_0_1_2_2;
yy yyv_IteratorArguments;
yy yy_0_1_2_3;
yy yyv_Container;
yy yy_0_1_3;
yy yyv_Body;
yy yy_0_1_4;
yy yy_1_1_1_1;
yy yy_1_1_2_1_1_1;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_1_3;
yy yyv_IteratorSignature;
yy yy_1_1_2_1_1_4;
yy yy_1_1_2_1_2_1;
yy yy_1_1_2_1_2_2;
yy yy_1_1_2_1_2_3;
yy yy_1_1_2_2_1_1;
yy yy_1_1_3_1;
yy yy_1_2_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_54_20009;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
if (yy_0_1_2[0] != 15) goto yyfl_54_20009;
yy_0_1_2_1 = ((yy)yy_0_1_2[1]);
yy_0_1_2_2 = ((yy)yy_0_1_2[2]);
yy_0_1_2_3 = ((yy)yy_0_1_2[3]);
yyv_IteratorPosition = yy_0_1_2_1;
yyv_IteratorInvoke = yy_0_1_2_2;
yyv_IteratorArguments = yy_0_1_2_3;
yyv_Container = yy_0_1_3;
yyv_Body = yy_0_1_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_IteratorInvoke;
if (! IsInvokeAllowed(yy_1_1_1_1)) goto yyfl_54_20009_1_1;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_2_1_1_1 = yyb + 0;
yy_1_1_2_1_1_1[0] = 4;
yy_1_1_2_1_1_2 = yyv_IteratorInvoke;
yy_1_1_2_1_1_3 = yyv_IteratorArguments;
if (! ComputeInvokeSignature(yy_1_1_2_1_1_1, yy_1_1_2_1_1_2, yy_1_1_2_1_1_3, &yy_1_1_2_1_1_4)) goto yyfl_54_20009_1_1_2_1;
yyv_IteratorSignature = yy_1_1_2_1_1_4;
yy_1_1_2_1_2_1 = yyv_IteratorPosition;
yy_1_1_2_1_2_2 = yyv_IteratorSignature;
yy_1_1_2_1_2_3 = yyv_IteratorArguments;
CheckInvokeArguments(yy_1_1_2_1_2_1, yy_1_1_2_1_2_2, yy_1_1_2_1_2_3);
goto yysl_54_20009_1_1_2;
yyfl_54_20009_1_1_2_1 : ;
yy_1_1_2_2_1_1 = ((yy)"No iterate method for repeat for each syntax");
Fatal_InternalInconsistency(yy_1_1_2_2_1_1);
goto yysl_54_20009_1_1_2;
yysl_54_20009_1_1_2 : ;
yyb = yysb;
}
yy_1_1_3_1 = yyv_IteratorArguments;
{
extern CheckInvokes();
yybroadcast_EXPRESSIONLIST(yy_1_1_3_1, 0, &yynull, CheckInvokes);
}
goto yysl_54_20009_1;
yyfl_54_20009_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_SyntaxNotAllowedInThisContext(yy_1_2_1_1);
goto yysl_54_20009_1;
yysl_54_20009_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Container;
CheckExpressionIsEvaluatable(yy_2_1);
yy_3_1 = yyv_IteratorArguments;
{
extern CheckInvokes();
yybroadcast_EXPRESSIONLIST(yy_3_1, 0, &yynull, CheckInvokes);
}
yy_4_1 = yyv_Container;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, CheckInvokes);
}
yy_5_1 = yyv_Body;
{
extern CheckInvokes();
yybroadcast_STATEMENT(yy_5_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20009 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_1_1_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_54_20010;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Value = yy_0_1_2;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Value;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 18;
if (yyeq_EXPRESSION(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_54_20010_1_1;
yy_1_1_2_1 = yyv_Value;
CheckExpressionIsEvaluatable(yy_1_1_2_1);
yy_1_1_3_1 = yyv_Value;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_1_1_3_1, 0, &yynull, CheckInvokes);
}
goto yysl_54_20010_1;
yyfl_54_20010_1_1 : ;
goto yysl_54_20010_1;
yysl_54_20010_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20010 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Error;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 18) goto yyfl_54_20011;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Error = yy_0_1_2;
yy_1_1 = yyv_Error;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Error;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_20011 : ;
}
return 0;
}
/*===*/
/*=== Sweep EXPRESSION ===*/
else if (yytp == (intptr_t) yybroadcast_EXPRESSION) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Handler;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_Parameters;
yy yy_1_1_1_2_1;
yy yyv_ReturnType;
yy yy_1_1_1_2_2;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_2_3;
yy yy_1_1_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_54_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Handler;
if (! QueryHandlerIdSignature(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_54_30001_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_54_30001_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yyv_Parameters = yy_1_1_1_2_1;
yyv_ReturnType = yy_1_1_1_2_2;
yy_1_1_2_1 = yyv_Position;
yy_1_1_2_2 = yyv_Parameters;
yy_1_1_2_3 = yyv_Arguments;
CheckCallArguments(yy_1_1_2_1, yy_1_1_2_2, yy_1_1_2_3);
yy_1_1_3_1 = yyv_Arguments;
{
extern CheckInvokes();
yybroadcast_EXPRESSIONLIST(yy_1_1_3_1, 0, &yynull, CheckInvokes);
}
goto yysl_54_30001_1;
yyfl_54_30001_1_1 : ;
goto yysl_54_30001_1;
yysl_54_30001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_30001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Info;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yy_1_1_2_1_1_1;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_1_3;
yy yyv_Signature;
yy yy_1_1_2_1_1_4;
yy yy_1_1_2_1_2_1;
yy yy_1_1_2_1_2_2;
yy yy_1_1_2_1_2_3;
yy yy_1_1_2_2_1_1;
yy yy_1_1_3_1;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_54_30002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Info = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Info;
if (! IsInvokeAllowed(yy_1_1_1_1)) goto yyfl_54_30002_1_1;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_2_1_1_1 = yyb + 0;
yy_1_1_2_1_1_1[0] = 2;
yy_1_1_2_1_1_2 = yyv_Info;
yy_1_1_2_1_1_3 = yyv_Arguments;
if (! ComputeInvokeSignature(yy_1_1_2_1_1_1, yy_1_1_2_1_1_2, yy_1_1_2_1_1_3, &yy_1_1_2_1_1_4)) goto yyfl_54_30002_1_1_2_1;
yyv_Signature = yy_1_1_2_1_1_4;
yy_1_1_2_1_2_1 = yyv_Position;
yy_1_1_2_1_2_2 = yyv_Signature;
yy_1_1_2_1_2_3 = yyv_Arguments;
CheckInvokeArguments(yy_1_1_2_1_2_1, yy_1_1_2_1_2_2, yy_1_1_2_1_2_3);
goto yysl_54_30002_1_1_2;
yyfl_54_30002_1_1_2_1 : ;
yy_1_1_2_2_1_1 = yyv_Position;
Error_NonEvaluatableExpressionUsedForInContext(yy_1_1_2_2_1_1);
goto yysl_54_30002_1_1_2;
yysl_54_30002_1_1_2 : ;
yyb = yysb;
}
yy_1_1_3_1 = yyv_Arguments;
{
extern CheckInvokes();
yybroadcast_EXPRESSIONLIST(yy_1_1_3_1, 0, &yynull, CheckInvokes);
}
goto yysl_54_30002_1;
yyfl_54_30002_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_SyntaxNotAllowedInThisContext(yy_1_2_1_1);
goto yysl_54_30002_1;
yysl_54_30002_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_30002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_54_30003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Right;
CheckExpressionIsEvaluatable(yy_2_1);
yy_3_1 = yyv_Left;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, CheckInvokes);
}
yy_4_1 = yyv_Right;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_30003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_54_30004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
CheckExpressionIsEvaluatable(yy_1_1);
yy_2_1 = yyv_Right;
CheckExpressionIsEvaluatable(yy_2_1);
yy_3_1 = yyv_Left;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, CheckInvokes);
}
yy_4_1 = yyv_Right;
{
extern CheckInvokes();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, CheckInvokes);
}
*yyout_1 = yyin_2;
return 1;
yyfl_54_30004 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
CheckCallArguments(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_2[0] != 2) goto yyfl_55_1;
if (yy_0_3[0] != 2) goto yyfl_55_1;
return;
yyfl_55_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_ParamRest;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_1_1;
yy yy_0_2_1_1_1;
yy yy_0_2_1_1_2;
yy yy_0_2_1_1_3;
yy yy_0_2_1_1_4;
yy yy_0_2_1_2;
yy yy_0_3;
yy yyv_Argument;
yy yy_0_3_1;
yy yyv_ArgRest;
yy yy_0_3_2;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yy_0_2_1 = yy_0_2;
yyv_ParamRest = yy_0_2;
if (yy_0_2_1[0] != 1) goto yyfl_55_2;
yy_0_2_1_1 = ((yy)yy_0_2_1[1]);
yy_0_2_1_2 = ((yy)yy_0_2_1[2]);
if (yy_0_2_1_1[0] != 1) goto yyfl_55_2;
yy_0_2_1_1_1 = ((yy)yy_0_2_1_1[1]);
yy_0_2_1_1_2 = ((yy)yy_0_2_1_1[2]);
yy_0_2_1_1_3 = ((yy)yy_0_2_1_1[3]);
yy_0_2_1_1_4 = ((yy)yy_0_2_1_1[4]);
if (yy_0_2_1_1_2[0] != 5) goto yyfl_55_2;
if (yy_0_3[0] != 1) goto yyfl_55_2;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
yyv_Argument = yy_0_3_1;
yyv_ArgRest = yy_0_3_2;
yy_1_1 = yyv_Argument;
CheckExpressionIsExplicitlyTypedVariable(yy_1_1);
yy_2_1 = yyv_Position;
yy_2_2 = yyv_ParamRest;
yy_2_3 = yyv_ArgRest;
CheckCallArguments(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_55_2 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_1_1;
yy yy_0_2_1_2;
yy yy_0_2_1_3;
yy yy_0_2_1_4;
yy yy_0_2_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_55_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
if (yy_0_2_1[0] != 1) goto yyfl_55_3;
yy_0_2_1_1 = ((yy)yy_0_2_1[1]);
yy_0_2_1_2 = ((yy)yy_0_2_1[2]);
yy_0_2_1_3 = ((yy)yy_0_2_1[3]);
yy_0_2_1_4 = ((yy)yy_0_2_1[4]);
if (yy_0_2_1_2[0] != 5) goto yyfl_55_3;
if (yy_0_3[0] != 2) goto yyfl_55_3;
return;
yyfl_55_3 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_1_1;
yy yyv_Mode;
yy yy_0_2_1_2;
yy yy_0_2_1_3;
yy yy_0_2_1_4;
yy yyv_ParamRest;
yy yy_0_2_2;
yy yy_0_3;
yy yyv_Argument;
yy yy_0_3_1;
yy yyv_ArgRest;
yy yy_0_3_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_55_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
if (yy_0_2_1[0] != 1) goto yyfl_55_4;
yy_0_2_1_1 = ((yy)yy_0_2_1[1]);
yy_0_2_1_2 = ((yy)yy_0_2_1[2]);
yy_0_2_1_3 = ((yy)yy_0_2_1[3]);
yy_0_2_1_4 = ((yy)yy_0_2_1[4]);
yyv_Mode = yy_0_2_1_2;
yyv_ParamRest = yy_0_2_2;
if (yy_0_3[0] != 1) goto yyfl_55_4;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
yyv_Argument = yy_0_3_1;
yyv_ArgRest = yy_0_3_2;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Mode;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 3;
if (yyeq_MODE(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_55_4_1_1;
yy_1_1_2_1 = yyv_Argument;
CheckExpressionIsEvaluatable(yy_1_1_2_1);
goto yysl_55_4_1;
yyfl_55_4_1_1 : ;
goto yysl_55_4_1;
yysl_55_4_1 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_1_1_1 = yyv_Mode;
yy_2_1_1_2 = yyb + 0;
yy_2_1_1_2[0] = 2;
if (yyeq_MODE(yy_2_1_1_1, yy_2_1_1_2)) goto yyfl_55_4_2_1;
yy_2_1_2_1 = yyv_Argument;
CheckExpressionIsAssignable(yy_2_1_2_1);
goto yysl_55_4_2;
yyfl_55_4_2_1 : ;
goto yysl_55_4_2;
yysl_55_4_2 : ;
yyb = yysb;
}
yy_3_1 = yyv_Position;
yy_3_2 = yyv_ParamRest;
yy_3_3 = yyv_ArgRest;
CheckCallArguments(yy_3_1, yy_3_2, yy_3_3);
return;
yyfl_55_4 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_55_5;
yy_1_1 = yyv_Position;
Error_TooManyArgumentsPassedToHandler(yy_1_1);
return;
yyfl_55_5 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_3[0] != 2) goto yyfl_55_6;
yy_1_1 = yyv_Position;
Error_TooFewArgumentsPassedToHandler(yy_1_1);
return;
yyfl_55_6 : ;
}
yyErr(2,1459);
}
CheckInvokeArguments(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
if (yy_0_2[0] != 2) goto yyfl_56_1;
return;
yyfl_56_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_2_1;
yy yyv_Index;
yy yy_0_2_2;
yy yyv_SigTail;
yy yy_0_2_3;
yy yyv_Arguments;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_56_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yyv_Mode = yy_0_2_1;
yyv_Index = yy_0_2_2;
yyv_SigTail = yy_0_2_3;
yyv_Arguments = yy_0_3;
yy_1_1 = yyv_Index;
yy_1_2_1 = ((yy)1);
yy_1_2 = (yy)(-((intptr_t)yy_1_2_1));
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_56_2;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_SigTail;
yy_2_3 = yyv_Arguments;
CheckInvokeArguments(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_56_2 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Mode;
yy yy_0_2_1;
yy yyv_Index;
yy yy_0_2_2;
yy yyv_SigTail;
yy yy_0_2_3;
yy yyv_Arguments;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yyv_Argument;
yy yy_1_3;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_2_1;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_56_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yyv_Mode = yy_0_2_1;
yyv_Index = yy_0_2_2;
yyv_SigTail = yy_0_2_3;
yyv_Arguments = yy_0_3;
yy_1_1 = yyv_Arguments;
yy_1_2 = yyv_Index;
GetExpressionAtIndex(yy_1_1, yy_1_2, &yy_1_3);
yyv_Argument = yy_1_3;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_1_1_1 = yyv_Mode;
yy_2_1_1_2 = yyb + 0;
yy_2_1_1_2[0] = 3;
if (yyeq_MODE(yy_2_1_1_1, yy_2_1_1_2)) goto yyfl_56_3_2_1;
yy_2_1_2_1 = yyv_Argument;
CheckExpressionIsEvaluatable(yy_2_1_2_1);
goto yysl_56_3_2;
yyfl_56_3_2_1 : ;
goto yysl_56_3_2;
yysl_56_3_2 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_3_1_1_1 = yyv_Mode;
yy_3_1_1_2 = yyb + 0;
yy_3_1_1_2[0] = 2;
if (yyeq_MODE(yy_3_1_1_1, yy_3_1_1_2)) goto yyfl_56_3_3_1;
yy_3_1_2_1 = yyv_Argument;
CheckExpressionIsAssignable(yy_3_1_2_1);
goto yysl_56_3_3;
yyfl_56_3_3_1 : ;
goto yysl_56_3_3;
yysl_56_3_3 : ;
yyb = yysb;
}
yy_4_1 = yyv_Position;
yy_4_2 = yyv_SigTail;
yy_4_3 = yyv_Arguments;
CheckInvokeArguments(yy_4_1, yy_4_2, yy_4_3);
return;
yyfl_56_3 : ;
}
yyErr(2,1489);
}
CheckExpressionIsExplicitlyTypedVariable(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_Kind;
yy yy_1_2;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_2_1_1;
yy yy_2_2_1_2;
yy yy_2_3_1_1;
yy yy_2_3_1_2;
yy yy_3_1;
yy yyv_Info;
yy yy_3_2;
yy yyv_Type;
yy yy_4;
yy yy_5_1;
yy yy_5_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_57_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_57_1;
yyv_Kind = yy_1_2;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_1_1_1 = yyv_Kind;
yy_2_1_1_2 = yyb + 0;
yy_2_1_1_2[0] = 9;
if (! yyeq_SYMBOLKIND(yy_2_1_1_1, yy_2_1_1_2)) goto yyfl_57_1_2_1;
goto yysl_57_1_2;
yyfl_57_1_2_1 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_2_1_1 = yyv_Kind;
yy_2_2_1_2 = yyb + 0;
yy_2_2_1_2[0] = 8;
if (! yyeq_SYMBOLKIND(yy_2_2_1_1, yy_2_2_1_2)) goto yyfl_57_1_2_2;
goto yysl_57_1_2;
yyfl_57_1_2_2 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_2_3_1_1 = yyv_Kind;
yy_2_3_1_2 = yyb + 0;
yy_2_3_1_2[0] = 7;
if (! yyeq_SYMBOLKIND(yy_2_3_1_1, yy_2_3_1_2)) goto yyfl_57_1_2_3;
goto yysl_57_1_2;
yyfl_57_1_2_3 : ;
goto yyfl_57_1;
yysl_57_1_2 : ;
yyb = yysb;
}
yy_3_1 = yyv_Id;
if (! QuerySymbolId(yy_3_1, &yy_3_2)) goto yyfl_57_1;
yyv_Info = yy_3_2;
yy_4 = (yy) yyv_Info[7];
if (yy_4 == (yy) yyu) yyErr(1,1530);
yyv_Type = yy_4;
yy_5_1 = yyv_Type;
yy_5_2 = yyb + 0;
yy_5_2[0] = 17;
if (yyeq_TYPE(yy_5_1, yy_5_2)) goto yyfl_57_1;
return;
yyfl_57_1 : ;
}
{
yy yyb;
yy yyv_Expr;
yy yy_0_1;
yy yy_1_1;
yy yyv_Position;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Expr = yy_0_1;
yy_1_1 = yyv_Expr;
GetExpressionPosition(yy_1_1, &yy_1_2);
yyv_Position = yy_1_2;
yy_2_1 = yyv_Position;
Error_VariadicArgumentNotExplicitlyTyped(yy_2_1);
return;
yyfl_57_2 : ;
}
yyErr(2,1510);
}
CheckExpressionIsEvaluatable(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Info;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yy_1_1_2_1_1_1;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_1_3;
yy yyv_Signature;
yy yy_1_1_2_1_1_4;
yy yy_1_1_2_1_2_1;
yy yy_1_1_2_1_2_2;
yy yy_1_1_2_1_2_3;
yy yy_1_1_2_2_1_1;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_58_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Info = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Info;
if (! IsInvokeAllowed(yy_1_1_1_1)) goto yyfl_58_1_1_1;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_2_1_1_1 = yyb + 0;
yy_1_1_2_1_1_1[0] = 2;
yy_1_1_2_1_1_2 = yyv_Info;
yy_1_1_2_1_1_3 = yyv_Arguments;
if (! ComputeInvokeSignature(yy_1_1_2_1_1_1, yy_1_1_2_1_1_2, yy_1_1_2_1_1_3, &yy_1_1_2_1_1_4)) goto yyfl_58_1_1_1_2_1;
yyv_Signature = yy_1_1_2_1_1_4;
yy_1_1_2_1_2_1 = yyv_Position;
yy_1_1_2_1_2_2 = yyv_Signature;
yy_1_1_2_1_2_3 = yyv_Arguments;
CheckInvokeArguments(yy_1_1_2_1_2_1, yy_1_1_2_1_2_2, yy_1_1_2_1_2_3);
goto yysl_58_1_1_1_2;
yyfl_58_1_1_1_2_1 : ;
yy_1_1_2_2_1_1 = yyv_Position;
Error_NonEvaluatableExpressionUsedForInContext(yy_1_1_2_2_1_1);
goto yysl_58_1_1_1_2;
yysl_58_1_1_1_2 : ;
yyb = yysb;
}
goto yysl_58_1_1;
yyfl_58_1_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_SyntaxNotAllowedInThisContext(yy_1_2_1_1);
goto yysl_58_1_1;
yysl_58_1_1 : ;
yyb = yysb;
}
return;
yyfl_58_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_58_2 : ;
}
yyErr(2,1537);
}
CheckExpressionIsAssignable(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Info;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yy_1_1_2_1_1_1;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_1_3;
yy yyv_Signature;
yy yy_1_1_2_1_1_4;
yy yy_1_1_2_1_2_1;
yy yy_1_1_2_1_2_2;
yy yy_1_1_2_1_2_3;
yy yy_1_1_2_2_1_1;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_59_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Info = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Info;
if (! IsInvokeAllowed(yy_1_1_1_1)) goto yyfl_59_1_1_1;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_2_1_1_1 = yyb + 0;
yy_1_1_2_1_1_1[0] = 3;
yy_1_1_2_1_1_2 = yyv_Info;
yy_1_1_2_1_1_3 = yyv_Arguments;
if (! ComputeInvokeSignature(yy_1_1_2_1_1_1, yy_1_1_2_1_1_2, yy_1_1_2_1_1_3, &yy_1_1_2_1_1_4)) goto yyfl_59_1_1_1_2_1;
yyv_Signature = yy_1_1_2_1_1_4;
yy_1_1_2_1_2_1 = yyv_Position;
yy_1_1_2_1_2_2 = yyv_Signature;
yy_1_1_2_1_2_3 = yyv_Arguments;
CheckInvokeArguments(yy_1_1_2_1_2_1, yy_1_1_2_1_2_2, yy_1_1_2_1_2_3);
goto yysl_59_1_1_1_2;
yyfl_59_1_1_1_2_1 : ;
yy_1_1_2_2_1_1 = yyv_Position;
Error_NonAssignableExpressionUsedForOutContext(yy_1_1_2_2_1_1);
goto yysl_59_1_1_1_2;
yysl_59_1_1_1_2 : ;
yyb = yysb;
}
goto yysl_59_1_1;
yyfl_59_1_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_SyntaxNotAllowedInThisContext(yy_1_2_1_1);
goto yysl_59_1_1;
yysl_59_1_1 : ;
yyb = yysb;
}
return;
yyfl_59_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yyv_Name;
yy yy_1_1_2_2;
yy yy_1_1_3_1;
yy yy_1_1_3_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy yy_1_2_2_2;
yy yy_1_2_3_1;
yy yy_1_2_3_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_59_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_59_2_1_1;
if (yy_1_1_1_2[0] != 4) goto yyfl_59_2_1_1;
yy_1_1_2_1 = yyv_Id;
GetQualifiedName(yy_1_1_2_1, &yy_1_1_2_2);
yyv_Name = yy_1_1_2_2;
yy_1_1_3_1 = yyv_Position;
yy_1_1_3_2 = yyv_Name;
Error_CannotAssignToHandlerId(yy_1_1_3_1, yy_1_1_3_2);
goto yysl_59_2_1;
yyfl_59_2_1_1 : ;
yy_1_2_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_2_1_1, &yy_1_2_1_2)) goto yyfl_59_2_1_2;
if (yy_1_2_1_2[0] != 3) goto yyfl_59_2_1_2;
yy_1_2_2_1 = yyv_Id;
GetQualifiedName(yy_1_2_2_1, &yy_1_2_2_2);
yyv_Name = yy_1_2_2_2;
yy_1_2_3_1 = yyv_Position;
yy_1_2_3_2 = yyv_Name;
Error_CannotAssignToConstantId(yy_1_2_3_1, yy_1_2_3_2);
goto yysl_59_2_1;
yyfl_59_2_1_2 : ;
goto yysl_59_2_1;
yysl_59_2_1 : ;
yyb = yysb;
}
return;
yyfl_59_2 : ;
}
{
yy yyb;
yy yyv_Expr;
yy yy_0_1;
yy yy_1_1;
yy yyv_Position;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Expr = yy_0_1;
yy_1_1 = yyv_Expr;
GetExpressionPosition(yy_1_1, &yy_1_2);
yyv_Position = yy_1_2;
yy_2_1 = yyv_Position;
Error_NonAssignableExpressionUsedForOutContext(yy_2_1);
return;
yyfl_59_3 : ;
}
yyErr(2,1555);
}
int IsInvokeAllowed(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_60_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yy_1_1 = yyv_Head;
if (! IsInvokeModuleAllowed(yy_1_1)) goto yyfl_60_1;
return 1;
yyfl_60_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_60_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Tail;
if (! IsInvokeAllowed(yy_1_1)) goto yyfl_60_2;
return 1;
yyfl_60_2 : ;
}
return 0;
}
int IsInvokeModuleAllowed(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Info;
yy yy_0_1;
yy yyv_NameString;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yyv_Modules;
yy yy_3;
yy yy_4_1;
yy yy_4_2;
yy_0_1 = yyin_1;
yyv_Info = yy_0_1;
yy_1 = (yy) yyv_Info[4];
if (yy_1 == (yy) yyu) yyErr(1,1595);
yyv_NameString = yy_1;
yy_2_1 = yyv_NameString;
MakeNameLiteral(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3 = yyglov_IgnoredModulesList;
if (yy_3 == (yy) yyu) yyErr(1,1597);
yyv_Modules = yy_3;
yy_4_1 = yyv_Name;
yy_4_2 = yyv_Modules;
if (! IsNameNotInList(yy_4_1, yy_4_2)) goto yyfl_61_1;
return 1;
yyfl_61_1 : ;
}
return 0;
}
int ComputeInvokeSignature(yyin_1, yyin_2, yyin_3, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_0_2;
yy yyv_Head;
yy yy_0_2_1;
yy yyv_Tail;
yy yy_0_2_2;
yy yyv_Arguments;
yy yy_0_3;
yy yy_0_4;
yy yy_1_1_1_1;
yy yyv_Methods;
yy yy_1_1_2;
yy yy_1_1_3_1;
yy yy_1_1_3_2;
yy yy_1_1_3_3;
yy yyv_Signature;
yy yy_1_1_3_4;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_3;
yy yy_1_2_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Type = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_62_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Head = yy_0_2_1;
yyv_Tail = yy_0_2_2;
yyv_Arguments = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Head;
if (! IsInvokeModuleAllowed(yy_1_1_1_1)) goto yyfl_62_1_1_1;
yy_1_1_2 = (yy) yyv_Head[5];
if (yy_1_1_2 == (yy) yyu) yyErr(1,1605);
yyv_Methods = yy_1_1_2;
yy_1_1_3_1 = yyv_Type;
yy_1_1_3_2 = yyv_Methods;
yy_1_1_3_3 = yyv_Arguments;
if (! ComputeInvokeSignatureForMethods(yy_1_1_3_1, yy_1_1_3_2, yy_1_1_3_3, &yy_1_1_3_4)) goto yyfl_62_1_1_1;
yyv_Signature = yy_1_1_3_4;
goto yysl_62_1_1;
yyfl_62_1_1_1 : ;
yy_1_2_1_1 = yyv_Type;
yy_1_2_1_2 = yyv_Tail;
yy_1_2_1_3 = yyv_Arguments;
if (! ComputeInvokeSignature(yy_1_2_1_1, yy_1_2_1_2, yy_1_2_1_3, &yy_1_2_1_4)) goto yyfl_62_1_1_2;
yyv_Signature = yy_1_2_1_4;
goto yysl_62_1_1;
yyfl_62_1_1_2 : ;
goto yyfl_62_1;
yysl_62_1_1 : ;
yyb = yysb;
}
yy_0_4 = yyv_Signature;
*yyout_1 = yy_0_4;
return 1;
yyfl_62_1 : ;
}
return 0;
}
int ComputeInvokeSignatureForMethods(yyin_1, yyin_2, yyin_3, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy *yyout_1;
{
{
yy yyb;
yy yyv_WantType;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_IsType;
yy yy_0_2_2;
yy yyv_Signature;
yy yy_0_2_3;
yy yyv_Tail;
yy yy_0_2_4;
yy yyv_Arguments;
yy yy_0_3;
yy yy_0_4;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_3_1;
yy yyv_ArgCount;
yy yy_1_1_3_2;
yy yy_1_1_4_1;
yy yyv_ParamCount;
yy yy_1_1_4_2;
yy yy_1_1_5_1;
yy yy_1_1_5_2;
yy yy_1_1_6_1;
yy yyv_OutSig;
yy yy_1_1_6_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_3;
yy yy_1_2_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_WantType = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_63_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_IsType = yy_0_2_2;
yyv_Signature = yy_0_2_3;
yyv_Tail = yy_0_2_4;
yyv_Arguments = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_WantType;
yy_1_1_1_2 = yyv_IsType;
if (! yyeq_INVOKEMETHODTYPE(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_63_1_1_1;
yy_1_1_2_1 = yyv_Arguments;
yy_1_1_2_2 = yyv_Signature;
if (! AreAllArgumentsDefinedForInvokeMethod(yy_1_1_2_1, yy_1_1_2_2)) goto yyfl_63_1_1_1;
yy_1_1_3_1 = yyv_Arguments;
CountDefinedArguments(yy_1_1_3_1, &yy_1_1_3_2);
yyv_ArgCount = yy_1_1_3_2;
yy_1_1_4_1 = yyv_Signature;
CountInvokeParameters(yy_1_1_4_1, &yy_1_1_4_2);
yyv_ParamCount = yy_1_1_4_2;
yy_1_1_5_1 = yyv_ArgCount;
yy_1_1_5_2 = yyv_ParamCount;
if ((intptr_t)yy_1_1_5_1 != (intptr_t)yy_1_1_5_2) goto yyfl_63_1_1_1;
yy_1_1_6_1 = yyv_Signature;
yy_1_1_6_2 = yy_1_1_6_1;
yyv_OutSig = yy_1_1_6_2;
goto yysl_63_1_1;
yyfl_63_1_1_1 : ;
yy_1_2_1_1 = yyv_WantType;
yy_1_2_1_2 = yyv_Tail;
yy_1_2_1_3 = yyv_Arguments;
if (! ComputeInvokeSignatureForMethods(yy_1_2_1_1, yy_1_2_1_2, yy_1_2_1_3, &yy_1_2_1_4)) goto yyfl_63_1_1_2;
yyv_OutSig = yy_1_2_1_4;
goto yysl_63_1_1;
yyfl_63_1_1_2 : ;
goto yyfl_63_1;
yysl_63_1_1 : ;
yyb = yysb;
}
yy_0_4 = yyv_OutSig;
*yyout_1 = yy_0_4;
return 1;
yyfl_63_1 : ;
}
return 0;
}
GetExpressionPosition(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_69_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_69_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_69_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_69_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_69_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_69_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_69_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_69_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_69_9;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_69_10;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_69_11;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_69_12;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_69_13;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_13 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_69_14;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_14 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_69_15;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_15 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 18) goto yyfl_69_16;
GetUndefinedPosition(&yy_1_1);
yyv_Position = yy_1_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return;
yyfl_69_16 : ;
}
yyErr(2,1631);
}
int CheckDeclaredTypes(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_DEFINITION();
extern yybroadcast_PARAMETER();
extern yybroadcast_STATEMENT();
/*=== Sweep DEFINITION ===*/
if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_1_4;
yy yy_1_1_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_70_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Type = yy_0_1_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Type;
if (! IsHighLevelType(yy_1_1_1_1)) goto yyfl_70_10001_1_1;
goto yysl_70_10001_1;
yyfl_70_10001_1_1 : ;
goto yysl_70_10001_1;
yysl_70_10001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_70_10001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Parameters;
yy yy_0_1_4_1;
yy yyv_ReturnType;
yy yy_0_1_4_2;
yy yy_0_1_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_70_10002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Position = yy_0_1_1;
if (yy_0_1_4[0] != 1) goto yyfl_70_10002;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Parameters = yy_0_1_4_1;
yyv_ReturnType = yy_0_1_4_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_ReturnType;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 17) goto yyfl_70_10002_1_1;
yy_1_1_2_1 = yyv_Position;
Error_NoReturnTypeSpecifiedForForeignHandler(yy_1_1_2_1);
goto yysl_70_10002_1;
yyfl_70_10002_1_1 : ;
goto yysl_70_10002_1;
yysl_70_10002_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Parameters;
CheckForeignHandlerParameterTypes(yy_2_1);
*yyout_1 = yyin_2;
return 1;
yyfl_70_10002 : ;
}
return 0;
}
/*===*/
/*=== Sweep PARAMETER ===*/
else if (yytp == (intptr_t) yybroadcast_PARAMETER) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_1_4;
yy yy_1_1_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_70_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Type = yy_0_1_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Type;
if (! IsHighLevelType(yy_1_1_1_1)) goto yyfl_70_20001_1_1;
goto yysl_70_20001_1;
yyfl_70_20001_1_1 : ;
goto yysl_70_20001_1;
yysl_70_20001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_70_20001 : ;
}
return 0;
}
/*===*/
/*=== Sweep STATEMENT ===*/
else if (yytp == (intptr_t) yybroadcast_STATEMENT) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_70_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Type = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Type;
if (! IsHighLevelType(yy_1_1_1_1)) goto yyfl_70_30001_1_1;
goto yysl_70_30001_1;
yyfl_70_30001_1_1 : ;
goto yysl_70_30001_1;
yysl_70_30001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_70_30001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
CheckForeignHandlerParameterTypes(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_1_4;
yy yyv_Rest;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_71_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_71_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
if (yy_0_1_1_2[0] != 5) goto yyfl_71_1;
yyv_Rest = yy_0_1_2;
yy_1_1 = yyv_Rest;
CheckForeignHandlerParameterTypes(yy_1_1);
return;
yyfl_71_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yyv_Type;
yy yy_0_1_1_4;
yy yyv_Rest;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_71_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_71_2;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Position = yy_0_1_1_1;
yyv_Type = yy_0_1_1_4;
yyv_Rest = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Type;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 17) goto yyfl_71_2_1_1;
yy_1_1_2_1 = yyv_Position;
Error_NoTypeSpecifiedForForeignHandlerParameter(yy_1_1_2_1);
goto yysl_71_2_1;
yyfl_71_2_1_1 : ;
goto yysl_71_2_1;
yysl_71_2_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Rest;
CheckForeignHandlerParameterTypes(yy_2_1);
return;
yyfl_71_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_71_3;
return;
yyfl_71_3 : ;
}
yyErr(2,1686);
}
int IsHighLevelType(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_72_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_72_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_72_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_72_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yyv_Info;
yy yy_1_1_1_2;
yy yyv_Type;
yy yy_1_1_2;
yy yy_1_1_3_1;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_72_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_72_4_1_1;
yyv_Info = yy_1_1_1_2;
yy_1_1_2 = (yy) yyv_Info[7];
if (yy_1_1_2 == (yy) yyu) yyErr(1,1711);
yyv_Type = yy_1_1_2;
yy_1_1_3_1 = yyv_Type;
if (! IsHighLevelType(yy_1_1_3_1)) goto yyfl_72_4_1_1;
goto yysl_72_4_1;
yyfl_72_4_1_1 : ;
yy_1_2_1_1 = yyv_Id;
QueryId(yy_1_2_1_1, &yy_1_2_1_2);
if (yy_1_2_1_2[0] != 6) goto yyfl_72_4_1_2;
goto yysl_72_4_1;
yyfl_72_4_1_2 : ;
goto yyfl_72_4;
yysl_72_4_1 : ;
yyb = yysb;
}
return 1;
yyfl_72_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_72_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Type = yy_0_1_2;
yy_1_1 = yyv_Type;
if (! IsHighLevelType(yy_1_1)) goto yyfl_72_5;
return 1;
yyfl_72_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_72_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
return 1;
yyfl_72_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_72_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_72_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_72_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_72_9;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_72_10;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_72_11;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_72_12;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_72_13;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_13 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_72_14;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_72_14 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 16) goto yyfl_72_15;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_72_15 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 17) goto yyfl_72_16;
return 1;
yyfl_72_16 : ;
}
return 0;
}
int CheckIdentifiers(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_MODULE();
extern yybroadcast_DEFINITION();
extern yybroadcast_PARAMETER();
extern yybroadcast_STATEMENT();
/*=== Sweep MODULE ===*/
if (yytp == (intptr_t) yybroadcast_MODULE) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Definitions;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_73_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_3;
yyv_Definitions = yy_0_1_4;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForNamespace(yy_1_1);
yy_2_1 = yyv_Definitions;
{
extern CheckIdentifiers();
yybroadcast_DEFINITION(yy_2_1, 0, &yynull, CheckIdentifiers);
}
*yyout_1 = yyin_2;
return 1;
yyfl_73_10001 : ;
}
return 0;
}
/*===*/
/*=== Sweep DEFINITION ===*/
else if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_73_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_3;
yyv_Type = yy_0_1_4;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
yy_2_1 = yyv_Type;
{
extern CheckIdentifiers();
yybroadcast_TYPE(yy_2_1, 0, &yynull, CheckIdentifiers);
}
*yyout_1 = yyin_2;
return 1;
yyfl_73_20001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Value;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_73_20002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_3;
yyv_Value = yy_0_1_4;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
yy_2_1 = yyv_Value;
{
extern CheckIdentifiers();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckIdentifiers);
}
*yyout_1 = yyin_2;
return 1;
yyfl_73_20002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_73_20003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_3;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_73_20003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Signature;
yy yy_0_1_4;
yy yyv_Definitions;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_73_20004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Id = yy_0_1_3;
yyv_Signature = yy_0_1_4;
yyv_Definitions = yy_0_1_5;
yyv_Body = yy_0_1_6;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
yy_2_1 = yyv_Signature;
{
extern CheckIdentifiers();
yybroadcast_SIGNATURE(yy_2_1, 0, &yynull, CheckIdentifiers);
}
yy_3_1 = yyv_Definitions;
{
extern CheckIdentifiers();
yybroadcast_DEFINITION(yy_3_1, 0, &yynull, CheckIdentifiers);
}
yy_4_1 = yyv_Body;
{
extern CheckIdentifiers();
yybroadcast_STATEMENT(yy_4_1, 0, &yynull, CheckIdentifiers);
}
*yyout_1 = yyin_2;
return 1;
yyfl_73_20004 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Signature;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_73_20005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Id = yy_0_1_3;
yyv_Signature = yy_0_1_4;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
yy_2_1 = yyv_Signature;
{
extern CheckIdentifiers();
yybroadcast_SIGNATURE(yy_2_1, 0, &yynull, CheckIdentifiers);
}
*yyout_1 = yyin_2;
return 1;
yyfl_73_20005 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_73_20006;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Id = yy_0_1_3;
*yyout_1 = yyin_2;
return 1;
yyfl_73_20006 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Signature;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_73_20007;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_3;
yyv_Signature = yy_0_1_4;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
yy_2_1 = yyv_Signature;
{
extern CheckIdentifiers();
yybroadcast_SIGNATURE(yy_2_1, 0, &yynull, CheckIdentifiers);
}
*yyout_1 = yyin_2;
return 1;
yyfl_73_20007 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yy_0_1_7;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_73_20008;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yy_0_1_7 = ((yy)yy_0_1[7]);
yyv_Id = yy_0_1_3;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_73_20008 : ;
}
return 0;
}
/*===*/
/*=== Sweep PARAMETER ===*/
else if (yytp == (intptr_t) yybroadcast_PARAMETER) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_73_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_3;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_73_30001 : ;
}
return 0;
}
/*===*/
/*=== Sweep STATEMENT ===*/
else if (yytp == (intptr_t) yybroadcast_STATEMENT) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_73_40001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
CheckIdIsSuitableForDefinition(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_73_40001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
CheckIdIsSuitableForNamespace(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yyv_Position;
yy yy_2;
yy yyv_Namespace;
yy yy_3;
yy yy_4_1_1_1;
yy yy_4_1_2_1_1_1;
yy yy_4_1_2_2_1_1;
yy yy_4_1_2_2_1_2;
yy yy_4_2_1_1;
yy yy_4_2_1_2;
yy yy_5_1_1_1;
yy yy_5_1_1_2;
yy yyv_NextId;
yy yy_5_1_1_2_1;
yy yy_5_1_2_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,1795);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,1796);
yyv_Position = yy_2;
yy_3 = (yy) yyv_Id[4];
if (yy_3 == (yy) yyu) yyErr(1,1797);
yyv_Namespace = yy_3;
{
yy yysb = yyb;
yy_4_1_1_1 = yyv_Name;
if (! IsNameValidForNamespace(yy_4_1_1_1)) goto yyfl_74_1_4_1;
{
yy yysb = yyb;
yy_4_1_2_1_1_1 = yyv_Name;
if (! IsNameSuitableForNamespace(yy_4_1_2_1_1_1)) goto yyfl_74_1_4_1_2_1;
goto yysl_74_1_4_1_2;
yyfl_74_1_4_1_2_1 : ;
yy_4_1_2_2_1_1 = yyv_Position;
yy_4_1_2_2_1_2 = yyv_Name;
Warning_UnsuitableNameForNamespace(yy_4_1_2_2_1_1, yy_4_1_2_2_1_2);
goto yysl_74_1_4_1_2;
yysl_74_1_4_1_2 : ;
yyb = yysb;
}
goto yysl_74_1_4;
yyfl_74_1_4_1 : ;
yy_4_2_1_1 = yyv_Position;
yy_4_2_1_2 = yyv_Name;
Error_InvalidNameForNamespace(yy_4_2_1_1, yy_4_2_1_2);
goto yysl_74_1_4;
yysl_74_1_4 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_5_1_1_1 = yyv_Namespace;
yy_5_1_1_2 = yy_5_1_1_1;
if (yy_5_1_1_2[0] != 1) goto yyfl_74_1_5_1;
yy_5_1_1_2_1 = ((yy)yy_5_1_1_2[1]);
yyv_NextId = yy_5_1_1_2_1;
yy_5_1_2_1 = yyv_NextId;
CheckIdIsSuitableForNamespace(yy_5_1_2_1);
goto yysl_74_1_5;
yyfl_74_1_5_1 : ;
goto yysl_74_1_5;
yysl_74_1_5 : ;
yyb = yysb;
}
return;
}
}
CheckIdIsSuitableForDefinition(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yyv_Position;
yy yy_2;
yy yyv_Namespace;
yy yy_3;
yy yy_4_1_1_1;
yy yy_4_2_1_1;
yy yy_4_2_1_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,1817);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[1];
if (yy_2 == (yy) yyu) yyErr(1,1818);
yyv_Position = yy_2;
yy_3 = (yy) yyv_Id[4];
if (yy_3 == (yy) yyu) yyErr(1,1819);
yyv_Namespace = yy_3;
{
yy yysb = yyb;
yy_4_1_1_1 = yyv_Name;
if (! IsNameSuitableForDefinition(yy_4_1_1_1)) goto yyfl_75_1_4_1;
goto yysl_75_1_4;
yyfl_75_1_4_1 : ;
yy_4_2_1_1 = yyv_Position;
yy_4_2_1_2 = yyv_Name;
Warning_UnsuitableNameForDefinition(yy_4_2_1_1, yy_4_2_1_2);
goto yysl_75_1_4;
yysl_75_1_4 : ;
yyb = yysb;
}
return;
}
}
int CheckRepeats(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_STATEMENT();
/*=== Sweep STATEMENT ===*/
if (yytp == (intptr_t) yybroadcast_STATEMENT) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Body;
yy yy_0_1_2;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_1_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 4) goto yyfl_76_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Body = yy_0_1_2;
yyv_Depth = yy_0_2;
yy_1_1 = yyv_Body;
yy_1_2_1 = yyv_Depth;
yy_1_2_2 = ((yy)1);
yy_1_2 = (yy)(((intptr_t)yy_1_2_1)+((intptr_t)yy_1_2_2));
{
extern CheckRepeats();
yybroadcast_STATEMENT(yy_1_1, yy_1_2, &yynull, CheckRepeats);
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Body;
yy yy_0_1_3;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_1_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 5) goto yyfl_76_10002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Body = yy_0_1_3;
yyv_Depth = yy_0_2;
yy_1_1 = yyv_Body;
yy_1_2_1 = yyv_Depth;
yy_1_2_2 = ((yy)1);
yy_1_2 = (yy)(((intptr_t)yy_1_2_1)+((intptr_t)yy_1_2_2));
{
extern CheckRepeats();
yybroadcast_STATEMENT(yy_1_1, yy_1_2, &yynull, CheckRepeats);
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Body;
yy yy_0_1_3;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_1_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 6) goto yyfl_76_10003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Body = yy_0_1_3;
yyv_Depth = yy_0_2;
yy_1_1 = yyv_Body;
yy_1_2_1 = yyv_Depth;
yy_1_2_2 = ((yy)1);
yy_1_2 = (yy)(((intptr_t)yy_1_2_1)+((intptr_t)yy_1_2_2));
{
extern CheckRepeats();
yybroadcast_STATEMENT(yy_1_1, yy_1_2, &yynull, CheckRepeats);
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Body;
yy yy_0_1_3;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_1_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 7) goto yyfl_76_10004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Body = yy_0_1_3;
yyv_Depth = yy_0_2;
yy_1_1 = yyv_Body;
yy_1_2_1 = yyv_Depth;
yy_1_2_2 = ((yy)1);
yy_1_2 = (yy)(((intptr_t)yy_1_2_1)+((intptr_t)yy_1_2_2));
{
extern CheckRepeats();
yybroadcast_STATEMENT(yy_1_1, yy_1_2, &yynull, CheckRepeats);
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10004 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_1_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 8) goto yyfl_76_10005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Body = yy_0_1_6;
yyv_Depth = yy_0_2;
yy_1_1 = yyv_Body;
yy_1_2_1 = yyv_Depth;
yy_1_2_2 = ((yy)1);
yy_1_2 = (yy)(((intptr_t)yy_1_2_1)+((intptr_t)yy_1_2_2));
{
extern CheckRepeats();
yybroadcast_STATEMENT(yy_1_1, yy_1_2, &yynull, CheckRepeats);
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10005 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_1_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 9) goto yyfl_76_10006;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Body = yy_0_1_6;
yyv_Depth = yy_0_2;
yy_1_1 = yyv_Body;
yy_1_2_1 = yyv_Depth;
yy_1_2_2 = ((yy)1);
yy_1_2 = (yy)(((intptr_t)yy_1_2_1)+((intptr_t)yy_1_2_2));
{
extern CheckRepeats();
yybroadcast_STATEMENT(yy_1_1, yy_1_2, &yynull, CheckRepeats);
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10006 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Body;
yy yy_0_1_4;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_2_1;
yy yy_1_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 10) goto yyfl_76_10007;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Body = yy_0_1_4;
yyv_Depth = yy_0_2;
yy_1_1 = yyv_Body;
yy_1_2_1 = yyv_Depth;
yy_1_2_2 = ((yy)1);
yy_1_2 = (yy)(((intptr_t)yy_1_2_1)+((intptr_t)yy_1_2_2));
{
extern CheckRepeats();
yybroadcast_STATEMENT(yy_1_1, yy_1_2, &yynull, CheckRepeats);
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10007 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 11) goto yyfl_76_10008;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yyv_Depth = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Depth;
yy_1_1_1_2 = ((yy)0);
if ((intptr_t)yy_1_1_1_1 <= (intptr_t)yy_1_1_1_2) goto yyfl_76_10008_1_1;
goto yysl_76_10008_1;
yyfl_76_10008_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_NextRepeatOutOfContext(yy_1_2_1_1);
goto yysl_76_10008_1;
yysl_76_10008_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10008 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Depth;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 12) goto yyfl_76_10009;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yyv_Depth = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Depth;
yy_1_1_1_2 = ((yy)0);
if ((intptr_t)yy_1_1_1_1 <= (intptr_t)yy_1_1_1_2) goto yyfl_76_10009_1_1;
goto yysl_76_10009_1;
yyfl_76_10009_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_ExitRepeatOutOfContext(yy_1_2_1_1);
goto yysl_76_10009_1;
yysl_76_10009_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_76_10009 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
CheckOpcode(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_Arguments;
yy yy_0_3;
yy yy_1_1_1_1;
yy yyv_String;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yyv_Opcode;
yy yy_1_1_2_2;
yy yy_1_1_3_1_1_1;
yy yyv_Length;
yy yy_1_1_3_1_1_2;
yy yy_1_1_3_1_2_1;
yy yy_1_1_3_1_2_2;
yy yy_1_1_3_1_3_1;
yy yy_1_1_3_1_3_2;
yy yy_1_1_3_1_3_3;
yy yy_1_1_3_1_3_4;
yy yy_1_1_3_2_1_1;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Name = yy_0_2;
yyv_Arguments = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Name;
GetStringOfNameLiteral(yy_1_1_1_1, &yy_1_1_1_2);
yyv_String = yy_1_1_1_2;
yy_1_1_2_1 = yyv_String;
if (! BytecodeLookup(yy_1_1_2_1, &yy_1_1_2_2)) goto yyfl_77_1_1_1;
yyv_Opcode = yy_1_1_2_2;
{
yy yysb = yyb;
yy_1_1_3_1_1_1 = yyv_Arguments;
QueryExpressionListLength(yy_1_1_3_1_1_1, &yy_1_1_3_1_1_2);
yyv_Length = yy_1_1_3_1_1_2;
yy_1_1_3_1_2_1 = yyv_Opcode;
yy_1_1_3_1_2_2 = yyv_Length;
if (! BytecodeIsValidArgumentCount(yy_1_1_3_1_2_1, yy_1_1_3_1_2_2)) goto yyfl_77_1_1_1_3_1;
yy_1_1_3_1_3_1 = yyv_Position;
yy_1_1_3_1_3_2 = yyv_Opcode;
yy_1_1_3_1_3_3 = yyv_Arguments;
yy_1_1_3_1_3_4 = ((yy)0);
CheckOpcodeArguments(yy_1_1_3_1_3_1, yy_1_1_3_1_3_2, yy_1_1_3_1_3_3, yy_1_1_3_1_3_4);
goto yysl_77_1_1_1_3;
yyfl_77_1_1_1_3_1 : ;
yy_1_1_3_2_1_1 = yyv_Position;
Error_IllegalNumberOfArgumentsForOpcode(yy_1_1_3_2_1_1);
goto yysl_77_1_1_1_3;
yysl_77_1_1_1_3 : ;
yyb = yysb;
}
goto yysl_77_1_1;
yyfl_77_1_1_1 : ;
yy_1_2_1_1 = yyv_Position;
yy_1_2_1_2 = yyv_Name;
Error_UnknownOpcode(yy_1_2_1_1, yy_1_2_1_2);
goto yysl_77_1_1;
yysl_77_1_1 : ;
yyb = yysb;
}
return;
}
}
CheckOpcodeArguments(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Opcode;
yy yy_0_2;
yy yy_0_3;
yy yyv_Head;
yy yy_0_3_1;
yy yyv_Tail;
yy yy_0_3_2;
yy yyv_Index;
yy yy_0_4;
yy yy_1_1;
yy yy_1_2;
yy yyv_ParamType;
yy yy_1_3;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_3_4;
yy yy_3_4_1;
yy yy_3_4_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_Position = yy_0_1;
yyv_Opcode = yy_0_2;
if (yy_0_3[0] != 1) goto yyfl_78_1;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
yyv_Head = yy_0_3_1;
yyv_Tail = yy_0_3_2;
yyv_Index = yy_0_4;
yy_1_1 = yyv_Opcode;
yy_1_2 = yyv_Index;
BytecodeDescribeParameter(yy_1_1, yy_1_2, &yy_1_3);
yyv_ParamType = yy_1_3;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_ParamType;
yy_2_3 = yyv_Head;
CheckOpcodeArgument(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Opcode;
yy_3_3 = yyv_Tail;
yy_3_4_1 = yyv_Index;
yy_3_4_2 = ((yy)1);
yy_3_4 = (yy)(((intptr_t)yy_3_4_1)+((intptr_t)yy_3_4_2));
CheckOpcodeArguments(yy_3_1, yy_3_2, yy_3_3, yy_3_4);
return;
yyfl_78_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Opcode;
yy yy_0_2;
yy yy_0_3;
yy yyv_Index;
yy yy_0_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_Position = yy_0_1;
yyv_Opcode = yy_0_2;
if (yy_0_3[0] != 2) goto yyfl_78_2;
yyv_Index = yy_0_4;
return;
yyfl_78_2 : ;
}
yyErr(2,1886);
}
CheckOpcodeArgument(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Index;
yy yy_0_2;
yy yyv_Argument;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Index = yy_0_2;
yyv_Argument = yy_0_3;
yy_1_1 = yyv_Index;
yy_1_2 = ((yy)1);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_79_1;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_Argument;
CheckOpcodeArgIsLabel(yy_2_1, yy_2_2);
return;
yyfl_79_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Index;
yy yy_0_2;
yy yyv_Argument;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Index = yy_0_2;
yyv_Argument = yy_0_3;
yy_1_1 = yyv_Index;
yy_1_2 = ((yy)2);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_79_2;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_Argument;
CheckOpcodeArgIsRegister(yy_2_1, yy_2_2);
return;
yyfl_79_2 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Index;
yy yy_0_2;
yy yyv_Argument;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Index = yy_0_2;
yyv_Argument = yy_0_3;
yy_1_1 = yyv_Index;
yy_1_2 = ((yy)3);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_79_3;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_Argument;
CheckOpcodeArgIsConstant(yy_2_1, yy_2_2);
return;
yyfl_79_3 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Index;
yy yy_0_2;
yy yyv_Argument;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Index = yy_0_2;
yyv_Argument = yy_0_3;
yy_1_1 = yyv_Index;
yy_1_2 = ((yy)4);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_79_4;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_Argument;
CheckOpcodeArgIsDefinition(yy_2_1, yy_2_2);
return;
yyfl_79_4 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Index;
yy yy_0_2;
yy yyv_Argument;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Index = yy_0_2;
yyv_Argument = yy_0_3;
yy_1_1 = yyv_Index;
yy_1_2 = ((yy)5);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_79_5;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_Argument;
CheckOpcodeArgIsVariable(yy_2_1, yy_2_2);
return;
yyfl_79_5 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Index;
yy yy_0_2;
yy yyv_Argument;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Index = yy_0_2;
yyv_Argument = yy_0_3;
yy_1_1 = yyv_Index;
yy_1_2 = ((yy)6);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_79_6;
yy_2_1 = yyv_Position;
yy_2_2 = yyv_Argument;
CheckOpcodeArgIsHandler(yy_2_1, yy_2_2);
return;
yyfl_79_6 : ;
}
yyErr(2,1897);
}
CheckOpcodeArgIsLabel(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_Position;
yy yy_1_1_1_2_1;
yy yyv_Id;
yy yy_1_1_1_2_2;
yy yy_1_1_2_1;
yy yyv_Symbol;
yy yy_1_1_2_2;
yy yy_1_1_3;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Head = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Head;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 8) goto yyfl_80_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yyv_Position = yy_1_1_1_2_1;
yyv_Id = yy_1_1_1_2_2;
yy_1_1_2_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1_2_1, &yy_1_1_2_2)) goto yyfl_80_1_1_1;
yyv_Symbol = yy_1_1_2_2;
yy_1_1_3 = (yy) yyv_Symbol[6];
if (yy_1_1_3 == (yy) yyu) yyErr(1,1930);
if (yy_1_1_3[0] != 11) goto yyfl_80_1_1_1;
goto yysl_80_1_1;
yyfl_80_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
GetExpressionPosition(yy_1_2_1_1, &yy_1_2_1_2);
yyv_Position = yy_1_2_1_2;
yy_1_2_2_1 = yyv_Position;
Error_OpcodeArgumentMustBeLabel(yy_1_2_2_1);
goto yysl_80_1_1;
yysl_80_1_1 : ;
yyb = yysb;
}
return;
}
}
CheckOpcodeArgIsRegister(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_Position;
yy yy_1_1_1_2_1;
yy yyv_Id;
yy yy_1_1_1_2_2;
yy yy_1_1_2_1_1_1;
yy yyv_Symbol;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_2_1_1;
yy yy_1_1_2_1_2_2_1;
yy yy_1_1_2_2_1_1;
yy yy_1_1_2_2_1_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Head = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Head;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 8) goto yyfl_81_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yyv_Position = yy_1_1_1_2_1;
yyv_Id = yy_1_1_1_2_2;
{
yy yysb = yyb;
yy_1_1_2_1_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1_2_1_1_1, &yy_1_1_2_1_1_2)) goto yyfl_81_1_1_1_2_1;
yyv_Symbol = yy_1_1_2_1_1_2;
{
yy yysb = yyb;
yy_1_1_2_1_2_1_1 = (yy) yyv_Symbol[6];
if (yy_1_1_2_1_2_1_1 == (yy) yyu) yyErr(1,1945);
if (yy_1_1_2_1_2_1_1[0] != 9) goto yyfl_81_1_1_1_2_1_2_1;
goto yysl_81_1_1_1_2_1_2;
yyfl_81_1_1_1_2_1_2_1 : ;
yy_1_1_2_1_2_2_1 = (yy) yyv_Symbol[6];
if (yy_1_1_2_1_2_2_1 == (yy) yyu) yyErr(1,1947);
if (yy_1_1_2_1_2_2_1[0] != 8) goto yyfl_81_1_1_1_2_1_2_2;
goto yysl_81_1_1_1_2_1_2;
yyfl_81_1_1_1_2_1_2_2 : ;
goto yyfl_81_1_1_1_2_1;
yysl_81_1_1_1_2_1_2 : ;
yyb = yysb;
}
goto yysl_81_1_1_1_2;
yyfl_81_1_1_1_2_1 : ;
yy_1_1_2_2_1_1 = yyv_Id;
QueryId(yy_1_1_2_2_1_1, &yy_1_1_2_2_1_2);
if (yy_1_1_2_2_1_2[0] != 6) goto yyfl_81_1_1_1_2_2;
goto yysl_81_1_1_1_2;
yyfl_81_1_1_1_2_2 : ;
goto yyfl_81_1_1_1;
yysl_81_1_1_1_2 : ;
yyb = yysb;
}
goto yysl_81_1_1;
yyfl_81_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
GetExpressionPosition(yy_1_2_1_1, &yy_1_2_1_2);
yyv_Position = yy_1_2_1_2;
yy_1_2_2_1 = yyv_Position;
Error_OpcodeArgumentMustBeRegister(yy_1_2_2_1);
goto yysl_81_1_1;
yysl_81_1_1 : ;
yyb = yysb;
}
return;
}
}
CheckOpcodeArgIsConstant(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_2_1_1;
yy yyv_Position;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Head = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Head;
if (! IsExpressionSimpleConstant(yy_1_1_1_1)) goto yyfl_82_1_1_1;
goto yysl_82_1_1;
yyfl_82_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
GetExpressionPosition(yy_1_2_1_1, &yy_1_2_1_2);
yyv_Position = yy_1_2_1_2;
yy_1_2_2_1 = yyv_Position;
Error_OpcodeArgumentMustBeConstant(yy_1_2_2_1);
goto yysl_82_1_1;
yysl_82_1_1 : ;
yyb = yysb;
}
return;
}
}
CheckOpcodeArgIsHandler(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_Position;
yy yy_1_1_1_2_1;
yy yyv_Id;
yy yy_1_1_1_2_2;
yy yy_1_1_2_1_1_1;
yy yyv_Symbol;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_2;
yy yy_1_1_2_2_1_1;
yy yy_1_1_2_2_1_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Head = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Head;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 8) goto yyfl_83_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yyv_Position = yy_1_1_1_2_1;
yyv_Id = yy_1_1_1_2_2;
{
yy yysb = yyb;
yy_1_1_2_1_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1_2_1_1_1, &yy_1_1_2_1_1_2)) goto yyfl_83_1_1_1_2_1;
yyv_Symbol = yy_1_1_2_1_1_2;
yy_1_1_2_1_2 = (yy) yyv_Symbol[6];
if (yy_1_1_2_1_2 == (yy) yyu) yyErr(1,1976);
if (yy_1_1_2_1_2[0] != 4) goto yyfl_83_1_1_1_2_1;
goto yysl_83_1_1_1_2;
yyfl_83_1_1_1_2_1 : ;
yy_1_1_2_2_1_1 = yyv_Id;
QueryId(yy_1_1_2_2_1_1, &yy_1_1_2_2_1_2);
if (yy_1_1_2_2_1_2[0] != 6) goto yyfl_83_1_1_1_2_2;
goto yysl_83_1_1_1_2;
yyfl_83_1_1_1_2_2 : ;
goto yyfl_83_1_1_1;
yysl_83_1_1_1_2 : ;
yyb = yysb;
}
goto yysl_83_1_1;
yyfl_83_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
GetExpressionPosition(yy_1_2_1_1, &yy_1_2_1_2);
yyv_Position = yy_1_2_1_2;
yy_1_2_2_1 = yyv_Position;
Error_OpcodeArgumentMustBeHandler(yy_1_2_2_1);
goto yysl_83_1_1;
yysl_83_1_1 : ;
yyb = yysb;
}
return;
}
}
CheckOpcodeArgIsVariable(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_Position;
yy yy_1_1_1_2_1;
yy yyv_Id;
yy yy_1_1_1_2_2;
yy yy_1_1_2_1_1_1;
yy yyv_Symbol;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_2;
yy yy_1_1_2_2_1_1;
yy yy_1_1_2_2_1_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Head = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Head;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 8) goto yyfl_84_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yyv_Position = yy_1_1_1_2_1;
yyv_Id = yy_1_1_1_2_2;
{
yy yysb = yyb;
yy_1_1_2_1_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1_2_1_1_1, &yy_1_1_2_1_1_2)) goto yyfl_84_1_1_1_2_1;
yyv_Symbol = yy_1_1_2_1_1_2;
yy_1_1_2_1_2 = (yy) yyv_Symbol[6];
if (yy_1_1_2_1_2 == (yy) yyu) yyErr(1,1994);
if (yy_1_1_2_1_2[0] != 7) goto yyfl_84_1_1_1_2_1;
goto yysl_84_1_1_1_2;
yyfl_84_1_1_1_2_1 : ;
yy_1_1_2_2_1_1 = yyv_Id;
QueryId(yy_1_1_2_2_1_1, &yy_1_1_2_2_1_2);
if (yy_1_1_2_2_1_2[0] != 6) goto yyfl_84_1_1_1_2_2;
goto yysl_84_1_1_1_2;
yyfl_84_1_1_1_2_2 : ;
goto yyfl_84_1_1_1;
yysl_84_1_1_1_2 : ;
yyb = yysb;
}
goto yysl_84_1_1;
yyfl_84_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
GetExpressionPosition(yy_1_2_1_1, &yy_1_2_1_2);
yyv_Position = yy_1_2_1_2;
yy_1_2_2_1 = yyv_Position;
Error_OpcodeArgumentMustBeVariable(yy_1_2_2_1);
goto yysl_84_1_1;
yysl_84_1_1 : ;
yyb = yysb;
}
return;
}
}
CheckOpcodeArgIsDefinition(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_Position;
yy yy_1_1_1_2_1;
yy yyv_Id;
yy yy_1_1_1_2_2;
yy yy_1_1_2_1_1_1;
yy yyv_Symbol;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_2_1_1;
yy yy_1_1_2_1_2_2_1;
yy yy_1_1_2_1_2_3_1;
yy yy_1_1_2_2_1_1;
yy yy_1_1_2_2_1_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Head = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Head;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 8) goto yyfl_85_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yyv_Position = yy_1_1_1_2_1;
yyv_Id = yy_1_1_1_2_2;
{
yy yysb = yyb;
yy_1_1_2_1_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1_2_1_1_1, &yy_1_1_2_1_1_2)) goto yyfl_85_1_1_1_2_1;
yyv_Symbol = yy_1_1_2_1_1_2;
{
yy yysb = yyb;
yy_1_1_2_1_2_1_1 = (yy) yyv_Symbol[6];
if (yy_1_1_2_1_2_1_1 == (yy) yyu) yyErr(1,2012);
if (yy_1_1_2_1_2_1_1[0] != 7) goto yyfl_85_1_1_1_2_1_2_1;
goto yysl_85_1_1_1_2_1_2;
yyfl_85_1_1_1_2_1_2_1 : ;
yy_1_1_2_1_2_2_1 = (yy) yyv_Symbol[6];
if (yy_1_1_2_1_2_2_1 == (yy) yyu) yyErr(1,2014);
if (yy_1_1_2_1_2_2_1[0] != 4) goto yyfl_85_1_1_1_2_1_2_2;
goto yysl_85_1_1_1_2_1_2;
yyfl_85_1_1_1_2_1_2_2 : ;
yy_1_1_2_1_2_3_1 = (yy) yyv_Symbol[6];
if (yy_1_1_2_1_2_3_1 == (yy) yyu) yyErr(1,2016);
if (yy_1_1_2_1_2_3_1[0] != 3) goto yyfl_85_1_1_1_2_1_2_3;
goto yysl_85_1_1_1_2_1_2;
yyfl_85_1_1_1_2_1_2_3 : ;
goto yyfl_85_1_1_1_2_1;
yysl_85_1_1_1_2_1_2 : ;
yyb = yysb;
}
goto yysl_85_1_1_1_2;
yyfl_85_1_1_1_2_1 : ;
yy_1_1_2_2_1_1 = yyv_Id;
QueryId(yy_1_1_2_2_1_1, &yy_1_1_2_2_1_2);
if (yy_1_1_2_2_1_2[0] != 6) goto yyfl_85_1_1_1_2_2;
goto yysl_85_1_1_1_2;
yyfl_85_1_1_1_2_2 : ;
goto yyfl_85_1_1_1;
yysl_85_1_1_1_2 : ;
yyb = yysb;
}
goto yysl_85_1_1;
yyfl_85_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
GetExpressionPosition(yy_1_2_1_1, &yy_1_2_1_2);
yyv_Position = yy_1_2_1_2;
yy_1_2_2_1 = yyv_Position;
Error_OpcodeArgumentMustBeDefinition(yy_1_2_2_1);
goto yysl_85_1_1;
yysl_85_1_1 : ;
yyb = yysb;
}
return;
}
}
int CheckLiterals(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_EXPRESSION();
/*=== Sweep EXPRESSION ===*/
if (yytp == (intptr_t) yybroadcast_EXPRESSION) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Elements;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_1_1_1_1;
yy yy_1_1_1_1_2;
yy yy_1_2_1_1;
yy yyv_ElementCount;
yy yy_1_2_1_2;
yy yy_1_2_2_1_1_1;
yy yy_1_2_2_1_1_2;
yy yy_1_2_2_1_2_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_86_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Elements = yy_0_1_2;
{
yy yysb = yyb;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1_1_1_1_1 = yyv_Position;
yy_1_1_1_1_2 = yyv_Elements;
yy_1_1_1_1 = yyb + 0;
yy_1_1_1_1[0] = 13;
yy_1_1_1_1[1] = ((intptr_t)yy_1_1_1_1_1);
yy_1_1_1_1[2] = ((intptr_t)yy_1_1_1_1_2);
if (! IsExpressionSimpleConstant(yy_1_1_1_1)) goto yyfl_86_10001_1_1;
goto yysl_86_10001_1;
yyfl_86_10001_1_1 : ;
yy_1_2_1_1 = yyv_Elements;
QueryExpressionListLength(yy_1_2_1_1, &yy_1_2_1_2);
yyv_ElementCount = yy_1_2_1_2;
{
yy yysb = yyb;
yy_1_2_2_1_1_1 = yyv_ElementCount;
yy_1_2_2_1_1_2 = ((yy)254);
if ((intptr_t)yy_1_2_2_1_1_1 <= (intptr_t)yy_1_2_2_1_1_2) goto yyfl_86_10001_1_2_2_1;
yy_1_2_2_1_2_1 = yyv_Position;
Error_ListExpressionTooLong(yy_1_2_2_1_2_1);
goto yysl_86_10001_1_2_2;
yyfl_86_10001_1_2_2_1 : ;
goto yysl_86_10001_1_2_2;
yysl_86_10001_1_2_2 : ;
yyb = yysb;
}
goto yysl_86_10001_1;
yysl_86_10001_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Elements;
{
extern CheckLiterals();
yybroadcast_EXPRESSIONLIST(yy_2_1, 0, &yynull, CheckLiterals);
}
*yyout_1 = yyin_2;
return 1;
yyfl_86_10001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Pairs;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_1_1_1_1;
yy yy_1_1_1_1_2;
yy yy_1_2_1_1;
yy yyv_PairCount;
yy yy_1_2_1_2;
yy yy_1_2_2_1_1_1;
yy yy_1_2_2_1_1_2;
yy yy_1_2_2_1_2_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 16) goto yyfl_86_10002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Pairs = yy_0_1_2;
{
yy yysb = yyb;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1_1_1_1_1 = yyv_Position;
yy_1_1_1_1_2 = yyv_Pairs;
yy_1_1_1_1 = yyb + 0;
yy_1_1_1_1[0] = 16;
yy_1_1_1_1[1] = ((intptr_t)yy_1_1_1_1_1);
yy_1_1_1_1[2] = ((intptr_t)yy_1_1_1_1_2);
if (! IsExpressionSimpleConstant(yy_1_1_1_1)) goto yyfl_86_10002_1_1;
goto yysl_86_10002_1;
yyfl_86_10002_1_1 : ;
yy_1_2_1_1 = yyv_Pairs;
QueryExpressionListLength(yy_1_2_1_1, &yy_1_2_1_2);
yyv_PairCount = yy_1_2_1_2;
{
yy yysb = yyb;
yy_1_2_2_1_1_1 = yyv_PairCount;
yy_1_2_2_1_1_2 = ((yy)127);
if ((intptr_t)yy_1_2_2_1_1_1 <= (intptr_t)yy_1_2_2_1_1_2) goto yyfl_86_10002_1_2_2_1;
yy_1_2_2_1_2_1 = yyv_Position;
Error_ArrayExpressionTooLong(yy_1_2_2_1_2_1);
goto yysl_86_10002_1_2_2;
yyfl_86_10002_1_2_2_1 : ;
goto yysl_86_10002_1_2_2;
yysl_86_10002_1_2_2 : ;
yyb = yysb;
}
goto yysl_86_10002_1;
yysl_86_10002_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Pairs;
{
extern CheckLiterals();
yybroadcast_EXPRESSIONLIST(yy_2_1, 0, &yynull, CheckLiterals);
}
*yyout_1 = yyin_2;
return 1;
yyfl_86_10002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Key;
yy yy_0_1_2;
yy yyv_Value;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yy_1_1_2_1_1_1;
yy yy_1_1_2_1_1_2;
yy yy_1_1_2_1_1_2_1;
yy yy_1_1_2_1_1_2_2;
yy yy_1_1_2_2_1_1;
yy yy_1_2_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 17) goto yyfl_86_10003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Key = yy_0_1_2;
yyv_Value = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Key;
if (! IsExpressionSimpleConstant(yy_1_1_1_1)) goto yyfl_86_10003_1_1;
{
yy yysb = yyb;
yy_1_1_2_1_1_1 = yyv_Key;
yy_1_1_2_1_1_2 = yy_1_1_2_1_1_1;
if (yy_1_1_2_1_1_2[0] != 7) goto yyfl_86_10003_1_1_2_1;
yy_1_1_2_1_1_2_1 = ((yy)yy_1_1_2_1_1_2[1]);
yy_1_1_2_1_1_2_2 = ((yy)yy_1_1_2_1_1_2[2]);
goto yysl_86_10003_1_1_2;
yyfl_86_10003_1_1_2_1 : ;
yy_1_1_2_2_1_1 = yyv_Position;
Error_ConstantArrayKeyIsNotStringLiteral(yy_1_1_2_2_1_1);
goto yysl_86_10003_1_1_2;
yysl_86_10003_1_1_2 : ;
yyb = yysb;
}
goto yysl_86_10003_1;
yyfl_86_10003_1_1 : ;
yy_1_2_1_1 = yyv_Key;
{
extern CheckLiterals();
yybroadcast_EXPRESSION(yy_1_2_1_1, 0, &yynull, CheckLiterals);
}
goto yysl_86_10003_1;
yysl_86_10003_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Value;
{
extern CheckLiterals();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, CheckLiterals);
}
*yyout_1 = yyin_2;
return 1;
yyfl_86_10003 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
CheckSafety(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Module = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Module;
yy_1_2 = yyb + 0;
yy_1_2[0] = 1;
{
extern CheckSafety_();
yybroadcast_MODULE(yy_1_1, yy_1_2, &yynull, CheckSafety_);
}
return;
}
}
int CheckSafety_(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_DEFINITION();
extern yybroadcast_STATEMENT();
extern yybroadcast_EXPRESSION();
/*=== Sweep DEFINITION ===*/
if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yy_0_2;
yy yy_1_1_1_1;
yy yyv_Symbol;
yy yy_1_1_1_2;
yy yyv_Safety;
yy yy_1_1_2;
yy yy_1_1_3_1;
yy yy_1_1_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 7) goto yyfl_88_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yyv_Body = yy_0_1_6;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Name;
if (! QuerySymbolId(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_88_10001_1_1;
yyv_Symbol = yy_1_1_1_2;
yy_1_1_2 = (yy) yyv_Symbol[5];
if (yy_1_1_2 == (yy) yyu) yyErr(1,2080);
yyv_Safety = yy_1_1_2;
yy_1_1_3_1 = yyv_Body;
yy_1_1_3_2 = yyv_Safety;
{
extern CheckSafety_();
yybroadcast_STATEMENT(yy_1_1_3_1, yy_1_1_3_2, &yynull, CheckSafety_);
}
goto yysl_88_10001_1;
yyfl_88_10001_1_1 : ;
goto yysl_88_10001_1;
yysl_88_10001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_88_10001 : ;
}
return 0;
}
/*===*/
/*=== Sweep STATEMENT ===*/
else if (yytp == (intptr_t) yybroadcast_STATEMENT) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Block;
yy yy_0_1_2;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 21) goto yyfl_88_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Block = yy_0_1_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Block;
yy_1_2 = yyb + 0;
yy_1_2[0] = 2;
{
extern CheckSafety_();
yybroadcast_STATEMENT(yy_1_1, yy_1_2, &yynull, CheckSafety_);
}
*yyout_1 = yyin_2;
return 1;
yyfl_88_20001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Block;
yy yy_0_1_2;
yy yyv_Safety;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 20) goto yyfl_88_20002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Block = yy_0_1_2;
yyv_Safety = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Safety;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 2) goto yyfl_88_20002_1_1;
goto yysl_88_20002_1;
yyfl_88_20002_1_1 : ;
yy_1_2_1_1 = yyv_Safety;
yy_1_2_1_2 = yy_1_2_1_1;
if (yy_1_2_1_2[0] != 1) goto yyfl_88_20002_1_2;
yy_1_2_2_1 = yyv_Position;
Error_BytecodeNotAllowedInSafeContext(yy_1_2_2_1);
goto yysl_88_20002_1;
yyfl_88_20002_1_2 : ;
goto yyfl_88_20002;
yysl_88_20002_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_88_20002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Handler;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yyv_Safety;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 16) goto yyfl_88_20003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yyv_Safety = yy_0_2;
yy_1_1 = yyv_Position;
yy_1_2 = yyv_Handler;
yy_1_3 = yyv_Safety;
CheckHandlerSafety(yy_1_1, yy_1_2, yy_1_3);
yy_2_1 = yyv_Arguments;
yy_2_2 = yyv_Safety;
{
extern CheckSafety_();
yybroadcast_EXPRESSIONLIST(yy_2_1, yy_2_2, &yynull, CheckSafety_);
}
*yyout_1 = yyin_2;
return 1;
yyfl_88_20003 : ;
}
return 0;
}
/*===*/
/*=== Sweep EXPRESSION ===*/
else if (yytp == (intptr_t) yybroadcast_EXPRESSION) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Handler;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yyv_Safety;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 14) goto yyfl_88_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yyv_Safety = yy_0_2;
yy_1_1 = yyv_Position;
yy_1_2 = yyv_Handler;
yy_1_3 = yyv_Safety;
CheckHandlerSafety(yy_1_1, yy_1_2, yy_1_3);
yy_2_1 = yyv_Arguments;
yy_2_2 = yyv_Safety;
{
extern CheckSafety_();
yybroadcast_EXPRESSIONLIST(yy_2_1, yy_2_2, &yynull, CheckSafety_);
}
*yyout_1 = yyin_2;
return 1;
yyfl_88_30001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
CheckHandlerSafety(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Handler;
yy yy_0_2;
yy yyv_Safety;
yy yy_0_3;
yy yy_1_1_1_1;
yy yyv_Symbol;
yy yy_1_1_1_2;
yy yyv_HandlerSafety;
yy yy_1_1_2;
yy yy_1_1_3_1_1_1;
yy yy_1_1_3_1_1_2;
yy yy_1_1_3_2_1_1_1_1;
yy yy_1_1_3_2_1_1_1_2;
yy yy_1_1_3_2_1_2_1_1;
yy yyv_Name;
yy yy_1_1_3_2_1_2_1_2;
yy yy_1_1_3_2_1_2_2_1;
yy yy_1_1_3_2_1_2_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Handler = yy_0_2;
yyv_Safety = yy_0_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Handler;
if (! QuerySymbolId(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_89_1_1_1;
yyv_Symbol = yy_1_1_1_2;
yy_1_1_2 = (yy) yyv_Symbol[5];
if (yy_1_1_2 == (yy) yyu) yyErr(1,2109);
yyv_HandlerSafety = yy_1_1_2;
{
yy yysb = yyb;
yy_1_1_3_1_1_1 = yyv_HandlerSafety;
yy_1_1_3_1_1_2 = yy_1_1_3_1_1_1;
if (yy_1_1_3_1_1_2[0] != 1) goto yyfl_89_1_1_1_3_1;
goto yysl_89_1_1_1_3;
yyfl_89_1_1_1_3_1 : ;
{
yy yysb = yyb;
yy_1_1_3_2_1_1_1_1 = yyv_Safety;
yy_1_1_3_2_1_1_1_2 = yy_1_1_3_2_1_1_1_1;
if (yy_1_1_3_2_1_1_1_2[0] != 2) goto yyfl_89_1_1_1_3_2_1_1;
goto yysl_89_1_1_1_3_2_1;
yyfl_89_1_1_1_3_2_1_1 : ;
yy_1_1_3_2_1_2_1_1 = yyv_Handler;
GetQualifiedName(yy_1_1_3_2_1_2_1_1, &yy_1_1_3_2_1_2_1_2);
yyv_Name = yy_1_1_3_2_1_2_1_2;
yy_1_1_3_2_1_2_2_1 = yyv_Position;
yy_1_1_3_2_1_2_2_2 = yyv_Name;
Error_UnsafeHandlerCallNotAllowedInSafeContext(yy_1_1_3_2_1_2_2_1, yy_1_1_3_2_1_2_2_2);
goto yysl_89_1_1_1_3_2_1;
yysl_89_1_1_1_3_2_1 : ;
yyb = yysb;
}
goto yysl_89_1_1_1_3;
yysl_89_1_1_1_3 : ;
yyb = yysb;
}
goto yysl_89_1_1;
yyfl_89_1_1_1 : ;
goto yysl_89_1_1;
yysl_89_1_1 : ;
yyb = yysb;
}
return;
}
}
int CheckVariadic(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_DEFINITION();
extern yybroadcast_PARAMETERLIST();
/*=== Sweep DEFINITION ===*/
if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Parameters;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_5;
yy yy_0_1_6;
yy yy_1_1_1_1;
yy yyv_Position;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_90_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Name = yy_0_1_3;
if (yy_0_1_4[0] != 1) goto yyfl_90_10001;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Parameters = yy_0_1_4_1;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Parameters;
if (! ParameterListContainsVariadic(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_90_10001_1_1;
yyv_Position = yy_1_1_1_2;
yy_1_1_2_1 = yyv_Position;
Error_VariadicParametersOnlyAllowedInForeignHandlers(yy_1_1_2_1);
goto yysl_90_10001_1;
yyfl_90_10001_1_1 : ;
goto yysl_90_10001_1;
yysl_90_10001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_90_10001 : ;
}
return 0;
}
/*===*/
/*=== Sweep PARAMETERLIST ===*/
else if (yytp == (intptr_t) yybroadcast_PARAMETERLIST) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_1_4;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_90_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_90_20001;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Position = yy_0_1_1_1;
if (yy_0_1_1_2[0] != 5) goto yyfl_90_20001;
yyv_Tail = yy_0_1_2;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Tail;
yy_1_1_1_2 = yyb + 0;
yy_1_1_1_2[0] = 2;
if (yyeq_PARAMETERLIST(yy_1_1_1_1, yy_1_1_1_2)) goto yyfl_90_20001_1_1;
yy_1_1_2_1 = yyv_Position;
Error_VariadicParameterMustBeLast(yy_1_1_2_1);
goto yysl_90_20001_1;
yyfl_90_20001_1_1 : ;
goto yysl_90_20001_1;
yysl_90_20001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_90_20001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
int ParameterListContainsVariadic(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yy_0_1_1_3;
yy yy_0_1_1_4;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_91_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_91_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Position = yy_0_1_1_1;
if (yy_0_1_1_2[0] != 5) goto yyfl_91_1;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return 1;
yyfl_91_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_0_2;
yy yy_1_1;
yy yyv_Position;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_91_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Tail;
if (! ParameterListContainsVariadic(yy_1_1, &yy_1_2)) goto yyfl_91_2;
yyv_Position = yy_1_2;
yy_0_2 = yyv_Position;
*yyout_1 = yy_0_2;
return 1;
yyfl_91_2 : ;
}
return 0;
}
int QueryHandlerIdSignature(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yyv_Info;
yy yy_1_2_1;
yy yy_2;
yy yy_3;
yy yy_3_1;
yy yy_3_2;
yy yyv_Signature;
yy yy_3_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 3) goto yyfl_92_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yyv_Info = yy_1_2_1;
yy_2 = (yy) yyv_Info[6];
if (yy_2 == (yy) yyu) yyErr(1,2154);
if (yy_2[0] != 4) goto yyfl_92_1;
yy_3 = (yy) yyv_Info[7];
if (yy_3 == (yy) yyu) yyErr(1,2155);
if (yy_3[0] != 8) goto yyfl_92_1;
yy_3_1 = ((yy)yy_3[1]);
yy_3_2 = ((yy)yy_3[2]);
yy_3_3 = ((yy)yy_3[3]);
yyv_Signature = yy_3_3;
yy_0_2 = yyv_Signature;
*yyout_1 = yy_0_2;
return 1;
yyfl_92_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yyv_Info;
yy yy_1_2_1;
yy yy_2;
yy yyv_Type;
yy yy_3;
yy yy_4_1;
yy yy_4_2;
yy yy_4_2_1;
yy yy_4_2_2;
yy yyv_Signature;
yy yy_4_2_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 3) goto yyfl_92_2;
yy_1_2_1 = ((yy)yy_1_2[1]);
yyv_Info = yy_1_2_1;
yy_2 = (yy) yyv_Info[6];
if (yy_2 == (yy) yyu) yyErr(1,2159);
if (yy_2[0] != 7) goto yyfl_92_2;
yy_3 = (yy) yyv_Info[7];
if (yy_3 == (yy) yyu) yyErr(1,2160);
yyv_Type = yy_3;
yy_4_1 = yyv_Type;
FullyResolveType(yy_4_1, &yy_4_2);
if (yy_4_2[0] != 8) goto yyfl_92_2;
yy_4_2_1 = ((yy)yy_4_2[1]);
yy_4_2_2 = ((yy)yy_4_2[2]);
yy_4_2_3 = ((yy)yy_4_2[3]);
yyv_Signature = yy_4_2_3;
yy_0_2 = yyv_Signature;
*yyout_1 = yy_0_2;
return 1;
yyfl_92_2 : ;
}
return 0;
}
int QueryKindOfSymbolId(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yyv_Meaning;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yyv_Info;
yy yy_2_2_1;
yy yyv_Kind;
yy yy_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
yyv_Meaning = yy_1_2;
yy_2_1 = yyv_Meaning;
yy_2_2 = yy_2_1;
if (yy_2_2[0] != 3) goto yyfl_93_1;
yy_2_2_1 = ((yy)yy_2_2[1]);
yyv_Info = yy_2_2_1;
yy_3 = (yy) yyv_Info[6];
if (yy_3 == (yy) yyu) yyErr(1,2168);
yyv_Kind = yy_3;
yy_0_2 = yyv_Kind;
*yyout_1 = yy_0_2;
return 1;
yyfl_93_1 : ;
}
return 0;
}
int QueryClassOfSyntaxId(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yyv_Meaning;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yyv_Info;
yy yy_2_2_1;
yy yyv_Class;
yy yy_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
yyv_Meaning = yy_1_2;
yy_2_1 = yyv_Meaning;
yy_2_2 = yy_2_1;
if (yy_2_2[0] != 4) goto yyfl_94_1;
yy_2_2_1 = ((yy)yy_2_2[1]);
yyv_Info = yy_2_2_1;
yy_3 = (yy) yyv_Info[3];
if (yy_3 == (yy) yyu) yyErr(1,2175);
yyv_Class = yy_3;
yy_0_2 = yyv_Class;
*yyout_1 = yy_0_2;
return 1;
yyfl_94_1 : ;
}
return 0;
}
int QuerySyntaxOfSyntaxId(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yyv_Meaning;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yyv_Info;
yy yy_2_2_1;
yy yyv_Class;
yy yy_3;
yy yy_4_1;
yy yy_4_2;
yy yy_5_1;
yy yy_5_2;
yy yyv_Syntax;
yy yy_6;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
yyv_Meaning = yy_1_2;
yy_2_1 = yyv_Meaning;
yy_2_2 = yy_2_1;
if (yy_2_2[0] != 4) goto yyfl_95_1;
yy_2_2_1 = ((yy)yy_2_2[1]);
yyv_Info = yy_2_2_1;
yy_3 = (yy) yyv_Info[3];
if (yy_3 == (yy) yyu) yyErr(1,2182);
yyv_Class = yy_3;
yy_4_1 = yyv_Class;
yy_4_2 = yyb + 0;
yy_4_2[0] = 8;
if (yyeq_SYNTAXCLASS(yy_4_1, yy_4_2)) goto yyfl_95_1;
yy_5_1 = yyv_Class;
yy_5_2 = yyb + 1;
yy_5_2[0] = 9;
if (yyeq_SYNTAXCLASS(yy_5_1, yy_5_2)) goto yyfl_95_1;
yy_6 = (yy) yyv_Info[4];
if (yy_6 == (yy) yyu) yyErr(1,2185);
yyv_Syntax = yy_6;
yy_0_2 = yyv_Syntax;
*yyout_1 = yy_0_2;
return 1;
yyfl_95_1 : ;
}
return 0;
}
int QueryTypeOfSyntaxMarkId(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yyv_Meaning;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yyv_Info;
yy yy_2_2_1;
yy yyv_Type;
yy yy_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
yyv_Meaning = yy_1_2;
yy_2_1 = yyv_Meaning;
yy_2_2 = yy_2_1;
if (yy_2_2[0] != 5) goto yyfl_96_1;
yy_2_2_1 = ((yy)yy_2_2[1]);
yyv_Info = yy_2_2_1;
yy_3 = (yy) yyv_Info[4];
if (yy_3 == (yy) yyu) yyErr(1,2192);
yyv_Type = yy_3;
yy_0_2 = yyv_Type;
*yyout_1 = yy_0_2;
return 1;
yyfl_96_1 : ;
}
return 0;
}
int QuerySyntaxId(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yyv_Info;
yy yy_1_2_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 4) goto yyfl_97_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yyv_Info = yy_1_2_1;
yy_0_2 = yyv_Info;
*yyout_1 = yy_0_2;
return 1;
yyfl_97_1 : ;
}
return 0;
}
int QuerySyntaxMarkId(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yyv_Info;
yy yy_1_2_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 5) goto yyfl_98_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yyv_Info = yy_1_2_1;
yy_0_2 = yyv_Info;
*yyout_1 = yy_0_2;
return 1;
yyfl_98_1 : ;
}
return 0;
}
QueryId(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1;
yy yyv_DefId;
yy yy_1_1;
yy yyv_Meaning;
yy yy_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[3];
if (yy_1 == (yy) yyu) yyErr(1,2207);
if (yy_1[0] != 1) goto yyfl_99_1;
yy_1_1 = ((yy)yy_1[1]);
yyv_DefId = yy_1_1;
yy_2 = (yy) yyv_DefId[3];
if (yy_2 == (yy) yyu) yyErr(1,2208);
yyv_Meaning = yy_2;
yy_0_2 = yyv_Meaning;
*yyout_1 = yy_0_2;
return;
yyfl_99_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yyv_Meaning;
yy yy_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[3];
if (yy_1 == (yy) yyu) yyErr(1,2211);
yyv_Meaning = yy_1;
yy_0_2 = yyv_Meaning;
*yyout_1 = yy_0_2;
return;
yyfl_99_2 : ;
}
yyErr(2,2204);
}
