/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include "lex.yy.c"
#include "compiler.h"
void yyerror(const char *s);



#line 74 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
#line 56 "parser.y" /* yacc.c:355  */

  int      value;
  char     *string;

#line 223 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  108
/* YYNRULES -- Number of rules.  */
#define YYNRULES  333
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  549

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    69,    72,    73,    73,    74,    75,    76,
      77,    78,    82,    83,    87,    88,    92,    93,    97,    98,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   110,
     114,   115,   116,   120,   121,   121,   122,   122,   123,   124,
     125,   126,   130,   131,   132,   133,   134,   135,   139,   140,
     144,   145,   145,   146,   146,   147,   147,   151,   152,   152,
     153,   154,   154,   155,   159,   160,   161,   162,   163,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   179,   180,
     181,   182,   183,   187,   188,   189,   193,   194,   195,   199,
     200,   201,   205,   206,   207,   211,   212,   213,   217,   218,
     219,   220,   224,   225,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   243,   244,   248,   253,   254,
     255,   255,   256,   257,   262,   263,   264,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   283,   284,
     285,   289,   290,   291,   292,   296,   297,   298,   299,   300,
     301,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   324,   324,   325,
     325,   326,   330,   331,   335,   336,   340,   341,   342,   346,
     347,   348,   349,   353,   354,   358,   359,   360,   364,   365,
     370,   370,   371,   371,   372,   376,   377,   381,   382,   386,
     390,   391,   392,   393,   397,   398,   402,   403,   407,   408,
     414,   415,   416,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   431,   435,   436,   437,
     438,   442,   443,   448,   449,   453,   454,   458,   459,   460,
     465,   466,   470,   471,   475,   476,   477,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   505,   506,
     510,   510,   511,   515,   516,   517,   518,   522,   526,   527,
     531,   532,   536,   540,   541,   542,   543,   544,   545,   549,
     550,   551,   555,   555,   556,   556,   560,   561,   565,   566,
     570,   571,   572,   573,   577,   577,   577,   578,   582,   583,
     587,   587,   587,   588,   588,   588,   589,   590,   591,   592,
     596,   597,   598,   599,   600,   604,   605,   609,   610,   613,
     614,   618,   622,   623
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANT", "STRING", "FUNC_NAME",
  "SIZEOF", "PTR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "SEMICOLON", "LPARENTHESIS",
  "RPARENTHESIS", "LBRACE", "RBRACE", "COMMA", "COLON", "EQUALS",
  "LBRACKET", "RBRACKET", "DOT", "EXCLAMATION", "TILDE", "BACKSLASH",
  "CARET", "QUESTION_MARK", "CHARACTER", "SEPARATOR", "QOUTE", "ID",
  "PLUS", "MINUS", "STAR", "SLASH", "MODULO", "LESS_THAN", "GREATER_THAN",
  "AMPERSAND", "SHL", "SHR", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "PIPE", "INC_OP", "DEC_OP", "$accept", "saveType",
  "save_pointer", "primary_expression", "$@1", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression2",
  "postfix_expression", "$@2", "argument_expression_list",
  "unary_expression", "$@3", "$@4", "unary_operator", "cast_expression",
  "multiplicative_expression", "$@5", "$@6", "$@7", "additive_expression",
  "$@8", "$@9", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration2", "$@10", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "$@11", "$@12", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier2",
  "enum_specifier", "$@13", "$@14", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator2",
  "direct_declarator", "$@15", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "ID_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer2", "initializer", "$@16",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "$@17", "$@18", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@19", "$@20",
  "else_block", "iteration_statement", "$@21", "$@22", "$@23", "$@24",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition2", "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358
};
# endif

#define YYPACT_NINF -362

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-362)))

