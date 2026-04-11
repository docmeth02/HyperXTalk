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
Bind(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Package;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_0_1_1_1;
yy yyv_Name;
yy yy_0_1_1_2;
yy yyv_Definitions;
yy yy_0_1_1_3;
yy yyv_ImportedPackages;
yy yy_0_2;
yy yy_1_1;
yy yy_2_1;
yy yy_2_2;
yy yy_3_2_2_1;
yy yy_3_2_2_2;
yy yy_3_2_3_1;
yy yy_3_2_4_1;
yy yy_3_2_6_1;
yy yy_3_2_6_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_1_1 = yy_0_1;
yyv_Package = yy_0_1;
if (yy_0_1_1[0] != 1) goto yyfl_1_1;
yy_0_1_1_1 = ((yy)yy_0_1_1[1]);
yy_0_1_1_2 = ((yy)yy_0_1_1[2]);
yy_0_1_1_3 = ((yy)yy_0_1_1[3]);
yyv_Position = yy_0_1_1_1;
yyv_Name = yy_0_1_1_2;
yyv_Definitions = yy_0_1_1_3;
yyv_ImportedPackages = yy_0_2;
yy_1_1 = yyv_Name;
DefinePackageId(yy_1_1);
yy_2_1 = yyv_Definitions;
yy_2_2 = yyv_ImportedPackages;
BindImports(yy_2_1, yy_2_2);
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_1_1_3_1;
goto yysl_1_1_3;
yyfl_1_1_3_1 : ;
EnterScope();
yy_3_2_2_1 = yyv_Definitions;
yy_3_2_2_2 = yyv_ImportedPackages;
DeclareImports(yy_3_2_2_1, yy_3_2_2_2);
yy_3_2_3_1 = yyv_Definitions;
Declare(yy_3_2_3_1);
yy_3_2_4_1 = yyv_Definitions;
{
extern Apply();
yybroadcast_DEFINITION(yy_3_2_4_1, 0, &yynull, Apply);
}
LeaveScope();
yy_3_2_6_1 = yyv_Name;
yy_3_2_6_2 = yyv_Definitions;
Define(yy_3_2_6_1, yy_3_2_6_2);
goto yysl_1_1_3;
yysl_1_1_3 : ;
yyb = yysb;
}
return;
yyfl_1_1 : ;
}
yyErr(2,31);
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
if (yy_0_1[0] != 1) goto yyfl_2_1;
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
yyfl_2_1 : ;
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
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yyv_Package;
yy yy_3_1_1_3;
yy yyv_PackageId;
yy yy_3_1_2;
yy yy_3_1_3_1_1_1;
yy yy_3_1_3_1_1_2;
yy yyv_Info;
yy yy_3_1_3_1_1_2_1;
yy yy_3_1_3_2_1_1;
yy yy_3_1_3_2_2_1;
yy yy_3_1_3_2_2_2;
yy yy_3_2_1_1;
yy yyv_PackageName;
yy yy_3_2_1_2;
yy yy_3_2_2_1;
yy yy_3_2_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_2_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
yyv_Imports = yy_0_2;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,70);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetPackageIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Name;
yy_3_1_1_2 = yyv_Imports;
if (! FindPackageInList(yy_3_1_1_1, yy_3_1_1_2, &yy_3_1_1_3)) goto yyfl_2_2_3_1;
yyv_Package = yy_3_1_1_3;
yy_3_1_2 = (yy) yyv_Package[2];
if (yy_3_1_2 == (yy) yyu) yyErr(1,74);
yyv_PackageId = yy_3_1_2;
{
yy yysb = yyb;
yy_3_1_3_1_1_1 = yyv_PackageId;
QueryId(yy_3_1_3_1_1_1, &yy_3_1_3_1_1_2);
if (yy_3_1_3_1_1_2[0] != 2) goto yyfl_2_2_3_1_3_1;
yy_3_1_3_1_1_2_1 = ((yy)yy_3_1_3_1_1_2[1]);
yyv_Info = yy_3_1_3_1_1_2_1;
goto yysl_2_2_3_1_3;
yyfl_2_2_3_1_3_1 : ;
yy_3_1_3_2_1_1 = yyv_PackageId;
DefinePackageId(yy_3_1_3_2_1_1);
yy_3_1_3_2_2_1 = yyv_Package;
yy_3_1_3_2_2_2 = yyv_Imports;
Bind(yy_3_1_3_2_2_1, yy_3_1_3_2_2_2);
goto yysl_2_2_3_1_3;
yysl_2_2_3_1_3 : ;
yyb = yysb;
}
goto yysl_2_2_3;
yyfl_2_2_3_1 : ;
yy_3_2_1_1 = yyv_Name;
GetUnqualifiedIdName(yy_3_2_1_1, &yy_3_2_1_2);
yyv_PackageName = yy_3_2_1_2;
yy_3_2_2_1 = yyv_Position;
yy_3_2_2_2 = yyv_PackageName;
Error_UnableToFindImportedPackage(yy_3_2_2_1, yy_3_2_2_2);
goto yysl_2_2_3;
yysl_2_2_3 : ;
yyb = yysb;
}
return;
yyfl_2_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
return;
yyfl_2_3 : ;
}
yyErr(2,63);
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
if (yy_0_1[0] != 1) goto yyfl_3_1;
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
yyfl_3_1 : ;
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
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_PackageName;
yy yy_2_2;
yy yy_3_1;
yy yyv_FullPackageName;
yy yy_3_2;
yy yy_4_1;
yy yyv_Name;
yy yy_4_2;
yy yy_5_1_1_1;
yy yy_5_1_1_2;
yy yyv_Package;
yy yy_5_1_1_3;
yy yyv_Definitions;
yy yy_5_1_2;
yy yy_5_1_3_1_1_1;
yy yy_5_1_3_1_1_2;
yy yyv_Definition;
yy yy_5_1_3_1_1_3;
yy yy_5_1_3_1_2_1;
yy yy_5_1_3_2_1_1;
yy yy_5_1_3_2_1_2;
yy yyv_QualifiedDefName;
yy yy_5_1_3_2_1_3;
yy yy_5_1_3_2_2_1;
yy yy_5_1_3_2_2_2;
yy yy_5_2_1_1;
yy yy_5_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_3_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
yyv_Imports = yy_0_2;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,97);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetPackageIdName(yy_2_1, &yy_2_2);
yyv_PackageName = yy_2_2;
yy_3_1 = yyv_PackageName;
GetUnqualifiedIdName(yy_3_1, &yy_3_2);
yyv_FullPackageName = yy_3_2;
yy_4_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_4_1, &yy_4_2);
yyv_Name = yy_4_2;
{
yy yysb = yyb;
yy_5_1_1_1 = yyv_PackageName;
yy_5_1_1_2 = yyv_Imports;
if (! FindPackageInList(yy_5_1_1_1, yy_5_1_1_2, &yy_5_1_1_3)) goto yyfl_3_2_5_1;
yyv_Package = yy_5_1_1_3;
yy_5_1_2 = (yy) yyv_Package[3];
if (yy_5_1_2 == (yy) yyu) yyErr(1,103);
yyv_Definitions = yy_5_1_2;
{
yy yysb = yyb;
yy_5_1_3_1_1_1 = yyv_Name;
yy_5_1_3_1_1_2 = yyv_Definitions;
if (! FindDefinitionInPackage(yy_5_1_3_1_1_1, yy_5_1_3_1_1_2, &yy_5_1_3_1_1_3)) goto yyfl_3_2_5_1_3_1;
yyv_Definition = yy_5_1_3_1_1_3;
yy_5_1_3_1_2_1 = yyv_Definition;
DeclareImportedDefinitions(yy_5_1_3_1_2_1);
goto yysl_3_2_5_1_3;
yyfl_3_2_5_1_3_1 : ;
yy_5_1_3_2_1_1 = yyv_FullPackageName;
yy_5_1_3_2_1_2 = yyv_Name;
ConcatenateNameParts(yy_5_1_3_2_1_1, yy_5_1_3_2_1_2, &yy_5_1_3_2_1_3);
yyv_QualifiedDefName = yy_5_1_3_2_1_3;
yy_5_1_3_2_2_1 = yyv_Position;
yy_5_1_3_2_2_2 = yyv_QualifiedDefName;
Error_UnableToFindImportedDefinition(yy_5_1_3_2_2_1, yy_5_1_3_2_2_2);
goto yysl_3_2_5_1_3;
yysl_3_2_5_1_3 : ;
yyb = yysb;
}
goto yysl_3_2_5;
yyfl_3_2_5_1 : ;
yy_5_2_1_1 = yyv_Position;
yy_5_2_1_2 = yyv_FullPackageName;
Error_UnableToFindImportedPackage(yy_5_2_1_1, yy_5_2_1_2);
goto yysl_3_2_5;
yysl_3_2_5 : ;
yyb = yysb;
}
return;
yyfl_3_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
return;
yyfl_3_3 : ;
}
yyErr(2,90);
}
DeclareImportedDefinitions(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_4_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Left = yy_0_1_1;
yyv_Right = yy_0_1_2;
yy_1_1 = yyv_Left;
DeclareImportedDefinitions(yy_1_1);
yy_2_1 = yyv_Right;
DeclareImportedDefinitions(yy_2_1);
return;
yyfl_4_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_4_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_4_2 : ;
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
if (yy_0_1[0] != 7) goto yyfl_4_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_4_3 : ;
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
if (yy_0_1[0] != 6) goto yyfl_4_4;
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
yyfl_4_4 : ;
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
if (yy_0_1[0] != 5) goto yyfl_4_5;
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
yyfl_4_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_3_1;
yy yyv_Name;
yy yy_0_1_3_2;
yy yy_0_1_3_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_4_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Position = yy_0_1_1;
if (yy_0_1_3[0] != 12) goto yyfl_4_6;
yy_0_1_3_1 = ((yy)yy_0_1_3[1]);
yy_0_1_3_2 = ((yy)yy_0_1_3[2]);
yy_0_1_3_3 = ((yy)yy_0_1_3[3]);
yyv_Name = yy_0_1_3_2;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_4_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yyv_Name;
yy yy_0_1_2_2;
yy yy_0_1_2_3;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_4_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
if (yy_0_1_2[0] != 12) goto yyfl_4_7;
yy_0_1_2_1 = ((yy)yy_0_1_2[1]);
yy_0_1_2_2 = ((yy)yy_0_1_2[2]);
yy_0_1_2_3 = ((yy)yy_0_1_2[3]);
yyv_Name = yy_0_1_2_2;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_4_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_4_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return;
yyfl_4_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_4_9;
return;
yyfl_4_9 : ;
}
yyErr(2,118);
}
GetPackageIdName(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_0_1_1;
yy yyv_Qualifier;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_5_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_1;
yyv_Qualifier = yy_0_1_2;
yy_0_2 = yyv_Qualifier;
*yyout_1 = yy_0_2;
return;
yyfl_5_1 : ;
}
yyErr(2,153);
}
GetUnqualifiedIdName(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_0_1_1;
yy yyv_Qualifier;
yy yy_0_1_2;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_6_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_1;
yyv_Qualifier = yy_0_1_2;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_6_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_6_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Name = yy_0_1_1;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_6_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_0_2;
yy yy_1_1;
yy yyv_TailName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yyv_PackageName;
yy yy_2_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_6_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Tail;
GetUnqualifiedIdName(yy_1_1, &yy_1_2);
yyv_TailName = yy_1_2;
yy_2_1 = yyv_Name;
yy_2_2 = yyv_TailName;
ConcatenateNameParts(yy_2_1, yy_2_2, &yy_2_3);
yyv_PackageName = yy_2_3;
yy_0_2 = yyv_PackageName;
*yyout_1 = yy_0_2;
return;
yyfl_6_3 : ;
}
yyErr(2,157);
}
GetQualifiedIdName(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_0_1_1;
yy yyv_Qualifier;
yy yy_0_1_2;
yy yy_0_2;
yy yy_1_1;
yy yyv_HeadName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yyv_QualifiedName;
yy yy_2_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_7_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_1;
yyv_Qualifier = yy_0_1_2;
yy_1_1 = yyv_Qualifier;
GetQualifiedIdName(yy_1_1, &yy_1_2);
yyv_HeadName = yy_1_2;
yy_2_1 = yyv_HeadName;
yy_2_2 = yyv_Name;
ConcatenateNameParts(yy_2_1, yy_2_2, &yy_2_3);
yyv_QualifiedName = yy_2_3;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_7_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_0_2;
yy yy_1_1;
yy yyv_TailName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yyv_PackageName;
yy yy_2_3;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_7_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Tail;
GetUnqualifiedIdName(yy_1_1, &yy_1_2);
yyv_TailName = yy_1_2;
yy_2_1 = yyv_Name;
yy_2_2 = yyv_TailName;
ConcatenateNameParts(yy_2_1, yy_2_2, &yy_2_3);
yyv_PackageName = yy_2_3;
yy_0_2 = yyv_PackageName;
*yyout_1 = yy_0_2;
return;
yyfl_7_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_0_1_1;
yy yy_0_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_7_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Name = yy_0_1_1;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_7_3 : ;
}
yyErr(2,167);
}
int FindPackageInList(yyin_1, yyin_2, yyout_1)
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
yy yyv_PkgName;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_8_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Head = yy_0_2_1;
yyv_Rest = yy_0_2_2;
yy_1 = (yy) yyv_Head[2];
if (yy_1 == (yy) yyu) yyErr(1,184);
yyv_Id = yy_1;
yy_2 = (yy) yyv_Id[2];
if (yy_2 == (yy) yyu) yyErr(1,185);
yyv_PkgName = yy_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_PkgName;
if (! IsQualifiedNameEqualToName(yy_3_1, yy_3_2)) goto yyfl_8_1;
yy_0_3 = yyv_Head;
*yyout_1 = yy_0_3;
return 1;
yyfl_8_1 : ;
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
if (yy_0_2[0] != 1) goto yyfl_8_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Rest = yy_0_2_2;
yy_1_1 = yyv_Name;
yy_1_2 = yyv_Rest;
if (! FindPackageInList(yy_1_1, yy_1_2, &yy_1_3)) goto yyfl_8_2;
yyv_Found = yy_1_3;
yy_0_3 = yyv_Found;
*yyout_1 = yy_0_3;
return 1;
yyfl_8_2 : ;
}
return 0;
}
int IsQualifiedNameEqualToName(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yyv_LeftName;
yy yy_0_1_1;
yy yyv_LeftTail;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_RightName;
yy yy_0_2_1;
yy yyv_RightTail;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_9_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_LeftName = yy_0_1_1;
yyv_LeftTail = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_9_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_RightName = yy_0_2_1;
yyv_RightTail = yy_0_2_2;
yy_1_1 = yyv_LeftName;
yy_1_2 = yyv_RightName;
if (! IsNameEqualToName(yy_1_1, yy_1_2)) goto yyfl_9_1;
yy_2_1 = yyv_LeftTail;
yy_2_2 = yyv_RightTail;
if (! IsQualifiedNameEqualToName(yy_2_1, yy_2_2)) goto yyfl_9_1;
return 1;
yyfl_9_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_LeftName;
yy yy_0_1_1;
yy yyv_LeftTail;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_RightName;
yy yy_0_2_1;
yy yyv_RightTail;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_9_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_LeftName = yy_0_1_1;
yyv_LeftTail = yy_0_1_2;
if (yy_0_2[0] != 2) goto yyfl_9_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_RightName = yy_0_2_1;
yyv_RightTail = yy_0_2_2;
yy_1_1 = yyv_LeftName;
yy_1_2 = yyv_RightName;
if (! IsNameEqualToName(yy_1_1, yy_1_2)) goto yyfl_9_2;
yy_2_1 = yyv_LeftTail;
yy_2_2 = yyv_RightTail;
if (! IsQualifiedNameEqualToName(yy_2_1, yy_2_2)) goto yyfl_9_2;
return 1;
yyfl_9_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_LeftName;
yy yy_0_1_1;
yy yy_0_2;
yy yyv_RightName;
yy yy_0_2_1;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 3) goto yyfl_9_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_LeftName = yy_0_1_1;
if (yy_0_2[0] != 3) goto yyfl_9_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yyv_RightName = yy_0_2_1;
yy_1_1 = yyv_LeftName;
yy_1_2 = yyv_RightName;
if (! IsNameEqualToName(yy_1_1, yy_1_2)) goto yyfl_9_3;
return 1;
yyfl_9_3 : ;
}
return 0;
}
int FindDefinitionInPackage(yyin_1, yyin_2, yyout_1)
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
yy yyv_Tail;
yy yy_0_2_2;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_10_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Head = yy_0_2_1;
yyv_Tail = yy_0_2_2;
yy_1_1 = yyv_Name;
yy_1_2 = yyv_Head;
if (! IsNameOfDefinition(yy_1_1, yy_1_2)) goto yyfl_10_1;
yy_0_3 = yyv_Head;
*yyout_1 = yy_0_3;
return 1;
yyfl_10_1 : ;
}
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Tail;
yy yy_0_2_2;
yy yy_0_3;
yy yy_1_1;
yy yy_1_2;
yy yyv_Found;
yy yy_1_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_10_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Tail = yy_0_2_2;
yy_1_1 = yyv_Name;
yy_1_2 = yyv_Tail;
if (! FindDefinitionInPackage(yy_1_1, yy_1_2, &yy_1_3)) goto yyfl_10_2;
yyv_Found = yy_1_3;
yy_0_3 = yyv_Found;
*yyout_1 = yy_0_3;
return 1;
yyfl_10_2 : ;
}
return 0;
}
int IsNameOfDefinition(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Id;
yy yy_0_2_2;
yy yy_0_2_3;
yy yy_0_2_4;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_DefName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 8) goto yyfl_11_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Id = yy_0_2_2;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,215);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_DefName = yy_2_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_DefName;
if (! IsNameEqualToName(yy_3_1, yy_3_2)) goto yyfl_11_1;
return 1;
yyfl_11_1 : ;
}
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yyv_Id;
yy yy_0_2_3;
yy yy_0_2_4;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_DefName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 7) goto yyfl_11_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Id = yy_0_2_3;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,220);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_DefName = yy_2_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_DefName;
if (! IsNameEqualToName(yy_3_1, yy_3_2)) goto yyfl_11_2;
return 1;
yyfl_11_2 : ;
}
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yyv_Id;
yy yy_0_2_3;
yy yy_0_2_4;
yy yyv_Alias;
yy yy_0_2_5;
yy yy_0_2_6;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasId;
yy yy_1_1_1_2_1;
yy yyv_QualifiedName;
yy yy_1_1_2;
yy yy_1_2_1;
yy yy_2_1;
yy yyv_DefName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 6) goto yyfl_11_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yyv_Id = yy_0_2_3;
yyv_Alias = yy_0_2_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_11_3_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasId = yy_1_1_1_2_1;
yy_1_1_2 = (yy) yyv_AliasId[2];
if (yy_1_1_2 == (yy) yyu) yyErr(1,227);
yyv_QualifiedName = yy_1_1_2;
goto yysl_11_3_1;
yyfl_11_3_1_1 : ;
yy_1_2_1 = (yy) yyv_Id[2];
if (yy_1_2_1 == (yy) yyu) yyErr(1,229);
yyv_QualifiedName = yy_1_2_1;
goto yysl_11_3_1;
yysl_11_3_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_DefName = yy_2_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_DefName;
if (! IsNameEqualToName(yy_3_1, yy_3_2)) goto yyfl_11_3;
return 1;
yyfl_11_3 : ;
}
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yyv_Id;
yy yy_0_2_3;
yy yy_0_2_4;
yy yyv_Alias;
yy yy_0_2_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasId;
yy yy_1_1_1_2_1;
yy yyv_QualifiedName;
yy yy_1_1_2;
yy yy_1_2_1;
yy yy_2_1;
yy yyv_DefName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 5) goto yyfl_11_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yyv_Id = yy_0_2_3;
yyv_Alias = yy_0_2_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_11_4_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasId = yy_1_1_1_2_1;
yy_1_1_2 = (yy) yyv_AliasId[2];
if (yy_1_1_2 == (yy) yyu) yyErr(1,238);
yyv_QualifiedName = yy_1_1_2;
goto yysl_11_4_1;
yyfl_11_4_1_1 : ;
yy_1_2_1 = (yy) yyv_Id[2];
if (yy_1_2_1 == (yy) yyu) yyErr(1,240);
yyv_QualifiedName = yy_1_2_1;
goto yysl_11_4_1;
yysl_11_4_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_DefName = yy_2_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_DefName;
if (! IsNameEqualToName(yy_3_1, yy_3_2)) goto yyfl_11_4;
return 1;
yyfl_11_4 : ;
}
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_0_2_3;
yy yy_0_2_3_1;
yy yyv_Id;
yy yy_0_2_3_2;
yy yy_0_2_3_3;
yy yy_0_2_4;
yy yy_0_2_5;
yy yy_0_2_6;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_DefName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_11_5;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
if (yy_0_2_3[0] != 12) goto yyfl_11_5;
yy_0_2_3_1 = ((yy)yy_0_2_3[1]);
yy_0_2_3_2 = ((yy)yy_0_2_3[2]);
yy_0_2_3_3 = ((yy)yy_0_2_3[3]);
yyv_Id = yy_0_2_3_2;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,246);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_DefName = yy_2_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_DefName;
if (! IsNameEqualToName(yy_3_1, yy_3_2)) goto yyfl_11_5;
return 1;
yyfl_11_5 : ;
}
{
yy yyb;
yy yyv_Name;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_0_2_2_1;
yy yyv_Id;
yy yy_0_2_2_2;
yy yy_0_2_2_3;
yy yy_0_2_3;
yy yy_0_2_4;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_DefName;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Name = yy_0_1;
if (yy_0_2[0] != 4) goto yyfl_11_6;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
if (yy_0_2_2[0] != 12) goto yyfl_11_6;
yy_0_2_2_1 = ((yy)yy_0_2_2[1]);
yy_0_2_2_2 = ((yy)yy_0_2_2[2]);
yy_0_2_2_3 = ((yy)yy_0_2_2[3]);
yyv_Id = yy_0_2_2_2;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,251);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_DefName = yy_2_2;
yy_3_1 = yyv_Name;
yy_3_2 = yyv_DefName;
if (! IsNameEqualToName(yy_3_1, yy_3_2)) goto yyfl_11_6;
return 1;
yyfl_11_6 : ;
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
if (yy_0_1[0] != 1) goto yyfl_13_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Left = yy_0_1_1;
yyv_Right = yy_0_1_2;
yy_1_1 = yyv_Left;
Declare(yy_1_1);
yy_2_1 = yyv_Right;
Declare(yy_2_1);
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
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_13_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
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
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 7) goto yyfl_13_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_13_3 : ;
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
yy yyv_Alias;
yy yy_0_1_5;
yy yy_0_1_6;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_13_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yyv_Alias = yy_0_1_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_13_4_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
DeclareId(yy_1_1_2_1);
goto yysl_13_4_1;
yyfl_13_4_1_1 : ;
yy_1_2_1_1 = yyv_Name;
DeclareId(yy_1_2_1_1);
goto yysl_13_4_1;
yysl_13_4_1 : ;
yyb = yysb;
}
return;
yyfl_13_4 : ;
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
yy yyv_Alias;
yy yy_0_1_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_13_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Position = yy_0_1_1;
yyv_Name = yy_0_1_3;
yyv_Alias = yy_0_1_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_13_5_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
DeclareId(yy_1_1_2_1);
goto yysl_13_5_1;
yyfl_13_5_1_1 : ;
yy_1_2_1_1 = yyv_Name;
DeclareId(yy_1_2_1_1);
goto yysl_13_5_1;
yysl_13_5_1 : ;
yyb = yysb;
}
return;
yyfl_13_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_3_1;
yy yyv_Name;
yy yy_0_1_3_2;
yy yy_0_1_3_3;
yy yyv_Definitions;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_13_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Position = yy_0_1_1;
if (yy_0_1_3[0] != 12) goto yyfl_13_6;
yy_0_1_3_1 = ((yy)yy_0_1_3[1]);
yy_0_1_3_2 = ((yy)yy_0_1_3[2]);
yy_0_1_3_3 = ((yy)yy_0_1_3[3]);
yyv_Name = yy_0_1_3_2;
yyv_Definitions = yy_0_1_4;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_13_6 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yyv_Name;
yy yy_0_1_2_2;
yy yy_0_1_2_3;
yy yyv_Definitions;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_13_7;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
if (yy_0_1_2[0] != 12) goto yyfl_13_7;
yy_0_1_2_1 = ((yy)yy_0_1_2[1]);
yy_0_1_2_2 = ((yy)yy_0_1_2[2]);
yy_0_1_2_3 = ((yy)yy_0_1_2[3]);
yyv_Name = yy_0_1_2_2;
yyv_Definitions = yy_0_1_3;
yy_1_1 = yyv_Name;
DeclareId(yy_1_1);
return;
yyfl_13_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_13_8;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return;
yyfl_13_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 9) goto yyfl_13_9;
return;
yyfl_13_9 : ;
}
yyErr(2,264);
}
DeclareParameters(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_14_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
DeclareParameter(yy_1_1);
yy_2_1 = yyv_Tail;
DeclareParameters(yy_2_1);
return;
yyfl_14_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_14_2;
return;
yyfl_14_2 : ;
}
yyErr(2,304);
}
DeclareParameter(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_15_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
DeclareId(yy_1_1);
return;
yyfl_15_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_15_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
return;
yyfl_15_2 : ;
}
yyErr(2,313);
}
DeclareTemplateParameters(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_16_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
DeclareTemplateParameter(yy_1_1);
yy_2_1 = yyv_Tail;
DeclareTemplateParameters(yy_2_1);
return;
yyfl_16_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_16_2;
return;
yyfl_16_2 : ;
}
yyErr(2,320);
}
DeclareTemplateParameter(yyin_1)
yy yyin_1;
{
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
if (yy_0_1[0] != 12) goto yyfl_17_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = yyv_Parameters;
DeclareTemplateParameters(yy_1_1);
return;
yyfl_17_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_17_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
DeclareId(yy_1_1);
return;
yyfl_17_2 : ;
}
yyErr(2,329);
}
Define(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_PackageId;
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
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_18_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Left = yy_0_2_1;
yyv_Right = yy_0_2_2;
yy_1_1 = yyv_PackageId;
yy_1_2 = yyv_Left;
Define(yy_1_1, yy_1_2);
yy_2_1 = yyv_PackageId;
yy_2_2 = yyv_Right;
Define(yy_2_1, yy_2_2);
return;
yyfl_18_1 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Name;
yy yy_0_2_2;
yy yyv_Type;
yy yy_0_2_3;
yy yyv_Value;
yy yy_0_2_4;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 8) goto yyfl_18_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Name = yy_0_2_2;
yyv_Type = yy_0_2_3;
yyv_Value = yy_0_2_4;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyb + 0;
yy_1_2[0] = 17;
yy_1_3 = yyv_PackageId;
yy_1_4 = yyb + 1;
yy_1_4[0] = 2;
yy_1_5 = yyv_Type;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
return;
yyfl_18_2 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Modifiers;
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
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 7) goto yyfl_18_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
yyv_Modifiers = yy_0_2_2;
yyv_Name = yy_0_2_3;
yyv_Type = yy_0_2_4;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_Modifiers;
yy_1_3 = yyv_PackageId;
yy_1_4 = yyb + 0;
yy_1_4[0] = 3;
yy_1_5 = yyv_Type;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
return;
yyfl_18_3 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Modifiers;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yyv_Params;
yy yy_0_2_4_1;
yy yyv_Returns;
yy yy_0_2_4_2;
yy yyv_Alias;
yy yy_0_2_5;
yy yyv_Throws;
yy yy_0_2_6;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_2_3;
yy yy_1_1_2_4;
yy yy_1_1_2_5;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_3;
yy yy_1_2_1_4;
yy yy_1_2_1_5;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 6) goto yyfl_18_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yyv_Position = yy_0_2_1;
yyv_Modifiers = yy_0_2_2;
yyv_Name = yy_0_2_3;
if (yy_0_2_4[0] != 1) goto yyfl_18_4;
yy_0_2_4_1 = ((yy)yy_0_2_4[1]);
yy_0_2_4_2 = ((yy)yy_0_2_4[2]);
yyv_Params = yy_0_2_4_1;
yyv_Returns = yy_0_2_4_2;
yyv_Alias = yy_0_2_5;
yyv_Throws = yy_0_2_6;
{
yy yysb = yyb;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_18_4_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
yy_1_1_2_2 = yyv_Modifiers;
yy_1_1_2_3 = yyv_PackageId;
yy_1_1_2_4 = yyb + 0;
yy_1_1_2_4[0] = 5;
yy_1_1_2_5 = yyv_Returns;
DefineSymbolId(yy_1_1_2_1, yy_1_1_2_2, yy_1_1_2_3, yy_1_1_2_4, yy_1_1_2_5);
goto yysl_18_4_1;
yyfl_18_4_1_1 : ;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_2_1_1 = yyv_Name;
yy_1_2_1_2 = yyv_Modifiers;
yy_1_2_1_3 = yyv_PackageId;
yy_1_2_1_4 = yyb + 0;
yy_1_2_1_4[0] = 5;
yy_1_2_1_5 = yyv_Returns;
DefineSymbolId(yy_1_2_1_1, yy_1_2_1_2, yy_1_2_1_3, yy_1_2_1_4, yy_1_2_1_5);
goto yysl_18_4_1;
yysl_18_4_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_PackageId;
yy_2_2 = yyv_Params;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_18_4 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Modifiers;
yy yy_0_2_2;
yy yyv_Name;
yy yy_0_2_3;
yy yy_0_2_4;
yy yyv_Params;
yy yy_0_2_4_1;
yy yy_0_2_4_2;
yy yyv_Alias;
yy yy_0_2_5;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yyv_AliasName;
yy yy_1_1_1_2_1;
yy yy_1_1_2_1;
yy yy_1_1_2_2;
yy yy_1_1_2_3;
yy yy_1_1_2_4;
yy yy_1_1_2_5;
yy yy_1_2_1_1;
yy yy_1_2_1_2;
yy yy_1_2_1_3;
yy yy_1_2_1_4;
yy yy_1_2_1_5;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 5) goto yyfl_18_5;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yyv_Position = yy_0_2_1;
yyv_Modifiers = yy_0_2_2;
yyv_Name = yy_0_2_3;
if (yy_0_2_4[0] != 1) goto yyfl_18_5;
yy_0_2_4_1 = ((yy)yy_0_2_4[1]);
yy_0_2_4_2 = ((yy)yy_0_2_4[2]);
yyv_Params = yy_0_2_4_1;
yyv_Alias = yy_0_2_5;
{
yy yysb = yyb;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_18_5_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
yy_1_1_2_2 = yyv_Modifiers;
yy_1_1_2_3 = yyv_PackageId;
yy_1_1_2_4 = yyb + 0;
yy_1_1_2_4[0] = 6;
yy_1_1_2_5 = yyb + 1;
yy_1_1_2_5[0] = 15;
DefineSymbolId(yy_1_1_2_1, yy_1_1_2_2, yy_1_1_2_3, yy_1_1_2_4, yy_1_1_2_5);
goto yysl_18_5_1;
yyfl_18_5_1_1 : ;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_2_1_1 = yyv_Name;
yy_1_2_1_2 = yyv_Modifiers;
yy_1_2_1_3 = yyv_PackageId;
yy_1_2_1_4 = yyb + 0;
yy_1_2_1_4[0] = 6;
yy_1_2_1_5 = yyb + 1;
yy_1_2_1_5[0] = 15;
DefineSymbolId(yy_1_2_1_1, yy_1_2_1_2, yy_1_2_1_3, yy_1_2_1_4, yy_1_2_1_5);
goto yysl_18_5_1;
yysl_18_5_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_PackageId;
yy_2_2 = yyv_Params;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_18_5 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yyv_Modifiers;
yy yy_0_2_2;
yy yy_0_2_3;
yy yyv_TypePosition;
yy yy_0_2_3_1;
yy yyv_Name;
yy yy_0_2_3_2;
yy yyv_Parameters;
yy yy_0_2_3_3;
yy yyv_Definitions;
yy yy_0_2_4;
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
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_18_6;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yy_0_2_5 = ((yy)yy_0_2[5]);
yy_0_2_6 = ((yy)yy_0_2[6]);
yyv_Position = yy_0_2_1;
yyv_Modifiers = yy_0_2_2;
if (yy_0_2_3[0] != 12) goto yyfl_18_6;
yy_0_2_3_1 = ((yy)yy_0_2_3[1]);
yy_0_2_3_2 = ((yy)yy_0_2_3[2]);
yy_0_2_3_3 = ((yy)yy_0_2_3[3]);
yyv_TypePosition = yy_0_2_3_1;
yyv_Name = yy_0_2_3_2;
yyv_Parameters = yy_0_2_3_3;
yyv_Definitions = yy_0_2_4;
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyv_Modifiers;
yy_1_3 = yyv_PackageId;
yy_1_4 = yyb + 0;
yy_1_4[0] = 7;
yy_1_5_1 = yyv_TypePosition;
yy_1_5_2 = yyv_Name;
yy_1_5_3 = yyv_Parameters;
yy_1_5 = yyb + 1;
yy_1_5[0] = 12;
yy_1_5[1] = ((intptr_t)yy_1_5_1);
yy_1_5[2] = ((intptr_t)yy_1_5_2);
yy_1_5[3] = ((intptr_t)yy_1_5_3);
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
yy_2_1 = yyv_PackageId;
yy_2_2 = yyv_Definitions;
Define(yy_2_1, yy_2_2);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Parameters;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_18_6_3_1;
goto yysl_18_6_3;
yyfl_18_6_3_1 : ;
yy_3_2_1_1 = yyv_PackageId;
yy_3_2_1_2 = yyv_Parameters;
DefineTemplateParameters(yy_3_2_1_1, yy_3_2_1_2);
goto yysl_18_6_3;
yysl_18_6_3 : ;
yyb = yysb;
}
return;
yyfl_18_6 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Position;
yy yy_0_2_1;
yy yy_0_2_2;
yy yyv_TypePosition;
yy yy_0_2_2_1;
yy yyv_Name;
yy yy_0_2_2_2;
yy yyv_Parameters;
yy yy_0_2_2_3;
yy yyv_Definitions;
yy yy_0_2_3;
yy yy_0_2_4;
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
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 4) goto yyfl_18_7;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yy_0_2_4 = ((yy)yy_0_2[4]);
yyv_Position = yy_0_2_1;
if (yy_0_2_2[0] != 12) goto yyfl_18_7;
yy_0_2_2_1 = ((yy)yy_0_2_2[1]);
yy_0_2_2_2 = ((yy)yy_0_2_2[2]);
yy_0_2_2_3 = ((yy)yy_0_2_2[3]);
yyv_TypePosition = yy_0_2_2_1;
yyv_Name = yy_0_2_2_2;
yyv_Parameters = yy_0_2_2_3;
yyv_Definitions = yy_0_2_3;
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyb + 0;
yy_1_2[0] = 17;
yy_1_3 = yyv_PackageId;
yy_1_4 = yyb + 1;
yy_1_4[0] = 8;
yy_1_5_1 = yyv_TypePosition;
yy_1_5_2 = yyv_Name;
yy_1_5_3 = yyv_Parameters;
yy_1_5 = yyb + 2;
yy_1_5[0] = 12;
yy_1_5[1] = ((intptr_t)yy_1_5_1);
yy_1_5[2] = ((intptr_t)yy_1_5_2);
yy_1_5[3] = ((intptr_t)yy_1_5_3);
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
yy_2_1 = yyv_PackageId;
yy_2_2 = yyv_Definitions;
Define(yy_2_1, yy_2_2);
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Parameters;
yy_3_1_1_2 = yy_3_1_1_1;
if (yy_3_1_1_2[0] != 2) goto yyfl_18_7_3_1;
goto yysl_18_7_3;
yyfl_18_7_3_1 : ;
yy_3_2_1_1 = yyv_PackageId;
yy_3_2_1_2 = yyv_Parameters;
DefineTemplateParameters(yy_3_2_1_1, yy_3_2_1_2);
goto yysl_18_7_3;
yysl_18_7_3 : ;
yyb = yysb;
}
return;
yyfl_18_7 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 2) goto yyfl_18_8;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return;
yyfl_18_8 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_2[0] != 9) goto yyfl_18_9;
return;
yyfl_18_9 : ;
}
yyErr(2,341);
}
DefineTemplateParameters(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_PackageId;
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
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_19_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Head = yy_0_2_1;
yyv_Tail = yy_0_2_2;
yy_1_1 = yyv_PackageId;
yy_1_2 = yyv_Head;
DefineTemplateParameter(yy_1_1, yy_1_2);
yy_2_1 = yyv_PackageId;
yy_2_2 = yyv_Tail;
DefineTemplateParameters(yy_2_1, yy_2_2);
return;
yyfl_19_1 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_19_2;
return;
yyfl_19_2 : ;
}
yyErr(2,396);
}
DefineTemplateParameter(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Id;
yy yy_0_2_2;
yy yyv_Parameters;
yy yy_0_2_3;
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 12) goto yyfl_20_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yyv_Id = yy_0_2_2;
yyv_Parameters = yy_0_2_3;
yy_1_1 = yyv_PackageId;
yy_1_2 = yyv_Parameters;
DefineTemplateParameters(yy_1_1, yy_1_2);
return;
yyfl_20_1 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Id;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 13) goto yyfl_20_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Id = yy_0_2_2;
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Id;
yy_1_2 = yyb + 0;
yy_1_2[0] = 17;
yy_1_3 = yyv_PackageId;
yy_1_4 = yyb + 1;
yy_1_4[0] = 9;
yy_1_5 = yyb + 2;
yy_1_5[0] = 15;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
return;
yyfl_20_2 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 15) goto yyfl_20_3;
return;
yyfl_20_3 : ;
}
yyErr(2,404);
}
DefineParameters(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yyv_Parameter;
yy yy_0_2_1;
yy yyv_Tail;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_21_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_Parameter = yy_0_2_1;
yyv_Tail = yy_0_2_2;
yy_1_1 = yyv_PackageId;
yy_1_2 = yyv_Parameter;
DefineParameter(yy_1_1, yy_1_2);
yy_2_1 = yyv_PackageId;
yy_2_2 = yyv_Tail;
DefineParameters(yy_2_1, yy_2_2);
return;
yyfl_21_1 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_21_2;
return;
yyfl_21_2 : ;
}
yyErr(2,414);
}
DefineParameter(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_Name;
yy yy_0_2_2;
yy yyv_Type;
yy yy_0_2_3;
yy yy_1_1;
yy yy_1_2;
yy yy_1_3;
yy yy_1_4;
yy yy_1_5;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 1) goto yyfl_22_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yyv_Name = yy_0_2_2;
yyv_Type = yy_0_2_3;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Name;
yy_1_2 = yyb + 0;
yy_1_2[0] = 17;
yy_1_3 = yyv_PackageId;
yy_1_4 = yyb + 1;
yy_1_4[0] = 4;
yy_1_5 = yyv_Type;
DefineSymbolId(yy_1_1, yy_1_2, yy_1_3, yy_1_4, yy_1_5);
return;
yyfl_22_1 : ;
}
{
yy yyb;
yy yyv_PackageId;
yy yy_0_1;
yy yy_0_2;
yy yy_0_2_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_PackageId = yy_0_1;
if (yy_0_2[0] != 2) goto yyfl_22_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
return;
yyfl_22_2 : ;
}
yyErr(2,423);
}
int Apply(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_DEFINITION();
extern yybroadcast_TYPE();
extern yybroadcast_PARAMETER();
extern yybroadcast_OPTIONALID();
extern yybroadcast_PARAMETERLIST();
/*=== Sweep DEFINITION ===*/
if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_23_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_23_10001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_3_1;
yy yyv_Id;
yy yy_0_1_3_2;
yy yyv_Parameters;
yy yy_0_1_3_3;
yy yyv_Definitions;
yy yy_0_1_4;
yy yyv_Inherits;
yy yy_0_1_5;
yy yyv_Implements;
yy yy_0_1_6;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_23_10002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
if (yy_0_1_3[0] != 12) goto yyfl_23_10002;
yy_0_1_3_1 = ((yy)yy_0_1_3[1]);
yy_0_1_3_2 = ((yy)yy_0_1_3[2]);
yy_0_1_3_3 = ((yy)yy_0_1_3[3]);
yyv_Id = yy_0_1_3_2;
yyv_Parameters = yy_0_1_3_3;
yyv_Definitions = yy_0_1_4;
yyv_Inherits = yy_0_1_5;
yyv_Implements = yy_0_1_6;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
yy_2_1 = yyv_Inherits;
{
extern Apply();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, Apply);
}
yy_3_1 = yyv_Implements;
{
extern Apply();
yybroadcast_TYPELIST(yy_3_1, 0, &yynull, Apply);
}
EnterScope();
yy_5_1 = yyv_Parameters;
DeclareTemplateParameters(yy_5_1);
yy_6_1 = yyv_Parameters;
{
extern Apply();
yybroadcast_TYPELIST(yy_6_1, 0, &yynull, Apply);
}
yy_7_1 = yyv_Definitions;
Declare(yy_7_1);
yy_8_1 = yyv_Definitions;
{
extern Apply();
yybroadcast_DEFINITION(yy_8_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_23_10002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yyv_Id;
yy yy_0_1_2_2;
yy yyv_Parameters;
yy yy_0_1_2_3;
yy yyv_Definitions;
yy yy_0_1_3;
yy yyv_Inherits;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy yy_4_1;
yy yy_5_1;
yy yy_6_1;
yy yy_7_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_23_10003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
if (yy_0_1_2[0] != 12) goto yyfl_23_10003;
yy_0_1_2_1 = ((yy)yy_0_1_2[1]);
yy_0_1_2_2 = ((yy)yy_0_1_2[2]);
yy_0_1_2_3 = ((yy)yy_0_1_2[3]);
yyv_Id = yy_0_1_2_2;
yyv_Parameters = yy_0_1_2_3;
yyv_Definitions = yy_0_1_3;
yyv_Inherits = yy_0_1_4;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
yy_2_1 = yyv_Inherits;
{
extern Apply();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, Apply);
}
EnterScope();
yy_4_1 = yyv_Parameters;
DeclareTemplateParameters(yy_4_1);
yy_5_1 = yyv_Parameters;
{
extern Apply();
yybroadcast_TYPELIST(yy_5_1, 0, &yynull, Apply);
}
yy_6_1 = yyv_Definitions;
Declare(yy_6_1);
yy_7_1 = yyv_Definitions;
{
extern Apply();
yybroadcast_DEFINITION(yy_7_1, 0, &yynull, Apply);
}
LeaveScope();
*yyout_1 = yyin_2;
return 1;
yyfl_23_10003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_23_10004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
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
yyfl_23_10004 : ;
}
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
if (yy_0_1[0] != 7) goto yyfl_23_10005;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Id = yy_0_1_3;
yyv_Type = yy_0_1_4;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
yy_2_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_23_10005 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Params;
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
yy yy_1_2_1_1;
yy yy_3_1;
yy yy_4_1;
yy yy_6_1;
yy yy_7_1;
yy yy_8_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_23_10006;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Id = yy_0_1_3;
if (yy_0_1_4[0] != 1) goto yyfl_23_10006;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Params = yy_0_1_4_1;
yyv_Returns = yy_0_1_4_2;
yyv_Alias = yy_0_1_5;
yyv_Throws = yy_0_1_6;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_23_10006_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
ApplyId(yy_1_1_2_1);
goto yysl_23_10006_1;
yyfl_23_10006_1_1 : ;
yy_1_2_1_1 = yyv_Id;
ApplyId(yy_1_2_1_1);
goto yysl_23_10006_1;
yysl_23_10006_1 : ;
yyb = yysb;
}
EnterScope();
yy_3_1 = yyv_Params;
DeclareParameters(yy_3_1);
yy_4_1 = yyv_Params;
{
extern Apply();
yybroadcast_PARAMETERLIST(yy_4_1, 0, &yynull, Apply);
}
LeaveScope();
yy_6_1 = yyv_Params;
ApplyParamTypes(yy_6_1);
yy_7_1 = yyv_Returns;
{
extern Apply();
yybroadcast_TYPE(yy_7_1, 0, &yynull, Apply);
}
yy_8_1 = yyv_Throws;
{
extern Apply();
yybroadcast_OPTIONALID(yy_8_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_23_10006 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
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
yy yy_1_2_1_1;
yy yy_3_1;
yy yy_4_1;
yy yy_6_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_23_10007;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Id = yy_0_1_3;
if (yy_0_1_4[0] != 1) goto yyfl_23_10007;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Params = yy_0_1_4_1;
yyv_Alias = yy_0_1_5;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Alias;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 1) goto yyfl_23_10007_1_1;
yy_1_1_1_2_1 = ((yy)yy_1_1_1_2[1]);
yyv_AliasName = yy_1_1_1_2_1;
yy_1_1_2_1 = yyv_AliasName;
ApplyId(yy_1_1_2_1);
goto yysl_23_10007_1;
yyfl_23_10007_1_1 : ;
yy_1_2_1_1 = yyv_Id;
ApplyId(yy_1_2_1_1);
goto yysl_23_10007_1;
yysl_23_10007_1 : ;
yyb = yysb;
}
EnterScope();
yy_3_1 = yyv_Params;
DeclareParameters(yy_3_1);
yy_4_1 = yyv_Params;
{
extern Apply();
yybroadcast_PARAMETERLIST(yy_4_1, 0, &yynull, Apply);
}
LeaveScope();
yy_6_1 = yyv_Params;
ApplyParamTypes(yy_6_1);
*yyout_1 = yyin_2;
return 1;
yyfl_23_10007 : ;
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
yy yyv_Parameter;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_23_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Parameter = yy_0_1_3;
yy_1_1 = yyv_Name;
ApplyId(yy_1_1);
yy_2_1 = yyv_Parameter;
{
extern Apply();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_23_20001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yyv_Name;
yy yy_0_1_2_2;
yy yyv_Parameter;
yy yy_0_1_2_3;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 10) goto yyfl_23_20002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
if (yy_0_1_2[0] != 11) goto yyfl_23_20002;
yy_0_1_2_1 = ((yy)yy_0_1_2[1]);
yy_0_1_2_2 = ((yy)yy_0_1_2[2]);
yy_0_1_2_3 = ((yy)yy_0_1_2[3]);
yyv_Name = yy_0_1_2_2;
yyv_Parameter = yy_0_1_2_3;
yy_1_1 = yyv_Name;
ApplyId(yy_1_1);
yy_2_1 = yyv_Parameter;
{
extern Apply();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_23_20002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_0_1_3;
yy yy_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_23_20003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = yyv_Name;
ApplyId(yy_1_1);
yy_2_1 = yyv_Parameters;
{
extern Apply();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_23_20003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 13) goto yyfl_23_20004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = yyv_Name;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_23_20004 : ;
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
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_23_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_23_30001 : ;
}
return 0;
}
/*===*/
/*=== Sweep OPTIONALID ===*/
else if (yytp == (intptr_t) yybroadcast_OPTIONALID) {
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yy_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_23_40001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Id = yy_0_1_1;
yy_1_1 = yyv_Id;
ApplyId(yy_1_1);
*yyout_1 = yyin_2;
return 1;
yyfl_23_40001 : ;
}
return 0;
}
/*===*/
/*=== Sweep PARAMETERLIST ===*/
else if (yytp == (intptr_t) yybroadcast_PARAMETERLIST) {
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
if (yy_0_1[0] != 1) goto yyfl_23_50001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
{
extern Apply();
yybroadcast_PARAMETER(yy_1_1, 0, &yynull, Apply);
}
yy_2_1 = yyv_Tail;
{
extern Apply();
yybroadcast_PARAMETERLIST(yy_2_1, 0, &yynull, Apply);
}
*yyout_1 = yyin_2;
return 1;
yyfl_23_50001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
ApplyParamTypes(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_24_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
ApplyParamType(yy_1_1);
yy_2_1 = yyv_Tail;
ApplyParamTypes(yy_2_1);
return;
yyfl_24_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_24_2;
return;
yyfl_24_2 : ;
}
yyErr(2,552);
}
ApplyParamType(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_25_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Type = yy_0_1_3;
yy_1_1 = yyv_Type;
{
extern Apply();
yybroadcast_TYPE(yy_1_1, 0, &yynull, Apply);
}
return;
yyfl_25_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_25_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
return;
yyfl_25_2 : ;
}
yyErr(2,560);
}
DeclareId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yyv_DefiningId;
yy yy_3_2_1;
yy yyv_Position;
yy yy_4;
yy yyv_DefiningPosition;
yy yy_5;
yy yy_6_1;
yy yy_6_2;
yy yy_6_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,574);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3_1 = yyv_Name;
if (! HasLocalMeaning(yy_3_1, &yy_3_2)) goto yyfl_26_1;
if (yy_3_2[0] != 1) goto yyfl_26_1;
yy_3_2_1 = ((yy)yy_3_2[1]);
yyv_DefiningId = yy_3_2_1;
yy_4 = (yy) yyv_Id[1];
if (yy_4 == (yy) yyu) yyErr(1,577);
yyv_Position = yy_4;
yy_5 = (yy) yyv_DefiningId[1];
if (yy_5 == (yy) yyu) yyErr(1,578);
yyv_DefiningPosition = yy_5;
yy_6_1 = yyv_Position;
yy_6_2 = yyv_Name;
yy_6_3 = yyv_DefiningPosition;
Error_IdentifierPreviouslyDeclared(yy_6_1, yy_6_2, yy_6_3);
return;
yyfl_26_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_2_1;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,582);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3_1 = yyv_Name;
yy_3_2_1 = yyv_Id;
yy_3_2 = yyb + 0;
yy_3_2[0] = 1;
yy_3_2[1] = ((intptr_t)yy_3_2_1);
DefineUnqualifiedMeaning(yy_3_1, yy_3_2);
return;
yyfl_26_2 : ;
}
yyErr(2,571);
}
ApplyId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3_1;
yy yyv_Meaning;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,589);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3_1 = yyv_Name;
if (! HasUnqualifiedMeaning(yy_3_1, &yy_3_2)) goto yyfl_27_1;
yyv_Meaning = yy_3_2;
yy_4 = yyv_Meaning;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_27_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yyv_Position;
yy yy_3;
yy yy_4_1;
yy yy_4_2;
yy yy_5;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,595);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3 = (yy) yyv_Id[1];
if (yy_3 == (yy) yyu) yyErr(1,597);
yyv_Position = yy_3;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Name;
Error_IdentifierNotDeclared(yy_4_1, yy_4_2);
yy_5 = yyb + 0;
yy_5[0] = 4;
yyv_Id[3] = (intptr_t) yy_5;
return;
yyfl_27_2 : ;
}
yyErr(2,586);
}
ApplyLocalId(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yy_3_1;
yy yyv_Meaning;
yy yy_3_2;
yy yy_4;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,604);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3_1 = yyv_Name;
if (! HasLocalMeaning(yy_3_1, &yy_3_2)) goto yyfl_28_1;
yyv_Meaning = yy_3_2;
yy_4 = yyv_Meaning;
yyv_Id[3] = (intptr_t) yy_4;
return;
yyfl_28_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy yyv_Position;
yy yy_3;
yy yy_4_1;
yy yy_4_2;
yy yy_5;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,610);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_3 = (yy) yyv_Id[1];
if (yy_3 == (yy) yyu) yyErr(1,612);
yyv_Position = yy_3;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Name;
Error_IdentifierNotDeclared(yy_4_1, yy_4_2);
yy_5 = yyb + 0;
yy_5[0] = 4;
yyv_Id[3] = (intptr_t) yy_5;
return;
yyfl_28_2 : ;
}
yyErr(2,601);
}
DefinePackageId(yyin_1)
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
yy yyv_Modifiers;
yy yy_0_2;
yy yyv_ParentId;
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
yy yy_8_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yy_0_3 = yyin_3;
yy_0_4 = yyin_4;
yy_0_5 = yyin_5;
yyv_Id = yy_0_1;
yyv_Modifiers = yy_0_2;
yyv_ParentId = yy_0_3;
yyv_Kind = yy_0_4;
yyv_Type = yy_0_5;
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yyv_Info = yyb + 0;
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
yyv_Info[5] = (intptr_t) yy_5;
yy_6 = yyv_Type;
yyv_Info[6] = (intptr_t) yy_6;
yy_7 = yyv_Modifiers;
yyv_Info[4] = (intptr_t) yy_7;
yy_8_1 = yyv_Info;
yy_8 = yyb + 7;
yy_8[0] = 3;
yy_8[1] = ((intptr_t)yy_8_1);
yyv_Id[3] = (intptr_t) yy_8;
return;
}
}
int DumpBindings(yytp, yyin_1, yyin_2, yyout_1 )
intptr_t yytp;
yy yyin_1, yyin_2, *yyout_1;
{
{
extern yybroadcast_PACKAGE();
extern yybroadcast_DEFINITION();
extern yybroadcast_TYPE();
extern yybroadcast_PARAMETER();
/*=== Sweep PACKAGE ===*/
if (yytp == (intptr_t) yybroadcast_PACKAGE) {
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Definitions;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_31_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Definitions = yy_0_1_3;
yy_1_1 = ((yy)"package");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Definitions;
{
extern DumpBindings();
yybroadcast_DEFINITION(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_31_10001 : ;
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
if (yy_0_1[0] != 2) goto yyfl_31_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = ((yy)"use");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_31_20001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_3_1;
yy yyv_Name;
yy yy_0_1_3_2;
yy yyv_Parameters;
yy yy_0_1_3_3;
yy yyv_Definitions;
yy yy_0_1_4;
yy yyv_Inherits;
yy yy_0_1_5;
yy yyv_Implements;
yy yy_0_1_6;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_31_20002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
if (yy_0_1_3[0] != 12) goto yyfl_31_20002;
yy_0_1_3_1 = ((yy)yy_0_1_3[1]);
yy_0_1_3_2 = ((yy)yy_0_1_3[2]);
yy_0_1_3_3 = ((yy)yy_0_1_3[3]);
yyv_Name = yy_0_1_3_2;
yyv_Parameters = yy_0_1_3_3;
yyv_Definitions = yy_0_1_4;
yyv_Inherits = yy_0_1_5;
yyv_Implements = yy_0_1_6;
yy_1_1 = ((yy)"class");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Parameters;
{
extern DumpBindings();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, DumpBindings);
}
yy_3_1 = yyv_Definitions;
{
extern DumpBindings();
yybroadcast_DEFINITION(yy_3_1, 0, &yynull, DumpBindings);
}
yy_4_1 = yyv_Inherits;
{
extern DumpBindings();
yybroadcast_TYPELIST(yy_4_1, 0, &yynull, DumpBindings);
}
yy_5_1 = yyv_Implements;
{
extern DumpBindings();
yybroadcast_TYPELIST(yy_5_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_31_20002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yyv_Name;
yy yy_0_1_2_2;
yy yyv_Parameters;
yy yy_0_1_2_3;
yy yyv_Definitions;
yy yy_0_1_3;
yy yyv_Inherits;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_31_20003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
if (yy_0_1_2[0] != 12) goto yyfl_31_20003;
yy_0_1_2_1 = ((yy)yy_0_1_2[1]);
yy_0_1_2_2 = ((yy)yy_0_1_2[2]);
yy_0_1_2_3 = ((yy)yy_0_1_2[3]);
yyv_Name = yy_0_1_2_2;
yyv_Parameters = yy_0_1_2_3;
yyv_Definitions = yy_0_1_3;
yyv_Inherits = yy_0_1_4;
yy_1_1 = ((yy)"interface");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Parameters;
{
extern DumpBindings();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, DumpBindings);
}
yy_3_1 = yyv_Definitions;
{
extern DumpBindings();
yybroadcast_DEFINITION(yy_3_1, 0, &yynull, DumpBindings);
}
yy_4_1 = yyv_Inherits;
{
extern DumpBindings();
yybroadcast_TYPELIST(yy_4_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_31_20003 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yyv_Value;
yy yy_0_1_4;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_31_20004;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Name = yy_0_1_2;
yyv_Type = yy_0_1_3;
yyv_Value = yy_0_1_4;
yy_1_1 = ((yy)"constant");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Type;
{
extern DumpBindings();
yybroadcast_TYPE(yy_2_1, 0, &yynull, DumpBindings);
}
yy_3_1 = yyv_Value;
{
extern DumpBindings();
yybroadcast_EXPRESSION(yy_3_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_31_20004 : ;
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
if (yy_0_1[0] != 7) goto yyfl_31_20005;
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
yyfl_31_20005 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yyv_Type;
yy yy_0_1_4_2;
yy yy_0_1_5;
yy yy_0_1_6;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 6) goto yyfl_31_20006;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Name = yy_0_1_3;
if (yy_0_1_4[0] != 1) goto yyfl_31_20006;
yy_0_1_4_1 = ((yy)yy_0_1_4[1]);
yy_0_1_4_2 = ((yy)yy_0_1_4[2]);
yyv_Type = yy_0_1_4_2;
yy_1_1 = ((yy)"method");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Type;
{
extern DumpBindings();
yybroadcast_TYPE(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_31_20006 : ;
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
yy yy_1_1;
yy yy_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_31_20007;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yyv_Name = yy_0_1_3;
yy_1_1 = ((yy)"constructor");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_31_20007 : ;
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
yy yyv_Parameters;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_31_30001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = ((yy)"named type");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Parameters;
{
extern DumpBindings();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_31_30001 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 12) goto yyfl_31_30002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
yy_1_1 = ((yy)"template type");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
yy_2_1 = yyv_Parameters;
{
extern DumpBindings();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, DumpBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_31_30002 : ;
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
if (yy_0_1[0] != 13) goto yyfl_31_30003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Name = yy_0_1_2;
yy_1_1 = ((yy)"template placeholder");
yy_1_2 = yyv_Name;
DumpId(yy_1_1, yy_1_2);
*yyout_1 = yyin_2;
return 1;
yyfl_31_30003 : ;
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
yy yyv_Name;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_31_40001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Name = yy_0_1_2;
yyv_Type = yy_0_1_3;
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
yyfl_31_40001 : ;
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
yy yyv_QualifiedName;
yy yy_2;
yy yy_3_1;
yy yyv_Name;
yy yy_3_2;
yy yy_4_1;
yy yy_5_1;
yy yyv_NameString;
yy yy_5_2;
yy yy_6_1;
yy yyv_Meaning;
yy yy_7;
yy yy_8_1;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_Tag = yy_0_1;
yyv_Id = yy_0_2;
yy_1 = (yy) yyv_Id[1];
if (yy_1 == (yy) yyu) yyErr(1,693);
yyv_Position = yy_1;
yy_2 = (yy) yyv_Id[2];
if (yy_2 == (yy) yyu) yyErr(1,694);
yyv_QualifiedName = yy_2;
yy_3_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_3_1, &yy_3_2);
yyv_Name = yy_3_2;
yy_4_1 = yyv_Tag;
yyPrint_STRING(yy_4_1);
yyEndPrint();
yy_5_1 = yyv_Name;
GetStringOfNameLiteral(yy_5_1, &yy_5_2);
yyv_NameString = yy_5_2;
yy_6_1 = yyv_NameString;
yyPrint_STRING(yy_6_1);
yyEndPrint();
yy_7 = (yy) yyv_Id[3];
if (yy_7 == (yy) yyu) yyErr(1,699);
yyv_Meaning = yy_7;
yy_8_1 = yyv_Meaning;
DumpMeaning(yy_8_1);
return;
}
}
DumpMeaning(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yyv_Id;
yy yy_0_1_1;
yy yy_1_1;
yy yy_2_1;
yy yyv_Info;
yy yy_2_2;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_33_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yyv_Id = yy_0_1_1;
yy_1_1 = ((yy)"points to");
yyPrint_STRING(yy_1_1);
yyEndPrint();
yy_2_1 = yyv_Id;
QueryId(yy_2_1, &yy_2_2);
yyv_Info = yy_2_2;
yy_3_1 = yyv_Info;
yyPrint_MEANING(yy_3_1);
yyEndPrint();
return;
yyfl_33_1 : ;
}
{
yy yyb;
yy yyv_Meaning;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
yyv_Meaning = yy_0_1;
yy_1_1 = yyv_Meaning;
yyPrint_MEANING(yy_1_1);
yyEndPrint();
return;
yyfl_33_2 : ;
}
yyErr(2,702);
}
