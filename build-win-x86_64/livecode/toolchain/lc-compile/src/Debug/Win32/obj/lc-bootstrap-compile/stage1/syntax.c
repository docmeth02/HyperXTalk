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
yyAbort(n,"syntax", l);
}
InitializeSyntax()
{
{
yy yyb;
yy yy_1_1;
yy_1_1 = ((yy)0);
GenerateBytecodeUnreservedSyntaxKeywords(yy_1_1);
return;
}
}
GenerateBytecodeUnreservedSyntaxKeywords(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Index;
yy yy_0_1;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_3_1_1;
yy yy_3_1_2;
yy_0_1 = yyin_1;
yyv_Index = yy_0_1;
yy_1_1 = yyv_Index;
if (! BytecodeEnumerate(yy_1_1, &yy_1_2)) goto yyfl_2_1;
yyv_Name = yy_1_2;
yy_2_1 = yyv_Name;
AddUnreservedSyntaxKeyword(yy_2_1);
yy_3_1_1 = yyv_Index;
yy_3_1_2 = ((yy)1);
yy_3_1 = (yy)(((intptr_t)yy_3_1_1)+((intptr_t)yy_3_1_2));
GenerateBytecodeUnreservedSyntaxKeywords(yy_3_1);
return;
yyfl_2_1 : ;
}
{
yy yyb;
yy yyv_Index;
yy yy_0_1;
yy_0_1 = yyin_1;
yyv_Index = yy_0_1;
return;
yyfl_2_2 : ;
}
yyErr(2,35);
}
int GenerateSyntax(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_DEFINITION();
extern yybroadcast_SYNTAX();
extern yybroadcast_SYNTAXMETHOD();
/*=== Sweep DEFINITION ===*/
if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Class;
yy yy_0_1_4;
yy yyv_Warnings;
yy yy_0_1_5;
yy yyv_Syntax;
yy yy_0_1_6;
yy yyv_Methods;
yy yy_0_1_7;
yy yyv_Name;
yy yy_1;
yy yy_2;
yy yyv_Info;
yy yy_2_1;
yy yyv_ParentId;
yy yy_3;
yy yy_4_1;
yy yyv_ModuleName;
yy yy_4_2;
yy yy_5_1_1_1;
yy yy_5_1_1_2;
yy yy_5_1_2_1;
yy yy_5_1_2_2;
yy yy_5_2_1_1;
yy yy_5_2_1_2;
yy yy_5_2_2_1;
yy yy_5_2_2_2;
yy yy_5_3_1_1;
yy yy_5_3_1_2;
yy yy_5_3_2_1;
yy yy_5_3_2_2;
yy yy_5_4_1_1;
yy yy_5_4_1_2;
yy yy_5_4_2_1;
yy yy_5_4_2_2;
yy yy_5_5_1_1;
yy yy_5_5_1_2;
yy yyv_Precedence;
yy yy_5_5_1_2_1;
yy yy_5_5_2_1;
yy yyv_Level;
yy yy_5_5_2_2;
yy yy_5_5_3_1;
yy yy_5_5_3_2;
yy yy_5_5_3_3;
yy yy_5_6_1_1;
yy yy_5_6_1_2;
yy yy_5_6_1_2_1;
yy yy_5_6_2_1;
yy yy_5_6_2_2;
yy yy_5_6_3_1;
yy yy_5_6_3_2;
yy yy_5_6_3_3;
yy yy_5_7_1_1;
yy yy_5_7_1_2;
yy yy_5_7_1_2_1;
yy yy_5_7_1_2_2;
yy yy_5_7_2_1;
yy yy_5_7_2_2;
yy yy_5_7_3_1;
yy yy_5_7_3_2;
yy yy_5_7_3_3;
yy yy_5_8_1_1;
yy yy_5_8_1_2;
yy yy_5_8_1_2_1;
yy yy_5_8_1_2_2;
yy yy_5_8_2_1;
yy yy_5_8_2_2;
yy yy_5_8_3_1;
yy yy_5_8_3_2;
yy yy_5_8_3_3;
yy yy_5_9_1_1;
yy yy_5_9_1_2;
yy yy_5_9_1_2_1;
yy yy_5_9_1_2_2;
yy yy_5_9_2_1;
yy yy_5_9_2_2;
yy yy_5_9_3_1;
yy yy_5_9_3_2;
yy yy_5_9_3_3;
yy yy_6_1_1_1;
yy yy_6_1_1_2;
yy yyv_Message;
yy yy_6_1_1_2_1;
yy yy_6_1_2_1;
yy yy_8_1;
yy yy_11_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_3_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yy_0_1_7 = ((yy)yy_0_1[7]);
yyv_Id = yy_0_1_3;
yyv_Class = yy_0_1_4;
yyv_Warnings = yy_0_1_5;
yyv_Syntax = yy_0_1_6;
yyv_Methods = yy_0_1_7;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,50);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[3];
if (yy_2 == (yy) yyu) yyErr(1,51);
if (yy_2[0] != 4) goto yyfl_3_10001;
yy_2_1 = ((yy)yy_2[1]);
yyv_Info = yy_2_1;
yy_3 = (yy) yyv_Info[2];
if (yy_3 == (yy) yyu) yyErr(1,52);
yyv_ParentId = yy_3;
yy_4_1 = yyv_ParentId;
GetQualifiedName(yy_4_1, &yy_4_2);
yyv_ModuleName = yy_4_2;
{
yy yysb = yyb;
yy_5_1_1_1 = yyv_Class;
yy_5_1_1_2 = yy_5_1_1_1;
if (yy_5_1_1_2[0] != 1) goto yyfl_3_10001_5_1;
yy_5_1_2_1 = yyv_ModuleName;
yy_5_1_2_2 = yyv_Name;
BeginPhraseSyntaxRule(yy_5_1_2_1, yy_5_1_2_2);
goto yysl_3_10001_5;
yyfl_3_10001_5_1 : ;
yy_5_2_1_1 = yyv_Class;
yy_5_2_1_2 = yy_5_2_1_1;
if (yy_5_2_1_2[0] != 2) goto yyfl_3_10001_5_2;
yy_5_2_2_1 = yyv_ModuleName;
yy_5_2_2_2 = yyv_Name;
BeginStatementSyntaxRule(yy_5_2_2_1, yy_5_2_2_2);
goto yysl_3_10001_5;
yyfl_3_10001_5_2 : ;
yy_5_3_1_1 = yyv_Class;
yy_5_3_1_2 = yy_5_3_1_1;
if (yy_5_3_1_2[0] != 4) goto yyfl_3_10001_5_3;
yy_5_3_2_1 = yyv_ModuleName;
yy_5_3_2_2 = yyv_Name;
BeginExpressionSyntaxRule(yy_5_3_2_1, yy_5_3_2_2);
goto yysl_3_10001_5;
yyfl_3_10001_5_3 : ;
yy_5_4_1_1 = yyv_Class;
yy_5_4_1_2 = yy_5_4_1_1;
if (yy_5_4_1_2[0] != 3) goto yyfl_3_10001_5_4;
yy_5_4_2_1 = yyv_ModuleName;
yy_5_4_2_2 = yyv_Name;
BeginIteratorSyntaxRule(yy_5_4_2_1, yy_5_4_2_2);
goto yysl_3_10001_5;
yyfl_3_10001_5_4 : ;
yy_5_5_1_1 = yyv_Class;
yy_5_5_1_2 = yy_5_5_1_1;
if (yy_5_5_1_2[0] != 5) goto yyfl_3_10001_5_5;
yy_5_5_1_2_1 = ((yy)yy_5_5_1_2[1]);
yyv_Precedence = yy_5_5_1_2_1;
yy_5_5_2_1 = yyv_Precedence;
MapSyntaxPrecedence(yy_5_5_2_1, &yy_5_5_2_2);
yyv_Level = yy_5_5_2_2;
yy_5_5_3_1 = yyv_ModuleName;
yy_5_5_3_2 = yyv_Name;
yy_5_5_3_3 = yyv_Level;
BeginPrefixOperatorSyntaxRule(yy_5_5_3_1, yy_5_5_3_2, yy_5_5_3_3);
goto yysl_3_10001_5;
yyfl_3_10001_5_5 : ;
yy_5_6_1_1 = yyv_Class;
yy_5_6_1_2 = yy_5_6_1_1;
if (yy_5_6_1_2[0] != 6) goto yyfl_3_10001_5_6;
yy_5_6_1_2_1 = ((yy)yy_5_6_1_2[1]);
yyv_Precedence = yy_5_6_1_2_1;
yy_5_6_2_1 = yyv_Precedence;
MapSyntaxPrecedence(yy_5_6_2_1, &yy_5_6_2_2);
yyv_Level = yy_5_6_2_2;
yy_5_6_3_1 = yyv_ModuleName;
yy_5_6_3_2 = yyv_Name;
yy_5_6_3_3 = yyv_Level;
BeginPostfixOperatorSyntaxRule(yy_5_6_3_1, yy_5_6_3_2, yy_5_6_3_3);
goto yysl_3_10001_5;
yyfl_3_10001_5_6 : ;
yy_5_7_1_1 = yyv_Class;
yy_5_7_1_2 = yy_5_7_1_1;
if (yy_5_7_1_2[0] != 7) goto yyfl_3_10001_5_7;
yy_5_7_1_2_1 = ((yy)yy_5_7_1_2[1]);
yy_5_7_1_2_2 = ((yy)yy_5_7_1_2[2]);
if (yy_5_7_1_2_1[0] != 1) goto yyfl_3_10001_5_7;
yyv_Precedence = yy_5_7_1_2_2;
yy_5_7_2_1 = yyv_Precedence;
MapSyntaxPrecedence(yy_5_7_2_1, &yy_5_7_2_2);
yyv_Level = yy_5_7_2_2;
yy_5_7_3_1 = yyv_ModuleName;
yy_5_7_3_2 = yyv_Name;
yy_5_7_3_3 = yyv_Level;
BeginLeftBinaryOperatorSyntaxRule(yy_5_7_3_1, yy_5_7_3_2, yy_5_7_3_3);
goto yysl_3_10001_5;
yyfl_3_10001_5_7 : ;
yy_5_8_1_1 = yyv_Class;
yy_5_8_1_2 = yy_5_8_1_1;
if (yy_5_8_1_2[0] != 7) goto yyfl_3_10001_5_8;
yy_5_8_1_2_1 = ((yy)yy_5_8_1_2[1]);
yy_5_8_1_2_2 = ((yy)yy_5_8_1_2[2]);
if (yy_5_8_1_2_1[0] != 2) goto yyfl_3_10001_5_8;
yyv_Precedence = yy_5_8_1_2_2;
yy_5_8_2_1 = yyv_Precedence;
MapSyntaxPrecedence(yy_5_8_2_1, &yy_5_8_2_2);
yyv_Level = yy_5_8_2_2;
yy_5_8_3_1 = yyv_ModuleName;
yy_5_8_3_2 = yyv_Name;
yy_5_8_3_3 = yyv_Level;
BeginRightBinaryOperatorSyntaxRule(yy_5_8_3_1, yy_5_8_3_2, yy_5_8_3_3);
goto yysl_3_10001_5;
yyfl_3_10001_5_8 : ;
yy_5_9_1_1 = yyv_Class;
yy_5_9_1_2 = yy_5_9_1_1;
if (yy_5_9_1_2[0] != 7) goto yyfl_3_10001_5_9;
yy_5_9_1_2_1 = ((yy)yy_5_9_1_2[1]);
yy_5_9_1_2_2 = ((yy)yy_5_9_1_2[2]);
if (yy_5_9_1_2_1[0] != 3) goto yyfl_3_10001_5_9;
yyv_Precedence = yy_5_9_1_2_2;
yy_5_9_2_1 = yyv_Precedence;
MapSyntaxPrecedence(yy_5_9_2_1, &yy_5_9_2_2);
yyv_Level = yy_5_9_2_2;
yy_5_9_3_1 = yyv_ModuleName;
yy_5_9_3_2 = yyv_Name;
yy_5_9_3_3 = yyv_Level;
BeginNeutralBinaryOperatorSyntaxRule(yy_5_9_3_1, yy_5_9_3_2, yy_5_9_3_3);
goto yysl_3_10001_5;
yyfl_3_10001_5_9 : ;
goto yyfl_3_10001;
yysl_3_10001_5 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_6_1_1_1 = yyv_Warnings;
yy_6_1_1_2 = yy_6_1_1_1;
if (yy_6_1_1_2[0] != 1) goto yyfl_3_10001_6_1;
yy_6_1_1_2_1 = ((yy)yy_6_1_1_2[1]);
yyv_Message = yy_6_1_1_2_1;
yy_6_1_2_1 = yyv_Message;
DeprecateSyntaxRule(yy_6_1_2_1);
goto yysl_3_10001_6;
yyfl_3_10001_6_1 : ;
goto yysl_3_10001_6;
yysl_3_10001_6 : ;
yyb = yysb;
}
BeginSyntaxGrammar();
yy_8_1 = yyv_Syntax;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_8_1, 0, &yynull, GenerateSyntax);
}
EndSyntaxGrammar();
BeginSyntaxMappings();
yy_11_1 = yyv_Methods;
{
extern GenerateSyntax();
yybroadcast_SYNTAXMETHODLIST(yy_11_1, 0, &yynull, GenerateSyntax);
}
EndSyntaxMappings();
EndSyntaxRule();
*yyout_1 = yyin_2;
return 1;
yyfl_3_10001 : ;
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
yy yyv_Left;
yy yy_0_1_2;
yy yyv_Right;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_3_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_1_1, 0, &yynull, GenerateSyntax);
}
yy_2_1 = yyv_Right;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_2_1, 0, &yynull, GenerateSyntax);
}
ConcatenateSyntaxGrammar();
*yyout_1 = yyin_2;
return 1;
yyfl_3_20001 : ;
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
if (yy_0_1[0] != 2) goto yyfl_3_20002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Left = yy_0_1_2;
yyv_Right = yy_0_1_3;
yy_1_1 = yyv_Left;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_1_1, 0, &yynull, GenerateSyntax);
}
yy_2_1 = yyv_Right;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_2_1, 0, &yynull, GenerateSyntax);
}
AlternateSyntaxGrammar();
*yyout_1 = yyin_2;
return 1;
yyfl_3_20002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Operand;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_3_20003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Operand = yy_0_1_2;
yy_1_1 = yyv_Operand;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_1_1, 0, &yynull, GenerateSyntax);
}
PushEmptySyntaxGrammar();
AlternateSyntaxGrammar();
*yyout_1 = yyin_2;
return 1;
yyfl_3_20003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Element;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_3_20004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Element = yy_0_1_2;
yy_1_1 = yyv_Element;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_1_1, 0, &yynull, GenerateSyntax);
}
PushEmptySyntaxGrammar();
RepeatSyntaxGrammar();
*yyout_1 = yyin_2;
return 1;
yyfl_3_20004 : ;
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
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_3_20005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Element = yy_0_1_2;
yyv_Delimiter = yy_0_1_3;
yy_1_1 = yyv_Element;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_1_1, 0, &yynull, GenerateSyntax);
}
yy_2_1 = yyv_Delimiter;
{
extern GenerateSyntax();
yybroadcast_SYNTAX(yy_2_1, 0, &yynull, GenerateSyntax);
}
RepeatSyntaxGrammar();
*yyout_1 = yyin_2;
return 1;
yyfl_3_20005 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_3_20006;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = yyv_Value;
PushKeywordSyntaxGrammar(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_3_20006 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_3_20007;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = yyv_Value;
PushUnreservedKeywordSyntaxGrammar(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_3_20007 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Variable;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Name;
yy yy_1;
yy yy_2;
yy yyv_Info;
yy yy_2_1;
yy yyv_Index;
yy yy_3;
yy yyv_LMode;
yy yy_4;
yy yyv_RMode;
yy yy_5;
yy yy_6_1;
yy yyv_LModeInt;
yy yy_6_2;
yy yy_7_1;
yy yyv_RModeInt;
yy yy_7_2;
yy yy_8_1;
yy yy_8_2;
yy yy_8_3;
yy yy_8_4;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_3_20008;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Variable = yy_0_1_2;
yyv_Id = yy_0_1_3;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,136);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Variable[3];
if (yy_2 == (yy) yyu) yyErr(1,137);
if (yy_2[0] != 5) goto yyfl_3_20008;
yy_2_1 = ((yy)yy_2[1]);
yyv_Info = yy_2_1;
yy_3 = (yy) yyv_Info[1];
if (yy_3 == (yy) yyu) yyErr(1,138);
yyv_Index = yy_3;
yy_4 = (yy) yyv_Info[3];
if (yy_4 == (yy) yyu) yyErr(1,139);
yyv_LMode = yy_4;
yy_5 = (yy) yyv_Info[2];
if (yy_5 == (yy) yyu) yyErr(1,140);
yyv_RMode = yy_5;
yy_6_1 = yyv_LMode;
MapMode(yy_6_1, &yy_6_2);
yyv_LModeInt = yy_6_2;
yy_7_1 = yyv_RMode;
MapMode(yy_7_1, &yy_7_2);
yyv_RModeInt = yy_7_2;
yy_8_1 = yyv_Index;
yy_8_2 = yyv_Name;
yy_8_3 = yyv_LModeInt;
yy_8_4 = yyv_RModeInt;
PushMarkedDescentSyntaxGrammar(yy_8_1, yy_8_2, yy_8_3, yy_8_4);
*yyout_1 = yyin_2;
return 1;
yyfl_3_20008 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_3_20009;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,146);
yyv_Name = yy_1;
yy_2_1 = yyv_Name;
PushDescentSyntaxGrammar(yy_2_1);
*yyout_1 = yyin_2;
return 1;
yyfl_3_20009 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Variable;
yy yy_0_1_2;
yy yyv_Value;
yy yy_0_1_3;
yy yy_1;
yy yyv_Info;
yy yy_1_1;
yy yyv_Index;
yy yy_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_1_2_1;
yy yy_3_1_2_1;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_2_1_2_1;
yy yy_3_2_2_1;
yy yy_3_3_1_1;
yy yy_3_3_1_2;
yy yy_3_3_1_2_1;
yy yyv_IntValue;
yy yy_3_3_1_2_2;
yy yy_3_3_2_1;
yy yy_3_3_2_2;
yy yy_3_4_1_1;
yy yy_3_4_1_2;
yy yy_3_4_1_2_1;
yy yyv_RealValue;
yy yy_3_4_1_2_2;
yy yy_3_4_2_1;
yy yy_3_4_2_2;
yy yy_3_5_1_1;
yy yy_3_5_1_2;
yy yy_3_5_1_2_1;
yy yyv_StringValue;
yy yy_3_5_1_2_2;
yy yy_3_5_2_1;
yy yy_3_5_2_2;
yy yy_3_6_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_3_20010;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Variable = yy_0_1_2;
yyv_Value = yy_0_1_3;
yy_1 = (yy) yyv_Variable[3];
if (yy_1 == (yy) yyu) yyErr(1,150);
if (yy_1[0] != 5) goto yyfl_3_20010;
yy_1_1 = ((yy)yy_1[1]);
yyv_Info = yy_1_1;
yy_2 = (yy) yyv_Info[1];
if (yy_2 == (yy) yyu) yyErr(1,151);
yyv_Index = yy_2;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Value;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_3_20010_3_1;
yy_3_1_1_2_1 = ((yy)yy_3_1_1_2[1]);
yy_3_1_2_1 = yyv_Index;
PushMarkedTrueSyntaxGrammar(yy_3_1_2_1);
goto yysl_3_20010_3;
yyfl_3_20010_3_1 : ;
yy_3_2_1_1 = yyv_Value;
yy_3_2_1_2 = yy_3_2_1_1;
if (yy_3_2_1_2[0] != 3) goto yyfl_3_20010_3_2;
yy_3_2_1_2_1 = ((yy)yy_3_2_1_2[1]);
yy_3_2_2_1 = yyv_Index;
PushMarkedFalseSyntaxGrammar(yy_3_2_2_1);
goto yysl_3_20010_3;
yyfl_3_20010_3_2 : ;
yy_3_3_1_1 = yyv_Value;
yy_3_3_1_2 = yy_3_3_1_1;
if (yy_3_3_1_2[0] != 4) goto yyfl_3_20010_3_3;
yy_3_3_1_2_1 = ((yy)yy_3_3_1_2[1]);
yy_3_3_1_2_2 = ((yy)yy_3_3_1_2[2]);
yyv_IntValue = yy_3_3_1_2_2;
yy_3_3_2_1 = yyv_Index;
yy_3_3_2_2 = yyv_IntValue;
PushMarkedIntegerSyntaxGrammar(yy_3_3_2_1, yy_3_3_2_2);
goto yysl_3_20010_3;
yyfl_3_20010_3_3 : ;
yy_3_4_1_1 = yyv_Value;
yy_3_4_1_2 = yy_3_4_1_1;
if (yy_3_4_1_2[0] != 5) goto yyfl_3_20010_3_4;
yy_3_4_1_2_1 = ((yy)yy_3_4_1_2[1]);
yy_3_4_1_2_2 = ((yy)yy_3_4_1_2[2]);
yyv_RealValue = yy_3_4_1_2_2;
yy_3_4_2_1 = yyv_Index;
yy_3_4_2_2 = yyv_RealValue;
PushMarkedRealSyntaxGrammar(yy_3_4_2_1, yy_3_4_2_2);
goto yysl_3_20010_3;
yyfl_3_20010_3_4 : ;
yy_3_5_1_1 = yyv_Value;
yy_3_5_1_2 = yy_3_5_1_1;
if (yy_3_5_1_2[0] != 6) goto yyfl_3_20010_3_5;
yy_3_5_1_2_1 = ((yy)yy_3_5_1_2[1]);
yy_3_5_1_2_2 = ((yy)yy_3_5_1_2[2]);
yyv_StringValue = yy_3_5_1_2_2;
yy_3_5_2_1 = yyv_Index;
yy_3_5_2_2 = yyv_StringValue;
PushMarkedStringSyntaxGrammar(yy_3_5_2_1, yy_3_5_2_2);
goto yysl_3_20010_3;
yyfl_3_20010_3_5 : ;
yy_3_6_1_1 = ((yy)"invalid constant type for marked variable");
Fatal_InternalInconsistency(yy_3_6_1_1);
goto yysl_3_20010_3;
yysl_3_20010_3 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_3_20010 : ;
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
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Arguments;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yyv_Parameters;
yy yy_1_2_1;
yy yyv_ReturnType;
yy yy_1_2_2;
yy yyv_Name;
yy yy_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_2_1;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_2_2_1;
yy yy_3_3_1_1;
yy yy_3_3_1_2;
yy yy_3_3_2_1;
yy yy_3_4_1_1;
yy yy_4_1;
yy yy_4_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_3_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = yyv_Id;
if (! QueryHandlerIdSignature(yy_1_1, &yy_1_2)) goto yyfl_3_30001;
if (yy_1_2[0] != 1) goto yyfl_3_30001;
yy_1_2_1 = ((yy)yy_1_2[1]);
yy_1_2_2 = ((yy)yy_1_2[2]);
yyv_Parameters = yy_1_2_1;
yyv_ReturnType = yy_1_2_2;
yy_2 = (yy) yyv_Id[2];
if (yy_2 == (yy) yyu) yyErr(1,173);
yyv_Name = yy_2;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_3_1_1_1 = yyv_Arguments;
yy_3_1_1_2 = yyb + 0;
yy_3_1_1_2[0] = 10;
if (! IsFirstArgumentOfClass(yy_3_1_1_1, yy_3_1_1_2)) goto yyfl_3_30001_3_1;
yy_3_1_2_1 = yyv_Name;
BeginAssignMethodSyntaxMapping(yy_3_1_2_1);
goto yysl_3_30001_3;
yyfl_3_30001_3_1 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_3_2_1_1 = yyv_Arguments;
yy_3_2_1_2 = yyb + 0;
yy_3_2_1_2[0] = 11;
if (! IsLastArgumentOfClass(yy_3_2_1_1, yy_3_2_1_2)) goto yyfl_3_30001_3_2;
yy_3_2_2_1 = yyv_Name;
BeginEvaluateMethodSyntaxMapping(yy_3_2_2_1);
goto yysl_3_30001_3;
yyfl_3_30001_3_2 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_3_3_1_1 = yyv_Arguments;
yy_3_3_1_2 = yyb + 0;
yy_3_3_1_2[0] = 13;
if (! IsFirstArgumentOfClass(yy_3_3_1_1, yy_3_3_1_2)) goto yyfl_3_30001_3_3;
yy_3_3_2_1 = yyv_Name;
BeginIterateMethodSyntaxMapping(yy_3_3_2_1);
goto yysl_3_30001_3;
yyfl_3_30001_3_3 : ;
yy_3_4_1_1 = yyv_Name;
BeginExecuteMethodSyntaxMapping(yy_3_4_1_1);
goto yysl_3_30001_3;
yysl_3_30001_3 : ;
yyb = yysb;
}
yy_4_1 = yyv_Parameters;
yy_4_2 = yyv_Arguments;
GenerateSyntaxMethodArgumentsForBootstrap(yy_4_1, yy_4_2);
EndMethodSyntaxMapping();
*yyout_1 = yyin_2;
return 1;
yyfl_3_30001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
GenerateSyntaxMethodArgumentsForBootstrap(yyin_1, yyin_2)
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
yy yy_0_2_1;
yy yy_0_2_1_1;
yy yyv_VarName;
yy yy_0_2_1_2;
yy yyv_ArgRest;
yy yy_0_2_2;
yy yy_1_1;
yy yyv_VarInfo;
yy yy_1_2;
yy yy_2_1_1;
yy yy_2_1_2_1;
yy yy_2_1_2_1_1;
yy yyv_Index;
yy yy_2_1_2_2;
yy yy_2_2_1;
yy yy_2_2_2_1;
yy yy_2_2_2_1_1;
yy yy_2_2_2_2;
yy yy_2_3_1;
yy yy_2_3_2_1;
yy yy_2_3_2_1_1;
yy yy_2_3_2_2;
yy yy_2_4_1;
yy yy_2_4_2_1;
yy yy_2_4_2_1_1;
yy yy_2_4_2_2;
yy yy_2_5_1;
yy yy_2_5_2_1_1_1;
yy yy_2_5_2_1_1_2;
yy yy_2_5_2_1_2_1;
yy yy_2_5_2_2_1_1;
yy yy_2_5_2_2_1_2;
yy yy_2_5_2_2_2_1;
yy yy_2_5_2_3_1_1;
yy yy_2_5_2_3_1_2;
yy yy_2_5_2_3_2_1;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_8_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_8_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Mode = yy_0_1_1_2;
yyv_ParamRest = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_8_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
if (yy_0_2_1[0] != 7) goto yyfl_8_1;
yy_0_2_1_1 = ((yy)yy_0_2_1[1]);
yy_0_2_1_2 = ((yy)yy_0_2_1[2]);
yyv_VarName = yy_0_2_1_2;
yyv_ArgRest = yy_0_2_2;
yy_1_1 = yyv_VarName;
if (! QuerySyntaxMarkId(yy_1_1, &yy_1_2)) goto yyfl_8_1;
yyv_VarInfo = yy_1_2;
{
yy yysb = yyb;
yy_2_1_1 = (yy) yyv_VarInfo[4];
if (yy_2_1_1 == (yy) yyu) yyErr(1,199);
if (yy_2_1_1[0] != 10) goto yyfl_8_1_2_1;
yy_2_1_2_1_1 = ((yy)1);
yy_2_1_2_1 = (yy)(-((intptr_t)yy_2_1_2_1_1));
yy_2_1_2_2 = yy_2_1_2_1;
yyv_Index = yy_2_1_2_2;
goto yysl_8_1_2;
yyfl_8_1_2_1 : ;
yy_2_2_1 = (yy) yyv_VarInfo[4];
if (yy_2_2_1 == (yy) yyu) yyErr(1,202);
if (yy_2_2_1[0] != 11) goto yyfl_8_1_2_2;
yy_2_2_2_1_1 = ((yy)1);
yy_2_2_2_1 = (yy)(-((intptr_t)yy_2_2_2_1_1));
yy_2_2_2_2 = yy_2_2_2_1;
yyv_Index = yy_2_2_2_2;
goto yysl_8_1_2;
yyfl_8_1_2_2 : ;
yy_2_3_1 = (yy) yyv_VarInfo[4];
if (yy_2_3_1 == (yy) yyu) yyErr(1,205);
if (yy_2_3_1[0] != 14) goto yyfl_8_1_2_3;
yy_2_3_2_1_1 = ((yy)1);
yy_2_3_2_1 = (yy)(-((intptr_t)yy_2_3_2_1_1));
yy_2_3_2_2 = yy_2_3_2_1;
yyv_Index = yy_2_3_2_2;
goto yysl_8_1_2;
yyfl_8_1_2_3 : ;
yy_2_4_1 = (yy) yyv_VarInfo[4];
if (yy_2_4_1 == (yy) yyu) yyErr(1,208);
if (yy_2_4_1[0] != 13) goto yyfl_8_1_2_4;
yy_2_4_2_1_1 = ((yy)1);
yy_2_4_2_1 = (yy)(-((intptr_t)yy_2_4_2_1_1));
yy_2_4_2_2 = yy_2_4_2_1;
yyv_Index = yy_2_4_2_2;
goto yysl_8_1_2;
yyfl_8_1_2_4 : ;
yy_2_5_1 = (yy) yyv_VarInfo[1];
if (yy_2_5_1 == (yy) yyu) yyErr(1,211);
yyv_Index = yy_2_5_1;
{
yy yysb = yyb;
yy_2_5_2_1_1_1 = yyv_Mode;
yy_2_5_2_1_1_2 = yy_2_5_2_1_1_1;
if (yy_2_5_2_1_1_2[0] != 2) goto yyfl_8_1_2_5_2_1;
yy_2_5_2_1_2_1 = yyv_Index;
PushInMarkArgumentSyntaxMapping(yy_2_5_2_1_2_1);
goto yysl_8_1_2_5_2;
yyfl_8_1_2_5_2_1 : ;
yy_2_5_2_2_1_1 = yyv_Mode;
yy_2_5_2_2_1_2 = yy_2_5_2_2_1_1;
if (yy_2_5_2_2_1_2[0] != 3) goto yyfl_8_1_2_5_2_2;
yy_2_5_2_2_2_1 = yyv_Index;
PushOutMarkArgumentSyntaxMapping(yy_2_5_2_2_2_1);
goto yysl_8_1_2_5_2;
yyfl_8_1_2_5_2_2 : ;
yy_2_5_2_3_1_1 = yyv_Mode;
yy_2_5_2_3_1_2 = yy_2_5_2_3_1_1;
if (yy_2_5_2_3_1_2[0] != 4) goto yyfl_8_1_2_5_2_3;
yy_2_5_2_3_2_1 = yyv_Index;
PushInOutMarkArgumentSyntaxMapping(yy_2_5_2_3_2_1);
goto yysl_8_1_2_5_2;
yyfl_8_1_2_5_2_3 : ;
goto yyfl_8_1_2_5;
yysl_8_1_2_5_2 : ;
yyb = yysb;
}
goto yysl_8_1_2;
yyfl_8_1_2_5 : ;
goto yyfl_8_1;
yysl_8_1_2 : ;
yyb = yysb;
}
yy_3_1 = yyv_ParamRest;
yy_3_2 = yyv_ArgRest;
GenerateSyntaxMethodArgumentsForBootstrap(yy_3_1, yy_3_2);
return;
yyfl_8_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_8_2;
if (yy_0_2[0] != 2) goto yyfl_8_2;
return;
yyfl_8_2 : ;
}
yyErr(2,194);
}
MapMode(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_10_1;
yy_0_2 = ((yy)0);
*yyout_1 = yy_0_2;
return;
yyfl_10_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_10_2;
yy_0_2 = ((yy)0);
*yyout_1 = yy_0_2;
return;
yyfl_10_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_10_3;
yy_0_2 = ((yy)1);
*yyout_1 = yy_0_2;
return;
yyfl_10_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_10_4;
yy_0_2 = ((yy)2);
*yyout_1 = yy_0_2;
return;
yyfl_10_4 : ;
}
yyErr(2,260);
}
MapSyntaxPrecedence(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_11_1;
yy_0_2 = ((yy)1);
*yyout_1 = yy_0_2;
return;
yyfl_11_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_11_2;
yy_0_2 = ((yy)2);
*yyout_1 = yy_0_2;
return;
yyfl_11_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_11_3;
yy_0_2 = ((yy)2);
*yyout_1 = yy_0_2;
return;
yyfl_11_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_11_4;
yy_0_2 = ((yy)3);
*yyout_1 = yy_0_2;
return;
yyfl_11_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_11_5;
yy_0_2 = ((yy)3);
*yyout_1 = yy_0_2;
return;
yyfl_11_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_11_6;
yy_0_2 = ((yy)3);
*yyout_1 = yy_0_2;
return;
yyfl_11_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_11_7;
yy_0_2 = ((yy)4);
*yyout_1 = yy_0_2;
return;
yyfl_11_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_11_8;
yy_0_2 = ((yy)5);
*yyout_1 = yy_0_2;
return;
yyfl_11_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_11_9;
yy_0_2 = ((yy)6);
*yyout_1 = yy_0_2;
return;
yyfl_11_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_11_10;
yy_0_2 = ((yy)7);
*yyout_1 = yy_0_2;
return;
yyfl_11_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_11_11;
yy_0_2 = ((yy)8);
*yyout_1 = yy_0_2;
return;
yyfl_11_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_11_12;
yy_0_2 = ((yy)8);
*yyout_1 = yy_0_2;
return;
yyfl_11_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_11_13;
yy_0_2 = ((yy)9);
*yyout_1 = yy_0_2;
return;
yyfl_11_13 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_11_14;
yy_0_2 = ((yy)10);
*yyout_1 = yy_0_2;
return;
yyfl_11_14 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_11_15;
yy_0_2 = ((yy)11);
*yyout_1 = yy_0_2;
return;
yyfl_11_15 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 16) goto yyfl_11_16;
yy_0_2 = ((yy)12);
*yyout_1 = yy_0_2;
return;
yyfl_11_16 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 17) goto yyfl_11_17;
yy_0_2 = ((yy)13);
*yyout_1 = yy_0_2;
return;
yyfl_11_17 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 18) goto yyfl_11_18;
yy_0_2 = ((yy)14);
*yyout_1 = yy_0_2;
return;
yyfl_11_18 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 19) goto yyfl_11_19;
yy_0_2 = ((yy)14);
*yyout_1 = yy_0_2;
return;
yyfl_11_19 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 20) goto yyfl_11_20;
yy_0_2 = ((yy)15);
*yyout_1 = yy_0_2;
return;
yyfl_11_20 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 21) goto yyfl_11_21;
yy_0_2 = ((yy)16);
*yyout_1 = yy_0_2;
return;
yyfl_11_21 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 22) goto yyfl_11_22;
yy_0_2 = ((yy)17);
*yyout_1 = yy_0_2;
return;
yyfl_11_22 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 23) goto yyfl_11_23;
yy_0_2 = ((yy)18);
*yyout_1 = yy_0_2;
return;
yyfl_11_23 : ;
}
yyErr(2,289);
}