#define YYTABLE_NINF -293

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2927,   -38,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,     2,   -20,   -11,  -362,
      -3,  -362,  2973,  -362,    37,  2409,  2479,  -362,    34,  -362,
    -362,  2549,  2619,  2689,  -362,  2881,  -362,  -362,  -362,  -362,
      -1,   733,  3141,  1582,  -362,    18,  -362,    37,  -362,    19,
    2828,   138,    29,  -362,  -362,  -362,  -362,    41,  -362,  -362,
    -362,  -362,  -362,    44,  -362,    65,  -362,   720,    86,   102,
     810,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,   196,  -362,    24,  -362,  2290,  -362,   130,   174,   217,
     144,   218,   131,   129,   135,   142,   -63,  -362,   179,  3141,
     -16,  3141,   210,   220,   159,   177,  -362,  -362,    15,  -362,
    1180,   224,   128,   -38,   192,  -362,  -362,  2828,  -362,   937,
     138,  1269,  -362,   233,    72,  -362,    44,  1582,   810,  -362,
    3141,  1604,   -46,   542,  -362,  -362,    53,   242,  2322,  2322,
    -362,   230,  1334,  1582,   249,  -362,  -362,  -362,  -362,  -362,
    -362,  1691,  1713,  1725,  1759,  1818,  1852,  1864,  1886,  1973,
    1995,  2007,  2041,  2100,  2134,  1582,  2146,  -362,  -362,   165,
     966,   185,  -362,   199,  -362,  -362,  -362,   331,  -362,    37,
    -362,    37,   271,  1366,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,   128,   263,   656,  -362,  -362,   -44,  1257,  -362,   269,
     270,  1043,  3011,  -362,   116,  -362,  1269,   337,   -45,  -362,
    -362,    72,   247,   276,   278,    45,   277,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  1582,
    -362,  -362,  1582,  2277,   810,  -362,  -362,  -362,  -362,   -14,
    -362,   251,  -362,  2290,  2290,  2290,  -362,  2290,  -362,  2290,
    -362,   174,  -362,   174,  -362,   217,  -362,   217,  -362,   217,
    -362,   217,  -362,   144,  -362,   144,  -362,   218,  -362,   131,
    -362,   129,  -362,   135,   252,  -362,   142,  -362,  2973,   282,
     283,  -362,   285,  1257,  -362,   287,   289,  1056,   199,   293,
    1133,   294,  -362,  -362,  -362,    65,  -362,    99,  -362,  -362,
    -362,    11,  1582,   291,   298,   300,  -362,  -362,   301,   284,
     304,   305,  1411,  -362,   302,    96,  -362,  -362,  -362,  -362,
     569,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,   307,
     124,   309,  1257,  -362,  -362,  1582,  -362,   310,   311,  -362,
    -362,  -362,  1582,    94,  -362,   312,  3059,  -362,  -362,  -362,
    -362,  1582,   303,  -362,  -362,  3107,  -362,  -362,  -362,  -362,
     319,  -362,  2168,  -362,  -362,  -362,  -362,   130,   130,  2255,
     108,  -362,   326,  -362,   318,  1257,  -362,  -362,  1582,  -362,
     320,  -362,   321,  1257,  -362,   323,   325,  1146,   330,   322,
    -362,  -362,  -362,   329,   871,  1582,  1582,   338,   871,   445,
     340,  -362,  -362,  -362,    97,   871,  -362,  -362,  -362,  -362,
    -362,  -362,   324,  -362,   334,   341,  -362,  -362,  -362,  -362,
     118,  1582,  -362,  -362,   335,   126,  -362,   336,  1321,   303,
      65,  -362,    65,  -362,  2759,  -362,   146,  -362,  -362,  -362,
    -362,   342,   343,  -362,  -362,   344,  1257,  -362,  -362,  1582,
    -362,   345,  -362,  -362,   871,    83,  -362,   158,   214,  1582,
     358,  1443,  1443,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  1582,  -362,  3107,  1582,  1582,   332,  -362,   109,  1477,
     186,  -362,  -362,  -362,  -362,   348,   349,  -362,  -362,  -362,
    -362,   871,   215,   353,  1536,  1570,  -362,  -362,  -362,   351,
    -362,  1289,  -362,  -362,  -362,  -362,  -362,  -362,  -362,   871,
    -362,  -362,  1582,   871,   216,   871,   225,  -362,  -362,  -362,
    1477,  -362,   871,   231,  -362,   871,  -362,   871,  -362,   372,
    -362,  -362,  -362,  -362,   871,  -362,   357,  -362,  -362
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   137,   166,   145,   146,   147,   149,   150,   204,   200,
     201,   202,   160,   152,   153,   154,   155,   158,   159,   156,
     157,   151,   161,   162,   172,   173,     0,     0,   203,   205,
       0,   148,     0,   328,     0,     0,     0,   164,     0,   165,
     163,     0,     0,     0,   126,     0,   325,   327,   125,   190,
     194,     0,     0,     0,   137,     0,   214,     0,   213,     0,
       0,   209,     0,   331,   127,   129,   167,   171,   131,   133,
     135,     1,   326,     0,   192,     0,     7,     5,     0,     0,
       0,    47,    46,     4,    44,    45,    43,    42,    34,    36,
      20,     0,    11,    33,    48,     5,    50,    57,    64,    69,
      78,    83,    86,    89,    92,    95,    98,   117,     0,   180,
     243,   182,     0,     0,     0,   119,   118,   124,     0,   138,
       0,     0,   230,     0,   294,   332,   330,     0,   225,     0,
     208,     0,   169,   197,     0,   195,     0,     0,     0,    39,
       0,     0,     0,    48,   102,   115,     0,     0,     5,     5,
       6,     0,     0,     0,     0,    26,    27,    38,    51,    53,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,   179,     2,
       0,   245,   242,   246,   181,   206,   199,     0,   123,     0,
     122,     0,     0,     0,   270,   272,   143,   215,   203,   231,
     229,   228,     0,     0,   333,   329,     2,     0,   216,    43,
       0,     0,     0,   174,     0,   178,     0,     0,     0,   188,
     191,     0,     0,     0,     0,     0,     0,    10,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   104,     0,
       9,     8,     0,     5,     0,    35,    37,    25,    22,     0,
      30,     0,    24,     5,     5,     5,    60,     5,    63,     5,
      67,    65,    68,    66,    72,    70,    73,    71,    76,    74,
      77,    75,    81,    79,    82,    80,    85,    84,    88,    87,
      91,    90,    94,    93,     0,    97,    96,   264,     0,     0,
     234,   235,     0,     0,   248,    43,     0,     0,   244,     2,
       0,     0,   140,   139,   121,   142,   141,     0,   232,   227,
     293,     0,     0,     0,     0,     0,   310,   313,     0,     0,
       0,     0,     0,   300,     4,     0,   298,   299,   283,   284,
       0,   296,   285,   286,   287,   288,   211,   240,   226,     0,
       0,     0,     0,   217,   224,     0,   223,    43,     0,   168,
     175,   176,     0,     0,   183,   187,     0,   198,   189,   196,
     193,     0,    40,    41,    13,     0,   103,   116,    28,    49,
       0,    23,     0,    21,    52,    54,    56,    59,    62,     0,
       0,   265,     2,   247,     0,     0,   249,   255,     0,   254,
       0,   266,     0,     0,   256,    43,     0,     0,     0,     0,
     268,   271,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   321,   322,   323,     0,     0,   302,   301,   295,   297,
     210,   212,     0,   219,     0,     0,   220,   222,   185,   177,
       0,     0,   170,   101,     0,     0,    14,     0,     0,     0,
      32,    31,   100,    99,     0,   237,     0,   238,   233,   236,
     251,     0,     0,   253,   267,     0,     0,   257,   263,     0,
     262,     0,   282,   269,     0,     0,   291,     0,     0,     0,
       0,     0,     0,   320,   324,   289,   241,   218,   221,   184,
     186,     0,    12,     0,     0,     0,     0,   274,     0,     0,
       0,   278,   250,   252,   259,     0,     0,   260,   290,   303,
     304,     0,     0,     0,     0,     0,    17,    15,    16,     0,
     281,     0,    18,    29,   273,   277,   279,   258,   261,     0,
     307,   311,     0,     0,     0,     0,     0,   280,    19,   276,
       0,   305,     0,     0,   318,     0,   316,     0,   275,   309,
     312,   314,   319,   317,     0,   306,     0,   308,   315
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -362,  -155,  -362,  -362,  -362,  -362,  -362,   -60,  -362,  -362,
    -362,  -362,   -33,  -362,  -362,  -362,   -83,    16,  -362,  -362,
    -362,   161,  -362,  -362,   104,   162,   253,   255,   257,   254,
     256,  -362,   -49,    57,  -362,   -79,   -50,  -362,  -362,   -54,
      46,  -362,   117,  -362,    25,  -362,  -362,  -362,  -362,   221,
    -198,   -62,  -362,     1,   212,  -362,  -362,  -362,   308,   222,
    -362,     0,  -362,  -362,   -29,  -362,   -55,  -362,  -100,  -103,
    -191,  -362,    52,  -362,    13,  -102,  -172,  -362,  -182,  -362,
    -362,   -73,  -362,   -51,  -118,  -160,  -362,   -27,  -362,  -362,
    -362,   111,  -361,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,   402,  -362,  -362,  -362
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    59,    90,    91,    92,   435,   436,   513,    93,
     438,   249,   143,   148,   149,    95,    96,    97,   253,   254,
     255,    98,   257,   259,    99,   100,   101,   102,   103,   104,
     105,   106,   144,   145,   239,   325,   108,   117,   192,    33,
      34,   118,   119,    35,   109,    37,   131,   216,    38,   212,
     213,   110,   353,   354,   220,    39,    73,   136,   134,   135,
      40,   111,    42,    43,   120,   338,    61,   206,    62,   201,
     289,   290,   291,   340,   437,   292,   183,   401,   196,   307,
     488,   489,   490,   491,    44,   327,   328,   329,   202,   203,
     330,   331,   332,   333,   519,   539,   545,   334,   407,   532,
     408,   546,   335,    45,    46,    63,    47,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   146,   107,   114,   107,    60,   125,   130,   182,   298,
     181,   306,   157,   215,   350,   339,   190,   175,    94,   115,
      94,   227,   200,   336,   288,    36,   211,    48,   121,   358,
      56,   151,    41,   126,   137,    41,    41,   176,    56,   133,
     337,    41,    41,    41,   139,    41,    51,   178,   472,   184,
     179,   288,   180,   371,   240,    52,   372,    36,   222,   146,
      36,    36,    94,    53,   112,   113,    36,    36,    36,   214,
      36,    -3,    74,   204,   251,    49,   402,   297,    55,   181,
    -120,    64,    65,   116,    57,   191,    50,    68,    69,    70,
     152,   137,   153,   147,   215,    57,   284,   416,   215,   154,
     205,   309,    58,    57,   342,    -3,   122,    66,   392,    56,
     504,   505,   364,    58,   132,   245,   246,    56,    67,    56,
     241,    58,   199,   242,    -3,   137,   155,   156,   133,   199,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,   218,    94,   288,   137,   219,    56,   499,   326,
     214,   223,   140,   224,   214,     9,    10,    11,   350,   429,
     369,   417,   474,   137,   430,   146,   242,   242,   141,   399,
     374,   375,   376,   400,   444,  -239,   180,   195,  -239,   511,
     199,   351,    57,   512,    57,   355,   210,   352,   198,   352,
     385,   421,    58,   482,   422,    -3,   483,   397,   226,   150,
      58,   308,    58,    -3,   128,    -3,   129,   199,   172,   250,
      94,   308,   444,  -245,   180,    -3,  -245,   158,   159,   160,
      94,    94,    94,   171,    94,   500,    94,   288,   242,   187,
      58,   179,   287,   180,   165,   166,   173,   296,   215,   167,
     168,   174,   188,   414,   466,  -214,   177,   189,   470,  -214,
     195,   179,    -3,   180,   485,   475,   487,   370,   515,   161,
     162,   486,   403,   107,   341,   299,  -292,   300,   348,   265,
     267,   269,   271,   377,   298,   378,   326,   185,   447,    94,
     446,   501,   521,   535,   242,   242,   242,   186,    41,   288,
     456,   197,   537,   199,   214,   242,   366,   308,   541,   367,
     199,   242,   428,   107,   498,   217,   302,   514,   303,   243,
     163,   164,   433,    36,   247,   169,   170,   242,   361,    94,
     373,   242,   242,   379,   261,   263,   467,   468,    94,   529,
     443,   273,   275,   252,   380,   301,   304,   310,   343,   344,
     357,   520,   308,   362,   446,   363,    94,   365,   538,   381,
     384,   445,   383,   382,   390,   471,   386,   396,   387,   531,
     391,   398,   404,   534,   405,   536,   406,   409,   410,   411,
     412,   448,   540,   415,   420,   542,   368,   543,   423,   426,
     427,   480,   107,   431,   547,   308,   439,   450,   454,   453,
     502,   130,   457,   199,   458,   462,   463,   308,    94,   424,
     464,   355,   425,   477,   469,   473,   481,   484,   476,   503,
     478,   492,   493,   494,   497,   121,   510,   517,   518,   522,
     527,   544,   548,   507,   277,   524,   526,   279,   283,   441,
     281,   479,   286,   360,   449,   509,   107,   356,   530,   516,
     359,   419,   451,   533,   221,   452,   311,    72,    -5,    76,
     455,    77,    94,     0,   461,     0,   308,     0,     0,     0,
       0,     0,     0,     0,    -2,     0,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,     0,    -2,    78,    -2,    79,    -2,    30,    -2,
     323,    80,     0,   495,     0,     0,   496,     0,     0,     0,
       0,    81,    82,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,     0,     0,     0,     0,    87,   506,     0,
       0,   508,     0,     0,     0,     0,   195,    88,    89,     0,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
       0,     0,     0,     0,     0,     0,     0,     0,   195,     0,
     311,     0,    -5,    76,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   195,    -2,     0,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,   238,   312,   313,   314,     0,   315,
     316,   317,   318,   319,   320,   321,   322,    -2,    78,    -2,
      79,    -2,    30,    -2,   323,    80,     0,     0,     0,     0,
       0,     0,   124,   418,     0,    81,    82,     0,     0,     0,
       0,     0,     0,   324,    84,    85,    86,   311,     0,    -5,
      76,    87,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,     0,     0,    -2,     0,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,     0,   312,   313,   314,     0,   315,   316,   317,   318,
     319,   320,   321,   322,    -2,    78,    -2,    79,    -2,    30,
      -2,   323,    80,     0,    76,     0,    77,     0,     0,   124,
       0,     0,    81,    82,    75,     0,    -5,    76,     0,    77,
     324,    84,    85,    86,     0,     0,     0,     0,    87,     0,
       0,     0,     2,     0,     0,     0,     0,     0,    88,    89,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    78,
       0,    79,     0,     0,     0,     0,   138,     0,     0,     0,
       0,     0,    78,    28,    79,     0,    81,    82,     0,    80,
       0,     0,     0,     0,    83,    84,    85,    86,     0,    81,
      82,   142,    87,    -5,    76,     0,    77,    83,    84,    85,
      86,     0,    88,    89,     0,    87,     0,     0,     0,     2,
       0,     0,     0,     0,     0,    88,    89,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      28,    79,   465,     0,    -5,    76,    80,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    81,    82,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,     0,     0,     0,   312,   313,   314,
       0,   315,   316,   317,   318,   319,   320,   321,   322,     0,
      78,     0,    79,     0,     0,     0,   323,    80,    75,     0,
      -5,    76,     0,    77,   124,     0,     0,    81,    82,     0,
       0,     0,     0,     0,     0,   324,    84,    85,    86,     0,
     207,     0,     0,    87,     9,    10,    11,    75,     0,    -5,
      76,     0,    77,    88,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
       0,     0,     0,     9,    10,    11,    78,   198,    79,     0,
       0,     0,     0,    80,     0,     0,   208,     0,     0,     0,
       0,     0,     0,    81,    82,     0,     0,     0,     0,     0,
       0,    83,    84,    85,   209,    78,   198,    79,     0,    87,
       0,     0,    80,     0,     0,   294,     0,     0,     0,    88,
      89,     0,    81,    82,    75,     0,    -5,    76,     0,    77,
      83,    84,    85,   295,     0,     0,     0,    75,    87,    -5,
      76,     0,    77,     0,     0,     0,   345,     0,    88,    89,
       9,    10,    11,     0,     0,     0,     0,     0,     0,   388,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,   198,    79,     0,     0,     0,     0,    80,
       0,     0,   346,     0,     0,    78,   198,    79,     0,    81,
      82,     0,    80,     0,     0,   389,     0,    83,    84,    85,
     347,     0,    81,    82,    75,    87,    -5,    76,     0,    77,
      83,    84,    85,    86,     0,    88,    89,    75,    87,    -5,
      76,     0,    77,     0,     0,     0,   393,     0,    88,    89,
       9,    10,    11,     0,     0,     0,     0,     0,     0,   459,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,    75,     0,    -5,    76,     0,    77,     0,     0,     0,
       0,     0,    78,   198,    79,     0,     0,     0,     0,    80,
       0,     0,   394,     0,     0,    78,   198,    79,     0,    81,
      82,     0,    80,     0,     0,   460,     0,    83,    84,    85,
     395,     0,    81,    82,     0,    87,     0,     0,     0,     0,
      83,    84,    85,    86,     0,    88,    89,     0,    87,    78,
       0,    79,     0,     0,     0,  -144,    80,     0,    88,    89,
    -144,     0,   193,   194,     0,     0,    81,    82,    75,     0,
      -5,    76,     0,    77,    83,    84,    85,    86,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,     9,    10,    11,     0,     2,     0,
      75,     0,    -5,    76,     0,    77,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    78,   198,    79,     0,
       0,     0,    75,    80,    -5,    76,     0,    77,     0,    28,
       0,     0,    30,    81,    82,    75,     0,    -5,    76,     0,
      77,    83,    84,    85,    86,     0,     0,     0,    78,    87,
      79,     0,     0,     0,     0,    80,     0,   485,     0,    88,
      89,     0,   194,   528,   486,    81,    82,   305,     0,    -5,
      76,     0,    77,    83,    84,    85,    86,     0,     0,     0,
      78,    87,    79,     0,     0,     0,     0,    80,     0,   485,
       0,    88,    89,    78,   194,    79,   486,    81,    82,     0,
      80,   248,     0,     0,     0,    83,    84,    85,    86,     0,
      81,    82,    75,    87,    -5,    76,     0,    77,    83,    84,
      85,    86,     0,    88,    89,    78,    87,    79,     0,     0,
       0,     0,    80,     0,     0,     0,    88,    89,     0,   194,
       0,     0,    81,    82,   465,     0,    -5,    76,     0,    77,
      83,    84,    85,    86,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      78,     0,    79,     0,     0,     0,   413,    80,    75,     0,
      -5,    76,     0,    77,     0,     0,     0,    81,    82,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,     0,
       0,     0,    78,    87,    79,     0,     0,     0,   323,    80,
       0,     0,     0,    88,    89,     0,     0,     0,     0,    81,
      82,     0,     0,     0,     0,     0,     0,    83,    84,    85,
      86,     0,     0,     0,     0,    87,    78,    75,    79,    -5,
      76,     0,    77,    80,     0,    88,    89,     0,     0,     0,
     194,     0,     0,    81,    82,     0,     0,     0,     0,     0,
       0,    83,    84,    85,    86,     0,     0,     0,     0,    87,
       0,    75,     0,    -5,    76,     0,    77,     0,     0,    88,
      89,     0,     0,    75,     0,    -5,    76,     0,    77,     0,
       0,     0,     0,     0,     0,    78,     0,    79,     0,     0,
       0,     0,    80,   523,     0,   225,     0,    -5,    76,     0,
      77,     0,    81,    82,     0,     0,     0,     0,     0,     0,
      83,    84,    85,    86,     0,     0,     0,     0,    87,    78,
       0,    79,     0,     0,     0,     0,    80,   525,    88,    89,
       0,    78,     0,    79,     0,     0,    81,    82,    80,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    81,    82,
       0,     0,    87,    78,     0,    79,    83,    84,    85,    86,
      80,     0,    88,    89,    87,     0,     0,     0,     0,     0,
      81,    82,     0,     0,    88,    89,     0,     0,    83,    84,
      85,    86,   256,     0,   -58,   -58,    87,   -58,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,     0,     0,
       0,     0,     0,     0,   258,     0,   -61,   -61,     0,   -61,
       0,     0,     0,     0,     0,     0,   260,     0,    -5,    76,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -58,     0,   -58,     0,     0,     0,     0,   -58,     0,     0,
     262,     0,    -5,    76,     0,    77,     0,   -58,   -58,     0,
       0,     0,   -61,     0,   -61,   -58,   -58,   -58,   -58,   -61,
       0,     0,     0,   -58,    78,     0,    79,     0,     0,   -61,
     -61,    80,     0,   -58,   -58,     0,     0,   -61,   -61,   -61,
     -61,    81,    82,     0,     0,   -61,     0,     0,     0,    83,
      84,    85,    86,     0,     0,   -61,   -61,    87,    78,   264,
      79,    -5,    76,     0,    77,    80,     0,    88,    89,     0,
       0,     0,     0,     0,     0,    81,    82,     0,     0,     0,
       0,     0,     0,    83,    84,    85,    86,     0,     0,     0,
       0,    87,     0,   266,     0,    -5,    76,     0,    77,     0,
       0,    88,    89,     0,     0,   268,     0,    -5,    76,     0,
      77,     0,     0,     0,     0,     0,     0,    78,     0,    79,
       0,     0,     0,     0,    80,     0,     0,   270,     0,    -5,
      76,     0,    77,     0,    81,    82,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,     0,     0,     0,     0,
      87,    78,     0,    79,     0,     0,     0,     0,    80,     0,
      88,    89,     0,    78,     0,    79,     0,     0,    81,    82,
      80,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      81,    82,     0,     0,    87,    78,     0,    79,    83,    84,
      85,    86,    80,     0,    88,    89,    87,     0,     0,     0,
       0,     0,    81,    82,     0,     0,    88,    89,     0,     0,
      83,    84,    85,    86,   272,     0,    -5,    76,    87,    77,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
       0,     0,     0,     0,     0,     0,   274,     0,    -5,    76,
       0,    77,     0,     0,     0,     0,     0,     0,   276,     0,
      -5,    76,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,    79,     0,     0,     0,     0,    80,
       0,     0,   278,     0,    -5,    76,     0,    77,     0,    81,
      82,     0,     0,     0,    78,     0,    79,    83,    84,    85,
      86,    80,     0,     0,     0,    87,    78,     0,    79,     0,
       0,    81,    82,    80,     0,    88,    89,     0,     0,    83,
      84,    85,    86,    81,    82,     0,     0,    87,     0,     0,
       0,    83,    84,    85,    86,     0,     0,    88,    89,    87,
      78,   280,    79,    -5,    76,     0,    77,    80,     0,    88,
      89,     0,     0,     0,     0,     0,     0,    81,    82,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,     0,
       0,     0,     0,    87,     0,   282,     0,    -5,    76,     0,
      77,     0,     0,    88,    89,     0,     0,   285,     0,    -5,
      76,     0,    77,     0,     0,     0,     0,     0,     0,    78,
       0,    79,     0,     0,     0,     0,    80,     0,     0,   440,
       0,    -5,    76,     0,    77,     0,    81,    82,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,     0,     0,
       0,     0,    87,    78,     0,    79,     0,     0,     0,     0,
      80,     0,    88,    89,     0,    78,     0,    79,     0,     0,
      81,    82,    80,     0,     0,     0,     0,     0,    83,    84,
      85,    86,    81,    82,     0,     0,    87,    78,     0,    79,
      83,    84,    85,    86,    80,     0,    88,    89,    87,     0,
       0,     0,     0,     0,    81,    82,     0,     0,    88,    89,
       0,     0,    83,    84,    85,    86,   442,     0,    -5,    76,
      87,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,    79,     0,     0,     0,
       0,    80,     0,     0,     0,     0,    76,     0,    77,     0,
       0,    81,    82,     0,     0,     0,    78,     0,    79,    83,
      84,    85,    86,    80,     0,     0,     0,    87,     0,    78,
     368,    79,     0,    81,    82,     0,    80,    88,    89,     0,
       0,    83,    84,    85,    86,     0,    81,    82,     0,    87,
       0,     0,     0,     0,    83,    84,    85,    86,     0,    88,
      89,    78,    87,    79,     0,     0,     0,     0,   244,     0,
       0,     0,    88,    89,     0,     0,     0,     0,    81,    82,
       0,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      54,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,  -128,  -128,  -128,  -128,     0,  -128,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -128,     0,     0,  -128,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,  -130,  -130,  -130,  -130,     0,  -130,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -130,     0,     0,  -130,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,  -132,  -132,  -132,  -132,     0,  -132,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -132,     0,     0,  -132,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,  -134,  -134,  -134,  -134,     0,  -134,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -134,     0,     0,  -134,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,  -136,  -136,  -136,  -136,     0,  -136,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -136,     0,     0,  -136,     0,    -2,     0,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -2,     0,    -2,
       0,    -2,     0,    -2,     0,   444,   287,   180,     0,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,    -3,    -2,     0,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     1,     0,     0,     0,    -2,     0,    -2,     0,
      -2,    30,    -2,     0,     0,     0,     0,     0,     0,     0,
       2,   124,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,    30,    31,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    27,     0,    28,     0,    29,     0,    31,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,   349,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,   432,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,   434,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,    28,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28
};

