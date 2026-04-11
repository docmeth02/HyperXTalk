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
%token yykw_input 265
%token yykw_output 266
%token yytk_PLUS 267
%token yytk_MINUS 268
%token yytk_EQUAL 269
%token yytk_GREATER 270
%token yytk_LESS 271
%token yytk_EXCLAM 272
%token yytk_BAR 273
%token yykw_false 274
%token yykw_true 275
%token yytk_RBRACE 276
%token yytk_LBRACE 277
%token yytk_RBRACKET 278
%token yytk_LBRACKET 279
%token yykw_result 280
%token yykw_the 281
%token yykw_and 282
%token yykw_or 283
%token yykw_register 284
%token yytk_COLON 285
%token yykw_by 286
%token yykw_else 287
%token yykw_bytecode 288
%token yykw_into 289
%token yykw_put 290
%token yykw_return 291
%token yykw_exit 292
%token yykw_next 293
%token yykw_throw 294
%token yykw_each 295
%token yykw_for 296
%token yykw_down 297
%token yykw_up 298
%token yykw_from 299
%token yykw_until 300
%token yykw_while 301
%token yykw_times 302
%token yykw_forever 303
%token yykw_repeat 304
%token yykw_then 305
%token yykw_if 306
%token yykw_of 307
%token yykw_nothing 308
%token yykw_List 309
%token yykw_Array 310
%token yykw_Data 311
%token yykw_String 312
%token yykw_Number 313
%token yykw_Real 314
%token yykw_Integer 315
%token yykw_Boolean 316
%token yykw_any 317
%token yykw_optional 318
%token yykw_sequence 319
%token yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK 320
%token yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK 321
%token yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK 322
%token yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK 323
%token yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK 324
%token yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK 325
%token yykw_classification 326
%token yykw_comparison 327
%token yykw_concatenation 328
%token yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK 329
%token yykw_addition 330
%token yykw_multiplication 331
%token yykw_modifier 332
%token yykw_exponentiation 333
%token yykw_conversion 334
%token yykw_constructor 335
%token yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK 336
%token yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK 337
%token yykw_subscript 338
%token yykw_call 339
%token yykw_function 340
%token yykw_resolution 341
%token yykw_scope 342
%token yykw_right 343
%token yykw_left 344
%token yykw_neutral 345
%token yykw_phrase 346
%token yykw_binary 347
%token yykw_postfix 348
%token yykw_precedence 349
%token yykw_operator 350
%token yykw_prefix 351
%token yykw_iterator 352
%token yykw_expression 353
%token yykw_statement 354
%token yykw_message 355
%token yykw_with 356
%token yykw_deprecate 357
%token yykw_begin 358
%token yykw_syntax 359
%token yykw_event 360
%token yykw_set 361
%token yykw_get 362
%token yykw_property 363
%token yykw_inout 364
%token yykw_out 365
%token yykw_in 366
%token yytk_DOT_DOT_DOT 367
%token yytk_COMMA 368
%token yykw_returns 369
%token yytk_RPAREN 370
%token yytk_LPAREN 371
%token yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK 372
%token yykw_on 373
%token yykw_based 374
%token yykw_enum 375
%token yykw_to 376
%token yykw_binds 377
%token yykw_private 378
%token yykw_protected 379
%token yykw_public 380
%token yykw_use 381
%token yykw_metadata 382
%token yykw_unsafe 383
%token yykw_as 384
%token yykw_variable 385
%token yykw_constant 386
%token yykw_is 387
%token yykw_record 388
%token yykw_handler 389
%token yykw_type 390
%token yykw_foreign 391
%token yykw_import 392
%token yykw_library 393
%token yykw_widget 394
%token yykw_end 395
%token yykw_module 396
%glr-parser
%%
ROOT_:
   Parse

{
yy yyb;
yy yyv_Modules;
yy yy_1_1;
yy yy_2_2_3_1;
yy yy_2_2_4_1;
yy yy_2_3_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Modules = yy_1_1;
{
yy yysb = yyb;
if (! ErrorsDidOccur()) goto yyfl_1_1_2_1;
goto yysl_1_1_2;
yyfl_1_1_2_1 : ;
if (! IsDependencyCompile()) goto yyfl_1_1_2_2;
DependStart();
yy_2_2_3_1 = yyv_Modules;
Depend_GenerateMapping(yy_2_2_3_1);
yy_2_2_4_1 = yyv_Modules;
Depend_GenerateDependencies(yy_2_2_4_1);
DependFinish();
goto yysl_1_1_2;
yyfl_1_1_2_2 : ;
yy_2_3_1_1 = yyv_Modules;
Compile(yy_2_3_1_1);
goto yysl_1_1_2;
yysl_1_1_2 : ;
yyb = yysb;
}
$$.attr[0] = $1.attr[0];
}
;
Parse:
   ModuleList

