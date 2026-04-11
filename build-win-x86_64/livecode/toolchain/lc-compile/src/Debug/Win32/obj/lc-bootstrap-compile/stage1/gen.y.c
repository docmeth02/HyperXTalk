/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user prologue.  */
#line 1 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"

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


#line 84 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 397,                 /* "invalid token"  */
    NAME_LITERAL = 257,            /* NAME_LITERAL  */
    INTEGER_LITERAL = 258,         /* INTEGER_LITERAL  */
    DOUBLE_LITERAL = 259,          /* DOUBLE_LITERAL  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    SEPARATOR = 261,               /* SEPARATOR  */
    END_OF_UNIT = 262,             /* END_OF_UNIT  */
    NEXT_UNIT = 263,               /* NEXT_UNIT  */
    yykw_THISCANNEVERHAPPEN = 264, /* yykw_THISCANNEVERHAPPEN  */
    yykw_input = 265,              /* yykw_input  */
    yykw_output = 266,             /* yykw_output  */
    yytk_PLUS = 267,               /* yytk_PLUS  */
    yytk_MINUS = 268,              /* yytk_MINUS  */
    yytk_EQUAL = 269,              /* yytk_EQUAL  */
    yytk_GREATER = 270,            /* yytk_GREATER  */
    yytk_LESS = 271,               /* yytk_LESS  */
    yytk_EXCLAM = 272,             /* yytk_EXCLAM  */
    yytk_BAR = 273,                /* yytk_BAR  */
    yykw_false = 274,              /* yykw_false  */
    yykw_true = 275,               /* yykw_true  */
    yytk_RBRACE = 276,             /* yytk_RBRACE  */
    yytk_LBRACE = 277,             /* yytk_LBRACE  */
    yytk_RBRACKET = 278,           /* yytk_RBRACKET  */
    yytk_LBRACKET = 279,           /* yytk_LBRACKET  */
    yykw_result = 280,             /* yykw_result  */
    yykw_the = 281,                /* yykw_the  */
    yykw_and = 282,                /* yykw_and  */
    yykw_or = 283,                 /* yykw_or  */
    yykw_register = 284,           /* yykw_register  */
    yytk_COLON = 285,              /* yytk_COLON  */
    yykw_by = 286,                 /* yykw_by  */
    yykw_else = 287,               /* yykw_else  */
    yykw_bytecode = 288,           /* yykw_bytecode  */
    yykw_into = 289,               /* yykw_into  */
    yykw_put = 290,                /* yykw_put  */
    yykw_return = 291,             /* yykw_return  */
    yykw_exit = 292,               /* yykw_exit  */
    yykw_next = 293,               /* yykw_next  */
    yykw_throw = 294,              /* yykw_throw  */
    yykw_each = 295,               /* yykw_each  */
    yykw_for = 296,                /* yykw_for  */
    yykw_down = 297,               /* yykw_down  */
    yykw_up = 298,                 /* yykw_up  */
    yykw_from = 299,               /* yykw_from  */
    yykw_until = 300,              /* yykw_until  */
    yykw_while = 301,              /* yykw_while  */
    yykw_times = 302,              /* yykw_times  */
    yykw_forever = 303,            /* yykw_forever  */
    yykw_repeat = 304,             /* yykw_repeat  */
    yykw_then = 305,               /* yykw_then  */
    yykw_if = 306,                 /* yykw_if  */
    yykw_of = 307,                 /* yykw_of  */
    yykw_nothing = 308,            /* yykw_nothing  */
    yykw_List = 309,               /* yykw_List  */
    yykw_Array = 310,              /* yykw_Array  */
    yykw_Data = 311,               /* yykw_Data  */
    yykw_String = 312,             /* yykw_String  */
    yykw_Number = 313,             /* yykw_Number  */
    yykw_Real = 314,               /* yykw_Real  */
    yykw_Integer = 315,            /* yykw_Integer  */
    yykw_Boolean = 316,            /* yykw_Boolean  */
    yykw_any = 317,                /* yykw_any  */
    yykw_optional = 318,           /* yykw_optional  */
    yykw_sequence = 319,           /* yykw_sequence  */
    yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK = 320, /* yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK  */
    yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK = 321, /* yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK  */
    yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK = 322, /* yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK  */
    yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK = 323, /* yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK  */
    yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK = 324, /* yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK  */
    yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK = 325, /* yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK  */
    yykw_classification = 326,     /* yykw_classification  */
    yykw_comparison = 327,         /* yykw_comparison  */
    yykw_concatenation = 328,      /* yykw_concatenation  */
    yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK = 329, /* yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK  */
    yykw_addition = 330,           /* yykw_addition  */
    yykw_multiplication = 331,     /* yykw_multiplication  */
    yykw_modifier = 332,           /* yykw_modifier  */
    yykw_exponentiation = 333,     /* yykw_exponentiation  */
    yykw_conversion = 334,         /* yykw_conversion  */
    yykw_constructor = 335,        /* yykw_constructor  */
    yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK = 336, /* yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK  */
    yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK = 337, /* yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK  */
    yykw_subscript = 338,          /* yykw_subscript  */
    yykw_call = 339,               /* yykw_call  */
    yykw_function = 340,           /* yykw_function  */
    yykw_resolution = 341,         /* yykw_resolution  */
    yykw_scope = 342,              /* yykw_scope  */
    yykw_right = 343,              /* yykw_right  */
    yykw_left = 344,               /* yykw_left  */
    yykw_neutral = 345,            /* yykw_neutral  */
    yykw_phrase = 346,             /* yykw_phrase  */
    yykw_binary = 347,             /* yykw_binary  */
    yykw_postfix = 348,            /* yykw_postfix  */
    yykw_precedence = 349,         /* yykw_precedence  */
    yykw_operator = 350,           /* yykw_operator  */
    yykw_prefix = 351,             /* yykw_prefix  */
    yykw_iterator = 352,           /* yykw_iterator  */
    yykw_expression = 353,         /* yykw_expression  */
    yykw_statement = 354,          /* yykw_statement  */
    yykw_message = 355,            /* yykw_message  */
    yykw_with = 356,               /* yykw_with  */
    yykw_deprecate = 357,          /* yykw_deprecate  */
    yykw_begin = 358,              /* yykw_begin  */
    yykw_syntax = 359,             /* yykw_syntax  */
    yykw_event = 360,              /* yykw_event  */
    yykw_set = 361,                /* yykw_set  */
    yykw_get = 362,                /* yykw_get  */
    yykw_property = 363,           /* yykw_property  */
    yykw_inout = 364,              /* yykw_inout  */
    yykw_out = 365,                /* yykw_out  */
    yykw_in = 366,                 /* yykw_in  */
    yytk_DOT_DOT_DOT = 367,        /* yytk_DOT_DOT_DOT  */
    yytk_COMMA = 368,              /* yytk_COMMA  */
    yykw_returns = 369,            /* yykw_returns  */
    yytk_RPAREN = 370,             /* yytk_RPAREN  */
    yytk_LPAREN = 371,             /* yytk_LPAREN  */
    yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK = 372, /* yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK  */
    yykw_on = 373,                 /* yykw_on  */
    yykw_based = 374,              /* yykw_based  */
    yykw_enum = 375,               /* yykw_enum  */
    yykw_to = 376,                 /* yykw_to  */
    yykw_binds = 377,              /* yykw_binds  */
    yykw_private = 378,            /* yykw_private  */
    yykw_protected = 379,          /* yykw_protected  */
    yykw_public = 380,             /* yykw_public  */
    yykw_use = 381,                /* yykw_use  */
    yykw_metadata = 382,           /* yykw_metadata  */
    yykw_unsafe = 383,             /* yykw_unsafe  */
    yykw_as = 384,                 /* yykw_as  */
    yykw_variable = 385,           /* yykw_variable  */
    yykw_constant = 386,           /* yykw_constant  */
    yykw_is = 387,                 /* yykw_is  */
    yykw_record = 388,             /* yykw_record  */
    yykw_handler = 389,            /* yykw_handler  */
    yykw_type = 390,               /* yykw_type  */
    yykw_foreign = 391,            /* yykw_foreign  */
    yykw_import = 392,             /* yykw_import  */
    yykw_library = 393,            /* yykw_library  */
    yykw_widget = 394,             /* yykw_widget  */
    yykw_end = 395,                /* yykw_end  */
    yykw_module = 396              /* yykw_module  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME_LITERAL = 3,               /* NAME_LITERAL  */
  YYSYMBOL_INTEGER_LITERAL = 4,            /* INTEGER_LITERAL  */
  YYSYMBOL_DOUBLE_LITERAL = 5,             /* DOUBLE_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_SEPARATOR = 7,                  /* SEPARATOR  */
  YYSYMBOL_END_OF_UNIT = 8,                /* END_OF_UNIT  */
  YYSYMBOL_NEXT_UNIT = 9,                  /* NEXT_UNIT  */
  YYSYMBOL_yykw_THISCANNEVERHAPPEN = 10,   /* yykw_THISCANNEVERHAPPEN  */
  YYSYMBOL_yykw_input = 11,                /* yykw_input  */
  YYSYMBOL_yykw_output = 12,               /* yykw_output  */
  YYSYMBOL_yytk_PLUS = 13,                 /* yytk_PLUS  */
  YYSYMBOL_yytk_MINUS = 14,                /* yytk_MINUS  */
  YYSYMBOL_yytk_EQUAL = 15,                /* yytk_EQUAL  */
  YYSYMBOL_yytk_GREATER = 16,              /* yytk_GREATER  */
  YYSYMBOL_yytk_LESS = 17,                 /* yytk_LESS  */
  YYSYMBOL_yytk_EXCLAM = 18,               /* yytk_EXCLAM  */
  YYSYMBOL_yytk_BAR = 19,                  /* yytk_BAR  */
  YYSYMBOL_yykw_false = 20,                /* yykw_false  */
  YYSYMBOL_yykw_true = 21,                 /* yykw_true  */
  YYSYMBOL_yytk_RBRACE = 22,               /* yytk_RBRACE  */
  YYSYMBOL_yytk_LBRACE = 23,               /* yytk_LBRACE  */
  YYSYMBOL_yytk_RBRACKET = 24,             /* yytk_RBRACKET  */
  YYSYMBOL_yytk_LBRACKET = 25,             /* yytk_LBRACKET  */
  YYSYMBOL_yykw_result = 26,               /* yykw_result  */
  YYSYMBOL_yykw_the = 27,                  /* yykw_the  */
  YYSYMBOL_yykw_and = 28,                  /* yykw_and  */
  YYSYMBOL_yykw_or = 29,                   /* yykw_or  */
  YYSYMBOL_yykw_register = 30,             /* yykw_register  */
  YYSYMBOL_yytk_COLON = 31,                /* yytk_COLON  */
  YYSYMBOL_yykw_by = 32,                   /* yykw_by  */
  YYSYMBOL_yykw_else = 33,                 /* yykw_else  */
  YYSYMBOL_yykw_bytecode = 34,             /* yykw_bytecode  */
  YYSYMBOL_yykw_into = 35,                 /* yykw_into  */
  YYSYMBOL_yykw_put = 36,                  /* yykw_put  */
  YYSYMBOL_yykw_return = 37,               /* yykw_return  */
  YYSYMBOL_yykw_exit = 38,                 /* yykw_exit  */
  YYSYMBOL_yykw_next = 39,                 /* yykw_next  */
  YYSYMBOL_yykw_throw = 40,                /* yykw_throw  */
  YYSYMBOL_yykw_each = 41,                 /* yykw_each  */
  YYSYMBOL_yykw_for = 42,                  /* yykw_for  */
  YYSYMBOL_yykw_down = 43,                 /* yykw_down  */
  YYSYMBOL_yykw_up = 44,                   /* yykw_up  */
  YYSYMBOL_yykw_from = 45,                 /* yykw_from  */
  YYSYMBOL_yykw_until = 46,                /* yykw_until  */
  YYSYMBOL_yykw_while = 47,                /* yykw_while  */
  YYSYMBOL_yykw_times = 48,                /* yykw_times  */
  YYSYMBOL_yykw_forever = 49,              /* yykw_forever  */
  YYSYMBOL_yykw_repeat = 50,               /* yykw_repeat  */
  YYSYMBOL_yykw_then = 51,                 /* yykw_then  */
  YYSYMBOL_yykw_if = 52,                   /* yykw_if  */
  YYSYMBOL_yykw_of = 53,                   /* yykw_of  */
  YYSYMBOL_yykw_nothing = 54,              /* yykw_nothing  */
  YYSYMBOL_yykw_List = 55,                 /* yykw_List  */
  YYSYMBOL_yykw_Array = 56,                /* yykw_Array  */
  YYSYMBOL_yykw_Data = 57,                 /* yykw_Data  */
  YYSYMBOL_yykw_String = 58,               /* yykw_String  */
  YYSYMBOL_yykw_Number = 59,               /* yykw_Number  */
  YYSYMBOL_yykw_Real = 60,                 /* yykw_Real  */
  YYSYMBOL_yykw_Integer = 61,              /* yykw_Integer  */
  YYSYMBOL_yykw_Boolean = 62,              /* yykw_Boolean  */
  YYSYMBOL_yykw_any = 63,                  /* yykw_any  */
  YYSYMBOL_yykw_optional = 64,             /* yykw_optional  */
  YYSYMBOL_yykw_sequence = 65,             /* yykw_sequence  */
  YYSYMBOL_yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK = 66, /* yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK  */
  YYSYMBOL_yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK = 67, /* yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK  */
  YYSYMBOL_yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK = 68, /* yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK  */
  YYSYMBOL_yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK = 69, /* yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK  */
  YYSYMBOL_yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK = 70, /* yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK  */
  YYSYMBOL_yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK = 71, /* yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK  */
  YYSYMBOL_yykw_classification = 72,       /* yykw_classification  */
  YYSYMBOL_yykw_comparison = 73,           /* yykw_comparison  */
  YYSYMBOL_yykw_concatenation = 74,        /* yykw_concatenation  */
  YYSYMBOL_yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK = 75, /* yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK  */
  YYSYMBOL_yykw_addition = 76,             /* yykw_addition  */
  YYSYMBOL_yykw_multiplication = 77,       /* yykw_multiplication  */
  YYSYMBOL_yykw_modifier = 78,             /* yykw_modifier  */
  YYSYMBOL_yykw_exponentiation = 79,       /* yykw_exponentiation  */
  YYSYMBOL_yykw_conversion = 80,           /* yykw_conversion  */
  YYSYMBOL_yykw_constructor = 81,          /* yykw_constructor  */
  YYSYMBOL_yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK = 82, /* yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK  */
  YYSYMBOL_yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK = 83, /* yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK  */
  YYSYMBOL_yykw_subscript = 84,            /* yykw_subscript  */
  YYSYMBOL_yykw_call = 85,                 /* yykw_call  */
  YYSYMBOL_yykw_function = 86,             /* yykw_function  */
  YYSYMBOL_yykw_resolution = 87,           /* yykw_resolution  */
  YYSYMBOL_yykw_scope = 88,                /* yykw_scope  */
  YYSYMBOL_yykw_right = 89,                /* yykw_right  */
  YYSYMBOL_yykw_left = 90,                 /* yykw_left  */
  YYSYMBOL_yykw_neutral = 91,              /* yykw_neutral  */
  YYSYMBOL_yykw_phrase = 92,               /* yykw_phrase  */
  YYSYMBOL_yykw_binary = 93,               /* yykw_binary  */
  YYSYMBOL_yykw_postfix = 94,              /* yykw_postfix  */
  YYSYMBOL_yykw_precedence = 95,           /* yykw_precedence  */
  YYSYMBOL_yykw_operator = 96,             /* yykw_operator  */
  YYSYMBOL_yykw_prefix = 97,               /* yykw_prefix  */
  YYSYMBOL_yykw_iterator = 98,             /* yykw_iterator  */
  YYSYMBOL_yykw_expression = 99,           /* yykw_expression  */
  YYSYMBOL_yykw_statement = 100,           /* yykw_statement  */
  YYSYMBOL_yykw_message = 101,             /* yykw_message  */
  YYSYMBOL_yykw_with = 102,                /* yykw_with  */
  YYSYMBOL_yykw_deprecate = 103,           /* yykw_deprecate  */
  YYSYMBOL_yykw_begin = 104,               /* yykw_begin  */
  YYSYMBOL_yykw_syntax = 105,              /* yykw_syntax  */
  YYSYMBOL_yykw_event = 106,               /* yykw_event  */
  YYSYMBOL_yykw_set = 107,                 /* yykw_set  */
  YYSYMBOL_yykw_get = 108,                 /* yykw_get  */
  YYSYMBOL_yykw_property = 109,            /* yykw_property  */
  YYSYMBOL_yykw_inout = 110,               /* yykw_inout  */
  YYSYMBOL_yykw_out = 111,                 /* yykw_out  */
  YYSYMBOL_yykw_in = 112,                  /* yykw_in  */
  YYSYMBOL_yytk_DOT_DOT_DOT = 113,         /* yytk_DOT_DOT_DOT  */
  YYSYMBOL_yytk_COMMA = 114,               /* yytk_COMMA  */
  YYSYMBOL_yykw_returns = 115,             /* yykw_returns  */
  YYSYMBOL_yytk_RPAREN = 116,              /* yytk_RPAREN  */
  YYSYMBOL_yytk_LPAREN = 117,              /* yytk_LPAREN  */
  YYSYMBOL_yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK = 118, /* yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK  */
  YYSYMBOL_yykw_on = 119,                  /* yykw_on  */
  YYSYMBOL_yykw_based = 120,               /* yykw_based  */
  YYSYMBOL_yykw_enum = 121,                /* yykw_enum  */
  YYSYMBOL_yykw_to = 122,                  /* yykw_to  */
  YYSYMBOL_yykw_binds = 123,               /* yykw_binds  */
  YYSYMBOL_yykw_private = 124,             /* yykw_private  */
  YYSYMBOL_yykw_protected = 125,           /* yykw_protected  */
  YYSYMBOL_yykw_public = 126,              /* yykw_public  */
  YYSYMBOL_yykw_use = 127,                 /* yykw_use  */
  YYSYMBOL_yykw_metadata = 128,            /* yykw_metadata  */
  YYSYMBOL_yykw_unsafe = 129,              /* yykw_unsafe  */
  YYSYMBOL_yykw_as = 130,                  /* yykw_as  */
  YYSYMBOL_yykw_variable = 131,            /* yykw_variable  */
  YYSYMBOL_yykw_constant = 132,            /* yykw_constant  */
  YYSYMBOL_yykw_is = 133,                  /* yykw_is  */
  YYSYMBOL_yykw_record = 134,              /* yykw_record  */
  YYSYMBOL_yykw_handler = 135,             /* yykw_handler  */
  YYSYMBOL_yykw_type = 136,                /* yykw_type  */
  YYSYMBOL_yykw_foreign = 137,             /* yykw_foreign  */
  YYSYMBOL_yykw_import = 138,              /* yykw_import  */
  YYSYMBOL_yykw_library = 139,             /* yykw_library  */
  YYSYMBOL_yykw_widget = 140,              /* yykw_widget  */
  YYSYMBOL_yykw_end = 141,                 /* yykw_end  */
  YYSYMBOL_yykw_module = 142,              /* yykw_module  */
  YYSYMBOL_YYACCEPT = 143,                 /* $accept  */
  YYSYMBOL_ROOT_ = 144,                    /* ROOT_  */
  YYSYMBOL_Parse = 145,                    /* Parse  */
  YYSYMBOL_ModuleList = 146,               /* ModuleList  */
  YYSYMBOL_Module = 147,                   /* Module  */
  YYSYMBOL_ImportDefinitions = 148,        /* ImportDefinitions  */
  YYSYMBOL_ImportDefinition = 149,         /* ImportDefinition  */
  YYSYMBOL_Metadata = 150,                 /* Metadata  */
  YYSYMBOL_Import = 151,                   /* Import  */
  YYSYMBOL_Definitions = 152,              /* Definitions  */
  YYSYMBOL_Definition = 153,               /* Definition  */
  YYSYMBOL_ConstantDefinition = 154,       /* ConstantDefinition  */
  YYSYMBOL_Access = 155,                   /* Access  */
  YYSYMBOL_VariableDefinition = 156,       /* VariableDefinition  */
  YYSYMBOL_OptionalTypeClause = 157,       /* OptionalTypeClause  */
  YYSYMBOL_TypeDefinition = 158,           /* TypeDefinition  */
  YYSYMBOL_OptionalBaseType = 159,         /* OptionalBaseType  */
  YYSYMBOL_RecordFields = 160,             /* RecordFields  */
  YYSYMBOL_RecordField = 161,              /* RecordField  */
  YYSYMBOL_EnumFields = 162,               /* EnumFields  */
  YYSYMBOL_EnumField = 163,                /* EnumField  */
  YYSYMBOL_HandlerDefinition = 164,        /* HandlerDefinition  */
  YYSYMBOL_Signature = 165,                /* Signature  */
  YYSYMBOL_OptionalReturnsClause = 166,    /* OptionalReturnsClause  */
  YYSYMBOL_OptionalParameterList = 167,    /* OptionalParameterList  */
  YYSYMBOL_ParameterList = 168,            /* ParameterList  */
  YYSYMBOL_Parameter = 169,                /* Parameter  */
  YYSYMBOL_Mode = 170,                     /* Mode  */
  YYSYMBOL_PropertyDefinition = 171,       /* PropertyDefinition  */
  YYSYMBOL_OptionalSetClause = 172,        /* OptionalSetClause  */
  YYSYMBOL_EventDefinition = 173,          /* EventDefinition  */
  YYSYMBOL_SyntaxDefinition = 174,         /* SyntaxDefinition  */
  YYSYMBOL_SyntaxWarnings = 175,           /* SyntaxWarnings  */
  YYSYMBOL_SyntaxClass = 176,              /* SyntaxClass  */
  YYSYMBOL_SyntaxAssoc = 177,              /* SyntaxAssoc  */
  YYSYMBOL_SyntaxPrecedence = 178,         /* SyntaxPrecedence  */
  YYSYMBOL_SyntaxMethods = 179,            /* SyntaxMethods  */
  YYSYMBOL_SyntaxMethod = 180,             /* SyntaxMethod  */
  YYSYMBOL_Type = 181,                     /* Type  */
  YYSYMBOL_OptionalElementType = 182,      /* OptionalElementType  */
  YYSYMBOL_Statements = 183,               /* Statements  */
  YYSYMBOL_Statement = 184,                /* Statement  */
  YYSYMBOL_IfStatementElseIfs = 185,       /* IfStatementElseIfs  */
  YYSYMBOL_RepeatStatementOptionalBy = 186, /* RepeatStatementOptionalBy  */
  YYSYMBOL_Bytecodes = 187,                /* Bytecodes  */
  YYSYMBOL_Bytecode = 188,                 /* Bytecode  */
  YYSYMBOL_Expression = 189,               /* Expression  */
  YYSYMBOL_AndExpression = 190,            /* AndExpression  */
  YYSYMBOL_NormalExpression = 191,         /* NormalExpression  */
  YYSYMBOL_FlatExpression = 192,           /* FlatExpression  */
  YYSYMBOL_FlatExpressionTerm = 193,       /* FlatExpressionTerm  */
  YYSYMBOL_FlatExpressionPrefixOperators = 194, /* FlatExpressionPrefixOperators  */
  YYSYMBOL_FlatExpressionPostfixOperators = 195, /* FlatExpressionPostfixOperators  */
  YYSYMBOL_FlatExpressionPrefixOperator = 196, /* FlatExpressionPrefixOperator  */
  YYSYMBOL_FlatExpressionPostfixOperator = 197, /* FlatExpressionPostfixOperator  */
  YYSYMBOL_FlatExpressionBinaryOperator = 198, /* FlatExpressionBinaryOperator  */
  YYSYMBOL_FlatExpressionOperand = 199,    /* FlatExpressionOperand  */
  YYSYMBOL_TermExpression = 200,           /* TermExpression  */
  YYSYMBOL_ConstantTermExpression = 201,   /* ConstantTermExpression  */
  YYSYMBOL_OptionalExpressionList = 202,   /* OptionalExpressionList  */
  YYSYMBOL_ExpressionList = 203,           /* ExpressionList  */
  YYSYMBOL_OptionalExpressionArray = 204,  /* OptionalExpressionArray  */
  YYSYMBOL_ExpressionArray = 205,          /* ExpressionArray  */
  YYSYMBOL_ExpressionArrayEntry = 206,     /* ExpressionArrayEntry  */
  YYSYMBOL_Syntax = 207,                   /* Syntax  */
  YYSYMBOL_AlternateSyntax = 208,          /* AlternateSyntax  */
  YYSYMBOL_ConcatenateSyntax = 209,        /* ConcatenateSyntax  */
  YYSYMBOL_AtomicSyntax = 210,             /* AtomicSyntax  */
  YYSYMBOL_OptionalConstantList = 211,     /* OptionalConstantList  */
  YYSYMBOL_ConstantList = 212,             /* ConstantList  */
  YYSYMBOL_Constant = 213,                 /* Constant  */
  YYSYMBOL_Identifier = 214,               /* Identifier  */
  YYSYMBOL_StringyIdentifier = 215,        /* StringyIdentifier  */
  YYSYMBOL_IdentifierList = 216,           /* IdentifierList  */
  YYSYMBOL_QualifiedId = 217,              /* QualifiedId  */
  YYSYMBOL_OptionalSeparator = 218,        /* OptionalSeparator  */
  YYSYMBOL_Separator = 219,                /* Separator  */
  YYSYMBOL_StringLiteral = 220,            /* StringLiteral  */
  YYSYMBOL_StringOrNameLiteral = 221,      /* StringOrNameLiteral  */
  YYSYMBOL_CustomStatements = 222,         /* CustomStatements  */
  YYSYMBOL_CustomPostfixOperators = 223,   /* CustomPostfixOperators  */
  YYSYMBOL_CustomPrefixOperators = 224,    /* CustomPrefixOperators  */
  YYSYMBOL_CustomBinaryOperators = 225,    /* CustomBinaryOperators  */
  YYSYMBOL_CustomTerms = 226,              /* CustomTerms  */
  YYSYMBOL_CustomIterators = 227,          /* CustomIterators  */
  YYSYMBOL_CustomKeywords = 228            /* CustomKeywords  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;



#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif
#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   586

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  260
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  561
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 13
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   397

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,     2
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   170,   170,   205,   220,   250,   275,   337,   384,   431,
     479,   510,   522,   537,   581,   634,   688,   740,   782,   819,
     861,   910,   967,  1012,  1050,  1078,  1109,  1121,  1136,  1151,
    1166,  1181,  1196,  1211,  1226,  1241,  1256,  1303,  1315,  1329,
    1343,  1357,  1402,  1419,  1435,  1481,  1536,  1592,  1656,  1713,
    1771,  1789,  1888,  1919,  1931,  1967,  2003,  2034,  2046,  2074,
    2134,  2202,  2259,  2322,  2353,  2374,  2390,  2406,  2418,  2448,
    2473,  2517,  2557,  2606,  2620,  2634,  2648,  2698,  2748,  2771,
    2783,  2824,  2895,  2921,  2933,  2948,  2963,  2978,  3004,  3030,
    3064,  3079,  3093,  3107,  3121,  3136,  3151,  3165,  3179,  3193,
    3207,  3221,  3235,  3249,  3263,  3277,  3291,  3305,  3319,  3333,
    3347,  3361,  3375,  3389,  3403,  3417,  3431,  3445,  3476,  3488,
    3526,  3554,  3583,  3604,  3625,  3646,  3667,  3688,  3709,  3730,
    3751,  3780,  3801,  3818,  3834,  3865,  3877,  3914,  3963,  3996,
    4037,  4078,  4119,  4187,  4255,  4306,  4335,  4357,  4379,  4404,
    4433,  4471,  4509,  4538,  4576,  4608,  4640,  4677,  4692,  4740,
    4762,  4774,  4791,  4803,  4834,  4846,  4875,  4912,  4948,  4990,
    5027,  5042,  5079,  5094,  5116,  5137,  5152,  5183,  5202,  5211,
    5230,  5239,  5254,  5269,  5284,  5305,  5326,  5341,  5369,  5391,
    5429,  5459,  5489,  5506,  5527,  5548,  5569,  5597,  5625,  5653,
    5669,  5681,  5711,  5764,  5780,  5792,  5822,  5847,  5884,  5899,
    5936,  5951,  5987,  6002,  6032,  6071,  6101,  6129,  6158,  6188,
    6227,  6266,  6283,  6299,  6311,  6341,  6366,  6387,  6408,  6429,
    6457,  6494,  6523,  6551,  6586,  6615,  6643,  6671,  6709,  6750,
    6791,  6823,  6857,  6895,  6933,  6963,  6988,  7015,  7024,  7030,
    7039,  7047,  7092,  7107,  7128,  7142,  7153,  7164,  7175,  7189,
    7203
};
#endif

#define YYPACT_NINF (-343)
#define YYTABLE_NINF (-243)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      39,    39,    50,  -343,  -343,    57,   170,  -343,  -343,  -343,
      39,   -49,   101,   101,   101,  -343,   101,  -343,    39,    39,
      39,    39,   215,   215,   215,   318,    79,    79,    61,  -343,
    -343,  -343,   101,   135,  -343,  -343,   -27,    39,  -343,   248,
    -343,  -343,  -343,  -343,  -343,  -343,    25,    32,    19,    79,
      79,    10,    11,    79,    96,    54,    39,  -343,  -343,  -343,
    -343,    23,  -343,    93,  -343,   105,   107,  -343,  -343,   104,
    -343,  -343,    90,    89,   215,   112,    98,   116,    79,    79,
     108,    13,    79,   102,   120,   126,    79,   131,  -343,    79,
      79,    93,   140,    34,    79,   132,   318,   382,    39,   152,
    -343,    79,    79,   101,   261,    39,  -343,   144,    79,    79,
     150,   156,    79,    79,    93,   160,    42,    79,    39,    39,
      93,   406,    39,    93,  -343,   406,    79,    93,  -343,    39,
    -343,  -343,  -343,  -343,  -343,   188,   189,  -343,  -343,  -343,
     197,   198,  -343,  -343,  -343,  -343,   184,  -343,   190,    79,
     150,   199,   199,  -343,  -343,   303,    79,   194,    93,   406,
    -343,   305,    39,    93,    39,   406,    79,    93,   193,   309,
     311,  -343,  -343,   269,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,   406,  -343,  -343,    61,  -343,  -343,    93,  -343,
     320,   228,   229,   237,   230,   119,   220,   152,   150,  -343,
      79,  -343,  -343,  -343,    93,   217,    39,    39,  -343,  -343,
     308,   306,  -343,  -343,   339,    97,   341,  -343,    61,  -343,
     219,  -343,    93,   231,   235,  -343,  -343,   406,  -343,  -343,
     211,    39,   150,   150,  -343,  -343,   452,   452,   251,   258,
      79,   119,   119,   119,    39,   342,   119,  -343,   345,   406,
    -343,  -343,  -343,  -343,   241,   406,    79,   219,   350,   355,
    -343,   357,  -343,  -343,  -343,  -343,  -343,  -343,    84,    53,
     344,  -343,   358,   361,  -343,  -343,   271,  -343,  -343,  -343,
     232,  -343,    39,   365,   177,   336,   340,   379,   256,   383,
     384,   386,    39,    79,   257,    39,   275,   362,  -343,   278,
     261,  -343,   265,    61,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,   317,   323,  -343,   322,
     324,   452,   261,   167,    20,   380,   302,   316,   119,  -343,
    -343,  -343,   307,  -343,   283,    39,  -343,   284,   306,  -343,
    -343,     4,   410,  -343,   314,     9,   409,  -343,  -343,    -3,
    -343,  -343,   424,  -343,    -6,   299,   109,   182,   308,  -343,
    -343,   308,   396,   428,   429,    39,    79,   151,     5,   -14,
     308,   219,   150,   343,   219,    15,   430,   261,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,   348,    39,   402,  -343,    79,
    -343,   119,  -343,  -343,    39,   119,   261,   310,    79,   351,
     441,  -343,   448,   449,  -343,  -343,  -343,   359,  -343,   157,
      79,   349,    39,   446,   158,   473,   475,   143,   143,   219,
     444,    39,    39,   481,   352,  -343,  -343,  -343,   378,   308,
    -343,  -343,  -343,  -343,  -343,  -343,  -343,   236,   242,  -343,
    -343,  -343,   479,   471,  -343,   482,   477,    79,  -343,  -343,
    -343,  -343,   308,  -343,  -343,  -343,  -343,   150,   463,   109,
    -343,  -343,   308,  -343,   389,   219,   219,   363,   492,   219,
     219,   308,   374,  -343,  -343,  -343,  -343,  -343,  -343,   501,
    -343,  -343,   366,    39,   391,  -343,  -343,  -343,   496,   370,
     371,   465,   183,   372,   504,  -343,   515,   436,    79,   402,
     143,   493,   497,  -343,   420,   426,   499,    47,   411,  -343,
    -343,  -343,   434,  -343,   437,   219,  -343,  -343,   543,   544,
    -343,   545,   219,   505,  -343,   402,   415,   162,   162,   124,
    -343,  -343,  -343,   508,   549,    39,    39,    39,  -343,   308,
     219,   219,   219,   419,   421,   504,   513,   514,  -343,  -343,
    -343
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     248,   250,     0,     2,     3,     5,     0,   247,   249,     1,
     248,     0,     0,     0,     0,     4,     0,   246,     0,     0,
       0,     0,    37,    37,    37,    11,     0,     0,     0,    40,
      39,    38,     0,     0,    27,    28,     0,     0,    29,     0,
      31,    30,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,   240,   260,
     241,     0,   242,     0,   251,     0,     0,   243,    24,   245,
     253,   252,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,    67,
      80,     0,     0,     0,     0,   248,    25,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,   248,   248,
       0,     0,     0,     0,    20,     0,     0,     0,    13,   248,
      10,    93,    92,    91,    90,     0,     0,    86,    85,    84,
       0,    83,    75,    74,    73,    72,     0,    66,    69,     0,
      43,    79,    79,   244,    23,     0,     0,    51,     0,     0,
      41,   178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,   131,   133,   129,   128,   127,   126,   125,   124,
     123,   122,     0,    19,   120,    53,    14,    17,     0,    22,
       0,     0,     0,     0,     0,     0,    65,     0,    43,    71,
       0,    76,    77,     8,     0,     0,     0,     0,    42,   256,
      36,   170,   172,   173,   175,     0,   178,   181,    53,    48,
     135,    44,     0,     0,     0,     7,     6,     0,   130,   121,
       0,     0,    43,    43,    15,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   208,   210,   212,   216,     0,
      63,    68,    70,    78,     0,     0,    57,   135,   178,   178,
     257,   178,   183,   196,   197,   258,   195,   194,   178,   178,
       0,   193,   178,   180,   184,   186,   187,   198,   185,   177,
       0,   254,     0,   178,   178,     0,     0,   178,   178,   178,
     178,   178,     0,     0,     0,     0,     0,   157,    49,     0,
       0,   132,     0,    53,    54,    55,   116,   115,   114,   113,
     112,   111,   110,   109,   108,   107,   106,   105,   104,   103,
     102,   101,   100,    99,    98,    96,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   211,
     217,    64,     0,    50,     0,     0,    58,     0,   169,   171,
     174,     0,     0,   203,   206,   202,     0,   199,   188,     0,
     255,   176,   180,   182,   178,     0,   164,     0,   149,   147,
     146,   145,     0,   178,   178,     0,     0,     0,     0,     0,
     152,   135,    43,     0,   135,   178,   178,     0,    45,    16,
      52,    95,    94,    88,    87,     0,     0,     0,   218,     0,
     213,     0,   215,   221,     0,   209,     0,     0,    57,     0,
     178,   191,   178,   178,   190,   192,   179,     0,    46,   178,
       0,     0,     0,     0,   178,   178,     0,     0,     0,   135,
       0,     0,     0,   178,     0,   136,    59,   134,     0,   156,
      62,    89,    82,   229,   232,   239,   238,     0,     0,   228,
     227,   226,     0,   236,   235,     0,     0,   118,    61,    47,
      56,    60,   207,   205,   201,   189,   167,    43,     0,   164,
     165,   168,   150,   259,     0,   135,   135,     0,   178,   135,
     135,   151,     0,   153,   231,   234,   230,   233,   220,     0,
     219,   214,     0,     0,     0,   166,   154,   163,   178,     0,
       0,     0,     0,     0,   160,   155,     0,     0,   118,   223,
       0,     0,     0,   138,     0,     0,     0,     0,     0,   237,
      81,   117,     0,   222,   225,   135,   141,   140,   178,   178,
     139,   178,   135,     0,   119,     0,     0,   162,   162,     0,
     159,   137,   224,     0,   178,     0,     0,     0,   144,   161,
     135,   135,   135,     0,     0,   160,     0,     0,   158,   143,
     142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -343,  -343,  -343,   555,  -343,   470,  -343,  -343,     2,   134,
    -343,  -343,  -343,  -343,  -149,  -343,  -343,  -170,  -343,   159,
    -343,  -343,   125,  -343,  -343,   373,  -343,  -343,  -343,   416,
    -343,  -343,  -343,  -343,  -343,  -215,    63,  -343,  -112,  -343,
    -255,  -343,    14,    35,   103,  -343,   -87,   319,   315,   321,
    -343,   360,   213,  -343,  -343,  -343,  -343,  -343,  -343,  -334,
     165,  -343,   168,  -343,  -232,  -343,   243,  -234,  -343,    44,
     186,   -21,   556,   483,    27,   -43,    -1,   -25,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -342
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     4,     5,    55,    56,    34,    35,    36,
      37,    38,    39,    40,   160,    41,   206,   230,   231,   344,
     345,    42,   100,   250,   146,   147,   148,   149,    43,   201,
      44,    45,   195,    98,   140,   329,   492,   493,   183,   228,
     294,   295,   518,   545,   421,   422,   355,   211,   212,   213,
     214,   215,   361,   216,   362,   261,   273,   274,   275,   356,
     357,   352,   353,   354,   244,   245,   246,   247,   522,   523,
     524,   232,   233,    68,   296,     6,     7,   248,    72,   297,
     363,   217,   262,   278,   474,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,   199,   347,    67,   209,    61,    63,    65,    71,   334,
     335,   336,   339,   187,    58,   258,    58,    22,    23,    24,
      25,    59,   330,    59,   424,   209,   258,    57,    87,    88,
     417,    91,    92,   258,   258,   410,    74,    58,   258,    18,
      19,    20,   400,    21,    59,    58,     1,   208,   280,   252,
       9,   438,    59,   221,     1,    96,   432,   110,   111,    69,
     114,   115,   155,   209,    58,   120,    10,    64,   122,   123,
     229,    59,   127,   128,   210,   169,   170,  -200,   150,   154,
     151,   152,    58,   304,   305,   466,   190,   157,   158,    59,
     471,   162,   163,    16,   209,   167,   168,   141,    57,   531,
      17,   263,   264,    64,    17,   188,  -204,   265,   433,    60,
    -200,    60,   419,   415,    73,   301,   395,   266,   267,    59,
     268,   185,   269,   413,   270,    64,   434,   424,   198,   437,
      69,  -200,    60,   390,   401,   204,   240,   341,    70,   420,
      60,    64,   241,   343,   242,   222,    89,    90,   184,   113,
       1,   271,   184,   258,    86,    58,    97,    46,    47,    60,
      67,   218,    59,   220,  -200,  -200,    84,   209,   209,   456,
     126,   339,   258,    85,   477,   547,   150,    60,   166,   253,
     258,   351,   397,   398,  -148,   359,   184,   209,  -240,  -242,
     277,   258,   184,    67,   544,    95,   367,   368,   399,   431,
     371,   377,   378,   379,   380,   256,   257,    60,   106,   184,
      99,   258,   258,   101,   272,   102,   124,   425,   103,   333,
     499,   500,    17,   104,   503,   504,   514,   515,   105,   281,
     303,    93,    94,   435,   108,   346,   243,   116,   117,   164,
     484,   485,   276,   337,   112,   171,   486,   487,   186,   107,
      60,   109,   189,   282,   184,   283,   284,   285,   286,   287,
     118,   121,   142,   143,   144,   145,   209,    64,   119,   288,
     536,   289,   382,   125,   129,   388,   184,   540,    67,   156,
     159,   366,   184,   207,   191,   192,   427,   428,   219,   161,
     193,   381,   223,   165,   384,   553,   554,   555,   372,   439,
     196,   194,   373,   374,   197,   375,   200,   396,    11,    12,
      13,   203,    14,   234,   205,   209,   224,   225,   495,   226,
      26,    27,   227,   462,    28,   351,   290,   291,   235,   254,
     236,   237,   239,   238,   259,   249,   255,   258,   472,    29,
      30,    31,    32,    33,   408,   423,   481,   298,   292,   260,
     293,   209,   302,   331,   299,   430,   -26,   300,   376,   332,
     209,   338,   440,   340,   342,   209,    75,   209,   209,    76,
     358,   360,   454,   365,   429,   209,   453,    77,   455,    78,
      79,   458,    80,    81,    82,    83,   369,   346,   364,   209,
     370,   502,   385,   209,   209,   442,   209,   386,   383,   467,
     387,   389,   391,   457,   402,    58,   443,   444,    64,    17,
     392,   510,    59,   445,   446,   447,   448,   393,   403,   394,
     404,   469,   449,   450,   407,   409,   475,   476,   412,   406,
     479,   480,   411,   414,   360,   418,   494,   426,   209,   209,
     209,   537,   538,   441,   539,    32,   459,    48,   423,    49,
      50,   209,    51,    52,    53,    54,   451,   549,   209,   209,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   131,   132,   133,   134,   465,   135,   470,   436,   136,
     137,   138,   139,   209,   454,   473,   461,   494,   453,   478,
     468,   209,   508,   482,   483,   488,   489,   496,   490,   491,
      60,   498,   209,   505,   501,   506,   209,   507,   509,   525,
     454,   511,   512,   516,   453,   513,   532,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   517,   326,   519,
     327,   520,   528,   526,   550,   551,   552,   527,   529,   530,
     534,   535,   533,   209,   209,   209,   543,   541,   548,   209,
     556,   328,   557,   559,   560,    15,   130,   460,   202,   558,
     251,   521,   497,   546,   349,   416,   279,   348,   464,   542,
     463,   405,   350,   452,    66,     0,   153
};

static const yytype_int16 yycheck[] =
{
       1,   150,   257,    28,    10,    26,    27,    28,    33,   241,
     242,   243,   246,   125,     3,    29,     3,    18,    19,    20,
      21,    10,   237,    10,   366,    10,    29,    25,    49,    50,
     364,    52,    53,    29,    29,    31,    37,     3,    29,    12,
      13,    14,    22,    16,    10,     3,     7,   159,   218,   198,
       0,   385,    10,   165,     7,    56,    51,    78,    79,    32,
      81,    82,   105,    10,     3,    86,     9,     6,    89,    90,
     182,    10,    93,    94,   161,   118,   119,    24,    99,   104,
     101,   102,     3,   232,   233,   419,   129,   108,   109,    10,
     424,   112,   113,   142,    10,   116,   117,    98,    96,    52,
       3,     4,     5,     6,     3,   126,    22,    10,   122,    98,
     116,    98,     3,   116,   141,   227,   331,    20,    21,    10,
      23,   122,    25,   114,    27,     6,   381,   469,   149,   384,
     103,   116,    98,   303,   114,   156,    17,   249,     3,    30,
      98,     6,    23,   255,    25,   166,   136,   136,   121,   136,
       7,    54,   125,    29,   135,     3,   133,    23,    24,    98,
     185,   162,    10,   164,     7,     7,   141,    10,    10,   401,
     136,   405,    29,   141,   429,    51,   197,    98,   136,   200,
      29,   268,    15,    16,     7,   272,   159,    10,    31,    31,
     215,    29,   165,   218,    32,   141,   283,   284,    31,    48,
     287,   288,   289,   290,   291,   206,   207,    98,    74,   182,
     117,    29,    29,   108,   117,   108,    91,    35,   114,   240,
     475,   476,     3,   133,   479,   480,    43,    44,   139,    10,
     231,   135,   136,   382,   136,   256,   117,   135,   136,   114,
       4,     5,   215,   244,   136,   120,     4,     5,   123,   137,
      98,   135,   127,    34,   227,    36,    37,    38,    39,    40,
     140,   130,   110,   111,   112,   113,    10,     6,   142,    50,
     525,    52,   293,   133,   142,   300,   249,   532,   303,   135,
     130,   282,   255,   158,    96,    96,   373,   374,   163,   133,
      93,   292,   167,   133,   295,   550,   551,   552,    42,   386,
     116,   103,    46,    47,   114,    49,   107,   332,   138,   139,
     140,     8,   142,   188,   120,    10,   123,     8,   467,     8,
     105,   106,    53,   410,   109,   412,   107,   108,     8,   204,
     102,   102,   102,    96,    28,   115,   119,    29,   425,   124,
     125,   126,   127,   128,   345,   366,   433,   222,   129,    10,
     131,    10,   141,   102,   123,   376,   141,   122,   102,   101,
      10,    19,   387,    18,   123,    10,   118,    10,    10,   121,
      26,    10,   397,   141,   375,    10,   397,   129,   399,   131,
     132,   406,   134,   135,   136,   137,    50,   408,   117,    10,
      50,   478,   117,    10,    10,   396,    10,    35,   141,   420,
     122,   136,    85,   404,    24,     3,     4,     5,     6,     3,
      87,   498,    10,    11,    12,    13,    14,    95,   116,    95,
     104,   422,    20,    21,   141,   141,   427,   428,   114,   122,
     431,   432,    22,    24,    10,   136,   457,    41,    10,    10,
      10,   528,   529,    95,   531,   127,   136,   129,   469,   131,
     132,    10,   134,   135,   136,   137,    54,   544,    10,    10,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    89,    90,    91,    92,   116,    94,    31,   135,    97,
      98,    99,   100,    10,   509,    10,   135,   508,   509,    45,
     141,    10,   493,   141,   116,    16,    25,    34,    16,    22,
      98,   112,    10,   129,   141,     4,    10,   141,   117,   510,
     535,   141,   141,   141,   535,    50,   517,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    33,    86,    24,
      88,   105,   122,    50,   545,   546,   547,    50,   122,    50,
     116,   114,   141,    10,    10,    10,   141,    52,    50,    10,
     141,   109,   141,    50,    50,    10,    96,   408,   152,   555,
     197,   508,   469,   538,   259,   362,   216,   258,   413,   535,
     412,   338,   261,   397,    28,    -1,   103
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,   144,   145,   146,   147,   218,   219,   219,     0,
       9,   138,   139,   140,   142,   146,   142,     3,   217,   217,
     217,   217,   219,   219,   219,   219,   105,   106,   109,   124,
     125,   126,   127,   128,   150,   151,   152,   153,   154,   155,
     156,   158,   164,   171,   173,   174,   152,   152,   129,   131,
     132,   134,   135,   136,   137,   148,   149,   151,     3,    10,
      98,   214,   228,   214,     6,   214,   215,   220,   216,   217,
       3,   220,   221,   141,   219,   118,   121,   129,   131,   132,
     134,   135,   136,   137,   141,   141,   135,   214,   214,   136,
     136,   214,   214,   135,   136,   141,   219,   133,   176,   117,
     165,   108,   108,   114,   133,   139,   152,   137,   136,   135,
     214,   214,   136,   136,   214,   214,   135,   136,   140,   142,
     214,   130,   214,   214,   165,   133,   136,   214,   214,   142,
     148,    89,    90,    91,    92,    94,    97,    98,    99,   100,
     177,   219,   110,   111,   112,   113,   167,   168,   169,   170,
     214,   214,   214,   216,   220,   218,   135,   214,   214,   130,
     157,   133,   214,   214,   165,   133,   136,   214,   214,   218,
     218,   165,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,   181,   217,   219,   165,   181,   214,   165,
     218,    96,    96,    93,   103,   175,   116,   114,   214,   157,
     107,   172,   172,     8,   214,   120,   159,   165,   181,    10,
     189,   190,   191,   192,   193,   194,   196,   224,   219,   165,
     219,   181,   214,   165,   123,     8,     8,    53,   182,   181,
     160,   161,   214,   215,   165,     8,   102,   102,    96,   102,
      17,    23,    25,   117,   207,   208,   209,   210,   220,   115,
     166,   168,   157,   214,   165,   119,   219,   219,    29,    28,
      10,   198,   225,     4,     5,    10,    20,    21,    23,    25,
      27,    54,   117,   199,   200,   201,   217,   220,   226,   194,
     160,    10,    34,    36,    37,    38,    39,    40,    50,    52,
     107,   108,   129,   131,   183,   184,   217,   222,   165,   123,
     122,   181,   141,   219,   157,   157,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    86,    88,   109,   178,
     178,   102,   101,   214,   207,   207,   207,   219,    19,   210,
      18,   181,   123,   181,   162,   163,   214,   183,   190,   191,
     192,   189,   204,   205,   206,   189,   202,   203,    26,   189,
      10,   195,   197,   223,   117,   141,   219,   189,   189,    50,
      50,   189,    42,    46,    47,    49,   102,   189,   189,   189,
     189,   219,   214,   141,   219,   117,    35,   122,   220,   136,
     160,    85,    87,    95,    95,   178,   220,    15,    16,    31,
      22,   114,    24,   116,   104,   209,   122,   141,   219,   141,
      31,    22,   114,   114,    24,   116,   195,   202,   136,     3,
      30,   187,   188,   214,   228,    35,    41,   189,   189,   219,
     214,    48,    51,   122,   183,   157,   135,   183,   202,   189,
     220,    95,   219,     4,     5,    11,    12,    13,    14,    20,
      21,    54,   213,   214,   220,   214,   207,   219,   220,   136,
     162,   135,   189,   205,   203,   116,   202,   214,   141,   219,
      31,   202,   189,    10,   227,   219,   219,   183,    45,   219,
     219,   189,   141,   116,     4,     5,     4,     5,    16,    25,
      16,    22,   179,   180,   214,   157,    34,   187,   112,   183,
     183,   141,   189,   183,   183,   129,     4,   141,   219,   117,
     189,   141,   141,    50,    43,    44,   141,    33,   185,    24,
     105,   179,   211,   212,   213,   219,    50,    50,   122,   122,
      50,    52,   219,   141,   116,   114,   183,   189,   189,   189,
     183,    52,   212,   141,    32,   186,   186,    51,    50,   189,
     219,   219,   219,   183,   183,   183,   141,   141,   185,    50,
      50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   143,   144,   145,   146,   146,   147,   147,   147,   147,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   151,   152,   152,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   154,   155,   155,   155,
     155,   156,   157,   157,   158,   158,   158,   158,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   164,
     164,   164,   164,   165,   166,   166,   167,   167,   168,   168,
     169,   169,   169,   170,   170,   170,   171,   171,   172,   172,
     173,   174,   175,   175,   176,   176,   176,   176,   176,   176,
     176,   177,   177,   177,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   179,   179,   180,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   182,   182,   183,   183,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   185,   185,
     185,   186,   186,   187,   187,   188,   188,   188,   188,   189,
     189,   190,   190,   191,   192,   192,   193,   194,   194,   195,
     195,   196,   197,   198,   199,   199,   200,   200,   200,   200,
     200,   200,   200,   201,   201,   201,   201,   201,   201,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   207,   208,
     208,   209,   209,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   211,   211,   212,   212,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     214,   214,   214,   215,   216,   216,   217,   218,   218,   219,
     219,   220,   221,   221,   222,   223,   224,   225,   226,   227,
     228
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     9,     9,     9,    10,
       3,     0,     1,     3,     4,     5,     7,     4,     2,     4,
       3,     4,     4,     4,     2,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       1,     4,     2,     0,     5,     7,     8,     9,     5,     6,
       3,     0,     3,     0,     2,     2,     3,     0,     1,     8,
       9,     9,     8,     4,     2,     0,     1,     0,     3,     1,
       3,     2,     1,     1,     1,     1,     5,     5,     2,     0,
       3,    12,     5,     0,     2,     2,     2,     6,     6,     7,
       2,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     4,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     0,     3,     0,     3,     8,     6,     7,
       7,     7,    13,    13,    10,     2,     2,     2,     1,     2,
       4,     4,     2,     4,     5,     5,     3,     1,     7,     3,
       0,     2,     0,     3,     0,     2,     3,     2,     2,     3,
       1,     3,     1,     1,     3,     1,     3,     2,     0,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     1,     1,     0,     3,     1,     3,     1,     3,
       1,     2,     1,     3,     5,     3,     1,     2,     3,     5,
       5,     3,     1,     0,     3,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     2,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     7,     0,     9,    15,     0,
       0,    17,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,    27,    29,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    37,    39,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,    47,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    65,    67,     0,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   178,     0,   178,     0,   178,     0,   178,     0,   178,
       0,   178,     0,   178,     0,   178,     0,   180,     0,   178,
       0,   178,     0,   178,     0,   178,     0,   178,     0,   178,
       0,   178,     0,   180,     0,   178,     0,   178,     0,   178,
       0,   178,     0,   178,     0,   178,     0,   178,     0,   178,
       0,   178,     0,   178,     0,   178,     0,   178,     0,   178,
       0,   178,     0,   178,     0,   178,     0,   178,     0,   178,
       0
};



YYSTYPE yylval;

int yynerrs;
int yychar;

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr, yynomem } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState
{
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yyval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yyval;
  } yysemantics;
};

struct yyGLRStateSet
{
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption
{
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME_LITERAL",
  "INTEGER_LITERAL", "DOUBLE_LITERAL", "STRING_LITERAL", "SEPARATOR",
  "END_OF_UNIT", "NEXT_UNIT", "yykw_THISCANNEVERHAPPEN", "yykw_input",
  "yykw_output", "yytk_PLUS", "yytk_MINUS", "yytk_EQUAL", "yytk_GREATER",
  "yytk_LESS", "yytk_EXCLAM", "yytk_BAR", "yykw_false", "yykw_true",
  "yytk_RBRACE", "yytk_LBRACE", "yytk_RBRACKET", "yytk_LBRACKET",
  "yykw_result", "yykw_the", "yykw_and", "yykw_or", "yykw_register",
  "yytk_COLON", "yykw_by", "yykw_else", "yykw_bytecode", "yykw_into",
  "yykw_put", "yykw_return", "yykw_exit", "yykw_next", "yykw_throw",
  "yykw_each", "yykw_for", "yykw_down", "yykw_up", "yykw_from",
  "yykw_until", "yykw_while", "yykw_times", "yykw_forever", "yykw_repeat",
  "yykw_then", "yykw_if", "yykw_of", "yykw_nothing", "yykw_List",
  "yykw_Array", "yykw_Data", "yykw_String", "yykw_Number", "yykw_Real",
  "yykw_Integer", "yykw_Boolean", "yykw_any", "yykw_optional",
  "yykw_sequence",
  "yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK",
  "yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK",
  "yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK",
  "yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK",
  "yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK",
  "yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK",
  "yykw_classification", "yykw_comparison", "yykw_concatenation",
  "yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK",
  "yykw_addition", "yykw_multiplication", "yykw_modifier",
  "yykw_exponentiation", "yykw_conversion", "yykw_constructor",
  "yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK",
  "yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK",
  "yykw_subscript", "yykw_call", "yykw_function", "yykw_resolution",
  "yykw_scope", "yykw_right", "yykw_left", "yykw_neutral", "yykw_phrase",
  "yykw_binary", "yykw_postfix", "yykw_precedence", "yykw_operator",
  "yykw_prefix", "yykw_iterator", "yykw_expression", "yykw_statement",
  "yykw_message", "yykw_with", "yykw_deprecate", "yykw_begin",
  "yykw_syntax", "yykw_event", "yykw_set", "yykw_get", "yykw_property",
  "yykw_inout", "yykw_out", "yykw_in", "yytk_DOT_DOT_DOT", "yytk_COMMA",
  "yykw_returns", "yytk_RPAREN", "yytk_LPAREN",
  "yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK", "yykw_on",
  "yykw_based", "yykw_enum", "yykw_to", "yykw_binds", "yykw_private",
  "yykw_protected", "yykw_public", "yykw_use", "yykw_metadata",
  "yykw_unsafe", "yykw_as", "yykw_variable", "yykw_constant", "yykw_is",
  "yykw_record", "yykw_handler", "yykw_type", "yykw_foreign",
  "yykw_import", "yykw_library", "yykw_widget", "yykw_end", "yykw_module",
  "$accept", "ROOT_", "Parse", "ModuleList", "Module", "ImportDefinitions",
  "ImportDefinition", "Metadata", "Import", "Definitions", "Definition",
  "ConstantDefinition", "Access", "VariableDefinition",
  "OptionalTypeClause", "TypeDefinition", "OptionalBaseType",
  "RecordFields", "RecordField", "EnumFields", "EnumField",
  "HandlerDefinition", "Signature", "OptionalReturnsClause",
  "OptionalParameterList", "ParameterList", "Parameter", "Mode",
  "PropertyDefinition", "OptionalSetClause", "EventDefinition",
  "SyntaxDefinition", "SyntaxWarnings", "SyntaxClass", "SyntaxAssoc",
  "SyntaxPrecedence", "SyntaxMethods", "SyntaxMethod", "Type",
  "OptionalElementType", "Statements", "Statement", "IfStatementElseIfs",
  "RepeatStatementOptionalBy", "Bytecodes", "Bytecode", "Expression",
  "AndExpression", "NormalExpression", "FlatExpression",
  "FlatExpressionTerm", "FlatExpressionPrefixOperators",
  "FlatExpressionPostfixOperators", "FlatExpressionPrefixOperator",
  "FlatExpressionPostfixOperator", "FlatExpressionBinaryOperator",
  "FlatExpressionOperand", "TermExpression", "ConstantTermExpression",
  "OptionalExpressionList", "ExpressionList", "OptionalExpressionArray",
  "ExpressionArray", "ExpressionArrayEntry", "Syntax", "AlternateSyntax",
  "ConcatenateSyntax", "AtomicSyntax", "OptionalConstantList",
  "ConstantList", "Constant", "Identifier", "StringyIdentifier",
  "IdentifierList", "QualifiedId", "OptionalSeparator", "Separator",
  "StringLiteral", "StringOrNameLiteral", "CustomStatements",
  "CustomPostfixOperators", "CustomPrefixOperators",
  "CustomBinaryOperators", "CustomTerms", "CustomIterators",
  "CustomKeywords", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)





/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule);

# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_REDUCE_PRINT(Args)

#endif /* !YYDEBUG */