static const yytype_int16 yycheck[] =
{
       0,    80,    51,    53,    53,    34,    60,    62,   110,   181,
     110,   193,    95,   131,   212,   206,     1,    80,    51,     1,
      53,    67,   122,    67,   179,     0,   129,    65,    57,    74,
       1,     7,    32,    60,    80,    35,    36,   100,     1,    84,
      84,    41,    42,    43,    77,    45,    66,   109,   409,   111,
      66,   206,    68,    67,     1,    66,    70,    32,   137,   138,
      35,    36,    95,    66,    51,    52,    41,    42,    43,   131,
      45,    87,    73,   127,   153,    73,    65,   180,    32,   179,
      65,    35,    36,    65,    66,    70,    84,    41,    42,    43,
      66,    80,    68,    80,   212,    66,   175,     1,   216,    75,
     127,   201,    84,    66,   207,    87,    87,    73,   299,     1,
     471,   472,    67,    84,    73,   148,   149,     1,    84,     1,
      67,    84,   122,    70,    87,    80,   102,   103,    84,   129,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,    70,   176,   299,    80,    74,     1,    65,   203,
     212,   138,    66,   140,   216,    27,    28,    29,   356,    65,
     243,    65,    65,    80,    70,   244,    70,    70,    66,    70,
     253,   254,   255,    74,    66,    67,    68,   120,    70,    70,
     180,    65,    66,    74,    66,   214,   129,    71,    60,    71,
     293,    67,    84,    67,    70,    87,    70,   300,   141,     3,
      84,   201,    84,    87,    66,    87,    68,   207,    79,   152,
     243,   211,    66,    67,    68,    87,    70,    87,    88,    89,
     253,   254,   255,    92,   257,    67,   259,   382,    70,    70,
      84,    66,    67,    68,    90,    91,   101,   180,   356,    95,
      96,    99,    65,   322,   404,    68,    67,    70,   408,    72,
     193,    66,    87,    68,    68,   415,   438,   244,    72,    85,
      86,    75,   312,   312,   207,    66,    74,    68,   211,   165,
     166,   167,   168,   257,   446,   259,   330,    67,   380,   312,
     380,    67,    67,    67,    70,    70,    70,    67,   288,   444,
     393,    67,    67,   293,   356,    70,   239,   297,    67,   242,
     300,    70,   352,   352,   464,    72,   189,   489,   191,    67,
      93,    94,   361,   288,    84,    97,    98,    70,    71,   352,
      69,    70,    70,    71,   163,   164,   405,   406,   361,   511,
     379,   169,   170,    84,   288,     4,    65,    74,    69,    69,
       3,   501,   342,    67,   444,    67,   379,    70,   530,    67,
     293,   380,    67,    70,   297,   409,    69,   300,    69,   519,
      67,    67,    71,   523,    66,   525,    66,    66,    84,    65,
      65,    45,   532,    71,    67,   535,    73,   537,    69,    69,
      69,   431,   431,    71,   544,   385,    67,    69,    67,    69,
     469,   446,    69,   393,    69,    65,    74,   397,   431,   342,
      71,   430,   345,    69,    66,    65,    71,    71,    84,    51,
      69,    69,    69,    69,    69,   444,    84,    69,    69,    66,
      69,    49,    65,   483,   171,   504,   505,   172,   174,   372,
     173,   430,   176,   221,   382,   485,   485,   216,   511,   490,
     218,   330,   385,   522,   136,   388,     1,    45,     3,     4,
     393,     6,   485,    -1,   397,    -1,   456,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,   456,    -1,    -1,   459,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    92,   481,    -1,
      -1,   484,    -1,    -1,    -1,    -1,   489,   102,   103,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
       1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    72,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,     1,    -1,     3,
       4,    92,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,    -1,    -1,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,     4,    -1,     6,    -1,    -1,    73,
      -1,    -1,    76,    77,     1,    -1,     3,     4,    -1,     6,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,   102,   103,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    59,
      -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    76,    77,    -1,    66,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,    76,
      77,     1,    92,     3,     4,    -1,     6,    84,    85,    86,
      87,    -1,   102,   103,    -1,    92,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,   102,   103,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,     1,    -1,     3,     4,    66,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    -1,    61,    -1,    -1,    -1,    65,    66,     1,    -1,
       3,     4,    -1,     6,    73,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
      23,    -1,    -1,    92,    27,    28,    29,     1,    -1,     3,
       4,    -1,     6,   102,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    59,    60,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    59,    60,    61,    -1,    92,
      -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,   102,
     103,    -1,    76,    77,     1,    -1,     3,     4,    -1,     6,
      84,    85,    86,    87,    -1,    -1,    -1,     1,    92,     3,
       4,    -1,     6,    -1,    -1,    -1,    23,    -1,   102,   103,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    59,    60,    61,    -1,    76,
      77,    -1,    66,    -1,    -1,    69,    -1,    84,    85,    86,
      87,    -1,    76,    77,     1,    92,     3,     4,    -1,     6,
      84,    85,    86,    87,    -1,   102,   103,     1,    92,     3,
       4,    -1,     6,    -1,    -1,    -1,    23,    -1,   102,   103,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    59,    60,    61,    -1,    76,
      77,    -1,    66,    -1,    -1,    69,    -1,    84,    85,    86,
      87,    -1,    76,    77,    -1,    92,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    -1,   102,   103,    -1,    92,    59,
      -1,    61,    -1,    -1,    -1,    65,    66,    -1,   102,   103,
      70,    -1,    72,    73,    -1,    -1,    76,    77,     1,    -1,
       3,     4,    -1,     6,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    27,    28,    29,    -1,    19,    -1,
       1,    -1,     3,     4,    -1,     6,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    59,    60,    61,    -1,
      -1,    -1,     1,    66,     3,     4,    -1,     6,    -1,    60,
      -1,    -1,    63,    76,    77,     1,    -1,     3,     4,    -1,
       6,    84,    85,    86,    87,    -1,    -1,    -1,    59,    92,
      61,    -1,    -1,    -1,    -1,    66,    -1,    68,    -1,   102,
     103,    -1,    73,    74,    75,    76,    77,     1,    -1,     3,
       4,    -1,     6,    84,    85,    86,    87,    -1,    -1,    -1,
      59,    92,    61,    -1,    -1,    -1,    -1,    66,    -1,    68,
      -1,   102,   103,    59,    73,    61,    75,    76,    77,    -1,
      66,    67,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
      76,    77,     1,    92,     3,     4,    -1,     6,    84,    85,
      86,    87,    -1,   102,   103,    59,    92,    61,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,   102,   103,    -1,    73,
      -1,    -1,    76,    77,     1,    -1,     3,     4,    -1,     6,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      59,    -1,    61,    -1,    -1,    -1,    65,    66,     1,    -1,
       3,     4,    -1,     6,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    59,    92,    61,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    92,    59,     1,    61,     3,
       4,    -1,     6,    66,    -1,   102,   103,    -1,    -1,    -1,
      73,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,    -1,   102,
     103,    -1,    -1,     1,    -1,     3,     4,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    -1,    66,    67,    -1,     1,    -1,     3,     4,    -1,
       6,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,    59,
      -1,    61,    -1,    -1,    -1,    -1,    66,    67,   102,   103,
      -1,    59,    -1,    61,    -1,    -1,    76,    77,    66,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    76,    77,
      -1,    -1,    92,    59,    -1,    61,    84,    85,    86,    87,
      66,    -1,   102,   103,    92,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,   102,   103,    -1,    -1,    84,    85,
      86,    87,     1,    -1,     3,     4,    92,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,    -1,    76,    77,    -1,
      -1,    -1,    59,    -1,    61,    84,    85,    86,    87,    66,
      -1,    -1,    -1,    92,    59,    -1,    61,    -1,    -1,    76,
      77,    66,    -1,   102,   103,    -1,    -1,    84,    85,    86,
      87,    76,    77,    -1,    -1,    92,    -1,    -1,    -1,    84,
      85,    86,    87,    -1,    -1,   102,   103,    92,    59,     1,
      61,     3,     4,    -1,     6,    66,    -1,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    92,    -1,     1,    -1,     3,     4,    -1,     6,    -1,
      -1,   102,   103,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      92,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,
     102,   103,    -1,    59,    -1,    61,    -1,    -1,    76,    77,
      66,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      76,    77,    -1,    -1,    92,    59,    -1,    61,    84,    85,
      86,    87,    66,    -1,   102,   103,    92,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,   102,   103,    -1,    -1,
      84,    85,    86,    87,     1,    -1,     3,     4,    92,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,    -1,    76,
      77,    -1,    -1,    -1,    59,    -1,    61,    84,    85,    86,
      87,    66,    -1,    -1,    -1,    92,    59,    -1,    61,    -1,
      -1,    76,    77,    66,    -1,   102,   103,    -1,    -1,    84,
      85,    86,    87,    76,    77,    -1,    -1,    92,    -1,    -1,
      -1,    84,    85,    86,    87,    -1,    -1,   102,   103,    92,
      59,     1,    61,     3,     4,    -1,     6,    66,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    92,    -1,     1,    -1,     3,     4,    -1,
       6,    -1,    -1,   102,   103,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,     1,
      -1,     3,     4,    -1,     6,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    92,    59,    -1,    61,    -1,    -1,    -1,    -1,
      66,    -1,   102,   103,    -1,    59,    -1,    61,    -1,    -1,
      76,    77,    66,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    76,    77,    -1,    -1,    92,    59,    -1,    61,
      84,    85,    86,    87,    66,    -1,   102,   103,    92,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,   102,   103,
      -1,    -1,    84,    85,    86,    87,     1,    -1,     3,     4,
      92,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,     4,    -1,     6,    -1,
      -1,    76,    77,    -1,    -1,    -1,    59,    -1,    61,    84,
      85,    86,    87,    66,    -1,    -1,    -1,    92,    -1,    59,
      73,    61,    -1,    76,    77,    -1,    66,   102,   103,    -1,
      -1,    84,    85,    86,    87,    -1,    76,    77,    -1,    92,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,   102,
     103,    59,    92,    61,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
       1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    62,    -1,    64,    65,    66,    67,    68,    -1,    70,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    62,    -1,    64,    65,    66,    67,    68,    -1,    70,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    62,    -1,    64,    65,    66,    67,    68,    -1,    70,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    62,    -1,    64,    65,    66,    67,    68,    -1,    70,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    62,    -1,    64,    65,    66,    67,    68,    -1,    70,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    62,    -1,    64,    -1,    66,    67,    68,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,     1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    73,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    60,    -1,    62,    63,    64,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,    62,
      63,    64,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    58,    -1,    60,    -1,    62,    -1,    64,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    60,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    19,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    58,    60,    62,
      63,    64,   105,   143,   144,   147,   148,   149,   152,   159,
     164,   165,   166,   167,   188,   207,   208,   210,    65,    73,
      84,    66,    66,    66,     1,   144,     1,    66,    84,   106,
     168,   170,   172,   209,   144,   144,    73,    84,   144,   144,
     144,     0,   208,   160,    73,     1,     4,     6,    59,    61,
      66,    76,    77,    84,    85,    86,    87,    92,   102,   103,
     107,   108,   109,   113,   116,   119,   120,   121,   125,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   140,   148,
     155,   165,   178,   178,   140,     1,    65,   141,   145,   146,
     168,   168,    87,     1,    73,   143,   191,   211,    66,    68,
     170,   150,    73,    84,   162,   163,   161,    80,    66,   116,
      66,    66,     1,   116,   136,   137,   139,   178,   117,   118,
       3,     7,    66,    68,    75,   102,   103,   120,    87,    88,
      89,    85,    86,    93,    94,    90,    91,    95,    96,    97,
      98,    92,    79,   101,    99,    80,   100,    67,   155,    66,
      68,   172,   179,   180,   155,    67,    67,    70,    65,    70,
       1,    70,   142,    72,    73,   137,   182,    67,    60,   165,
     172,   173,   192,   193,   143,   191,   171,    23,    69,    87,
     137,   173,   153,   154,   155,   188,   151,    72,    70,    74,
     158,   162,   139,   178,   178,     1,   137,    67,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    72,   138,
       1,    67,    70,    67,    66,   116,   116,    84,    67,   115,
     137,   139,    84,   122,   123,   124,     1,   126,     1,   127,
       1,   125,     1,   125,     1,   128,     1,   128,     1,   128,
       1,   128,     1,   129,     1,   129,     1,   130,     1,   131,
       1,   132,     1,   133,   139,     1,   134,    67,   105,   174,
     175,   176,   179,    23,    69,    87,   137,   173,   180,    66,
      68,     4,   146,   146,    65,     1,   182,   183,   165,   172,
      74,     1,    46,    47,    48,    50,    51,    52,    53,    54,
      55,    56,    57,    65,    84,   139,   143,   189,   190,   191,
     194,   195,   196,   197,   201,   206,    67,    84,   169,   174,
     177,   137,   173,    69,    69,    23,    69,    87,   137,    74,
     154,    65,    71,   156,   157,   168,   153,     3,    74,   163,
     158,    71,    67,    67,    67,    70,   137,   137,    73,   120,
     178,    67,    70,    69,   120,   120,   120,   121,   121,    71,
     144,    67,    70,    67,   137,   173,    69,    69,    23,    69,
     137,    67,   174,    23,    69,    87,   137,   173,    67,    70,
      74,   181,    65,   140,    71,    66,    66,   202,   204,    66,
      84,    65,    65,    65,   139,    71,     1,    65,    74,   195,
      67,    67,    70,    69,   137,   137,    69,    69,   140,    65,
      70,    71,    74,   136,    47,   110,   111,   178,   114,    67,
       1,   137,     1,   136,    66,   168,   172,   179,    45,   176,
      69,   137,   137,    69,    67,   137,   173,    69,    69,    23,
      69,   137,    65,    74,    71,     1,   189,   139,   139,    66,
     189,   143,   196,    65,    65,   189,    84,    69,    69,   157,
     140,    71,    67,    70,    71,    68,    75,   182,   184,   185,
     186,   187,    69,    69,    69,   137,   137,    69,   189,    65,
      67,    67,   139,    51,   196,   196,   137,   111,   137,   140,
      84,    70,    74,   112,   182,    72,   187,    69,    69,   198,
     189,    67,    66,    67,   139,    67,   139,    69,    74,   182,
     185,   189,   203,   139,   189,    67,   189,    67,   182,   199,
     189,    67,   189,   189,    49,   200,   205,   189,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   107,   108,   107,   107,   107,   107,
     107,   107,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   113,
     115,   115,   115,   116,   117,   116,   118,   116,   116,   116,
     116,   116,   119,   119,   119,   119,   119,   119,   120,   120,
     121,   122,   121,   123,   121,   124,   121,   125,   126,   125,
     125,   127,   125,   125,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   131,   131,   131,   132,   132,   132,   133,
     133,   133,   134,   134,   134,   135,   135,   135,   136,   136,
     136,   136,   137,   137,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   139,   139,   140,   141,   141,
     142,   141,   141,   141,   143,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   146,   146,   146,   146,   147,   147,   147,   147,   147,
     147,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   150,   149,   151,
     149,   149,   152,   152,   153,   153,   154,   154,   154,   155,
     155,   155,   155,   156,   156,   157,   157,   157,   158,   158,
     160,   159,   161,   159,   159,   162,   162,   163,   163,   164,
     165,   165,   165,   165,   166,   166,   167,   167,   168,   168,
     169,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   171,   170,   172,   172,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   176,
     177,   177,   178,   178,   179,   179,   179,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   181,   181,
     183,   182,   182,   184,   184,   184,   184,   185,   186,   186,
     187,   187,   188,   189,   189,   189,   189,   189,   189,   190,
     190,   190,   192,   191,   193,   191,   194,   194,   195,   195,
     196,   196,   196,   196,   198,   199,   197,   197,   200,   200,
     202,   203,   201,   204,   205,   201,   201,   201,   201,   201,
     206,   206,   206,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   211,   211
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     0,     2,     1,     3,     3,
       3,     1,     6,     4,     1,     3,     3,     3,     1,     2,
       1,     4,     3,     4,     3,     3,     2,     2,     0,     7,
       1,     3,     3,     1,     0,     3,     0,     3,     2,     2,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     0,     4,     0,     4,     0,     4,     1,     0,     4,
       3,     0,     4,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     5,
       5,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       0,     3,     2,     2,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     3,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     0,
       6,     2,     1,     1,     1,     2,     2,     3,     1,     2,
       1,     2,     1,     1,     3,     2,     3,     1,     1,     2,
       0,     5,     0,     6,     2,     1,     3,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     4,     4,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     4,     6,     5,
       5,     6,     5,     4,     4,     0,     4,     4,     3,     3,
       2,     1,     2,     3,     1,     1,     3,     3,     3,     2,
       1,     3,     2,     1,     2,     1,     1,     3,     2,     3,
       5,     4,     5,     4,     3,     3,     3,     4,     6,     5,
       5,     6,     4,     4,     2,     3,     3,     4,     1,     2,
       0,     3,     1,     2,     1,     4,     3,     2,     1,     2,
       3,     2,     7,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     0,     3,     0,     4,     1,     2,     1,     1,
       1,     2,     2,     2,     0,     0,     8,     5,     2,     0,
       0,     0,     7,     0,     0,     9,     6,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     3,
       2,     2,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
      yytoken = YYTRANSLATE (yychar);
      while (yytname[yytoken] == "SEPARATOR")
      {
        yychar = yylex ();
        yytoken = YYTRANSLATE (yychar);
      }
      YYDPRINTF ((stderr, "%s ", yytname[yytoken]));
      
    }
  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 65 "parser.y" /* yacc.c:1646  */
    { saveTypeAS(yytext);}
