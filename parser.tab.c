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
#line 37 "parser.y" /* yacc.c:355  */

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
#define YYLAST   3277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  310
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  531

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
       0,    45,    49,    53,    57,    60,    61,    61,    62,    63,
      64,    65,    66,    70,    71,    75,    76,    80,    81,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    98,
      99,   100,   104,   105,   106,   107,   108,   109,   110,   114,
     115,   116,   117,   118,   119,   123,   124,   128,   129,   130,
     131,   135,   136,   137,   138,   139,   143,   144,   145,   146,
     147,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     163,   164,   165,   166,   167,   171,   172,   173,   177,   178,
     179,   183,   184,   185,   189,   190,   191,   195,   196,   197,
     201,   202,   203,   204,   208,   209,   209,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   227,   228,
     232,   237,   238,   239,   240,   241,   246,   247,   248,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     267,   268,   269,   273,   274,   275,   276,   280,   281,   282,
     283,   284,   285,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   308,
     309,   310,   314,   315,   319,   320,   324,   325,   326,   330,
     331,   332,   333,   337,   338,   342,   343,   344,   348,   349,
     350,   351,   352,   356,   357,   361,   362,   366,   370,   371,
     372,   373,   377,   378,   382,   383,   387,   388,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   410,   411,   412,   413,   417,   418,   423,
     424,   428,   429,   433,   434,   435,   440,   441,   445,   446,
     450,   451,   452,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   480,   481,   482,   486,   487,   488,
     489,   493,   497,   498,   502,   503,   507,   511,   512,   513,
     514,   515,   516,   520,   521,   522,   526,   527,   531,   532,
     536,   537,   541,   542,   543,   544,   548,   548,   548,   549,
     553,   554,   558,   559,   560,   561,   562,   563,   567,   568,
     569,   570,   571,   575,   576,   580,   581,   585,   586,   590,
     591
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
  "SEPARATOR", "QOUTE", "ID", "$accept", "saveID", "saveType",
  "save_pointer", "primary_expression", "$@1", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "$@2",
  "assignment_operator", "expression", "constant_expression",
  "declaration2", "declaration", "declaration_specifiers",
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

#define YYPACT_NINF -358

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-358)))

