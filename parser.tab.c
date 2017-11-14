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
    ID = 258,
    CONSTANT = 259,
    STRING = 260,
    FUNC_NAME = 261,
    SIZEOF = 262,
    PTR_OP = 263,
    INC_OP = 264,
    DEC_OP = 265,
    SHL = 266,
    SHR = 267,
    LE_OP = 268,
    GE_OP = 269,
    EQ_OP = 270,
    NE_OP = 271,
    AND_OP = 272,
    OR_OP = 273,
    MUL_ASSIGN = 274,
    DIV_ASSIGN = 275,
    MOD_ASSIGN = 276,
    ADD_ASSIGN = 277,
    SUB_ASSIGN = 278,
    LEFT_ASSIGN = 279,
    RIGHT_ASSIGN = 280,
    AND_ASSIGN = 281,
    XOR_ASSIGN = 282,
    OR_ASSIGN = 283,
    TYPE_NAME = 284,
    TYPEDEF_NAME = 285,
    ENUMERATION_CONSTANT = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330,
    SEMICOLON = 331,
    LPARENTHESIS = 332,
    RPARENTHESIS = 333,
    LBRACE = 334,
    RBRACE = 335,
    COMMA = 336,
    COLON = 337,
    EQUALS = 338,
    LBRACKET = 339,
    RBRACKET = 340,
    DOT = 341,
    AMPERSAND = 342,
    EXCLAMATION = 343,
    MINUS = 344,
    PLUS = 345,
    TILDE = 346,
    STAR = 347,
    SLASH = 348,
    BACKSLASH = 349,
    MODULO = 350,
    LESS_THAN = 351,
    GREATER_THAN = 352,
    CARET = 353,
    PIPE = 354,
    QUESTION_MARK = 355,
    CHARACTER = 356,
    SEPARATOR = 357,
    QOUTE = 358
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   3273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  522

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
       0,    36,    36,    37,    37,    38,    39,    40,    41,    42,
      46,    47,    51,    52,    56,    57,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    74,    75,    76,    80,
      81,    82,    83,    84,    85,    86,    90,    91,    92,    93,
      94,    95,    99,   100,   104,   105,   106,   107,   111,   112,
     113,   114,   115,   119,   120,   121,   122,   123,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   139,   140,   141,
     142,   143,   147,   148,   149,   153,   154,   155,   159,   160,
     161,   165,   166,   167,   171,   172,   173,   177,   178,   179,
     180,   184,   185,   185,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   203,   204,   208,   212,   213,
     214,   215,   216,   217,   218,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   236,   237,   238,   242,
     243,   244,   245,   249,   250,   251,   252,   253,   254,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   277,   278,   279,   283,   284,
     288,   289,   293,   294,   295,   299,   300,   301,   302,   306,
     307,   311,   312,   313,   317,   318,   319,   320,   321,   325,
     326,   330,   331,   335,   339,   340,   341,   342,   346,   347,
     351,   352,   356,   357,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   379,
     380,   381,   382,   386,   387,   392,   393,   397,   398,   402,
     403,   404,   408,   409,   413,   414,   418,   419,   420,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     448,   449,   450,   454,   455,   456,   457,   461,   465,   466,
     470,   471,   475,   479,   480,   481,   482,   483,   484,   488,
     489,   490,   494,   495,   499,   500,   504,   505,   509,   510,
     511,   512,   516,   516,   516,   517,   521,   522,   526,   527,
     528,   529,   530,   531,   535,   536,   537,   538,   539,   543,
     544,   548,   549,   553,   554,   558,   559
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CONSTANT", "STRING", "FUNC_NAME",
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
  "SEPARATOR", "QOUTE", "$accept", "saveID", "saveType", "save_pointer",
  "primary_expression", "generic_selection", "generic_assoc_list",
  "generic_association", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
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

#define YYPACT_NINF -363

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-363)))

