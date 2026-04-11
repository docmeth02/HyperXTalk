%{
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
/* start */
/* end */
#include <stdint.h>
typedef struct {intptr_t attr[2];} yyATTRIBUTES;
#define YYSTYPE yyATTRIBUTES
extern YYSTYPE yylval;

%}
%start ROOT_
%token NAME_LITERAL 257
%token INTEGER_LITERAL 258
%token DOUBLE_LITERAL 259
%token STRING_LITERAL 260
%token SEPARATOR 261
%token END_OF_UNIT 262
%token NEXT_UNIT 263
%token yykw_THISCANNEVERHAPPEN 264
%token yytk_DOT 265
%token yykw_false 266
%token yykw_true 267
%token yytk_LBRACKET_RBRACKET 268
%token yykw_nothing 269
%token yykw_String 270
%token yykw_char 271
%token yykw_boolean 272
%token yykw_double 273
%token yykw_float 274
%token yykw_long 275
%token yykw_int 276
%token yykw_short 277
%token yykw_byte 278
%token yykw_super 279
%token yykw_extends 280
%token yytk_QUESTIONM 281
%token yytk_GREATER 282
%token yytk_LESS 283
%token yytk_DOT_DOT_DOT 284
%token yykw_throws 285
%token yykw_returns 286
%token yytk_RPAREN 287
%token yytk_LPAREN 288
%token yykw_named 289
%token yykw_is 290
%token yykw_as 291
%token yykw_transient 292
%token yykw_volatile 293
%token yykw_final 294
%token yykw_abstract 295
%token yykw_strictfp 296
%token yykw_native 297
%token yykw_synchronized 298
%token yykw_protected 299
%token yykw_public 300
%token yykw_constant 301
%token yykw_variable 302
%token yykw_constructor 303
%token yytk_COMMA 304
%token yykw_implements 305
%token yykw_default 306
%token yykw_method 307
%token yykw_inherits 308
%token yykw_interface 309
%token yykw_class 310
%token yykw_use 311
%token yykw_end 312
%token yykw_package 313
%token yykw_foreign 314
%glr-parser
%%
ROOT_:
   Parse

{
yy yyb;
yy yyv_PackageList;
yy yy_1_1;
yy yy_2_2_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_PackageList = yy_1_1;
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_1_1_2_1;
goto yysl_1_1_2;
yyfl_1_1_2_1 : ;
yy_2_2_1_1 = yyv_PackageList;
Compile(yy_2_2_1_1);
goto yysl_1_1_2;
yysl_1_1_2 : ;
yyb = yysb;
}
$$.attr[0] = $1.attr[0];
}
;
Parse:
   PackageList

