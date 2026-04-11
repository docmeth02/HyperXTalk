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
yyAbort(n,"bind", l);
}
yy yyglov_CurrentModuleId = (yy) yyu;
yy yyglov_LastSyntaxMarkIndexVar = (yy) yyu;
yy yyglov_CurrentHandlerId = (yy) yyu;
yy yyglov_OutputSyntaxMarkIdVar = (yy) yyu;
yy yyglov_InputSyntaxMarkIdVar = (yy) yyu;
yy yyglov_ContextSyntaxMarkIdVar = (yy) yyu;
yy yyglov_IteratorSyntaxMarkIdVar = (yy) yyu;
yy yyglov_ContainerSyntaxMarkIdVar = (yy) yyu;
yy yyglov_ExpressionSyntaxRuleIdVar = (yy) yyu;
yy yyglov_ExpressionListSyntaxRuleIdVar = (yy) yyu;
Bind(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_0_1_1_1;
yy yyv_Kind;
yy yy_0_1_1_2;
yy yyv_Name;
yy yy_0_1_1_3;
yy yyv_Definitions;
yy yy_0_1_1_4;
yy yyv_ImportedModules;
yy yy_0_2;
yy yy_1;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_1_1 = yy_0_1;
yyv_Module = yy_0_1;
if (yy_0_1_1[0] != 1) goto yyfl_2_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Position = yy_0_1_1_1;
yyv_Kind = yy_0_1_1_2;
yyv_Name = yy_0_1_1_3;
yyv_Definitions = yy_0_1_1_4;
yyv_ImportedModules = yy_0_2;
yy_1 = yyv_Name;
yyglov_CurrentModuleId = yy_1;
yy_2_1 = yyv_Module;
yy_2_2 = yyv_ImportedModules;
DoBind(yy_2_1, yy_2_2);
return;
yyfl_2_1 : ;
}
yyErr(2,34);
}
DoBind(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_0_1_1_1;
yy yyv_Kind;
yy yy_0_1_1_2;
yy yyv_Name;
yy yy_0_1_1_3;
yy yyv_Definitions;
yy yy_0_1_1_4;
yy yyv_ImportedModules;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy yy_3_2_2_1;
yy yy_3_2_2_2;
yy yy_3_2_5_1;
yy yy_3_2_6_1;
yy yy_3_2_9_1;
yy yy_3_2_9_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_1_1 = yy_0_1;
yyv_Module = yy_0_1;
if (yy_0_1_1[0] != 1) goto yyfl_3_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Position = yy_0_1_1_1;
yyv_Kind = yy_0_1_1_2;
yyv_Name = yy_0_1_1_3;
yyv_Definitions = yy_0_1_1_4;
yyv_ImportedModules = yy_0_2;
yy_1_1 = yyv_Name;
DefineModuleId(yy_1_1);
yy_2_1 = yyv_Definitions;
yy_2_2 = yyv_ImportedModules;
BindImports(yy_2_1, yy_2_2);
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_3_1_3_1;
goto yysl_3_1_3;
yyfl_3_1_3_1 : ;
EnterScope();
yy_3_2_2_1 = yyv_Definitions;
yy_3_2_2_2 = yyv_ImportedModules;
DeclareImports(yy_3_2_2_1, yy_3_2_2_2);
EnterScope();
DeclarePredefinedIds();
yy_3_2_5_1 = yyv_Definitions;
Declare(yy_3_2_5_1);
yy_3_2_6_1 = yyv_Definitions;
{
extern Apply();
yybroadcast_DEFINITION(yy_3_2_6_1, 0, &yynull, Apply);
}
LeaveScope();
LeaveScope();
yy_3_2_9_1 = yyv_Name;
yy_3_2_9_2 = yyv_Definitions;
Define(yy_3_2_9_1, yy_3_2_9_2);
goto yysl_3_1_3;
yysl_3_1_3 : ;
yyb = yysb;
}
return;
yyfl_3_1 : ;
}
yyErr(2,40);
}
BindImports(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Left;
yy yy_0_1_1;
yy yyv_Right;
yy yy_0_1_2;
yy yyv_Imports;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_4_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Left = yy_0_1_1;
yyv_Right = yy_0_1_2;
yyv_Imports = yy_0_2;
yy_1_1 = yyv_Left;
yy_1_2 = yyv_Imports;
BindImports(yy_1_1, yy_1_2);
yy_2_1 = yyv_Right;
yy_2_2 = yyv_Imports;
BindImports(yy_2_1, yy_2_2);
return;
yyfl_4_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Imports;
yy yy_0_2;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yyv_Module;
yy yy_2_1_1_3;
yy yyv_ModuleId;
yy yy_2_1_2;
yy yy_2_1_3_1_1_1;
yy yy_2_1_3_1_1_2;
yy yyv_Info;
yy yy_2_1_3_1_1_2_1;
yy yy_2_1_3_2_1_1;
yy yy_2_1_3_2_2_1;
yy yy_2_1_3_2_2_2;
yy yy_2_2_1_1_2_1;
yy yy_2_2_1_1_2_2;
yy yy_2_2_1_2_1_1;
yy yy_2_2_1_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 3) goto yyfl_4_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
yyv_Imports = yy_0_2;
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Name;
yy_2_1_1_2 = yyv_Imports;
if (! FindModuleInList(yy_2_1_1_1, yy_2_1_1_2, &yy_2_1_1_3)) goto yyfl_4_2_2_1;
yyv_Module = yy_2_1_1_3;
yy_2_1_2 = (yy) yyv_Module[3];
if (yy_2_1_2 == (yy) yyu) yyErr(1,86);
yyv_ModuleId = yy_2_1_2;
{
yy yysb = yyb;
yy_2_1_3_1_1_1 = yyv_ModuleId;
QueryId(yy_2_1_3_1_1_1, &yy_2_1_3_1_1_2);
if (yy_2_1_3_1_1_2[0] != 2) goto yyfl_4_2_2_1_3_1;
yy_2_1_3_1_1_2_1 = ((yy)yy_2_1_3_1_1_2[1]);
yyv_Info = yy_2_1_3_1_1_2_1;
goto yysl_4_2_2_1_3;
yyfl_4_2_2_1_3_1 : ;
yy_2_1_3_2_1_1 = yyv_ModuleId;
DefineModuleId(yy_2_1_3_2_1_1);
yy_2_1_3_2_2_1 = yyv_Module;
yy_2_1_3_2_2_2 = yyv_Imports;
DoBind(yy_2_1_3_2_2_1, yy_2_1_3_2_2_2);
goto yysl_4_2_2_1_3;
yysl_4_2_2_1_3 : ;
yyb = yysb;
}
goto yysl_4_2_2;
yyfl_4_2_2_1 : ;
{
yy yysb = yyb;
if (! IsBootstrapCompile()) goto yyfl_4_2_2_2_1_1;
yy_2_2_1_1_2_1 = yyv_Position;
yy_2_2_1_1_2_2 = yyv_Name;
Error_DependentModuleNotIncludedWithInputs(yy_2_2_1_1_2_1, yy_2_2_1_1_2_2);
goto yysl_4_2_2_2_1;
yyfl_4_2_2_2_1_1 : ;
yy_2_2_1_2_1_1 = yyv_Position;
yy_2_2_1_2_1_2 = yyv_Name;
Error_InterfaceFileNameMismatch(yy_2_2_1_2_1_1, yy_2_2_1_2_1_2);
goto yysl_4_2_2_2_1;
yysl_4_2_2_2_1 : ;
yyb = yysb;
}
goto yysl_4_2_2;
yysl_4_2_2 : ;
yyb = yysb;
}
return;
yyfl_4_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
return;
yyfl_4_3 : ;
}
yyErr(2,76);
}
DeclareImports(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Left;
yy yy_0_1_1;
yy yyv_Right;
yy yy_0_1_2;
yy yyv_Imports;
yy yy_0_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_5_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Left = yy_0_1_1;
yyv_Right = yy_0_1_2;
yyv_Imports = yy_0_2;
yy_1_1 = yyv_Left;
yy_1_2 = yyv_Imports;
DeclareImports(yy_1_1, yy_1_2);
yy_2_1 = yyv_Right;
yy_2_2 = yyv_Imports;
DeclareImports(yy_2_1, yy_2_2);
return;
yyfl_5_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Imports;
yy yy_0_2;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yyv_Module;
yy yy_2_1_1_3;
yy yyv_Definitions;
yy yy_2_1_2;
yy yy_2_1_3_1;
yy yy_2_1_3_2;
yy yy_2_2_1_1_2_1;
yy yy_2_2_1_1_2_2;
yy yy_2_2_1_2_1_1;
yy yy_2_2_1_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 3) goto yyfl_5_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
yyv_Imports = yy_0_2;
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Name;
yy_2_1_1_2 = yyv_Imports;
if (! FindModuleInList(yy_2_1_1_1, yy_2_1_1_2, &yy_2_1_1_3)) goto yyfl_5_2_2_1;
yyv_Module = yy_2_1_1_3;
yy_2_1_2 = (yy) yyv_Module[4];
if (yy_2_1_2 == (yy) yyu) yyErr(1,116);
yyv_Definitions = yy_2_1_2;
yy_2_1_3_1 = yyv_Id;
yy_2_1_3_2 = yyv_Definitions;
DeclareImportedDefinitions(yy_2_1_3_1, yy_2_1_3_2);
goto yysl_5_2_2;
yyfl_5_2_2_1 : ;
{
yy yysb = yyb;
if (! IsBootstrapCompile()) goto yyfl_5_2_2_2_1_1;
yy_2_2_1_1_2_1 = yyv_Position;
yy_2_2_1_1_2_2 = yyv_Name;
Error_DependentModuleNotIncludedWithInputs(yy_2_2_1_1_2_1, yy_2_2_1_1_2_2);
goto yysl_5_2_2_2_1;
yyfl_5_2_2_2_1_1 : ;
yy_2_2_1_2_1_1 = yyv_Position;
yy_2_2_1_2_1_2 = yyv_Name;
Error_InterfaceFileNameMismatch(yy_2_2_1_2_1_1, yy_2_2_1_2_1_2);
goto yysl_5_2_2_2_1;
yysl_5_2_2_2_1 : ;
yyb = yysb;
}
goto yysl_5_2_2;
yysl_5_2_2 : ;
yyb = yysb;
}
return;
yyfl_5_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
return;
yyfl_5_3 : ;
}
yyErr(2,106);
}
DeclareImportedDefinitions(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Module;
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
yyv_Module = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_6_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Left = yy_0_2_1;
yyv_Right = yy_0_2_2;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Left;
DeclareImportedDefinitions(yy_1_1, yy_1_2);
yy_2_1 = yyv_Module;
yy_2_2 = yyv_Right;
DeclareImportedDefinitions(yy_2_1, yy_2_2);
return;
yyfl_6_1 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Definition;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 12) goto yyfl_6_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Definition = yy_0_2_2;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Definition;
DeclareImportedDefinitions(yy_1_1, yy_1_2);
return;
yyfl_6_2 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 4) goto yyfl_6_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Access;
yy_1_3 = yyv_Name;
DeclareImportedId(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_6_3 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 5) goto yyfl_6_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Access;
yy_1_3 = yyv_Name;
DeclareImportedId(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_6_4 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 6) goto yyfl_6_5;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Access;
yy_1_3 = yyv_Name;
DeclareImportedId(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_6_5 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_0_2_5;
yy yy_0_2_6;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 7) goto yyfl_6_6;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Access;
yy_1_3 = yyv_Name;
DeclareImportedId(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_6_6 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_0_2_5;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 8) goto yyfl_6_7;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Access;
yy_1_3 = yyv_Name;
DeclareImportedId(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_6_7 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_0_2_5;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 9) goto yyfl_6_8;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Access;
yy_1_3 = yyv_Name;
DeclareImportedId(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_6_8 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 10) goto yyfl_6_9;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Access;
yy_1_3 = yyv_Name;
DeclareImportedId(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_6_9 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_0_2_5;
yy yy_0_2_6;
yy yy_0_2_7;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 11) goto yyfl_6_10;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yy_0_2_7 = ((yy)yy_0_2[7]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_1_1 = yyv_Module;
yy_1_2 = yyv_Access;
yy_1_3 = yyv_Name;
DeclareImportedId(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_6_10 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_0_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_6_11;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
return;
yyfl_6_11 : ;
}
{
yy yyb;
yy yyv_Module;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Module = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_6_12;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return;
yyfl_6_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 13) goto yyfl_6_13;
return;
yyfl_6_13 : ;
}
yyErr(2,130);
}
int FindModuleInList(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yyv_Head;
yy yy_0_2_1;
yy yyv_Rest;
yy yy_0_2_2;
yy yy_0_3;
yy yyv_Id;
yy yy_1;
yy yy_2_1;
yy yyv_ModName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_7_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Head = yy_0_2_1;
yyv_Rest = yy_0_2_2;
yy_1 = (yy) yyv_Head[3];
if (yy_1 == (yy) yyu) yyErr(1,177);
yyv_Id = yy_1;
yy_2_1 = yyv_Id;
GetQualifiedName(yy_2_1, &yy_2_2);
yyv_ModName = yy_2_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_ModName;
if (! IsNameEqualToName(yy_3_1, yy_3_2)) goto yyfl_7_1;
yy_0_3 = yyv_Head;
*yyout_1 = yy_0_3;
return 1;
yyfl_7_1 : ;
}
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Rest;
yy yy_0_2_2;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yyv_Found;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_7_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Rest = yy_0_2_2;
yy_1_1 = yyv_Name;
yy_1_2 = yyv_Rest;
if (! FindModuleInList(yy_1_1, yy_1_2, &yy_1_3)) goto yyfl_7_2;
yyv_Found = yy_1_3;
yy_0_3 = yyv_Found;
*yyout_1 = yy_0_3;
return 1;
yyfl_7_2 : ;
}
return 0;
}
Declare(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Left;
yy yy_0_1_1;
yy yyv_Right;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_10_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Left = yy_0_1_1;
yyv_Right = yy_0_1_2;
yy_1_1 = yyv_Left;
Declare(yy_1_1);
yy_2_1 = yyv_Right;
Declare(yy_2_1);
return;
yyfl_10_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Definition;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_10_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Definition = yy_0_1_2;
yy_1_1 = yyv_Definition;
Declare(yy_1_1);
return;
yyfl_10_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_10_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_10_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_10_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_10_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_10_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_10_5 : ;
}
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
yy yy_0_1_6;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_10_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_10_6 : ;
}
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
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_10_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_10_7 : ;
}
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
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_10_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_10_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_10_9;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_10_9 : ;
}
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
yy yy_0_1_6;
yy yy_0_1_7;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_10_10;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yy_0_1_7 = ((yy)yy_0_1[7]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_10_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_10_11;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
return;
yyfl_10_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_10_12;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return;
yyfl_10_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_10_13;
return;
yyfl_10_13 : ;
}
yyErr(2,194);
}
DeclareParameters(yyin_1)
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
yy yy_0_1_1_4;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_11_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_1_1[0] != 1) goto yyfl_11_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yy_0_1_1_4 = ((yy)yy_0_1_1[4]);
yyv_Name = yy_0_1_1_3;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
yy_2_1 = yyv_Tail;
DeclareParameters(yy_2_1);
return;
yyfl_11_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_11_2;
return;
yyfl_11_2 : ;
}
yyErr(2,236);
}
DeclareFields(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Field;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_1_2_1;
yy yyv_Name;
yy yy_1_1_1_2_2;
yy yy_1_1_1_2_3;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_2_1;
yy yy_1_2_1_2_2;
yy yy_1_2_1_2_3;
yy yy_1_3_1_1;
yy yy_1_3_1_2;
yy yy_1_3_1_2_1;
yy yy_1_3_1_2_2;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_12_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Field = yy_0_1_1;
yyv_Tail = yy_0_1_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Field;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_12_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yy_1_1_1_2_2 = ((yy)yy_1_1_1_2[2]);
yy_1_1_1_2_3 = ((yy)yy_1_1_1_2[3]);
yyv_Name = yy_1_1_1_2_2;
goto yysl_12_1_1;
yyfl_12_1_1_1 : ;
yy_1_2_1_1 = yyv_Field;
yy_1_2_1_2 = yy_1_2_1_1;
if (yy_1_2_1_2[0] != 2) goto yyfl_12_1_1_2;
yy_1_2_1_2_1 = ((yy)yy_1_2_1_2[1]);
yy_1_2_1_2_2 = ((yy)yy_1_2_1_2[2]);
yy_1_2_1_2_3 = ((yy)yy_1_2_1_2[3]);
yyv_Name = yy_1_2_1_2_2;
goto yysl_12_1_1;
yyfl_12_1_1_2 : ;
yy_1_3_1_1 = yyv_Field;
yy_1_3_1_2 = yy_1_3_1_1;
if (yy_1_3_1_2[0] != 3) goto yyfl_12_1_1_3;
yy_1_3_1_2_1 = ((yy)yy_1_3_1_2[1]);
yy_1_3_1_2_2 = ((yy)yy_1_3_1_2[2]);
yyv_Name = yy_1_3_1_2_2;
goto yysl_12_1_1;
yyfl_12_1_1_3 : ;
goto yyfl_12_1;
yysl_12_1_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Name;
DeclareId(yy_2_1);
yy_3_1 = yyv_Tail;
DeclareFields(yy_3_1);
return;
yyfl_12_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_12_2;
return;
yyfl_12_2 : ;
}
yyErr(2,245);
}
DeclareLabels(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Left;
yy yy_0_1_1;
yy yyv_Right;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_13_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Left = yy_0_1_1;
yyv_Right = yy_0_1_2;
yy_1_1 = yyv_Left;
DeclareLabels(yy_1_1);
yy_2_1 = yyv_Right;
DeclareLabels(yy_2_1);
return;
yyfl_13_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_13_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_13_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
return;
yyfl_13_3 : ;
}
yyErr(2,261);
}
Define(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_ModuleId;
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
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_14_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Left = yy_0_2_1;
yyv_Right = yy_0_2_2;
yy_1_1 = yyv_ModuleId;
yy_1_2 = yyv_Left;
Define(yy_1_1, yy_1_2);
yy_2_1 = yyv_ModuleId;
yy_2_2 = yyv_Right;
Define(yy_2_1, yy_2_2);
return;
yyfl_14_1 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yyv_Type;
yy yy_0_2_4;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_1_2_1;
yy yy_2_1_1_2_2;
yy yy_2_1_1_2_3;
yy yyv_Parameters;
yy yy_2_1_1_2_3_1;
yy yy_2_1_1_2_3_2;
yy yy_2_1_2_1;
yy yy_2_1_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 4) goto yyfl_14_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yyv_Type = yy_0_2_4;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 2;
yy_1_5 = yyv_Type;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Type;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 8) goto yyfl_14_2_2_1;
yy_2_1_1_2_1 = ((yy)yy_2_1_1_2[1]);
yy_2_1_1_2_2 = ((yy)yy_2_1_1_2[2]);
yy_2_1_1_2_3 = ((yy)yy_2_1_1_2[3]);
if (yy_2_1_1_2_3[0] != 1) goto yyfl_14_2_2_1;
yy_2_1_1_2_3_1 = ((yy)yy_2_1_1_2_3[1]);
yy_2_1_1_2_3_2 = ((yy)yy_2_1_1_2_3[2]);
yyv_Parameters = yy_2_1_1_2_3_1;
yy_2_1_2_1 = yyv_Name;
yy_2_1_2_2 = yyv_Parameters;
DefineParameters(yy_2_1_2_1, yy_2_1_2_2);
goto yysl_14_2_2;
yyfl_14_2_2_1 : ;
goto yysl_14_2_2;
yysl_14_2_2 : ;
yyb = yysb;
}
return;
yyfl_14_2 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yyv_Value;
yy yy_0_2_4;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy yy_1_5_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 5) goto yyfl_14_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yyv_Value = yy_0_2_4;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 3;
yy_1_5_1 = yyv_Position;
yy_1_5 = yyb + 1;
yy_1_5[0] = 2;
yy_1_5[1] = ((intptr_t)yy_1_5_1);
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
return;
yyfl_14_3 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yyv_Type;
yy yy_0_2_4;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 6) goto yyfl_14_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yyv_Type = yy_0_2_4;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 7;
yy_1_5 = yyv_Type;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
return;
yyfl_14_4 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yyv_Signature;
yy yy_0_2_4;
yy yy_0_2_4_1;
yy yyv_Parameters;
yy yy_0_2_4_1_1;
yy yy_0_2_4_1_2;
yy yy_0_2_5;
yy yy_0_2_6;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy yy_1_5_1;
yy yy_1_5_2;
yy yy_1_5_3;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 7) goto yyfl_14_5;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_0_2_4_1 = yy_0_2_4;
yyv_Signature = yy_0_2_4;
if (yy_0_2_4_1[0] != 1) goto yyfl_14_5;
yy_0_2_4_1_1 = ((yy)yy_0_2_4_1[1]);
yy_0_2_4_1_2 = ((yy)yy_0_2_4_1[2]);
yyv_Parameters = yy_0_2_4_1_1;
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 4;
yy_1_5_1 = yyv_Position;
yy_1_5_2 = yyb + 5;
yy_1_5_2[0] = 1;
yy_1_5_3 = yyv_Signature;
yy_1_5 = yyb + 1;
yy_1_5[0] = 8;
yy_1_5[1] = ((intptr_t)yy_1_5_1);
yy_1_5[2] = ((intptr_t)yy_1_5_2);
yy_1_5[3] = ((intptr_t)yy_1_5_3);
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
yy_2_1 = yyv_Name;
yy_2_2 = yyv_Parameters;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_14_5 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yyv_Signature;
yy yy_0_2_4;
yy yy_0_2_4_1;
yy yyv_Parameters;
yy yy_0_2_4_1_1;
yy yy_0_2_4_1_2;
yy yy_0_2_5;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy yy_1_5_1;
yy yy_1_5_2;
yy yy_1_5_3;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 8) goto yyfl_14_6;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_0_2_4_1 = yy_0_2_4;
yyv_Signature = yy_0_2_4;
if (yy_0_2_4_1[0] != 1) goto yyfl_14_6;
yy_0_2_4_1_1 = ((yy)yy_0_2_4_1[1]);
yy_0_2_4_1_2 = ((yy)yy_0_2_4_1[2]);
yyv_Parameters = yy_0_2_4_1_1;
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 4;
yy_1_5_1 = yyv_Position;
yy_1_5_2 = yyb + 5;
yy_1_5_2[0] = 2;
yy_1_5_3 = yyv_Signature;
yy_1_5 = yyb + 1;
yy_1_5[0] = 8;
yy_1_5[1] = ((intptr_t)yy_1_5_1);
yy_1_5[2] = ((intptr_t)yy_1_5_2);
yy_1_5[3] = ((intptr_t)yy_1_5_3);
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
yy_2_1 = yyv_Name;
yy_2_2 = yyv_Parameters;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_14_6 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yyv_Position;
yy yy_0_2_2_1;
yy yyv_Access;
yy yy_0_2_2_2;
yy yyv_Name;
yy yy_0_2_2_3;
yy yyv_Signature;
yy yy_0_2_2_4;
yy yy_0_2_2_4_1;
yy yyv_Parameters;
yy yy_0_2_2_4_1_1;
yy yy_0_2_2_4_1_2;
yy yy_0_2_2_5;
yy yy_0_2_2_6;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy yy_1_5_1;
yy yy_1_5_2;
yy yy_1_5_3;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 12) goto yyfl_14_7;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
if (yy_0_2_2[0] != 7) goto yyfl_14_7;
yy_0_2_2_1 = ((yy)yy_0_2_2[1]);
yy_0_2_2_2 = ((yy)yy_0_2_2[2]);
yy_0_2_2_3 = ((yy)yy_0_2_2[3]);
yy_0_2_2_4 = ((yy)yy_0_2_2[4]);
yy_0_2_2_5 = ((yy)yy_0_2_2[5]);
yy_0_2_2_6 = ((yy)yy_0_2_2[6]);
yyv_Position = yy_0_2_2_1;
yyv_Access = yy_0_2_2_2;
yyv_Name = yy_0_2_2_3;
yy_0_2_2_4_1 = yy_0_2_2_4;
yyv_Signature = yy_0_2_2_4;
if (yy_0_2_2_4_1[0] != 1) goto yyfl_14_7;
yy_0_2_2_4_1_1 = ((yy)yy_0_2_2_4_1[1]);
yy_0_2_2_4_1_2 = ((yy)yy_0_2_2_4_1[2]);
yyv_Parameters = yy_0_2_2_4_1_1;
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 4;
yy_1_5_1 = yyv_Position;
yy_1_5_2 = yyb + 5;
yy_1_5_2[0] = 1;
yy_1_5_3 = yyv_Signature;
yy_1_5 = yyb + 1;
yy_1_5[0] = 8;
yy_1_5[1] = ((intptr_t)yy_1_5_1);
yy_1_5[2] = ((intptr_t)yy_1_5_2);
yy_1_5[3] = ((intptr_t)yy_1_5_3);
DefineUnsafeSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
yy_2_1 = yyv_Name;
yy_2_2 = yyv_Parameters;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_14_7 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yyv_Position;
yy yy_0_2_2_1;
yy yyv_Access;
yy yy_0_2_2_2;
yy yyv_Name;
yy yy_0_2_2_3;
yy yyv_Signature;
yy yy_0_2_2_4;
yy yy_0_2_2_4_1;
yy yyv_Parameters;
yy yy_0_2_2_4_1_1;
yy yy_0_2_2_4_1_2;
yy yy_0_2_2_5;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy yy_1_5_1;
yy yy_1_5_2;
yy yy_1_5_3;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 12) goto yyfl_14_8;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
if (yy_0_2_2[0] != 8) goto yyfl_14_8;
yy_0_2_2_1 = ((yy)yy_0_2_2[1]);
yy_0_2_2_2 = ((yy)yy_0_2_2[2]);
yy_0_2_2_3 = ((yy)yy_0_2_2[3]);
yy_0_2_2_4 = ((yy)yy_0_2_2[4]);
yy_0_2_2_5 = ((yy)yy_0_2_2[5]);
yyv_Position = yy_0_2_2_1;
yyv_Access = yy_0_2_2_2;
yyv_Name = yy_0_2_2_3;
yy_0_2_2_4_1 = yy_0_2_2_4;
yyv_Signature = yy_0_2_2_4;
if (yy_0_2_2_4_1[0] != 1) goto yyfl_14_8;
yy_0_2_2_4_1_1 = ((yy)yy_0_2_2_4_1[1]);
yy_0_2_2_4_1_2 = ((yy)yy_0_2_2_4_1[2]);
yyv_Parameters = yy_0_2_2_4_1_1;
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 4;
yy_1_5_1 = yyv_Position;
yy_1_5_2 = yyb + 5;
yy_1_5_2[0] = 2;
yy_1_5_3 = yyv_Signature;
yy_1_5 = yyb + 1;
yy_1_5[0] = 8;
yy_1_5[1] = ((intptr_t)yy_1_5_1);
yy_1_5[2] = ((intptr_t)yy_1_5_2);
yy_1_5[3] = ((intptr_t)yy_1_5_3);
DefineUnsafeSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
yy_2_1 = yyv_Name;
yy_2_2 = yyv_Parameters;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_14_8 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yyv_Getter;
yy yy_0_2_4;
yy yyv_Setter;
yy yy_0_2_5;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 9) goto yyfl_14_9;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yyv_Getter = yy_0_2_4;
yyv_Setter = yy_0_2_5;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 5;
yy_1_5 = yyb + 1;
yy_1_5[0] = 18;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
return;
yyfl_14_9 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yyv_Signature;
yy yy_0_2_4;
yy yy_0_2_4_1;
yy yyv_Parameters;
yy yy_0_2_4_1_1;
yy yy_0_2_4_1_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 10) goto yyfl_14_10;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yy_0_2_4_1 = yy_0_2_4;
yyv_Signature = yy_0_2_4;
if (yy_0_2_4_1[0] != 1) goto yyfl_14_10;
yy_0_2_4_1_1 = ((yy)yy_0_2_4_1[1]);
yy_0_2_4_1_2 = ((yy)yy_0_2_4_1[2]);
yyv_Parameters = yy_0_2_4_1_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Access;
yy_1_4 = yyb + 0;
yy_1_4[0] = 6;
yy_1_5 = yyb + 1;
yy_1_5[0] = 18;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
yy_2_1 = yyv_Name;
yy_2_2 = yyv_Parameters;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_14_10 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Access;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yyv_Class;
yy yy_0_2_4;
yy yyv_Warnings;
yy yy_0_2_5;
yy yyv_Syntax;
yy yy_0_2_6;
yy yyv_Methods;
yy yy_0_2_7;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 11) goto yyfl_14_11;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yy_0_2_7 = ((yy)yy_0_2[7]);
yyv_Position = yy_0_2_1;
yyv_Access = yy_0_2_2;
yyv_Name = yy_0_2_3;
yyv_Class = yy_0_2_4;
yyv_Warnings = yy_0_2_5;
yyv_Syntax = yy_0_2_6;
yyv_Methods = yy_0_2_7;
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyv_Class;
yy_1_4 = yyv_Syntax;
yy_1_5 = yyv_Methods;
DefineSyntaxId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
return;
yyfl_14_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_0_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 2) goto yyfl_14_12;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
return;
yyfl_14_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 3) goto yyfl_14_13;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return;
yyfl_14_13 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 13) goto yyfl_14_14;
return;
yyfl_14_14 : ;
}
yyErr(2,277);
}
DefineParameters(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_1_1;
yy yy_0_2_1_2;
yy yyv_Name;
yy yy_0_2_1_3;
yy yyv_Type;
yy yy_0_2_1_4;
yy yyv_Tail;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_15_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
if (yy_0_2_1[0] != 1) goto yyfl_15_1;
yy_0_2_1_1 = ((yy)yy_0_2_1[1]);
yy_0_2_1_2 = ((yy)yy_0_2_1[2]);
yy_0_2_1_3 = ((yy)yy_0_2_1[3]);
yy_0_2_1_4 = ((yy)yy_0_2_1[4]);
yyv_Name = yy_0_2_1_3;
yyv_Type = yy_0_2_1_4;
yyv_Tail = yy_0_2_2;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_ModuleId;
yy_1_3 = yyb + 0;
yy_1_3[0] = 1;
yy_1_4 = yyb + 1;
yy_1_4[0] = 8;
yy_1_5 = yyv_Type;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
yy_2_1 = yyv_ModuleId;
yy_2_2 = yyv_Tail;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_15_1 : ;
}
{
yy yyb;
yy yyv_ModuleId;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ModuleId = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_15_2;
return;
yyfl_15_2 : ;
}
yyErr(2,332);
}
ComputeTypeOfConstantTermExpression(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_16_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2_1 = yyv_Position;
yy_0_2 = yyb + 0;
yy_0_2[0] = 2;
yy_0_2[1] = ((intptr_t)yy_0_2_1);
*yyout_1 = yy_0_2;
return;
yyfl_16_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_16_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2_1 = yyv_Position;
yy_0_2 = yyb + 0;
yy_0_2[0] = 9;
yy_0_2[1] = ((intptr_t)yy_0_2_1);
*yyout_1 = yy_0_2;
return;
yyfl_16_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_16_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Position = yy_0_1_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2_1 = yyv_Position;
yy_0_2 = yyb + 0;
yy_0_2[0] = 9;
yy_0_2[1] = ((intptr_t)yy_0_2_1);
*yyout_1 = yy_0_2;
return;
yyfl_16_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_16_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2_1 = yyv_Position;
yy_0_2 = yyb + 0;
yy_0_2[0] = 10;
yy_0_2[1] = ((intptr_t)yy_0_2_1);
*yyout_1 = yy_0_2;
return;
yyfl_16_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_16_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2_1 = yyv_Position;
yy_0_2 = yyb + 0;
yy_0_2[0] = 10;
yy_0_2[1] = ((intptr_t)yy_0_2_1);
*yyout_1 = yy_0_2;
return;
yyfl_16_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_16_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2_1 = yyv_Position;
yy_0_2 = yyb + 0;
yy_0_2[0] = 11;
yy_0_2[1] = ((intptr_t)yy_0_2_1);
*yyout_1 = yy_0_2;
return;
yyfl_16_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_16_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_0_2_1 = yyv_Position;
yy_0_2 = yyb + 0;
yy_0_2[0] = 13;
yy_0_2[1] = ((intptr_t)yy_0_2_1);
*yyout_1 = yy_0_2;
return;
yyfl_16_7 : ;
}
yyErr(2,341);
}
int Apply(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_TYPE();
extern yybroadcast_FIELD();
extern yybroadcast_BYTECODE();
extern yybroadcast_STATEMENT();
extern yybroadcast_EXPRESSION();
extern yybroadcast_DEFINITION();
extern yybroadcast_SYNTAX();
extern yybroadcast_SYNTAXMETHOD();
extern yybroadcast_SYNTAXCONSTANT();
/*=== Sweep TYPE ===*/
if (yytp == (intptr_t) yybroadcast_TYPE) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_19_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_10001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Fields;
yy yy_0_1_2;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_19_10002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Fields = yy_0_1_2;
EnterScope();
yy_2_1 = yyv_Fields;
DeclareFields(yy_2_1);
yy_3_1 = yyv_Fields;
{
extern Apply();
yybroadcast_FIELDLIST(yy_3_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_10002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_BaseType;
yy yy_0_1_2;
yy yyv_Fields;
yy yy_0_1_3;
yy yy_1_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_19_10003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_BaseType = yy_0_1_2;
yyv_Fields = yy_0_1_3;
yy_1_1 = yyv_BaseType;
{
extern Apply();
yybroadcast_TYPE(yy_1_1, 0, &yynull, Apply);
}
EnterScope();
yy_3_1 = yyv_Fields;
DeclareFields(yy_3_1);
yy_4_1 = yyv_Fields;
{
extern Apply();
yybroadcast_FIELDLIST(yy_4_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_10003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Parameters;
yy yy_0_1_3_1;
yy yyv_Type;
yy yy_0_1_3_2;
yy yy_1_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_19_10004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
if (yy_0_1_3[0] != 1) goto yyfl_19_10004;
yy_0_1_3_1 = ((yy)yy_0_1_3[1]);
yy_0_1_3_2 = ((yy)yy_0_1_3[2]);
yyv_Parameters = yy_0_1_3_1;
yyv_Type = yy_0_1_3_2;
yy_1_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_1_1, 0, &yynull, Apply);
}
EnterScope();
yy_3_1 = yyv_Parameters;
DeclareParameters(yy_3_1);
yy_4_1 = yyv_Parameters;
{
extern Apply();
yybroadcast_PARAMETERLIST(yy_4_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_10004 : ;
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
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Handler;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_19_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Handler = yy_0_1_3;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
yy_2_1 = yyv_Handler;
ApplyId(yy_2_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_20001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_19_20002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Type = yy_0_1_3;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
yy_2_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_19_20002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_19_20003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_20003 : ;
}
return 0;
}
/*===*/
/*=== Sweep BYTECODE ===*/
else if (yytp == (intptr_t) yybroadcast_BYTECODE) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yyv_ParentId;
yy yy_1;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_2_4;
yy yy_2_5;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_19_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1 = yyglov_CurrentHandlerId;
if (yy_1 == (yy) yyu) yyErr(1,565);
yyv_ParentId = yy_1;
yy_2_1 = yyv_Name;
yy_2_2 = yyv_ParentId;
yy_2_3 = yyb + 0;
yy_2_3[0] = 1;
yy_2_4 = yyb + 1;
yy_2_4[0] = 11;
yy_2_5 = yyb + 2;
yy_2_5[0] = 18;
DefineSymbolId(yy_2_1, yy_2_2, yy_2_3, yy_2_4, yy_2_5);
*yyout_1 = yyin_2;
return 1;
yyfl_19_30001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_ParentId;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_3_4;
yy yy_3_5;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_19_30002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Type = yy_0_1_3;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
yy_2 = yyglov_CurrentHandlerId;
if (yy_2 == (yy) yyu) yyErr(1,570);
yyv_ParentId = yy_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_ParentId;
yy_3_3 = yyb + 0;
yy_3_3[0] = 1;
yy_3_4 = yyb + 1;
yy_3_4[0] = 9;
yy_3_5 = yyv_Type;
DefineSymbolId(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5);
yy_4_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_4_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_19_30002 : ;
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
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_ParentId;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_3_4;
yy yy_3_5;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_19_40001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Type = yy_0_1_3;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
yy_2 = yyglov_CurrentHandlerId;
if (yy_2 == (yy) yyu) yyErr(1,488);
yyv_ParentId = yy_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_ParentId;
yy_3_3 = yyb + 0;
yy_3_3[0] = 1;
yy_3_4 = yyb + 1;
yy_3_4[0] = 9;
yy_3_5 = yyv_Type;
DefineSymbolId(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5);
yy_4_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_4_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_19_40001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Condition;
yy yy_0_1_2;
yy yyv_Consequent;
yy yy_0_1_3;
yy yyv_Alternate;
yy yy_0_1_4;
yy yy_1_1;
yy yy_3_1;
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_19_40002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Condition = yy_0_1_2;
yyv_Consequent = yy_0_1_3;
yyv_Alternate = yy_0_1_4;
yy_1_1 = yyv_Condition;
{
extern Apply();
yybroadcast_EXPRESSION(yy_1_1, 0, &yynull, Apply);
}
EnterScope();
yy_3_1 = yyv_Consequent;
{
extern Apply();
yybroadcast_STATEMENT(yy_3_1, 0, &yynull, Apply);
}
LeaveScope();
EnterScope();
yy_6_1 = yyv_Alternate;
{
extern Apply();
yybroadcast_STATEMENT(yy_6_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Body;
yy yy_0_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_19_40003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Body = yy_0_1_2;
EnterScope();
yy_2_1 = yyv_Body;
{
extern Apply();
yybroadcast_STATEMENT(yy_2_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Expression;
yy yy_0_1_2;
yy yyv_Body;
yy yy_0_1_3;
yy yy_1_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_19_40004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Expression = yy_0_1_2;
yyv_Body = yy_0_1_3;
yy_1_1 = yyv_Expression;
{
extern Apply();
yybroadcast_EXPRESSION(yy_1_1, 0, &yynull, Apply);
}
EnterScope();
yy_3_1 = yyv_Body;
{
extern Apply();
yybroadcast_STATEMENT(yy_3_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40004 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Expression;
yy yy_0_1_2;
yy yyv_Body;
yy yy_0_1_3;
yy yy_1_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_19_40005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Expression = yy_0_1_2;
yyv_Body = yy_0_1_3;
yy_1_1 = yyv_Expression;
{
extern Apply();
yybroadcast_EXPRESSION(yy_1_1, 0, &yynull, Apply);
}
EnterScope();
yy_3_1 = yyv_Body;
{
extern Apply();
yybroadcast_STATEMENT(yy_3_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40005 : ;
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
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_19_40006;
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
ApplyId(yy_1_1);
yy_2_1 = yyv_Start;
{
extern Apply();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, Apply);
}
yy_3_1 = yyv_Finish;
{
extern Apply();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, Apply);
}
yy_4_1 = yyv_Step;
{
extern Apply();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, Apply);
}
EnterScope();
yy_6_1 = yyv_Body;
{
extern Apply();
yybroadcast_STATEMENT(yy_6_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40006 : ;
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
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_19_40007;
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
ApplyId(yy_1_1);
yy_2_1 = yyv_Start;
{
extern Apply();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, Apply);
}
yy_3_1 = yyv_Finish;
{
extern Apply();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, Apply);
}
yy_4_1 = yyv_Step;
{
extern Apply();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, Apply);
}
EnterScope();
yy_6_1 = yyv_Body;
{
extern Apply();
yybroadcast_STATEMENT(yy_6_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40007 : ;
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
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_19_40008;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Iterator = yy_0_1_2;
yyv_Container = yy_0_1_3;
yyv_Body = yy_0_1_4;
yy_1_1 = yyv_Iterator;
{
extern Apply();
yybroadcast_EXPRESSION(yy_1_1, 0, &yynull, Apply);
}
yy_2_1 = yyv_Container;
{
extern Apply();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, Apply);
}
EnterScope();
yy_4_1 = yyv_Body;
{
extern Apply();
yybroadcast_STATEMENT(yy_4_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40008 : ;
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
if (yy_0_1[0] != 16) goto yyfl_19_40009;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = yyv_Handler;
ApplyId(yy_1_1);
yy_2_1 = yyv_Arguments;
{
extern Apply();
yybroadcast_EXPRESSIONLIST(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_19_40009 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Block;
yy yy_0_1_2;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 20) goto yyfl_19_40010;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Block = yy_0_1_2;
EnterScope();
yy_2_1 = yyv_Block;
DeclareLabels(yy_2_1);
yy_3_1 = yyv_Block;
{
extern Apply();
yybroadcast_BYTECODE(yy_3_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40010 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Block;
yy yy_0_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 21) goto yyfl_19_40011;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Block = yy_0_1_2;
EnterScope();
yy_2_1 = yyv_Block;
{
extern Apply();
yybroadcast_STATEMENT(yy_2_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_40011 : ;
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
if (yy_0_1[0] != 8) goto yyfl_19_50001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_50001 : ;
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
if (yy_0_1[0] != 14) goto yyfl_19_50002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = yyv_Handler;
ApplyId(yy_1_1);
yy_2_1 = yyv_Arguments;
{
extern Apply();
yybroadcast_EXPRESSIONLIST(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_19_50002 : ;
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
yy yy_0_1_4;
yy yyv_Parameters;
yy yy_0_1_4_1;
yy yyv_Type;
yy yy_0_1_4_2;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yy_1_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5;
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_19_60001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Id = yy_0_1_3;
if (yy_0_1_4[0] != 1) goto yyfl_19_60001;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Parameters = yy_0_1_4_1;
yyv_Type = yy_0_1_4_2;
yyv_Body = yy_0_1_6;
yy_1_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_1_1, 0, &yynull, Apply);
}
EnterScope();
yy_3_1 = yyv_Parameters;
DeclareParameters(yy_3_1);
yy_4_1 = yyv_Parameters;
{
extern Apply();
yybroadcast_PARAMETERLIST(yy_4_1, 0, &yynull, Apply);
}
yy_5 = yyv_Id;
yyglov_CurrentHandlerId = yy_5;
yy_6_1 = yyv_Body;
{
extern Apply();
yybroadcast_STATEMENT(yy_6_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_60001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Parameters;
yy yy_0_1_4_1;
yy yyv_Type;
yy yy_0_1_4_2;
yy yy_0_1_5;
yy yy_1_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_19_60002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
if (yy_0_1_4[0] != 1) goto yyfl_19_60002;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Parameters = yy_0_1_4_1;
yyv_Type = yy_0_1_4_2;
yy_1_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_1_1, 0, &yynull, Apply);
}
EnterScope();
yy_3_1 = yyv_Parameters;
DeclareParameters(yy_3_1);
yy_4_1 = yyv_Parameters;
{
extern Apply();
yybroadcast_PARAMETERLIST(yy_4_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_60002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Getter;
yy yy_0_1_4;
yy yyv_OptSetter;
yy yy_0_1_5;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yyv_Setter;
yy yy_2_1_1_2_1;
yy yy_2_1_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_19_60003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Getter = yy_0_1_4;
yyv_OptSetter = yy_0_1_5;
yy_1_1 = yyv_Getter;
ApplyId(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_OptSetter;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 1) goto yyfl_19_60003_2_1;
yy_2_1_1_2_1 = ((yy)yy_2_1_1_2[1]);
yyv_Setter = yy_2_1_1_2_1;
yy_2_1_2_1 = yyv_Setter;
ApplyId(yy_2_1_2_1);
goto yysl_19_60003_2;
yyfl_19_60003_2_1 : ;
goto yysl_19_60003_2;
yysl_19_60003_2 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_19_60003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Parameters;
yy yy_0_1_4_1;
yy yyv_Type;
yy yy_0_1_4_2;
yy yy_1_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_19_60004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
if (yy_0_1_4[0] != 1) goto yyfl_19_60004;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Parameters = yy_0_1_4_1;
yyv_Type = yy_0_1_4_2;
yy_1_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_1_1, 0, &yynull, Apply);
}
EnterScope();
yy_3_1 = yyv_Parameters;
DeclareParameters(yy_3_1);
yy_4_1 = yyv_Parameters;
{
extern Apply();
yybroadcast_PARAMETERLIST(yy_4_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_60004 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Syntax;
yy yy_0_1_6;
yy yyv_Methods;
yy yy_0_1_7;
yy yy_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_19_60005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yy_0_1_7 = ((yy)yy_0_1[7]);
yyv_Syntax = yy_0_1_6;
yyv_Methods = yy_0_1_7;
yy_1 = ((yy)0);
yyglov_LastSyntaxMarkIndexVar = yy_1;
EnterScope();
DeclarePredefinedMarkVariables();
yy_4_1 = yyv_Syntax;
{
extern Apply();
yybroadcast_SYNTAX(yy_4_1, 0, &yynull, Apply);
}
yy_5_1 = yyv_Methods;
{
extern Apply();
yybroadcast_SYNTAXMETHODLIST(yy_5_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_19_60005 : ;
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
yy yyv_Rule;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_19_70001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Variable = yy_0_1_2;
yyv_Rule = yy_0_1_3;
yy_1_1 = yyv_Variable;
ApplySyntaxMarkId(yy_1_1);
yy_2_1 = yyv_Rule;
ApplyId(yy_2_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_70001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Variable;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_19_70002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Variable = yy_0_1_2;
yy_1_1 = yyv_Variable;
ApplySyntaxMarkId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_70002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Rule;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_19_70003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Rule = yy_0_1_2;
yy_1_1 = yyv_Rule;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_70003 : ;
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
if (yy_0_1[0] != 1) goto yyfl_19_80001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = yyv_Name;
ApplyId(yy_1_1);
yy_2_1 = yyv_Arguments;
{
extern Apply();
yybroadcast_SYNTAXCONSTANTLIST(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_19_80001 : ;
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
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_19_90001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = yyv_Value;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_90001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_19_90002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Value = yy_0_1_2;
yy_1_1 = yyv_Value;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_19_90002 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
DeclareImportedId(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_Namespace;
yy yy_0_1;
yy yy_0_2;
yy yyv_Id;
yy yy_0_3;
yy yy_1;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Namespace = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_21_1;
yyv_Id = yy_0_3;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Namespace;
yy_1 = yyb + 0;
yy_1[0] = 1;
yy_1[1] = ((intptr_t)yy_1_1);
yyv_Id[4] = (intptr_t) yy_1;
yy_2_1 = yyv_Id;
DeclareNamespacedId(yy_2_1);
return;
yyfl_21_1 : ;
}
{
yy yyb;
yy yyv_Namespace;
yy yy_0_1;
yy yyv_Access;
yy yy_0_2;
yy yyv_Id;
yy yy_0_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_Namespace = yy_0_1;
yyv_Access = yy_0_2;
yyv_Id = yy_0_3;
return;
yyfl_21_2 : ;
}
yyErr(2,634);
}
DeclareId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_ModuleId;
yy yy_1;
yy yy_2;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1 = yyglov_CurrentModuleId;
if (yy_1 == (yy) yyu) yyErr(1,647);
yyv_ModuleId = yy_1;
yy_2_1 = yyv_ModuleId;
yy_2 = yyb + 0;
yy_2[0] = 1;
yy_2[1] = ((intptr_t)yy_2_1);
yyv_Id[4] = (intptr_t) yy_2;
yy_3_1 = yyv_Id;
DeclareNamespacedId(yy_3_1);
return;
}
}
DeclareNamespacedId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yy_2_1;
yy yy_2_2;
yy yyv_DefiningId;
yy yy_2_2_1;
yy yyv_Position;
yy yy_3;
yy yyv_DefiningPosition;
yy yy_4;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,654);
yyv_Name = yy_1;
yy_2_1 = yyv_Name;
if (! HasLocalMeaning(yy_2_1, &yy_2_2)) goto yyfl_23_1;
if (yy_2_2[0] != 1) goto yyfl_23_1;
yy_2_2_1 = ((yy)yy_2_2[1]);
yyv_DefiningId = yy_2_2_1;
yy_3 = (yy) yyv_Id[1];
if (yy_3 == (yy) yyu) yyErr(1,656);
yyv_Position = yy_3;
yy_4 = (yy) yyv_DefiningId[1];
if (yy_4 == (yy) yyu) yyErr(1,657);
yyv_DefiningPosition = yy_4;
yy_5_1 = yyv_Position;
yy_5_2 = yyv_Name;
yy_5_3 = yyv_DefiningPosition;
Error_IdentifierPreviouslyDeclared(yy_5_1, yy_5_2, yy_5_3);
return;
yyfl_23_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yyv_NamespaceId;
yy yy_2;
yy yy_3_1;
yy yyv_Namespace;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yy_4_3_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,661);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[4];
if (yy_2 == (yy) yyu) yyErr(1,662);
yyv_NamespaceId = yy_2;
yy_3_1 = yyv_NamespaceId;
if (! ResolveNamespace(yy_3_1, &yy_3_2)) goto yyfl_23_2;
yyv_Namespace = yy_3_2;
yy_4_1 = yyv_Name;
yy_4_2 = yyv_Namespace;
yy_4_3_1 = yyv_Id;
yy_4_3 = yyb + 0;
yy_4_3[0] = 1;
yy_4_3[1] = ((intptr_t)yy_4_3_1);
DefineMeaning(yy_4_1, yy_4_2, yy_4_3);
return;
yyfl_23_2 : ;
}
yyErr(2,651);
}
ApplyId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yyv_NamespaceId;
yy yy_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_2_1;
yy yyv_Meaning;
yy yy_3_1_2_2;
yy yy_3_2_1_1;
yy yyv_Namespace;
yy yy_3_2_1_2;
yy yy_3_2_2_1;
yy yy_3_2_2_2;
yy yy_3_2_2_3;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,669);
yyv_Name = yy_1;
yy_2 = (yy) yyv_Id[4];
if (yy_2 == (yy) yyu) yyErr(1,670);
yyv_NamespaceId = yy_2;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_NamespaceId;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_24_1_3_1;
yy_3_1_2_1 = yyv_Name;
if (! HasUnqualifiedMeaning(yy_3_1_2_1, &yy_3_1_2_2)) goto yyfl_24_1_3_1;
yyv_Meaning = yy_3_1_2_2;
goto yysl_24_1_3;
yyfl_24_1_3_1 : ;
yy_3_2_1_1 = yyv_NamespaceId;
if (! ResolveNamespace(yy_3_2_1_1, &yy_3_2_1_2)) goto yyfl_24_1_3_2;
yyv_Namespace = yy_3_2_1_2;
yy_3_2_2_1 = yyv_Name;
yy_3_2_2_2 = yyv_Namespace;
if (! HasMeaning(yy_3_2_2_1, yy_3_2_2_2, &yy_3_2_2_3)) goto yyfl_24_1_3_2;
yyv_Meaning = yy_3_2_2_3;
goto yysl_24_1_3;
yyfl_24_1_3_2 : ;
goto yyfl_24_1;
yysl_24_1_3 : ;
yyb = yysb;
}
yy_4 = yyv_Meaning;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_24_1 : ;
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
if (yy_2 == (yy) yyu) yyErr(1,682);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_IdentifierNotDeclared(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_24_2 : ;
}
yyErr(2,666);
}
ApplyLocalId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yy_2_1;
yy yyv_Meaning;
yy yy_2_2;
yy yy_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
GetQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2_1 = yyv_Name;
if (! HasLocalMeaning(yy_2_1, &yy_2_2)) goto yyfl_25_1;
yyv_Meaning = yy_2_2;
yy_3 = yyv_Meaning;
yyv_Id[3] = (intptr_t) yy_3;
return;
yyfl_25_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yy_2_1;
yy yyv_Meaning;
yy yy_2_2;
yy yy_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,694);
yyv_Name = yy_1;
yy_2_1 = yyv_Name;
if (! HasLocalMeaning(yy_2_1, &yy_2_2)) goto yyfl_25_2;
yyv_Meaning = yy_2_2;
yy_3 = yyv_Meaning;
yyv_Id[3] = (intptr_t) yy_3;
return;
yyfl_25_2 : ;
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
if (yy_2 == (yy) yyu) yyErr(1,700);
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Name;
Error_IdentifierNotDeclared(yy_3_1, yy_3_2);
yy_4 = yyb + 0;
yy_4[0] = 6;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_25_3 : ;
}
yyErr(2,686);
}
ApplySyntaxMarkId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Name;
yy yy_1;
yy yy_2_1_1_1;
yy yyv_Meaning;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_2_1_2_2;
yy yy_2_1_2_2_1;
yy yyv_Index;
yy yy_2_2_1;
yy yyv_MarkInfo;
yy yy_2_2_3;
yy yy_2_2_4;
yy yy_2_2_5;
yy yy_2_2_6;
yy yy_2_2_7_1;
yy yy_2_2_7_1_1;
yy yy_2_2_7_2;
yy yy_2_2_8_1;
yy yy_2_2_8_2;
yy yy_2_2_9;
yy yy_2_2_9_1;
yy yy_2_2_9_2;
yy yy_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,707);
yyv_Name = yy_1;
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Name;
if (! HasLocalMeaning(yy_2_1_1_1, &yy_2_1_1_2)) goto yyfl_26_1_2_1;
yyv_Meaning = yy_2_1_1_2;
yy_2_1_2_1 = yyv_Meaning;
yy_2_1_2_2 = yy_2_1_2_1;
if (yy_2_1_2_2[0] != 5) goto yyfl_26_1_2_1;
yy_2_1_2_2_1 = ((yy)yy_2_1_2_2[1]);
goto yysl_26_1_2;
yyfl_26_1_2_1 : ;
yyb = yyh;
yyh += 10; if (yyh > yyhx) yyExtend();
yy_2_2_1 = yyglov_LastSyntaxMarkIndexVar;
if (yy_2_2_1 == (yy) yyu) yyErr(1,712);
yyv_Index = yy_2_2_1;
yyv_MarkInfo = yyb + 0;
yyb[4] = yyu;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_2_2_3 = yyv_Index;
yyv_MarkInfo[1] = (intptr_t) yy_2_2_3;
yy_2_2_4 = yyb + 5;
yy_2_2_4[0] = 1;
yyv_MarkInfo[4] = (intptr_t) yy_2_2_4;
yy_2_2_5 = yyb + 6;
yy_2_2_5[0] = 1;
yyv_MarkInfo[3] = (intptr_t) yy_2_2_5;
yy_2_2_6 = yyb + 7;
yy_2_2_6[0] = 1;
yyv_MarkInfo[2] = (intptr_t) yy_2_2_6;
yy_2_2_7_1_1 = yyv_MarkInfo;
yy_2_2_7_1 = yyb + 8;
yy_2_2_7_1[0] = 5;
yy_2_2_7_1[1] = ((intptr_t)yy_2_2_7_1_1);
yy_2_2_7_2 = yy_2_2_7_1;
yyv_Meaning = yy_2_2_7_2;
yy_2_2_8_1 = yyv_Name;
yy_2_2_8_2 = yyv_Meaning;
DefineUnqualifiedMeaning(yy_2_2_8_1, yy_2_2_8_2);
yy_2_2_9_1 = yyv_Index;
yy_2_2_9_2 = ((yy)1);
yy_2_2_9 = (yy)(((intptr_t)yy_2_2_9_1)+((intptr_t)yy_2_2_9_2));
yyglov_LastSyntaxMarkIndexVar = yy_2_2_9;
goto yysl_26_1_2;
yysl_26_1_2 : ;
yyb = yysb;
}
yy_3 = yyv_Meaning;
yyv_Id[3] = (intptr_t) yy_3;
return;
}
}
DefineModuleId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_Info;
yy yy_2;
yy yy_2_1;
yy yy_3;
yy yy_3_1;
yy yy_4;
yy yy_4_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Info = yyb + 0;
yyb[2] = yyu;
yyb[1] = yyu;
yy_2_1 = ((yy)1);
yy_2 = (yy)(-((intptr_t)yy_2_1));
yyv_Info[1] = (intptr_t) yy_2;
yy_3_1 = ((yy)1);
yy_3 = (yy)(-((intptr_t)yy_3_1));
yyv_Info[2] = (intptr_t) yy_3;
yy_4_1 = yyv_Info;
yy_4 = yyb + 3;
yy_4[0] = 2;
yy_4[1] = ((intptr_t)yy_4_1);
yyv_Id[3] = (intptr_t) yy_4;
return;
}
}
DefineSymbolId(yyin_1, yyin_2, yyin_3, yyin_4, yyin_5)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy yyin_5;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_ParentId;
yy yy_0_2;
yy yyv_Access;
yy yy_0_3;
yy yyv_Kind;
yy yy_0_4;
yy yyv_Type;
yy yy_0_5;
yy yyv_Info;
yy yy_2;
yy yy_2_1;
yy yy_3;
yy yy_3_1;
yy yy_4;
yy yy_5;
yy yy_6;
yy yy_7;
yy yy_8;
yy yy_9;
yy yy_9_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Id = yy_0_1;
yyv_ParentId = yy_0_2;
yyv_Access = yy_0_3;
yyv_Kind = yy_0_4;
yyv_Type = yy_0_5;
yyb = yyh;
yyh += 11; if (yyh > yyhx) yyExtend();
yyv_Info = yyb + 0;
yyb[7] = yyu;
yyb[6] = yyu;
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
yy_4 = yyv_ParentId;
yyv_Info[3] = (intptr_t) yy_4;
yy_5 = yyv_Kind;
yyv_Info[6] = (intptr_t) yy_5;
yy_6 = yyv_Type;
yyv_Info[7] = (intptr_t) yy_6;
yy_7 = yyv_Access;
yyv_Info[4] = (intptr_t) yy_7;
yy_8 = yyb + 8;
yy_8[0] = 1;
yyv_Info[5] = (intptr_t) yy_8;
yy_9_1 = yyv_Info;
yy_9 = yyb + 9;
yy_9[0] = 3;
yy_9[1] = ((intptr_t)yy_9_1);
yyv_Id[3] = (intptr_t) yy_9;
return;
}
}
DefineUnsafeSymbolId(yyin_1, yyin_2, yyin_3, yyin_4, yyin_5)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy yyin_5;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_ParentId;
yy yy_0_2;
yy yyv_Access;
yy yy_0_3;
yy yyv_Kind;
yy yy_0_4;
yy yyv_Type;
yy yy_0_5;
yy yyv_Info;
yy yy_2;
yy yy_2_1;
yy yy_3;
yy yy_3_1;
yy yy_4;
yy yy_5;
yy yy_6;
yy yy_7;
yy yy_8;
yy yy_9;
yy yy_9_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Id = yy_0_1;
yyv_ParentId = yy_0_2;
yyv_Access = yy_0_3;
yyv_Kind = yy_0_4;
yyv_Type = yy_0_5;
yyb = yyh;
yyh += 11; if (yyh > yyhx) yyExtend();
yyv_Info = yyb + 0;
yyb[7] = yyu;
yyb[6] = yyu;
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
yy_4 = yyv_ParentId;
yyv_Info[3] = (intptr_t) yy_4;
yy_5 = yyv_Kind;
yyv_Info[6] = (intptr_t) yy_5;
yy_6 = yyv_Type;
yyv_Info[7] = (intptr_t) yy_6;
yy_7 = yyv_Access;
yyv_Info[4] = (intptr_t) yy_7;
yy_8 = yyb + 8;
yy_8[0] = 2;
yyv_Info[5] = (intptr_t) yy_8;
yy_9_1 = yyv_Info;
yy_9 = yyb + 9;
yy_9[0] = 3;
yy_9[1] = ((intptr_t)yy_9_1);
yyv_Id[3] = (intptr_t) yy_9;
return;
}
}
DefineSyntaxId(yyin_1, yyin_2, yyin_3, yyin_4, yyin_5)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy yyin_5;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_ModuleId;
yy yy_0_2;
yy yyv_Class;
yy yy_0_3;
yy yyv_Syntax;
yy yy_0_4;
yy yyv_Methods;
yy yy_0_5;
yy yyv_Info;
yy yy_2;
yy yy_3;
yy yy_4;
yy yy_5;
yy yy_6;
yy yy_7;
yy yy_8;
yy yy_8_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Id = yy_0_1;
yyv_ModuleId = yy_0_2;
yyv_Class = yy_0_3;
yyv_Syntax = yy_0_4;
yyv_Methods = yy_0_5;
yyb = yyh;
yyh += 12; if (yyh > yyhx) yyExtend();
yyv_Info = yyb + 0;
yyb[7] = yyu;
yyb[6] = yyu;
yyb[5] = yyu;
yyb[4] = yyu;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_2 = yyv_Class;
yyv_Info[3] = (intptr_t) yy_2;
yy_3 = yyv_ModuleId;
yyv_Info[2] = (intptr_t) yy_3;
yy_4 = yyv_Syntax;
yyv_Info[4] = (intptr_t) yy_4;
yy_5 = yyv_Methods;
yyv_Info[5] = (intptr_t) yy_5;
yy_6 = yyb + 8;
yy_6[0] = 1;
yyv_Info[6] = (intptr_t) yy_6;
yy_7 = yyb + 9;
yy_7[0] = 1;
yyv_Info[7] = (intptr_t) yy_7;
yy_8_1 = yyv_Info;
yy_8 = yyb + 10;
yy_8[0] = 4;
yy_8[1] = ((intptr_t)yy_8_1);
yyv_Id[3] = (intptr_t) yy_8;
return;
}
}
InitializeBind()
{
{
yy yyb;
yy yy_1_1;
yy yy_1_2;
yy yyv_Id1;
yy yy_1_3;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yyv_Id2;
yy yy_3_3;
yy yy_4;
yy yy_5_1;
yy yy_5_2;
yy yyv_Id3;
yy yy_5_3;
yy yy_6;
yy yy_7_1;
yy yy_7_2;
yy yyv_Id4;
yy yy_7_3;
yy yy_8;
yy yy_9_1;
yy yy_9_2;
yy yyv_Id5;
yy yy_9_3;
yy yy_10;
yy yy_11_1;
yy yy_11_2;
yy yy_11_3;
yy yy_11_4;
yy yyv_Id6;
yy yy_11_5;
yy yy_12;
yy yy_13_1;
yy yy_13_2;
yy yy_13_3;
yy yy_13_4;
yy yyv_Id7;
yy yy_13_5;
yy yy_14;
yyb = yyh;
yyh += 11; if (yyh > yyhx) yyExtend();
yy_1_1 = ((yy)"output");
yy_1_2 = yyb + 0;
yy_1_2[0] = 11;
MakePredefinedSyntaxMarkId(yy_1_1, yy_1_2, &yy_1_3);
yyv_Id1 = yy_1_3;
yy_2 = yyv_Id1;
yyglov_OutputSyntaxMarkIdVar = yy_2;
yy_3_1 = ((yy)"input");
yy_3_2 = yyb + 1;
yy_3_2[0] = 10;
MakePredefinedSyntaxMarkId(yy_3_1, yy_3_2, &yy_3_3);
yyv_Id2 = yy_3_3;
yy_4 = yyv_Id2;
yyglov_InputSyntaxMarkIdVar = yy_4;
yy_5_1 = ((yy)"context");
yy_5_2 = yyb + 2;
yy_5_2[0] = 12;
MakePredefinedSyntaxMarkId(yy_5_1, yy_5_2, &yy_5_3);
yyv_Id3 = yy_5_3;
yy_6 = yyv_Id3;
yyglov_ContextSyntaxMarkIdVar = yy_6;
yy_7_1 = ((yy)"iterator");
yy_7_2 = yyb + 3;
yy_7_2[0] = 13;
MakePredefinedSyntaxMarkId(yy_7_1, yy_7_2, &yy_7_3);
yyv_Id4 = yy_7_3;
yy_8 = yyv_Id4;
yyglov_IteratorSyntaxMarkIdVar = yy_8;
yy_9_1 = ((yy)"container");
yy_9_2 = yyb + 4;
yy_9_2[0] = 14;
MakePredefinedSyntaxMarkId(yy_9_1, yy_9_2, &yy_9_3);
yyv_Id5 = yy_9_3;
yy_10 = yyv_Id5;
yyglov_ContainerSyntaxMarkIdVar = yy_10;
yy_11_1 = ((yy)"Expression");
yy_11_2 = yyb + 5;
yy_11_2[0] = 8;
yy_11_3 = yyb + 6;
yy_11_3[0] = 4;
yy_11_4 = yyb + 7;
yy_11_4[0] = 4;
MakePredefinedSyntaxId(yy_11_1, yy_11_2, yy_11_3, yy_11_4, &yy_11_5);
yyv_Id6 = yy_11_5;
yy_12 = yyv_Id6;
yyglov_ExpressionSyntaxRuleIdVar = yy_12;
yy_13_1 = ((yy)"ExpressionList");
yy_13_2 = yyb + 8;
yy_13_2[0] = 9;
yy_13_3 = yyb + 9;
yy_13_3[0] = 4;
yy_13_4 = yyb + 10;
yy_13_4[0] = 4;
MakePredefinedSyntaxId(yy_13_1, yy_13_2, yy_13_3, yy_13_4, &yy_13_5);
yyv_Id7 = yy_13_5;
yy_14 = yyv_Id7;
yyglov_ExpressionListSyntaxRuleIdVar = yy_14;
return;
}
}
DeclarePredefinedIds()
{
{
yy yyb;
yy yyv_Id1;
yy yy_1;
yy yy_2_1;
yy yyv_Id2;
yy yy_3;
yy yy_4_1;
yy_1 = yyglov_ExpressionSyntaxRuleIdVar;
if (yy_1 == (yy) yyu) yyErr(1,809);
yyv_Id1 = yy_1;
yy_2_1 = yyv_Id1;
DeclareId(yy_2_1);
yy_3 = yyglov_ExpressionListSyntaxRuleIdVar;
if (yy_3 == (yy) yyu) yyErr(1,811);
yyv_Id2 = yy_3;
yy_4_1 = yyv_Id2;
DeclareId(yy_4_1);
return;
}
}
DeclarePredefinedMarkVariables()
{
{
yy yyb;
yy yyv_Id1;
yy yy_1;
yy yy_2_1;
yy yyv_Id2;
yy yy_3;
yy yy_4_1;
yy yyv_Id3;
yy yy_5;
yy yy_6_1;
yy yyv_Id4;
yy yy_7;
yy yy_8_1;
yy yyv_Id5;
yy yy_9;
yy yy_10_1;
yy_1 = yyglov_OutputSyntaxMarkIdVar;
if (yy_1 == (yy) yyu) yyErr(1,817);
yyv_Id1 = yy_1;
yy_2_1 = yyv_Id1;
DeclareId(yy_2_1);
yy_3 = yyglov_InputSyntaxMarkIdVar;
if (yy_3 == (yy) yyu) yyErr(1,819);
yyv_Id2 = yy_3;
yy_4_1 = yyv_Id2;
DeclareId(yy_4_1);
yy_5 = yyglov_ContextSyntaxMarkIdVar;
if (yy_5 == (yy) yyu) yyErr(1,821);
yyv_Id3 = yy_5;
yy_6_1 = yyv_Id3;
DeclareId(yy_6_1);
yy_7 = yyglov_IteratorSyntaxMarkIdVar;
if (yy_7 == (yy) yyu) yyErr(1,823);
yyv_Id4 = yy_7;
yy_8_1 = yyv_Id4;
DeclareId(yy_8_1);
yy_9 = yyglov_ContainerSyntaxMarkIdVar;
if (yy_9 == (yy) yyu) yyErr(1,825);
yyv_Id5 = yy_9;
yy_10_1 = yyv_Id5;
DeclareId(yy_10_1);
return;
}
}
MakePredefinedSyntaxId(yyin_1, yyin_2, yyin_3, yyin_4, yyout_1)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
yy *yyout_1;
{
{
yy yyb;
yy yyv_String;
yy yy_0_1;
yy yyv_Class;
yy yy_0_2;
yy yyv_Prefix;
yy yy_0_3;
yy yyv_Suffix;
yy yy_0_4;
yy yy_0_5;
yy yyv_Id;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3;
yy yyv_Info;
yy yy_5;
yy yy_5_1;
yy yy_6;
yy yy_7;
yy yy_8;
yy yy_9;
yy yy_9_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_String = yy_0_1;
yyv_Class = yy_0_2;
yyv_Prefix = yy_0_3;
yyv_Suffix = yy_0_4;
yyb = yyh;
yyh += 15; if (yyh > yyhx) yyExtend();
yyv_Id = yyb + 0;
yyb[4] = yyu;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_2_1 = yyv_String;
MakeNameLiteral(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3 = yyv_Name;
yyv_Id[2] = (intptr_t) yy_3;
yyv_Info = yyb + 5;
yyb[12] = yyu;
yyb[11] = yyu;
yyb[10] = yyu;
yyb[9] = yyu;
yyb[8] = yyu;
yyb[7] = yyu;
yyb[6] = yyu;
yy_5_1 = ((yy)1);
yy_5 = (yy)(-((intptr_t)yy_5_1));
yyv_Info[1] = (intptr_t) yy_5;
yy_6 = yyv_Class;
yyv_Info[3] = (intptr_t) yy_6;
yy_7 = yyv_Prefix;
yyv_Info[6] = (intptr_t) yy_7;
yy_8 = yyv_Suffix;
yyv_Info[7] = (intptr_t) yy_8;
yy_9_1 = yyv_Info;
yy_9 = yyb + 13;
yy_9[0] = 4;
yy_9[1] = ((intptr_t)yy_9_1);
yyv_Id[3] = (intptr_t) yy_9;
yy_0_5 = yyv_Id;
*yyout_1 = yy_0_5;
return;
}
}
MakePredefinedSyntaxMarkId(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yyv_String;
yy yy_0_1;
yy yyv_Type;
yy yy_0_2;
yy yy_0_3;
yy yyv_Id;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3;
yy yyv_Info;
yy yy_5;
yy yy_5_1;
yy yy_6;
yy yy_7;
yy yy_7_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_String = yy_0_1;
yyv_Type = yy_0_2;
yyb = yyh;
yyh += 12; if (yyh > yyhx) yyExtend();
yyv_Id = yyb + 0;
yyb[4] = yyu;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_2_1 = yyv_String;
MakeNameLiteral(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3 = yyv_Name;
yyv_Id[2] = (intptr_t) yy_3;
yyv_Info = yyb + 5;
yyb[9] = yyu;
yyb[8] = yyu;
yyb[7] = yyu;
yyb[6] = yyu;
yy_5_1 = ((yy)1);
yy_5 = (yy)(-((intptr_t)yy_5_1));
yyv_Info[1] = (intptr_t) yy_5;
yy_6 = yyv_Type;
yyv_Info[4] = (intptr_t) yy_6;
yy_7_1 = yyv_Info;
yy_7 = yyb + 10;
yy_7[0] = 5;
yy_7[1] = ((intptr_t)yy_7_1);
yyv_Id[3] = (intptr_t) yy_7;
yy_0_3 = yyv_Id;
*yyout_1 = yy_0_3;
return;
}
}
int DumpBindings(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_MODULE();
extern yybroadcast_DEFINITION();
extern yybroadcast_TYPE();
extern yybroadcast_FIELD();
extern yybroadcast_PARAMETER();
extern yybroadcast_STATEMENT();
extern yybroadcast_EXPRESSION();
extern yybroadcast_SYNTAXMETHOD();
extern yybroadcast_SYNTAX();
extern yybroadcast_SYNTAXCONSTANT();
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
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_43_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Kind = yy_0_1_2;
yyv_Name = yy_0_1_3;
yyv_Definitions = yy_0_1_4;
yy_1_1 = ((yy)"module");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Definitions;
{
extern DumpBindings();
yybroadcast_DEFINITION(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_10001 : ;
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
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_43_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = ((yy)"import");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_43_20001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_43_20002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Name = yy_0_1_3;
yyv_Type = yy_0_1_4;
yy_1_1 = ((yy)"type");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Type;
{
extern DumpBindings();
yybroadcast_TYPE(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_20002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Value;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_43_20003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Name = yy_0_1_3;
yyv_Value = yy_0_1_4;
yy_1_1 = ((yy)"constant");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Value;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_20003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_43_20004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Name = yy_0_1_3;
yyv_Type = yy_0_1_4;
yy_1_1 = ((yy)"variable");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Type;
{
extern DumpBindings();
yybroadcast_TYPE(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_20004 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Signature;
yy yy_0_1_4;
yy yyv_Definitions;
yy yy_0_1_5;
yy yyv_Body;
yy yy_0_1_6;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_43_20005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Name = yy_0_1_3;
yyv_Signature = yy_0_1_4;
yyv_Definitions = yy_0_1_5;
yyv_Body = yy_0_1_6;
yy_1_1 = ((yy)"handler");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Signature;
{
extern DumpBindings();
yybroadcast_SIGNATURE(yy_2_1, 0, &yynull, DumpBindings);
}
yy_3_1 = yyv_Definitions;
{
extern DumpBindings();
yybroadcast_DEFINITION(yy_3_1, 0, &yynull, DumpBindings);
}
yy_4_1 = yyv_Body;
{
extern DumpBindings();
yybroadcast_STATEMENT(yy_4_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_20005 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Signature;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_43_20006;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Name = yy_0_1_3;
yyv_Signature = yy_0_1_4;
yy_1_1 = ((yy)"foreign handler");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Signature;
{
extern DumpBindings();
yybroadcast_SIGNATURE(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_20006 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Getter;
yy yy_0_1_4;
yy yyv_OptionalSetter;
yy yy_0_1_5;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yyv_Setter;
yy yy_3_1_1_2_1;
yy yy_3_1_2_1;
yy yy_3_1_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_43_20007;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Name = yy_0_1_3;
yyv_Getter = yy_0_1_4;
yyv_OptionalSetter = yy_0_1_5;
yy_1_1 = ((yy)"property");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = ((yy)"property getter");
yy_2_2 = yyv_Getter;
DumpId(yy_2_1, yy_2_2);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_OptionalSetter;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 1) goto yyfl_43_20007_3_1;
yy_3_1_1_2_1 = ((yy)yy_3_1_1_2[1]);
yyv_Setter = yy_3_1_1_2_1;
yy_3_1_2_1 = ((yy)"property setter");
yy_3_1_2_2 = yyv_Setter;
DumpId(yy_3_1_2_1, yy_3_1_2_2);
goto yysl_43_20007_3;
yyfl_43_20007_3_1 : ;
goto yysl_43_20007_3;
yysl_43_20007_3 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_20007 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Signature;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_43_20008;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Name = yy_0_1_3;
yyv_Signature = yy_0_1_4;
yy_1_1 = ((yy)"event");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Signature;
{
extern DumpBindings();
yybroadcast_SIGNATURE(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_20008 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Syntax;
yy yy_0_1_6;
yy yyv_Methods;
yy yy_0_1_7;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_43_20009;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yy_0_1_7 = ((yy)yy_0_1[7]);
yyv_Name = yy_0_1_3;
yyv_Syntax = yy_0_1_6;
yyv_Methods = yy_0_1_7;
yy_1_1 = ((yy)"syntax");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Syntax;
{
extern DumpBindings();
yybroadcast_SYNTAX(yy_2_1, 0, &yynull, DumpBindings);
}
yy_3_1 = yyv_Methods;
{
extern DumpBindings();
yybroadcast_SYNTAXMETHODLIST(yy_3_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_20009 : ;
}
return 0;
}
/*===*/
/*=== Sweep TYPE ===*/
else if (yytp == (intptr_t) yybroadcast_TYPE) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_43_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = ((yy)"named type");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_43_30001 : ;
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
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Handler;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_43_40001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Handler = yy_0_1_3;
yy_1_1 = ((yy)"action field");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = ((yy)"action field handler");
yy_2_2 = yyv_Handler;
DumpId(yy_2_1, yy_2_2);
*yyout_1 = yyin_2;
return 1;
yyfl_43_40001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_43_40002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Type = yy_0_1_3;
yy_1_1 = ((yy)"slot field");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Type;
{
extern DumpBindings();
yybroadcast_TYPE(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_40002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_43_40003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = ((yy)"element field");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_43_40003 : ;
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
yy yyv_Name;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_43_50001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Name = yy_0_1_3;
yyv_Type = yy_0_1_4;
yy_1_1 = ((yy)"parameter");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Type;
{
extern DumpBindings();
yybroadcast_TYPE(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_50001 : ;
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
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_43_60001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Type = yy_0_1_3;
yy_1_1 = ((yy)"local variable");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Type;
{
extern DumpBindings();
yybroadcast_TYPE(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_60001 : ;
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
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_43_60002;
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
yy_1_1 = ((yy)"repeat upto slot");
yy_1_2 = yyv_Slot;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Start;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, DumpBindings);
}
yy_3_1 = yyv_Finish;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, DumpBindings);
}
yy_4_1 = yyv_Step;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, DumpBindings);
}
yy_5_1 = yyv_Body;
{
extern DumpBindings();
yybroadcast_STATEMENT(yy_5_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_60002 : ;
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
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_43_60003;
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
yy_1_1 = ((yy)"repeat downto slot");
yy_1_2 = yyv_Slot;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Start;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, DumpBindings);
}
yy_3_1 = yyv_Finish;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, DumpBindings);
}
yy_4_1 = yyv_Step;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_4_1, 0, &yynull, DumpBindings);
}
yy_5_1 = yyv_Body;
{
extern DumpBindings();
yybroadcast_STATEMENT(yy_5_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_60003 : ;
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
if (yy_0_1[0] != 10) goto yyfl_43_60004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Iterator = yy_0_1_2;
yyv_Container = yy_0_1_3;
yyv_Body = yy_0_1_4;
yy_1_1 = yyv_Iterator;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_1_1, 0, &yynull, DumpBindings);
}
yy_2_1 = yyv_Container;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_2_1, 0, &yynull, DumpBindings);
}
yy_3_1 = yyv_Body;
{
extern DumpBindings();
yybroadcast_STATEMENT(yy_3_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_60004 : ;
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
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 16) goto yyfl_43_60005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = ((yy)"statement call handler");
yy_1_2 = yyv_Handler;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Arguments;
{
extern DumpBindings();
yybroadcast_EXPRESSIONLIST(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_60005 : ;
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
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_43_70001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = ((yy)"slot");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_43_70001 : ;
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
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_43_70002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Handler = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = ((yy)"expression call handler");
yy_1_2 = yyv_Handler;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Arguments;
{
extern DumpBindings();
yybroadcast_EXPRESSIONLIST(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_70002 : ;
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
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_43_80001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Arguments = yy_0_1_3;
yy_1_1 = ((yy)"syntax method");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Arguments;
{
extern DumpBindings();
yybroadcast_SYNTAXCONSTANTLIST(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_80001 : ;
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
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_43_90001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Name = yy_0_1_3;
yy_1_1 = ((yy)"syntax mark");
yy_1_2 = yyv_Id;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = ((yy)"syntax rule");
yy_2_2 = yyv_Name;
DumpId(yy_2_1, yy_2_2);
*yyout_1 = yyin_2;
return 1;
yyfl_43_90001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Value;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_43_90002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Value = yy_0_1_3;
yy_1_1 = ((yy)"syntax mark");
yy_1_2 = yyv_Id;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Value;
{
extern DumpBindings();
yybroadcast_SYNTAXCONSTANT(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_43_90002 : ;
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
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_43_100001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = ((yy)"syntax slot");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_43_100001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_43_100002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yy_1_1 = ((yy)"indexed syntax slot");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_43_100002 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
DumpId(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Tag;
yy yy_0_1;
yy yyv_Id;
yy yy_0_2;
yy yyv_Position;
yy yy_1;
yy yyv_Name;
yy yy_2;
yy yy_3_1;
yy yy_4_1;
yy yyv_NameString;
yy yy_4_2;
yy yy_5_1;
yy yyv_Meaning;
yy yy_6;
yy yy_7_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Tag = yy_0_1;
yyv_Id = yy_0_2;
yy_1 = (yy) yyv_Id[1];
if (yy_1 == (yy) yyu) yyErr(1,962);
yyv_Position = yy_1;
yy_2 = (yy) yyv_Id[2];
if (yy_2 == (yy) yyu) yyErr(1,963);
yyv_Name = yy_2;
yy_3_1 = yyv_Tag;
yyPrint_STRING(yy_3_1);
yyEndPrint();
yy_4_1 = yyv_Name;
GetStringOfNameLiteral(yy_4_1, &yy_4_2);
yyv_NameString = yy_4_2;
yy_5_1 = yyv_NameString;
yyPrint_STRING(yy_5_1);
yyEndPrint();
yy_6 = (yy) yyv_Id[3];
if (yy_6 == (yy) yyu) yyErr(1,967);
yyv_Meaning = yy_6;
yy_7_1 = yyv_Meaning;
yyPrint_MEANING(yy_7_1);
yyEndPrint();
return;
}
}