#define YYTABLE_NINF -257

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2948,   -40,    -8,  3002,  -358,  -358,  2894,  -358,  -358,  -358,
    2300,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,   -23,    25,    43,  -358,
    -358,    97,  1061,  1139,  -358,   -16,  -358,  -358,  1217,  1295,
    1373,  -358,  -358,   -24,  -358,  2720,  2743,  2743,   110,   119,
    1451,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,   215,
    -358,    84,  -358,  2766,  -358,    62,   125,   314,    19,   235,
     175,   166,   173,   257,    26,  -358,   200,   196,   222,  1522,
    3207,   176,  -358,    27,   225,   227,  -358,    69,  -358,   894,
      59,    29,  -358,  -358,  3136,   252,  -358,  -358,  -358,  2300,
    1451,  -358,  1451,  -358,  -358,  3207,  2323,   -14,   185,  -358,
    -358,    78,  3207,     8,  3207,   271,  -358,   251,  -358,  -358,
    2044,  2300,   255,  -358,  2766,  2766,  2766,  2346,  2369,  2392,
    2415,  2438,  2461,  2484,  2507,  2530,  2553,  2576,  2599,  2622,
    2645,  2668,  2300,   351,   277,    98,  -358,   196,   283,   289,
     290,  -358,    27,  -358,   291,  -358,   178,  -358,  -358,    27,
     -48,  2053,   621,  3002,  -358,  -358,  -358,  -358,  2839,   -41,
     377,    59,  3040,  -358,    47,  -358,  3136,   246,   292,   293,
     295,    -5,   294,  -358,   707,  -358,  -358,  2300,  -358,   169,
    1650,   228,  -358,   234,  -358,   492,  -358,  -358,   161,  -358,
     253,  -358,  -358,  -358,  -358,  -358,    62,  -358,    62,  -358,
     125,  -358,   125,  -358,   314,  -358,   314,  -358,   314,  -358,
     314,  -358,    19,  -358,    19,  -358,   235,  -358,   175,  -358,
     166,  -358,   173,  -358,   257,   258,   296,   372,   -34,  -358,
     100,  -358,  -358,  -358,  -358,   523,  -358,  -358,  -358,  -358,
     178,  -358,   -24,  2016,  -358,   -26,  2300,   298,   301,   306,
     308,   483,   311,   285,   315,   316,  2108,  -358,  2300,  -358,
     286,   312,   310,    96,  -358,  -358,   112,  2145,   177,  -358,
    -358,  -358,  -358,   712,  -358,  -358,  -358,  -358,  -358,    97,
     803,  -358,  -358,  -358,  -358,  3002,   318,   319,  -358,   163,
    1901,  -358,   321,   322,  1673,  -358,  -358,  -358,  2300,    -4,
    -358,   317,  3088,  2300,   320,   320,  -358,  -358,  3173,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    2300,  -358,  -358,   325,   328,  1901,  -358,   327,   332,  1764,
     234,   330,  1787,  2016,  -358,  -358,  2691,  -358,  2714,   337,
    -358,  -358,  -358,    23,  -358,  -358,  -358,  -358,   340,   483,
    2300,  2300,  2300,   -21,   352,   985,   343,  -358,  -358,  -358,
      41,   344,  -358,   483,  -358,  -358,  1924,  -358,  -358,  -358,
    -358,  -358,  -358,    33,  -358,   367,  -358,   323,   345,  1901,
    -358,  -358,  2300,  -358,   348,   353,  -358,  -358,    36,  2300,
    -358,  -358,   349,   195,  -358,   350,  -358,  -358,  -358,   354,
    1901,  -358,  -358,  2300,  -358,   355,  -358,   361,  1901,  -358,
     360,   362,  1878,   114,   -24,  -358,   -24,  -358,  -358,  -358,
     483,  -358,   216,   217,   221,  -358,   364,  2154,  2154,  -358,
    -358,  -358,  -358,  -358,  -358,  2145,  1595,  -358,    88,  -358,
    -358,  -358,  -358,  -358,   363,   366,  -358,  -358,  -358,  -358,
    2300,  -358,  3173,  2300,  -358,   370,   371,  -358,  -358,   375,
    1901,  -358,  -358,  2300,  -358,   376,  1952,  -358,  -358,  -358,
     483,   483,  2300,  2184,  2209,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,   378,   380,  -358,  -358,   483,  -358,
    -358,   223,   483,   239,   483,   243,  -358,  -358,  -358,   368,
    -358,   483,  -358,   483,   392,  -358,  -358,  -358,   483,  -358,
    -358
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   306,   118,     0,   303,   305,   117,
       0,   129,   158,   137,   138,   139,   141,   142,   192,   188,
     189,   190,   152,   144,   145,   146,   147,   150,   151,   148,
     149,   143,   153,   154,   162,   163,     0,     0,   191,   193,
     140,     0,     0,     0,   156,     0,   157,   155,     0,     0,
       0,     1,   304,     0,     8,     6,     6,     6,     0,     0,
       0,    39,    44,    42,    41,    43,    40,     5,    19,     0,
      12,    32,    45,     6,    47,    51,    56,    61,    70,    75,
      78,    81,    84,    87,    90,   110,     0,     0,   182,     0,
       0,   112,   111,     0,     0,     0,   116,     0,   130,     0,
     197,     0,   119,   121,     0,   161,   123,   125,   127,     0,
       0,    36,     0,    33,    34,     0,     0,     0,    45,    94,
     108,     0,   170,   229,   172,     0,     7,     0,    25,    26,
       0,     0,     0,    35,     6,     6,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,     0,   183,     0,     0,     0,
       0,   115,     0,   199,     0,   198,   216,   114,   113,     0,
       0,     0,     0,     0,   256,   309,   135,   308,     0,     3,
       0,   196,     0,   164,     0,   168,     0,     0,     0,     0,
       0,     0,     0,    11,     0,    10,     9,     0,   169,     3,
       0,   231,   228,   232,   171,     6,    24,    21,     0,    29,
       0,    23,    48,    49,    50,    55,    54,    53,    52,    59,
      57,    60,    58,    68,    66,    69,    67,    64,    62,    65,
      63,    73,    71,    74,    72,    77,    76,    80,    79,    83,
      82,    86,    85,    89,    88,     0,     0,     0,     0,   178,
       0,   195,   194,   187,   132,     0,   200,   191,   217,   215,
     214,   131,   134,     0,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   282,     0,   276,
       0,     5,   108,     0,   280,   258,     0,     0,     0,   262,
     281,   267,   268,     0,   278,   269,   270,   271,   272,     0,
       0,   310,   307,   211,   226,     0,     0,   220,   221,     0,
       0,   201,    40,     0,     0,   159,   165,   166,     0,     0,
     173,   177,     0,     0,    37,     0,    38,    14,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    97,
       0,   109,   250,     0,     0,     0,   234,    40,     0,     0,
     230,     3,     0,     0,    46,    22,     0,    20,     0,     0,
     186,   179,   184,     0,   180,   218,   213,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   299,   300,   301,
       0,     0,   265,     0,   284,   283,     0,   254,   257,   261,
     263,   277,   279,     0,   210,     3,   212,     0,     0,     0,
     202,   209,     0,   208,    40,     0,   175,   167,     0,     0,
     160,    93,     0,     0,    15,     0,    96,   251,   233,     0,
       0,   235,   241,     0,   240,     0,   252,     0,     0,   242,
      40,     0,     0,     0,    31,    30,    92,    91,   266,   181,
       0,   275,     0,     0,     0,   285,     0,     0,     0,   298,
     302,   264,   273,   255,   260,     0,     0,   223,     0,   224,
     219,   222,   227,   204,     0,     0,   205,   207,   174,   176,
       0,    13,     0,     0,   237,     0,     0,   239,   253,     0,
       0,   243,   249,     0,   248,     0,     0,    27,   274,   286,
       0,     0,     0,     0,     0,   259,   203,   206,    18,    16,
      17,   236,   238,   245,     0,     0,   246,    28,     0,   289,
     292,     0,     0,     0,     0,     0,   244,   247,   287,     0,
     296,     0,   294,     0,   291,   293,   297,   295,     0,   288,
     290
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -358,  -358,     2,  -358,  -358,  -358,  -358,  -358,   -12,  -358,
    -358,    86,  -358,   -53,   203,   204,   145,   205,   324,   313,
     329,   326,   331,  -358,    -1,   165,  -358,  -358,   -57,   -79,
    -358,     1,   -27,  -358,     5,  -358,    16,  -358,  -358,   276,
    -165,   -80,  -358,    61,  -358,   333,  -223,  -358,    -3,  -358,
    -358,   -37,   -95,  -109,  -162,  -166,  -358,    75,  -358,   219,
    -111,  -190,   -94,   120,  -357,  -358,   184,   -78,  -238,  -358,
     -58,  -358,   181,  -314,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,   475,  -358,  -358
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    94,   173,    95,    68,    69,    70,   413,   414,    71,
     208,   118,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   119,   120,   194,   340,   283,    86,
      96,   284,    41,    97,    98,    42,   122,    44,    45,   182,
     183,   123,   319,   320,    46,   155,   156,    47,   124,    49,
      50,   255,   100,   101,   260,   343,   307,   308,   309,   415,
     344,   203,   285,   286,   287,   288,   289,     5,   290,   291,
     292,   293,   294,   295,   296,   508,   524,   529,   297,   298,
       6,     7,     8,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,     4,     3,   121,    99,   176,   181,     4,     3,    85,
     158,   350,   202,   306,   201,   102,   103,   316,   314,    43,
     133,   106,   107,   108,   184,   362,   185,     9,   163,   455,
     163,   141,   142,   374,   163,     9,   303,   163,   349,    48,
      48,   177,   198,   151,   204,    48,    48,    48,   163,   367,
     361,   109,   187,   121,   445,   121,   164,   259,    43,    43,
      87,   448,   304,   193,    43,    43,    43,   104,    10,   154,
     167,   407,   327,   109,   210,   109,   408,   264,   109,   195,
      88,   212,   213,   214,   199,   109,   200,   105,    85,   163,
     201,   127,   128,   129,   109,   245,    72,   384,    91,    -4,
     175,    89,   184,    93,   185,    93,   184,   439,   185,   456,
    -225,   200,    93,  -225,   143,   144,   450,   318,    -4,    90,
     302,   197,   317,    93,    -4,   152,   154,    -4,   318,   455,
      -2,   441,    -2,   493,   494,   179,    -2,   180,    -4,    -2,
     362,   111,   113,   114,   168,   452,   299,   321,   399,   169,
      -2,   366,   354,   134,   135,   196,   136,   316,   197,    72,
     130,   176,   131,   258,   456,  -231,   200,   254,  -231,   132,
      48,   385,    92,    93,   261,    72,   197,   258,   248,   301,
     363,   305,   249,   420,   364,   427,   115,   368,    -4,    43,
     432,    -2,   386,   388,   486,   116,   387,   258,   487,   381,
      -2,   305,   488,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   137,   138,    19,    20,    21,   126,   380,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,   355,   406,
     396,   356,   184,   397,   185,   199,   342,   200,   257,   145,
     146,   161,   509,   510,  -199,   278,   162,   365,  -199,   389,
      -4,   147,   280,   148,   174,    85,   480,   -95,   350,    -4,
     518,   149,   471,   150,   520,   472,   522,    85,   393,   125,
     153,   192,   459,   526,   458,   527,   224,   226,   228,   230,
     530,    72,   454,   489,   490,   209,   197,   197,   491,   154,
     519,   197,    48,   197,   199,   157,   200,   258,   159,   160,
     351,   365,   352,   442,   443,   444,   521,    85,   166,   197,
     523,    43,   411,   197,   139,   140,   197,   323,   165,   188,
     469,   189,   357,   197,   190,   186,   174,   282,   197,   358,
     216,   218,   258,   220,   222,   313,   365,   458,   205,   258,
     232,   234,    72,   305,   206,   246,   457,   437,   211,   247,
     251,   495,   341,   181,    72,   348,   252,   253,   256,   324,
     325,   321,   326,   359,   328,   360,   447,   370,    53,   369,
      -6,    54,   371,    55,   372,    56,    57,   375,   376,   382,
     377,   378,   454,   383,  -256,   394,   365,   305,   409,   395,
     400,   401,   417,   353,    72,   418,   421,   426,    85,    72,
     310,   422,   438,   446,    19,    20,    21,   365,   449,   164,
     174,   440,   460,   451,   463,   258,   462,   466,   174,   365,
     470,   473,   467,   474,   477,   511,   513,   515,   478,   481,
     492,   482,   496,   525,    72,   497,    58,   257,    59,   501,
     502,   528,   174,    60,   503,   506,   311,   516,   305,   517,
     499,   238,   322,    61,    62,    63,    64,    65,   312,   468,
     461,   236,   390,   433,   392,   398,   242,   365,   240,   405,
      67,    52,   244,     0,   373,     0,    -6,    54,     0,    55,
     250,    56,    57,     0,     0,    72,    54,     0,    55,     0,
      56,    57,     0,     0,     0,   416,     0,     0,     0,     0,
     419,     0,     0,     0,   425,     0,     0,   431,   174,     0,
       0,   435,     0,     0,    53,     0,    -6,    54,     0,    55,
       0,    56,    57,     0,     0,     0,     0,     0,     0,   266,
     267,   268,     0,   269,   270,   271,   272,   273,   274,   275,
     276,   174,    58,     0,    59,     0,     0,     0,   277,    60,
       0,    58,     0,    59,   464,     0,   300,   465,    60,    61,
      62,    63,    64,    65,    66,   353,     0,     0,    61,    62,
      63,    64,    65,    66,     0,   475,   281,     0,   476,     0,
       0,     0,    58,   479,    59,    67,     0,   485,  -136,    60,
       0,     0,     0,  -136,     0,   171,   263,     0,     0,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
     174,     0,   265,     0,    -6,    54,    67,    55,     0,    56,
      57,     0,     0,     0,     0,   498,     0,     0,   500,     0,
       0,     0,     0,     0,     0,   504,     0,     0,   505,     0,
      -3,   174,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,     0,   266,   267,   268,
       0,   269,   270,   271,   272,   273,   274,   275,   276,    -3,
      58,    -3,    59,    -3,     2,    -3,   277,    60,     0,   278,
       0,     0,     0,     0,   172,   279,   280,    61,    62,    63,
      64,    65,    66,   265,     0,    -6,    54,     0,    55,     0,
      56,    57,     0,     0,   281,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,     0,     0,     0,     0,     0,
       0,    -3,     0,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,   266,   267,
     268,     0,   269,   270,   271,   272,   273,   274,   275,   276,
      -3,    58,    -3,    59,    -3,     2,    -3,   277,    60,   339,
       0,     0,     0,     0,     0,   300,   391,     0,    61,    62,
      63,    64,    65,    66,   265,     0,    -6,    54,     0,    55,
       0,    56,    57,     0,     0,   281,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -3,     0,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,   266,
     267,   268,     0,   269,   270,   271,   272,   273,   274,   275,
     276,    -3,    58,    -3,    59,    -3,     2,    -3,   277,    60,
       0,     0,     0,     0,     0,     0,   300,   279,     0,    61,
      62,    63,    64,    65,    66,   170,     0,    -6,    54,     0,
      55,     0,    56,    57,     0,     0,   281,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -3,     0,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -3,    58,    -3,    59,    -3,     2,    -3,  -136,
      60,     0,     0,     0,  -136,     0,   171,   172,     0,     0,
      61,    62,    63,    64,    65,    66,   265,     0,    -6,    54,
       0,    55,     0,    56,    57,     0,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -3,     0,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -3,    58,    -3,    59,    -3,     2,    -3,
     277,    60,    11,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,    38,     0,    39,     0,    40,  -120,  -120,  -120,  -120,
      11,  -120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -120,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,    38,
       0,    39,     0,    40,  -122,  -122,  -122,  -122,    11,  -122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -122,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,    38,     0,    39,
       0,    40,  -124,  -124,  -124,  -124,    11,  -124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -124,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,    38,     0,    39,     0,    40,
    -126,  -126,  -126,  -126,    11,  -126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -126,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    38,     0,    39,     0,    40,  -128,  -128,
    -128,  -128,   117,  -128,    -6,    54,     0,    55,     0,    56,
      57,     0,     0,     0,  -128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -128,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    38,    59,    53,     0,    -6,    54,    60,    55,     0,
      56,    57,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,     0,    67,     0,     0,     0,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,    38,    59,     0,     0,   163,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -3,    67,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
       0,    53,     0,    -6,    54,     0,    55,     0,    56,    57,
       0,     0,     0,    -3,     0,    -3,     0,    -3,     0,    -3,
       0,   456,   342,   200,    53,     0,    -6,    54,     0,    55,
       0,    56,    57,   345,     0,     0,    -4,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    -2,     0,
       0,     0,     0,     0,     0,     0,   402,     0,     0,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,    58,
     257,    59,     0,     0,     0,     0,    60,     0,     0,   346,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,   347,    58,   257,    59,     0,     0,     0,     0,    60,
       0,     0,   403,    67,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,   404,    53,     0,    -6,    54,     0,
      55,     0,    56,    57,     0,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
      -6,    54,     0,    55,     0,    56,    57,   423,     0,     0,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     428,     0,     0,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,    58,   257,    59,     0,     0,     0,     0,
      60,     0,     0,   424,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    58,   257,    59,     0,
       0,     0,     0,    60,     0,     0,   429,    67,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,   430,    53,
       0,    -6,    54,     0,    55,     0,    56,    57,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,    -6,    54,     0,    55,     0,    56,
      57,   483,     0,     0,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,    53,     0,    -6,    54,     0,
      55,     0,    56,    57,     0,     0,     0,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,    58,   257,    59,
       0,     0,     0,    53,    60,    -6,    54,   484,    55,     0,
      56,    57,     0,     0,    61,    62,    63,    64,    65,    66,
      58,   257,    59,     0,     0,     0,     0,    60,     0,     0,
       0,    67,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    58,     0,    59,     0,     0,     0,     0,
      60,     0,   278,     0,    67,     0,     0,   263,   453,   280,
      61,    62,    63,    64,    65,    66,     0,    53,     0,    -6,
      54,    58,    55,    59,    56,    57,     0,    67,    60,     0,
     278,     0,     0,     0,     0,   263,   507,   280,    61,    62,
      63,    64,    65,    66,     0,    53,     0,    -6,    54,     0,
      55,     0,    56,    57,   262,    67,    -6,    54,     0,    55,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,    59,     0,     0,
       0,     0,    60,     0,   278,     0,     0,     0,     0,   263,
       0,   280,    61,    62,    63,    64,    65,    66,     0,    53,
       0,    -6,    54,    58,    55,    59,    56,    57,     0,    67,
      60,   207,    58,     0,    59,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,   263,     0,     0,    61,
      62,    63,    64,    65,    66,     0,    53,    67,    -6,    54,
       0,    55,     0,    56,    57,   373,    67,    -6,    54,     0,
      55,     0,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,    59,
       0,     0,     0,   379,    60,    53,     0,    -6,    54,     0,
      55,     0,    56,    57,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    67,    -6,    54,    58,    55,    59,    56,    57,     0,
       0,    60,     0,    58,     0,    59,     0,     0,   263,   277,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
      61,    62,    63,    64,    65,    66,     0,     0,    67,     0,
       0,     0,     0,    58,     0,    59,     0,    67,     0,     0,
      60,   512,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,     0,     0,    58,     0,
      59,     0,     0,     0,     0,    60,   514,    67,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    53,     0,    -6,    54,     0,    55,     0,    56,    57,
       0,     0,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,    -6,    54,     0,    55,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,     0,    -6,
      54,     0,    55,     0,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
     217,    59,    -6,    54,     0,    55,    60,    56,    57,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    58,   219,    59,    -6,    54,     0,    55,    60,
      56,    57,     0,    67,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    58,   221,    59,    -6,    54,
       0,    55,    60,    56,    57,     0,    67,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    58,   223,
      59,    -6,    54,     0,    55,    60,    56,    57,     0,    67,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    58,   225,    59,    -6,    54,     0,    55,    60,    56,
      57,     0,    67,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    58,   227,    59,    -6,    54,     0,
      55,    60,    56,    57,     0,    67,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    58,   229,    59,
      -6,    54,     0,    55,    60,    56,    57,     0,    67,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      58,   231,    59,    -6,    54,     0,    55,    60,    56,    57,
       0,    67,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    58,   233,    59,    -6,    54,     0,    55,
      60,    56,    57,     0,    67,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    58,   235,    59,    -6,
      54,     0,    55,    60,    56,    57,     0,    67,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    58,
     237,    59,    -6,    54,     0,    55,    60,    56,    57,     0,
      67,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    58,   239,    59,    -6,    54,     0,    55,    60,
      56,    57,     0,    67,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    58,   241,    59,    -6,    54,
       0,    55,    60,    56,    57,     0,    67,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    58,   243,
      59,    -6,    54,     0,    55,    60,    56,    57,     0,    67,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    58,   434,    59,    -6,    54,     0,    55,    60,    56,
      57,     0,    67,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    58,   436,    59,    -6,    54,     0,
      55,    60,    56,    57,    54,    67,    55,     0,    56,    57,
       0,    61,    62,    63,    64,    65,    66,    58,     0,    59,
       0,     0,     0,     0,    60,     0,     0,    54,    67,    55,
       0,    56,    57,     0,    61,    62,    63,    64,    65,    66,
      58,     0,    59,     0,     0,     0,     0,    60,     0,     0,
      54,    67,    55,     0,    56,    57,     0,    61,    62,    63,
      64,    65,    66,    58,     0,    59,     0,     0,     0,    58,
      60,    59,     0,     0,    67,     0,   110,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    61,    62,    63,    64,
      65,    66,    58,     0,    59,     0,     0,    67,     0,   112,
       0,     0,     0,    67,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    58,     0,    59,     0,     0,
       1,     0,    60,     0,     0,     0,    67,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -3,    67,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    51,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -3,     0,    -3,
       0,    -3,     2,    -3,     0,     0,     0,     0,     0,     0,
       0,     0,   300,    -3,     0,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -3,     0,    -3,     0,    -3,     2,    -3,     0,
       0,     0,     0,     0,     0,     0,     0,    -3,     0,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    -3,     0,    -3,     0,
      -3,     2,    -3,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      37,     0,    38,     0,    39,     0,    40,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     2,     0,     0,     0,    12,     0,     0,
       0,     0,     0,     0,   315,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     2,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,   410,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,    38,     0,     0,     2,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
     412,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    38,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38
};

