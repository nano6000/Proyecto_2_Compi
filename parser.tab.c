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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  319
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  540

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
       0,    64,    64,    68,    71,    72,    72,    73,    74,    75,
      76,    77,    81,    82,    86,    87,    91,    92,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   109,   110,
     111,   115,   116,   116,   117,   117,   118,   119,   120,   121,
     125,   126,   127,   128,   129,   130,   134,   135,   139,   140,
     140,   141,   141,   142,   142,   146,   147,   147,   148,   149,
     149,   150,   154,   155,   156,   157,   158,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   174,   175,   176,   177,
     178,   182,   183,   184,   188,   189,   190,   194,   195,   196,
     200,   201,   202,   206,   207,   208,   212,   213,   214,   215,
     219,   220,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   238,   239,   243,   248,   249,   250,   251,
     252,   257,   258,   259,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   278,   279,   280,   284,   285,
     286,   287,   291,   292,   293,   294,   295,   296,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   319,   320,   321,   325,   326,   330,
     331,   335,   336,   337,   341,   342,   343,   344,   348,   349,
     353,   354,   355,   359,   360,   361,   362,   363,   367,   368,
     372,   373,   377,   381,   382,   383,   384,   388,   389,   393,
     394,   398,   399,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   421,   422,
     423,   424,   428,   429,   434,   435,   439,   440,   444,   445,
     446,   451,   452,   456,   457,   461,   462,   463,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   491,
     492,   493,   497,   498,   499,   500,   504,   508,   509,   513,
     514,   518,   522,   523,   524,   525,   526,   527,   531,   532,
     533,   537,   538,   542,   543,   547,   548,   552,   553,   554,
     555,   559,   559,   559,   560,   564,   565,   569,   569,   569,
     570,   570,   570,   571,   572,   573,   574,   578,   579,   580,
     581,   582,   586,   587,   591,   592,   596,   597,   601,   602
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
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "$@2", "$@3",
  "unary_operator", "cast_expression", "multiplicative_expression", "$@4",
  "$@5", "$@6", "additive_expression", "$@7", "$@8", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration2", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
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
  "expression_statement", "selection_statement", "$@9", "$@10",
  "else_block", "iteration_statement", "$@11", "$@12", "$@13", "$@14",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -367

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-367)))