{
yy yyb;
yy yy_0_1;
yy yyv_Packages;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Packages = yy_1_1;
yy_0_1 = yyv_Packages;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PackageList:
   Package
   Separator
   PackageList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Tail = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Tail;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PackageList:
   Package
   NEXT_UNIT
   PackageList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Tail = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Tail;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PackageList:
   Package

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Package:
   OptionalSeparator
   yykw_foreign
   yykw_package
   PackageId
   Separator
   Definitions
   yykw_end
   yykw_package
   OptionalSeparator
   END_OF_UNIT

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_4;
yy yyv_Name;
yy yy_5_1;
yy yyv_Definitions;
yy yy_7_1;
yy_4 = (yy)($3.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_4;
yyv_Name = yy_5_1;
yyv_Definitions = yy_7_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Definitions;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Package:
   OptionalSeparator
   yykw_foreign
   yykw_package
   PackageId
   Separator
   Definitions
   yykw_end
   yykw_package
   OptionalSeparator

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_4;
yy yyv_Name;
yy yy_5_1;
yy yyv_Definitions;
yy yy_7_1;
yy_4 = (yy)($3.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_4;
yyv_Name = yy_5_1;
yyv_Definitions = yy_7_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Definitions;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Definitions:
   Definition
   Separator
   Definitions

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Tail = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Tail;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Definitions:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
Definition:
   Use

{
yy yyb;
yy yy_0_1;
yy yyv_Use;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Use = yy_1_1;
yy_0_1 = yyv_Use;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Definition:
   Class

{
yy yyb;
yy yy_0_1;
yy yyv_Class;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Class = yy_1_1;
yy_0_1 = yyv_Class;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Definition:
   Interface

{
yy yyb;
yy yy_0_1;
yy yyv_Interface;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Interface = yy_1_1;
yy_0_1 = yyv_Interface;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Use:
   OptionalSeparator
   yykw_use
   QualifiedId
   OptionalSeparator

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_3;
yy yyv_QualifiedId;
yy yy_4_1;
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_3;
yyv_QualifiedId = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_QualifiedId;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Class:
   OptionalSeparator
   ClassModifiers
   yykw_class
   TemplateType
   InheritsClause
   ImplementsClause
   Separator
   ClassDefs
   yykw_end
   yykw_class
   OptionalSeparator

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_Modifiers;
yy yy_2_1;
yy yyv_Position;
yy yy_4;
yy yyv_Type;
yy yy_5_1;
yy yyv_Inherits;
yy yy_6_1;
yy yyv_Implements;
yy yy_7_1;
yy yyv_Definitions;
yy yy_9_1;
yy_2_1 = (yy)($2.attr[1]);
yy_4 = (yy)($3.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yy_9_1 = (yy)($8.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Modifiers = yy_2_1;
yyv_Position = yy_4;
yyv_Type = yy_5_1;
yyv_Inherits = yy_6_1;
yyv_Implements = yy_7_1;
yyv_Definitions = yy_9_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Modifiers;
yy_0_1_3 = yyv_Type;
yy_0_1_4 = yyv_Definitions;
yy_0_1_5 = yyv_Inherits;
yy_0_1_6 = yyv_Implements;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
yy_0_1[6] = ((intptr_t)yy_0_1_6);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $3.attr[0];
}
;
Interface:
   OptionalSeparator
   yykw_interface
   TemplateType
   InterfaceInheritsClause
   Separator
   InterfaceDefs
   yykw_end
   yykw_interface
   OptionalSeparator

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_3;
yy yyv_Type;
yy yy_4_1;
yy yyv_Inherits;
yy yy_5_1;
yy yyv_Definitions;
yy yy_7_1;
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Position = yy_3;
yyv_Type = yy_4_1;
yyv_Inherits = yy_5_1;
yyv_Definitions = yy_7_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Type;
yy_0_1_3 = yyv_Definitions;
yy_0_1_4 = yyv_Inherits;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
InterfaceInheritsClause:
   yykw_inherits
   InterfaceList

{
yy yyb;
yy yy_0_1;
yy yyv_InterfaceList;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_InterfaceList = yy_2_1;
yy_0_1 = yyv_InterfaceList;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InterfaceInheritsClause:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
InterfaceDefs:
   InterfaceDef
   Separator
   InterfaceDefs

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Left;
yy yy_1_1;
yy yyv_Right;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Left = yy_1_1;
yyv_Right = yy_3_1;
yy_0_1_1 = yyv_Left;
yy_0_1_2 = yyv_Right;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InterfaceDefs:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
InterfaceDef:
   InterfaceMethodDef

{
yy yyb;
yy yy_0_1;
yy yyv_InterfaceDef;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_InterfaceDef = yy_1_1;
yy_0_1 = yyv_InterfaceDef;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InterfaceDef:
   ConstantDef

{
yy yyb;
yy yy_0_1;
yy yyv_InterfaceDef;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_InterfaceDef = yy_1_1;
yy_0_1 = yyv_InterfaceDef;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InterfaceMethodDef:
   InterfaceMethodModifier
   yykw_method
   UnqualifiedId
   Parameters
   OptionalUnqualifiedAliasClause
   OptionalThrowsClause
   ReturnsClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_Modifier;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Parameters;
yy yy_5_1;
yy yyv_Alias;
yy yy_6_1;
yy yyv_Throws;
yy yy_7_1;
yy yyv_Returns;
yy yy_8_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yy_8_1 = (yy)($7.attr[1]);
yyb = yyh;
yyh += 12; if (yyh > yyhx) yyExtend();
yyv_Modifier = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Parameters = yy_5_1;
yyv_Alias = yy_6_1;
yyv_Throws = yy_7_1;
yyv_Returns = yy_8_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2_1 = yyv_Modifier;
yy_0_1_2 = yyb + 7;
yy_0_1_2[0] = 5;
yy_0_1_2[1] = ((intptr_t)yy_0_1_2_1);
yy_0_1_3 = yyv_Name;
yy_0_1_4_1 = yyv_Parameters;
yy_0_1_4_2 = yyv_Returns;
yy_0_1_4 = yyb + 9;
yy_0_1_4[0] = 1;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
yy_0_1_5 = yyv_Alias;
yy_0_1_6 = yyv_Throws;
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
yy_0_1[6] = ((intptr_t)yy_0_1_6);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
InterfaceMethodModifier:
   yykw_default

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 16;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InterfaceMethodModifier:
   yykw_class

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InterfaceMethodModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
ClassModifiers:
   AccessModifier
   StrictFPModifier
   InheritanceModifier
   ModifyModifier
   InstanceModifier

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_AccessModifier;
yy yy_1_1;
yy yyv_StrictFPModifier;
yy yy_2_1;
yy yyv_InheritanceModifier;
yy yy_3_1;
yy yyv_ModifyModifier;
yy yy_4_1;
yy yyv_InstanceModifier;
yy yy_5_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2_1 = (yy)($2.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yy_4_1 = (yy)($4.attr[1]);
yy_5_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_AccessModifier = yy_1_1;
yyv_StrictFPModifier = yy_2_1;
yyv_InheritanceModifier = yy_3_1;
yyv_ModifyModifier = yy_4_1;
yyv_InstanceModifier = yy_5_1;
yy_0_1_1 = yyv_AccessModifier;
yy_0_1_2 = yyv_StrictFPModifier;
yy_0_1_3 = yyv_InheritanceModifier;
yy_0_1_4 = yyv_ModifyModifier;
yy_0_1_5 = yyv_InstanceModifier;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ClassDefs:
   ClassDef
   Separator
   ClassDefs

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Left;
yy yy_1_1;
yy yyv_Right;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Left = yy_1_1;
yyv_Right = yy_3_1;
yy_0_1_1 = yyv_Left;
yy_0_1_2 = yyv_Right;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ClassDefs:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
ClassDef:
   ConstructorDef

{
yy yyb;
yy yy_0_1;
yy yyv_Constructor;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Constructor = yy_1_1;
yy_0_1 = yyv_Constructor;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ClassDef:
   ConstantDef

{
yy yyb;
yy yy_0_1;
yy yyv_Constant;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Constant = yy_1_1;
yy_0_1 = yyv_Constant;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ClassDef:
   MethodDef

{
yy yyb;
yy yy_0_1;
yy yyv_Method;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Method = yy_1_1;
yy_0_1 = yyv_Method;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ClassDef:
   VariableDef

{
yy yyb;
yy yy_0_1;
yy yyv_Variable;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Variable = yy_1_1;
yy_0_1 = yyv_Variable;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InheritsClause:
   yykw_inherits
   ClassName

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Type = yy_2_1;
yy_0_1_1 = yyv_Type;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InheritsClause:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
ImplementsClause:
   yykw_implements
   InterfaceList

{
yy yyb;
yy yy_0_1;
yy yyv_Interfaces;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_Interfaces = yy_2_1;
yy_0_1 = yyv_Interfaces;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ImplementsClause:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
InterfaceList:
   ClassName
   yytk_COMMA
   InterfaceList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Tail = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Tail;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
InterfaceList:
   ClassName

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Interface;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Interface = yy_1_1;
yy_0_1_1 = yyv_Interface;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ClassName:
   NamedType

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConstructorDef:
   ConstructorModifiers
   yykw_constructor
   UnqualifiedId
   Parameters
   OptionalUnqualifiedAliasClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_5;
yy yyv_Modifiers;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Parameters;
yy yy_5_1;
yy yyv_Alias;
yy yy_6_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 10; if (yyh > yyhx) yyExtend();
yyv_Modifiers = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Parameters = yy_5_1;
yyv_Alias = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Modifiers;
yy_0_1_3 = yyv_Name;
yy_0_1_4_1 = yyv_Parameters;
yy_0_1_4_2 = yyb + 9;
yy_0_1_4_2[0] = 15;
yy_0_1_4 = yyb + 6;
yy_0_1_4[0] = 1;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
yy_0_1_5 = yyv_Alias;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
ConstructorModifiers:
   AccessModifier

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_AccessModifier;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_AccessModifier = yy_1_1;
yy_0_1_1 = yyv_AccessModifier;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
MethodDef:
   MethodModifiers
   yykw_method
   UnqualifiedId
   Parameters
   OptionalUnqualifiedAliasClause
   OptionalThrowsClause
   ReturnsClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_Modifiers;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Parameters;
yy yy_5_1;
yy yyv_Alias;
yy yy_6_1;
yy yyv_Throws;
yy yy_7_1;
yy yyv_Returns;
yy yy_8_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yy_8_1 = (yy)($7.attr[1]);
yyb = yyh;
yyh += 10; if (yyh > yyhx) yyExtend();
yyv_Modifiers = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Parameters = yy_5_1;
yyv_Alias = yy_6_1;
yyv_Throws = yy_7_1;
yyv_Returns = yy_8_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Modifiers;
yy_0_1_3 = yyv_Name;
yy_0_1_4_1 = yyv_Parameters;
yy_0_1_4_2 = yyv_Returns;
yy_0_1_4 = yyb + 7;
yy_0_1_4[0] = 1;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
yy_0_1_5 = yyv_Alias;
yy_0_1_6 = yyv_Throws;
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
yy_0_1[6] = ((intptr_t)yy_0_1_6);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
MethodModifiers:
   AccessModifier
   SyncModifier
   NativeModifier
   StrictFPModifier
   InheritanceModifier
   InstanceModifier

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_AccessModifier;
yy yy_1_1;
yy yyv_SyncModifier;
yy yy_2_1;
yy yyv_NativeModifier;
yy yy_3_1;
yy yyv_StrictFPModifier;
yy yy_4_1;
yy yyv_InheritanceModifier;
yy yy_5_1;
yy yyv_InstanceModifier;
yy yy_6_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2_1 = (yy)($2.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yy_4_1 = (yy)($4.attr[1]);
yy_5_1 = (yy)($5.attr[1]);
yy_6_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_AccessModifier = yy_1_1;
yyv_SyncModifier = yy_2_1;
yyv_NativeModifier = yy_3_1;
yyv_StrictFPModifier = yy_4_1;
yyv_InheritanceModifier = yy_5_1;
yyv_InstanceModifier = yy_6_1;
yy_0_1_1 = yyv_AccessModifier;
yy_0_1_2 = yyv_SyncModifier;
yy_0_1_3 = yyv_NativeModifier;
yy_0_1_4 = yyv_StrictFPModifier;
yy_0_1_5 = yyv_InheritanceModifier;
yy_0_1_6 = yyv_InstanceModifier;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
yy_0_1[6] = ((intptr_t)yy_0_1_6);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
VariableDef:
   VariableModifiers
   yykw_variable
   UnqualifiedId
   TypeClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Modifiers;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Type;
yy yy_5_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Modifiers = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Type = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Modifiers;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
VariableModifiers:
   AccessModifier
   TransientModifier
   ModifyModifier
   InstanceModifier

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_AccessModifier;
yy yy_1_1;
yy yyv_TransientModifier;
yy yy_2_1;
yy yyv_ModifyModifier;
yy yy_3_1;
yy yyv_InstanceModifier;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2_1 = (yy)($2.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yy_4_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_AccessModifier = yy_1_1;
yyv_TransientModifier = yy_2_1;
yyv_ModifyModifier = yy_3_1;
yyv_InstanceModifier = yy_4_1;
yy_0_1_1 = yyv_AccessModifier;
yy_0_1_2 = yyv_TransientModifier;
yy_0_1_3 = yyv_ModifyModifier;
yy_0_1_4 = yyv_InstanceModifier;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConstantDef:
   yykw_constant
   UnqualifiedId
   TypeClause
   OptionalLiteralClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy yyv_Type;
yy yy_4_1;
yy yyv_Value;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yyv_Type = yy_4_1;
yyv_Value = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Type;
yy_0_1_4 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AccessModifier:
   yykw_public

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AccessModifier:
   yykw_protected

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AccessModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
SyncModifier:
   yykw_synchronized

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyncModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
NativeModifier:
   yykw_native

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
NativeModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
StrictFPModifier:
   yykw_strictfp

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
StrictFPModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
InheritanceModifier:
   yykw_abstract

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 11;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InheritanceModifier:
   yykw_final

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InheritanceModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
InstanceModifier:
   yykw_class

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
InstanceModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
ModifyModifier:
   yykw_final

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ModifyModifier:
   yykw_volatile

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 14;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ModifyModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
TransientModifier:
   yykw_transient

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
TransientModifier:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
TypeClause:
   yykw_as
   Type

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_Type = yy_2_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalTypeClause:
   TypeClause

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalTypeClause:

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_1;
yyGetPos(&yy_1);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
OptionalLiteralClause:
   yykw_is
   ConstantTermExpression

{
yy yyb;
yy yy_0_1;
yy yyv_Value;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_Value = yy_2_1;
yy_0_1 = yyv_Value;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalLiteralClause:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
OptionalUnqualifiedAliasClause:
   yykw_named
   UnqualifiedId

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Alias;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Alias = yy_2_1;
yy_0_1_1 = yyv_Alias;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalUnqualifiedAliasClause:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
QualifiedAliasClause:
   yykw_named
   PackageId

{
yy yyb;
yy yy_0_1;
yy yyv_Alias;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_Alias = yy_2_1;
yy_0_1 = yyv_Alias;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Parameters:
   yytk_LPAREN
   OptionalParameterList
   yytk_RPAREN

{
yy yyb;
yy yy_0_1;
yy yyv_Parameters;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_Parameters = yy_2_1;
yy_0_1 = yyv_Parameters;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ReturnsClause:
   yykw_returns
   Type

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy yyv_Type;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyv_Position = yy_2;
yyv_Type = yy_3_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalThrowsClause:
   yykw_throws
   UnqualifiedId

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yy_0_1_1 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalThrowsClause:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
OptionalReturnsClause:
   yykw_returns
   Type

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy yyv_Type;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyv_Position = yy_2;
yyv_Type = yy_3_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalReturnsClause:

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_1;
yyGetPos(&yy_1);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
OptionalParameterList:
   ParameterList

{
yy yyb;
yy yy_0_1;
yy yyv_List;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_List = yy_1_1;
yy_0_1 = yyv_List;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalParameterList:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
ParameterList:
   Parameter
   yytk_COMMA
   ParameterList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Tail = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Tail;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
ParameterList:
   Parameter

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Parameter:
   UnqualifiedId
   TypeClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Type;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yyv_Type = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Parameter:
   yytk_DOT_DOT_DOT

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
TemplateType:
   UnqualifiedId

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyb + 4;
yy_0_1_3[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
TemplateType:
   GenericType

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
GenericType:
   UnqualifiedId
   yytk_LESS
   GenericTypeList
   yytk_GREATER

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_1;
yy yyv_Name;
yy yy_2_1;
yy yyv_Params;
yy yy_4_1;
yy_1 = (yy)($2.attr[0]);
yy_2_1 = (yy)($1.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yyv_Name = yy_2_1;
yyv_Params = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Params;
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
GenericTypeList:
   GenericTypeListElement
   yytk_COMMA
   GenericTypeList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Tail = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Tail;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
GenericTypeList:
   GenericTypeListElement

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
GenericTypeListElement:
   UnqualifiedId

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_1;
yy yyv_Name;
yy yy_2_1;
yy_1 = (yy)($1.attr[0]);
yy_2_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yyv_Name = yy_2_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
GenericTypeListElement:
   yytk_QUESTIONM
   OptionalBounds

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_1;
yy yyv_Bounds;
yy yy_3_1;
yy_1 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yyv_Bounds = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Bounds;
yy_0_1 = yyb + 0;
yy_0_1[0] = 14;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
GenericTypeListElement:
   GenericType

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalBounds:
   yykw_extends
   NamedType

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Type = yy_2_1;
yy_0_1_1 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalBounds:
   yykw_super
   NamedType

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Type = yy_2_1;
yy_0_1_1 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalBounds:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
Type:
   JavaArray

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   PrimitiveType

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   NamedType

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_byte

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_short

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_int

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_long

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_float

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_double

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_boolean

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_char

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_String

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PrimitiveType:
   yykw_nothing

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
NamedType:
   UnqualifiedId

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyb + 4;
yy_0_1_3[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 11;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
NamedType:
   UnqualifiedId
   yytk_LESS
   NamedTypeList
   yytk_GREATER

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Parameter;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yyv_Parameter = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Parameter;
yy_0_1 = yyb + 0;
yy_0_1[0] = 11;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
NamedTypeList:
   NamedTypeListElement
   yytk_COMMA
   NamedTypeList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Named;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Named = yy_1_1;
yyv_Tail = yy_3_1;
yy_0_1_1 = yyv_Named;
yy_0_1_2 = yyv_Tail;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
NamedTypeList:
   NamedTypeListElement

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Named;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Named = yy_1_1;
yy_0_1_1 = yyv_Named;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
NamedTypeListElement:
   yytk_QUESTIONM
   OptionalBounds

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_1;
yy yyv_Bounds;
yy yy_3_1;
yy_1 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yyv_Bounds = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Bounds;
yy_0_1 = yyb + 0;
yy_0_1[0] = 14;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
NamedTypeListElement:
   NamedType

{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
JavaArray:
   PrimitiveType
   yytk_LBRACKET_RBRACKET

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Type;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Type = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Type;
yy_0_1_3 = ((yy)1);
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
JavaArray:
   NamedType
   yytk_LBRACKET_RBRACKET

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Type;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Type = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Type;
yy_0_1_3 = ((yy)1);
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
JavaArray:
   JavaArray
   yytk_LBRACKET_RBRACKET

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_3_1;
yy yy_0_1_3_2;
yy yy_1_1;
yy yyv_Position;
yy yy_1_1_1;
yy yyv_Type;
yy yy_1_1_2;
yy yyv_Dimension;
yy yy_1_1_3;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
if (yy_1_1[0] != 10) goto yyfl_62_3;
yy_1_1_1 = ((yy)yy_1_1[1]);
yy_1_1_2 = ((yy)yy_1_1[2]);
yy_1_1_3 = ((yy)yy_1_1[3]);
yyv_Position = yy_1_1_1;
yyv_Type = yy_1_1_2;
yyv_Dimension = yy_1_1_3;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Type;
yy_0_1_3_1 = yyv_Dimension;
yy_0_1_3_2 = ((yy)1);
yy_0_1_3 = (yy)(((intptr_t)yy_0_1_3_1)+((intptr_t)yy_0_1_3_2));
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
goto yyfl_62_3_A;
yyfl_62_3 : ;
yyErr(3,603);
yyfl_62_3_A : ;
}
;
ConstantTermExpression:
   yykw_true

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConstantTermExpression:
   yykw_false

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConstantTermExpression:
   DOUBLE_LITERAL

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Value = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConstantTermExpression:
   INTEGER_LITERAL

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Value = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConstantTermExpression:
   StringLiteral

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Value = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PackageId:
   IdentifierSequence

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_1;
yy yyv_Name;
yy yy_2_1;
yy yyv_Id;
yy yy_4;
yy yy_5;
yy yy_6;
yy_1 = (yy)($1.attr[0]);
yy_2_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yyv_Name = yy_2_1;
yyv_Id = yyb + 0;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_4 = yyv_Position;
yyv_Id[1] = (intptr_t) yy_4;
yy_5 = yyv_Name;
yyv_Id[2] = (intptr_t) yy_5;
yy_6 = yyb + 4;
yy_6[0] = 5;
yyv_Id[3] = (intptr_t) yy_6;
yy_0_1 = yyv_Id;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
QualifiedId:
   NAME_LITERAL
   yytk_DOT
   IdentifierSequence
   yytk_DOT
   NAME_LITERAL

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_1;
yy yyv_Head;
yy yy_2_1;
yy yyv_Tail;
yy yy_4_1;
yy yyv_Name;
yy yy_6_1;
yy yyv_Id;
yy yy_8;
yy yy_9;
yy yy_9_1;
yy yy_9_2;
yy yy_9_2_1;
yy yy_9_2_2;
yy yy_10;
yy_1 = (yy)($2.attr[0]);
yy_2_1 = (yy)($1.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 11; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yyv_Head = yy_2_1;
yyv_Tail = yy_4_1;
yyv_Name = yy_6_1;
yyv_Id = yyb + 0;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_8 = yyv_Position;
yyv_Id[1] = (intptr_t) yy_8;
yy_9_1 = yyv_Name;
yy_9_2_1 = yyv_Head;
yy_9_2_2 = yyv_Tail;
yy_9_2 = yyb + 7;
yy_9_2[0] = 1;
yy_9_2[1] = ((intptr_t)yy_9_2_1);
yy_9_2[2] = ((intptr_t)yy_9_2_2);
yy_9 = yyb + 4;
yy_9[0] = 2;
yy_9[1] = ((intptr_t)yy_9_1);
yy_9[2] = ((intptr_t)yy_9_2);
yyv_Id[2] = (intptr_t) yy_9;
yy_10 = yyb + 10;
yy_10[0] = 5;
yyv_Id[3] = (intptr_t) yy_10;
yy_0_1 = yyv_Id;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
UnqualifiedId:
   NAME_LITERAL

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_1;
yy yyv_Name;
yy yy_2_1;
yy yyv_Id;
yy yy_4;
yy yy_5;
yy yy_5_1;
yy yy_6;
yy_1 = (yy)($1.attr[0]);
yy_2_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yyv_Name = yy_2_1;
yyv_Id = yyb + 0;
yyb[3] = yyu;
yyb[2] = yyu;
yyb[1] = yyu;
yy_4 = yyv_Position;
yyv_Id[1] = (intptr_t) yy_4;
yy_5_1 = yyv_Name;
yy_5 = yyb + 4;
yy_5[0] = 3;
yy_5[1] = ((intptr_t)yy_5_1);
yyv_Id[2] = (intptr_t) yy_5;
yy_6 = yyb + 6;
yy_6[0] = 5;
yyv_Id[3] = (intptr_t) yy_6;
yy_0_1 = yyv_Id;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
IdentifierSequence:
   NAME_LITERAL
   yytk_DOT
   IdentifierSequence

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Tail = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Tail;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
IdentifierSequence:
   NAME_LITERAL

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yy_0_1_1 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalSeparator:
   Separator

{
yy yyb;
$$.attr[0] = $1.attr[0];
}
;
OptionalSeparator:

{
yy yyb;
yyGetPos(&$$.attr[0]);
}
;
Separator:
   SEPARATOR
   Separator

{
yy yyb;
$$.attr[0] = $1.attr[0];
}
;
Separator:
   SEPARATOR

{
yy yyb;
$$.attr[0] = $1.attr[0];
}
;
StringLiteral:
   STRING_LITERAL

{
yy yyb;
yy yy_0_1;
yy yyv_EscapedValue;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1_1_1;
yy yy_3_1_1_2;
yy yyv_Value;
yy yy_3_1_1_3;
yy yy_3_2_1_1;
yy yy_3_2_1_2;
yy yy_3_2_2_1;
yy yy_3_2_2_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyv_EscapedValue = yy_1_1;
yyv_Position = yy_2;
{
yy yysb = yyb;
yy_3_1_1_1 = yyv_Position;
yy_3_1_1_2 = yyv_EscapedValue;
if (! UnescapeStringLiteral(yy_3_1_1_1, yy_3_1_1_2, &yy_3_1_1_3)) goto yyfl_70_1_3_1;
yyv_Value = yy_3_1_1_3;
goto yysl_70_1_3;
yyfl_70_1_3_1 : ;
yy_3_2_1_1 = yyv_Position;
yy_3_2_1_2 = yyv_EscapedValue;
Error_MalformedEscapedString(yy_3_2_1_1, yy_3_2_1_2);
yy_3_2_2_1 = yyv_EscapedValue;
yy_3_2_2_2 = yy_3_2_2_1;
yyv_Value = yy_3_2_2_2;
goto yysl_70_1_3;
yysl_70_1_3 : ;
yyb = yysb;
}
yy_0_1 = yyv_Value;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
StringOrNameLiteral:
   StringLiteral

{
yy yyb;
yy yy_0_1;
yy yyv_String;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_String = yy_1_1;
yy_0_1 = yyv_String;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
StringOrNameLiteral:
   NAME_LITERAL

{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_1_1;
yy yy_2_1;
yy yyv_String;
yy yy_2_2;
yy_1_1 = (yy)($1.attr[1]);
yyv_Name = yy_1_1;
yy_2_1 = yyv_Name;
GetStringOfNameLiteral(yy_2_1, &yy_2_2);
yyv_String = yy_2_2;
yy_0_1 = yyv_String;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
CustomPostfixOperators:
   yykw_THISCANNEVERHAPPEN

{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
CustomPrefixOperators:
   yykw_THISCANNEVERHAPPEN

{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
CustomBinaryOperators:
   yykw_THISCANNEVERHAPPEN

{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
CustomTerms:
   yykw_THISCANNEVERHAPPEN

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
CustomIterators:
   yykw_THISCANNEVERHAPPEN

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
CustomKeywords:
   yykw_THISCANNEVERHAPPEN

{
yy yyb;
yy yy_0_1;
yy yy_2_1;
yy yyv_String;
yy yy_2_2;
yy_2_1 = ((yy)"THISCANNEVERHAPPEN");
yy_2_2 = yy_2_1;
yyv_String = yy_2_2;
yy_0_1 = yyv_String;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