static const yytype_int16 yycheck[] =
{
       3,     0,     0,    60,    41,    99,   101,     6,     6,    10,
      89,   201,   123,   179,   123,    42,    43,   182,   180,     3,
      73,    48,    49,    50,   104,   248,   104,    75,     1,   386,
       1,    12,    13,   271,     1,    75,    77,     1,   200,    42,
      43,    99,   122,    17,   124,    48,    49,    50,     1,    75,
      84,    99,   109,   110,    75,   112,    93,   166,    42,    43,
      83,   375,   103,    77,    48,    49,    50,    83,    76,   103,
       1,    75,    77,    99,   131,    99,    80,   171,    99,     1,
     103,   134,   135,   136,    76,    99,    78,   103,    89,     1,
     199,     7,     8,     9,    99,   152,    10,     1,     1,    91,
      99,    76,   182,    76,   182,    76,   186,    84,   186,    76,
      77,    78,    76,    80,    95,    96,    75,    81,    91,    76,
     178,    80,    75,    76,    91,    99,   103,    91,    81,   486,
     103,   369,   103,   447,   448,    76,   103,    78,    91,   103,
     363,    55,    56,    57,    75,   383,   173,   184,   310,    80,
     103,   260,   205,    91,    92,    77,    94,   322,    80,    73,
      76,   255,    78,   166,    76,    77,    78,   162,    80,    85,
     173,    75,    75,    76,   169,    89,    80,   180,    80,   178,
      80,   179,    84,   345,    84,   351,    76,   266,    91,   173,
     352,   103,    80,   287,    80,    76,    84,   200,    84,   278,
     103,   199,   440,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    88,    89,    37,    38,    39,     3,   276,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    77,   318,
      77,    80,   322,    80,   322,    76,    77,    78,    70,    14,
      15,    75,   490,   491,    78,    78,    80,   260,    82,    82,
      91,    86,    85,    97,    99,   266,   428,    82,   458,    91,
     508,    98,    77,    16,   512,    80,   514,   278,   305,    60,
      80,   116,   393,   521,   393,   523,   141,   142,   143,   144,
     528,   205,   386,    77,    77,   130,    80,    80,    77,   103,
      77,    80,   305,    80,    76,    83,    78,   310,    89,    90,
      76,   314,    78,   370,   371,   372,    77,   318,    91,    80,
      77,   305,   323,    80,    10,    11,    80,    81,   103,   110,
     409,   112,    79,    80,   115,    83,   171,   172,    80,    81,
     137,   138,   345,   139,   140,   180,   349,   456,    77,   352,
     145,   146,   266,   351,   103,     4,   393,   358,   103,    82,
      77,   455,   197,   458,   278,   200,    77,    77,    77,    77,
      77,   408,    77,    77,    80,     3,   375,    76,     1,    81,
       3,     4,    76,     6,    76,     8,     9,    76,   103,   103,
      75,    75,   486,    81,    84,    77,   399,   395,    81,    80,
      79,    79,    77,    83,   318,    77,    79,    77,   409,   323,
      33,    79,    75,    61,    37,    38,    39,   420,    75,   456,
     255,    81,    55,    79,    79,   428,   103,    79,   263,   432,
      81,    81,    79,    79,    79,   492,   493,   494,    77,    79,
      76,    79,    79,    75,   358,    79,    69,    70,    71,    79,
      79,    59,   287,    76,    79,    79,    79,    79,   456,    79,
     472,   148,   186,    86,    87,    88,    89,    90,    91,   408,
     395,   147,   288,   353,   293,   310,   150,   480,   149,   314,
     103,     6,   151,    -1,     1,    -1,     3,     4,    -1,     6,
     157,     8,     9,    -1,    -1,   409,     4,    -1,     6,    -1,
       8,     9,    -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,
     345,    -1,    -1,    -1,   349,    -1,    -1,   352,   353,    -1,
      -1,   356,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,   386,    69,    -1,    71,    -1,    -1,    -1,    75,    76,
      -1,    69,    -1,    71,   399,    -1,    83,   402,    76,    86,
      87,    88,    89,    90,    91,    83,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,   420,   103,    -1,   423,    -1,
      -1,    -1,    69,   428,    71,   103,    -1,   432,    75,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
     455,    -1,     1,    -1,     3,     4,   103,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,   470,    -1,    -1,   473,    -1,
      -1,    -1,    -1,    -1,    -1,   480,    -1,    -1,   483,    -1,
      29,   486,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    78,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,    -1,     6,    -1,
       8,     9,    -1,    -1,   103,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    82,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,    -1,     6,
      -1,     8,     9,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,    -1,
       6,    -1,     8,     9,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
      -1,     6,    -1,     8,     9,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70,    -1,    72,    -1,    74,    75,    76,    77,    78,
       1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      -1,    72,    -1,    74,    75,    76,    77,    78,     1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    72,
      -1,    74,    75,    76,    77,    78,     1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    70,    -1,    72,    -1,    74,
      75,    76,    77,    78,     1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      77,    78,     1,    80,     3,     4,    -1,     6,    -1,     8,
       9,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,     1,    -1,     3,     4,    76,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,   103,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    -1,     1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,   103,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,     8,     9,
      -1,    -1,    -1,    68,    -1,    70,    -1,    72,    -1,    74,
      -1,    76,    77,    78,     1,    -1,     3,     4,    -1,     6,
      -1,     8,     9,    33,    -1,    -1,    91,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    69,    70,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    79,   103,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,    -1,
       6,    -1,     8,     9,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,     6,    -1,     8,     9,    33,    -1,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    69,    70,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    79,   103,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,    -1,     6,    -1,     8,     9,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,     6,    -1,     8,
       9,    33,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    -1,    -1,     1,    76,     3,     4,    79,     6,    -1,
       8,     9,    -1,    -1,    86,    87,    88,    89,    90,    91,
      69,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    69,    -1,    71,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,   103,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,     1,    -1,     3,
       4,    69,     6,    71,     8,     9,    -1,   103,    76,    -1,
      78,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,     1,    -1,     3,     4,    -1,
       6,    -1,     8,     9,     1,   103,     3,     4,    -1,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,     1,
      -1,     3,     4,    69,     6,    71,     8,     9,    -1,   103,
      76,    77,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,
      86,    87,    88,    89,    90,    91,    83,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,     1,   103,     3,     4,
      -1,     6,    -1,     8,     9,     1,   103,     3,     4,    -1,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    -1,    -1,    75,    76,     1,    -1,     3,     4,    -1,
       6,    -1,     8,     9,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   103,     3,     4,    69,     6,    71,     8,     9,    -1,
      -1,    76,    -1,    69,    -1,    71,    -1,    -1,    83,    75,
      76,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,   103,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    69,    -1,
      71,    -1,    -1,    -1,    -1,    76,    77,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,    -1,     6,    -1,     8,     9,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,    -1,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
       1,    71,     3,     4,    -1,     6,    76,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    69,     1,    71,     3,     4,    -1,     6,    76,
       8,     9,    -1,   103,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    69,     1,    71,     3,     4,
      -1,     6,    76,     8,     9,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    69,     1,
      71,     3,     4,    -1,     6,    76,     8,     9,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    69,     1,    71,     3,     4,    -1,     6,    76,     8,
       9,    -1,   103,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    69,     1,    71,     3,     4,    -1,
       6,    76,     8,     9,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    69,     1,    71,
       3,     4,    -1,     6,    76,     8,     9,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      69,     1,    71,     3,     4,    -1,     6,    76,     8,     9,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    69,     1,    71,     3,     4,    -1,     6,
      76,     8,     9,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    69,     1,    71,     3,
       4,    -1,     6,    76,     8,     9,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    69,
       1,    71,     3,     4,    -1,     6,    76,     8,     9,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    69,     1,    71,     3,     4,    -1,     6,    76,
       8,     9,    -1,   103,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    69,     1,    71,     3,     4,
      -1,     6,    76,     8,     9,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    69,     1,
      71,     3,     4,    -1,     6,    76,     8,     9,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    69,     1,    71,     3,     4,    -1,     6,    76,     8,
       9,    -1,   103,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    69,     1,    71,     3,     4,    -1,
       6,    76,     8,     9,     4,   103,     6,    -1,     8,     9,
      -1,    86,    87,    88,    89,    90,    91,    69,    -1,    71,
      -1,    -1,    -1,    -1,    76,    -1,    -1,     4,   103,     6,
      -1,     8,     9,    -1,    86,    87,    88,    89,    90,    91,
      69,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
       4,   103,     6,    -1,     8,     9,    -1,    86,    87,    88,
      89,    90,    91,    69,    -1,    71,    -1,    -1,    -1,    69,
      76,    71,    -1,    -1,   103,    -1,    76,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    86,    87,    88,    89,
      90,    91,    69,    -1,    71,    -1,    -1,   103,    -1,    76,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    69,    -1,    71,    -1,    -1,
       1,    -1,    76,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,   103,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      68,    -1,    70,    -1,    72,    -1,    74,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    70,    -1,    -1,    73,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    73,   106,   135,   171,   184,   185,   186,    75,
      76,     1,    29,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    68,    70,    72,
      74,   136,   139,   140,   141,   142,   148,   151,   152,   153,
     154,     0,   185,     1,     4,     6,     8,     9,    69,    71,
      76,    86,    87,    88,    89,    90,    91,   103,   108,   109,
     110,   113,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   133,    83,   103,    76,
      76,     1,    75,    76,   105,   107,   134,   137,   138,   155,
     156,   157,   136,   136,    83,   103,   136,   136,   136,    99,
      76,   115,    76,   115,   115,    76,    76,     1,   115,   128,
     129,   132,   140,   145,   152,   163,     3,     7,     8,     9,
      76,    78,    85,   117,    91,    92,    94,    88,    89,    10,
      11,    12,    13,    95,    96,    14,    15,    86,    97,    98,
      16,    17,    99,    80,   103,   149,   150,    83,   133,   163,
     163,    75,    80,     1,   155,   103,    91,     1,    75,    80,
       1,    82,    83,   106,   129,   135,   166,   174,   187,    76,
      78,   156,   143,   144,   145,   171,    83,   132,   163,   163,
     163,     1,   129,    77,   130,     1,    77,    80,   145,    76,
      78,   157,   164,   165,   145,    77,   103,    77,   114,   129,
     132,   103,   117,   117,   117,     1,   118,     1,   118,     1,
     119,     1,   119,     1,   120,     1,   120,     1,   120,     1,
     120,     1,   121,     1,   121,     1,   122,     1,   123,     1,
     124,     1,   125,     1,   126,   132,     4,    82,    80,    84,
     149,    77,    77,    77,   138,   155,    77,    70,   152,   157,
     158,   138,     1,    83,   166,     1,    56,    57,    58,    60,
      61,    62,    63,    64,    65,    66,    67,    75,    78,    84,
      85,   103,   129,   132,   135,   166,   167,   168,   169,   170,
     172,   173,   174,   175,   176,   177,   178,   182,   183,   136,
      83,   135,   174,    77,   103,   106,   159,   160,   161,   162,
      33,    79,    91,   129,   158,    84,   144,    75,    81,   146,
     147,   155,   143,    81,    77,    77,    77,    77,    80,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    82,
     131,   129,    77,   159,   164,    33,    79,    91,   129,   158,
     165,    76,    78,    83,   117,    77,    80,    79,    81,    77,
       3,    84,   150,    80,    84,   152,   157,    75,   133,    81,
      76,    76,    76,     1,   172,    76,   103,    75,    75,    75,
     132,   133,   103,    81,     1,    75,    80,    84,   166,    82,
     170,    84,   176,   136,    77,    80,    77,    80,   129,   158,
      79,    79,    33,    79,    91,   129,   133,    75,    80,    81,
      84,   128,    57,   111,   112,   163,   129,    77,    77,   129,
     158,    79,    79,    33,    79,   129,    77,   159,    33,    79,
      91,   129,   158,   167,     1,   129,     1,   128,    75,    84,
      81,   172,   132,   132,   132,    75,    61,   135,   177,    75,
      75,    79,   172,    84,   166,   168,    76,   155,   157,   164,
      55,   161,   103,    79,   129,   129,    79,    79,   147,   133,
      81,    77,    80,    81,    79,   129,   129,    79,    77,   129,
     158,    79,    79,    33,    79,   129,    80,    84,   172,    77,
      77,    77,    76,   177,   177,   166,    79,    79,   129,   112,
     129,    79,    79,    79,   129,   129,    79,    84,   179,   172,
     172,   132,    77,   132,    77,   132,    79,    79,   172,    77,
     172,    77,   172,    77,   180,    75,   172,   172,    59,   181,
     172
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   107,   108,   109,   108,   108,   108,
     108,   108,   108,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   120,   120,   120,   120,
     120,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     122,   122,   122,   122,   122,   123,   123,   123,   124,   124,
     124,   125,   125,   125,   126,   126,   126,   127,   127,   127,
     128,   128,   128,   128,   129,   130,   129,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   132,
     133,   134,   134,   134,   134,   134,   135,   135,   135,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   141,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   147,   148,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   152,   152,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   157,   157,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   161,   162,   162,   163,   163,
     164,   164,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   166,   166,   166,   167,   167,   167,
     167,   168,   169,   169,   170,   170,   171,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   177,   177,   179,   180,   178,   178,
     181,   181,   182,   182,   182,   182,   182,   182,   183,   183,
     183,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     1,     0,     2,     1,     3,
       3,     3,     1,     6,     4,     1,     3,     3,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     3,     1,     2,     2,     2,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     5,     5,     5,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     2,     2,     2,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     1,     1,     1,     2,     2,     3,     1,     2,
       1,     2,     1,     1,     3,     2,     3,     1,     4,     5,
       5,     6,     2,     1,     3,     1,     3,     4,     1,     1,
       1,     1,     1,     1,     4,     4,     2,     1,     2,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     4,     3,     3,     2,     1,     2,     3,
       1,     1,     3,     3,     3,     2,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     2,     2,     0,     0,     8,     5,
       2,     0,     5,     7,     6,     7,     6,     7,     3,     2,
       2,     2,     3,     1,     2,     1,     1,     5,     4,     1,
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
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("\t--ID: %s\n", yytext); saveIDAS(yytext);}
#line 2289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("\t--Type: %s\n", yytext); saveTypeAS(yytext);}
#line 2295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 57 "parser.y" /* yacc.c:1646  */
    {printf("\t--Pointer: %s\n", yytext); /*GetTop, which is a Type, add "*"" to it*/ savePointerAS();}
