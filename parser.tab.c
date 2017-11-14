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


#line 73 "parser.tab.c" /* yacc.c:339  */

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
    INC_OP = 263,
    DEC_OP = 264,
    SHL = 265,
    SHR = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF_NAME = 284,
    ENUMERATION_CONSTANT = 285,
    TYPEDEF = 286,
    EXTERN = 287,
    STATIC = 288,
    AUTO = 289,
    REGISTER = 290,
    INLINE = 291,
    CONST = 292,
    RESTRICT = 293,
    VOLATILE = 294,
    BOOL = 295,
    CHAR = 296,
    SHORT = 297,
    INT = 298,
    LONG = 299,
    SIGNED = 300,
    UNSIGNED = 301,
    FLOAT = 302,
    DOUBLE = 303,
    VOID = 304,
    COMPLEX = 305,
    IMAGINARY = 306,
    STRUCT = 307,
    UNION = 308,
    ENUM = 309,
    ELLIPSIS = 310,
    CASE = 311,
    DEFAULT = 312,
    IF = 313,
    ELSE = 314,
    SWITCH = 315,
    WHILE = 316,
    DO = 317,
    FOR = 318,
    GOTO = 319,
    CONTINUE = 320,
    BREAK = 321,
    RETURN = 322,
    ALIGNAS = 323,
    ALIGNOF = 324,
    ATOMIC = 325,
    GENERIC = 326,
    NORETURN = 327,
    STATIC_ASSERT = 328,
    THREAD_LOCAL = 329,
    SEMICOLON = 330,
    LPARENTHESIS = 331,
    RPARENTHESIS = 332,
    LBRACE = 333,
    RBRACE = 334,
    COMMA = 335,
    COLON = 336,
    EQUALS = 337,
    LBRACKET = 338,
    RBRACKET = 339,
    DOT = 340,
    AMPERSAND = 341,
    EXCLAMATION = 342,
    MINUS = 343,
    PLUS = 344,
    TILDE = 345,
    STAR = 346,
    SLASH = 347,
    BACKSLASH = 348,
    MODULO = 349,
    LESS_THAN = 350,
    GREATER_THAN = 351,
    CARET = 352,
    PIPE = 353,
    QUESTION_MARK = 354,
    CHARACTER = 355,
    SEPARATOR = 356,
    QOUTE = 357,
    ID = 358
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "parser.y" /* yacc.c:355  */

  int      value;
  char     *string;

#line 222 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 239 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   3658

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  306
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  526

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
       0,    44,    44,    45,    45,    46,    47,    48,    49,    50,
      54,    55,    59,    60,    64,    65,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    82,    83,    84,    88,
      89,    90,    91,    92,    93,    94,    98,    99,   100,   101,
     102,   103,   107,   108,   112,   113,   114,   115,   119,   120,
     121,   122,   123,   127,   128,   129,   130,   131,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   147,   148,   149,
     150,   151,   155,   156,   157,   161,   162,   163,   167,   168,
     169,   173,   174,   175,   179,   180,   181,   185,   186,   187,
     188,   192,   193,   193,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   211,   212,   216,   220,   221,
     222,   223,   224,   225,   226,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   244,   245,   246,   250,
     251,   252,   253,   257,   258,   259,   260,   261,   262,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   285,   286,   287,   291,   292,
     296,   297,   301,   302,   303,   307,   308,   309,   310,   314,
     315,   319,   320,   321,   325,   326,   327,   328,   329,   333,
     334,   338,   339,   343,   347,   348,   349,   350,   354,   355,
     359,   360,   364,   365,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   387,
     388,   389,   390,   394,   395,   400,   401,   405,   406,   410,
     411,   412,   416,   417,   421,   422,   426,   427,   428,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     456,   457,   458,   462,   463,   464,   465,   469,   473,   474,
     478,   479,   483,   487,   488,   489,   490,   491,   492,   496,
     497,   498,   502,   503,   507,   508,   512,   513,   517,   518,
     519,   520,   524,   524,   524,   525,   529,   530,   534,   535,
     536,   537,   538,   539,   543,   544,   545,   546,   547,   551,
     552,   556,   557,   561,   562,   566,   567
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANT", "STRING", "FUNC_NAME",
  "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "SHL", "SHR", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "SEMICOLON", "LPARENTHESIS",
  "RPARENTHESIS", "LBRACE", "RBRACE", "COMMA", "COLON", "EQUALS",
  "LBRACKET", "RBRACKET", "DOT", "AMPERSAND", "EXCLAMATION", "MINUS",
  "PLUS", "TILDE", "STAR", "SLASH", "BACKSLASH", "MODULO", "LESS_THAN",
  "GREATER_THAN", "CARET", "PIPE", "QUESTION_MARK", "CHARACTER",
  "SEPARATOR", "QOUTE", "ID", "$accept", "primary_expression", "$@1",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "$@2", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "ID_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@3", "$@4",
  "else_block", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -343

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-343)))

