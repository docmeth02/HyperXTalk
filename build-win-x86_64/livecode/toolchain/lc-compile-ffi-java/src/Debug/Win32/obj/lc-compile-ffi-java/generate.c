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
yyAbort(n,"generate", l);
}
yy yyglov_ModuleDependencyList = (yy) yyu;
yy yyglov_GeneratingPackageIndex = (yy) yyu;
GeneratePackages(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_List;
yy yy_0_1;
yy yyv_ModuleName;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_5;
yy yy_6_1;
yy yy_7_1;
yy_0_1 = yyin_1;
yyv_List = yy_0_1;
OutputLCBBegin();
GetOutputLCBModuleName(&yy_2_1);
yyv_ModuleName = yy_2_1;
yy_3_1 = ((yy)"module ");
yy_3_2 = yyv_ModuleName;
yy_3_3 = ((yy)" \n\n");
OutputWriteS(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)"use com.livecode.java\n");
OutputWrite(yy_4_1);
yy_5 = ((yy)1);
yyglov_GeneratingPackageIndex = yy_5;
yy_6_1 = yyv_List;
GenerateForEachPackage(yy_6_1);
yy_7_1 = ((yy)"end module \n\n");
OutputWrite(yy_7_1);
OutputEnd();
return;
}
}
GenerateForEachPackage(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Rest;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_CurrentIndex;
yy yy_2;
yy yy_3;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_4_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Rest = yy_0_1_2;
yy_1_1 = yyv_Head;
GenerateSinglePackage(yy_1_1);
yy_2 = yyglov_GeneratingPackageIndex;
if (yy_2 == (yy) yyu) yyErr(1,48);
yyv_CurrentIndex = yy_2;
yy_3_1 = yyv_CurrentIndex;
yy_3_2 = ((yy)1);
yy_3 = (yy)(((intptr_t)yy_3_1)+((intptr_t)yy_3_2));
yyglov_GeneratingPackageIndex = yy_3;
yy_4_1 = yyv_Rest;
GenerateForEachPackage(yy_4_1);
return;
yyfl_4_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_4_2;
return;
yyfl_4_2 : ;
}
yyErr(2,44);
}
GenerateSinglePackage(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Package;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yy_0_1_1_2;
yy yyv_Definitions;
yy yy_0_1_1_3;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
yy_0_1_1 = yy_0_1;
yyv_Package = yy_0_1;
if (yy_0_1_1[0] != 1) goto yyfl_5_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Definitions = yy_0_1_1_3;
yy_1_1 = yyv_Definitions;
GenerateForeignHandlers(yy_1_1);
yy_2_1 = ((yy)"\n");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Definitions;
GenerateDefinitions(yy_3_1);
return;
yyfl_5_1 : ;
}
yyErr(2,55);
}
GenerateForeignHandlers(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_6_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
GenerateForeignHandlers(yy_1_1);
yy_2_1 = yyv_Tail;
GenerateForeignHandlers(yy_2_1);
return;
yyfl_6_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yyv_Definitions;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_6_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Type = yy_0_1_3;
yyv_Definitions = yy_0_1_4;
yy_1_1 = yyv_Type;
yy_1_2 = yyv_Definitions;
GenerateForeignHandlersOfClass(yy_1_1, yy_1_2);
return;
yyfl_6_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_2;
yy yyv_Definitions;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_6_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Type = yy_0_1_2;
yyv_Definitions = yy_0_1_3;
yy_1_1 = yyv_Type;
yy_1_2 = yyv_Definitions;
GenerateForeignHandlersOfClass(yy_1_1, yy_1_2);
return;
yyfl_6_3 : ;
}
{
yy yyb;
yy yyv_Definition;
yy yy_0_1;
yy_0_1 = yyin_1;
yyv_Definition = yy_0_1;
return;
yyfl_6_4 : ;
}
yyErr(2,64);
}
GenerateForeignHandlersOfClass(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
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
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_7_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Head = yy_0_2_1;
yyv_Tail = yy_0_2_2;
yy_1_1 = yyv_Type;
yy_1_2 = yyv_Head;
GenerateForeignHandlerOfClass(yy_1_1, yy_1_2);
yy_2_1 = yyv_Type;
yy_2_2 = yyv_Tail;
GenerateForeignHandlersOfClass(yy_2_1, yy_2_2);
return;
yyfl_7_1 : ;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
if (yy_0_2[0] != 9) goto yyfl_7_2;
return;
yyfl_7_2 : ;
}
yyErr(2,86);
}
GenerateForeignHandlerOfClass(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Modifiers;
yy yy_0_2_2;
yy yyv_Id;
yy yy_0_2_3;
yy yyv_Signature;
yy yy_0_2_4;
yy yyv_Alias;
yy yy_0_2_5;
yy yy_0_2_6;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yyv_MethodName;
yy yy_1_1_2_2;
yy yy_1_1_3_1;
yy yyv_RealName;
yy yy_1_1_3_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy yy_1_2_2_2;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_5_4;
yy yy_6_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
if (yy_0_2[0] != 6) goto yyfl_8_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yyv_Modifiers = yy_0_2_2;
yyv_Id = yy_0_2_3;
yyv_Signature = yy_0_2_4;
yyv_Alias = yy_0_2_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_8_1_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
ResolveIdName(yy_1_1_2_1, &yy_1_1_2_2);
yyv_MethodName = yy_1_1_2_2;
yy_1_1_3_1 = yyv_Id;
ResolveIdName(yy_1_1_3_1, &yy_1_1_3_2);
yyv_RealName = yy_1_1_3_2;
goto yysl_8_1_1;
yyfl_8_1_1_1 : ;
yy_1_2_1_1 = yyv_Id;
ResolveIdName(yy_1_2_1_1, &yy_1_2_1_2);
yyv_MethodName = yy_1_2_1_2;
yy_1_2_2_1 = yyv_Id;
ResolveIdName(yy_1_2_2_1, &yy_1_2_2_2);
yyv_RealName = yy_1_2_2_2;
goto yysl_8_1_1;
yysl_8_1_1 : ;
yyb = yysb;
}
yy_2_1 = ((yy)"__safe foreign handler ");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Type;
yy_3_2 = yyv_MethodName;
OutputForeignHandlerName(yy_3_1, yy_3_2);
yy_4_1 = yyv_Type;
yy_4_2 = yyv_Signature;
yy_4_3 = yyv_Modifiers;
OutputForeignHandlerSignatureWithParameter(yy_4_1, yy_4_2, yy_4_3);
yy_5_1 = yyv_Type;
yy_5_2 = yyv_RealName;
yy_5_3 = yyv_Signature;
yy_5_4 = yyv_Modifiers;
OutputMethodBindingString(yy_5_1, yy_5_2, yy_5_3, yy_5_4);
yy_6_1 = ((yy)"\n");
OutputWrite(yy_6_1);
return;
yyfl_8_1 : ;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yyv_Id;
yy yy_0_2_3;
yy yyv_Signature;
yy yy_0_2_4;
yy yyv_Alias;
yy yy_0_2_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yyv_MethodName;
yy yy_1_1_2_2;
yy yy_1_1_3_1;
yy yyv_RealName;
yy yy_1_1_3_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_2_1;
yy yy_1_2_2_2;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_6_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
if (yy_0_2[0] != 5) goto yyfl_8_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yyv_Id = yy_0_2_3;
yyv_Signature = yy_0_2_4;
yyv_Alias = yy_0_2_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_8_2_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
ResolveIdName(yy_1_1_2_1, &yy_1_1_2_2);
yyv_MethodName = yy_1_1_2_2;
yy_1_1_3_1 = yyv_Id;
ResolveIdName(yy_1_1_3_1, &yy_1_1_3_2);
yyv_RealName = yy_1_1_3_2;
goto yysl_8_2_1;
yyfl_8_2_1_1 : ;
yy_1_2_1_1 = yyv_Id;
ResolveIdName(yy_1_2_1_1, &yy_1_2_1_2);
yyv_MethodName = yy_1_2_1_2;
yy_1_2_2_1 = yyv_Id;
ResolveIdName(yy_1_2_2_1, &yy_1_2_2_2);
yyv_RealName = yy_1_2_2_2;
goto yysl_8_2_1;
yysl_8_2_1 : ;
yyb = yysb;
}
yy_2_1 = ((yy)"__safe foreign handler ");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Type;
yy_3_2 = yyv_MethodName;
OutputForeignHandlerName(yy_3_1, yy_3_2);
yy_4_1 = yyv_Type;
yy_4_2 = yyv_Signature;
OutputForeignSignatureWithReturnType(yy_4_1, yy_4_2);
yy_5_1 = yyv_Type;
yy_5_2 = yyv_RealName;
yy_5_3 = yyv_Signature;
OutputConstructorBindingString(yy_5_1, yy_5_2, yy_5_3);
yy_6_1 = ((yy)"\n");
OutputWrite(yy_6_1);
return;
yyfl_8_2 : ;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_0_2_2_1;
yy yy_0_2_2_2;
yy yyv_Modify;
yy yy_0_2_2_3;
yy yyv_Instance;
yy yy_0_2_2_4;
yy yyv_Id;
yy yy_0_2_3;
yy yyv_VarType;
yy yy_0_2_4;
yy yy_1_1;
yy yyv_RealName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_2_4;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_2_1_3;
yy yy_3_2_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
if (yy_0_2[0] != 7) goto yyfl_8_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
if (yy_0_2_2[0] != 4) goto yyfl_8_3;
yy_0_2_2_1 = ((yy)yy_0_2_2[1]);
yy_0_2_2_2 = ((yy)yy_0_2_2[2]);
yy_0_2_2_3 = ((yy)yy_0_2_2[3]);
yy_0_2_2_4 = ((yy)yy_0_2_2[4]);
yyv_Modify = yy_0_2_2_3;
yyv_Instance = yy_0_2_2_4;
yyv_Id = yy_0_2_3;
yyv_VarType = yy_0_2_4;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_RealName = yy_1_2;
yy_2_1 = yyv_Type;
yy_2_2 = yyv_RealName;
yy_2_3 = yyv_VarType;
yy_2_4 = yyv_Instance;
GenerateForeignGetterOfClass(yy_2_1, yy_2_2, yy_2_3, yy_2_4);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Modify;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 12) goto yyfl_8_3_3_1;
goto yysl_8_3_3;
yyfl_8_3_3_1 : ;
yy_3_2_1_1 = yyv_Type;
yy_3_2_1_2 = yyv_RealName;
yy_3_2_1_3 = yyv_VarType;
yy_3_2_1_4 = yyv_Instance;
GenerateForeignSetterOfClass(yy_3_2_1_1, yy_3_2_1_2, yy_3_2_1_3, yy_3_2_1_4);
goto yysl_8_3_3;
yysl_8_3_3 : ;
yyb = yysb;
}
return;
yyfl_8_3 : ;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Id;
yy yy_0_2_2;
yy yyv_VarType;
yy yy_0_2_3;
yy yy_0_2_4;
yy yy_1_1;
yy yyv_RealName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_2_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
if (yy_0_2[0] != 8) goto yyfl_8_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Id = yy_0_2_2;
yyv_VarType = yy_0_2_3;
if (yy_0_2_4[0] != 6) goto yyfl_8_4;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_RealName = yy_1_2;
yy_2_1 = yyv_Type;
yy_2_2 = yyv_RealName;
yy_2_3 = yyv_VarType;
yy_2_4 = yyb + 0;
yy_2_4[0] = 13;
GenerateForeignGetterOfClass(yy_2_1, yy_2_2, yy_2_3, yy_2_4);
return;
yyfl_8_4 : ;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_Definition;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_Definition = yy_0_2;
return;
yyfl_8_5 : ;
}
yyErr(2,95);
}
GenerateForeignGetterOfClass(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ClassType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_VarType;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_3_4;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yy_4_4;
yy yy_5_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ClassType = yy_0_1;
yyv_Name = yy_0_2;
yyv_VarType = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = ((yy)"__safe foreign handler ");
OutputWrite(yy_1_1);
yy_2_1 = yyv_ClassType;
yy_2_2 = yyv_Name;
OutputForeignGetterName(yy_2_1, yy_2_2);
yy_3_1 = yyv_ClassType;
yy_3_2 = yyv_Name;
yy_3_3 = yyv_VarType;
yy_3_4 = yyv_InstanceModifier;
OutputForeignGetterSignature(yy_3_1, yy_3_2, yy_3_3, yy_3_4);
yy_4_1 = yyv_ClassType;
yy_4_2 = yyv_Name;
yy_4_3 = yyv_VarType;
yy_4_4 = yyv_InstanceModifier;
OutputGetVariableBindingString(yy_4_1, yy_4_2, yy_4_3, yy_4_4);
yy_5_1 = ((yy)"\n");
OutputWrite(yy_5_1);
return;
}
}
GenerateForeignSetterOfClass(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ClassType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_VarType;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_3_4;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yy_4_4;
yy yy_5_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ClassType = yy_0_1;
yyv_Name = yy_0_2;
yyv_VarType = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = ((yy)"__safe foreign handler ");
OutputWrite(yy_1_1);
yy_2_1 = yyv_ClassType;
yy_2_2 = yyv_Name;
OutputForeignSetterName(yy_2_1, yy_2_2);
yy_3_1 = yyv_ClassType;
yy_3_2 = yyv_Name;
yy_3_3 = yyv_VarType;
yy_3_4 = yyv_InstanceModifier;
OutputForeignSetterSignature(yy_3_1, yy_3_2, yy_3_3, yy_3_4);
yy_4_1 = yyv_ClassType;
yy_4_2 = yyv_Name;
yy_4_3 = yyv_VarType;
yy_4_4 = yyv_InstanceModifier;
OutputSetVariableBindingString(yy_4_1, yy_4_2, yy_4_3, yy_4_4);
yy_5_1 = ((yy)"\n");
OutputWrite(yy_5_1);
return;
}
}
OutputForeignGetterName(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_FieldName;
yy yy_0_2;
yy yy_1_1;
yy yyv_ClassName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_FieldName = yy_0_2;
yy_1_1 = yyv_Type;
TypeToUnqualifiedName(yy_1_1, &yy_1_2);
yyv_ClassName = yy_1_2;
yy_2_1 = ((yy)"_JNI_");
yy_2_2 = yyv_ClassName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = ((yy)"_Get_");
yy_3_2 = yyv_FieldName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
return;
}
}
OutputForeignSetterName(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_FieldName;
yy yy_0_2;
yy yy_1_1;
yy yyv_ClassName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_FieldName = yy_0_2;
yy_1_1 = yyv_Type;
TypeToUnqualifiedName(yy_1_1, &yy_1_2);
yyv_ClassName = yy_1_2;
yy_2_1 = ((yy)"_JNI_");
yy_2_2 = yyv_ClassName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = ((yy)"_Set_");
yy_3_2 = yyv_FieldName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
return;
}
}
OutputForeignHandlerName(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_MethodName;
yy yy_0_2;
yy yy_1_1;
yy yyv_ClassName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_MethodName = yy_0_2;
yy_1_1 = yyv_Type;
TypeToUnqualifiedName(yy_1_1, &yy_1_2);
yyv_ClassName = yy_1_2;
yy_2_1 = ((yy)"_JNI_");
yy_2_2 = yyv_ClassName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = ((yy)"_");
yy_3_2 = yyv_MethodName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
return;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_MethodName;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_MethodName = yy_0_2;
yy_1_1 = ((yy)"fail");
yyPrint_STRING(yy_1_1);
yyEndPrint();
yy_2_1 = yyv_MethodName;
yyPrint_NAME(yy_2_1);
yyEndPrint();
return;
}
}
OutputForeignGetterSignature(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_VarType;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_2_1_1;
yy yy_2_2_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
yyv_VarType = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = ((yy)"(");
OutputWrite(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_InstanceModifier;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 13) goto yyfl_14_1_2_1;
goto yysl_14_1_2;
yyfl_14_1_2_1 : ;
yy_2_2_1_1 = ((yy)"in pObj as ");
OutputWrite(yy_2_2_1_1);
yy_2_2_2_1 = yyv_ObjType;
GenerateType(yy_2_2_2_1);
goto yysl_14_1_2;
yysl_14_1_2 : ;
yyb = yysb;
}
yy_3_1 = ((yy)")");
OutputWrite(yy_3_1);
yy_4_1 = yyv_VarType;
GenerateJavaReturns(yy_4_1);
return;
}
}
OutputForeignSetterSignature(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_VarType;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_2_1_1;
yy yy_2_2_2_1;
yy yy_2_2_3_1;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
yyv_VarType = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = ((yy)"(");
OutputWrite(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_InstanceModifier;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 13) goto yyfl_15_1_2_1;
goto yysl_15_1_2;
yyfl_15_1_2_1 : ;
yy_2_2_1_1 = ((yy)"in pObj as ");
OutputWrite(yy_2_2_1_1);
yy_2_2_2_1 = yyv_ObjType;
GenerateType(yy_2_2_2_1);
yy_2_2_3_1 = ((yy)", ");
OutputWrite(yy_2_2_3_1);
goto yysl_15_1_2;
yysl_15_1_2 : ;
yyb = yysb;
}
yy_3_1 = ((yy)"in pParam_");
yy_3_2 = yyv_Name;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)" as ");
OutputWrite(yy_4_1);
yy_5_1 = yyv_VarType;
GenerateJavaType(yy_5_1);
yy_6_1 = ((yy)") returns nothing\n");
OutputWrite(yy_6_1);
return;
}
}
OutputForeignHandlerSignatureWithParameter(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Signature;
yy yy_0_2;
yy yy_0_3;
yy yy_0_3_1;
yy yy_0_3_2;
yy yy_0_3_3;
yy yy_0_3_4;
yy yy_0_3_5;
yy yyv_InstanceModifier;
yy yy_0_3_6;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
yyv_Signature = yy_0_2;
if (yy_0_3[0] != 3) goto yyfl_16_1;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
yy_0_3_3 = ((yy)yy_0_3[3]);
yy_0_3_4 = ((yy)yy_0_3[4]);
yy_0_3_5 = ((yy)yy_0_3[5]);
yy_0_3_6 = ((yy)yy_0_3[6]);
yyv_InstanceModifier = yy_0_3_6;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Signature;
yy_1_3 = yyv_InstanceModifier;
OutputForeignSignatureWithParameter(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_16_1 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Signature;
yy yy_0_2;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_3_1;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
yyv_Signature = yy_0_2;
if (yy_0_3[0] != 5) goto yyfl_16_2;
yy_0_3_1 = ((yy)yy_0_3[1]);
yyv_InstanceModifier = yy_0_3_1;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Signature;
yy_1_3 = yyv_InstanceModifier;
OutputForeignSignatureWithParameter(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_16_2 : ;
}
yyErr(2,218);
}
OutputForeignSignatureWithParameter(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yy_0_2;
yy yyv_Params;
yy yy_0_2_1;
yy yyv_ReturnType;
yy yy_0_2_2;
yy yyv_InstanceModifier;
yy yy_0_3;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_2_1_1;
yy yy_2_2_2_1;
yy yy_2_2_3_1_1_1;
yy yy_2_2_3_1_1_2;
yy yy_2_2_3_2_1_1;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_2_1_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_17_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Params = yy_0_2_1;
yyv_ReturnType = yy_0_2_2;
yyv_InstanceModifier = yy_0_3;
yy_1_1 = ((yy)"(");
OutputWrite(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_InstanceModifier;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 13) goto yyfl_17_1_2_1;
goto yysl_17_1_2;
yyfl_17_1_2_1 : ;
yy_2_2_1_1 = ((yy)"in pObj as ");
OutputWrite(yy_2_2_1_1);
yy_2_2_2_1 = yyv_ObjType;
GenerateType(yy_2_2_2_1);
{
yy yysb = yyb;
yy_2_2_3_1_1_1 = yyv_Params;
yy_2_2_3_1_1_2 = yy_2_2_3_1_1_1;
if (yy_2_2_3_1_1_2[0] != 2) goto yyfl_17_1_2_2_3_1;
goto yysl_17_1_2_2_3;
yyfl_17_1_2_2_3_1 : ;
yy_2_2_3_2_1_1 = ((yy)", ");
OutputWrite(yy_2_2_3_2_1_1);
goto yysl_17_1_2_2_3;
yysl_17_1_2_2_3 : ;
yyb = yysb;
}
goto yysl_17_1_2;
yysl_17_1_2 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Params;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_17_1_3_1;
goto yysl_17_1_3;
yyfl_17_1_3_1 : ;
yy_3_2_1_1 = yyv_Params;
GenerateJavaParams(yy_3_2_1_1);
goto yysl_17_1_3;
yysl_17_1_3 : ;
yyb = yysb;
}
yy_4_1 = ((yy)")");
OutputWrite(yy_4_1);
yy_5_1 = yyv_ReturnType;
GenerateJavaReturns(yy_5_1);
return;
yyfl_17_1 : ;
}
yyErr(2,226);
}
OutputForeignSignatureWithReturnType(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_ReturnType;
yy yy_0_1;
yy yy_0_2;
yy yyv_Params;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ReturnType = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_18_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Params = yy_0_2_1;
if (yy_0_2_2[0] != 15) goto yyfl_18_1;
yy_1_1 = ((yy)"(");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Params;
GenerateJavaParams(yy_2_1);
yy_3_1 = ((yy)")");
OutputWrite(yy_3_1);
yy_4_1 = yyv_ReturnType;
GenerateJavaReturns(yy_4_1);
return;
yyfl_18_1 : ;
}
yyErr(2,250);
}
OutputMethodBindingString(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ClassType;
yy yy_0_1;
yy yyv_MethodName;
yy yy_0_2;
yy yyv_Signature;
yy yy_0_3;
yy yy_0_4;
yy yy_0_4_1;
yy yy_0_4_2;
yy yy_0_4_3;
yy yy_0_4_4;
yy yy_0_4_5;
yy yyv_InstanceModifier;
yy yy_0_4_6;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ClassType = yy_0_1;
yyv_MethodName = yy_0_2;
yyv_Signature = yy_0_3;
if (yy_0_4[0] != 3) goto yyfl_19_1;
yy_0_4_1 = ((yy)yy_0_4[1]);
yy_0_4_2 = ((yy)yy_0_4[2]);
yy_0_4_3 = ((yy)yy_0_4[3]);
yy_0_4_4 = ((yy)yy_0_4[4]);
yy_0_4_5 = ((yy)yy_0_4[5]);
yy_0_4_6 = ((yy)yy_0_4[6]);
yyv_InstanceModifier = yy_0_4_6;
yy_1_1 = yyv_ClassType;
yy_1_2 = yyv_MethodName;
yy_1_3 = yyv_Signature;
yy_1_4 = yyv_InstanceModifier;
OutputMethodBindingStringInstance(yy_1_1, yy_1_2, yy_1_3, yy_1_4);
return;
yyfl_19_1 : ;
}
{
yy yyb;
yy yyv_ClassType;
yy yy_0_1;
yy yyv_MethodName;
yy yy_0_2;
yy yyv_Signature;
yy yy_0_3;
yy yy_0_4;
yy yyv_InstanceModifier;
yy yy_0_4_1;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ClassType = yy_0_1;
yyv_MethodName = yy_0_2;
yyv_Signature = yy_0_3;
if (yy_0_4[0] != 5) goto yyfl_19_2;
yy_0_4_1 = ((yy)yy_0_4[1]);
yyv_InstanceModifier = yy_0_4_1;
yy_1_1 = yyv_ClassType;
yy_1_2 = yyv_MethodName;
yy_1_3 = yyv_Signature;
yy_1_4 = yyv_InstanceModifier;
OutputMethodBindingStringInstance(yy_1_1, yy_1_2, yy_1_3, yy_1_4);
return;
yyfl_19_2 : ;
}
yyErr(2,258);
}
OutputMethodBindingStringInstance(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ClassType;
yy yy_0_1;
yy yyv_MethodName;
yy yy_0_2;
yy yyv_Signature;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yyv_QualifiedClass;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_5_1_1_1;
yy yy_5_1_1_2;
yy yy_5_1_2_1;
yy yy_6_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ClassType = yy_0_1;
yyv_MethodName = yy_0_2;
yyv_Signature = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = yyv_ClassType;
TypeToQualifiedName(yy_1_1, &yy_1_2);
yyv_QualifiedClass = yy_1_2;
yy_2_1 = ((yy)" \\\nbinds to \"java:");
yy_2_2 = yyv_QualifiedClass;
yy_2_3 = ((yy)">");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = ((yy)"");
yy_3_2 = yyv_MethodName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = yyv_Signature;
OutputJavaSignature(yy_4_1);
{
yy yysb = yyb;
yy_5_1_1_1 = yyv_InstanceModifier;
yy_5_1_1_2 = yy_5_1_1_1;
if (yy_5_1_1_2[0] != 13) goto yyfl_20_1_5_1;
yy_5_1_2_1 = ((yy)"!static");
OutputWrite(yy_5_1_2_1);
goto yysl_20_1_5;
yyfl_20_1_5_1 : ;
goto yysl_20_1_5;
yysl_20_1_5 : ;
yyb = yysb;
}
yy_6_1 = ((yy)"\"");
OutputWrite(yy_6_1);
return;
}
}
OutputConstructorBindingString(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_ClassType;
yy yy_0_1;
yy yyv_MethodName;
yy yy_0_2;
yy yyv_Signature;
yy yy_0_3;
yy yy_1_1;
yy yyv_QualifiedClass;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ClassType = yy_0_1;
yyv_MethodName = yy_0_2;
yyv_Signature = yy_0_3;
yy_1_1 = yyv_ClassType;
TypeToQualifiedName(yy_1_1, &yy_1_2);
yyv_QualifiedClass = yy_1_2;
yy_2_1 = ((yy)" \\\nbinds to \"java:");
yy_2_2 = yyv_QualifiedClass;
yy_2_3 = ((yy)">");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = ((yy)"new");
OutputWrite(yy_3_1);
yy_4_1 = yyv_Signature;
OutputJavaSignature(yy_4_1);
yy_5_1 = ((yy)"\"");
OutputWrite(yy_5_1);
return;
}
}
OutputSetVariableBindingString(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ClassType;
yy yy_0_1;
yy yyv_FieldName;
yy yy_0_2;
yy yyv_VarType;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yyv_QualifiedClass;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1_1_1;
yy yy_7_1_1_2;
yy yy_7_1_2_1;
yy yy_8_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ClassType = yy_0_1;
yyv_FieldName = yy_0_2;
yyv_VarType = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = yyv_ClassType;
TypeToQualifiedName(yy_1_1, &yy_1_2);
yyv_QualifiedClass = yy_1_2;
yy_2_1 = ((yy)" \\\nbinds to \"java:");
yy_2_2 = yyv_QualifiedClass;
yy_2_3 = ((yy)">");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = ((yy)"set.");
yy_3_2 = yyv_FieldName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)"(");
OutputWrite(yy_4_1);
yy_5_1 = yyv_VarType;
OutputJavaTypeCode(yy_5_1);
yy_6_1 = ((yy)")");
OutputWrite(yy_6_1);
{
yy yysb = yyb;
yy_7_1_1_1 = yyv_InstanceModifier;
yy_7_1_1_2 = yy_7_1_1_1;
if (yy_7_1_1_2[0] != 13) goto yyfl_22_1_7_1;
yy_7_1_2_1 = ((yy)"!static");
OutputWrite(yy_7_1_2_1);
goto yysl_22_1_7;
yyfl_22_1_7_1 : ;
goto yysl_22_1_7;
yysl_22_1_7 : ;
yyb = yysb;
}
yy_8_1 = ((yy)"\"");
OutputWrite(yy_8_1);
return;
}
}
OutputGetVariableBindingString(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ClassType;
yy yy_0_1;
yy yyv_FieldName;
yy yy_0_2;
yy yyv_VarType;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yyv_QualifiedClass;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1_1_1;
yy yy_7_1_1_2;
yy yy_7_1_2_1;
yy yy_8_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ClassType = yy_0_1;
yyv_FieldName = yy_0_2;
yyv_VarType = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = yyv_ClassType;
TypeToQualifiedName(yy_1_1, &yy_1_2);
yyv_QualifiedClass = yy_1_2;
yy_2_1 = ((yy)" \\\nbinds to \"java:");
yy_2_2 = yyv_QualifiedClass;
yy_2_3 = ((yy)">");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = ((yy)"get.");
yy_3_2 = yyv_FieldName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)"(");
OutputWrite(yy_4_1);
yy_5_1 = ((yy)")");
OutputWrite(yy_5_1);
yy_6_1 = yyv_VarType;
OutputJavaTypeCode(yy_6_1);
{
yy yysb = yyb;
yy_7_1_1_1 = yyv_InstanceModifier;
yy_7_1_1_2 = yy_7_1_1_1;
if (yy_7_1_1_2[0] != 13) goto yyfl_23_1_7_1;
yy_7_1_2_1 = ((yy)"!static");
OutputWrite(yy_7_1_2_1);
goto yysl_23_1_7;
yyfl_23_1_7_1 : ;
goto yysl_23_1_7;
yysl_23_1_7 : ;
yyb = yysb;
}
yy_8_1 = ((yy)"\"");
OutputWrite(yy_8_1);
return;
}
}
OutputJavaSignature(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Params;
yy yy_0_1_1;
yy yyv_ReturnType;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_24_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Params = yy_0_1_1;
yyv_ReturnType = yy_0_1_2;
yy_1_1 = ((yy)"(");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Params;
OutputJavaParams(yy_2_1);
yy_3_1 = ((yy)")");
OutputWrite(yy_3_1);
yy_4_1 = yyv_ReturnType;
OutputJavaReturnTypeCode(yy_4_1);
return;
yyfl_24_1 : ;
}
yyErr(2,321);
}
OutputJavaParams(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_25_1;
return;
yyfl_25_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_25_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
if (yy_0_1_2[0] != 2) goto yyfl_25_2;
yy_1_1 = yyv_Head;
OutputJavaParam(yy_1_1);
return;
yyfl_25_2 : ;
}
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
if (yy_0_1[0] != 1) goto yyfl_25_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
OutputJavaParam(yy_1_1);
yy_2_1 = yyv_Tail;
OutputJavaParams(yy_2_1);
return;
yyfl_25_3 : ;
}
yyErr(2,329);
}
OutputJavaParam(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_26_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_3;
yy_1_1 = yyv_Type;
OutputJavaTypeCode(yy_1_1);
return;
yyfl_26_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_26_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"JArray");
OutputWrite(yy_1_1);
return;
yyfl_26_2 : ;
}
yyErr(2,340);
}
GenerateClassDefinitions(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_ObjType;
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
yyv_ObjType = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_27_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Left = yy_0_2_1;
yyv_Right = yy_0_2_2;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Left;
GenerateClassDefinitions(yy_1_1, yy_1_2);
yy_2_1 = yyv_ObjType;
yy_2_2 = yyv_Right;
GenerateClassDefinitions(yy_2_1, yy_2_2);
return;
yyfl_27_1 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Id;
yy yy_0_2_2;
yy yyv_Type;
yy yy_0_2_3;
yy yyv_Value;
yy yy_0_2_4;
yy yy_1_1;
yy yyv_SymbolName;
yy yy_1_2;
yy yy_2_1;
yy yyv_ObjName;
yy yy_2_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_2_1;
yy yy_3_1_2_2;
yy yy_3_1_2_3;
yy yy_3_1_3_1;
yy yy_3_1_3_2;
yy yy_3_1_3_3;
yy yy_3_1_4_1;
yy yy_3_1_5_1;
yy yy_3_1_6_1;
yy yy_3_1_6_2;
yy yy_3_1_6_3;
yy yy_3_1_6_4;
yy yy_3_1_7_1;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_2_1_3;
yy yy_3_2_2_1;
yy yy_3_2_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ObjType = yy_0_1;
if (yy_0_2[0] != 8) goto yyfl_27_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Id = yy_0_2_2;
yyv_Type = yy_0_2_3;
yyv_Value = yy_0_2_4;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_SymbolName = yy_1_2;
yy_2_1 = yyv_ObjType;
TypeToUnqualifiedName(yy_2_1, &yy_2_2);
yyv_ObjName = yy_2_2;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_3_1_1_1 = yyv_Value;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 6) goto yyfl_27_2_3_1;
yy_3_1_2_1 = ((yy)"handler ");
yy_3_1_2_2 = yyv_ObjName;
yy_3_1_2_3 = ((yy)"_");
OutputWriteI(yy_3_1_2_1, yy_3_1_2_2, yy_3_1_2_3);
yy_3_1_3_1 = ((yy)"Get_");
yy_3_1_3_2 = yyv_SymbolName;
yy_3_1_3_3 = ((yy)"()");
OutputWriteI(yy_3_1_3_1, yy_3_1_3_2, yy_3_1_3_3);
yy_3_1_4_1 = yyv_Type;
GenerateReturns(yy_3_1_4_1);
yy_3_1_5_1 = ((yy)"\n");
OutputWrite(yy_3_1_5_1);
yy_3_1_6_1 = yyv_ObjType;
yy_3_1_6_2 = yyv_SymbolName;
yy_3_1_6_3 = yyv_Type;
yy_3_1_6_4 = yyb + 0;
yy_3_1_6_4[0] = 13;
OutputCallForeignGetter(yy_3_1_6_1, yy_3_1_6_2, yy_3_1_6_3, yy_3_1_6_4);
yy_3_1_7_1 = ((yy)"\nend handler");
OutputWrite(yy_3_1_7_1);
goto yysl_27_2_3;
yyfl_27_2_3_1 : ;
yy_3_2_1_1 = ((yy)"public constant ");
yy_3_2_1_2 = yyv_SymbolName;
yy_3_2_1_3 = ((yy)"");
OutputWriteI(yy_3_2_1_1, yy_3_2_1_2, yy_3_2_1_3);
yy_3_2_2_1 = ((yy)" is ");
OutputWrite(yy_3_2_2_1);
yy_3_2_3_1 = yyv_Value;
GenerateValue(yy_3_2_3_1);
goto yysl_27_2_3;
yysl_27_2_3 : ;
yyb = yysb;
}
yy_4_1 = ((yy)"\n\n");
OutputWrite(yy_4_1);
return;
yyfl_27_2 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_0_2_2_1;
yy yy_0_2_2_2;
yy yyv_Modify;
yy yy_0_2_2_3;
yy yyv_Instance;
yy yy_0_2_2_4;
yy yyv_Id;
yy yy_0_2_3;
yy yyv_Type;
yy yy_0_2_4;
yy yy_1_1;
yy yyv_SymbolName;
yy yy_1_2;
yy yy_2_1;
yy yyv_ObjName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yy_5_1_1_1;
yy yy_5_1_1_2;
yy yy_5_2_1_1;
yy yy_5_2_2_1;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy yy_9_1;
yy yy_9_2;
yy yy_9_3;
yy yy_9_4;
yy yy_10_1;
yy yy_11_1;
yy yy_12_1;
yy yy_13_1_1_1;
yy yy_13_1_1_2;
yy yy_13_2_1_1;
yy yy_13_2_1_2;
yy yy_13_2_1_3;
yy yy_13_2_2_1;
yy yy_13_2_2_2;
yy yy_13_2_2_3;
yy yy_13_2_3_1_1_1;
yy yy_13_2_3_1_1_2;
yy yy_13_2_3_2_1_1;
yy yy_13_2_3_2_2_1;
yy yy_13_2_3_2_3_1;
yy yy_13_2_4_1;
yy yy_13_2_4_2;
yy yy_13_2_4_3;
yy yy_13_2_5_1;
yy yy_13_2_6_1;
yy yy_13_2_7_1;
yy yy_13_2_7_2;
yy yy_13_2_7_3;
yy yy_13_2_7_4;
yy yy_13_2_8_1;
yy yy_13_2_9_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ObjType = yy_0_1;
if (yy_0_2[0] != 7) goto yyfl_27_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
if (yy_0_2_2[0] != 4) goto yyfl_27_3;
yy_0_2_2_1 = ((yy)yy_0_2_2[1]);
yy_0_2_2_2 = ((yy)yy_0_2_2[2]);
yy_0_2_2_3 = ((yy)yy_0_2_2[3]);
yy_0_2_2_4 = ((yy)yy_0_2_2[4]);
yyv_Modify = yy_0_2_2_3;
yyv_Instance = yy_0_2_2_4;
yyv_Id = yy_0_2_3;
yyv_Type = yy_0_2_4;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_SymbolName = yy_1_2;
yy_2_1 = yyv_ObjType;
TypeToUnqualifiedName(yy_2_1, &yy_2_2);
yyv_ObjName = yy_2_2;
yy_3_1 = ((yy)"public handler ");
yy_3_2 = yyv_ObjName;
yy_3_3 = ((yy)"_");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)"Get_");
yy_4_2 = yyv_SymbolName;
yy_4_3 = ((yy)"(");
OutputWriteI(yy_4_1, yy_4_2, yy_4_3);
{
yy yysb = yyb;
yy_5_1_1_1 = yyv_Instance;
yy_5_1_1_2 = yy_5_1_1_1;
if (yy_5_1_1_2[0] != 13) goto yyfl_27_3_5_1;
goto yysl_27_3_5;
yyfl_27_3_5_1 : ;
yy_5_2_1_1 = ((yy)"in pObj as ");
OutputWrite(yy_5_2_1_1);
yy_5_2_2_1 = yyv_ObjType;
GenerateType(yy_5_2_2_1);
goto yysl_27_3_5;
yysl_27_3_5 : ;
yyb = yysb;
}
yy_6_1 = ((yy)")");
OutputWrite(yy_6_1);
yy_7_1 = yyv_Type;
GenerateReturns(yy_7_1);
yy_8_1 = ((yy)"\n");
OutputWrite(yy_8_1);
yy_9_1 = yyv_ObjType;
yy_9_2 = yyv_SymbolName;
yy_9_3 = yyv_Type;
yy_9_4 = yyv_Instance;
OutputCallForeignGetter(yy_9_1, yy_9_2, yy_9_3, yy_9_4);
yy_10_1 = ((yy)"\n");
OutputWrite(yy_10_1);
yy_11_1 = ((yy)"end handler");
OutputWrite(yy_11_1);
yy_12_1 = ((yy)"\n\n");
OutputWrite(yy_12_1);
{
yy yysb = yyb;
yy_13_1_1_1 = yyv_Modify;
yy_13_1_1_2 = yy_13_1_1_1;
if (yy_13_1_1_2[0] != 12) goto yyfl_27_3_13_1;
goto yysl_27_3_13;
yyfl_27_3_13_1 : ;
yy_13_2_1_1 = ((yy)"public handler ");
yy_13_2_1_2 = yyv_ObjName;
yy_13_2_1_3 = ((yy)"_");
OutputWriteI(yy_13_2_1_1, yy_13_2_1_2, yy_13_2_1_3);
yy_13_2_2_1 = ((yy)"Set_");
yy_13_2_2_2 = yyv_SymbolName;
yy_13_2_2_3 = ((yy)"(");
OutputWriteI(yy_13_2_2_1, yy_13_2_2_2, yy_13_2_2_3);
{
yy yysb = yyb;
yy_13_2_3_1_1_1 = yyv_Instance;
yy_13_2_3_1_1_2 = yy_13_2_3_1_1_1;
if (yy_13_2_3_1_1_2[0] != 13) goto yyfl_27_3_13_2_3_1;
goto yysl_27_3_13_2_3;
yyfl_27_3_13_2_3_1 : ;
yy_13_2_3_2_1_1 = ((yy)"in pObj as ");
OutputWrite(yy_13_2_3_2_1_1);
yy_13_2_3_2_2_1 = yyv_ObjType;
GenerateType(yy_13_2_3_2_2_1);
yy_13_2_3_2_3_1 = ((yy)", ");
OutputWrite(yy_13_2_3_2_3_1);
goto yysl_27_3_13_2_3;
yysl_27_3_13_2_3 : ;
yyb = yysb;
}
yy_13_2_4_1 = ((yy)"in pParam_");
yy_13_2_4_2 = yyv_SymbolName;
yy_13_2_4_3 = ((yy)" as ");
OutputWriteI(yy_13_2_4_1, yy_13_2_4_2, yy_13_2_4_3);
yy_13_2_5_1 = yyv_Type;
GenerateType(yy_13_2_5_1);
yy_13_2_6_1 = ((yy)") returns nothing\n");
OutputWrite(yy_13_2_6_1);
yy_13_2_7_1 = yyv_ObjType;
yy_13_2_7_2 = yyv_SymbolName;
yy_13_2_7_3 = yyv_Type;
yy_13_2_7_4 = yyv_Instance;
OutputCallForeignSetter(yy_13_2_7_1, yy_13_2_7_2, yy_13_2_7_3, yy_13_2_7_4);
yy_13_2_8_1 = ((yy)"end handler");
OutputWrite(yy_13_2_8_1);
yy_13_2_9_1 = ((yy)"\n\n");
OutputWrite(yy_13_2_9_1);
goto yysl_27_3_13;
yysl_27_3_13 : ;
yyb = yysb;
}
return;
yyfl_27_3 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Modifiers;
yy yy_0_2_2;
yy yyv_Id;
yy yy_0_2_3;
yy yyv_Signature;
yy yy_0_2_4;
yy yyv_Alias;
yy yy_0_2_5;
yy yyv_Throws;
yy yy_0_2_6;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yyv_Name;
yy yy_1_1_2_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_2_1;
yy yyv_ObjName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_6_1;
yy yy_7_1;
yy yy_7_2;
yy yy_7_3;
yy yy_7_4;
yy yy_8_1;
yy yy_9_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ObjType = yy_0_1;
if (yy_0_2[0] != 6) goto yyfl_27_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yyv_Modifiers = yy_0_2_2;
yyv_Id = yy_0_2_3;
yyv_Signature = yy_0_2_4;
yyv_Alias = yy_0_2_5;
yyv_Throws = yy_0_2_6;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_27_4_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
ResolveIdName(yy_1_1_2_1, &yy_1_1_2_2);
yyv_Name = yy_1_1_2_2;
goto yysl_27_4_1;
yyfl_27_4_1_1 : ;
yy_1_2_1_1 = yyv_Id;
ResolveIdName(yy_1_2_1_1, &yy_1_2_1_2);
yyv_Name = yy_1_2_1_2;
goto yysl_27_4_1;
yysl_27_4_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_ObjType;
TypeToUnqualifiedName(yy_2_1, &yy_2_2);
yyv_ObjName = yy_2_2;
yy_3_1 = ((yy)"public handler ");
yy_3_2 = yyv_ObjName;
yy_3_3 = ((yy)"_");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)"");
yy_4_2 = yyv_Name;
yy_4_3 = ((yy)"");
OutputWriteI(yy_4_1, yy_4_2, yy_4_3);
yy_5_1 = yyv_ObjType;
yy_5_2 = yyv_Signature;
yy_5_3 = yyv_Modifiers;
GenerateMethodSignatureWithParameter(yy_5_1, yy_5_2, yy_5_3);
yy_6_1 = ((yy)"\n");
OutputWrite(yy_6_1);
yy_7_1 = yyv_ObjType;
yy_7_2 = yyv_Name;
yy_7_3 = yyv_Signature;
yy_7_4 = yyv_Modifiers;
OutputCallForeignHandler(yy_7_1, yy_7_2, yy_7_3, yy_7_4);
yy_8_1 = ((yy)"end handler");
OutputWrite(yy_8_1);
yy_9_1 = ((yy)"\n\n");
OutputWrite(yy_9_1);
return;
yyfl_27_4 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Modifiers;
yy yy_0_2_2;
yy yyv_Id;
yy yy_0_2_3;
yy yyv_Signature;
yy yy_0_2_4;
yy yyv_Alias;
yy yy_0_2_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yyv_Name;
yy yy_1_1_2_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_6_1;
yy yy_7_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ObjType = yy_0_1;
if (yy_0_2[0] != 5) goto yyfl_27_5;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yyv_Modifiers = yy_0_2_2;
yyv_Id = yy_0_2_3;
yyv_Signature = yy_0_2_4;
yyv_Alias = yy_0_2_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_27_5_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
ResolveIdName(yy_1_1_2_1, &yy_1_1_2_2);
yyv_Name = yy_1_1_2_2;
goto yysl_27_5_1;
yyfl_27_5_1_1 : ;
yy_1_2_1_1 = yyv_Id;
ResolveIdName(yy_1_2_1_1, &yy_1_2_1_2);
yyv_Name = yy_1_2_1_2;
goto yysl_27_5_1;
yysl_27_5_1 : ;
yyb = yysb;
}
yy_2_1 = ((yy)"public handler ");
yy_2_2 = yyv_Name;
yy_2_3 = ((yy)"_Constructor");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = yyv_ObjType;
yy_3_2 = yyv_Signature;
GenerateSignatureWithReturnType(yy_3_1, yy_3_2);
yy_4_1 = ((yy)"\n");
OutputWrite(yy_4_1);
yy_5_1 = yyv_ObjType;
yy_5_2 = yyv_Name;
yy_5_3 = yyv_Signature;
OutputCallForeignConstructor(yy_5_1, yy_5_2, yy_5_3);
yy_6_1 = ((yy)"end handler");
OutputWrite(yy_6_1);
yy_7_1 = ((yy)"\n\n");
OutputWrite(yy_7_1);
return;
yyfl_27_5 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ObjType = yy_0_1;
if (yy_0_2[0] != 9) goto yyfl_27_6;
return;
yyfl_27_6 : ;
}
yyErr(2,350);
}
OutputCallForeignConstructor(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yy_0_3;
yy yyv_Params;
yy yy_0_3_1;
yy yy_0_3_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
if (yy_0_3[0] != 1) goto yyfl_28_1;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
yyv_Params = yy_0_3_1;
if (yy_0_3_2[0] != 15) goto yyfl_28_1;
yy_1_1 = yyv_Params;
OutputConvertToForeignParams(yy_1_1);
yy_2_1 = ((yy)"	return ");
OutputWrite(yy_2_1);
yy_3_1 = yyv_ObjType;
yy_3_2 = yyv_Name;
OutputForeignHandlerName(yy_3_1, yy_3_2);
yy_4_1 = ((yy)"(");
OutputWrite(yy_4_1);
yy_5_1 = yyv_Params;
OutputForeignCallParams(yy_5_1);
yy_6_1 = ((yy)")\n");
OutputWrite(yy_6_1);
return;
yyfl_28_1 : ;
}
yyErr(2,446);
}
OutputCallForeignHandlerParams(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_Params;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_1_2_1;
yy yy_3_2_1_1;
yy yy_3_2_2_1_1_1;
yy yy_3_2_2_1_1_2;
yy yy_3_2_2_2_1_1;
yy yy_3_2_2_2_2_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
yyv_Params = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Name;
OutputForeignHandlerName(yy_1_1, yy_1_2);
yy_2_1 = ((yy)"(");
OutputWrite(yy_2_1);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_InstanceModifier;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 13) goto yyfl_29_1_3_1;
yy_3_1_2_1 = yyv_Params;
OutputForeignCallParams(yy_3_1_2_1);
goto yysl_29_1_3;
yyfl_29_1_3_1 : ;
yy_3_2_1_1 = ((yy)"pObj");
OutputWrite(yy_3_2_1_1);
{
yy yysb = yyb;
yy_3_2_2_1_1_1 = yyv_Params;
yy_3_2_2_1_1_2 = yy_3_2_2_1_1_1;
if (yy_3_2_2_1_1_2[0] != 2) goto yyfl_29_1_3_2_2_1;
goto yysl_29_1_3_2_2;
yyfl_29_1_3_2_2_1 : ;
yy_3_2_2_2_1_1 = ((yy)", ");
OutputWrite(yy_3_2_2_2_1_1);
yy_3_2_2_2_2_1 = yyv_Params;
OutputForeignCallParams(yy_3_2_2_2_2_1);
goto yysl_29_1_3_2_2;
yysl_29_1_3_2_2 : ;
yyb = yysb;
}
goto yysl_29_1_3;
yysl_29_1_3 : ;
yyb = yysb;
}
yy_4_1 = ((yy)")");
OutputWrite(yy_4_1);
return;
}
}
OutputCallForeignHandler(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_Signature;
yy yy_0_3;
yy yy_0_4;
yy yy_0_4_1;
yy yy_0_4_2;
yy yy_0_4_3;
yy yy_0_4_4;
yy yy_0_4_5;
yy yyv_InstanceModifier;
yy yy_0_4_6;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
yyv_Signature = yy_0_3;
if (yy_0_4[0] != 3) goto yyfl_30_1;
yy_0_4_1 = ((yy)yy_0_4[1]);
yy_0_4_2 = ((yy)yy_0_4[2]);
yy_0_4_3 = ((yy)yy_0_4[3]);
yy_0_4_4 = ((yy)yy_0_4[4]);
yy_0_4_5 = ((yy)yy_0_4[5]);
yy_0_4_6 = ((yy)yy_0_4[6]);
yyv_InstanceModifier = yy_0_4_6;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Name;
yy_1_3 = yyv_Signature;
yy_1_4 = yyv_InstanceModifier;
OutputCallForeignHandlerModifier(yy_1_1, yy_1_2, yy_1_3, yy_1_4);
return;
yyfl_30_1 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_Signature;
yy yy_0_3;
yy yy_0_4;
yy yyv_InstanceModifier;
yy yy_0_4_1;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
yyv_Signature = yy_0_3;
if (yy_0_4[0] != 5) goto yyfl_30_2;
yy_0_4_1 = ((yy)yy_0_4[1]);
yyv_InstanceModifier = yy_0_4_1;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Name;
yy_1_3 = yyv_Signature;
yy_1_4 = yyv_InstanceModifier;
OutputCallForeignHandlerModifier(yy_1_1, yy_1_2, yy_1_3, yy_1_4);
return;
yyfl_30_2 : ;
}
yyErr(2,475);
}
OutputCallForeignHandlerModifier(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yy_0_3;
yy yyv_Params;
yy yy_0_3_1;
yy yyv_ReturnType;
yy yy_0_3_2;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_2_1_3_1;
yy yy_2_1_3_2;
yy yy_2_1_3_3;
yy yy_2_1_3_4;
yy yy_2_1_4_1;
yy yy_2_2_1_1_1_1;
yy yy_2_2_1_1_2_1;
yy yy_2_2_1_1_3_1;
yy yy_2_2_1_1_4_1;
yy yy_2_2_1_1_5_1;
yy yy_2_2_1_1_5_2;
yy yy_2_2_1_1_5_3;
yy yy_2_2_1_1_5_4;
yy yy_2_2_1_1_6_1;
yy yy_2_2_1_1_7_1;
yy yy_2_2_1_2_1_1;
yy yy_2_2_1_2_2_1;
yy yy_2_2_1_2_2_2;
yy yy_2_2_1_2_2_3;
yy yy_2_2_1_2_2_4;
yy yy_2_2_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
if (yy_0_3[0] != 1) goto yyfl_31_1;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
yyv_Params = yy_0_3_1;
yyv_ReturnType = yy_0_3_2;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = yyv_Params;
OutputConvertToForeignParams(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_ReturnType;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 15) goto yyfl_31_1_2_1;
yy_2_1_2_1 = ((yy)"	");
OutputWrite(yy_2_1_2_1);
yy_2_1_3_1 = yyv_ObjType;
yy_2_1_3_2 = yyv_Name;
yy_2_1_3_3 = yyv_Params;
yy_2_1_3_4 = yyv_InstanceModifier;
OutputCallForeignHandlerParams(yy_2_1_3_1, yy_2_1_3_2, yy_2_1_3_3, yy_2_1_3_4);
yy_2_1_4_1 = ((yy)"\n");
OutputWrite(yy_2_1_4_1);
goto yysl_31_1_2;
yyfl_31_1_2_1 : ;
{
yy yysb = yyb;
yy_2_2_1_1_1_1 = yyv_ReturnType;
if (! RequiresConversion(yy_2_2_1_1_1_1)) goto yyfl_31_1_2_2_1_1;
yy_2_2_1_1_2_1 = ((yy)"	variable tJNIResult as ");
OutputWrite(yy_2_2_1_1_2_1);
yy_2_2_1_1_3_1 = yyv_ReturnType;
GenerateJavaType(yy_2_2_1_1_3_1);
yy_2_2_1_1_4_1 = ((yy)"\n	put ");
OutputWrite(yy_2_2_1_1_4_1);
yy_2_2_1_1_5_1 = yyv_ObjType;
yy_2_2_1_1_5_2 = yyv_Name;
yy_2_2_1_1_5_3 = yyv_Params;
yy_2_2_1_1_5_4 = yyv_InstanceModifier;
OutputCallForeignHandlerParams(yy_2_2_1_1_5_1, yy_2_2_1_1_5_2, yy_2_2_1_1_5_3, yy_2_2_1_1_5_4);
yy_2_2_1_1_6_1 = ((yy)" into tJNIResult\n");
OutputWrite(yy_2_2_1_1_6_1);
yy_2_2_1_1_7_1 = yyv_ReturnType;
OutputWrapperReturn(yy_2_2_1_1_7_1);
goto yysl_31_1_2_2_1;
yyfl_31_1_2_2_1_1 : ;
yy_2_2_1_2_1_1 = ((yy)"	return ");
OutputWrite(yy_2_2_1_2_1_1);
yy_2_2_1_2_2_1 = yyv_ObjType;
yy_2_2_1_2_2_2 = yyv_Name;
yy_2_2_1_2_2_3 = yyv_Params;
yy_2_2_1_2_2_4 = yyv_InstanceModifier;
OutputCallForeignHandlerParams(yy_2_2_1_2_2_1, yy_2_2_1_2_2_2, yy_2_2_1_2_2_3, yy_2_2_1_2_2_4);
goto yysl_31_1_2_2_1;
yysl_31_1_2_2_1 : ;
yyb = yysb;
}
yy_2_2_2_1 = ((yy)"\n");
OutputWrite(yy_2_2_2_1);
goto yysl_31_1_2;
yysl_31_1_2 : ;
yyb = yysb;
}
return;
yyfl_31_1 : ;
}
yyErr(2,483);
}
OutputForeignGetter(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
if (yy_0_3[0] != 13) goto yyfl_32_1;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Name;
OutputForeignGetterName(yy_1_1, yy_1_2);
yy_2_1 = ((yy)"(pObj)");
OutputWrite(yy_2_1);
return;
yyfl_32_1 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_Instance;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
yyv_Instance = yy_0_3;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Name;
OutputForeignGetterName(yy_1_1, yy_1_2);
yy_2_1 = ((yy)"()");
OutputWrite(yy_2_1);
return;
yyfl_32_2 : ;
}
yyErr(2,508);
}
OutputCallForeignGetter(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_Type;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1_1_1;
yy yy_1_1_2_1;
yy yy_1_1_3_1;
yy yy_1_1_4_1;
yy yy_1_1_5_1;
yy yy_1_1_5_2;
yy yy_1_1_5_3;
yy yy_1_1_6_1;
yy yy_1_1_7_1;
yy yy_1_2_1_1;
yy yy_1_2_2_1;
yy yy_1_2_2_2;
yy yy_1_2_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
yyv_Type = yy_0_3;
yyv_InstanceModifier = yy_0_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Type;
if (! RequiresConversion(yy_1_1_1_1)) goto yyfl_33_1_1_1;
yy_1_1_2_1 = ((yy)"	variable tJNIResult as ");
OutputWrite(yy_1_1_2_1);
yy_1_1_3_1 = yyv_Type;
GenerateJavaType(yy_1_1_3_1);
yy_1_1_4_1 = ((yy)"\n	put ");
OutputWrite(yy_1_1_4_1);
yy_1_1_5_1 = yyv_ObjType;
yy_1_1_5_2 = yyv_Name;
yy_1_1_5_3 = yyv_InstanceModifier;
OutputForeignGetter(yy_1_1_5_1, yy_1_1_5_2, yy_1_1_5_3);
yy_1_1_6_1 = ((yy)" into tJNIResult\n");
OutputWrite(yy_1_1_6_1);
yy_1_1_7_1 = yyv_Type;
OutputWrapperReturn(yy_1_1_7_1);
goto yysl_33_1_1;
yyfl_33_1_1_1 : ;
yy_1_2_1_1 = ((yy)"	return ");
OutputWrite(yy_1_2_1_1);
yy_1_2_2_1 = yyv_ObjType;
yy_1_2_2_2 = yyv_Name;
yy_1_2_2_3 = yyv_InstanceModifier;
OutputForeignGetter(yy_1_2_2_1, yy_1_2_2_2, yy_1_2_2_3);
goto yysl_33_1_1;
yysl_33_1_1 : ;
yyb = yysb;
}
return;
}
}
OutputCallForeignSetter(yyin_1, yyin_2, yyin_3, yyin_4)
yy yyin_1;
yy yyin_2;
yy yyin_3;
yy yyin_4;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Name;
yy yy_0_2;
yy yyv_Type;
yy yy_0_3;
yy yyv_InstanceModifier;
yy yy_0_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_3_2;
yy yy_4_1;
yy yy_5_1_1_1;
yy yy_5_1_1_2;
yy yy_5_2_1_1;
yy yy_6_1_1_1;
yy yy_6_1_2_1;
yy yy_6_1_2_2;
yy yy_6_1_2_3;
yy yy_6_2_1_1;
yy yy_6_2_1_2;
yy yy_6_2_1_3;
yy yy_7_1;
yy yy_8_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yyv_ObjType = yy_0_1;
yyv_Name = yy_0_2;
yyv_Type = yy_0_3;
yyv_InstanceModifier = yy_0_4;
yy_1_1 = yyv_Name;
yy_1_2 = yyv_Type;
OutputConvertToForeignParameter(yy_1_1, yy_1_2);
yy_2_1 = ((yy)"	");
OutputWrite(yy_2_1);
yy_3_1 = yyv_ObjType;
yy_3_2 = yyv_Name;
OutputForeignSetterName(yy_3_1, yy_3_2);
yy_4_1 = ((yy)"(");
OutputWrite(yy_4_1);
{
yy yysb = yyb;
yy_5_1_1_1 = yyv_InstanceModifier;
yy_5_1_1_2 = yy_5_1_1_1;
if (yy_5_1_1_2[0] != 13) goto yyfl_34_1_5_1;
goto yysl_34_1_5;
yyfl_34_1_5_1 : ;
yy_5_2_1_1 = ((yy)"pObj, ");
OutputWrite(yy_5_2_1_1);
goto yysl_34_1_5;
yysl_34_1_5 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_6_1_1_1 = yyv_Type;
if (! RequiresConversion(yy_6_1_1_1)) goto yyfl_34_1_6_1;
yy_6_1_2_1 = ((yy)"tParam_");
yy_6_1_2_2 = yyv_Name;
yy_6_1_2_3 = ((yy)"");
OutputWriteI(yy_6_1_2_1, yy_6_1_2_2, yy_6_1_2_3);
goto yysl_34_1_6;
yyfl_34_1_6_1 : ;
yy_6_2_1_1 = ((yy)"pParam_");
yy_6_2_1_2 = yyv_Name;
yy_6_2_1_3 = ((yy)"");
OutputWriteI(yy_6_2_1_1, yy_6_2_1_2, yy_6_2_1_3);
goto yysl_34_1_6;
yysl_34_1_6 : ;
yyb = yysb;
}
yy_7_1 = ((yy)")");
OutputWrite(yy_7_1);
yy_8_1 = ((yy)"\n");
OutputWrite(yy_8_1);
return;
}
}
OutputConvertToForeignParams(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_35_1;
return;
yyfl_35_1 : ;
}
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
if (yy_0_1[0] != 1) goto yyfl_35_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
OutputConvertToForeignParam(yy_1_1);
yy_2_1 = yyv_Tail;
OutputConvertToForeignParams(yy_2_1);
return;
yyfl_35_2 : ;
}
yyErr(2,555);
}
OutputConvertToForeignParameter(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_SymbolName;
yy yy_0_1;
yy yyv_Type;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy yy_9_1;
yy yy_10_1;
yy yy_10_2;
yy yy_10_3;
yy yy_11_1;
yy yy_11_2;
yy yy_11_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_SymbolName = yy_0_1;
yyv_Type = yy_0_2;
yy_1_1 = yyv_Type;
if (! RequiresConversion(yy_1_1)) goto yyfl_36_1;
yy_2_1 = ((yy)"	variable tParam_");
yy_2_2 = yyv_SymbolName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = ((yy)" as ");
OutputWrite(yy_3_1);
yy_4_1 = yyv_Type;
GenerateJavaType(yy_4_1);
yy_5_1 = ((yy)"\n");
OutputWrite(yy_5_1);
yy_6_1 = ((yy)"	put ");
OutputWrite(yy_6_1);
yy_7_1 = yyv_Type;
GenerateType(yy_7_1);
yy_8_1 = ((yy)"To");
OutputWrite(yy_8_1);
yy_9_1 = yyv_Type;
GenerateJavaType(yy_9_1);
yy_10_1 = ((yy)"(pParam_");
yy_10_2 = yyv_SymbolName;
yy_10_3 = ((yy)") into ");
OutputWriteI(yy_10_1, yy_10_2, yy_10_3);
yy_11_1 = ((yy)"tParam_");
yy_11_2 = yyv_SymbolName;
yy_11_3 = ((yy)"\n\n");
OutputWriteI(yy_11_1, yy_11_2, yy_11_3);
return;
yyfl_36_1 : ;
}
{
yy yyb;
yy yyv_SymbolName;
yy yy_0_1;
yy yyv_Type;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_SymbolName = yy_0_1;
yyv_Type = yy_0_2;
return;
yyfl_36_2 : ;
}
yyErr(2,563);
}
OutputConvertToForeignParam(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_SymbolName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_37_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Type = yy_0_1_3;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_SymbolName = yy_1_2;
yy_2_1 = yyv_SymbolName;
yy_2_2 = yyv_Type;
OutputConvertToForeignParameter(yy_2_1, yy_2_2);
return;
yyfl_37_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_37_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
return;
yyfl_37_2 : ;
}
yyErr(2,581);
}
int RequiresConversion(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_38_1;
return 1;
yyfl_38_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_38_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
if (yy_0_1_2[0] != 1) goto yyfl_38_2;
return 1;
yyfl_38_2 : ;
}
return 0;
}
OutputForeignCallParams(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_39_1;
return;
yyfl_39_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_39_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
if (yy_0_1_2[0] != 2) goto yyfl_39_2;
yy_1_1 = yyv_Head;
OutputForeignCallParam(yy_1_1);
return;
yyfl_39_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_39_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
OutputForeignCallParam(yy_1_1);
yy_2_1 = ((yy)", ");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Tail;
OutputForeignCallParams(yy_3_1);
return;
yyfl_39_3 : ;
}
yyErr(2,597);
}
OutputForeignCallParam(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_SymbolName;
yy yy_1_2;
yy yy_2_1_1_1;
yy yy_2_1_2_1;
yy yy_2_1_2_2;
yy yy_2_1_2_3;
yy yy_2_2_1_1;
yy yy_2_2_1_2;
yy yy_2_2_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_40_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Type = yy_0_1_3;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_SymbolName = yy_1_2;
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Type;
if (! RequiresConversion(yy_2_1_1_1)) goto yyfl_40_1_2_1;
yy_2_1_2_1 = ((yy)"tParam_");
yy_2_1_2_2 = yyv_SymbolName;
yy_2_1_2_3 = ((yy)"");
OutputWriteI(yy_2_1_2_1, yy_2_1_2_2, yy_2_1_2_3);
goto yysl_40_1_2;
yyfl_40_1_2_1 : ;
yy_2_2_1_1 = ((yy)"pParam_");
yy_2_2_1_2 = yyv_SymbolName;
yy_2_2_1_3 = ((yy)"");
OutputWriteI(yy_2_2_1_1, yy_2_2_1_2, yy_2_2_1_3);
goto yysl_40_1_2;
yysl_40_1_2 : ;
yyb = yysb;
}
return;
yyfl_40_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_40_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"va_args");
OutputWrite(yy_1_1);
return;
yyfl_40_2 : ;
}
yyErr(2,609);
}
OutputWrapperReturn(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yyv_Type = yy_0_1;
yy_1_1 = yyv_Type;
if (! RequiresConversion(yy_1_1)) goto yyfl_41_1;
yy_2_1 = ((yy)"	return ");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Type;
OutputConvertJava(yy_3_1);
yy_4_1 = ((yy)"(tJNIResult)");
OutputWrite(yy_4_1);
return;
yyfl_41_1 : ;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
yyv_Type = yy_0_1;
yy_1_1 = ((yy)"	return tJNIResult");
OutputWrite(yy_1_1);
return;
yyfl_41_2 : ;
}
yyErr(2,624);
}
OutputConvertJava(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
yyv_Type = yy_0_1;
yy_1_1 = yyv_Type;
GenerateType(yy_1_1);
yy_2_1 = ((yy)"From");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Type;
GenerateJavaType(yy_3_1);
return;
}
}
GenerateMethodSignatureWithParameter(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Signature;
yy yy_0_2;
yy yy_0_3;
yy yy_0_3_1;
yy yy_0_3_2;
yy yy_0_3_3;
yy yy_0_3_4;
yy yy_0_3_5;
yy yyv_InstanceMod;
yy yy_0_3_6;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
yyv_Signature = yy_0_2;
if (yy_0_3[0] != 3) goto yyfl_43_1;
yy_0_3_1 = ((yy)yy_0_3[1]);
yy_0_3_2 = ((yy)yy_0_3[2]);
yy_0_3_3 = ((yy)yy_0_3[3]);
yy_0_3_4 = ((yy)yy_0_3[4]);
yy_0_3_5 = ((yy)yy_0_3[5]);
yy_0_3_6 = ((yy)yy_0_3[6]);
yyv_InstanceMod = yy_0_3_6;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Signature;
yy_1_3 = yyv_InstanceMod;
GenerateSignatureWithParameter(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_43_1 : ;
}
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yyv_Signature;
yy yy_0_2;
yy yy_0_3;
yy yyv_InstanceMod;
yy yy_0_3_1;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
yyv_Signature = yy_0_2;
if (yy_0_3[0] != 5) goto yyfl_43_2;
yy_0_3_1 = ((yy)yy_0_3[1]);
yyv_InstanceMod = yy_0_3_1;
yy_1_1 = yyv_ObjType;
yy_1_2 = yyv_Signature;
yy_1_3 = yyv_InstanceMod;
GenerateSignatureWithParameter(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_43_2 : ;
}
yyErr(2,642);
}
GenerateSignatureWithParameter(yyin_1, yyin_2, yyin_3)
yy yyin_1;
yy yyin_2;
yy yyin_3;
{
{
yy yyb;
yy yyv_ObjType;
yy yy_0_1;
yy yy_0_2;
yy yyv_Params;
yy yy_0_2_1;
yy yyv_ReturnType;
yy yy_0_2_2;
yy yyv_InstanceModifier;
yy yy_0_3;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_2_1_1;
yy yy_2_2_2_1;
yy yy_2_2_3_1_1_1;
yy yy_2_2_3_1_1_2;
yy yy_2_2_3_2_1_1;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_2_1_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yyv_ObjType = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_44_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Params = yy_0_2_1;
yyv_ReturnType = yy_0_2_2;
yyv_InstanceModifier = yy_0_3;
yy_1_1 = ((yy)"(");
OutputWrite(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_InstanceModifier;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 13) goto yyfl_44_1_2_1;
goto yysl_44_1_2;
yyfl_44_1_2_1 : ;
yy_2_2_1_1 = ((yy)"in pObj as ");
OutputWrite(yy_2_2_1_1);
yy_2_2_2_1 = yyv_ObjType;
GenerateType(yy_2_2_2_1);
{
yy yysb = yyb;
yy_2_2_3_1_1_1 = yyv_Params;
yy_2_2_3_1_1_2 = yy_2_2_3_1_1_1;
if (yy_2_2_3_1_1_2[0] != 2) goto yyfl_44_1_2_2_3_1;
goto yysl_44_1_2_2_3;
yyfl_44_1_2_2_3_1 : ;
yy_2_2_3_2_1_1 = ((yy)", ");
OutputWrite(yy_2_2_3_2_1_1);
goto yysl_44_1_2_2_3;
yysl_44_1_2_2_3 : ;
yyb = yysb;
}
goto yysl_44_1_2;
yysl_44_1_2 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Params;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_44_1_3_1;
goto yysl_44_1_3;
yyfl_44_1_3_1 : ;
yy_3_2_1_1 = yyv_Params;
GenerateParams(yy_3_2_1_1);
goto yysl_44_1_3;
yysl_44_1_3 : ;
yyb = yysb;
}
yy_4_1 = ((yy)")");
OutputWrite(yy_4_1);
yy_5_1 = yyv_ReturnType;
GenerateReturns(yy_5_1);
return;
yyfl_44_1 : ;
}
yyErr(2,650);
}
GenerateSignatureWithReturnType(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_ReturnType;
yy yy_0_1;
yy yy_0_2;
yy yyv_Params;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ReturnType = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_45_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Params = yy_0_2_1;
if (yy_0_2_2[0] != 15) goto yyfl_45_1;
yy_1_1 = ((yy)"(");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Params;
GenerateParams(yy_2_1);
yy_3_1 = ((yy)")");
OutputWrite(yy_3_1);
yy_4_1 = yyv_ReturnType;
GenerateReturns(yy_4_1);
return;
yyfl_45_1 : ;
}
yyErr(2,674);
}
GenerateParams(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_46_1;
return;
yyfl_46_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_46_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
if (yy_0_1_2[0] != 2) goto yyfl_46_2;
yy_1_1 = yyv_Head;
GenerateParam(yy_1_1);
return;
yyfl_46_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_46_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
GenerateParam(yy_1_1);
yy_2_1 = ((yy)", ");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Tail;
GenerateParams(yy_3_1);
return;
yyfl_46_3 : ;
}
yyErr(2,682);
}
GenerateJavaParams(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_47_1;
return;
yyfl_47_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_47_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
if (yy_0_1_2[0] != 2) goto yyfl_47_2;
yy_1_1 = yyv_Head;
GenerateJavaParam(yy_1_1);
return;
yyfl_47_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_47_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
GenerateJavaParam(yy_1_1);
yy_2_1 = ((yy)", ");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Tail;
GenerateJavaParams(yy_3_1);
return;
yyfl_47_3 : ;
}
yyErr(2,694);
}
GenerateParam(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_SymbolInfo;
yy yy_1_2;
yy yy_2_1;
yy yyv_SymbolName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_48_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Type = yy_0_1_3;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_48_1;
yyv_SymbolInfo = yy_1_2;
yy_2_1 = yyv_Id;
ResolveIdName(yy_2_1, &yy_2_2);
yyv_SymbolName = yy_2_2;
yy_3_1 = ((yy)"in pParam_");
yy_3_2 = yyv_SymbolName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)" as ");
OutputWrite(yy_4_1);
yy_5_1 = yyv_Type;
GenerateType(yy_5_1);
return;
yyfl_48_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_48_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"in va_args as List");
OutputWrite(yy_1_1);
return;
yyfl_48_2 : ;
}
yyErr(2,706);
}
GenerateJavaParam(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_SymbolInfo;
yy yy_1_2;
yy yy_2_1;
yy yyv_SymbolName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_49_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Type = yy_0_1_3;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_49_1;
yyv_SymbolInfo = yy_1_2;
yy_2_1 = yyv_Id;
ResolveIdName(yy_2_1, &yy_2_2);
yyv_SymbolName = yy_2_2;
yy_3_1 = ((yy)"in pParam_");
yy_3_2 = yyv_SymbolName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)" as ");
OutputWrite(yy_4_1);
yy_5_1 = yyv_Type;
GenerateJavaType(yy_5_1);
return;
yyfl_49_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_49_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"in pArgs as List");
OutputWrite(yy_1_1);
return;
yyfl_49_2 : ;
}
yyErr(2,719);
}
GenerateDefinitions(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_50_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Left = yy_0_1_1;
yyv_Right = yy_0_1_2;
yy_1_1 = yyv_Left;
GenerateDefinitions(yy_1_1);
yy_2_1 = yyv_Right;
GenerateDefinitions(yy_2_1);
return;
yyfl_50_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Modifiers;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yyv_Definitions;
yy yy_0_1_4;
yy yyv_Inherits;
yy yy_0_1_5;
yy yyv_Implements;
yy yy_0_1_6;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_50_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Modifiers = yy_0_1_2;
yyv_Type = yy_0_1_3;
yyv_Definitions = yy_0_1_4;
yyv_Inherits = yy_0_1_5;
yyv_Implements = yy_0_1_6;
yy_1_1 = yyv_Type;
yy_1_2 = yyv_Definitions;
GenerateClassDefinitions(yy_1_1, yy_1_2);
return;
yyfl_50_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_2;
yy yyv_Definitions;
yy yy_0_1_3;
yy yyv_Inherits;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_50_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Type = yy_0_1_2;
yyv_Definitions = yy_0_1_3;
yyv_Inherits = yy_0_1_4;
yy_1_1 = yyv_Type;
yy_1_2 = yyv_Definitions;
GenerateClassDefinitions(yy_1_1, yy_1_2);
return;
yyfl_50_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_50_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return;
yyfl_50_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_50_5;
return;
yyfl_50_5 : ;
}
yyErr(2,731);
}
GenerateInherits(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_51_1;
return;
yyfl_51_1 : ;
}
{
yy yyb;
yy yyv_Typelist;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Typelist = yy_0_1;
yy_1_1 = ((yy)" inherits ");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Typelist;
GenerateTypelist(yy_2_1);
return;
yyfl_51_2 : ;
}
yyErr(2,749);
}
GenerateImplements(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_52_1;
return;
yyfl_52_1 : ;
}
{
yy yyb;
yy yyv_Typelist;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Typelist = yy_0_1;
yy_1_1 = ((yy)" implements ");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Typelist;
GenerateTypelist(yy_2_1);
return;
yyfl_52_2 : ;
}
yyErr(2,757);
}
GenerateTypelist(yyin_1)
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
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_2_1_1;
yy yy_2_2_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_53_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
GenerateType(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Tail;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 2) goto yyfl_53_1_2_1;
goto yysl_53_1_2;
yyfl_53_1_2_1 : ;
yy_2_2_1_1 = ((yy)", ");
OutputWrite(yy_2_2_1_1);
yy_2_2_2_1 = yyv_Tail;
GenerateTypelist(yy_2_2_2_1);
goto yysl_53_1_2;
yysl_53_1_2 : ;
yyb = yysb;
}
return;
yyfl_53_1 : ;
}
yyErr(2,765);
}
GenerateOptionalAlias(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_54_1;
return;
yyfl_54_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yy_1_1;
yy yyv_AliasName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_54_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Id = yy_0_1_1;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_AliasName = yy_1_2;
yy_2_1 = ((yy)" named ");
yy_2_2 = yyv_AliasName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_54_2 : ;
}
yyErr(2,776);
}
GenerateOptionalThrows(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_55_1;
return;
yyfl_55_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yy_1_1;
yy yyv_ThrowsName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_55_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Id = yy_0_1_1;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_ThrowsName = yy_1_2;
yy_2_1 = ((yy)" throws ");
yy_2_2 = yyv_ThrowsName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_55_2 : ;
}
yyErr(2,785);
}
GenerateReturns(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Type = yy_0_1;
yy_1_1 = ((yy)" returns ");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Type;
GenerateType(yy_2_1);
return;
}
}
GenerateJavaReturns(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yyv_Type = yy_0_1;
yy_1_1 = ((yy)" returns ");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Type;
GenerateJavaType(yy_2_1);
return;
}
}
GenerateJavaType(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_58_1;
yy_1_1 = ((yy)"JByte");
OutputWrite(yy_1_1);
return;
yyfl_58_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_58_2;
yy_1_1 = ((yy)"JShort");
OutputWrite(yy_1_1);
return;
yyfl_58_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_58_3;
yy_1_1 = ((yy)"JInt");
OutputWrite(yy_1_1);
return;
yyfl_58_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_58_4;
yy_1_1 = ((yy)"JLong");
OutputWrite(yy_1_1);
return;
yyfl_58_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_58_5;
yy_1_1 = ((yy)"JFloat");
OutputWrite(yy_1_1);
return;
yyfl_58_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_58_6;
yy_1_1 = ((yy)"JDouble");
OutputWrite(yy_1_1);
return;
yyfl_58_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_58_7;
yy_1_1 = ((yy)"JBoolean");
OutputWrite(yy_1_1);
return;
yyfl_58_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_58_8;
yy_1_1 = ((yy)"JChar");
OutputWrite(yy_1_1);
return;
yyfl_58_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_58_9;
yy_1_1 = ((yy)"JString");
OutputWrite(yy_1_1);
return;
yyfl_58_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_58_10;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = ((yy)"JObject");
OutputWrite(yy_1_1);
return;
yyfl_58_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_58_11;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = ((yy)"JObject");
OutputWrite(yy_1_1);
return;
yyfl_58_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_58_12;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_1_1 = ((yy)"JObject");
OutputWrite(yy_1_1);
return;
yyfl_58_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_SymbolName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_58_13;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_SymbolName = yy_1_2;
yy_2_1 = ((yy)"");
yy_2_2 = yyv_SymbolName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_58_13 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Dimension;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_58_14;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
if (yy_0_1_2[0] != 1) goto yyfl_58_14;
yyv_Dimension = yy_0_1_3;
yy_1_1 = yyv_Dimension;
yy_1_2 = ((yy)1);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_58_14;
yy_2_1 = ((yy)"JByteArray");
OutputWrite(yy_2_1);
return;
yyfl_58_14 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_2;
yy yyv_Dimension;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_58_15;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_2;
yyv_Dimension = yy_0_1_3;
yy_1_1 = ((yy)"JArray");
OutputWrite(yy_1_1);
return;
yyfl_58_15 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_58_16;
yy_1_1 = ((yy)"nothing");
OutputWrite(yy_1_1);
return;
yyfl_58_16 : ;
}
yyErr(2,806);
}
GenerateType(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_59_1;
yy_1_1 = ((yy)"Number");
OutputWrite(yy_1_1);
return;
yyfl_59_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_59_2;
yy_1_1 = ((yy)"Number");
OutputWrite(yy_1_1);
return;
yyfl_59_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_59_3;
yy_1_1 = ((yy)"Number");
OutputWrite(yy_1_1);
return;
yyfl_59_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_59_4;
yy_1_1 = ((yy)"Number");
OutputWrite(yy_1_1);
return;
yyfl_59_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_59_5;
yy_1_1 = ((yy)"Number");
OutputWrite(yy_1_1);
return;
yyfl_59_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_59_6;
yy_1_1 = ((yy)"Number");
OutputWrite(yy_1_1);
return;
yyfl_59_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_59_7;
yy_1_1 = ((yy)"Boolean");
OutputWrite(yy_1_1);
return;
yyfl_59_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_59_8;
yy_1_1 = ((yy)"Number");
OutputWrite(yy_1_1);
return;
yyfl_59_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_59_9;
yy_1_1 = ((yy)"String");
OutputWrite(yy_1_1);
return;
yyfl_59_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_59_10;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = ((yy)"JObject");
OutputWrite(yy_1_1);
return;
yyfl_59_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_59_11;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = ((yy)"JObject");
OutputWrite(yy_1_1);
return;
yyfl_59_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_59_12;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_1_1 = ((yy)"JObject");
OutputWrite(yy_1_1);
return;
yyfl_59_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_SymbolName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_59_13;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_SymbolName = yy_1_2;
yy_2_1 = ((yy)"");
yy_2_2 = yyv_SymbolName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
return;
yyfl_59_13 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Dimension;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_59_14;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
if (yy_0_1_2[0] != 1) goto yyfl_59_14;
yyv_Dimension = yy_0_1_3;
yy_1_1 = yyv_Dimension;
yy_1_2 = ((yy)1);
if ((intptr_t)yy_1_1 != (intptr_t)yy_1_2) goto yyfl_59_14;
yy_2_1 = ((yy)"Data");
OutputWrite(yy_2_1);
return;
yyfl_59_14 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_2;
yy yyv_Dimension;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_59_15;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_2;
yyv_Dimension = yy_0_1_3;
yy_1_1 = ((yy)"List");
OutputWrite(yy_1_1);
return;
yyfl_59_15 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_59_16;
yy_1_1 = ((yy)"nothing");
OutputWrite(yy_1_1);
return;
yyfl_59_16 : ;
}
yyErr(2,860);
}
OutputJavaTypeCode(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_60_1;
yy_1_1 = ((yy)"B");
OutputWrite(yy_1_1);
return;
yyfl_60_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_60_2;
yy_1_1 = ((yy)"S");
OutputWrite(yy_1_1);
return;
yyfl_60_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_60_3;
yy_1_1 = ((yy)"I");
OutputWrite(yy_1_1);
return;
yyfl_60_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_60_4;
yy_1_1 = ((yy)"J");
OutputWrite(yy_1_1);
return;
yyfl_60_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_60_5;
yy_1_1 = ((yy)"F");
OutputWrite(yy_1_1);
return;
yyfl_60_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_60_6;
yy_1_1 = ((yy)"D");
OutputWrite(yy_1_1);
return;
yyfl_60_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_60_7;
yy_1_1 = ((yy)"Z");
OutputWrite(yy_1_1);
return;
yyfl_60_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_60_8;
yy_1_1 = ((yy)"C");
OutputWrite(yy_1_1);
return;
yyfl_60_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_60_9;
yy_1_1 = ((yy)"Ljava/lang/String;");
OutputWrite(yy_1_1);
return;
yyfl_60_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yy_2_1;
yy yyv_ClassPath;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_60_10;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ResolveIdQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2_1 = yyv_Name;
JavaQualifiedNameToClassPath(yy_2_1, &yy_2_2);
yyv_ClassPath = yy_2_2;
yy_3_1 = ((yy)"L");
yy_3_2 = yyv_ClassPath;
yy_3_3 = ((yy)";");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
return;
yyfl_60_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yy_2_1;
yy yyv_ClassPath;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_60_11;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ResolveIdQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2_1 = yyv_Name;
JavaQualifiedNameToClassPath(yy_2_1, &yy_2_2);
yyv_ClassPath = yy_2_2;
yy_3_1 = ((yy)"L");
yy_3_2 = yyv_ClassPath;
yy_3_3 = ((yy)";");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
return;
yyfl_60_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_60_12;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = ((yy)"skip generic placeholder");
yyPrint_STRING(yy_1_1);
yyEndPrint();
return;
yyfl_60_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_0_1_2;
yy yyv_Dimension;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_60_13;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_2;
yyv_Dimension = yy_0_1_3;
yy_1_1 = yyv_Type;
yy_1_2 = yyv_Dimension;
OutputJavaArrayTypeCode(yy_1_1, yy_1_2);
return;
yyfl_60_13 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_60_14;
return;
yyfl_60_14 : ;
}
yyErr(2,914);
}
OutputJavaReturnTypeCode(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_61_1;
yy_1_1 = ((yy)"V");
OutputWrite(yy_1_1);
return;
yyfl_61_1 : ;
}
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
yyv_Type = yy_0_1;
yy_1_1 = yyv_Type;
OutputJavaTypeCode(yy_1_1);
return;
yyfl_61_2 : ;
}
yyErr(2,962);
}
OutputJavaArrayTypeCode(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_Dimension;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_2_1_2_2;
yy yy_2_1_2_2_1;
yy yy_2_1_2_2_2;
yy yy_2_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_Dimension = yy_0_2;
yy_1_1 = ((yy)"[");
OutputWrite(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Dimension;
yy_2_1_1_2 = ((yy)1);
if ((intptr_t)yy_2_1_1_1 == (intptr_t)yy_2_1_1_2) goto yyfl_62_1_2_1;
yy_2_1_2_1 = yyv_Type;
yy_2_1_2_2_1 = yyv_Dimension;
yy_2_1_2_2_2 = ((yy)1);
yy_2_1_2_2 = (yy)(((intptr_t)yy_2_1_2_2_1)-((intptr_t)yy_2_1_2_2_2));
OutputJavaArrayTypeCode(yy_2_1_2_1, yy_2_1_2_2);
goto yysl_62_1_2;
yyfl_62_1_2_1 : ;
yy_2_2_1_1 = yyv_Type;
OutputJavaTypeCode(yy_2_2_1_1);
goto yysl_62_1_2;
yysl_62_1_2 : ;
yyb = yysb;
}
return;
}
}
GenerateTypeList(yyin_1)
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
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_2_1_1;
yy yy_2_2_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_63_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
GenerateType(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Tail;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 2) goto yyfl_63_1_2_1;
goto yysl_63_1_2;
yyfl_63_1_2_1 : ;
yy_2_2_1_1 = ((yy)", ");
OutputWrite(yy_2_2_1_1);
yy_2_2_2_1 = yyv_Tail;
GenerateTypeList(yy_2_2_2_1);
goto yysl_63_1_2;
yysl_63_1_2 : ;
yyb = yysb;
}
return;
yyfl_63_1 : ;
}
yyErr(2,982);
}
GenerateJArray(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_Dim;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1_1_1;
yy yy_2_1_1_2;
yy yy_2_1_2_1;
yy yy_2_1_2_2;
yy yy_2_1_2_2_1;
yy yy_2_1_2_2_2;
yy yy_2_2_1_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_Dim = yy_0_2;
yy_1_1 = ((yy)"List of ");
OutputWrite(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Dim;
yy_2_1_1_2 = ((yy)1);
if ((intptr_t)yy_2_1_1_1 == (intptr_t)yy_2_1_1_2) goto yyfl_64_1_2_1;
yy_2_1_2_1 = yyv_Type;
yy_2_1_2_2_1 = yyv_Dim;
yy_2_1_2_2_2 = ((yy)1);
yy_2_1_2_2 = (yy)(((intptr_t)yy_2_1_2_2_1)-((intptr_t)yy_2_1_2_2_2));
GenerateJArray(yy_2_1_2_1, yy_2_1_2_2);
goto yysl_64_1_2;
yyfl_64_1_2_1 : ;
yy_2_2_1_1 = yyv_Type;
GenerateType(yy_2_2_1_1);
goto yysl_64_1_2;
yysl_64_1_2 : ;
yyb = yysb;
}
return;
}
}
GenerateValue(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_65_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"true");
OutputWrite(yy_1_1);
return;
yyfl_65_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_65_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"false");
OutputWrite(yy_1_1);
return;
yyfl_65_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_65_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = ((yy)"");
yy_1_2 = yyv_Value;
yy_1_3 = ((yy)"");
OutputWriteD(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_65_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_65_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = ((yy)"");
yy_1_2 = yyv_Value;
yy_1_3 = ((yy)"");
OutputWriteN(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_65_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Value;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_65_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = ((yy)"\"");
yy_1_2 = yyv_Value;
yy_1_3 = ((yy)"\"");
OutputWriteS(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_65_5 : ;
}
yyErr(2,1005);
}
TypeToQualifiedName(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_66_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ResolveIdQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_66_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_66_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ResolveIdQualifiedName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_66_2 : ;
}
yyErr(2,1090);
}
TypeToUnqualifiedName(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_67_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_67_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_67_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_67_2 : ;
}
yyErr(2,1098);
}