#define YYTABLE_NINF -255

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2942,   -43,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,    65,   -51,   -15,  -337,
       4,  -337,  -337,    88,   882,   943,  -337,    68,  -337,  -337,
    1004,  1065,  1126,  -337,  2887,  -337,  -337,  -337,    34,    95,
    1181,  3202,   877,   193,  -337,  -337,    85,   156,    49,  -337,
     727,   104,   136,  -337,  -337,  -337,    79,  3131,  -337,  -337,
    -337,  -337,  -337,    95,    87,   108,  -337,    91,  -337,  -337,
    2605,  2629,  2629,   130,   138,  1236,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,   261,  -337,   194,  -337,  2653,  -337,   225,
     151,   277,    32,   293,   183,   217,   196,   296,    19,  -337,
     241,  3202,   140,  3202,   243,   251,   259,  -337,    85,  -337,
     270,  -337,  -337,  -337,   156,  -337,  -337,    85,   -49,   254,
     451,  -337,  -337,  2629,  -337,    88,  -337,  -337,  2721,  2776,
    1450,   104,  3131,  3035,  -337,    84,  -337,   168,   353,    41,
    -337,   877,  1236,  -337,  1236,  -337,  -337,  3202,   999,   -47,
    -337,    78,   281,  -337,   362,  -337,  -337,  1942,   877,   364,
    -337,  2653,  2653,  2653,  1294,  2184,  2207,  2241,  2282,  2305,
    2333,  2357,  2380,  2408,  2432,  2455,  2483,  2507,  2530,   877,
    -337,  -337,  1360,  1509,   120,  -337,   154,  -337,  -337,  -337,
     366,  -337,  1755,  -337,  -337,  -337,  -337,    91,  1908,  -337,
     -48,   303,   877,   305,   312,   317,   319,  1415,   322,   398,
     326,   327,  2000,  -337,   877,  -337,   402,   321,   170,  -337,
    -337,   169,  2034,   142,  -337,  -337,  -337,  -337,   543,  -337,
    -337,  -337,  -337,  -337,   391,   635,  -337,  -337,  -337,  -337,
      35,   344,   342,  -337,   197,  1810,  -337,   345,   346,  1553,
    3083,  -337,  -337,  -337,   877,    98,  -337,   347,    57,  -337,
    -337,  -337,  -337,   246,   349,   350,   352,   -31,   343,  -337,
    -337,  -337,   877,   213,  -337,  -337,   201,  -337,   297,  -337,
    -337,  -337,  -337,  -337,   225,  -337,   225,  -337,   151,  -337,
     151,  -337,   277,  -337,   277,  -337,   277,  -337,   277,  -337,
      32,  -337,    32,  -337,   293,  -337,   183,  -337,   217,  -337,
     196,  -337,   296,   298,  -337,   354,   355,  1810,  -337,   351,
     356,  1612,   154,  2831,  1656,   357,  -337,  1415,   358,  1415,
     877,   877,   877,    92,   375,   819,   365,  -337,  -337,  -337,
     161,   367,  -337,  -337,  -337,  1850,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,   877,  1299,  -337,   166,  -337,  -337,  2997,
    -337,   435,   368,  1810,  -337,  -337,   877,  -337,   369,   371,
    -337,  -337,  -337,    40,   877,  -337,   877,   360,   360,  -337,
    -337,  3168,  -337,  1908,  -337,  -337,  2558,  -337,  2582,  -337,
    -337,   377,  1810,  -337,  -337,   877,  -337,   379,  -337,   384,
    1810,  -337,   383,   385,  1715,   370,  -337,  1415,  -337,   218,
     256,   258,  -337,   387,  2057,  2057,  -337,  -337,  -337,  -337,
    -337,  2034,  -337,  -337,  -337,  -337,  -337,  -337,   386,   388,
    -337,  -337,  -337,  -337,  -337,   363,   271,  -337,   390,   175,
      91,  -337,    91,  -337,  -337,   389,   393,  -337,  -337,   395,
    1810,  -337,  -337,   877,  -337,   396,  -337,  -337,  -337,  1415,
    1415,   877,  2092,  2149,  -337,  -337,  -337,   877,  -337,  3168,
     877,  1885,  -337,  -337,  -337,  -337,   397,   399,  -337,  1415,
    -337,  -337,   283,  1415,   294,  1415,   295,  -337,  -337,  -337,
    -337,  -337,  -337,  -337,   404,  -337,  1415,  -337,  1415,   382,
    -337,  -337,  -337,  1415,  -337,  -337
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
       0,     0,     0,   114,     0,   299,   301,   113,   178,     0,
       0,     0,     0,   109,   194,   108,     0,   212,     0,   126,
       0,   193,     0,   125,   115,   117,   157,     0,   119,   121,
     123,     1,   300,     0,   181,     0,   179,     0,     2,     5,
       3,     3,     3,     0,     0,     0,    36,    41,    39,    38,
      40,    37,    16,     0,     9,    29,    42,     3,    44,    48,
      53,    58,    67,    72,    75,    78,    81,    84,    87,   107,
       0,   166,   225,   168,     0,     0,     0,   112,     0,   195,
       0,   187,   213,   211,   210,   111,   110,     0,   125,     0,
       0,    91,   252,     3,   305,     0,   131,   304,     0,     0,
       0,   192,     0,     0,   160,     0,   164,     0,     0,     0,
     174,     0,     0,    33,     0,    30,    31,     0,     0,     0,
     105,     0,     0,     4,     0,    22,    23,     0,     0,     0,
      32,     3,     3,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,   165,     0,     0,   227,   224,   228,   167,   190,   183,
       0,   128,     0,   196,   214,   209,   127,   130,     0,   129,
     125,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   278,     0,   272,     0,   105,     0,   276,
     254,     0,     0,     0,   258,   277,   263,   264,     0,   274,
     265,   266,   267,   268,     0,     0,   306,   303,   222,   207,
       0,     0,   216,   217,     0,     0,   197,    37,     0,     0,
       0,   155,   161,   162,     0,     0,   169,   173,     0,   176,
     182,   175,   180,     0,     0,     0,     0,     0,     0,     8,
       7,     6,     0,     3,    21,    18,     0,    26,     0,    20,
      45,    46,    47,    52,    51,    50,    49,    56,    54,    57,
      55,    65,    63,    66,    64,    61,    59,    62,    60,    70,
      68,    71,    69,    74,    73,    77,    76,    80,    79,    83,
      82,    86,    85,     0,   246,     0,     0,     0,   230,    37,
       0,     0,   226,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   295,   296,   297,
       0,     0,   261,   280,   279,     0,   250,   253,   257,   259,
     273,   275,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    94,     0,     0,   219,     0,   220,   206,     0,
     208,     0,     0,     0,   198,   205,     0,   204,    37,     0,
     156,   171,   163,     0,     0,   177,     0,    34,     0,    35,
      11,     0,   106,     0,    43,    19,     0,    17,     0,   247,
     229,     0,     0,   231,   237,     0,   236,     0,   248,     0,
       0,   238,    37,     0,     0,     0,   269,     0,   271,     0,
       0,     0,   281,     0,     0,     0,   294,   298,   260,   251,
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
    -337,  -337,  -337,  -337,  -337,   -11,  -337,  -337,   105,  -337,
     -72,   207,   214,   113,   215,   323,   348,   325,   372,   341,
    -337,   -40,   -20,  -337,  -337,   -74,   -34,    13,    14,  -337,
     -52,  -337,   -46,  -337,  -337,   340,  -120,    -8,  -337,   139,
    -337,   458,  -127,  -337,   -50,  -337,  -337,   -24,   -60,   -42,
     -98,  -133,  -337,   155,  -337,   -21,   -92,  -178,   -57,   146,
    -336,  -337,   318,   -59,  -193,  -337,    16,  -337,   307,  -311,
    -337,  -337,  -337,  -337,  -337,  -337,  -337,   510,  -337,  -337
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    94,   456,   457,    95,   286,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   131,   160,   133,   373,   228,   110,   229,   135,    58,
      59,    34,    35,    36,    37,   143,   144,   112,   265,   266,
      38,    75,    76,    39,    40,    41,    42,   202,    61,    62,
     124,   325,   252,   253,   254,   458,   326,   196,   230,   231,
     232,   233,   234,    43,   235,   236,   237,   238,   239,   240,
     241,   499,   519,   524,   242,   243,    44,    45,    46,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     113,   113,   141,   136,   111,   111,   251,   122,   146,    60,
     109,   161,   109,    32,    33,   123,   332,   113,   116,   441,
     195,   111,   272,   262,   344,   170,    50,    47,   336,   114,
     115,   279,   120,    47,   435,   113,   119,   188,    54,   111,
     132,   119,   259,    54,    74,   178,   179,   400,    64,    65,
     125,   151,   151,   151,    68,    69,    70,    32,    33,   145,
      74,   113,    51,   113,   162,   111,   201,   111,    48,   151,
     194,    66,   209,   134,   204,   206,   137,   273,   161,   280,
     161,    52,   205,   146,   146,   119,   119,    54,    54,    53,
     122,    54,   113,   113,   288,   331,   111,   111,    74,   290,
     291,   292,   113,   191,   113,   197,   111,   113,   111,   132,
     227,   111,   374,  -221,   193,   323,  -221,    56,    73,   189,
     258,   267,   264,   482,   483,   126,   271,    57,   180,   181,
     127,   274,    57,   275,   145,   145,   276,   119,   278,    54,
     262,   272,   395,   122,   426,   136,   428,   287,   350,    49,
     194,   246,    67,   250,   247,   441,   281,   383,   377,   282,
     263,    56,    56,   142,    55,    56,   264,   119,   432,    54,
     148,   353,   109,   330,   392,   357,    57,    57,   338,   393,
      57,   139,   132,   140,   109,   153,   155,   156,   132,   149,
     351,   151,   151,   150,     9,    10,    11,   192,   332,   193,
     419,   146,   164,   165,   166,   122,   250,   157,   376,   204,
     113,   404,   132,    56,   111,   158,    78,   192,    79,   193,
      80,   224,    81,    82,   109,   358,   375,   121,   226,   412,
     391,   333,    57,   334,   477,   382,   424,   437,   244,   389,
     174,   175,   282,   374,  -227,   193,   354,  -227,    57,   268,
     355,   282,   145,   269,   356,   207,   491,    78,    -3,    79,
     492,    80,   402,    81,    82,   163,   429,   430,   431,   117,
     184,   167,  -195,   168,   118,   380,  -195,   122,   381,   405,
     169,   204,   406,    83,   122,    84,   500,   501,   176,   177,
      85,   302,   304,   306,   308,   186,   478,   403,   440,   282,
      86,    87,    88,    89,    90,    91,   513,   411,   182,   183,
     515,   417,   517,   187,   423,   185,   141,   171,   172,   190,
     173,   198,   470,   521,    83,   522,    84,   282,   396,   199,
     525,    85,   376,   204,   479,   132,   480,   282,   208,   282,
     200,    86,    87,    88,    89,    90,    91,   250,   203,   488,
     120,   113,   489,   442,   109,   111,   454,   270,   434,   283,
     453,   514,   204,   448,   282,   284,   449,   289,   463,   267,
     122,   335,   516,   518,   204,   282,   282,   407,   282,   282,
     408,   294,   296,   132,   484,   337,   461,   339,   250,   340,
     298,   300,   465,   250,   341,   466,   342,   310,   312,   345,
     469,   346,   347,   348,   475,   352,  -252,   502,   504,   506,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     204,   132,   378,   379,   401,   384,   385,   397,   398,   394,
     399,   413,   409,   410,   440,   425,   414,   433,   446,   113,
     427,   436,   523,   111,   403,   487,   476,   438,   447,   450,
     496,   451,   210,   497,   211,    -3,    79,   464,    80,   467,
      81,    82,   468,   471,   481,   472,   485,   507,   486,   493,
     509,   132,   490,   494,   372,   495,   498,   511,   508,   512,
     520,     2,   260,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   314,   212,   213,
     214,   318,   215,   216,   217,   218,   219,   220,   221,   222,
      27,    83,    28,    84,    29,    30,    31,   223,    85,   322,
     224,   147,   452,   316,   445,   130,   225,   226,    86,    87,
      88,    89,    90,    91,   210,   361,   211,    -3,    79,   459,
      80,   359,    81,    82,    72,     0,     0,     0,     0,   320,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     212,   213,   214,     0,   215,   216,   217,   218,   219,   220,
     221,   222,    27,    83,    28,    84,    29,    30,    31,   223,
      85,     0,     0,     0,     0,     0,     0,   245,   360,     0,
      86,    87,    88,    89,    90,    91,   210,     0,   211,    -3,
      79,     0,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   212,   213,   214,     0,   215,   216,   217,   218,
     219,   220,   221,   222,    27,    83,    28,    84,    29,    30,
      31,   223,    85,     0,     0,     0,     0,     0,     0,   245,
     225,     0,    86,    87,    88,    89,    90,    91,   128,     0,
      78,    -3,    79,     0,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    83,    28,    84,
      29,    30,    31,  -132,    85,     0,     0,     0,  -132,     0,
     129,   130,     0,     0,    86,    87,    88,    89,    90,    91,
     210,     0,    78,    -3,    79,     0,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,    77,     0,
      78,    -3,    79,    63,    80,  -116,    81,    82,    27,    83,
      28,    84,    29,    30,    31,   223,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    63,     0,  -118,    83,     0,    84,
       0,    27,     0,    28,    85,    29,     0,    31,  -116,  -116,
    -116,  -116,     0,  -116,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     2,  -116,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     277,     0,    78,    -3,    79,    63,    80,  -120,    81,    82,
       0,     0,    27,     0,    28,     0,    29,     0,    31,  -118,
    -118,  -118,  -118,     0,  -118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,  -118,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,    63,     0,  -122,    83,
       0,    84,     0,    27,     0,    28,    85,    29,     0,    31,
    -120,  -120,  -120,  -120,     0,  -120,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     2,  -120,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    63,     0,  -124,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,  -122,  -122,  -122,  -122,     0,  -122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,  -122,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    77,     0,    78,    -3,    79,     0,    80,     0,
      81,    82,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,  -124,  -124,  -124,  -124,     0,  -124,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,  -124,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   159,     0,    78,
      -3,    79,     0,    80,     0,    81,    82,     0,     0,     0,
       0,    83,    28,    84,     0,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     2,     0,    86,    87,
      88,    89,    90,    91,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,   293,     0,    78,    -3,    79,
     443,    80,    54,    81,    82,     0,    83,    28,    84,     0,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    63,     0,     0,    83,     0,    84,     0,    27,     0,
      28,    85,    29,     0,    31,     0,   374,   324,   193,     0,
       0,    86,    87,    88,    89,    90,    91,     0,     0,     0,
       2,    57,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   343,     0,   211,    -3,
      79,     0,    80,     0,    81,    82,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,   192,   324,   193,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,    57,    78,    -3,    79,     0,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,   215,   216,   217,   218,
     219,   220,   221,   222,   255,    83,     0,    84,     9,    10,
      11,   223,    85,     0,     0,     0,     0,     0,     0,   245,
       0,     0,    86,    87,    88,    89,    90,    91,     0,     0,
      77,     0,    78,    -3,    79,     0,    80,     0,    81,    82,
      83,   121,    84,     0,     0,     0,     0,    85,     0,     0,
     256,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,   257,   327,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,    77,     0,    78,    -3,    79,     0,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
     121,    84,     0,     0,     0,     0,    85,   386,     0,   328,
       0,     9,    10,    11,     0,     0,    86,    87,    88,    89,
      90,   329,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,     0,    78,    -3,    79,     0,    80,
       0,    81,    82,    83,   121,    84,     0,     0,     0,     0,
      85,     0,     0,   387,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,   388,   415,     0,     0,     0,
       9,    10,    11,     0,     0,     0,     0,    77,     0,    78,
      -3,    79,     0,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,   121,    84,     0,     0,     0,     0,    85,
     420,     0,   416,     0,     9,    10,    11,     0,     0,    86,
      87,    88,    89,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,    78,    -3,
      79,     0,    80,     0,    81,    82,    83,   121,    84,     0,
       0,     0,     0,    85,     0,     0,   421,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,   422,   473,
       0,     0,     0,     9,    10,    11,    77,     0,    78,    -3,
      79,     0,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,   121,    84,     0,     0,
       0,     0,    85,     0,     0,   474,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,     0,     0,
       0,    77,     0,    78,    -3,    79,     0,    80,     0,    81,
      82,     0,     0,     0,     0,    83,     0,    84,     0,     0,
       0,  -132,    85,     0,     0,     0,  -132,     0,   129,   208,
       0,     0,    86,    87,    88,    89,    90,    91,     9,    10,
      11,    77,     0,    78,    -3,    79,     0,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,   121,    84,     0,     0,     0,    77,    85,    78,    -3,
      79,     0,    80,     0,    81,    82,     0,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,    77,
       0,    78,    -3,    79,     0,    80,     0,    81,    82,     0,
      83,     0,    84,     0,     0,     0,     0,    85,     0,   224,
       0,     0,     0,     0,   208,   439,   226,    86,    87,    88,
      89,    90,    91,    77,     0,    78,    -3,    79,     0,    80,
       0,    81,    82,     0,     0,    83,     0,    84,     0,     0,
       0,     0,    85,     0,   224,     0,     0,     0,     0,   208,
     510,   226,    86,    87,    88,    89,    90,    91,    83,     0,
      84,     0,     0,     0,     0,    85,     0,   224,     0,     0,
       0,     0,   208,     0,   226,    86,    87,    88,    89,    90,
      91,    77,     0,    78,    -3,    79,     0,    80,     0,    81,
      82,     0,    83,     0,    84,     0,     0,     0,     0,    85,
     285,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    77,     0,    78,    -3,    79,
       0,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,     0,
      78,    -3,    79,     0,    80,     0,    81,    82,     0,     0,
      83,     0,    84,     0,     0,     0,   349,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    77,     0,    78,    -3,    79,     0,    80,
       0,    81,    82,     0,    83,     0,    84,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,   208,     0,
       0,    86,    87,    88,    89,    90,    91,    83,     0,    84,
       0,     0,     0,   223,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      77,     0,    78,    -3,    79,     0,    80,     0,    81,    82,
       0,     0,    83,     0,    84,     0,     0,     0,     0,    85,
     503,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,   295,     0,    78,    -3,    79,
       0,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   297,     0,
      78,    -3,    79,     0,    80,     0,    81,    82,     0,    83,
       0,    84,     0,     0,     0,     0,    85,   505,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,   299,     0,    78,    -3,    79,     0,    80,     0,
      81,    82,     0,     0,    83,     0,    84,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    83,     0,    84,
       0,     0,     0,   301,    85,    78,    -3,    79,     0,    80,
       0,    81,    82,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,   303,     0,    78,    -3,
      79,    83,    80,    84,    81,    82,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,   305,     0,    78,    -3,    79,     0,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    84,     0,     0,     0,   307,    85,
      78,    -3,    79,     0,    80,     0,    81,    82,     0,    86,
      87,    88,    89,    90,    91,    83,     0,    84,     0,     0,
       0,   309,    85,    78,    -3,    79,     0,    80,     0,    81,
      82,     0,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,    83,     0,    84,     0,     0,     0,   311,
      85,    78,    -3,    79,     0,    80,     0,    81,    82,     0,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,   313,    85,    78,    -3,    79,     0,    80,
       0,    81,    82,     0,    86,    87,    88,    89,    90,    91,
      83,     0,    84,     0,     0,     0,   315,    85,    78,    -3,
      79,     0,    80,     0,    81,    82,     0,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,    83,     0,
      84,     0,     0,     0,   317,    85,    78,    -3,    79,     0,
      80,     0,    81,    82,     0,    86,    87,    88,    89,    90,
      91,     0,    83,     0,    84,     0,     0,     0,   319,    85,
      78,    -3,    79,     0,    80,     0,    81,    82,     0,    86,
      87,    88,    89,    90,    91,    83,     0,    84,     0,     0,
       0,   321,    85,    78,    -3,    79,     0,    80,     0,    81,
      82,     0,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,    83,     0,    84,     0,     0,     0,   460,
      85,    78,    -3,    79,     0,    80,     0,    81,    82,     0,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,   462,    85,    78,    -3,    79,     0,    80,
       0,    81,    82,     0,    86,    87,    88,    89,    90,    91,
      83,     0,    84,     0,     0,     0,     0,    85,    78,     0,
      79,     0,    80,     0,    81,    82,     0,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,    83,     0,
      84,     0,    78,     0,    79,    85,    80,     0,    81,    82,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,     0,    83,     0,    84,     0,    78,     0,    79,    85,
      80,     0,    81,    82,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    83,     0,    84,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,     0,    83,
       0,    84,     0,     0,     0,     0,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     1,    83,     0,    84,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    63,     0,   248,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,     0,   249,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    71,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,     0,   418,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   444,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    27,     0,    28,     0,
      29,     0,    31,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
     261,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,   390,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,    28,     0,     0,    30,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   455,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,    28,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38
};