/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yyval = s->yysemantics.yyval;
      else
        /* The effect of using yyval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp)
{
  yysymbol_kind_t yytoken;
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT, yynomem for YYNOMEM.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyrule, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp, YYPTRDIFF_T yyk,
              YYSTYPE* yyvalp)
{
  const yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow = 1;
  YY_USE (yyvalp);
  YY_USE (yyk);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYNOMEM
# define YYNOMEM return yynomem
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yyval;
  /* If yyk == -1, we are running a deferred action on a temporary
     stack.  In that case, YY_REDUCE_PRINT must not play with YYFILL,
     so pretend the stack is "normal". */
  YY_REDUCE_PRINT ((yynormal || yyk == -1, yyvsp, yyk, yyrule));
  switch (yyrule)
    {
  case 2: /* ROOT_: Parse  */
#line 172 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yyv_Modules;
yy yy_1_1;
yy yy_2_2_3_1;
yy yy_2_2_4_1;
yy yy_2_3_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1983 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 3: /* Parse: ModuleList  */
#line 207 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Modules;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Modules = yy_1_1;
yy_0_1 = yyv_Modules;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1999 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 4: /* ModuleList: Module NEXT_UNIT ModuleList  */
#line 224 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 2028 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 5: /* ModuleList: Module  */
#line 252 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2054 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 6: /* Module: OptionalSeparator yykw_module QualifiedId Separator Definitions yykw_end yykw_module OptionalSeparator END_OF_UNIT  */
#line 285 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 2109 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 7: /* Module: OptionalSeparator yykw_widget QualifiedId Separator Definitions yykw_end yykw_widget OptionalSeparator END_OF_UNIT  */
#line 347 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 2149 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 8: /* Module: OptionalSeparator yykw_library QualifiedId Separator Definitions yykw_end yykw_library OptionalSeparator END_OF_UNIT  */
#line 394 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 2189 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 9: /* Module: OptionalSeparator yykw_import yykw_module QualifiedId Separator ImportDefinitions yykw_end yykw_module OptionalSeparator END_OF_UNIT  */
#line 442 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_4 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[0];
}
#line 2229 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 10: /* ImportDefinitions: ImportDefinition Separator ImportDefinitions  */
#line 483 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Left;
yy yy_1_1;
yy yyv_Right;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 2258 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 11: /* ImportDefinitions: %empty  */
#line 510 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2273 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 12: /* ImportDefinition: Import  */
#line 524 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Import;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Import = yy_1_1;
yy_0_1 = yyv_Import;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2289 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 13: /* ImportDefinition: yykw_foreign yykw_type Identifier  */
#line 541 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 2332 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 14: /* ImportDefinition: yykw_handler yykw_type Identifier Signature  */
#line 586 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2383 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 15: /* ImportDefinition: yykw_foreign yykw_handler yykw_type Identifier Signature  */
#line 640 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 2434 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 16: /* ImportDefinition: yykw_record yykw_type Identifier Separator RecordFields yykw_end yykw_type  */
#line 696 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 2481 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 17: /* ImportDefinition: yykw_type Identifier yykw_is Type  */
#line 745 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2521 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 18: /* ImportDefinition: yykw_constant Identifier  */
#line 785 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 2558 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 19: /* ImportDefinition: yykw_variable Identifier yykw_as Type  */
#line 824 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2598 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 20: /* ImportDefinition: yykw_handler Identifier Signature  */
#line 865 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 2646 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 21: /* ImportDefinition: yykw_unsafe yykw_handler Identifier Signature  */
#line 915 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2701 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 22: /* ImportDefinition: yykw_foreign yykw_handler Identifier Signature  */
#line 972 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2744 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 23: /* Metadata: yykw_metadata StringOrNameLiteral yykw_is StringLiteral  */
#line 1017 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2780 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 24: /* Import: yykw_use IdentifierList  */
#line 1053 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Position = yy_2;
yyv_Identifiers = yy_3_1;
yy_4_1 = yyv_Position;
yy_4_2 = yyv_Identifiers;
ExpandImports(yy_4_1, yy_4_2, &yy_4_3);
yyv_ImportList = yy_4_3;
yy_0_1 = yyv_ImportList;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 2808 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 25: /* Definitions: Definition Separator Definitions  */
#line 1082 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 2837 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 26: /* Definitions: %empty  */
#line 1109 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2852 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 27: /* Definition: Metadata  */
#line 1123 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Metadata;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Metadata = yy_1_1;
yy_0_1 = yyv_Metadata;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2868 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 28: /* Definition: Import  */
#line 1138 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Import;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Import = yy_1_1;
yy_0_1 = yyv_Import;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2884 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 29: /* Definition: ConstantDefinition  */
#line 1153 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Constant;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Constant = yy_1_1;
yy_0_1 = yyv_Constant;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2900 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 30: /* Definition: TypeDefinition  */
#line 1168 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Type = yy_1_1;
yy_0_1 = yyv_Type;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2916 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 31: /* Definition: VariableDefinition  */
#line 1183 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Variable;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Variable = yy_1_1;
yy_0_1 = yyv_Variable;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2932 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 32: /* Definition: HandlerDefinition  */
#line 1198 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Handler;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Handler = yy_1_1;
yy_0_1 = yyv_Handler;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2948 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 33: /* Definition: PropertyDefinition  */
#line 1213 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Property;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Property = yy_1_1;
yy_0_1 = yyv_Property;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2964 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 34: /* Definition: EventDefinition  */
#line 1228 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Event;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Event = yy_1_1;
yy_0_1 = yyv_Event;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2980 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 35: /* Definition: SyntaxDefinition  */
#line 1243 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Syntax = yy_1_1;
yy_0_1 = yyv_Syntax;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2996 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 36: /* ConstantDefinition: Access yykw_constant Identifier yykw_is Expression  */
#line 1262 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 3039 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 37: /* Access: %empty  */
#line 1303 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 3054 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 38: /* Access: yykw_public  */
#line 1317 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3069 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 39: /* Access: yykw_protected  */
#line 1331 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3084 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 40: /* Access: yykw_private  */
#line 1345 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3099 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 41: /* VariableDefinition: Access yykw_variable Identifier OptionalTypeClause  */
#line 1362 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 3142 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 42: /* OptionalTypeClause: yykw_as Type  */
#line 1405 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Type = yy_2_1;
yy_0_1 = yyv_Type;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3158 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 43: /* OptionalTypeClause: %empty  */
#line 1419 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 3177 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 44: /* TypeDefinition: Access yykw_type Identifier yykw_is Type  */
#line 1441 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 3220 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 45: /* TypeDefinition: Access yykw_foreign yykw_type Identifier yykw_binds yykw_to StringLiteral  */
#line 1489 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_8_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0];
}
#line 3270 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 46: /* TypeDefinition: Access yykw_record yykw_type Identifier Separator RecordFields yykw_end yykw_type  */
#line 1545 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 3320 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 47: /* TypeDefinition: Access yykw_enum yykw_type Identifier OptionalBaseType Separator EnumFields yykw_end yykw_type  */
#line 1602 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_8_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 3377 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 48: /* TypeDefinition: Access yykw_handler yykw_type Identifier Signature  */
#line 1662 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 3431 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 49: /* TypeDefinition: Access yykw_foreign yykw_handler yykw_type Identifier Signature  */
#line 1720 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 3485 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 50: /* OptionalBaseType: yykw_based yykw_on Type  */
#line 1775 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_BaseType;
yy yy_3_1;
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_BaseType = yy_3_1;
yy_0_1 = yyv_BaseType;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 3501 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 51: /* OptionalBaseType: %empty  */
#line 1789 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 3523 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 52: /* RecordFields: RecordField Separator RecordFields  */
#line 1892 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Rest;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 3552 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 53: /* RecordFields: %empty  */
#line 1919 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 3567 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 54: /* RecordField: Identifier OptionalTypeClause  */
#line 1934 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3603 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 55: /* RecordField: StringyIdentifier OptionalTypeClause  */
#line 1970 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3639 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 56: /* EnumFields: EnumField Separator EnumFields  */
#line 2007 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Rest;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 3668 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 57: /* EnumFields: %empty  */
#line 2034 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 3683 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 58: /* EnumField: Identifier  */
#line 2048 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3712 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 59: /* HandlerDefinition: Access yykw_handler Identifier Signature Separator Statements yykw_end yykw_handler  */
#line 2083 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 3766 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 60: /* HandlerDefinition: Access yykw_unsafe yykw_handler Identifier Signature Separator Statements yykw_end yykw_handler  */
#line 2144 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[1]);
yy_4 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_8_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 3827 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 61: /* HandlerDefinition: Access yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK yykw_foreign yykw_handler Identifier Signature yykw_binds yykw_to StringLiteral  */
#line 2212 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[1]);
yy_5 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_10_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 3877 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 62: /* HandlerDefinition: Access yykw_foreign yykw_handler Identifier Signature yykw_binds yykw_to StringLiteral  */
#line 2268 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[1]);
yy_4 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_9_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 3934 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 63: /* Signature: yytk_LPAREN OptionalParameterList yytk_RPAREN OptionalReturnsClause  */
#line 2327 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Parameters;
yy yy_2_1;
yy yyv_Result;
yy yy_4_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 3963 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 64: /* OptionalReturnsClause: yykw_returns Type  */
#line 2356 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy yyv_Type;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Position = yy_2;
yyv_Type = yy_3_1;
yy_0_1 = yyv_Type;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3983 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 65: /* OptionalReturnsClause: %empty  */
#line 2374 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 4002 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 66: /* OptionalParameterList: ParameterList  */
#line 2392 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_List;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_List = yy_1_1;
yy_0_1 = yyv_List;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4018 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 67: /* OptionalParameterList: %empty  */
#line 2406 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 4033 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 68: /* ParameterList: Parameter yytk_COMMA ParameterList  */
#line 2422 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4062 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 69: /* ParameterList: Parameter  */
#line 2450 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4088 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 70: /* Parameter: Mode Identifier OptionalTypeClause  */
#line 2477 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 4131 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 71: /* Parameter: Identifier OptionalTypeClause  */
#line 2520 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4171 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 72: /* Parameter: yytk_DOT_DOT_DOT  */
#line 2559 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4221 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 73: /* Mode: yykw_in  */
#line 2608 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4236 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 74: /* Mode: yykw_out  */
#line 2622 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4251 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 75: /* Mode: yykw_inout  */
#line 2636 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4266 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 76: /* PropertyDefinition: yykw_property Identifier yykw_get Identifier OptionalSetClause  */
#line 2654 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 4313 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 77: /* PropertyDefinition: yykw_property StringyIdentifier yykw_get Identifier OptionalSetClause  */
#line 2704 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 4360 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 78: /* OptionalSetClause: yykw_set Identifier  */
#line 2751 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Setter;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Setter = yy_2_1;
yy_0_1_1 = yyv_Setter;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4382 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 79: /* OptionalSetClause: %empty  */
#line 2771 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 4397 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 80: /* EventDefinition: yykw_event Identifier Signature  */
#line 2787 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 4437 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 81: /* SyntaxDefinition: yykw_syntax Identifier SyntaxClass Separator SyntaxWarnings Syntax Separator yykw_begin Separator SyntaxMethods yykw_end yykw_syntax  */
#line 2837 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_11_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-11)].yystate.yysemantics.yyval.attr[0];
}
#line 4498 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 82: /* SyntaxWarnings: yykw_deprecate yykw_with yykw_message StringLiteral Separator  */
#line 2901 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Message;
yy yy_4_1;
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Message = yy_4_1;
yy_0_1_1 = yyv_Message;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 4520 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 83: /* SyntaxWarnings: %empty  */
#line 2921 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 4535 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 84: /* SyntaxClass: yykw_is yykw_statement  */
#line 2936 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4550 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 85: /* SyntaxClass: yykw_is yykw_expression  */
#line 2951 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4565 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 86: /* SyntaxClass: yykw_is yykw_iterator  */
#line 2966 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4580 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 87: /* SyntaxClass: yykw_is yykw_prefix yykw_operator yykw_with SyntaxPrecedence yykw_precedence  */
#line 2985 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Precedence;
yy yy_5_1;
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Precedence = yy_5_1;
yy_0_1_1 = yyv_Precedence;
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0];
}
#line 4602 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 88: /* SyntaxClass: yykw_is yykw_postfix yykw_operator yykw_with SyntaxPrecedence yykw_precedence  */
#line 3011 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Precedence;
yy yy_5_1;
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Precedence = yy_5_1;
yy_0_1_1 = yyv_Precedence;
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0];
}
#line 4624 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 89: /* SyntaxClass: yykw_is SyntaxAssoc yykw_binary yykw_operator yykw_with SyntaxPrecedence yykw_precedence  */
#line 3038 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Assoc;
yy yy_2_1;
yy yyv_Precedence;
yy yy_6_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 4653 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 90: /* SyntaxClass: yykw_is yykw_phrase  */
#line 3067 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4668 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 91: /* SyntaxAssoc: yykw_neutral  */
#line 3081 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4683 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 92: /* SyntaxAssoc: yykw_left  */
#line 3095 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4698 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 93: /* SyntaxAssoc: yykw_right  */
#line 3109 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4713 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 94: /* SyntaxPrecedence: yykw_scope yykw_resolution  */
#line 3124 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4728 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 95: /* SyntaxPrecedence: yykw_function yykw_call  */
#line 3139 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4743 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 96: /* SyntaxPrecedence: yykw_subscript  */
#line 3153 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4758 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 97: /* SyntaxPrecedence: yykw_property  */
#line 3167 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 4;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4773 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 98: /* SyntaxPrecedence: yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK  */
#line 3181 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4788 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 99: /* SyntaxPrecedence: yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK  */
#line 3195 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 7;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4803 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 100: /* SyntaxPrecedence: yykw_constructor  */
#line 3209 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4818 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 101: /* SyntaxPrecedence: yykw_conversion  */
#line 3223 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4833 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 102: /* SyntaxPrecedence: yykw_exponentiation  */
#line 3237 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4848 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 103: /* SyntaxPrecedence: yykw_modifier  */
#line 3251 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 8;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4863 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 104: /* SyntaxPrecedence: yykw_multiplication  */
#line 3265 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4878 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 105: /* SyntaxPrecedence: yykw_addition  */
#line 3279 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 11;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4893 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 106: /* SyntaxPrecedence: yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK  */
#line 3293 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4908 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 107: /* SyntaxPrecedence: yykw_concatenation  */
#line 3307 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4923 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 108: /* SyntaxPrecedence: yykw_comparison  */
#line 3321 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 18;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4938 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 109: /* SyntaxPrecedence: yykw_classification  */
#line 3335 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 19;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4953 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 110: /* SyntaxPrecedence: yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK  */
#line 3349 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 14;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4968 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 111: /* SyntaxPrecedence: yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK  */
#line 3363 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4983 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 112: /* SyntaxPrecedence: yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK  */
#line 3377 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 16;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4998 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 113: /* SyntaxPrecedence: yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK  */
#line 3391 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 20;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5013 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 114: /* SyntaxPrecedence: yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK  */
#line 3405 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 21;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5028 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 115: /* SyntaxPrecedence: yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK  */
#line 3419 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 22;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5043 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 116: /* SyntaxPrecedence: yykw_sequence  */
#line 3433 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 23;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5058 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 117: /* SyntaxMethods: SyntaxMethod Separator SyntaxMethods  */
#line 3449 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 5087 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 118: /* SyntaxMethods: %empty  */
#line 3476 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 5102 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 119: /* SyntaxMethod: Identifier yytk_LPAREN OptionalConstantList yytk_RPAREN  */
#line 3493 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 5138 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 120: /* Type: QualifiedId  */
#line 3528 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5167 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 121: /* Type: yykw_optional Type  */
#line 3557 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Base;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 5196 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 122: /* Type: yykw_any  */
#line 3585 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5218 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 123: /* Type: yykw_Boolean  */
#line 3606 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5240 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 124: /* Type: yykw_Integer  */
#line 3627 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 10;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5262 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 125: /* Type: yykw_Real  */
#line 3648 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 11;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5284 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 126: /* Type: yykw_Number  */
#line 3669 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5306 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 127: /* Type: yykw_String  */
#line 3690 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 13;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5328 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 128: /* Type: yykw_Data  */
#line 3711 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 14;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5350 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 129: /* Type: yykw_Array  */
#line 3732 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5372 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 130: /* Type: yykw_List OptionalElementType  */
#line 3754 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_ElementType;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 5401 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 131: /* Type: yykw_nothing  */
#line 3782 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5423 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 132: /* OptionalElementType: yykw_of Type  */
#line 3804 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Type = yy_2_1;
yy_0_1 = yyv_Type;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 5439 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 133: /* OptionalElementType: %empty  */
#line 3818 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 5458 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 134: /* Statements: Statement Separator Statements  */
#line 3838 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Left;
yy yy_1_1;
yy yyv_Right;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 5487 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 135: /* Statements: %empty  */
#line 3865 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 22;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 5502 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 136: /* Statement: yykw_variable Identifier OptionalTypeClause  */
#line 3881 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 5538 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 137: /* Statement: yykw_if Expression yykw_then Separator Statements IfStatementElseIfs yykw_end yykw_if  */
#line 3923 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 5581 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 138: /* Statement: yykw_repeat yykw_forever Separator Statements yykw_end yykw_repeat  */
#line 3970 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Body;
yy yy_5_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0];
}
#line 5610 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 139: /* Statement: yykw_repeat Expression yykw_times Separator Statements yykw_end yykw_repeat  */
#line 4004 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 5646 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 140: /* Statement: yykw_repeat yykw_while Expression Separator Statements yykw_end yykw_repeat  */
#line 4045 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 5682 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 141: /* Statement: yykw_repeat yykw_until Expression Separator Statements yykw_end yykw_repeat  */
#line 4086 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 5718 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 142: /* Statement: yykw_repeat yykw_with Identifier yykw_from Expression yykw_up yykw_to Expression RepeatStatementOptionalBy Separator Statements yykw_end yykw_repeat  */
#line 4133 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[1]);
yy_9_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_10_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_12_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.attr[0];
}
#line 5775 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 143: /* Statement: yykw_repeat yykw_with Identifier yykw_from Expression yykw_down yykw_to Expression RepeatStatementOptionalBy Separator Statements yykw_end yykw_repeat  */
#line 4201 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-10)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[1]);
yy_9_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_10_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_12_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-12)].yystate.yysemantics.yyval.attr[0];
}
#line 5832 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 144: /* Statement: yykw_repeat yykw_for yykw_each CustomIterators yykw_in Expression Separator Statements yykw_end yykw_repeat  */
#line 4266 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_9_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.attr[0];
}
#line 5875 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 145: /* Statement: yykw_throw Expression  */
#line 4309 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Value;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 5904 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 146: /* Statement: yykw_next yykw_repeat  */
#line 4338 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 11;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 5926 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 147: /* Statement: yykw_exit yykw_repeat  */
#line 4360 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 12;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 5948 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 148: /* Statement: yykw_return  */
#line 4381 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 5974 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 149: /* Statement: yykw_return Expression  */
#line 4407 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Value;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6003 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 150: /* Statement: yykw_put Expression yykw_into Expression  */
#line 4438 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 6039 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 151: /* Statement: yykw_set Expression yykw_to Expression  */
#line 4476 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 6075 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 152: /* Statement: yykw_get Expression  */
#line 4512 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Value;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6104 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 153: /* Statement: QualifiedId yytk_LPAREN OptionalExpressionList yytk_RPAREN  */
#line 4543 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 6140 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 154: /* Statement: yykw_bytecode Separator Bytecodes yykw_end yykw_bytecode  */
#line 4582 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Opcodes;
yy yy_4_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 6169 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 155: /* Statement: yykw_unsafe Separator Statements yykw_end yykw_unsafe  */
#line 4614 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Body;
yy yy_4_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 6198 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 156: /* Statement: CustomStatements yykw_into Expression  */
#line 4644 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6234 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 157: /* Statement: CustomStatements  */
#line 4679 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Statement;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Statement = yy_1_1;
yy_0_1 = yyv_Statement;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6250 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 158: /* IfStatementElseIfs: yykw_else yykw_if Expression yykw_then Separator Statements IfStatementElseIfs  */
#line 4700 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_8_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0];
}
#line 6293 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 159: /* IfStatementElseIfs: yykw_else Separator Statements  */
#line 4744 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy yyv_Else;
yy yy_4_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Position = yy_2;
yyv_Else = yy_4_1;
yy_0_1 = yyv_Else;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 6313 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 160: /* IfStatementElseIfs: %empty  */
#line 4762 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 22;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 6328 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 161: /* RepeatStatementOptionalBy: yykw_by Expression  */
#line 4777 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_By;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_By = yy_2_1;
yy_0_1 = yyv_By;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6344 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 162: /* RepeatStatementOptionalBy: %empty  */
#line 4791 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 18;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 6359 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 163: /* Bytecodes: Bytecode Separator Bytecodes  */
#line 4807 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Left;
yy yy_1_1;
yy yyv_Right;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 6388 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 164: /* Bytecodes: %empty  */
#line 4834 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 5;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 6403 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 165: /* Bytecode: Identifier yytk_COLON  */
#line 4849 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6432 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 166: /* Bytecode: yykw_register Identifier OptionalTypeClause  */
#line 4879 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 6468 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 167: /* Bytecode: NAME_LITERAL OptionalExpressionList  */
#line 4915 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6504 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 168: /* Bytecode: CustomKeywords OptionalExpressionList  */
#line 4951 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6546 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 169: /* Expression: Expression yykw_or AndExpression  */
#line 4994 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6582 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 170: /* Expression: AndExpression  */
#line 5029 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Expr;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Expr = yy_1_1;
yy_0_1 = yyv_Expr;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6598 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 171: /* AndExpression: AndExpression yykw_and NormalExpression  */
#line 5046 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6634 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 172: /* AndExpression: NormalExpression  */
#line 5081 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Result;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Result = yy_1_1;
yy_0_1 = yyv_Result;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6650 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 173: /* NormalExpression: FlatExpression  */
#line 5096 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy yy_2_1;
yy yyv_Result;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal = yy_1_1;
yy_2_1 = yyv_Sentinal;
ReorderOperatorExpression(yy_2_1);
ProcessOperatorExpression(&yy_3_1);
yyv_Result = yy_3_1;
yy_0_1 = yyv_Result;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6673 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 174: /* FlatExpression: FlatExpressionTerm FlatExpressionBinaryOperator FlatExpression  */
#line 5120 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy yy_2_1;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 6693 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 175: /* FlatExpression: FlatExpressionTerm  */
#line 5139 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6709 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 176: /* FlatExpressionTerm: FlatExpressionPrefixOperators FlatExpressionOperand FlatExpressionPostfixOperators  */
#line 5156 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal1 = yy_1_1;
yyv_Sentinal2 = yy_2_1;
yy_4_1 = yyv_Sentinal1;
yy_4_2 = yyv_Sentinal2;
min(yy_4_1, yy_4_2, &yy_4_3);
yyv_Sentinal = yy_4_3;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 6739 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 177: /* FlatExpressionPrefixOperators: FlatExpressionPrefixOperator FlatExpressionPrefixOperators  */
#line 5186 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy yy_2_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6757 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 178: /* FlatExpressionPrefixOperators: %empty  */
#line 5202 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 6769 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 179: /* FlatExpressionPostfixOperators: FlatExpressionPostfixOperator FlatExpressionPostfixOperators  */
#line 5214 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy yy_2_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6787 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 180: /* FlatExpressionPostfixOperators: %empty  */
#line 5230 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 6799 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 181: /* FlatExpressionPrefixOperator: CustomPrefixOperators  */
#line 5241 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6815 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 182: /* FlatExpressionPostfixOperator: CustomPostfixOperators  */
#line 5256 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6831 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 183: /* FlatExpressionBinaryOperator: CustomBinaryOperators  */
#line 5271 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Sentinal;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Sentinal = yy_1_1;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6847 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 184: /* FlatExpressionOperand: TermExpression  */
#line 5286 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Term;
yy yy_1_1;
yy yy_2_1;
yy yyv_Sentinal;
yy yy_2_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Term = yy_1_1;
yy_2_1 = yyv_Term;
PushOperatorExpressionOperand(yy_2_1, &yy_2_2);
yyv_Sentinal = yy_2_2;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6869 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 185: /* FlatExpressionOperand: CustomTerms  */
#line 5307 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Term;
yy yy_1_1;
yy yy_2_1;
yy yyv_Sentinal;
yy yy_2_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Term = yy_1_1;
yy_2_1 = yyv_Term;
PushOperatorExpressionOperand(yy_2_1, &yy_2_2);
yyv_Sentinal = yy_2_2;
yy_0_1 = yyv_Sentinal;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6891 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 186: /* TermExpression: ConstantTermExpression  */
#line 5328 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Constant;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Constant = yy_1_1;
yy_0_1 = yyv_Constant;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6907 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 187: /* TermExpression: QualifiedId  */
#line 5343 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Name;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 6936 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 188: /* TermExpression: yykw_the yykw_result  */
#line 5372 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 6958 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 189: /* TermExpression: QualifiedId yytk_LPAREN OptionalExpressionList yytk_RPAREN  */
#line 5396 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 6994 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 190: /* TermExpression: yytk_LBRACKET OptionalExpressionList yytk_RBRACKET  */
#line 5433 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_List;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 7023 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 191: /* TermExpression: yytk_LBRACE OptionalExpressionArray yytk_RBRACE  */
#line 5463 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Pairs;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 7052 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 192: /* TermExpression: yytk_LPAREN Expression yytk_RPAREN  */
#line 5493 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Expression;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yyv_Expression = yy_2_1;
yy_0_1 = yyv_Expression;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 7068 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 193: /* ConstantTermExpression: yykw_nothing  */
#line 5508 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7090 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 194: /* ConstantTermExpression: yykw_true  */
#line 5529 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7112 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 195: /* ConstantTermExpression: yykw_false  */
#line 5550 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7134 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 196: /* ConstantTermExpression: INTEGER_LITERAL  */
#line 5571 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7163 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 197: /* ConstantTermExpression: DOUBLE_LITERAL  */
#line 5599 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7192 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 198: /* ConstantTermExpression: StringLiteral  */
#line 5627 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7221 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 199: /* OptionalExpressionList: ExpressionList  */
#line 5655 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_List;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_List = yy_1_1;
yy_0_1 = yyv_List;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7237 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 200: /* OptionalExpressionList: %empty  */
#line 5669 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 7252 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 201: /* ExpressionList: Expression yytk_COMMA ExpressionList  */
#line 5685 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 7281 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 202: /* ExpressionList: Expression  */
#line 5713 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Expression;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7307 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 203: /* OptionalExpressionArray: ExpressionArray  */
#line 5766 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Pairs;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Pairs = yy_1_1;
yy_0_1 = yyv_Pairs;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7323 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 204: /* OptionalExpressionArray: %empty  */
#line 5780 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 7338 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 205: /* ExpressionArray: ExpressionArrayEntry yytk_COMMA ExpressionArray  */
#line 5796 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 7367 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 206: /* ExpressionArray: ExpressionArrayEntry  */
#line 5824 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7393 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 207: /* ExpressionArrayEntry: Expression yytk_COLON Expression  */
#line 5851 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 7429 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 208: /* Syntax: AlternateSyntax  */
#line 5886 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Syntax = yy_1_1;
yy_0_1 = yyv_Syntax;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7445 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 209: /* AlternateSyntax: AlternateSyntax yytk_BAR ConcatenateSyntax  */
#line 5903 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 7481 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 210: /* AlternateSyntax: ConcatenateSyntax  */
#line 5938 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Syntax = yy_1_1;
yy_0_1 = yyv_Syntax;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7497 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 211: /* ConcatenateSyntax: ConcatenateSyntax AtomicSyntax  */
#line 5954 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 7533 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 212: /* ConcatenateSyntax: AtomicSyntax  */
#line 5989 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Syntax = yy_1_1;
yy_0_1 = yyv_Syntax;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7549 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 213: /* AtomicSyntax: yytk_LBRACE Syntax yytk_RBRACE  */
#line 6006 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Element;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 7578 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 214: /* AtomicSyntax: yytk_LBRACE Syntax yytk_COMMA Syntax yytk_RBRACE  */
#line 6038 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 7614 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 215: /* AtomicSyntax: yytk_LBRACKET Syntax yytk_RBRACKET  */
#line 6075 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Operand;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 7643 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 216: /* AtomicSyntax: StringLiteral  */
#line 6103 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7672 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 217: /* AtomicSyntax: StringLiteral yytk_EXCLAM  */
#line 6132 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7701 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 218: /* AtomicSyntax: yytk_LESS Identifier yytk_GREATER  */
#line 6162 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 7730 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 219: /* AtomicSyntax: yytk_LESS Identifier yytk_COLON Identifier yytk_GREATER  */
#line 6194 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 7766 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 220: /* AtomicSyntax: yytk_LESS Identifier yytk_EQUAL Constant yytk_GREATER  */
#line 6233 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 7802 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 221: /* AtomicSyntax: yytk_LPAREN Syntax yytk_RPAREN  */
#line 6270 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Syntax;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yyv_Syntax = yy_2_1;
yy_0_1 = yyv_Syntax;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 7818 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 222: /* OptionalConstantList: ConstantList  */
#line 6285 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_List;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_List = yy_1_1;
yy_0_1 = yyv_List;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7834 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 223: /* OptionalConstantList: %empty  */
#line 6299 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 7849 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 224: /* ConstantList: Constant yytk_COMMA ConstantList  */
#line 6315 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 7878 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 225: /* ConstantList: Constant  */
#line 6343 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7904 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 226: /* Constant: yykw_nothing  */
#line 6368 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7926 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 227: /* Constant: yykw_true  */
#line 6389 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7948 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 228: /* Constant: yykw_false  */
#line 6410 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1_1 = yyv_Position;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7970 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 229: /* Constant: INTEGER_LITERAL  */
#line 6431 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 7999 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 230: /* Constant: yytk_MINUS INTEGER_LITERAL  */
#line 6460 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 8036 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 231: /* Constant: yytk_PLUS INTEGER_LITERAL  */
#line 6497 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_2_1;
yy yyv_Position;
yy yy_3;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 8065 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 232: /* Constant: DOUBLE_LITERAL  */
#line 6525 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8094 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 233: /* Constant: yytk_MINUS DOUBLE_LITERAL  */
#line 6554 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 8129 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 234: /* Constant: yytk_PLUS DOUBLE_LITERAL  */
#line 6589 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_2_1;
yy yyv_Position;
yy yy_3;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 8158 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 235: /* Constant: StringLiteral  */
#line 6617 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8187 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 236: /* Constant: Identifier  */
#line 6645 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Value;
yy yy_1_1;
yy yyv_Position;
yy yy_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8216 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 237: /* Constant: Identifier yytk_LBRACKET INTEGER_LITERAL yytk_RBRACKET  */
#line 6676 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 8252 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 238: /* Constant: yykw_output  */
#line 6711 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8294 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 239: /* Constant: yykw_input  */
#line 6752 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8336 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 240: /* Identifier: NAME_LITERAL  */
#line 6793 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8369 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 241: /* Identifier: yykw_iterator  */
#line 6825 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8404 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 242: /* Identifier: CustomKeywords  */
#line 6859 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8443 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 243: /* StringyIdentifier: StringLiteral  */
#line 6897 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8482 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 244: /* IdentifierList: QualifiedId yytk_COMMA IdentifierList  */
#line 6937 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Head;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 8511 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 245: /* IdentifierList: QualifiedId  */
#line 6965 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Id;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8537 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 246: /* QualifiedId: NAME_LITERAL  */
#line 6990 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyv_Identifier = yy_1_1;
yyv_Position = yy_2;
yy_3_1 = yyv_Position;
yy_3_2 = yyv_Identifier;
QualifiedNameToId(yy_3_1, yy_3_2, &yy_3_3);
yyv_Id = yy_3_3;
yy_0_1 = yyv_Id;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8565 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 247: /* OptionalSeparator: Separator  */
#line 7017 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8574 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 248: /* OptionalSeparator: %empty  */
#line 7024 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yyGetPos(&(*yyvalp).attr[0]);
}
#line 8583 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 249: /* Separator: SEPARATOR Separator  */
#line 7033 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 8592 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 250: /* Separator: SEPARATOR  */
#line 7041 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8601 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 251: /* StringLiteral: STRING_LITERAL  */
#line 7049 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8647 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 252: /* StringOrNameLiteral: StringLiteral  */
#line 7094 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_String;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_String = yy_1_1;
yy_0_1 = yyv_String;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8663 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 253: /* StringOrNameLiteral: NAME_LITERAL  */
#line 7109 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Name;
yy yy_1_1;
yy yy_2_1;
yy yyv_String;
yy yy_2_2;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Name = yy_1_1;
yy_2_1 = yyv_Name;
GetStringOfNameLiteral(yy_2_1, &yy_2_2);
yyv_String = yy_2_2;
yy_0_1 = yyv_String;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8685 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 254: /* CustomStatements: yykw_THISCANNEVERHAPPEN  */
#line 7130 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 22;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8700 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 255: /* CustomPostfixOperators: yykw_THISCANNEVERHAPPEN  */
#line 7144 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8712 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 256: /* CustomPrefixOperators: yykw_THISCANNEVERHAPPEN  */
#line 7155 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8724 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 257: /* CustomBinaryOperators: yykw_THISCANNEVERHAPPEN  */
#line 7166 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yy_0_1 = ((yy)10000);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8736 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 258: /* CustomTerms: yykw_THISCANNEVERHAPPEN  */
#line 7177 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 18;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8751 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 259: /* CustomIterators: yykw_THISCANNEVERHAPPEN  */
#line 7191 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 18;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8766 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;

  case 260: /* CustomKeywords: yykw_THISCANNEVERHAPPEN  */
