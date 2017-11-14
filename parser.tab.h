/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CONSTANT = 258,
    STRING = 259,
    FUNC_NAME = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    MUL_ASSIGN = 263,
    DIV_ASSIGN = 264,
    MOD_ASSIGN = 265,
    ADD_ASSIGN = 266,
    SUB_ASSIGN = 267,
    LEFT_ASSIGN = 268,
    RIGHT_ASSIGN = 269,
    AND_ASSIGN = 270,
    XOR_ASSIGN = 271,
    OR_ASSIGN = 272,
    TYPE_NAME = 273,
    TYPEDEF_NAME = 274,
    ENUMERATION_CONSTANT = 275,
    TYPEDEF = 276,
    EXTERN = 277,
    STATIC = 278,
    AUTO = 279,
    REGISTER = 280,
    INLINE = 281,
    CONST = 282,
    RESTRICT = 283,
    VOLATILE = 284,
    BOOL = 285,
    CHAR = 286,
    SHORT = 287,
    INT = 288,
    LONG = 289,
    SIGNED = 290,
    UNSIGNED = 291,
    FLOAT = 292,
    DOUBLE = 293,
    VOID = 294,
    COMPLEX = 295,
    IMAGINARY = 296,
    STRUCT = 297,
    UNION = 298,
    ENUM = 299,
    ELLIPSIS = 300,
    CASE = 301,
    DEFAULT = 302,
    IF = 303,
    ELSE = 304,
    SWITCH = 305,
    WHILE = 306,
    DO = 307,
    FOR = 308,
    GOTO = 309,
    CONTINUE = 310,
    BREAK = 311,
    RETURN = 312,
    ALIGNAS = 313,
    ALIGNOF = 314,
    ATOMIC = 315,
    GENERIC = 316,
    NORETURN = 317,
    STATIC_ASSERT = 318,
    THREAD_LOCAL = 319,
    SEMICOLON = 320,
    LPARENTHESIS = 321,
    RPARENTHESIS = 322,
    LBRACE = 323,
    RBRACE = 324,
    COMMA = 325,
    COLON = 326,
    EQUALS = 327,
    LBRACKET = 328,
    RBRACKET = 329,
    DOT = 330,
    EXCLAMATION = 331,
    TILDE = 332,
    BACKSLASH = 333,
    CARET = 334,
    QUESTION_MARK = 335,
    CHARACTER = 336,
    SEPARATOR = 337,
    QOUTE = 338,
    ID = 339,
    PLUS = 340,
    MINUS = 341,
    STAR = 342,
    SLASH = 343,
    MODULO = 344,
    LESS_THAN = 345,
    GREATER_THAN = 346,
    AMPERSAND = 347,
    SHL = 348,
    SHR = 349,
    LE_OP = 350,
    GE_OP = 351,
    EQ_OP = 352,
    NE_OP = 353,
    AND_OP = 354,
    OR_OP = 355,
    PIPE = 356,
    INC_OP = 357,
    DEC_OP = 358
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 56 "parser.y" /* yacc.c:1909  */

  int      value;
  char     *string;

#line 163 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