#define YYTABLE_NINF -262

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3036,   -40,     4,  3082,  -367,  -367,  2990,  -367,  -367,  -367,
    1798,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,
    -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,
    -367,  -367,  -367,  -367,  -367,  -367,   113,    57,    81,  -367,
    -367,   111,  2518,  2588,  -367,   115,  -367,  -367,  2658,  2728,
    2798,  -367,  -367,   -18,  -367,   875,    87,   118,   888,  -367,
    -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,    77,
    -367,    24,  -367,  2396,  -367,   228,   207,   212,   213,   239,
      80,   144,   129,    95,   -28,  -367,   165,   169,   176,   965,
    3250,   229,  -367,    41,  -367,   174,  -367,    50,  -367,   724,
      21,    37,  -367,  -367,  1424,   196,  -367,  -367,  -367,  1798,
     888,  -367,  3250,  1832,   -31,   440,  -367,  -367,    90,  3250,
       1,  3250,   208,  2431,  2431,  -367,   198,  1553,  1798,   235,
    -367,  -367,  -367,  -367,  -367,  -367,  1844,  1891,  1936,  1950,
    1984,  1997,  2043,  2089,  2102,  2136,  2148,  2195,  2240,  2254,
    1798,  2288,   296,   251,    35,  -367,   169,   245,   273,   275,
    -367,    41,  -367,   277,   103,  -367,  -367,    41,   -17,  1587,
     463,  3082,  -367,  -367,  -367,  -367,  2937,   -24,  1092,    21,
    3120,  -367,   179,  -367,  1424,   279,   280,   284,   116,   291,
    -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,
    -367,  -367,  1798,  -367,  -367,  1798,  -367,   170,  1121,   175,
    -367,   260,  -367,  2392,   888,  -367,  -367,  -367,  -367,   134,
    -367,   294,  -367,  2396,  2396,  2396,  -367,  2396,  -367,  2396,
    -367,   207,  -367,   207,  -367,   212,  -367,   212,  -367,   212,
    -367,   212,  -367,   213,  -367,   213,  -367,   239,  -367,    80,
    -367,   144,  -367,   129,   295,  -367,    95,   303,   369,   -13,
    -367,   133,  -367,  -367,  -367,  -367,  1335,  -367,  -367,  -367,
    -367,   103,  -367,   -18,  1521,  -367,    14,  1798,   302,   308,
     312,  -367,  -367,   313,   297,   315,   318,  1646,  -367,  1798,
    -367,   300,   316,   317,    52,  -367,  -367,   141,  1680,   159,
    -367,  -367,  -367,  -367,   550,  -367,  -367,  -367,  -367,  -367,
     111,   637,  -367,  -367,  -367,  -367,  3082,   319,   320,  -367,
     146,  1412,  -367,   324,   327,  1198,  -367,  -367,  -367,  1798,
      97,  -367,   328,  3168,  1798,   330,  -367,  -367,  3216,  -367,
    -367,  -367,   322,   337,  1412,  -367,   336,   338,  1211,   260,
     339,  1288,  1521,  -367,   343,  -367,  2301,  -367,  -367,  -367,
    -367,   228,   228,  2347,   346,  -367,  -367,  -367,    27,  -367,
    -367,  -367,  -367,   341,  1026,  1798,  1798,   347,  1026,   811,
     349,  -367,  -367,  -367,   100,   348,  -367,  1026,  -367,  -367,
    1444,  -367,  -367,  -367,  -367,  -367,  -367,    82,  -367,   371,
    -367,   334,   353,  1412,  -367,  -367,  1798,  -367,   355,   356,
    -367,  -367,   155,  1798,  -367,  -367,   359,   158,  -367,   362,
    -367,  -367,   358,  1412,  -367,  -367,  1798,  -367,   365,  -367,
     368,  1412,  -367,   367,   370,  1301,   188,   330,   -18,  -367,
     -18,  -367,  -367,  -367,  1026,    93,  -367,   181,   200,  1798,
     387,  1693,  1693,  -367,  -367,  -367,  -367,  -367,  -367,  1680,
    2868,  -367,   211,  -367,  -367,  -367,  -367,  -367,   372,   373,
    -367,  -367,  -367,  -367,  1798,  -367,  3216,  1798,  -367,   376,
     377,  -367,  -367,   378,  1412,  -367,  -367,  1798,  -367,   389,
    1476,  -367,  -367,  -367,  -367,  1026,   204,   374,  1739,  1785,
    -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,   390,
     391,  -367,  -367,  1026,  -367,  -367,  1798,  1026,   216,  1026,
     221,  -367,  -367,  -367,  1026,   240,  -367,  1026,  -367,  1026,
     414,  -367,  -367,  -367,  -367,  1026,  -367,   400,  -367,  -367
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   315,   123,     0,   312,   314,   122,
       0,   134,   163,   142,   143,   144,   146,   147,   197,   193,
     194,   195,   157,   149,   150,   151,   152,   155,   156,   153,
     154,   148,   158,   159,   167,   168,     0,     0,   196,   198,
     145,     0,     0,     0,   161,     0,   162,   160,     0,     0,
       0,     1,   313,     0,     7,     5,     0,     0,     0,    45,
      44,     4,    42,    43,    41,    40,    32,    34,    18,     0,
      11,    31,    46,     5,    48,    55,    62,    67,    76,    81,
      84,    87,    90,    93,    96,   115,     0,     0,   187,     0,
       0,   117,   116,     0,   203,     0,   121,     0,   135,     0,
     202,     0,   124,   126,     0,   166,   128,   130,   132,     0,
       0,    37,     0,     0,     0,    46,   100,   113,     0,   175,
     234,   177,     0,     5,     5,     6,     0,     0,     0,     0,
      24,    25,    36,    49,    51,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   188,     0,     0,     0,     0,
     120,     0,   204,     0,   221,   119,   118,     0,     0,     0,
       0,     0,   261,   318,   140,   317,     0,     2,     0,   201,
       0,   169,     0,   173,     0,     0,     0,     0,     0,     0,
      10,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   102,     0,     9,     8,     0,   174,     2,     0,   236,
     233,   237,   176,     5,     0,    33,    35,    23,    20,     0,
      28,     0,    22,     5,     5,     5,    58,     5,    61,     5,
      65,    63,    66,    64,    70,    68,    71,    69,    74,    72,
      75,    73,    79,    77,    80,    78,    83,    82,    86,    85,
      89,    88,    92,    91,     0,    95,    94,     0,     0,     0,
     183,     0,   200,   199,   192,   137,     0,   205,   196,   222,
     220,   219,   136,   139,     0,   138,     0,     0,     0,     0,
       0,   297,   300,     0,     0,     0,     0,     0,   287,     0,
     281,     0,     4,   113,     0,   285,   263,     0,     0,     0,
     267,   286,   272,   273,     0,   283,   274,   275,   276,   277,
       0,     0,   319,   316,   216,   231,     0,     0,   225,   226,
       0,     0,   206,    41,     0,     0,   164,   170,   171,     0,
       0,   178,   182,     0,     0,    38,    39,    13,     0,   101,
     114,   255,     0,     0,     0,   239,    41,     0,     0,   235,
       2,     0,     0,    47,     0,    21,     0,    19,    50,    52,
      54,    57,    60,     0,     0,   191,   184,   189,     0,   185,
     223,   218,   122,     0,     0,     0,     0,     0,     0,     0,
       0,   308,   309,   310,     0,     0,   270,     0,   289,   288,
       0,   259,   262,   266,   268,   282,   284,     0,   215,     2,
     217,     0,     0,     0,   207,   214,     0,   213,    41,     0,
     180,   172,     0,     0,   165,    99,     0,     0,    14,     0,
     256,   238,     0,     0,   240,   246,     0,   245,     0,   257,
       0,     0,   247,    41,     0,     0,     0,     0,    30,    29,
      98,    97,   271,   186,     0,     0,   280,     0,     0,     0,
       0,     0,     0,   307,   311,   269,   278,   260,   265,     0,
       0,   228,     0,   229,   224,   227,   232,   209,     0,     0,
     210,   212,   179,   181,     0,    12,     0,     0,   242,     0,
       0,   244,   258,     0,     0,   248,   254,     0,   253,     0,
       0,    26,   279,   290,   291,     0,     0,     0,     0,     0,
     264,   208,   211,    17,    15,    16,   241,   243,   250,     0,
       0,   251,    27,     0,   294,   298,     0,     0,     0,     0,
       0,   249,   252,   292,     0,     0,   305,     0,   303,     0,
     296,   299,   301,   306,   304,     0,   293,     0,   295,   302
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -367,     2,  -367,  -367,  -367,  -367,  -367,    -8,  -367,  -367,
      -5,  -367,  -367,  -367,   -32,   106,  -367,  -367,  -367,   230,
    -367,  -367,   214,   232,   325,   323,   326,   329,   321,  -367,
      -4,   -92,  -367,   -55,   -75,  -367,     9,   -20,  -367,  -134,
    -367,    16,  -367,  -367,   289,  -162,   -87,  -367,    63,  -367,
     352,  -239,  -367,    -3,  -367,  -367,   -37,  -100,  -107,  -104,
    -161,  -367,    78,  -367,   -14,  -110,  -197,   -88,   124,  -366,
    -367,   180,   -78,   -98,  -367,   -62,  -367,   226,  -297,  -367,
    -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,  -367,
     474,  -367,  -367
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   171,    95,    68,    69,    70,   417,   418,    71,   219,
     115,   123,   124,    73,    74,    75,   223,   224,   225,    76,
     227,   229,    77,    78,    79,    80,    81,    82,    83,    84,
     116,   117,   202,   294,    86,    96,   295,    41,    97,    98,
      42,   119,    44,    45,   180,   181,   120,   330,   331,    46,
     154,   155,    47,   121,    49,    50,   266,   100,   101,   271,
     342,   318,   319,   320,   419,   343,   211,   296,   297,   298,
     299,   300,     5,   301,   302,   303,   304,   305,   306,   307,
     513,   530,   536,   308,   377,   524,   378,   537,   309,     6,
       7,     8,   176
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   179,     3,   118,    99,    72,    85,   172,     3,     4,
     210,   174,   349,   209,   157,     4,   317,   182,   327,    43,
     367,   189,   102,   103,   459,     9,   183,   265,   106,   107,
     108,   126,   206,   272,   212,   220,   190,   175,   162,    48,
      48,   132,   162,   314,   122,    48,    48,    48,     9,   109,
     111,   165,   150,   388,   185,   118,   163,   270,    43,    43,
     315,   366,   109,   109,    43,    43,    43,   207,    72,   208,
      10,   153,   151,   221,   325,   158,   159,   172,   293,   372,
     125,   275,   452,   162,    72,    85,   324,   177,    -3,   178,
     127,   203,   128,   182,   109,   254,   186,   182,   187,   129,
     209,   443,   183,    93,   348,   259,   183,    93,   173,   260,
     339,   153,    91,   340,   313,   166,   347,   389,   215,   216,
     167,    94,   205,    89,   459,    94,   130,   131,    -3,   367,
      19,    20,    21,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,   332,    72,    90,   460,  -230,
     208,   310,  -230,   112,   498,   499,   162,   204,   493,   118,
     205,   269,   411,   268,   371,   454,    94,   412,    48,    -3,
     205,   327,   146,   109,   172,   269,    92,    93,   174,   316,
     162,   353,   172,   337,   113,   312,    87,    43,   104,   430,
      -3,   358,   359,   360,   149,    94,   109,    88,    -3,   105,
     354,   355,   373,   368,   356,   269,   172,   369,    72,   316,
     392,   390,   162,   400,   385,   391,   401,   403,    72,    72,
      72,    93,    72,   147,    72,   475,   329,   289,   476,   402,
     148,   393,   384,   409,   291,   152,   207,   341,   208,    94,
     423,   207,    -3,   208,   328,    93,   182,   435,   494,   156,
     329,   205,   422,   153,   410,   183,   428,    -3,   490,   434,
     172,   164,   491,    94,   439,   349,    -3,   495,   370,   184,
     205,   515,    72,    85,   205,   213,   446,   460,  -236,   208,
     450,  -236,   217,   527,    72,    85,   205,   463,   529,   456,
     462,   205,   136,   137,   160,    94,   397,  -204,   172,   161,
     257,  -204,   458,   140,   141,   138,   139,   532,   142,   143,
     205,   468,   262,    48,   469,   133,   134,   135,   269,   222,
     447,   448,   370,   258,    72,    85,   350,   484,   351,    72,
     415,   479,    43,   361,   480,   362,   144,   145,   473,   483,
     263,   269,   264,   489,   267,   370,   492,   335,   269,   205,
     334,   336,   316,   462,   235,   237,   239,   241,    72,   441,
     461,   338,   179,   357,   205,   205,   363,   172,   231,   233,
     364,   500,   365,   374,   375,   332,   243,   245,   376,   379,
     381,   380,   503,   382,   386,   505,   398,   387,   451,   420,
     399,  -261,   509,   404,   496,   510,   405,   514,   172,   413,
     370,   316,   458,   352,   421,   424,   429,   425,    72,    85,
     437,   442,   444,   449,   453,   523,   464,   455,   466,   526,
     370,   528,   467,   163,   470,   471,   531,   478,   269,   533,
     474,   534,   370,   477,   481,   482,   485,   538,   497,   486,
     516,   501,   502,   518,   520,   506,   507,   508,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   511,   521,
     522,   525,   316,   535,   276,   539,    -5,    54,   504,    55,
     249,   247,   256,   333,   251,   472,   436,   465,   253,   394,
      52,   370,    -2,     0,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,   261,   277,
     278,   279,   201,   280,   281,   282,   283,   284,   285,   286,
     287,    -2,    56,    -2,    57,    -2,     2,    -2,   288,    58,
     396,   289,     0,     0,     0,     0,   170,   290,   291,    59,
      60,     0,     0,     0,     0,     0,     0,   292,    62,    63,
      64,   276,     0,    -5,    54,    65,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,     0,     0,    -2,
       0,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,     0,   277,   278,   279,     0,
     280,   281,   282,   283,   284,   285,   286,   287,    -2,    56,
      -2,    57,    -2,     2,    -2,   288,    58,     0,     0,     0,
       0,     0,     0,   311,   395,     0,    59,    60,     0,     0,
       0,     0,     0,     0,   292,    62,    63,    64,   276,     0,
      -5,    54,    65,    55,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,    -2,     0,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,     0,   277,   278,   279,     0,   280,   281,   282,
     283,   284,   285,   286,   287,    -2,    56,    -2,    57,    -2,
       2,    -2,   288,    58,     0,     0,     0,     0,     0,     0,
     311,   290,     0,    59,    60,     0,     0,     0,     0,     0,
       0,   292,    62,    63,    64,   168,     0,    -5,    54,    65,
      55,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,     0,     0,    -2,     0,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -2,    56,    -2,    57,    -2,     2,    -2,  -141,
      58,     0,     0,     0,  -141,     0,   169,   170,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,   276,     0,    -5,    54,    65,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,     0,     0,
      -2,     0,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -2,
      56,    -2,    57,    -2,     2,    -2,   288,    58,     0,    54,
       0,    55,     0,     0,     0,     0,     0,    59,    60,   114,
       0,    -5,    54,     0,    55,    61,    62,    63,    64,     0,
       0,     0,     0,    65,     0,     0,     0,    12,     0,     0,
       0,     0,     0,    66,    67,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    56,     0,    57,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,    56,    38,    57,
       0,    59,    60,     0,    58,     0,     0,     0,     0,    61,
      62,    63,    64,     0,    59,    60,    53,    65,    -5,    54,
       0,    55,    61,    62,    63,    64,     0,    66,    67,     0,
      65,     0,     0,     0,    12,     0,     0,     0,     0,     0,
      66,    67,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    38,    57,   445,     0,    -5,
      54,    58,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,     0,
       0,     0,   277,   278,   279,     0,   280,   281,   282,   283,
     284,   285,   286,   287,     0,    56,     0,    57,     0,     0,
       0,   288,    58,    53,     0,    -5,    54,     0,    55,   311,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
     292,    62,    63,    64,     0,   321,     0,     0,    65,    19,
      20,    21,    53,     0,    -5,    54,     0,    55,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   344,     0,     0,     0,    19,    20,
      21,    56,   268,    57,     0,     0,     0,     0,    58,     0,
       0,   322,     0,     0,     0,     0,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,    61,    62,    63,   323,
      56,   268,    57,     0,    65,     0,     0,    58,     0,     0,
     345,     0,     0,     0,    66,    67,     0,    59,    60,    53,
       0,    -5,    54,     0,    55,    61,    62,    63,   346,     0,
       0,     0,    53,    65,    -5,    54,     0,    55,     0,     0,
       0,   406,     0,    66,    67,    19,    20,    21,     0,     0,
       0,     0,     0,     0,   426,     0,     0,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,   268,    57,
       0,     0,     0,     0,    58,     0,     0,   407,     0,     0,
      56,   268,    57,     0,    59,    60,     0,    58,     0,     0,
     427,     0,    61,    62,    63,   408,     0,    59,    60,    53,
      65,    -5,    54,     0,    55,    61,    62,    63,    64,     0,
      66,    67,    53,    65,    -5,    54,     0,    55,     0,     0,
       0,   431,     0,    66,    67,    19,    20,    21,     0,     0,
       0,     0,     0,     0,   487,     0,     0,     0,    19,    20,
      21,     0,     0,     0,     0,     0,    53,     0,    -5,    54,
       0,    55,     0,     0,     0,     0,     0,    56,   268,    57,
       0,     0,     0,     0,    58,     0,     0,   432,     0,     0,
      56,   268,    57,     0,    59,    60,     0,    58,     0,     0,
     488,     0,    61,    62,    63,   433,     0,    59,    60,     0,
      65,     0,     0,     0,     0,    61,    62,    63,    64,     0,
      66,    67,     0,    65,    56,     0,    57,     0,     0,     0,
    -141,    58,     0,    66,    67,  -141,     0,   169,   274,     0,
       0,    59,    60,    53,     0,    -5,    54,     0,    55,    61,
      62,    63,    64,     0,     0,     0,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,    19,
      20,    21,     0,    12,     0,    53,     0,    -5,    54,     0,
      55,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,    56,   268,    57,     0,     0,     0,    53,    58,    -5,
      54,     0,    55,     0,    38,     0,     0,     2,    59,    60,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,    56,    65,    57,     0,     0,     0,     0,
      58,     0,   289,     0,    66,    67,     0,   274,   457,   291,
      59,    60,    53,     0,    -5,    54,     0,    55,    61,    62,
      63,    64,     0,     0,     0,    56,    65,    57,     0,     0,
       0,     0,    58,     0,   289,     0,    66,    67,     0,   274,
     512,   291,    59,    60,    53,     0,    -5,    54,     0,    55,
      61,    62,    63,    64,     0,     0,     0,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    67,
      56,     0,    57,     0,     0,     0,     0,    58,   273,   289,
      -5,    54,     0,    55,   274,     0,   291,    59,    60,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,    56,    65,    57,     0,     0,     0,     0,    58,
     218,     0,     0,    66,    67,     0,     0,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,    65,    56,    53,    57,    -5,
      54,     0,    55,    58,     0,    66,    67,     0,     0,     0,
     274,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,    65,
       0,    53,     0,    -5,    54,     0,    55,     0,     0,    66,
      67,     0,     0,     0,   445,     0,    -5,    54,     0,    55,
       0,     0,     0,     0,     0,    56,     0,    57,     0,     0,
       0,   383,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,    65,    56,
      53,    57,    -5,    54,     0,    55,    58,     0,    66,    67,
       0,     0,    56,   274,    57,     0,    59,    60,   288,    58,
       0,     0,     0,     0,    61,    62,    63,    64,     0,    59,
      60,     0,    65,     0,     0,     0,     0,    61,    62,    63,
      64,     0,    66,    67,     0,    65,    53,     0,    -5,    54,
       0,    55,     0,     0,     0,    66,    67,     0,    56,    53,
      57,    -5,    54,     0,    55,    58,   517,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,    65,     0,   188,     0,    -5,    54,     0,    55,     0,
       0,    66,    67,     0,    56,   226,    57,   -56,   -56,     0,
     -56,    58,   519,     0,     0,     0,     0,    56,     0,    57,
       0,    59,    60,     0,    58,     0,     0,     0,     0,    61,
      62,    63,    64,     0,    59,    60,     0,    65,     0,     0,
       0,     0,    61,    62,    63,    64,     0,    66,    67,     0,
      65,    56,   228,    57,   -59,   -59,     0,   -59,    58,     0,
      66,    67,     0,   -56,     0,   -56,     0,     0,    59,    60,
     -56,     0,     0,     0,     0,     0,    61,    62,    63,    64,
     -56,   -56,     0,     0,    65,     0,     0,     0,   -56,   -56,
     -56,   -56,     0,     0,    66,    67,   -56,   230,     0,    -5,
      54,     0,    55,     0,     0,     0,   -56,   -56,     0,     0,
     -59,   232,   -59,    -5,    54,     0,    55,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -59,   -59,     0,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,     0,
       0,     0,     0,   -59,     0,   234,     0,    -5,    54,     0,
      55,     0,     0,   -59,   -59,    56,     0,    57,   236,     0,
      -5,    54,    58,    55,     0,     0,     0,     0,     0,    56,
       0,    57,    59,    60,     0,     0,    58,     0,     0,     0,
      61,    62,    63,    64,     0,     0,    59,    60,    65,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    66,    67,
       0,     0,    65,    56,   238,    57,    -5,    54,     0,    55,
      58,     0,    66,    67,     0,     0,    56,     0,    57,     0,
      59,    60,     0,    58,     0,     0,     0,     0,    61,    62,
      63,    64,     0,    59,    60,     0,    65,     0,     0,     0,
       0,    61,    62,    63,    64,     0,    66,    67,     0,    65,
     240,     0,    -5,    54,     0,    55,     0,     0,     0,    66,
      67,     0,    56,   242,    57,    -5,    54,     0,    55,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,     0,     0,     0,     0,    65,     0,   244,     0,    -5,
      54,     0,    55,     0,     0,    66,    67,     0,    56,   246,
      57,    -5,    54,     0,    55,    58,     0,     0,     0,     0,
       0,    56,     0,    57,     0,    59,    60,     0,    58,     0,
       0,     0,     0,    61,    62,    63,    64,     0,    59,    60,
       0,    65,     0,     0,     0,     0,    61,    62,    63,    64,
       0,    66,    67,     0,    65,    56,   248,    57,    -5,    54,
       0,    55,    58,     0,    66,    67,     0,    56,     0,    57,
       0,     0,    59,    60,    58,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    59,    60,     0,     0,    65,     0,
       0,     0,    61,    62,    63,    64,     0,     0,    66,    67,
      65,   250,     0,    -5,    54,     0,    55,     0,     0,     0,
      66,    67,     0,     0,    56,   252,    57,    -5,    54,     0,
      55,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,    65,     0,   255,
       0,    -5,    54,     0,    55,     0,     0,    66,    67,    56,
       0,    57,   438,     0,    -5,    54,    58,    55,     0,     0,
       0,     0,     0,    56,     0,    57,    59,    60,     0,     0,
      58,     0,     0,     0,    61,    62,    63,    64,     0,     0,
      59,    60,    65,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    66,    67,     0,     0,    65,    56,   440,    57,
      -5,    54,     0,    55,    58,     0,    66,    67,     0,     0,
      56,     0,    57,     0,    59,    60,     0,    58,     0,     0,
       0,     0,    61,    62,    63,    64,     0,    59,    60,     0,
      65,     0,     0,     0,     0,    61,    62,    63,    64,     0,
      66,    67,     0,    65,     0,     0,    54,     0,    55,     0,
      54,     0,    55,    66,    67,     0,    56,     0,    57,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    54,     0,    55,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    56,     0,    57,     0,    56,     0,    57,    58,     0,
       0,     0,    58,     0,     0,   352,     0,     0,    59,    60,
       0,     0,    59,    60,     0,     0,    61,    62,    63,    64,
      61,    62,    63,    64,    65,     0,     0,     0,    65,     0,
      56,     0,    57,     0,    66,    67,     0,   214,    66,    67,
       0,     0,     0,     0,     0,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    11,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    67,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,    38,     0,
      39,     0,    40,  -125,  -125,  -125,  -125,     0,  -125,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -125,     0,     0,  -125,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,    38,     0,
      39,     0,    40,  -127,  -127,  -127,  -127,     0,  -127,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -127,     0,     0,  -127,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,    38,     0,
      39,     0,    40,  -129,  -129,  -129,  -129,     0,  -129,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -129,     0,     0,  -129,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,    38,     0,
      39,     0,    40,  -131,  -131,  -131,  -131,     0,  -131,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -131,     0,     0,  -131,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,    38,     0,
      39,     0,    40,  -133,  -133,  -133,  -133,     0,  -133,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -133,     0,     0,  -133,     0,    -2,     0,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    -2,     0,    -2,     0,
      -2,     0,    -2,     0,   460,   341,   208,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    -3,    -2,     0,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     1,     0,     0,     0,    -2,     0,    -2,     0,    -2,
       2,    -2,     0,     0,     0,     0,     0,     0,     0,    -2,
     311,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -2,     0,
      -2,     0,    -2,     2,    -2,    -2,     0,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -2,     0,    -2,     0,    -2,     2,
      -2,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      37,     0,    38,     0,    39,     0,    40,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     2,     0,     0,     0,    12,     0,     0,
       0,     0,     0,     0,   326,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     2,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,   414,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,   416,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,     0,     0,    38,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38
};