static const yytype_int16 yycheck[] =
{
      50,    51,    62,    60,    50,    51,   139,    57,    67,    33,
      50,    85,    52,     0,     0,    57,   194,    67,    52,   355,
     112,    67,   149,   143,   217,    97,    77,    76,    76,    50,
      51,    78,    56,    76,   345,    85,     1,    18,     3,    85,
      60,     1,   140,     3,     3,    13,    14,    78,    34,    35,
       1,   100,   100,   100,    40,    41,    42,    44,    44,    67,
       3,   111,    77,   113,    85,   111,   118,   113,     3,   100,
     112,     3,   129,    60,   124,   127,    60,   151,   152,     1,
     154,    77,   124,   142,   143,     1,     1,     3,     3,     1,
     140,     3,   142,   143,   168,   193,   142,   143,     3,   171,
     172,   173,   152,   111,   154,   113,   152,   157,   154,   129,
     130,   157,    77,    78,    79,   189,    81,    77,    84,   100,
     140,   145,    82,   434,   435,    76,    85,    92,    96,    97,
      81,   152,    92,   154,   142,   143,   157,     1,   158,     3,
     260,   268,    85,   193,   337,   202,   339,   167,   222,    84,
     192,   138,    84,   139,   138,   491,    78,   255,   250,    81,
      76,    77,    77,    84,    76,    77,    82,     1,    76,     3,
      83,     1,   212,   193,    76,   232,    92,    92,   212,    81,
      92,    77,   202,    79,   224,    80,    81,    82,   208,    81,
     224,   100,   100,    85,    38,    39,    40,    77,   376,    79,
     333,   260,     8,     9,    10,   255,   192,    77,   250,   259,
     260,   283,   232,    77,   260,    77,     3,    77,     5,    79,
       7,    79,     9,    10,   264,    83,   250,    71,    86,   327,
     264,    77,    92,    79,   427,   255,   334,    76,   133,   259,
      89,    90,    81,    77,    78,    79,    76,    81,    92,    81,
      81,    81,   260,    85,    85,     1,    81,     3,     4,     5,
      85,     7,   282,     9,    10,     4,   340,   341,   342,    76,
      87,    77,    79,    79,    81,    78,    83,   327,    81,    78,
      86,   331,    81,    70,   334,    72,   479,   480,    11,    12,
      77,   178,   179,   180,   181,    99,    78,    84,   355,    81,
      87,    88,    89,    90,    91,    92,   499,   327,    15,    16,
     503,   331,   505,    17,   334,    98,   376,    92,    93,    78,
      95,    78,   420,   516,    70,   518,    72,    81,    82,    78,
     523,    77,   374,   383,    78,   355,    78,    81,    84,    81,
      81,    87,    88,    89,    90,    91,    92,   333,    78,    78,
     374,   401,    81,   373,   394,   401,   396,     4,   345,    78,
     394,    78,   412,   383,    81,     3,   386,     3,   408,   393,
     420,     5,    78,    78,   424,    81,    81,    80,    81,    81,
      82,   174,   175,   403,   441,    82,   406,    82,   374,    77,
     176,   177,   412,   379,    77,   415,    77,   182,   183,    77,
     420,     3,    76,    76,   424,     3,    85,   481,   482,   483,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     470,   441,    78,    81,    81,    80,    80,    78,    78,    82,
      78,    80,    78,    78,   491,    78,    80,    62,     3,   489,
      82,    76,    60,   489,    84,    82,    76,    80,    80,    80,
     470,    80,     1,   473,     3,     4,     5,    80,     7,    80,
       9,    10,    78,    80,    77,    80,    80,   487,    80,    80,
     490,   491,    82,    80,    83,    80,    80,    80,   489,    80,
      76,    30,   142,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   184,    57,    58,
      59,   186,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   188,
      79,    73,   393,   185,   379,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     1,   238,     3,     4,     5,   403,
       7,   233,     9,    10,    44,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,
      87,    88,    89,    90,    91,    92,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    -1,    87,    88,    89,    90,    91,    92,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    81,    -1,
      83,    84,    -1,    -1,    87,    88,    89,    90,    91,    92,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     1,     7,     3,     9,    10,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,    70,    -1,    72,
      -1,    69,    -1,    71,    77,    73,    -1,    75,    76,    77,
      78,    79,    -1,    81,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    30,    92,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
       1,    -1,     3,     4,     5,     1,     7,     3,     9,    10,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    92,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    70,
      -1,    72,    -1,    69,    -1,    71,    77,    73,    -1,    75,
      76,    77,    78,    79,    -1,    81,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    30,    92,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    92,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    92,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    87,    88,
      89,    90,    91,    92,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       1,     7,     3,     9,    10,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    70,    -1,    72,    -1,    69,    -1,
      71,    77,    73,    -1,    75,    -1,    77,    78,    79,    -1,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      30,    92,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    92,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    34,    70,    -1,    72,    38,    39,
      40,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    34,    -1,    80,
      -1,    38,    39,    40,    -1,    -1,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    87,    88,
      89,    90,    91,    92,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      34,    -1,    80,    -1,    38,    39,    40,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    34,
      -1,    -1,    -1,    38,    39,    40,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    81,    -1,    83,    84,
      -1,    -1,    87,    88,    89,    90,    91,    92,    38,    39,
      40,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,     1,    77,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    70,    -1,    72,
      -1,    -1,    -1,     1,    77,     3,     4,     5,    -1,     7,
      -1,     9,    10,    -1,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,    70,     7,    72,     9,    10,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,     1,    77,
       3,     4,     5,    -1,     7,    -1,     9,    10,    -1,    87,
      88,    89,    90,    91,    92,    70,    -1,    72,    -1,    -1,
      -1,     1,    77,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,     1,
      77,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      87,    88,    89,    90,    91,    92,    -1,    70,    -1,    72,
      -1,    -1,    -1,     1,    77,     3,     4,     5,    -1,     7,
      -1,     9,    10,    -1,    87,    88,    89,    90,    91,    92,
      70,    -1,    72,    -1,    -1,    -1,     1,    77,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,     1,    77,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,     1,    77,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    87,    88,    89,    90,    91,    92,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    87,    88,    89,
      90,    91,    92,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,     3,     4,     5,    77,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,     1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    69,    -1,    71,    -1,    73,
      -1,    75,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    85,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    71,    -1,    -1,    74,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    71,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    74,   106,   133,   169,   179,   180,   181,    76,
      77,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      75,   134,   137,   138,   139,   140,   146,   149,   150,   151,
     152,     0,   180,     1,     3,     4,     5,     7,     9,    10,
      70,    72,    77,    87,    88,    89,    90,    91,    92,   108,
     109,   112,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   131,     3,    84,    77,
      77,     1,    76,    77,   105,   107,   132,   135,   136,   153,
     154,   155,   134,   134,     3,    84,   134,   134,   134,   100,
      77,   114,    77,   114,   114,    77,    77,     1,   114,   127,
     128,   130,   138,   143,   150,   161,     8,     9,    10,    77,
      79,    86,   116,    92,    93,    95,    89,    90,    11,    12,
      13,    14,    96,    97,    15,    16,    87,    98,    99,    17,
      18,   100,    81,    84,     3,   147,   148,   131,   161,   161,
      76,    81,     1,   153,     3,    92,     1,    76,    81,     1,
      83,    84,   106,   128,   133,   164,   172,   182,    77,    79,
     154,    84,   141,   142,   143,   169,   130,   161,   161,   161,
       1,   128,    78,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    83,   129,     1,    78,    81,   143,    77,
      79,   155,   162,   163,   143,    78,     3,    78,   113,   128,
     130,     3,   116,   116,   116,     1,   117,     1,   117,     1,
     118,     1,   118,     1,   119,     1,   119,     1,   119,     1,
     119,     1,   120,     1,   120,     1,   121,     1,   122,     1,
     123,     1,   124,     1,   125,   130,     5,   147,    83,    81,
      85,    78,    78,    78,   136,   153,    78,    71,   150,   155,
     156,   136,     1,    84,   164,     3,    57,    58,    59,    61,
      62,    63,    64,    65,    66,    67,    68,    76,    79,    85,
      86,   128,   130,   133,   164,   165,   166,   167,   168,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   134,    84,
     133,   172,     3,    78,   106,   157,   158,   159,   160,    34,
      80,    92,   128,   156,   141,    85,   142,    76,    82,   144,
     145,   153,    82,    78,    78,    78,    78,    81,   128,   128,
      78,   157,   162,    34,    80,    92,   128,   156,   163,    77,
      79,    84,   116,    78,    81,    80,    82,    78,    81,    85,
       4,    85,   148,   150,   155,    82,   131,    82,    77,    77,
      77,   170,    77,     3,    76,    76,    76,   130,   131,     3,
       1,    76,    81,    85,   164,    83,   168,    85,   174,   134,
      78,    81,    78,    81,   128,   156,    80,    80,    34,    80,
      92,   128,    85,   131,    76,    81,    82,   127,    58,   110,
     111,   161,    78,    78,   128,   156,    80,    80,    34,    80,
     128,    78,   157,    34,    80,    92,   128,   156,   165,     1,
     128,     1,   127,    76,    85,   170,    82,   170,   130,   130,
     130,    62,   133,   175,    76,    76,    80,    85,   164,   166,
      77,   153,   155,   162,    56,   159,     3,    80,   128,   128,
      80,    80,   145,   131,    82,    78,    81,    82,    80,   128,
     128,    80,    78,   128,   156,    80,    80,    34,    80,   128,
      81,    85,   170,    78,    78,    78,    77,   175,   175,   164,
      80,    80,   128,   111,   128,    80,    80,    80,   128,   128,
      80,    85,   170,   170,   170,   130,    78,   130,    78,   130,
      80,    80,    60,    78,   170,    78,   170,    78,   170,    76,
     170,   170
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   107,   108,   108,   108,   108,   108,
     108,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   116,   116,   117,   117,   117,   117,
     118,   118,   118,   118,   118,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   121,   121,   121,   122,   122,   122,   123,   123,   123,
     124,   124,   124,   125,   125,   125,   126,   126,   126,   127,
     127,   127,   127,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   132,
     132,   132,   132,   132,   133,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     135,   136,   136,   136,   136,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   143,   143,   143,
     143,   144,   144,   145,   145,   145,   146,   146,   146,   146,
     146,   147,   147,   148,   148,   149,   150,   150,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   155,   155,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   159,   160,   160,   161,   161,   162,   162,
     162,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   164,   164,   164,   165,   165,   165,   165,   166,
     167,   167,   168,   168,   169,   170,   170,   170,   170,   170,
     170,   171,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   175,   176,   176,   176,   177,   177,   177,   177,
     177,   177,   178,   178,   178,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     1,     1,     1,     3,     3,
       3,     1,     6,     4,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       3,     1,     2,     2,     2,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       5,     5,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     2,     2,     2,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     3,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       1,     1,     1,     2,     2,     3,     1,     2,     1,     2,
       1,     1,     3,     2,     3,     1,     4,     5,     5,     6,
       2,     1,     3,     1,     3,     4,     1,     1,     1,     1,
       1,     1,     4,     4,     2,     1,     2,     1,     3,     3,
       4,     6,     5,     5,     6,     5,     4,     4,     4,     3,
       4,     4,     3,     3,     2,     1,     2,     3,     1,     1,
       3,     3,     3,     2,     1,     3,     2,     1,     2,     1,
       1,     3,     2,     3,     5,     4,     5,     4,     3,     3,
       3,     4,     6,     5,     5,     6,     4,     4,     2,     3,
       3,     4,     3,     4,     1,     2,     1,     4,     3,     2,
       1,     2,     3,     2,     7,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     1,     2,     1,     1,
       1,     2,     2,     7,     5,     5,     5,     7,     6,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     5,     4,     1,     2
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
  //Reemplazar este codigo en el yyparse

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
#line 40 "parser.y" /* yacc.c:1661  */
    {printf("\t--ID: %s\n", yytext); saveIDAS(yytext);}
#line 2257 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 3:
#line 44 "parser.y" /* yacc.c:1661  */
    {printf("\t--Type: %s\n", yytext); saveTypeAS(yytext);}
#line 2263 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 4:
#line 48 "parser.y" /* yacc.c:1661  */
    {printf("\t--Pointer: %s\n", yytext); /*GetTop, which is a Type, add "*"" to it*/ savePointerAS();}
#line 2269 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 9:
#line 55 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Caracter ')' faltante\n\n", yylineno); yyerrok;}
#line 2275 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 56 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion invalida\n\n", yylineno); yyerrok;}
#line 2281 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 13:
#line 62 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion invalida antes de '%s'\n\n", yylineno, yytext); yyerrok;}
#line 2287 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 30:
#line 91 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion invalida despues de ','\n\n", yylineno); yyerrok; }
#line 2293 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 52:
#line 128 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2299 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 130 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2305 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 58:
#line 137 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2311 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 59:
#line 138 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2317 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 63:
#line 145 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 131 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 149 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2335 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 150 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2341 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 72:
#line 157 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2347 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 158 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2353 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 76:
#line 164 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2359 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 79:
#line 170 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2365 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 82:
#line 176 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2371 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 85:
#line 182 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2377 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 88:
#line 188 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2383 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 91:
#line 194 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de: %s\n\n", yylineno, yytext); yyerrok; }
#line 2389 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 92:
#line 195 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Expresion faltante antes de: '?'\n\n", yylineno, yytext); yyerrok; }
#line 2395 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 110:
#line 229 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2401 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 112:
#line 231 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2407 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 113:
#line 232 "parser.y" /* yacc.c:1661  */
    { yyerrok;}
#line 2413 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 115:
#line 238 "parser.y" /* yacc.c:1661  */
    { yyerrok; }
#line 2419 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 127:
#line 253 "parser.y" /* yacc.c:1661  */
    {printf("Linea: %i. Tipo de variable invalida.\n\n", yylineno); yyclearin; }
#line 2425 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 130:
#line 260 "parser.y" /* yacc.c:1661  */
    { printf("Expresion invalida antes de ','\n\n"); }
#line 2431 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 132:
#line 265 "parser.y" /* yacc.c:1661  */
    { fprintf(stderr, "Linea: %i. Expresion inesperada antes de '%s'.\n\n", yylineno, yytext); yyerrok; }
#line 2437 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 133:
#line 266 "parser.y" /* yacc.c:1661  */
    { yyerror(""); fprintf(stderr, "Linea: %i. Falta signo '='.\n\n", yylineno, yytext); YYERROR; }
#line 2443 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 197:
#line 384 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Nombre de variable invalido: %s.\n\n", yylineno, yytext); }
#line 2449 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 282:
#line 534 "parser.y" /* yacc.c:1661  */
    { printf("Linea: %i. Falta ';'\n\n", yylineno); yyerrok; }
#line 2455 "parser.tab.c" /* yacc.c:1661  */
    break;

  case 282:
#line 516 "parser.y" /* yacc.c:1646  */
    { inicio_if(); }
#line 2472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 516 "parser.y" /* yacc.c:1646  */
    { inicio_else(); }
#line 2478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 516 "parser.y" /* yacc.c:1646  */
    { fin_if(); }
#line 2484 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2488 "parser.tab.c" /* yacc.c:1646  */
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
#line 562 "parser.y" /* yacc.c:1906  */

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