#line 2291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 69 "parser.y" /* yacc.c:1646  */
    { savePointerAS();}
#line 2297 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 72 "parser.y" /* yacc.c:1646  */
    { process_id((yyvsp[0].string)); }
#line 2303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 73 "parser.y" /* yacc.c:1646  */
    { process_literal(yytext); }
#line 2309 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Caracter ')' faltante\n\n", yylineno); yyerrok;}
#line 2315 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida\n\n", yylineno); yyerrok;}
#line 2321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida antes de '%s'\n\n", yylineno, yytext); yyerrok;}
#line 2327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 110 "parser.y" /* yacc.c:1646  */
    {openNewContext();}
#line 2345 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida despues de ','\n\n", yylineno); yyerrok; }
#line 2351 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 121 "parser.y" /* yacc.c:1646  */
    {eval_unary();}
#line 2363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 122 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2369 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 122 "parser.y" /* yacc.c:1646  */
    {eval_unary();}
#line 2375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 145 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 145 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 146 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 146 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2399 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 147 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 147 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 152 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2417 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 152 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2423 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 153 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2429 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 154 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 154 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2441 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 155 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 162 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 163 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 170 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2465 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 171 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 174 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 175 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 182 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 183 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 189 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2501 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 195 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2507 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 201 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 207 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2519 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 213 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2525 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 219 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: %s\n\n", yylineno, yytext); yyerrok; }
#line 2531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 220 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: '?'\n\n", yylineno, yytext); yyerrok; }
#line 2537 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 254 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 255 "parser.y" /* yacc.c:1646  */
    {declaration_end();}