#line 2301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "parser.y" /* yacc.c:1646  */
    { printf("%s\n", (yyvsp[0].string));}
#line 2307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "parser.y" /* yacc.c:1646  */
    { process_literal(yytext); }
#line 2313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 64 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Caracter ')' faltante\n\n", yylineno); yyerrok;}
#line 2319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 65 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida\n\n", yylineno); yyerrok;}
#line 2325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 71 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida antes de '%s'\n\n", yylineno, yytext); yyerrok;}
#line 2331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 100 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida despues de ','\n\n", yylineno); yyerrok; }
#line 2337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 137 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 139 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2349 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 154 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 155 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 158 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 159 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 166 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 167 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 173 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 179 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 185 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 191 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 197 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de '%s'\n\n", yylineno, yytext); yyerrok; }
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 203 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: %s\n\n", yylineno, yytext); yyerrok; }
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 204 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion faltante antes de: '?'\n\n", yylineno, yytext); yyerrok; }
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 209 "parser.y" /* yacc.c:1646  */
    { printf("aqui entra\n"); }
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 238 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 240 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Se encontro '%s', cuando se esperaba ';'\n\n", yylineno, yytext);}
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 241 "parser.y" /* yacc.c:1646  */
    { yyerrok;}
#line 2463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 247 "parser.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("Linea: %i. Tipo de variable invalida.\n\n", yylineno); yyclearin; }
#line 2475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 269 "parser.y" /* yacc.c:1646  */
    { printf("Expresion invalida antes de ','\n\n"); }
#line 2481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 274 "parser.y" /* yacc.c:1646  */
    { fprintf(stderr, "Linea: %i. Expresion inesperada antes de '%s'.\n\n", yylineno, yytext); yyerrok; }
#line 2487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 275 "parser.y" /* yacc.c:1646  */
    { yyerror(""); fprintf(stderr, "Linea: %i. Falta signo '='.\n\n", yylineno, yytext); YYERROR; }
#line 2493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 393 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Nombre de variable invalido: %s.\n\n", yylineno, yytext); }
#line 2499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 543 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Falta ';'\n\n", yylineno); yyerrok; }
#line 2505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 544 "parser.y" /* yacc.c:1646  */
    { printf("Linea: %i. Expresion invalida.\n\n", yylineno); yyerrok; }
#line 2511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 548 "parser.y" /* yacc.c:1646  */
    { inicio_if(); }
#line 2517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 548 "parser.y" /* yacc.c:1646  */
    { inicio_else(); }
#line 2523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 548 "parser.y" /* yacc.c:1646  */
    { fin_if(); }
#line 2529 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2533 "parser.tab.c" /* yacc.c:1646  */
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
#line 594 "parser.y" /* yacc.c:1906  */

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