#define YYTABLE_NINF -253

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3329,   -38,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,    84,   -30,   -25,  -343,
      -9,  -343,  -343,   137,   894,   972,  -343,    89,  -343,  -343,
    1050,  1128,  1206,  -343,  3275,  -343,  -343,  -343,   -76,     8,
    1284,  3588,  2360,   154,  -343,   222,   232,  -343,    56,  -343,
     727,   103,    58,  -343,  -343,  -343,  3517,    41,  -343,  -343,
    -343,  -343,  -343,     1,    53,  -343,   -76,    47,  -343,  2985,
    3008,  3008,    94,   112,  1355,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,   157,  -343,   297,  -343,  3031,  -343,   217,
     -44,   285,    26,   334,   107,   101,   105,   194,    18,  -343,
     139,  3588,    93,  3588,   168,   201,   195,  -343,   222,  -343,
     213,  -343,  -343,  -343,   232,  -343,  -343,   222,   -39,  2097,
     454,   540,  -343,  -343,  -343,   137,  -343,  -343,  3165,  1506,
    1595,   103,  3421,  -343,   198,  -343,  3517,   300,    24,  -343,
     102,  2360,  1355,  -343,  1355,  -343,  -343,  3588,  2393,   -52,
    -343,    65,   230,  -343,   212,  -343,  -343,  2120,  2360,   219,
    -343,  3031,  3031,  3031,  2416,  2451,  2507,  2542,  2565,  2598,
    2634,  2657,  2690,  2726,  2749,  2782,  2818,  2841,  2874,  2360,
    -343,  -343,  3104,  1669,   155,  -343,   268,  -343,  -343,  -343,
     316,  -343,  1914,  -343,  -343,  -343,  -343,    47,  2064,  -343,
     -23,  2360,   245,   252,   276,   281,  1560,   288,   258,   306,
     309,  2155,  -343,  2360,  -343,   264,   304,   303,   100,  -343,
    -343,   192,  2211,   159,  -343,  -343,  -343,  -343,   545,  -343,
    -343,  -343,  -343,  -343,   631,   636,  -343,  -343,  -343,  -343,
      86,   313,   314,  -343,   131,  1949,  -343,   317,   318,  1713,
    -343,  -343,  -343,  2360,     0,  -343,   321,  3469,  -343,  -343,
    -343,    55,  -343,   274,   322,   327,   328,   -27,   326,  -343,
    -343,  -343,  2360,  2962,  -343,  -343,   166,  -343,   292,  -343,
    -343,  -343,  -343,  -343,   217,  -343,   217,  -343,   -44,  -343,
     -44,  -343,   285,  -343,   285,  -343,   285,  -343,   285,  -343,
      26,  -343,    26,  -343,   334,  -343,   107,  -343,   101,  -343,
     105,  -343,   194,   296,  -343,   335,   336,  1949,  -343,   332,
     337,  1772,   268,  3220,  1816,   338,  -343,   333,  1560,  2360,
    2360,  2360,   -10,   356,   818,   343,  -343,  -343,  -343,     2,
     340,  -343,  1560,  -343,  -343,  1973,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  2360,  1428,  -343,   124,  -343,  -343,  3383,
    -343,   319,   342,  1949,  -343,  -343,  2360,  -343,   344,   346,
    -343,  -343,    29,  2360,  -343,  -343,  2360,   345,   345,  -343,
    -343,  3554,  -343,  2064,  -343,  -343,  2910,  -343,  2933,  -343,
    -343,   347,  1949,  -343,  -343,  2360,  -343,   348,  -343,   352,
    1949,  -343,   351,   353,  1875,   359,  1560,  -343,   203,   208,
     214,  -343,   355,  2246,  2246,  -343,  -343,  -343,  -343,  -343,
    -343,  2211,  -343,  -343,  -343,  -343,  -343,  -343,   357,   358,
    -343,  -343,  -343,  -343,  -343,   354,   244,  -343,   360,   202,
      47,  -343,    47,  -343,  -343,   361,   363,  -343,  -343,   364,
    1949,  -343,  -343,  2360,  -343,   365,  -343,  -343,  -343,  1560,
    1560,  2360,  2269,  2302,  -343,  -343,  -343,  2360,  -343,  3554,
    2360,  2006,  -343,  -343,  -343,  -343,   366,   368,  -343,  1560,
    -343,  -343,   250,  1560,   255,  1560,   257,  -343,  -343,  -343,
    -343,  -343,  -343,  -343,   373,  -343,  1560,  -343,  1560,   379,
    -343,  -343,  -343,  1560,  -343,  -343
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   125,   154,   133,   134,   135,   137,   138,   188,   184,
     185,   186,   148,   140,   141,   142,   143,   146,   147,   144,
     145,   139,   149,   150,   158,   159,     0,     0,   187,   189,
       0,   136,   302,     0,     0,     0,   152,     0,   153,   151,
       0,     0,     0,   114,     0,   299,   301,   113,     0,   178,
       0,     0,     0,   109,   108,     0,   212,   194,     0,   126,
       0,   193,     0,   125,   115,   117,     0,   157,   119,   121,
     123,     1,   300,   181,     0,   179,     0,     0,     5,     3,
       3,     3,     0,     0,     0,    36,    41,    39,    38,    40,
      37,     2,    16,     0,     9,    29,    42,     3,    44,    48,
      53,    58,    67,    72,    75,    78,    81,    84,    87,   107,
       0,   166,   225,   168,     0,     0,     0,   112,     0,   195,
       0,   187,   213,   211,   210,   111,   110,     0,   125,     0,
       0,    42,    91,   252,   305,     0,   131,   304,     0,     0,
       0,   192,     0,   160,     0,   164,     0,     0,     0,   174,
       0,     0,     0,    33,     0,    30,    31,     0,     0,     0,
     105,     0,     0,     4,     0,    22,    23,     0,     0,     0,
      32,     3,     3,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,   165,     0,     0,   227,   224,   228,   167,   190,   183,
       0,   128,     0,   196,   214,   209,   127,   130,     0,   129,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   278,     0,   272,     0,     2,   105,     0,   276,
     254,     0,     0,     0,   258,   277,   263,   264,     0,   274,
     265,   266,   267,   268,     0,     0,   306,   303,   207,   222,
       0,     0,   216,   217,     0,     0,   197,    37,     0,     0,
     155,   161,   162,     0,     0,   169,   173,     0,   182,   175,
     180,     0,   176,     0,     0,     0,     0,     0,     0,     8,
       7,     6,     0,     3,    21,    18,     0,    26,     0,    20,
      45,    46,    47,    52,    51,    50,    49,    56,    54,    57,
      55,    65,    63,    66,    64,    61,    59,    62,    60,    70,
      68,    71,    69,    74,    73,    77,    76,    80,    79,    83,
      82,    86,    85,     0,   246,     0,     0,     0,   230,    37,
       0,     0,   226,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   295,   296,   297,     0,
       0,   261,     0,   280,   279,     0,   250,   253,   257,   259,
     273,   275,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    94,     0,     0,   219,     0,   220,   206,     0,
     208,     0,     0,     0,   198,   205,     0,   204,    37,     0,
     171,   163,     0,     0,   156,   177,     0,    34,     0,    35,
      11,     0,   106,     0,    43,    19,     0,    17,     0,   247,
     229,     0,     0,   231,   237,     0,   236,     0,   248,     0,
       0,   238,    37,     0,     0,     0,     0,   271,     0,     0,
       0,   281,     0,     0,     0,   294,   298,   260,   269,   251,
     256,     0,    93,   125,   215,   218,   223,   200,     0,     0,
     201,   203,   170,   172,    90,     0,     0,    12,     0,     0,
      28,    27,    89,    88,   233,     0,     0,   235,   249,     0,
       0,   239,   245,     0,   244,     0,   262,   270,   282,     0,
       0,     0,     0,     0,   255,   199,   202,     0,    10,     0,
       0,     0,    24,   232,   234,   241,     0,     0,   242,     0,
     285,   288,     0,     0,     0,     0,     0,    15,    13,    14,
      25,   240,   243,   283,     0,   292,     0,   290,     0,   287,
     289,   293,   291,     0,   284,   286
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -343,  -343,  -343,  -343,  -343,   -40,  -343,  -343,    76,  -343,
     -87,   204,   215,   162,   218,   266,   267,   265,   272,   273,
    -343,   -28,   -17,  -343,  -343,   -73,   -33,     9,    14,  -343,
     -85,  -343,   -43,  -343,  -343,   308,  -127,   -49,  -343,    72,
    -343,   389,  -117,  -343,   -50,  -343,  -343,   -29,   -57,   -24,
    -120,  -136,  -343,    87,  -343,    68,   -91,  -182,   -58,    64,
    -342,  -343,   235,   -48,  -187,  -343,   -32,  -343,   233,  -304,
    -343,  -343,  -343,  -343,  -343,  -343,  -343,   431,  -343,  -343
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    94,   456,   457,    95,   286,   131,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   132,   160,   244,   373,   228,   110,   229,   135,    58,
      59,    34,    35,    36,    37,   142,   143,   112,   264,   265,
      38,    74,    75,    39,    40,    41,    42,   202,    61,    62,
     124,   325,   252,   253,   254,   458,   326,   196,   230,   231,
     232,   233,   234,    43,   235,   236,   237,   238,   239,   240,
     241,   499,   519,   524,   242,   243,    44,    45,    46,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     113,   113,   136,   251,    60,   141,   122,   111,   111,    32,
     170,   161,   332,   441,    33,   261,   113,   144,   145,   116,
     259,   195,   109,   111,   109,   279,   120,    73,   137,   343,
     119,   270,   123,   201,   113,   188,    47,    47,   178,   179,
     434,   111,   206,   133,   174,   175,    50,   151,    64,    65,
     400,    51,   336,    32,    68,    69,    70,   125,    33,   119,
     151,   113,   191,   113,   197,   431,   280,    52,   111,   134,
     111,   209,   151,   331,   204,   391,   151,   436,   273,   161,
     392,   161,   282,   147,   290,   291,   292,   119,   194,   151,
     122,    76,   113,   144,   145,   288,   113,   144,   145,   111,
     205,   353,   113,   111,   113,    55,   247,   113,   269,   111,
     263,   111,   133,   227,   111,   266,   323,   189,   114,   115,
      56,   180,   181,   258,   146,   119,    96,    73,    96,   482,
     483,   126,    57,   148,    55,   383,   127,   149,    53,   395,
     261,   278,   281,   122,   136,   282,   151,   246,   349,   441,
     287,   427,   162,   250,   270,   153,   155,   156,    73,   377,
     163,    57,   374,  -221,   193,   438,  -221,    48,   194,   192,
     157,   193,    66,    96,   357,   354,   330,    56,   337,   139,
     282,   140,   271,   109,    56,   133,   272,    49,   158,    57,
     350,   133,    67,   184,   332,   109,   404,   419,   185,   119,
     374,  -227,   193,   186,  -227,   122,   250,   412,   380,   204,
     187,   381,    54,    55,   424,   133,   190,   113,   144,   145,
     274,   375,   275,   119,   111,   276,   376,    57,    56,   117,
     390,   192,  -195,   193,   118,   109,  -195,   223,   382,   477,
      57,   358,   389,   405,   225,   198,   406,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,   402,   428,   429,   430,     9,
      10,    11,   355,   262,    55,   200,   356,   122,   199,   263,
     478,   204,   491,   282,   122,   479,   492,    96,   282,    56,
     203,   480,   500,   501,   282,   176,   177,   440,    55,    96,
     470,    57,   121,   268,   164,   165,   166,   283,   171,   172,
     411,   173,   513,    56,   417,   284,   515,   423,   517,   141,
     335,   488,   289,    56,   489,    57,   338,   514,   339,   521,
     282,   522,   516,   204,   518,   282,   525,   282,   133,    96,
     302,   304,   306,   308,   333,   120,   334,   250,   182,   183,
     376,   113,   340,   433,   282,   396,   442,   341,   111,    96,
     453,   345,   204,   266,   344,   109,   448,   351,   454,   449,
     122,   407,   282,   167,   204,   168,   282,   408,   294,   296,
     463,   346,   169,   484,   347,   352,   133,  -252,   250,   461,
     378,   298,   300,   250,   379,   465,   384,   385,   466,   397,
     310,   312,   393,   469,   398,   399,   401,   475,   502,   504,
     506,   413,   409,   410,   426,   425,   414,   432,   435,   437,
     204,   447,   446,   450,   133,   451,   464,   467,   403,   468,
     471,   481,   472,   440,   476,   487,   485,   486,   523,   113,
     493,   490,   494,   495,   498,   511,   111,   512,   520,   508,
     314,   318,   316,   496,   267,   210,   497,    -3,    78,   320,
      79,   322,    80,    81,   452,   150,   445,   459,   359,    96,
     507,   361,    96,   509,   133,    72,     0,     0,     0,     0,
       0,     0,     0,     2,    96,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     211,   212,   213,     0,   214,   215,   216,   217,   218,   219,
     220,   221,    27,    82,    28,    83,    29,    30,    31,   222,
      84,     0,   223,     0,     0,     0,     0,   130,   224,   225,
      85,    86,    87,    88,    89,    90,   210,     0,    -3,    78,
       0,    79,     0,    80,    81,     0,     0,   226,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,   211,   212,   213,     0,   214,   215,   216,   217,   218,
     219,   220,   221,    27,    82,    28,    83,    29,    30,    31,
     222,    84,   -92,     0,     0,     0,     0,     0,   245,   360,
       0,    85,    86,    87,    88,    89,    90,   210,     0,    -3,
      78,     0,    79,     0,    80,    81,     0,     0,   226,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   211,   212,   213,     0,   214,   215,   216,   217,
     218,   219,   220,   221,    27,    82,    28,    83,    29,    30,
      31,   222,    84,   372,     0,     0,     0,     0,     0,   245,
     224,     0,    85,    86,    87,    88,    89,    90,   128,     0,
      -3,    78,     0,    79,     0,    80,    81,     0,     0,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    82,    28,    83,    29,
      30,    31,  -132,    84,     0,     0,     0,  -132,     0,   129,
     130,     0,     0,    85,    86,    87,    88,    89,    90,   210,
       0,    -3,    78,     0,    79,     0,    80,    81,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    82,    28,    83,
      29,    30,    31,   222,    84,    63,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,  -116,
    -116,  -116,  -116,    63,  -116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -116,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,  -118,  -118,  -118,
    -118,    63,  -118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -118,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,  -120,  -120,  -120,  -120,    63,
    -120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -120,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,  -122,  -122,  -122,  -122,    63,  -122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -122,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,  -124,  -124,  -124,  -124,    77,  -124,    -3,    78,     0,
      79,     0,    80,    81,     0,     0,     0,  -124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -124,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,    28,    83,   159,     0,    -3,    78,
      84,    79,     0,    80,    81,     0,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,    91,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    28,    83,     0,     0,   443,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    86,    87,    88,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    91,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,   374,   324,   193,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   342,     0,    -3,    78,     0,    79,     0,    80,    81,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,     0,   248,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,    -3,    78,
       0,    79,     0,    80,    81,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,   211,   212,   213,     0,
     214,   215,   216,   217,   218,   219,   220,   221,   255,    82,
       0,    83,     9,    10,    11,   222,    84,     0,     0,     0,
       0,     0,     0,   245,     0,     0,    85,    86,    87,    88,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,    82,   121,    83,     0,     0,     0,
      77,    84,    -3,    78,   256,    79,     0,    80,    81,     0,
       0,    85,    86,    87,    88,    89,   257,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,   327,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,    77,     0,    -3,    78,     0,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,   121,
      83,     0,     0,     0,     0,    84,   386,     0,   328,     0,
       9,    10,    11,     0,     0,    85,    86,    87,    88,    89,
     329,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    77,     0,    -3,    78,     0,    79,     0,
      80,    81,    82,   121,    83,     0,     0,     0,     0,    84,
       0,     0,   387,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,   388,   415,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,    91,    77,     0,    -3,
      78,     0,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,   121,    83,     0,     0,     0,     0,    84,   420,
       0,   416,     0,     9,    10,    11,     0,     0,    85,    86,
      87,    88,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    77,     0,    -3,    78,
       0,    79,     0,    80,    81,    82,   121,    83,     0,     0,
       0,     0,    84,     0,     0,   421,     0,     0,     0,     0,
       0,     0,    85,    86,    87,    88,    89,   422,   473,     0,
       0,     0,     9,    10,    11,    77,     0,    -3,    78,    91,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,   121,    83,     0,     0,     0,
      77,    84,    -3,    78,   474,    79,     0,    80,    81,     0,
       0,    85,    86,    87,    88,    89,    90,     0,     0,     0,
       0,     0,     0,     0,    77,     0,    -3,    78,    91,    79,
       0,    80,    81,    82,     0,    83,     9,    10,    11,  -132,
      84,     0,     0,     0,  -132,     0,   129,   208,     0,     0,
      85,    86,    87,    88,    89,    90,     0,    77,     0,    -3,
      78,     0,    79,     0,    80,    81,     0,    91,    82,   121,
      83,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,    87,    88,    89,
      90,     0,    82,     0,    83,     0,     0,     0,     0,    84,
       0,   223,    91,     0,     0,     0,   208,   439,   225,    85,
      86,    87,    88,    89,    90,    77,     0,    -3,    78,     0,
      79,     0,    80,    81,     0,    82,    91,    83,     0,     0,
       0,     0,    84,     0,   223,     0,     0,     0,     0,   208,
     510,   225,    85,    86,    87,    88,    89,    90,   207,     0,
      -3,    78,     0,    79,     0,    80,    81,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,    -3,    78,     0,    79,     0,    80,    81,
       0,     0,     0,    82,     0,    83,     0,     0,     0,     0,
      84,     0,   223,     0,     0,     0,     0,   208,     0,   225,
      85,    86,    87,    88,    89,    90,    77,     0,    -3,    78,
       0,    79,     0,    80,    81,     0,    82,    91,    83,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
     208,     0,     0,    85,    86,    87,    88,    89,    90,    82,
       0,    83,     0,     0,     0,     0,    84,   285,     0,     0,
      91,     0,     0,     0,     0,     0,    85,    86,    87,    88,
      89,    90,    77,     0,    -3,    78,     0,    79,     0,    80,
      81,     0,     0,    91,    82,     0,    83,     0,     0,     0,
     348,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    86,    87,    88,    89,    90,   342,     0,    -3,
      78,     0,    79,     0,    80,    81,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,    -3,    78,     0,    79,     0,    80,    81,     0,
      82,     0,    83,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,   208,     0,     0,    85,    86,    87,
      88,    89,    90,    77,     0,    -3,    78,     0,    79,     0,
      80,    81,     0,     0,    91,    82,     0,    83,     0,     0,
       0,   222,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    82,     0,
      83,     0,     0,     0,     0,    84,   503,     0,     0,    91,
       0,     0,     0,     0,     0,    85,    86,    87,    88,    89,
      90,    77,     0,    -3,    78,     0,    79,     0,    80,    81,
       0,    82,    91,    83,     0,     0,     0,     0,    84,   505,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,   277,     0,    -3,    78,     0,    79,
       0,    80,    81,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   293,     0,    -3,
      78,     0,    79,     0,    80,    81,     0,     0,     0,    82,
       0,    83,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,    87,    88,
      89,    90,   295,     0,    -3,    78,     0,    79,     0,    80,
      81,     0,    82,    91,    83,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    82,     0,    83,     0,     0,
       0,     0,    84,     0,     0,     0,    91,     0,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,   297,     0,
      -3,    78,     0,    79,     0,    80,    81,     0,     0,    91,
      82,     0,    83,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,   299,     0,    -3,    78,     0,    79,     0,
      80,    81,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   301,     0,    -3,    78,
       0,    79,     0,    80,    81,     0,    82,     0,    83,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,   303,
       0,    -3,    78,     0,    79,     0,    80,    81,     0,     0,
      91,    82,     0,    83,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    82,   305,    83,    -3,    78,     0,
      79,    84,    80,    81,     0,    91,     0,     0,     0,     0,
       0,    85,    86,    87,    88,    89,    90,     0,   307,     0,
      -3,    78,     0,    79,     0,    80,    81,    82,    91,    83,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,    87,    88,    89,    90,
       0,   309,     0,    -3,    78,     0,    79,     0,    80,    81,
       0,    91,     0,    82,     0,    83,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    82,   311,    83,    -3,
      78,     0,    79,    84,    80,    81,     0,    91,     0,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,     0,
     313,     0,    -3,    78,     0,    79,     0,    80,    81,    82,
      91,    83,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,    87,    88,
      89,    90,     0,   315,     0,    -3,    78,     0,    79,     0,
      80,    81,     0,    91,     0,    82,     0,    83,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    82,   317,
      83,    -3,    78,     0,    79,    84,    80,    81,     0,    91,
       0,     0,     0,     0,     0,    85,    86,    87,    88,    89,
      90,     0,   319,     0,    -3,    78,     0,    79,     0,    80,
      81,    82,    91,    83,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,     0,   321,     0,    -3,    78,     0,
      79,     0,    80,    81,     0,    91,     0,    82,     0,    83,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,    87,    88,    89,    90,
      82,   460,    83,    -3,    78,     0,    79,    84,    80,    81,
       0,    91,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,     0,   462,     0,    -3,    78,     0,    79,
       0,    80,    81,    82,    91,    83,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    78,     0,    79,     0,
      80,    81,     0,     0,     0,     0,     0,    91,     0,    82,
       0,    83,     0,     0,     0,     0,    84,     0,     0,    78,
       0,    79,     0,    80,    81,     0,    85,    86,    87,    88,
      89,    90,    82,     0,    83,     0,     0,     0,     0,    84,
       0,     0,    78,    91,    79,     0,    80,    81,     0,    85,
      86,    87,    88,    89,    90,     0,     0,     0,     0,     0,
       0,    82,     0,    83,     0,    78,    91,    79,    84,    80,
      81,     0,     0,     0,     0,   403,     0,     0,    85,    86,
      87,    88,    89,    90,    82,     0,    83,     0,     0,     0,
       0,   152,     0,     0,     0,    91,     0,     0,     0,     0,
       0,    85,    86,    87,    88,    89,    90,    82,     0,    83,
       0,     0,     0,     0,   154,     0,     0,     0,    91,     0,
       0,     0,     0,     0,    85,    86,    87,    88,    89,    90,
      82,     0,    83,     0,     0,    63,     0,    84,     0,     0,
       0,    91,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    91,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
     192,   324,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    56,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    63,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    71,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,   418,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   444,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    27,     0,    28,     0,    29,     0,    31,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,   260,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,   394,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,    28,     0,     0,
      30,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   455,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      50,    51,    60,   139,    33,    62,    56,    50,    51,     0,
      97,    84,   194,   355,     0,   142,    66,    66,    66,    52,
     140,   112,    50,    66,    52,    77,    55,   103,    60,   216,
       1,   148,    56,   118,    84,    17,    75,    75,    12,    13,
     344,    84,   127,    60,    88,    89,    76,    99,    34,    35,
      77,    76,    75,    44,    40,    41,    42,     1,    44,     1,
      99,   111,   111,   113,   113,    75,     1,    76,   111,    60,
     113,   129,    99,   193,   124,    75,    99,    75,   151,   152,
      80,   154,    80,    82,   171,   172,   173,     1,   112,    99,
     140,    83,   142,   142,   142,   168,   146,   146,   146,   142,
     124,     1,   152,   146,   154,    76,   138,   157,    84,   152,
      81,   154,   129,   130,   157,   144,   189,    99,    50,    51,
      91,    95,    96,   140,    83,     1,    50,   103,    52,   433,
     434,    75,   103,    80,    76,   255,    80,    84,     1,    84,
     267,   158,    77,   193,   202,    80,    99,   138,   221,   491,
     167,   338,    84,   139,   271,    79,    80,    81,   103,   250,
       3,   103,    76,    77,    78,   352,    80,    83,   192,    76,
      76,    78,    83,    97,   232,    75,   193,    91,   211,    76,
      80,    78,    80,   211,    91,   202,    84,   103,    76,   103,
     223,   208,   103,    86,   376,   223,   283,   333,    97,     1,
      76,    77,    78,    98,    80,   255,   192,   327,    77,   259,
      16,    80,    75,    76,   334,   232,    77,   267,   267,   267,
     152,   250,   154,     1,   267,   157,   250,   103,    91,    75,
     263,    76,    78,    78,    80,   263,    82,    78,   255,   426,
     103,    82,   259,    77,    85,    77,    80,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   282,   339,   340,   341,    37,
      38,    39,    80,    75,    76,    80,    84,   327,    77,    81,
      77,   331,    80,    80,   334,    77,    84,   211,    80,    91,
      77,    77,   479,   480,    80,    10,    11,   355,    76,   223,
     420,   103,    70,     3,     7,     8,     9,    77,    91,    92,
     327,    94,   499,    91,   331,   103,   503,   334,   505,   376,
       4,    77,   103,    91,    80,   103,    81,    77,    76,   516,
      80,   518,    77,   383,    77,    80,   523,    80,   355,   263,
     178,   179,   180,   181,    76,   374,    78,   333,    14,    15,
     374,   401,    76,   344,    80,    81,   373,    76,   401,   283,
     393,   103,   412,   392,    76,   393,   383,   103,   396,   386,
     420,    79,    80,    76,   424,    78,    80,    81,   174,   175,
     408,    75,    85,   441,    75,    81,   403,    84,   374,   406,
      77,   176,   177,   379,    80,   412,    79,    79,   415,    77,
     182,   183,    81,   420,    77,    77,    80,   424,   481,   482,
     483,    79,    77,    77,    81,    77,    79,    61,    75,    79,
     470,    79,   103,    79,   441,    79,    79,    79,    83,    77,
      79,    76,    79,   491,    75,    81,    79,    79,    59,   489,
      79,    81,    79,    79,    79,    79,   489,    79,    75,   489,
     184,   186,   185,   470,   146,     1,   473,     3,     4,   187,
       6,   188,     8,     9,   392,    76,   379,   403,   233,   393,
     487,   238,   396,   490,   491,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,   408,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
      -1,     6,    -1,     8,     9,    -1,    -1,   103,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    82,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,    -1,     6,    -1,     8,     9,    -1,    -1,   103,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    82,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,    -1,     6,    -1,     8,     9,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,    -1,     6,    -1,     8,     9,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,     1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    -1,    72,    -1,    74,    75,    76,    77,
      78,     1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    77,    78,     1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,     1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    72,    -1,
      74,    75,    76,    77,    78,     1,    80,     3,     4,    -1,
       6,    -1,     8,     9,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,     1,    -1,     3,     4,
      76,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,     1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,   103,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      72,    -1,    74,    -1,    76,    77,    78,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     1,    -1,     3,     4,    -1,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    72,    -1,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    33,    69,
      -1,    71,    37,    38,    39,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    69,    70,    71,    -1,    -1,    -1,
       1,    76,     3,     4,    79,     6,    -1,     8,     9,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    -1,    -1,    -1,    -1,    76,    33,    -1,    79,    -1,
      37,    38,    39,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,     1,    -1,     3,     4,    -1,     6,    -1,
       8,     9,    69,    70,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    33,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,   103,     1,    -1,     3,
       4,    -1,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    -1,    -1,    -1,    76,    33,
      -1,    79,    -1,    37,    38,    39,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,     1,    -1,     3,     4,
      -1,     6,    -1,     8,     9,    69,    70,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    33,    -1,
      -1,    -1,    37,    38,    39,     1,    -1,     3,     4,   103,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,    -1,
       1,    76,     3,     4,    79,     6,    -1,     8,     9,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,   103,     6,
      -1,     8,     9,    69,    -1,    71,    37,    38,    39,    75,
      76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,     1,    -1,     3,
       4,    -1,     6,    -1,     8,     9,    -1,   103,    69,    70,
      71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    78,   103,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,    -1,
       6,    -1,     8,     9,    -1,    69,   103,    71,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,    -1,     6,    -1,     8,     9,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,     8,     9,
      -1,    -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
      -1,     6,    -1,     8,     9,    -1,    69,   103,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    89,    90,    91,    69,
      -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,    -1,     6,    -1,     8,
       9,    -1,    -1,   103,    69,    -1,    71,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,    -1,     6,    -1,     8,     9,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,    -1,     8,     9,    -1,
      69,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,    -1,     6,    -1,
       8,     9,    -1,    -1,   103,    69,    -1,    71,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    69,    -1,
      71,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,    -1,     6,    -1,     8,     9,
      -1,    69,   103,    71,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,    -1,     6,
      -1,     8,     9,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,    -1,     8,     9,    -1,    -1,    -1,    69,
      -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,    -1,     6,    -1,     8,
       9,    -1,    69,   103,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    69,    -1,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,    -1,     6,    -1,     8,     9,    -1,    -1,   103,
      69,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,    -1,     6,    -1,
       8,     9,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,    -1,     8,     9,    -1,    69,    -1,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,    -1,     6,    -1,     8,     9,    -1,    -1,
     103,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    69,     1,    71,     3,     4,    -1,
       6,    76,     8,     9,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,     1,    -1,
       3,     4,    -1,     6,    -1,     8,     9,    69,   103,    71,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,     8,     9,
      -1,   103,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    69,     1,    71,     3,
       4,    -1,     6,    76,     8,     9,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
       1,    -1,     3,     4,    -1,     6,    -1,     8,     9,    69,
     103,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,     1,    -1,     3,     4,    -1,     6,    -1,
       8,     9,    -1,   103,    -1,    69,    -1,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    69,     1,
      71,     3,     4,    -1,     6,    76,     8,     9,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,     1,    -1,     3,     4,    -1,     6,    -1,     8,
       9,    69,   103,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,     1,    -1,     3,     4,    -1,
       6,    -1,     8,     9,    -1,   103,    -1,    69,    -1,    71,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      69,     1,    71,     3,     4,    -1,     6,    76,     8,     9,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,     1,    -1,     3,     4,    -1,     6,
      -1,     8,     9,    69,   103,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     4,    -1,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,   103,    -1,    69,
      -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,     4,
      -1,     6,    -1,     8,     9,    -1,    86,    87,    88,    89,
      90,    91,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,     4,   103,     6,    -1,     8,     9,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,     4,   103,     6,    76,     8,
       9,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      88,    89,    90,    91,    69,    -1,    71,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    69,    -1,    71,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      69,    -1,    71,    -1,    -1,     1,    -1,    76,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,   103,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    91,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    -1,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    -1,    72,    -1,    74,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    -1,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    68,    -1,    70,    -1,    72,    -1,    74,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    73,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    70,    -1,    -1,
      73,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    29,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    68,    70,    72,
      73,    74,   131,   132,   135,   136,   137,   138,   144,   147,
     148,   149,   150,   167,   180,   181,   182,    75,    83,   103,
      76,    76,    76,     1,    75,    76,    91,   103,   133,   134,
     151,   152,   153,     1,   132,   132,    83,   103,   132,   132,
     132,     0,   181,   103,   145,   146,    83,     1,     4,     6,
       8,     9,    69,    71,    76,    86,    87,    88,    89,    90,
      91,   103,   105,   106,   107,   110,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     130,   136,   141,   148,   159,   159,   130,    75,    80,     1,
     151,    70,   148,   153,   154,     1,    75,    80,     1,    82,
      83,   112,   125,   126,   131,   132,   162,   170,   183,    76,
      78,   152,   139,   140,   141,   167,    83,    82,    80,    84,
     145,    99,    76,   112,    76,   112,   112,    76,    76,     1,
     126,   129,   159,     3,     7,     8,     9,    76,    78,    85,
     114,    91,    92,    94,    88,    89,    10,    11,    12,    13,
      95,    96,    14,    15,    86,    97,    98,    16,    17,    99,
      77,   141,    76,    78,   153,   160,   161,   141,    77,    77,
      80,   134,   151,    77,   148,   153,   134,     1,    83,   162,
       1,    56,    57,    58,    60,    61,    62,    63,    64,    65,
      66,    67,    75,    78,    84,    85,   103,   126,   129,   131,
     162,   163,   164,   165,   166,   168,   169,   170,   171,   172,
     173,   174,   178,   179,   127,    83,   131,   170,    77,   103,
     132,   155,   156,   157,   158,    33,    79,    91,   126,   154,
      84,   140,    75,    81,   142,   143,   151,   139,     3,    84,
     146,    80,    84,   129,   159,   159,   159,     1,   126,    77,
       1,    77,    80,    77,   103,    77,   111,   126,   129,   103,
     114,   114,   114,     1,   115,     1,   115,     1,   116,     1,
     116,     1,   117,     1,   117,     1,   117,     1,   117,     1,
     118,     1,   118,     1,   119,     1,   120,     1,   121,     1,
     122,     1,   123,   129,    77,   155,   160,    33,    79,    91,
     126,   154,   161,    76,    78,     4,    75,   130,    81,    76,
      76,    76,     1,   168,    76,   103,    75,    75,    75,   129,
     130,   103,    81,     1,    75,    80,    84,   162,    82,   166,
      84,   172,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    82,   128,    76,   151,   153,   160,    77,    80,
      77,    80,   126,   154,    79,    79,    33,    79,    91,   126,
     130,    75,    80,    81,    84,    84,    81,    77,    77,    77,
      77,    80,   126,    83,   114,    77,    80,    79,    81,    77,
      77,   126,   154,    79,    79,    33,    79,   126,    77,   155,
      33,    79,    91,   126,   154,    77,    81,   168,   129,   129,
     129,    75,    61,   131,   173,    75,    75,    79,   168,    84,
     162,   164,   126,     1,    55,   157,   103,    79,   126,   126,
      79,    79,   143,   130,   125,    57,   108,   109,   159,   163,
       1,   126,     1,   125,    79,   126,   126,    79,    77,   126,
     154,    79,    79,    33,    79,   126,    75,   168,    77,    77,
      77,    76,   173,   173,   162,    79,    79,    81,    77,    80,
      81,    80,    84,    79,    79,    79,   126,   126,    79,   175,
     168,   168,   129,    77,   129,    77,   129,   126,   109,   126,
      84,    79,    79,   168,    77,   168,    77,   168,    77,   176,
      75,   168,   168,    59,   177,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   105,   105,   105,   105,   105,   105,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     116,   116,   116,   117,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   119,   119,   119,
     119,   119,   120,   120,   120,   121,   121,   121,   122,   122,
     122,   123,   123,   123,   124,   124,   124,   125,   125,   125,
     125,   126,   127,   126,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   130,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   133,   133,   133,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   137,   138,   138,
     139,   139,   140,   140,   140,   141,   141,   141,   141,   142,
     142,   143,   143,   143,   144,   144,   144,   144,   144,   145,
     145,   146,   146,   147,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   153,
     153,   153,   153,   154,   154,   155,   155,   156,   156,   157,
     157,   157,   158,   158,   159,   159,   160,   160,   160,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     162,   162,   162,   163,   163,   163,   163,   164,   165,   165,
     166,   166,   167,   168,   168,   168,   168,   168,   168,   169,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     173,   173,   175,   176,   174,   174,   177,   177,   178,   178,
     178,   178,   178,   178,   179,   179,   179,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     3,     3,     3,     1,
       6,     4,     1,     3,     3,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     3,     1,
       2,     2,     2,     2,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     5,     5,
       5,     1,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     2,
       3,     3,     3,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     3,     3,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     2,     1,     1,
       1,     2,     2,     3,     1,     2,     1,     2,     1,     1,
       3,     2,     3,     1,     4,     5,     5,     6,     2,     1,
       3,     1,     3,     4,     1,     1,     1,     1,     1,     1,
       4,     4,     2,     1,     1,     1,     3,     3,     4,     6,
       5,     5,     6,     5,     4,     4,     4,     3,     4,     3,
       2,     2,     1,     1,     2,     3,     1,     1,     3,     2,
       2,     1,     1,     3,     2,     1,     2,     1,     1,     3,
       2,     3,     5,     4,     5,     4,     3,     3,     3,     4,
       6,     5,     5,     6,     4,     4,     2,     3,     3,     4,
       3,     4,     1,     2,     1,     4,     3,     2,     1,     2,
       3,     2,     7,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     3,     1,     2,     1,     1,     1,     2,
       2,     2,     0,     0,     8,     5,     2,     0,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
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
#line 44 "parser.y" /* yacc.c:1646  */
    { printf("%s\n", (yyvsp[0].string));}
