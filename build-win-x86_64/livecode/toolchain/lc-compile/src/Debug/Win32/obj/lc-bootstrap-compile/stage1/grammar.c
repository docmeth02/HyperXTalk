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
yyAbort(n,"grammar", l);
}
int yyparse_rc = 0;
void ROOT()
{
extern char *THIS_RUNTIME_SYSTEM;
char *GENTLE = "Gentle 3.0 01100401 (C) 1992, 1997";
if (strcmp(THIS_RUNTIME_SYSTEM, GENTLE))
{ printf("INCONSISTENT GENTLE RUNTIME SYSTEM\n"); exit(1); }
yyExtend();
yyparse_rc = yyparse();
}
Depend_GenerateMapping(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_0_1_1_1;
yy yyv_Kind;
yy yy_0_1_1_2;
yy yyv_Name;
yy yy_0_1_1_3;
yy yy_0_1_1_4;
yy yyv_Rest;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_ModuleName;
yy yy_1_2;
yy yy_2_1;
yy yyv_Filename;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_2_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_2_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Position = yy_0_1_1_1;
yyv_Kind = yy_0_1_1_2;
yyv_Name = yy_0_1_1_3;
yyv_Rest = yy_0_1_2;
yy_1_1 = yyv_Name;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_ModuleName = yy_1_2;
yy_2_1 = yyv_Position;
GetFilenameOfPosition(yy_2_1, &yy_2_2);
yyv_Filename = yy_2_2;
yy_3_1 = yyv_ModuleName;
yy_3_2 = yyv_Filename;
DependDefineMapping(yy_3_1, yy_3_2);
yy_4_1 = yyv_Rest;
Depend_GenerateMapping(yy_4_1);
return;
yyfl_2_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_2_2;
return;
yyfl_2_2 : ;
}
yyErr(2,51);
}
Depend_GenerateDependencies(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yyv_Name;
yy yy_0_1_1_3;
yy yyv_Definitions;
yy yy_0_1_1_4;
yy yyv_Rest;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_ModuleName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_3_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_3_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Name = yy_0_1_1_3;
yyv_Definitions = yy_0_1_1_4;
yyv_Rest = yy_0_1_2;
yy_1_1 = yyv_Name;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_ModuleName = yy_1_2;
yy_2_1 = yyv_ModuleName;
yy_2_2 = yyv_Definitions;
Depend_GenerateDependenciesForModule(yy_2_1, yy_2_2);
yy_3_1 = yyv_Rest;
Depend_GenerateDependencies(yy_3_1);
return;
yyfl_3_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_3_2;
return;
yyfl_3_2 : ;
}
yyErr(2,62);
}
Depend_GenerateDependenciesForModule(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_ModuleName;
yy yy_0_1;
yy yy_0_2;
yy yyv_Left;
yy yy_0_2_1;
yy yyv_Right;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleName = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_4_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Left = yy_0_2_1;
yyv_Right = yy_0_2_2;
yy_1_1 = yyv_ModuleName;
yy_1_2 = yyv_Left;
Depend_GenerateDependenciesForModule(yy_1_1, yy_1_2);
yy_2_1 = yyv_ModuleName;
yy_2_2 = yyv_Right;
Depend_GenerateDependenciesForModule(yy_2_1, yy_2_2);
return;
yyfl_4_1 : ;
}
{
yy yyb;
yy yyv_ModuleName;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Name;
yy yy_0_2_2;
yy yy_1_1;
yy yyv_DependencyName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleName = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_4_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Name = yy_0_2_2;
yy_1_1 = yyv_Name;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_DependencyName = yy_1_2;
yy_2_1 = yyv_ModuleName;
yy_2_2 = yyv_DependencyName;
DependDefineDependency(yy_2_1, yy_2_2);
return;
yyfl_4_2 : ;
}
{
yy yyb;
yy yyv_ModuleName;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleName = yy_0_1;
return;
yyfl_4_3 : ;
}
yyErr(2,72);
}
Compile(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Modules;
yy yy_0_1;
yy yy_2_1;
yy yy_2_2;
yy yy_3_2_1_1;
yy yy_3_2_2_2_1_1_3_1;
yy yy_3_2_2_2_1_1_4_2_2_1;
yy yy_3_2_2_2_1_2_1_1;
yy_0_1 = yyin_1;
yyv_Modules = yy_0_1;
InitializeBind();
yy_2_1 = yyv_Modules;
yy_2_2 = yyv_Modules;
BindModules(yy_2_1, yy_2_2);
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_5_1_3_1;
goto yysl_5_1_3;
yyfl_5_1_3_1 : ;
yy_3_2_1_1 = yyv_Modules;
CheckModules(yy_3_2_1_1);
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_5_1_3_2_2_1;
goto yysl_5_1_3_2_2;
yyfl_5_1_3_2_2_1 : ;
{
yy yysb = yyb;
if (! IsBootstrapCompile()) goto yyfl_5_1_3_2_2_2_1_1;
InitializeSyntax();
yy_3_2_2_2_1_1_3_1 = yyv_Modules;
GenerateSyntaxForModules(yy_3_2_2_2_1_1_3_1);
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_5_1_3_2_2_2_1_1_4_1;
goto yysl_5_1_3_2_2_2_1_1_4;
yyfl_5_1_3_2_2_2_1_1_4_1 : ;
GenerateSyntaxRules();
yy_3_2_2_2_1_1_4_2_2_1 = yyv_Modules;
GenerateModules(yy_3_2_2_2_1_1_4_2_2_1);
goto yysl_5_1_3_2_2_2_1_1_4;
yysl_5_1_3_2_2_2_1_1_4 : ;
yyb = yysb;
}
goto yysl_5_1_3_2_2_2_1;
yyfl_5_1_3_2_2_2_1_1 : ;
yy_3_2_2_2_1_2_1_1 = yyv_Modules;
GenerateModules(yy_3_2_2_2_1_2_1_1);
goto yysl_5_1_3_2_2_2_1;
yysl_5_1_3_2_2_2_1 : ;
yyb = yysb;
}
goto yysl_5_1_3_2_2;
yysl_5_1_3_2_2 : ;
yyb = yysb;
}
goto yysl_5_1_3;
yysl_5_1_3 : ;
yyb = yysb;
}
return;
}
}
BindModules(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yyv_Imports;
yy yy_0_2;
yy yy_1_1_1;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_6_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yyv_Imports = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1 = (yy) yyv_Head[2];
if (yy_1_1_1 == (yy) yyu) yyErr(1,119);
if (yy_1_1_1[0] != 1) goto yyfl_6_1_1_1;
goto yysl_6_1_1;
yyfl_6_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
yy_1_2_1_2 = yyv_Imports;
Bind(yy_1_2_1_1, yy_1_2_1_2);
goto yysl_6_1_1;
yysl_6_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Tail;
yy_2_2 = yyv_Imports;
BindModules(yy_2_1, yy_2_2);
return;
yyfl_6_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_6_2;
return;
yyfl_6_2 : ;
}
yyErr(2,115);
}
CheckModules(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1_1;
yy yy_1_2_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_7_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1 = (yy) yyv_Head[2];
if (yy_1_1_1 == (yy) yyu) yyErr(1,132);
if (yy_1_1_1[0] != 1) goto yyfl_7_1_1_1;
goto yysl_7_1_1;
yyfl_7_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
Check(yy_1_2_1_1);
goto yysl_7_1_1;
yysl_7_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Tail;
CheckModules(yy_2_1);
return;
yyfl_7_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_7_2;
return;
yyfl_7_2 : ;
}
yyErr(2,128);
}
GenerateSyntaxForModules(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1_1;
yy yy_1_2_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_8_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1 = (yy) yyv_Head[2];
if (yy_1_1_1 == (yy) yyu) yyErr(1,145);
if (yy_1_1_1[0] != 1) goto yyfl_8_1_1_1;
goto yysl_8_1_1;
yyfl_8_1_1_1 : ;
yy_1_2_1_1 = yyv_Head;
{
extern GenerateSyntax();
yybroadcast_MODULE(yy_1_2_1_1, 0, &yynull, GenerateSyntax);
}
goto yysl_8_1_1;
yysl_8_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Tail;
GenerateSyntaxForModules(yy_2_1);
return;
yyfl_8_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_8_2;
return;
yyfl_8_2 : ;
}
yyErr(2,141);
}
ExpandImports(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Id;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_0_3;
yy yy_0_3_1;
yy yy_0_3_2;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yy_2_1;
yy yyv_NameString;
yy yy_2_2;
yy yy_3_1_1_2_1_1;
yy yy_3_2_1_2_1_1;
yy yy_3_2_1_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_16_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Id = yy_0_2_1;
if (yy_0_2_2[0] != 2) goto yyfl_16_1;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2_1 = yyv_Name;
GetStringOfNameLiteral(yy_2_1, &yy_2_2);
yyv_NameString = yy_2_2;
{
yy yysb = yyb;
{
yy yysb = yyb;
if (! IsBootstrapCompile()) goto yyfl_16_1_3_1_1_1;
goto yysl_16_1_3_1_1;
yyfl_16_1_3_1_1_1 : ;
yy_3_1_1_2_1_1 = yyv_NameString;
if (! AddImportedModuleFile(yy_3_1_1_2_1_1)) goto yyfl_16_1_3_1_1_2;
goto yysl_16_1_3_1_1;
yyfl_16_1_3_1_1_2 : ;
goto yyfl_16_1_3_1;
yysl_16_1_3_1_1 : ;
yyb = yysb;
}
goto yysl_16_1_3;
yyfl_16_1_3_1 : ;
{
yy yysb = yyb;
if (! IsDependencyCompile()) goto yyfl_16_1_3_2_1_1;
goto yysl_16_1_3_2_1;
yyfl_16_1_3_2_1_1 : ;
yy_3_2_1_2_1_1 = yyv_Position;
yy_3_2_1_2_1_2 = yyv_Name;
Error_UnableToFindImportedModule(yy_3_2_1_2_1_1, yy_3_2_1_2_1_2);
goto yysl_16_1_3_2_1;
yysl_16_1_3_2_1 : ;
yyb = yysb;
}
goto yysl_16_1_3;
yysl_16_1_3 : ;
yyb = yysb;
}
yy_0_3_1 = yyv_Position;
yy_0_3_2 = yyv_Id;
yy_0_3 = yyb + 0;
yy_0_3[0] = 3;
yy_0_3[1] = ((intptr_t)yy_0_3_1);
yy_0_3[2] = ((intptr_t)yy_0_3_2);
*yyout_1 = yy_0_3;
return;
yyfl_16_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yy_0_2;
yy yyv_Id;
yy yy_0_2_1;
yy yyv_Tail;
yy yy_0_2_2;
yy yy_0_3;
yy yy_0_3_1;
yy yy_0_3_1_1;
yy yy_0_3_1_2;
yy yy_0_3_2;
yy yy_1_1;
yy yy_1_2;
yy yyv_ExpandedTail;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Position = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_16_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Id = yy_0_2_1;
yyv_Tail = yy_0_2_2;
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Position;
yy_1_2 = yyv_Tail;
ExpandImports(yy_1_1, yy_1_2, &yy_1_3);
yyv_ExpandedTail = yy_1_3;
yy_0_3_1_1 = yyv_Position;
yy_0_3_1_2 = yyv_Id;
yy_0_3_1 = yyb + 3;
yy_0_3_1[0] = 3;
yy_0_3_1[1] = ((intptr_t)yy_0_3_1_1);
yy_0_3_1[2] = ((intptr_t)yy_0_3_1_2);
yy_0_3_2 = yyv_ExpandedTail;
yy_0_3 = yyb + 0;
yy_0_3[0] = 1;
yy_0_3[1] = ((intptr_t)yy_0_3_1);
yy_0_3[2] = ((intptr_t)yy_0_3_2);
*yyout_1 = yy_0_3;
return;
yyfl_16_2 : ;
}
yyErr(2,272);
}
ProcessOperatorExpression(yyout_1)
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_1_1;
yy yyv_MethodIndex;
yy yy_1_2;
yy yyv_Arity;
yy yy_1_3;
yy yy_2_1;
yy yyv_Arguments;
yy yy_2_2;
yy yy_3_1;
yy yyv_Method;
yy yy_3_2;
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
if (! PopOperatorExpression(&yy_1_1, &yy_1_2, &yy_1_3)) goto yyfl_56_1;
yyv_Position = yy_1_1;
yyv_MethodIndex = yy_1_2;
yyv_Arity = yy_1_3;
yy_2_1 = yyv_Arity;
ProcessOperatorExpressionChildren(yy_2_1, &yy_2_2);
yyv_Arguments = yy_2_2;
yy_3_1 = yyv_MethodIndex;
CustomInvokeLists(yy_3_1, &yy_3_2);
yyv_Method = yy_3_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Method;
yy_0_1_3 = yyv_Arguments;
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
*yyout_1 = yy_0_1;
return;
yyfl_56_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Expr;
yy yy_1_1;
PopOperatorExpressionArgument(&yy_1_1);
yyv_Expr = yy_1_1;
yy_0_1 = yyv_Expr;
*yyout_1 = yy_0_1;
return;
yyfl_56_2 : ;
}
yyErr(2,916);
}
ProcessOperatorExpressionChildren(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Arity;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Arity = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Arity;
yy_1_2 = ((yy)0);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_57_1;
yy_0_2 = yyb + 0;
yy_0_2[0] = 2;
*yyout_1 = yy_0_2;
return;
yyfl_57_1 : ;
}
{
yy yyb;
yy yyv_Arity;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yyv_Head;
yy yy_1_1;
yy yy_2_1;
yy yy_2_1_1;
yy yy_2_1_2;
yy yyv_Tail;
yy yy_2_2;
yy_0_1 = yyin_1;
yyv_Arity = yy_0_1;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
ProcessOperatorExpression(&yy_1_1);
yyv_Head = yy_1_1;
yy_2_1_1 = yyv_Arity;
yy_2_1_2 = ((yy)1);
yy_2_1 = (yy)(((intptr_t)yy_2_1_1)-((intptr_t)yy_2_1_2));
ProcessOperatorExpressionChildren(yy_2_1, &yy_2_2);
yyv_Tail = yy_2_2;
yy_0_2_1 = yyv_Head;
yy_0_2_2 = yyv_Tail;
yy_0_2 = yyb + 0;
yy_0_2[0] = 1;
yy_0_2[1] = ((intptr_t)yy_0_2_1);
yy_0_2[2] = ((intptr_t)yy_0_2_2);
*yyout_1 = yy_0_2;
return;
yyfl_57_2 : ;
}
yyErr(2,926);
}
min(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yyv_A;
yy yy_0_1;
yy yyv_B;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_A = yy_0_1;
yyv_B = yy_0_2;
yy_1_1 = yyv_A;
yy_1_2 = yyv_B;
if ((intptr_t)yy_1_1 > (intptr_t)yy_1_2) goto yyfl_61_1;
yy_0_3 = yyv_A;
*yyout_1 = yy_0_3;
return;
yyfl_61_1 : ;
}
{
yy yyb;
yy yyv_A;
yy yy_0_1;
yy yyv_B;
yy yy_0_2;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_A = yy_0_1;
yyv_B = yy_0_2;
yy_0_3 = yyv_B;
*yyout_1 = yy_0_3;
return;
yyfl_61_2 : ;
}
yyErr(2,960);
}
QualifiedNameToId(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yy_2_1;
yy yyv_Namespace;
yy yy_2_2;
yy yyv_Identifier;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yyv_NamespaceId;
yy yy_3_3;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yyv_Id;
yy yy_4_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Position = yy_0_1;
yyv_Name = yy_0_2;
yy_1_1 = yyv_Name;
if (! ContainsNamespaceOperator(yy_1_1)) goto yyfl_89_1;
yy_2_1 = yyv_Name;
SplitNamespace(yy_2_1, &yy_2_2, &yy_2_3);
yyv_Namespace = yy_2_2;
yyv_Identifier = yy_2_3;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Namespace;
QualifiedNameToOptionalId(yy_3_1, yy_3_2, &yy_3_3);
yyv_NamespaceId = yy_3_3;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifier;
yy_4_3 = yyv_NamespaceId;
AssignId(yy_4_1, yy_4_2, yy_4_3, &yy_4_4);
yyv_Id = yy_4_4;
yy_0_3 = yyv_Id;
*yyout_1 = yy_0_3;
return;
yyfl_89_1 : ;
}
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yyv_Id;
yy yy_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Position = yy_0_1;
yyv_Name = yy_0_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Position;
yy_1_2 = yyv_Name;
yy_1_3 = yyb + 0;
yy_1_3[0] = 2;
AssignId(yy_1_1, yy_1_2, yy_1_3, &yy_1_4);
yyv_Id = yy_1_4;
yy_0_3 = yyv_Id;
*yyout_1 = yy_0_3;
return;
yyfl_89_2 : ;
}
yyErr(2,1289);
}
QualifiedNameToOptionalId(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yy_0_3;
yy yy_0_3_1;
yy yy_1_1;
yy yy_1_2;
yy yyv_Id;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Position = yy_0_1;
yyv_Name = yy_0_2;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Position;
yy_1_2 = yyv_Name;
QualifiedNameToId(yy_1_1, yy_1_2, &yy_1_3);
yyv_Id = yy_1_3;
yy_0_3_1 = yyv_Id;
yy_0_3 = yyb + 0;
yy_0_3[0] = 1;
yy_0_3[1] = ((intptr_t)yy_0_3_1);
*yyout_1 = yy_0_3;
return;
}
}
AssignId(yyin_1, yyin_2, yyin_3, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Position;
yy yy_0_1;
yy yyv_Identifier;
yy yy_0_2;
yy yyv_Namespace;
yy yy_0_3;
yy yy_0_4;
yy yyv_Id;
yy yy_2;
yy yy_3;
yy yy_4;
yy yy_5;
yy yy_6_1_1_1;
yy yy_6_1_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Position = yy_0_1;
yyv_Identifier = yy_0_2;
yyv_Namespace = yy_0_3;
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Id = yyb + 0;
yyb[4] = yyu;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_2 = yyv_Position;
yyv_Id[1] = (intptr_t) yy_2;
yy_3 = yyv_Identifier;
yyv_Id[2] = (intptr_t) yy_3;
yy_4 = yyb + 5;
yy_4[0] = 7;
yyv_Id[3] = (intptr_t) yy_4;
yy_5 = yyv_Namespace;
yyv_Id[4] = (intptr_t) yy_5;
{
yy yysb = yyb;
yy_6_1_1_1 = yyv_Identifier;
if (! ContainsNamespaceOperator(yy_6_1_1_1)) goto yyfl_91_1_6_1;
yy_6_1_2_1 = yyv_Position;
Error_IllegalNamespaceOperator(yy_6_1_2_1);
goto yysl_91_1_6;
yyfl_91_1_6_1 : ;
goto yysl_91_1_6;
yysl_91_1_6 : ;
yyb = yysb;
}
yy_0_4 = yyv_Id;
*yyout_1 = yy_0_4;
return;
}
}
GetQualifiedName(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yyv_Namespace;
yy yy_1;
yy yy_2_1;
yy yy_2_2;
yy yyv_Name;
yy yy_2_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[4];
if (yy_1 == (yy) yyu) yyErr(1,1322);
yyv_Namespace = yy_1;
yy_2_1 = yyv_Namespace;
yy_2_2 = yyv_Id;
ResolveIdInNamespace(yy_2_1, yy_2_2, &yy_2_3);
yyv_Name = yy_2_3;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
}
}
ResolveIdInNamespace(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_NamespaceId;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_2;
yy yy_0_3;
yy yyv_UnqualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Namespace;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yyv_Name;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_93_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_NamespaceId = yy_0_1_1;
yyv_Id = yy_0_2;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,1328);
yyv_UnqualifiedName = yy_1;
yy_2_1 = yyv_NamespaceId;
GetQualifiedName(yy_2_1, &yy_2_2);
yyv_Namespace = yy_2_2;
yy_3_1 = yyv_Namespace;
yy_3_2 = yyv_UnqualifiedName;
ConcatenateNameParts(yy_3_1, yy_3_2, &yy_3_3);
yyv_Name = yy_3_3;
yy_0_3 = yyv_Name;
*yyout_1 = yy_0_3;
return;
yyfl_93_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_2;
yy yy_0_3;
yy yyv_Name;
yy yy_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_93_2;
yyv_Id = yy_0_2;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,1333);
yyv_Name = yy_1;
yy_0_3 = yyv_Name;
*yyout_1 = yy_0_3;
return;
yyfl_93_2 : ;
}
yyErr(2,1325);
}
int ResolveNamespace(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_NamespaceId;
yy yy_0_1_1;
yy yy_0_2;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_94_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_NamespaceId = yy_0_1_1;
yy_1_1 = yyv_NamespaceId;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return 1;
yyfl_94_1 : ;
}
return 0;
}
CustomInvokeLists(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Index;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yyv_List;
yy yy_1_2;
yy_0_1 = yyin_1;
yyv_Index = yy_0_1;
yy_1_1 = yyv_Index;
LookupCustomInvokeList(yy_1_1, &yy_1_2);
yyv_List = yy_1_2;
yy_0_2 = yyv_List;
*yyout_1 = yy_0_2;
return;
}
}
MakeCustomInvokeMethodArgs1(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Mode;
yy yy_0_1;
yy yyv_Index;
yy yy_0_2;
yy yy_0_3;
yy yy_0_3_1;
yy yy_0_3_2;
yy yy_0_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Mode = yy_0_1;
yyv_Index = yy_0_2;
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yy_0_3_1 = yyv_Mode;
yy_0_3_2 = yyv_Index;
yy_0_3_3 = yyb + 4;
yy_0_3_3[0] = 2;
yy_0_3 = yyb + 0;
yy_0_3[0] = 1;
yy_0_3[1] = ((intptr_t)yy_0_3_1);
yy_0_3[2] = ((intptr_t)yy_0_3_2);
yy_0_3[3] = ((intptr_t)yy_0_3_3);
*yyout_1 = yy_0_3;
return;
}
}
MakeCustomInvokeMethodArgs2(yyin_1, yyin_2, yyin_3, yyin_4, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Mode1;
yy yy_0_1;
yy yyv_Index1;
yy yy_0_2;
yy yyv_Mode2;
yy yy_0_3;
yy yyv_Index2;
yy yy_0_4;
yy yy_0_5;
yy yy_0_5_1;
yy yy_0_5_2;
yy yy_0_5_3;
yy yy_0_5_3_1;
yy yy_0_5_3_2;
yy yy_0_5_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_Mode1 = yy_0_1;
yyv_Index1 = yy_0_2;
yyv_Mode2 = yy_0_3;
yyv_Index2 = yy_0_4;
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yy_0_5_1 = yyv_Mode1;
yy_0_5_2 = yyv_Index1;
yy_0_5_3_1 = yyv_Mode2;
yy_0_5_3_2 = yyv_Index2;
yy_0_5_3_3 = yyb + 8;
yy_0_5_3_3[0] = 2;
yy_0_5_3 = yyb + 4;
yy_0_5_3[0] = 1;
yy_0_5_3[1] = ((intptr_t)yy_0_5_3_1);
yy_0_5_3[2] = ((intptr_t)yy_0_5_3_2);
yy_0_5_3[3] = ((intptr_t)yy_0_5_3_3);
yy_0_5 = yyb + 0;
yy_0_5[0] = 1;
yy_0_5[1] = ((intptr_t)yy_0_5_1);
yy_0_5[2] = ((intptr_t)yy_0_5_2);
yy_0_5[3] = ((intptr_t)yy_0_5_3);
*yyout_1 = yy_0_5;
return;
}
}
MakeCustomInvokeMethodArgs3(yyin_1, yyin_2, yyin_3, yyin_4, yyin_5, yyin_6, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy yyin_5;
yy yyin_6;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Mode1;
yy yy_0_1;
yy yyv_Index1;
yy yy_0_2;
yy yyv_Mode2;
yy yy_0_3;
yy yyv_Index2;
yy yy_0_4;
yy yyv_Mode3;
yy yy_0_5;
yy yyv_Index3;
yy yy_0_6;
yy yy_0_7;
yy yy_0_7_1;
yy yy_0_7_2;
yy yy_0_7_3;
yy yy_0_7_3_1;
yy yy_0_7_3_2;
yy yy_0_7_3_3;
yy yy_0_7_3_3_1;
yy yy_0_7_3_3_2;
yy yy_0_7_3_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yy_0_6 = yyin_6;
yyv_Mode1 = yy_0_1;
yyv_Index1 = yy_0_2;
yyv_Mode2 = yy_0_3;
yyv_Index2 = yy_0_4;
yyv_Mode3 = yy_0_5;
yyv_Index3 = yy_0_6;
yyb = yyh;
yyh += 13; if (yyh > yyhx) yyExtend();
yy_0_7_1 = yyv_Mode1;
yy_0_7_2 = yyv_Index1;
yy_0_7_3_1 = yyv_Mode2;
yy_0_7_3_2 = yyv_Index2;
yy_0_7_3_3_1 = yyv_Mode3;
yy_0_7_3_3_2 = yyv_Index3;
yy_0_7_3_3_3 = yyb + 12;
yy_0_7_3_3_3[0] = 2;
yy_0_7_3_3 = yyb + 8;
yy_0_7_3_3[0] = 1;
yy_0_7_3_3[1] = ((intptr_t)yy_0_7_3_3_1);
yy_0_7_3_3[2] = ((intptr_t)yy_0_7_3_3_2);
yy_0_7_3_3[3] = ((intptr_t)yy_0_7_3_3_3);
yy_0_7_3 = yyb + 4;
yy_0_7_3[0] = 1;
yy_0_7_3[1] = ((intptr_t)yy_0_7_3_1);
yy_0_7_3[2] = ((intptr_t)yy_0_7_3_2);
yy_0_7_3[3] = ((intptr_t)yy_0_7_3_3);
yy_0_7 = yyb + 0;
yy_0_7[0] = 1;
yy_0_7[1] = ((intptr_t)yy_0_7_1);
yy_0_7[2] = ((intptr_t)yy_0_7_2);
yy_0_7[3] = ((intptr_t)yy_0_7_3);
*yyout_1 = yy_0_7;
return;
}
}
MakeCustomInvokeMethodList(yyin_1, yyin_2, yyin_3, yyin_4, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yyv_Type;
yy yy_0_2;
yy yyv_Signature;
yy yy_0_3;
yy yyv_Previous;
yy yy_0_4;
yy yy_0_5;
yy yy_0_5_1;
yy yy_0_5_2;
yy yy_0_5_3;
yy yy_0_5_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_Name = yy_0_1;
yyv_Type = yy_0_2;
yyv_Signature = yy_0_3;
yyv_Previous = yy_0_4;
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yy_0_5_1 = yyv_Name;
yy_0_5_2 = yyv_Type;
yy_0_5_3 = yyv_Signature;
yy_0_5_4 = yyv_Previous;
yy_0_5 = yyb + 0;
yy_0_5[0] = 1;
yy_0_5[1] = ((intptr_t)yy_0_5_1);
yy_0_5[2] = ((intptr_t)yy_0_5_2);
yy_0_5[3] = ((intptr_t)yy_0_5_3);
yy_0_5[4] = ((intptr_t)yy_0_5_4);
*yyout_1 = yy_0_5;
return;
}
}
MakeCustomInvokeList(yyin_1, yyin_2, yyin_3, yyin_4, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yyv_ModuleName;
yy yy_0_2;
yy yyv_Methods;
yy yy_0_3;
yy yyv_Previous;
yy yy_0_4;
yy yy_0_5;
yy yyv_Info;
yy yy_2;
yy yy_2_1;
yy yy_3;
yy yy_3_1;
yy yy_4;
yy yy_5;
yy yy_6;
yy yy_7_1;
yy yy_7_1_1;
yy yy_7_1_2;
yy yyv_List;
yy yy_7_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_Name = yy_0_1;
yyv_ModuleName = yy_0_2;
yyv_Methods = yy_0_3;
yyv_Previous = yy_0_4;
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yyv_Info = yyb + 0;
yyb[5] = yyu;
yyb[4] = yyu;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_2_1 = ((yy)1);
yy_2 = (yy)(-((intptr_t)yy_2_1));
yyv_Info[1] = (intptr_t) yy_2;
yy_3_1 = ((yy)1);
yy_3 = (yy)(-((intptr_t)yy_3_1));
yyv_Info[2] = (intptr_t) yy_3;
yy_4 = yyv_Name;
yyv_Info[3] = (intptr_t) yy_4;
yy_5 = yyv_ModuleName;
yyv_Info[4] = (intptr_t) yy_5;
yy_6 = yyv_Methods;
yyv_Info[5] = (intptr_t) yy_6;
yy_7_1_1 = yyv_Info;
yy_7_1_2 = yyv_Previous;
yy_7_1 = yyb + 6;
yy_7_1[0] = 1;
yy_7_1[1] = ((intptr_t)yy_7_1_1);
yy_7_1[2] = ((intptr_t)yy_7_1_2);
yy_7_2 = yy_7_1;
yyv_List = yy_7_2;
yy_0_5 = yyv_List;
*yyout_1 = yy_0_5;
return;
}
}
InitializeCustomInvokeLists()
{
{
yy yyb;
return;
}
}