#line 2549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 256 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2555 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 257 "parser.y" /* yacc.c:1646  */
    { yyerrok;}
#line 2561 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 263 "parser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2567 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("Linea: %i. Tipo de variable invalida.\n\n", yylineno); yyclearin; }
#line 2573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 285 "parser.y" /* yacc.c:1646  */
    { printf("Expresion invalida antes de ','\n\n"); }
#line 2579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 290 "parser.y" /* yacc.c:1646  */
    { fprintf(stderr, "Linea: %i. Expresion inesperada antes de '%s'.\n\n", yylineno, yytext); yyerrok; }
#line 2585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 291 "parser.y" /* yacc.c:1646  */
    { yyerror(""); fprintf(stderr, "Linea: %i. Falta signo '='.\n\n", yylineno, yytext); YYERROR; }
#line 2591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 324 "parser.y" /* yacc.c:1646  */
    {openNewContext();}
#line 2597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 324 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 325 "parser.y" /* yacc.c:1646  */
    {openNewContext();}
#line 2609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 325 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 364 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 365 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 370 "parser.y" /* yacc.c:1646  */
    {openNewContext();}
#line 2633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 371 "parser.y" /* yacc.c:1646  */
    {openNewContext();}
#line 2639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 419 "parser.y" /* yacc.c:1646  */
    {saveIDAS((yyvsp[0].string));}