static const yytype_int16 yycheck[] =
{
       3,   101,     0,    58,    41,    10,    10,    99,     6,     0,
     120,    99,   209,   120,    89,     6,   177,   104,   180,     3,
     259,   113,    42,    43,   390,    65,   104,   161,    48,    49,
      50,     7,   119,   167,   121,   127,    67,    99,     1,    42,
      43,    73,     1,    67,    58,    48,    49,    50,    65,    80,
      55,     1,    80,     1,   109,   110,    93,   164,    42,    43,
      84,    74,    80,    80,    48,    49,    50,    66,    73,    68,
      66,    84,   100,   128,   178,    89,    90,   169,   170,    65,
       3,   169,   379,     1,    89,    89,   178,    66,    87,    68,
      66,     1,    68,   180,    80,   150,   110,   184,   112,    75,
     207,    74,   180,    66,   208,    70,   184,    66,    99,    74,
     202,    84,     1,   205,   176,    65,   208,    65,   123,   124,
      70,    84,    70,    66,   490,    84,   102,   103,    87,   368,
      27,    28,    29,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   182,   151,    66,    66,    67,
      68,   171,    70,    66,   451,   452,     1,    67,    65,   214,
      70,   164,    65,    60,   271,    65,    84,    70,   171,    87,
      70,   333,    92,    80,   266,   178,    65,    66,   266,   177,
       1,   213,   274,    67,    66,   176,    73,   171,    73,   350,
      87,   223,   224,   225,    99,    84,    80,    84,    87,    84,
     214,    67,   277,    70,    70,   208,   298,    74,   213,   207,
     298,    70,     1,    67,   289,    74,    70,   321,   223,   224,
     225,    66,   227,    79,   229,    67,    71,    68,    70,   321,
     101,    72,   287,   325,    75,    70,    66,    67,    68,    84,
     344,    66,    87,    68,    65,    66,   333,   351,    67,    73,
      71,    70,   344,    84,   329,   333,   348,    87,    70,   351,
     352,    87,    74,    84,   356,   462,    87,    67,   271,    73,
      70,    67,   277,   277,    70,    67,   374,    66,    67,    68,
     378,    70,    84,    67,   289,   289,    70,   397,    67,   387,
     397,    70,    85,    86,    65,    84,   316,    68,   390,    70,
       4,    72,   390,    90,    91,    93,    94,    67,    95,    96,
      70,   403,    67,   316,   406,    87,    88,    89,   321,    84,
     375,   376,   325,    72,   329,   329,    66,   431,    68,   334,
     334,   423,   316,   227,   426,   229,    97,    98,   413,   431,
      67,   344,    67,   435,    67,   348,   444,    67,   351,    70,
      71,    67,   350,   460,   140,   141,   142,   143,   363,   363,
     397,    70,   462,    69,    70,    70,    71,   459,   138,   139,
      67,   459,     3,    71,    66,   412,   144,   145,    66,    66,
      65,    84,   474,    65,    84,   477,    67,    71,   379,    67,
      70,    74,   484,    69,   449,   487,    69,   495,   490,    71,
     403,   399,   490,    73,    67,    69,    67,    69,   413,   413,
      67,    65,    71,    66,    65,   513,    45,    69,    84,   517,
     423,   519,    69,   460,    69,    69,   524,    69,   431,   527,
      71,   529,   435,    71,    69,    67,    69,   535,    51,    69,
      66,    69,    69,   498,   499,    69,    69,    69,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    69,    69,
      69,   516,   460,    49,     1,    65,     3,     4,   476,     6,
     147,   146,   151,   184,   148,   412,   352,   399,   149,   299,
       6,   484,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,   156,    46,
      47,    48,    72,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     304,    68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,     1,    -1,     3,     4,    92,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,     1,    -1,
       3,     4,    92,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,     1,    -1,     3,     4,    92,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    -1,    -1,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    -1,    72,    73,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,     1,    -1,     3,     4,    92,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    76,    77,     1,
      -1,     3,     4,    -1,     6,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   102,   103,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    76,    77,    -1,    66,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    -1,    76,    77,     1,    92,     3,     4,
      -1,     6,    84,    85,    86,    87,    -1,   102,   103,    -1,
      92,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
     102,   103,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,     1,    -1,     3,
       4,    66,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,     1,    -1,     3,     4,    -1,     6,    73,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    -1,    23,    -1,    -1,    92,    27,
      28,    29,     1,    -1,     3,     4,    -1,     6,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      29,    59,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      59,    60,    61,    -1,    92,    -1,    -1,    66,    -1,    -1,
      69,    -1,    -1,    -1,   102,   103,    -1,    76,    77,     1,
      -1,     3,     4,    -1,     6,    84,    85,    86,    87,    -1,
      -1,    -1,     1,    92,     3,     4,    -1,     6,    -1,    -1,
      -1,    23,    -1,   102,   103,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,
      59,    60,    61,    -1,    76,    77,    -1,    66,    -1,    -1,
      69,    -1,    84,    85,    86,    87,    -1,    76,    77,     1,
      92,     3,     4,    -1,     6,    84,    85,    86,    87,    -1,
     102,   103,     1,    92,     3,     4,    -1,     6,    -1,    -1,
      -1,    23,    -1,   102,   103,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,
      59,    60,    61,    -1,    76,    77,    -1,    66,    -1,    -1,
      69,    -1,    84,    85,    86,    87,    -1,    76,    77,    -1,
      92,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
     102,   103,    -1,    92,    59,    -1,    61,    -1,    -1,    -1,
      65,    66,    -1,   102,   103,    70,    -1,    72,    73,    -1,
      -1,    76,    77,     1,    -1,     3,     4,    -1,     6,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    27,
      28,    29,    -1,    19,    -1,     1,    -1,     3,     4,    -1,
       6,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    59,    60,    61,    -1,    -1,    -1,     1,    66,     3,
       4,    -1,     6,    -1,    60,    -1,    -1,    63,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      -1,    -1,    -1,    59,    92,    61,    -1,    -1,    -1,    -1,
      66,    -1,    68,    -1,   102,   103,    -1,    73,    74,    75,
      76,    77,     1,    -1,     3,     4,    -1,     6,    84,    85,
      86,    87,    -1,    -1,    -1,    59,    92,    61,    -1,    -1,
      -1,    -1,    66,    -1,    68,    -1,   102,   103,    -1,    73,
      74,    75,    76,    77,     1,    -1,     3,     4,    -1,     6,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,     1,    68,
       3,     4,    -1,     6,    73,    -1,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    59,    92,    61,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    92,    59,     1,    61,     3,
       4,    -1,     6,    66,    -1,   102,   103,    -1,    -1,    -1,
      73,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,    -1,   102,
     103,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,    59,
       1,    61,     3,     4,    -1,     6,    66,    -1,   102,   103,
      -1,    -1,    59,    73,    61,    -1,    76,    77,    65,    66,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,    76,
      77,    -1,    92,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    -1,   102,   103,    -1,    92,     1,    -1,     3,     4,
      -1,     6,    -1,    -1,    -1,   102,   103,    -1,    59,     1,
      61,     3,     4,    -1,     6,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    92,    -1,     1,    -1,     3,     4,    -1,     6,    -1,
      -1,   102,   103,    -1,    59,     1,    61,     3,     4,    -1,
       6,    66,    67,    -1,    -1,    -1,    -1,    59,    -1,    61,
      -1,    76,    77,    -1,    66,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    -1,    76,    77,    -1,    92,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    -1,   102,   103,    -1,
      92,    59,     1,    61,     3,     4,    -1,     6,    66,    -1,
     102,   103,    -1,    59,    -1,    61,    -1,    -1,    76,    77,
      66,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      76,    77,    -1,    -1,    92,    -1,    -1,    -1,    84,    85,
      86,    87,    -1,    -1,   102,   103,    92,     1,    -1,     3,
       4,    -1,     6,    -1,    -1,    -1,   102,   103,    -1,    -1,
      59,     1,    61,     3,     4,    -1,     6,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    92,    -1,     1,    -1,     3,     4,    -1,
       6,    -1,    -1,   102,   103,    59,    -1,    61,     1,    -1,
       3,     4,    66,     6,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    61,    76,    77,    -1,    -1,    66,    -1,    -1,    -1,
      84,    85,    86,    87,    -1,    -1,    76,    77,    92,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,   102,   103,
      -1,    -1,    92,    59,     1,    61,     3,     4,    -1,     6,
      66,    -1,   102,   103,    -1,    -1,    59,    -1,    61,    -1,
      76,    77,    -1,    66,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    -1,    76,    77,    -1,    92,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    -1,   102,   103,    -1,    92,
       1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,   102,
     103,    -1,    59,     1,    61,     3,     4,    -1,     6,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    92,    -1,     1,    -1,     3,
       4,    -1,     6,    -1,    -1,   102,   103,    -1,    59,     1,
      61,     3,     4,    -1,     6,    66,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    61,    -1,    76,    77,    -1,    66,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    -1,    76,    77,
      -1,    92,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      -1,   102,   103,    -1,    92,    59,     1,    61,     3,     4,
      -1,     6,    66,    -1,   102,   103,    -1,    59,    -1,    61,
      -1,    -1,    76,    77,    66,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    76,    77,    -1,    -1,    92,    -1,
      -1,    -1,    84,    85,    86,    87,    -1,    -1,   102,   103,
      92,     1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,
     102,   103,    -1,    -1,    59,     1,    61,     3,     4,    -1,
       6,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    92,    -1,     1,
      -1,     3,     4,    -1,     6,    -1,    -1,   102,   103,    59,
      -1,    61,     1,    -1,     3,     4,    66,     6,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    76,    77,    -1,    -1,
      66,    -1,    -1,    -1,    84,    85,    86,    87,    -1,    -1,
      76,    77,    92,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,   102,   103,    -1,    -1,    92,    59,     1,    61,
       3,     4,    -1,     6,    66,    -1,   102,   103,    -1,    -1,
      59,    -1,    61,    -1,    76,    77,    -1,    66,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    -1,    76,    77,    -1,
      92,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    -1,
     102,   103,    -1,    92,    -1,    -1,     4,    -1,     6,    -1,
       4,    -1,     6,   102,   103,    -1,    59,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,     4,    -1,     6,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,    59,    -1,    61,    -1,    59,    -1,    61,    66,    -1,
      -1,    -1,    66,    -1,    -1,    73,    -1,    -1,    76,    77,
      -1,    -1,    76,    77,    -1,    -1,    84,    85,    86,    87,
      84,    85,    86,    87,    92,    -1,    -1,    -1,    92,    -1,
      59,    -1,    61,    -1,   102,   103,    -1,    66,   102,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,     1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    64,    65,    66,    67,    68,    -1,    70,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    64,    65,    66,    67,    68,    -1,    70,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    64,    65,    66,    67,    68,    -1,    70,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    64,    65,    66,    67,    68,    -1,    70,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    64,    65,    66,    67,    68,    -1,    70,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    64,    -1,    66,    67,    68,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,    -1,    -1,    58,    -1,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      73,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      60,    -1,    62,    63,    64,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    60,    -1,    62,    63,
      64,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      58,    -1,    60,    -1,    62,    -1,    64,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    63,   105,   140,   176,   193,   194,   195,    65,
      66,     1,    19,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    58,    60,    62,
      64,   141,   144,   145,   146,   147,   153,   156,   157,   158,
     159,     0,   194,     1,     4,     6,    59,    61,    66,    76,
      77,    84,    85,    86,    87,    92,   102,   103,   107,   108,
     109,   112,   114,   117,   118,   119,   123,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   138,    73,    84,    66,
      66,     1,    65,    66,    84,   106,   139,   142,   143,   160,
     161,   162,   141,   141,    73,    84,   141,   141,   141,    80,
      66,   114,    66,    66,     1,   114,   134,   135,   137,   145,
     150,   157,   168,   115,   116,     3,     7,    66,    68,    75,
     102,   103,   118,    87,    88,    89,    85,    86,    93,    94,
      90,    91,    95,    96,    97,    98,    92,    79,   101,    99,
      80,   100,    70,    84,   154,   155,    73,   138,   168,   168,
      65,    70,     1,   160,    87,     1,    65,    70,     1,    72,
      73,   105,   135,   140,   171,   179,   196,    66,    68,   161,
     148,   149,   150,   176,    73,   137,   168,   168,     1,   135,
      67,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    72,   136,     1,    67,    70,   150,    66,    68,   162,
     169,   170,   150,    67,    66,   114,   114,    84,    67,   113,
     135,   137,    84,   120,   121,   122,     1,   124,     1,   125,
       1,   123,     1,   123,     1,   126,     1,   126,     1,   126,
       1,   126,     1,   127,     1,   127,     1,   128,     1,   129,
       1,   130,     1,   131,   137,     1,   132,     4,    72,    70,
      74,   154,    67,    67,    67,   143,   160,    67,    60,   157,
     162,   163,   143,     1,    73,   171,     1,    46,    47,    48,
      50,    51,    52,    53,    54,    55,    56,    57,    65,    68,
      74,    75,    84,   135,   137,   140,   171,   172,   173,   174,
     175,   177,   178,   179,   180,   181,   182,   183,   187,   192,
     141,    73,   140,   179,    67,    84,   105,   164,   165,   166,
     167,    23,    69,    87,   135,   163,    74,   149,    65,    71,
     151,   152,   160,   148,    71,    67,    67,    67,    70,   135,
     135,    67,   164,   169,    23,    69,    87,   135,   163,   170,
      66,    68,    73,   118,   168,    67,    70,    69,   118,   118,
     118,   119,   119,    71,    67,     3,    74,   155,    70,    74,
     157,   162,    65,   138,    71,    66,    66,   188,   190,    66,
      84,    65,    65,    65,   137,   138,    84,    71,     1,    65,
      70,    74,   171,    72,   175,    74,   181,   141,    67,    70,
      67,    70,   135,   163,    69,    69,    23,    69,    87,   135,
     138,    65,    70,    71,    74,   134,    47,   110,   111,   168,
      67,    67,   135,   163,    69,    69,    23,    69,   135,    67,
     164,    23,    69,    87,   135,   163,   172,    67,     1,   135,
       1,   134,    65,    74,    71,     1,   177,   137,   137,    66,
     177,   140,   182,    65,    65,    69,   177,    74,   171,   173,
      66,   160,   162,   169,    45,   166,    84,    69,   135,   135,
      69,    69,   152,   138,    71,    67,    70,    71,    69,   135,
     135,    69,    67,   135,   163,    69,    69,    23,    69,   135,
      70,    74,   177,    65,    67,    67,   137,    51,   182,   182,
     171,    69,    69,   135,   111,   135,    69,    69,    69,   135,
     135,    69,    74,   184,   177,    67,    66,    67,   137,    67,
     137,    69,    69,   177,   189,   137,   177,    67,   177,    67,
     185,   177,    67,   177,   177,    49,   186,   191,   177,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   107,   108,   107,   107,   107,   107,
     107,   107,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     113,   114,   115,   114,   116,   114,   114,   114,   114,   114,
     117,   117,   117,   117,   117,   117,   118,   118,   119,   120,
     119,   121,   119,   122,   119,   123,   124,   123,   123,   125,
     123,   123,   126,   126,   126,   126,   126,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   128,   128,   128,   128,
     128,   129,   129,   129,   130,   130,   130,   131,   131,   131,
     132,   132,   132,   133,   133,   133,   134,   134,   134,   134,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   137,   137,   138,   139,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   142,   143,   143,
     143,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   146,   146,   146,   147,   147,   148,
     148,   149,   149,   149,   150,   150,   150,   150,   151,   151,
     152,   152,   152,   153,   153,   153,   153,   153,   154,   154,
     155,   155,   156,   157,   157,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   162,   162,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     166,   167,   167,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   171,
     171,   171,   172,   172,   172,   172,   173,   174,   174,   175,
     175,   176,   177,   177,   177,   177,   177,   177,   178,   178,
     178,   179,   179,   180,   180,   181,   181,   182,   182,   182,
     182,   184,   185,   183,   183,   186,   186,   188,   189,   187,
     190,   191,   187,   187,   187,   187,   187,   192,   192,   192,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     0,     2,     1,     3,     3,
       3,     1,     6,     4,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       3,     1,     0,     3,     0,     3,     2,     2,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     0,
       4,     0,     4,     0,     4,     1,     0,     4,     3,     0,
       4,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     5,     5,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     2,
       2,     3,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     3,     3,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     2,     1,     1,     1,
       2,     2,     3,     1,     2,     1,     2,     1,     1,     3,
       2,     3,     1,     4,     5,     5,     6,     2,     1,     3,
       1,     3,     4,     1,     1,     1,     1,     1,     1,     4,
       4,     2,     1,     1,     1,     3,     3,     4,     6,     5,
       5,     6,     5,     4,     4,     4,     3,     4,     4,     3,
       3,     2,     1,     2,     3,     1,     1,     3,     3,     3,
       2,     1,     3,     2,     1,     2,     1,     1,     3,     2,
       3,     5,     4,     5,     4,     3,     3,     3,     4,     6,
       5,     5,     6,     4,     4,     2,     3,     3,     4,     3,
       4,     1,     2,     1,     4,     3,     2,     1,     2,     3,
       2,     7,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     1,     2,     1,     1,     1,     2,     2,
       2,     0,     0,     8,     5,     2,     0,     0,     0,     7,
       0,     0,     9,     6,     7,     6,     7,     3,     2,     2,
       2,     3,     1,     2,     1,     1,     5,     4,     1,     2
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
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("\t--Type: %s\n", yytext); saveTypeAS(yytext);}
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("\t--Pointer: %s\n", yytext); /*GetTop, which is a Type, add "*"" to it*/ savePointerAS();}
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "parser.y" /* yacc.c:1646  */
    { process_id((yyvsp[0].string)); }
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 72 "parser.y" /* yacc.c:1646  */
    { process_literal(yytext); }
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Caracter ')' faltante\n\n", yylineno); yyerrok;}
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 76 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida\n\n", yylineno); yyerrok;}
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 82 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida antes de '%s'\n\n", yylineno, yytext); yyerrok;}
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 111 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida despues de ','\n\n", yylineno); yyerrok; }
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "parser.y" /* yacc.c:1646  */
    {eval_unary();}
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 117 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 117 "parser.y" /* yacc.c:1646  */
    {eval_unary();}
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 140 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 140 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 141 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 142 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 142 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 147 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 147 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 148 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 149 "parser.y" /* yacc.c:1646  */
    { process_op((yyvsp[0].string)); }
