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
void yyerror(const char *s);


#line 72 "parser.tab.c" /* yacc.c:339  */

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

#line 227 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   3343

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  517

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
       0,    35,    35,    36,    37,    38,    39,    40,    41,    45,
      46,    50,    51,    55,    56,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    73,    74,    75,    79,    80,
      81,    82,    83,    84,    85,    89,    90,    91,    92,    93,
      94,    98,    99,   103,   104,   105,   106,   110,   111,   112,
     113,   114,   118,   119,   120,   121,   122,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   138,   139,   140,   141,
     142,   146,   147,   148,   152,   153,   154,   158,   159,   160,
     164,   165,   166,   170,   171,   172,   176,   177,   178,   179,
     183,   184,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   202,   203,   207,   211,   212,   213,   214,
     215,   216,   217,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   235,   236,   237,   241,   242,   243,
     244,   248,   249,   250,   251,   252,   253,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   276,   277,   278,   282,   283,   287,   288,
     292,   293,   294,   298,   299,   300,   301,   305,   306,   310,
     311,   312,   316,   317,   318,   319,   320,   324,   325,   329,
     330,   334,   338,   339,   340,   341,   345,   346,   350,   351,
     355,   356,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   378,   379,   380,
     381,   385,   386,   391,   392,   396,   397,   401,   402,   403,
     407,   408,   412,   413,   417,   418,   419,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   447,   448,
     449,   453,   454,   455,   456,   460,   464,   465,   469,   470,
     474,   478,   479,   480,   481,   482,   483,   487,   488,   489,
     493,   494,   498,   499,   503,   504,   508,   509,   510,   514,
     515,   516,   520,   521,   522,   523,   524,   525,   529,   530,
     531,   532,   533,   537,   538,   542,   543,   547,   548,   552,
     553
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
  "SEPARATOR", "QOUTE", "$accept", "primary_expression",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
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
  "expression_statement", "selection_statement", "iteration_statement",
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

#define YYPACT_NINF -339

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-339)))