#line 2645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 420 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Nombre de variable invalido: %s.\n\n", yylineno, yytext); }
#line 2651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 421 "parser.y" /* yacc.c:1646  */
    {printf("Here's a ( declarator  )\n");}
#line 2657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 431 "parser.y" /* yacc.c:1646  */
    { POP(getSemanticStack());}
#line 2663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 458 "parser.y" /* yacc.c:1646  */
    {declaration_end();}
#line 2669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 459 "parser.y" /* yacc.c:1646  */
    {declaration_end();}
#line 2675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 460 "parser.y" /* yacc.c:1646  */
    {declaration_end();}
#line 2681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 505 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 506 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 510 "parser.y" /* yacc.c:1646  */
    {openNewContext();}
#line 2699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 555 "parser.y" /* yacc.c:1646  */
    {openNewContext();}
#line 2705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 555 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 556 "parser.y" /* yacc.c:1646  */
    {openNewContext();}
#line 2717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 556 "parser.y" /* yacc.c:1646  */
    {closeContext();}
#line 2723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 572 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Falta ';'\n\n", yylineno); yyerrok; }
#line 2729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 573 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida.\n\n", yylineno); yyerrok; }
#line 2735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 577 "parser.y" /* yacc.c:1646  */
    { inicio_if(); }
