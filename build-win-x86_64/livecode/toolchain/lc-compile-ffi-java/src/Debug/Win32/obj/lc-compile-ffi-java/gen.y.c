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
#line 1 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"

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


#line 84 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"

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
    YYUNDEF = 315,                 /* "invalid token"  */
    NAME_LITERAL = 257,            /* NAME_LITERAL  */
    INTEGER_LITERAL = 258,         /* INTEGER_LITERAL  */
    DOUBLE_LITERAL = 259,          /* DOUBLE_LITERAL  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    SEPARATOR = 261,               /* SEPARATOR  */
    END_OF_UNIT = 262,             /* END_OF_UNIT  */
    NEXT_UNIT = 263,               /* NEXT_UNIT  */
    yykw_THISCANNEVERHAPPEN = 264, /* yykw_THISCANNEVERHAPPEN  */
    yytk_DOT = 265,                /* yytk_DOT  */
    yykw_false = 266,              /* yykw_false  */
    yykw_true = 267,               /* yykw_true  */
    yytk_LBRACKET_RBRACKET = 268,  /* yytk_LBRACKET_RBRACKET  */
    yykw_nothing = 269,            /* yykw_nothing  */
    yykw_String = 270,             /* yykw_String  */
    yykw_char = 271,               /* yykw_char  */
    yykw_boolean = 272,            /* yykw_boolean  */
    yykw_double = 273,             /* yykw_double  */
    yykw_float = 274,              /* yykw_float  */
    yykw_long = 275,               /* yykw_long  */
    yykw_int = 276,                /* yykw_int  */
    yykw_short = 277,              /* yykw_short  */
    yykw_byte = 278,               /* yykw_byte  */
    yykw_super = 279,              /* yykw_super  */
    yykw_extends = 280,            /* yykw_extends  */
    yytk_QUESTIONM = 281,          /* yytk_QUESTIONM  */
    yytk_GREATER = 282,            /* yytk_GREATER  */
    yytk_LESS = 283,               /* yytk_LESS  */
    yytk_DOT_DOT_DOT = 284,        /* yytk_DOT_DOT_DOT  */
    yykw_throws = 285,             /* yykw_throws  */
    yykw_returns = 286,            /* yykw_returns  */
    yytk_RPAREN = 287,             /* yytk_RPAREN  */
    yytk_LPAREN = 288,             /* yytk_LPAREN  */
    yykw_named = 289,              /* yykw_named  */
    yykw_is = 290,                 /* yykw_is  */
    yykw_as = 291,                 /* yykw_as  */
    yykw_transient = 292,          /* yykw_transient  */
    yykw_volatile = 293,           /* yykw_volatile  */
    yykw_final = 294,              /* yykw_final  */
    yykw_abstract = 295,           /* yykw_abstract  */
    yykw_strictfp = 296,           /* yykw_strictfp  */
    yykw_native = 297,             /* yykw_native  */
    yykw_synchronized = 298,       /* yykw_synchronized  */
    yykw_protected = 299,          /* yykw_protected  */
    yykw_public = 300,             /* yykw_public  */
    yykw_constant = 301,           /* yykw_constant  */
    yykw_variable = 302,           /* yykw_variable  */
    yykw_constructor = 303,        /* yykw_constructor  */
    yytk_COMMA = 304,              /* yytk_COMMA  */
    yykw_implements = 305,         /* yykw_implements  */
    yykw_default = 306,            /* yykw_default  */
    yykw_method = 307,             /* yykw_method  */
    yykw_inherits = 308,           /* yykw_inherits  */
    yykw_interface = 309,          /* yykw_interface  */
    yykw_class = 310,              /* yykw_class  */
    yykw_use = 311,                /* yykw_use  */
    yykw_end = 312,                /* yykw_end  */
    yykw_package = 313,            /* yykw_package  */
    yykw_foreign = 314             /* yykw_foreign  */
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
  YYSYMBOL_yytk_DOT = 11,                  /* yytk_DOT  */
  YYSYMBOL_yykw_false = 12,                /* yykw_false  */
  YYSYMBOL_yykw_true = 13,                 /* yykw_true  */
  YYSYMBOL_yytk_LBRACKET_RBRACKET = 14,    /* yytk_LBRACKET_RBRACKET  */
  YYSYMBOL_yykw_nothing = 15,              /* yykw_nothing  */
  YYSYMBOL_yykw_String = 16,               /* yykw_String  */
  YYSYMBOL_yykw_char = 17,                 /* yykw_char  */
  YYSYMBOL_yykw_boolean = 18,              /* yykw_boolean  */
  YYSYMBOL_yykw_double = 19,               /* yykw_double  */
  YYSYMBOL_yykw_float = 20,                /* yykw_float  */
  YYSYMBOL_yykw_long = 21,                 /* yykw_long  */
  YYSYMBOL_yykw_int = 22,                  /* yykw_int  */
  YYSYMBOL_yykw_short = 23,                /* yykw_short  */
  YYSYMBOL_yykw_byte = 24,                 /* yykw_byte  */
  YYSYMBOL_yykw_super = 25,                /* yykw_super  */
  YYSYMBOL_yykw_extends = 26,              /* yykw_extends  */
  YYSYMBOL_yytk_QUESTIONM = 27,            /* yytk_QUESTIONM  */
  YYSYMBOL_yytk_GREATER = 28,              /* yytk_GREATER  */
  YYSYMBOL_yytk_LESS = 29,                 /* yytk_LESS  */
  YYSYMBOL_yytk_DOT_DOT_DOT = 30,          /* yytk_DOT_DOT_DOT  */
  YYSYMBOL_yykw_throws = 31,               /* yykw_throws  */
  YYSYMBOL_yykw_returns = 32,              /* yykw_returns  */
  YYSYMBOL_yytk_RPAREN = 33,               /* yytk_RPAREN  */
  YYSYMBOL_yytk_LPAREN = 34,               /* yytk_LPAREN  */
  YYSYMBOL_yykw_named = 35,                /* yykw_named  */
  YYSYMBOL_yykw_is = 36,                   /* yykw_is  */
  YYSYMBOL_yykw_as = 37,                   /* yykw_as  */
  YYSYMBOL_yykw_transient = 38,            /* yykw_transient  */
  YYSYMBOL_yykw_volatile = 39,             /* yykw_volatile  */
  YYSYMBOL_yykw_final = 40,                /* yykw_final  */
  YYSYMBOL_yykw_abstract = 41,             /* yykw_abstract  */
  YYSYMBOL_yykw_strictfp = 42,             /* yykw_strictfp  */
  YYSYMBOL_yykw_native = 43,               /* yykw_native  */
  YYSYMBOL_yykw_synchronized = 44,         /* yykw_synchronized  */
  YYSYMBOL_yykw_protected = 45,            /* yykw_protected  */
  YYSYMBOL_yykw_public = 46,               /* yykw_public  */
  YYSYMBOL_yykw_constant = 47,             /* yykw_constant  */
  YYSYMBOL_yykw_variable = 48,             /* yykw_variable  */
  YYSYMBOL_yykw_constructor = 49,          /* yykw_constructor  */
  YYSYMBOL_yytk_COMMA = 50,                /* yytk_COMMA  */
  YYSYMBOL_yykw_implements = 51,           /* yykw_implements  */
  YYSYMBOL_yykw_default = 52,              /* yykw_default  */
  YYSYMBOL_yykw_method = 53,               /* yykw_method  */
  YYSYMBOL_yykw_inherits = 54,             /* yykw_inherits  */
  YYSYMBOL_yykw_interface = 55,            /* yykw_interface  */
  YYSYMBOL_yykw_class = 56,                /* yykw_class  */
  YYSYMBOL_yykw_use = 57,                  /* yykw_use  */
  YYSYMBOL_yykw_end = 58,                  /* yykw_end  */
  YYSYMBOL_yykw_package = 59,              /* yykw_package  */
  YYSYMBOL_yykw_foreign = 60,              /* yykw_foreign  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_ROOT_ = 62,                     /* ROOT_  */
  YYSYMBOL_Parse = 63,                     /* Parse  */
  YYSYMBOL_PackageList = 64,               /* PackageList  */
  YYSYMBOL_Package = 65,                   /* Package  */
  YYSYMBOL_Definitions = 66,               /* Definitions  */
  YYSYMBOL_Definition = 67,                /* Definition  */
  YYSYMBOL_Use = 68,                       /* Use  */
  YYSYMBOL_Class = 69,                     /* Class  */
  YYSYMBOL_Interface = 70,                 /* Interface  */
  YYSYMBOL_InterfaceInheritsClause = 71,   /* InterfaceInheritsClause  */
  YYSYMBOL_InterfaceDefs = 72,             /* InterfaceDefs  */
  YYSYMBOL_InterfaceDef = 73,              /* InterfaceDef  */
  YYSYMBOL_InterfaceMethodDef = 74,        /* InterfaceMethodDef  */
  YYSYMBOL_InterfaceMethodModifier = 75,   /* InterfaceMethodModifier  */
  YYSYMBOL_ClassModifiers = 76,            /* ClassModifiers  */
  YYSYMBOL_ClassDefs = 77,                 /* ClassDefs  */
  YYSYMBOL_ClassDef = 78,                  /* ClassDef  */
  YYSYMBOL_InheritsClause = 79,            /* InheritsClause  */
  YYSYMBOL_ImplementsClause = 80,          /* ImplementsClause  */
  YYSYMBOL_InterfaceList = 81,             /* InterfaceList  */
  YYSYMBOL_ClassName = 82,                 /* ClassName  */
  YYSYMBOL_ConstructorDef = 83,            /* ConstructorDef  */
  YYSYMBOL_ConstructorModifiers = 84,      /* ConstructorModifiers  */
  YYSYMBOL_MethodDef = 85,                 /* MethodDef  */
  YYSYMBOL_MethodModifiers = 86,           /* MethodModifiers  */
  YYSYMBOL_VariableDef = 87,               /* VariableDef  */
  YYSYMBOL_VariableModifiers = 88,         /* VariableModifiers  */
  YYSYMBOL_ConstantDef = 89,               /* ConstantDef  */
  YYSYMBOL_AccessModifier = 90,            /* AccessModifier  */
  YYSYMBOL_SyncModifier = 91,              /* SyncModifier  */
  YYSYMBOL_NativeModifier = 92,            /* NativeModifier  */
  YYSYMBOL_StrictFPModifier = 93,          /* StrictFPModifier  */
  YYSYMBOL_InheritanceModifier = 94,       /* InheritanceModifier  */
  YYSYMBOL_InstanceModifier = 95,          /* InstanceModifier  */
  YYSYMBOL_ModifyModifier = 96,            /* ModifyModifier  */
  YYSYMBOL_TransientModifier = 97,         /* TransientModifier  */
  YYSYMBOL_TypeClause = 98,                /* TypeClause  */
  YYSYMBOL_OptionalLiteralClause = 99,     /* OptionalLiteralClause  */
  YYSYMBOL_OptionalUnqualifiedAliasClause = 100, /* OptionalUnqualifiedAliasClause  */
  YYSYMBOL_Parameters = 101,               /* Parameters  */
  YYSYMBOL_ReturnsClause = 102,            /* ReturnsClause  */
  YYSYMBOL_OptionalThrowsClause = 103,     /* OptionalThrowsClause  */
  YYSYMBOL_OptionalParameterList = 104,    /* OptionalParameterList  */
  YYSYMBOL_ParameterList = 105,            /* ParameterList  */
  YYSYMBOL_Parameter = 106,                /* Parameter  */
  YYSYMBOL_TemplateType = 107,             /* TemplateType  */
  YYSYMBOL_GenericType = 108,              /* GenericType  */
  YYSYMBOL_GenericTypeList = 109,          /* GenericTypeList  */
  YYSYMBOL_GenericTypeListElement = 110,   /* GenericTypeListElement  */
  YYSYMBOL_OptionalBounds = 111,           /* OptionalBounds  */
  YYSYMBOL_Type = 112,                     /* Type  */
  YYSYMBOL_PrimitiveType = 113,            /* PrimitiveType  */
  YYSYMBOL_NamedType = 114,                /* NamedType  */
  YYSYMBOL_NamedTypeList = 115,            /* NamedTypeList  */
  YYSYMBOL_NamedTypeListElement = 116,     /* NamedTypeListElement  */
  YYSYMBOL_JavaArray = 117,                /* JavaArray  */
  YYSYMBOL_ConstantTermExpression = 118,   /* ConstantTermExpression  */
  YYSYMBOL_PackageId = 119,                /* PackageId  */
  YYSYMBOL_QualifiedId = 120,              /* QualifiedId  */
  YYSYMBOL_UnqualifiedId = 121,            /* UnqualifiedId  */
  YYSYMBOL_IdentifierSequence = 122,       /* IdentifierSequence  */
  YYSYMBOL_OptionalSeparator = 123,        /* OptionalSeparator  */
  YYSYMBOL_Separator = 124,                /* Separator  */
  YYSYMBOL_StringLiteral = 125             /* StringLiteral  */
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
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 11
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      56,    57,    58,    59,    60,     2
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,   112,   127,   157,   187,   212,   256,   299,
     330,   342,   357,   372,   387,   418,   484,   534,   551,   563,
     594,   606,   621,   636,   713,   727,   742,   754,   807,   838,
     850,   865,   880,   895,   910,   937,   949,   966,   978,  1008,
    1033,  1048,  1109,  1130,  1203,  1264,  1309,  1354,  1399,  1413,
    1428,  1440,  1455,  1467,  1482,  1494,  1509,  1521,  1535,  1550,
    1562,  1577,  1589,  1603,  1618,  1630,  1645,  1657,  1705,  1722,
    1734,  1757,  1785,  1802,  1822,  1849,  1898,  1914,  1926,  1956,
    1981,  2017,  2038,  2070,  2085,  2123,  2153,  2178,  2206,  2235,
    2250,  2272,  2295,  2307,  2322,  2337,  2352,  2373,  2394,  2415,
    2436,  2457,  2478,  2499,  2520,  2541,  2559,  2591,  2629,  2659,
    2684,  2713,  2728,  2760,  2792,  2839,  2860,  2881,  2909,  2937,
    2965,  3001,  3063,  3103,  3133,  3154,  3163,  3169,  3178,  3186
};
#endif

