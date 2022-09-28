/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         confparse
#define yylex           conflex
#define yyerror         conferror
#define yydebug         confdebug
#define yynerrs         confnerrs
#define yylval          conflval
#define yychar          confchar

/* First part of user prologue.  */
#line 4 "src/conf_yacc.y"


/*
 * AIDE (Advanced Intrusion Detection Environment)
 *
 * Copyright (C) 1999-2006, 2010-2013, 2015-2016, 2019-2021 Rami Lehti,
 *               Pablo Virolainen, Richard van den Berg, Hannes von Haugwitz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "aide.h"
#include "attributes.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include "list.h"
#include "conf_lex.h"
#include "gen_list.h"
#include "db.h"
#include "db_config.h"
#include "symboltable.h"
#include "util.h"
#include "commandconf.h"

#include "seltree.h"

DB_ATTR_TYPE retval=0;

#include "conf_ast.h"
extern int conflex();
void conferror(ast**, const char *);


#line 127 "src/conf_yacc.c"

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

#include "conf_yacc.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TDEFINE = 3,                    /* TDEFINE  */
  YYSYMBOL_TUNDEFINE = 4,                  /* TUNDEFINE  */
  YYSYMBOL_TIFDEF = 5,                     /* TIFDEF  */
  YYSYMBOL_TIFNDEF = 6,                    /* TIFNDEF  */
  YYSYMBOL_TIFNHOST = 7,                   /* TIFNHOST  */
  YYSYMBOL_TIFHOST = 8,                    /* TIFHOST  */
  YYSYMBOL_TELSE = 9,                      /* TELSE  */
  YYSYMBOL_TENDIF = 10,                    /* TENDIF  */
  YYSYMBOL_TINCLUDE = 11,                  /* TINCLUDE  */
  YYSYMBOL_TXINCLUDE = 12,                 /* TXINCLUDE  */
  YYSYMBOL_TSETENV = 13,                   /* TSETENV  */
  YYSYMBOL_TGROUP = 14,                    /* TGROUP  */
  YYSYMBOL_TSTRING = 15,                   /* TSTRING  */
  YYSYMBOL_TEXPR = 16,                     /* TEXPR  */
  YYSYMBOL_TVARIABLE = 17,                 /* TVARIABLE  */
  YYSYMBOL_TSPACE = 18,                    /* TSPACE  */
  YYSYMBOL_TNEWLINE = 19,                  /* TNEWLINE  */
  YYSYMBOL_TSELRXRULE = 20,                /* TSELRXRULE  */
  YYSYMBOL_TEQURXRULE = 21,                /* TEQURXRULE  */
  YYSYMBOL_TNEGRXRULE = 22,                /* TNEGRXRULE  */
  YYSYMBOL_CONFIGOPTION = 23,              /* CONFIGOPTION  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* ','  */
  YYSYMBOL_27_ = 27,                       /* '='  */
  YYSYMBOL_YYACCEPT = 28,                  /* $accept  */
  YYSYMBOL_config = 29,                    /* config  */
  YYSYMBOL_statements = 30,                /* statements  */
  YYSYMBOL_statement = 31,                 /* statement  */
  YYSYMBOL_attribute_expression = 32,      /* attribute_expression  */
  YYSYMBOL_restriction_expression = 33,    /* restriction_expression  */
  YYSYMBOL_define_statement = 34,          /* define_statement  */
  YYSYMBOL_string_expression = 35,         /* string_expression  */
  YYSYMBOL_string_fragment = 36,           /* string_fragment  */
  YYSYMBOL_undefine_statement = 37,        /* undefine_statement  */
  YYSYMBOL_config_statement = 38,          /* config_statement  */
  YYSYMBOL_group_statement = 39,           /* group_statement  */
  YYSYMBOL_include_statement = 40,         /* include_statement  */
  YYSYMBOL_x_include_setenv_statement = 41, /* x_include_setenv_statement  */
  YYSYMBOL_if_statement = 42,              /* if_statement  */
  YYSYMBOL_if_condition = 43,              /* if_condition  */
  YYSYMBOL_rule_statement = 44             /* rule_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   74

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  82

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   278


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
       2,     2,     2,    24,    26,    25,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    27,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   105,   105,   106,   108,   112,   113,   118,   119,   120,
     121,   122,   122,   123,   124,   126,   127,   128,   130,   131,
     133,   134,   136,   137,   138,   139,   141,   143,   144,   146,
     148,   149,   150,   151,   153,   155,   156,   158,   159,   160,
     161,   163,   164,   165,   166,   167,   168
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TDEFINE", "TUNDEFINE",
  "TIFDEF", "TIFNDEF", "TIFNHOST", "TIFHOST", "TELSE", "TENDIF",
  "TINCLUDE", "TXINCLUDE", "TSETENV", "TGROUP", "TSTRING", "TEXPR",
  "TVARIABLE", "TSPACE", "TNEWLINE", "TSELRXRULE", "TEQURXRULE",
  "TNEGRXRULE", "CONFIGOPTION", "'+'", "'-'", "','", "'='", "$accept",
  "config", "statements", "statement", "attribute_expression",
  "restriction_expression", "define_statement", "string_expression",
  "string_fragment", "undefine_statement", "config_statement",
  "group_statement", "include_statement", "x_include_setenv_statement",
  "if_statement", "if_condition", "rule_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    43,    45,    44,    61
};
#endif

#define YYPACT_NINF (-43)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      37,    -7,     4,     5,     5,     5,     5,    -5,     8,    29,
      11,     5,     5,     5,    20,    52,   -43,    34,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,    35,   -43,     5,   -43,   -43,
     -43,   -43,     5,   -43,   -43,   -43,     5,     5,     5,    39,
      40,    40,    47,     2,   -43,    37,    37,   -43,   -43,    46,
      48,   -43,   -43,     0,   -11,     0,   -10,     0,   -10,   -43,
      41,     0,   -43,   -43,    21,     5,     5,    49,    53,    54,
       0,     0,    55,   -43,   -43,   -43,   -43,   -43,   -43,    37,
      58,   -43
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     6,    11,    12,
       7,    13,     8,     9,    10,     0,    14,    20,    26,    24,
      25,    37,    23,    38,    40,    39,     0,     0,     0,     0,
       0,     0,    43,     0,     1,     5,     0,    21,    22,    30,
      32,    34,    17,    29,    17,    41,     0,    42,     0,    19,
      46,    28,    27,     4,     0,     0,     0,     0,     0,     0,
      44,    45,     0,    35,    31,    33,    15,    16,    18,     0,
       0,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -43,   -43,   -42,   -43,   -29,    -6,   -43,    -4,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    15,    16,    17,    53,    56,    18,    31,    32,    19,
      20,    21,    22,    23,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      33,    34,    35,    63,    64,   -19,    52,    40,    41,    42,
      27,    55,    57,    36,    61,   -19,    69,    29,    52,    30,
      29,    28,    30,    47,    67,    68,    37,    70,    48,    71,
      72,    73,    49,    50,    51,    58,    60,    80,    39,    62,
       1,     2,     3,     4,     5,     6,    38,    43,     7,     8,
       9,    10,    44,    45,    46,    52,    54,    11,    12,    13,
      14,    74,    75,    59,    65,    76,    66,    69,    81,    77,
      78,     0,     0,     0,    79
};

static const yytype_int8 yycheck[] =
{
       4,     5,     6,    45,    46,    16,    16,    11,    12,    13,
      17,    40,    41,    18,    43,    26,    26,    15,    16,    17,
      15,    17,    17,    27,    24,    25,    18,    56,    32,    58,
       9,    10,    36,    37,    38,    41,    42,    79,    27,    43,
       3,     4,     5,     6,     7,     8,    17,    27,    11,    12,
      13,    14,     0,    19,    19,    16,    16,    20,    21,    22,
      23,    65,    66,    16,    18,    16,    18,    26,    10,    16,
      16,    -1,    -1,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    11,    12,    13,
      14,    20,    21,    22,    23,    29,    30,    31,    34,    37,
      38,    39,    40,    41,    42,    43,    44,    17,    17,    15,
      17,    35,    36,    35,    35,    35,    18,    18,    17,    27,
      35,    35,    35,    27,     0,    19,    19,    35,    35,    35,
      35,    35,    16,    32,    16,    32,    33,    32,    33,    16,
      33,    32,    35,    30,    30,    18,    18,    24,    25,    26,
      32,    32,     9,    10,    35,    35,    16,    16,    16,    19,
      30,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    29,    30,    30,    30,    31,    31,    31,
      31,    31,    31,    31,    31,    32,    32,    32,    33,    33,
      34,    34,    35,    35,    36,    36,    37,    38,    38,    39,
      40,    40,    40,    40,    41,    42,    42,    43,    43,    43,
      43,    44,    44,    44,    44,    44,    44
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     1,
       2,     3,     2,     1,     1,     1,     2,     3,     3,     3,
       3,     5,     3,     5,     3,     4,     7,     2,     2,     2,
       2,     3,     3,     2,     4,     4,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (config_ast, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, config_ast); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ast** config_ast)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (config_ast);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ast** config_ast)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, config_ast);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, ast** config_ast)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], config_ast);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, config_ast); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, ast** config_ast)
{
  YYUSE (yyvaluep);
  YYUSE (config_ast);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ast** config_ast)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* config: statements  */
#line 106 "src/conf_yacc.y"
                    { *config_ast = (yyvsp[0].ast); }
#line 1205 "src/conf_yacc.c"
    break;

  case 4: /* statements: statement TNEWLINE statements  */
#line 108 "src/conf_yacc.y"
                                           {
               ast *temp = (yyvsp[-2].ast);
               temp->next = (yyvsp[0].ast);
               (yyval.ast) = (yyvsp[-2].ast); }
#line 1214 "src/conf_yacc.c"
    break;

  case 5: /* statements: statement TNEWLINE  */
#line 112 "src/conf_yacc.y"
                                    { (yyval.ast) = (yyvsp[-1].ast); }
#line 1220 "src/conf_yacc.c"
    break;

  case 6: /* statements: statement  */
#line 113 "src/conf_yacc.y"
                           {
                    log_msg(LOG_LEVEL_ERROR, "%s:%d: syntax error: unexpected token or end of file, expected newline (line: '%s')", conf_filename, conf_linenumber, conf_linebuf);
                    YYABORT;
               }
#line 1229 "src/conf_yacc.c"
    break;

  case 15: /* attribute_expression: attribute_expression '+' TEXPR  */
#line 126 "src/conf_yacc.y"
                                                     { (yyval.attr_expr) = new_attribute_expression(ATTR_OP_PLUS, (yyvsp[-2].attr_expr), (yyvsp[0].s)); }
#line 1235 "src/conf_yacc.c"
    break;

  case 16: /* attribute_expression: attribute_expression '-' TEXPR  */
#line 127 "src/conf_yacc.y"
                                                     { (yyval.attr_expr) = new_attribute_expression(ATTR_OP_MINUS, (yyvsp[-2].attr_expr), (yyvsp[0].s)); }
#line 1241 "src/conf_yacc.c"
    break;

  case 17: /* attribute_expression: TEXPR  */
#line 128 "src/conf_yacc.y"
                            { (yyval.attr_expr) = new_attribute_expression(ATTR_OP_GROUP, NULL, (yyvsp[0].s)); }
#line 1247 "src/conf_yacc.c"
    break;

  case 18: /* restriction_expression: restriction_expression ',' TEXPR  */
#line 130 "src/conf_yacc.y"
                                                         { (yyval.rs_expr) = new_restriction_expression((yyvsp[-2].rs_expr), (yyvsp[0].s)); }
#line 1253 "src/conf_yacc.c"
    break;

  case 19: /* restriction_expression: TEXPR  */
#line 131 "src/conf_yacc.y"
                              { (yyval.rs_expr) = new_restriction_expression(NULL, (yyvsp[0].s)); }
#line 1259 "src/conf_yacc.c"
    break;

  case 20: /* define_statement: TDEFINE TVARIABLE  */
#line 133 "src/conf_yacc.y"
                                    { (yyval.ast) = new_define_statement((yyvsp[0].s), NULL); }
#line 1265 "src/conf_yacc.c"
    break;

  case 21: /* define_statement: TDEFINE TVARIABLE string_expression  */
#line 134 "src/conf_yacc.y"
                                                      { (yyval.ast) = new_define_statement((yyvsp[-1].s), (yyvsp[0].string_expr)); }
#line 1271 "src/conf_yacc.c"
    break;

  case 22: /* string_expression: string_fragment string_expression  */
#line 136 "src/conf_yacc.y"
                                                     { (yyval.string_expr) = new_string_concat((yyvsp[-1].string_expr), (yyvsp[0].string_expr)); }
#line 1277 "src/conf_yacc.c"
    break;

  case 23: /* string_expression: string_fragment  */
#line 137 "src/conf_yacc.y"
                                   { (yyval.string_expr) = (yyvsp[0].string_expr); }
#line 1283 "src/conf_yacc.c"
    break;

  case 24: /* string_fragment: TSTRING  */
#line 138 "src/conf_yacc.y"
                         { (yyval.string_expr) = new_string((yyvsp[0].s)); }
#line 1289 "src/conf_yacc.c"
    break;

  case 25: /* string_fragment: TVARIABLE  */
#line 139 "src/conf_yacc.y"
                           { (yyval.string_expr) = new_variable((yyvsp[0].s)); }
#line 1295 "src/conf_yacc.c"
    break;

  case 26: /* undefine_statement: TUNDEFINE TVARIABLE  */
#line 141 "src/conf_yacc.y"
                                        { (yyval.ast) = new_undefine_statement((yyvsp[0].s)); }
#line 1301 "src/conf_yacc.c"
    break;

  case 27: /* config_statement: CONFIGOPTION '=' string_expression  */
#line 143 "src/conf_yacc.y"
                                                     { (yyval.ast) = new_string_option_statement((yyvsp[-2].option), (yyvsp[0].string_expr)); }
#line 1307 "src/conf_yacc.c"
    break;

  case 28: /* config_statement: CONFIGOPTION '=' attribute_expression  */
#line 144 "src/conf_yacc.y"
                                                        { (yyval.ast) = new_attribute_option_statement((yyvsp[-2].option), (yyvsp[0].attr_expr)); }
#line 1313 "src/conf_yacc.c"
    break;

  case 29: /* group_statement: TGROUP '=' attribute_expression  */
#line 146 "src/conf_yacc.y"
                                                 { (yyval.ast) = new_group_statement((yyvsp[-2].s), (yyvsp[0].attr_expr)); }
#line 1319 "src/conf_yacc.c"
    break;

  case 30: /* include_statement: TINCLUDE TSPACE string_expression  */
#line 148 "src/conf_yacc.y"
                                                     { (yyval.ast) = new_include_statement((yyvsp[0].string_expr), NULL, false); }
#line 1325 "src/conf_yacc.c"
    break;

  case 31: /* include_statement: TINCLUDE TSPACE string_expression TSPACE string_expression  */
#line 149 "src/conf_yacc.y"
                                                                              { (yyval.ast) = new_include_statement((yyvsp[-2].string_expr), (yyvsp[0].string_expr), false); }
#line 1331 "src/conf_yacc.c"
    break;

  case 32: /* include_statement: TXINCLUDE TSPACE string_expression  */
#line 150 "src/conf_yacc.y"
                                                      { (yyval.ast) = new_include_statement((yyvsp[0].string_expr), NULL, true); }
#line 1337 "src/conf_yacc.c"
    break;

  case 33: /* include_statement: TXINCLUDE TSPACE string_expression TSPACE string_expression  */
#line 151 "src/conf_yacc.y"
                                                                               { (yyval.ast) = new_include_statement((yyvsp[-2].string_expr), (yyvsp[0].string_expr), true); }
#line 1343 "src/conf_yacc.c"
    break;

  case 34: /* x_include_setenv_statement: TSETENV TVARIABLE string_expression  */
#line 153 "src/conf_yacc.y"
                                                                { (yyval.ast) = new_x_include_setenv_statement((yyvsp[-1].s), (yyvsp[0].string_expr)); }
#line 1349 "src/conf_yacc.c"
    break;

  case 35: /* if_statement: if_condition TNEWLINE statements TENDIF  */
#line 155 "src/conf_yacc.y"
                                                      { (yyval.ast) = new_if_statement((yyvsp[-3].if_cond), (yyvsp[-1].ast), NULL); }
#line 1355 "src/conf_yacc.c"
    break;

  case 36: /* if_statement: if_condition TNEWLINE statements TELSE TNEWLINE statements TENDIF  */
#line 156 "src/conf_yacc.y"
                                                                                { (yyval.ast) = new_if_statement((yyvsp[-6].if_cond), (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 1361 "src/conf_yacc.c"
    break;

  case 37: /* if_condition: TIFDEF string_expression  */
#line 158 "src/conf_yacc.y"
                                       { (yyval.if_cond)=new_if_condition(new_string_bool_expression(BOOL_OP_DEFINED, (yyvsp[0].string_expr))); }
#line 1367 "src/conf_yacc.c"
    break;

  case 38: /* if_condition: TIFNDEF string_expression  */
#line 159 "src/conf_yacc.y"
                                        { (yyval.if_cond)=new_if_condition(new_bool_expression(BOOL_OP_NOT, new_string_bool_expression(BOOL_OP_DEFINED, (yyvsp[0].string_expr)), NULL)); }
#line 1373 "src/conf_yacc.c"
    break;

  case 39: /* if_condition: TIFHOST string_expression  */
#line 160 "src/conf_yacc.y"
                                        { (yyval.if_cond)=new_if_condition(new_string_bool_expression(BOOL_OP_HOSTNAME, (yyvsp[0].string_expr))); }
#line 1379 "src/conf_yacc.c"
    break;

  case 40: /* if_condition: TIFNHOST string_expression  */
#line 161 "src/conf_yacc.y"
                                         { (yyval.if_cond)=new_if_condition(new_bool_expression(BOOL_OP_NOT, new_string_bool_expression(BOOL_OP_HOSTNAME, (yyvsp[0].string_expr)), NULL)); }
#line 1385 "src/conf_yacc.c"
    break;

  case 41: /* rule_statement: TSELRXRULE string_expression attribute_expression  */
#line 163 "src/conf_yacc.y"
                                                                  { (yyval.ast) = new_rule_statement(AIDE_SELECTIVE_RULE, (yyvsp[-1].string_expr), NULL, (yyvsp[0].attr_expr)); }
#line 1391 "src/conf_yacc.c"
    break;

  case 42: /* rule_statement: TEQURXRULE string_expression attribute_expression  */
#line 164 "src/conf_yacc.y"
                                                                  { (yyval.ast) = new_rule_statement(AIDE_EQUAL_RULE, (yyvsp[-1].string_expr), NULL, (yyvsp[0].attr_expr)); }
#line 1397 "src/conf_yacc.c"
    break;

  case 43: /* rule_statement: TNEGRXRULE string_expression  */
#line 165 "src/conf_yacc.y"
                                             { (yyval.ast) = new_rule_statement(AIDE_NEGATIVE_RULE, (yyvsp[0].string_expr), NULL, NULL); }
#line 1403 "src/conf_yacc.c"
    break;

  case 44: /* rule_statement: TSELRXRULE string_expression restriction_expression attribute_expression  */
#line 166 "src/conf_yacc.y"
                                                                                         { (yyval.ast) = new_rule_statement(AIDE_SELECTIVE_RULE, (yyvsp[-2].string_expr), (yyvsp[-1].rs_expr), (yyvsp[0].attr_expr)); }
#line 1409 "src/conf_yacc.c"
    break;

  case 45: /* rule_statement: TEQURXRULE string_expression restriction_expression attribute_expression  */
#line 167 "src/conf_yacc.y"
                                                                                         { (yyval.ast) = new_rule_statement(AIDE_EQUAL_RULE, (yyvsp[-2].string_expr), (yyvsp[-1].rs_expr), (yyvsp[0].attr_expr)); }
#line 1415 "src/conf_yacc.c"
    break;

  case 46: /* rule_statement: TNEGRXRULE string_expression restriction_expression  */
#line 168 "src/conf_yacc.y"
                                                                    { (yyval.ast) = new_rule_statement(AIDE_NEGATIVE_RULE, (yyvsp[-1].string_expr), (yyvsp[0].rs_expr), NULL); }
#line 1421 "src/conf_yacc.c"
    break;


#line 1425 "src/conf_yacc.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (config_ast, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, config_ast);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, config_ast);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (config_ast, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, config_ast);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, config_ast);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 170 "src/conf_yacc.y"


void conferror(
    ast** config_ast  __attribute__((unused)),
    const char *msg){
  log_msg(LOG_LEVEL_ERROR, "%s:%d: %s (line: '%s')", conf_filename, conf_linenumber, msg, conf_linebuf);
}
