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
Compile(yyin_1)
yy yyin_1;
{
{
yy yyb;
yy yyv_Packages;
yy yy_0_1;
yy yy_1_1;
yy yy_1_2;
yy yy_2_2_1_1;
yy yy_2_2_2_2_1_1;
yy yy_2_2_2_2_2_1;
yy_0_1 = yyin_1;
yyv_Packages = yy_0_1;
yy_1_1 = yyv_Packages;
yy_1_2 = yyv_Packages;
BindPackages(yy_1_1, yy_1_2);
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_3_1_2_1;
goto yysl_3_1_2;
yyfl_3_1_2_1 : ;
yy_2_2_1_1 = yyv_Packages;
CheckPackages(yy_2_2_1_1);
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_3_1_2_2_2_1;
goto yysl_3_1_2_2_2;
yyfl_3_1_2_2_2_1 : ;
yy_2_2_2_2_1_1 = yyv_Packages;
OutputPackages(yy_2_2_2_2_1_1);
yy_2_2_2_2_2_1 = yyv_Packages;
GeneratePackages(yy_2_2_2_2_2_1);
goto yysl_3_1_2_2_2;
yysl_3_1_2_2_2 : ;
yyb = yysb;
}
goto yysl_3_1_2;
yysl_3_1_2 : ;
yyb = yysb;
}
return;
}
}
BindPackages(yyin_1, yyin_2)
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
yy yy_1_1;
yy yy_1_2;
yy yy_2_1;
yy yy_2_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 1) goto yyfl_4_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yyv_Imports = yy_0_2;
yy_1_1 = yyv_Head;
yy_1_2 = yyv_Imports;
Bind(yy_1_1, yy_1_2);
yy_2_1 = yyv_Tail;
yy_2_2 = yyv_Imports;
BindPackages(yy_2_1, yy_2_2);
return;
yyfl_4_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy yy_0_2;
yy_0_1 = yyin_1;
yy_0_2 = yyin_2;
if (yy_0_1[0] != 2) goto yyfl_4_2;
return;
yyfl_4_2 : ;
}
yyErr(2,58);
}
CheckPackages(yyin_1)
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
if (yy_0_1[0] != 1) goto yyfl_5_1;
yy_0_1_1 = ((yy)yy_0_1[1]);
yy_0_1_2 = ((yy)yy_0_1[2]);
yyv_Head = yy_0_1_1;
yyv_Tail = yy_0_1_2;
yy_1_1 = yyv_Head;
Check(yy_1_1);
yy_2_1 = yyv_Tail;
CheckPackages(yy_2_1);
return;
yyfl_5_1 : ;
}
{
yy yyb;
yy yy_0_1;
yy_0_1 = yyin_1;
if (yy_0_1[0] != 2) goto yyfl_5_2;
return;
yyfl_5_2 : ;
}
yyErr(2,67);
}
InitializeCustomInvokeLists()
{
{
yy yyb;
return;
}
}