#line 2355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "parser.y" /* yacc.c:1646  */
    { process_literal(yytext); }
#line 2361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 48 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Caracter ')' faltante\n\n", yylineno); yyerrok;}
#line 2367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 49 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida\n\n", yylineno); yyerrok;}
#line 2373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida antes de '%s'\n\n", yylineno, yytext); yyerrok;}
#line 2379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 84 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida despues de ','\n\n", yylineno); yyerrok; }
#line 2385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 121 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 123 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 130 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 131 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 138 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 139 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 142 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 143 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 150 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 151 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 169 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 175 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 181 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 187 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: %s\n\n", yylineno, yytext); yyerrok; }
#line 2481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 188 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: '?'\n\n", yylineno, yytext); yyerrok; }
#line 2487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 193 "parser.y" /* yacc.c:1646  */
    { printf("aqui entra\n"); }
#line 2493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 221 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 223 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 224 "parser.y" /* yacc.c:1646  */
    { yyerrok;}
#line 2511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 225 "parser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("Linea: %i. Tipo de variable invalida.\n\n", yylineno); yyclearin; }
#line 2523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 246 "parser.y" /* yacc.c:1646  */
    { printf("Expresion invalida antes de ','\n\n"); }
#line 2529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 251 "parser.y" /* yacc.c:1646  */
    { fprintf(stderr, "Linea: %i. Expresion inesperada antes de '%s'.\n\n", yylineno, yytext); yyerrok; }
#line 2535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 252 "parser.y" /* yacc.c:1646  */
    { yyerror(""); fprintf(stderr, "Linea: %i. Falta signo '='.\n\n", yylineno, yytext); YYERROR; }
#line 2541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 370 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Nombre de variable invalido: %s.\n\n", yylineno, yytext); }
#line 2547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 519 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Falta ';'\n\n", yylineno); yyerrok; }
#line 2553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 520 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida.\n\n", yylineno); yyerrok; }
#line 2559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 524 "parser.y" /* yacc.c:1646  */
    { inicio_if(); }
#line 2565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 524 "parser.y" /* yacc.c:1646  */
    { inicio_else(); }
#line 2571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 524 "parser.y" /* yacc.c:1646  */
    { fin_if(); }
#line 2577 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2581 "parser.tab.c" /* yacc.c:1646  */
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
#line 570 "parser.y" /* yacc.c:1906  */

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