#line 7205 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y"
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 8784 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"
    break;


#line 8788 "Debug/Win32/obj/lc-bootstrap-compile/stage1/gen.y.c"

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), yyvalp, yylocp);

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYNOMEM
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yyval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if YYDEBUG

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yyval                       );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp, yyk,
                           yyvalp);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyk, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yyval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yyval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
      if (yyflag != yyok)
        return yyflag;
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yyval);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yyval = yys0->yysemantics.yyval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yyval = yys1->yysemantics.yyval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, -1, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yyval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yyval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yyval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yyval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yyval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yyval, &yyval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yyval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yyval = yyval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

/** Called when returning to deterministic operation to clean up the extra
 * stacks. */
static void
yycompressStack (yyGLRStack* yystackp)
{
  /* yyr is the state after the split point.  */
  yyGLRState *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  {
    yyGLRState *yyp, *yyq;
    for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
         yyp != yystackp->yysplitPoint;
         yyr = yyp, yyp = yyq, yyq = yyp->yypred)
      yyp->yypred = yyr;
  }

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}






static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
  yyerror (YY_("syntax error"));
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                             \
  do {                                          \
    switch (YYE) {                              \
    case yyok:     break;                       \
    case yyabort:  goto yyabortlab;             \
    case yyaccept: goto yyacceptlab;            \
    case yyerr:    goto yyuser_error;           \
    case yynomem:  goto yyexhaustedlab;         \
    default:       goto yybuglab;               \
    }                                           \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YY_DPRINTF ((stderr, "Stack %ld now in state %d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

 yyreturnlab:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
/* Print *YYS and its predecessors. */
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

/* Print YYS (possibly NULL) and its predecessors. */
static void
yypstates (yyGLRState* yys)
{
  if (yys == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yys);
  YY_FPRINTF ((stderr, "\n"));
}

/* Print the stack #YYK.  */
static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

/* Print all the stacks.  */
static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs




