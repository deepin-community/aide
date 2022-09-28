/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_CONF_SRC_CONF_YACC_H_INCLUDED
# define YY_CONF_SRC_CONF_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int confdebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/conf_yacc.y"

#include "conf_ast.h"

#line 53 "src/conf_yacc.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TDEFINE = 258,                 /* TDEFINE  */
    TUNDEFINE = 259,               /* TUNDEFINE  */
    TIFDEF = 260,                  /* TIFDEF  */
    TIFNDEF = 261,                 /* TIFNDEF  */
    TIFNHOST = 262,                /* TIFNHOST  */
    TIFHOST = 263,                 /* TIFHOST  */
    TELSE = 264,                   /* TELSE  */
    TENDIF = 265,                  /* TENDIF  */
    TINCLUDE = 266,                /* TINCLUDE  */
    TXINCLUDE = 267,               /* TXINCLUDE  */
    TSETENV = 268,                 /* TSETENV  */
    TGROUP = 269,                  /* TGROUP  */
    TSTRING = 270,                 /* TSTRING  */
    TEXPR = 271,                   /* TEXPR  */
    TVARIABLE = 272,               /* TVARIABLE  */
    TSPACE = 273,                  /* TSPACE  */
    TNEWLINE = 274,                /* TNEWLINE  */
    TSELRXRULE = 275,              /* TSELRXRULE  */
    TEQURXRULE = 276,              /* TEQURXRULE  */
    TNEGRXRULE = 277,              /* TNEGRXRULE  */
    CONFIGOPTION = 278             /* CONFIGOPTION  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TDEFINE 258
#define TUNDEFINE 259
#define TIFDEF 260
#define TIFNDEF 261
#define TIFNHOST 262
#define TIFHOST 263
#define TELSE 264
#define TENDIF 265
#define TINCLUDE 266
#define TXINCLUDE 267
#define TSETENV 268
#define TGROUP 269
#define TSTRING 270
#define TEXPR 271
#define TVARIABLE 272
#define TSPACE 273
#define TNEWLINE 274
#define TSELRXRULE 275
#define TEQURXRULE 276
#define TNEGRXRULE 277
#define CONFIGOPTION 278

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "src/conf_yacc.y"

  char* s;

  config_option option;

  ast* ast;

  if_condition* if_cond;
  attribute_expression* attr_expr;
  restriction_expression* rs_expr;
  string_expression* string_expr;

#line 131 "src/conf_yacc.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE conflval;

int confparse (ast** config_ast);

#endif /* !YY_CONF_SRC_CONF_YACC_H_INCLUDED  */
