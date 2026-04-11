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
yyAbort(n,"output", l);
}
yy yyglov_OutputPackageIndex = (yy) yyu;
OutputPackages(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_List;
yy yy_0_1;
yy yy_2;
yy yy_3_1;
yy_0_1 = yyin_1;
yyv_List = yy_0_1;
OutputBegin();
yy_2 = ((yy)1);
yyglov_OutputPackageIndex = yy_2;
yy_3_1 = yyv_List;
OutputForEachPackage(yy_3_1);
OutputEnd();
return;
}
}
OutputForEachPackage(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_3_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Rest = yy_0_1_2;
yy_1_1 = yyv_Head;
OutputSinglePackage(yy_1_1);
yy_2 = yyglov_OutputPackageIndex;
if (yy_2 == (yy) yyu) yyErr(1,42);
yyv_CurrentIndex = yy_2;
yy_3_1 = yyv_CurrentIndex;
yy_3_2 = ((yy)1);
yy_3 = (yy)(((intptr_t)yy_3_1)+((intptr_t)yy_3_2));
yyglov_OutputPackageIndex = yy_3;
yy_4_1 = yyv_Rest;
OutputForEachPackage(yy_4_1);
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
yyErr(2,38);
}
OutputSinglePackage(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Package;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_1_1;
yy yyv_Id;
yy yy_0_1_1_2;
yy yyv_Definitions;
yy yy_0_1_1_3;
yy yy_1_1;
yy yyv_Name;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
yy_0_1_1 = yy_0_1;
yyv_Package = yy_0_1;
if (yy_0_1_1[0] != 1) goto yyfl_4_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Id = yy_0_1_1_2;
yyv_Definitions = yy_0_1_1_3;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_Name = yy_1_2;
yy_2_1 = ((yy)"foreign package ");
yy_2_2 = yyv_Name;
yy_2_3 = ((yy)"\n");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
yy_3_1 = yyv_Definitions;
OutputImportedDefinitions(yy_3_1);
yy_4_1 = yyv_Definitions;
OutputDefinitions(yy_4_1);
yy_5_1 = ((yy)"end package\n\n");
OutputWrite(yy_5_1);
return;
yyfl_4_1 : ;
}
yyErr(2,49);
}
OutputImportedDefinitions(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_5_1;
return;
yyfl_5_1 : ;
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
if (yy_0_1[0] != 1) goto yyfl_5_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
OutputImportedDefinition(yy_1_1);
yy_2_1 = yyv_Tail;
OutputImportedDefinitions(yy_2_1);
return;
yyfl_5_2 : ;
}
yyErr(2,61);
}
OutputImportedDefinition(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_Meaning;
yy yy_1_2;
yy yy_2_1;
yy yyv_Info;
yy yy_2_2;
yy yyv_Type;
yy yy_3;
yy yy_4_1;
yy yyv_PackageId;
yy yy_4_2;
yy yy_5_1;
yy yyv_Name;
yy yy_5_2;
yy yy_6_1;
yy yyv_SymbolInfo;
yy yy_6_2;
yy yyv_SymbolKind;
yy yy_7;
yy yyv_SymbolType;
yy yy_8;
yy yy_9_1;
yy yyv_SymbolName;
yy yy_9_2;
yy yy_10_1;
yy yy_10_2;
yy yy_10_3;
yy yy_11_1;
yy yy_11_2;
yy yy_11_3;
yy yy_12_1_1_1;
yy yy_12_1_1_2;
yy yy_12_1_2_1;
yy yy_12_2_1_1;
yy yy_12_2_1_2;
yy yy_12_2_2_1;
yy yyv_Generator;
yy yy_13;
yy yy_14;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_6_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
yyv_Meaning = yy_1_2;
yy_2_1 = yyv_Id;
if (! QuerySymbolId(yy_2_1, &yy_2_2)) goto yyfl_6_1;
yyv_Info = yy_2_2;
yy_3 = (yy) yyv_Info[6];
if (yy_3 == (yy) yyu) yyErr(1,75);
yyv_Type = yy_3;
yy_4_1 = yyv_Id;
QueryPackageOfId(yy_4_1, &yy_4_2);
yyv_PackageId = yy_4_2;
yy_5_1 = yyv_PackageId;
ResolveIdName(yy_5_1, &yy_5_2);
yyv_Name = yy_5_2;
yy_6_1 = yyv_Id;
if (! QuerySymbolId(yy_6_1, &yy_6_2)) goto yyfl_6_1;
yyv_SymbolInfo = yy_6_2;
yy_7 = (yy) yyv_SymbolInfo[5];
if (yy_7 == (yy) yyu) yyErr(1,85);
yyv_SymbolKind = yy_7;
yy_8 = (yy) yyv_SymbolInfo[6];
if (yy_8 == (yy) yyu) yyErr(1,86);
yyv_SymbolType = yy_8;
yy_9_1 = yyv_Id;
ResolveIdName(yy_9_1, &yy_9_2);
yyv_SymbolName = yy_9_2;
yy_10_1 = ((yy)"use ");
yy_10_2 = yyv_Name;
yy_10_3 = ((yy)".");
OutputWriteI(yy_10_1, yy_10_2, yy_10_3);
yy_11_1 = ((yy)"");
yy_11_2 = yyv_SymbolName;
yy_11_3 = ((yy)"");
OutputWriteI(yy_11_1, yy_11_2, yy_11_3);
{
yy yysb = yyb;
yy_12_1_1_1 = yyv_SymbolKind;
yy_12_1_1_2 = yy_12_1_1_1;
if (yy_12_1_1_2[0] != 7) goto yyfl_6_1_12_1;
yy_12_1_2_1 = ((yy)" -- class\n");
OutputWrite(yy_12_1_2_1);
goto yysl_6_1_12;
yyfl_6_1_12_1 : ;
yy_12_2_1_1 = yyv_SymbolKind;
yy_12_2_1_2 = yy_12_2_1_1;
if (yy_12_2_1_2[0] != 8) goto yyfl_6_1_12_2;
yy_12_2_2_1 = ((yy)" -- interface\n");
OutputWrite(yy_12_2_2_1);
goto yysl_6_1_12;
yyfl_6_1_12_2 : ;
goto yyfl_6_1;
yysl_6_1_12 : ;
yyb = yysb;
}
yy_13 = yyglov_OutputPackageIndex;
if (yy_13 == (yy) yyu) yyErr(1,99);
yyv_Generator = yy_13;
yy_14 = yyv_Generator;
yyv_SymbolInfo[2] = (intptr_t) yy_14;
return;
yyfl_6_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
return;
yyfl_6_2 : ;
}
yyErr(2,70);
}
OutputDefinitions(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_7_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Left = yy_0_1_1;
yyv_Right = yy_0_1_2;
yy_1_1 = yyv_Left;
OutputDefinitions(yy_1_1);
yy_2_1 = yyv_Right;
OutputDefinitions(yy_2_1);
return;
yyfl_7_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yyv_Value;
yy yy_0_1_4;
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
yy yy_6_1_1_1;
yy yy_6_1_1_2;
yy yy_6_2_1_1;
yy yy_6_2_2_1;
yy yy_7_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_7_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_2;
yyv_Type = yy_0_1_3;
yyv_Value = yy_0_1_4;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_7_2;
yyv_SymbolInfo = yy_1_2;
yy_2_1 = yyv_Id;
ResolveIdName(yy_2_1, &yy_2_2);
yyv_SymbolName = yy_2_2;
yy_3_1 = ((yy)"   constant ");
yy_3_2 = yyv_SymbolName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)" as ");
OutputWrite(yy_4_1);
yy_5_1 = yyv_Type;
OutputType(yy_5_1);
{
yy yysb = yyb;
yy_6_1_1_1 = yyv_Value;
yy_6_1_1_2 = yy_6_1_1_1;
if (yy_6_1_1_2[0] != 6) goto yyfl_7_2_6_1;
goto yysl_7_2_6;
yyfl_7_2_6_1 : ;
yy_6_2_1_1 = ((yy)" is ");
OutputWrite(yy_6_2_1_1);
yy_6_2_2_1 = yyv_Value;
OutputValue(yy_6_2_2_1);
goto yysl_7_2_6;
yysl_7_2_6 : ;
yyb = yysb;
}
yy_7_1 = ((yy)"\n");
OutputWrite(yy_7_1);
return;
yyfl_7_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Modifiers;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yyv_Type;
yy yy_0_1_4;
yy yy_1_1;
yy yyv_SymbolInfo;
yy yy_1_2;
yy yy_2_1;
yy yyv_SymbolName;
yy yy_2_2;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_7_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Modifiers = yy_0_1_2;
yyv_Id = yy_0_1_3;
yyv_Type = yy_0_1_4;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_7_3;
yyv_SymbolInfo = yy_1_2;
yy_2_1 = yyv_Id;
ResolveIdName(yy_2_1, &yy_2_2);
yyv_SymbolName = yy_2_2;
yy_3_1 = ((yy)"   ");
OutputWrite(yy_3_1);
yy_4_1 = yyv_Modifiers;
OutputModifiers(yy_4_1);
yy_5_1 = ((yy)"variable ");
yy_5_2 = yyv_SymbolName;
yy_5_3 = ((yy)"");
OutputWriteI(yy_5_1, yy_5_2, yy_5_3);
yy_6_1 = ((yy)" as ");
OutputWrite(yy_6_1);
yy_7_1 = yyv_Type;
OutputType(yy_7_1);
yy_8_1 = ((yy)"\n");
OutputWrite(yy_8_1);
return;
yyfl_7_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Modifiers;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Parameters;
yy yy_0_1_4_1;
yy yyv_Returns;
yy yy_0_1_4_2;
yy yyv_Alias;
yy yy_0_1_5;
yy yyv_Throws;
yy yy_0_1_6;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yyv_SymbolInfo;
yy yy_1_1_2_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy yy_9_1;
yy yy_10_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_7_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Modifiers = yy_0_1_2;
yyv_Id = yy_0_1_3;
if (yy_0_1_4[0] != 1) goto yyfl_7_4;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Parameters = yy_0_1_4_1;
yyv_Returns = yy_0_1_4_2;
yyv_Alias = yy_0_1_5;
yyv_Throws = yy_0_1_6;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_7_4_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
if (! QuerySymbolId(yy_1_1_2_1, &yy_1_1_2_2)) goto yyfl_7_4_1_1;
yyv_SymbolInfo = yy_1_1_2_2;
goto yysl_7_4_1;
yyfl_7_4_1_1 : ;
yy_1_2_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_2_1_1, &yy_1_2_1_2)) goto yyfl_7_4_1_2;
yyv_SymbolInfo = yy_1_2_1_2;
goto yysl_7_4_1;
yyfl_7_4_1_2 : ;
goto yyfl_7_4;
yysl_7_4_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Id;
ResolveIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3_1 = ((yy)"   ");
OutputWrite(yy_3_1);
yy_4_1 = yyv_Modifiers;
OutputModifiers(yy_4_1);
yy_5_1 = ((yy)"method ");
yy_5_2 = yyv_Name;
yy_5_3 = ((yy)"");
OutputWriteI(yy_5_1, yy_5_2, yy_5_3);
yy_6_1 = yyv_Parameters;
OutputSignature(yy_6_1);
yy_7_1 = yyv_Alias;
OutputOptionalAlias(yy_7_1);
yy_8_1 = yyv_Throws;
OutputOptionalThrows(yy_8_1);
yy_9_1 = yyv_Returns;
OutputReturns(yy_9_1);
yy_10_1 = ((yy)"\n");
OutputWrite(yy_10_1);
return;
yyfl_7_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Modifiers;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Params;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yyv_Alias;
yy yy_0_1_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yyv_SymbolInfo;
yy yy_1_1_2_2;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_5_2;
yy yy_5_3;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_7_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Modifiers = yy_0_1_2;
yyv_Id = yy_0_1_3;
if (yy_0_1_4[0] != 1) goto yyfl_7_5;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Params = yy_0_1_4_1;
yyv_Alias = yy_0_1_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_7_5_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
if (! QuerySymbolId(yy_1_1_2_1, &yy_1_1_2_2)) goto yyfl_7_5_1_1;
yyv_SymbolInfo = yy_1_1_2_2;
goto yysl_7_5_1;
yyfl_7_5_1_1 : ;
yy_1_2_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_2_1_1, &yy_1_2_1_2)) goto yyfl_7_5_1_2;
yyv_SymbolInfo = yy_1_2_1_2;
goto yysl_7_5_1;
yyfl_7_5_1_2 : ;
goto yyfl_7_5;
yysl_7_5_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Id;
ResolveIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3_1 = ((yy)"   ");
OutputWrite(yy_3_1);
yy_4_1 = yyv_Modifiers;
OutputModifiers(yy_4_1);
yy_5_1 = ((yy)"constructor ");
yy_5_2 = yyv_Name;
yy_5_3 = ((yy)"");
OutputWriteI(yy_5_1, yy_5_2, yy_5_3);
yy_6_1 = yyv_Params;
OutputSignature(yy_6_1);
yy_7_1 = yyv_Alias;
OutputOptionalAlias(yy_7_1);
yy_8_1 = ((yy)"\n");
OutputWrite(yy_8_1);
return;
yyfl_7_5 : ;
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
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_7_6;
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
yy_1_1 = ((yy)"class ");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Type;
OutputType(yy_2_1);
yy_3_1 = yyv_Inherits;
OutputInherits(yy_3_1);
yy_4_1 = yyv_Implements;
OutputImplements(yy_4_1);
yy_5_1 = ((yy)"\n");
OutputWrite(yy_5_1);
yy_6_1 = yyv_Definitions;
OutputDefinitions(yy_6_1);
yy_7_1 = ((yy)"end class\n\n");
OutputWrite(yy_7_1);
return;
yyfl_7_6 : ;
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
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_7_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Type = yy_0_1_2;
yyv_Definitions = yy_0_1_3;
yyv_Inherits = yy_0_1_4;
yy_1_1 = ((yy)"interface ");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Type;
OutputType(yy_2_1);
yy_3_1 = yyv_Inherits;
OutputInherits(yy_3_1);
yy_4_1 = ((yy)"\n");
OutputWrite(yy_4_1);
yy_5_1 = yyv_Definitions;
OutputDefinitions(yy_5_1);
yy_6_1 = ((yy)"end interface\n\n");
OutputWrite(yy_6_1);
return;
yyfl_7_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_7_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return;
yyfl_7_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_7_9;
return;
yyfl_7_9 : ;
}
yyErr(2,108);
}
OutputInherits(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_8_1;
return;
yyfl_8_1 : ;
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
OutputTypelist(yy_2_1);
return;
yyfl_8_2 : ;
}
yyErr(2,195);
}
OutputImplements(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_9_1;
return;
yyfl_9_1 : ;
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
OutputTypelist(yy_2_1);
return;
yyfl_9_2 : ;
}
yyErr(2,203);
}
OutputTypelist(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_10_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
OutputType(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Tail;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 2) goto yyfl_10_1_2_1;
goto yysl_10_1_2;
yyfl_10_1_2_1 : ;
yy_2_2_1_1 = ((yy)", ");
OutputWrite(yy_2_2_1_1);
yy_2_2_2_1 = yyv_Tail;
OutputTypelist(yy_2_2_2_1);
goto yysl_10_1_2;
yysl_10_1_2 : ;
yyb = yysb;
}
return;
yyfl_10_1 : ;
}
yyErr(2,211);
}
OutputOptionalAlias(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_11_1;
return;
yyfl_11_1 : ;
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
if (yy_0_1[0] != 1) goto yyfl_11_2;
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
yyfl_11_2 : ;
}
yyErr(2,222);
}
OutputOptionalThrows(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_12_1;
return;
yyfl_12_1 : ;
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
if (yy_0_1[0] != 1) goto yyfl_12_2;
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
yyfl_12_2 : ;
}
yyErr(2,231);
}
OutputReturns(yyin_1)
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
OutputType(yy_2_1);
return;
}
}
OutputType(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_14_1;
yy_1_1 = ((yy)"byte");
OutputWrite(yy_1_1);
return;
yyfl_14_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_14_2;
yy_1_1 = ((yy)"short");
OutputWrite(yy_1_1);
return;
yyfl_14_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_14_3;
yy_1_1 = ((yy)"int");
OutputWrite(yy_1_1);
return;
yyfl_14_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_14_4;
yy_1_1 = ((yy)"long");
OutputWrite(yy_1_1);
return;
yyfl_14_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_14_5;
yy_1_1 = ((yy)"float");
OutputWrite(yy_1_1);
return;
yyfl_14_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_14_6;
yy_1_1 = ((yy)"double");
OutputWrite(yy_1_1);
return;
yyfl_14_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_14_7;
yy_1_1 = ((yy)"boolean");
OutputWrite(yy_1_1);
return;
yyfl_14_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_14_8;
yy_1_1 = ((yy)"char");
OutputWrite(yy_1_1);
return;
yyfl_14_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_14_9;
yy_1_1 = ((yy)"String");
OutputWrite(yy_1_1);
return;
yyfl_14_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_14_10;
yy_1_1 = ((yy)"nothing");
OutputWrite(yy_1_1);
return;
yyfl_14_10 : ;
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
yy yyv_SymbolName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_2_1_1;
yy yy_3_2_2_1;
yy yy_3_2_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_14_11;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_SymbolName = yy_1_2;
yy_2_1 = ((yy)"");
yy_2_2 = yyv_SymbolName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Parameters;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_14_11_3_1;
goto yysl_14_11_3;
yyfl_14_11_3_1 : ;
yy_3_2_1_1 = ((yy)"<");
OutputWrite(yy_3_2_1_1);
yy_3_2_2_1 = yyv_Parameters;
OutputTypeList(yy_3_2_2_1);
yy_3_2_3_1 = ((yy)">");
OutputWrite(yy_3_2_3_1);
goto yysl_14_11_3;
yysl_14_11_3 : ;
yyb = yysb;
}
return;
yyfl_14_11 : ;
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
yy yyv_SymbolName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yy_2_3;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_2_1_1;
yy yy_3_2_2_1;
yy yy_3_2_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_14_12;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = yyv_Id;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_SymbolName = yy_1_2;
yy_2_1 = ((yy)"");
yy_2_2 = yyv_SymbolName;
yy_2_3 = ((yy)"");
OutputWriteI(yy_2_1, yy_2_2, yy_2_3);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Parameters;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_14_12_3_1;
goto yysl_14_12_3;
yyfl_14_12_3_1 : ;
yy_3_2_1_1 = ((yy)"<");
OutputWrite(yy_3_2_1_1);
yy_3_2_2_1 = yyv_Parameters;
OutputTypeList(yy_3_2_2_1);
yy_3_2_3_1 = ((yy)">");
OutputWrite(yy_3_2_3_1);
goto yysl_14_12_3;
yysl_14_12_3 : ;
yyb = yysb;
}
return;
yyfl_14_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy yyv_SymbolInfo;
yy yy_1_2;
yy yy_2_1;
yy yyv_SymbolName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_14_13;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_14_13;
yyv_SymbolInfo = yy_1_2;
yy_2_1 = yyv_Id;
ResolveIdName(yy_2_1, &yy_2_2);
yyv_SymbolName = yy_2_2;
yy_3_1 = ((yy)"");
yy_3_2 = yyv_SymbolName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
return;
yyfl_14_13 : ;
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
if (yy_0_1[0] != 10) goto yyfl_14_14;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_2;
yyv_Dimension = yy_0_1_3;
yy_1_1 = yyv_Type;
yy_1_2 = yyv_Dimension;
OutputJArray(yy_1_1, yy_1_2);
return;
yyfl_14_14 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Bounds;
yy yy_0_1_2;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_14_15;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Bounds = yy_0_1_2;
yy_1_1 = ((yy)"?");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Bounds;
OutputBounds(yy_2_1);
return;
yyfl_14_15 : ;
}
yyErr(2,246);
}
OutputBounds(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_0_1_1;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_15_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Type = yy_0_1_1;
yy_1_1 = ((yy)" extends");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Type;
OutputType(yy_2_1);
return;
yyfl_15_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_0_1_1;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_15_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Type = yy_0_1_1;
yy_1_1 = ((yy)" super");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Type;
OutputType(yy_2_1);
return;
yyfl_15_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_15_3;
return;
yyfl_15_3 : ;
}
yyErr(2,313);
}
OutputTypeList(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_16_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
OutputType(yy_1_1);
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Tail;
yy_2_1_1_2 = yy_2_1_1_1;
if (yy_2_1_1_2[0] != 2) goto yyfl_16_1_2_1;
goto yysl_16_1_2;
yyfl_16_1_2_1 : ;
yy_2_2_1_1 = ((yy)", ");
OutputWrite(yy_2_2_1_1);
yy_2_2_2_1 = yyv_Tail;
OutputTypeList(yy_2_2_2_1);
goto yysl_16_1_2;
yysl_16_1_2 : ;
yyb = yysb;
}
return;
yyfl_16_1 : ;
}
yyErr(2,325);
}
OutputJArray(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Type;
yy yy_0_1;
yy yyv_Dim;
yy yy_0_2;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_2_2_1;
yy yy_1_1_2_2_2;
yy yy_1_2_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Type = yy_0_1;
yyv_Dim = yy_0_2;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Dim;
yy_1_1_1_2 = ((yy)1);
if ((intptr_t)yy_1_1_1_1 == (intptr_t)yy_1_1_1_2) goto yyfl_17_1_1_1;
yy_1_1_2_1 = yyv_Type;
yy_1_1_2_2_1 = yyv_Dim;
yy_1_1_2_2_2 = ((yy)1);
yy_1_1_2_2 = (yy)(((intptr_t)yy_1_1_2_2_1)-((intptr_t)yy_1_1_2_2_2));
OutputJArray(yy_1_1_2_1, yy_1_1_2_2);
goto yysl_17_1_1;
yyfl_17_1_1_1 : ;
yy_1_2_1_1 = yyv_Type;
OutputType(yy_1_2_1_1);
goto yysl_17_1_1;
yysl_17_1_1 : ;
yyb = yysb;
}
yy_2_1 = ((yy)"[]");
OutputWrite(yy_2_1);
return;
}
}
OutputValue(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_18_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"true");
OutputWrite(yy_1_1);
return;
yyfl_18_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_18_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"false");
OutputWrite(yy_1_1);
return;
yyfl_18_2 : ;
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
if (yy_0_1[0] != 4) goto yyfl_18_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = ((yy)"");
yy_1_2 = yyv_Value;
yy_1_3 = ((yy)"");
OutputWriteD(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_18_3 : ;
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
if (yy_0_1[0] != 3) goto yyfl_18_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = ((yy)"");
yy_1_2 = yyv_Value;
yy_1_3 = ((yy)"");
OutputWriteN(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_18_4 : ;
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
if (yy_0_1[0] != 5) goto yyfl_18_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Value = yy_0_1_2;
yy_1_1 = ((yy)"\"");
yy_1_2 = yyv_Value;
yy_1_3 = ((yy)"\"");
OutputWriteS(yy_1_1, yy_1_2, yy_1_3);
return;
yyfl_18_5 : ;
}
yyErr(2,347);
}
OutputModifiers(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Access;
yy yy_0_1_1;
yy yyv_StrictFP;
yy yy_0_1_2;
yy yyv_Inherit;
yy yy_0_1_3;
yy yyv_Modify;
yy yy_0_1_4;
yy yyv_Instance;
yy yy_0_1_5;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_19_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Access = yy_0_1_1;
yyv_StrictFP = yy_0_1_2;
yyv_Inherit = yy_0_1_3;
yyv_Modify = yy_0_1_4;
yyv_Instance = yy_0_1_5;
yy_1_1 = yyv_Access;
OutputModifiers(yy_1_1);
yy_2_1 = yyv_StrictFP;
OutputModifiers(yy_2_1);
yy_3_1 = yyv_Inherit;
OutputModifiers(yy_3_1);
yy_4_1 = yyv_Modify;
OutputModifiers(yy_4_1);
yy_5_1 = yyv_Instance;
OutputModifiers(yy_5_1);
return;
yyfl_19_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Modifier;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_19_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Modifier = yy_0_1_1;
yy_1_1 = yyv_Modifier;
OutputModifiers(yy_1_1);
return;
yyfl_19_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Access;
yy yy_0_1_1;
yy yyv_Transient;
yy yy_0_1_2;
yy yyv_Modify;
yy yy_0_1_3;
yy yyv_Instance;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_19_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Access = yy_0_1_1;
yyv_Transient = yy_0_1_2;
yyv_Modify = yy_0_1_3;
yyv_Instance = yy_0_1_4;
yy_1_1 = yyv_Access;
OutputModifiers(yy_1_1);
yy_2_1 = yyv_Transient;
OutputModifiers(yy_2_1);
yy_3_1 = yyv_Modify;
OutputModifiers(yy_3_1);
yy_4_1 = yyv_Instance;
OutputModifiers(yy_4_1);
return;
yyfl_19_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Access;
yy yy_0_1_1;
yy yyv_Sync;
yy yy_0_1_2;
yy yyv_Native;
yy yy_0_1_3;
yy yyv_StrictFP;
yy yy_0_1_4;
yy yyv_Inherit;
yy yy_0_1_5;
yy yyv_Instance;
yy yy_0_1_6;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_19_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Access = yy_0_1_1;
yyv_Sync = yy_0_1_2;
yyv_Native = yy_0_1_3;
yyv_StrictFP = yy_0_1_4;
yyv_Inherit = yy_0_1_5;
yyv_Instance = yy_0_1_6;
yy_1_1 = yyv_Access;
OutputModifiers(yy_1_1);
yy_2_1 = yyv_Sync;
OutputModifiers(yy_2_1);
yy_3_1 = yyv_Native;
OutputModifiers(yy_3_1);
yy_4_1 = yyv_StrictFP;
OutputModifiers(yy_4_1);
yy_5_1 = yyv_Inherit;
OutputModifiers(yy_5_1);
yy_6_1 = yyv_Instance;
OutputModifiers(yy_6_1);
return;
yyfl_19_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Access;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_19_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Access = yy_0_1_1;
yy_1_1 = yyv_Access;
OutputModifiers(yy_1_1);
return;
yyfl_19_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_19_6;
yy_1_1 = ((yy)"protected ");
OutputWrite(yy_1_1);
return;
yyfl_19_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_19_7;
yy_1_1 = ((yy)"synchronized ");
OutputWrite(yy_1_1);
return;
yyfl_19_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_19_8;
yy_1_1 = ((yy)"native ");
OutputWrite(yy_1_1);
return;
yyfl_19_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_19_9;
yy_1_1 = ((yy)"strictfp ");
OutputWrite(yy_1_1);
return;
yyfl_19_9 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_19_10;
yy_1_1 = ((yy)"abstract ");
OutputWrite(yy_1_1);
return;
yyfl_19_10 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_19_11;
yy_1_1 = ((yy)"final ");
OutputWrite(yy_1_1);
return;
yyfl_19_11 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_19_12;
yy_1_1 = ((yy)"class ");
OutputWrite(yy_1_1);
return;
yyfl_19_12 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 14) goto yyfl_19_13;
yy_1_1 = ((yy)"volatile ");
OutputWrite(yy_1_1);
return;
yyfl_19_13 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 15) goto yyfl_19_14;
yy_1_1 = ((yy)"transient ");
OutputWrite(yy_1_1);
return;
yyfl_19_14 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 16) goto yyfl_19_15;
yy_1_1 = ((yy)"default ");
OutputWrite(yy_1_1);
return;
yyfl_19_15 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_19_16;
return;
yyfl_19_16 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 17) goto yyfl_19_17;
return;
yyfl_19_17 : ;
}
yyErr(2,365);
}
OutputSignature(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Params;
yy yy_0_1;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
yyv_Params = yy_0_1;
yy_1_1 = ((yy)"(");
OutputWrite(yy_1_1);
yy_2_1 = yyv_Params;
OutputParams(yy_2_1);
yy_3_1 = ((yy)")");
OutputWrite(yy_3_1);
return;
}
}
OutputParams(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_21_1;
return;
yyfl_21_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_21_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
if (yy_0_1_2[0] != 2) goto yyfl_21_2;
yy_1_1 = yyv_Head;
OutputParam(yy_1_1);
return;
yyfl_21_2 : ;
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
if (yy_0_1[0] != 1) goto yyfl_21_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
OutputParam(yy_1_1);
yy_2_1 = ((yy)", ");
OutputWrite(yy_2_1);
yy_3_1 = yyv_Tail;
OutputParams(yy_3_1);
return;
yyfl_21_3 : ;
}
yyErr(2,435);
}
OutputParam(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_22_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Type = yy_0_1_3;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_22_1;
yyv_SymbolInfo = yy_1_2;
yy_2_1 = yyv_Id;
ResolveIdName(yy_2_1, &yy_2_2);
yyv_SymbolName = yy_2_2;
yy_3_1 = ((yy)"");
yy_3_2 = yyv_SymbolName;
yy_3_3 = ((yy)"");
OutputWriteI(yy_3_1, yy_3_2, yy_3_3);
yy_4_1 = ((yy)" as ");
OutputWrite(yy_4_1);
yy_5_1 = yyv_Type;
OutputType(yy_5_1);
return;
yyfl_22_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_22_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_1_1 = ((yy)"...");
OutputWrite(yy_1_1);
return;
yyfl_22_2 : ;
}
yyErr(2,447);
}