#line 2741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 577 "parser.y" /* yacc.c:1646  */
    { inicio_else(); }
#line 2747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 577 "parser.y" /* yacc.c:1646  */
    { fin_if(); }
#line 2753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 587 "parser.y" /* yacc.c:1646  */
    { inicio_while(); }
#line 2759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 587 "parser.y" /* yacc.c:1646  */
    { eval_while(); }
#line 2765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 587 "parser.y" /* yacc.c:1646  */
    {fin_while();}
#line 2771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 588 "parser.y" /* yacc.c:1646  */
    { inicio_DOwhile(); }
#line 2777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 588 "parser.y" /* yacc.c:1646  */
    { eval_DOwhile(); }
#line 2783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 588 "parser.y" /* yacc.c:1646  */
    { fin_DOwhile(); }
#line 2789 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2793 "parser.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 626 "parser.y" /* yacc.c:1906  */

#include <stdio.h>

extern int yylineno;
extern char* yytext;

void yyerror(const char *s)
{
	//printf("%s in line: %i, lexeme: %s\n", s, yylineno, yytext);


	FILE *file = fopen("output.c", "r");
	int count = 0;
	if ( file != NULL )
	{
	    char line[256]; /* or other suitable maximum line size */
	    while (fgets(line, sizeof line, file) != NULL) /* read a line */
	    {
	        if (count == yylineno-1)
	        {
	            printf("-->  %s<< %s >>\n", line, s);
	            break;
	        }
	        else
	        {
	            count++;
	        }
	    }
	    fclose(file);
	}
	else
	{
	    printf("Error al reportar el error");
	}
}