#line 2425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 149 "parser.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 150 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 157 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 158 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 165 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 166 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 169 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 170 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 177 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 178 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 184 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 190 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 196 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 202 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 208 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 214 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: %s\n\n", yylineno, yytext); yyerrok; }
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 215 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: '?'\n\n", yylineno, yytext); yyerrok; }
#line 2527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 249 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 251 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 252 "parser.y" /* yacc.c:1646  */
    { yyerrok;}
#line 2545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 258 "parser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("Linea: %i. Tipo de variable invalida.\n\n", yylineno); yyclearin; }
#line 2557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 280 "parser.y" /* yacc.c:1646  */
    { printf("Expresion invalida antes de ','\n\n"); }
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 285 "parser.y" /* yacc.c:1646  */
    { fprintf(stderr, "Linea: %i. Expresion inesperada antes de '%s'.\n\n", yylineno, yytext); yyerrok; }
#line 2569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 286 "parser.y" /* yacc.c:1646  */
    { yyerror(""); fprintf(stderr, "Linea: %i. Falta signo '='.\n\n", yylineno, yytext); YYERROR; }
#line 2575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("\t--ID: %s\n", (yyvsp[0].string)); saveIDAS((yyvsp[0].string));}
#line 2581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 404 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Nombre de variable invalido: %s.\n\n", yylineno, yytext); }
#line 2587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 554 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Falta ';'\n\n", yylineno); yyerrok; }
#line 2593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 555 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida.\n\n", yylineno); yyerrok; }
#line 2599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 559 "parser.y" /* yacc.c:1646  */
    { inicio_if(); }
#line 2605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 559 "parser.y" /* yacc.c:1646  */
    { inicio_else(); }
#line 2611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 559 "parser.y" /* yacc.c:1646  */
    { fin_if(); }
#line 2617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 569 "parser.y" /* yacc.c:1646  */
    { inicio_while(); }
#line 2623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 569 "parser.y" /* yacc.c:1646  */
    { eval_while(); }
#line 2629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 569 "parser.y" /* yacc.c:1646  */
    {fin_while();}
#line 2635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 570 "parser.y" /* yacc.c:1646  */
    { inicio_DOwhile(); }
#line 2641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 570 "parser.y" /* yacc.c:1646  */
    { eval_DOwhile(); }
#line 2647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 570 "parser.y" /* yacc.c:1646  */
    { fin_DOwhile(); }
#line 2653 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2657 "parser.tab.c" /* yacc.c:1646  */
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
#line 605 "parser.y" /* yacc.c:1906  */

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