#define YYPACT_NINF (-161)
#define YYTABLE_NINF (-67)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,    27,    37,  -161,  -161,    19,   -10,  -161,  -161,  -161,
      22,    22,    -7,  -161,  -161,    69,    67,    22,  -161,    69,
      -5,  -161,    34,    22,  -161,  -161,  -161,    31,    26,    -5,
    -161,  -161,    84,    90,    46,    61,   100,  -161,  -161,    54,
    -161,    80,    99,   104,    84,  -161,   -18,   105,    84,    22,
       8,    69,  -161,    58,  -161,  -161,     9,  -161,  -161,    65,
    -161,    87,    48,    29,  -161,    89,    72,    80,   112,    84,
      73,  -161,  -161,    70,    84,    12,    84,  -161,  -161,    71,
      22,  -161,    74,  -161,    84,    84,  -161,  -161,     8,   125,
    -161,    84,    22,  -161,  -161,  -161,    29,  -161,   102,    81,
      95,    78,    48,    84,  -161,  -161,  -161,  -161,  -161,   -15,
    -161,  -161,    12,    44,    98,   128,  -161,   103,    83,    22,
    -161,    94,  -161,    85,  -161,    88,  -161,    35,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
     130,   131,   132,    93,  -161,  -161,     6,   107,    91,   -15,
      84,    84,    84,  -161,  -161,    96,     9,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   115,  -161,
     106,    95,    84,   118,   143,  -161,   103,   103,    95,  -161,
      61,    97,  -161,     6,  -161,  -161,    84,   120,  -161,   107,
     107,  -161,    17,  -161,  -161,  -161,    44,  -161,  -161,   118,
      97,  -161,   120,  -161,  -161
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     126,   128,     0,     2,     3,     6,     0,   125,   127,     1,
     126,   126,     0,     5,     4,     0,   124,     0,   120,     0,
     126,   123,     0,     0,    11,    12,    13,    50,     0,   126,
      49,    48,     0,     0,     0,    56,   126,     9,   122,    18,
      83,    82,     0,     0,     0,    55,    59,     8,     0,     0,
       0,     0,    14,    35,    58,    57,    64,     7,    17,    39,
      40,   106,    20,    92,    89,     0,    86,    87,     0,     0,
      37,    63,    62,     0,     0,     0,     0,    24,    25,     0,
       0,    21,     0,    22,     0,     0,    88,    84,     0,     0,
      34,     0,     0,    60,    27,    38,    92,   111,     0,   109,
       0,     0,    20,     0,    91,    90,    85,   121,    36,    50,
     110,   107,     0,     0,    69,     0,    19,     0,     0,     0,
      30,     0,    32,     0,    33,     0,    31,    52,   108,   105,
     104,   103,   102,   101,   100,    99,    98,    97,    96,    67,
      94,    95,    93,     0,    47,    16,    77,    71,     0,    50,
       0,     0,     0,    65,    51,    54,    64,   112,   113,   114,
     118,   117,   129,   116,   115,    68,   119,    81,     0,    76,
      79,     0,     0,    75,     0,    28,     0,     0,     0,    53,
      56,    61,    72,     0,    80,    70,     0,     0,    15,    71,
      71,    45,    59,    46,    78,    74,     0,    23,    41,    75,
      61,    73,     0,    44,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,  -161,    59,  -161,   129,  -161,  -161,  -161,  -161,
    -161,    55,  -161,  -161,  -161,  -161,    10,  -161,  -161,  -161,
     -58,    92,  -161,  -161,  -161,  -161,  -161,  -161,  -104,   133,
    -161,  -161,   -17,   -30,  -160,    11,  -161,  -151,  -161,  -109,
     -87,   -38,   -34,  -161,   -14,  -161,   122,   -42,    82,  -161,
      75,   -28,  -161,   -71,    60,  -161,  -161,  -161,  -161,  -161,
     -32,   -13,   -19,     2,  -161
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    22,    23,    24,    25,    26,
      49,    79,    80,    81,    82,    34,   118,   119,    70,    92,
      58,    59,   120,   121,   122,   123,   124,   125,    83,   127,
     155,   180,    46,    56,    94,    73,   156,   114,   144,   173,
     147,   197,   187,   168,   169,   170,    39,    40,    65,    66,
      86,   139,   140,    60,    98,    99,   142,   165,    17,    43,
      61,    18,     6,     7,   166
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    27,     1,     8,    97,   126,    21,    11,    64,    38,
      27,    38,    41,   104,   105,    38,    95,    47,    67,    20,
     184,   193,    54,    55,    52,    29,     1,   191,    10,     1,
      30,    31,    76,   108,     1,    63,   167,     9,    68,    96,
     203,    97,   141,   -29,   100,   126,    64,    38,    71,    72,
      12,    62,    15,   -10,    84,    85,    67,    54,    55,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    13,
      14,   117,    16,   153,   -66,   -52,    30,    31,    19,   154,
     198,   199,   102,   -66,   -42,    36,    32,    38,    33,   189,
     190,   -52,    28,    42,   109,    76,   145,   160,   161,   162,
      77,   -26,    44,    45,    78,   163,   164,     1,    48,    50,
      51,     1,    69,    57,   171,    74,    75,    87,   176,   177,
     178,   149,    88,    89,    91,   141,    93,   103,   107,   101,
     111,   112,   113,   115,   143,     1,   152,   146,   151,   179,
     185,   148,   172,   150,   157,   158,   159,   174,   182,   186,
       1,   171,   196,    93,   195,   188,   183,   116,    37,   175,
      35,    90,   200,   192,   204,   202,    53,   181,   201,   194,
     106,   110,   128
};