{
yy yyb;
yy yy_0_1;
yy yyv_Modules;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Modules = yy_1_1;
yy_0_1 = yyv_Modules;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ModuleList:
   Module
   NEXT_UNIT
   ModuleList

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
ModuleList:
   Module

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
Module:
   OptionalSeparator
   yykw_module
   QualifiedId
   Separator
   Definitions
   yykw_end
   yykw_module
   OptionalSeparator
   END_OF_UNIT

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Definitions;
yy yy_6_1;
yy yy_11_1;
yy yyv_NameName;
yy yy_11_2;
yy yy_12_1;
yy yyv_NameString;
yy yy_12_2;
yy yy_13_1;
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Definitions = yy_6_1;
yy_11_1 = yyv_Name;
GetQualifiedName(yy_11_1, &yy_11_2);
yyv_NameName = yy_11_2;
yy_12_1 = yyv_NameName;
GetStringOfNameLiteral(yy_12_1, &yy_12_2);
yyv_NameString = yy_12_2;
yy_13_1 = yyv_NameString;
AddImportedModuleName(yy_13_1);
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Definitions;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Module:
   OptionalSeparator
   yykw_widget
   QualifiedId
   Separator
   Definitions
   yykw_end
   yykw_widget
   OptionalSeparator
   END_OF_UNIT

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Definitions;
yy yy_6_1;
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Definitions = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 4;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Definitions;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Module:
   OptionalSeparator
   yykw_library
   QualifiedId
   Separator
   Definitions
   yykw_end
   yykw_library
   OptionalSeparator
   END_OF_UNIT

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Definitions;
yy yy_6_1;
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Definitions = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 3;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Definitions;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Module:
   OptionalSeparator
   yykw_import
   yykw_module
   QualifiedId
   Separator
   ImportDefinitions
   yykw_end
   yykw_module
   OptionalSeparator
   END_OF_UNIT

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
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
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Position = yy_4;
yyv_Name = yy_5_1;
yyv_Definitions = yy_7_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 1;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Definitions;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
ImportDefinitions:
   ImportDefinition
   Separator
   ImportDefinitions

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
ImportDefinitions:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
ImportDefinition:
   Import

{
yy yyb;
yy yy_0_1;
yy yyv_Import;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Import = yy_1_1;
yy_0_1 = yyv_Import;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ImportDefinition:
   yykw_foreign
   yykw_type
   Identifier

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yyv_Position;
yy yy_2;
yy yyv_Id;
yy yy_4_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Id = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = ((yy)"");
yy_0_1_4 = yyb + 6;
yy_0_1_4[0] = 4;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
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
ImportDefinition:
   yykw_handler
   yykw_type
   Identifier
   Signature

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_4_3;
yy yyv_Position;
yy yy_2;
yy yyv_Id;
yy yy_4_1;
yy yyv_Signature;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 11; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Id = yy_4_1;
yyv_Signature = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = yyb + 10;
yy_0_1_4_2[0] = 1;
yy_0_1_4_3 = yyv_Signature;
yy_0_1_4 = yyb + 6;
yy_0_1_4[0] = 8;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
yy_0_1_4[3] = ((intptr_t)yy_0_1_4_3);
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
ImportDefinition:
   yykw_foreign
   yykw_handler
   yykw_type
   Identifier
   Signature

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_4_3;
yy yyv_Position;
yy yy_2;
yy yyv_Id;
yy yy_5_1;
yy yyv_Signature;
yy yy_6_1;
yy_2 = (yy)($1.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 11; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Id = yy_5_1;
yyv_Signature = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = yyb + 10;
yy_0_1_4_2[0] = 2;
yy_0_1_4_3 = yyv_Signature;
yy_0_1_4 = yyb + 6;
yy_0_1_4[0] = 8;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
yy_0_1_4[3] = ((intptr_t)yy_0_1_4_3);
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
ImportDefinition:
   yykw_record
   yykw_type
   Identifier
   Separator
   RecordFields
   yykw_end
   yykw_type

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yyv_Position;
yy yy_2;
yy yyv_Id;
yy yy_4_1;
yy yyv_Fields;
yy yy_6_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Id = yy_4_1;
yyv_Fields = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = yyv_Fields;
yy_0_1_4 = yyb + 6;
yy_0_1_4[0] = 6;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
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
ImportDefinition:
   yykw_type
   Identifier
   yykw_is
   Type

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_2;
yy yyv_Id;
yy yy_3_1;
yy yyv_Type;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Id = yy_3_1;
yyv_Type = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4 = yyv_Type;
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
ImportDefinition:
   yykw_constant
   Identifier

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_2;
yy yyv_Id;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Id = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4 = yyb + 6;
yy_0_1_4[0] = 18;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ImportDefinition:
   yykw_variable
   Identifier
   yykw_as
   Type

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_2;
yy yyv_Id;
yy yy_3_1;
yy yyv_Type;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Id = yy_3_1;
yyv_Type = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ImportDefinition:
   yykw_handler
   Identifier
   Signature

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_Position;
yy yy_2;
yy yyv_Id;
yy yy_3_1;
yy yyv_Signature;
yy yy_4_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 10; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Id = yy_3_1;
yyv_Signature = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 7;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4 = yyv_Signature;
yy_0_1_5 = yyb + 8;
yy_0_1_5[0] = 13;
yy_0_1_6 = yyb + 9;
yy_0_1_6[0] = 22;
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
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
ImportDefinition:
   yykw_unsafe
   yykw_handler
   Identifier
   Signature

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yy_0_1_2_2;
yy yy_0_1_2_3;
yy yy_0_1_2_4;
yy yy_0_1_2_5;
yy yy_0_1_2_6;
yy yyv_Position;
yy yy_3;
yy yyv_Id;
yy yy_4_1;
yy yyv_Signature;
yy yy_5_1;
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 13; if (yyh > yyhx) yyExtend();
yyv_Position = yy_3;
yyv_Id = yy_4_1;
yyv_Signature = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2_1 = yyv_Position;
yy_0_1_2_2 = yyb + 10;
yy_0_1_2_2[0] = 2;
yy_0_1_2_3 = yyv_Id;
yy_0_1_2_4 = yyv_Signature;
yy_0_1_2_5 = yyb + 11;
yy_0_1_2_5[0] = 13;
yy_0_1_2_6 = yyb + 12;
yy_0_1_2_6[0] = 22;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 7;
yy_0_1_2[1] = ((intptr_t)yy_0_1_2_1);
yy_0_1_2[2] = ((intptr_t)yy_0_1_2_2);
yy_0_1_2[3] = ((intptr_t)yy_0_1_2_3);
yy_0_1_2[4] = ((intptr_t)yy_0_1_2_4);
yy_0_1_2[5] = ((intptr_t)yy_0_1_2_5);
yy_0_1_2[6] = ((intptr_t)yy_0_1_2_6);
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ImportDefinition:
   yykw_foreign
   yykw_handler
   Identifier
   Signature

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Position;
yy yy_3;
yy yyv_Id;
yy yy_4_1;
yy yyv_Signature;
yy yy_5_1;
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Position = yy_3;
yyv_Id = yy_4_1;
yyv_Signature = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 6;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Id;
yy_0_1_4 = yyv_Signature;
yy_0_1_5 = ((yy)"");
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Metadata:
   yykw_metadata
   StringOrNameLiteral
   yykw_is
   StringLiteral

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Key;
yy yy_3_1;
yy yyv_Value;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Key = yy_3_1;
yyv_Value = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Key;
yy_0_1_3 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Import:
   yykw_use
   IdentifierList

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy yyv_Identifiers;
yy yy_3_1;
yy yy_4_1;
yy yy_4_2;
yy yyv_ImportList;
yy yy_4_3;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyv_Position = yy_2;
yyv_Identifiers = yy_3_1;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifiers;
ExpandImports(yy_4_1, yy_4_2, &yy_4_3);
yyv_ImportList = yy_4_3;
yy_0_1 = yyv_ImportList;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
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
yy_0_1[0] = 13;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
Definition:
   Metadata

{
yy yyb;
yy yy_0_1;
yy yyv_Metadata;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Metadata = yy_1_1;
yy_0_1 = yyv_Metadata;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Definition:
   Import

{
yy yyb;
yy yy_0_1;
yy yyv_Import;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Import = yy_1_1;
yy_0_1 = yyv_Import;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Definition:
   ConstantDefinition

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
Definition:
   TypeDefinition

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
Definition:
   VariableDefinition

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
Definition:
   HandlerDefinition

{
yy yyb;
yy yy_0_1;
yy yyv_Handler;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Handler = yy_1_1;
yy_0_1 = yyv_Handler;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Definition:
   PropertyDefinition

{
yy yyb;
yy yy_0_1;
yy yyv_Property;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Property = yy_1_1;
yy_0_1 = yyv_Property;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Definition:
   EventDefinition

{
yy yyb;
yy yy_0_1;
yy yyv_Event;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Event = yy_1_1;
yy_0_1 = yyv_Event;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Definition:
   SyntaxDefinition

{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Syntax = yy_1_1;
yy_0_1 = yyv_Syntax;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConstantDefinition:
   Access
   yykw_constant
   Identifier
   yykw_is
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Value;
yy yy_6_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Value = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Access:

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
Access:
   yykw_public

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Access:
   yykw_protected

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Access:
   yykw_private

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
VariableDefinition:
   Access
   yykw_variable
   Identifier
   OptionalTypeClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Access;
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
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Type = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
OptionalTypeClause:
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
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
TypeDefinition:
   Access
   yykw_type
   Identifier
   yykw_is
   Type

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Type;
yy yy_6_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Type = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Type;
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
TypeDefinition:
   Access
   yykw_foreign
   yykw_type
   Identifier
   yykw_binds
   yykw_to
   StringLiteral

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_5_1;
yy yyv_Binding;
yy yy_8_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_8_1 = (yy)($7.attr[1]);
yyb = yyh;
yyh += 8; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_5_1;
yyv_Binding = yy_8_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = yyv_Binding;
yy_0_1_4 = yyb + 5;
yy_0_1_4[0] = 4;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
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
TypeDefinition:
   Access
   yykw_record
   yykw_type
   Identifier
   Separator
   RecordFields
   yykw_end
   yykw_type

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_5_1;
yy yyv_Fields;
yy yy_7_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 8; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_5_1;
yyv_Fields = yy_7_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = yyv_Fields;
yy_0_1_4 = yyb + 5;
yy_0_1_4[0] = 6;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
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
TypeDefinition:
   Access
   yykw_enum
   yykw_type
   Identifier
   OptionalBaseType
   Separator
   EnumFields
   yykw_end
   yykw_type

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_4_3;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_5_1;
yy yyv_Base;
yy yy_6_1;
yy yyv_Fields;
yy yy_8_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_8_1 = (yy)($7.attr[1]);
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_5_1;
yyv_Base = yy_6_1;
yyv_Fields = yy_8_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = yyv_Base;
yy_0_1_4_3 = yyv_Fields;
yy_0_1_4 = yyb + 5;
yy_0_1_4[0] = 7;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
yy_0_1_4[3] = ((intptr_t)yy_0_1_4_3);
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
TypeDefinition:
   Access
   yykw_handler
   yykw_type
   Identifier
   Signature

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_4_3;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_5_1;
yy yyv_Signature;
yy yy_6_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 10; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_5_1;
yyv_Signature = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = yyb + 9;
yy_0_1_4_2[0] = 1;
yy_0_1_4_3 = yyv_Signature;
yy_0_1_4 = yyb + 5;
yy_0_1_4[0] = 8;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
yy_0_1_4[3] = ((intptr_t)yy_0_1_4_3);
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
TypeDefinition:
   Access
   yykw_foreign
   yykw_handler
   yykw_type
   Identifier
   Signature

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_4_1;
yy yy_0_1_4_2;
yy yy_0_1_4_3;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_6_1;
yy yyv_Signature;
yy yy_7_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_6_1 = (yy)($5.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 10; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_6_1;
yyv_Signature = yy_7_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4_1 = yyv_Position;
yy_0_1_4_2 = yyb + 9;
yy_0_1_4_2[0] = 2;
yy_0_1_4_3 = yyv_Signature;
yy_0_1_4 = yyb + 5;
yy_0_1_4[0] = 8;
yy_0_1_4[1] = ((intptr_t)yy_0_1_4_1);
yy_0_1_4[2] = ((intptr_t)yy_0_1_4_2);
yy_0_1_4[3] = ((intptr_t)yy_0_1_4_3);
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
OptionalBaseType:
   yykw_based
   yykw_on
   Type

{
yy yyb;
yy yy_0_1;
yy yyv_BaseType;
yy yy_3_1;
yy_3_1 = (yy)($3.attr[1]);
yyv_BaseType = yy_3_1;
yy_0_1 = yyv_BaseType;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalBaseType:

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_1;
yyGetPos(&yy_1);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_1;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
TypeFields:
   TypeField
   Separator
   TypeFields

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Rest;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Rest = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Rest;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
TypeFields:

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
TypeField:
   Identifier
   yykw_is
   Identifier

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
yy yyv_Handler;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yyv_Handler = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Handler;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
RecordFields:
   RecordField
   Separator
   RecordFields

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Rest;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Rest = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Rest;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
RecordFields:

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
RecordField:
   Identifier
   OptionalTypeClause

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
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
RecordField:
   StringyIdentifier
   OptionalTypeClause

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
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
EnumFields:
   EnumField
   Separator
   EnumFields

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Rest;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Head = yy_1_1;
yyv_Rest = yy_3_1;
yy_0_1_1 = yyv_Head;
yy_0_1_2 = yyv_Rest;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
EnumFields:

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
EnumField:
   Identifier

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
HandlerDefinition:
   Access
   yykw_handler
   Identifier
   Signature
   Separator
   Statements
   yykw_end
   yykw_handler

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Name;
yy yy_4_1;
yy yyv_Signature;
yy yy_5_1;
yy yyv_Body;
yy yy_7_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 8; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_3;
yyv_Name = yy_4_1;
yyv_Signature = yy_5_1;
yyv_Body = yy_7_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Signature;
yy_0_1_5 = yyb + 7;
yy_0_1_5[0] = 13;
yy_0_1_6 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
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
HandlerDefinition:
   Access
   yykw_unsafe
   yykw_handler
   Identifier
   Signature
   Separator
   Statements
   yykw_end
   yykw_handler

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yy_0_1_2_2;
yy yy_0_1_2_3;
yy yy_0_1_2_4;
yy yy_0_1_2_5;
yy yy_0_1_2_6;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_4;
yy yyv_Name;
yy yy_5_1;
yy yyv_Signature;
yy yy_6_1;
yy yyv_Body;
yy yy_8_1;
yy_1_1 = (yy)($1.attr[1]);
yy_4 = (yy)($3.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_8_1 = (yy)($7.attr[1]);
yyb = yyh;
yyh += 11; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_4;
yyv_Name = yy_5_1;
yyv_Signature = yy_6_1;
yyv_Body = yy_8_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2_1 = yyv_Position;
yy_0_1_2_2 = yyv_Access;
yy_0_1_2_3 = yyv_Name;
yy_0_1_2_4 = yyv_Signature;
yy_0_1_2_5 = yyb + 10;
yy_0_1_2_5[0] = 13;
yy_0_1_2_6 = yyv_Body;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 7;
yy_0_1_2[1] = ((intptr_t)yy_0_1_2_1);
yy_0_1_2[2] = ((intptr_t)yy_0_1_2_2);
yy_0_1_2[3] = ((intptr_t)yy_0_1_2_3);
yy_0_1_2[4] = ((intptr_t)yy_0_1_2_4);
yy_0_1_2[5] = ((intptr_t)yy_0_1_2_5);
yy_0_1_2[6] = ((intptr_t)yy_0_1_2_6);
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
HandlerDefinition:
   Access
   yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK
   yykw_foreign
   yykw_handler
   Identifier
   Signature
   yykw_binds
   yykw_to
   StringLiteral

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_5;
yy yyv_Name;
yy yy_6_1;
yy yyv_Signature;
yy yy_7_1;
yy yyv_Binding;
yy yy_10_1;
yy_1_1 = (yy)($1.attr[1]);
yy_5 = (yy)($4.attr[0]);
yy_6_1 = (yy)($5.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yy_10_1 = (yy)($9.attr[1]);
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_5;
yyv_Name = yy_6_1;
yyv_Signature = yy_7_1;
yyv_Binding = yy_10_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Access;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Signature;
yy_0_1_5 = yyv_Binding;
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
HandlerDefinition:
   Access
   yykw_foreign
   yykw_handler
   Identifier
   Signature
   yykw_binds
   yykw_to
   StringLiteral

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_2_1;
yy yy_0_1_2_2;
yy yy_0_1_2_3;
yy yy_0_1_2_4;
yy yy_0_1_2_5;
yy yyv_Access;
yy yy_1_1;
yy yyv_Position;
yy yy_4;
yy yyv_Name;
yy yy_5_1;
yy yyv_Signature;
yy yy_6_1;
yy yyv_Binding;
yy yy_9_1;
yy_1_1 = (yy)($1.attr[1]);
yy_4 = (yy)($3.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_9_1 = (yy)($8.attr[1]);
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yyv_Access = yy_1_1;
yyv_Position = yy_4;
yyv_Name = yy_5_1;
yyv_Signature = yy_6_1;
yyv_Binding = yy_9_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2_1 = yyv_Position;
yy_0_1_2_2 = yyv_Access;
yy_0_1_2_3 = yyv_Name;
yy_0_1_2_4 = yyv_Signature;
yy_0_1_2_5 = yyv_Binding;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 8;
yy_0_1_2[1] = ((intptr_t)yy_0_1_2_1);
yy_0_1_2[2] = ((intptr_t)yy_0_1_2_2);
yy_0_1_2[3] = ((intptr_t)yy_0_1_2_3);
yy_0_1_2[4] = ((intptr_t)yy_0_1_2_4);
yy_0_1_2[5] = ((intptr_t)yy_0_1_2_5);
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Signature:
   yytk_LPAREN
   OptionalParameterList
   yytk_RPAREN
   OptionalReturnsClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_2_1;
yy yyv_Result;
yy yy_4_1;
yy_2_1 = (yy)($2.attr[1]);
yy_4_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Parameters = yy_2_1;
yyv_Result = yy_4_1;
yy_0_1_1 = yyv_Parameters;
yy_0_1_2 = yyv_Result;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
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
yy_0_1[0] = 17;
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
   Mode
   Identifier
   OptionalTypeClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Mode;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy yyv_Type;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Mode = yy_1_1;
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yyv_Type = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Mode;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Parameter:
   Identifier
   OptionalTypeClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
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
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yyv_Type = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
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
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yyv_Identifier;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yyv_Name;
yy yy_4_4;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 8; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_3_1 = ((yy)"");
MakeNameLiteral(yy_3_1, &yy_3_2);
yyv_Identifier = yy_3_2;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifier;
yy_4_3 = yyb + 7;
yy_4_3[0] = 2;
AssignId(yy_4_1, yy_4_2, yy_4_3, &yy_4_4);
yyv_Name = yy_4_4;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 5;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyb + 6;
yy_0_1_4[0] = 17;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Mode:
   yykw_in

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Mode:
   yykw_out

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Mode:
   yykw_inout

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PropertyDefinition:
   yykw_property
   Identifier
   yykw_get
   Identifier
   OptionalSetClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy yyv_Getter;
yy yy_5_1;
yy yyv_Setter;
yy yy_6_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yyv_Getter = yy_5_1;
yyv_Setter = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 6;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Getter;
yy_0_1_5 = yyv_Setter;
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
PropertyDefinition:
   yykw_property
   StringyIdentifier
   yykw_get
   Identifier
   OptionalSetClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy yyv_Getter;
yy yy_5_1;
yy yyv_Setter;
yy yy_6_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yyv_Getter = yy_5_1;
yyv_Setter = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 6;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Getter;
yy_0_1_5 = yyv_Setter;
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalSetClause:
   yykw_set
   Identifier

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Setter;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Setter = yy_2_1;
yy_0_1_1 = yyv_Setter;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalSetClause:

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
EventDefinition:
   yykw_event
   Identifier
   Signature

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
yy yyv_Signature;
yy yy_4_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 6; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yyv_Signature = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 5;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Signature;
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxDefinition:
   yykw_syntax
   Identifier
   SyntaxClass
   Separator
   SyntaxWarnings
   Syntax
   Separator
   yykw_begin
   Separator
   SyntaxMethods
   yykw_end
   yykw_syntax

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yy_0_1_7;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy yyv_Class;
yy yy_4_1;
yy yyv_Warnings;
yy yy_6_1;
yy yyv_Syntax;
yy yy_7_1;
yy yyv_Methods;
yy yy_11_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yy_11_1 = (yy)($10.attr[1]);
yyb = yyh;
yyh += 9; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yyv_Class = yy_4_1;
yyv_Warnings = yy_6_1;
yyv_Syntax = yy_7_1;
yyv_Methods = yy_11_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 8;
yy_0_1_2[0] = 2;
yy_0_1_3 = yyv_Name;
yy_0_1_4 = yyv_Class;
yy_0_1_5 = yyv_Warnings;
yy_0_1_6 = yyv_Syntax;
yy_0_1_7 = yyv_Methods;
yy_0_1 = yyb + 0;
yy_0_1[0] = 11;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
yy_0_1[5] = ((intptr_t)yy_0_1_5);
yy_0_1[6] = ((intptr_t)yy_0_1_6);
yy_0_1[7] = ((intptr_t)yy_0_1_7);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxWarnings:
   yykw_deprecate
   yykw_with
   yykw_message
   StringLiteral
   Separator

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Message;
yy yy_4_1;
yy_4_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Message = yy_4_1;
yy_0_1_1 = yyv_Message;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxWarnings:

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
SyntaxClass:
   yykw_is
   yykw_statement

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxClass:
   yykw_is
   yykw_expression

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxClass:
   yykw_is
   yykw_iterator

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxClass:
   yykw_is
   yykw_prefix
   yykw_operator
   yykw_with
   SyntaxPrecedence
   yykw_precedence

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Precedence;
yy yy_5_1;
yy_5_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Precedence = yy_5_1;
yy_0_1_1 = yyv_Precedence;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxClass:
   yykw_is
   yykw_postfix
   yykw_operator
   yykw_with
   SyntaxPrecedence
   yykw_precedence

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Precedence;
yy yy_5_1;
yy_5_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Precedence = yy_5_1;
yy_0_1_1 = yyv_Precedence;
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxClass:
   yykw_is
   SyntaxAssoc
   yykw_binary
   yykw_operator
   yykw_with
   SyntaxPrecedence
   yykw_precedence

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Assoc;
yy yy_2_1;
yy yyv_Precedence;
yy yy_6_1;
yy_2_1 = (yy)($2.attr[1]);
yy_6_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Assoc = yy_2_1;
yyv_Precedence = yy_6_1;
yy_0_1_1 = yyv_Assoc;
yy_0_1_2 = yyv_Precedence;
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxClass:
   yykw_is
   yykw_phrase

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxAssoc:
   yykw_neutral

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxAssoc:
   yykw_left

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxAssoc:
   yykw_right

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yykw_scope
   yykw_resolution

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yykw_function
   yykw_call

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yykw_subscript

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yykw_property

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK

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
SyntaxPrecedence:
   yykw_constructor

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yykw_conversion

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
SyntaxPrecedence:
   yykw_exponentiation

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
SyntaxPrecedence:
   yykw_modifier

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
SyntaxPrecedence:
   yykw_multiplication

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
SyntaxPrecedence:
   yykw_addition

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
SyntaxPrecedence:
   yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK

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
SyntaxPrecedence:
   yykw_concatenation

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
SyntaxPrecedence:
   yykw_comparison

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 18;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yykw_classification

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 19;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK

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
SyntaxPrecedence:
   yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK

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
SyntaxPrecedence:
   yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK

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
SyntaxPrecedence:
   yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 20;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 21;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 22;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxPrecedence:
   yykw_sequence

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 23;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
SyntaxMethods:
   SyntaxMethod
   Separator
   SyntaxMethods

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
SyntaxMethods:

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
SyntaxMethod:
   Identifier
   yytk_LPAREN
   OptionalConstantList
   yytk_RPAREN

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
yy yyv_Arguments;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yyv_Arguments = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Arguments;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Type:
   QualifiedId

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   yykw_optional
   Type

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Base;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Base = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Base;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   yykw_any

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
Type:
   yykw_Boolean

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
Type:
   yykw_Integer

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
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   yykw_Real

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
yy_0_1[0] = 11;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   yykw_Number

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
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
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
yy_0_1[0] = 13;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   yykw_Data

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
yy_0_1[0] = 14;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   yykw_Array

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
yy_0_1[0] = 15;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   yykw_List
   OptionalElementType

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_ElementType;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_ElementType = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_ElementType;
yy_0_1 = yyb + 0;
yy_0_1[0] = 16;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Type:
   yykw_nothing

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
OptionalElementType:
   yykw_of
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
OptionalElementType:

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
yy_0_1[0] = 17;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
Statements:
   Statement
   Separator
   Statements

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
Statements:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 22;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
Statement:
   yykw_variable
   Identifier
   OptionalTypeClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy yyv_Type;
yy yy_4_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yyv_Type = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_if
   Expression
   yykw_then
   Separator
   Statements
   IfStatementElseIfs
   yykw_end
   yykw_if

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_2;
yy yyv_Condition;
yy yy_3_1;
yy yyv_Consequent;
yy yy_6_1;
yy yyv_Alternate;
yy yy_7_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Condition = yy_3_1;
yyv_Consequent = yy_6_1;
yyv_Alternate = yy_7_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Condition;
yy_0_1_3 = yyv_Consequent;
yy_0_1_4 = yyv_Alternate;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_repeat
   yykw_forever
   Separator
   Statements
   yykw_end
   yykw_repeat

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Body;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Body = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_repeat
   Expression
   yykw_times
   Separator
   Statements
   yykw_end
   yykw_repeat

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Count;
yy yy_3_1;
yy yyv_Body;
yy yy_6_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Count = yy_3_1;
yyv_Body = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Count;
yy_0_1_3 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_repeat
   yykw_while
   Expression
   Separator
   Statements
   yykw_end
   yykw_repeat

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Condition;
yy yy_4_1;
yy yyv_Body;
yy yy_6_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Condition = yy_4_1;
yyv_Body = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Condition;
yy_0_1_3 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_repeat
   yykw_until
   Expression
   Separator
   Statements
   yykw_end
   yykw_repeat

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Condition;
yy yy_4_1;
yy yyv_Body;
yy yy_6_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Condition = yy_4_1;
yyv_Body = yy_6_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Condition;
yy_0_1_3 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_repeat
   yykw_with
   Identifier
   yykw_from
   Expression
   yykw_up
   yykw_to
   Expression
   RepeatStatementOptionalBy
   Separator
   Statements
   yykw_end
   yykw_repeat

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_Position;
yy yy_2;
yy yyv_Slot;
yy yy_4_1;
yy yyv_Start;
yy yy_6_1;
yy yyv_Finish;
yy yy_9_1;
yy yyv_Step;
yy yy_10_1;
yy yyv_Body;
yy yy_12_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_9_1 = (yy)($8.attr[1]);
yy_10_1 = (yy)($9.attr[1]);
yy_12_1 = (yy)($11.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Slot = yy_4_1;
yyv_Start = yy_6_1;
yyv_Finish = yy_9_1;
yyv_Step = yy_10_1;
yyv_Body = yy_12_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Slot;
yy_0_1_3 = yyv_Start;
yy_0_1_4 = yyv_Finish;
yy_0_1_5 = yyv_Step;
yy_0_1_6 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
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
Statement:
   yykw_repeat
   yykw_with
   Identifier
   yykw_from
   Expression
   yykw_down
   yykw_to
   Expression
   RepeatStatementOptionalBy
   Separator
   Statements
   yykw_end
   yykw_repeat

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yy_0_1_5;
yy yy_0_1_6;
yy yyv_Position;
yy yy_2;
yy yyv_Slot;
yy yy_4_1;
yy yyv_Start;
yy yy_6_1;
yy yyv_Finish;
yy yy_9_1;
yy yyv_Step;
yy yy_10_1;
yy yyv_Body;
yy yy_12_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_6_1 = (yy)($5.attr[1]);
yy_9_1 = (yy)($8.attr[1]);
yy_10_1 = (yy)($9.attr[1]);
yy_12_1 = (yy)($11.attr[1]);
yyb = yyh;
yyh += 7; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Slot = yy_4_1;
yyv_Start = yy_6_1;
yyv_Finish = yy_9_1;
yyv_Step = yy_10_1;
yyv_Body = yy_12_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Slot;
yy_0_1_3 = yyv_Start;
yy_0_1_4 = yyv_Finish;
yy_0_1_5 = yyv_Step;
yy_0_1_6 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
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
Statement:
   yykw_repeat
   yykw_for
   yykw_each
   CustomIterators
   yykw_in
   Expression
   Separator
   Statements
   yykw_end
   yykw_repeat

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_2;
yy yyv_Iterator;
yy yy_5_1;
yy yyv_Container;
yy yy_7_1;
yy yyv_Body;
yy yy_9_1;
yy_2 = (yy)($1.attr[0]);
yy_5_1 = (yy)($4.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yy_9_1 = (yy)($8.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Iterator = yy_5_1;
yyv_Container = yy_7_1;
yyv_Body = yy_9_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Iterator;
yy_0_1_3 = yyv_Container;
yy_0_1_4 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_throw
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Value;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Value = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 18;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_next
   yykw_repeat

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
yy_0_1[0] = 11;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_exit
   yykw_repeat

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
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_return

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyb + 3;
yy_0_1_2[0] = 18;
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_return
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Value;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Value = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_put
   Expression
   yykw_into
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Source;
yy yy_3_1;
yy yyv_Target;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Source = yy_3_1;
yyv_Target = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Source;
yy_0_1_3 = yyv_Target;
yy_0_1 = yyb + 0;
yy_0_1[0] = 14;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_set
   Expression
   yykw_to
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Target;
yy yy_3_1;
yy yyv_Source;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Target = yy_3_1;
yyv_Source = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Source;
yy_0_1_3 = yyv_Target;
yy_0_1 = yyb + 0;
yy_0_1[0] = 14;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_get
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Value;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Value = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   QualifiedId
   yytk_LPAREN
   OptionalExpressionList
   yytk_RPAREN

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Handler;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Arguments;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Handler = yy_1_1;
yyv_Position = yy_2;
yyv_Arguments = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Handler;
yy_0_1_3 = yyv_Arguments;
yy_0_1 = yyb + 0;
yy_0_1[0] = 16;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Statement:
   yykw_bytecode
   Separator
   Bytecodes
   yykw_end
   yykw_bytecode

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Opcodes;
yy yy_4_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Opcodes = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Opcodes;
yy_0_1 = yyb + 0;
yy_0_1[0] = 20;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   yykw_unsafe
   Separator
   Statements
   yykw_end
   yykw_unsafe

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Body;
yy yy_4_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Body = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Body;
yy_0_1 = yyb + 0;
yy_0_1[0] = 21;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Statement:
   CustomStatements
   yykw_into
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Statement;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Target;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Statement = yy_1_1;
yyv_Position = yy_3;
yyv_Target = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Statement;
yy_0_1_3 = yyv_Target;
yy_0_1 = yyb + 0;
yy_0_1[0] = 19;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Statement:
   CustomStatements

{
yy yyb;
yy yy_0_1;
yy yyv_Statement;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Statement = yy_1_1;
yy_0_1 = yyv_Statement;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
IfStatementElseIfs:
   yykw_else
   yykw_if
   Expression
   yykw_then
   Separator
   Statements
   IfStatementElseIfs

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yy_0_1_4;
yy yyv_Position;
yy yy_2;
yy yyv_Condition;
yy yy_4_1;
yy yyv_Consequent;
yy yy_7_1;
yy yyv_Alternate;
yy yy_8_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yy_7_1 = (yy)($6.attr[1]);
yy_8_1 = (yy)($7.attr[1]);
yyb = yyh;
yyh += 5; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Condition = yy_4_1;
yyv_Consequent = yy_7_1;
yyv_Alternate = yy_8_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Condition;
yy_0_1_3 = yyv_Consequent;
yy_0_1_4 = yyv_Alternate;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
yy_0_1[4] = ((intptr_t)yy_0_1_4);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
IfStatementElseIfs:
   yykw_else
   Separator
   Statements

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy yyv_Else;
yy yy_4_1;
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyv_Position = yy_2;
yyv_Else = yy_4_1;
yy_0_1 = yyv_Else;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
IfStatementElseIfs:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 22;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
RepeatStatementOptionalBy:
   yykw_by
   Expression

{
yy yyb;
yy yy_0_1;
yy yyv_By;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_By = yy_2_1;
yy_0_1 = yyv_By;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
RepeatStatementOptionalBy:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 18;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
Bytecodes:
   Bytecode
   Separator
   Bytecodes

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
Bytecodes:

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
Bytecode:
   Identifier
   yytk_COLON

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Bytecode:
   yykw_register
   Identifier
   OptionalTypeClause

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy yyv_Type;
yy yy_4_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yyv_Type = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1_3 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Bytecode:
   NAME_LITERAL
   OptionalExpressionList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Opcode;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Arguments;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Opcode = yy_1_1;
yyv_Position = yy_2;
yyv_Arguments = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Opcode;
yy_0_1_3 = yyv_Arguments;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Bytecode:
   CustomKeywords
   OptionalExpressionList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_OpcodeString;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Arguments;
yy yy_3_1;
yy yy_4_1;
yy yyv_Opcode;
yy yy_4_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_OpcodeString = yy_1_1;
yyv_Position = yy_2;
yyv_Arguments = yy_3_1;
yy_4_1 = yyv_OpcodeString;
MakeNameLiteral(yy_4_1, &yy_4_2);
yyv_Opcode = yy_4_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Opcode;
yy_0_1_3 = yyv_Arguments;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Expression:
   Expression
   yykw_or
   AndExpression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Left;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Right;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Left = yy_1_1;
yyv_Position = yy_3;
yyv_Right = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Left;
yy_0_1_3 = yyv_Right;
yy_0_1 = yyb + 0;
yy_0_1[0] = 11;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Expression:
   AndExpression

{
yy yyb;
yy yy_0_1;
yy yyv_Expr;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Expr = yy_1_1;
yy_0_1 = yyv_Expr;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AndExpression:
   AndExpression
   yykw_and
   NormalExpression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Left;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Right;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Left = yy_1_1;
yyv_Position = yy_3;
yyv_Right = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Left;
yy_0_1_3 = yyv_Right;
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
AndExpression:
   NormalExpression

{
yy yyb;
yy yy_0_1;
yy yyv_Result;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Result = yy_1_1;
yy_0_1 = yyv_Result;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
NormalExpression:
   FlatExpression

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy yy_2_1;
yy yyv_Result;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Sentinal = yy_1_1;
yy_2_1 = yyv_Sentinal;
ReorderOperatorExpression(yy_2_1);
ProcessOperatorExpression(&yy_3_1);
yyv_Result = yy_3_1;
yy_0_1 = yyv_Result;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpression:
   FlatExpressionTerm
   FlatExpressionBinaryOperator
   FlatExpression

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2_1 = (yy)($2.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpression:
   FlatExpressionTerm

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpressionTerm:
   FlatExpressionPrefixOperators
   FlatExpressionOperand
   FlatExpressionPostfixOperators

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal1;
yy yy_1_1;
yy yyv_Sentinal2;
yy yy_2_1;
yy yy_3_1;
yy yy_4_1;
yy yy_4_2;
yy yyv_Sentinal;
yy yy_4_3;
yy_1_1 = (yy)($1.attr[1]);
yy_2_1 = (yy)($2.attr[1]);
yy_3_1 = (yy)($3.attr[1]);
yyv_Sentinal1 = yy_1_1;
yyv_Sentinal2 = yy_2_1;
yy_4_1 = yyv_Sentinal1;
yy_4_2 = yyv_Sentinal2;
min(yy_4_1, yy_4_2, &yy_4_3);
yyv_Sentinal = yy_4_3;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpressionPrefixOperators:
   FlatExpressionPrefixOperator
   FlatExpressionPrefixOperators

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy yy_2_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2_1 = (yy)($2.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpressionPrefixOperators:

{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
FlatExpressionPostfixOperators:
   FlatExpressionPostfixOperator
   FlatExpressionPostfixOperators

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy yy_2_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2_1 = (yy)($2.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpressionPostfixOperators:

{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
$$.attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&$$.attr[0]);
}
;
FlatExpressionPrefixOperator:
   CustomPrefixOperators

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpressionPostfixOperator:
   CustomPostfixOperators

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpressionBinaryOperator:
   CustomBinaryOperators

{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpressionOperand:
   TermExpression

{
yy yyb;
yy yy_0_1;
yy yyv_Term;
yy yy_1_1;
yy yy_2_1;
yy yyv_Sentinal;
yy yy_2_2;
yy_1_1 = (yy)($1.attr[1]);
yyv_Term = yy_1_1;
yy_2_1 = yyv_Term;
PushOperatorExpressionOperand(yy_2_1, &yy_2_2);
yyv_Sentinal = yy_2_2;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
FlatExpressionOperand:
   CustomTerms

{
yy yyb;
yy yy_0_1;
yy yyv_Term;
yy yy_1_1;
yy yy_2_1;
yy yyv_Sentinal;
yy yy_2_2;
yy_1_1 = (yy)($1.attr[1]);
yyv_Term = yy_1_1;
yy_2_1 = yyv_Term;
PushOperatorExpressionOperand(yy_2_1, &yy_2_2);
yyv_Sentinal = yy_2_2;
yy_0_1 = yyv_Sentinal;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
TermExpression:
   ConstantTermExpression

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
TermExpression:
   QualifiedId

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
TermExpression:
   yykw_the
   yykw_result

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
TermExpression:
   QualifiedId
   yytk_LPAREN
   OptionalExpressionList
   yytk_RPAREN

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Handler;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Arguments;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Handler = yy_1_1;
yyv_Position = yy_2;
yyv_Arguments = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Handler;
yy_0_1_3 = yyv_Arguments;
yy_0_1 = yyb + 0;
yy_0_1[0] = 14;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
TermExpression:
   yytk_LBRACKET
   OptionalExpressionList
   yytk_RBRACKET

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_List;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_List = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_List;
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
TermExpression:
   yytk_LBRACE
   OptionalExpressionArray
   yytk_RBRACE

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Pairs;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Pairs = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Pairs;
yy_0_1 = yyb + 0;
yy_0_1[0] = 16;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
TermExpression:
   yytk_LPAREN
   Expression
   yytk_RPAREN

{
yy yyb;
yy yy_0_1;
yy yyv_Expression;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_Expression = yy_2_1;
yy_0_1 = yyv_Expression;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConstantTermExpression:
   yykw_nothing

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
yy_0_1[0] = 2;
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
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
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
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
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
yy_0_1[0] = 6;
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
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalExpressionList:
   ExpressionList

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
OptionalExpressionList:

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
ExpressionList:
   Expression
   yytk_COMMA
   ExpressionList

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
ExpressionList:
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Expression;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Expression = yy_1_1;
yy_0_1_1 = yyv_Expression;
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
ExpressionListAsExpression:
   ExpressionList

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_List;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_List = yy_1_1;
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_List;
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalExpressionArray:
   ExpressionArray

{
yy yyb;
yy yy_0_1;
yy yyv_Pairs;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Pairs = yy_1_1;
yy_0_1 = yyv_Pairs;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalExpressionArray:

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
ExpressionArray:
   ExpressionArrayEntry
   yytk_COMMA
   ExpressionArray

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
ExpressionArray:
   ExpressionArrayEntry

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
ExpressionArrayEntry:
   Expression
   yytk_COLON
   Expression

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Key;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Value;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Key = yy_1_1;
yyv_Position = yy_3;
yyv_Value = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Key;
yy_0_1_3 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Syntax:
   AlternateSyntax

{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Syntax = yy_1_1;
yy_0_1 = yyv_Syntax;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AlternateSyntax:
   AlternateSyntax
   yytk_BAR
   ConcatenateSyntax

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Left;
yy yy_1_1;
yy yyv_Position;
yy yy_3;
yy yyv_Right;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_3 = (yy)($2.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Left = yy_1_1;
yyv_Position = yy_3;
yyv_Right = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Left;
yy_0_1_3 = yyv_Right;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
AlternateSyntax:
   ConcatenateSyntax

{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Syntax = yy_1_1;
yy_0_1 = yyv_Syntax;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConcatenateSyntax:
   ConcatenateSyntax
   AtomicSyntax

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Left;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Right;
yy yy_3_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Left = yy_1_1;
yyv_Position = yy_2;
yyv_Right = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Left;
yy_0_1_3 = yyv_Right;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
ConcatenateSyntax:
   AtomicSyntax

{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyv_Syntax = yy_1_1;
yy_0_1 = yyv_Syntax;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AtomicSyntax:
   yytk_LBRACE
   Syntax
   yytk_RBRACE

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Element;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Element = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Element;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AtomicSyntax:
   yytk_LBRACE
   Syntax
   yytk_COMMA
   Syntax
   yytk_RBRACE

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Element;
yy yy_3_1;
yy yyv_Delimiter;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Element = yy_3_1;
yyv_Delimiter = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Element;
yy_0_1_3 = yyv_Delimiter;
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AtomicSyntax:
   yytk_LBRACKET
   Syntax
   yytk_RBRACKET

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Operand;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Operand = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Operand;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AtomicSyntax:
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
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AtomicSyntax:
   StringLiteral
   yytk_EXCLAM

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
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
AtomicSyntax:
   yytk_LESS
   Identifier
   yytk_GREATER

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AtomicSyntax:
   yytk_LESS
   Identifier
   yytk_COLON
   Identifier
   yytk_GREATER

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Variable;
yy yy_3_1;
yy yyv_Name;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Variable = yy_3_1;
yyv_Name = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Variable;
yy_0_1_3 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AtomicSyntax:
   yytk_LESS
   Identifier
   yytk_EQUAL
   Constant
   yytk_GREATER

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Position;
yy yy_2;
yy yyv_Variable;
yy yy_3_1;
yy yyv_Value;
yy yy_5_1;
yy_2 = (yy)($1.attr[0]);
yy_3_1 = (yy)($2.attr[1]);
yy_5_1 = (yy)($4.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Variable = yy_3_1;
yyv_Value = yy_5_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Variable;
yy_0_1_3 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
AtomicSyntax:
   yytk_LPAREN
   Syntax
   yytk_RPAREN

{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_2_1;
yy_2_1 = (yy)($2.attr[1]);
yyv_Syntax = yy_2_1;
yy_0_1 = yyv_Syntax;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
OptionalConstantList:
   ConstantList

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
OptionalConstantList:

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
ConstantList:
   Constant
   yytk_COMMA
   ConstantList

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
ConstantList:
   Constant

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
Constant:
   yykw_nothing

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
Constant:
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
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Constant:
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
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Constant:
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
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Constant:
   yytk_MINUS
   INTEGER_LITERAL

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_PositiveValue;
yy yy_2_1;
yy yyv_Position;
yy yy_3;
yy yy_4_1;
yy yy_4_1_1;
yy yyv_Value;
yy yy_4_2;
yy_2_1 = (yy)($2.attr[1]);
yy_3 = (yy)($2.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_PositiveValue = yy_2_1;
yyv_Position = yy_3;
yy_4_1_1 = yyv_PositiveValue;
yy_4_1 = (yy)(-((intptr_t)yy_4_1_1));
yy_4_2 = yy_4_1;
yyv_Value = yy_4_2;
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
Constant:
   yytk_PLUS
   INTEGER_LITERAL

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_2_1;
yy yyv_Position;
yy yy_3;
yy_2_1 = (yy)($2.attr[1]);
yy_3 = (yy)($2.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Value = yy_2_1;
yyv_Position = yy_3;
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
Constant:
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
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Constant:
   yytk_MINUS
   DOUBLE_LITERAL

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_2_1;
yy yyv_Position;
yy yy_3;
yy yy_4_1;
yy yyv_PosValue;
yy yy_4_2;
yy_2_1 = (yy)($2.attr[1]);
yy_3 = (yy)($2.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Value = yy_2_1;
yyv_Position = yy_3;
yy_4_1 = yyv_Value;
NegateReal(yy_4_1, &yy_4_2);
yyv_PosValue = yy_4_2;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_PosValue;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Constant:
   yytk_PLUS
   DOUBLE_LITERAL

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_2_1;
yy yyv_Position;
yy yy_3;
yy_2_1 = (yy)($2.attr[1]);
yy_3 = (yy)($2.attr[0]);
yyb = yyh;
yyh += 3; if (yyh > yyhx) yyExtend();
yyv_Value = yy_2_1;
yyv_Position = yy_3;
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
Constant:
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
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Constant:
   Identifier

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
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Constant:
   Identifier
   yytk_LBRACKET
   INTEGER_LITERAL
   yytk_RBRACKET

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yy_0_1_3;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Index;
yy yy_4_1;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yy_4_1 = (yy)($3.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Value = yy_1_1;
yyv_Position = yy_2;
yyv_Index = yy_4_1;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1_3 = yyv_Index;
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $2.attr[0];
}
;
Constant:
   yykw_output

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yyv_Identifier;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yyv_Value;
yy yy_4_4;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_3_1 = ((yy)"output");
MakeNameLiteral(yy_3_1, &yy_3_2);
yyv_Identifier = yy_3_2;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifier;
yy_4_3 = yyb + 3;
yy_4_3[0] = 2;
AssignId(yy_4_1, yy_4_2, yy_4_3, &yy_4_4);
yyv_Value = yy_4_4;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Constant:
   yykw_input

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yyv_Identifier;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yyv_Value;
yy yy_4_4;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_3_1 = ((yy)"input");
MakeNameLiteral(yy_3_1, &yy_3_2);
yyv_Identifier = yy_3_2;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifier;
yy_4_3 = yyb + 3;
yy_4_3[0] = 2;
AssignId(yy_4_1, yy_4_2, yy_4_3, &yy_4_4);
yyv_Value = yy_4_4;
yy_0_1_1 = yyv_Position;
yy_0_1_2 = yyv_Value;
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Identifier:
   NAME_LITERAL

{
yy yyb;
yy yy_0_1;
yy yyv_Identifier;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yy_3_3;
yy yyv_Id;
yy yy_3_4;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yyv_Identifier = yy_1_1;
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Identifier;
yy_3_3 = yyb + 0;
yy_3_3[0] = 2;
AssignId(yy_3_1, yy_3_2, yy_3_3, &yy_3_4);
yyv_Id = yy_3_4;
yy_0_1 = yyv_Id;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Identifier:
   yykw_iterator

{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yyv_Identifier;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yyv_Id;
yy yy_4_4;
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_3_1 = ((yy)"iterator");
MakeNameLiteral(yy_3_1, &yy_3_2);
yyv_Identifier = yy_3_2;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifier;
yy_4_3 = yyb + 0;
yy_4_3[0] = 2;
AssignId(yy_4_1, yy_4_2, yy_4_3, &yy_4_4);
yyv_Id = yy_4_4;
yy_0_1 = yyv_Id;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
Identifier:
   CustomKeywords

{
yy yyb;
yy yy_0_1;
yy yyv_String;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yyv_Identifier;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yyv_Id;
yy yy_4_4;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yyv_String = yy_1_1;
yyv_Position = yy_2;
yy_3_1 = yyv_String;
MakeNameLiteral(yy_3_1, &yy_3_2);
yyv_Identifier = yy_3_2;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifier;
yy_4_3 = yyb + 0;
yy_4_3[0] = 2;
AssignId(yy_4_1, yy_4_2, yy_4_3, &yy_4_4);
yyv_Id = yy_4_4;
yy_0_1 = yyv_Id;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
StringyIdentifier:
   StringLiteral

{
yy yyb;
yy yy_0_1;
yy yyv_String;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yyv_Identifier;
yy yy_3_2;
yy yy_4_1;
yy yy_4_2;
yy yy_4_3;
yy yyv_Id;
yy yy_4_4;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yyv_String = yy_1_1;
yyv_Position = yy_2;
yy_3_1 = yyv_String;
MakeNameLiteral(yy_3_1, &yy_3_2);
yyv_Identifier = yy_3_2;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifier;
yy_4_3 = yyb + 0;
yy_4_3[0] = 2;
AssignId(yy_4_1, yy_4_2, yy_4_3, &yy_4_4);
yyv_Id = yy_4_4;
yy_0_1 = yyv_Id;
$$.attr[1] = ((intptr_t)yy_0_1);
$$.attr[0] = $1.attr[0];
}
;
IdentifierList:
   QualifiedId
   yytk_COMMA
   IdentifierList

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
IdentifierList:
   QualifiedId

{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_1_1;
yy_1_1 = (yy)($1.attr[1]);
yyb = yyh;
yyh += 4; if (yyh > yyhx) yyExtend();
yyv_Id = yy_1_1;
yy_0_1_1 = yyv_Id;
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
QualifiedId:
   NAME_LITERAL

{
yy yyb;
yy yy_0_1;
yy yyv_Identifier;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy yy_3_1;
yy yy_3_2;
yy yyv_Id;
yy yy_3_3;
yy_1_1 = (yy)($1.attr[1]);
yy_2 = (yy)($1.attr[0]);
yyv_Identifier = yy_1_1;
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Identifier;
QualifiedNameToId(yy_3_1, yy_3_2, &yy_3_3);
yyv_Id = yy_3_3;
yy_0_1 = yyv_Id;
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
if (! UnescapeStringLiteral(yy_3_1_1_1, yy_3_1_1_2, &yy_3_1_1_3)) goto yyfl_97_1_3_1;
yyv_Value = yy_3_1_1_3;
goto yysl_97_1_3;
yyfl_97_1_3_1 : ;
yy_3_2_1_1 = yyv_Position;
yy_3_2_1_2 = yyv_EscapedValue;
Error_MalformedEscapedString(yy_3_2_1_1, yy_3_2_1_2);
yy_3_2_2_1 = yyv_EscapedValue;
yy_3_2_2_2 = yy_3_2_2_1;
yyv_Value = yy_3_2_2_2;
goto yysl_97_1_3;
yysl_97_1_3 : ;
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
CustomStatements:
   yykw_THISCANNEVERHAPPEN

{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 22;
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
yy_0_1[0] = 18;
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
yy_0_1[0] = 18;
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
