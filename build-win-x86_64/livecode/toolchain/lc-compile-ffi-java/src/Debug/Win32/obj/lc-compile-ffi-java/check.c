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
Check(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Package;
yy yy_0_1;
yy yy_1_1;
yy_0_1 = yyin_1;
yyv_Package = yy_0_1;
yy_1_1 = yyv_Package;
{
extern CheckBindings();
yybroadcast_PACKAGE(yy_1_1, 0, &yynull, CheckBindings);
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
/*=== Sweep DEFINITION ===*/
if (yytp == (intptr_t) yybroadcast_DEFINITION) {
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Type;
yy yy_0_1_3;
yy yyv_Value;
yy yy_0_1_4;
yy yy_1_1_1_1;
yy yy_1_1_1_2;
yy yy_1_2_1_1;
yy yy_1_3_1_1;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 8) goto yyfl_2_10001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Type = yy_0_1_3;
yyv_Value = yy_0_1_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Value;
yy_1_1_1_2 = yy_1_1_1_1;
if (yy_1_1_1_2[0] != 6) goto yyfl_2_10001_1_1;
goto yysl_2_10001_1;
yyfl_2_10001_1_1 : ;
yy_1_2_1_1 = yyv_Value;
if (! IsExpressionSimpleConstant(yy_1_2_1_1)) goto yyfl_2_10001_1_2;
goto yysl_2_10001_1;
yyfl_2_10001_1_2 : ;
yy_1_3_1_1 = yyv_Position;
Error_ConstantsMustBeSimple(yy_1_3_1_1);
goto yysl_2_10001_1;
yysl_2_10001_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Type;
{
extern CheckBindings();
yybroadcast_TYPE(yy_2_1, 0, &yynull, CheckBindings);
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
yy yyv_Definitions;
yy yy_0_1_4;
yy yyv_Inherits;
yy yy_0_1_5;
yy yyv_Implements;
yy yy_0_1_6;
yy yy_1_1_1_1;
yy yy_1_2_1_1;
yy yy_2_1_1_1;
yy yy_2_2_1_1;
yy yy_3_1;
yy yy_4_1;
yy yy_5_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_2_10002;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yy_0_1_5 = ((yy)yy_0_1[5]);
yy_0_1_6 = ((yy)yy_0_1[6]);
yyv_Position = yy_0_1_1;
yyv_Definitions = yy_0_1_4;
yyv_Inherits = yy_0_1_5;
yyv_Implements = yy_0_1_6;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Inherits;
if (! CheckBindingIsClass(yy_1_1_1_1)) goto yyfl_2_10002_1_1;
goto yysl_2_10002_1;
yyfl_2_10002_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_ClassesMayOnlyInheritFromClasses(yy_1_2_1_1);
goto yysl_2_10002_1;
yysl_2_10002_1 : ;
yyb = yysb;
}
{
yy yysb = yyb;
yy_2_1_1_1 = yyv_Implements;
if (! CheckBindingIsInterface(yy_2_1_1_1)) goto yyfl_2_10002_2_1;
goto yysl_2_10002_2;
yyfl_2_10002_2_1 : ;
yy_2_2_1_1 = yyv_Position;
Error_ClassesMayOnlyImplementInterfaces(yy_2_2_1_1);
goto yysl_2_10002_2;
yysl_2_10002_2 : ;
yyb = yysb;
}
yy_3_1 = yyv_Inherits;
{
extern CheckBindings();
yybroadcast_TYPELIST(yy_3_1, 0, &yynull, CheckBindings);
}
yy_4_1 = yyv_Implements;
{
extern CheckBindings();
yybroadcast_TYPELIST(yy_4_1, 0, &yynull, CheckBindings);
}
yy_5_1 = yyv_Definitions;
{
extern CheckBindings();
yybroadcast_DEFINITION(yy_5_1, 0, &yynull, CheckBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_10002 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Definitions;
yy yy_0_1_3;
yy yyv_Inherits;
yy yy_0_1_4;
yy yy_1_1_1_1;
yy yy_1_2_1_1;
yy yy_2_1;
yy yy_3_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_2_10003;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yy_0_1_4 = ((yy)yy_0_1[4]);
yyv_Position = yy_0_1_1;
yyv_Definitions = yy_0_1_3;
yyv_Inherits = yy_0_1_4;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Inherits;
if (! CheckBindingIsInterface(yy_1_1_1_1)) goto yyfl_2_10003_1_1;
goto yysl_2_10003_1;
yyfl_2_10003_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_InterfacesMayOnlyInheritFromInterfaces(yy_1_2_1_1);
goto yysl_2_10003_1;
yysl_2_10003_1 : ;
yyb = yysb;
}
yy_2_1 = yyv_Inherits;
{
extern CheckBindings();
yybroadcast_TYPELIST(yy_2_1, 0, &yynull, CheckBindings);
}
yy_3_1 = yyv_Definitions;
{
extern CheckBindings();
yybroadcast_DEFINITION(yy_3_1, 0, &yynull, CheckBindings);
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_10003 : ;
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
yy yyv_Id;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_0_1_3;
yy yy_1_1_1_1;
yy yyv_Info;
yy yy_1_1_1_2;
yy yyv_Type;
yy yy_1_1_2;
yy yy_1_1_3_1_1_1;
yy yy_1_1_3_1_1_2;
yy yy_1_1_3_2_1_1;
yy yy_1_1_3_2_1_1_1;
yy yy_1_1_3_2_1_1_2;
yy yy_1_1_3_2_1_1_3;
yy yy_1_1_3_2_1_2;
yy yy_1_2_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 11) goto yyfl_2_20001;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Position = yy_0_1_1;
yyv_Id = yy_0_1_2;
yyv_Parameters = yy_0_1_3;
{
yy yysb = yyb;
yy_1_1_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1_1_1, &yy_1_1_1_2)) goto yyfl_2_20001_1_1;
yyv_Info = yy_1_1_1_2;
yy_1_1_2 = (yy) yyv_Info[6];
if (yy_1_1_2 == (yy) yyu) yyErr(1,84);
yyv_Type = yy_1_1_2;
{
yy yysb = yyb;
yy_1_1_3_1_1_1 = yyv_Type;
yy_1_1_3_1_1_2 = yy_1_1_3_1_1_1;
if (yy_1_1_3_1_1_2[0] != 15) goto yyfl_2_20001_1_1_3_1;
goto yysl_2_20001_1_1_3;
yyfl_2_20001_1_1_3_1 : ;
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yy_1_1_3_2_1_1_1 = yyv_Position;
yy_1_1_3_2_1_1_2 = yyv_Id;
yy_1_1_3_2_1_1_3 = yyv_Parameters;
yy_1_1_3_2_1_1 = yyb + 0;
yy_1_1_3_2_1_1[0] = 11;
yy_1_1_3_2_1_1[1] = ((intptr_t)yy_1_1_3_2_1_1_1);
yy_1_1_3_2_1_1[2] = ((intptr_t)yy_1_1_3_2_1_1_2);
yy_1_1_3_2_1_1[3] = ((intptr_t)yy_1_1_3_2_1_1_3);
yy_1_1_3_2_1_2 = yyv_Type;
if (! CheckParameterMatches(yy_1_1_3_2_1_1, yy_1_1_3_2_1_2)) goto yyfl_2_20001_1_1_3_2;
goto yysl_2_20001_1_1_3;
yyfl_2_20001_1_1_3_2 : ;
goto yyfl_2_20001_1_1;
yysl_2_20001_1_1_3 : ;
yyb = yysb;
}
goto yysl_2_20001_1;
yyfl_2_20001_1_1 : ;
yy_1_2_1_1 = yyv_Position;
Error_GenericTypeMismatch(yy_1_2_1_1);
goto yysl_2_20001_1;
yysl_2_20001_1 : ;
yyb = yysb;
}
*yyout_1 = yyin_2;
return 1;
yyfl_2_20001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
int CheckParametersMatch(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_3_1;
if (yy_0_2[0] != 2) goto yyfl_3_1;
return 1;
yyfl_3_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_LeftHead;
yy yy_0_1_1;
yy yyv_LeftTail;
yy yy_0_1_2;
yy yy_0_2;
yy yyv_RightHead;
yy yy_0_2_1;
yy yyv_RightTail;
yy yy_0_2_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_3_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_LeftHead = yy_0_1_1;
yyv_LeftTail = yy_0_1_2;
if (yy_0_2[0] != 1) goto yyfl_3_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yyv_RightHead = yy_0_2_1;
yyv_RightTail = yy_0_2_2;
yy_1_1 = yyv_LeftHead;
yy_1_2 = yyv_RightHead;
if (! CheckParameterMatches(yy_1_1, yy_1_2)) goto yyfl_3_2;
yy_2_1 = yyv_LeftTail;
yy_2_2 = yyv_RightTail;
if (! CheckParametersMatch(yy_2_1, yy_2_2)) goto yyfl_3_2;
return 1;
yyfl_3_2 : ;
}
return 0;
}
int CheckParameterMatches(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 15) goto yyfl_4_1;
if (yy_0_2[0] != 15) goto yyfl_4_1;
return 1;
yyfl_4_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_LeftId;
yy yy_0_1_2;
yy yyv_LeftParameters;
yy yy_0_1_3;
yy yy_0_2;
yy yy_0_2_1;
yy yyv_RightId;
yy yy_0_2_2;
yy yyv_RightParameters;
yy yy_0_2_3;
yy yy_1_1;
yy yyv_LeftInfo;
yy yy_1_2;
yy yyv_LeftIndex;
yy yy_2;
yy yy_3_1;
yy yyv_RightInfo;
yy yy_3_2;
yy yyv_RightIndex;
yy yy_4;
yy yy_5_1;
yy yy_5_2;
yy yy_6_1;
yy yy_6_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 11) goto yyfl_4_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_LeftId = yy_0_1_2;
yyv_LeftParameters = yy_0_1_3;
if (yy_0_2[0] != 12) goto yyfl_4_2;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
yyv_RightId = yy_0_2_2;
yyv_RightParameters = yy_0_2_3;
yy_1_1 = yyv_LeftId;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_4_2;
yyv_LeftInfo = yy_1_2;
yy_2 = (yy) yyv_LeftInfo[1];
if (yy_2 == (yy) yyu) yyErr(1,108);
yyv_LeftIndex = yy_2;
yy_3_1 = yyv_RightId;
if (! QuerySymbolId(yy_3_1, &yy_3_2)) goto yyfl_4_2;
yyv_RightInfo = yy_3_2;
yy_4 = (yy) yyv_RightInfo[1];
if (yy_4 == (yy) yyu) yyErr(1,110);
yyv_RightIndex = yy_4;
yy_5_1 = yyv_LeftIndex;
yy_5_2 = yyv_RightIndex;
if ((intptr_t)yy_5_1 != (intptr_t)yy_5_2) goto yyfl_4_2;
yy_6_1 = yyv_LeftParameters;
yy_6_2 = yyv_RightParameters;
if (! CheckParametersMatch(yy_6_1, yy_6_2)) goto yyfl_4_2;
return 1;
yyfl_4_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 11) goto yyfl_4_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
if (yy_0_2[0] != 13) goto yyfl_4_3;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return 1;
yyfl_4_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 13) goto yyfl_4_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_2[0] != 13) goto yyfl_4_4;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return 1;
yyfl_4_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy yy_0_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 14) goto yyfl_4_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_2[0] != 12) goto yyfl_4_5;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
yy_0_2_3 = ((yy)yy_0_2[3]);
return 1;
yyfl_4_5 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_2;
yy yy_0_2_1;
yy yy_0_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 14) goto yyfl_4_6;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
if (yy_0_2[0] != 13) goto yyfl_4_6;
yy_0_2_1 = ((yy)yy_0_2[1]);
yy_0_2_2 = ((yy)yy_0_2[2]);
return 1;
yyfl_4_6 : ;
}
return 0;
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
if (yy_0_1[0] != 6) goto yyfl_5_10001;
*yyout_1 = yyin_2;
return 1;
yyfl_5_10001 : ;
}
return 0;
}
/*===*/
else return 0;
}
}
int CheckBindingIsClass(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_6_1;
return 1;
yyfl_6_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_6_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Head;
yy_1_2 = yyb + 0;
yy_1_2[0] = 7;
if (! CheckNamedTypeIsOfKind(yy_1_1, yy_1_2)) goto yyfl_6_2;
yy_2_1 = yyv_Tail;
if (! CheckBindingIsClass(yy_2_1)) goto yyfl_6_2;
return 1;
yyfl_6_2 : ;
}
return 0;
}
int CheckBindingIsInterface(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_7_1;
return 1;
yyfl_7_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yyv_Head;
yy yy_0_1_1;
yy yyv_Tail;
yy yy_0_1_2;
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_7_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_1_1 = yyv_Head;
yy_1_2 = yyb + 0;
yy_1_2[0] = 8;
if (! CheckNamedTypeIsOfKind(yy_1_1, yy_1_2)) goto yyfl_7_2;
yy_2_1 = yyv_Tail;
if (! CheckBindingIsInterface(yy_2_1)) goto yyfl_7_2;
return 1;
yyfl_7_2 : ;
}
return 0;
}
int CheckNamedTypeIsOfKind(yyin_1, yyin_2)
yy yyin_1;
yy yyin_2;
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
yy yy_1_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 11) goto yyfl_8_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yy_1_1 = yyv_Id;
QueryId(yy_1_1, &yy_1_2);
if (yy_1_2[0] != 4) goto yyfl_8_1;
return 1;
yyfl_8_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Id;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Symbol;
yy yy_0_2;
yy yy_1_1;
yy yyv_SymbolKind;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 11) goto yyfl_8_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yy_0_1_3 = ((yy)yy_0_1[3]);
yyv_Id = yy_0_1_2;
yyv_Symbol = yy_0_2;
yy_1_1 = yyv_Id;
if (! QueryKindOfSymbolId(yy_1_1, &yy_1_2)) goto yyfl_8_2;
yyv_SymbolKind = yy_1_2;
yy_2_1 = yyv_Symbol;
yy_2_2 = yyv_SymbolKind;
if (! yyeq_SYMBOLKIND(yy_2_1, yy_2_2)) goto yyfl_8_2;
return 1;
yyfl_8_2 : ;
}
return 0;
}
int IsExpressionSimpleConstant(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 1) goto yyfl_9_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_9_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_9_2;
yy_0_1_1 = ((yy)yy_0_1[1]);
return 1;
yyfl_9_2 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 3) goto yyfl_9_3;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_9_3 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 4) goto yyfl_9_4;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_9_4 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 5) goto yyfl_9_5;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
return 1;
yyfl_9_5 : ;
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
if (yy_2_2[0] != 3) goto yyfl_10_1;
yy_2_2_1 = ((yy)yy_2_2[1]);
yyv_Info = yy_2_2_1;
yy_3 = (yy) yyv_Info[5];
if (yy_3 == (yy) yyu) yyErr(1,174);
yyv_Kind = yy_3;
yy_0_2 = yyv_Kind;
*yyout_1 = yy_0_2;
return 1;
yyfl_10_1 : ;
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
if (yy_1 == (yy) yyu) yyErr(1,179);
if (yy_1[0] != 1) goto yyfl_11_1;
yy_1_1 = ((yy)yy_1[1]);
yyv_DefId = yy_1_1;
yy_2 = (yy) yyv_DefId[3];
if (yy_2 == (yy) yyu) yyErr(1,180);
yyv_Meaning = yy_2;
yy_0_2 = yyv_Meaning;
*yyout_1 = yy_0_2;
return;
yyfl_11_1 : ;
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
if (yy_1 == (yy) yyu) yyErr(1,183);
yyv_Meaning = yy_1;
yy_0_2 = yyv_Meaning;
*yyout_1 = yy_0_2;
return;
yyfl_11_2 : ;
}
yyErr(2,176);
}
QueryPackageOfId(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yyv_Info;
yy yy_1_2;
yy yyv_PackageId;
yy yy_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_12_1;
yyv_Info = yy_1_2;
yy_2 = (yy) yyv_Info[3];
if (yy_2 == (yy) yyu) yyErr(1,189);
yyv_PackageId = yy_2;
yy_0_2 = yyv_PackageId;
*yyout_1 = yy_0_2;
return;
yyfl_12_1 : ;
}
yyErr(2,185);
}
int QuerySymbolId(yyin_1, yyout_1)
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
if (yy_1_2[0] != 3) goto yyfl_13_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yyv_Info = yy_1_2_1;
yy_0_2 = yyv_Info;
*yyout_1 = yy_0_2;
return 1;
yyfl_13_1 : ;
}
return 0;
}
int QueryPackageId(yyin_1, yyout_1)
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
if (yy_1_2[0] != 2) goto yyfl_14_1;
yy_1_2_1 = ((yy)yy_1_2[1]);
yyv_Info = yy_1_2_1;
yy_0_2 = yyv_Info;
*yyout_1 = yy_0_2;
return 1;
yyfl_14_1 : ;
}
return 0;
}
ResolveIdName(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yyv_QualifiedName;
yy yy_1;
yy yy_2_1;
yy yyv_Name;
yy yy_2_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,204);
yyv_QualifiedName = yy_1;
yy_2_1 = yyv_QualifiedName;
GetUnqualifiedIdName(yy_2_1, &yy_2_2);
yyv_Name = yy_2_2;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
}
}
ResolveIdQualifiedName(yyin_1, yyout_1)
yy yyin_1;
yy *yyout_1;
{
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yy_1_1;
yy yyv_SymbolInfo;
yy yy_1_2;
yy yyv_QualifiedName;
yy yy_2;
yy yyv_ParentId;
yy yy_3;
yy yy_4_1;
yy yy_4_2;
yy yyv_Name;
yy yy_4_3;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1_1 = yyv_Id;
if (! QuerySymbolId(yy_1_1, &yy_1_2)) goto yyfl_16_1;
yyv_SymbolInfo = yy_1_2;
yy_2 = (yy) yyv_Id[2];
if (yy_2 == (yy) yyu) yyErr(1,211);
yyv_QualifiedName = yy_2;
yy_3 = (yy) yyv_SymbolInfo[3];
if (yy_3 == (yy) yyu) yyErr(1,212);
yyv_ParentId = yy_3;
yy_4_1 = yyv_ParentId;
yy_4_2 = yyv_QualifiedName;
GetQualifiedName(yy_4_1, yy_4_2, &yy_4_3);
yyv_Name = yy_4_3;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_16_1 : ;
}
{
yy yyb;
yy yyv_Id;
yy yy_0_1;
yy yy_0_2;
yy yyv_QName;
yy yy_1;
yy yyv_Name;
yy yy_2;
yy_0_1 = yyin_1;
yyv_Id = yy_0_1;
yy_1 = (yy) yyv_Id[2];
if (yy_1 == (yy) yyu) yyErr(1,216);
yyv_QName = yy_1;
yy_2 = (yy) yyv_QName[1];
if (yy_2 == (yy) yyu) yyErr(1,217);
yyv_Name = yy_2;
yy_0_2 = yyv_Name;
*yyout_1 = yy_0_2;
return;
yyfl_16_2 : ;
}
yyErr(2,207);
}
GetQualifiedName(yyin_1, yyin_2, yyout_1)
yy yyin_1;
yy yyin_2;
yy *yyout_1;
{
{
yy yyb;
yy yyv_ParentId;
yy yy_0_1;
yy yy_0_2;
yy yyv_UnqName;
yy yy_0_2_1;
yy yy_0_3;
yy yy_1_1;
yy yyv_ParentName;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy yyv_Name;
yy yy_2_3;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
yyv_ParentId = yy_0_1;
if (yy_0_2[0] != 3) goto yyfl_17_1;
yy_0_2_1 = ((yy)yy_0_2[1]);
yyv_UnqName = yy_0_2_1;
yy_1_1 = yyv_ParentId;
ResolveIdName(yy_1_1, &yy_1_2);
yyv_ParentName = yy_1_2;
yy_2_1 = yyv_ParentName;
yy_2_2 = yyv_UnqName;
ConcatenateNameParts(yy_2_1, yy_2_2, &yy_2_3);
yyv_Name = yy_2_3;
yy_0_3 = yyv_Name;
*yyout_1 = yy_0_3;
return;
yyfl_17_1 : ;
}
yyErr(2,220);
}