#define YYTABLE_NINF -251

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3012,   -45,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,    26,   -13,    18,  -339,
      50,  -339,  -339,   100,   905,   966,  -339,    54,  -339,  -339,
    1027,  1088,  1149,  -339,  2957,  -339,  -339,  -339,   -47,    32,
    1204,  3272,   900,    -3,  -339,  -339,    67,   156,    24,  -339,
     750,   -49,   161,  -339,  -339,  -339,   -37,  3201,  -339,  -339,
    -339,  -339,  -339,    32,    78,    52,  -339,    89,  -339,  -339,
    -339,  2676,  2699,  2699,   114,   122,  1259,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,   199,  -339,  2723,  -339,   180,
     225,   168,    25,   302,   123,   133,   106,   218,     9,  -339,
     201,  3272,   108,  3272,   205,   209,   171,  -339,    67,  -339,
     223,  -339,  -339,  -339,   156,  -339,  -339,    67,   -42,  1965,
     474,   561,  -339,  -339,  -339,   100,  -339,  -339,  2791,  2846,
    1473,   -49,  3201,  3105,  -339,    53,  -339,   112,   321,    29,
    -339,   900,  1259,  -339,  1259,  -339,  -339,  3272,  1022,   -34,
    -339,    90,   250,   329,  -339,  -339,  2023,   900,   331,  -339,
    2723,  2723,  2723,  1317,  2230,  2264,  2305,  2328,  2356,  2380,
    2403,  2431,  2455,  2478,  2506,  2530,  2553,  2581,   900,  -339,
    -339,  1383,  1532,     0,  -339,   234,  -339,  -339,  -339,   336,
    -339,  1778,  -339,  -339,  -339,  -339,    89,  1931,  -339,   262,
     900,   264,   283,   284,   286,  1438,   291,   366,   295,   296,
    2057,  -339,   900,  -339,   370,   289,    97,  -339,  -339,   145,
    2080,   138,  -339,  -339,  -339,  -339,   566,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,   900,   658,  -339,  -339,  -339,  -339,    47,
     297,   298,  -339,   164,  1833,  -339,   300,   303,  1576,  3153,
    -339,  -339,  -339,   900,   107,  -339,   305,    46,  -339,  -339,
    -339,  -339,   249,   299,   306,   310,    -6,   308,  -339,  -339,
    -339,   900,  2652,  -339,  -339,   172,  -339,   256,  -339,  -339,
    -339,  -339,  -339,   180,  -339,   180,  -339,   225,  -339,   225,
    -339,   168,  -339,   168,  -339,   168,  -339,   168,  -339,    25,
    -339,    25,  -339,   302,  -339,   123,  -339,   133,  -339,   106,
    -339,   218,   257,  -339,   312,   314,  1833,  -339,   313,   315,
    1635,   234,  2901,  1679,   318,  1438,   316,  1438,   900,   900,
     900,   335,   842,   324,  -339,  -339,  -339,   125,   322,  -339,
    -339,  -339,  1873,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    1322,  -339,   243,  -339,  -339,  3067,  -339,   398,   325,  1833,
    -339,  -339,   900,  -339,   326,   330,  -339,  -339,  -339,   157,
     900,  -339,   900,   320,   320,  -339,  -339,  3238,  -339,  1931,
    -339,  -339,  2605,  -339,  2628,  -339,  -339,   332,  1833,  -339,
    -339,   900,  -339,   333,  -339,   337,  1833,  -339,   338,   340,
    1738,   341,  -339,  1438,  -339,   210,   211,   221,   339,  2115,
    2115,  -339,  -339,  -339,  -339,  -339,  2080,  -339,  -339,  -339,
    -339,  -339,   342,   343,  -339,  -339,  -339,  -339,  -339,   344,
     222,  -339,   346,   147,    89,  -339,    89,  -339,  -339,   345,
     349,  -339,  -339,   350,  1833,  -339,  -339,   900,  -339,   351,
    -339,  -339,  1438,  1438,  1438,   900,  2172,  2207,  -339,  -339,
    -339,   900,  -339,  3238,   900,  1908,  -339,  -339,  -339,  -339,
     352,   354,  -339,   361,  -339,  -339,   227,  1438,   229,  1438,
     231,  -339,  -339,  -339,  -339,  -339,  -339,  1438,   348,  -339,
    1438,  -339,  1438,  -339,  -339,  -339,  -339
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   123,   152,   131,   132,   133,   135,   136,   186,   182,
     183,   184,   146,   138,   139,   140,   141,   144,   145,   142,
     143,   137,   147,   148,   156,   157,     0,     0,   185,   187,
       0,   134,   296,     0,     0,     0,   150,     0,   151,   149,
       0,     0,     0,   112,     0,   293,   295,   111,   176,     0,
       0,     0,     0,   107,   192,   106,     0,   210,     0,   124,
       0,   191,     0,   123,   113,   115,   155,     0,   117,   119,
     121,     1,   294,     0,   179,     0,   177,     0,     2,     3,
       4,     0,     0,     0,     0,     0,     0,    35,    40,    38,
      37,    39,    36,    15,     8,    28,    41,     0,    43,    47,
      52,    57,    66,    71,    74,    77,    80,    83,    86,   105,
       0,   164,   223,   166,     0,     0,     0,   110,     0,   193,
       0,   185,   211,   209,   208,   109,   108,     0,   123,     0,
       0,    41,    90,   250,   299,     0,   129,   298,     0,     0,
       0,   190,     0,     0,   158,     0,   162,     0,     0,     0,
     172,     0,     0,    32,     0,    29,    30,     0,     0,     0,
     103,     0,     0,     0,    21,    22,     0,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
     163,     0,     0,   225,   222,   226,   165,   188,   181,     0,
     126,     0,   194,   212,   207,   125,   128,     0,   127,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,     0,   270,     0,   103,     0,   274,   252,     0,
       0,     0,   256,   275,   261,   262,     0,   272,   263,   264,
     265,   266,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    92,     0,     0,   300,   297,   220,   205,     0,
       0,   214,   215,     0,     0,   195,    36,     0,     0,     0,
     153,   159,   160,     0,     0,   167,   171,     0,   174,   180,
     173,   178,     0,     0,     0,     0,     0,     0,     7,     6,
       5,     0,     0,    20,    17,     0,    25,     0,    19,    44,
      45,    46,    51,    50,    49,    48,    55,    53,    56,    54,
      64,    62,    65,    63,    60,    58,    61,    59,    69,    67,
      70,    68,    73,    72,    76,    75,    79,    78,    82,    81,
      85,    84,     0,   244,     0,     0,     0,   228,    36,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   289,   290,   291,     0,     0,   259,
     278,   277,     0,   248,   251,   255,   257,   271,   273,    91,
       0,   217,     0,   218,   204,     0,   206,     0,     0,     0,
     196,   203,     0,   202,    36,     0,   154,   169,   161,     0,
       0,   175,     0,    33,     0,    34,    10,     0,   104,     0,
      42,    18,     0,    16,     0,   245,   227,     0,     0,   229,
     235,     0,   234,     0,   246,     0,     0,   236,    36,     0,
       0,     0,   267,     0,   269,     0,     0,     0,     0,     0,
       0,   288,   292,   258,   249,   254,     0,   123,   213,   216,
     221,   198,     0,     0,   199,   201,   168,   170,    89,     0,
       0,    11,     0,     0,    27,    26,    88,    87,   231,     0,
       0,   233,   247,     0,     0,   237,   243,     0,   242,     0,
     260,   268,     0,     0,     0,     0,     0,     0,   253,   197,
     200,     0,     9,     0,     0,     0,    23,   230,   232,   239,
       0,     0,   240,   280,   281,   282,     0,     0,     0,     0,
       0,    14,    12,    13,    24,   238,   241,     0,     0,   286,
       0,   284,     0,   279,   283,   287,   285
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,  -339,  -339,   -48,  -339,  -339,    84,  -339,   -15,
     169,   173,   118,   174,   253,   254,   255,   258,   252,  -339,
     -40,   -17,  -339,   -68,   -36,    15,    11,  -339,   -85,  -339,
     -46,  -339,  -339,   301,  -123,   -26,  -339,    56,  -339,   368,
    -126,  -339,   -50,  -339,  -339,   -30,   -56,   -43,  -132,  -130,
    -339,    71,  -339,    68,   -90,  -174,   -58,    43,  -338,  -339,
     217,   -54,   -12,  -339,     2,  -339,   213,  -189,  -339,  -339,
    -339,  -339,   407,  -339,  -339
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,   450,   451,    95,   295,   131,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     132,   160,   253,   226,   110,   227,   135,    58,    59,    34,
      35,    36,    37,   143,   144,   112,   274,   275,    38,    75,
      76,    39,    40,    41,    42,   201,    61,    62,   124,   334,
     261,   262,   263,   452,   335,   195,   228,   229,   230,   231,
     232,    43,   233,   234,   235,   236,   237,   238,   239,   240,
     241,    44,    45,    46,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     113,   113,   136,    60,   111,   111,   141,   122,   268,   260,
     109,    33,   109,   146,   123,    32,   116,   113,   161,   341,
     271,   111,   194,   281,   436,   125,   120,   187,   139,    48,
     140,    47,    74,   200,    47,    74,   113,    73,   177,   178,
     111,   145,   205,   133,   288,    64,    65,   142,   119,    74,
      54,    68,    69,    70,   119,    33,    54,    66,   151,    32,
     340,   113,   137,   113,    50,   111,   151,   111,   119,   193,
      54,   208,   396,   117,   203,   134,  -193,   191,   118,   192,
    -193,   204,   169,   282,   161,   190,   161,   196,   146,   146,
     122,   289,   113,   113,   151,    51,   111,   111,   360,   297,
     126,    53,   113,    54,   113,   127,   111,   113,   111,   188,
      49,   111,   133,   225,   280,   276,   145,   145,   114,   115,
     332,   179,   180,   267,   370,  -219,   192,    52,  -219,   272,
      56,   391,   379,   149,    96,   273,    96,   150,    67,    57,
     256,   287,   122,   136,    56,    57,   271,   436,   193,   296,
     259,   281,   357,   255,   162,   299,   300,   301,   119,    57,
      54,   148,   119,   430,    54,   153,   155,   156,   290,   373,
     109,   291,   364,   361,   346,   339,    55,    56,   291,   175,
     176,    96,   109,   388,   133,   191,   358,   192,   389,   151,
     133,   157,    57,   277,     9,    10,    11,   278,   341,   158,
      57,   432,   259,   351,   408,   185,   291,   163,   164,   165,
     183,   420,   415,   133,   122,   146,   372,   222,   203,   113,
     283,   365,   284,   111,   224,   285,   362,   121,   485,   371,
     363,   184,   486,   109,    56,   186,   369,   387,    56,   273,
     476,   477,   376,   145,   119,   377,    54,   378,    57,    57,
     401,   385,   199,   402,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,   170,   171,   398,   172,   166,   400,   167,   189,
     425,   426,   427,   197,   464,   168,   122,   198,   472,   473,
     203,   291,   291,   122,    96,   311,   313,   315,   317,   474,
     482,   202,   291,   483,   435,   508,    96,   510,   291,   512,
     291,   342,   291,   343,   173,   174,   141,   181,   182,   407,
     370,  -225,   192,   413,  -225,   279,   419,   372,   292,   203,
     291,   392,   293,   422,   298,   424,   403,   291,   291,   404,
     120,   344,   303,   305,   345,   133,   347,   113,   307,   309,
     109,   111,   448,   259,   447,   319,   321,    96,   203,   276,
     348,   349,   442,   350,   457,   443,   122,   429,   352,   353,
     203,   354,   355,   359,  -250,   374,    96,   393,   478,   375,
     380,   259,   133,   381,   394,   455,   259,   390,   395,   397,
     405,   459,   406,   409,   460,   410,   421,   428,   423,   463,
     431,   440,   433,   469,   399,   441,   444,   496,   498,   500,
     445,   471,   458,   461,   203,   462,   475,   470,   465,   133,
     466,   507,   479,   480,   514,   487,   481,   435,   484,   488,
     489,   492,   505,   113,   506,   502,   323,   111,   325,   331,
     327,   147,   453,   269,   329,   446,   439,   490,   366,   368,
     491,    72,     0,     0,     0,     0,     0,     0,     0,     0,
     493,   494,   495,     0,   501,     0,     0,   503,   133,     0,
       0,     0,     0,     0,    96,   128,    96,   209,    79,    80,
       0,    81,     0,    82,    83,   509,     0,   511,    96,     0,
       0,     0,     0,     0,     0,   513,     0,     0,   515,     0,
     516,     0,     0,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,   210,   211,   212,     0,   213,   214,   215,   216,   217,
     218,   219,   220,    27,    84,    28,    85,    29,    30,    31,
     221,    86,     0,   222,     0,     0,     0,     0,   130,   223,
     224,    87,    88,    89,    90,    91,    92,   128,     0,   209,
      79,    80,     0,    81,     0,    82,    83,     0,     0,     0,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   210,   211,   212,     0,   213,   214,   215,
     216,   217,   218,   219,   220,    27,    84,    28,    85,    29,
      30,    31,   221,    86,   252,     0,     0,     0,     0,     0,
     254,   367,     0,    87,    88,    89,    90,    91,    92,   128,
       0,   209,    79,    80,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,   210,   211,   212,     0,   213,
     214,   215,   216,   217,   218,   219,   220,    27,    84,    28,
      85,    29,    30,    31,   221,    86,     0,     0,     0,     0,
       0,     0,   254,   223,     0,    87,    88,    89,    90,    91,
      92,   128,     0,    78,    79,    80,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      84,    28,    85,    29,    30,    31,  -130,    86,     0,     0,
       0,  -130,     0,   129,   130,     0,     0,    87,    88,    89,
      90,    91,    92,   128,     0,    78,    79,    80,     0,    81,
       0,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,    77,     0,    78,    79,    80,    63,    81,  -114,    82,
      83,    27,    84,    28,    85,    29,    30,    31,   221,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    63,     0,  -116,
      84,     0,    85,     0,    27,     0,    28,    86,    29,     0,
      31,  -114,  -114,  -114,  -114,     0,  -114,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     2,  -114,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   286,     0,    78,    79,    80,    63,    81,
    -118,    82,    83,     0,     0,    27,     0,    28,     0,    29,
       0,    31,  -116,  -116,  -116,  -116,     0,  -116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,  -116,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    63,
       0,  -120,    84,     0,    85,     0,    27,     0,    28,    86,
      29,     0,    31,  -118,  -118,  -118,  -118,     0,  -118,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     2,  -118,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
      63,     0,  -122,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,  -120,  -120,  -120,  -120,     0,  -120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
    -120,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    77,     0,    78,    79,    80,
       0,    81,     0,    82,    83,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,  -122,  -122,  -122,  -122,     0,
    -122,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,  -122,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     159,     0,    78,    79,    80,     0,    81,     0,    82,    83,
       0,     0,     0,     0,    84,    28,    85,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     2,
       0,    87,    88,    89,    90,    91,    92,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,   302,     0,
      78,    79,    80,   437,    81,    54,    82,    83,     0,    84,
      28,    85,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,    92,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,    63,     0,     0,    84,     0,    85,
       0,    27,     0,    28,    86,    29,     0,    31,     0,   370,
     333,   192,     0,     0,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     2,    57,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    77,
       0,   209,    79,    80,     0,    81,     0,    82,    83,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
     191,   333,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    57,    78,    79,    80,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   210,   211,   212,     0,   213,
     214,   215,   216,   217,   218,   219,   220,   264,    84,     0,
      85,     9,    10,    11,   221,    86,     0,     0,     0,     0,
       0,     0,   254,     0,     0,    87,    88,    89,    90,    91,
      92,     0,     0,    77,     0,    78,    79,    80,     0,    81,
       0,    82,    83,    84,   121,    85,     0,     0,     0,     0,
      86,     0,     0,   265,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,   266,   336,     0,     0,     0,
       9,    10,    11,     0,     0,     0,     0,    77,     0,    78,
      79,    80,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,   121,    85,     0,     0,     0,     0,    86,
     382,     0,   337,     0,     9,    10,    11,     0,     0,    87,
      88,    89,    90,    91,   338,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,    78,    79,
      80,     0,    81,     0,    82,    83,    84,   121,    85,     0,
       0,     0,     0,    86,     0,     0,   383,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,   384,   411,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
      77,     0,    78,    79,    80,     0,    81,     0,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,   121,    85,     0,     0,
       0,     0,    86,   416,     0,   412,     0,     9,    10,    11,
       0,     0,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,    78,    79,    80,     0,    81,     0,    82,    83,    84,
     121,    85,     0,     0,     0,     0,    86,     0,     0,   417,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,   418,   467,     0,     0,     0,     9,    10,    11,    77,
       0,    78,    79,    80,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,   121,
      85,     0,     0,     0,     0,    86,     0,     0,   468,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,     0,     0,     0,    77,     0,    78,    79,    80,     0,
      81,     0,    82,    83,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,  -130,    86,     0,     0,     0,  -130,
       0,   129,   207,     0,     0,    87,    88,    89,    90,    91,
      92,     9,    10,    11,    77,     0,    78,    79,    80,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,   121,    85,     0,     0,     0,    77,
      86,    78,    79,    80,     0,    81,     0,    82,    83,     0,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
       0,     0,    77,     0,    78,    79,    80,     0,    81,     0,
      82,    83,     0,    84,     0,    85,     0,     0,     0,     0,
      86,     0,   222,     0,     0,     0,     0,   207,   434,   224,
      87,    88,    89,    90,    91,    92,   206,     0,    78,    79,
      80,     0,    81,     0,    82,    83,     0,     0,    84,     0,
      85,     0,     0,     0,     0,    86,     0,   222,     0,     0,
       0,     0,   207,   504,   224,    87,    88,    89,    90,    91,
      92,    84,     0,    85,     0,     0,     0,     0,    86,     0,
     222,     0,     0,     0,     0,   207,     0,   224,    87,    88,
      89,    90,    91,    92,    77,     0,    78,    79,    80,     0,
      81,     0,    82,    83,     0,    84,     0,    85,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,   207,
       0,     0,    87,    88,    89,    90,    91,    92,    77,     0,
      78,    79,    80,     0,    81,     0,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,    78,    79,    80,     0,    81,     0,    82,
      83,     0,     0,    84,     0,    85,     0,     0,     0,     0,
      86,   294,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    77,     0,    78,    79,
      80,     0,    81,     0,    82,    83,     0,    84,     0,    85,
       0,     0,     0,   356,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      84,     0,    85,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,   207,     0,     0,    87,    88,    89,
      90,    91,    92,    77,     0,    78,    79,    80,     0,    81,
       0,    82,    83,     0,     0,    84,     0,    85,     0,     0,
       0,   221,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    77,     0,
      78,    79,    80,     0,    81,     0,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   304,     0,    78,    79,    80,     0,    81,     0,    82,
      83,     0,    84,     0,    85,     0,     0,     0,     0,    86,
     497,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,   306,     0,    78,    79,    80,
       0,    81,     0,    82,    83,     0,     0,    84,     0,    85,
       0,     0,     0,     0,    86,   499,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,    92,
      84,     0,    85,     0,     0,     0,   308,    86,    78,    79,
      80,     0,    81,     0,    82,    83,     0,    87,    88,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,   310,
       0,    78,    79,    80,    84,    81,    85,    82,    83,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,    92,   312,     0,    78,
      79,    80,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,    85,     0,     0,
       0,   314,    86,    78,    79,    80,     0,    81,     0,    82,
      83,     0,    87,    88,    89,    90,    91,    92,    84,     0,
      85,     0,     0,     0,   316,    86,    78,    79,    80,     0,
      81,     0,    82,    83,     0,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,    84,     0,    85,     0,
       0,     0,   318,    86,    78,    79,    80,     0,    81,     0,
      82,    83,     0,    87,    88,    89,    90,    91,    92,     0,
      84,     0,    85,     0,     0,     0,   320,    86,    78,    79,
      80,     0,    81,     0,    82,    83,     0,    87,    88,    89,
      90,    91,    92,    84,     0,    85,     0,     0,     0,   322,
      86,    78,    79,    80,     0,    81,     0,    82,    83,     0,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
       0,    84,     0,    85,     0,     0,     0,   324,    86,    78,
      79,    80,     0,    81,     0,    82,    83,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,     0,
       0,   326,    86,    78,    79,    80,     0,    81,     0,    82,
      83,     0,    87,    88,    89,    90,    91,    92,    84,     0,
      85,     0,     0,     0,   328,    86,    78,    79,    80,     0,
      81,     0,    82,    83,     0,    87,    88,    89,    90,    91,
      92,     0,     0,     0,     0,     0,    84,     0,    85,     0,
       0,     0,   330,    86,    78,    79,    80,     0,    81,     0,
      82,    83,     0,    87,    88,    89,    90,    91,    92,     0,
      84,     0,    85,     0,     0,     0,   454,    86,    78,    79,
      80,     0,    81,     0,    82,    83,     0,    87,    88,    89,
      90,    91,    92,    84,     0,    85,     0,     0,     0,   456,
      86,    78,    79,    80,     0,    81,     0,    82,    83,     0,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
       0,    84,     0,    85,     0,    78,    79,    80,    86,    81,
       0,    82,    83,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,     0,    84,     0,    85,     0,    78,
      79,    80,    86,    81,     0,    82,    83,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,    84,     0,
      85,     0,    78,    79,    80,    86,    81,     0,    82,    83,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,     0,    84,     0,    85,     0,    78,    79,    80,    86,
      81,     0,    82,    83,     0,     0,   399,     0,     0,    87,
      88,    89,    90,    91,    92,     0,    84,     0,    85,     0,
       0,     0,     0,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    84,
       0,    85,     0,     0,     0,     0,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,    92,     1,    84,     0,    85,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    63,     0,   257,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,   254,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,     0,   258,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    71,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,     0,   414,
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
      24,    25,    26,   438,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    27,     0,    28,     0,
      29,     0,    31,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
     270,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,   386,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,    28,     0,     0,    30,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   449,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,    28,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      50,    51,    60,    33,    50,    51,    62,    57,   140,   139,
      50,     0,    52,    67,    57,     0,    52,    67,    86,   193,
     143,    67,   112,   149,   362,     1,    56,    18,    77,     3,
      79,    76,     3,   118,    76,     3,    86,    84,    13,    14,
      86,    67,   127,    60,    78,    34,    35,    84,     1,     3,
       3,    40,    41,    42,     1,    44,     3,     3,   100,    44,
     192,   111,    60,   113,    77,   111,   100,   113,     1,   112,
       3,   129,    78,    76,   124,    60,    79,    77,    81,    79,
      83,   124,    97,   151,   152,   111,   154,   113,   142,   143,
     140,     1,   142,   143,   100,    77,   142,   143,     1,   167,
      76,     1,   152,     3,   154,    81,   152,   157,   154,   100,
      84,   157,   129,   130,    85,   145,   142,   143,    50,    51,
     188,    96,    97,   140,    77,    78,    79,    77,    81,    76,
      77,    85,   264,    81,    50,    82,    52,    85,    84,    92,
     138,   158,   192,   201,    77,    92,   269,   485,   191,   166,
     139,   277,   220,   138,    86,   170,   171,   172,     1,    92,
       3,    83,     1,   352,     3,    81,    82,    83,    78,   259,
     210,    81,   230,    76,   210,   192,    76,    77,    81,    11,
      12,    97,   222,    76,   201,    77,   222,    79,    81,   100,
     207,    77,    92,    81,    38,    39,    40,    85,   372,    77,
      92,    76,   191,   215,   336,    99,    81,     8,     9,    10,
      87,   343,   342,   230,   264,   269,   259,    79,   268,   269,
     152,    83,   154,   269,    86,   157,    81,    71,    81,   259,
      85,    98,    85,   273,    77,    17,   253,   273,    77,    82,
     429,   430,    78,   269,     1,    81,     3,   264,    92,    92,
      78,   268,    81,    81,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    92,    93,   291,    95,    77,   292,    79,    78,
     348,   349,   350,    78,   416,    86,   336,    78,    78,    78,
     340,    81,    81,   343,   210,   177,   178,   179,   180,    78,
      78,    78,    81,    81,   362,    78,   222,    78,    81,    78,
      81,    77,    81,    79,    89,    90,   372,    15,    16,   336,
      77,    78,    79,   340,    81,     4,   343,   370,    78,   379,
      81,    82,     3,   345,     3,   347,    80,    81,    81,    82,
     370,     5,   173,   174,    82,   362,    82,   397,   175,   176,
     390,   397,   392,   342,   390,   181,   182,   273,   408,   389,
      77,    77,   379,    77,   404,   382,   416,   352,    77,     3,
     420,    76,    76,     3,    85,    78,   292,    78,   436,    81,
      80,   370,   399,    80,    78,   402,   375,    82,    78,    81,
      78,   408,    78,    80,   411,    80,    78,    62,    82,   416,
      76,     3,    80,   420,    84,    80,    80,   475,   476,   477,
      80,   423,    80,    80,   464,    78,    77,    76,    80,   436,
      80,    60,    80,    80,    76,    80,    82,   485,    82,    80,
      80,    80,    80,   483,    80,   483,   183,   483,   184,   187,
     185,    73,   399,   142,   186,   389,   375,   464,   231,   236,
     467,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     472,   473,   474,    -1,   481,    -1,    -1,   484,   485,    -1,
      -1,    -1,    -1,    -1,   390,     1,   392,     3,     4,     5,
      -1,     7,    -1,     9,    10,   497,    -1,   499,   404,    -1,
      -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,   510,    -1,
     512,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    83,    -1,    -1,    -1,    -1,    -1,
      84,    85,    -1,    87,    88,    89,    90,    91,    92,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    -1,    87,    88,    89,    90,    91,
      92,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    -1,    83,    84,    -1,    -1,    87,    88,    89,
      90,    91,    92,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     1,     7,     3,     9,
      10,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      70,    -1,    72,    -1,    69,    -1,    71,    77,    73,    -1,
      75,    76,    77,    78,    79,    -1,    81,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    30,    92,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,     1,    -1,     3,     4,     5,     1,     7,
       3,     9,    10,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    92,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    70,    -1,    72,    -1,    69,    -1,    71,    77,
      73,    -1,    75,    76,    77,    78,    79,    -1,    81,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    30,    92,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      92,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    87,    88,    89,    90,    91,    92,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     1,     7,     3,     9,    10,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    70,    -1,    72,
      -1,    69,    -1,    71,    77,    73,    -1,    75,    -1,    77,
      78,    79,    -1,    -1,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    30,    92,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    92,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    34,    70,    -1,
      72,    38,    39,    40,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      34,    -1,    80,    -1,    38,    39,    40,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    34,    -1,    80,    -1,    38,    39,    40,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    34,    -1,    -1,    -1,    38,    39,    40,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    81,
      -1,    83,    84,    -1,    -1,    87,    88,    89,    90,    91,
      92,    38,    39,    40,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,     1,
      77,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    89,    90,    91,    92,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,
      90,    91,    92,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      70,    -1,    72,    -1,    -1,    -1,     1,    77,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    70,     7,    72,     9,    10,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,     1,    77,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    87,    88,    89,    90,    91,    92,    70,    -1,
      72,    -1,    -1,    -1,     1,    77,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,     1,    77,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    87,    88,    89,    90,    91,    92,    -1,
      70,    -1,    72,    -1,    -1,    -1,     1,    77,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    87,    88,    89,
      90,    91,    92,    70,    -1,    72,    -1,    -1,    -1,     1,
      77,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,     1,    77,     3,
       4,     5,    -1,     7,    -1,     9,    10,    -1,    87,    88,
      89,    90,    91,    92,    -1,    70,    -1,    72,    -1,    -1,
      -1,     1,    77,     3,     4,     5,    -1,     7,    -1,     9,
      10,    -1,    87,    88,    89,    90,    91,    92,    70,    -1,
      72,    -1,    -1,    -1,     1,    77,     3,     4,     5,    -1,
       7,    -1,     9,    10,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,     1,    77,     3,     4,     5,    -1,     7,    -1,
       9,    10,    -1,    87,    88,    89,    90,    91,    92,    -1,
      70,    -1,    72,    -1,    -1,    -1,     1,    77,     3,     4,
       5,    -1,     7,    -1,     9,    10,    -1,    87,    88,    89,
      90,    91,    92,    70,    -1,    72,    -1,    -1,    -1,     1,
      77,     3,     4,     5,    -1,     7,    -1,     9,    10,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,     3,     4,     5,    77,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    70,    -1,    72,    -1,     3,
       4,     5,    77,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    70,    -1,
      72,    -1,     3,     4,     5,    77,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    70,    -1,    72,    -1,     3,     4,     5,    77,
       7,    -1,     9,    10,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,     1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    69,    -1,    71,    -1,
      73,    -1,    75,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    85,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    71,    -1,    -1,    74,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   129,   130,   133,   134,   135,   136,   142,   145,
     146,   147,   148,   165,   175,   176,   177,    76,     3,    84,
      77,    77,    77,     1,     3,    76,    77,    92,   131,   132,
     149,   150,   151,     1,   130,   130,     3,    84,   130,   130,
     130,     0,   176,    84,     3,   143,   144,     1,     3,     4,
       5,     7,     9,    10,    70,    72,    77,    87,    88,    89,
      90,    91,    92,   105,   106,   109,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     128,   134,   139,   146,   157,   157,   128,    76,    81,     1,
     149,    71,   146,   151,   152,     1,    76,    81,     1,    83,
      84,   111,   124,   125,   129,   130,   160,   168,   178,    77,
      79,   150,    84,   137,   138,   139,   165,   143,    83,    81,
      85,   100,    77,   111,    77,   111,   111,    77,    77,     1,
     125,   127,   157,     8,     9,    10,    77,    79,    86,   113,
      92,    93,    95,    89,    90,    11,    12,    13,    14,    96,
      97,    15,    16,    87,    98,    99,    17,    18,   100,    78,
     139,    77,    79,   151,   158,   159,   139,    78,    78,    81,
     132,   149,    78,   146,   151,   132,     1,    84,   160,     3,
      57,    58,    59,    61,    62,    63,    64,    65,    66,    67,
      68,    76,    79,    85,    86,   125,   127,   129,   160,   161,
     162,   163,   164,   166,   167,   168,   169,   170,   171,   172,
     173,   174,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    83,   126,    84,   129,   168,     3,    78,   130,
     153,   154,   155,   156,    34,    80,    92,   125,   152,   137,
      85,   138,    76,    82,   140,   141,   149,    81,    85,     4,
      85,   144,   127,   157,   157,   157,     1,   125,    78,     1,
      78,    81,    78,     3,    78,   110,   125,   127,     3,   113,
     113,   113,     1,   114,     1,   114,     1,   115,     1,   115,
       1,   116,     1,   116,     1,   116,     1,   116,     1,   117,
       1,   117,     1,   118,     1,   119,     1,   120,     1,   121,
       1,   122,   127,    78,   153,   158,    34,    80,    92,   125,
     152,   159,    77,    79,     5,    82,   128,    82,    77,    77,
      77,   166,    77,     3,    76,    76,    76,   127,   128,     3,
       1,    76,    81,    85,   160,    83,   164,    85,   170,   125,
      77,   149,   151,   158,    78,    81,    78,    81,   125,   152,
      80,    80,    34,    80,    92,   125,    85,   128,    76,    81,
      82,    85,    82,    78,    78,    78,    78,    81,   125,    84,
     113,    78,    81,    80,    82,    78,    78,   125,   152,    80,
      80,    34,    80,   125,    78,   153,    34,    80,    92,   125,
     152,    78,   166,    82,   166,   127,   127,   127,    62,   129,
     171,    76,    76,    80,    85,   160,   162,     1,    56,   155,
       3,    80,   125,   125,    80,    80,   141,   128,   124,    58,
     107,   108,   157,   161,     1,   125,     1,   124,    80,   125,
     125,    80,    78,   125,   152,    80,    80,    34,    80,   125,
      76,   166,    78,    78,    78,    77,   171,   171,   160,    80,
      80,    82,    78,    81,    82,    81,    85,    80,    80,    80,
     125,   125,    80,   166,   166,   166,   127,    78,   127,    78,
     127,   125,   108,   125,    85,    80,    80,    60,    78,   166,
      78,   166,    78,   166,    76,   166,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   105,   105,   105,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   118,
     118,   119,   119,   119,   120,   120,   120,   121,   121,   121,
     122,   122,   122,   123,   123,   123,   124,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   127,   128,   129,   129,   129,   129,
     129,   129,   129,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   133,   133,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   136,   136,   137,   137,
     138,   138,   138,   139,   139,   139,   139,   140,   140,   141,
     141,   141,   142,   142,   142,   142,   142,   143,   143,   144,
     144,   145,   146,   146,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   158,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   160,   160,
     160,   161,   161,   161,   161,   162,   163,   163,   164,   164,
     165,   166,   166,   166,   166,   166,   166,   167,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   171,   172,
     172,   172,   173,   173,   173,   173,   173,   173,   174,   174,
     174,   174,   174,   175,   175,   176,   176,   177,   177,   178,
     178
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     3,     1,     6,
       4,     1,     3,     3,     3,     1,     4,     3,     4,     3,
       3,     2,     2,     6,     7,     1,     3,     3,     1,     2,
       2,     2,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     5,     5,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     3,     3,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     3,     3,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     2,     1,     1,     1,     2,
       2,     3,     1,     2,     1,     2,     1,     1,     3,     2,
       3,     1,     4,     5,     5,     6,     2,     1,     3,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     4,     4,
       2,     1,     1,     1,     3,     3,     4,     6,     5,     5,
       6,     5,     4,     4,     4,     3,     4,     3,     2,     2,
       1,     1,     2,     3,     1,     1,     3,     2,     2,     1,
       1,     3,     2,     1,     2,     1,     1,     3,     2,     3,
       5,     4,     5,     4,     3,     3,     3,     4,     6,     5,
       5,     6,     4,     4,     2,     3,     3,     4,     3,     4,
       1,     2,     1,     4,     3,     2,     1,     2,     3,     2,
       7,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     2,     1,     1,     1,     2,     2,     7,
       5,     5,     5,     7,     6,     7,     6,     7,     3,     2,
       2,     2,     3,     1,     2,     1,     1,     4,     3,     1,
       2
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
        case 6:
#line 39 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Caracter ')' faltante\n\n", yylineno); yyerrok;}
#line 2277 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 40 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida\n\n", yylineno); yyerrok;}
#line 2283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 46 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida antes de '%s'\n\n", yylineno, yytext); yyerrok;}
#line 2289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 75 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida despues de ','\n\n", yylineno); yyerrok; }
#line 2295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 112 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 114 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 121 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 122 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 129 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 130 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 133 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 134 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 141 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2349 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 142 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 148 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 154 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 160 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 166 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 172 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 178 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: %s\n\n", yylineno, yytext); yyerrok; }
#line 2391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 179 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: '?'\n\n", yylineno, yytext); yyerrok; }
#line 2397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 212 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 214 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 215 "parser.y" /* yacc.c:1646  */
    { yyerrok;}
#line 2415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 216 "parser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("Linea: %i. Tipo de variable invalida.\n\n", yylineno); yyclearin; }
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 237 "parser.y" /* yacc.c:1646  */
    { printf("Expresion invalida antes de ','\n\n"); }
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 242 "parser.y" /* yacc.c:1646  */
    { fprintf(stderr, "Linea: %i. Expresion inesperada antes de '%s'.\n\n", yylineno, yytext); yyerrok; }
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 243 "parser.y" /* yacc.c:1646  */
    { yyerror(""); fprintf(stderr, "Linea: %i. Falta signo '='.\n\n", yylineno, yytext); YYERROR; }
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 361 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Nombre de variable invalido: %s.\n\n", yylineno, yytext); }
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 510 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Falta ';'\n\n", yylineno); yyerrok; }
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2461 "parser.tab.c" /* yacc.c:1646  */
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
#line 556 "parser.y" /* yacc.c:1906  */

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