static const yytype_uint8 yycheck[] =
{
      32,    20,     7,     1,    75,   109,    19,     5,    50,     3,
      29,     3,    44,    84,    85,     3,    74,    36,    50,    17,
     171,   181,    40,    41,    43,    23,     7,   178,     9,     7,
      45,    46,    47,    91,     7,    27,    30,     0,    51,    27,
     200,   112,   113,    58,    76,   149,    88,     3,    39,    40,
      60,    49,    59,    58,    25,    26,    88,    40,    41,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    10,
      11,   103,     3,    38,    39,    40,    45,    46,    11,    44,
     189,   190,    80,    48,    49,    59,    55,     3,    57,   176,
     177,    56,    58,     3,    92,    47,   115,     4,     5,     6,
      52,    53,    56,    42,    56,    12,    13,     7,    54,    29,
      11,     7,    54,     8,   146,    50,    29,    28,   150,   151,
     152,   119,    50,    11,    51,   196,    56,    53,     3,    58,
      28,    50,    37,    55,    36,     7,    48,    34,    53,    43,
     172,    58,    35,    49,    14,    14,    14,    56,    33,    31,
       7,   183,    32,    56,   186,   174,    50,   102,    29,   149,
      27,    69,   192,   180,   202,   199,    44,   156,   196,   183,
      88,    96,   112
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    62,    63,    64,    65,   123,   124,   124,     0,
       9,   124,    60,    64,    64,    59,     3,   119,   122,    11,
     124,   122,    66,    67,    68,    69,    70,   123,    58,   124,
      45,    46,    55,    57,    76,    90,    59,    66,     3,   107,
     108,   121,     3,   120,    56,    42,    93,   123,    54,    71,
      29,    11,   123,   107,    40,    41,    94,     8,    81,    82,
     114,   121,   124,    27,   108,   109,   110,   121,   122,    54,
      79,    39,    40,    96,    50,    29,    47,    52,    56,    72,
      73,    74,    75,    89,    25,    26,   111,    28,    50,    11,
      82,    51,    80,    56,    95,    81,    27,   114,   115,   116,
     121,    58,   124,    53,   114,   114,   109,     3,    81,   124,
     111,    28,    50,    37,    98,    55,    72,   121,    77,    78,
      83,    84,    85,    86,    87,    88,    89,    90,   115,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   112,
     113,   114,   117,    36,    99,   123,    34,   101,    58,   124,
      49,    53,    48,    38,    44,    91,    97,    14,    14,    14,
       4,     5,     6,    12,    13,   118,   125,    30,   104,   105,
     106,   121,    35,   100,    56,    77,   121,   121,   121,    43,
      92,    96,    33,    50,    98,   121,    31,   103,   123,   101,
     101,    98,    93,    95,   105,   121,    32,   102,   100,   100,
      94,   112,   103,    95,   102
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    64,    64,    64,    65,    65,    66,
      66,    67,    67,    67,    68,    69,    70,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    75,    76,    77,    77,
      78,    78,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    94,
      95,    95,    96,    96,    96,    97,    97,    98,    99,    99,
     100,   100,   101,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   109,   109,   110,   110,   110,
     111,   111,   111,   112,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   118,   118,   118,   118,   118,
     119,   120,   121,   122,   122,   123,   123,   124,   124,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     1,    10,     9,     3,
       0,     1,     1,     1,     4,    11,     9,     2,     0,     3,
       0,     1,     1,     7,     1,     1,     0,     5,     3,     0,
       1,     1,     1,     1,     2,     0,     2,     0,     3,     1,
       1,     5,     1,     7,     6,     4,     4,     4,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     2,     2,     0,
       2,     0,     3,     2,     2,     0,     1,     0,     3,     1,
       2,     1,     1,     1,     4,     3,     1,     1,     2,     1,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     5,     1,     3,     1,     1,     0,     2,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   128,     0,   124,     0,   126,     0,   126,     0,    59,
       0,    61,     0,   126,     0,    66,     0,    66,     0,   126,
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
  "END_OF_UNIT", "NEXT_UNIT", "yykw_THISCANNEVERHAPPEN", "yytk_DOT",
  "yykw_false", "yykw_true", "yytk_LBRACKET_RBRACKET", "yykw_nothing",
  "yykw_String", "yykw_char", "yykw_boolean", "yykw_double", "yykw_float",
  "yykw_long", "yykw_int", "yykw_short", "yykw_byte", "yykw_super",
  "yykw_extends", "yytk_QUESTIONM", "yytk_GREATER", "yytk_LESS",
  "yytk_DOT_DOT_DOT", "yykw_throws", "yykw_returns", "yytk_RPAREN",
  "yytk_LPAREN", "yykw_named", "yykw_is", "yykw_as", "yykw_transient",
  "yykw_volatile", "yykw_final", "yykw_abstract", "yykw_strictfp",
  "yykw_native", "yykw_synchronized", "yykw_protected", "yykw_public",
  "yykw_constant", "yykw_variable", "yykw_constructor", "yytk_COMMA",
  "yykw_implements", "yykw_default", "yykw_method", "yykw_inherits",
  "yykw_interface", "yykw_class", "yykw_use", "yykw_end", "yykw_package",
  "yykw_foreign", "$accept", "ROOT_", "Parse", "PackageList", "Package",
  "Definitions", "Definition", "Use", "Class", "Interface",
  "InterfaceInheritsClause", "InterfaceDefs", "InterfaceDef",
  "InterfaceMethodDef", "InterfaceMethodModifier", "ClassModifiers",
  "ClassDefs", "ClassDef", "InheritsClause", "ImplementsClause",
  "InterfaceList", "ClassName", "ConstructorDef", "ConstructorModifiers",
  "MethodDef", "MethodModifiers", "VariableDef", "VariableModifiers",
  "ConstantDef", "AccessModifier", "SyncModifier", "NativeModifier",
  "StrictFPModifier", "InheritanceModifier", "InstanceModifier",
  "ModifyModifier", "TransientModifier", "TypeClause",
  "OptionalLiteralClause", "OptionalUnqualifiedAliasClause", "Parameters",
  "ReturnsClause", "OptionalThrowsClause", "OptionalParameterList",
  "ParameterList", "Parameter", "TemplateType", "GenericType",
  "GenericTypeList", "GenericTypeListElement", "OptionalBounds", "Type",
  "PrimitiveType", "NamedType", "NamedTypeList", "NamedTypeListElement",
  "JavaArray", "ConstantTermExpression", "PackageId", "QualifiedId",
  "UnqualifiedId", "IdentifierSequence", "OptionalSeparator", "Separator",
  "StringLiteral", YY_NULLPTR
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
#line 90 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yyv_PackageList;
yy yy_1_1;
yy yy_2_2_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1420 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 3: /* Parse: PackageList  */
#line 114 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Packages;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Packages = yy_1_1;
yy_0_1 = yyv_Packages;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1436 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 4: /* PackageList: Package Separator PackageList  */
#line 131 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 1465 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 5: /* PackageList: Package NEXT_UNIT PackageList  */
#line 161 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 1494 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 6: /* PackageList: Package  */
#line 189 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 1520 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 7: /* Package: OptionalSeparator yykw_foreign yykw_package PackageId Separator Definitions yykw_end yykw_package OptionalSeparator END_OF_UNIT  */
#line 223 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_4 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[0];
}
#line 1556 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 8: /* Package: OptionalSeparator yykw_foreign yykw_package PackageId Separator Definitions yykw_end yykw_package OptionalSeparator  */
#line 266 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_4 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 1592 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 9: /* Definitions: Definition Separator Definitions  */
#line 303 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 1621 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 10: /* Definitions: %empty  */
#line 330 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 1636 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 11: /* Definition: Use  */
#line 344 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Use;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Use = yy_1_1;
yy_0_1 = yyv_Use;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1652 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 12: /* Definition: Class  */
#line 359 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Class;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Class = yy_1_1;
yy_0_1 = yyv_Class;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1668 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 13: /* Definition: Interface  */
#line 374 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Interface;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Interface = yy_1_1;
yy_0_1 = yyv_Interface;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1684 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 14: /* Use: OptionalSeparator yykw_use QualifiedId OptionalSeparator  */
#line 392 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_3;
yy yyv_QualifiedId;
yy yy_4_1;
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 1713 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 15: /* Class: OptionalSeparator ClassModifiers yykw_class TemplateType InheritsClause ImplementsClause Separator ClassDefs yykw_end yykw_class OptionalSeparator  */
#line 430 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-9)].yystate.yysemantics.yyval.attr[1]);
yy_4 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[0]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_9_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-8)].yystate.yysemantics.yyval.attr[0];
}
#line 1770 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 16: /* Interface: OptionalSeparator yykw_interface TemplateType InterfaceInheritsClause Separator InterfaceDefs yykw_end yykw_interface OptionalSeparator  */
#line 494 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-7)].yystate.yysemantics.yyval.attr[0];
}
#line 1813 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 17: /* InterfaceInheritsClause: yykw_inherits InterfaceList  */
#line 537 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_InterfaceList;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_InterfaceList = yy_2_1;
yy_0_1 = yyv_InterfaceList;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 1829 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 18: /* InterfaceInheritsClause: %empty  */
#line 551 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 1844 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 19: /* InterfaceDefs: InterfaceDef Separator InterfaceDefs  */
#line 567 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 1873 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 20: /* InterfaceDefs: %empty  */
#line 594 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 1888 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 21: /* InterfaceDef: InterfaceMethodDef  */
#line 608 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_InterfaceDef;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_InterfaceDef = yy_1_1;
yy_0_1 = yyv_InterfaceDef;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1904 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 22: /* InterfaceDef: ConstantDef  */
#line 623 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_InterfaceDef;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_InterfaceDef = yy_1_1;
yy_0_1 = yyv_InterfaceDef;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 1920 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 23: /* InterfaceMethodDef: InterfaceMethodModifier yykw_method UnqualifiedId Parameters OptionalUnqualifiedAliasClause OptionalThrowsClause ReturnsClause  */
#line 644 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_8_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0];
}
#line 1992 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 24: /* InterfaceMethodModifier: yykw_default  */
#line 715 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2007 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 25: /* InterfaceMethodModifier: yykw_class  */
#line 729 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2022 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 26: /* InterfaceMethodModifier: %empty  */
#line 742 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2037 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 27: /* ClassModifiers: AccessModifier StrictFPModifier InheritanceModifier ModifyModifier InstanceModifier  */
#line 760 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[0];
}
#line 2087 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 28: /* ClassDefs: ClassDef Separator ClassDefs  */
#line 811 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2116 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 29: /* ClassDefs: %empty  */
#line 838 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 9;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2131 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 30: /* ClassDef: ConstructorDef  */
#line 852 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Constructor;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Constructor = yy_1_1;
yy_0_1 = yyv_Constructor;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2147 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 31: /* ClassDef: ConstantDef  */
#line 867 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2163 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 32: /* ClassDef: MethodDef  */
#line 882 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Method;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Method = yy_1_1;
yy_0_1 = yyv_Method;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2179 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 33: /* ClassDef: VariableDef  */
#line 897 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2195 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 34: /* InheritsClause: yykw_inherits ClassName  */
#line 913 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 2221 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 35: /* InheritsClause: %empty  */
#line 937 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2236 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 36: /* ImplementsClause: yykw_implements InterfaceList  */
#line 952 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Interfaces;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Interfaces = yy_2_1;
yy_0_1 = yyv_Interfaces;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 2252 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 37: /* ImplementsClause: %empty  */
#line 966 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2267 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 38: /* InterfaceList: ClassName yytk_COMMA InterfaceList  */
#line 982 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2296 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 39: /* InterfaceList: ClassName  */
#line 1010 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Interface;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2322 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 40: /* ClassName: NamedType  */
#line 1035 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2338 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 41: /* ConstructorDef: ConstructorModifiers yykw_constructor UnqualifiedId Parameters OptionalUnqualifiedAliasClause  */
#line 1054 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2396 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 42: /* ConstructorModifiers: AccessModifier  */
#line 1111 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_AccessModifier;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_AccessModifier = yy_1_1;
yy_0_1_1 = yyv_AccessModifier;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 2418 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 43: /* MethodDef: MethodModifiers yykw_method UnqualifiedId Parameters OptionalUnqualifiedAliasClause OptionalThrowsClause ReturnsClause  */
#line 1138 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_7_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_8_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0];
}
#line 2486 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 44: /* MethodModifiers: AccessModifier SyncModifier NativeModifier StrictFPModifier InheritanceModifier InstanceModifier  */
#line 1210 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[1]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yyval.attr[0];
}
#line 2543 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 45: /* VariableDef: VariableModifiers yykw_variable UnqualifiedId TypeClause  */
#line 1269 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_3 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 2586 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 46: /* VariableModifiers: AccessModifier TransientModifier ModifyModifier InstanceModifier  */
#line 1314 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2629 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 47: /* ConstantDef: yykw_constant UnqualifiedId TypeClause OptionalLiteralClause  */
#line 1359 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_5_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 2672 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 48: /* AccessModifier: yykw_public  */
#line 1401 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2687 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 49: /* AccessModifier: yykw_protected  */
#line 1415 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2702 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 50: /* AccessModifier: %empty  */
#line 1428 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2717 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 51: /* SyncModifier: yykw_synchronized  */
#line 1442 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2732 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 52: /* SyncModifier: %empty  */
#line 1455 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2747 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 53: /* NativeModifier: yykw_native  */
#line 1469 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2762 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 54: /* NativeModifier: %empty  */
#line 1482 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2777 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 55: /* StrictFPModifier: yykw_strictfp  */
#line 1496 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2792 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 56: /* StrictFPModifier: %empty  */
#line 1509 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2807 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 57: /* InheritanceModifier: yykw_abstract  */
#line 1523 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2822 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 58: /* InheritanceModifier: yykw_final  */
#line 1537 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2837 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 59: /* InheritanceModifier: %empty  */
#line 1550 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2852 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 60: /* InstanceModifier: yykw_class  */
#line 1564 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2867 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 61: /* InstanceModifier: %empty  */
#line 1577 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2882 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 62: /* ModifyModifier: yykw_final  */
#line 1591 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2897 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 63: /* ModifyModifier: yykw_volatile  */
#line 1605 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2912 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 64: /* ModifyModifier: %empty  */
#line 1618 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2927 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 65: /* TransientModifier: yykw_transient  */
#line 1632 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2942 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 66: /* TransientModifier: %empty  */
#line 1645 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 17;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 2957 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 67: /* TypeClause: yykw_as Type  */
#line 1660 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 2973 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 68: /* OptionalLiteralClause: yykw_is ConstantTermExpression  */
#line 1708 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Value;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyv_Value = yy_2_1;
yy_0_1 = yyv_Value;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 2989 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 69: /* OptionalLiteralClause: %empty  */
#line 1722 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yy_0_1 = yyb + 0;
yy_0_1[0] = 6;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
yyGetPos(&(*yyvalp).attr[0]);
}
#line 3004 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 70: /* OptionalUnqualifiedAliasClause: yykw_named UnqualifiedId  */
#line 1737 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Alias;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Alias = yy_2_1;
yy_0_1_1 = yyv_Alias;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3026 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 71: /* OptionalUnqualifiedAliasClause: %empty  */
#line 1757 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3041 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 72: /* Parameters: yytk_LPAREN OptionalParameterList yytk_RPAREN  */
#line 1789 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Parameters;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yyv_Parameters = yy_2_1;
yy_0_1 = yyv_Parameters;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 3057 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 73: /* ReturnsClause: yykw_returns Type  */
#line 1805 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3077 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 74: /* OptionalThrowsClause: yykw_throws UnqualifiedId  */
#line 1825 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Position;
yy yy_2;
yy yyv_Name;
yy yy_3_1;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yyv_Name = yy_3_1;
yy_0_1_1 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3103 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 75: /* OptionalThrowsClause: %empty  */
#line 1849 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3118 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 76: /* OptionalParameterList: ParameterList  */
#line 1900 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3134 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 77: /* OptionalParameterList: %empty  */
#line 1914 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3149 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 78: /* ParameterList: Parameter yytk_COMMA ParameterList  */
#line 1930 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3178 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 79: /* ParameterList: Parameter  */
#line 1958 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3204 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 80: /* Parameter: UnqualifiedId TypeClause  */
#line 1984 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_0_1[0] = 1;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
yy_0_1[3] = ((intptr_t)yy_0_1_3);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3240 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 81: /* Parameter: yytk_DOT_DOT_DOT  */
#line 2019 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3262 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 82: /* TemplateType: UnqualifiedId  */
#line 2040 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3295 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 83: /* TemplateType: GenericType  */
#line 2072 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3311 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 84: /* GenericType: UnqualifiedId yytk_LESS GenericTypeList yytk_GREATER  */
#line 2090 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 3347 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 85: /* GenericTypeList: GenericTypeListElement yytk_COMMA GenericTypeList  */
#line 2127 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3376 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 86: /* GenericTypeList: GenericTypeListElement  */
#line 2155 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3402 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 87: /* GenericTypeListElement: UnqualifiedId  */
#line 2180 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_1;
yy yyv_Name;
yy yy_2_1;
yy_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3431 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 88: /* GenericTypeListElement: yytk_QUESTIONM OptionalBounds  */
#line 2209 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_1;
yy yyv_Bounds;
yy yy_3_1;
yy_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3460 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 89: /* GenericTypeListElement: GenericType  */
#line 2237 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3476 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 90: /* OptionalBounds: yykw_extends NamedType  */
#line 2253 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Type = yy_2_1;
yy_0_1_1 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 2;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3498 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 91: /* OptionalBounds: yykw_super NamedType  */
#line 2275 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Type;
yy yy_2_1;
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Type = yy_2_1;
yy_0_1_1 = yyv_Type;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3520 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 92: /* OptionalBounds: %empty  */
#line 2295 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3535 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 93: /* Type: JavaArray  */
#line 2309 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3551 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 94: /* Type: PrimitiveType  */
#line 2324 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3567 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 95: /* Type: NamedType  */
#line 2339 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3583 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 96: /* PrimitiveType: yykw_byte  */
#line 2354 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3605 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 97: /* PrimitiveType: yykw_short  */
#line 2375 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3627 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 98: /* PrimitiveType: yykw_int  */
#line 2396 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3649 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 99: /* PrimitiveType: yykw_long  */
#line 2417 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_0_1[0] = 4;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3671 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 100: /* PrimitiveType: yykw_float  */
#line 2438 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_0_1[0] = 5;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3693 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 101: /* PrimitiveType: yykw_double  */
#line 2459 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_0_1[0] = 6;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3715 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 102: /* PrimitiveType: yykw_boolean  */
#line 2480 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_0_1[0] = 7;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3737 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 103: /* PrimitiveType: yykw_char  */
#line 2501 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_0_1[0] = 8;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3759 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 104: /* PrimitiveType: yykw_String  */
#line 2522 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3781 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 105: /* PrimitiveType: yykw_nothing  */
#line 2543 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yyv_Position;
yy yy_2;
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yyb = yyh;
yyh += 1; if (yyh > yyhx) yyExtend();
yyv_Position = yy_2;
yy_0_1 = yyb + 0;
yy_0_1[0] = 15;
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3800 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 106: /* NamedType: UnqualifiedId  */
#line 2561 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3833 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 107: /* NamedType: UnqualifiedId yytk_LESS NamedTypeList yytk_GREATER  */
#line 2596 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[0];
}
#line 3869 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 108: /* NamedTypeList: NamedTypeListElement yytk_COMMA NamedTypeList  */
#line 2633 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Named;
yy yy_1_1;
yy yyv_Tail;
yy yy_3_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3898 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 109: /* NamedTypeList: NamedTypeListElement  */
#line 2661 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Named;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 3924 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 110: /* NamedTypeListElement: yytk_QUESTIONM OptionalBounds  */
#line 2687 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yy_0_1_2;
yy yyv_Position;
yy yy_1;
yy yyv_Bounds;
yy yy_3_1;
yy_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
yy_3_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 3953 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 111: /* NamedTypeListElement: NamedType  */
#line 2715 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 3969 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 112: /* JavaArray: PrimitiveType yytk_LBRACKET_RBRACKET  */
#line 2731 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4001 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 113: /* JavaArray: NamedType yytk_LBRACKET_RBRACKET  */
#line 2763 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
yy_2 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4033 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 114: /* JavaArray: JavaArray yytk_LBRACKET_RBRACKET  */
#line 2795 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
goto yyfl_62_3_A;
yyfl_62_3 : ;
yyErr(3,603);
yyfl_62_3_A : ;
}
#line 4080 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 115: /* ConstantTermExpression: yykw_true  */
#line 2841 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 4102 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 116: /* ConstantTermExpression: yykw_false  */
#line 2862 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 4124 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 117: /* ConstantTermExpression: DOUBLE_LITERAL  */
#line 2883 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 4153 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 118: /* ConstantTermExpression: INTEGER_LITERAL  */
#line 2911 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
yy_0_1[2] = ((intptr_t)yy_0_1_2);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4182 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 119: /* ConstantTermExpression: StringLiteral  */
#line 2939 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 4211 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 120: /* PackageId: IdentifierSequence  */
#line 2967 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4248 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 121: /* QualifiedId: NAME_LITERAL yytk_DOT IdentifierSequence yytk_DOT NAME_LITERAL  */
#line 3007 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yyval.attr[1]);
yy_4_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval.attr[1]);
yy_6_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval.attr[0];
}
#line 4307 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 122: /* UnqualifiedId: NAME_LITERAL  */
#line 3065 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
yy_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0]);
yy_2_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4348 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 123: /* IdentifierSequence: NAME_LITERAL yytk_DOT IdentifierSequence  */
#line 3107 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
#line 4377 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 124: /* IdentifierSequence: NAME_LITERAL  */
#line 3135 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yy yy_0_1;
yy yy_0_1_1;
yy yyv_Name;
yy yy_1_1;
yy_1_1 = (yy)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[1]);
yyb = yyh;
yyh += 2; if (yyh > yyhx) yyExtend();
yyv_Name = yy_1_1;
yy_0_1_1 = yyv_Name;
yy_0_1 = yyb + 0;
yy_0_1[0] = 3;
yy_0_1[1] = ((intptr_t)yy_0_1_1);
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4399 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 125: /* OptionalSeparator: Separator  */
#line 3156 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4408 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 126: /* OptionalSeparator: %empty  */
#line 3163 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
yyGetPos(&(*yyvalp).attr[0]);
}
#line 4417 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 127: /* Separator: SEPARATOR Separator  */
#line 3172 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval.attr[0];
}
#line 4426 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 128: /* Separator: SEPARATOR  */
#line 3180 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
{
yy yyb;
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4435 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;

  case 129: /* StringLiteral: STRING_LITERAL  */
#line 3188 "Debug/Win32/obj/lc-compile-ffi-java/gen.y"
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
(*yyvalp).attr[1] = ((intptr_t)yy_0_1);
(*yyvalp).attr[0] = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval.attr[0];
}
#line 4481 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"
    break;


#line 4485 "Debug/Win32/obj/lc-compile-ffi-java/gen.y.c"

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




